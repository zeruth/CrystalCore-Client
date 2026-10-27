#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a40b70 */
uint F_00a40b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa40b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar5 = param_1;
  uVar1 = F_00ab24a0(param_1);
  if ((uVar1 == 0) || (param_1 == 0)) {
    return 6;
  }
  if (*(char *)(uVar1 + 0xbe) != '\0') {
    iVar6 = 10000;
    do {
      uVar8 = 0;
      iVar7 = param_1;
      pvVar2 = (undefined *)F_00a36f30(this,iVar6);
      uVar1 = F_00a3a8f0(pvVar2,iVar7,uVar8);
      if (uVar1 != 0) {
        return 0x1b;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x2717);
    iVar6 = 11000;
    do {
      uVar8 = 0;
      iVar7 = param_1;
      pvVar2 = (undefined *)F_00a36f30(this,iVar6);
      uVar1 = F_00a3a8f0(pvVar2,iVar7,uVar8);
      if (uVar1 != 0) {
        return 0x1b;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x2af9);
    pvVar2 = (undefined *)F_00a36f30(this,0x2ee2);
    uVar1 = F_00a3a8f0(pvVar2,param_1,uVar1);
    if (uVar1 != 0) {
      return 0x1b;
    }
  }
  param_1 = 0;
  iVar6 = 10000;
  do {
    uVar1 = F_00a3de00(this,iVar5,iVar6,param_3);
    param_1 = param_1 + uVar1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x2717);
  if ((iVar5 - 2U < 0x12) && (uVar1 = F_00ab24a0(iVar5), uVar1 != 0)) {
    iVar6 = *(int *)(uVar1 + 0x28);
    pvVar2 = (undefined *)F_00a36f30(this,0x2ee1);
    if ((pvVar2 != (undefined *)0x0) && (uVar1 = F_00a37da0(pvVar2,iVar5 + -2), uVar1 != 0)) {
      if (*(char *)(uVar1 + 6) == '\0') {
        return -(uint)(param_1 + (iVar6 - *(int *)(uVar1 + 0xc)) < param_2) & 0x18;
      }
      iVar5 = (int)*(short *)(uVar1 + 8);
      pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(uVar1 + 10));
      pvVar2 = (undefined *)F_00a37da0(pvVar2,iVar5);
      uVar4 = *(uint *)(uVar1 + 0xc);
      uVar3 = F_00a3a8a0(pvVar2);
      if (uVar3 < uVar4) {
        uVar4 = F_00a3a8a0(pvVar2);
        *(uint *)(uVar1 + 0xc) = uVar4;
      }
      return -(uint)(param_1 + (iVar6 - uVar4) < param_2) & 0x18;
    }
  }
  return -(uint)(param_1 < param_2) & 0x18;
}

/* ref: FUN_00a40d10 */
uint F_00a40d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa40d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint local_8;
  
  uVar2 = F_00ab24a0(param_1);
  if ((uVar2 == 0) || (param_1 == 0)) {
    return 6;
  }
  cVar1 = *(char *)(uVar2 + 0xbe);
  if (cVar1 != '\0') {
    iVar8 = 0;
    do {
      uVar9 = 0;
      iVar7 = param_1;
      pvVar3 = (undefined *)F_00a36f30(this,iVar8);
      uVar4 = F_00a3a8f0(pvVar3,iVar7,uVar9);
      if (uVar4 != 0) {
        return 0x1b;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    iVar8 = 1000;
    do {
      uVar9 = 0;
      iVar7 = param_1;
      pvVar3 = (undefined *)F_00a36f30(this,iVar8);
      uVar4 = F_00a3a8f0(pvVar3,iVar7,uVar9);
      if (uVar4 != 0) {
        return 0x1b;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x3e9);
  }
  iVar8 = 0;
  local_8 = 0;
  if (param_1 - 0x17U < 4) {
    uVar2 = F_00a3d8b0(this,param_1,0);
    return -(uint)(uVar2 < param_2) & 0x18;
  }
  do {
    uVar4 = F_00a3de00(this,param_1,iVar8,param_3);
    local_8 = local_8 + uVar4;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  if (0x11 < param_1 - 2U) goto LAB_00a40e70;
  uVar4 = F_00ab24a0(param_1);
  if (uVar4 == 0) {
LAB_00a40e6b: ;
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(uVar4 + 0x28);
    pvVar3 = (undefined *)F_00a36f30(this,0x7d1);
    if ((pvVar3 == (undefined *)0x0) || (uVar4 = F_00a37da0(pvVar3,param_1 + -2), uVar4 == 0))
    goto LAB_00a40e6b;
    if (*(char *)(uVar4 + 6) == '\0') {
      iVar8 = iVar8 - *(int *)(uVar4 + 0xc);
    }
    else {
      iVar7 = (int)*(short *)(uVar4 + 8);
      pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(uVar4 + 10));
      pvVar3 = (undefined *)F_00a37da0(pvVar3,iVar7);
      uVar6 = *(uint *)(uVar4 + 0xc);
      uVar5 = F_00a3a8a0(pvVar3);
      if (uVar5 < uVar6) {
        uVar6 = F_00a3a8a0(pvVar3);
        *(uint *)(uVar4 + 0xc) = uVar6;
      }
      iVar8 = iVar8 - uVar6;
    }
  }
  local_8 = local_8 + iVar8;
LAB_00a40e70: ;
  uVar2 = F_00ab25a0((uint)*(byte *)(uVar2 + 0xa6));
  uVar4 = 0;
  do {
    if (*(char *)(uVar2 + 4 + uVar4) == '\x01') {
      if ((byte)uVar4 != 0xe) {
        if ((byte)uVar4 < 0xe) {
          switch((unsigned int)(uintptr_t)(uVar4 & 0xff)) {
          case 0: ;
            iVar8 = 0xdac;
            break;
          default: ;
            iVar8 = (uVar4 & 0xff) + 0xc7f;
            break;
          case 0xb: ;
          case 0xc: ;
            iVar8 = 0xce4;
            break;
          case 0xd: ;
            iVar8 = 0xd48;
          }
        }
        else {
          iVar8 = 9999;
        }
        uVar2 = F_00a3de00(this,param_1,iVar8,param_3);
        local_8 = local_8 + uVar2;
        if (cVar1 != '\0') {
          uVar9 = 0;
          pvVar3 = (undefined *)F_00a36f30(this,iVar8);
          uVar2 = F_00a3a8f0(pvVar3,param_1,uVar9);
          if (uVar2 != 0) {
            return 0x1b;
          }
        }
      }
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0xe);
  return -(uint)(local_8 < param_2) & 0x18;
}

/* ref: FUN_00a40f50 */
uint F_00a40f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa40f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  iVar4 = 0;
  local_8 = 0;
  do {
    uVar1 = F_00a3de00(this,param_1,iVar4,param_2);
    local_8 = local_8 + uVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 != 0) {
    uVar1 = F_00ab25a0((uint)*(byte *)(uVar1 + 0xa6));
    uVar3 = 0;
    do {
      if (*(char *)(uVar1 + 4 + uVar3) == '\x01') {
        if ((byte)uVar3 != 0xe) {
          if ((byte)uVar3 < 0xe) {
            switch((unsigned int)(uintptr_t)(uVar3 & 0xff)) {
            case 0: ;
              iVar4 = 0xdac;
              break;
            default: ;
              iVar4 = (uVar3 & 0xff) + 0xc7f;
              break;
            case 0xb: ;
            case 0xc: ;
              iVar4 = 0xce4;
              break;
            case 0xd: ;
              iVar4 = 0xd48;
            }
          }
          else {
            iVar4 = 9999;
          }
          uVar1 = F_00a3de00(this,param_1,iVar4,param_2);
          local_8 = local_8 + uVar1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0xe);
  }
  if (0x11 < param_1 - 2U) {
    return local_8;
  }
  uVar1 = F_00ab24a0(param_1);
  if (uVar1 != 0) {
    iVar4 = *(int *)(uVar1 + 0x28);
    pvVar2 = (undefined *)F_00a36f30(this,0x7d1);
    if ((pvVar2 != (undefined *)0x0) &&
       (pvVar2 = (undefined *)F_00a37da0(pvVar2,param_1 + -2), pvVar2 != (undefined *)0x0)) {
      uVar1 = F_00a3a8a0(pvVar2);
      return local_8 + (iVar4 - uVar1);
    }
  }
  return local_8;
}

/* ref: FUN_00a41080 */
uint F_00a41080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa41080u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar1 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) - 1000000 < 1000000) {
    (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),1);
    uVar1 = (*(uint *)&gen_args[1]) - 1000000;
  }
  if (uVar1 - 0x1e8481 < 0x489) {
    uVar3 = F_00a3ded0((*(undefined * PTR32 *)&gen_args[0]),uVar1,0x7d4,(*(undefined4 *)&gen_args[2]));
  }
  if (uVar1 - 2 < 0x12) {
    uVar1 = F_00a3ded0((*(undefined * PTR32 *)&gen_args[0]),uVar1,0x7d1,(*(undefined4 *)&gen_args[2]));
    return uVar1 + uVar3;
  }
  (*(uint *)&gen_args[1]) = 0;
  do {
    uVar2 = F_00a3ded0((*(undefined * PTR32 *)&gen_args[0]),uVar1,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    uVar3 = uVar3 + uVar2;
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
  } while ((int)(*(uint *)&gen_args[1]) < 4);
  if ((char)(*(int *)&gen_args[3]) != '\0') {
    uVar2 = F_00a3ded0((*(undefined * PTR32 *)&gen_args[0]),uVar1,1000,(*(undefined4 *)&gen_args[2]));
    uVar3 = uVar3 + uVar2;
  }
  if ((char)(*(undefined4 *)&gen_args[4]) != '\0') {
    uVar2 = F_00a3ded0((*(undefined * PTR32 *)&gen_args[0]),uVar1,0xdac,(*(undefined4 *)&gen_args[2]));
    iVar4 = uVar3 + uVar2;
    (*(int *)&gen_args[3]) = 0xc80;
    do {
      uVar3 = F_00a3ded0((*(undefined * PTR32 *)&gen_args[0]),uVar1,(*(int *)&gen_args[3]),(*(undefined4 *)&gen_args[2]));
      iVar4 = iVar4 + uVar3;
      (*(int *)&gen_args[3]) = (*(int *)&gen_args[3]) + 1;
    } while ((*(int *)&gen_args[3]) < 0xc8a);
    uVar3 = F_00a3ded0((*(undefined * PTR32 *)&gen_args[0]),uVar1,0xce4,(*(undefined4 *)&gen_args[2]));
    uVar1 = F_00a3ded0((*(undefined * PTR32 *)&gen_args[0]),uVar1,0xd48,(*(undefined4 *)&gen_args[2]));
    return uVar1 + iVar4 + uVar3;
  }
  return uVar3;
}

/* ref: FUN_00a411a0 */
uint F_00a411a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa411a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pvVar1 = param_1;
  uVar3 = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  uVar2 = F_00906df0(param_1);
  if (uVar2 - 0x1e8481 < 0x489) {
    uVar6 = 0;
    uVar5 = 0x7d4;
    uVar2 = F_00906df0(param_1);
    uVar3 = F_00a3ded0(this,uVar2,uVar5,uVar6);
  }
  uVar2 = F_00906df0(param_1);
  if (uVar2 - 2 < 0x12) {
    uVar6 = 0;
    uVar5 = 0x7d1;
    uVar2 = F_00906df0(param_1);
    uVar2 = F_00a3ded0(this,uVar2,uVar5,uVar6);
    return uVar2 + uVar3;
  }
  param_1 = (undefined *)0x0;
  do {
    uVar2 = F_00a3e020(this,pvVar1,param_1);
    uVar3 = uVar3 + uVar2;
    param_1 = (undefined *)((int)param_1 + 1);
  } while ((int)param_1 < 4);
  if ((char)param_2 != '\0') {
    uVar2 = F_00a3e020(this,pvVar1,1000);
    uVar3 = uVar3 + uVar2;
  }
  if ((char)param_3 != '\0') {
    uVar2 = F_00a3e020(this,pvVar1,0xdac);
    iVar4 = uVar3 + uVar2;
    param_2 = 0xc80;
    do {
      uVar2 = F_00a3e020(this,pvVar1,param_2);
      iVar4 = iVar4 + uVar2;
      param_2 = param_2 + 1;
    } while (param_2 < 0xc8a);
    uVar2 = F_00a3e020(this,pvVar1,0xce4);
    uVar3 = F_00a3e020(this,pvVar1,0xd48);
    return uVar3 + iVar4 + uVar2;
  }
  return uVar3;
}

/* ref: FUN_00a412b0 */
uint F_00a412b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa412b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  double dVar2;
  ushort uVar3;
  uint uVar4;
  float10 fVar5;
  uint local_c;
  
  if (param_1 != 0) {
    uVar4 = F_0046e5e0((undefined *)param_1);
    uVar4 = F_00a377f0(uVar4);
    if (uVar4 != 0) {
      uVar3 = F_00906d60((undefined *)param_1);
      fVar5 = (float10)(int)uVar4;
      if ((int)uVar4 < 0) {
        fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      dVar2 = (GEN_X87MATH(((double)((float)GEN_TOF((fVar5 * ((float10)(int)(30000 - (uint)uVar3) * (float10)*(double *)&REFG(undefined, 0x10e4ae8)))))),0xe));
      local_c = (uint)(longlong)TRUNC((float10)(float)dVar2);
      return local_c;
    }
  }
  return 0;
}

/* ref: FUN_00a41350 */
uint F_00a41350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa41350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x61);
  if (bVar1 == 0) {
    uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360),0x61);
    return uVar2;
  }
  iVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (param_3 - 2U < 0x12) {
    this_00 = (undefined *)F_00a36f30(this,0x7d1);
    if (this_00 == (undefined *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)F_00a37da0(this_00,param_3 + -2);
    }
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    while (puVar3 = (undefined4 *)F_00a3dc60(this,iVar4,param_3,&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,0xffffffff,0xffffffff),
          puVar3 == (undefined4 *)0x0) {
      iVar4 = iVar4 + 1;
      if (3 < iVar4) {
        return 0;
      }
    }
  }
  uVar2 = F_00a51200(0x21,param_1,(int)(short)param_2,*puVar3,(int)*(short *)(puVar3 + 1));
  return uVar2;
}

/* ref: FUN_00a41400 */
uint F_00a41400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa41400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  ((int *)(gen_frame + 0x14))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = F_00ab24a0(param_1);
  if ((uVar1 != 0) && (param_1 != 0)) {
    iVar4 = *(int *)(uVar1 + 0x78);
    (*(int *)(gen_frame + 0x4)) = iVar4 + -0x15da;
    ((int *)(gen_frame + 0x14))[0] = 0;
    ((int *)(gen_frame + 0x14))[1] = 0;
    ((int *)(gen_frame + 0x14))[2] = 0;
    ((int *)(gen_frame + 0x14))[3] = 0;
    ((int *)(gen_frame + 0x14))[4] = 0;
    if ((*(int *)(gen_frame + 0x4)) < 5) {
      (*(uint *)(gen_frame + 0x8)) = iVar4 - 1000000;
      do {
        uVar5 = 0;
        uVar2 = (*(uint *)(gen_frame + 0x0)) >> 8;
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) & 0xffffff00;
        uVar1 = (*(uint *)(gen_frame + 0x8)) + 1000000;
        if ((*(uint *)(gen_frame + 0x8)) < 1000000) {
          (*(uint *)(gen_frame + 0x0)) = CONCAT31((int3)uVar2,1);
          uVar1 = (*(uint *)(gen_frame + 0x8));
        }
        if (uVar1 - 0x1e8481 < 0x489) {
          uVar5 = F_00a3ded0(this,uVar1,0x7d4,(*(uint *)(gen_frame + 0x0)));
        }
        if (uVar1 - 2 < 0x12) {
          uVar6 = 0x7d1;
        }
        else {
          (*(int *)(gen_frame + 0xc)) = 0;
          do {
            uVar2 = F_00a3ded0(this,uVar1,(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x0)));
            uVar5 = uVar5 + uVar2;
            (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
          } while ((*(int *)(gen_frame + 0xc)) < 4);
          uVar2 = F_00a3ded0(this,uVar1,1000,(*(uint *)(gen_frame + 0x0)));
          uVar3 = F_00a3ded0(this,uVar1,0xdac,(*(uint *)(gen_frame + 0x0)));
          iVar4 = uVar5 + uVar2 + uVar3;
          (*(int *)(gen_frame + 0xc)) = 0xc80;
          do {
            uVar2 = F_00a3ded0(this,uVar1,(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x0)));
            iVar4 = iVar4 + uVar2;
            (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
          } while ((*(int *)(gen_frame + 0xc)) < 0xc8a);
          uVar5 = F_00a3ded0(this,uVar1,0xce4,(*(uint *)(gen_frame + 0x0)));
          uVar5 = iVar4 + uVar5;
          uVar6 = 0xd48;
        }
        uVar1 = F_00a3ded0(this,uVar1,uVar6,(*(uint *)(gen_frame + 0x0)));
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        ((int *)(gen_frame + 0x14))[(int)((*(int *)(gen_frame + 0x4)))] = uVar5 + uVar1;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
      } while ((*(int *)(gen_frame + 0x4)) < 5);
    }
    iVar4 = 0;
    do {
      if (((int *)(gen_frame + 0x14))[(int)(iVar4)] != 0) {
        F_00c47745(((int *)(gen_frame + 0x14))[5] ^ (uint)(uint)(gen_frame + 0x2c));
        return iVar4 + 0x15da;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
  }
  F_00c47745(((int *)(gen_frame + 0x14))[5] ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_00a415a0 */
uint F_00a415a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa415a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  undefined * this_00;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  ((int *)(gen_frame + 0x14))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x0)) = param_1 & 0xff;
  iVar6 = (*(uint *)(gen_frame + 0x0)) + 0x15df;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  ((int *)(gen_frame + 0x14))[2] = 0;
  ((int *)(gen_frame + 0x14))[3] = 0;
  ((int *)(gen_frame + 0x14))[4] = 0;
  if ((*(uint *)(gen_frame + 0x0)) < 5) {
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x0)) - 0xf2c61;
    do {
      uVar7 = 0;
      uVar1 = (*(uint *)(gen_frame + 0x4)) >> 8;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
      uVar3 = (*(uint *)(gen_frame + 0x8)) + 1000000;
      if ((*(uint *)(gen_frame + 0x8)) < 1000000) {
        (*(uint *)(gen_frame + 0x4)) = CONCAT31((int3)uVar1,1);
        uVar3 = (*(uint *)(gen_frame + 0x8));
      }
      if (uVar3 - 0x1e8481 < 0x489) {
        uVar7 = F_00a3ded0(this,uVar3,0x7d4,(*(uint *)(gen_frame + 0x4)));
      }
      if (uVar3 - 2 < 0x12) {
        uVar8 = 0x7d1;
      }
      else {
        (*(int *)(gen_frame + 0xc)) = 0;
        do {
          uVar1 = F_00a3ded0(this,uVar3,(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x4)));
          uVar7 = uVar7 + uVar1;
          (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        } while ((*(int *)(gen_frame + 0xc)) < 4);
        uVar1 = F_00a3ded0(this,uVar3,1000,(*(uint *)(gen_frame + 0x4)));
        uVar2 = F_00a3ded0(this,uVar3,0xdac,(*(uint *)(gen_frame + 0x4)));
        iVar4 = uVar7 + uVar1 + uVar2;
        (*(int *)(gen_frame + 0xc)) = 0xc80;
        do {
          uVar1 = F_00a3ded0(this,uVar3,(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x4)));
          iVar4 = iVar4 + uVar1;
          (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        } while ((*(int *)(gen_frame + 0xc)) < 0xc8a);
        uVar7 = F_00a3ded0(this,uVar3,0xce4,(*(uint *)(gen_frame + 0x4)));
        uVar7 = iVar4 + uVar7;
        uVar8 = 0xd48;
      }
      uVar3 = F_00a3ded0(this,uVar3,uVar8,(*(uint *)(gen_frame + 0x4)));
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      ((int *)(gen_frame + 0x14))[(int)((*(uint *)(gen_frame + 0x0)))] = uVar7 + uVar3;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x0)) < 5);
  }
  iVar4 = 0;
  do {
    if (((int *)(gen_frame + 0x14))[(int)(iVar4)] != 0) {
      F_00c47745(((int *)(gen_frame + 0x14))[5] ^ (uint)(uint)(gen_frame + 0x2c));
      return iVar4 + 0x15df;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  if ((char)param_2 != '\0') {
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar8 = 0x4b3;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
    F_0046a6b0(this_00,uVar8,iVar6);
  }
  F_00c47745(((int *)(gen_frame + 0x14))[5] ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_00a41750 */
uint F_00a41750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa41750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x3e);
  if (bVar1 == 0) {
    F_00a4a810(&REFG(undefined, 0x14a7360),0x3e);
  }
  else if ((short)param_1 == 0) {
    if (*((char *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) == '\0') {
      F_00a3fa30(this,1000);
      *(undefined4 *)((int)this + 0x28) = 1000;
      F_00a52930(*(undefined4 *)((int)this + 0x28));
      return 0;
    }
    uVar2 = F_00a3f440(this,1000);
    F_00a52930(*(undefined4 *)((int)this + 0x28));
    return uVar2;
  }
  return 0xf;
}

/* ref: FUN_00a417f0 */
uint F_00a417f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa417f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a41750(this,param_1 + -1000);
  return uVar1;
}

/* ref: FUN_00a41810 */
uint F_00a41810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa41810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pvVar1 = (undefined *)F_00a36f30(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1,(int)(short)param_2);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      uVar4 = (uint)(*(byte *)((int)pvVar1 + 0x14) & 1);
      uVar5 = param_3;
      uVar2 = F_0046e5e0(pvVar1);
      uVar2 = F_00a40b70(this,uVar2,uVar5,uVar4);
      if (uVar2 == 0) {
        uVar2 = F_00a38960(this,param_1,param_2,param_3);
        return uVar2;
      }
      if (uVar2 == 0x1b) {
        piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar5 = 0x4d9;
      }
      else {
        if (uVar2 != 0x18) {
          return uVar2;
        }
        piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar5 = 0x4d8;
      }
      pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
      uVar2 = F_0046a630(pvVar1,uVar5);
    }
  }
  return uVar2;
}

/* ref: FUN_00a418c0 */
uint F_00a418c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa418c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  pvVar1 = (undefined *)F_00a36f30(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1,(int)(short)param_2);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      uVar4 = (uint)(*(byte *)((int)pvVar1 + 0x14) & 1);
      uVar5 = param_3;
      uVar2 = F_0046e5e0(pvVar1);
      uVar2 = F_00a40d10(this,uVar2,uVar5,uVar4);
      if (uVar2 == 0) {
        uVar2 = F_00a38a00(this,param_1,param_2,param_3);
        return uVar2;
      }
      if (uVar2 == 0x1b) {
        piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar5 = 0x4d9;
      }
      else {
        if (uVar2 != 0x18) {
          return uVar2;
        }
        piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar5 = 0x4d8;
      }
      pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
      uVar2 = F_0046a630(pvVar1,uVar5);
    }
  }
  return uVar2;
}

/* ref: FUN_00a41970 */
uint F_00a41970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa41970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined2 uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * this_00;
  uint uVar5;
  undefined4 uVar6;
  
  if (((param_1 < 20000) || (0x55f1 < param_1)) && (*(char *)((int)this + 0x3088) != '\0')) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 0x745;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    uVar4 = F_0046a630(pvVar3,uVar6);
    return uVar4;
  }
  pvVar3 = (undefined *)F_00a36f30(this,param_1);
  uVar4 = 0;
  if (pvVar3 != (undefined *)0x0) {
    this_00 = (undefined4 *)F_00a37da0(pvVar3,(int)(short)param_2);
    uVar4 = 0;
    if (this_00 != (undefined4 *)0x0) {
      if ((*(char *)((int)this + 0x3086) != '\0') && (*(char *)((int)this + 0x3087) != '\0')) {
        uVar5 = (uint)(*(byte *)(this_00 + 5) & 1);
        uVar6 = param_3;
        uVar4 = F_0046e5e0(this_00);
        uVar4 = F_00a40d10(this,uVar4,uVar6,uVar5);
        if (uVar4 == 0) {
          uVar4 = F_00a38aa0(this,param_1,param_2,param_3);
          return uVar4;
        }
        if (uVar4 == 0x1b) {
          piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar6 = 0x4d9;
        }
        else {
          if (uVar4 != 0x18) {
            return uVar4;
          }
          piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar6 = 0x4d8;
        }
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
        uVar4 = F_0046a630(pvVar3,uVar6);
        return uVar4;
      }
      F_00a51200(0x29,*this_00,0,0,0);
      *(undefined4 *)((int)this + 0x308c) = 3;
      uVar4 = F_00a3bd60((undefined *)((int)this + 0x3000),this_00);
      *(undefined4 *)((int)this + 0x3000) = *this_00;
      uVar1 = *(undefined2 *)(this_00 + 1);
      *(undefined2 *)((int)this + 0x3004) = uVar1;
      uVar4 = CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),uVar1) >> 8),1);
      *(undefined4 *)((int)this + 0x3040) = 9999;
      *(undefined2 *)((int)this + 0x3044) = 0xffff;
      *(undefined4 *)((int)this + 0x3080) = param_3;
      *(gen_code32 *)((int)this + 0x3084) = ((code *)REFP(0x1000100));
      *(undefined1 *)((int)this + 0x3088) = 1;
    }
  }
  return uVar4;
}

/* ref: FUN_00a41af0 */
unsigned int F_00a41af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa41af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = F_00a36f30(this,iVar1);
  if (*(char *)(uVar2 + 0x10) == '\0') {
    F_00a3fa30(((undefined *)(uint)(this)),iVar1);
  }
  if (iVar1 == 1000) {
    uVar2 = F_00a3c7b0(this,0,0);
    if (uVar2 != 0) {
      *(undefined4 *)((int)this + 0x28) = 1000;
      if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
        F_00aa8290(REFG(void * PTR32, 0x1379694));
      }
    }
  }
  iVar4 = 0x80;
  puVar3 = (undefined1 *)((int)this + 0x39e);
  do {
    if (*(int *)(puVar3 + -0x2a) == iVar1) {
      *puVar3 = 1;
    }
    if (*(int *)(puVar3 + -0x16) == iVar1) {
      puVar3[1] = 1;
    }
    puVar3 = puVar3 + 0x3c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00a41b70 */
uint F_00a41b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa41b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  undefined * this_00;
  uint uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (param_1 == (int *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 4;
  }
  (*(uint *)(gen_frame + 0x20)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x24)),0,0x34);
  do {
    if ((byte)uVar8 < 0xe) {
      switch((unsigned int)(uintptr_t)(uVar8 & 0xff)) {
      case 0: ;
        iVar3 = 0xdac;
        break;
      default: ;
        iVar3 = (uVar8 & 0xff) + 0xc7f;
        break;
      case 0xb: ;
      case 0xc: ;
        iVar3 = 0xce4;
        break;
      case 0xd: ;
        iVar3 = 0xd48;
      }
    }
    else {
      iVar3 = 9999;
    }
    uVar4 = F_00a37350(this,iVar3);
    *(uint *)(((undefined1 *)(gen_frame + 0x24)) + uVar8 * 4 + -4) = uVar4;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0xe);
  (*(int *)(gen_frame + 0xc)) = 0;
  piVar7 = param_1;
  if ((ushort)param_2 != 0) {
    do {
      iVar3 = *piVar7;
      uVar8 = piVar7[1];
      iVar1 = piVar7[2];
      if (((iVar3 != 1) && (uVar4 = F_00a3d8b0(this,iVar3,iVar1), uVar4 < uVar8)) &&
         (0x11 < iVar3 - 2U)) {
        if (iVar3 - 0x17U < 4) {
          F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
          return 0x18;
        }
        uVar5 = F_00ab24a0(iVar3);
        if (uVar5 == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
          return 6;
        }
        if ((*(char *)(uVar5 + 0xbd) == '\0') ||
           (uVar6 = F_00a41080(this,iVar3,iVar1,1,1), uVar6 == 0)) {
          if ((*(char *)(uVar5 + 0xbe) != '\0') &&
             (uVar6 = F_00a41080(this,iVar3,iVar1,1,1), uVar6 != 0)) {
            if ((char)param_3 != '\0') {
              piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              uVar9 = 0x6a2;
              this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
              F_0046a6b0(this_00,uVar9,iVar3);
            }
            F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
            return 0x1b;
          }
          bVar2 = F_00a36920(uVar5);
          if (bVar2 == 0xe) {
            uVar8 = uVar8 - uVar4;
            uVar4 = F_00ab24a0(iVar3);
            if (((uVar4 != 0) && (iVar3 != 0)) &&
               (uVar5 = uVar8 / *(uint *)(uVar4 + 0x28), uVar4 = uVar8 % *(uint *)(uVar4 + 0x28),
               uVar8 = uVar5, uVar4 != 0)) {
              uVar8 = uVar5 + 1;
            }
          }
          else {
            uVar4 = *(uint *)(((undefined1 *)(gen_frame + 0x24)) + (uint)bVar2 * 4 + -4);
            if (uVar4 < uVar8) {
              uVar8 = uVar8 - uVar4;
              *(int *)(((undefined1 *)(gen_frame + 0x24)) + (uint)bVar2 * 4 + -4) = 0;
            }
            else {
              *(uint *)(((undefined1 *)(gen_frame + 0x24)) + (uint)bVar2 * 4 + -4) = uVar4 - uVar8;
              uVar8 = 0;
            }
          }
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + uVar8;
        }
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      piVar7 = piVar7 + 3;
    } while ((*(int *)(gen_frame + 0xc)) < (int)(uint)(ushort)param_2);
  }
  uVar8 = F_00a3a180(this);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return -(uint)(uVar8 < (*(uint *)(gen_frame + 0x14))) & 0x18;
}

/* ref: FUN_00a41df0 */
uint F_00a41df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa41df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar2 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  piVar4 = REFG(int * PTR32, 0x1379694);
  (*(int * PTR32 *)(gen_frame + 0x18)) = REFG(int * PTR32, 0x1379694);
  if (((piVar2 == (int *)0x0) || (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), uVar3 != 1)) ||
     (piVar2 == piVar4)) {
    return 2;
  }
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_004816e0(((undefined4 *)(gen_frame + 0x0)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  F_00c49908((int)this + 0x33c,0x20,uVar3);
  if (1 < piVar2[0xbae]) {
    uVar8 = 0;
    uVar7 = 0x1e;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
    F_0046ac40(pvVar5,uVar7,uVar8,piVar2);
    F_00492c50(((undefined4 *)(gen_frame + 0x0)));
    F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
    return 0x13;
  }
  switch((unsigned int)(uintptr_t)((char)piVar2[0x62])) {
  case '\x02': ;
    uVar7 = 0x192;
    break;
  default: ;
    bVar1 = F_00a36640(this);
    if (bVar1 == 0) {
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x15);
      if (bVar1 != 0) {
        fVar6 = F_00a601f0((*(int * PTR32 *)(gen_frame + 0x18)),piVar2);
        if ((float10)*(float *)&REFG(undefined, 0x10e4a84) < (float10)fVar6) {
          uVar7 = 0x51e;
        }
        else {
          if (*(char *)((int)piVar2 + 0x18a) != '\f') {
            F_00a4a760(&REFG(undefined, 0x14a7360),0x15,1);
            F_00a38bd0(this,param_1);
            *(undefined4 *)((int)this + 0x334) = 3;
            *(undefined4 *)((int)this + 0x338) = 2;
            uVar8 = 0;
            uVar7 = 0x20;
            pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
            F_0046ac40(pvVar5,uVar7,uVar8,piVar2);
            piVar2 = (int *)F_00a36f30(this,0x7d5);
            if ((*piVar2 == 0) || (piVar2[3] < 6)) {
              pvVar5 = (undefined *)0x0;
            }
            else {
              pvVar5 = (undefined *)(*piVar2 + 0x140);
            }
            F_00a3be70(pvVar5,2000,0);
            *(undefined4 *)((int)pvVar5 + 0xc) = 0;
            if ((*(char *)((int)pvVar5 + 6) == '\0') && (*(int *)((int)pvVar5 + 8) != 1)) {
              *(undefined4 *)((int)pvVar5 + 8) = 0;
            }
            uVar7 = 0x1b;
            uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
            piVar4 = (int *)F_00763050(uVar3,uVar7);
            ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
            F_00493180(((undefined4 *)(gen_frame + 0x0)));
            return 0;
          }
          uVar7 = 0x30;
        }
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046a630(pvVar5,uVar7);
        F_00493180(((undefined4 *)(gen_frame + 0x0)));
        return 2;
      }
      F_00a4a810(&REFG(undefined, 0x14a7360),0x15);
    }
    else {
      uVar8 = 0;
      uVar7 = 0x1e;
      piVar2 = (*(int * PTR32 *)(gen_frame + 0x18));
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046ac40(pvVar5,uVar7,uVar8,piVar2);
    }
    goto LAB_00a41ed8;
  case '\x05': ;
  case '\a': ;
    uVar7 = 0x195;
    break;
  case '\x06': ;
    uVar7 = 0x196;
  }
  pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
  F_0046a630(pvVar5,uVar7);
LAB_00a41ed8: ;
  F_00493180(((undefined4 *)(gen_frame + 0x0)));
  return 0x13;
}

/* ref: FUN_00a42060 */
uint F_00a42060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa42060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  uint * puVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_2 + 4))) {
  case 1: ;
    F_00c49908((int)this + 0x33c,0x20,param_2 + 6);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    bVar1 = F_00a36640(this);
    if (bVar1 == 0) {
      uVar13 = 4;
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
      pvVar3 = (undefined *)F_00435440(uVar5,uVar13);
      bVar1 = F_0044e420(pvVar3,(int)this + 0x33c);
      if (bVar1 == 0) {
        piVar4 = (int *)F_00a36f30(this,0x7d5);
        if ((*piVar4 == 0) || (piVar4[3] < 6)) {
          (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
        }
        else {
          (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)(*piVar4 + 0x140);
        }
        F_00a3be70((*(int * PTR32 *)(gen_frame + 0x24)),2000,0);
        (*(int * PTR32 *)(gen_frame + 0x24))[3] = 0;
        if ((*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6) == '\0') && ((*(int * PTR32 *)(gen_frame + 0x24))[2] != 1)) {
          (*(int * PTR32 *)(gen_frame + 0x24))[2] = 0;
        }
        uVar5 = F_00a64490(&REFG(undefined, 0x14a9a18),(int)this + 0x33c,0);
        uVar10 = 0;
        uVar13 = 0x22;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
        F_0046ac40(pvVar3,uVar13,uVar10,uVar5);
        uVar13 = 0x1b;
        uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
        piVar2 = (int *)F_00763050(uVar5,uVar13);
        ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        *(undefined4 *)((int)this + 0x334) = 3;
        *(undefined4 *)((int)this + 0x338) = 3;
        F_00a4a760(&REFG(undefined, 0x14a7360),0x15,1);
      }
      else {
        F_00a390b0(this);
      }
    }
    else {
      F_00a3b110(this_00);
    }
    break;
  case 2: ;
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x1b;
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    piVar2 = (int *)F_00763050(uVar5,uVar13);
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((char)uVar5 == '\0') {
      F_00a4a760(&REFG(undefined, 0x14a7360),0x15,1);
      piVar4 = (int *)F_00a36f30(this,0x7d5);
      if ((*piVar4 == 0) || (piVar4[3] < 6)) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = (undefined *)(*piVar4 + 0x140);
      }
      F_00a3be70(pvVar3,2000,0);
      *(undefined4 *)((int)pvVar3 + 0xc) = 0;
      if ((*(char *)((int)pvVar3 + 6) == '\0') && (*(int *)((int)pvVar3 + 8) != 1)) {
        *(undefined4 *)((int)pvVar3 + 8) = 0;
      }
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    }
    break;
  case 3: ;
    piVar2 = (int *)F_00a36f30(this,0x7d5);
    if ((*piVar2 == 0) || (piVar2[3] < 6)) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = (undefined *)(*piVar2 + 0x140);
    }
    F_00a3be70(pvVar3,2000,0);
    *(undefined4 *)((int)pvVar3 + 0xc) = 0;
    if ((*(char *)((int)pvVar3 + 6) == '\0') && (*(int *)((int)pvVar3 + 8) != 1)) {
      *(undefined4 *)((int)pvVar3 + 8) = 0;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x1b;
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    piVar4 = (int *)F_00763050(uVar5,uVar13);
    ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    uVar13 = 0x23;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(pvVar3,uVar13);
    REFG(int, 0x13342c0) = -1;
    break;
  case 4: ;
    *(undefined4 *)((int)this + 0x338) = 4;
    break;
  case 5: ;
    *(undefined4 *)((int)this + 0x334) = 5;
    *(undefined4 *)((int)this + 0x338) = 5;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar11 = 0;
    uVar10 = 0;
    uVar13 = 0x18f4f;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    uVar5 = F_0043bd00(pvVar3,uVar13,uVar10,uVar11);
    (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
    uVar11 = 0;
    (*(uint *)(gen_frame + 0x2c)) = (uint)(*(int * PTR32 *)(gen_frame + 0x24));
    uVar10 = 0;
    uVar13 = 0x18f50;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    uVar5 = F_0043bd00(pvVar3,uVar13,uVar10,uVar11);
    (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
    uVar11 = 0;
    (*(uint *)(gen_frame + 0x34)) = (uint)(*(int * PTR32 *)(gen_frame + 0x24));
    uVar10 = 0;
    uVar13 = 0x18f51;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    piVar4 = (int *)F_0043bd00(pvVar3,uVar13,uVar10,uVar11);
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),6);
    uVar12 = 4;
    uVar9 = 0;
    uVar11 = 0;
    iVar7 = (int)this + 0x2168;
    puVar8 = &(*(undefined4 *)(gen_frame + 0x28));
    (*(int * PTR32 *)(gen_frame + 0x3c)) = (*(int * PTR32 *)(gen_frame + 0x24));
    uVar10 = 4;
    uVar13 = 9;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    REFG(undefined4, 0x13342bc) = F_008668b0(pvVar3,uVar13,uVar10,puVar8,iVar7,uVar11,uVar9,uVar12);
    break;
  case 6: ;
    *(undefined4 *)((int)this + 0x338) = 6;
    break;
  case 7: ;
    pvVar3 = (undefined *)F_00a36f30(this,0x7d5);
    F_00a36310(pvVar3);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x1b;
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    piVar4 = (int *)F_00763050(uVar5,uVar13);
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x334) = 0;
    *(undefined4 *)((int)this + 0x338) = 0;
    piVar4 = (int *)F_00a36f30(this,0x7d5);
    if ((*piVar4 == 0) || (piVar4[3] < 6)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4 + 0x140;
    }
    *(undefined1 *)(iVar7 + 6) = 0;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    if (*(int *)(iVar7 + 8) != 1) {
      *(undefined4 *)(iVar7 + 8) = 0;
    }
    uVar13 = 0x24;
    goto LAB_00a42482;
  case 8: ;
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x25;
    goto LAB_00a425a4;
  case 9: ;
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x27;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(pvVar3,uVar13);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x13342bc),0);
    *(undefined1 *)((int)this + 0x35c) = 0;
    break;
  case 10: ;
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar5 = F_00a64490(&REFG(undefined, 0x14a9a18),(int)this + 0x33c,0);
    uVar10 = 0;
    uVar13 = 0x28;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046ac40(pvVar3,uVar13,uVar10,uVar5);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    goto LAB_00a425bf;
  case 0xb: ;
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x2e;
    goto LAB_00a425a4;
  case 0xc: ;
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar5 = F_00a64490(&REFG(undefined, 0x14a9a18),(int)this + 0x33c,0);
    uVar10 = 0;
    uVar13 = 0x2f;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046ac40(pvVar3,uVar13,uVar10,uVar5);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    goto LAB_00a425bf;
  case 0xd: ;
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x2a;
LAB_00a425a4: ;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(pvVar3,uVar13);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    goto LAB_00a425bf;
  case 0xe: ;
    *(undefined4 *)((int)this + 0x334) = 3;
    *(undefined4 *)((int)this + 0x338) = 3;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar5 = F_00a64490(&REFG(undefined, 0x14a9a18),(int)this + 0x33c,0);
    uVar10 = 0;
    uVar13 = 0x2b;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046ac40(pvVar3,uVar13,uVar10,uVar5);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
LAB_00a425bf: ;
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x13342bc),0);
    *(undefined1 *)((int)this + 0x35c) = 0;
    break;
  case 0xf: ;
    uVar5 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(param_2 + 0x28));
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 0x2eb8) = (uint)*(byte *)(param_2 + 5);
    }
    if (REFG(int, 0x1379690) == *(int *)(param_2 + 0x28)) {
      *(uint *)((int)this + 0x334) = (uint)*(byte *)(param_2 + 5);
    }
    break;
  case 0x10: ;
    *(undefined4 *)((int)this + 0x334) = 1;
    *(undefined4 *)((int)this + 0x338) = 1;
    piVar2 = (int *)F_00a36f30(this,0x7d5);
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar2;
    if (piVar2 == (int *)0x0) {
      F_00493180(&(*(int * PTR32 *)(gen_frame + 0xc)));
      puVar6 = &(*(uint *)(gen_frame + 0x48));
      iVar7 = 3;
      do {
        puVar6 = puVar6 + -2;
        uVar5 = F_005a2670(puVar6);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar5;
    }
    F_00a36310(piVar2);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x1b;
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    pvVar3 = (undefined *)F_00763050(uVar5,uVar13);
    F_007776f0(pvVar3);
    if ((*(*(int * PTR32 *)(gen_frame + 0x24)) == 0) || ((*(int * PTR32 *)(gen_frame + 0x24))[3] < 6)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(*(int * PTR32 *)(gen_frame + 0x24)) + 0x140;
    }
    *(undefined1 *)(iVar7 + 6) = 0;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    if (*(int *)(iVar7 + 8) != 1) {
      *(undefined4 *)(iVar7 + 8) = 0;
    }
    uVar13 = 0x26;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(pvVar3,uVar13);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x15,0);
    REFG(undefined4, 0x13342bc) = 0xffffffff;
    REFG(int, 0x13342c0) = -1;
    *(undefined2 *)((int)this + 0x35c) = 0x100;
    break;
  case 0x11: ;
    pvVar3 = (undefined *)F_00a36f30(this,0x7d5);
    F_00a36310(pvVar3);
    break;
  case 0x12: ;
    pvVar3 = (undefined *)F_00a36f30(this,0x7d5);
    F_00a36310(pvVar3);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar13 = 0x1b;
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    piVar4 = (int *)F_00763050(uVar5,uVar13);
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x334) = 0;
    *(undefined4 *)((int)this + 0x338) = 0;
    piVar4 = (int *)F_00a36f30(this,0x7d5);
    if ((*piVar4 == 0) || (piVar4[3] < 6)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4 + 0x140;
    }
    *(undefined1 *)(iVar7 + 6) = 0;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    if (*(int *)(iVar7 + 8) != 1) {
      *(undefined4 *)(iVar7 + 8) = 0;
    }
    uVar13 = 0x36;
LAB_00a42482: ;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(pvVar3,uVar13);
    if (REFG(int, 0x13342c0) != -1) {
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,REFG(int, 0x13342c0),0);
      REFG(int, 0x13342c0) = -1;
    }
    if (REFG(undefined4, 0x13342bc) != 0xffffffff) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(undefined4, 0x13342bc),0);
      REFG(undefined4, 0x13342bc) = 0xffffffff;
    }
    F_00a4a760(&REFG(undefined, 0x14a7360),0x15,0);
    *(undefined2 *)((int)this + 0x35c) = 0x100;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
  *(byte *)(uVar5 + 0x230bf) = *(byte *)(uVar5 + 0x230bf) | 1;
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  puVar6 = &(*(uint *)(gen_frame + 0x48));
  iVar7 = 3;
  do {
    puVar6 = puVar6 + -2;
    uVar5 = F_005a2670(puVar6);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: FUN_00a42940 */
uint F_00a42940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa42940u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  undefined * this;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  undefined4 uVar7;
  int * PTR32 * ppiVar8;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
  if ((char)param_2 == '\0') goto LAB_00a42c83;
  (*(char *)(gen_frame + 0x27)) = '\0';
  (*(char *)(gen_frame + 0x26)) = '\0';
  pcVar2 = (char *)(param_3 + 3);
  iVar6 = 7;
  do {
    if (pcVar2[-3] != '\0') {
      (*(char *)(gen_frame + 0x27)) = '\x01';
    }
    if (pcVar2[-1] != '\0') {
      (*(char *)(gen_frame + 0x26)) = '\x01';
    }
    if (*pcVar2 != '\0') {
      (*(char *)(gen_frame + 0x27)) = '\x01';
    }
    if (pcVar2[2] != '\0') {
      (*(char *)(gen_frame + 0x26)) = '\x01';
    }
    pcVar2 = pcVar2 + 6;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar3 = F_0043b3e0(this,param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x28)),uVar3 + 4,REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x7c)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)0x0;
  (*(char *)(gen_frame + 0x84)) = -1;
  F_00490f90(&(*(int *)(gen_frame + 0x7c)),((undefined1 *)(gen_frame + 0x28)));
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
  }
  uVar3 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar3) {
    uVar3 = uVar3 - (*(uint *)(gen_frame + 0x14));
  }
  if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) == 0) {
    uVar4 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) = uVar4;
  }
  piVar1 = *(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    *(undefined1 *)(piVar1 + 2) = 0xff;
    if (((*(char *)(gen_frame + 0x84)) != -1) && (piVar1 != &(*(int *)(gen_frame + 0x7c)))) {
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x80));
      if ((*(char *)(gen_frame + 0x84)) == '\0') {
        F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x4)));
      }
      else if ((*(char *)(gen_frame + 0x84)) == '\x01') {
        F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x4)));
      }
    }
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x80)) != (int *)0x0) && ((*(char *)(gen_frame + 0x84)) != '\0')) && ((*(char *)(gen_frame + 0x84)) == '\x01')) {
    pvVar5 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x80));
    *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
    if (*(int *)((int)pvVar5 + 0x54) < 1) {
      F_0042c880(pvVar5);
      F_00406ad0(pvVar5);
    }
  }
  (*(int *)(gen_frame + 0x7c)) = 0;
  (*(int *)(gen_frame + 0x7c)) = param_1 + 1;
  (*(int * PTR32 *)(gen_frame + 0x80)) = &(*(int *)(gen_frame + 0x7c));
  (*(char *)(gen_frame + 0x84)) = '\0';
  if ((*(uint *)(gen_frame + 0x14)) <= (*(int *)(gen_frame + 0x1c)) + 1U) {
    F_00486f80(&(*(int * PTR32 *)(gen_frame + 0xc)),1);
  }
  uVar3 = (*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x14)) <= uVar3) {
    uVar3 = uVar3 - (*(uint *)(gen_frame + 0x14));
  }
  if (*(int *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) == 0) {
    uVar4 = F_004296a0(0xc,0,0x2c4);
    *(uint *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4) = uVar4;
  }
  piVar1 = *(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + uVar3 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    *(undefined1 *)(piVar1 + 2) = 0xff;
    if (((*(char *)(gen_frame + 0x84)) != -1) && (piVar1 != &(*(int *)(gen_frame + 0x7c)))) {
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x80));
      if ((*(char *)(gen_frame + 0x84)) == '\0') {
        F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x4)));
      }
      else if ((*(char *)(gen_frame + 0x84)) == '\x01') {
        F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x4)));
      }
    }
  }
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
  if ((((*(int * PTR32 *)(gen_frame + 0x80)) != (int *)0x0) && ((*(char *)(gen_frame + 0x84)) != '\0')) && ((*(char *)(gen_frame + 0x84)) == '\x01')) {
    pvVar5 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x80));
    *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
    if (*(int *)((int)pvVar5 + 0x54) < 1) {
      F_0042c880(pvVar5);
      F_00406ad0(pvVar5);
    }
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  iVar6 = *piVar1;
  if ((*(char *)(gen_frame + 0x27)) == '\0') {
    if ((*(char *)(gen_frame + 0x26)) == '\0') {
      if (param_1 != 100) {
        uVar7 = 0x2f3;
        goto LAB_00a42c49;
      }
      uVar7 = 0x2f6;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar6 + 0x28))(piVar1)));
      F_0046a630(pvVar5,uVar7);
    }
    else if (param_1 == 100) {
      uVar7 = 0x76e;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar6 + 0x28))(piVar1)));
      F_0046a630(pvVar5,uVar7);
    }
    else {
      uVar7 = 0x76d;
LAB_00a42c49: ;
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0xc));
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar6 + 0x28))(piVar1)));
      F_0046aa70(pvVar5,uVar7,ppiVar8);
    }
  }
  else {
    if (param_1 != 100) {
      uVar7 = 0x2f9;
      goto LAB_00a42c49;
    }
    uVar7 = 0x2fc;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar6 + 0x28))(piVar1)));
    F_0046a630(pvVar5,uVar7);
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  F_0042c880(((undefined1 *)(gen_frame + 0x28)));
LAB_00a42c83: ;
  uVar3 = F_0044c0d0(this,param_1,param_2,param_4,param_3);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_00a42cb0 */
byte F_00a42cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa42cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = F_0046e5e0(param_1);
  if (uVar2 - 0x1e8481 < 0x489) {
LAB_00a42cd7: ;
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 0;
  }
  uVar2 = F_0046e5e0(param_1);
  if (uVar2 == 1) goto LAB_00a42cd7;
  uVar2 = F_0046e5e0(param_1);
  uVar2 = F_00ab24a0(uVar2);
  if (uVar2 == 0) goto LAB_00a42e80;
  uVar3 = F_00906df0(param_1);
  if (uVar3 == 0) goto LAB_00a42e80;
  F_004816e0(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0046e5e0(param_1);
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  F_00493b50(((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
  F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
  if (*(uint *)(uVar2 + 0x74) == (uint)*(byte *)(REFG(int, 0x1379694) + 0x1688)) {
    if ((int)(uint)*(byte *)(REFG(int, 0x1379694) + 0x1689) < (int)(*(byte *)(uVar2 + 0x9f) - 10)) {
      if ((char)param_2 != '\0') {
        piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar6 = 0x56e;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046a630(pvVar5,uVar6);
      }
    }
    else {
      uVar1 = F_00906d60(param_1);
      if (uVar1 < 30000) {
        F_00493180(((undefined1 *)(gen_frame + 0x4)));
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return 1;
      }
      if ((char)param_2 != '\0') {
        piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar6 = 0x572;
        goto LAB_00a42e68;
      }
    }
  }
  else {
    F_00492c50(((undefined1 *)(gen_frame + 0x4)));
    uVar3 = F_0046e5e0(param_1);
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    (*(undefined1 *)(gen_frame + 0x24)) = 0;
    F_00493b50(((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
    uVar2 = *(uint *)(uVar2 + 0x74);
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    (*(undefined1 *)(gen_frame + 0x24)) = 0;
    F_00493bc0(((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
    if ((char)param_2 != '\0') {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar6 = 0x56d;
LAB_00a42e68: ;
      puVar7 = ((undefined1 *)(gen_frame + 0x4));
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046aa70(pvVar5,uVar6,puVar7);
    }
  }
  F_00493180(((undefined1 *)(gen_frame + 0x4)));
LAB_00a42e80: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_00a42ea0 */
uint F_00a42ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa42ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_2;
  if ((param_3 & 4) != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 0x21;
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    pvVar5 = (undefined *)F_00763050(uVar4,uVar6);
    F_008d5350(pvVar5);
    if ((param_3 & 1) == 0) {
      uVar2 = F_00906d60(param_1);
      if (uVar2 == 0) {
        uVar2 = F_00906d60((*(undefined * PTR32 *)(gen_frame + 0x18)));
        if (uVar2 != 0) {
          bVar1 = F_00a3e6a0(param_1,0);
          if (bVar1 != 0) {
            F_004816e0(((undefined1 *)(gen_frame + 0x0)));
            uVar4 = F_0046e5e0(param_1);
            (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
            (*(uint *)(gen_frame + 0x1c)) = 0;
            (*(uint *)(gen_frame + 0x1c)) = uVar4;
            (*(undefined1 *)(gen_frame + 0x24)) = 0;
            F_00493b50(((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x1c)));
            F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
            piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
            uVar6 = 0x575;
LAB_00a42ffc: ;
            puVar7 = ((undefined1 *)(gen_frame + 0x0));
            pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
            F_0046aa70(pvVar5,uVar6,puVar7);
            F_00493180(((undefined1 *)(gen_frame + 0x0)));
          }
        }
      }
      else {
        bVar1 = (byte)(((uint)*(ushort *)((int)param_1 + 0x12) * 100) / 30000);
        if (((bVar1 == 0) && (*(ushort *)((int)param_1 + 0x12) != 0)) || (bVar1 < 0xb)) {
          bVar1 = F_00a36000((*(undefined * PTR32 *)(gen_frame + 0x18)));
          if (10 < bVar1) {
            bVar1 = F_00a3e6a0(param_1,0);
            if (bVar1 != 0) {
              F_004816e0(((undefined1 *)(gen_frame + 0x0)));
              uVar4 = F_0046e5e0(param_1);
              (*(uint *)(gen_frame + 0x1c)) = 0;
              (*(uint *)(gen_frame + 0x1c)) = uVar4;
              (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
              (*(undefined1 *)(gen_frame + 0x24)) = 0;
              F_00493b50(((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x1c)));
              F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
              piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              uVar6 = 0x576;
              goto LAB_00a42ffc;
            }
          }
        }
        else {
          bVar1 = F_00a36000(param_1);
          if (bVar1 < 0x1f) {
            bVar1 = F_00a36000((*(undefined * PTR32 *)(gen_frame + 0x18)));
            if (0x1e < bVar1) {
              bVar1 = F_00a3e6a0(param_1,0);
              if (bVar1 != 0) {
                F_00a6e080(&REFG(undefined, 0x14a9e40),0x1f,0,0);
              }
            }
          }
        }
      }
    }
  }
  if ((param_3 & 8) != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 0x22;
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    pvVar5 = (undefined *)F_00763050(uVar4,uVar6);
    F_008e9cb0(pvVar5);
    uVar6 = 0x23;
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    pvVar5 = (undefined *)F_00763050(uVar4,uVar6);
    F_008edf60(pvVar5);
    if ((param_3 & 1) == 0) {
      uVar4 = F_0046e5e0(param_1);
      uVar4 = F_00ab24a0(uVar4);
      if (uVar4 != 0) {
        uVar2 = F_0071d210(param_1);
        if (uVar2 < 10000) {
          uVar2 = F_0071d210(param_1);
          if (uVar2 == 0) goto LAB_00a431da;
          uVar2 = F_0071d210((*(undefined * PTR32 *)(gen_frame + 0x18)));
          if (((uVar2 != 0) || (*(char *)(uVar4 + 0xa6) == '\0')) ||
             (*(char *)(uVar4 + 0xbf) != '\0')) goto LAB_00a431da;
          F_004816e0(((undefined1 *)(gen_frame + 0x0)));
          uVar4 = F_0046e5e0(param_1);
          (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(uint *)(gen_frame + 0x1c)) = uVar4;
          (*(undefined1 *)(gen_frame + 0x24)) = 0;
          F_00493b50(((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x1c)));
          F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
          piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          puVar7 = ((undefined1 *)(gen_frame + 0x0));
          uVar6 = 0x2e7;
          pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
          F_0046aa70(pvVar5,uVar6,puVar7);
          F_00a6e080(&REFG(undefined, 0x14a9e40),0x3e,0,0);
        }
        else {
          uVar2 = F_0071d210((*(undefined * PTR32 *)(gen_frame + 0x18)));
          if ((9999 < uVar2) || (*(char *)(uVar4 + 0xa6) == '\0')) goto LAB_00a431da;
          F_004816e0(((undefined1 *)(gen_frame + 0x0)));
          uVar4 = F_0046e5e0(param_1);
          (*(uint *)(gen_frame + 0x1c)) = 0;
          (*(uint *)(gen_frame + 0x1c)) = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
          (*(undefined1 *)(gen_frame + 0x24)) = 0;
          F_00493b50(((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x1c)));
          F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
          piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          puVar7 = ((undefined1 *)(gen_frame + 0x0));
          uVar6 = 0x2e8;
          pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
          F_0046aa70(pvVar5,uVar6,puVar7);
        }
        F_00493180(((undefined1 *)(gen_frame + 0x0)));
      }
    }
  }
LAB_00a431da: ;
  if (((param_3 & 0x10) != 0) && ((*(byte *)((int)param_1 + 0x14) & 1) != 0)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x3c,0,0);
  }
  if ((param_3 & 0x40) != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 0x22;
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    pvVar5 = (undefined *)F_00763050(uVar4,uVar6);
    F_008e9cb0(pvVar5);
    uVar6 = 0x23;
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    pvVar5 = (undefined *)F_00763050(uVar4,uVar6);
    F_008edf60(pvVar5);
  }
  uVar4 = F_00a70960(&REFG(undefined, 0x14ab790));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_00a43260 */
uint F_00a43260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa43260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xcf0];
  undefined2 * puVar1;
  undefined2 * puVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined2 * this_00;
  uint uVar6;
  int * piVar7;
  int iVar8;
  int * PTR32 * ppiVar9;
  undefined4 * puVar10;
  int iVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  (*(uint *)(gen_frame + 0xcdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xce0);
  (*(int *)(gen_frame + 0x1c)) = param_2;
  if (param_3 == 0) {
    uVar4 = 6;
  }
  else {
    *(int *)((int)this + 0x2458) = param_1;
    *(undefined1 *)((int)this + 0x245c) = 1;
    F_00c48350((undefined *)((int)this + 0x245d),0,0x2a);
    (*(uint *)(gen_frame + 0x18)) = 0;
    iVar8 = param_2;
    do {
      puVar1 = (undefined2 *)((int)((int * PTR32 *)(gen_frame + 0xcc0)) + (*(uint *)(gen_frame + 0x18)) * 2);
      *puVar1 = 9999;
      puVar2 = (undefined2 *)((int)((undefined4 *)(gen_frame + 0xca4)) + (*(uint *)(gen_frame + 0x18)) * 2);
      *puVar2 = 0xffff;
      uVar4 = *(uint *)(iVar8 + (*(uint *)(gen_frame + 0x18)) * 8);
      uVar6 = (*(uint *)(gen_frame + 0x18));
      if (uVar4 != 0) {
        if ((byte)(*(uint *)(gen_frame + 0x18)) < 0xe) {
          switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x18)) & 0xff)) {
          case 0: ;
            (*(uint *)(gen_frame + 0x14)) = 0xdac;
            break;
          default: ;
            (*(uint *)(gen_frame + 0x14)) = ((*(uint *)(gen_frame + 0x18)) & 0xff) + 0xc7f;
            break;
          case 0xb: ;
          case 0xc: ;
            (*(uint *)(gen_frame + 0x14)) = 0xce4;
            break;
          case 0xd: ;
            (*(uint *)(gen_frame + 0x14)) = 0xd48;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x14)) = 9999;
        }
        pvVar5 = (undefined *)F_00a36f30(this,1000);
        if (pvVar5 == (undefined *)0x0) {
          (*(undefined2 * PTR32 *)(gen_frame + 0xc)) = (undefined2 *)0x0;
LAB_00a433ba: ;
          if ((*(uint *)(gen_frame + 0x18)) == 0xb) {
            this_00 = (undefined2 *)F_00a3a150(this,1000,0xc);
            if (((this_00 != (undefined2 *)0x0) &&
                ((uVar6 = F_0046e5e0(this_00), uVar6 == *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x58) &&
                 (bVar3 = F_0046e590(this_00), bVar3 == *(byte *)((*(int *)(gen_frame + 0x1c)) + 0x5c))))) &&
               ((uVar6 = F_0046e5e0(this_00), uVar6 != *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x60) ||
                (bVar3 = F_0046e590(this_00), bVar3 != *(byte *)((*(int *)(gen_frame + 0x1c)) + 100)))))
            goto LAB_00a43510;
          }
          else if ((*(uint *)(gen_frame + 0x18)) == 0xc) {
            this_00 = (undefined2 *)F_00a3a150(this,1000,0xb);
            if (((this_00 != (undefined2 *)0x0) &&
                (uVar6 = F_0046e5e0(this_00), uVar6 == *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x60))) &&
               ((bVar3 = F_0046e590(this_00), bVar3 == *(byte *)((*(int *)(gen_frame + 0x1c)) + 100) &&
                ((uVar6 = F_0046e5e0(this_00), uVar6 != *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x58) ||
                 (bVar3 = F_0046e590(this_00), bVar3 != *(byte *)((*(int *)(gen_frame + 0x1c)) + 0x5c)))))))
            goto LAB_00a43510;
            goto LAB_00a43527;
          }
          goto LAB_00a4342d;
        }
        this_00 = (undefined2 *)F_00a37da0(pvVar5,(*(uint *)(gen_frame + 0x18)));
        (*(undefined2 * PTR32 *)(gen_frame + 0xc)) = this_00;
        if (((this_00 == (undefined2 *)0x0) || (uVar6 = F_0046e5e0(this_00), uVar6 != uVar4)) ||
           (bVar3 = F_0046e590(this_00), bVar3 != *(byte *)((*(int *)(gen_frame + 0x1c)) + 4 + (*(uint *)(gen_frame + 0x18)) * 8)))
        goto LAB_00a433ba;
LAB_00a43510: ;
        iVar11 = (*(int *)(gen_frame + 0x1c));
        if (this_00 == (undefined2 *)0x0) {
          if ((*(uint *)(gen_frame + 0x18)) == 0xc) {
LAB_00a43527: ;
            if ((*(int *)((*(int *)(gen_frame + 0x1c)) + 0x60) != *(int *)((*(int *)(gen_frame + 0x1c)) + 0x58)) ||
               ((*(uint *)(gen_frame + 0x14)) != (*(uint *)(gen_frame + 0xcd4)) >> 0x10)) goto LAB_00a4342d;
            uVar6 = (uint)(*(ushort *)(gen_frame + 0xcba));
          }
          else {
LAB_00a4342d: ;
            uVar6 = 0xffffffff;
          }
          iVar8 = (*(int *)(gen_frame + 0x1c));
          bVar3 = *(byte *)((*(int *)(gen_frame + 0x1c)) + 4 + (*(uint *)(gen_frame + 0x18)) * 8);
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          this_00 = (undefined2 *)F_00a3dc60(this,(*(uint *)(gen_frame + 0x14)),uVar4,&(*(undefined4 *)(gen_frame + 0x10)),0,(uint)bVar3,uVar6);
          iVar11 = (*(int *)(gen_frame + 0x1c));
          if (this_00 == (undefined2 *)0x0) {
            if (((*(undefined2 * PTR32 *)(gen_frame + 0xc)) == (undefined2 *)0x0) ||
               (uVar4 = F_0046e5e0((*(undefined2 * PTR32 *)(gen_frame + 0xc))), uVar4 != *(uint *)(iVar8 + (*(uint *)(gen_frame + 0x18)) * 8))) {
              if ((*(uint *)(gen_frame + 0x18)) == 0xb) {
                this_00 = (undefined2 *)F_00a3a150(this,1000,0xc);
                iVar8 = (*(int *)(gen_frame + 0x1c));
                if (((this_00 != (undefined2 *)0x0) &&
                    (uVar4 = F_0046e5e0(this_00), iVar8 = (*(int *)(gen_frame + 0x1c)),
                    uVar4 == *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x58))) &&
                   (uVar4 = F_0046e5e0(this_00), iVar8 = (*(int *)(gen_frame + 0x1c)),
                   uVar4 != *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x60))) {
                  *(undefined1 *)((int)this + 0x2480) = 1;
                  goto LAB_00a435f4;
                }
              }
              else if ((*(uint *)(gen_frame + 0x18)) == 0xc) {
                this_00 = (undefined2 *)F_00a3a150(this,1000,0xb);
                if (((this_00 != (undefined2 *)0x0) &&
                    (uVar4 = F_0046e5e0(this_00), uVar4 == *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x60))) &&
                   (uVar4 = F_0046e5e0(this_00), uVar4 != *(uint *)((*(int *)(gen_frame + 0x1c)) + 0x58))) {
                  *(undefined1 *)((int)this + 0x2483) = 1;
                  goto LAB_00a435f4;
                }
                goto LAB_00a43605;
              }
              goto LAB_00a43637;
            }
            *(undefined1 *)((*(uint *)(gen_frame + 0x18)) * 3 + 0x245f + (int)this) = 1;
            this_00 = (*(undefined2 * PTR32 *)(gen_frame + 0xc));
LAB_00a435f4: ;
            iVar11 = (*(int *)(gen_frame + 0x1c));
            if (this_00 != (undefined2 *)0x0) goto LAB_00a437fc;
            iVar8 = (*(int *)(gen_frame + 0x1c));
            if ((*(uint *)(gen_frame + 0x18)) == 0xc) {
LAB_00a43605: ;
              iVar8 = (*(int *)(gen_frame + 0x1c));
              if ((*(int *)((*(int *)(gen_frame + 0x1c)) + 0x60) != *(int *)((*(int *)(gen_frame + 0x1c)) + 0x58)) ||
                 ((*(uint *)(gen_frame + 0x14)) != (*(uint *)(gen_frame + 0xcd4)) >> 0x10)) goto LAB_00a43637;
              uVar4 = (uint)(*(ushort *)(gen_frame + 0xcba));
            }
            else {
LAB_00a43637: ;
              uVar4 = 0xffffffff;
            }
            uVar14 = *(undefined4 *)(iVar8 + (*(uint *)(gen_frame + 0x18)) * 8);
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            this_00 = (undefined2 *)
                      F_00a3dc60(this,(*(uint *)(gen_frame + 0x14)),uVar14,&(*(undefined4 *)(gen_frame + 0x10)),0,0xffffffff,uVar4);
            if (this_00 == (undefined2 *)0x0) {
              *(undefined1 *)((int)this + (*(uint *)(gen_frame + 0x18)) * 3 + 0x245d) = 1;
              uVar6 = (*(uint *)(gen_frame + 0x18));
              if ((*(uint *)(gen_frame + 0x18)) != 0) goto LAB_00a4381b;
              *(undefined1 *)((int)this + 0x245c) = 0;
              F_00a42940(param_1,0,(int)this + 0x245d,1);
              piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0x34))(piVar7);
              uVar4 = F_0043b3e0(uVar4,param_1);
              F_0042cc20(((undefined1 *)(gen_frame + 0xc40)),uVar4 + 4,REFG(undefined4, 0x108cc50));
              ((int * PTR32 *)(gen_frame + 0xcc0))[1] = (int *)0x0;
              piVar7 = (int *)F_004296a0(8,0,0x2c4);
              ((int * PTR32 *)(gen_frame + 0xcc0))[1] = piVar7;
              if (piVar7 != (int *)0x0) {
                *piVar7 = 0;
                piVar7[1] = 0;
              }
              *piVar7 = (int)(((int * PTR32 *)(gen_frame + 0xcc0)) + 1);
              ((int * PTR32 *)(gen_frame + 0xcc0))[2] = (int *)0x0;
              ((int * PTR32 *)(gen_frame + 0xcc0))[3] = (int *)0x0;
              ((int * PTR32 *)(gen_frame + 0xcc0))[4] = (int *)0x0;
              (*(uint *)(gen_frame + 0xcd4)) = 0;
              (*(int *)(gen_frame + 0xc98)) = 0;
              (*(int * PTR32 *)(gen_frame + 0xc9c)) = (undefined4 *)0x0;
              (*(char *)(gen_frame + 0xca0)) = -1;
              F_00490f90(&(*(int *)(gen_frame + 0xc98)),((undefined1 *)(gen_frame + 0xc40)));
              F_00493bc0(((int * PTR32 *)(gen_frame + 0xcc0)) + 1,&(*(int *)(gen_frame + 0xc98)));
              if ((((*(int * PTR32 *)(gen_frame + 0xc9c)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0xca0)) != '\0')) && ((*(char *)(gen_frame + 0xca0)) == '\x01')) {
                pvVar5 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xc9c));
                *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
                if (*(int *)((int)pvVar5 + 0x54) < 1) {
                  F_0042c880(pvVar5);
                  F_00406ad0(pvVar5);
                }
              }
              (*(int *)(gen_frame + 0xc98)) = 0;
              (*(int *)(gen_frame + 0xc98)) = param_1 + 1;
              (*(char *)(gen_frame + 0xca0)) = '\0';
              (*(int * PTR32 *)(gen_frame + 0xc9c)) = &(*(int *)(gen_frame + 0xc98));
              F_00493b50(((int * PTR32 *)(gen_frame + 0xcc0)) + 1,&(*(int *)(gen_frame + 0xc98)));
              if ((((*(int * PTR32 *)(gen_frame + 0xc9c)) != (int *)0x0) && ((*(char *)(gen_frame + 0xca0)) != '\0')) && ((*(char *)(gen_frame + 0xca0)) == '\x01')) {
                pvVar5 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0xc9c));
                *(int *)((int)pvVar5 + 0x54) = *(int *)((int)pvVar5 + 0x54) + -1;
                if (*(int *)((int)pvVar5 + 0x54) < 1) {
                  F_0042c880(pvVar5);
                  F_00406ad0(pvVar5);
                }
              }
              piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              if (param_1 == 100) {
                uVar14 = 0x2fb;
                pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
                F_0046a630(pvVar5,uVar14);
              }
              else {
                ppiVar9 = ((int * PTR32 *)(gen_frame + 0xcc0)) + 1;
                uVar14 = 0x2f8;
                pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
                F_0046aa70(pvVar5,uVar14,ppiVar9);
              }
              F_00492c50(((int * PTR32 *)(gen_frame + 0xcc0)) + 1);
              F_00429760(((int * PTR32 *)(gen_frame + 0xcc0))[1],8,0x2c4);
              ((int * PTR32 *)(gen_frame + 0xcc0))[1] = (int *)0x0;
              F_0042c880(((undefined1 *)(gen_frame + 0xc40)));
              uVar4 = 4;
              goto LAB_00a4389a;
            }
            *(undefined1 *)((*(uint *)(gen_frame + 0x18)) * 3 + 0x245f + (int)this) = 1;
            iVar11 = iVar8;
          }
        }
LAB_00a437fc: ;
        *puVar1 = *this_00;
        *puVar2 = this_00[2];
        uVar6 = (*(uint *)(gen_frame + 0x18));
        iVar8 = iVar11;
      }
LAB_00a4381b: ;
      (*(uint *)(gen_frame + 0x18)) = uVar6 + 1;
    } while ((int)(uVar6 + 1) < 0xe);
    uVar4 = F_00a36f30(this,1000);
    *(undefined1 *)(uVar4 + 0x10) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0x1af;
    (*(undefined4 *)(gen_frame + 0x24)) = 0x50;
    (*(int *)(gen_frame + 0x38)) = param_1;
    ppiVar9 = ((int * PTR32 *)(gen_frame + 0xcc0));
    puVar12 = ((undefined4 *)(gen_frame + 0x3c));
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = *ppiVar9;
      ppiVar9 = ppiVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar15 = 0;
    uVar14 = 0;
    puVar12 = &(*(undefined4 *)(gen_frame + 0x20));
    puVar10 = ((undefined4 *)(gen_frame + 0xca4));
    puVar13 = ((undefined4 *)(gen_frame + 0x58));
    for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    pvVar5 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    F_00974e00(pvVar5,puVar12,uVar14,uVar15);
    uVar4 = 0;
  }
LAB_00a4389a: ;
  F_00c47745((*(uint *)(gen_frame + 0xcdc)) ^ (uint)(uint)(gen_frame + 0xce0));
  return uVar4;
}

/* ref: FUN_00a43920 */
uint F_00a43920(unsigned int gen_a0)
{
  GEN_ENTER(0xa43920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined1 * puVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 * PTR32 * ppuVar14;
  
  ((int *)(gen_frame + 0x54))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = this;
  ((int *)(gen_frame + 0x54))[0] = 0;
  ((int *)(gen_frame + 0x54))[1] = 0;
  ((int *)(gen_frame + 0x54))[2] = 0;
  ((int *)(gen_frame + 0x54))[3] = 0;
  ((int *)(gen_frame + 0x54))[4] = 0;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar13 = 0x570;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
  F_0046a630(pvVar4,uVar13);
  (*(int *)(gen_frame + 0x34)) = 0;
  do {
    iVar11 = (*(int *)(gen_frame + 0x34));
    piVar5 = (int *)F_00a36f30((*(undefined1 * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar5;
    piVar6 = (int *)0x0;
    if (piVar5 == (int *)0x0) goto LAB_00a43cba;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)piVar5[3];
    (*(int *)(gen_frame + 0x14)) = 0;
    if (0 < piVar5[3]) {
      (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
      do {
        piVar6 = (int *)*(*(int * PTR32 *)(gen_frame + 0x8));
        if (((piVar6 == (int *)0x0) || ((*(int *)(gen_frame + 0x14)) < 0)) || ((*(int * PTR32 *)(gen_frame + 0x8))[3] <= (*(int *)(gen_frame + 0x14))))
        goto LAB_00a43cba;
        piVar6 = (int *)((int)piVar6 + (int)(*(int * PTR32 *)(gen_frame + 0x38)));
        piVar5 = piVar6;
        if (*(char *)((int)piVar6 + 6) != '\0') {
          iVar11 = (int)(short)piVar6[2];
          piVar6 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)((int)piVar6 + 10));
          if (((*piVar6 == 0) || (iVar11 < 0)) || (piVar6[3] <= iVar11)) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)(iVar11 * 0x40 + *piVar6);
          }
        }
        if (piVar5 == (int *)0x0) goto LAB_00a43cba;
        uVar7 = F_0046e5e0(piVar5);
        uVar7 = F_00ab24a0(uVar7);
        if (((*(char *)((int)piVar5 + 6) != '\0') || (piVar5[2] != 0)) && (uVar7 != 0)) {
          iVar11 = 0;
          do {
            bVar2 = F_00a42cb0(piVar5,0);
            if ((bVar2 != 0) && (*(int *)(uVar7 + 0x78) == iVar11 + 0x15da)) {
              ((int *)(gen_frame + 0x54))[(int)(iVar11)] = ((int *)(gen_frame + 0x54))[(int)(iVar11)] + 1;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < 5);
        }
        (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 0x10;
        iVar8 = (*(int *)(gen_frame + 0x14)) + 1;
        (*(int *)(gen_frame + 0x14)) = iVar8;
        iVar11 = (*(int *)(gen_frame + 0x34));
      } while (iVar8 < (int)(*(int * PTR32 *)(gen_frame + 0x10)));
    }
    (*(int *)(gen_frame + 0x34)) = iVar11 + 1;
  } while (iVar11 + 1 < 4);
  piVar6 = ((int *)(gen_frame + 0x54));
  (*(int *)(gen_frame + 0x34)) = 0x15da;
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar6;
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = &REFG(undefined, 0x5);
  do {
    iVar8 = (*(int *)(gen_frame + 0x34));
    iVar11 = *(*(int * PTR32 *)(gen_frame + 0x38));
    if ((iVar11 != 0) && (piVar6 = (int *)F_00ab24a0((*(int *)(gen_frame + 0x34))), piVar6 != (int *)0x0)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)0x0;
      puVar9 = (undefined4 *)F_004296a0(8,0,0x2c4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar9;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      *puVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      (*(char *)(gen_frame + 0x44)) = '\0';
      (*(int *)(gen_frame + 0x3c)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(uint *)(gen_frame + 0x20)) = 0;
      (*(int *)(gen_frame + 0x24)) = 0;
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x3c)) = iVar8;
      (*(int * PTR32 *)(gen_frame + 0x40)) = &(*(int *)(gen_frame + 0x3c));
      F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),1);
      uVar7 = (*(int *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x20)) <= uVar7) {
        uVar7 = uVar7 - (*(uint *)(gen_frame + 0x20));
      }
      if (*(int *)((*(int *)(gen_frame + 0x1c)) + uVar7 * 4) == 0) {
        uVar10 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x1c)) + uVar7 * 4) = uVar10;
      }
      piVar6 = *(int * PTR32 *)((*(int *)(gen_frame + 0x1c)) + uVar7 * 4);
      if (piVar6 != (int *)0x0) {
        *piVar6 = 0;
        piVar6[1] = 0;
        *(undefined1 *)(piVar6 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x44)) != -1) && (piVar6 != &(*(int *)(gen_frame + 0x3c)))) {
          (*(int * PTR32 *)(gen_frame + 0xc)) = piVar6;
          (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x40));
          if ((*(char *)(gen_frame + 0x44)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0xc)));
          }
          else if ((*(char *)(gen_frame + 0x44)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0xc)));
          }
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0x40)) != (int *)0x0) {
        if (((*(char *)(gen_frame + 0x44)) != '\0') && ((*(char *)(gen_frame + 0x44)) == '\x01')) {
          pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x40));
          *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
          if (*(int *)((int)pvVar4 + 0x54) < 1) {
            F_0042c880(pvVar4);
            F_00406ad0(pvVar4);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)0x0;
        (*(char *)(gen_frame + 0x44)) = -1;
      }
      (*(int *)(gen_frame + 0x48)) = 0;
      (*(int *)(gen_frame + 0x48)) = iVar11;
      (*(int * PTR32 *)(gen_frame + 0x4c)) = &(*(int *)(gen_frame + 0x48));
      (*(char *)(gen_frame + 0x50)) = '\0';
      if ((*(uint *)(gen_frame + 0x20)) <= (*(int *)(gen_frame + 0x28)) + 1U) {
        F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),1);
      }
      uVar7 = (*(int *)(gen_frame + 0x28)) + (*(int *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x20)) <= uVar7) {
        uVar7 = uVar7 - (*(uint *)(gen_frame + 0x20));
      }
      if (*(int *)((*(int *)(gen_frame + 0x1c)) + uVar7 * 4) == 0) {
        uVar10 = F_004296a0(0xc,0,0x2c4);
        *(uint *)((*(int *)(gen_frame + 0x1c)) + uVar7 * 4) = uVar10;
      }
      piVar6 = *(int * PTR32 *)((*(int *)(gen_frame + 0x1c)) + uVar7 * 4);
      if (piVar6 != (int *)0x0) {
        *piVar6 = 0;
        piVar6[1] = 0;
        *(undefined1 *)(piVar6 + 2) = 0xff;
        if (((*(char *)(gen_frame + 0x50)) != -1) && (piVar6 != &(*(int *)(gen_frame + 0x48)))) {
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar6;
          (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x4c));
          if ((*(char *)(gen_frame + 0x50)) == '\0') {
            F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x4)));
          }
          else if ((*(char *)(gen_frame + 0x50)) == '\x01') {
            F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x4)));
          }
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      if ((*(int * PTR32 *)(gen_frame + 0x4c)) != (int *)0x0) {
        if (((*(char *)(gen_frame + 0x50)) != '\0') && ((*(char *)(gen_frame + 0x50)) == '\x01')) {
          pvVar4 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x4c));
          *(int *)((int)pvVar4 + 0x54) = *(int *)((int)pvVar4 + 0x54) + -1;
          if (*(int *)((int)pvVar4 + 0x54) < 1) {
            F_0042c880(pvVar4);
            F_00406ad0(pvVar4);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)0x0;
        (*(char *)(gen_frame + 0x50)) = -1;
      }
      ppuVar14 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      uVar13 = 0x571;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
      F_0046aa70(pvVar4,uVar13,ppuVar14);
      F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
      uVar12 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x18)),8,0x2c4);
      piVar6 = (int *)uVar12;
      iVar8 = (*(int *)(gen_frame + 0x34));
    }
    (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 1;
    puVar1 = (*(undefined1 * PTR32 *)(gen_frame + 0x30)) + -1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = puVar1;
    (*(int *)(gen_frame + 0x34)) = iVar8 + 1;
  } while (puVar1 != (undefined1 *)0x0);
LAB_00a43cba: ;
  F_00c47745(((int *)(gen_frame + 0x54))[5] ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)piVar6;
}

/* ref: FUN_00a43cd0 */
uint F_00a43cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa43cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 * PTR32 * ppuVar13;
  
  ((int *)(gen_frame + 0x54))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0xc)) = this;
  ((int *)(gen_frame + 0x54))[0] = 0;
  ((int *)(gen_frame + 0x54))[1] = 0;
  ((int *)(gen_frame + 0x54))[2] = 0;
  ((int *)(gen_frame + 0x54))[3] = 0;
  ((int *)(gen_frame + 0x54))[4] = 0;
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar12 = 0x570;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  F_0046a630(pvVar3,uVar12);
  piVar4 = (int *)F_00a36f30(this,param_1);
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
  piVar5 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)piVar4[3];
    (*(int *)(gen_frame + 0x34)) = 0;
    if (0 < piVar4[3]) {
      (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
      do {
        piVar5 = (int *)*(*(int * PTR32 *)(gen_frame + 0x18));
        if (((piVar5 == (int *)0x0) || ((*(int *)(gen_frame + 0x34)) < 0)) || ((*(int * PTR32 *)(gen_frame + 0x18))[3] <= (*(int *)(gen_frame + 0x34))))
        goto LAB_00a4405a;
        piVar5 = (int *)((int)piVar5 + (int)(*(int * PTR32 *)(gen_frame + 0x38)));
        piVar4 = piVar5;
        if (*(char *)((int)piVar5 + 6) != '\0') {
          iVar9 = (int)(short)piVar5[2];
          piVar5 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)((int)piVar5 + 10));
          if (((*piVar5 == 0) || (iVar9 < 0)) || (piVar5[3] <= iVar9)) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)(iVar9 * 0x40 + *piVar5);
          }
        }
        if (piVar4 == (int *)0x0) goto LAB_00a4405a;
        uVar6 = F_0046e5e0(piVar4);
        uVar6 = F_00ab24a0(uVar6);
        if (((*(char *)((int)piVar4 + 6) != '\0') || (piVar4[2] != 0)) && (uVar6 != 0)) {
          iVar9 = 0;
          do {
            bVar1 = F_00a42cb0(piVar4,0);
            if ((bVar1 != 0) && (*(int *)(uVar6 + 0x78) == iVar9 + 0x15da)) {
              ((int *)(gen_frame + 0x54))[(int)(iVar9)] = ((int *)(gen_frame + 0x54))[(int)(iVar9)] + 1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < 5);
        }
        (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 0x10;
        iVar9 = (*(int *)(gen_frame + 0x34)) + 1;
        (*(int *)(gen_frame + 0x34)) = iVar9;
      } while (iVar9 < (int)(*(int * PTR32 *)(gen_frame + 0x14)));
    }
    piVar5 = ((int *)(gen_frame + 0x54));
    (*(int *)(gen_frame + 0x34)) = 0x15da;
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar5;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)&REFG(undefined, 0x5);
    do {
      iVar10 = (*(int *)(gen_frame + 0x34));
      iVar9 = *(*(int * PTR32 *)(gen_frame + 0x38));
      if ((iVar9 != 0) && (piVar5 = (int *)F_00ab24a0((*(int *)(gen_frame + 0x34))), piVar5 != (int *)0x0)) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)0x0;
        puVar7 = (undefined4 *)F_004296a0(8,0,0x2c4);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar7;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
        *puVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
        (*(char *)(gen_frame + 0x44)) = '\0';
        (*(int *)(gen_frame + 0x3c)) = 0;
        (*(int *)(gen_frame + 0x20)) = 0;
        (*(uint *)(gen_frame + 0x24)) = 0;
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(int *)(gen_frame + 0x2c)) = 0;
        (*(int *)(gen_frame + 0x3c)) = iVar10;
        (*(int * PTR32 *)(gen_frame + 0x40)) = &(*(int *)(gen_frame + 0x3c));
        F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),1);
        uVar6 = (*(int *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x28));
        if ((*(uint *)(gen_frame + 0x24)) <= uVar6) {
          uVar6 = uVar6 - (*(uint *)(gen_frame + 0x24));
        }
        if (*(int *)((*(int *)(gen_frame + 0x20)) + uVar6 * 4) == 0) {
          uVar8 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x20)) + uVar6 * 4) = uVar8;
        }
        piVar5 = *(int * PTR32 *)((*(int *)(gen_frame + 0x20)) + uVar6 * 4);
        if (piVar5 != (int *)0x0) {
          *piVar5 = 0;
          piVar5[1] = 0;
          *(undefined1 *)(piVar5 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x44)) != -1) && (piVar5 != &(*(int *)(gen_frame + 0x3c)))) {
            (*(int * PTR32 *)(gen_frame + 0x10)) = piVar5;
            (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x40));
            if ((*(char *)(gen_frame + 0x44)) == '\0') {
              F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x10)));
            }
            else if ((*(char *)(gen_frame + 0x44)) == '\x01') {
              F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x10)));
            }
          }
        }
        (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
        if ((*(int * PTR32 *)(gen_frame + 0x40)) != (int *)0x0) {
          if (((*(char *)(gen_frame + 0x44)) != '\0') && ((*(char *)(gen_frame + 0x44)) == '\x01')) {
            pvVar3 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x40));
            *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
            if (*(int *)((int)pvVar3 + 0x54) < 1) {
              F_0042c880(pvVar3);
              F_00406ad0(pvVar3);
            }
          }
          (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)0x0;
          (*(char *)(gen_frame + 0x44)) = -1;
        }
        (*(int *)(gen_frame + 0x48)) = 0;
        (*(int *)(gen_frame + 0x48)) = iVar9;
        (*(int * PTR32 *)(gen_frame + 0x4c)) = &(*(int *)(gen_frame + 0x48));
        (*(char *)(gen_frame + 0x50)) = '\0';
        if ((*(uint *)(gen_frame + 0x24)) <= (*(int *)(gen_frame + 0x2c)) + 1U) {
          F_00486f80(&(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),1);
        }
        uVar6 = (*(int *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x28));
        if ((*(uint *)(gen_frame + 0x24)) <= uVar6) {
          uVar6 = uVar6 - (*(uint *)(gen_frame + 0x24));
        }
        if (*(int *)((*(int *)(gen_frame + 0x20)) + uVar6 * 4) == 0) {
          uVar8 = F_004296a0(0xc,0,0x2c4);
          *(uint *)((*(int *)(gen_frame + 0x20)) + uVar6 * 4) = uVar8;
        }
        piVar5 = *(int * PTR32 *)((*(int *)(gen_frame + 0x20)) + uVar6 * 4);
        if (piVar5 != (int *)0x0) {
          *piVar5 = 0;
          piVar5[1] = 0;
          *(undefined1 *)(piVar5 + 2) = 0xff;
          if (((*(char *)(gen_frame + 0x50)) != -1) && (piVar5 != &(*(int *)(gen_frame + 0x48)))) {
            (*(int * PTR32 *)(gen_frame + 0x8)) = piVar5;
            (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0x4c));
            if ((*(char *)(gen_frame + 0x50)) == '\0') {
              F_004919b0(&(*(int * PTR32 *)(gen_frame + 0x8)));
            }
            else if ((*(char *)(gen_frame + 0x50)) == '\x01') {
              F_00491a60(&(*(int * PTR32 *)(gen_frame + 0x8)));
            }
          }
        }
        (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
        if ((*(int * PTR32 *)(gen_frame + 0x4c)) != (int *)0x0) {
          if (((*(char *)(gen_frame + 0x50)) != '\0') && ((*(char *)(gen_frame + 0x50)) == '\x01')) {
            pvVar3 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x4c));
            *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
            if (*(int *)((int)pvVar3 + 0x54) < 1) {
              F_0042c880(pvVar3);
              F_00406ad0(pvVar3);
            }
          }
          (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)0x0;
          (*(char *)(gen_frame + 0x50)) = -1;
        }
        ppuVar13 = &(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
        uVar12 = 0x571;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
        F_0046aa70(pvVar3,uVar12,ppuVar13);
        F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
        uVar11 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),8,0x2c4);
        piVar5 = (int *)uVar11;
        iVar10 = (*(int *)(gen_frame + 0x34));
      }
      (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 1;
      piVar4 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + -1);
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
      (*(int *)(gen_frame + 0x34)) = iVar10 + 1;
    } while (piVar4 != (int *)0x0);
  }
LAB_00a4405a: ;
  F_00c47745(((int *)(gen_frame + 0x54))[5] ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)piVar5;
}

/* ref: FUN_00a44070 */
byte F_00a44070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa44070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  byte bVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  int aiStackY_5798 [5578];
  undefined4 uStackY_70;
  
  ((uint *)(gen_frame + 0x40))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)(&REFG(undefined, 0x10e42c8) + param_3 * 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = param_2;
  ((uint *)(gen_frame + 0x40))[5] = 0;
  ((uint *)(gen_frame + 0x40))[6] = 0;
  ((uint *)(gen_frame + 0x40))[7] = 0;
  ((uint *)(gen_frame + 0x40))[8] = 0;
  ((uint *)(gen_frame + 0x40))[9] = 0;
  ((uint *)(gen_frame + 0x40))[0] = 0;
  ((uint *)(gen_frame + 0x40))[1] = 0;
  ((uint *)(gen_frame + 0x40))[2] = 0;
  ((uint *)(gen_frame + 0x40))[3] = 0;
  ((uint *)(gen_frame + 0x40))[4] = 0;
  *param_2 = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  do {
    iVar7 = *(*(int * PTR32 *)(gen_frame + 0x3c));
    if (iVar7 != 9999) {
      (*(uint *)(gen_frame + 0x10)) = iVar7;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0xa440f6;
      piVar4 = (int *)F_00a36f30((*(undefined * PTR32 *)(gen_frame + 0x38)),iVar7);
      (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar4;
      if (piVar4 == (int *)0x0) goto LAB_00a44228;
      iVar7 = 0;
      (*(int *)(gen_frame + 0x28)) = piVar4[3];
      if (0 < piVar4[3]) {
        (*(int *)(gen_frame + 0x34)) = 0;
        do {
          if (((*(*(int * PTR32 *)(gen_frame + 0x2c)) != 0) && (-1 < iVar7)) && (iVar7 < (*(int * PTR32 *)(gen_frame + 0x2c))[3])) {
            this_00 = (undefined *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x34)));
            if (*(char *)((int)this_00 + 6) != '\0') {
              iVar6 = (int)*(short *)((int)this_00 + 8);
              (*(uint *)(gen_frame + 0x10)) = (uint)*(ushort *)((int)this_00 + 10);
              (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0xa4414d;
              piVar4 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)((int)this_00 + 10));
              if (((*piVar4 == 0) || (iVar6 < 0)) || (piVar4[3] <= iVar6)) {
                this_00 = (undefined *)0x0;
              }
              else {
                this_00 = (undefined *)(iVar6 * 0x40 + *piVar4);
              }
            }
            if ((this_00 != (undefined *)0x0) &&
               ((*(char *)((int)this_00 + 6) != '\0' || (*(int *)((int)this_00 + 8) != 0)))) {
              (*(uint *)(gen_frame + 0x10)) = 0;
              (*(undefined * PTR32 *)(gen_frame + 0xc)) = this_00;
              (*(undefined4 *)(gen_frame + 0x8)) = 0xa4417d;
              bVar3 = F_00a42cb0(this_00,0);
              if (bVar3 != 0) {
                (*(uint *)(gen_frame + 0x10)) = 0xa44188;
                uVar5 = F_0046e5e0(this_00);
                (*(uint *)(gen_frame + 0x10)) = uVar5;
                (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0xa4418e;
                uVar5 = F_00ab24a0(uVar5);
                if (uVar5 != 0) {
                  aiStackY_5798[*(int *)(uVar5 + 0x78)] = aiStackY_5798[*(int *)(uVar5 + 0x78)] + 1;
                }
              }
            }
          }
          (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x40;
          iVar7 = iVar7 + 1;
        } while (iVar7 < (*(int *)(gen_frame + 0x28)));
      }
    }
    iVar7 = (*(int *)(gen_frame + 0x30)) + 1;
    (*(int * PTR32 *)(gen_frame + 0x3c)) = (*(int * PTR32 *)(gen_frame + 0x3c)) + 1;
    (*(int *)(gen_frame + 0x30)) = iVar7;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    (*(uint *)(gen_frame + 0x10)) = 1;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(int *)(gen_frame + 0x4)) = iVar7 + 0x15da;
    uStackY_70 = 0xa441e4;
    uVar5 = F_00a41080((*(undefined * PTR32 *)(gen_frame + 0x38)),iVar7 + 0x15da,0,1,1);
    ((uint *)(gen_frame + 0x40))[(int)(iVar7 + 5)] = uVar5;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)0x0;
  puVar8 = ((uint *)(gen_frame + 0x40));
  piVar4 = (*(int * PTR32 *)(gen_frame + 0x3c));
LAB_00a44203: ;
  do {
    uVar5 = *puVar8;
    if (uVar5 != 0) {
      uVar2 = ((uint *)(gen_frame + 0x40))[(int)((int)((int)piVar4 + 5))];
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + (int)piVar4;
      if (uVar2 < uVar5) {
        *piVar1 = *piVar1 + uVar2;
        *puVar8 = uVar5 - uVar2;
        ((uint *)(gen_frame + 0x40))[(int)((int)((int)piVar4 + 5))] = 0;
        *(*(undefined1 * PTR32 *)(gen_frame + 0x24)) = 1;
      }
      else {
        *piVar1 = *piVar1 + uVar5;
        ((uint *)(gen_frame + 0x40))[(int)((int)((int)piVar4 + 5))] = uVar2 - uVar5;
        *puVar8 = 0;
      }
      piVar4 = (int *)((int)piVar4 + 1);
      if ((int)piVar4 < 5) goto LAB_00a44203;
    }
    piVar4 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x3c)) + 1);
    puVar8 = puVar8 + 1;
    (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar4;
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x3c));
    if (4 < (int)piVar4) {
      iVar7 = 0;
      while (((uint *)(gen_frame + 0x40))[(int)(iVar7)] == 0) {
        iVar7 = iVar7 + 1;
        if (4 < iVar7) {
          F_00c47745(((uint *)(gen_frame + 0x40))[10] ^ (uint)(uint)(gen_frame + 0x6c));
          return 1;
        }
      }
LAB_00a44228: ;
      F_00c47745(((uint *)(gen_frame + 0x40))[10] ^ (uint)(uint)(gen_frame + 0x6c));
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a442a0 */
byte F_00a442a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa442a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  int aiStackY_5798 [5580];
  undefined4 uStackY_68;
  
  ((uint *)(gen_frame + 0x40))[10] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x2c)) = param_3;
  if ((param_1 != 1000) && (param_1 != 11000)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  (*(uint *)(gen_frame + 0x18)) = param_1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  ((uint *)(gen_frame + 0x40))[5] = 0;
  ((uint *)(gen_frame + 0x40))[6] = 0;
  ((uint *)(gen_frame + 0x40))[7] = 0;
  ((uint *)(gen_frame + 0x40))[8] = 0;
  ((uint *)(gen_frame + 0x40))[9] = 0;
  ((uint *)(gen_frame + 0x40))[0] = 0;
  ((uint *)(gen_frame + 0x40))[1] = 0;
  ((uint *)(gen_frame + 0x40))[2] = 0;
  ((uint *)(gen_frame + 0x40))[3] = 0;
  ((uint *)(gen_frame + 0x40))[4] = 0;
  *param_3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0xa44327;
  piVar3 = (int *)F_00a36f30(this,param_1);
  (*(int * PTR32 *)(gen_frame + 0x30)) = piVar3;
  if (piVar3 != (int *)0x0) {
    iVar7 = 0;
    (*(int *)(gen_frame + 0x34)) = piVar3[3];
    if (0 < piVar3[3]) {
      (*(int *)(gen_frame + 0x38)) = 0;
      do {
        if (((*(*(int * PTR32 *)(gen_frame + 0x30)) != 0) && (-1 < iVar7)) && (iVar7 < (*(int * PTR32 *)(gen_frame + 0x30))[3])) {
          pvVar4 = (undefined *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x38)));
          if (*(char *)((int)pvVar4 + 6) != '\0') {
            iVar6 = (int)*(short *)((int)pvVar4 + 8);
            (*(uint *)(gen_frame + 0x18)) = (uint)*(ushort *)((int)pvVar4 + 10);
            (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0xa44385;
            piVar3 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)((int)pvVar4 + 10));
            if (((*piVar3 == 0) || (iVar6 < 0)) || (piVar3[3] <= iVar6)) {
              pvVar4 = (undefined *)0x0;
            }
            else {
              pvVar4 = (undefined *)(iVar6 * 0x40 + *piVar3);
            }
          }
          if ((pvVar4 != (undefined *)0x0) &&
             ((*(char *)((int)pvVar4 + 6) != '\0' || (*(int *)((int)pvVar4 + 8) != 0)))) {
            (*(uint *)(gen_frame + 0x18)) = 0;
            (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar4;
            (*(undefined4 *)(gen_frame + 0x10)) = 0xa443b5;
            bVar2 = F_00a42cb0(pvVar4,0);
            if (bVar2 != 0) {
              (*(uint *)(gen_frame + 0x18)) = 0xa443c0;
              uVar5 = F_0046e5e0(pvVar4);
              (*(uint *)(gen_frame + 0x18)) = uVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0xa443c6;
              uVar5 = F_00ab24a0(uVar5);
              if (uVar5 != 0) {
                aiStackY_5798[*(int *)(uVar5 + 0x78)] = aiStackY_5798[*(int *)(uVar5 + 0x78)] + 1;
              }
            }
          }
        }
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x40;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (*(int *)(gen_frame + 0x34)));
    }
    iVar7 = 0;
    do {
      (*(uint *)(gen_frame + 0x18)) = 1;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x1;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = iVar7 + 0x15da;
      uStackY_68 = 0xa44404;
      uVar5 = F_00a41080((*(undefined * PTR32 *)(gen_frame + 0x3c)),iVar7 + 0x15da,0,1,1);
      ((uint *)(gen_frame + 0x40))[(int)(iVar7 + 5)] = uVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)0x0;
    puVar8 = ((uint *)(gen_frame + 0x40));
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
LAB_00a44423: ;
    do {
      uVar5 = *puVar8;
      if (uVar5 != 0) {
        uVar1 = ((uint *)(gen_frame + 0x40))[(int)((int)pvVar4 + 5)];
        piVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x28)) + (int)pvVar4;
        if (uVar1 < uVar5) {
          *piVar3 = *piVar3 + uVar1;
          *puVar8 = uVar5 - uVar1;
          ((uint *)(gen_frame + 0x40))[(int)((int)pvVar4 + 5)] = 0;
          *(*(undefined1 * PTR32 *)(gen_frame + 0x2c)) = 1;
        }
        else {
          *piVar3 = *piVar3 + uVar5;
          ((uint *)(gen_frame + 0x40))[(int)((int)pvVar4 + 5)] = uVar1 - uVar5;
          *puVar8 = 0;
        }
        pvVar4 = (undefined *)((int)pvVar4 + 1);
        if ((int)pvVar4 < 5) goto LAB_00a44423;
      }
      pvVar4 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 1);
      puVar8 = puVar8 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar4;
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    } while ((int)pvVar4 < 5);
    iVar7 = 0;
    while (((uint *)(gen_frame + 0x40))[(int)(iVar7)] == 0) {
      iVar7 = iVar7 + 1;
      if (4 < iVar7) {
        F_00c47745(((uint *)(gen_frame + 0x40))[10] ^ (uint)(uint)(gen_frame + 0x6c));
        return 1;
      }
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x40))[10] ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00a444b0 */
uint F_00a444b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa444b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a3eb60(param_1,param_2);
  if ((char)param_3 != '\0') {
    uVar1 = uVar1 | 1;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a42ea0(this,param_1,param_2,uVar1);
  }
  return uVar2;
}

/* ref: FUN_00a444f0 */
uint F_00a444f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa444f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  pvVar1 = (undefined *)F_00a36f30(this,param_1);
  if (pvVar1 == (undefined *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 3;
  }
  pvVar1 = (undefined *)F_00a37da0(pvVar1,(int)(short)(ushort)param_2);
  if ((*(char *)((int)pvVar1 + 6) == '\0') && (*(int *)((int)pvVar1 + 8) == 0)) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 4;
  }
  uVar2 = F_00a37c50(pvVar1);
  if (uVar2 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0x13;
  }
  F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
  F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),pvVar1);
  uVar2 = F_00a3a8a0(pvVar1);
  if (uVar2 != 0) {
    uVar2 = F_00a3a8a0(pvVar1);
    *(uint *)((int)pvVar1 + 0xc) = uVar2 - 1;
    if (((uVar2 - 1 == 0) &&
        (*(undefined4 *)((int)pvVar1 + 0xc) = 0, *(char *)((int)pvVar1 + 6) == '\0')) &&
       (*(int *)((int)pvVar1 + 8) != 1)) {
      *(undefined4 *)((int)pvVar1 + 8) = 0;
    }
  }
  uVar2 = F_00a3eb60(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  if (uVar2 != 0) {
    F_00a42ea0(this,pvVar1,((undefined1 *)(gen_frame + 0x8)),uVar2);
  }
  F_00a39450(this,param_1,(uint)(ushort)param_2);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
  *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 1;
  F_006d0fd0();
  F_00701020();
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00a44630 */
uint F_00a44630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa44630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  short sVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  int * piVar8;
  int * piVar9;
  undefined * pvVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 72)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 68)) = param_2;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)) = REFG(void * PTR32, 0x1379694);
  uVar4 = F_0046e5e0(param_1);
  uVar4 = F_00ab24a0(uVar4);
  ((byte *)(gen_frame + 0x8))[0x3c] = (char)uVar4;
  ((byte *)(gen_frame + 0x8))[0x3d] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x8))[0x3e] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x3f] = (char)(uVar4 >> 0x18);
  if ((uVar4 == 0) || (uVar5 = F_00906df0(param_1), uVar5 == 0)) {
LAB_00a45156: ;
    F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
    return 6;
  }
  ((byte *)(gen_frame + 0x8))[0x53] = *(byte *)(uVar4 + 0xa6);
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  F_00c48350(((byte *)(gen_frame + 0x8)) + 4,0,0x34);
  uVar5 = (uint)*(ushort *)(param_2 + 1);
  (*(ushort *)(gen_frame + 0x1ec)) = 0;
  (*(undefined4 *)(gen_frame + 0x1ee)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f2)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f6)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fa)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fe)) = 0;
  (*(undefined4 *)(gen_frame + 0x202)) = 0;
  (*(undefined2 *)(gen_frame + 0x206)) = 0;
  ((byte *)(gen_frame + 0x8))[99] = 0;
  ((byte *)(gen_frame + 0x8))[0x38] = (char)uVar5;
  ((byte *)(gen_frame + 0x8))[0x39] = (char)(uVar5 >> 8);
  ((byte *)(gen_frame + 0x8))[0x3a] = (char)(uVar5 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x3b] = (char)(uVar5 >> 0x18);
  if (*param_1 - 10000U < 7) {
    ((byte *)(gen_frame + 0x8))[0x60] = 1;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x60] = *param_1 - 12000U < 3;
  }
  ((byte *)(gen_frame + 0x8))[0x61] = 0;
  ((byte *)(gen_frame + 0x8))[0x62] = 0;
  uVar5 = F_00a36f30((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)),*param_2);
  ((byte *)(gen_frame + 0x8))[0x40] = (char)uVar5;
  ((byte *)(gen_frame + 0x8))[0x41] = (char)(uVar5 >> 8);
  ((byte *)(gen_frame + 0x8))[0x42] = (char)(uVar5 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x43] = (char)(uVar5 >> 0x18);
  if (uVar5 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
    return 3;
  }
  bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x3e);
  if (bVar3 == 0) {
    uVar13 = 0;
    uVar12 = 0;
    if (*param_2 == *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)) + 0x28)))) {
      fVar15 = REFG(float, 0x10916ec);
      uVar4 = F_0046e5e0(param_1);
      F_00a7d290(0x2c4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)),uVar4,uVar12,uVar13,fVar15);
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
      return 0xb;
    }
    fVar15 = REFG(float, 0x10916ec);
    uVar4 = F_0046e5e0(param_1);
    F_00a7d290(0x2b9,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)),uVar4,uVar12,uVar13,fVar15);
    F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
    return 0xb;
  }
  ((byte *)(gen_frame + 0x8))[0x54] = 0;
  ((byte *)(gen_frame + 0x8))[0x55] = 0;
  ((byte *)(gen_frame + 0x8))[0x56] = 0;
  ((byte *)(gen_frame + 0x8))[0x57] = 0;
  uVar5 = F_00a37da0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 64)),0xd);
  ((byte *)(gen_frame + 0x8))[0x4c] = (char)uVar5;
  ((byte *)(gen_frame + 0x8))[0x4d] = (char)(uVar5 >> 8);
  ((byte *)(gen_frame + 0x8))[0x4e] = (char)(uVar5 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x4f] = (char)(uVar5 >> 0x18);
  if ((uVar5 != 0) && (uVar5 = F_0071d3a0(uVar5), (char)uVar5 == '\0')) {
    ((byte *)(gen_frame + 0x8))[0x61] = 1;
  }
  if ((short)param_2[1] == 0) {
    uVar5 = (uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)) + 0x1688)));
    if (uVar5 != *(byte *)(uVar4 + 0xa8)) {
      uVar6 = F_00ab21a0(uVar5);
      if (*(char *)(uVar6 + 0x3e) != *(char *)(uVar4 + 0xa8)) {
        ((byte *)(gen_frame + 0x8))[99] = 1;
      }
      if ((((byte *)(gen_frame + 0x8))[0x61] != 0) && (bVar3 = F_00a36890(uVar4), bVar3 != 0)) {
        ((byte *)(gen_frame + 0x8))[99] = 1;
      }
      bVar3 = F_00a368f0(uVar4,uVar5);
      if (bVar3 == 0) {
        ((byte *)(gen_frame + 0x8))[99] = 1;
      }
    }
    if ((((byte *)(gen_frame + 0x8))[0x61] == 0) || (((byte *)(gen_frame + 0x8))[99] != 0)) {
      uVar5 = F_00ab21a0((uint)*(byte *)(uVar4 + 0xa8));
      if (*(char *)(uVar5 + 0x45) != '\0') {
        ((byte *)(gen_frame + 0x8))[0x62] = 1;
        uVar4 = F_00a3dac0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)),(uint)*(byte *)(uVar4 + 0xa8));
        ((byte *)(gen_frame + 0x8))[0x54] = (char)uVar4;
        ((byte *)(gen_frame + 0x8))[0x55] = (char)(uVar4 >> 8);
        ((byte *)(gen_frame + 0x8))[0x56] = (char)(uVar4 >> 0x10);
        ((byte *)(gen_frame + 0x8))[0x57] = (char)(uVar4 >> 0x18);
        if ((uVar4 == 0) || (uVar4 = F_0071d3a0(uVar4), (char)uVar4 != '\0')) {
          piVar8 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar12 = 0x2b6;
          pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046a630(pvVar7,uVar12);
          goto LAB_00a449d8;
        }
      }
    }
    else {
      ((byte *)(gen_frame + 0x8))[0x62] = 1;
      ((byte *)(gen_frame + 0x8))[0x54] = ((byte *)(gen_frame + 0x8))[0x4c];
      ((byte *)(gen_frame + 0x8))[0x55] = ((byte *)(gen_frame + 0x8))[0x4d];
      ((byte *)(gen_frame + 0x8))[0x56] = ((byte *)(gen_frame + 0x8))[0x4e];
      ((byte *)(gen_frame + 0x8))[0x57] = ((byte *)(gen_frame + 0x8))[0x4f];
    }
  }
  if ((short)param_2[1] == 0xd) {
    ((byte *)(gen_frame + 0x8))[99] = 1;
    ((byte *)(gen_frame + 0x8))[0x62] = 1;
    ((byte *)(gen_frame + 0x8))[0x54] = ((byte *)(gen_frame + 0x8))[0x48];
    ((byte *)(gen_frame + 0x8))[0x55] = ((byte *)(gen_frame + 0x8))[0x49];
    ((byte *)(gen_frame + 0x8))[0x56] = ((byte *)(gen_frame + 0x8))[0x4a];
    ((byte *)(gen_frame + 0x8))[0x57] = ((byte *)(gen_frame + 0x8))[0x4b];
  }
  iVar11 = 0;
  piVar8 = param_2;
  while (pvVar7 = (undefined *)F_00a37da0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 64)),iVar11), pvVar7 != (undefined *)0x0) {
    if ((*(char *)((int)pvVar7 + 6) != '\0') || (*(int *)((int)pvVar7 + 8) != 0)) {
      uVar4 = F_00ab25a0((uint)((byte *)(gen_frame + 0x8))[0x53]);
      if ((*(char *)(uVar4 + 4 + iVar11) == -1) ||
         (((iVar11 == (short)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 56)) &&
           (bVar3 = F_00a36750(*(undefined4 *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 72))), bVar3 == 0)) &&
          (((byte *)(gen_frame + 0x8))[0x60] == 0)))) {
        *(undefined * PTR32 *)(((byte *)(gen_frame + 0x8)) + iVar11 * 4) = pvVar7;
        uVar4 = F_00a36960(iVar11);
        (&(*(ushort *)(gen_frame + 0x1ec)))[iVar11] = (ushort)uVar4;
      }
      else if (iVar11 == 0xd) {
        if (((byte *)(gen_frame + 0x8))[99] == 0) {
LAB_00a44a93: ;
          uVar4 = F_00a36f00((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)),iVar11);
          if ((uVar4 == 0) || (uVar5 = F_00906df0(pvVar7), uVar5 == 0)) goto LAB_00a45156;
          sVar1 = *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 68)) + 4)));
          uVar4 = F_00ab25a0((uint)*(byte *)(uVar4 + 0xa6));
          piVar8 = (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 68));
          if (*(char *)(uVar4 + 4 + (int)sVar1) == -1) {
LAB_00a44ade: ;
            *(undefined * PTR32 *)(((byte *)(gen_frame + 0x8)) + iVar11 * 4) = pvVar7;
            uVar4 = F_00a36960(iVar11);
            (&(*(ushort *)(gen_frame + 0x1ec)))[iVar11] = (ushort)uVar4;
            piVar8 = (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 68));
          }
        }
        else {
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 52)) = pvVar7;
          uVar4 = F_00a36960(0xd);
          (*(undefined2 *)(gen_frame + 0x206)) = (short)uVar4;
        }
      }
      else if (((byte *)(gen_frame + 0x8))[99] == 0) {
        if (iVar11 != 0) goto LAB_00a44a93;
      }
      else if (iVar11 != 0) {
        uVar4 = F_00a36f00((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)),iVar11);
        if ((uVar4 == 0) || (uVar5 = F_00906df0(pvVar7), uVar5 == 0)) goto LAB_00a45156;
        uVar5 = F_00ab21d0((uint)*(byte *)(uVar4 + 0xac));
        if ((*((char *)GEN_TOP((*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 60)) + 0xa8))) + 4 + uVar5))) == '\0') ||
           (uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 60)) + 0xa8))),0),
           piVar8 = (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 68)), (ushort)uVar5 < (ushort)*(byte *)(uVar4 + 0x9f)))
        goto LAB_00a44ade;
      }
      uVar4 = 1;
      if (((iVar11 == 0xc) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 48)) != 0)) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 44)) != 0)) {
        uVar4 = 2;
      }
      if ((*(int *)(((byte *)(gen_frame + 0x8)) + iVar11 * 4) != 0) &&
         (uVar5 = F_00a37350((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)),(uint)(&(*(ushort *)(gen_frame + 0x1ec)))[iVar11]), uVar5 < uVar4)) {
        piVar8 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        if (((byte *)(gen_frame + 0x8))[99] != 0) {
          uVar12 = 0x2d2;
          pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
          F_0046a630(pvVar7,uVar12);
          F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
          return 0x18;
        }
        uVar12 = 0x2c5;
        pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
        F_0046a630(pvVar7,uVar12);
        F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
        return 0x18;
      }
    }
    iVar11 = iVar11 + 1;
    if (0xd < iVar11) {
      iVar2 = piVar8[1];
      iVar11 = *piVar8;
      uVar4 = F_0046e5e0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 72)));
      uVar4 = F_00a3ef50(iVar11 + -1000,(int)(short)iVar2,uVar4);
      if (uVar4 == 0) {
        piVar9 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0x34))(piVar9)));
        F_0044c070(pvVar7);
        F_0071d1a0(((undefined1 *)(gen_frame + 0x16c)));
        F_0071d1a0(((undefined1 *)(gen_frame + 0x1ac)));
        F_0071d1a0(((undefined1 *)(gen_frame + 0x6c)));
        F_0071d1a0(((undefined1 *)(gen_frame + 0xac)));
        piVar9 = (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 72));
        F_00a3bd60(((undefined1 *)(gen_frame + 0x16c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 72)));
        F_00a3bd60(((undefined1 *)(gen_frame + 0x1ac)),piVar8);
        if ((((byte *)(gen_frame + 0x8))[99] != 0) && (((byte *)(gen_frame + 0x8))[0x62] != 0)) {
          F_00a3bd60(((undefined1 *)(gen_frame + 0x6c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 76)));
          F_00a3bd60(((undefined1 *)(gen_frame + 0xac)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 84)));
        }
        ((byte *)(gen_frame + 0x8))[0x40] = 0;
        ((byte *)(gen_frame + 0x8))[0x41] = 0;
        ((byte *)(gen_frame + 0x8))[0x42] = 0;
        ((byte *)(gen_frame + 0x8))[0x43] = 0;
        do {
          uVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92));
          pvVar7 = *((undefined * PTR32 *)GEN_TOP((((byte *)(gen_frame + 0x8)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 64)) * 4)));
          iVar11 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 64));
          if ((pvVar7 != (undefined *)0x0) &&
             ((*(char *)((int)pvVar7 + 6) != '\0' || (*(int *)((int)pvVar7 + 8) != 0)))) {
            uVar13 = 0;
            pvVar10 = (undefined *)F_00a36f30((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)),(uint)(&(*(ushort *)(gen_frame + 0x1ec)))[(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 64))])
            ;
            pvVar10 = (undefined *)F_00a36440(pvVar10,uVar13);
            F_0071d1a0(((undefined1 *)(gen_frame + 0xec)));
            F_0071d1a0(((undefined1 *)(gen_frame + 0x12c)));
            F_00a3bd60(((undefined1 *)(gen_frame + 0xec)),pvVar7);
            F_00a3bd60(((undefined1 *)(gen_frame + 0x12c)),pvVar10);
            F_00a3bd60(pvVar10,pvVar7);
            F_00a35f30(pvVar7);
            uVar4 = F_00a3eb60(pvVar7,((undefined1 *)(gen_frame + 0xec)));
            if (uVar4 != 0) {
              F_00a42ea0((undefined *)uVar12,pvVar7,((undefined1 *)(gen_frame + 0xec)),uVar4);
            }
            uVar4 = F_00a3eb60(pvVar10,((undefined1 *)(gen_frame + 0x12c)));
            if (uVar4 != 0) {
              F_00a42ea0((undefined *)uVar12,pvVar10,((undefined1 *)(gen_frame + 0x12c)),uVar4);
            }
            uVar14 = 0;
            uVar13 = 0;
            fVar15 = REFG(float, 0x10916ec);
            uVar4 = F_0046e5e0(((undefined1 *)(gen_frame + 0xec)));
            F_00a7d290((uint)(*(int *)(uVar12 + 0x28) == *(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 68))) * 2 + 699,
                         (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)),uVar4,uVar13,uVar14,fVar15);
            iVar11 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 64));
            piVar9 = (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 72));
            piVar8 = (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 68));
          }
          uVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 84));
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 64)) = iVar11 + 1;
        } while (iVar11 + 1 < 0xe);
        pvVar7 = (undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92));
        if (((((byte *)(gen_frame + 0x8))[99] != 0) && (((byte *)(gen_frame + 0x8))[0x62] != 0)) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 76)) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 84)))) {
          F_00a3bd60((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 76)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 84)));
          F_00a35f30((undefined *)uVar12);
          pvVar7 = (undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92));
          uVar4 = F_00a3eb60((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 76)),((undefined1 *)(gen_frame + 0x6c)));
          if (uVar4 != 0) {
            F_00a42ea0(pvVar7,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 76)),((undefined1 *)(gen_frame + 0x6c)),uVar4);
          }
          uVar4 = F_00a3eb60((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 84)),((undefined1 *)(gen_frame + 0xac)));
          if (uVar4 != 0) {
            F_00a42ea0(pvVar7,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 84)),((undefined1 *)(gen_frame + 0xac)),uVar4);
          }
        }
        if ((short)piVar8[1] != 0xd) {
          iVar11 = *piVar9;
          if (((iVar11 == 0xdac) || (iVar11 - 0xc80U < 10)) ||
             ((iVar11 == 0xce4 || ((iVar11 == 0xd48 || (((byte *)(gen_frame + 0x8))[0x60] != 0)))))) {
            F_0071d1a0(((undefined1 *)(gen_frame + 0x12c)));
            F_00a3bd60(((undefined1 *)(gen_frame + 0x12c)),piVar8);
            F_00a3bd60(piVar8,piVar9);
            F_00a3bd60(piVar9,((undefined1 *)(gen_frame + 0x12c)));
            uVar4 = F_00a3eb60(piVar9,((undefined1 *)(gen_frame + 0x16c)));
            if ((uVar4 | 1) != 0) {
              F_00a42ea0(pvVar7,piVar9,((undefined1 *)(gen_frame + 0x16c)),uVar4 | 1);
            }
            uVar4 = F_00a3eb60(piVar8,((undefined1 *)(gen_frame + 0x1ac)));
            uVar4 = uVar4 | 1;
          }
          else {
            F_00a3bd60(piVar8,piVar9);
            F_00a35f30(piVar9);
            uVar4 = F_00a3eb60(piVar9,((undefined1 *)(gen_frame + 0x16c)));
            if (uVar4 != 0) {
              F_00a42ea0(pvVar7,piVar9,((undefined1 *)(gen_frame + 0x16c)),uVar4);
            }
            uVar4 = F_00a3eb60(piVar8,((undefined1 *)(gen_frame + 0x1ac)));
          }
          if (uVar4 != 0) {
            F_00a42ea0(pvVar7,piVar8,((undefined1 *)(gen_frame + 0x1ac)),uVar4);
          }
        }
        if ((char)param_3 != '\0') {
          uVar4 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x1ac)));
          uVar5 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x16c)));
          F_00a39130(pvVar7,*piVar9,(uint)*(ushort *)(piVar9 + 1),*piVar8,
                       (uint)*(ushort *)(piVar8 + 1),uVar5,uVar4);
        }
        if (((byte *)(gen_frame + 0x8))[99] != 0) {
          F_00aa01d0(REFG(void * PTR32, 0x1379694),0xfa,0);
          piVar9 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar12 = 0x21;
          uVar4 = ((code *)*(gen_code32 *)(*piVar9 + 0x48))(piVar9);
          piVar9 = (int *)F_00763050(uVar4,uVar12);
          ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9);
        }
        uVar13 = 0;
        uVar12 = 0;
        fVar15 = REFG(float, 0x10916ec);
        uVar4 = F_0046e5e0(piVar8);
        F_00a7d290((uint)(*(int *)((int)pvVar7 + 0x28) == *piVar8) * 2 + 0x2ba,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)),
                     uVar4,uVar12,uVar13,fVar15);
        *(undefined4 *)((int)pvVar7 + 0x2ff8) = 0;
        F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
        return 0;
      }
      if (uVar4 == 0x2ad) {
        uVar4 = F_00a36f00((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)),0);
        uVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 60));
        uVar5 = F_00ab21a0((uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 60)) + 0xa8))));
        if ((uVar4 != 0) && (uVar5 != 0)) {
          F_00a76e30(0x2ad,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)),(uint)*(byte *)(uVar4 + 0xa8),
                       (uint)*(byte *)(uVar12 + 0xa8),(uint)*(byte *)(uVar5 + 0x3e),REFG(float, 0x10916ec));
          F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
          return 0xb;
        }
      }
      else if (uVar4 == 0x2ae) {
        uVar4 = F_00a36f00((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 92)),0xd);
        uVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 60));
        uVar5 = F_00ab21a0((uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 60)) + 0xa8))));
        if ((uVar4 != 0) && (uVar5 != 0)) {
          F_00a76e30(0x2ae,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)),(uint)*(byte *)(uVar4 + 0xa8),
                       (uint)*(byte *)(uVar12 + 0xa8),(uint)*(byte *)(uVar5 + 0x3e),REFG(float, 0x10916ec));
          F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
          return 0xb;
        }
      }
      else {
        uVar13 = 0;
        uVar12 = 0;
        fVar15 = REFG(float, 0x10916ec);
        uVar5 = F_0046e5e0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 72)));
        F_00a7d290(uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 88)),uVar5,uVar12,uVar13,fVar15);
      }
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
      return 0xb;
    }
  }
LAB_00a449d8: ;
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return 4;
}

/* ref: FUN_00a45170 */
uint F_00a45170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa45170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  byte * pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(undefined4, 0x1379694);
  (*(int * PTR32 *)(gen_frame + 0x38)) = param_2;
  uVar3 = F_0046e5e0(param_1);
  uVar3 = F_00ab24a0(uVar3);
  (*(uint *)(gen_frame + 0x48)) = uVar3;
  if ((uVar3 != 0) && (uVar4 = F_00906df0(param_1), uVar4 != 0)) {
    (*(byte *)(gen_frame + 0x43)) = *(byte *)(uVar3 + 0xa6);
    ((uint *)(gen_frame + 0x0))[0] = 0;
    F_00c48350(((uint *)(gen_frame + 0x0)) + 1,0,0x34);
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x38));
    iVar7 = *(*(int * PTR32 *)(gen_frame + 0x38));
    ((ushort *)(gen_frame + 0x15c))[0] = 0;
    ((ushort *)(gen_frame + 0x15c))[1] = 0;
    ((ushort *)(gen_frame + 0x15c))[2] = 0;
    ((ushort *)(gen_frame + 0x15c))[3] = 0;
    ((ushort *)(gen_frame + 0x15c))[4] = 0;
    ((ushort *)(gen_frame + 0x15c))[5] = 0;
    ((ushort *)(gen_frame + 0x15c))[6] = 0;
    ((ushort *)(gen_frame + 0x15c))[7] = 0;
    ((ushort *)(gen_frame + 0x15c))[8] = 0;
    ((ushort *)(gen_frame + 0x15c))[9] = 0;
    ((ushort *)(gen_frame + 0x15c))[10] = 0;
    ((ushort *)(gen_frame + 0x15c))[0xb] = 0;
    ((ushort *)(gen_frame + 0x15c))[0xc] = 0;
    ((ushort *)(gen_frame + 0x15c))[0xd] = 0;
    (*(char *)(gen_frame + 0x53)) = '\0';
    pvVar5 = (undefined *)F_00a36f30((*(undefined * PTR32 *)(gen_frame + 0x58)),iVar7);
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar5;
    bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),0x3e);
    if (bVar2 == 0) {
      uVar9 = 0;
      uVar8 = 0;
      if (*piVar6 != *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28)) {
        fVar10 = REFG(float, 0x10916ec);
        uVar3 = F_0046e5e0(param_1);
        F_00a7d290(0x2b9,(*(undefined4 *)(gen_frame + 0x44)),uVar3,uVar8,uVar9,fVar10);
        F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
        return 10;
      }
      fVar10 = REFG(float, 0x10916ec);
      uVar3 = F_0046e5e0(param_1);
      F_00a7d290(0x2c4,(*(undefined4 *)(gen_frame + 0x44)),uVar3,uVar8,uVar9,fVar10);
      F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
      return 10;
    }
    if ((short)piVar6[1] == 0xd) {
      (*(char *)(gen_frame + 0x53)) = '\x01';
    }
    iVar7 = 0;
    do {
      pvVar5 = (undefined *)F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0x3c)),iVar7);
      (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar5;
      if (pvVar5 == (undefined *)0x0) {
        F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
        return 4;
      }
      if ((*(char *)((int)pvVar5 + 6) != '\0') || (*(int *)((int)pvVar5 + 8) != 0)) {
        uVar3 = F_00ab25a0((uint)(*(byte *)(gen_frame + 0x43)));
        if (*(char *)(uVar3 + 4 + iVar7) == -1) {
LAB_00a45417: ;
          ((uint *)(gen_frame + 0x0))[(int)(iVar7)] = (uint)(*(undefined * PTR32 *)(gen_frame + 0x4c));
LAB_00a45424: ;
          uVar3 = F_00a36960(iVar7);
          ((ushort *)(gen_frame + 0x15c))[(int)(iVar7)] = (ushort)uVar3;
        }
        else if ((*(char *)(gen_frame + 0x53)) == '\0') {
          if (iVar7 != 0) {
            uVar3 = F_00a36f00((*(undefined * PTR32 *)(gen_frame + 0x58)),iVar7);
            (*(uint *)(gen_frame + 0x54)) = uVar3;
            if ((uVar3 == 0) || (uVar3 = F_00906df0((*(undefined * PTR32 *)(gen_frame + 0x4c))), uVar3 == 0)) break;
            pbVar1 = (byte *)((*(uint *)(gen_frame + 0x54)) + 0xa6);
            (*(uint *)(gen_frame + 0x54)) = (uint)*(ushort *)((*(int * PTR32 *)(gen_frame + 0x38)) + 1);
            uVar3 = F_00ab25a0((uint)*pbVar1);
            if (*(char *)(uVar3 + 4 + (int)(short)(*(uint *)(gen_frame + 0x54))) == -1) goto LAB_00a45417;
          }
        }
        else if (iVar7 != 0) {
          uVar3 = F_00a36f00((*(undefined * PTR32 *)(gen_frame + 0x58)),iVar7);
          (*(uint *)(gen_frame + 0x54)) = uVar3;
          if ((uVar3 == 0) || (uVar3 = F_00906df0((*(undefined * PTR32 *)(gen_frame + 0x4c))), uVar3 == 0)) break;
          uVar3 = F_00ab21d0((uint)*(byte *)((*(uint *)(gen_frame + 0x54)) + 0xac));
          if ((*((char *)GEN_TOP((*(byte *)((*(uint *)(gen_frame + 0x48)) + 0xa8) + 4 + uVar3))) == '\0') ||
             (uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)((*(uint *)(gen_frame + 0x48)) + 0xa8),0),
             (ushort)uVar3 < (ushort)*(byte *)((*(uint *)(gen_frame + 0x54)) + 0x9f))) {
            ((uint *)(gen_frame + 0x0))[(int)(iVar7)] = (uint)(*(undefined * PTR32 *)(gen_frame + 0x4c));
            goto LAB_00a45424;
          }
        }
        (*(uint *)(gen_frame + 0x54)) = 1;
        if (((iVar7 == 0xc) && (((uint *)(gen_frame + 0x0))[0xc] != 0)) && (((uint *)(gen_frame + 0x0))[0xb] != 0)) {
          (*(uint *)(gen_frame + 0x54)) = 2;
        }
        if ((((uint *)(gen_frame + 0x0))[(int)(iVar7)] != 0) &&
           (uVar3 = F_00a37350((*(undefined * PTR32 *)(gen_frame + 0x58)),(uint)((ushort *)(gen_frame + 0x15c))[(int)(iVar7)]), uVar3 < (*(uint *)(gen_frame + 0x54)))) {
          piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar8 = 0x2c5;
          pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x28))(piVar6)));
          F_0046a630(pvVar5,uVar8);
          F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
          return 0x18;
        }
      }
      iVar7 = iVar7 + 1;
      if (0xd < iVar7) {
        iVar7 = (*(int * PTR32 *)(gen_frame + 0x38))[1];
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x38));
        uVar3 = F_0046e5e0(param_1);
        uVar4 = F_00a3ef50((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + -1000,(int)(short)iVar7,uVar3);
        uVar3 = (*(uint *)(gen_frame + 0x48));
        if (uVar4 == 0) {
          piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x34))(piVar6)));
          F_0044c070(pvVar5);
          (*(uint *)(gen_frame + 0x54)) = 0;
          do {
            uVar3 = ((uint *)(gen_frame + 0x0))[(int)((*(uint *)(gen_frame + 0x54)))];
            uVar4 = (*(uint *)(gen_frame + 0x54));
            if ((uVar3 != 0) && ((*(char *)(uVar3 + 6) != '\0' || (*(int *)(uVar3 + 8) != 0)))) {
              uVar8 = 0;
              pvVar5 = (undefined *)F_00a36f30((*(undefined * PTR32 *)(gen_frame + 0x58)),(uint)((ushort *)(gen_frame + 0x15c))[(int)((*(uint *)(gen_frame + 0x54)))]);
              pvVar5 = (undefined *)F_00a36440(pvVar5,uVar8);
              (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar5;
              (*(undefined4 *)(gen_frame + 0xdc)) = 9999;
              (*(undefined4 *)(gen_frame + 0x5c)) = 9999;
              (*(undefined2 *)(gen_frame + 0xe0)) = 0;
              (*(undefined1 *)(gen_frame + 0xe2)) = 0;
              (*(undefined4 *)(gen_frame + 0xe4)) = 0;
              (*(undefined4 *)(gen_frame + 0xe8)) = 0;
              (*(undefined4 *)(gen_frame + 0xf4)) = 0;
              (*(undefined4 *)(gen_frame + 0xf8)) = 0;
              (*(undefined1 *)(gen_frame + 0xf0)) = 0;
              (*(undefined4 *)(gen_frame + 0xec)) = 0x75300000;
              (*(undefined4 *)(gen_frame + 0x10c)) = 0;
              (*(undefined4 *)(gen_frame + 0x118)) = 0;
              (*(undefined4 *)(gen_frame + 0xfc)) = 0;
              (*(undefined4 *)(gen_frame + 0x100)) = 0;
              (*(undefined2 *)(gen_frame + 0x104)) = 0;
              (*(undefined4 *)(gen_frame + 0x106)) = 0;
              (*(undefined2 *)(gen_frame + 0x10a)) = 0;
              (*(undefined4 *)(gen_frame + 0x110)) = 0;
              (*(undefined1 *)(gen_frame + 0x114)) = 0;
              (*(undefined2 *)(gen_frame + 0x60)) = 0;
              (*(undefined1 *)(gen_frame + 0x62)) = 0;
              (*(undefined4 *)(gen_frame + 0x64)) = 0;
              (*(undefined4 *)(gen_frame + 0x68)) = 0;
              (*(undefined4 *)(gen_frame + 0x74)) = 0;
              (*(undefined4 *)(gen_frame + 0x78)) = 0;
              (*(undefined1 *)(gen_frame + 0x70)) = 0;
              (*(undefined4 *)(gen_frame + 0x6c)) = 0x75300000;
              (*(undefined4 *)(gen_frame + 0x8c)) = 0;
              (*(undefined4 *)(gen_frame + 0x98)) = 0;
              (*(undefined4 *)(gen_frame + 0x7c)) = 0;
              (*(undefined4 *)(gen_frame + 0x80)) = 0;
              (*(undefined2 *)(gen_frame + 0x84)) = 0;
              (*(undefined4 *)(gen_frame + 0x86)) = 0;
              (*(undefined2 *)(gen_frame + 0x8a)) = 0;
              (*(undefined4 *)(gen_frame + 0x90)) = 0;
              (*(undefined1 *)(gen_frame + 0x94)) = 0;
              F_00a3bd60(&(*(undefined4 *)(gen_frame + 0xdc)),uVar3);
              F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x4c)));
              F_00a3bd60((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar3);
              *(undefined4 *)(uVar3 + 8) = 0;
              *(undefined4 *)(uVar3 + 0xc) = 0;
              *(undefined4 *)(uVar3 + 0x18) = 0;
              *(undefined4 *)(uVar3 + 0x1c) = 0;
              *(undefined1 *)(uVar3 + 0x14) = 0;
              *(undefined4 *)(uVar3 + 0x10) = 0x75300000;
              *(undefined1 *)(uVar3 + 0x2f) = 0;
              *(undefined4 *)(uVar3 + 0x30) = 0;
              *(undefined1 *)(uVar3 + 6) = 0;
              *(undefined4 *)(uVar3 + 0x3c) = 0;
              *(undefined4 *)(uVar3 + 0x20) = 0;
              *(undefined4 *)(uVar3 + 0x24) = 0;
              *(undefined2 *)(uVar3 + 0x28) = 0;
              *(undefined4 *)(uVar3 + 0x2a) = 0;
              *(undefined1 *)(uVar3 + 0x2e) = 0;
              *(undefined4 *)(uVar3 + 0x34) = 0;
              *(undefined1 *)(uVar3 + 0x38) = 0;
              uVar4 = F_00a3eb60(uVar3,&(*(undefined4 *)(gen_frame + 0xdc)));
              pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x58));
              if (uVar4 != 0) {
                F_00a42ea0((*(undefined * PTR32 *)(gen_frame + 0x58)),uVar3,&(*(undefined4 *)(gen_frame + 0xdc)),uVar4);
              }
              uVar3 = F_00a3eb60((*(undefined * PTR32 *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x5c)));
              if (uVar3 != 0) {
                F_00a42ea0(pvVar5,(*(undefined * PTR32 *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x5c)),uVar3);
              }
              uVar9 = 0;
              uVar8 = 0;
              fVar10 = REFG(float, 0x10916ec);
              uVar3 = F_0046e5e0(&(*(undefined4 *)(gen_frame + 0xdc)));
              F_00a7d290((uint)(*(int *)((int)pvVar5 + 0x28) == *(*(int * PTR32 *)(gen_frame + 0x38))) * 2 + 699,(*(undefined4 *)(gen_frame + 0x44)),
                           uVar3,uVar8,uVar9,fVar10);
              uVar4 = (*(uint *)(gen_frame + 0x54));
            }
            (*(uint *)(gen_frame + 0x54)) = uVar4 + 1;
          } while ((int)(uVar4 + 1) < 0xe);
          (*(undefined2 *)(gen_frame + 0x120)) = 0;
          (*(undefined4 *)(gen_frame + 0x11c)) = 9999;
          (*(char *)(gen_frame + 0x122)) = '\0';
          (*(uint *)(gen_frame + 0x124)) = 0;
          (*(uint *)(gen_frame + 0x128)) = 0;
          (*(undefined4 *)(gen_frame + 0x134)) = 0;
          (*(undefined4 *)(gen_frame + 0x138)) = 0;
          (*(undefined1 *)(gen_frame + 0x130)) = 0;
          (*(undefined4 *)(gen_frame + 0x12c)) = 0x75300000;
          (*(undefined4 *)(gen_frame + 0x14c)) = 0;
          (*(undefined4 *)(gen_frame + 0x158)) = 0;
          (*(undefined4 *)(gen_frame + 0x13c)) = 0;
          (*(undefined4 *)(gen_frame + 0x140)) = 0;
          (*(undefined2 *)(gen_frame + 0x144)) = 0;
          (*(undefined4 *)(gen_frame + 0x146)) = 0;
          (*(undefined2 *)(gen_frame + 0x14a)) = 0;
          (*(undefined4 *)(gen_frame + 0x150)) = 0;
          (*(undefined1 *)(gen_frame + 0x154)) = 0;
          (*(undefined4 *)(gen_frame + 0x9c)) = 9999;
          (*(undefined2 *)(gen_frame + 0xa0)) = 0;
          (*(undefined1 *)(gen_frame + 0xa2)) = 0;
          (*(undefined4 *)(gen_frame + 0xa4)) = 0;
          (*(undefined4 *)(gen_frame + 0xa8)) = 0;
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
          (*(undefined4 *)(gen_frame + 0xb8)) = 0;
          (*(undefined1 *)(gen_frame + 0xb0)) = 0;
          (*(undefined4 *)(gen_frame + 0xac)) = 0x75300000;
          (*(undefined4 *)(gen_frame + 0xcc)) = 0;
          (*(undefined4 *)(gen_frame + 0xd8)) = 0;
          (*(undefined4 *)(gen_frame + 0xbc)) = 0;
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(undefined2 *)(gen_frame + 0xc4)) = 0;
          (*(undefined4 *)(gen_frame + 0xc6)) = 0;
          (*(undefined2 *)(gen_frame + 0xca)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(undefined1 *)(gen_frame + 0xd4)) = 0;
          F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x11c)),param_1);
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x38));
          F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x9c)),(*(int * PTR32 *)(gen_frame + 0x38)));
          F_00a3bd60(piVar6,param_1);
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          *(undefined1 *)(param_1 + 5) = 0;
          param_1[4] = 0x75300000;
          *(undefined1 *)((int)param_1 + 0x2f) = 0;
          param_1[0xc] = 0;
          *(undefined1 *)((int)param_1 + 6) = 0;
          param_1[0xf] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          *(undefined2 *)(param_1 + 10) = 0;
          *(undefined4 *)((int)param_1 + 0x2a) = 0;
          *(undefined1 *)((int)param_1 + 0x2e) = 0;
          param_1[0xd] = 0;
          *(undefined1 *)(param_1 + 0xe) = 0;
          if ((char)param_3 != '\0') {
            uVar3 = (*(uint *)(gen_frame + 0x128));
            if ((*(char *)(gen_frame + 0x122)) != '\0') {
              iVar7 = (int)(short)(*(uint *)(gen_frame + 0x124));
              pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(*(uint *)(gen_frame + 0x124)) >> 0x10);
              pvVar5 = (undefined *)F_00a37da0(pvVar5,iVar7);
              (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar5;
              (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x128));
              uVar4 = F_00a3a8a0(pvVar5);
              uVar3 = (*(uint *)(gen_frame + 0x48));
              if (uVar4 < (*(uint *)(gen_frame + 0x48))) {
                uVar3 = F_00a3a8a0((*(undefined * PTR32 *)(gen_frame + 0x3c)));
                (*(uint *)(gen_frame + 0x48)) = uVar3;
                (*(uint *)(gen_frame + 0x128)) = uVar3;
                uVar3 = (*(uint *)(gen_frame + 0x48));
              }
            }
            F_00a38890((*(undefined * PTR32 *)(gen_frame + 0x58)),*param_1,(uint)*(ushort *)(param_1 + 1),*piVar6,
                         (uint)*(ushort *)(piVar6 + 1),uVar3);
          }
          uVar9 = 0;
          uVar8 = 0;
          fVar10 = REFG(float, 0x10916ec);
          uVar3 = F_0046e5e0(piVar6);
          F_00a7d290((uint)(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28) == *piVar6) * 2 + 0x2ba,(*(undefined4 *)(gen_frame + 0x44)),
                       uVar3,uVar8,uVar9,fVar10);
          uVar3 = F_00a3eb60(param_1,&(*(undefined4 *)(gen_frame + 0x11c)));
          pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x58));
          if (uVar3 != 0) {
            F_00a42ea0((*(undefined * PTR32 *)(gen_frame + 0x58)),param_1,&(*(undefined4 *)(gen_frame + 0x11c)),uVar3);
          }
          uVar3 = F_00a3eb60(piVar6,&(*(undefined4 *)(gen_frame + 0x9c)));
          if (uVar3 != 0) {
            F_00a42ea0(pvVar5,piVar6,&(*(undefined4 *)(gen_frame + 0x9c)),uVar3);
          }
          *(undefined4 *)((int)pvVar5 + 0x2ff8) = 0;
          F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
          return 0;
        }
        if (uVar4 == 0x2ad) {
          if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x2ff8) & 1) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x2498;
          }
          uVar4 = F_00ab21a0((uint)*(byte *)((*(uint *)(gen_frame + 0x48)) + 0xa8));
          if ((iVar7 != 0) && (uVar4 != 0)) {
            F_00a76e30(0x2ad,(*(undefined4 *)(gen_frame + 0x44)),(uint)*(byte *)(iVar7 + 0xa8),(uint)*(byte *)(uVar3 + 0xa8)
                         ,(uint)*(byte *)(uVar4 + 0x3e),REFG(float, 0x10916ec));
            F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
            return 10;
          }
        }
        else if (uVar4 == 0x2ae) {
          if ((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x2ff8) & 0x2000) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x2f28;
          }
          uVar4 = F_00ab21a0((uint)*(byte *)((*(uint *)(gen_frame + 0x48)) + 0xa8));
          if ((iVar7 != 0) && (uVar4 != 0)) {
            F_00a76e30(0x2ae,(*(undefined4 *)(gen_frame + 0x44)),(uint)*(byte *)(iVar7 + 0xa8),(uint)*(byte *)(uVar3 + 0xa8)
                         ,(uint)*(byte *)(uVar4 + 0x3e),REFG(float, 0x10916ec));
            F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
            return 10;
          }
        }
        else {
          uVar9 = 0;
          uVar8 = 0;
          fVar10 = REFG(float, 0x10916ec);
          uVar3 = F_0046e5e0(param_1);
          F_00a7d290(uVar4,(*(undefined4 *)(gen_frame + 0x44)),uVar3,uVar8,uVar9,fVar10);
        }
        F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
        return 10;
      }
    } while( true );
  }
  F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
  return 6;
}

/* ref: FUN_00a45b30 */
uint F_00a45b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa45b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 76)) = REFG(undefined4, 0x1379694);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 68)) = param_2;
  uVar2 = F_0046e5e0(param_1);
  uVar2 = F_00ab24a0(uVar2);
  ((byte *)(gen_frame + 0x4))[0x3c] = (char)uVar2;
  ((byte *)(gen_frame + 0x4))[0x3d] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x4))[0x3e] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x3f] = (char)(uVar2 >> 0x18);
  if ((uVar2 != 0) && (uVar2 = F_00906df0(param_1), uVar2 != 0)) {
    ((byte *)(gen_frame + 0x4))[0] = 0;
    ((byte *)(gen_frame + 0x4))[1] = 0;
    ((byte *)(gen_frame + 0x4))[2] = 0;
    ((byte *)(gen_frame + 0x4))[3] = 0;
    F_00c48350(((byte *)(gen_frame + 0x4)) + 4,0,0x34);
    iVar7 = *param_1;
    ((ushort *)(gen_frame + 0x15c))[0] = 0;
    ((ushort *)(gen_frame + 0x15c))[1] = 0;
    ((ushort *)(gen_frame + 0x15c))[2] = 0;
    ((ushort *)(gen_frame + 0x15c))[3] = 0;
    ((ushort *)(gen_frame + 0x15c))[4] = 0;
    ((ushort *)(gen_frame + 0x15c))[5] = 0;
    ((ushort *)(gen_frame + 0x15c))[6] = 0;
    ((ushort *)(gen_frame + 0x15c))[7] = 0;
    ((ushort *)(gen_frame + 0x15c))[8] = 0;
    ((ushort *)(gen_frame + 0x15c))[9] = 0;
    ((ushort *)(gen_frame + 0x15c))[10] = 0;
    ((ushort *)(gen_frame + 0x15c))[0xb] = 0;
    ((ushort *)(gen_frame + 0x15c))[0xc] = 0;
    ((ushort *)(gen_frame + 0x15c))[0xd] = 0;
    uVar2 = F_00a36f30(this,iVar7);
    ((byte *)(gen_frame + 0x4))[0x38] = (char)uVar2;
    ((byte *)(gen_frame + 0x4))[0x39] = (char)(uVar2 >> 8);
    ((byte *)(gen_frame + 0x4))[0x3a] = (char)(uVar2 >> 0x10);
    ((byte *)(gen_frame + 0x4))[0x3b] = (char)(uVar2 >> 0x18);
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x3e);
    if (bVar1 == 0) {
      uVar9 = 0;
      uVar8 = 0;
      if (*param_1 != *(int *)((int)this + 0x28)) {
        fVar11 = REFG(float, 0x10916ec);
        uVar2 = F_0046e5e0(param_1);
        F_00a7d290(0x2b9,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 76)),uVar2,uVar8,uVar9,fVar11);
        F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
        return 10;
      }
      fVar11 = REFG(float, 0x10916ec);
      uVar2 = F_0046e5e0(param_1);
      F_00a7d290(0x2c4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 76)),uVar2,uVar8,uVar9,fVar11);
      F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
      return 10;
    }
    if ((short)param_1[1] == 0xd) {
      iVar7 = 0;
      do {
        uVar2 = F_00a37da0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 56)),iVar7);
        ((byte *)(gen_frame + 0x4))[0x50] = (char)uVar2;
        ((byte *)(gen_frame + 0x4))[0x51] = (char)(uVar2 >> 8);
        ((byte *)(gen_frame + 0x4))[0x52] = (char)(uVar2 >> 0x10);
        ((byte *)(gen_frame + 0x4))[0x53] = (char)(uVar2 >> 0x18);
        if (uVar2 == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
          return 4;
        }
        if ((*(char *)(uVar2 + 6) != '\0') || (*(int *)(uVar2 + 8) != 0)) {
          if (iVar7 != 0) {
            uVar2 = F_00a36f00((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84)),iVar7);
            ((byte *)(gen_frame + 0x4))[0x48] = (char)uVar2;
            ((byte *)(gen_frame + 0x4))[0x49] = (char)(uVar2 >> 8);
            ((byte *)(gen_frame + 0x4))[0x4a] = (char)(uVar2 >> 0x10);
            ((byte *)(gen_frame + 0x4))[0x4b] = (char)(uVar2 >> 0x18);
            if ((uVar2 == 0) || (uVar2 = F_00906df0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 80))), uVar2 == 0))
            goto LAB_00a461dd;
            uVar2 = F_00ab21d0((uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 72)) + 0xac))));
            ((byte *)(gen_frame + 0x4))[0x40] = (char)uVar2;
            ((byte *)(gen_frame + 0x4))[0x41] = (char)(uVar2 >> 8);
            ((byte *)(gen_frame + 0x4))[0x42] = (char)(uVar2 >> 0x10);
            ((byte *)(gen_frame + 0x4))[0x43] = (char)(uVar2 >> 0x18);
            uVar2 = F_00ab21a0((uint)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 60)) + 0xa8))));
            if ((*((char *)GEN_TOP((*(byte *)(uVar2 + 0x3e) + 4 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 64))))) == '\0') ||
               (uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)(uVar2 + 0x3e),0),
               (ushort)uVar2 < (ushort)*((byte *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 72)) + 0x9f))))) {
              *(undefined4 *)(((byte *)(gen_frame + 0x4)) + iVar7 * 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 80));
              uVar2 = F_00a36960(iVar7);
              ((ushort *)(gen_frame + 0x15c))[(int)(iVar7)] = (ushort)uVar2;
            }
          }
          ((byte *)(gen_frame + 0x4))[0x50] = 1;
          ((byte *)(gen_frame + 0x4))[0x51] = 0;
          ((byte *)(gen_frame + 0x4))[0x52] = 0;
          ((byte *)(gen_frame + 0x4))[0x53] = 0;
          if (((iVar7 == 0xc) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 48)) != 0)) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 44)) != 0)) {
            ((byte *)(gen_frame + 0x4))[0x50] = 2;
            ((byte *)(gen_frame + 0x4))[0x51] = 0;
            ((byte *)(gen_frame + 0x4))[0x52] = 0;
            ((byte *)(gen_frame + 0x4))[0x53] = 0;
          }
          if ((*(int *)(((byte *)(gen_frame + 0x4)) + iVar7 * 4) != 0) &&
             (uVar2 = F_00a37350((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84)),(uint)((ushort *)(gen_frame + 0x15c))[(int)(iVar7)]),
             uVar2 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 80)))) {
            piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
            uVar8 = 0x2c5;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
            F_0046a630(pvVar4,uVar8);
            F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
            return 0x18;
          }
        }
        iVar7 = iVar7 + 1;
        this = (undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84));
      } while (iVar7 < 0xe);
    }
    uVar2 = F_00a3a750(*param_1 + -1000,(int)(short)param_1[1]);
    uVar9 = 0;
    uVar8 = 0;
    if (uVar2 == 0) {
      fVar11 = REFG(float, 0x10916ec);
      uVar2 = F_0046e5e0(param_1);
      F_00a7d290((uint)(*(int *)((int)this + 0x28) == *param_1) * 2 + 699,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 76)),uVar2,
                   uVar8,uVar9,fVar11);
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3)));
      F_0044c070(pvVar4);
      ((byte *)(gen_frame + 0x4))[0x50] = 0;
      ((byte *)(gen_frame + 0x4))[0x51] = 0;
      ((byte *)(gen_frame + 0x4))[0x52] = 0;
      ((byte *)(gen_frame + 0x4))[0x53] = 0;
      do {
        iVar7 = *((int *)GEN_TOP((((byte *)(gen_frame + 0x4)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 80)) * 4)));
        iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 80));
        if ((iVar7 != 0) && ((*(char *)(iVar7 + 6) != '\0' || (*(int *)(iVar7 + 8) != 0)))) {
          uVar8 = 0;
          pvVar4 = (undefined *)F_00a36f30((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84)),(uint)((ushort *)(gen_frame + 0x15c))[(int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 80)))]);
          uVar2 = F_00a36440(pvVar4,uVar8);
          ((byte *)(gen_frame + 0x4))[0x48] = (char)uVar2;
          ((byte *)(gen_frame + 0x4))[0x49] = (char)(uVar2 >> 8);
          ((byte *)(gen_frame + 0x4))[0x4a] = (char)(uVar2 >> 0x10);
          ((byte *)(gen_frame + 0x4))[0x4b] = (char)(uVar2 >> 0x18);
          F_0071d1a0(((undefined1 *)(gen_frame + 0x9c)));
          F_0071d1a0(((undefined1 *)(gen_frame + 0x5c)));
          F_00a3bd60(((undefined1 *)(gen_frame + 0x9c)),iVar7);
          F_00a3bd60(((undefined1 *)(gen_frame + 0x5c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 72)));
          F_00a3bd60((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 72)),iVar7);
          *(undefined4 *)(iVar7 + 8) = 0;
          *(undefined4 *)(iVar7 + 0xc) = 0;
          *(undefined4 *)(iVar7 + 0x18) = 0;
          *(undefined4 *)(iVar7 + 0x1c) = 0;
          *(undefined1 *)(iVar7 + 0x14) = 0;
          *(undefined4 *)(iVar7 + 0x10) = 0x75300000;
          *(undefined1 *)(iVar7 + 0x2f) = 0;
          *(undefined4 *)(iVar7 + 0x30) = 0;
          *(undefined1 *)(iVar7 + 6) = 0;
          *(undefined4 *)(iVar7 + 0x3c) = 0;
          *(undefined4 *)(iVar7 + 0x20) = 0;
          *(undefined4 *)(iVar7 + 0x24) = 0;
          *(undefined2 *)(iVar7 + 0x28) = 0;
          *(undefined4 *)(iVar7 + 0x2a) = 0;
          *(undefined1 *)(iVar7 + 0x2e) = 0;
          *(undefined4 *)(iVar7 + 0x34) = 0;
          *(undefined1 *)(iVar7 + 0x38) = 0;
          uVar2 = F_00a3eb60(iVar7,((undefined1 *)(gen_frame + 0x9c)));
          uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84));
          if (uVar2 != 0) {
            F_00a42ea0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84)),iVar7,((undefined1 *)(gen_frame + 0x9c)),uVar2);
          }
          uVar2 = F_00a3eb60((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 72)),((undefined1 *)(gen_frame + 0x5c)));
          if (uVar2 != 0) {
            F_00a42ea0((undefined *)uVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 72)),((undefined1 *)(gen_frame + 0x5c)),uVar2);
          }
          uVar10 = 0;
          uVar9 = 0;
          fVar11 = REFG(float, 0x10916ec);
          uVar2 = F_0046e5e0(((undefined1 *)(gen_frame + 0x9c)));
          F_00a7d290((uint)(*(int *)(uVar8 + 0x28) == *param_1) * 2 + 699,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 76)),uVar2,
                       uVar9,uVar10,fVar11);
          iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 80));
        }
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 80)) = iVar5 + 1;
      } while (iVar5 + 1 < 0xe);
      (*(undefined4 *)(gen_frame + 0x11c)) = 9999;
      (*(undefined4 *)(gen_frame + 0xdc)) = 9999;
      (*(undefined2 *)(gen_frame + 0x120)) = 0;
      (*(char *)(gen_frame + 0x122)) = '\0';
      (*(uint *)(gen_frame + 0x124)) = 0;
      (*(uint *)(gen_frame + 0x128)) = 0;
      (*(undefined4 *)(gen_frame + 0x134)) = 0;
      (*(undefined4 *)(gen_frame + 0x138)) = 0;
      (*(undefined1 *)(gen_frame + 0x130)) = 0;
      (*(undefined4 *)(gen_frame + 0x12c)) = 0x75300000;
      (*(undefined4 *)(gen_frame + 0x14c)) = 0;
      (*(undefined4 *)(gen_frame + 0x158)) = 0;
      (*(undefined4 *)(gen_frame + 0x13c)) = 0;
      (*(undefined4 *)(gen_frame + 0x140)) = 0;
      (*(undefined2 *)(gen_frame + 0x144)) = 0;
      (*(undefined4 *)(gen_frame + 0x146)) = 0;
      (*(undefined2 *)(gen_frame + 0x14a)) = 0;
      (*(undefined4 *)(gen_frame + 0x150)) = 0;
      (*(undefined1 *)(gen_frame + 0x154)) = 0;
      (*(undefined2 *)(gen_frame + 0xe0)) = 0;
      (*(undefined1 *)(gen_frame + 0xe2)) = 0;
      (*(undefined4 *)(gen_frame + 0xe4)) = 0;
      (*(undefined4 *)(gen_frame + 0xe8)) = 0;
      (*(undefined4 *)(gen_frame + 0xf4)) = 0;
      (*(undefined4 *)(gen_frame + 0xf8)) = 0;
      (*(undefined1 *)(gen_frame + 0xf0)) = 0;
      (*(undefined4 *)(gen_frame + 0xec)) = 0x75300000;
      (*(undefined4 *)(gen_frame + 0x10c)) = 0;
      (*(undefined4 *)(gen_frame + 0x118)) = 0;
      (*(undefined4 *)(gen_frame + 0xfc)) = 0;
      (*(undefined4 *)(gen_frame + 0x100)) = 0;
      (*(undefined2 *)(gen_frame + 0x104)) = 0;
      (*(undefined4 *)(gen_frame + 0x106)) = 0;
      (*(undefined2 *)(gen_frame + 0x10a)) = 0;
      (*(undefined4 *)(gen_frame + 0x110)) = 0;
      (*(undefined1 *)(gen_frame + 0x114)) = 0;
      F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x11c)),param_1);
      uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 68));
      F_00a3bd60(&(*(undefined4 *)(gen_frame + 0xdc)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 68)));
      F_00a3bd60((undefined *)uVar8,param_1);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      param_1[4] = 0x75300000;
      *(undefined1 *)((int)param_1 + 0x2f) = 0;
      param_1[0xc] = 0;
      *(undefined1 *)((int)param_1 + 6) = 0;
      param_1[0xf] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *(undefined2 *)(param_1 + 10) = 0;
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      *(undefined1 *)((int)param_1 + 0x2e) = 0;
      param_1[0xd] = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      if ((char)param_3 != '\0') {
        uVar2 = (*(uint *)(gen_frame + 0x128));
        if ((*(char *)(gen_frame + 0x122)) != '\0') {
          iVar7 = (int)(short)(*(uint *)(gen_frame + 0x124));
          pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(*(uint *)(gen_frame + 0x124)) >> 0x10);
          pvVar4 = (undefined *)F_00a37da0(pvVar4,iVar7);
          ((byte *)(gen_frame + 0x4))[0x4c] = (undefined1)(*(uint *)(gen_frame + 0x128));
          ((byte *)(gen_frame + 0x4))[0x4d] = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x128)) + 1));
          ((byte *)(gen_frame + 0x4))[0x4e] = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x128)) + 2));
          ((byte *)(gen_frame + 0x4))[0x4f] = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x128)) + 3));
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 68)) = pvVar4;
          uVar6 = F_00a3a8a0(pvVar4);
          uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 76));
          if (uVar6 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 76))) {
            uVar2 = F_00a3a8a0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 68)));
            ((byte *)(gen_frame + 0x4))[0x4c] = (char)uVar2;
            ((byte *)(gen_frame + 0x4))[0x4d] = (char)(uVar2 >> 8);
            ((byte *)(gen_frame + 0x4))[0x4e] = (char)(uVar2 >> 0x10);
            ((byte *)(gen_frame + 0x4))[0x4f] = (char)(uVar2 >> 0x18);
            (*(uint *)(gen_frame + 0x128)) = uVar2;
            uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 76));
          }
        }
        F_00a38890((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84)),*param_1,(uint)*(ushort *)(param_1 + 1),
                     *(undefined4 *)uVar8,(uint)*(ushort *)(uVar8 + 4),uVar2);
      }
      uVar2 = F_00a3eb60(param_1,&(*(undefined4 *)(gen_frame + 0x11c)));
      uVar9 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84));
      if (uVar2 != 0) {
        F_00a42ea0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 84)),param_1,&(*(undefined4 *)(gen_frame + 0x11c)),uVar2);
      }
      uVar2 = F_00a3eb60(uVar8,&(*(undefined4 *)(gen_frame + 0xdc)));
      if (uVar2 != 0) {
        F_00a42ea0((undefined *)uVar9,uVar8,&(*(undefined4 *)(gen_frame + 0xdc)),uVar2);
      }
      *(undefined4 *)(uVar9 + 0x2ff8) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
      return 0;
    }
    F_00a7d290(uVar2,0,0,0,0,REFG(float, 0x10916ec));
    F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
    return 10;
  }
LAB_00a461dd: ;
  F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
  return 6;
}

/* ref: FUN_00a46200 */
uint F_00a46200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa46200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = F_00ab24a0(*param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a36f30(this,1000);
    if (*(char *)(uVar2 + 0x10) != '\0') {
      uVar2 = F_00a43260(this,param_1,param_2,uVar1);
      return uVar2;
    }
  }
  *(undefined1 *)((int)this + 0x23e1) = 1;
  *(undefined4 *)((int)this + 0x23e4) = param_1;
  puVar4 = param_2;
  puVar5 = (undefined4 *)((int)this + 0x23e8);
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar2;
}

/* ref: FUN_00a46270 */
uint F_00a46270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa46270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined * pvVar5;
  undefined4 * this_00;
  undefined4 * this_01;
  uint uVar6;
  int * piVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if ((param_1 - 10000U < 7) || (param_1 - 12000U < 3)) {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360),0x74);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x74);
      goto LAB_00a462c7;
    }
  }
  else {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360),0x6e);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x6e);
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 0xd;
    }
  }
  if ((((param_1 != 0xdac) && (9 < param_1 - 0xc80U)) && (param_1 != 0xce4)) && (param_1 != 0xd48))
  {
    pvVar5 = (undefined *)F_00a36f30(this,param_1);
    if (pvVar5 == (undefined *)0x0) {
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 3;
    }
    this_00 = (undefined4 *)F_00a37da0(pvVar5,(int)(short)param_2);
    if ((this_00 != (undefined4 *)0x0) &&
       ((*(char *)((int)this_00 + 6) != '\0' || (this_00[2] != 0)))) {
      bVar4 = F_00a366f0(param_1);
      if (bVar4 == 0) {
        uVar6 = F_0046e5e0(this_00);
        this_01 = (undefined4 *)F_00a371d0(this,uVar6);
      }
      else {
        this_01 = (undefined4 *)F_00a372b0(this);
      }
      if (this_01 != (undefined4 *)0x0) {
        uVar6 = F_0046e5e0(this_00);
        if (uVar6 - 2 < 0x12) {
          piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar8 = 0x2d1;
          pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
          F_0046a630(pvVar5,uVar8);
          F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
          return 0xd;
        }
        uVar6 = F_00a37c50(this_00);
        if (uVar6 == 0) {
          uVar6 = F_00a37c50(this_01);
          if (uVar6 == 0) {
            uVar6 = F_00a3a8a0(this_00);
            if ((uVar6 <= param_3) || (param_3 == 0)) {
              piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              uVar8 = 0x2d1;
              pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
              F_0046a630(pvVar5,uVar8);
              F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
              return 7;
            }
            uVar6 = F_0071d3a0(this_01);
            if ((char)uVar6 != '\0') {
              F_0071d1a0(((undefined1 *)(gen_frame + 0x48)));
              F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
              F_00a3bd60(((undefined1 *)(gen_frame + 0x48)),this_00);
              F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),this_01);
              F_00a3bd60(this_01,this_00);
              F_00a35f80(this_01,param_3);
              uVar6 = F_00a3a8a0(this_00);
              F_00a35f80(this_00,uVar6 - param_3);
              uVar1 = *(ushort *)(this_01 + 1);
              uVar2 = *(ushort *)(this_00 + 1);
              uVar8 = *this_01;
              uVar3 = *this_00;
              uVar6 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x48)));
              F_00a392d0(this,uVar3,(uint)uVar2,uVar8,(uint)uVar1,param_3,uVar6);
              uVar6 = F_00a3eb60(this_00,((undefined1 *)(gen_frame + 0x48)));
              if (uVar6 != 0) {
                F_00a42ea0(this,this_00,((undefined1 *)(gen_frame + 0x48)),uVar6);
              }
              uVar6 = F_00a3eb60(this_01,((undefined1 *)(gen_frame + 0x8)));
              if (uVar6 != 0) {
                F_00a42ea0(this,this_01,((undefined1 *)(gen_frame + 0x8)),uVar6);
              }
              F_00a3a720();
              F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
              return 0;
            }
            goto LAB_00a462c7;
          }
        }
        piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar8 = 0x2d1;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
        F_0046a630(pvVar5,uVar8);
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return 0x13;
      }
    }
    piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar8 = 0x2d1;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
    F_0046a630(pvVar5,uVar8);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 4;
  }
LAB_00a462c7: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0xd;
}

/* ref: FUN_00a465f0 */
uint F_00a465f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa465f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar6 = F_00a37c50(param_1);
  if (uVar6 == 0) {
    uVar6 = F_00a37c50(param_2);
    if (uVar6 == 0) {
      uVar6 = F_00a3a8a0(param_1);
      if ((uVar6 < param_3) || (param_3 == 0)) {
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return 7;
      }
      if ((*(char *)((int)param_2 + 6) == '\0') && (param_2[2] == 0)) {
        bVar5 = F_00a366d0(*param_2);
        if (bVar5 == 0) {
          uVar6 = F_00a3a8a0(param_1);
          if (param_3 == uVar6) {
            uVar1 = *(ushort *)(param_2 + 1);
            uVar2 = *(ushort *)(param_1 + 1);
            uVar3 = *param_2;
            uVar4 = *param_1;
            uVar6 = F_00a3a8a0(param_1);
            F_00a38890(this,uVar4,(uint)uVar2,uVar3,(uint)uVar1,uVar6);
LAB_00a4674b: ;
            F_0071d1a0(((undefined1 *)(gen_frame + 0x48)));
            F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
            F_00a3bd60(((undefined1 *)(gen_frame + 0x48)),param_1);
            F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),param_2);
            F_00a3bd60(param_2,param_1);
            F_00a35f80(param_2,param_3);
            uVar6 = F_00a3a8a0(param_1);
            F_00a35f80(param_1,uVar6 - param_3);
            uVar6 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x48)));
            if (param_3 == uVar6) {
              F_00a35f30(param_1);
            }
            uVar6 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x48)));
            if (uVar6 != 0) {
              F_00a42ea0(this,param_1,((undefined1 *)(gen_frame + 0x48)),uVar6);
            }
            uVar6 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x8)));
            if (uVar6 != 0) {
              F_00a42ea0(this,param_2,((undefined1 *)(gen_frame + 0x8)),uVar6);
            }
            F_00a3a720();
            F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
            return 0;
          }
          uVar3 = *param_1;
          bVar5 = F_00a36750(uVar3);
          if (bVar5 == 0) {
            uVar4 = *param_2;
            bVar5 = F_00a36750(uVar4);
            if (bVar5 == 0) {
              uVar1 = *(ushort *)(param_1 + 1);
              uVar2 = *(ushort *)(param_2 + 1);
              uVar6 = F_00a3a8a0(param_1);
              F_00a392d0(this,uVar3,(uint)uVar1,uVar4,(uint)uVar2,param_3,uVar6);
              goto LAB_00a4674b;
            }
          }
        }
      }
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 0xd;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0x13;
}

/* ref: FUN_00a46840 */
uint F_00a46840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa46840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) &&
      ((*(char *)((int)param_1 + 6) != '\0' || (param_1[2] != 0)))) &&
     ((*(char *)((int)param_2 + 6) != '\0' || (param_2[2] != 0)))) {
    uVar4 = F_0046e5e0(param_1);
    uVar5 = F_0046e5e0(param_2);
    if (uVar5 == uVar4) {
      bVar3 = F_00a36750(*param_1);
      if (bVar3 == 0) {
        bVar3 = F_00a36750(*param_2);
        if (bVar3 == 0) {
          F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
          F_0071d1a0(((undefined1 *)(gen_frame + 0x48)));
          F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),param_1);
          F_00a3bd60(((undefined1 *)(gen_frame + 0x48)),param_2);
          uVar4 = F_0046e5e0(param_2);
          uVar4 = F_00ab24a0(uVar4);
          if (uVar4 != 0) {
            uVar5 = F_00906df0(param_2);
            if (uVar5 != 0) {
              uVar5 = F_00a3a8a0(param_2);
              uVar5 = uVar5 + param_3;
              uVar4 = *(uint *)(uVar4 + 0x28);
              if (uVar4 < uVar5) {
                F_00a35f80(param_2,uVar4);
                F_00a35f80(param_1,uVar5 - uVar4);
                uVar4 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x48)));
                uVar5 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x8)));
                uVar2 = *(ushort *)(param_2 + 1);
                uVar7 = *param_2;
                uVar1 = *(ushort *)(param_1 + 1);
                uVar6 = *param_1;
              }
              else {
                F_00a35f80(param_2,uVar5);
                uVar4 = F_00a3a8a0(param_1);
                F_00a35f80(param_1,uVar4 - param_3);
                uVar4 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x48)));
                uVar5 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x8)));
                uVar7 = *param_2;
                uVar1 = *(ushort *)(param_1 + 1);
                uVar2 = *(ushort *)(param_2 + 1);
                uVar6 = *param_1;
              }
              F_00a39390(this,uVar6,(uint)uVar1,uVar7,(uint)uVar2,param_3,uVar5,uVar4);
              uVar4 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x8)));
              if (uVar4 != 0) {
                F_00a42ea0(this,param_1,((undefined1 *)(gen_frame + 0x8)),uVar4);
              }
              uVar4 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x48)));
              if (uVar4 != 0) {
                F_00a42ea0(this,param_2,((undefined1 *)(gen_frame + 0x48)),uVar4);
              }
              F_00a3a720();
              F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
              return 0;
            }
          }
          F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
          return 6;
        }
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0xc;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 4;
}

/* ref: FUN_00a46a80 */
uint F_00a46a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa46a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  uVar6 = param_1[2];
  if (param_1[2] == param_2[2]) {
    uVar1 = param_1[3];
    iVar7 = 0;
    uVar6 = uVar1;
    if (0 < (int)uVar1) {
      local_8 = 0;
      do {
        if (((*param_1 == 0) || (iVar7 < 0)) || (param_1[3] <= iVar7)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *param_1 + local_8;
          if (*(char *)(iVar2 + 6) != '\0') {
            iVar3 = (int)*(short *)(iVar2 + 8);
            piVar4 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(iVar2 + 10));
            if (((*piVar4 == 0) || (iVar3 < 0)) || (piVar4[3] <= iVar3)) {
              iVar2 = 0;
            }
            else {
              iVar2 = iVar3 * 0x40 + *piVar4;
            }
          }
        }
        if (((*param_2 == 0) || (iVar7 < 0)) || (param_2[3] <= iVar7)) {
LAB_00a46b4d: ;
          iVar3 = 0;
        }
        else {
          iVar3 = *param_2 + local_8;
          if (*(char *)(iVar3 + 6) != '\0') {
            iVar8 = (int)*(short *)(iVar3 + 8);
            piVar4 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(iVar3 + 10));
            if (((*piVar4 == 0) || (iVar8 < 0)) || (piVar4[3] <= iVar8)) goto LAB_00a46b4d;
            iVar3 = iVar8 * 0x40 + *piVar4;
          }
        }
        uVar5 = F_00a3eb60(iVar2,iVar3);
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = F_00a42ea0(this,iVar2,iVar3,uVar5);
        }
        local_8 = local_8 + 0x40;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar1);
    }
  }
  return uVar6;
}

/* ref: FUN_00a46b80 */
uint F_00a46b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa46b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = F_00a36f30(this,uVar1);
  if (*(char *)(uVar4 + 0x10) == '\0') {
    uVar4 = F_00a3fa30(((undefined *)(uint)(this)),uVar1);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar4;
  }
  this_00 = (undefined *)F_00a36f30(((undefined *)(uint)(this)),uVar1);
  uVar4 = 0;
  if (this_00 != (undefined *)0x0) {
    puVar5 = (undefined4 *)F_00a37da0(this_00,(int)*(short *)(param_1 + 0x24));
    uVar4 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
      F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),puVar5);
      iVar2 = *(int *)(param_1 + 0x2c);
      puVar5[2] = iVar2;
      iVar3 = *(int *)(param_1 + 0x28);
      puVar5[3] = iVar3;
      if (((iVar3 == 0) && (puVar5[3] = 0, *(char *)((int)puVar5 + 6) == '\0')) && (iVar2 != 1)) {
        puVar5[2] = 0;
      }
      uVar4 = F_00a3eb60(puVar5,((undefined1 *)(gen_frame + 0x8)));
      if (uVar4 != 0) {
        F_00a42ea0(this,puVar5,((undefined1 *)(gen_frame + 0x8)),uVar4);
      }
      uVar4 = F_00a376a0(this,*puVar5,(uint)*(ushort *)(puVar5 + 1));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar4;
}

/* ref: FUN_00a46c50 */
uint F_00a46c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa46c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = F_00a36f30(this,uVar1);
  if (*(char *)(uVar2 + 0x10) == '\0') {
    uVar2 = F_00a3fa30(((undefined *)(uint)(this)),uVar1);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  this_00 = (undefined *)F_00a36f30(((undefined *)(uint)(this)),uVar1);
  if (this_00 != (undefined *)0x0) {
    puVar3 = (undefined4 *)F_00a37da0(this_00,(int)*(short *)(param_1 + 0x10));
    if (puVar3 != (undefined4 *)0x0) {
      F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
      F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),puVar3);
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar3[4] = 0x75300000;
      *(undefined1 *)((int)puVar3 + 0x2f) = 0;
      puVar3[0xc] = 0;
      *(undefined1 *)((int)puVar3 + 6) = 0;
      puVar3[0xf] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      *(undefined2 *)(puVar3 + 10) = 0;
      *(undefined4 *)((int)puVar3 + 0x2a) = 0;
      *(undefined1 *)((int)puVar3 + 0x2e) = 0;
      puVar3[0xd] = 0;
      *(undefined1 *)(puVar3 + 0xe) = 0;
      uVar2 = F_00a3eb60(puVar3,((undefined1 *)(gen_frame + 0x8)));
      if (uVar2 != 0) {
        F_00a42ea0(this,puVar3,((undefined1 *)(gen_frame + 0x8)),uVar2);
      }
      F_00a376a0(this,*puVar3,(uint)*(ushort *)(puVar3 + 1));
    }
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((uVar2 == 1000) || (uVar2 == 11000)) {
    *(undefined4 *)((int)this + 0x2ff8) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_00a46d60 */
uint F_00a46d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa46d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = F_00a36f30(this,uVar1);
  if (*(char *)(uVar4 + 0x10) == '\0') {
    uVar4 = F_00a3fa30(((undefined *)(uint)(this)),uVar1);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar4;
  }
  this_00 = (undefined *)F_00a36f30(((undefined *)(uint)(this)),uVar1);
  uVar4 = 0;
  if (this_00 != (undefined *)0x0) {
    puVar5 = (undefined4 *)F_00a37da0(this_00,(int)*(short *)(param_1 + 0x10));
    uVar4 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
      F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),puVar5);
      iVar2 = *(int *)(param_1 + 0x18);
      puVar5[2] = iVar2;
      iVar3 = *(int *)(param_1 + 0x14);
      puVar5[3] = iVar3;
      if (((iVar3 == 0) && (puVar5[3] = 0, *(char *)((int)puVar5 + 6) == '\0')) && (iVar2 != 1)) {
        puVar5[2] = 0;
      }
      uVar4 = F_00a3eb60(puVar5,((undefined1 *)(gen_frame + 0x8)));
      if (uVar4 != 0) {
        F_00a42ea0(this,puVar5,((undefined1 *)(gen_frame + 0x8)),uVar4);
      }
      uVar4 = F_00a376a0(this,*puVar5,(uint)*(ushort *)(puVar5 + 1));
    }
  }
  if ((*(int *)(param_1 + 0xc) == 1000) || (*(int *)(param_1 + 0xc) == 11000)) {
    *(undefined4 *)((int)this + 0x2ff8) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar4;
}

/* ref: FUN_00a46e50 */
byte F_00a46e50(unsigned int gen_a0)
{
  GEN_ENTER(0xa46e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x660];
  byte bVar1;
  undefined1 * puVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  
  (*(uint *)(gen_frame + 0x658)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x65c);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (REFG(int, 0x1379694) != 0) {
    iVar8 = 0x59;
    puVar2 = ((undefined1 *)(gen_frame + 0x70));
    do {
      *(undefined4 *)(puVar2 + -8) = 0;
      *(undefined4 *)(puVar2 + -4) = 0;
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      puVar2 = puVar2 + 0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    piVar3 = (int *)F_00a36f30(this,0x7d4);
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar3;
    uVar4 = F_00a3aba0(piVar3);
    bVar1 = F_006e4d80();
    if (bVar1 != 0) {
      (*(uint *)(gen_frame + 0x24)) = 0;
      uVar10 = 0;
      do {
        uVar5 = (*(uint *)(gen_frame + 0x24)) & 0xffff;
        puVar14 = &(*(undefined4 *)(gen_frame + 0x18));
        puVar13 = &(*(undefined4 *)(gen_frame + 0x8));
        piVar3 = ((int *)(gen_frame + 0x68)) + uVar5 * 0xc;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        uVar12 = (*(uint *)(gen_frame + 0x24));
        pvVar6 = (undefined *)F_006b8c00();
        bVar1 = F_006e3280(pvVar6,uVar12,piVar3,puVar13,puVar14);
        if (bVar1 == 0) goto LAB_00a4715d;
        piVar3 = (int *)(((undefined1 *)(gen_frame + 0x70)) + uVar5 * 0x30 + -4);
        (*(uint *)(gen_frame + 0x1c)) = uVar10;
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
        (*(int *)(gen_frame + 0x10)) = 3;
        do {
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
          if ((*(*(int * PTR32 *)(gen_frame + 0x14)) == 0) || ((*(int * PTR32 *)(gen_frame + 0x14))[3] <= (int)((*(uint *)(gen_frame + 0x1c)) & 0xffff))) {
LAB_00a46f9a: ;
            iVar8 = 0;
          }
          else {
            iVar8 = ((*(uint *)(gen_frame + 0x1c)) & 0xffff) * 0x40 + *(*(int * PTR32 *)(gen_frame + 0x14));
            if (*(char *)(iVar8 + 6) != '\0') {
              iVar9 = (int)*(short *)(iVar8 + 8);
              piVar7 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(iVar8 + 10));
              if (((*piVar7 == 0) || (iVar9 < 0)) || (piVar7[3] <= iVar9)) goto LAB_00a46f9a;
              iVar8 = iVar9 * 0x40 + *piVar7;
            }
          }
          (*(undefined4 *)(gen_frame + 0x28)) = 9999;
          (*(undefined2 *)(gen_frame + 0x2c)) = 0;
          (*(undefined1 *)(gen_frame + 0x2e)) = 0;
          (*(undefined4 *)(gen_frame + 0x30)) = 0;
          (*(undefined4 *)(gen_frame + 0x34)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          (*(undefined4 *)(gen_frame + 0x44)) = 0;
          (*(undefined1 *)(gen_frame + 0x3c)) = 0;
          (*(undefined4 *)(gen_frame + 0x38)) = 0x75300000;
          (*(undefined4 *)(gen_frame + 0x58)) = 0;
          (*(undefined4 *)(gen_frame + 0x64)) = 0;
          (*(undefined4 *)(gen_frame + 0x48)) = 0;
          (*(undefined4 *)(gen_frame + 0x4c)) = 0;
          (*(undefined2 *)(gen_frame + 0x50)) = 0;
          (*(undefined4 *)(gen_frame + 0x52)) = 0;
          (*(undefined2 *)(gen_frame + 0x56)) = 0;
          (*(undefined4 *)(gen_frame + 0x5c)) = 0;
          (*(undefined1 *)(gen_frame + 0x60)) = 0;
          F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x28)),iVar8);
          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0xc));
          uVar10 = piVar3[-1];
          *(uint *)(iVar8 + 8) = uVar10;
          if ((*(char *)(iVar8 + 6) == '\0') && ((uVar10 < 0x1e8481 || (0x1e8909 < uVar10)))) {
            if (uVar10 < 1000000) {
              *(byte *)(iVar8 + 0x14) = *(byte *)(iVar8 + 0x14) & 0xfe;
            }
            else {
              *(byte *)(iVar8 + 0x14) = *(byte *)(iVar8 + 0x14) | 1;
              *(uint *)(iVar8 + 8) = uVar10 - 1000000;
            }
          }
          iVar9 = *piVar3;
          *(int *)(iVar8 + 0xc) = iVar9;
          if (((iVar9 == 0) && (*(undefined4 *)(iVar8 + 0xc) = 0, *(char *)(iVar8 + 6) == '\0')) &&
             (*(int *)(iVar8 + 8) != 1)) {
            *(undefined4 *)(iVar8 + 8) = 0;
          }
          *(undefined4 *)(iVar8 + 0x3c) = (*(undefined4 *)(gen_frame + 0x8));
          uVar10 = F_00a3eb60(iVar8,&(*(undefined4 *)(gen_frame + 0x28)));
          if (uVar10 != 0) {
            F_00a42ea0(pvVar6,iVar8,&(*(undefined4 *)(gen_frame + 0x28)),uVar10);
          }
          piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
          uVar10 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
          *(byte *)(uVar10 + 0x230bf) = *(byte *)(uVar10 + 0x230bf) | 1;
          F_006d0fd0();
          F_00701020();
          piVar3 = (*(int * PTR32 *)(gen_frame + 0x20)) + 4;
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
          uVar10 = (*(uint *)(gen_frame + 0x1c)) + 1;
          (*(uint *)(gen_frame + 0x1c)) = uVar10;
          uVar12 = (*(uint *)(gen_frame + 0x1c));
          iVar8 = (*(int *)(gen_frame + 0x10)) + -1;
          (*(int *)(gen_frame + 0x10)) = iVar8;
        } while (iVar8 != 0);
        (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = (ushort)uVar10;
        bVar11 = (ushort)(*(uint *)(gen_frame + 0x1c)) < 0x5a;
        uVar10 = uVar10 & 0xffff;
        (*(uint *)(gen_frame + 0x1c)) = uVar12;
      } while (bVar11);
      puVar13 = &(*(undefined4 *)(gen_frame + 0x18));
      puVar14 = &(*(undefined4 *)(gen_frame + 0x608));
      (*(undefined4 *)(gen_frame + 0x608)) = 0;
      (*(int *)(gen_frame + 0x60c)) = 0;
      (*(undefined1 *)(gen_frame + 0x610)) = 0;
      (*(undefined4 *)(gen_frame + 0x614)) = 0;
      (*(undefined4 *)(gen_frame + 0x618)) = 0;
      (*(undefined4 *)(gen_frame + 0x61c)) = 0;
      (*(undefined1 *)(gen_frame + 0x620)) = 0;
      (*(undefined4 *)(gen_frame + 0x624)) = 0;
      (*(undefined4 *)(gen_frame + 0x628)) = 0;
      (*(undefined4 *)(gen_frame + 0x62c)) = 0;
      (*(undefined1 *)(gen_frame + 0x630)) = 0;
      (*(undefined4 *)(gen_frame + 0x634)) = 0;
      (*(undefined4 *)(gen_frame + 0x638)) = 0;
      (*(undefined4 *)(gen_frame + 0x63c)) = 0;
      (*(undefined1 *)(gen_frame + 0x640)) = 0;
      (*(undefined4 *)(gen_frame + 0x644)) = 0;
      (*(undefined4 *)(gen_frame + 0x648)) = 0;
      (*(undefined4 *)(gen_frame + 0x64c)) = 0;
      (*(undefined1 *)(gen_frame + 0x650)) = 0;
      (*(undefined4 *)(gen_frame + 0x654)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      pvVar6 = (undefined *)F_006b8c00();
      bVar1 = F_006d70a0(pvVar6,puVar14,puVar13);
      if (bVar1 == 0) {
LAB_00a4715d: ;
        F_00c47745((*(uint *)(gen_frame + 0x658)) ^ (uint)(uint)(gen_frame + 0x65c));
        return 0;
      }
      piVar3 = &(*(int *)(gen_frame + 0x60c));
      (*(uint *)(gen_frame + 0x24)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
      do {
        uVar10 = (*(uint *)(gen_frame + 0x24)) + 0x5a & 0xffff;
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
        if ((*(*(int * PTR32 *)(gen_frame + 0x14)) == 0) || ((*(int * PTR32 *)(gen_frame + 0x14))[3] <= (int)uVar10)) {
LAB_00a471df: ;
          iVar8 = 0;
        }
        else {
          iVar8 = uVar10 * 0x40 + *(*(int * PTR32 *)(gen_frame + 0x14));
          if (*(char *)(iVar8 + 6) != '\0') {
            iVar9 = (int)*(short *)(iVar8 + 8);
            piVar7 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(iVar8 + 10));
            if (((*piVar7 == 0) || (iVar9 < 0)) || (piVar7[3] <= iVar9)) goto LAB_00a471df;
            iVar8 = iVar9 * 0x40 + *piVar7;
          }
        }
        (*(undefined2 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 9999;
        (*(undefined1 *)(gen_frame + 0x2e)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined1 *)(gen_frame + 0x3c)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0x75300000;
        (*(undefined4 *)(gen_frame + 0x58)) = 0;
        (*(undefined4 *)(gen_frame + 0x64)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
        (*(undefined2 *)(gen_frame + 0x50)) = 0;
        (*(undefined4 *)(gen_frame + 0x52)) = 0;
        (*(undefined2 *)(gen_frame + 0x56)) = 0;
        (*(undefined4 *)(gen_frame + 0x5c)) = 0;
        (*(undefined1 *)(gen_frame + 0x60)) = 0;
        F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x28)),iVar8);
        pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0xc));
        uVar10 = piVar3[-1];
        *(uint *)(iVar8 + 8) = uVar10;
        if ((*(char *)(iVar8 + 6) == '\0') && ((uVar10 < 0x1e8481 || (0x1e8909 < uVar10)))) {
          if (uVar10 < 1000000) {
            *(byte *)(iVar8 + 0x14) = *(byte *)(iVar8 + 0x14) & 0xfe;
          }
          else {
            *(byte *)(iVar8 + 0x14) = *(byte *)(iVar8 + 0x14) | 1;
            *(uint *)(iVar8 + 8) = uVar10 - 1000000;
          }
        }
        iVar9 = *piVar3;
        *(int *)(iVar8 + 0xc) = iVar9;
        if (((iVar9 == 0) && (*(undefined4 *)(iVar8 + 0xc) = 0, *(char *)(iVar8 + 6) == '\0')) &&
           (*(int *)(iVar8 + 8) != 1)) {
          *(undefined4 *)(iVar8 + 8) = 0;
        }
        *(int *)(iVar8 + 0x3c) = piVar3[2];
        uVar10 = F_00a3eb60(iVar8,&(*(undefined4 *)(gen_frame + 0x28)));
        if (uVar10 != 0) {
          F_00a42ea0(pvVar6,iVar8,&(*(undefined4 *)(gen_frame + 0x28)),uVar10);
        }
        piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
        uVar10 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
        *(byte *)(uVar10 + 0x230bf) = *(byte *)(uVar10 + 0x230bf) | 1;
        F_006d0fd0();
        F_00701020();
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x20)) + 4;
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
        iVar8 = (*(uint *)(gen_frame + 0x24)) + 1;
        (*(uint *)(gen_frame + 0x24)) = iVar8;
        if (4 < (ushort)iVar8) {
          uVar10 = F_00a3aba0((*(int * PTR32 *)(gen_frame + 0x14)));
          if (uVar4 < uVar10) {
            F_004ea820(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8),0x12);
          }
          F_00c47745((*(uint *)(gen_frame + 0x658)) ^ (uint)(uint)(gen_frame + 0x65c));
          return 1;
        }
      } while( true );
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x658)) ^ (uint)(uint)(gen_frame + 0x65c));
  return 0;
}

/* ref: FUN_00a47360 */
uint F_00a47360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa47360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar1 = *param_2;
  if ((((uVar1 != 0xdac) && (9 < uVar1 - 0xc80)) && (uVar1 != 0xce4)) && (uVar1 != 0xd48)) {
LAB_00a47441: ;
    if ((uVar1 == 1000) || (uVar1 == 11000)) {
      uVar1 = F_00a45170(this,param_1,param_2,param_3);
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return uVar1;
    }
    if ((*param_1 != 1000) && (*param_1 != 11000)) {
      F_0071d1a0(((undefined1 *)(gen_frame + 0x48)));
      F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
      F_00a3bd60(((undefined1 *)(gen_frame + 0x48)),param_1);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),param_2);
      F_00a3bd60(param_2,param_1);
      F_00a35f30(param_1);
      if ((char)param_3 != '\0') {
        uVar1 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x48)));
        F_00a38890(this,*param_1,(uint)*(ushort *)(param_1 + 1),*param_2,(uint)(ushort)param_2[1],
                     uVar1);
      }
      uVar1 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x48)));
      if (uVar1 != 0) {
        F_00a42ea0(this,param_1,((undefined1 *)(gen_frame + 0x48)),uVar1);
      }
      uVar1 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x8)));
      if (uVar1 != 0) {
        F_00a42ea0(this,param_2,((undefined1 *)(gen_frame + 0x8)),uVar1);
      }
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 0;
    }
    uVar1 = F_00a45b30(this,param_1,param_2,param_3);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return uVar1;
  }
  uVar1 = F_00906df0(param_1);
  uVar1 = F_00ab24a0(uVar1);
  if (uVar1 != 0) {
    uVar1 = F_00ab25a0((uint)*(byte *)(uVar1 + 0xa6));
    iVar4 = 0;
    do {
      if (*(char *)(uVar1 + 4 + iVar4) == '\x01') {
        if ((char)iVar4 != '\x0e') {
          uVar1 = *param_2;
          uVar3 = F_00a36960(iVar4);
          if (uVar3 == uVar1) goto LAB_00a47441;
          piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar5 = 0x313;
          goto LAB_00a473f8;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xe);
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x312;
LAB_00a473f8: ;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  F_0046a630(this_00,uVar5);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 10;
}

/* ref: FUN_00a47560 */
uint F_00a47560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa47560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  uVar2 = *param_1;
  if ((int)uVar2 < 20000) {
LAB_00a475b0: ;
    uVar4 = *param_2;
    if ((19999 < (int)uVar4) && ((int)uVar4 < 0x55f2)) {
LAB_00a475c0: ;
      F_00a51200(0x2a,uVar2,uVar4,0,0);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return 10;
    }
  }
  else {
    if (((int)uVar2 < 0x55f2) && ((uVar4 = *param_2, (int)uVar4 < 20000 || (0x55f1 < (int)uVar4))))
    goto LAB_00a475c0;
    if (((int)uVar2 < 20000) || (0x55f1 < (int)uVar2)) goto LAB_00a475b0;
  }
  uVar4 = *param_2;
  if ((uVar4 == 1000) || (uVar4 == 11000)) {
    uVar2 = F_00a44630(this,param_1,param_2,param_3);
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return uVar2;
  }
  if ((uVar2 == 1000) || (uVar2 == 11000)) {
    uVar2 = F_00a44630(this,param_2,param_1,param_3);
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return uVar2;
  }
  if ((uVar4 == 0xdac) || (((uVar4 - 0xc80 < 10 || (uVar4 == 0xce4)) || (uVar4 == 0xd48)))) {
    uVar2 = F_00906df0(param_1);
    uVar2 = F_00ab24a0(uVar2);
    bVar1 = F_00a36920(uVar2);
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
    if (bVar1 != 0xe) {
      uVar2 = F_00a36960((*(undefined4 *)(gen_frame + 0x4)));
      if (uVar2 == *param_2) goto LAB_00a476ed;
LAB_00a476db: ;
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar5 = 0x313;
      goto LAB_00a476a0;
    }
  }
  else {
LAB_00a476ed: ;
    bVar1 = F_00a36750(*param_1);
    if (bVar1 == 0) {
LAB_00a47733: ;
      F_0071d1a0(((undefined1 *)(gen_frame + 0x88)));
      F_0071d1a0(((undefined1 *)(gen_frame + 0x48)));
      F_00a3bd60(((undefined1 *)(gen_frame + 0x88)),param_1);
      F_00a3bd60(((undefined1 *)(gen_frame + 0x48)),param_2);
      F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
      F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),param_2);
      F_00a3bd60(param_2,param_1);
      F_00a3bd60(param_1,((undefined1 *)(gen_frame + 0x8)));
      if ((char)param_3 != '\0') {
        uVar2 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x48)));
        uVar4 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x88)));
        F_00a39130(this,*param_1,(uint)(ushort)param_1[1],*param_2,(uint)(ushort)param_2[1],uVar4,
                     uVar2);
      }
      uVar2 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x88)));
      if ((uVar2 | 1) != 0) {
        F_00a42ea0(this,param_1,((undefined1 *)(gen_frame + 0x88)),uVar2 | 1);
      }
      uVar2 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x48)));
      if ((uVar2 | 1) != 0) {
        F_00a42ea0(this,param_2,((undefined1 *)(gen_frame + 0x48)),uVar2 | 1);
      }
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return 0;
    }
    uVar2 = F_00906df0(param_2);
    uVar2 = F_00ab24a0(uVar2);
    bVar1 = F_00a36920(uVar2);
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar1);
    if (bVar1 != 0xe) {
      uVar2 = F_00a36960((*(undefined4 *)(gen_frame + 0x4)));
      if (uVar2 == *param_1) goto LAB_00a47733;
      goto LAB_00a476db;
    }
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x312;
LAB_00a476a0: ;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
  F_0046a630(this_00,uVar5);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return 10;
}

/* ref: FUN_00a47820 */
uint F_00a47820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa47820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
      ((*(char *)((int)param_1 + 6) == '\0' && (param_1[2] == 0)))) ||
     ((*(char *)((int)param_2 + 6) == '\0' && (param_2[2] == 0)))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
    return 4;
  }
  uVar2 = F_0046e5e0(param_1);
  uVar3 = F_0046e5e0(param_2);
  if (uVar3 == uVar2) {
    F_0071d1a0(((undefined1 *)(gen_frame + 0x48)));
    F_0071d1a0(((undefined1 *)(gen_frame + 0x8)));
    F_00a3bd60(((undefined1 *)(gen_frame + 0x48)),param_1);
    F_00a3bd60(((undefined1 *)(gen_frame + 0x8)),param_2);
    uVar2 = F_0046e5e0(param_2);
    uVar2 = F_00ab24a0(uVar2);
    if ((uVar2 == 0) || (uVar3 = F_00906df0(param_2), uVar3 == 0)) {
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return 6;
    }
    uVar3 = F_00a3a8a0(param_1);
    uVar4 = F_00a3a8a0(param_2);
    uVar3 = uVar3 + uVar4;
    uVar2 = *(uint *)(uVar2 + 0x28);
    uVar4 = F_00a3a8a0(param_1);
    if ((uVar4 == uVar2) || (uVar4 = F_00a3a8a0(param_2), uVar4 == uVar2)) {
      uVar2 = F_00906df0(param_1);
      if ((0x11 < uVar2 - 2) && (uVar2 = F_00906df0(param_2), 0x11 < uVar2 - 2)) {
        uVar2 = F_00a47560(this,param_1,param_2,param_3);
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return uVar2;
      }
    }
    else {
      bVar1 = F_00a36750(*param_1);
      if ((bVar1 != 0) || (bVar1 = F_00a36750(*param_2), bVar1 != 0)) goto LAB_00a47ace;
      if (uVar3 <= uVar2) {
        F_00a35f80(param_2,uVar3);
        F_00a35f30(param_1);
        if ((char)param_3 != '\0') {
          uVar2 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x8)));
          uVar3 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x48)));
          F_00a39200(this,*param_1,(uint)*(ushort *)(param_1 + 1),*param_2,
                       (uint)*(ushort *)(param_2 + 1),uVar3,uVar2);
        }
LAB_00a47a10: ;
        uVar2 = F_00a3eb60(param_1,((undefined1 *)(gen_frame + 0x48)));
        if (uVar2 != 0) {
          F_00a42ea0(this,param_1,((undefined1 *)(gen_frame + 0x48)),uVar2);
        }
        uVar2 = F_00a3eb60(param_2,((undefined1 *)(gen_frame + 0x8)));
        if (uVar2 != 0) {
          F_00a42ea0(this,param_2,((undefined1 *)(gen_frame + 0x8)),uVar2);
        }
        F_00a3a720();
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return 0;
      }
      uVar4 = F_00906df0(param_1);
      if (0x11 < uVar4 - 2) {
        F_00a35f80(param_2,uVar2);
        F_00a35f80(param_1,uVar3 - uVar2);
        if ((char)param_3 != '\0') {
          uVar2 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x8)));
          uVar3 = F_00a3a8a0(((undefined1 *)(gen_frame + 0x48)));
          F_00a39200(this,*param_1,(uint)*(ushort *)(param_1 + 1),*param_2,
                       (uint)*(ushort *)(param_2 + 1),uVar3,uVar2);
        }
        goto LAB_00a47a10;
      }
    }
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 0x4d8;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
    F_0046a630(this_00,uVar6);
  }
LAB_00a47ace: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0xc;
}

/* ref: FUN_00a47b20 */
uint F_00a47b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa47b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x54)) {
    if (*(int *)(iVar1 + 8) == 0x1b2) {
      switch((unsigned int)(uintptr_t)(*(undefined1 *)(iVar1 + 0x14))) {
      case 5: ;
        F_00a46b80(this,iVar1 + 0x10);
        break;
      case 6: ;
        F_00a46d60(this,iVar1 + 0x10);
        break;
      case 7: ;
        F_00a46c50(this,iVar1 + 0x10);
        break;
      case 0x14: ;
        F_00a41af0(this,iVar1 + 0x10);
        break;
      case 0x28: ;
        F_00a3ced0(this,*(undefined4 *)(iVar1 + 0x1c),(uint)*(ushort *)(iVar1 + 0x20),0);
        F_00a376a0(this,*(undefined4 *)(iVar1 + 0x1c),(uint)*(ushort *)(iVar1 + 0x20));
      }
    }
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
  *(byte *)(uVar3 + 0x230bf) = *(byte *)(uVar3 + 0x230bf) | 1;
  F_006d0fd0();
  uVar3 = F_00701020();
  return uVar3;
}

/* ref: FUN_00a47c20 */
uint F_00a47c20(unsigned int gen_a0)
{
  GEN_ENTER(0xa47c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined * pvVar8;
  ushort uVar9;
  undefined4 * puVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 * local_c;
  int local_8;
  
  if ((*(char *)((int)this + 0x35f) != '\0') && (bVar1 = F_00a46e50(this), bVar1 != 0)) {
    *(undefined1 *)((int)this + 0x35f) = 0;
  }
  if (*(int *)((int)this + 0x334) < 2) goto LAB_00a47d07;
  uVar2 = F_00a64490(&REFG(undefined, 0x14a9a18),(int)this + 0x33c,0);
  pvVar8 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
LAB_00a47cec: ;
    if (uVar2 != 0) goto LAB_00a47d07;
  }
  else if (uVar2 != 0) {
    if ((*(char *)((int)this + 0x35d) != '\0') && (uVar3 = F_00a9fbf0(REFG(void * PTR32, 0x1379694)), (char)uVar3 != '\0')) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar12 = 0x2c;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046a630(pvVar5,uVar12);
      *(undefined1 *)((int)this + 0x35d) = 0;
    }
    fVar11 = F_00a601f0(pvVar8,uVar2);
    if (((*(double *)&REFG(undefined, 0x10df038) < (double)fVar11) || (bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x15), bVar1 == 0)) && (*(char *)((int)this + 0x35e) == '\0')) {
      *(undefined1 *)((int)this + 0x35e) = 1;
      F_00a38f30(this);
    }
    goto LAB_00a47cec;
  }
  if (*(char *)((int)this + 0x35e) == '\0') {
    *(undefined1 *)((int)this + 0x35e) = 1;
    F_00a38f30(this);
  }
LAB_00a47d07: ;
  if (*(char *)((int)this + 0x23e1) != '\0') {
    uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0x23e8));
    if ((uVar2 != 0) && (uVar3 = F_00a36f30(this,1000), *(char *)(uVar3 + 0x10) != '\0')) {
      F_00a43260(((undefined *)(uint)(this)),*(undefined4 *)((int)this + 0x23e4),(int)this + 0x23e8,uVar2);
      *(undefined4 *)((int)this + 0x23e4) = 0;
      *(undefined1 *)((int)this + 0x23e1) = 0;
    }
  }
  local_c = (undefined4 *)((int)this + 0x2498);
  local_8 = 0;
  do {
    uVar9 = *(short *)((int)this + 0x28) - 1000;
    uVar2 = uVar9 + 1000;
    if (uVar9 == 10000) {
      uVar2 = 11000;
LAB_00a47dae: ;
      piVar4 = (int *)F_00a36f30(this,uVar2);
      if (piVar4 == (int *)0x0) goto LAB_00a47eb2;
      iVar7 = (int)(short)local_8;
      if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) goto LAB_00a47eb2;
      pvVar8 = (undefined *)(iVar7 * 0x40 + *piVar4);
      if (*(char *)((int)pvVar8 + 6) != '\0') {
        iVar7 = (int)*(short *)((int)pvVar8 + 8);
        piVar4 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)((int)pvVar8 + 10));
        if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
          pvVar8 = (undefined *)0x0;
        }
        else {
          pvVar8 = (undefined *)(iVar7 * 0x40 + *piVar4);
        }
      }
      if (pvVar8 == (undefined *)0x0) goto LAB_00a47eb2;
      if (*(char *)((int)pvVar8 + 6) == '\0') {
        pvVar5 = *(undefined * PTR32 *)((int)pvVar8 + 8);
        if ((*(byte *)((int)pvVar8 + 0x14) & 1) != 0) {
          pvVar5 = (undefined *)((int)pvVar5 + 1000000);
        }
      }
      else {
        piVar4 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)((int)pvVar8 + 10));
        if (piVar4 == (int *)0x0) {
          pvVar5 = (undefined *)F_0046e5e0((undefined *)0x0);
        }
        else {
          iVar7 = (int)*(short *)((int)pvVar8 + 8);
          if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
LAB_00a47e97: ;
            pvVar5 = pvVar8;
          }
          else {
            pvVar5 = (undefined *)(iVar7 * 0x40 + *piVar4);
            if (*(char *)((int)pvVar5 + 6) != '\0') {
              iVar7 = (int)*(short *)((int)pvVar5 + 8);
              piVar4 = (int *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)((int)pvVar5 + 10));
              if (((*piVar4 == 0) || (iVar7 < 0)) || (piVar4[3] <= iVar7)) {
                pvVar5 = (undefined *)0x0;
              }
              else {
                pvVar5 = (undefined *)(iVar7 * 0x40 + *piVar4);
              }
            }
            if (pvVar5 == (undefined *)0x0) goto LAB_00a47e97;
          }
          pvVar5 = (undefined *)F_0046e5e0(pvVar5);
        }
      }
      if (pvVar5 == (undefined *)0x0) goto LAB_00a47eb2;
      uVar2 = 1 << ((byte)local_8 & 0x1f);
      if ((*(uint *)((int)this + 0x2ff8) & uVar2) == 0) {
        puVar6 = (undefined4 *)F_00ab24a0(pvVar5);
        pvVar5 = (undefined *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          puVar10 = local_c;
          for (iVar7 = 0x34; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          *(uint *)((int)this + 0x2ff8) = *(uint *)((int)this + 0x2ff8) | uVar2;
          pvVar5 = this;
        }
      }
    }
    else {
      if ((999 < uVar2) && ((uVar2 < 0x3e9 || (uVar2 == 11000)))) goto LAB_00a47dae;
LAB_00a47eb2: ;
      pvVar5 = ((undefined *)GEN_TOP(~(1 << ((byte)local_8 & 0x1f))));
      *(uint *)((int)this + 0x2ff8) = *(uint *)((int)this + 0x2ff8) & (uint)pvVar5;
    }
    local_c = local_c + 0x34;
    local_8 = local_8 + 1;
    if (0xd < local_8) {
      if ((*(char *)((int)this + 0x311e) != '\0') && (pvVar5 = (undefined *)F_00ab1160((float *)((int)this + 0x3120),1), *(float *)((int)this + 0x3120) <= 0.0)) {
        *(undefined1 *)((int)this + 0x311e) = 0;
      }
      if ((*(char *)((int)this + 0x3124) != '\0') && (pvVar5 = (undefined *)F_00ab1160((float *)((int)this + 0x3128),1), *(float *)((int)this + 0x3128) <= 0.0)) {
        *(undefined1 *)((int)this + 0x3124) = 0;
      }
      return (uint)pvVar5;
    }
  } while( true );
}

/* ref: FUN_00a47f70 */
uint F_00a47f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa47f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  int * this_00;
  int iVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * this_01;
  undefined * pvVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(uint *)(gen_frame + 0x14)) = param_2 & 0xffff;
  (*(int *)(gen_frame + 0x24)) = param_1;
  (*(int *)(gen_frame + 0x28)) = param_3;
  (*(uint *)(gen_frame + 0x1c)) = param_4 & 0xffff;
  (*(uint *)(gen_frame + 0x20)) = 0;
  pvVar4 = (undefined *)F_00a36f30(this,param_1);
  pvVar5 = (undefined *)F_00a36f30(((undefined *)(uint)(this)),param_3);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar5;
  if ((pvVar4 == (undefined *)0x0) || (pvVar5 == (undefined *)0x0)) {
LAB_00a48ac7: ;
    uVar8 = 3;
    goto LAB_00a48acc;
  }
  (*(int *)(gen_frame + 0xc)) = (int)(short)(*(uint *)(gen_frame + 0x14));
  this_00 = (int *)F_00a37da0(pvVar4,(int)(short)(*(uint *)(gen_frame + 0x14)));
  iVar6 = (int)(short)(*(uint *)(gen_frame + 0x1c));
  piVar7 = (int *)F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0x10)),iVar6);
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
  if ((this_00 == (int *)0x0) || ((*(char *)((int)this_00 + 6) == '\0' && (this_00[2] == 0)))) goto LAB_00a48aaf;
  uVar8 = F_0046e5e0(this_00);
  iVar12 = (*(int *)(gen_frame + 0x28));
  if ((uVar8 - 2 < 0x12) && ((((*(int *)(gen_frame + 0x28)) != 0x2ee2 && ((*(int *)(gen_frame + 0x28)) != 0x7d5)) && ((*(int *)(gen_frame + 0x28)) != 0x7d2)))) {
    bVar1 = F_00a366f0((*(int *)(gen_frame + 0x28)));
    if (bVar1 == 0) {
      if (iVar12 - 20000U < 0x7d2) {
        uVar13 = 0x55f1;
      }
      else {
        uVar13 = 0x7d1;
      }
    }
    else {
      uVar13 = 0x2ee1;
    }
    pvVar4 = (undefined *)F_00a36f30(this,uVar13);
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar4;
    if (pvVar4 == (undefined *)0x0) goto LAB_00a48ac7;
    uVar8 = F_0046e5e0(this_00);
    piVar7 = (int *)F_00a37da0((*(undefined * PTR32 *)(gen_frame + 0x10)),uVar8 - 2);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
  }
  if (piVar7 == (int *)0x0) {
LAB_00a48aaf: ;
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 4;
  }
  if ((char)param_5 != '\0') {
    if (*(char *)((int)this + 0x3088) != '\0') {
      piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar13 = 0x745;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
      F_0046a630(pvVar4,uVar13);
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 6;
    }
    iVar12 = *this_00;
    if ((((19999 < iVar12) && (iVar12 < 0x55f2)) || ((19999 < *piVar7 && (*piVar7 < 0x55f2)))) && ((*(char *)((int)this + 0x3086) == '\0' || (*(char *)((int)this + 0x3087) == '\0')))) {
      F_00a51200(0x29,iVar12,*piVar7,0,0);
      *(undefined4 *)((int)this + 0x308c) = 1;
      F_00a3bd60((undefined *)((int)this + 0x3000),this_00);
      *(int *)((int)this + 0x3000) = *this_00;
      *(short *)((int)this + 0x3004) = (short)this_00[1];
      F_00a3bd60((undefined *)((int)this + 0x3040),piVar7);
      *(int *)((int)this + 0x3040) = *piVar7;
      *(short *)((int)this + 0x3044) = (short)piVar7[1];
      *(undefined4 *)((int)this + 0x3080) = 0;
      if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)((int)this + 0x3084) = uVar2;
      if ((*piVar7 < 20000) || (0x55f1 < *piVar7)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)((int)this + 0x3085) = uVar2;
      if ((*this_00 < 20000) || (0x55f1 < *this_00)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)((int)this + 0x3086) = uVar2;
      if ((*piVar7 < 20000) || (0x55f1 < *piVar7)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *(undefined1 *)((int)this + 0x3087) = uVar2;
      *(undefined1 *)((int)this + 0x3088) = 1;
      if ((((19999 < *this_00) && (*this_00 < 0x55f2)) && (19999 < *piVar7)) && (*piVar7 < 0x55f2)) {
        F_00a47f70(this,(*(int *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x1c)),0);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 6;
    }
  }
  if ((((*(int *)(gen_frame + 0x24)) == 0x7d2) && ((*(int *)(gen_frame + 0x28)) == 0x7d2)) && ((uVar8 = F_00a37c50(this_00), uVar8 != 0 && (uVar8 = F_00a37c50(piVar7), uVar8 != 0)))) {
    uVar8 = F_00a3d1c0(this,0x7d2,(*(uint *)(gen_frame + 0x14)),0x7d2,(*(uint *)(gen_frame + 0x1c)),1);
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return uVar8;
  }
  if ((this_00 == piVar7) && (uVar8 = F_00a37c50(this_00), uVar8 == 0)) goto LAB_00a483c9;
  iVar12 = (*(int *)(gen_frame + 0x24));
  bVar1 = F_00a36720((*(int *)(gen_frame + 0x24)));
  (*(byte *)(gen_frame + 0x2c)) = bVar1;
  if ((bVar1 != 0) || (bVar3 = F_00a36720((*(int *)(gen_frame + 0x28))), bVar3 != 0)) {
    if (3 < *(int *)((int)this + 0x334)) goto LAB_00a48671;
    bVar3 = F_00a366d0(iVar12);
    if ((bVar3 != 0) && (uVar8 = F_00a3a750((*(int *)(gen_frame + 0x24)) + -1000,(*(int *)(gen_frame + 0xc))), bVar1 = (*(byte *)(gen_frame + 0x2c)), uVar8 != 0)) {
      F_00a7d290(uVar8,0,0,0,0,REFG(float, 0x10916ec));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0xf;
    }
    iVar12 = (*(int *)(gen_frame + 0x28));
    if (bVar1 == 0) {
      bVar1 = F_00a36720((*(int *)(gen_frame + 0x28)));
      if (bVar1 == 0) goto LAB_00a48a83;
      if (((*(int *)((int)this + 0x334) < 3) && (iVar12 != 0x7d2)) && (iVar12 != 0x7d7)) {
        uVar8 = F_00b9f960(&REFG(undefined, 0x14b0f2c));
        bVar1 = (byte)(*(uint *)(gen_frame + 0x1c));
        (*(int *)(gen_frame + 0xc)) = *(int *)(uVar8 + 8 + iVar6 * 0x74);
        F_0071d3c0(((undefined1 *)(gen_frame + 0x30)));
        bVar3 = F_00a3bef0(this_00);
        (*(byte *)(gen_frame + 0x2c)) = bVar3;
        F_00a3bd60(((undefined1 *)(gen_frame + 0x30)),this_00);
        (*(byte *)(gen_frame + 0x70)) = (*(byte *)(gen_frame + 0x2c));
        (*(undefined1 *)(gen_frame + 0x71)) = 0;
        (*(undefined4 *)(gen_frame + 0x74)) = 0;
        bVar3 = F_00a3cac0(this_00,(*(uint *)(gen_frame + 0x1c)));
        if (bVar3 == 0) {
          bVar1 = F_00b9fb30(&REFG(undefined, 0x14b0f2c),((undefined1 *)(gen_frame + 0x30)),&(*(int *)(gen_frame + 0xc)));
        }
        if (bVar1 == 5) goto LAB_00a483c9;
        (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
        this_01 = (undefined4 *)F_00a363c0((*(undefined * PTR32 *)(gen_frame + 0x10)),(int)(short)(ushort)bVar1);
        uVar8 = F_0071d3a0(this_01);
        if (((char)uVar8 == '\0') && (uVar8 = F_00a3ced0(this,*this_01,(uint)*(ushort *)(this_01 + 1),1), uVar8 != 0)) goto LAB_00a48acc;
        uVar8 = F_00a3cd20(this,this_00,(*(int *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x1c)),1);
        (*(uint *)(gen_frame + 0x20)) = uVar8;
        F_00a35f80(this_01,(*(int *)(gen_frame + 0xc)));
        if (uVar8 != 0) {
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return uVar8;
        }
        goto LAB_00a48a83;
      }
      uVar8 = F_0071d3a0(piVar7);
      if ((char)uVar8 == '\0') {
        uVar8 = F_00a3f670(this,this_00,(*(int *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x1c)),1);
        (*(uint *)(gen_frame + 0x20)) = uVar8;
        if (uVar8 != 0) {
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return uVar8;
        }
      }
      else {
        uVar8 = F_00a3cd20(this,this_00,(*(int *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x1c)),1);
        (*(uint *)(gen_frame + 0x20)) = uVar8;
        if (uVar8 != 0) {
LAB_00a48acc: ;
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return uVar8;
        }
      }
      uVar8 = F_00a3a8a0(this_00);
      iVar12 = (*(int *)(gen_frame + 0x28));
      if (uVar8 < 2) goto LAB_00a48a83;
      piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if (iVar12 == 0x7d2) {
        uVar13 = 0x34;
        uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7);
        pvVar5 = (undefined *)F_00763050(uVar8,uVar13);
        uVar13 = 6;
        iVar12 = iVar6;
        pvVar4 = pvVar5;
        pvVar10 = (undefined *)F_00a36f30(this,0x7d2);
        pvVar10 = (undefined *)F_00a37da0(pvVar10,iVar12);
        uVar8 = F_00a3a8a0(pvVar10);
        pvVar10 = (undefined *)F_00a36f30(this,0x7d2);
        pvVar10 = (undefined *)F_00a37da0(pvVar10,iVar6);
        uVar9 = F_00a3a8a0(pvVar10);
        F_0087b4f0(pvVar5,1,uVar9,uVar8,pvVar4,uVar13);
        goto LAB_00a48a83;
      }
      uVar13 = 0x1b;
      uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7);
      pvVar4 = (undefined *)F_00763050(uVar8,uVar13);
      pvVar5 = (undefined *)F_00a36f30(this,iVar12);
      pvVar5 = (undefined *)F_00a363c0(pvVar5,iVar6);
LAB_00a48911: ;
      iVar6 = (int)this + 0x216c;
      uVar13 = 0;
      *(undefined * PTR32 *)((int)this + 0x2170) = pvVar5;
      pvVar5 = (undefined *)F_00a3a860(pvVar5);
      uVar8 = F_00a3a8a0(pvVar5);
      pvVar5 = (undefined *)F_00a3a860(*(undefined * PTR32 *)((int)this + 0x2170));
      uVar9 = F_00a3a8a0(pvVar5);
      F_008730d0(pvVar4,1,uVar9,uVar8,iVar6,uVar13);
    }
    else {
      bVar3 = F_00a36720((*(int *)(gen_frame + 0x28)));
      if (bVar3 == 0) {
        if ((*this_00 == iVar12) && ((short)this_00[1] == (short)(*(uint *)(gen_frame + 0x1c)))) {
          uVar8 = F_00a3ced0(this,(*(int *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x14)),1);
        }
        else {
          uVar8 = F_0071d3a0(piVar7);
          if (((char)uVar8 == '\0') && (2 < *(int *)((int)this + 0x334))) {
            uVar8 = F_00a3f670(this,piVar7,(*(int *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x14)),1);
            (*(uint *)(gen_frame + 0x20)) = uVar8;
            if (uVar8 != 0) goto LAB_00a48acc;
            uVar8 = F_00a3a8a0(piVar7);
            if (uVar8 < 2) goto LAB_00a48a83;
            piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
            uVar13 = 0x1b;
            uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7);
            pvVar4 = (undefined *)F_00763050(uVar8,uVar13);
            iVar6 = (*(int *)(gen_frame + 0xc));
            pvVar5 = (undefined *)F_00a36f30(this,(*(int *)(gen_frame + 0x24)));
            pvVar5 = (undefined *)F_00a363c0(pvVar5,iVar6);
            goto LAB_00a48911;
          }
          uVar8 = F_00a3ced0(this,(*(int *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x14)),1);
        }
      }
      else {
        if ((bVar1 == 0) || (bVar1 = F_00a36720((*(int *)(gen_frame + 0x28))), bVar1 == 0)) goto LAB_00a48a83;
        uVar8 = F_0071d3a0(piVar7);
        if ((char)uVar8 == '\0') {
          uVar8 = F_00a3d1c0(this,(*(int *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x1c)),1);
        }
        else {
          if ((*(int *)((int)this + 0x334) < 3) && ((*(int *)(gen_frame + 0x28)) != 0x7d2)) goto LAB_00a48a83;
          uVar8 = F_00a3cff0(this,(*(int *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x1c)),1);
        }
      }
      (*(uint *)(gen_frame + 0x20)) = uVar8;
    }
    goto LAB_00a48a83;
  }
  if ((iVar12 == 0x7d4) || ((*(int *)(gen_frame + 0x28)) == 0x7d4)) goto LAB_00a483c9;
  uVar8 = F_00a37c50(this_00);
  iVar12 = (*(int *)(gen_frame + 0x24));
  if (uVar8 != 0) goto LAB_00a48671;
  bVar1 = F_00a366f0((*(int *)(gen_frame + 0x24)));
  (*(byte *)(gen_frame + 0x2c)) = bVar1;
  if ((bVar1 == 0) && (bVar1 = F_00a366f0((*(int *)(gen_frame + 0x28))), bVar1 == 0)) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x6e);
    if (bVar1 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x6e);
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 10;
    }
  }
  else {
    if ((iVar12 == 0x2ee2) || ((*(int *)(gen_frame + 0x28)) == 0x2ee2)) {
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x75);
      if (bVar1 == 0) {
        F_00a4a810(&REFG(undefined, 0x14a7360),0x75);
LAB_00a483c9: ;
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 10;
      }
      if (*(char *)((int)this + 0x23e0) != '\0') goto LAB_00a483c9;
    }
    else {
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x74);
      if (bVar1 == 0) {
        F_00a4a810(&REFG(undefined, 0x14a7360),0x74);
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 10;
      }
    }
    bVar1 = (*(byte *)(gen_frame + 0x2c));
    if ((*(byte *)(gen_frame + 0x2c)) != 0) {
      bVar3 = F_00a366f0((*(int *)(gen_frame + 0x28)));
      if (bVar3 == 0) {
        uVar8 = F_0071d3a0(piVar7);
        if ((char)uVar8 == '\0') {
          uVar8 = F_00906df0(piVar7);
          uVar9 = F_00906df0(this_00);
          piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
          if (uVar9 != uVar8) goto LAB_00a4842b;
        }
        else {
LAB_00a4842b: ;
          uVar11 = (uint)(*(byte *)(this_00 + 5) & 1);
          uVar8 = F_00a3a8a0(this_00);
          uVar9 = F_00906df0(this_00);
          uVar8 = F_00a40d10(this,uVar9,uVar8,uVar11);
          if (uVar8 == 0x1b) goto LAB_00a484a3;
        }
        uVar8 = F_0071d3a0(piVar7);
        if ((char)uVar8 == '\0') {
          uVar8 = F_00906df0(piVar7);
          uVar9 = F_00906df0(this_00);
          piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
          if (uVar9 != uVar8) {
            uVar11 = (uint)(*(byte *)((*(int * PTR32 *)(gen_frame + 0x18)) + 5) & 1);
            uVar8 = F_00a3a8a0((*(int * PTR32 *)(gen_frame + 0x18)));
            uVar9 = F_00906df0(piVar7);
            uVar8 = F_00a40b70(this,uVar9,uVar8,uVar11);
            if (uVar8 == 0x1b) goto LAB_00a484a3;
          }
        }
        goto LAB_00a485c1;
      }
      if (bVar1 != 0) goto LAB_00a485c1;
    }
    bVar1 = F_00a366f0((*(int *)(gen_frame + 0x28)));
    if (bVar1 != 0) {
      uVar8 = F_0071d3a0(piVar7);
      if ((char)uVar8 == '\0') {
        uVar8 = F_00906df0(piVar7);
        uVar9 = F_00906df0(this_00);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
        if (uVar9 != uVar8) goto LAB_00a48519;
      }
      else {
LAB_00a48519: ;
        uVar11 = (uint)(*(byte *)(this_00 + 5) & 1);
        uVar8 = F_00a3a8a0(this_00);
        uVar9 = F_00906df0(this_00);
        uVar8 = F_00a40b70(this,uVar9,uVar8,uVar11);
        if (uVar8 == 0x1b) {
LAB_00a484a3: ;
          piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
          uVar13 = 0x4d9;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
          F_0046a630(pvVar4,uVar13);
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0x1b;
        }
      }
      uVar8 = F_0071d3a0(piVar7);
      if ((char)uVar8 == '\0') {
        uVar8 = F_00906df0(piVar7);
        uVar9 = F_00906df0(this_00);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
        if (uVar9 != uVar8) {
          uVar11 = (uint)(*(byte *)((*(int * PTR32 *)(gen_frame + 0x18)) + 5) & 1);
          uVar8 = F_00a3a8a0((*(int * PTR32 *)(gen_frame + 0x18)));
          uVar9 = F_00906df0(piVar7);
          uVar8 = F_00a40d10(this,uVar9,uVar8,uVar11);
          if (uVar8 == 0x1b) {
            piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
            uVar13 = 0x4d9;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
            F_0046a630(pvVar4,uVar13);
            F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
            return 0x1b;
          }
        }
      }
    }
  }
LAB_00a485c1: ;
  uVar8 = F_0071d3a0(piVar7);
  if ((char)uVar8 == '\0') {
    uVar8 = F_00a37c50(piVar7);
    if (uVar8 != 0) {
LAB_00a48671: ;
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0x13;
    }
    uVar8 = F_0046e5e0(piVar7);
    uVar9 = F_0046e5e0(this_00);
    if ((uVar8 == uVar9) && (((*(byte *)((*(int * PTR32 *)(gen_frame + 0x18)) + 5) ^ *(byte *)(this_00 + 5)) & 1) == 0)) {
      uVar8 = F_00a47820(this,this_00,(*(int * PTR32 *)(gen_frame + 0x18)),param_5);
    }
    else {
      uVar8 = F_00a47560(this,this_00,(*(int * PTR32 *)(gen_frame + 0x18)),param_5);
    }
  }
  else {
    uVar8 = F_00a47360(this,this_00,piVar7,param_5);
  }
  (*(uint *)(gen_frame + 0x20)) = uVar8;
  bVar1 = F_006d5e90((*(int *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x28)),iVar6);
  if (bVar1 == 0) {
    F_006d5e90((*(int *)(gen_frame + 0x28)),iVar6,(*(int *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0xc)));
  }
LAB_00a48a83: ;
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    F_00aa8290(REFG(void * PTR32, 0x1379694));
  }
  F_00a3a720();
  uVar8 = (*(uint *)(gen_frame + 0x20));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar8;
}

/* ref: FUN_00a48ae0 */
uint F_00a48ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xa48ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  this_00 = (int *)F_00a36f30(this,0x7d5);
  iVar2 = this_00[3];
  uVar3 = 0;
  if (0 < iVar2) {
    uVar1 = 0;
    do {
      if ((*this_00 == 0) || (iVar2 <= (int)uVar1)) {
        iVar2 = 0;
      }
      else {
        iVar2 = uVar1 * 0x40 + *this_00;
      }
      if (*(char *)(iVar2 + 6) == '\0') {
        if (*(int *)(iVar2 + 8) != 0) {
          uVar1 = 9999;
          goto LAB_00a48b33;
        }
      }
      else {
        uVar1 = (uint)*(ushort *)(iVar2 + 10);
LAB_00a48b33: ;
        F_00a47f70(this,0x7d5,uVar3,uVar1,(uint)*(ushort *)(iVar2 + 8),1);
      }
      iVar2 = this_00[3];
      uVar3 = uVar3 + 1;
      uVar1 = uVar3 & 0xffff;
    } while ((int)uVar1 < iVar2);
  }
  F_00a36310(this_00);
  return 0;
}

/* ref: FUN_00a48b60 */
uint F_00a48b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa48b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  short sVar1;
  byte bVar2;
  int iVar3;
  int * piVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  char * pcVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int * PTR32 * ppiVar13;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(int * PTR32 *)(gen_frame + 0x24)) = param_1;
  iVar3 = 0;
  pcVar8 = (char *)((int)this + 0x364);
  do {
    if ((*(int *)(pcVar8 + 4) == *param_1) && (*pcVar8 == '\0')) {
      iVar3 = (int)this + iVar3 * 0x3c + 0x364;
      goto LAB_00a48b9c;
    }
    iVar3 = iVar3 + 1;
    pcVar8 = pcVar8 + 0x3c;
  } while (iVar3 < 0x80);
  iVar3 = 0;
LAB_00a48b9c: ;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  piVar4 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar4;
  if (piVar4 != (int *)0x0) {
    *piVar4 = 0;
    piVar4[1] = 0;
  }
  *piVar4 = (int)&(*(int * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (iVar3 == 0) {
    F_00a3faa0(this);
    goto LAB_00a492fd;
  }
  if ((*(int *)(iVar3 + 8) == 0x19) && (*(int *)(iVar3 + 0x34) == 7)) {
    *(undefined1 *)((int)this + 0x35e) = 0;
  }
  piVar4 = param_1;
  if (*(int *)(iVar3 + 8) == 0x1e) {
    F_00a3d7c0(this,*(undefined4 *)(iVar3 + 0x10),(uint)*(ushort *)(iVar3 + 0x14));
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar12 = 0x22;
    uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
    pvVar5 = (undefined *)F_00763050(uVar7,uVar12);
    F_008e9cb0(pvVar5);
    uVar12 = 0x23;
    uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
    pvVar5 = (undefined *)F_00763050(uVar7,uVar12);
    F_008edf60(pvVar5);
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x24));
  }
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)piVar4 + 5))) {
  case 0: ;
    iVar9 = *(int *)(iVar3 + 8);
    if (iVar9 == 7) {
      uVar7 = F_00ab24a0(*(undefined4 *)(iVar3 + 0x1c));
      if (uVar7 != 0) {
        piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar12 = *(undefined4 *)(iVar3 + 0x1c);
        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
        (*(undefined4 *)(gen_frame + 0x4c)) = uVar12;
        (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x4c));
        (*(undefined1 *)(gen_frame + 0x54)) = 0;
        F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x4c)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x4c)));
        uVar12 = *(undefined4 *)(iVar3 + 0x18);
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = uVar12;
        (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = &(*(undefined4 *)(gen_frame + 0x40));
        (*(undefined1 *)(gen_frame + 0x48)) = 0;
        F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x40)));
        F_004917c0(&(*(undefined4 *)(gen_frame + 0x40)));
        ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x8));
        uVar12 = 0x2d0;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046aa70(pvVar5,uVar12,ppiVar13);
      }
    }
    else if ((iVar9 == 0x16) || (iVar9 == 0x17)) {
      iVar9 = (int)*(short *)(iVar3 + 0x14);
      pvVar5 = (undefined *)F_00a36f30(this,*(undefined4 *)(iVar3 + 0x10));
      pvVar5 = (undefined *)F_00a37da0(pvVar5,iVar9);
      if ((pvVar5 != (undefined *)0x0) &&
         ((uVar7 = F_00a3a8a0(pvVar5), uVar7 == *(uint *)(iVar3 + 0x18) &&
          (F_00a35f30(pvVar5), *(int *)(iVar3 + 0x10) == 0x2ee2)))) {
        sVar1 = *(short *)(iVar3 + 0x14);
        *(undefined4 *)((int)this + sVar1 * 8 + 0x2340) = 0;
        *(undefined4 *)((int)this + sVar1 * 8 + 0x2344) = 0;
        piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4);
        *(byte *)(uVar7 + 0x230bf) = *(byte *)(uVar7 + 0x230bf) | 4;
      }
    }
    else if ((iVar9 == 0xe) || (iVar9 == 0xf)) {
      F_00a3d7c0(this,*(undefined4 *)(iVar3 + 0x10),(uint)*(ushort *)(iVar3 + 0x14));
      F_00a4a760(&REFG(undefined, 0x14a7360),0x17,0);
    }
    else if ((((iVar9 == 0x13) || (iVar9 == 0x11)) || (iVar9 == 0x12)) || (iVar9 == 0x10)) {
      F_00a4a760(&REFG(undefined, 0x14a7360),0x17,0);
    }
    break;
  case 2: ;
    if ((*(int *)(iVar3 + 8) == 0x19) && (*(int *)(iVar3 + 0x34) != 7)) {
      pvVar5 = (undefined *)F_00a36f30(this,0x7d5);
      F_00a36310(pvVar5);
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar12 = 0x1b;
      uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
      piVar6 = (int *)F_00763050(uVar7,uVar12);
      ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      *(undefined4 *)((int)this + 0x334) = 0;
      *(undefined4 *)((int)this + 0x338) = 0;
      uVar7 = F_00a64490(&REFG(undefined, 0x14a9a18),(int)this + 0x33c,1);
      if (uVar7 != 0) {
        uVar11 = 0;
        uVar12 = 0x1e;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046ac40(pvVar5,uVar12,uVar11,uVar7);
      }
      piVar4 = (int *)F_00a36f30(this,0x7d5);
      if ((*piVar4 == 0) || (piVar4[3] < 6)) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar4 + 0x140;
      }
      *(undefined1 *)(iVar9 + 6) = 0;
      *(undefined4 *)(iVar9 + 0xc) = 0;
      if (*(int *)(iVar9 + 8) != 1) {
        *(undefined4 *)(iVar9 + 8) = 0;
      }
      F_00a4a760(&REFG(undefined, 0x14a7360),0x15,0);
    }
  default: ;
    F_00a3faa0(this);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x17,0);
    if (*(int *)(iVar3 + 8) == 0xe) {
      F_00a3d7c0(this,*(undefined4 *)(iVar3 + 0x10),(uint)*(ushort *)(iVar3 + 0x14));
    }
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar12 = 0x21;
    uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
    pvVar5 = (undefined *)F_00763050(uVar7,uVar12);
    F_008d5350(pvVar5);
    break;
  case 8: ;
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    iVar9 = *(int *)(iVar3 + 8);
    if (((iVar9 == 0xf) || (iVar9 == 0x11)) || (iVar9 == 0x13)) {
      iVar9 = (*(int * PTR32 *)(gen_frame + 0x24))[2];
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x28)) = iVar9;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = &(*(int *)(gen_frame + 0x28));
      (*(undefined1 *)(gen_frame + 0x30)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x28)));
      F_004917c0(&(*(int *)(gen_frame + 0x28)));
      uVar12 = 0x56b;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046a630(pvVar5,uVar12);
      ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x8));
      uVar12 = 0x574;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046aa70(pvVar5,uVar12,ppiVar13);
      F_00a4a760(&REFG(undefined, 0x14a7360),0x17,0);
      if (*(int *)(iVar3 + 8) == 0xf) goto LAB_00a48f80;
LAB_00a48f90: ;
      F_00a3a020();
    }
    break;
  case 0x15: ;
    F_00a47f70(this,*(undefined4 *)(iVar3 + 0x10),(uint)*(ushort *)(iVar3 + 0x14),
                 *(undefined4 *)(iVar3 + 0x24),(uint)*(ushort *)(iVar3 + 0x28),0);
    break;
  case 0x16: ;
    if (*(int *)((int)this + 0x338) < 3) {
      pvVar5 = (undefined *)F_00a36f30(this,0x7d5);
      F_00a36310(pvVar5);
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar12 = 0x1b;
      uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
      piVar6 = (int *)F_00763050(uVar7,uVar12);
      ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      *(undefined4 *)((int)this + 0x334) = 0;
      *(undefined4 *)((int)this + 0x338) = 0;
      uVar7 = F_00a64490(&REFG(undefined, 0x14a9a18),(int)this + 0x33c,1);
      if (uVar7 != 0) {
        uVar11 = 0;
        uVar12 = 0x1e;
        pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
        F_0046ac40(pvVar5,uVar12,uVar11,uVar7);
      }
      piVar4 = (int *)F_00a36f30(this,0x7d5);
      if ((*piVar4 == 0) || (piVar4[3] < 6)) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar4 + 0x140;
      }
      *(undefined1 *)(iVar9 + 6) = 0;
      *(undefined4 *)(iVar9 + 0xc) = 0;
      if (*(int *)(iVar9 + 8) != 1) {
        *(undefined4 *)(iVar9 + 8) = 0;
      }
      F_00a4a760(&REFG(undefined, 0x14a7360),0x15,0);
    }
    break;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
    piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    iVar9 = *(byte *)((int)piVar4 + 5) + 0x15b8;
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar6;
    uVar7 = F_00ab24a0(iVar9);
    if (uVar7 != 0) {
      (*(int *)(gen_frame + 0x34)) = 0;
      (*(int *)(gen_frame + 0x34)) = iVar9;
      (*(int * PTR32 *)(gen_frame + 0x38)) = &(*(int *)(gen_frame + 0x34));
      (*(undefined1 *)(gen_frame + 0x3c)) = 0;
      F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x34)));
      F_004917c0(&(*(int *)(gen_frame + 0x34)));
    }
    if (*(int *)(iVar3 + 8) == 0x12) {
      F_00a43920(this);
    }
    else if (*(int *)(iVar3 + 8) == 0x10) {
      F_00a43cd0(this,*(undefined4 *)(iVar3 + 0x10));
    }
    else if (uVar7 == 0) {
      uVar12 = 0x570;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x20)))));
      F_0046a630(pvVar5,uVar12);
    }
    else {
      ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x8));
      uVar12 = 0x56f;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x20)))));
      F_0046aa70(pvVar5,uVar12,ppiVar13);
    }
    if (*(int *)(iVar3 + 8) == 0xe) {
      F_00a3d7c0(this,*(undefined4 *)(iVar3 + 0x10),(uint)*(ushort *)(iVar3 + 0x14));
    }
    F_00a3a020();
    F_00a4a760(&REFG(undefined, 0x14a7360),0x17,0);
    break;
  case 0x28: ;
  case 0x29: ;
    iVar9 = *(int *)(iVar3 + 8);
    if (((iVar9 == 0xe) || (iVar9 == 0x12)) || (iVar9 == 0x10)) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar12 = 0x578;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4)));
      F_0046a630(pvVar5,uVar12);
      F_00a4a760(&REFG(undefined, 0x14a7360),0x17,0);
LAB_00a48f80: ;
      F_00a3d7c0(this,*(undefined4 *)(iVar3 + 0x10),(uint)*(ushort *)(iVar3 + 0x14));
      goto LAB_00a48f90;
    }
  }
  if ((*(char *)(iVar3 + 0x3a) != '\0') || (*(char *)(iVar3 + 0x3b) != '\0')) {
    if (((*(int *)(iVar3 + 0x10) == 1000) ||
        ((*(int *)(iVar3 + 0x10) == 11000 || (*(int *)(iVar3 + 0x24) == 1000)))) ||
       (*(int *)(iVar3 + 0x24) == 11000)) {
      F_00a40890(this);
    }
    if ((*(char *)(iVar3 + 0x3a) != '\0') && (*(int *)(iVar3 + 0x10) != 9999)) {
      F_00a3fa30(this,*(int *)(iVar3 + 0x10));
    }
    if ((*(char *)(iVar3 + 0x3b) != '\0') && (*(int *)(iVar3 + 0x24) != 9999)) {
      F_00a3fa30(this,*(int *)(iVar3 + 0x24));
    }
  }
  if (*(char *)(iVar3 + 0x38) != '\0') {
    if ((*(int *)(iVar3 + 0x10) == 1000) || (*(int *)(iVar3 + 0x10) == 11000)) {
      uVar7 = F_00a36960((uint)*(byte *)(iVar3 + 0x14));
      bVar2 = F_00a36750(uVar7);
      if (bVar2 != 0) {
        F_00a3fa30(this,uVar7);
      }
    }
    if (*(int *)(iVar3 + 0x10) != 9999) {
      F_00a51200(0x37,*(int *)(iVar3 + 0x10),(int)*(short *)(iVar3 + 0x14),0,0);
    }
  }
  if ((*(char *)(iVar3 + 0x39) != '\0') &&
     ((iVar9 = *(int *)(iVar3 + 0x24), *(int *)(iVar3 + 0x10) != iVar9 ||
      (*(short *)(iVar3 + 0x14) != *(short *)(iVar3 + 0x28))))) {
    if ((iVar9 == 1000) || (iVar9 == 11000)) {
      uVar7 = F_00a36960((uint)*(byte *)(iVar3 + 0x28));
      bVar2 = F_00a36750(uVar7);
      if (bVar2 != 0) {
        F_00a3fa30(this,uVar7);
      }
    }
    if (*(int *)(iVar3 + 0x24) != 9999) {
      F_00a51200(0x37,*(int *)(iVar3 + 0x24),(int)*(short *)(iVar3 + 0x28),0,0);
    }
  }
  F_00a37520(this,*(*(int * PTR32 *)(gen_frame + 0x24)));
LAB_00a492fd: ;
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4);
  *(byte *)(uVar7 + 0x230bf) = *(byte *)(uVar7 + 0x230bf) | 1;
  F_006d0fd0();
  F_00701020();
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x8)));
  uVar10 = F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar10;
}

/* ref: FUN_00a493a0 */
uint F_00a493a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa493a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined * pvVar7;
  undefined * this_00;
  int * piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int * local_c;
  
  if (((((param_1 == 0x7d5) || (param_1 == 0x7d2)) || (param_1 == 0x7d7)) || ((param_3 == 0x7d5 || (param_3 == 0x7d2)))) || (param_3 == 0x7d7)) {
    uVar9 = F_00a47f70(this,param_1,param_2,param_3,param_4,1);
    return uVar9;
  }
  bVar2 = false;
  bVar3 = false;
  if (((6 < param_1 - 10000U) && (2 < param_1 - 12000U)) && ((6 < param_3 - 10000U && (2 < param_3 - 12000U)))) {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360),0x6e);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x6e);
      return 10;
    }
    goto LAB_00a494ff;
  }
  if ((param_1 == 0x2ee2) || (param_3 == 0x2ee2)) {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360),0x75);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x75);
      return 10;
    }
    if (*(char *)((int)this + 0x23e0) != '\0') {
      return 10;
    }
  }
  else {
    bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360),0x74);
    if (bVar4 == 0) {
      F_00a4a810(&REFG(undefined, 0x14a7360),0x74);
      return 10;
    }
  }
  bVar4 = F_00a366f0(param_1);
  if (bVar4 != 0) {
    bVar5 = F_00a366f0(param_3);
    if (bVar5 == 0) {
      bVar2 = true;
      goto LAB_00a494ff;
    }
    if (bVar4 != 0) goto LAB_00a494ff;
  }
  bVar4 = F_00a366f0(param_3);
  if (bVar4 != 0) {
    bVar3 = true;
  }
LAB_00a494ff: ;
  pvVar7 = (undefined *)F_00a36f30(this,param_1);
  this_00 = (undefined *)F_00a36f30(((undefined *)(uint)(this)),param_3);
  if ((pvVar7 == (undefined *)0x0) || (this_00 == (undefined *)0x0)) {
    return 3;
  }
  piVar8 = (int *)F_00a37da0(pvVar7,(int)(short)param_2);
  local_c = (int *)F_00a37da0(this_00,(int)(short)param_4);
  uVar9 = F_0046e5e0(piVar8);
  if ((uVar9 - 2 < 0x12) && (param_3 != 0x2ee2)) {
    bVar4 = F_00a366f0(param_3);
    if (bVar4 == 0) {
      if (param_3 - 20000U < 0x7d2) {
        uVar12 = 0x55f1;
      }
      else {
        uVar12 = 0x7d1;
      }
    }
    else {
      uVar12 = 0x2ee1;
    }
    pvVar7 = (undefined *)F_00a36f30(this,uVar12);
    if (pvVar7 == (undefined *)0x0) {
      return 3;
    }
    uVar9 = F_0046e5e0(piVar8);
    local_c = (int *)F_00a37da0(pvVar7,uVar9 - 2);
  }
  if (((piVar8 == (int *)0x0) || (local_c == (int *)0x0)) || (uVar9 = F_0071d3a0(piVar8), (char)uVar9 != '\0')) {
    return 4;
  }
  if (*(char *)((int)this + 0x3088) != '\0') {
    piVar8 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar12 = 0x745;
    pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
    F_0046a630(pvVar7,uVar12);
    return 6;
  }
  iVar1 = *piVar8;
  if ((((19999 < iVar1) && (iVar1 < 0x55f2)) || ((19999 < *local_c && (*local_c < 0x55f2)))) && ((*(char *)((int)this + 0x3086) == '\0' || (*(char *)((int)this + 0x3087) == '\0')))) {
    F_00a51200(0x29,iVar1,*local_c,0,0);
    *(undefined4 *)((int)this + 0x308c) = 2;
    F_00a3bd60((undefined *)((int)this + 0x3000),piVar8);
    *(int *)((int)this + 0x3000) = *piVar8;
    *(short *)((int)this + 0x3004) = (short)piVar8[1];
    F_00a3bd60((undefined *)((int)this + 0x3040),local_c);
    *(int *)((int)this + 0x3040) = *local_c;
    *(short *)((int)this + 0x3044) = (short)local_c[1];
    *(undefined4 *)((int)this + 0x3080) = param_5;
    if ((*piVar8 < 20000) || (0x55f1 < *piVar8)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *(undefined1 *)((int)this + 0x3084) = uVar6;
    if ((*local_c < 20000) || (0x55f1 < *local_c)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *(undefined1 *)((int)this + 0x3085) = uVar6;
    if ((*piVar8 < 20000) || (0x55f1 < *piVar8)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *(undefined1 *)((int)this + 0x3086) = uVar6;
    if ((*local_c < 20000) || (0x55f1 < *local_c)) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    *(undefined1 *)((int)this + 0x3087) = uVar6;
    *(undefined1 *)((int)this + 0x3088) = 1;
    return 6;
  }
  if (bVar2) {
    uVar11 = (uint)(*(byte *)(piVar8 + 5) & 1);
    uVar9 = F_00a3a8a0(piVar8);
    uVar10 = F_00906df0(piVar8);
    uVar9 = F_00a40d10(this,uVar10,uVar9,uVar11);
    if (uVar9 == 0x1b) {
      piVar8 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar12 = 0x4d9;
      pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
      F_0046a630(pvVar7,uVar12);
      return 0x1b;
    }
  }
  else if (bVar3) {
    uVar11 = (uint)(*(byte *)(piVar8 + 5) & 1);
    uVar9 = F_00a3a8a0(piVar8);
    uVar10 = F_00906df0(piVar8);
    uVar9 = F_00a40b70(this,uVar10,uVar9,uVar11);
    if (uVar9 == 0x1b) {
      piVar8 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar12 = 0x4d9;
      pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8)));
      F_0046a630(pvVar7,uVar12);
      return 0x1b;
    }
  }
  if ((param_1 != 0x7d4) && (param_3 != 0x7d4)) {
    uVar9 = F_00a37c50(piVar8);
    if (uVar9 != 0) {
      return 0x13;
    }
    uVar9 = F_0071d3a0(local_c);
    if ((char)uVar9 == '\0') {
      uVar9 = F_00a37c50(local_c);
      if (uVar9 != 0) {
        return 0x13;
      }
      uVar9 = F_0046e5e0(local_c);
      uVar10 = F_0046e5e0(piVar8);
      if ((uVar9 == uVar10) && (((*(byte *)(local_c + 5) ^ *(byte *)(piVar8 + 5)) & 1) == 0)) {
        uVar9 = F_00a46840(this,piVar8,local_c,param_5);
      }
      else {
        uVar9 = F_00a47560(this,piVar8,local_c,1);
      }
    }
    else {
      uVar9 = F_00a465f0(this,piVar8,local_c,param_5);
    }
    bVar4 = F_006d5e90(param_1,(int)(short)param_2,param_3,(int)(short)param_4);
    if (bVar4 == 0) {
      F_006d5e90(param_3,(int)(short)param_4,param_1,(int)(short)param_2);
    }
    if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
      F_00aa8290(REFG(void * PTR32, 0x1379694));
    }
    F_00a3a720();
    return uVar9;
  }
  return 10;
}

/* ref: FUN_00a49910 */
uint F_00a49910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa49910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_2 + 4))) {
  case 1: ;
    F_00a3b700(this);
    break;
  case 2: ;
    F_00a3fa30(this,*(undefined4 *)((int)this + 0x28));
    break;
  case 3: ;
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_2 + 8);
    break;
  case 6: ;
    F_004ea820(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8),0x12);
    break;
  case 7: ;
    uVar2 = F_00a48b60(this,param_2);
    return uVar2;
  }
  piVar1 = (int *)F_00424750(REFG(int, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
  *(byte *)(uVar2 + 0x230bf) = *(byte *)(uVar2 + 0x230bf) | 1;
  return uVar2;
}

/* ref: FUN_00a499a0 */
unsigned int F_00a499a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa499a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  undefined4 uVar8;
  undefined * local_10;
  undefined * local_c;
  
  puVar1 = (undefined4 *)((int)this + 0x3000);
  pvVar4 = (undefined *)F_00a36f30(this,*(undefined4 *)((int)this + 0x3000));
  if (pvVar4 == (undefined *)0x0) {
    local_c = (undefined *)0x0;
  }
  else {
    local_c = (undefined *)F_00a37da0(pvVar4,(int)*(short *)((int)this + 0x3004));
  }
  puVar2 = (undefined4 *)((int)this + 0x3040);
  pvVar4 = (undefined *)F_00a36f30(this,*(undefined4 *)((int)this + 0x3040));
  if (pvVar4 == (undefined *)0x0) {
    local_10 = (undefined *)0x0;
  }
  else {
    local_10 = (undefined *)F_00a37da0(pvVar4,(int)*(short *)((int)this + 0x3044));
  }
  iVar3 = *(int *)((int)this + 0x308c);
  uVar5 = F_00a3eb60(local_c,puVar1);
  if (iVar3 == 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = F_00a3eb60(local_10,puVar2);
  }
  *(undefined1 *)((int)this + 0x3088) = 0;
  if ((uVar5 == 0) && (uVar6 == 0)) {
    uVar5 = F_00a37c50(local_c);
    if ((uVar5 == 0) && ((local_10 == (undefined *)0x0 || (uVar5 = F_00a37c50(local_10), uVar5 == 0))))
    {
      iVar3 = *(int *)((int)this + 0x308c);
      if (iVar3 == 3) {
        F_00a41970(this,*puVar1,(uint)*(ushort *)((int)this + 0x3004),
                     *(undefined4 *)((int)this + 0x3080));
      }
      else if (iVar3 == 2) {
        F_00a493a0(this,*puVar1,(uint)*(ushort *)((int)this + 0x3004),*puVar2,
                     (uint)*(ushort *)((int)this + 0x3044),*(undefined4 *)((int)this + 0x3080));
      }
      else if (iVar3 == 1) {
        F_00a47f70(this,*puVar1,(uint)*(ushort *)((int)this + 0x3004),*puVar2,
                     (uint)*(ushort *)((int)this + 0x3044),1);
      }
      else if (iVar3 == 4) {
        F_00a3c360(this,*(undefined4 *)((int)this + 0x3080));
      }
      else if (iVar3 == 5) {
        F_00a3c570(this,*(undefined4 *)((int)this + 0x3080));
      }
      goto LAB_00a49b7e;
    }
    piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar8 = 0x745;
  }
  else {
    uVar5 = F_0046e5e0(local_c);
    if (uVar5 == 1) {
      piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar8 = 0x752;
    }
    else {
      piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar8 = 0x751;
    }
  }
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x28))(piVar7)));
  F_0046a630(pvVar4,uVar8);
  F_00a51200(0x2a,*puVar1,*puVar2,0,0);
LAB_00a49b7e: ;
  *(undefined4 *)((int)this + 0x308c) = 0;
  *(undefined4 *)((int)this + 0x3084) = 0;
  *(undefined4 *)((int)this + 0x3008) = 0;
  *(undefined4 *)((int)this + 0x300c) = 0;
  *(undefined4 *)((int)this + 0x3018) = 0;
  *(undefined4 *)((int)this + 0x301c) = 0;
  *(undefined1 *)((int)this + 0x3014) = 0;
  *(undefined4 *)((int)this + 0x3010) = 0x75300000;
  *(undefined1 *)((int)this + 0x302f) = 0;
  *(undefined4 *)((int)this + 0x3030) = 0;
  *(undefined1 *)((int)this + 0x3006) = 0;
  *(undefined4 *)((int)this + 0x303c) = 0;
  *(undefined4 *)((int)this + 0x3020) = 0;
  *(undefined4 *)((int)this + 0x3024) = 0;
  *(undefined2 *)((int)this + 0x3028) = 0;
  *(undefined4 *)((int)this + 0x302a) = 0;
  *(undefined1 *)((int)this + 0x302e) = 0;
  *(undefined4 *)((int)this + 0x3034) = 0;
  *(undefined1 *)((int)this + 0x3038) = 0;
  *(undefined4 *)((int)this + 0x3048) = 0;
  *(undefined4 *)((int)this + 0x304c) = 0;
  *(undefined4 *)((int)this + 0x3058) = 0;
  *(undefined4 *)((int)this + 0x305c) = 0;
  *(undefined1 *)((int)this + 0x3054) = 0;
  *(undefined4 *)((int)this + 0x3050) = 0x75300000;
  *(undefined1 *)((int)this + 0x306f) = 0;
  *(undefined4 *)((int)this + 0x3070) = 0;
  *(undefined1 *)((int)this + 0x3046) = 0;
  *(undefined4 *)((int)this + 0x307c) = 0;
  *(undefined4 *)((int)this + 0x3060) = 0;
  *(undefined4 *)((int)this + 0x3064) = 0;
  *(undefined2 *)((int)this + 0x3068) = 0;
  *(undefined4 *)((int)this + 0x306a) = 0;
  *(undefined1 *)((int)this + 0x306e) = 0;
  *(undefined4 *)((int)this + 0x3074) = 0;
  *(undefined1 *)((int)this + 0x3078) = 0;
  return 0;
}

/* ref: FUN_00a49c10 */
uint F_00a49c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa49c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(int *)(gen_frame + 0x28)) = 9999;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)0x0;
  iVar6 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  while (iVar8 = param_1, *(int *)(iVar6 + 8) != 0x1b0) {
    iVar6 = *(int *)(iVar6 + 0x54);
    if (iVar6 == 0) goto LAB_00a49d00;
  }
  iVar1 = *(int *)(iVar6 + 0x18);
  (*(int *)(gen_frame + 0x28)) = iVar1;
  if (iVar1 == 0x7d9) {
    uVar4 = *(uint *)(iVar6 + 0x10);
    if (uVar4 < *(uint *)((int)this + 0x330)) {
      return uVar4;
    }
    *(uint *)((int)this + 0x330) = -(uint)(uVar4 != 0xffffffff) & uVar4;
    puVar2 = (undefined4 *)((int)this + 0x1bc);
    iVar6 = 6;
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      puVar2[9] = 0;
      *(undefined1 *)((int)puVar2 + -6) = 0;
      puVar2[0xc] = 0;
      *(undefined2 *)((int)puVar2 + 6) = 30000;
      *(undefined2 *)(puVar2 + 1) = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      *(undefined2 *)(puVar2 + 7) = 0;
      *(undefined4 *)((int)puVar2 + 0x1e) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      puVar2[10] = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      puVar2 = puVar2 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    puVar2 = (undefined4 *)F_00a36f30(this,iVar1);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    puVar7 = puVar2;
    puVar9 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    F_00a36310(puVar2);
    this = (*(undefined * PTR32 *)(gen_frame + 0x20));
  }
LAB_00a49d00: ;
  do {
    iVar6 = *(int *)(iVar8 + 8);
    if (iVar6 == 0x1af) {
      if ((*(int *)(gen_frame + 0x28)) == 0x7d9) {
        F_00a36aa0(this,iVar8 + 0x10);
      }
      else {
        F_00a4e7a0(param_2,iVar8 + 0x10);
      }
    }
    else if (iVar6 == 0x1b3) {
      if ((*(int *)(gen_frame + 0x28)) == 0x7d9) {
        F_00a36c00(this,iVar8 + 0x10);
      }
      else {
        F_00a4e870(param_2,iVar8 + 0x10);
      }
    }
    else if (iVar6 == 0x1b7) {
      F_00a4e8d0(param_2,iVar8 + 0x10);
    }
    iVar8 = *(int *)(iVar8 + 0x54);
  } while (iVar8 != 0);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x24)) != (undefined4 *)0x0) {
    F_00a46a80(this,(*(undefined4 * PTR32 *)(gen_frame + 0x24)),((undefined4 *)(gen_frame + 0x0)));
  }
  if ((*(int *)(gen_frame + 0x28)) == 0x2ee2) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
    *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 4;
  }
  if ((*(int *)(gen_frame + 0x28)) == *(int *)((int)this + 0x28)) {
    F_00a3f440(this,(*(int *)(gen_frame + 0x28)));
  }
  uVar4 = F_00a36f30(this,(*(int *)(gen_frame + 0x28)));
  *(undefined1 *)(uVar4 + 0x10) = 1;
  if (((*(int *)(gen_frame + 0x28)) == 1000) || ((*(int *)(gen_frame + 0x28)) == 11000)) {
    *(undefined4 *)((int)this + 0x2ff8) = 0;
  }
  puVar5 = (undefined1 *)((int)this + 0x39e);
  iVar6 = 0x80;
  do {
    if (*(int *)(puVar5 + -0x2a) == (*(int *)(gen_frame + 0x28))) {
      *puVar5 = 1;
    }
    if (*(int *)(puVar5 + -0x16) == (*(int *)(gen_frame + 0x28))) {
      puVar5[1] = 1;
    }
    puVar5 = puVar5 + 0x3c;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((*(char *)((int)this + 0x3084) != '\0') && (*(int *)((int)this + 0x3000) == (*(int *)(gen_frame + 0x28)))) {
    *(undefined1 *)((int)this + 0x3086) = 1;
  }
  if ((*(char *)((int)this + 0x3085) != '\0') && (*(int *)((int)this + 0x3040) == (*(int *)(gen_frame + 0x28)))) {
    *(undefined1 *)((int)this + 0x3087) = 1;
  }
  if ((*(char *)((int)this + 0x3086) != '\0') && (*(char *)((int)this + 0x3087) != '\0')) {
    F_00a499a0(this);
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
  *(byte *)(uVar4 + 0x230bf) = *(byte *)(uVar4 + 0x230bf) | 1;
  F_006d0fd0();
  uVar4 = F_00701020();
  return uVar4;
}

/* ref: FUN_00a49e90 */
uint F_00a49e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa49e90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2eb8) = param_2;
  return param_2;
}

/* ref: FUN_00a49ea0 */
byte F_00a49ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa49ea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a49ef0 */
byte F_00a49ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa49ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a4a080 */
uint F_00a4a080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4a080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined2 *)((int)this + 0x18) = (undefined2)param_1;
  *(undefined4 *)this = 0x1a5;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined2 *)((int)this + 0x1a) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x1c) = *param_3;
  *(undefined4 *)((int)this + 0x20) = param_3[1];
  *(undefined4 *)((int)this + 0x24) = param_3[2];
  *(undefined4 *)((int)this + 0x28) = param_3[3];
  *(undefined4 *)((int)this + 0x2c) = param_3[4];
  return (uint)this;
}

/* ref: FUN_00a4a0d0 */
uint F_00a4a0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4a0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined1 *)(in_ecx + 6) = (undefined1)param_2;
  *in_ecx = 0x1a6;
  in_ecx[1] = 0x30;
  puVar2 = param_3;
  puVar3 = (undefined4 *)((int)in_ecx + 0x19);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4a100 */
uint F_00a4a100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4a100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  in_ecx[6] = param_2;
  *in_ecx = 0x1af;
  in_ecx[1] = 0x50;
  puVar2 = param_3;
  puVar3 = in_ecx + 7;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_4;
  puVar3 = in_ecx + 0xe;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00a4a140 */
uint F_00a4a140(unsigned int gen_a0)
{
  GEN_ENTER(0xa4a140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x10000;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00c49908((int)this + 0x14,0x20,"RETAINER");
  return (uint)this;
}

/* ref: Client::Game::Item::AskToTradeCallback::vf0 */
uint F_00a4a170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4a170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Item::ConfirmationCallback::vf0 */
uint F_00a4a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Item::NumericInputCallback::vf0 */
uint F_00a4a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a4a200 */
uint F_00a4a200(unsigned int gen_a0)
{
  GEN_ENTER(0xa4a200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  undefined4 * puVar2;
  undefined2 * puVar3;
  int iVar4;
  int local_8;
  
  puVar2 = (undefined4 *)((int)this + 0x30);
  iVar4 = 5;
  do {
    *(undefined2 *)(puVar2 + 1) = 0;
    *puVar2 = 9999;
    *(undefined1 *)((int)puVar2 + 6) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined1 *)((int)puVar2 + 0x2f) = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    *(undefined2 *)((int)puVar2 + 0x12) = 30000;
    *(undefined2 *)(puVar2 + 4) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined4 *)((int)puVar2 + 0x2a) = 0;
    *(undefined1 *)((int)puVar2 + 0x2e) = 0;
    puVar2[0xd] = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar2 = (undefined4 *)((int)this + 0x1b0);
  iVar4 = 5;
  do {
    *(undefined2 *)(puVar2 + 1) = 0;
    *puVar2 = 9999;
    *(undefined1 *)((int)puVar2 + 6) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined1 *)((int)puVar2 + 0x2f) = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    *(undefined2 *)((int)puVar2 + 0x12) = 30000;
    *(undefined2 *)(puVar2 + 4) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined4 *)((int)puVar2 + 0x2a) = 0;
    *(undefined1 *)((int)puVar2 + 0x2e) = 0;
    puVar2[0xd] = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    puVar2 = puVar2 + 0x10;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar1 = (undefined1 *)((int)this + 0x364);
  iVar4 = 0x7f;
  do {
    *(undefined4 *)(puVar1 + 0x10) = 9999;
    *(undefined4 *)(puVar1 + 0x24) = 9999;
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 4) = 0x10000000;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 0x14) = 0xffff;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined2 *)(puVar1 + 0x28) = 0xffff;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 0x30) = 0;
    *(undefined4 *)(puVar1 + 0x34) = 0;
    *(undefined4 *)(puVar1 + 0x38) = 0;
    puVar1 = puVar1 + 0x3c;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2164) = (*(undefined * PTR32 (*)[2])REFP(0x10e4ac4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2168) = (*(undefined * PTR32 (*)[2])REFP(0x10e4ad0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x216c) = (*(undefined * PTR32 (*)[2])REFP(0x10e4adc));
  *(undefined4 *)((int)this + 0x2170) = 0;
  puVar2 = (undefined4 *)((int)this + 0x2178);
  local_8 = 7;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x10000;
    puVar2[4] = 0;
    F_00c49908(puVar2 + 5,0x20,"RETAINER");
    puVar2 = puVar2 + 0xe;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  puVar2 = (undefined4 *)((int)this + 0x23e8);
  iVar4 = 0xd;
  do {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar3 = (undefined2 *)((int)this + 0x245d);
  iVar4 = 0xd;
  do {
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3 = (undefined2 *)((int)puVar3 + 3);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined1 *)((int)this + 0x3006) = 0;
  *(undefined4 *)((int)this + 0x3008) = 0;
  *(undefined4 *)((int)this + 0x300c) = 0;
  *(undefined4 *)((int)this + 0x3018) = 0;
  *(undefined4 *)((int)this + 0x301c) = 0;
  *(undefined1 *)((int)this + 0x3014) = 0;
  *(undefined4 *)((int)this + 0x3010) = 0x75300000;
  *(undefined1 *)((int)this + 0x302f) = 0;
  *(undefined4 *)((int)this + 0x3030) = 0;
  *(undefined4 *)((int)this + 0x303c) = 0;
  *(undefined4 *)((int)this + 0x3000) = 9999;
  *(undefined2 *)((int)this + 0x3004) = 0;
  *(undefined4 *)((int)this + 0x3020) = 0;
  *(undefined4 *)((int)this + 0x3024) = 0;
  *(undefined2 *)((int)this + 0x3028) = 0;
  *(undefined4 *)((int)this + 0x302a) = 0;
  *(undefined1 *)((int)this + 0x302e) = 0;
  *(undefined4 *)((int)this + 0x3034) = 0;
  *(undefined1 *)((int)this + 0x3038) = 0;
  *(undefined4 *)((int)this + 0x3040) = 9999;
  *(undefined1 *)((int)this + 0x3046) = 0;
  *(undefined4 *)((int)this + 0x3048) = 0;
  *(undefined4 *)((int)this + 0x304c) = 0;
  *(undefined4 *)((int)this + 0x3058) = 0;
  *(undefined4 *)((int)this + 0x305c) = 0;
  *(undefined1 *)((int)this + 0x3054) = 0;
  *(undefined4 *)((int)this + 0x3050) = 0x75300000;
  *(undefined1 *)((int)this + 0x306f) = 0;
  *(undefined4 *)((int)this + 0x3070) = 0;
  *(undefined4 *)((int)this + 0x307c) = 0;
  *(undefined2 *)((int)this + 0x3044) = 0;
  *(undefined4 *)((int)this + 0x3060) = 0;
  *(undefined4 *)((int)this + 0x3064) = 0;
  *(undefined2 *)((int)this + 0x3068) = 0;
  *(undefined4 *)((int)this + 0x306a) = 0;
  *(undefined1 *)((int)this + 0x306e) = 0;
  *(undefined4 *)((int)this + 0x3074) = 0;
  *(undefined1 *)((int)this + 0x3078) = 0;
  *(undefined4 *)((int)this + 0x3090) = 9999;
  *(undefined2 *)((int)this + 0x3094) = 0;
  *(undefined1 *)((int)this + 0x3096) = 0;
  *(undefined4 *)((int)this + 0x3098) = 0;
  *(undefined4 *)((int)this + 0x309c) = 0;
  *(undefined4 *)((int)this + 0x30a8) = 0;
  *(undefined4 *)((int)this + 0x30ac) = 0;
  *(undefined1 *)((int)this + 0x30a4) = 0;
  *(undefined4 *)((int)this + 0x30a0) = 0x75300000;
  *(undefined1 *)((int)this + 0x30bf) = 0;
  *(undefined4 *)((int)this + 0x30c0) = 0;
  *(undefined4 *)((int)this + 0x30cc) = 0;
  *(undefined4 *)((int)this + 0x30b0) = 0;
  *(undefined4 *)((int)this + 0x30b4) = 0;
  *(undefined2 *)((int)this + 0x30b8) = 0;
  *(undefined4 *)((int)this + 0x30ba) = 0;
  *(undefined1 *)((int)this + 0x30be) = 0;
  *(undefined4 *)((int)this + 0x30c4) = 0;
  *(undefined1 *)((int)this + 0x30c8) = 0;
  *(undefined4 *)((int)this + 0x30d0) = 9999;
  *(undefined1 *)((int)this + 0x30d6) = 0;
  *(undefined4 *)((int)this + 0x30d8) = 0;
  *(undefined4 *)((int)this + 0x30dc) = 0;
  *(undefined4 *)((int)this + 0x30e8) = 0;
  *(undefined4 *)((int)this + 0x30ec) = 0;
  *(undefined1 *)((int)this + 0x30e4) = 0;
  *(undefined4 *)((int)this + 0x30e0) = 0x75300000;
  *(undefined1 *)((int)this + 0x30ff) = 0;
  *(undefined4 *)((int)this + 0x3100) = 0;
  *(undefined4 *)((int)this + 0x310c) = 0;
  *(undefined2 *)((int)this + 0x30d4) = 0;
  *(undefined4 *)((int)this + 0x30f0) = 0;
  *(undefined4 *)((int)this + 0x30f4) = 0;
  *(undefined2 *)((int)this + 0x30f8) = 0;
  *(undefined4 *)((int)this + 0x30fa) = 0;
  *(undefined1 *)((int)this + 0x30fe) = 0;
  *(undefined4 *)((int)this + 0x3104) = 0;
  *(undefined1 *)((int)this + 0x3108) = 0;
  return (uint)this;
}

/* ref: FUN_00a4a5a0 */
uint F_00a4a5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4a5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  
  while (pvVar5 = this, *(char *)((int)pvVar5 + 6) != '\0') {
    uVar1 = *(ushort *)((int)pvVar5 + 10);
    pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)uVar1);
    if (pvVar3 == (undefined *)0x0) break;
    sVar2 = *(short *)((int)pvVar5 + 8);
    uVar4 = F_00a37da0(pvVar3,(int)sVar2);
    if ((uVar4 == 0) && (pvVar5 == (undefined *)0x0)) break;
    pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)uVar1);
    if (pvVar3 == (undefined *)0x0) {
      this = (undefined *)0x0;
    }
    else {
      this = (undefined *)F_00a37da0(pvVar3,(int)sVar2);
      if (this == (undefined *)0x0) {
        this = pvVar5;
      }
    }
  }
  return *(uint *)((int)pvVar5 + 0x30);
}

/* ref: FUN_00a4a720 */
float10 F_00a4a720(float gen_a0)
{
  GEN_ENTER(0xa4a720u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a4a760 */
uint F_00a4a760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4a760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((int)param_1 < 0x2e) &&
     (*(undefined1 *)(param_1 + (int)this) = (undefined1)param_2, param_1 == 0x29)) {
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return param_1;
}

/* ref: FUN_00a4a790 */
byte F_00a4a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4a790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = (char *)F_00ab2170(param_1);
  if (param_1 == 0x30) {
    if ((REFG(int, 0x1379694) != 0) && (uVar2 = F_00aa0210(REFG(int, 0x1379694),0,0), uVar2 == 0x4d)) {
      return 0;
    }
    if (REFG(char, 0x14a73b0) != '\0') {
      return 0;
    }
    if ((GEN_ISNAN(REFG(float, 0x14a73b4)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(REFG(float, 0x14a73b4)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
        REFG(uint, 0x14a73b4) == *(float *)&REFG(undefined, 0x1088114))) {
      return 0;
    }
  }
  iVar3 = 0;
  iVar4 = (int)this - (int)pcVar1;
  while ((pcVar1[iVar4] != '\x01' || (*pcVar1 != '\0'))) {
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 1;
    if (0x2d < iVar3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00a4a810 */
uint F_00a4a810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4a810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = (char *)F_00ab2170(param_1);
  iVar3 = 0;
  iVar4 = (int)this - (int)pcVar1;
  while ((pcVar1[iVar4] != '\x01' || (*pcVar1 != '\0'))) {
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 1;
    if (0x2d < iVar3) {
      return (uint)pcVar1;
    }
  }
  uVar2 = F_00a7d290(iVar3 + 400,0,0,0,0,REFG(float, 0x10916ec));
  return uVar2;
}

/* ref: FUN_00a4a870 */
byte F_00a4a870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4a870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(bool *)this = param_1 == 0;
  *(bool *)((int)this + 1) = param_1 == 1;
  *(bool *)((int)this + 2) = param_1 == 2;
  *(bool *)((int)this + 3) = param_1 == 3;
  *(bool *)((int)this + 4) = param_1 == 4;
  *(bool *)((int)this + 5) = param_1 == 5;
  *(bool *)((int)this + 6) = param_1 == 6;
  *(bool *)((int)this + 7) = param_1 == 7;
  *(bool *)((int)this + 8) = param_1 == 8;
  return param_1 == 8;
}

/* ref: FUN_00a4a910 */
uint F_00a4a910(void)
{
  GEN_ENTER(0xa4a910u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)*(ushort *)(uVar1 + 0x1c);
}

/* ref: FUN_00a4a930 */
uint F_00a4a930(void)
{
  GEN_ENTER(0xa4a930u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)*(ushort *)(uVar1 + 0x20);
}

/* ref: FUN_00a4a950 */
byte F_00a4a950(void)
{
  GEN_ENTER(0xa4a950u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar1 == 0) {
    return 0;
  }
  return *(char *)(uVar1 + 0x2a) == '\x05';
}

/* ref: FUN_00a4a9e0 */
uint F_00a4a9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4a9e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined4 *)&REFG(undefined, 0x14a7390) = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  return 0;
}

/* ref: FUN_00a4aa10 */
uint F_00a4aa10(void)
{
  GEN_ENTER(0xa4aa10u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(&REFG(undefined, 0x14a7360),0,0x2e);
  return (uint)pvVar1;
}

/* ref: FUN_00a4aa30 */
uint F_00a4aa30(unsigned int gen_a0)
{
  GEN_ENTER(0xa4aa30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *in_ecx = 0;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  uVar1 = F_00ae8400();
  return uVar1;
}

/* ref: FUN_00a4aa50 */
uint F_00a4aa50(unsigned int gen_a0)
{
  GEN_ENTER(0xa4aa50u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  return 0;
}

/* ref: FUN_00a4aa70 */
unsigned int F_00a4aa70(unsigned int gen_a0)
{
  GEN_ENTER(0xa4aa70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  
  if (*(char *)(in_ecx + 0x29) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)(in_ecx + 0x30))))
    ;
    *(float *)(in_ecx + 0x30) = fVar1;
    if ((float10)REFG(float, 0x1087ef8) <= (float10)fVar1) {
      *(undefined1 *)(in_ecx + 0x29) = 0;
      *(undefined4 *)(in_ecx + 0x30) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00a4aab0 */
uint F_00a4aab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4aab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint in_EAX = 0;
  uint * puVar1;
  int * piVar2;
  int iVar3;
  
  if ((REFG(int, 0x1379c70) == 2) && ((*(int *)this != param_1 || (*(int *)((int)this + 4) != param_2)))) {
    iVar3 = param_2;
    if ((param_2 != 0) || (iVar3 = param_1, param_1 != 0)) {
      puVar1 = (uint *)F_00ab2750(iVar3);
      in_EAX = 0;
      if (puVar1 != (uint *)0x0) {
        piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
        in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 0xe4))(piVar2,(*puVar1 & 0xffffff) + (int)puVar1,5,1,1);
      }
    }
    *(int *)this = param_1;
    *(int *)((int)this + 4) = param_2;
  }
  return in_EAX;
}

/* ref: FUN_00a4ab30 */
uint F_00a4ab30(unsigned int gen_a0)
{
  GEN_ENTER(0xa4ab30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    puVar1 = (uint *)F_00ab2750(*(int *)((int)this + 4));
    if (puVar1 != (uint *)0x0) goto LAB_00a4ab49;
  }
  if (*(int *)this != 0) {
    puVar1 = (uint *)F_00ab2750(*(int *)this);
    if (puVar1 != (uint *)0x0) {
LAB_00a4ab49: ;
      return (*puVar1 & 0xffffff) + (int)puVar1;
    }
  }
  return 0x10e4b70;
}

/* ref: FUN_00a4ab70 */
uint F_00a4ab70(unsigned int gen_a0)
{
  GEN_ENTER(0xa4ab70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  (*(undefined4 *)(gen_frame + 0x50)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x54)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x58)) = param_1[2];
  uVar5 = 0;
  uVar3 = 0;
  bVar1 = F_00551a90(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),((byte *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x50)),8);
  if ((bVar1 != 0) && (uVar4 = 0, (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 64)) != 0)) {
    do {
      uVar2 = F_005f32a0(0x2b,*(undefined4 *)(((byte *)(gen_frame + 0xc)) + uVar4 * 4));
      if ((uVar2 != 0) &&
         (((*(byte *)(uVar2 + 0x95) & 2) != 0 && (uVar5 < *(ushort *)(uVar2 + 0x70))))) {
        uVar3 = uVar4;
        uVar5 = *(ushort *)(uVar2 + 0x70);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 64)));
    if (uVar5 != 0) {
      uVar3 = F_005f32a0(0x2b,*(undefined4 *)(((byte *)(gen_frame + 0xc)) + uVar3 * 4));
      if (uVar3 != 0) {
        return *(uint *)(uVar3 + 0x80);
      }
    }
  }
  return 0;
}

/* ref: FUN_00a4ac30 */
uint F_00a4ac30(unsigned int gen_a0)
{
  GEN_ENTER(0xa4ac30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int * piVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  undefined4 uVar11;
  uint local_30;
  uint local_28;
  uint local_20;
  uint local_18;
  undefined1 local_6;
  char local_5;
  
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar9 = 0;
  local_5 = '\0';
  local_6 = 0;
  uVar7 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != 0) && ((*(byte *)(REFG(undefined4, 0x1379694) + 0x8e) & 0x40) == 0)) {
    local_30 = 0;
    uVar10 = 0;
    local_18 = 0;
    uVar1 = 0;
    local_20 = 0;
    uVar2 = 0;
    local_28 = 0;
    uVar3 = 0;
    F_00ab6810();
    F_00aaee00(0);
    bVar4 = F_00aaf830(&REFG(undefined1, 0x14b5220));
    uVar7 = CONCAT31(extraout_var,bVar4);
    if (bVar4 == 1) {
      uVar6 = F_00aaf840(&REFG(undefined1, 0x14b5220));
      if (*(int *)(uVar6 + 0x40) != 0) {
        do {
          iVar8 = *(int *)(uVar6 + uVar9 * 4);
          if (((*(byte *)(iVar8 + 0x44) & 8) != 0) && (uVar7 = F_005f32a0(0x2b,iVar8), uVar7 != 0)
             ) {
            bVar4 = *(byte *)(uVar7 + 0x95);
            if ((char)bVar4 < '\0') {
              local_5 = '\x01';
            }
            if ((*(byte *)(uVar7 + 0x96) & 1) != 0) {
              local_6 = 1;
            }
            if (((bVar4 & 2) != 0) && (uVar10 < *(ushort *)(uVar7 + 0x70))) {
              local_30 = uVar9;
              uVar10 = *(ushort *)(uVar7 + 0x70);
            }
            if (((bVar4 & 4) != 0) && (uVar1 < *(ushort *)(uVar7 + 0x70))) {
              local_18 = uVar9;
              uVar1 = *(ushort *)(uVar7 + 0x70);
            }
            if (((bVar4 & 8) != 0) && (uVar2 < *(ushort *)(uVar7 + 0x70))) {
              local_20 = uVar9;
              uVar2 = *(ushort *)(uVar7 + 0x70);
            }
            if (((bVar4 & 0x10) != 0) && (uVar3 < *(ushort *)(uVar7 + 0x70))) {
              local_28 = uVar9;
              uVar3 = *(ushort *)(uVar7 + 0x70);
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(uVar6 + 0x40));
      }
      if (*(char *)((int)this + 8) != local_5) {
        F_00a7d290((local_5 == '\0') + 0x2dc,0,0,0,0,REFG(float, 0x10916ec));
      }
      *(char *)((int)this + 8) = local_5;
      *(undefined1 *)((int)this + 0x10) = local_6;
      iVar8 = *(int *)((int)this + 0xc);
      if ((uVar10 != 0) &&
         (uVar7 = F_005f32a0(0x2b,*(undefined4 *)(uVar6 + local_30 * 4)), uVar7 != 0)) {
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar7 + 0x80);
      }
      if ((*(int *)((int)this + 0xc) != iVar8) && (piVar5 != (int *)0x0)) {
        uVar11 = 0x1f;
        uVar7 = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
        this_00 = (undefined *)F_00763050(uVar7,uVar11);
        if (this_00 != (undefined *)0x0) {
          iVar8 = *(int *)&REFG(undefined2, 0x1379c78);
          if (*(int *)&REFG(undefined2, 0x1379c78) == 0) {
            iVar8 = REFG(int, 0x1379c88);
          }
          F_008decc0(this_00,iVar8,*(undefined4 *)((int)this + 0xc));
        }
      }
      uVar7 = 0;
      if (uVar1 == 0) {
        if ((REFG(int, 0x1379c70) == 2) && ((REFG(int, 0x14a73a8) != 0 || (REFG(int, 0x14a73ac) != 0)))) {
          REFG(int, 0x14a73a8) = 0;
          REFG(int, 0x14a73ac) = 0;
        }
      }
      else {
        uVar7 = F_005f32a0(0x2b,*(undefined4 *)(uVar6 + local_18 * 4));
        uVar7 = F_00a4aab0(&REFG(int, 0x14a73a8),*(undefined4 *)(uVar7 + 0x84),
                             *(undefined4 *)(uVar7 + 0x88));
      }
      if (uVar2 != 0) {
        uVar7 = F_005f32a0(0x2b,*(undefined4 *)(uVar6 + local_20 * 4));
        iVar8 = *(int *)((int)this + 0xc);
        if (iVar8 == 0) {
          iVar8 = REFG(int, 0x1379c90);
        }
        uVar7 = F_00ab54c0(&REFG(undefined, 0x14b5268),*(undefined4 *)(uVar7 + 0x14),
                             (uint)*(byte *)(uVar7 + 0x94),iVar8);
      }
      if (uVar3 != 0) {
        uVar9 = F_005f32a0(0x2b,*(undefined4 *)(uVar6 + local_28 * 4));
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = 0;
          if (*(int *)(uVar9 + 0x8c) != 0) {
            F_00ab6780(*(int *)(uVar9 + 0x8c));
            uVar7 = F_00aaee00((uint)(*(byte *)(uVar9 + 0x95) >> 5 & 1));
            return uVar7;
          }
        }
      }
    }
    else {
      if ((REFG(int, 0x1379c70) == 2) && ((REFG(int, 0x14a73a8) != 0 || (REFG(int, 0x14a73ac) != 0)))) {
        REFG(int, 0x14a73a8) = 0;
        REFG(int, 0x14a73ac) = 0;
      }
      *(undefined1 *)((int)this + 0x10) = 0;
    }
  }
  return uVar7;
}

/* ref: FUN_00a4af10 */
uint F_00a4af10(unsigned int gen_a0)
{
  GEN_ENTER(0xa4af10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  
  uVar2 = F_00a4ac30(this);
  if ((REFG(char, 0x14a7389) != '\0') &&
     (*(float *)&REFG(undefined, 0x14a7390) =
           ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)&REFG(undefined, 0x14a7390)))),
     (float10)REFG(float, 0x1087ef8) <= (float10)*(float *)&REFG(undefined, 0x14a7390))) {
    REFG(char, 0x14a7389) = '\0';
    *(float *)&REFG(undefined, 0x14a7390) = 0.0;
  }
  if (0.0 < *(float *)((int)this + 0x20)) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) -
                   (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    *(float *)((int)this + 0x20) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00a4afe0 */
uint F_00a4afe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4afe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(int *)((int)this + 4) = param_1;
  uVar1 = param_1 + 0x1fU >> 5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  *(undefined4 *)((int)this + 8) = 0;
  *(uint *)((int)this + 0xc) = uVar1;
  *(int *)((int)this + 0x10) = param_2;
  if (param_2 == 0) {
    uVar1 = F_00406bb0(uVar1 * 4,0,0);
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 0x80000000;
    *(uint *)((int)this + 0x10) = uVar1;
  }
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x10),0,*(int *)((int)this + 0xc) * 4);
  return (uint)this;
}

/* ref: FUN_00a4b060 */
uint F_00a4b060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  longlong lVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(uint *)((int)this + 0xc) = *(uint *)(param_1 + 0xc) | 0x80000000;
  lVar1 = (ulonglong)(*(uint *)(param_1 + 0xc) & 0x7fffffff) * 4;
  uVar2 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
  *(uint *)((int)this + 0x10) = uVar2;
  F_00c46aa0(uVar2,*(undefined4 *)(param_1 + 0x10),*(int *)((int)this + 0xc) * 4)
  ;
  return (uint)this;
}

/* ref: FUN_00a4b0d0 */
uint F_00a4b0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  longlong lVar1;
  uint uVar2;
  
  if (param_1 != this) {
    if ((*(uint *)((int)this + 0xc) & 0x80000000) == 0x80000000) {
      F_00406b30(*(undefined4 *)((int)this + 0x10));
    }
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
    *(uint *)((int)this + 0xc) = *(uint *)((int)param_1 + 0xc) | 0x80000000;
    lVar1 = (ulonglong)(*(uint *)((int)param_1 + 0xc) & 0x7fffffff) * 4;
    uVar2 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
    *(uint *)((int)this + 0x10) = uVar2;
    F_00c46aa0(uVar2,*(undefined4 *)((int)param_1 + 0x10),*(int *)((int)this + 0xc) * 4);
  }
  return (uint)this;
}

/* ref: FUN_00a4b160 */
uint F_00a4b160(unsigned int gen_a0)
{
  GEN_ENTER(0xa4b160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0xc) & 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  if (uVar1 == 0x80000000) {
    uVar2 = F_00406b30(*(undefined4 *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00a4b180 */
unsigned int F_00a4b180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)((int)this + 0xc) & 0x7fffffff) != 0) {
    do {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar2 * 4)));
      *puVar1 = *puVar1 | *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + uVar2 * 4)));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)((int)this + 0xc) & 0x7fffffff));
  }
  return 0;
}

/* ref: FUN_00a4b1c0 */
unsigned int F_00a4b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)((int)this + 0xc) & 0x7fffffff) != 0) {
    do {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar2 * 4)));
      *puVar1 = *puVar1 & *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + uVar2 * 4)));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)((int)this + 0xc) & 0x7fffffff));
  }
  return 0;
}

/* ref: FUN_00a4b200 */
unsigned int F_00a4b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)((int)this + 0xc) & 0x7fffffff) != 0) {
    do {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar2 * 4)));
      *puVar1 = *puVar1 ^ *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + uVar2 * 4)));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)((int)this + 0xc) & 0x7fffffff));
  }
  return 0;
}

/* ref: FUN_00a4b240 */
byte F_00a4b240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 < *(uint *)((int)this + 4)) {
    return 0;
  }
  uVar2 = (param_1 >> 5) + 1;
  uVar1 = F_00406bb0(uVar2 * 4,0,0);
  F_00c46aa0(uVar1,*(undefined4 *)((int)this + 0x10),*(int *)((int)this + 0xc) * 4);
  F_00c48350(((undefined *)GEN_TOP((uVar1 + *(uint *)((int)this + 0xc) * 4))),0,
          (uVar2 - (*(uint *)((int)this + 0xc) & 0x7fffffff)) * 4);
  if ((*(uint *)((int)this + 0xc) & 0x80000000) == 0x80000000) {
    F_00406b30(*(undefined4 *)((int)this + 0x10));
  }
  else {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 0x80000000;
  }
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)((int)this + 0xc) =
       *(uint *)((int)this + 0xc) ^ (*(uint *)((int)this + 0xc) ^ uVar2) & 0x7fffffff;
  *(uint *)((int)this + 4) = param_1;
  return 1;
}

/* ref: FUN_00a4b300 */
uint F_00a4b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * _Dst;
  
  *(int *)((int)this + 4) = param_1;
  uVar1 = param_1 + 0x1fU >> 5;
  *(uint *)((int)this + 0xc) = uVar1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  _Dst = (undefined *)F_00406bb0(uVar1 * 4,0,0);
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 0x80000000;
  *(undefined * PTR32 *)((int)this + 0x10) = _Dst;
  F_00c48350(_Dst,0,*(int *)((int)this + 0xc) * 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5278));
  return (uint)this;
}

/* ref: FUN_00a4b380 */
uint F_00a4b380(unsigned int gen_a0)
{
  GEN_ENTER(0xa4b380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0xc) & 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  if (uVar1 == 0x80000000) {
    uVar2 = F_00406b30(*(undefined4 *)((int)this + 0x10));
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00a4b3a0 */
uint F_00a4b3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4b3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)((int)this + 0xc) & 0x7fffffff;
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar3 * 4)));
      if (uVar2 != 0xffffffff) {
        uVar5 = 0;
        do {
          if ((uVar2 & 1 << ((byte)uVar5 & 0x1f)) == 0) {
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar3 * 4)));
            *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
            *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
            return uVar3 * 0x20 + uVar5;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x20);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return *(uint *)((int)this + 4);
}

/* ref: FUN_00a4b410 */
byte F_00a4b410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 >> 5) * 4)));
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  if ((*puVar1 & uVar2) != 0) {
    return 0;
  }
  *puVar1 = *puVar1 | uVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return 1;
}

/* ref: FUN_00a4b450 */
uint F_00a4b450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 >> 5) * 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return (uint)this;
}

/* ref: FUN_00a4b480 */
uint F_00a4b480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      iVar4 = iVar3;
      if (((*((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (uVar2 >> 5) * 4))) & 1 << ((byte)uVar2 & 0x1f)) !=
           0) && (iVar4 = iVar3 + 1, iVar3 == param_1)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar4;
    } while (uVar2 < uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a4b4c0 */
uint F_00a4b4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa4b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = param_1;
  if ((char)param_5 == '\0') {
    uVar1 = F_00406bb0(param_2 + 1,0,0);
  }
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = param_4;
  *(int *)((int)this + 8) = param_2;
  *(uint *)((int)this + 0xc) = uVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(char *)((int)this + 0x14) = (char)param_5;
  if ((char)param_5 != '\0') {
    *(undefined4 *)((int)this + 0x18) = param_3;
    return (uint)this;
  }
  F_00c46aa0(uVar1,param_1,param_2);
  *(undefined1 *)(param_2 + *(int *)this) = 0;
  *(undefined4 *)((int)this + 0x18) = param_3;
  return (uint)this;
}

/* ref: FUN_00a4b620 */
uint F_00a4b620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  char * pcVar2;
  char * pcVar3;
  char cVar4;
  
  pcVar2 = *(char * PTR32 *)((int)this + 0xc);
  iVar1 = *(int *)((int)this + 0x18);
  pcVar3 = pcVar2;
  if (iVar1 == 0) {
    cVar4 = *pcVar2;
    while( true ) {
      if (((cVar4 == '\t') || (cVar4 = *pcVar3, cVar4 == ',')) || (cVar4 == '\0'))
      goto LAB_00a4b6b2;
      if ((cVar4 == '\n') && (pcVar3[-1] == '\r')) break;
      pcVar3 = pcVar3 + 1;
      cVar4 = *pcVar3;
    }
    pcVar3[-1] = '\0';
  }
  else if (iVar1 == 1) {
    cVar4 = *pcVar2;
    if (cVar4 == '\r') {
LAB_00a4b680: ;
      if (*pcVar3 != '\r') goto LAB_00a4b6b5;
    }
    else {
      do {
        if (((cVar4 == '\t') || (cVar4 == ',')) || (cVar4 == '\0')) goto LAB_00a4b680;
        cVar4 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      } while (cVar4 != '\r');
    }
  }
  else {
    if (iVar1 != 2) goto LAB_00a4b6b5;
    cVar4 = *pcVar2;
    if (cVar4 == '\n') {
LAB_00a4b659: ;
      if (*pcVar3 != '\n') goto LAB_00a4b6b5;
    }
    else {
      do {
        if (((cVar4 == '\t') || (cVar4 == ',')) || (cVar4 == '\0')) goto LAB_00a4b659;
        cVar4 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      } while (cVar4 != '\n');
    }
  }
LAB_00a4b6b2: ;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
LAB_00a4b6b5: ;
  *pcVar3 = '\0';
  *(char * PTR32 *)((int)this + 0xc) = pcVar3 + 1;
  if ((*pcVar2 == '\0') && (pcVar2 = param_1, param_1 == (char *)0x0)) {
    pcVar2 = *(char * PTR32 *)((int)this + 4);
  }
  return (uint)pcVar2;
}

/* ref: FUN_00a4b6e0 */
uint F_00a4b6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4b6e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (param_1 >> 0x17 & 0xff) - 0x70;
  if (0x1f < uVar1) {
    uVar1 = 0x1f;
  }
  return param_1 >> 0x10 & 0x8000 | param_1 >> 0xd & 0x3ff | (uVar1 & 0x1f) << 10;
}

/* ref: FUN_00a4b730 */
uint F_00a4b730(unsigned int gen_a0)
{
  GEN_ENTER(0xa4b730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 in_EAX = 0;
  
  if ((short)param_1 == 0) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  }
  return (((param_1 & 0xffff) >> 10 & 0x1f) + 0x70) * 0x800000;
}

/* ref: FUN_00a4b780 */
uint F_00a4b780(unsigned int gen_a0)
{
  GEN_ENTER(0xa4b780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x133453c) << 0xb ^ REFG(undefined4, 0x133453c);
  REFG(undefined4, 0x133453c) = REFG(undefined4, 0x1334540);
  REFG(undefined4, 0x1334540) = REFG(undefined4, 0x1334544);
  uVar1 = (REFG(undefined4, 0x1334548) >> 0xb ^ uVar1) >> 8 ^ REFG(undefined4, 0x1334548) ^ uVar1;
  REFG(undefined4, 0x1334544) = REFG(undefined4, 0x1334548);
  REFG(undefined4, 0x1334548) = uVar1;
  return uVar1 % param_1;
}

/* ref: FUN_00a4b7d0 */
float F_00a4b7d0(void)
{
  GEN_ENTER(0xa4b7d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x1334548);
  uVar2 = REFG(undefined4, 0x133453c) << 0xb ^ REFG(undefined4, 0x133453c);
  REFG(undefined4, 0x133453c) = REFG(undefined4, 0x1334540);
  REFG(undefined4, 0x1334540) = REFG(undefined4, 0x1334544);
  uVar2 = (REFG(undefined4, 0x1334548) >> 0xb ^ uVar2) >> 8 ^ REFG(undefined4, 0x1334548) ^ uVar2;
  REFG(undefined4, 0x1334548) = uVar2;
  REFG(undefined4, 0x1334544) = uVar1;
  return ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(uVar2 >> 9 | 0x3f800000))) - (float10)REFG(double, 0x1088130))));
}

/* ref: FUN_00a4b840 */
uint F_00a4b840(void)
{
  GEN_ENTER(0xa4b840u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x133453c) << 0xb ^ REFG(undefined4, 0x133453c);
  REFG(undefined4, 0x133453c) = REFG(undefined4, 0x1334540);
  REFG(undefined4, 0x1334540) = REFG(undefined4, 0x1334544);
  uVar1 = (REFG(undefined4, 0x1334548) >> 0xb ^ uVar1) >> 8 ^ REFG(undefined4, 0x1334548) ^ uVar1;
  REFG(undefined4, 0x1334544) = REFG(undefined4, 0x1334548);
  REFG(undefined4, 0x1334548) = uVar1;
  return uVar1;
}

/* ref: FUN_00a4b890 */
ushort F_00a4b890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x1334548);
  uVar2 = REFG(undefined4, 0x133453c) << 0xb ^ REFG(undefined4, 0x133453c);
  REFG(undefined4, 0x133453c) = REFG(undefined4, 0x1334540);
  REFG(undefined4, 0x1334540) = REFG(undefined4, 0x1334544);
  uVar2 = (REFG(undefined4, 0x1334548) >> 0xb ^ uVar2) >> 8 ^ REFG(undefined4, 0x1334548) ^ uVar2;
  REFG(undefined4, 0x1334548) = uVar2;
  iVar3 = ((int)(short)param_2 - (int)(short)param_1) * (uVar2 & 0xffff);
  REFG(undefined4, 0x1334544) = uVar1;
  return (short)(iVar3 + (iVar3 >> 0x1f & 0xffffU) >> 0x10) + (short)param_1;
}

/* ref: FUN_00a4b900 */
unsigned int F_00a4b900(unsigned int gen_a0)
{
  GEN_ENTER(0xa4b900u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e5288));
  return 0;
}

/* ref: FUN_00a4b910 */
uint F_00a4b910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  if (*(int *)((int)this + 0x14) != 0) {
    uVar6 = param_1 + 0xf & 0xfffffff0;
    do {
      puVar1 = (uint *)((int)this + 8);
      uVar2 = _InterlockedCompareExchange((volatile long *)(puVar1), 0, 0);
      uVar5 = uVar2 + uVar6;
      param_1 = uVar2;
      if (*(uint *)((int)this + 0x10) <= uVar5) {
        param_1 = 0;
        uVar5 = uVar6;
      }
      uVar3 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar5), (long)(uVar2));
    } while (uVar3 != uVar2);
    return *(int *)((int)this + 4) + param_1;
  }
  uVar6 = param_1 + 0x1f & 0xfffffff0;
  do {
    do {
      puVar1 = (uint *)((int)this + 0xc);
      uVar5 = _InterlockedCompareExchange((volatile long *)(puVar1), 0, 0);
      if (uVar5 < uVar6) {
        return 0;
      }
      puVar1 = (uint *)((int)this + 8);
      uVar5 = _InterlockedCompareExchange((volatile long *)(puVar1), 0, 0);
      uVar2 = uVar5 + uVar6;
      local_8 = uVar5;
      if (*(uint *)((int)this + 0x10) <= uVar5 + uVar6) {
        local_8 = 0;
        uVar2 = uVar6;
      }
      uVar3 = _InterlockedCompareExchange((volatile long *)(puVar1), (long)(uVar2), (long)(uVar5));
    } while (uVar3 != uVar5);
    LOCK();
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - uVar6;
    UNLOCK();
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 4) + local_8)));
  } while (piVar4 == (int *)0x0);
  *piVar4 = param_1;
  return (uint)(piVar4 + 4);
}

/* ref: FUN_00a4b9d0 */
uint F_00a4b9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4b9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = param_2;
  if ((param_2 != 0) && (*(int *)(in_ecx + 0x14) == 0)) {
    puVar2 = (uint *)(in_ecx + 0xc);
    uVar1 = _InterlockedExchangeAdd((volatile long *)(puVar2), (long)(*(int *)(param_2 - 0x10)));
  }
  return uVar1;
}

/* ref: FUN_00a4b9f0 */
uint F_00a4b9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4b9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5288));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 8))), (long)(0));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xc))), (long)(param_2));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  return (uint)this;
}

/* ref: FUN_00a4ba30 */
uint F_00a4ba30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4ba30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5298));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00a4ba60 */
byte F_00a4ba60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4ba60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x450];
  int * this_00;
  byte bVar1;
  uint uVar2;
  gen_size32 _Size;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x448)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44c);
  iVar5 = *(int *)((int)this + 0x70);
  this_00 = (int *)((int)this + 0x70);
  (*(uint *)(gen_frame + 0x40)) = param_1;
  if (iVar5 != *(int *)((int)this + 0x74)) {
    F_00c46e20(iVar5,*(int *)((int)this + 0x74),0);
    *(int *)((int)this + 0x74) = iVar5;
  }
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar2 = F_004cd3d0(&(*(uint *)(gen_frame + 0x8)),"1.2.3",0x38);
  if (uVar2 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x448)) ^ (uint)(uint)(gen_frame + 0x44c));
    return 0;
  }
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x40));
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = ((undefined1 *)(gen_frame + 0x48));
  (*(int *)(gen_frame + 0x18)) = 0x400;
  (*(byte *)(gen_frame + 0x47)) = 0;
  uVar2 = F_004cd510(&(*(uint *)(gen_frame + 0x8)),0);
  while (uVar2 != 1) {
    if (uVar2 != 0) goto LAB_00a4bc29;
    if ((*(int *)(gen_frame + 0x18)) == 0) {
      iVar4 = *(int *)((int)this + 0x74);
      iVar5 = *this_00;
      uVar3 = iVar4 - iVar5;
      uVar2 = uVar3 + 0x400;
      (*(uint *)(gen_frame + 0x40)) = uVar3;
      if (uVar2 < uVar3) {
        iVar5 = iVar5 + uVar2;
        if (iVar5 != iVar4) {
          F_00c46e20(iVar5,iVar4,0);
          *(int *)((int)this + 0x74) = iVar5;
        }
      }
      else if (uVar3 < uVar2) {
        F_00482530(this_00,(iVar5 - iVar4) + uVar2);
        _Size = (uVar2 - (int)*(undefined * PTR32 *)((int)this + 0x74)) + *this_00;
        if (_Size != 0) {
          F_00c48350(*(undefined * PTR32 *)((int)this + 0x74),0,_Size);
        }
        *(uint *)((int)this + 0x74) = *this_00 + uVar2;
      }
      F_00c46aa0(*this_00 + (*(uint *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x48)),0x400);
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = ((undefined1 *)(gen_frame + 0x48));
      (*(int *)(gen_frame + 0x18)) = 0x400;
    }
    uVar2 = F_004cd510(&(*(uint *)(gen_frame + 0x8)),0);
  }
  iVar5 = 0x400 - (*(int *)(gen_frame + 0x18));
  if (0 < iVar5) {
    iVar4 = *(int *)((int)this + 0x74) - *this_00;
    F_00484510(this_00,iVar4 + iVar5);
    F_00c46aa0(*this_00 + iVar4,((undefined1 *)(gen_frame + 0x48)),iVar5);
  }
  (*(byte *)(gen_frame + 0x47)) = 1;
LAB_00a4bc29: ;
  F_004ce970(&(*(uint *)(gen_frame + 0x8)));
  bVar1 = (*(byte *)(gen_frame + 0x47));
  F_00c47745((*(uint *)(gen_frame + 0x448)) ^ (uint)(uint)(gen_frame + 0x44c));
  return bVar1;
}

/* ref: FUN_00a4bc50 */
uint F_00a4bc50(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xa4bc50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  char cVar1;
  int iVar2;
  int iVar3;
  char * pcVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x400,param_2,((undefined *)&gen_args[2]));
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = param_1[1];
  iVar3 = *param_1;
  F_00484510(param_1,((int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1)) + (iVar2 - iVar3));
  uVar5 = F_00c46aa0(*param_1 + (iVar2 - iVar3),((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return (uint)uVar5;
}

/* ref: FUN_00a4bce0 */
byte F_00a4bce0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4bce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)),*(int *)((int)this + 0xc) + 8,REFG(undefined4, 0x108cc50));
  F_0042ccf0((undefined *)((int)this + 0x1c),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  if (*(char *)((int)this + 0x15) != '\0') {
    (*(undefined1 *)(gen_frame + 0xf)) = (undefined1)((uint)iVar3 >> 0x18);
    (*(undefined1 *)(gen_frame + 0xe)) = (undefined1)((uint)iVar3 >> 0x10);
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x10)) + 0)) = CONCAT11((*(undefined1 *)(gen_frame + 0xe)),(*(undefined1 *)(gen_frame + 0xf)));
    gen_piece_set(&(*(int *)(gen_frame + 0x10)), 0, 3, (unsigned long long)(CONCAT12((char)((uint)iVar3 >> 8),(undefined2)(*(int *)(gen_frame + 0x10)))));
    (*(int *)(gen_frame + 0x10)) = CONCAT13((char)iVar3,(undefined3)(*(int *)(gen_frame + 0x10)));
    iVar3 = (*(int *)(gen_frame + 0x10));
  }
  uVar2 = *(int *)((int)this + 0xc) + 8 + iVar3;
  if (uVar2 < *(uint *)((int)this + 8)) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
    *(uint *)((int)this + 0xc) = uVar2;
  }
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  if (*(char *)((int)this + 0x15) != '\0') {
    (*(undefined1 *)(gen_frame + 0xf)) = (undefined1)((uint)uVar4 >> 0x18);
    (*(undefined1 *)(gen_frame + 0xe)) = (undefined1)((uint)uVar4 >> 0x10);
    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x10)) + 0)) = CONCAT11((*(undefined1 *)(gen_frame + 0xe)),(*(undefined1 *)(gen_frame + 0xf)));
    gen_piece_set(&(*(int *)(gen_frame + 0x10)), 0, 3, (unsigned long long)(CONCAT12((char)((uint)uVar4 >> 8),(undefined2)(*(int *)(gen_frame + 0x10)))));
    (*(int *)(gen_frame + 0x10)) = CONCAT13((char)uVar4,(undefined3)(*(int *)(gen_frame + 0x10)));
    uVar4 = (*(int *)(gen_frame + 0x10));
  }
  bVar1 = F_00a4ba60(this,*(int *)((int)this + 0xc) + 8,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return bVar1;
}

/* ref: FUN_00a4bda0 */
uint F_00a4bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4bda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_1 + param_2;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined1 *)((int)this + 0x15) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e52a0));
  F_0042b630((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  F_00a4bce0(this);
  return (uint)this;
}

/* ref: FUN_00a4be10 */
byte F_00a4be10(unsigned int gen_a0)
{
  GEN_ENTER(0xa4be10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined1 uStack_a;
  undefined1 uStack_9;
  int local_8;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  if (*(char *)((int)this + 0x15) != '\0') {
    uStack_9 = (undefined1)((uint)iVar2 >> 0x18);
    uStack_a = (undefined1)((uint)iVar2 >> 0x10);
    local_8 = CONCAT13((char)iVar2,CONCAT12((char)((uint)iVar2 >> 8),CONCAT11(uStack_a,uStack_9)));
    iVar2 = local_8;
  }
  uVar1 = *(int *)((int)this + 0xc) + 8 + iVar2;
  if (uVar1 < *(uint *)((int)this + 8)) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
    *(uint *)((int)this + 0xc) = uVar1;
    if (-1 < *(int *)((int)this + 0x18)) {
      F_00a4bce0(this);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00a4be70 */
byte F_00a4be70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4be70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x460];
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined * pvVar7;
  char * pcVar8;
  undefined * puVar9;
  undefined * puVar10;
  char * _Dst;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x458)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x45c);
  iVar11 = *(int *)((int)this + 4);
  (*(char * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 *)(gen_frame + 0x38)) = param_2;
  if (iVar11 != *(int *)((int)this + 8)) {
    F_00c46e20(iVar11,*(int *)((int)this + 8),0);
    *(int *)((int)this + 8) = iVar11;
  }
  uVar2 = *(undefined4 *)((int)this + 0x18);
  puVar10 = (undefined *)0x0;
  _Dst = (char *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x40)) = (char *)0x0;
  (*(int *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar4 = F_004cb5f0(&(*(undefined4 *)(gen_frame + 0x0)),uVar2,"1.2.3",0x38);
  if (uVar4 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x458)) ^ (uint)(uint)(gen_frame + 0x45c));
    return 0;
  }
  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x50));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00a4c600(this,REFG(undefined * PTR32, 0x1334534),(*(char * PTR32 *)(gen_frame + 0x50)),pcVar5 + (1 - (int)((*(char * PTR32 *)(gen_frame + 0x50)) + 1)));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x4)) = param_3;
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x58));
  (*(int *)(gen_frame + 0x10)) = 0x400;
  (*(byte *)(gen_frame + 0x57)) = 0;
  uVar4 = F_004c9b60(&(*(undefined4 *)(gen_frame + 0x0)),4);
  while (uVar4 != 1) {
    if (uVar4 != 0) goto LAB_00a4c0fc;
    if ((*(int *)(gen_frame + 0x10)) == 0) {
      pcVar8 = _Dst - (int)puVar10;
      pcVar5 = pcVar8 + 0x400;
      (*(char * PTR32 *)(gen_frame + 0x50)) = pcVar8;
      if (pcVar5 < pcVar8) {
        pcVar5 = pcVar5 + (int)puVar10;
        if (pcVar5 != _Dst) {
          F_00c46e20(pcVar5,_Dst,0);
LAB_00a4c03b: ;
          (*(char * PTR32 *)(gen_frame + 0x40)) = pcVar5;
          _Dst = pcVar5;
        }
      }
      else if (pcVar8 < pcVar5) {
        if (((char *)GEN_TOP((-1 - (int)(pcVar5 + ((int)puVar10 - (int)_Dst))))) < pcVar8) {
                    
          F_00c4579a("vector<T> too long");
        }
        pcVar8 = pcVar8 + (int)(pcVar5 + ((int)puVar10 - (int)_Dst));
        pcVar6 = (char *)((*(int *)(gen_frame + 0x44)) - (int)puVar10);
        if (pcVar6 < pcVar8) {
          if (((char *)GEN_TOP((-1 - ((uint)((int)(uintptr_t)pcVar6) >> 1)))) < pcVar6) {
            pcVar6 = (char *)0x0;
          }
          else {
            pcVar6 = pcVar6 + ((uint)((int)(uintptr_t)pcVar6) >> 1);
          }
          if (pcVar6 < pcVar8) {
            pcVar6 = pcVar8;
          }
          F_00481c90(&(*(undefined * PTR32 *)(gen_frame + 0x3c)),pcVar6);
          puVar10 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
          _Dst = (*(char * PTR32 *)(gen_frame + 0x40));
        }
        if (pcVar5 + ((int)puVar10 - (int)_Dst) != (char *)0x0) {
          F_00c48350(_Dst,0,(gen_size32)(pcVar5 + ((int)puVar10 - (int)_Dst)));
        }
        pcVar5 = pcVar5 + (int)puVar10;
        goto LAB_00a4c03b;
      }
      F_00c46aa0((*(char * PTR32 *)(gen_frame + 0x50)) + (int)puVar10,((undefined1 *)(gen_frame + 0x58)),0x400);
      (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x58));
      (*(int *)(gen_frame + 0x10)) = 0x400;
      this = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    }
    uVar4 = F_004c9b60(&(*(undefined4 *)(gen_frame + 0x0)),4);
  }
  pvVar7 = (undefined *)(0x400 - (*(int *)(gen_frame + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar7;
  if (0 < (int)pvVar7) {
    iVar11 = (int)_Dst - (int)puVar10;
    F_00484510(&(*(undefined * PTR32 *)(gen_frame + 0x3c)),(int)pvVar7 + iVar11);
    puVar10 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x3c)) + iVar11,((undefined1 *)(gen_frame + 0x58)),(*(undefined * PTR32 *)(gen_frame + 0x4c)));
    puVar9 = &REFG(undefined, 0x10e522d);
    if ((int)(*(char * PTR32 *)(gen_frame + 0x40)) - (int)puVar10 != 0) {
      puVar9 = puVar10;
    }
    F_00a4c6a0(this,REFG(undefined * PTR32, 0x1334538),puVar9,(int)(*(char * PTR32 *)(gen_frame + 0x40)) - (int)puVar10);
  }
  (*(byte *)(gen_frame + 0x57)) = 1;
LAB_00a4c0fc: ;
  F_004ca370(&(*(undefined4 *)(gen_frame + 0x0)));
  if (puVar10 != (undefined *)0x0) {
    F_00406ad0(puVar10);
  }
  bVar3 = (*(byte *)(gen_frame + 0x57));
  F_00c47745((*(uint *)(gen_frame + 0x458)) ^ (uint)(uint)(gen_frame + 0x45c));
  return bVar3;
}

/* ref: FUN_00a4c140 */
uint F_00a4c140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4c140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5280));
  *(int *)((int)this + 8) = param_2 + param_1;
  *(undefined1 *)((int)this + 0x15) = (undefined1)param_3;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: ChunkRead_II_Data_System_Client::vf0 */
uint F_00a4c190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5280));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a4c1c0 */
uint F_00a4c1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4c1c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint local_8;
  
  local_8 = CONCAT13((char)(*(undefined4 *)&gen_args[0]),
                     CONCAT12((char)((uint)(*(undefined4 *)&gen_args[0]) >> 8),CONCAT11((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 2)),(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)))));
  return local_8;
}

/* ref: FUN_00a4c1e0 */
uint F_00a4c1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = _InterlockedExchangeAdd((volatile long *)(((int *)this)), (long)(param_1));
  return iVar1 + param_1;
}

/* ref: Client::System::Data::Bit::vf0 */
uint F_00a4c260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  if ((*(uint *)(this + 0xc) & 0x80000000) == 0x80000000) {
    F_00406b30(*(undefined4 *)(this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Data::Unique::vf0 */
uint F_00a4c2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5270));
  if ((*(uint *)(this + 0xc) & 0x80000000) == 0x80000000) {
    F_00406b30(*(undefined4 *)(this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a4c2e0 */
uint F_00a4c2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4c2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined1 uStack_a;
  undefined1 uStack_9;
  uint local_8;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  if (*(char *)((int)this + 0x15) != '\0') {
    uStack_9 = (undefined1)(uVar1 >> 0x18);
    uStack_a = (undefined1)(uVar1 >> 0x10);
    local_8 = CONCAT13((char)uVar1,CONCAT12((char)(uVar1 >> 8),CONCAT11(uStack_a,uStack_9)));
    uVar1 = local_8;
  }
  return uVar1;
}

/* ref: Client::System::Data::DmaBuffer::vf0 */
uint F_00a4c350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5288));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a4c380 */
uint F_00a4c380(unsigned int gen_a0)
{
  GEN_ENTER(0xa4c380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined1 uStack_a;
  undefined1 uStack_9;
  int local_8;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  if (*(char *)((int)this + 0x15) != '\0') {
    uStack_9 = (undefined1)((uint)iVar1 >> 0x18);
    uStack_a = (undefined1)((uint)iVar1 >> 0x10);
    local_8 = CONCAT13((char)iVar1,CONCAT12((char)((uint)iVar1 >> 8),CONCAT11(uStack_a,uStack_9)));
    iVar1 = local_8;
  }
  uVar2 = *(int *)((int)this + 0xc) + 8 + iVar1;
  if (*(uint *)((int)this + 8) <= uVar2) {
    return 0xffffffff;
  }
  *(uint *)((int)this + 0xc) = uVar2;
  uVar2 = *(int *)((int)this + 0x18) + 1;
  *(uint *)((int)this + 0x18) = uVar2;
  return uVar2;
}

/* ref: FUN_00a4c3d0 */
uint F_00a4c3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4c3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (param_1 != 0) {
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
      if (*(char *)((int)this + 0x15) != '\0') {
        uStack_5 = (undefined1)((uint)iVar2 >> 0x18);
        uStack_6 = (undefined1)((uint)iVar2 >> 0x10);
        param_2 = CONCAT13((char)iVar2,
                           CONCAT12((char)((uint)iVar2 >> 8),CONCAT11(uStack_6,uStack_5)));
        iVar2 = param_2;
      }
      uVar1 = *(int *)((int)this + 0xc) + 8 + iVar2;
      if (*(uint *)((int)this + 8) <= uVar1) {
        return 0xffffffff;
      }
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      *(uint *)((int)this + 0xc) = uVar1;
      if (*(int *)((int)this + 0x18) < 0) {
        return 0xffffffff;
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return *(uint *)((int)this + 0x18);
}

/* ref: FUN_00a4c460 */
uint F_00a4c460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4c460u, gen_a0, gen_a1, gen_a2, 0u);
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
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  return (uint)this;
}

/* ref: FUN_00a4c4a0 */
uint F_00a4c4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4c4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: ChunkWrite_II_Data_System_Client::vf0 */
uint F_00a4c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
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

/* ref: FUN_00a4c520 */
uint F_00a4c520(unsigned int gen_a0)
{
  GEN_ENTER(0xa4c520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: Client::System::Data::PackWrite::vf0 */
uint F_00a4c550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5290));
  if (*(int *)(this + 4) != 0) {
    F_00406ad0(*(int *)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a4c5a0 */
uint F_00a4c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c5a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * this_00;
  uint uVar1;
  int iVar2;
  undefined4 local_8;
  
  this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != '\0') {
    local_8 = CONCAT22(CONCAT11((char)(*(undefined4 *)&gen_args[1]),(char)((uint)(*(undefined4 *)&gen_args[1]) >> 8)),
                       CONCAT11((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)),(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3))));
    uVar1 = F_00484510(this_00,iVar2 + 4);
    *(undefined4 *)(*this_00 + iVar2) = local_8;
    return uVar1;
  }
  F_00484510(this_00,iVar2 + 4);
  uVar1 = *this_00;
  *(undefined4 *)(uVar1 + iVar2) = (*(undefined4 *)&gen_args[1]);
  return uVar1;
}

/* ref: FUN_00a4c600 */
uint F_00a4c600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  int iVar1;
  ulonglong uVar2;
  
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  F_00484510(this_00,iVar1 + 4);
  *(undefined4 *)(*this_00 + iVar1) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) == '\0') {
    F_00484510(this_00,iVar1 + 4);
    *(int *)(*this_00 + iVar1) = (*(int *)&gen_args[3]);
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT13((char)(*(int *)&gen_args[3]),
                       CONCAT12((char)((uint)(*(int *)&gen_args[3]) >> 8),CONCAT11((*(undefined1 *)((char *)&(*(int *)&gen_args[3]) + 2)),(*(undefined1 *)((char *)&(*(int *)&gen_args[3]) + 3)))))));
    F_00484510(this_00,iVar1 + 4);
    *(undefined4 * PTR32 *)(*this_00 + iVar1) = (*(undefined4 * PTR32 *)&gen_args[1]);
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  F_00484510(this_00,iVar1 + (*(int *)&gen_args[3]));
  uVar2 = F_00c46aa0(*this_00 + iVar1,(*(undefined4 *)&gen_args[2]),(*(int *)&gen_args[3]));
  return (uint)uVar2;
}

/* ref: FUN_00a4c6a0 */
uint F_00a4c6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4c6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  int iVar1;
  ulonglong uVar2;
  
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  F_00484510(this_00,iVar1 + 4);
  *(undefined4 *)(*this_00 + iVar1) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) == '\0') {
    F_00484510(this_00,iVar1 + 4);
    *(int *)(*this_00 + iVar1) = (*(int *)&gen_args[3]);
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT13((char)(*(int *)&gen_args[3]),
                       CONCAT12((char)((uint)(*(int *)&gen_args[3]) >> 8),CONCAT11((*(undefined1 *)((char *)&(*(int *)&gen_args[3]) + 2)),(*(undefined1 *)((char *)&(*(int *)&gen_args[3]) + 3)))))));
    F_00484510(this_00,iVar1 + 4);
    *(undefined4 * PTR32 *)(*this_00 + iVar1) = (*(undefined4 * PTR32 *)&gen_args[1]);
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  F_00484510(this_00,iVar1 + (*(int *)&gen_args[3]));
  uVar2 = F_00c46aa0(*this_00 + iVar1,(*(undefined4 *)&gen_args[2]),(*(int *)&gen_args[3]));
  return (uint)uVar2;
}

/* ref: FUN_00a4c740 */
uint F_00a4c740(unsigned int gen_a0)
{
  GEN_ENTER(0xa4c740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e52a0));
  if (*(int *)((int)this + 0x70) != 0) {
    F_00406ad0(*(int *)((int)this + 0x70));
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  uVar1 = F_0042c880((undefined *)((int)this + 0x1c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5280));
  return (uint)uVar1;
}

/* ref: Client::System::Data::PackRead::vf0 */
uint F_00a4c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4c780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e52a0));
  if (*(int *)(this + 0x70) != 0) {
    F_00406ad0(*(int *)(this + 0x70));
  }
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  F_0042c880(this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5280));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a4c7e0 */
uint F_00a4c7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_c;
  char local_6;
  char local_5;
  
  local_c = 0;
  iVar9 = 1;
  iVar6 = param_3;
  if (param_3 == 0) {
    if (*param_1 == 0x30) {
      sVar1 = param_1[1];
      if ((sVar1 == 0x78) || (sVar1 == 0x58)) {
        iVar6 = 0x10;
      }
      else if ((sVar1 == 0x62) || (sVar1 == 0x42)) {
        iVar6 = 2;
      }
      else {
        iVar6 = 8;
      }
    }
    else {
      iVar6 = 10;
    }
  }
  uVar4 = iVar6 + 0x2f;
  uVar3 = uVar4 & 0xff;
  local_5 = '\0';
  local_6 = '\0';
  if (10 < iVar6) {
    local_5 = (char)iVar6 + 'V';
    uVar4 = 0x39;
    local_6 = (char)iVar6 + '6';
    uVar3 = 0x39;
  }
  iVar7 = param_2 + -1;
  if (iVar7 < 0) {
    return 0;
  }
  do {
    uVar2 = param_1[iVar7];
    uVar5 = (uint)uVar2;
    if ((uVar2 < 0x30) || ((int)(char)uVar4 < (int)uVar5)) {
      if (iVar6 < 0xb) {
LAB_00a4c8d8: ;
        if (uVar5 != 0x2d) {
          return local_c;
        }
        return -local_c;
      }
      if ((uVar2 < 0x61) || ((int)local_5 < (int)uVar5)) {
        if ((uVar2 < 0x41) || ((int)local_6 < (int)uVar5)) goto LAB_00a4c8d8;
        iVar8 = uVar5 - 0x37;
      }
      else {
        iVar8 = uVar5 - 0x57;
      }
    }
    else {
      iVar8 = uVar5 - 0x30;
    }
    iVar8 = iVar8 * iVar9;
    iVar9 = iVar9 * iVar6;
    local_c = local_c + iVar8;
    iVar7 = iVar7 + -1;
    uVar4 = uVar3;
    if (iVar7 < 0) {
      return local_c;
    }
  } while( true );
}

/* ref: FUN_00a4c8f0 */
uint F_00a4c8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa4c8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  char * param_5 = (char *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined * puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  char * pcVar7;
  char * pcVar8;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  if (param_3 != (param_3 / 10) * 10) {
    if (param_4 != 5) {
      F_00c472af(((char *)(gen_frame + 0xa8)),0x80,"0x%08X",param_2);
      goto LAB_00a4cd50;
    }
    if (*param_5 != '\0') {
      puVar2 = (undefined *)((int)((int)(uintptr_t)param_2) / param_3);
      iVar4 = (int)(((float10)((int)((int)(uintptr_t)param_2) % param_3) * (float10)REFG(double, 0x10944b8)) / (float10)param_3);
      pcVar7 = "%d%s%d";
override_prt_a4cd48_be99d3cb: ;
      F_00c472af(((char *)(gen_frame + 0xa8)),0x80,pcVar7,puVar2,param_5,iVar4);
      goto LAB_00a4cd50;
    }
    pcVar7 = (char *)(int)((float10)(int)((int)(uintptr_t)param_2) / (float10)param_3);
    pcVar8 = "%d";
    goto LAB_00a4ccfc;
  }
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 1: ;
    pcVar7 = param_2;
    if ((int)param_2 < 0) {
      pcVar7 = ((char *)GEN_TOP(-(int)param_2));
    }
    iVar4 = 0;
    if (0 < (int)pcVar7) {
      do {
        if (7 < iVar4) break;
        pcVar8 = (char *)((int)((int)(uintptr_t)pcVar7) / 1000);
        ((short *)(gen_frame + 0x124))[(int)(iVar4 + 2)] = (short)pcVar7 + (short)pcVar8 * -1000;
        iVar4 = iVar4 + 1;
        pcVar7 = pcVar8;
      } while (0 < (int)pcVar8);
      if (iVar4 != 0) {
        puVar2 = &REFG(undefined, 0x10e52ac);
        if ((int)param_2 >= 0) {
          puVar2 = &REFG(undefined, 0x10e52aa);
        }
        F_00c472af(((char *)(gen_frame + 0xa8)),0x80,&REFG(undefined, 0x10e52b0),puVar2,(int)((short *)(gen_frame + 0x124))[(int)(iVar4 + 1)]);
        for (iVar4 = iVar4 + -2; -1 < iVar4; iVar4 = iVar4 + -1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x88)),0x20,"%s%03d",param_5,(int)((short *)(gen_frame + 0x124))[(int)(iVar4 + 2)]);
          F_00c473c8(((char *)(gen_frame + 0xa8)),0x80,((undefined1 *)(gen_frame + 0x88)));
        }
        goto LAB_00a4cd50;
      }
    }
    pcVar7 = "0";
    break;
  case 2: ;
    bVar5 = (int)param_2 < 0;
    pcVar7 = param_2;
    if (bVar5) {
      pcVar7 = ((char *)GEN_TOP(-(int)param_2));
    }
    for (iVar4 = 0; (0 < (int)pcVar7 && (iVar4 < 8)); iVar4 = iVar4 + 1) {
      uVar3 = (uint)pcVar7 & 0x800003ff;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffc00) + 1;
      }
      ((short *)(gen_frame + 0x124))[(int)(iVar4 + 2)] = (short)uVar3;
      pcVar7 = ((char *)GEN_TOP(((int)(pcVar7 + ((int)((int)(uintptr_t)pcVar7) >> 0x1f & 0x3ff)) >> 10)));
    }
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        puVar2 = &REFG(undefined, 0x10e52c4);
        if (!bVar5) {
          puVar2 = &REFG(undefined, 0x10e52ab);
        }
        F_00c472af(((char *)(gen_frame + 0xa8)),0x80,&REFG(undefined, 0x10e52c8),puVar2,(int)((short *)(gen_frame + 0x124))[2]);
      }
      else {
        puVar2 = &REFG(undefined, 0x10e52d0);
        if (!bVar5) {
          puVar2 = &REFG(undefined, 0x10e52ae);
        }
        F_00c472af(((char *)(gen_frame + 0xa8)),0x80,"%s%d.%d%c",puVar2,(int)((short *)(gen_frame + 0x124))[(int)(iVar4 + 1)],
                   (((short *)(gen_frame + 0x124))[(int)(iVar4)] + 0x33) / 0x66,(int)(char)(&REFG(undefined, 0x10e538e))[(int)(iVar4)]);
      }
      goto LAB_00a4cd50;
    }
    pcVar7 = "0";
    break;
  case 3: ;
    F_00c472af(((char *)(gen_frame + 0xa8)),0x80,&REFG(undefined, 0x10e52e0),(int)((int)(uintptr_t)param_2) % 100);
    goto LAB_00a4cd50;
  case 4: ;
    bVar5 = (int)param_2 < 0;
    pcVar7 = param_2;
    if (bVar5) {
      pcVar7 = ((char *)GEN_TOP(-(int)param_2));
    }
    iVar4 = 0;
    if (0 < (int)pcVar7) {
      do {
        if (7 < iVar4) break;
        pcVar8 = (char *)((int)((int)(uintptr_t)pcVar7) / 0x3c);
        ((short *)(gen_frame + 0x124))[(int)(iVar4 + 2)] = (short)pcVar7 + (short)pcVar8 * -0x3c;
        iVar4 = iVar4 + 1;
        pcVar7 = pcVar8;
      } while (0 < (int)pcVar8);
      if (iVar4 != 0) {
        if (iVar4 != 1) {
          puVar2 = &REFG(undefined, 0x10e5300);
          if (!bVar5) {
            puVar2 = &REFG(undefined, 0x10e52b5);
          }
          F_00c472af(((char *)(gen_frame + 0xa8)),0x80,&REFG(undefined, 0x10e5304),puVar2,(int)((short *)(gen_frame + 0x124))[(int)(iVar4 + 1)]);
          for (iVar4 = iVar4 + -2; -1 < iVar4; iVar4 = iVar4 + -1) {
            F_00c472af(((undefined1 *)(gen_frame + 0x88)),0x20,"%s%02d",param_5,(int)((short *)(gen_frame + 0x124))[(int)(iVar4 + 2)]);
            F_00c473c8(((char *)(gen_frame + 0xa8)),0x80,((undefined1 *)(gen_frame + 0x88)));
          }
          goto LAB_00a4cd50;
        }
        puVar2 = &REFG(undefined, 0x10e52f0);
        if (!bVar5) {
          puVar2 = &REFG(undefined, 0x10e52af);
        }
        iVar4 = (int)((short *)(gen_frame + 0x124))[2];
        pcVar7 = "%s0%s%02d";
        goto override_prt_a4cd48_be99d3cb;
      }
    }
    pcVar8 = "0%s00";
    pcVar7 = param_5;
    goto LAB_00a4ccfc;
  case 5: ;
    if (*param_5 == '\0') {
      F_00c472af(((char *)(gen_frame + 0xa8)),0x80,&REFG(undefined, 0x10e5314),(int)((int)(uintptr_t)param_2) / param_3);
    }
    else {
      fVar6 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_3,3)));
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%%d%%s%%0%dd",(int)fVar6);
      F_00c472af(((char *)(gen_frame + 0xa8)),0x80,((undefined1 *)(gen_frame + 0x8)),(int)((int)(uintptr_t)param_2) / param_3,param_5,(int)((int)(uintptr_t)param_2) % param_3);
    }
    goto LAB_00a4cd50;
  default: ;
    pcVar8 = "%d";
    pcVar7 = param_2;
LAB_00a4ccfc: ;
    F_00c472af(((char *)(gen_frame + 0xa8)),0x80,pcVar8,pcVar7);
    goto LAB_00a4cd50;
  }
  F_00c472af(((char *)(gen_frame + 0xa8)),0x80,pcVar7);
LAB_00a4cd50: ;
  F_0042cc20(param_1,((char *)(gen_frame + 0xa8)),REFG(undefined4, 0x108cc50));
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return (uint)param_1;
}

/* ref: FUN_00a4cda0 */
byte F_00a4cda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4cda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  short sVar2;
  uint uVar3;
  short * psVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = F_0042a970(param_1);
  if (uVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 0;
  }
  (*(uint *)(gen_frame + 0x20)) = 7;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)((char *)&(*(short * PTR32 *)(gen_frame + 0xc)) + 0)) = 0;
  (*(short * PTR32 *)(gen_frame + 0xc)) = ((short *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(short * PTR32 *)(gen_frame + 0xc)) + 2)) << 0x10)));
  F_0042eae0(param_1,&(*(short * PTR32 *)(gen_frame + 0xc)));
  iVar5 = (*(int *)(gen_frame + 0x1c)) + -1;
  uVar3 = 0;
  if (-1 < iVar5) {
    do {
      psVar4 = (*(short * PTR32 *)(gen_frame + 0xc));
      if ((*(uint *)(gen_frame + 0x20)) < 8) {
        psVar4 = (short *)&(*(short * PTR32 *)(gen_frame + 0xc));
      }
      uVar1 = psVar4[iVar5];
      if ((ushort)(uVar1 - 0x30) < 10) {
        if (uVar3 < 10) {
          uVar3 = 10;
        }
      }
      else if ((((uVar1 < 0x61) || (0x66 < uVar1)) && ((uVar1 < 0x41 || (0x46 < uVar1)))) &&
              ((uVar1 != 0x78 && (uVar1 != 0x58)))) {
        if (uVar1 != 0x2d) {
          if (uVar3 != 0) {
            F_00403330(&(*(short * PTR32 *)(gen_frame + 0xc)));
            F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
            return (byte)param_2;
          }
          F_00403330(&(*(short * PTR32 *)(gen_frame + 0xc)));
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return 0;
        }
      }
      else if (uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if (uVar3 == 0x10) {
      if ((*(int *)(gen_frame + 0x1c)) < 2) {
        if (7 < (*(uint *)(gen_frame + 0x20))) {
          F_00429760((*(short * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x20)) * 2 + 2,0x3d);
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return 0;
        }
      }
      else {
        psVar4 = (*(short * PTR32 *)(gen_frame + 0xc));
        if ((*(uint *)(gen_frame + 0x20)) < 8) {
          psVar4 = (short *)&(*(short * PTR32 *)(gen_frame + 0xc));
        }
        sVar2 = psVar4[1];
        psVar4 = (*(short * PTR32 *)(gen_frame + 0xc));
        if ((*(uint *)(gen_frame + 0x20)) < 8) {
          psVar4 = (short *)&(*(short * PTR32 *)(gen_frame + 0xc));
        }
        if ((*psVar4 == 0x30) &&
           ((((sVar2 == 0x78 || (sVar2 == 0x58)) || (sVar2 == 0x62)) || (sVar2 == 0x42))))
        goto LAB_00a4cf36;
        if (7 < (*(uint *)(gen_frame + 0x20))) {
          F_00429760((*(short * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x20)) * 2 + 2,0x3d);
        }
      }
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 0;
    }
  }
LAB_00a4cf36: ;
  if (7 < (*(uint *)(gen_frame + 0x20))) {
    F_00429760((*(short * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x20)) * 2 + 2,0x3d);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_00a4cf70 */
uint F_00a4cf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4cf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * PTR32 * ppuVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  uint uVar4;
  
  ppuVar1 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 7;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar1 & 0xffff0000);
  F_0042eae0(param_1,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  uVar2 = (*(uint *)(gen_frame + 0x20));
  ppuVar1 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  pppuVar3 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 8) {
    pppuVar3 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  uVar4 = F_00a4c7e0(pppuVar3,(*(undefined4 *)(gen_frame + 0x1c)),param_2);
  if (7 < uVar2) {
    F_00429760(ppuVar1,uVar2 * 2 + 2,0x3d);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_00a4cff0 */
uint F_00a4cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4cff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char cVar1;
  byte bVar2;
  undefined4 * PTR32 * PTR32 * pppuVar3;
  char * pcVar4;
  int iVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar7;
  uint uVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  
  pppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (param_3 != 0) {
    uVar8 = 0;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar3 & 0xffffff00);
    if (param_3 != 0) {
      do {
        F_00c472af(((char *)(gen_frame + 0x28)),0x80,
                   "%02X%02X%02X%02X %02X%02X%02X%02X-%02X%02X%02X%02X %02X%02X%02X%02X | ",
                   (uint)*(byte *)(param_2 + uVar8),(uint)*(byte *)(param_2 + 1 + uVar8),
                   (uint)*(byte *)(param_2 + 2 + uVar8),(uint)*(byte *)(param_2 + 3 + uVar8),
                   (uint)*(byte *)(param_2 + 4 + uVar8),(uint)*(byte *)(param_2 + 5 + uVar8),
                   (uint)*(byte *)(param_2 + 6 + uVar8),(uint)*(byte *)(param_2 + 7 + uVar8),
                   (uint)*(byte *)(param_2 + 8 + uVar8),(uint)*(byte *)(param_2 + 9 + uVar8),
                   (uint)*(byte *)(param_2 + 10 + uVar8),(uint)*(byte *)(param_2 + 0xb + uVar8),
                   (uint)*(byte *)(param_2 + 0xc + uVar8),(uint)*(byte *)(param_2 + 0xd + uVar8),
                   (uint)*(byte *)(param_2 + 0xe + uVar8),(uint)*(byte *)(param_2 + 0xf + uVar8));
        pcVar4 = ((char *)(gen_frame + 0x28));
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        F_00a4dd10(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x28)) + 1));
        (*(uint *)(gen_frame + 0x8)) = 0;
        do {
          bVar2 = *(byte *)(param_2 + uVar8 + (*(uint *)(gen_frame + 0x8)));
          if ((bVar2 < 0x20) || (0x7f < bVar2)) {
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            iVar5 = (int)ppppuVar6 + (*(int *)(gen_frame + 0x1c));
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            if (iVar5 != 0) {
              iVar5 = iVar5 - (int)ppppuVar6;
            }
            F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),iVar5,1,0x2e);
          }
          else {
            (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar2);
            ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            ppppuVar7 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
            if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
              ppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
            }
            if ((int)ppppuVar6 + (*(int *)(gen_frame + 0x1c)) == 0) {
              F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,1,(*(undefined4 *)(gen_frame + 0x0)));
            }
            else {
              F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((int)ppppuVar6 + (*(int *)(gen_frame + 0x1c))) - (int)ppppuVar7,1,(*(undefined4 *)(gen_frame + 0x0)));
            }
          }
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        } while ((*(uint *)(gen_frame + 0x8)) < 0x10);
        ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        iVar5 = (int)ppppuVar6 + (*(int *)(gen_frame + 0x1c));
        ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        if (iVar5 != 0) {
          iVar5 = iVar5 - (int)ppppuVar6;
        }
        F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),iVar5,1,10);
        uVar8 = uVar8 + 0x10;
      } while (uVar8 < param_3);
    }
    uVar8 = uVar8 - param_3;
    iVar5 = (uVar8 >> 2) + uVar8 * 2;
    F_00a4dbb0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((*(int *)(gen_frame + 0x1c)) - iVar5) + -0x14,iVar5,iVar5,0x20);
    F_00a4d820(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((*(int *)(gen_frame + 0x1c)) - uVar8) + -1,0xffffffff);
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    iVar5 = (int)ppppuVar6 + (*(int *)(gen_frame + 0x1c));
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    if (iVar5 != 0) {
      iVar5 = iVar5 - (int)ppppuVar6;
    }
    F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),iVar5,1,10);
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    F_0042cc20(param_1,ppppuVar6,REFG(undefined4, 0x108cc50));
    if (0xf < (*(uint *)(gen_frame + 0x20))) {
      F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x34);
    }
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return (uint)param_1;
  }
  F_0042cc20(param_1,&REFG(undefined, 0x10e52b6),REFG(undefined4, 0x108cc50));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)param_1;
}

/* ref: FUN_00a4d300 */
uint F_00a4d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d300u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a970(param_2);
  uVar2 = F_0042a990(param_2);
  F_00a4cff0(param_1,uVar2,uVar1);
  return param_1;
}

/* ref: FUN_00a4d330 */
uint F_00a4d330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4d330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  char * pcVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar2 & 0xffffff00);
  if (param_3 != 0) {
    do {
      F_00c472af(((char *)(gen_frame + 0x28)),0x10,&REFG(undefined, 0x10e5388),(uint)*(byte *)(param_2 + uVar7));
      pcVar3 = ((char *)(gen_frame + 0x28));
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      F_00a4dd10(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar3 - (int)(((char *)(gen_frame + 0x28)) + 1));
      if ((uVar7 & 0xf) == 7) {
        ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        if ((int)ppppuVar4 + (*(int *)(gen_frame + 0x1c)) == 0) {
          uVar8 = 0x20;
          iVar6 = 0;
        }
        else {
          iVar6 = ((int)ppppuVar4 + (*(int *)(gen_frame + 0x1c))) - (int)ppppuVar5;
          uVar8 = 0x20;
        }
LAB_00a4d3f6: ;
        F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),iVar6,1,uVar8);
      }
      else if ((uVar7 & 0xf) == 0xf) {
        ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        iVar6 = (int)ppppuVar4 + (*(int *)(gen_frame + 0x1c));
        ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
          ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
        }
        if (iVar6 != 0) {
          iVar6 = iVar6 - (int)ppppuVar4;
        }
        uVar8 = 10;
        goto LAB_00a4d3f6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
    ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if (0xf < (*(uint *)(gen_frame + 0x20))) goto LAB_00a4d419;
  }
  ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
LAB_00a4d419: ;
  iVar6 = (int)ppppuVar4 + (*(int *)(gen_frame + 0x1c));
  ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
    ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  if (iVar6 != 0) {
    iVar6 = iVar6 - (int)ppppuVar4;
  }
  F_00a4da60(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),iVar6,1,10);
  ppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
    ppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  F_0042cc20(param_1,ppppuVar4,REFG(undefined4, 0x108cc50));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x34);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)param_1;
}

/* ref: FUN_00a4d480 */
uint F_00a4d480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d480u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a970(param_2);
  uVar2 = F_0042a990(param_2);
  F_00a4d330(param_1,uVar2,uVar1);
  return param_1;
}

/* ref: FUN_00a4d520 */
byte F_00a4d520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d520u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00a4d570 */
uint F_00a4d570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x34);
  return (uint)uVar1;
}

/* ref: FUN_00a4d5a0 */
uint F_00a4d5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x34);
  return uVar1;
}

/* ref: FUN_00a4d5d0 */
uint F_00a4d5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d5d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4d600 */
uint F_00a4d600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4d600u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00a4d640 */
uint F_00a4d640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return param_2;
}

/* ref: FUN_00a4d660 */
unsigned int F_00a4d660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4d660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) + 1,0x34);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return 0;
}

/* ref: FUN_00a4d6e0 */
uint F_00a4d6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4d6e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar4 = F_004296a0(uVar5 + 1,0,0x34);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x34);
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

/* ref: FUN_00a4d7a0 */
uint F_00a4d7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4d7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4d7b0 */
uint F_00a4d7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d7b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2;
}

/* ref: FUN_00a4d7c0 */
uint F_00a4d7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4d7c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4d7f0 */
uint F_00a4d7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4d7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x34);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00a4d820 */
uint F_00a4d820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4d820u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00a4d8b0 */
uint F_00a4d8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4d8b0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00a4d6e0(this,param_1,*(undefined4 *)((int)this + 0x10));
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
      F_00429760(uVar2,*(int *)((int)this + 0x14) + 1,0x34);
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

/* ref: FUN_00a4d970 */
uint F_00a4d970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4d970u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      F_00a4d6e0(this,uVar2,iVar1);
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

/* ref: FUN_00a4da60 */
uint F_00a4da60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4da60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      F_00a4d6e0(this,uVar1,uVar2);
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
    F_00a4d600(this,param_1,param_2,param_3);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a4db60 */
uint F_00a4db60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4db60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 == 0) {
    return 0;
  }
  return param_1 - param_2;
}

/* ref: FUN_00a4db80 */
uint F_00a4db80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4db80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a4db90 */
uint F_00a4db90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4db90u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00a4dbb0 */
uint F_00a4dbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa4dbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined * local_8;
  
  uVar5 = *(uint *)((int)this + 0x10);
  if (uVar5 < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = uVar5 - param_1;
  uVar4 = param_2;
  if (uVar2 < param_2) {
    uVar4 = uVar2;
  }
  if (-param_3 - 1 <= uVar5 - uVar4) {
                    
    F_00c4579a("string too long");
  }
  if (param_3 < uVar4) {
    pvVar3 = this;
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar3 + param_3 + param_1,(int)pvVar1 + uVar4 + param_1,uVar2 - uVar4);
  }
  if ((param_3 != 0) || (uVar4 != 0)) {
    uVar5 = (*(int *)((int)this + 0x10) - uVar4) + param_3;
    if (uVar5 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar5) {
      F_00a4d6e0(this,uVar5,*(int *)((int)this + 0x10));
      if (uVar5 == 0) {
        return (uint)this;
      }
    }
    else if (uVar5 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (*(uint *)((int)this + 0x14) < 0x10) {
        *(undefined1 *)this = 0;
        return (uint)this;
      }
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    if (uVar4 < param_3) {
      pvVar1 = this;
      local_8 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        local_8 = *(undefined * PTR32 *)this;
        pvVar1 = *(undefined * PTR32 *)this;
      }
      F_00c46e20((int)local_8 + param_3 + param_1,(int)pvVar1 + uVar4 + param_1,uVar2 - uVar4);
    }
    F_00a4d600(this,param_1,param_3,param_4);
    *(uint *)((int)this + 0x10) = uVar5;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar5) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar5) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00a4dd10 */
uint F_00a4dd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4dd10u, gen_a0, gen_a1, gen_a2, 0u);
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
          uVar2 = F_00a4d970(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar2;
        }
        uVar2 = F_00a4d970(this,this,(int)param_1 - (int)this,param_2);
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
      F_00a4d6e0(this,uVar2,iVar1);
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

/* ref: FUN_00a4de30 */
uint F_00a4de30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4de30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a4de60 */
uint F_00a4de60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4de60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a4de80 */
uint F_00a4de80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4de80u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_00a4dd10(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00a4deb0 */
uint F_00a4deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_00a4da60(this,iVar2,1,param_3);
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  *param_1 = (int)this + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00a4df00 */
uint F_00a4df00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4df00u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = F_00a4da60(this,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_00a4da60(this,0,1,param_1);
  return uVar2;
}

/* ref: FUN_00a4df50 */
byte F_00a4df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4df50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a4df60 */
uint F_00a4df60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4df60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: FUN_00a4df70 */
uint F_00a4df70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4df70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x84) = param_2;
  return param_2;
}

/* ref: FUN_00a4df80 */
uint F_00a4df80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4df80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0xf8);
}

/* ref: FUN_00a4dfa0 */
byte F_00a4dfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4dfa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x90) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x90) = *(byte *)(in_ecx + 0x90) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a4e020 */
float10 F_00a4e020(float gen_a0)
{
  GEN_ENTER(0xa4e020u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a4e040 */
uint F_00a4e040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4e040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006e2b90(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e070 */
uint F_00a4e070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa4e070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006e2be0(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a4e0a0 */
uint F_00a4e0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4e0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006e2c50(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e0d0 */
uint F_00a4e0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa4e0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006f0be0(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00a4e100 */
uint F_00a4e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4e100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006fd010(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e130 */
uint F_00a4e130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4e130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006e2cb0(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e160 */
uint F_00a4e160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa4e160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006e2d00(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  return uVar1;
}

/* ref: FUN_00a4e1a0 */
uint F_00a4e1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa4e1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006d9dd0(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a4e1d0 */
uint F_00a4e1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4e1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_00703700(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e200 */
uint F_00a4e200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa4e200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_006b8c00();
  uVar1 = F_006e2fa0(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00a4e230 */
uint F_00a4e230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa4e230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a83530(&REFG(undefined, 0x14b1258),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00a4e250 */
uint F_00a4e250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d00(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e270 */
uint F_00a4e270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d20(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e290 */
uint F_00a4e290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa4e290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d40(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a4e2c0 */
uint F_00a4e2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d70(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e2e0 */
uint F_00a4e2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4e2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8d90(param_1);
  return uVar1;
}

/* ref: FUN_00a4e300 */
uint F_00a4e300(unsigned int gen_a0)
{
  GEN_ENTER(0xa4e300u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8db0(param_1);
  return uVar1;
}

/* ref: FUN_00a4e320 */
uint F_00a4e320(unsigned int gen_a0)
{
  GEN_ENTER(0xa4e320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_006b8c00();
  uVar1 = F_006b8dd0(param_1);
  return uVar1;
}

/* ref: FUN_00a4e340 */
uint F_00a4e340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4e340u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  uint uVar1;
  undefined * this;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  if (in_ecx == (int *)0x0) {
    F_00c472af(((char *)(gen_frame + 0xb4)),0x72,"Unknown : entity_id=%u");
  }
  else {
    uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0xc))(param_3);
    F_00c472af(((char *)(gen_frame + 0xb4)),0x72,"%s : entity_id=%u",uVar1);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x60)),((char *)(gen_frame + 0xb4)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10e5397),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x60));
  puVar4 = ((undefined1 *)(gen_frame + 0xc));
  uVar3 = 1;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
  F_00459b00(this,uVar3,puVar4,puVar5,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return (uint)uVar2;
}

/* ref: FUN_00a4e400 */
uint F_00a4e400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a64000(&REFG(undefined, 0x14a9a18),(uint)*param_2,*(undefined4 *)(param_2 + 4));
  return uVar1;
}

/* ref: FUN_00a4e420 */
unsigned int F_00a4e420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  F_00a63f80(&REFG(undefined, 0x14a9a18),(uint)*param_2);
  return 0;
}

/* ref: FUN_00a4e440 */
uint F_00a4e440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e440u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    cVar1 = *(char *)((int)pvVar2 + 0x166c);
    *(undefined4 *)((int)pvVar2 + 0x166c) = param_2[2];
    *(undefined2 *)((int)pvVar2 + 0x1670) = *(undefined2 *)(param_2 + 3);
    uVar3 = F_00aa1cc0(pvVar2,*param_2,param_2[1]);
    if ((cVar1 == '\0') && (REFG(void * PTR32, 0x1379694) == pvVar2)) {
      pvVar2 = (undefined *)F_006b8c00();
      uVar3 = F_006df000(pvVar2);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00a4e4b0 */
uint F_00a4e4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xd4))))(REFG(int * PTR32, 0x1379694));
    in_EAX = 0;
    if (uVar2 != 0) {
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1)));
      in_EAX = F_00b7ba00(this,param_2);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a4e4f0 */
uint F_00a4e4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab1510(&REFG(undefined4, 0x14bcc80),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e510 */
uint F_00a4e510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e510u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ac9b30(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4e520 */
uint F_00a4e520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e520u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x4d0];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x4bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c0);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 0xe);
  uVar1 = *(undefined4 *)(param_2 + 8);
  (*(undefined2 *)(gen_frame + 0x10)) = *param_2;
  (*(undefined1 *)(gen_frame + 0x12)) = *(undefined1 *)(param_2 + 1);
  (*(undefined1 *)(gen_frame + 0x13)) = *(undefined1 *)((int)param_2 + 3);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 2);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_2 + 6);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + 4);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
  (*(undefined1 *)(gen_frame + 0x26)) = 1;
  puVar5 = (undefined4 *)(param_2 + 0x12);
  puVar6 = ((undefined4 *)(gen_frame + 0x2c));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  (*(undefined4 *)(gen_frame + 0x430)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x434)) = *(undefined4 *)(param_2 + 0xe);
  (*(undefined4 *)(gen_frame + 0x4b0)) = 0;
  (*(undefined2 *)(gen_frame + 0x4b4)) = 0;
  (*(undefined2 *)(gen_frame + 0x24)) = param_2[10];
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(param_2 + 0x10);
  uVar3 = F_00ac9b30(param_1,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x4bc)) ^ (uint)(uint)(gen_frame + 0x4c0));
  return uVar3;
}

/* ref: FUN_00a4e610 */
uint F_00a4e610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(param_2 + 8));
  if ((pvVar2 != (undefined *)0x0) &&
     (pvVar2 = (undefined *)F_00a37da0(pvVar2,(uint)*(ushort *)(param_2 + 10)), pvVar2 != (undefined *)0x0))
  {
    (*(undefined4 *)(gen_frame + 0x8)) = 9999;
    (*(undefined2 *)(gen_frame + 0xc)) = 0;
    (*(undefined1 *)(gen_frame + 0xe)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined1 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0x75300000;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined2 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x32)) = 0;
    (*(undefined2 *)(gen_frame + 0x36)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined1 *)(gen_frame + 0x40)) = 0;
    F_00a3bd60(&(*(undefined4 *)(gen_frame + 0x8)),pvVar2);
    F_00a35f30(pvVar2);
    F_00a35ee0(pvVar2,*(undefined4 *)(param_2 + 0x10),1);
    F_00a35f80(pvVar2,*(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)((int)pvVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((int)pvVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)((int)pvVar2 + 0x14) = *(undefined1 *)(param_2 + 0x20);
    *(undefined2 *)((int)pvVar2 + 0x12) = *(undefined2 *)(param_2 + 0x22);
    *(undefined2 *)((int)pvVar2 + 0x10) = *(undefined2 *)(param_2 + 0x24);
    *(undefined1 *)((int)pvVar2 + 0x2f) = *(undefined1 *)(param_2 + 0x26);
    *(undefined4 *)((int)pvVar2 + 0x30) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((int)pvVar2 + 0x20) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)((int)pvVar2 + 0x24) = *(undefined4 *)(param_2 + 0x30);
    *(undefined2 *)((int)pvVar2 + 0x28) = *(undefined2 *)(param_2 + 0x34);
    *(undefined4 *)((int)pvVar2 + 0x2a) = *(undefined4 *)(param_2 + 0x36);
    *(undefined1 *)((int)pvVar2 + 0x2e) = *(undefined1 *)(param_2 + 0x3a);
    *(undefined4 *)((int)pvVar2 + 0x34) = *(undefined4 *)(param_2 + 0x3b);
    *(undefined1 *)((int)pvVar2 + 0x38) = *(undefined1 *)(param_2 + 0x3f);
    uVar3 = F_00a3eb60(pvVar2,&(*(undefined4 *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      F_00a42ea0(&REFG(undefined, 0x14a4230),pvVar2,&(*(undefined4 *)(gen_frame + 0x8)),uVar3);
    }
    F_00a376a0(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(param_2 + 8),(uint)*(ushort *)(param_2 + 10));
    F_00ab24a0(*(undefined4 *)(param_2 + 0x10));
  }
  F_00a3a720();
  bVar1 = F_00a366d0((uint)*(ushort *)(param_2 + 8));
  if (bVar1 != 0) {
    *(undefined4 *)&REFG(undefined, 0x14a7228) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a4e7a0 */
uint F_00a4e7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(param_2 + 8));
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1,(uint)*(ushort *)(param_2 + 10));
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      F_00a35f30(pvVar1);
      F_00a35ee0(pvVar1,*(undefined4 *)(param_2 + 0x10),1);
      F_00a35f80(pvVar1,*(undefined4 *)(param_2 + 0xc));
      *(undefined4 *)((int)pvVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)((int)pvVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined1 *)((int)pvVar1 + 0x14) = *(undefined1 *)(param_2 + 0x20);
      *(undefined2 *)((int)pvVar1 + 0x12) = *(undefined2 *)(param_2 + 0x22);
      *(undefined2 *)((int)pvVar1 + 0x10) = *(undefined2 *)(param_2 + 0x24);
      *(undefined1 *)((int)pvVar1 + 0x2f) = *(undefined1 *)(param_2 + 0x26);
      *(undefined4 *)((int)pvVar1 + 0x30) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)((int)pvVar1 + 0x20) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)((int)pvVar1 + 0x24) = *(undefined4 *)(param_2 + 0x30);
      *(undefined2 *)((int)pvVar1 + 0x28) = *(undefined2 *)(param_2 + 0x34);
      *(undefined4 *)((int)pvVar1 + 0x2a) = *(undefined4 *)(param_2 + 0x36);
      *(undefined1 *)((int)pvVar1 + 0x2e) = *(undefined1 *)(param_2 + 0x3a);
      *(undefined4 *)((int)pvVar1 + 0x34) = *(undefined4 *)(param_2 + 0x3b);
      *(undefined1 *)((int)pvVar1 + 0x38) = *(undefined1 *)(param_2 + 0x3f);
      uVar2 = F_00ab24a0(*(undefined4 *)(param_2 + 0x10));
    }
  }
  return uVar2;
}

/* ref: FUN_00a4e870 */
uint F_00a4e870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(param_2 + 4));
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1,(uint)*(ushort *)(param_2 + 6));
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      F_00a35f30(pvVar1);
      F_00a35ee0(pvVar1,*(undefined4 *)(param_2 + 0x10),1);
      F_00a35f80(pvVar1,*(undefined4 *)(param_2 + 8));
      uVar2 = F_00ab24a0(*(undefined4 *)(param_2 + 0x10));
    }
  }
  return uVar2;
}

/* ref: FUN_00a4e8d0 */
uint F_00a4e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * pvVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  undefined4 * this_00;
  undefined * this_01;
  
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(param_2 + 4));
  this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(param_2 + 0xc));
  this_01 = (undefined *)0x0;
  this_00 = (undefined4 *)0x0;
  if (pvVar1 != (undefined *)0x0) {
    this_01 = (undefined *)F_00a37da0(pvVar1,(uint)*(ushort *)(param_2 + 6));
  }
  if (this != (undefined *)0x0) {
    this_00 = (undefined4 *)F_00a37da0(this,(uint)*(ushort *)(param_2 + 0xe));
  }
  if ((this_01 != (undefined *)0x0) && (this_00 != (undefined4 *)0x0)) {
    F_00a35f30(this_01);
    F_00a35f80(this_01,*(undefined4 *)(param_2 + 8));
    *(undefined1 *)((int)this_01 + 6) = 1;
    F_00a3be70(this_01,*this_00,(uint)*(ushort *)(this_00 + 1));
    if (*(char *)((int)this_00 + 6) != '\0') {
      pvVar1 = (undefined *)F_00a3a860(this_00);
      uVar2 = F_0046e5e0(pvVar1);
      uVar2 = F_00ab24a0(uVar2);
      return uVar2;
    }
    iVar3 = this_00[2];
    if ((*(byte *)(this_00 + 5) & 1) != 0) {
      iVar3 = iVar3 + 1000000;
    }
    this_00 = (undefined4 *)F_00ab24a0(iVar3);
  }
  return (uint)this_00;
}

/* ref: FUN_00a4e9a0 */
uint F_00a4e9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab56a0(&REFG(undefined4, 0x14bcc80),param_2);
  return uVar1;
}

/* ref: FUN_00a4e9c0 */
uint F_00a4e9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4e9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  
  uVar1 = (uint)*param_2;
  iVar2 = 0;
  REFG(undefined4, 0x14aa744) = uVar1;
  if (*param_2 != 0) {
    pbVar3 = param_2 + 4;
    puVar4 = &REFG(undefined4, 0x14a9e88);
    do {
      puVar4[-1] = *(undefined4 *)pbVar3;
      *puVar4 = *(undefined4 *)(pbVar3 + 4);
      uVar1 = F_00aadfc0(&REFG(undefined, 0x14b5ef0),*(undefined4 *)pbVar3);
      F_00c49908(puVar4 + -0x11,0x40,uVar1);
      uVar1 = (uint)*param_2;
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 8;
      puVar4 = puVar4 + 0x12;
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a4ea20 */
uint F_00a4ea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4ea20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar1 = (uint)*param_2;
  iVar2 = 0;
  REFG(undefined4, 0x14ab04c) = uVar1;
  if (*param_2 != 0) {
    puVar3 = (uint *)(param_2 + 4);
    puVar4 = &REFG(undefined4, 0x14aa790);
    do {
      puVar4[-1] = *puVar3;
      *puVar4 = (uint)(byte)puVar3[1];
      uVar1 = F_00aadfc0(&REFG(undefined, 0x14b5ef0),*puVar3);
      F_00c49908(puVar4 + -0x11,0x40,uVar1);
      uVar1 = (uint)*param_2;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 0x12;
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00a4ea80 */
uint F_00a4ea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4ea80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  F_00ae3900(&REFG(undefined, 0x14c0878),*param_2,0,0,(uint)*(byte *)((int)param_2 + 0xe));
  this = (int *)F_00ae1300(&REFG(undefined, 0x14c0878),(uint)*(byte *)((int)param_2 + 0xe));
  uVar2 = 0;
  if (this != (int *)0x0) {
    F_00a5f570(this,(uint)*(byte *)((int)param_2 + 0x12));
    this[0x79] = (uint)*(byte *)(param_2 + 4);
    *(undefined1 *)((int)this + 0x1e2) = *(undefined1 *)((int)param_2 + 0x13);
    this[0x61] = param_2[5];
    F_00ae2700(this,GEN_TOF(gen_bits2f(param_2[6])));
    this[99] = param_2[7];
    F_00a5f530(this,param_2[8]);
    this[0x7b] = (uint)*(byte *)(param_2 + 9);
    if (*(char *)((int)param_2 + 0xf) != '\0') {
      F_00ae1700(this);
      this[0x74] = (uint)*(byte *)((int)param_2 + 0x11);
      (*(float *)(gen_frame + 0x1c)) = 0.0;
      if (*(char *)((int)param_2 + 0x11) != '\0') {
        (*(int * PTR32 *)(gen_frame + 0x18)) = param_2 + 0xb;
        do {
          piVar1 = (int *)F_00ae1540(this,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))));
          *piVar1 = *(*(int * PTR32 *)(gen_frame + 0x18));
          (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
          uVar2 = (int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) + 1;
          (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar2);
        } while (uVar2 < *(byte *)((int)param_2 + 0x11));
      }
    }
    puVar3 = (undefined4 *)F_00a5feb0(this);
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
    F_00af2610(&(*(undefined4 *)(gen_frame + 0x0)),*(float *)&REFG(undefined, 0x10e5c58),GEN_TOF(gen_bits2f(this[0x30])),&(*(undefined4 *)(gen_frame + 0x4)),REFG(float, 0x1090708),0,0
                 ,0,0,0,0,0,3,0);
    ((code *)*(gen_code32 *)(*this + 0x3c))(this,&(*(undefined4 *)(gen_frame + 0x0)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(uint)*(ushort *)(param_2 + 3);
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(uint)*(ushort *)((int)param_2 + 0x2a);
    fVar4 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)*(ushort *)(param_2 + 3) *
                       (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                       (float10)REFG(double, 0x109cab0))) * fVar4 - (float10)*(double *)&REFG(undefined, 0x1080228))));
    fVar5 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    fVar6 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(ushort *)((int)param_2 + 0x2a) * fVar5) * fVar4 - fVar6))))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(uint)*(ushort *)(param_2 + 10);
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(ushort *)(param_2 + 10) * fVar5) * fVar4 - fVar6))))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(uint)*(ushort *)((int)param_2 + 0x26);
    (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(ushort *)((int)param_2 + 0x26) * fVar5) * fVar4 - fVar6))))));
    ((code *)*(gen_code32 *)(*this + 0x40))(this);
    ((code *)*(gen_code32 *)(*this + 0x48))(this,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))));
    F_00a5f450(this,param_2[1]);
    F_00a5f430(this,param_2[2]);
    this[0x20] = *param_2;
    uVar2 = F_00ae1930(this);
  }
  return uVar2;
}

/* ref: FUN_00a4ecc0 */
uint F_00a4ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ae1300(&REFG(undefined, 0x14c0878),(uint)*param_2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00ae24a0(&REFG(undefined, 0x14c0878),(uint)*param_2);
  }
  return uVar2;
}

/* ref: FUN_00a4ecf0 */
uint F_00a4ecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4ecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = 0;
  uVar1 = F_00aafcd0();
  if (uVar1 != 0) {
    do {
      uVar1 = F_00ab2290(uVar2);
      if (*(char *)(uVar1 + 0x25) != -1) {
        F_00a68530(&REFG(undefined1, 0x14ab070),uVar2,*((undefined4 *)GEN_TOP((param_2 + *(char *)(uVar1 + 0x25) * 4))));
      }
      uVar2 = uVar2 + 1;
      uVar1 = F_00aafcd0();
    } while (uVar2 < uVar1);
  }
  uVar1 = 0;
  puVar3 = (undefined4 *)(param_2 + 0xa0);
  do {
    uVar1 = uVar1 + 1;
    F_00a684f0(&REFG(undefined1, 0x14ab070),uVar1,*puVar3);
    puVar3 = puVar3 + 1;
  } while (uVar1 < 6);
  return uVar1;
}

/* ref: FUN_00a4ed60 */
uint F_00a4ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4ed60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this;
  uint uVar2;
  
  uVar2 = (uint)(REFG(undefined1, 0x14ab0d4) != *param_2);
  uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*param_2,0);
  if (((short)uVar1 != *(short *)(param_2 + 2)) ||
     (uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*param_2,1), (short)uVar1 != *(short *)(param_2 + 4))
     ) {
    uVar2 = uVar2 | 2;
  }
  F_00a7e4e0(&REFG(undefined1, 0x14ab070),(uint)*param_2);
  F_00a7e510(&REFG(undefined1, 0x14ab070),(uint)*param_2,(uint)*(ushort *)(param_2 + 2));
  F_00a7e5a0(&REFG(undefined1, 0x14ab070),(uint)*(ushort *)(param_2 + 4));
  F_00a68400(&REFG(undefined1, 0x14ab070),(uint)*param_2,*(undefined4 *)(param_2 + 8));
  *(undefined4 *)&REFG(undefined, 0x14ab2c4) = *(undefined4 *)(param_2 + 0xc);
  if ((uVar2 & 2) != 0) {
    F_00a6e6a0(&REFG(undefined, 0x14a9e40));
  }
  this = (undefined *)F_006b8c00();
  uVar1 = F_006de4e0(this,uVar2);
  return uVar1;
}

/* ref: FUN_00a4ee20 */
uint F_00a4ee20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4ee20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint in_EAX = 0;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  undefined * this;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort * puVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  int local_1c;
  uint local_c;
  uint local_8;
  
  if (REFG(int, 0x1379c70) != 3) {
    piVar5 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
    uVar2 = 0;
    uVar1 = 0;
    uVar4 = 0;
    uVar3 = 0;
    local_c = 0;
    local_8 = 0;
    uVar6 = F_00ab21a0((uint)*(byte *)((int)param_2 + 9));
    if (*(int *)(uVar6 + 0x10) == 0x20) {
      uVar3 = *(undefined2 *)(param_2 + 4);
      uVar4 = *(undefined2 *)(param_2 + 6);
    }
    else if (*(int *)(uVar6 + 0x10) == 0x21) {
      uVar1 = *(undefined2 *)(param_2 + 4);
      uVar2 = *(undefined2 *)(param_2 + 6);
    }
    else {
      local_8 = (uint)*(ushort *)(param_2 + 4);
      local_c = (uint)*(ushort *)(param_2 + 6);
    }
    if (piVar5 != (int *)0x0) {
      piVar7 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
      if (piVar7 != (int *)0x0) {
        uVar6 = (uint)*(byte *)(param_2 + 2);
        uVar15 = *param_2;
        this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0xdc))(piVar7)));
        uVar6 = F_00ac3bb0(this,uVar15,uVar6);
        if (uVar6 != 0) {
          if (*(int *)(uVar6 + 0x14) == param_1) {
            *(undefined1 *)(uVar6 + 0x18) = 1;
          }
          if (*(int *)(uVar6 + 0x3c) == param_1) {
            *(undefined1 *)(uVar6 + 0x40) = 1;
          }
        }
      }
      *(undefined1 *)(piVar5 + 0x5a2) = *(undefined1 *)((int)param_2 + 9);
      piVar5[0x5a4] = param_2[3];
      piVar5[0x5a5] = param_2[5];
      piVar5[0x5a6] = local_8;
      *(undefined2 *)((int)piVar5 + 0x16a2) = uVar3;
      piVar5[0x5a7] = local_c;
      *(undefined2 *)(piVar5 + 0x5a9) = uVar4;
      *(undefined2 *)((int)piVar5 + 0x16a6) = uVar1;
      *(undefined2 *)(piVar5 + 0x5aa) = uVar2;
      *(undefined2 *)(piVar5 + 0x5a8) = *(undefined2 *)((int)param_2 + 0x12);
      local_1c = 0;
      if (*(char *)((int)param_2 + 0x1a) != '\0') {
        puVar12 = (ushort *)(param_2 + 8);
        do {
          uVar15 = *(undefined4 *)(puVar12 + 4);
          uVar6 = (uint)*puVar12;
          uVar10 = (uint)puVar12[-1];
          fVar14 = *(float *)(puVar12 + 2);
          uVar11 = (uint)(byte)puVar12[-2];
          uVar8 = ((code *)*(gen_code32 *)(*piVar5 + 0xd4))(piVar5);
          if (uVar8 != 0) {
            uVar8 = ((code *)*(gen_code32 *)(*piVar5 + 0xd4))(piVar5);
            F_00b7b840(uVar8,uVar11,uVar10,fVar14,uVar6,uVar15);
          }
          local_1c = local_1c + 1;
          puVar12 = puVar12 + 8;
        } while (local_1c < (int)(uint)*(byte *)((int)param_2 + 0x1a));
      }
    }
    uVar6 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
    if (uVar6 != 0) {
      *(undefined1 *)(uVar6 + 0x51) = *(undefined1 *)((int)param_2 + 9);
      *(undefined4 *)(uVar6 + 0x58) = param_2[3];
      *(undefined4 *)(uVar6 + 0x5c) = param_2[5];
      *(undefined2 *)(uVar6 + 0x60) = (undefined2)local_8;
      *(undefined2 *)(uVar6 + 0x62) = (undefined2)local_c;
      iVar13 = 0;
      *(undefined2 *)(uVar6 + 100) = *(undefined2 *)((int)param_2 + 0x12);
      if (*(char *)((int)param_2 + 0x1a) != '\0') {
        puVar12 = (ushort *)(param_2 + 8);
        do {
          F_00b7b840(uVar6 + 0x6c,(uint)(byte)puVar12[-2],(uint)puVar12[-1],
                       *(float *)(puVar12 + 2),(uint)*puVar12,*(undefined4 *)(puVar12 + 4));
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 8;
        } while (iVar13 < (int)(uint)*(byte *)((int)param_2 + 0x1a));
      }
    }
    in_EAX = F_00ae0880(&REFG(undefined, 0x1336e40),param_1);
    if (in_EAX != 0) {
      *(undefined4 *)(in_EAX + 0x20c) = param_2[3];
      iVar13 = 0;
      *(undefined4 *)(in_EAX + 0x210) = param_2[5];
      if (*(char *)((int)param_2 + 0x1a) != '\0') {
        iVar9 = in_EAX + 0x214;
        puVar12 = (ushort *)(param_2 + 8);
        do {
          in_EAX = F_00b7b840(iVar9,(uint)(byte)puVar12[-2],(uint)puVar12[-1],
                                *(float *)(puVar12 + 2),(uint)*puVar12,*(undefined4 *)(puVar12 + 4))
          ;
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 8;
        } while (iVar13 < (int)(uint)*(byte *)((int)param_2 + 0x1a));
      }
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = param_2[3];
      in_EAX = param_2[5];
      iVar13 = 0;
      REFG(undefined4, 0x14ab5c4) = in_EAX;
      if (*(char *)((int)param_2 + 0x1a) != '\0') {
        puVar12 = (ushort *)(param_2 + 8);
        do {
          in_EAX = F_00b7b840(&REFG(undefined, 0x14ab5c8),(uint)(byte)puVar12[-2],(uint)puVar12[-1],
                                *(float *)(puVar12 + 2),(uint)*puVar12,*(undefined4 *)(puVar12 + 4))
          ;
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 8;
        } while (iVar13 < (int)(uint)*(byte *)((int)param_2 + 0x1a));
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a4f110 */
uint F_00a4f110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x196) = *param_2;
    *(undefined4 *)(uVar1 + 0x198) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(uVar1 + 0x19c) = *(undefined4 *)(param_2 + 0xc);
  }
  return uVar1;
}

/* ref: FUN_00a4f150 */
uint F_00a4f150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  undefined * this;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  this = (undefined *)F_006b8c00();
  uVar2 = F_006d9ec0(this);
  cVar1 = (char)uVar2;
  uVar4 = 9;
  bVar3 = 2;
  do {
    if (uVar4 == 0xf) {
      if (cVar1 == '\0') {
LAB_00a4f187: ;
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),uVar4,
                             (uint)((*((byte *)GEN_TOP(((uVar4 >> 3) + param_2))) & bVar3) != 0));
      }
    }
    else if ((uVar4 != 0x20) && (uVar4 != 0x29)) goto LAB_00a4f187;
    uVar4 = uVar4 + 1;
    bVar3 = bVar3 << 1 | (char)bVar3 < '\0';
    if (0x2d < (int)uVar4) {
      return uVar2;
    }
  } while( true );
}

/* ref: FUN_00a4f1b0 */
uint F_00a4f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_00aa9680(this,param_2);
  }
  return uVar1;
}

/* ref: FUN_00a4f1e0 */
uint F_00a4f1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = F_00ac2fe0(&REFG(undefined, 0x14bcf40),iVar2,*(float *)(param_2 + iVar2 * 4),
                         *(float *)(param_2 + 0x140 + iVar2 * 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x50);
  return uVar1;
}

/* ref: FUN_00a4f220 */
uint F_00a4f220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  ushort uVar1;
  undefined * this;
  uint uVar2;
  ushort * puVar3;
  
  this = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(param_2 + 8));
  uVar2 = 0;
  if (this != (undefined *)0x0) {
    puVar3 = param_2 + 0x1a;
    do {
      uVar1 = *puVar3;
      puVar3 = (ushort *)((int)puVar3 + 1);
    } while ((char)uVar1 != '\0');
    uVar2 = F_00aa5d80(this,(int)puVar3 - ((int)param_2 + 0x35),(uint)*param_2);
  }
  return uVar2;
}

/* ref: FUN_00a4f260 */
uint F_00a4f260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a42060(&REFG(undefined, 0x14a4230),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4f280 */
uint F_00a4f280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a49910(&REFG(undefined, 0x14a4230),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4f2a0 */
uint F_00a4f2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a63700(&REFG(undefined, 0x14a9728),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4f2c0 */
uint F_00a4f2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ae19a0((undefined4)gen_fl2bits(param_2[4]));
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00ae1740(uVar1,*param_2,(undefined4)gen_fl2bits(param_2[1]),param_2[2]);
    uVar2 = F_00ab96d0((undefined4)gen_fl2bits(param_2[5]));
  }
  return uVar2;
}

/* ref: FUN_00a4f310 */
uint F_00a4f310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae3af0(&REFG(undefined * PTR32, 0x1338d48),param_2);
  return uVar1;
}

/* ref: FUN_00a4f330 */
uint F_00a4f330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_2 + 2))) {
  case 0: ;
    uVar1 = F_00ae2e60(&REFG(undefined * PTR32, 0x1338d48),*param_2,param_2[1],1,
                         (uint)*(byte *)((int)param_2 + 9));
    return uVar1;
  case 1: ;
    uVar1 = F_00ae2e60(&REFG(undefined * PTR32, 0x1338d48),*param_2,param_2[1],2,
                         (uint)*(byte *)((int)param_2 + 9));
    return uVar1;
  case 3: ;
    uVar1 = F_00ae2e60(&REFG(undefined * PTR32, 0x1338d48),*param_2,param_2[1],4,
                         (uint)*(byte *)((int)param_2 + 9));
    return uVar1;
  case 4: ;
    uVar1 = F_00ab9000(0x4d7);
    return uVar1;
  case 5: ;
    uVar1 = F_00ab9000(0x4d8);
    return uVar1;
  case 7: ;
    uVar1 = F_00ab9000(0x4d9);
    return uVar1;
  case 8: ;
    uVar1 = F_00ab9000(0x4e4);
    return uVar1;
  case 9: ;
    uVar1 = F_00ab9000(0x4dc);
    return uVar1;
  case 10: ;
    uVar1 = F_00ab9000(0x4db);
    return uVar1;
  case 0xb: ;
    uVar1 = F_00ab9000(0x4da);
    return uVar1;
  case 0x10: ;
    uVar1 = F_00ab9000(0x4e3);
    return uVar1;
  case 0x12: ;
    puVar2 = (undefined4 *)F_00ab9000(0x4e5);
  }
  return (uint)puVar2;
}

/* ref: FUN_00a4f470 */
uint F_00a4f470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint in_ecx;
  ulonglong uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10e5471),REFG(undefined4, 0x108cc50));
  in_ecx = F_00ae19a0(*param_2);
  if (in_ecx == 0) goto switchD_00a4f4bc_default;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_2 + 1))) {
  case 0: ;
    F_00ab9000(0x4e1);
    break;
  case 1: ;
    F_00ab9000(0x4de);
    break;
  case 2: ;
    F_00ab97e0(param_2[2]);
    break;
  case 3: ;
    iVar2 = param_2[2] + 400;
    goto LAB_00a4f549;
  case 4: ;
    if (param_2[2] == 0x18) {
      iVar2 = 0x4d8;
    }
    else {
      if (param_2[2] != 0x1b) break;
      iVar2 = 0x4d9;
    }
LAB_00a4f549: ;
    F_00a7d290(iVar2,0,0,0,0,REFG(float, 0x10916ec));
    break;
  default: ;
    goto switchD_00a4f4bc_default;
  }
  *(undefined4 *)(in_ecx + 0x184) = param_2[3];
  F_00ae2700(in_ecx,GEN_TOF(gen_bits2f(param_2[4])));
  *(undefined4 *)(in_ecx + 0x18c) = param_2[5];
switchD_00a4f4bc_default: ;
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar1;
}

/* ref: FUN_00a4f5a0 */
uint F_00a4f5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab9cf0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a4f5b0 */
uint F_00a4f5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae2a20(&REFG(undefined * PTR32, 0x1338d48),*param_2,param_2[1]);
  return uVar1;
}

/* ref: FUN_00a4f5d0 */
uint F_00a4f5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ae1a20(param_2);
  return uVar1;
}

/* ref: FUN_00a4f5f0 */
uint F_00a4f5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f5f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint in_ecx;
  
  in_ecx = F_00ae19a0(param_1);
  if (in_ecx != 0) {
    F_00ae1910(in_ecx);
    return in_ecx;
  }
  return 0;
}

/* ref: FUN_00a4f610 */
uint F_00a4f610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort uVar1;
  uint uVar2;
  undefined2 extraout_var = 0;
  uint uVar3;
  
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar1 = F_00b76c70(uVar2 + 0x1340,param_2);
    uVar3 = CONCAT22(extraout_var,uVar1);
  }
  return uVar3;
}

/* ref: FUN_00a4f640 */
uint F_00a4f640(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f640u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b7c0a0(&REFG(undefined, 0x133e5c0),param_1);
  return uVar1;
}

/* ref: FUN_00a4f660 */
uint F_00a4f660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab91b0(&REFG(undefined, 0x14b5268),(uint)*param_2,*(undefined4 *)(param_2 + 4));
  return uVar1;
}

/* ref: FUN_00a4f680 */
uint F_00a4f680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  if ((uVar1 != 0) && (uVar1 == REFG(undefined4, 0x1379694))) {
    uVar1 = F_00a6a9c0(&REFG(undefined, 0x14b29c0),param_2);
  }
  return uVar1;
}

/* ref: FUN_00a4f6b0 */
uint F_00a4f6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4f6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort * puVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  iVar7 = 0;
  puVar8 = (ushort *)(param_2 + 4);
  do {
    uVar1 = puVar8[-1];
    fVar9 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    uVar2 = *puVar8;
    fVar11 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    uVar3 = puVar8[1];
    uVar5 = F_00ae0850(&REFG(undefined, 0x1336e40),iVar7);
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar4 = puVar8[-2];
      uVar6 = F_00ae0850(&REFG(undefined, 0x1336e40),iVar7);
      *(bool *)(uVar6 + 0x1e0) = (char)uVar4 != '\0';
      uVar6 = F_00ae0850(&REFG(undefined, 0x1336e40),iVar7);
      *(float *)(uVar6 + 0x1f0) = ((float)GEN_TOF((((float10)uVar1 * fVar9) * fVar10 - fVar11)));
      *(float *)(uVar6 + 500) = ((float)GEN_TOF((((float10)uVar2 * fVar9) * fVar10 - fVar11)));
      *(float *)(uVar6 + 0x1f8) = ((float)GEN_TOF((((float10)uVar3 * fVar9) * fVar10 - fVar11)));
    }
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 4;
  } while (iVar7 < 8);
  return uVar6;
}

/* ref: FUN_00a4f7a0 */
uint F_00a4f7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f7a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0053c0b0(&REFG(undefined, 0x1305d00),*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00a4f7c0 */
uint F_00a4f7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = *param_1;
  uVar3 = F_00b070f0();
  uVar3 = F_00b07230((undefined *)(uVar3 + 0x10),uVar2,(uint)uVar1);
  return uVar3;
}

/* ref: FUN_00a4f7f0 */
uint F_00a4f7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*param_1);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_00aa1760(this,(uint)*(byte *)(param_1 + 1));
  }
  return uVar1;
}

/* ref: FUN_00a4f820 */
uint F_00a4f820(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f820u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ae3500(&REFG(undefined * PTR32, 0x1338d48),param_1);
  return uVar1;
}

/* ref: FUN_00a4f840 */
uint F_00a4f840(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a6af20(&REFG(undefined, 0x14ab440),param_1);
  return uVar1;
}

/* ref: FUN_00a4f860 */
uint F_00a4f860(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a6b070(&REFG(undefined, 0x14ab464),param_1,param_1 + 0x100);
  return uVar1;
}

/* ref: FUN_00a4f880 */
uint F_00a4f880(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f880u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = param_1;
  if (*param_1 == '\0') {
    pcVar1 = (char *)F_00a7ed80(&REFG(undefined, 0x14ab584),param_1 + 1);
  }
  return (uint)pcVar1;
}

/* ref: FUN_00a4f8a0 */
uint F_00a4f8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f8a0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar3 = *(ushort *)(param_1 + 4);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(param_1 + 2));
  uVar4 = *(ushort *)(param_1 + 6);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar3);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  uVar5 = *(ushort *)(param_1 + 8);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)*(ushort *)(param_1 + 2) * fVar8) * fVar9 - fVar10)));
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar4);
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar3 * fVar8) * fVar9 - fVar10)));
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(param_1 + 10));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((float10)uVar4 * fVar8) * fVar9 - fVar10)));
  fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_1 + 10) / (float10)*(double *)&REFG(undefined, 0x1088118))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar5);
  fVar2 = ((float)GEN_TOF((((float10)uVar5 *
                  (((float10)*(double *)&REFG(undefined, 0x1088118) * (float10)*(float *)&REFG(undefined, 0x1334840)) /
                  (float10)REFG(double, 0x109cab0))) * fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228))));
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  F_00ac3a00(&REFG(undefined, 0x14bcf40),(uint)*param_1,&(*(float *)(gen_frame + 0x0)),fVar2,fVar1,uVar6);
  uVar7 = F_00a6fbc0(&REFG(undefined, 0x14ab740),1,1);
  return uVar7;
}

/* ref: FUN_00a4f990 */
uint F_00a4f990(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
  F_00c48350((undefined *)((int)this + 8),0,0x48);
  return (uint)this;
}

/* ref: FUN_00a4fa10 */
uint F_00a4fa10(unsigned int gen_a0)
{
  GEN_ENTER(0xa4fa10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int local_8;
  
  puVar1 = (undefined4 *)F_00406bb0(0x44c8,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 2;
    *puVar1 = 200;
    local_8 = 199;
    puVar1 = puVar3;
    do {
      *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      F_00c48350(puVar1 + 2,0,0x48);
      puVar1 = puVar1 + 0x16;
      local_8 = local_8 + -1;
    } while (-1 < local_8);
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  iVar2 = 0x58;
  do {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x54 + iVar2))) = *(int *)((int)this + 4) + 0x58 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x50 + iVar2))) = *(int *)((int)this + 4) + -0x58 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0xac + iVar2))) = *(int *)((int)this + 4) + 0xb0 + iVar2;
    iVar4 = *(int *)((int)this + 4) + iVar2;
    *(int *)(iVar4 + 0xa8) = iVar4;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x104 + iVar2))) = *(int *)((int)this + 4) + 0x108 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x100 + iVar2))) = *(int *)((int)this + 4) + 0x58 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x15c + iVar2))) = *(int *)((int)this + 4) + 0x160 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x158 + iVar2))) = *(int *)((int)this + 4) + 0xb0 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x1b4 + iVar2))) = *(int *)((int)this + 4) + 0x1b8 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x1b0 + iVar2))) = *(int *)((int)this + 4) + 0x108 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x20c + iVar2))) = *(int *)((int)this + 4) + 0x210 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x208 + iVar2))) = *(int *)((int)this + 4) + 0x160 + iVar2;
    iVar2 = iVar2 + 0x210;
  } while (iVar2 < 0x4468);
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 8) = iVar2;
  *(int *)(iVar2 + 0x54) = iVar2 + 0x58;
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 0xc) = iVar2 + 0x4468;
  *(int *)(iVar2 + 0x44b8) = iVar2 + 0x4410;
  puVar1 = (undefined4 *)F_00406bb0(0x1e4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 10;
    puVar3 = puVar1 + 1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0xffffffff;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0xffffffff;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0xffffffff;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x19] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0xffffffff;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0xffffffff;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x25] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0xffffffff;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0xffffffff;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x31] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0xffffffff;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0xffffffff;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3d] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0xffffffff;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0xffffffff;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x49] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x4b] = 0;
    puVar1[0x4c] = 0;
    puVar1[0x4d] = 0xffffffff;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    puVar1[0x51] = 0xffffffff;
    puVar1[0x52] = 0;
    puVar1[0x53] = 0;
    puVar1[0x55] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x57] = 0;
    puVar1[0x58] = 0;
    puVar1[0x59] = 0xffffffff;
    puVar1[0x5a] = 0;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0xffffffff;
    puVar1[0x5e] = 0;
    puVar1[0x5f] = 0;
    puVar1[0x61] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0xffffffff;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0xffffffff;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6d] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x71] = 0xffffffff;
    puVar1[0x72] = 0;
    puVar1[0x73] = 0;
    puVar1[0x74] = 0;
    puVar1[0x75] = 0xffffffff;
    puVar1[0x76] = 0;
    puVar1[0x77] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar3;
  puVar3[0x16] = puVar3 + 0x18;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x54))) = *(int *)((int)this + 0x10);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x88))) = *(int *)((int)this + 0x10) + 0x90;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x84))) = *(int *)((int)this + 0x10) + 0x30;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb8))) = *(int *)((int)this + 0x10) + 0xc0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb4))) = *(int *)((int)this + 0x10) + 0x60;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe8))) = *(int *)((int)this + 0x10) + 0xf0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe4))) = *(int *)((int)this + 0x10) + 0x90;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x118))) = *(int *)((int)this + 0x10) + 0x120;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x114))) = *(int *)((int)this + 0x10) + 0xc0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x148))) = *(int *)((int)this + 0x10) + 0x150;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x144))) = *(int *)((int)this + 0x10) + 0xf0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x178))) = *(int *)((int)this + 0x10) + 0x180;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x174))) = *(int *)((int)this + 0x10) + 0x120;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a8))) = *(int *)((int)this + 0x10) + 0x1b0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a4))) = *(int *)((int)this + 0x10) + 0x150;
  iVar2 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x14) = iVar2;
  *(int *)(iVar2 + 0x28) = iVar2 + 0x30;
  iVar2 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x18) = iVar2 + 0x1b0;
  *(uint *)(iVar2 + 0x1d4) = iVar2 + 0x180U;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  return iVar2 + 0x180U;
}

/* ref: FUN_00a4fea0 */
unsigned int F_00a4fea0(void)
{
  GEN_ENTER(0xa4fea0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a4feb0 */
uint F_00a4feb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4feb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1c);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (*(int *)(uVar1 + 0x10) == param_2) break;
    uVar1 = *(uint *)(uVar1 + 0x28);
  }
  return uVar1;
}

/* ref: FUN_00a4fee0 */
uint F_00a4fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4fee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)((int)this + 8);
    if (uVar1 != 0) {
      iVar2 = *(int *)(uVar1 + 0x54);
      *(int *)((int)this + 8) = iVar2;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x50) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(uVar1 + 0x54) = 0;
      if (iVar2 == 0) {
        *(undefined4 *)(uVar1 + 0x50) = 0;
        *(uint *)(param_1 + 0x14) = uVar1;
      }
      else {
        *(int *)(uVar1 + 0x50) = iVar2;
        *((uint *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x54))) = uVar1;
      }
      *(uint *)(param_1 + 0x18) = uVar1;
      puVar3 = param_2;
      puVar4 = (undefined4 *)(uVar1 + 8);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a4ff40 */
unsigned int F_00a4ff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4ff40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_2 == *(int *)(param_1 + 0x14)) {
      iVar1 = *(int *)(param_2 + 0x54);
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x50) = 0;
      }
    }
    if (param_2 == *(int *)(param_1 + 0x18)) {
      iVar1 = *(int *)(param_2 + 0x50);
      *(int *)(param_1 + 0x18) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x54) = 0;
      }
    }
    if (*(int *)(param_2 + 0x50) != 0) {
      *(undefined4 *)(param_2 + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x50) + 0x50)));
    }
    if (*(int *)(param_2 + 0x54) != 0) {
      *(undefined4 *)(param_2 + 0x54) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x54)));
    }
    iVar1 = *(int *)((int)this + 0xc);
    *(undefined4 *)(param_2 + 0x54) = 0;
    if (iVar1 != 0) {
      *(int *)(param_2 + 0x50) = iVar1;
      *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x54))) = param_2;
      *(int *)((int)this + 0xc) = param_2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      return 0;
    }
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(int *)((int)this + 8) = param_2;
    *(int *)((int)this + 0xc) = param_2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  return 0;
}

/* ref: FUN_00a4ffd0 */
uint F_00a4ffd0(void)
{
  GEN_ENTER(0xa4ffd0u, 0u, 0u, 0u, 0u);
  return 0x14a7470;
}

/* ref: FUN_00a4ffe0 */
byte F_00a4ffe0(void)
{
  GEN_ENTER(0xa4ffe0u, 0u, 0u, 0u, 0u);
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = &REFG(undefined2, 0x14a8828);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &REFG(undefined2, 0x14a8af8);
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  REFG(undefined1, 0x14a73d2) = 0;
  REFG(undefined1, 0x14a73d9) = 0;
  REFG(undefined1, 0x14a73d3) = 0;
  REFG(undefined1, 0x14a73d8) = 0;
  REFG(undefined1, 0x14a73da) = 0;
  return 0;
}

/* ref: FUN_00a50030 */
unsigned int F_00a50030(void)
{
  GEN_ENTER(0xa50030u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a50040 */
uint F_00a50040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50040u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  undefined1 * puVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  uVar3 = param_1 & 0xffff;
  if (0x1d < uVar3) goto LAB_00a5014c;
  iVar4 = uVar3 * 0x10;
  puVar5 = &REFG(undefined, 0x14a8824) + iVar4;
  F_00f00b60(((undefined1 *)(gen_frame + 0x8)),puVar5);
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  if ((*(ushort *)(gen_frame + 0xc)) == 0) {
    if (uVar1 != 0) {
LAB_00a500a1: ;
      (&REFG(undefined2, 0x14a8828))[(int)(uVar3 * 8)] = uVar1;
      (&REFG(undefined1, 0x14a882a))[(int)(iVar4)] = (char)param_2[1];
      (&REFG(undefined1, 0x14a882b))[(int)(iVar4)] = *(undefined1 *)((int)param_2 + 3);
      (&REFG(undefined1, 0x14a882c))[(int)(iVar4)] = (char)param_2[2];
      (&REFG(undefined1, 0x14a882d))[(int)(iVar4)] = *(undefined1 *)((int)param_2 + 5);
      (&REFG(undefined1, 0x14a882e))[(int)(iVar4)] = (char)param_2[3];
      (&REFG(undefined1, 0x14a882f))[(int)(iVar4)] = *(undefined1 *)((int)param_2 + 7);
      (&REFG(undefined1, 0x14a8830))[(int)(iVar4)] = (char)param_2[4];
      puVar6 = ((undefined1 *)(gen_frame + 0x8));
      (&REFG(undefined1, 0x14a8831))[(int)(iVar4)] = *(undefined1 *)((int)param_2 + 9);
      this = (undefined *)F_006b8c00();
      uVar2 = F_00703900(this,puVar5,puVar6,uVar3);
      if ((*(ushort *)(gen_frame + 0xc)) == 0) {
        *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + 1;
      }
      else if (*param_2 == 0) {
        *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + -1;
      }
      if ((char)param_3 != '\0') {
        REFG(undefined4, 0x14a458f) = 1;
      }
      if ((char)param_5 != '\0') {
        REFG(undefined4, 0x14b0ee0) = 1;
      }
      if ((char)param_4 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
        *(ushort *)&REFG(undefined, 0x14afd34) = *param_2;
        uVar2 = (uint)*(ushort *)&REFG(undefined, 0x14afd34);
        *(undefined4 *)&REFG(undefined, 0x14afd30) = 1;
      }
    }
  }
  else if (((*(ushort *)(gen_frame + 0xc)) == uVar1) || (uVar1 == 0)) goto LAB_00a500a1;
  F_00ef87b0(((undefined1 *)(gen_frame + 0x8)));
LAB_00a5014c: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00a50160 */
uint F_00a50160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  undefined * this;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == 200) {
    uVar2 = F_00c46aa0(&REFG(undefined, 0x14a875a),param_1,200);
    in_EAX = (uint)uVar2;
    if (REFG(char, 0x14a73d3) == '\0') {
      REFG(char, 0x14a73d3) = 1;
      this = (undefined *)F_006b8c00();
      uVar1 = F_006e5e50(this);
      return uVar1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a501b0 */
uint F_00a501b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa501b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this;
  byte bVar2;
  
  uVar1 = (param_1 & 0xffff) >> 3;
  if (uVar1 < 200) {
    bVar2 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 == '\0') {
      bVar2 = (&REFG(undefined, 0x14a875a))[(int)(uVar1)] & ~bVar2;
    }
    else {
      bVar2 = (&REFG(undefined, 0x14a875a))[(int)(uVar1)] | bVar2;
    }
    (&REFG(undefined, 0x14a875a))[(int)(uVar1)] = bVar2;
    this = (undefined *)F_006b8c00();
    uVar1 = F_006e5ea0(this,param_1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00a50210 */
uint F_00a50210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  ulonglong uVar1;
  
  if (param_2 == 0x28) {
    uVar1 = F_00c46aa0(&REFG(undefined, 0x14a8a04),param_1,0x28);
    in_EAX = (uint)uVar1;
    if (REFG(char, 0x14a73d8) == '\0') {
      REFG(char, 0x14a73d8) = '\x01';
    }
  }
  return in_EAX;
}

/* ref: FUN_00a50240 */
uint F_00a50240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa50240u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  undefined1 * puVar6;
  
  if (0xf < (ushort)param_1) {
    return in_EAX;
  }
  uVar3 = param_1 & 0xffff;
  iVar4 = uVar3 * 0x10;
  puVar5 = &REFG(undefined, 0x14a8af4) + iVar4;
  F_00e781d0(((undefined1 *)(gen_frame + 0xc)),puVar5);
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  if ((*(ushort *)(gen_frame + 0x10)) == 0) {
    if (uVar1 == 0) {
      F_00e6ced0(((undefined1 *)(gen_frame + 0xc)));
      return 0;
    }
  }
  else if (((*(ushort *)(gen_frame + 0x10)) != uVar1) && (uVar1 != 0)) goto LAB_00a5031d;
  (&REFG(undefined2, 0x14a8af8))[(int)(uVar3 * 8)] = uVar1;
  (&REFG(undefined1, 0x14a8afa))[(int)(iVar4)] = (char)param_2[1];
  (&REFG(undefined2, 0x14a8afc))[(int)(uVar3 * 8)] = param_2[2];
  (&REFG(undefined2, 0x14a8afe))[(int)(uVar3 * 8)] = param_2[3];
  puVar6 = ((undefined1 *)(gen_frame + 0xc));
  (&REFG(undefined1, 0x14a8b00))[(int)(iVar4)] = (char)param_2[4];
  this = (undefined *)F_006b8c00();
  F_0070e450(this,puVar5,puVar6,param_1);
  uVar2 = 1;
  if ((*(ushort *)(gen_frame + 0x10)) == 0) {
    *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + 1;
  }
  else if (*param_2 == 0) {
    *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + -1;
  }
  if ((char)param_4 != '\0') {
    REFG(undefined4, 0x14b0ee0) = 1;
  }
  if ((char)param_3 != '\0') {
    *(undefined4 *)&REFG(undefined, 0x14afd2c) = 2;
    *(ushort *)&REFG(undefined, 0x14afd34) = *param_2;
    uVar2 = (uint)*(ushort *)&REFG(undefined, 0x14afd34);
    *(undefined4 *)&REFG(undefined, 0x14afd30) = 2;
  }
LAB_00a5031d: ;
  F_00e6ced0(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_00a50330 */
uint F_00a50330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == 200) {
    uVar2 = F_00c46aa0(&REFG(undefined, 0x14a8a2c),param_1,200);
    in_EAX = (uint)uVar2;
    if (REFG(char, 0x14a73da) == '\0') {
      REFG(char, 0x14a73da) = 1;
      uVar1 = F_006b8c00();
      return uVar1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a50380 */
uint F_00a50380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50380u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  byte bVar2;
  
  uVar1 = (param_1 & 0xffff) >> 3;
  if (uVar1 < 200) {
    bVar2 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 == '\0') {
      bVar2 = (&REFG(undefined, 0x14a8a2c))[(int)(uVar1)] & ~bVar2;
    }
    else {
      bVar2 = (&REFG(undefined, 0x14a8a2c))[(int)(uVar1)] | bVar2;
    }
    (&REFG(undefined, 0x14a8a2c))[(int)(uVar1)] = bVar2;
    uVar1 = F_006b8c00();
    F_006b8cf0(param_1);
  }
  return uVar1;
}

/* ref: FUN_00a503e0 */
uint F_00a503e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xa503e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  undefined2 * param_9 = (undefined2 *)(uintptr_t)gen_a8;
  int param_10 = (int)gen_a9;
  undefined2 * in_EAX = 0;
  
  if ((((param_2 == 0x1c) && (param_4 == 0x12)) && (param_6 == 10)) &&
     ((param_8 == 6 && (param_10 == 2)))) {
    F_00c46aa0(&REFG(undefined, 0x14a94f8),param_1,0x1c);
    *(undefined4 *)&REFG(undefined, 0x14a9514) = *param_3;
    *(undefined4 *)&REFG(undefined, 0x14a9518) = param_3[1];
    *(undefined4 *)&REFG(undefined, 0x14a951c) = param_3[2];
    *(undefined4 *)&REFG(undefined, 0x14a9520) = param_3[3];
    *(undefined2 *)&REFG(undefined, 0x14a9524) = *(undefined2 *)(param_3 + 4);
    *(undefined4 *)&REFG(undefined, 0x14a9526) = *param_5;
    *(undefined4 *)&REFG(undefined, 0x14a952a) = param_5[1];
    *(undefined2 *)&REFG(undefined, 0x14a952e) = *(undefined2 *)(param_5 + 2);
    *(undefined4 *)&REFG(undefined, 0x14a9530) = *param_7;
    *(undefined2 *)&REFG(undefined, 0x14a9534) = *(undefined2 *)(param_7 + 1);
    *(undefined2 *)&REFG(undefined, 0x14a9536) = *param_9;
    in_EAX = param_9;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a504a0 */
uint F_00a504a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xa504a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  undefined2 * param_9 = (undefined2 *)(uintptr_t)gen_a8;
  int param_10 = (int)gen_a9;
  undefined2 * in_EAX = 0;
  
  if ((((param_2 == 0x1c) && (param_4 == 0x12)) && (param_6 == 10)) &&
     ((param_8 == 6 && (param_10 == 2)))) {
    F_00c46aa0(&REFG(undefined, 0x14a9538),param_1,0x1c);
    *(undefined4 *)&REFG(undefined, 0x14a9554) = *param_3;
    *(undefined4 *)&REFG(undefined, 0x14a9558) = param_3[1];
    *(undefined4 *)&REFG(undefined, 0x14a955c) = param_3[2];
    *(undefined4 *)&REFG(undefined, 0x14a9560) = param_3[3];
    *(undefined2 *)&REFG(undefined, 0x14a9564) = *(undefined2 *)(param_3 + 4);
    *(undefined4 *)&REFG(undefined, 0x14a9566) = *param_5;
    *(undefined4 *)&REFG(undefined, 0x14a956a) = param_5[1];
    *(undefined2 *)&REFG(undefined, 0x14a956e) = *(undefined2 *)(param_5 + 2);
    *(undefined4 *)&REFG(undefined, 0x14a9570) = *param_7;
    *(undefined2 *)&REFG(undefined, 0x14a9574) = *(undefined2 *)(param_7 + 1);
    *(undefined2 *)&REFG(undefined, 0x14a9576) = *param_9;
    in_EAX = param_9;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a50560 */
uint F_00a50560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50560u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * this;
  undefined1 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    puVar1 = &REFG(undefined1, 0x14a8d05);
    do {
      puVar1[-1] = *(undefined1 *)(param_1 + uVar2 * 2);
      *puVar1 = *(undefined1 *)(param_1 + 1 + uVar2 * 2);
      F_00a705f0(&REFG(undefined, 0x14ac288),(uint)*(byte *)(param_1 + uVar2 * 2),
                   (uint)*(byte *)(param_1 + 1 + uVar2 * 2),1,0);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar2 < param_2);
  }
  this = (undefined *)F_006b8c00();
  uVar2 = F_0070e6a0(this);
  REFG(undefined4, 0x14b0ee0) = 1;
  *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
  return uVar2;
}

/* ref: FUN_00a505f0 */
byte F_00a505f0(void)
{
  GEN_ENTER(0xa505f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d2);
}

/* ref: FUN_00a50610 */
byte F_00a50610(void)
{
  GEN_ENTER(0xa50610u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d3);
}

/* ref: FUN_00a50620 */
byte F_00a50620(void)
{
  GEN_ENTER(0xa50620u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d8);
}

/* ref: FUN_00a50640 */
uint F_00a50640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * PTR32 * param_4 = (undefined * PTR32 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * puVar1;
  undefined * puVar2;
  undefined * puVar3;
  undefined4 * puVar4;
  undefined * this;
  undefined3 extraout_var = 0;
  byte bVar5;
  int iVar6;
  undefined * PTR32 * ppuVar7;
  uint uVar8;
  undefined * PTR32 * ppuVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar8 = (uint)(ushort)param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(byte)param_5);
  if (param_4 == (undefined * PTR32 *)0x0) {
    bVar5 = 0;
    ppuVar7 = &REFG(undefined * PTR32, 0x10e5ccc);
  }
  else {
    ppuVar7 = param_4;
    bVar5 = (byte)param_5;
    if (2 < (byte)param_5) {
      if ((byte)param_5 < 5) {
        (*(undefined4 *)(gen_frame + 0x20)) = param_1;
        (*(byte *)(gen_frame + 0x27)) = (byte)param_5;
        puVar1 = param_4[1];
        uVar11 = 0;
        (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
        puVar2 = param_4[2];
        ((undefined * PTR32 *)(gen_frame + 0x28))[0] = *param_4;
        puVar3 = param_4[3];
        ((undefined * PTR32 *)(gen_frame + 0x28))[1] = puVar1;
        uVar10 = 0;
        puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1d8;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
        (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
        ((undefined * PTR32 *)(gen_frame + 0x28))[2] = puVar2;
        ((undefined * PTR32 *)(gen_frame + 0x28))[3] = puVar3;
      }
      else if ((byte)param_5 < 9) {
        (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
        (*(byte *)(gen_frame + 0x27)) = (byte)param_5;
        (*(undefined4 *)(gen_frame + 0x20)) = param_1;
        uVar11 = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1d9;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
        (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
        ppuVar7 = param_4;
        ppuVar9 = ((undefined * PTR32 *)(gen_frame + 0x28));
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppuVar9 = *ppuVar7;
          ppuVar7 = ppuVar7 + 1;
          ppuVar9 = ppuVar9 + 1;
        }
        uVar10 = 0;
        puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
      }
      else if ((byte)param_5 < 0x11) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5d9c0(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      else if ((byte)param_5 < 0x21) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5da10(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      else if ((byte)param_5 < 0x41) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5da60(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      else if ((byte)param_5 < 0x81) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5dab0(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      else {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5db00(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      goto LAB_00a5084c;
    }
  }
  puVar1 = ppuVar7[1];
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(byte *)(gen_frame + 0x27)) = bVar5;
  puVar2 = *ppuVar7;
  uVar11 = 0;
  (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1d7;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
  ((undefined * PTR32 *)(gen_frame + 0x28))[0] = puVar2;
  ((undefined * PTR32 *)(gen_frame + 0x28))[1] = puVar1;
  uVar10 = 0;
  puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
LAB_00a5084c: ;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar5 = F_00974e00(this,puVar4,uVar10,uVar11);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar5);
}

/* ref: FUN_00a50880 */
uint F_00a50880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  byte bVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar7 = (uint)(ushort)param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(undefined1)param_3);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(byte)param_5);
  if (param_4 == (undefined4 *)0x0) {
    bVar3 = 0;
    puVar5 = &REFG(undefined4, 0x10e5cd0);
  }
  else {
    puVar5 = param_4;
    bVar3 = (byte)param_5;
    if (2 < (byte)param_5) {
      if ((byte)param_5 < 5) {
        (*(undefined4 *)(gen_frame + 0x20)) = param_1;
        (*(byte *)(gen_frame + 0x27)) = (byte)param_5;
        uVar9 = param_4[1];
        uVar10 = 0;
        (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
        uVar1 = param_4[2];
        ((undefined4 *)(gen_frame + 0x28))[0] = *param_4;
        uVar2 = param_4[3];
        ((undefined4 *)(gen_frame + 0x28))[1] = uVar9;
        uVar9 = 0;
        puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1e1;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
        (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
        ((undefined4 *)(gen_frame + 0x28))[2] = uVar1;
        ((undefined4 *)(gen_frame + 0x28))[3] = uVar2;
      }
      else if ((byte)param_5 < 9) {
        uVar10 = 0;
        (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
        (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
        (*(byte *)(gen_frame + 0x27)) = (byte)param_5;
        uVar9 = 0;
        puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1e2;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
        (*(undefined4 *)(gen_frame + 0x20)) = param_1;
        puVar6 = param_4;
        puVar8 = ((undefined4 *)(gen_frame + 0x28));
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else if ((byte)param_5 < 0x11) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dc30(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      else if ((byte)param_5 < 0x21) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dc80(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      else if ((byte)param_5 < 0x41) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dcd0(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      else if ((byte)param_5 < 0x81) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dd20(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      else {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dd70(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      goto LAB_00a50a9d;
    }
  }
  uVar10 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  uVar1 = *puVar5;
  (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
  (*(byte *)(gen_frame + 0x27)) = bVar3;
  uVar2 = puVar5[1];
  uVar9 = 0;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1e0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
  ((undefined4 *)(gen_frame + 0x28))[0] = uVar1;
  ((undefined4 *)(gen_frame + 0x28))[1] = uVar2;
LAB_00a50a9d: ;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar3 = F_00974e00(this,puVar5,uVar9,uVar10);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_00a50ad0 */
uint F_00a50ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa50ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  char * pcVar4;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar4 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30));
  (*(char * PTR32 *)(gen_frame + 0xc2c)) = pcVar4;
  if (param_4 != (char *)0x0) {
    pcVar4 = param_4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (1 - (int)(param_4 + 1));
    if (pcVar4 < (char *)0x9) {
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      uVar7 = *(undefined4 *)param_4;
      (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
      uVar8 = *(undefined4 *)(param_4 + 4);
      (*(undefined4 *)(gen_frame + 0x8)) = 0x1eb;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
      (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
      ((undefined4 *)(gen_frame + 0x27))[0] = uVar7;
      ((undefined4 *)(gen_frame + 0x27))[1] = uVar8;
    }
    else if (pcVar4 < (char *)0x11) {
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
      uVar7 = *(undefined4 *)(param_4 + 4);
      (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
      uVar8 = *(undefined4 *)(param_4 + 8);
      ((undefined4 *)(gen_frame + 0x27))[0] = *(undefined4 *)param_4;
      uVar2 = *(undefined4 *)(param_4 + 0xc);
      ((undefined4 *)(gen_frame + 0x27))[1] = uVar7;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x1ec;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
      ((undefined4 *)(gen_frame + 0x27))[2] = uVar8;
      ((undefined4 *)(gen_frame + 0x27))[3] = uVar2;
    }
    else {
      if ((char *)0x20 < pcVar4) goto LAB_00a50c24;
      (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x1ed;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
      pcVar4 = param_4;
      puVar6 = ((undefined4 *)(gen_frame + 0x27));
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        puVar6 = puVar6 + 1;
      }
    }
    puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
    (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
    (*(undefined4 *)(gen_frame + 0x20)) = param_1;
    uVar8 = 0;
    uVar7 = 0;
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    bVar3 = F_00974e00(this,puVar6,uVar7,uVar8);
    pcVar4 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  }
LAB_00a50c24: ;
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return (uint)pcVar4;
}

/* ref: FUN_00a50c40 */
uint F_00a50c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa50c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  char * param_6 = (char *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  char cVar1;
  byte bVar2;
  char * pcVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar3 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30));
  (*(char * PTR32 *)(gen_frame + 0xc2c)) = pcVar3;
  if (param_6 != (char *)0x0) {
    pcVar3 = param_6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_6 + 1));
    if (pcVar3 < (char *)0x21) {
      (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
      uVar8 = 0;
      (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x1ee;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
      (*(undefined4 *)(gen_frame + 0x28)) = param_4;
      uVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
      pcVar3 = param_6;
      puVar5 = ((undefined4 *)(gen_frame + 0x30));
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        puVar5 = puVar5 + 1;
      }
      this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      bVar2 = F_00974e00(this,puVar6,uVar7,uVar8);
      pcVar3 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    }
  }
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return (uint)pcVar3;
}

/* ref: FUN_00a50d10 */
uint F_00a50d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa50d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  undefined * this;
  
  if (param_1 == -0x20000000) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,param_2);
  }
  this = (undefined *)F_006b8c00();
  uVar1 = F_006fcf60(this,uVar1,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00a50d60 */
uint F_00a50d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  int * in_esi;
  uint uVar1;
  undefined * this;
  uint uVar2;
  byte * pbVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  in_esi = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar1 = F_00a4e340(uVar1,in_esi,param_1);
  uVar2 = 0;
  if (param_5 != 0) {
    pbVar3 = (byte *)(param_4 + 3);
    do {
      ((undefined1 *)(gen_frame + 0x148))[0] = 0;
      uVar1 = 0;
      do {
        F_00c472af(((undefined1 *)(gen_frame + 0x170)),5,&REFG(undefined, 0x10e5b08),(uint)pbVar3[uVar1 + 1]);
        F_00c473c8(((undefined1 *)(gen_frame + 0x148)),0x28,((undefined1 *)(gen_frame + 0x170)));
        uVar1 = uVar1 + 1;
      } while (uVar1 < 6);
      F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,"quest[%02u] : id=%u, seq=%u, flags=0x%02x, vars=%s",uVar2,
                 (uint)*(ushort *)(pbVar3 + -3),(uint)pbVar3[-1],(uint)*pbVar3,((undefined1 *)(gen_frame + 0x148)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),&REFG(undefined, 0x10e539a),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      puVar7 = ((undefined1 *)(gen_frame + 0x8));
      puVar6 = ((undefined1 *)(gen_frame + 0x5c));
      uVar5 = 1;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
      F_00459b00(this,uVar5,puVar6,puVar7,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      uVar1 = (uint)uVar4;
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 10;
    } while (uVar2 < param_5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
  return uVar1;
}

/* ref: FUN_00a50eb0 */
uint F_00a50eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int * in_esi;
  uint in_ecx;
  undefined * this;
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  char * pcVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  in_esi = (int *)F_00424750(REFG(undefined4, 0x137104c));
  in_ecx = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  F_00a4e340(in_ecx,in_esi,param_1);
  if (((byte)param_4 == 0) && ((char)param_3 != '\0')) {
    pcVar4 = "quest : id=%u, seq=completed";
  }
  else {
    if (-1 < param_5) {
      F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,"quest : id=%u, seq=%u",param_2 & 0xffff,(uint)(byte)param_4);
      goto LAB_00a50f57;
    }
    pcVar4 = "quest : id=%u, seq=not accepted";
  }
  F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,pcVar4,param_2 & 0xffff);
LAB_00a50f57: ;
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10e539b),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x5c));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  uVar2 = 1;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
  F_00459b00(this,uVar2,puVar3,puVar5,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return (uint)uVar1;
}

/* ref: FUN_00a50fd0 */
uint F_00a50fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int * in_esi;
  uint uVar1;
  undefined * this;
  uint uVar2;
  ushort * puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  in_esi = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar1 = F_00a4e340(uVar1,in_esi,param_1);
  uVar2 = 0;
  if (param_5 != 0) {
    puVar3 = (ushort *)(param_4 + 6);
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,"Leve[%02u] : id=%u, seq=%u, flags=0x%02x, seed=%u, class=%u",uVar2,
                 (uint)puVar3[-3],(uint)(byte)puVar3[-2],(uint)puVar3[-1],(uint)*puVar3,
                 (uint)(byte)puVar3[1]);
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10e5452),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      puVar7 = ((undefined1 *)(gen_frame + 0x5c));
      puVar6 = ((undefined1 *)(gen_frame + 0x8));
      uVar5 = 1;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
      F_00459b00(this,uVar5,puVar6,puVar7,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
      uVar1 = (uint)uVar4;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 5;
    } while (uVar2 < param_5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return uVar1;
}

/* ref: FUN_00a510e0 */
uint F_00a510e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa510e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int * in_esi;
  uint in_ecx;
  undefined * this;
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  char * pcVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  in_esi = (int *)F_00424750(REFG(undefined4, 0x137104c));
  in_ecx = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  F_00a4e340(in_ecx,in_esi,param_1);
  if (((byte)param_4 == 0) && ((char)param_3 != '\0')) {
    pcVar4 = "leve : id=%u, seq=completed";
  }
  else {
    if (-1 < param_5) {
      F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,"leve : id=%u, seq=%u",param_2 & 0xffff,(uint)(byte)param_4);
      goto LAB_00a51187;
    }
    pcVar4 = "leve : id=%u, seq=not accepted";
  }
  F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,pcVar4,param_2 & 0xffff);
LAB_00a51187: ;
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10e5453),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x5c));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  uVar2 = 1;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
  F_00459b00(this,uVar2,puVar3,puVar5,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return (uint)uVar1;
}

/* ref: Global::SendClientTrigger */
uint F_00a51200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa51200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_4;
  (*(undefined4 *)(gen_frame + 0x24)) = param_2;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_3;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x30)) = param_5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x191;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a512b0 */
uint F_00a512b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa512b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = param_7;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x28)) = param_5;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_6;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x191;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x38)) = param_2;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51360 */
uint F_00a51360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa51360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  uVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x28)) = param_4;
  uVar4 = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x30)) = param_6;
  (*(undefined4 *)(gen_frame + 0x38)) = param_2[1];
  uVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x8)) = 0x195;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar1;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar2 = F_00974e00(this,puVar3,uVar4,uVar5);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00a51420 */
uint F_00a51420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa51420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = param_7;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x28)) = param_5;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_6;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x197;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x38)) = param_2;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a514d0 */
uint F_00a514d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa514d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x30)) = param_6;
  uVar7 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x198;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x48;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  uVar6 = 0;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
  puVar3 = param_2;
  puVar4 = ((undefined4 *)(gen_frame + 0x34));
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar5,uVar6,uVar7);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51580 */
uint F_00a51580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa51580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x20)) = param_6;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 8;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51650 */
uint F_00a51650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa51650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x16;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51720 */
uint F_00a51720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa51720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x17;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a517f0 */
uint F_00a517f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa517f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x2b;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a518c0 */
uint F_00a518c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa518c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xe;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51990 */
uint F_00a51990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa51990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51a60 */
uint F_00a51a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa51a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51b20 */
uint F_00a51b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa51b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51be0 */
uint F_00a51be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa51be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x12;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51ca0 */
uint F_00a51ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa51ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51d60 */
uint F_00a51d60(void)
{
  GEN_ENTER(0xa51d60u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x262;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
  (*(undefined2 *)(gen_frame + 0x20)) = REFG(undefined2, 0x14b4eb8);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51de0 */
uint F_00a51de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa51de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined1 * param_8 = (undefined1 *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined1 *)(gen_frame + 0x20)) = *param_8;
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  (*(undefined1 *)(gen_frame + 0x21)) = (undefined1)param_3;
  (*(undefined4 *)(gen_frame + 0x28)) = param_5;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x2e)) = (undefined2)param_7;
  (*(undefined2 *)(gen_frame + 0x2c)) = (undefined2)param_6;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x30)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x196;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
  (*(undefined4 *)(gen_frame + 0x34)) = param_2;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51ea0 */
uint F_00a51ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa51ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined1 * param_7 = (undefined1 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  (*(undefined1 *)(gen_frame + 0x20)) = *param_7;
  (*(undefined2 *)(gen_frame + 0x2e)) = (undefined2)param_6;
  uVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_4;
  (*(undefined4 *)(gen_frame + 0x30)) = *param_1;
  uVar4 = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined1 *)(gen_frame + 0x21)) = (undefined1)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_1[1];
  uVar1 = param_1[2];
  (*(undefined4 *)(gen_frame + 0x8)) = 0x199;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined2 *)(gen_frame + 0x2c)) = (undefined2)param_5;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar2 = F_00974e00(this,puVar3,uVar4,uVar5);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00a51f70 */
uint F_00a51f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa51f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_7;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 9;
  (*(undefined4 *)(gen_frame + 0x48)) = param_6;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52040 */
uint F_00a52040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa52040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_7;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x48)) = param_6;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52110 */
uint F_00a52110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa52110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_7;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_6;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 10;
  (*(undefined4 *)(gen_frame + 0x48)) = param_5;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a521e0 */
uint F_00a521e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa521e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_6;
  (*(undefined4 *)(gen_frame + 0x20)) = param_8;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = param_5;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x4c)) = param_7;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xb;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a522b0 */
uint F_00a522b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa522b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1b3;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined1 *)(gen_frame + 0x24)) = 1;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52340 */
uint F_00a52340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined1 *)(gen_frame + 0x24)) = (undefined1)param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1b3;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a523d0 */
uint F_00a523d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa523d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1a;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a524a0 */
uint F_00a524a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa524a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_1;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1c;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = param_2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = param_2;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52560 */
uint F_00a52560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1b;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52620 */
uint F_00a52620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x18;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a526e0 */
uint F_00a526e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa526e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x20)) = param_5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 7;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = param_4;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = param_4;
  (*(undefined4 *)(gen_frame + 0x4c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a527b0 */
uint F_00a527b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa527b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xd;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52870 */
uint F_00a52870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 4;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52930 */
uint F_00a52930(unsigned int gen_a0)
{
  GEN_ENTER(0xa52930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a529f0 */
uint F_00a529f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa529f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1e;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52ab0 */
uint F_00a52ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa52ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_6;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1f;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52b80 */
uint F_00a52b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa52b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_7;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x21;
  (*(undefined4 *)(gen_frame + 0x48)) = param_6;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52c50 */
uint F_00a52c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa52c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52d10 */
uint F_00a52d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52d10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int * this;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  this = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  if (this == (int *)0x0) {
    return 0;
  }
  bVar4 = F_00a9f620(this);
  if (bVar4 != 0) {
    *(undefined4 *)&REFG(undefined, 0x14bcf64) = *(undefined4 *)(param_2 + 4);
    fVar13 = *(float *)(param_2 + 4);
    uVar7 = (uint)*param_2;
    uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
    uVar5 = F_00ac3e10(uVar5,uVar7,fVar13);
    return uVar5;
  }
  uVar5 = F_00ab1ed0((uint)*param_2);
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (uVar5 == 0) {
    return 0;
  }
  F_00b5ae60(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(this + 0x22),0);
  uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
  if (*(int *)(uVar5 + 0x4c) != 0) {
    uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
    F_00ac99b0(this,*(undefined4 *)(uVar5 + 0x4c));
    uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
    if (uVar5 != 0) {
      uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
      F_00ac3da0(uVar5);
    }
  }
  if (*(int *)(param_2 + 6) != -0x20000000) {
    piVar6 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(int *)(param_2 + 6));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
    if ((piVar6 != (int *)0x0) &&
       (uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xb8))(piVar6), (char)uVar5 != '\0')) {
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x14));
    }
  }
  if ((*(int *)(param_2 + 6) == REFG(int, 0x1379690)) && (*(char *)((*(uint *)(gen_frame + 0x18)) + 0x3a) == '\x01')) {
    F_0053f190(&REFG(undefined4, 0x1375bc0),this);
  }
  if ((*param_2 != 0x2dd) && (*param_2 != 0x2de)) {
    cVar1 = *(char *)((*(uint *)(gen_frame + 0x18)) + 0x1c);
    if (cVar1 == '\x02') {
      uVar5 = (uint)(byte)param_2[1];
      uVar12 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f6;
    }
    else if (cVar1 == '\x05') {
      uVar5 = (uint)(byte)param_2[1];
      uVar12 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f7;
    }
    else {
      if (cVar1 == '\b') goto LAB_00a52f0a;
      uVar5 = (uint)(byte)param_2[1];
      uVar12 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f5;
    }
    F_00a7d4b0(uVar11,this,(*(int * PTR32 *)(gen_frame + 0x1c)),uVar5,uVar12,0,0,0,0,REFG(float, 0x10916ec));
  }
LAB_00a52f0a: ;
  uVar12 = *(undefined4 *)(param_2 + 6);
  fVar13 = *(float *)(param_2 + 4);
  uVar7 = (uint)*param_2;
  uVar15 = 0;
  uVar14 = 0;
  uVar11 = 1;
  uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
  F_00ac3dd0(uVar5,uVar11,uVar7,fVar13,uVar12,uVar14,uVar15);
  F_00aa58e0(this,*(undefined4 *)(param_2 + 6));
  F_00aa46b0(this,(uint)(byte)param_2[1],*(undefined4 *)(param_2 + 2),param_2 + 0xc,
               *(float *)(param_2 + 8));
  uVar5 = (*(uint *)(gen_frame + 0x18));
  if (*(char *)((*(uint *)(gen_frame + 0x18)) + 0x1c) == '\v') {
    uVar2 = param_2[0xd];
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uint)param_2[0xc];
    uVar3 = param_2[0xe];
    fVar8 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uint)uVar2;
    uVar12 = *(undefined4 *)(param_2 + 10);
    fVar9 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)param_2[0xc] * fVar8) * fVar9 - fVar10)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uint)uVar3;
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar2 * fVar8) * fVar9 - fVar10)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar9 * ((float10)uVar3 * fVar8) - fVar10)));
    uVar5 = F_00ac3a60(&REFG(undefined, 0x14bcf40),uVar12,&(*(float *)(gen_frame + 0x0)),0);
  }
  return uVar5;
}

/* ref: FUN_00a52fd0 */
uint F_00a52fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  ushort * puVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this;
  int iVar7;
  int * piVar8;
  undefined4 * puVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_10;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (1 < *(byte *)(param_2 + 0xe11)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x4e,0,0);
  }
  if (3 < *(byte *)(param_2 + 0xe11)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x5c,0,0);
  }
  bVar1 = *(byte *)(param_2 + 0xe11);
  if (REFG(undefined1, 0x1338ad4) == 8) {
    if ((bVar1 < 4) || (7 < bVar1)) goto LAB_00a5306e;
LAB_00a53057: ;
    uVar11 = 0x1d528;
  }
  else {
    if (bVar1 != 8) {
      if ((3 < REFG(undefined1, 0x1338ad4)) || (bVar1 < 4)) goto LAB_00a5306e;
      goto LAB_00a53057;
    }
    uVar11 = 0x1d529;
  }
  ((code *)*(gen_code32 *)(*piVar2 + 0xd8))(piVar2,uVar11,1,0,0xffffffff);
LAB_00a5306e: ;
  bVar10 = REFG(undefined1, 0x1338ad4) != *(byte *)(param_2 + 0xe11);
  REFG(undefined4, 0x1338ac0) = *(undefined4 *)(param_2 + 0xe00);
  REFG(undefined4, 0x1338ac4) = *(undefined4 *)(param_2 + 0xe04);
  REFG(undefined4, 0x1338ac8) = *(undefined4 *)(param_2 + 0xe08);
  REFG(undefined4, 0x1338acc) = *(undefined4 *)(param_2 + 0xe0c);
  REFG(undefined1, 0x1338ad4) = *(undefined1 *)(param_2 + 0xe11);
  REFG(undefined4, 0x1338ad0) = (uint)*(byte *)(param_2 + 0xe10);
  local_10 = 0;
  if (*(char *)(param_2 + 0xe11) != '\0') {
    piVar8 = (int *)(param_2 + 0x28);
    do {
      piVar3 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),local_10);
      if (*piVar8 != *piVar3) {
        bVar10 = true;
        piVar3[0xe2] = 0;
        piVar3[0xe3] = 0;
      }
      *piVar3 = *piVar8;
      piVar3[1] = piVar8[1];
      piVar3[2] = piVar8[-2];
      piVar3[3] = piVar8[-1];
      F_00c4d9ef(piVar3 + 4,0x40,piVar8 + -10,0x3f);
      *(undefined1 *)((int)piVar3 + 0x51) = *(undefined1 *)((int)piVar8 + 9);
      *(undefined1 *)(piVar3 + 0x14) = *(undefined1 *)((int)piVar8 + 10);
      *(undefined1 *)((int)piVar3 + 0x52) = *(undefined1 *)((int)piVar8 + 0xb);
      *(char *)((int)piVar3 + 0x53) = (char)piVar8[3];
      *(undefined1 *)(piVar3 + 0x15) = *(undefined1 *)((int)piVar8 + 0xd);
      piVar3[0x16] = piVar8[5];
      *(short *)(piVar3 + 0x18) = (short)piVar8[7];
      *(short *)(piVar3 + 0x19) = (short)piVar8[8];
      piVar3[0x17] = piVar8[6];
      *(undefined2 *)((int)piVar3 + 0x62) = *(undefined2 *)((int)piVar8 + 0x1e);
      *(undefined2 *)((int)piVar3 + 0x66) = *(undefined2 *)((int)piVar8 + 0x22);
      *(undefined1 *)(piVar3 + 0x1a) = *(undefined1 *)((int)piVar8 + 0xe);
      *(char *)((int)piVar3 + 0x69) = (char)piVar8[4];
      *(bool *)((int)piVar3 + 0x6a) = (char)piVar8[2] != '\0';
      *(undefined1 *)(piVar3 + 0x81) = *(undefined1 *)((int)piVar8 + 0xf);
      piVar3[0x82] = piVar8[9];
      piVar3[0x83] = piVar8[10];
      puVar4 = (ushort *)(piVar8 + 0xc);
      piVar3[0x84] = piVar8[0xb];
      iVar7 = 0;
      do {
        F_00b7b840(piVar3 + 0x1b,iVar7,(uint)*puVar4,(float)(float10)0,(uint)puVar4[1],0);
        puVar4 = puVar4 + 6;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
      iVar7 = 0;
      do {
        F_00b7b8a0(piVar3 + 0x85,iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
      if ((char)piVar8[3] == '\0') {
        piVar3[0xe2] = 0;
        piVar3[0xe3] = 0;
      }
      local_10 = local_10 + 1;
      piVar8 = piVar8 + 0x70;
    } while (local_10 < (int)(uint)*(byte *)(param_2 + 0xe11));
  }
  uVar5 = F_00ae0850(&REFG(undefined, 0x1336e40),param_1);
  if (uVar5 != 0) {
    iVar7 = 0;
    puVar4 = (ushort *)(param_2 + 0xe16);
    do {
      F_00b7b840(uVar5 + 0x214,iVar7,(uint)puVar4[-1],(float)(float10)0,(uint)*puVar4,
                   *(undefined4 *)(puVar4 + 3));
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 6;
    } while (iVar7 < 0x1e);
  }
  puVar9 = &REFG(undefined4, 0x14a9a1c);
  do {
    pvVar6 = (undefined *)*puVar9;
    if (pvVar6 != (undefined *)0x0) {
      bVar1 = F_00ae0910(&REFG(undefined, 0x1336e40),*(undefined4 *)((int)pvVar6 + 0x74));
      F_00aa6a30(pvVar6,(uint)bVar1);
    }
    puVar9 = puVar9 + 1;
  } while ((int)puVar9 < 0x14a9bac);
  if (bVar10) {
    pvVar6 = (undefined *)F_006b8c00();
    F_006de6b0(pvVar6);
  }
  uVar11 = 0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  this = (undefined *)F_00435440(uVar5,uVar11);
  pvVar6 = this;
  if ((this != (undefined *)0x0) && (iVar7 = 0, *(char *)(param_2 + 0xe11) != '\0')) {
    puVar9 = (undefined4 *)(param_2 + 0x20);
    do {
      F_00455780(this,*puVar9,puVar9[1],(uint)*(byte *)((int)puVar9 + 0x12),puVar9 + -8);
      pvVar6 = (undefined *)(uint)*(byte *)(param_2 + 0xe11);
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 0x70;
    } while (iVar7 < (int)pvVar6);
  }
  return (uint)pvVar6;
}

/* ref: FUN_00a53340 */
uint F_00a53340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa53340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int * in_EAX = 0;
  uint uVar6;
  int * this;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar6 = (uint)param_2[1];
    if (uVar6 == 6) {
      F_00ae3230(&REFG(undefined, 0x14c0878),*(undefined4 *)(param_2 + 4),0,0,(uint)*param_2);
      this = (int *)F_00ae1300(&REFG(undefined, 0x14c0878),(uint)*param_2);
      if (this == (int *)0x0) {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 0x2c);
      in_EAX = (int *)this[0x6a];
      in_EAX[2] = *(int *)(param_2 + 0x28);
      in_EAX[3] = iVar2;
    }
    else if (uVar6 == 7) {
      F_00ae3330(&REFG(undefined, 0x14c0878),*(undefined4 *)(param_2 + 4),0,*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0x18),(uint)*param_2);
      this = (int *)F_00ae1300(&REFG(undefined, 0x14c0878),(uint)*param_2);
      if (this == (int *)0x0) {
        return 0;
      }
      F_00a5f570(this,(uint)param_2[0x26]);
      F_00a5f530(this,*(undefined4 *)(param_2 + 0x10));
      this[0x21] = *(int *)(param_2 + 0x14);
      F_00a5f550(this,(uint)*(ushort *)(param_2 + 0x24));
      in_EAX = (int *)F_00ae2030(this,(uint)*(ushort *)(param_2 + 0x28));
      if (*(int *)(param_2 + 0x18) == 0) {
        in_EAX = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*this + 0x4c))(this,*(undefined4 *)(param_2 + 0x1c))));
      }
    }
    else {
      if (uVar6 - 0xb != 0) {
        return uVar6 - 0xb;
      }
      F_00ae39b0(&REFG(undefined, 0x14c0878),(uint)*param_2);
      in_EAX = (int *)F_00ae1300(&REFG(undefined, 0x14c0878),(uint)*param_2);
      this = in_EAX;
    }
    if (this != (int *)0x0) {
      fVar7 = (float10)*(float *)&REFG(undefined, 0x1334840);
      uVar1 = *(ushort *)(param_2 + 0x22);
      fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
      fVar3 = (float10)REFG(double, 0x109cab0);
      fVar8 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      fVar5 = (float10)*(double *)&REFG(undefined, 0x1080228);
      fVar9 = (float10)*(double *)&REFG(undefined, 0x10a3960);
      fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      ((code *)*(gen_code32 *)(*this + 0x40))
                (this,(undefined4)
                      gen_fl2bits(((float)GEN_TOF((((float10)*(ushort *)(param_2 + 0x30) * fVar9) * fVar8 -
                                         fVar10)))),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)*(ushort *)(param_2 + 0x32) * fVar9) * fVar8 - fVar10
                                    )))),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)*(ushort *)(param_2 + 0x34) * fVar9) * fVar8 - fVar10
                                    )))));
      ((code *)*(gen_code32 *)(*this + 0x48))
                (this,(undefined4)
                      gen_fl2bits(((float)GEN_TOF((((float10)uVar1 * ((fVar7 * fVar4) / fVar3)) * fVar8 -
                                         fVar5)))));
      F_00a5f450(this,*(undefined4 *)(param_2 + 8));
      F_00a5f430(this,*(undefined4 *)(param_2 + 0xc));
      *(byte *)((int)this + 0x8a) = param_2[1];
      in_EAX = *(int * PTR32 *)(param_2 + 4);
      this[0x20] = (int)in_EAX;
      if (param_2[1] == 0xb) {
        in_EAX = (int *)F_00ae22b0(this,*(float *)(param_2 + 0x1c));
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a53550 */
uint F_00a53550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa53550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  F_00a7f520(&REFG(undefined1, 0x14ab070),param_2);
  F_00a7f9c0(&REFG(undefined, 0x14ab584),param_2);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = 0;
  if (this != (undefined *)0x0) {
    uVar2 = F_00781660(this,*param_2,param_2[1]);
  }
  return uVar2;
}

/* ref: FUN_00a535a0 */
uint F_00a535a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa535a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  
  iVar4 = REFG(int, 0x1379694);
  F_00a7e4e0(&REFG(undefined1, 0x14ab070),(uint)*param_2);
  F_00a7e510(&REFG(undefined1, 0x14ab070),(uint)*param_2,(uint)*(ushort *)(param_2 + 4));
  if (iVar4 != 0) {
    F_00a7d290(0x231,iVar4,(uint)*param_2,0,0,REFG(float, 0x10916ec));
  }
  F_00a7e5a0(&REFG(undefined1, 0x14ab070),(uint)REFG(undefined2, 0x14ab148));
  iVar4 = 0;
  pbVar3 = param_2 + 8;
  do {
    F_00ac3300(&REFG(undefined, 0x14bcf40),iVar4,*(undefined4 *)pbVar3,(uint)(param_2[1] != 0),0);
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 4;
  } while (iVar4 < 10);
  if (param_2[1] != 0) {
    F_00ac3520(&REFG(undefined, 0x14bcf40),(uint)*param_2,(uint)*(ushort *)(param_2 + 4));
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1,2,(uint)*param_2,0);
  }
  iVar4 = 0;
  do {
    uVar2 = F_00a68680(&REFG(undefined1, 0x14ab070),iVar4,(uint)param_2[iVar4 + 0x30]);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (param_2[1] != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xec))(piVar1,(uint)*param_2);
  }
  if (param_2[2] == 0) {
    uVar2 = F_00a6e4a0(&REFG(undefined, 0x14a9e40),(uint)*param_2,(uint)*(ushort *)(param_2 + 4));
  }
  return uVar2;
}

/* ref: FUN_00a536c0 */
uint F_00a536c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa536c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    uVar2 = F_0045a500(this,param_2);
  }
  return uVar2;
}

/* ref: FUN_00a536f0 */
uint F_00a536f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa536f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  
  if (param_1 == -0x20000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,0);
  }
  if (REFG(int, 0x1379c70) != 3) {
    this = (undefined *)F_006b8c00();
    bVar1 = F_006b8c30(this,uVar2,param_2,param_3,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a53740 */
uint F_00a53740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa53740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  byte bVar1;
  int * piVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar3 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  if (piVar3 == (int *)0x0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xbc)),0x72,"Unknown(%llu)",param_2,param_3);
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(param_2,param_3);
    F_00c472af(((undefined1 *)(gen_frame + 0xbc)),0x72,"%s(%llu)",uVar4);
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x130)),0x96,"Name : %s",((undefined1 *)(gen_frame + 0xbc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x130)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x68)),&REFG(undefined, 0x10e5472),REFG(undefined4, 0x108cc50));
  F_00459b00(this,1,((undefined1 *)(gen_frame + 0x68)),((undefined1 *)(gen_frame + 0x14)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x68)));
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  uVar4 = (uint)uVar7;
  iVar6 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (param_5 != 0) {
    do {
      bVar1 = *(byte *)((*(uint *)(gen_frame + 0xc)) + param_4);
      uVar4 = 0;
      do {
        pcVar5 = "true";
        if ((bVar1 >> ((byte)uVar4 & 0x1f) & 1) == 0) {
          pcVar5 = "false";
        }
        F_00c472af(((undefined1 *)(gen_frame + 0x130)),0x96,"reward[%03u] : %s",iVar6,pcVar5);
        F_0042cc20(((undefined1 *)(gen_frame + 0x68)),((undefined1 *)(gen_frame + 0x130)),REFG(undefined4, 0x108cc50));
        F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e5473),REFG(undefined4, 0x108cc50));
        F_00459b00(this,1,((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x68)),0);
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
        F_0042c880(((undefined1 *)(gen_frame + 0x68)));
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 1;
      } while (uVar4 < 8);
      uVar4 = (*(uint *)(gen_frame + 0xc)) + 1;
      (*(uint *)(gen_frame + 0xc)) = uVar4;
    } while (uVar4 < param_5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return uVar4;
}

/* ref: FUN_00a53940 */
unsigned int F_00a53940(unsigned int gen_a0)
{
  GEN_ENTER(0xa53940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-2] == 0) {
      F_00406b30(puVar1 + -2);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar3 + 0x298 + *(int *)((int)this + 0x24)))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x2a0;
    } while (uVar2 < *(uint *)((int)this + 0x28));
  }
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar3 + 0x20 + *(int *)((int)this + 0x34)))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar2 < *(uint *)((int)this + 0x38));
  }
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  if (*(int *)((int)this + 0x48) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x20 + iVar3))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar2 < *(uint *)((int)this + 0x48));
  }
  return 0;
}

/* ref: FUN_00a53a10 */
uint F_00a53a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa53a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(uVar1 + 0x28);
  *(int *)((int)this + 0x14) = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  if (uVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x20);
    *(undefined4 *)(uVar1 + 0x28) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(uVar1 + 0x24) = 0;
      *(uint *)((int)this + 0x1c) = uVar1;
    }
    else {
      *(int *)(uVar1 + 0x24) = iVar2;
      *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0x28))) = uVar1;
    }
    *(uint *)((int)this + 0x20) = uVar1;
    *(undefined4 *)(uVar1 + 0x10) = param_1;
    uVar3 = F_0046ff40();
    *(ulonglong *)(uVar1 + 8) = uVar3;
    *(undefined4 *)(uVar1 + 0x14) = 0;
    *(undefined4 *)(uVar1 + 0x18) = 0;
    *(undefined4 *)(uVar1 + 0x1c) = 0;
    *(undefined4 *)(uVar1 + 0x20) = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00a53a80 */
uint F_00a53a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa53a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    while (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x54);
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x50) = 0;
        }
        if (iVar1 == *(int *)(param_1 + 0x18)) {
          iVar2 = *(int *)(iVar1 + 0x50);
          *(int *)(param_1 + 0x18) = iVar2;
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x54) = 0;
          }
        }
        if (*(int *)(iVar1 + 0x50) != 0) {
          *(undefined4 *)(iVar1 + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x50) + 0x50)));
        }
        if (*(int *)(iVar1 + 0x54) != 0) {
          *(undefined4 *)(iVar1 + 0x54) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x54) + 0x54)));
        }
        iVar2 = *(int *)((int)this + 0xc);
        *(undefined4 *)(iVar1 + 0x54) = 0;
        if (iVar2 == 0) {
          *(undefined4 *)(iVar1 + 0x50) = 0;
          *(int *)((int)this + 8) = iVar1;
        }
        else {
          *(int *)(iVar1 + 0x50) = iVar2;
          *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x54))) = iVar1;
        }
        *(int *)((int)this + 0xc) = iVar1;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      }
      iVar1 = *(int *)(param_1 + 0x14);
    }
    if (param_1 == *(int *)((int)this + 0x1c)) {
      iVar1 = *(int *)(param_1 + 0x28);
      *(int *)((int)this + 0x1c) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x24) = 0;
      }
    }
    if (param_1 == *(int *)((int)this + 0x20)) {
      iVar1 = *(int *)(param_1 + 0x24);
      *(int *)((int)this + 0x20) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x24) + 0x24)));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x28) + 0x28)));
    }
    iVar1 = *(int *)((int)this + 0x18);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(int *)(param_1 + 0x24) = iVar1;
      uVar3 = *(uint *)((int)this + 0x18);
      *(int *)(uVar3 + 0x28) = param_1;
      *(int *)((int)this + 0x18) = param_1;
      return uVar3;
    }
    *(int *)((int)this + 0x18) = param_1;
    *(int *)((int)this + 0x14) = param_1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    in_EAX = 0;
  }
  return in_EAX;
}

/* ref: FUN_00a53b70 */
byte F_00a53b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa53b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x24)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 300;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(undefined1 *)(gen_frame + 0x28)) = (undefined1)param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974dd0(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar1;
}

/* ref: FUN_00a53c00 */
uint F_00a53c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa53c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x15ff0];
  uint * puVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x15fdc)) = 0xa53c20;
  (*(uint *)(gen_frame + 0x15fdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  piVar3 = (int *)F_00e83c50();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9e7b0(((undefined1 *)(gen_frame + 0x15da8)));
    F_00f3d350(((undefined1 *)(gen_frame + 0x10010)));
    piVar3 = (int *)F_00e83c20(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x10010)));
    piVar3 = (int *)F_00e83c60();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,0x16);
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x14);
      if ((uVar4 != 0) && (uVar6 != 0)) {
        uVar7 = F_00aadfc0(&REFG(undefined, 0x14b5ef0),param_1);
        puVar1 = *(uint * PTR32 *)(uVar6 + 0x20);
        if (uVar7 != *puVar1) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *puVar1 = uVar7;
        if (**(int * PTR32 *)(uVar4 + 0x20) != 0) {
          **(int * PTR32 *)(uVar4 + 0x20) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) != (*(int *)(gen_frame + 0x15ab8))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) = (*(int *)(gen_frame + 0x15ab8));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) != (*(int *)(gen_frame + 0x15abc))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) = (*(int *)(gen_frame + 0x15abc));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) != (*(int *)(gen_frame + 0x15ac0))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) = (*(int *)(gen_frame + 0x15ac0));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) != (*(int *)(gen_frame + 0x15aa0))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) = (*(int *)(gen_frame + 0x15aa0));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) != (*(int *)(gen_frame + 0x15aa8))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) = (*(int *)(gen_frame + 0x15aa8));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) != (*(int *)(gen_frame + 0x15aa4))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) = (*(int *)(gen_frame + 0x15aa4));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1c))) != (*(int *)(gen_frame + 0x15aac))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1c))) = (*(int *)(gen_frame + 0x15aac));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20))) != (*(int *)(gen_frame + 0x15ab0))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20))) = (*(int *)(gen_frame + 0x15ab0));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x24))) != (*(int *)(gen_frame + 0x15ab4))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x24))) = (*(int *)(gen_frame + 0x15ab4));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x28))) != (*(int *)(gen_frame + 0x15b30))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x28))) = (*(int *)(gen_frame + 0x15b30));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2c))) != (*(int *)(gen_frame + 0x15b44))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2c))) = (*(int *)(gen_frame + 0x15b44));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) != (*(int *)(gen_frame + 0x15b40))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) = (*(int *)(gen_frame + 0x15b40));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x34))) != (*(int *)(gen_frame + 0x15b38))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x34))) = (*(int *)(gen_frame + 0x15b38));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x38))) != (*(int *)(gen_frame + 0x15b3c))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x38))) = (*(int *)(gen_frame + 0x15b3c));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x3c))) != (*(int *)(gen_frame + 0x15b34))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x3c))) = (*(int *)(gen_frame + 0x15b34));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x40))) != (*(int *)(gen_frame + 0x15aec))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x40))) = (*(int *)(gen_frame + 0x15aec));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) != (*(int *)(gen_frame + 0x15af4))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) = (*(int *)(gen_frame + 0x15af4));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x44))) != (*(int *)(gen_frame + 0x15af0))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x44))) = (*(int *)(gen_frame + 0x15af0));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x4c))) != (*(int *)(gen_frame + 0x15af8))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x4c))) = (*(int *)(gen_frame + 0x15af8));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x50))) != (*(int *)(gen_frame + 0x15b20))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x50))) = (*(int *)(gen_frame + 0x15b20));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5c))) != (*(int *)(gen_frame + 0x15b2c))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5c))) = (*(int *)(gen_frame + 0x15b2c));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x54))) != (*(int *)(gen_frame + 0x15b24))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x54))) = (*(int *)(gen_frame + 0x15b24));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x58))) != (*(int *)(gen_frame + 0x15b28))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x58))) = (*(int *)(gen_frame + 0x15b28));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
      }
    }
    F_00f104c0(((undefined1 *)(gen_frame + 0x10010)));
    uVar4 = F_00e9e800(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84c10();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ef30(((undefined1 *)(gen_frame + 0x15ca8)));
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84be0(((undefined1 *)(gen_frame + 0x15ca8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84c20();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15ca8)));
    if (REFG(int, 0x14a7404) != (*(int *)(gen_frame + 0x15f64))) {
      REFG(int, 0x14a7404) = (*(int *)(gen_frame + 0x15f64));
    }
    if (REFG(int, 0x14a7408) != (*(int *)(gen_frame + 0x15f68))) {
      REFG(int, 0x14a7408) = (*(int *)(gen_frame + 0x15f68));
    }
    if (REFG(int, 0x14a740c) != (*(int *)(gen_frame + 0x15f6c))) {
      REFG(int, 0x14a740c) = (*(int *)(gen_frame + 0x15f6c));
    }
    if (REFG(int, 0x14a7414) != (*(int *)(gen_frame + 0x15f74))) {
      REFG(int, 0x14a7414) = (*(int *)(gen_frame + 0x15f74));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f50)));
    uVar4 = F_00e9ef90(((undefined1 *)(gen_frame + 0x15ca8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84d60();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9efe0(((undefined1 *)(gen_frame + 0x15da8)));
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84d30(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84d70();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    if (REFG(int, 0x14a7418) != (*(int *)(gen_frame + 0x15f78))) {
      REFG(int, 0x14a7418) = (*(int *)(gen_frame + 0x15f78));
    }
    if (REFG(int, 0x14a741c) != (*(int *)(gen_frame + 0x15f7c))) {
      REFG(int, 0x14a741c) = (*(int *)(gen_frame + 0x15f7c));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f50)));
    uVar4 = F_00e9f030(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84eb0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9f080(((undefined1 *)(gen_frame + 0x15d48)));
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84e80(((undefined1 *)(gen_frame + 0x15d48)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84ec0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15d48)));
    if (REFG(int, 0x14a7420) != (*(int *)(gen_frame + 0x15f80))) {
      REFG(int, 0x14a7420) = (*(int *)(gen_frame + 0x15f80));
    }
    if (REFG(int, 0x14a7424) != (*(int *)(gen_frame + 0x15f84))) {
      REFG(int, 0x14a7424) = (*(int *)(gen_frame + 0x15f84));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f50)));
    uVar4 = F_00e9f0d0(((undefined1 *)(gen_frame + 0x15d48)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84ac0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ee90(((undefined1 *)(gen_frame + 0x15da8)));
    piVar3 = (int *)F_00e84a90(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84ad0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    bVar2 = REFG(undefined1, 0x14a9260);
    if ((char)REFG(undefined1, 0x14a9260) < '\0') {
      bVar2 = 0;
    }
    (*(undefined4 *)(gen_frame + 0x10008)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10008)), 1, 3),bVar2);
    (*(uint *)(gen_frame + 0x1000c)) = param_1 & 0xffffff00;
    if (bVar2 != 0) {
      (*(uint *)(gen_frame + 0x1000c)) = CONCAT31((int3)(param_1 >> 8),(&REFG(undefined1, 0x14a9260))[(int)(bVar2)]);
    }
    F_00a68910(&REFG(undefined1, 0x14ab070),(*(undefined4 *)(gen_frame + 0x10008)));
    F_00a7e790(&REFG(undefined1, 0x14ab070),(*(undefined4 *)(gen_frame + 0x10008)),(*(uint *)(gen_frame + 0x1000c)));
    uVar9 = 0xc0;
    pvVar8 = (undefined *)F_006b8c00();
    F_006de4e0(pvVar8,uVar9);
    uVar4 = F_00e9eee0(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e83da0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9e850(((undefined1 *)(gen_frame + 0x15e08)));
    piVar3 = (int *)F_00e83d70(((undefined1 *)(gen_frame + 0x15e08)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e83db0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15e08)));
    uVar4 = F_00e9e8a0(((undefined1 *)(gen_frame + 0x15e08)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84970();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9edf0(((undefined1 *)(gen_frame + 0x15c88)));
    piVar3 = (int *)F_00e84940(((undefined1 *)(gen_frame + 0x15c88)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84980();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15c88)));
    pvVar8 = (undefined *)F_006b8c00();
    F_0070f520(pvVar8);
    uVar4 = F_00e9ee40(((undefined1 *)(gen_frame + 0x15c88)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84820();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ed50(((undefined1 *)(gen_frame + 0x15da8)));
    piVar3 = (int *)F_00e847f0(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84830();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    uVar4 = F_00e9eda0(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e83ef0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9e8f0(((undefined1 *)(gen_frame + 0x15e08)));
    piVar3 = (int *)F_00e83ec0(((undefined1 *)(gen_frame + 0x15e08)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e83f00();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15e08)));
    uVar4 = F_00e9e940(((undefined1 *)(gen_frame + 0x15e08)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84430();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9eb70(((undefined1 *)(gen_frame + 0x15dd8)));
    piVar3 = (int *)F_00e84400(((undefined1 *)(gen_frame + 0x15dd8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84440();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15dd8)));
    uVar4 = F_00e9ebc0(((undefined1 *)(gen_frame + 0x15dd8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e842e0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ead0(((undefined1 *)(gen_frame + 0x15dd8)));
    piVar3 = (int *)F_00e842b0(((undefined1 *)(gen_frame + 0x15dd8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e842f0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15dd8)));
    uVar4 = F_00e9eb20(((undefined1 *)(gen_frame + 0x15dd8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e846d0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ecb0(((undefined1 *)(gen_frame + 0x15cb8)));
    piVar3 = (int *)F_00e846a0(((undefined1 *)(gen_frame + 0x15cb8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e846e0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15cb8)));
    uVar4 = F_00e9ed00(((undefined1 *)(gen_frame + 0x15cb8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84580();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ec10(((undefined1 *)(gen_frame + 0x15da8)));
    piVar3 = (int *)F_00e84550(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84590();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    uVar4 = F_00e9ec60(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84190();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ea30(((undefined1 *)(gen_frame + 0x15d18)));
    piVar3 = (int *)F_00e84160(((undefined1 *)(gen_frame + 0x15d18)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e841a0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15d18)));
    uVar4 = F_00e9ea80(((undefined1 *)(gen_frame + 0x15d18)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84040();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9e990(((undefined1 *)(gen_frame + 0x15e08)));
    piVar3 = (int *)F_00e84010(((undefined1 *)(gen_frame + 0x15e08)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84050();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15e08)));
    F_00a66c00(&REFG(undefined, 0x14ab744),2);
    uVar4 = F_00e9e9e0(((undefined1 *)(gen_frame + 0x15e08)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar4;
}

/* ref: FUN_00a54690 */
uint F_00a54690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa54690u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined1 * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  puVar6 = (undefined1 *)(param_1 + 3);
  (*(int *)(gen_frame + 0x4)) = 0;
  puVar5 = &REFG(undefined1, 0x14a882a);
  do {
    puVar7 = puVar5 + -6;
    F_00f00b60(((undefined1 *)(gen_frame + 0x8)),puVar7);
    sVar2 = (*(short *)(gen_frame + 0xc));
    sVar1 = *(short *)(puVar6 + -3);
    if ((*(short *)(gen_frame + 0xc)) == 0) {
      if (sVar1 != 0) {
LAB_00a546ed: ;
        *(short *)(puVar5 + -2) = sVar1;
        *puVar5 = puVar6[-1];
        puVar5[1] = *puVar6;
        puVar5[2] = puVar6[1];
        puVar5[3] = puVar6[2];
        puVar5[4] = puVar6[3];
        puVar5[5] = puVar6[4];
        puVar5[6] = puVar6[5];
        puVar8 = ((undefined1 *)(gen_frame + 0x8));
        puVar5[7] = puVar6[6];
        iVar9 = (*(int *)(gen_frame + 0x4));
        pvVar3 = (undefined *)F_006b8c00();
        F_00703900(pvVar3,puVar7,puVar8,iVar9);
        if (sVar2 == 0) {
          *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + 1;
        }
        else if (*(short *)(puVar6 + -3) == 0) {
          *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + -1;
        }
      }
    }
    else if (((*(short *)(gen_frame + 0xc)) == sVar1) || (sVar1 == 0)) goto LAB_00a546ed;
    F_00ef87b0(((undefined1 *)(gen_frame + 0x8)));
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
    puVar6 = puVar6 + 10;
    puVar5 = puVar5 + 0x10;
    if (0x1d < (ushort)(*(int *)(gen_frame + 0x4))) {
      if (REFG(char, 0x14a73d2) == '\0') {
        REFG(char, 0x14a73d2) = '\x01';
        pvVar3 = (undefined *)F_006b8c00();
        F_006e5e00(pvVar3);
      }
      REFG(undefined4, 0x14a458f) = 1;
      uVar4 = F_00a679e0(&REFG(undefined, 0x14ac288));
      REFG(undefined4, 0x14b0ee0) = 1;
      if (uVar4 == 1) {
        *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
      }
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00a547d0 */
uint F_00a547d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa547d0u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  undefined * this;
  int iVar2;
  uint uVar3;
  undefined1 * puVar4;
  ushort * puVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  
  (*(int *)(gen_frame + 0x18)) = 0;
  puVar4 = &REFG(undefined1, 0x14a8afa);
  puVar5 = param_1;
  do {
    puVar6 = puVar4 + -6;
    F_00e781d0(((undefined1 *)(gen_frame + 0x4)),puVar6);
    (*(uint *)(gen_frame + 0x14)) = (uint)(*(ushort *)(gen_frame + 0x8));
    uVar1 = *puVar5;
    if ((*(ushort *)(gen_frame + 0x8)) == 0) {
      if (uVar1 != 0) {
LAB_00a5481f: ;
        *(ushort *)(puVar4 + -2) = uVar1;
        *puVar4 = (char)puVar5[1];
        *(ushort *)(puVar4 + 2) = puVar5[2];
        *(ushort *)(puVar4 + 4) = puVar5[3];
        puVar7 = ((undefined1 *)(gen_frame + 0x4));
        puVar4[6] = (char)puVar5[4];
        iVar2 = (*(int *)(gen_frame + 0x18));
        this = (undefined *)F_006b8c00();
        F_0070e450(this,puVar6,puVar7,iVar2);
        if ((short)(*(uint *)(gen_frame + 0x14)) == 0) {
          *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + 1;
        }
        else if (*puVar5 == 0) {
          *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + -1;
        }
      }
    }
    else if (((*(ushort *)(gen_frame + 0x8)) == uVar1) || (uVar1 == 0)) goto LAB_00a5481f;
    F_00e6ced0(((undefined1 *)(gen_frame + 0x4)));
    iVar2 = (*(int *)(gen_frame + 0x18)) + 1;
    puVar5 = puVar5 + 5;
    puVar4 = puVar4 + 0x10;
    (*(int *)(gen_frame + 0x18)) = iVar2;
    if (0xf < (ushort)iVar2) {
      if (REFG(char, 0x14a73d9) == '\0') {
        REFG(char, 0x14a73d9) = '\x01';
        F_006b8c00();
        F_006b8cd0();
      }
      uVar3 = F_00a679e0(&REFG(undefined, 0x14ac288));
      REFG(undefined4, 0x14b0ee0) = 1;
      if (uVar3 == 2) {
        *(undefined4 *)&REFG(undefined, 0x14afd2c) = 2;
      }
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_00a548d0 */
uint F_00a548d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa548d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined1 gen_out[0x4];
  byte bVar1;
  uint uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  this = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar3 = 0;
  if (this != (undefined *)0x0) {
    F_00aa39d0(this,(uint)(*param_2 & 1));
    F_00aa9000(this,(uint)(*param_2 >> 1 & 1));
    F_00aa1720(this,(uint)(*param_2 >> 2 & 1));
    bVar1 = F_00a9f620(this);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      REFG(undefined2, 0x14b4eb8) = *(undefined2 *)param_2;
      uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),REFG(undefined2, 0x14b4eb8));
    }
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
  return uVar3;
}

/* ref: FUN_00a54950 */
uint F_00a54950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if (*(ushort *)(param_2 + 2) == 0x1aa) {
    uVar3 = *(uint *)((int)this + 0x1c);
    if (uVar3 != 0) {
      do {
        if (*(int *)(uVar3 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54a40;
        uVar3 = *(uint *)(uVar3 + 0x28);
      } while (uVar3 != 0);
    }
    uVar3 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    uVar2 = 0;
    if (uVar3 != 0) {
LAB_00a54a40: ;
      uVar2 = *(uint *)(param_2 + 0x10);
      ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
      uVar1 = *(uint *)(param_2 + 0x14);
      ((uint *)(gen_frame + 0x8))[0] = uVar2;
      ((uint *)(gen_frame + 0x8))[1] = uVar1;
      *(uint *)(uVar3 + 0x20) = uVar1 & 0xff;
      uVar2 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar3,((uint *)(gen_frame + 0x0)));
      if (*(int *)(uVar3 + 0x20) <= *(int *)(uVar3 + 0x1c)) {
        F_00a3b630(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar3 + 0x14));
        uVar2 = F_00a53a80((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar3);
      }
    }
  }
  else {
    uVar2 = *(ushort *)(param_2 + 2) - 0x1ab;
    if (uVar2 == 0) {
      uVar3 = *(uint *)((int)this + 0x1c);
      if (uVar3 != 0) {
        do {
          if (*(int *)(uVar3 + 0x10) == *(int *)(param_2 + 0x10)) {
            (*(uint *)(gen_frame + 0x4c)) = uVar3;
            goto LAB_00a549b7;
          }
          uVar3 = *(uint *)(uVar3 + 0x28);
        } while (uVar3 != 0);
      }
      uVar3 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
      (*(uint *)(gen_frame + 0x4c)) = uVar3;
      uVar2 = 0;
      if (uVar3 != 0) {
LAB_00a549b7: ;
        uVar3 = (*(uint *)(gen_frame + 0x4c));
        ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
        puVar5 = (uint *)(param_2 + 0x10);
        puVar6 = ((uint *)(gen_frame + 0x8));
        for (iVar4 = 0x10; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar3,((uint *)(gen_frame + 0x0)));
        uVar3 = (*(uint *)(gen_frame + 0x4c));
        uVar2 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x20);
        if ((uVar2 != 0xffffffff) && ((int)uVar2 <= *(int *)((*(uint *)(gen_frame + 0x4c)) + 0x1c))) {
          F_00a3b630(&REFG(undefined, 0x14a4230),*(undefined4 *)((*(uint *)(gen_frame + 0x4c)) + 0x14));
          uVar3 = F_00a53a80(this_00,uVar3);
          return uVar3;
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a54a90 */
uint F_00a54a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if (*(ushort *)(param_2 + 2) == 0x1ac) {
    uVar3 = *(uint *)((int)this + 0x1c);
    if (uVar3 != 0) {
      do {
        if (*(int *)(uVar3 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54b8b;
        uVar3 = *(uint *)(uVar3 + 0x28);
      } while (uVar3 != 0);
    }
    uVar3 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    uVar2 = 0;
    if (uVar3 != 0) {
LAB_00a54b8b: ;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      uVar2 = *(uint *)(param_2 + 0x14);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + 0x10);
      ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
      (*(uint *)(gen_frame + 0xc)) = uVar2;
      *(uint *)(uVar3 + 0x20) = uVar2 & 0xff;
      uVar2 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar3,((uint *)(gen_frame + 0x0)));
      if (*(int *)(uVar3 + 0x20) <= *(int *)(uVar3 + 0x1c)) {
        F_00a3b5a0(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar3 + 0x14));
        uVar2 = F_00a53a80(this_00,uVar3);
      }
    }
  }
  else {
    uVar2 = *(ushort *)(param_2 + 2) - 0x1ad;
    if (uVar2 == 0) {
      uVar3 = *(uint *)((int)this + 0x1c);
      if (uVar3 != 0) {
        do {
          if (*(int *)(uVar3 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54af3;
          uVar3 = *(uint *)(uVar3 + 0x28);
        } while (uVar3 != 0);
      }
      uVar3 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
      uVar2 = 0;
      if (uVar3 != 0) {
LAB_00a54af3: ;
        (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x18);
        ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
        (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
        (*(uint *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 0x14);
        (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + 0x20);
        (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 0x1c);
        (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_2 + 0x24);
        F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar3,((uint *)(gen_frame + 0x0)));
        uVar2 = *(uint *)(uVar3 + 0x20);
        if ((uVar2 != 0xffffffff) && ((int)uVar2 <= *(int *)(uVar3 + 0x1c))) {
          F_00a3b5a0(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar3 + 0x14));
          uVar3 = F_00a53a80((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar3);
          return uVar3;
        }
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Network::PacketQue::vf1 */
uint F_00a54be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined * this_00;
  uint uVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if (*(ushort *)(param_2 + 2) == 0x1b1) {
    uVar5 = *(uint *)(this + 0x1c);
    if (uVar5 != 0) {
      do {
        if (*(int *)(uVar5 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54cdb;
        uVar5 = *(uint *)(uVar5 + 0x28);
      } while (uVar5 != 0);
    }
    uVar5 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    if (uVar5 == 0) {
      return 0;
    }
LAB_00a54cdb: ;
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48));
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    ((undefined4 *)(gen_frame + 0x8))[0] = uVar2;
    ((undefined4 *)(gen_frame + 0x8))[2] = uVar4;
    ((undefined4 *)(gen_frame + 0x8))[1] = uVar3;
    ((undefined4 *)(gen_frame + 0x8))[3] = *(undefined4 *)(param_2 + 0x1c);
    *(uint *)(uVar5 + 0x20) = (uint)*(byte *)(param_2 + 0x1a);
    uVar7 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar5,((uint *)(gen_frame + 0x0)));
    if (*(int *)(uVar5 + 0x1c) < *(int *)(uVar5 + 0x20)) {
      return uVar7;
    }
    uVar11 = *(uint *)(uVar5 + 0x14);
  }
  else {
    uVar5 = *(ushort *)(param_2 + 2) - 0x1b2;
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar5 = *(uint *)(this + 0x1c);
    if (uVar5 != 0) {
      do {
        if (*(int *)(uVar5 + 0x10) == *(int *)(param_2 + 0x10)) {
          (*(uint *)(gen_frame + 0x4c)) = uVar5;
          goto LAB_00a54c47;
        }
        uVar5 = *(uint *)(uVar5 + 0x28);
      } while (uVar5 != 0);
    }
    uVar5 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    (*(uint *)(gen_frame + 0x4c)) = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
LAB_00a54c47: ;
    uVar5 = (*(uint *)(gen_frame + 0x4c));
    ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
    puVar9 = (undefined4 *)(param_2 + 0x10);
    puVar10 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar8 = 0xc; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar5,((uint *)(gen_frame + 0x0)));
    uVar5 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x20);
    if (uVar5 == 0xffffffff) {
      return 0xffffffff;
    }
    if (*(int *)((*(uint *)(gen_frame + 0x4c)) + 0x1c) < (int)uVar5) {
      return uVar5;
    }
    uVar11 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x14);
    uVar6 = uVar11;
    uVar5 = (*(uint *)(gen_frame + 0x4c));
    uVar7 = 0;
    if (uVar11 != 0) {
      do {
        uVar7 = uVar6;
        if (*(int *)(uVar6 + 8) == 0x1b1) goto LAB_00a54d1d;
        puVar1 = (uint *)(uVar6 + 0x54);
        uVar6 = *puVar1;
      } while (*puVar1 != 0);
      uVar7 = 0;
    }
  }
LAB_00a54d1d: ;
  F_00a47b20(&REFG(undefined, 0x14a4230),uVar11,uVar7);
  uVar5 = F_00a53a80(this_00,uVar5);
  return uVar5;
}

/* ref: FUN_00a54d40 */
uint F_00a54d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa54d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  uVar3 = *(uint *)((int)this + 0x1c);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  for (; uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x28)) {
    if (*(int *)(uVar3 + 0x10) == param_2) {
      (*(uint *)(gen_frame + 0x4c)) = uVar3;
      goto LAB_00a54d8f;
    }
  }
  uVar3 = F_00a53a10(this,param_2);
  (*(uint *)(gen_frame + 0x4c)) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
LAB_00a54d8f: ;
  uVar3 = (uint)*(ushort *)(param_3 + 2);
  ((uint *)(gen_frame + 0x0))[0] = uVar3;
  if (uVar3 == 0x1af) {
    puVar5 = (undefined4 *)(param_3 + 0x10);
    iVar4 = 0x10;
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
  }
  else {
    if (uVar3 != 0x1b3) {
      if (uVar3 == 0x1b7) {
        uVar1 = *(undefined4 *)(param_3 + 0x14);
        ((undefined4 *)(gen_frame + 0x8))[0] = *(undefined4 *)(param_3 + 0x10);
        ((undefined4 *)(gen_frame + 0x8))[1] = uVar1;
        ((undefined4 *)(gen_frame + 0x8))[2] = *(undefined4 *)(param_3 + 0x18);
        ((undefined4 *)(gen_frame + 0x8))[3] = *(undefined4 *)(param_3 + 0x1c);
      }
      goto LAB_00a54de6;
    }
    iVar4 = 8;
    puVar5 = (undefined4 *)(param_3 + 0x10);
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
  }
  for (; this = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_00a54de6: ;
  F_00a4fee0(this,(*(uint *)(gen_frame + 0x4c)),((uint *)(gen_frame + 0x0)));
  uVar2 = (*(uint *)(gen_frame + 0x4c));
  uVar3 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x20);
  if ((uVar3 != 0xffffffff) && ((int)uVar3 <= *(int *)((*(uint *)(gen_frame + 0x4c)) + 0x1c))) {
    F_00a49c10(&REFG(undefined, 0x14a4230),*(undefined4 *)((*(uint *)(gen_frame + 0x4c)) + 0x14),param_1);
    uVar3 = F_00a53a80(this,uVar2);
  }
  return uVar3;
}

/* ref: FUN_00a54e30 */
unsigned int F_00a54e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa54e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    do {
      if (*(uint *)((int)this + 0x2c) == *(uint *)((int)this + 0x30)) {
        return 0;
      }
      uVar1 = *(uint *)((int)this + 0x2c);
      while( true ) {
        uVar2 = (*(int *)((int)this + 0x2c) + 1U) % *(uint *)((int)this + 0x28);
        *(uint *)((int)this + 0x2c) = uVar2;
        if (*((char *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *(int *)((int)this + 0x24)))) != '\0') break;
        uVar1 = uVar2;
        if (uVar2 == *(uint *)((int)this + 0x30)) {
          return 0;
        }
      }
      *((undefined1 *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *(int *)((int)this + 0x24)))) = 0;
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + uVar1 * 0x2a0)));
      if (REFG(int, 0x1379c70) == 3) {
        return 0;
      }
      this_00 = (undefined *)F_00a64860(&REFG(undefined, 0x14a9a18),*puVar3,(uint)*(byte *)((int)puVar3 + 0x3b));
      if (this_00 != (undefined *)0x0) {
        F_00aac200(this_00,puVar3 + 4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return 0;
}

/* ref: FUN_00a54ef0 */
byte F_00a54ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa54ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * this;
  uint uVar1;
  int * piVar2;
  uint * puVar3;
  undefined * this_00;
  int unaff_ECX = 0;
  
  if (REFG(int, 0x1379c70) == 3) {
    return 0;
  }
  this = (int *)(unaff_ECX + 0x24);
  F_00a5e350(this,&(*(uint *)(gen_frame + 0x14)));
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x18));
  uVar1 = (*(uint *)(gen_frame + 0x14));
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
    if (*piVar2 == param_1) break;
    puVar3 = (uint *)F_00a5e3d0(this,((undefined1 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x14)));
    uVar1 = *puVar3;
    piVar2 = (int *)puVar3[1];
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x18));
  }
  this_00 = (undefined *)F_00a64860(&REFG(undefined, 0x14a9a18),*piVar2,(uint)*(byte *)((int)piVar2 + 0x3b));
  if (this_00 != (undefined *)0x0) {
    F_00aac200(this_00,piVar2 + 4);
  }
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(unaff_ECX + 0x28))) {
    *(undefined1 *)(uVar1 * 0x2a0 + 0x298 + *this) = 0;
  }
  return 1;
}

/* ref: FUN_00a54f07 */
byte F_00a54f07(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54f07u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * this;
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  
  this = (int *)(in_ecx + 0x24);
  F_00a5e350(this,in_ebp + -8);
  uVar2 = *(uint *)(in_ebp + -8);
  if (uVar2 != 0xffffffff) {
    piVar3 = *(int * PTR32 *)(in_ebp + -4);
    do {
      if (*piVar3 == *(int *)(in_ebp + 8)) {
        this_00 = (undefined *)F_00a64860(&REFG(undefined, 0x14a9a18),*piVar3,(uint)*(byte *)((int)piVar3 + 0x3b));
        if (this_00 != (undefined *)0x0) {
          F_00aac200(this_00,piVar3 + 4);
        }
        if ((-1 < (int)uVar2) && (uVar2 < *(uint *)(in_ecx + 0x28))) {
          *(undefined1 *)(uVar2 * 0x2a0 + 0x298 + *this) = 0;
        }
        return 1;
      }
      puVar1 = (uint *)F_00a5e3d0(this,in_ebp + -0x10,in_ebp + -8);
      uVar2 = *puVar1;
      piVar3 = (int *)puVar1[1];
      *(uint *)(in_ebp + -8) = uVar2;
      *(int * PTR32 *)(in_ebp + -4) = piVar3;
    } while (uVar2 != 0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a54fa0 */
uint F_00a54fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa54fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = (int *)((int)this + 0x24);
  F_00a5e350(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar1 = (*(uint *)(gen_frame + 0x4));
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x4)) != 0xffffffff) {
    do {
      if (((*piVar2 == param_1) && (-1 < (int)uVar1)) && (uVar1 < *(uint *)((int)this + 0x28))) {
        *(undefined1 *)(uVar1 * 0x2a0 + 0x298 + *this_00) = 0;
      }
      if (uVar1 != *(uint *)((int)this + 0x30)) {
        do {
          uVar1 = (uVar1 + 1) % *(uint *)((int)this + 0x28);
          if (*(char *)(uVar1 * 0x2a0 + 0x298 + *this_00) != '\0') {
            piVar2 = (int *)(uVar1 * 0x2a0 + *this_00);
            goto LAB_00a55014;
          }
        } while (uVar1 != *(uint *)((int)this + 0x30));
      }
      uVar1 = 0xffffffff;
      piVar2 = (int *)0x0;
LAB_00a55014: ;
    } while (uVar1 != 0xffffffff);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00a55030 */
unsigned int F_00a55030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte * pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 * puVar9;
  byte bVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (param_1 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)((int)this + 0x34);
    do {
      F_00a5e4b0((*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
      if ((*(char *)(gen_frame + 0x18)) == '\0') {
        return 0;
      }
      if ((*(char *)(gen_frame + 0x19)) != '\0') {
        pbVar1 = (byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 4);
        this_00 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
        if (this_00 != (undefined *)0x0) {
          uVar11 = puVar9[2];
          (*(uint *)(gen_frame + 0xc)) = uVar11;
          (*(int *)(gen_frame + 0x10)) = puVar9[3];
          uVar8 = *(uint *)((int)this_00 + 0xf8);
          uVar12 = (puVar9[3] - *(int *)((int)this_00 + 0xfc)) -
                   (uint)(uVar11 < *(uint *)((int)this_00 + 0xf8));
          bVar10 = F_00a611f0(this_00,0,&(*(uint *)(gen_frame + 0xc)));
          if (bVar10 != 0) {
            fVar2 = ((float)GEN_TOF(((-(float10)(longlong)(((ulonglong)uVar12 & 0x80000000) << 0x20) +
                            ((float10)GEN_TOD((CONCAT44(uVar12,uVar11 - uVar8) & 0x7fffffffffffffff)))) /
                           (float10)*(double *)&REFG(undefined, 0x10912a8))));
            (*(float *)(gen_frame + 0x20)) = fVar2;
            fVar13 = F_00a9f650(this_00,fVar2,pbVar1);
            (*(float *)(gen_frame + 0x1c)) = (float)fVar13;
            (*(float *)(gen_frame + 0x20)) = gen_bits2f((uint)*(byte *)(puVar9 + 5));
            fVar14 = ((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                     (float10)*(double *)&REFG(undefined, 0x1088100);
            fVar2 = ((float)GEN_TOF(((float10)*(byte *)(puVar9 + 5) / (float10)REFG(double, 0x10944b8))));
            (*(float *)(gen_frame + 0x20)) = fVar2;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(byte *)((int)puVar9 + 0x11));
            uVar11 = (uint)*pbVar1;
            fVar15 = (float10)*(double *)&REFG(undefined, 0x10928e8);
            fVar3 = ((float)GEN_TOF((((float10)*(byte *)((int)puVar9 + 0x11) * fVar14) * fVar15 -
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x1c)) = fVar3;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar11);
            fVar4 = ((float)GEN_TOF((((float10)uVar11 * fVar14) * fVar15 - (float10)*(double *)&REFG(undefined, 0x1080228))))
            ;
            (*(float *)(gen_frame + 0x1c)) = fVar4;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)((int)puVar9 + 0x1a));
            fVar14 = (float10)*(double *)&REFG(undefined, 0x10a3960);
            fVar16 = (float10)*(double *)&REFG(undefined, 0x10912a8);
            fVar5 = ((float)GEN_TOF((((float10)*(ushort *)((int)puVar9 + 0x1a) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar5;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(puVar9 + 6));
            fVar6 = ((float)GEN_TOF((((float10)*(ushort *)(puVar9 + 6) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar6;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)((int)puVar9 + 0x16));
            fVar7 = ((float)GEN_TOF((((float10)*(ushort *)((int)puVar9 + 0x16) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar7;
            F_00a9f6d0(this_00,fVar7,fVar6,fVar5,fVar4,fVar3,(uint)*(byte *)((int)puVar9 + 0x12),
                         (uint)*(byte *)((int)puVar9 + 0x13),(float)fVar13,fVar2);
          }
        }
      }
      uVar11 = (*(uint *)(gen_frame + 0x28)) + 1;
      (*(uint *)(gen_frame + 0x28)) = uVar11;
    } while (uVar11 < param_1);
  }
  return 0;
}

/* ref: FUN_00a55210 */
unsigned int F_00a55210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar3 = 0;
  if (param_1 != 0) {
    do {
      F_00a5e680((undefined *)((int)this + 0x44),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      if ((*(char *)(gen_frame + 0x8)) == '\0') {
        return 0;
      }
      if ((*(char *)(gen_frame + 0x9)) != '\0') {
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1a));
        fVar4 = (float10)*(double *)&REFG(undefined, 0x10a3960);
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 7));
        fVar5 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar6 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1a) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1e));
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 7) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1e) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)REFG(double, 0x109cab0))) * fVar5 - (float10)*(double *)&REFG(undefined, 0x1080228))));
        uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),*(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
        if (uVar2 != 0) {
          F_00a9f750(uVar2,(*(float *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)),GEN_TOF(gen_bits2f(puVar1[5])),
                       (uint)*(byte *)(puVar1 + 6));
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1);
  }
  return 0;
}

/* ref: FUN_00a55330 */
uint F_00a55330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a5e350((int *)((int)this + 0x24),&(*(uint *)(gen_frame + 0x4)));
  uVar2 = (*(uint *)(gen_frame + 0x4));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a5534d: ;
  do {
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    if (*piVar3 == param_1) {
      return (uint)(piVar3 + 4);
    }
    if (uVar2 != *(uint *)((int)this + 0x30)) {
      iVar1 = *(int *)((int)this + 0x24);
      do {
        uVar2 = (uVar2 + 1) % *(uint *)((int)this + 0x28);
        if (*(char *)(uVar2 * 0x2a0 + 0x298 + iVar1) != '\0') {
          piVar3 = (int *)(uVar2 * 0x2a0 + iVar1);
          goto joined_r0x00a5534d;
        }
      } while (uVar2 != *(uint *)((int)this + 0x30));
    }
    uVar2 = 0xffffffff;
    piVar3 = (int *)0x0;
  } while( true );
}

/* ref: FUN_00a553c0 */
uint F_00a553c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa553c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = (int *)((int)this + 0x34);
  piVar2 = (int *)F_00a5e530(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar3 = (*(uint *)(gen_frame + 0x4));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a553db: ;
  do {
    if (uVar3 == 0xffffffff) {
      return (uint)piVar2;
    }
    if (((*piVar1 == param_1) && (-1 < (int)uVar3)) && (uVar3 < *(uint *)((int)this + 0x38))) {
      *(undefined1 *)(*this_00 + 0x20 + uVar3 * 0x28) = 0;
    }
    if (uVar3 != *(uint *)((int)this + 0x40)) {
      do {
        uVar3 = (uVar3 + 1) % *(uint *)((int)this + 0x38);
        if (*(char *)(*this_00 + 0x20 + uVar3 * 0x28) != '\0') {
          piVar2 = (int *)(*this_00 + uVar3 * 0x28);
          piVar1 = piVar2;
          goto joined_r0x00a553db;
        }
      } while (uVar3 != *(uint *)((int)this + 0x40));
    }
    uVar3 = 0xffffffff;
    piVar2 = (int *)0x0;
    piVar1 = piVar2;
  } while( true );
}

/* ref: FUN_00a55440 */
uint F_00a55440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = (int *)((int)this + 0x44);
  piVar2 = (int *)F_00a5e700(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar3 = (*(uint *)(gen_frame + 0x4));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a5545b: ;
  do {
    if (uVar3 == 0xffffffff) {
      return (uint)piVar2;
    }
    if (((*piVar1 == param_1) && (-1 < (int)uVar3)) && (uVar3 < *(uint *)((int)this + 0x48))) {
      *(undefined1 *)(*this_00 + 0x20 + uVar3 * 0x28) = 0;
    }
    if (uVar3 != *(uint *)((int)this + 0x50)) {
      do {
        uVar3 = (uVar3 + 1) % *(uint *)((int)this + 0x48);
        if (*(char *)(*this_00 + 0x20 + uVar3 * 0x28) != '\0') {
          piVar2 = (int *)(*this_00 + uVar3 * 0x28);
          piVar1 = piVar2;
          goto joined_r0x00a5545b;
        }
      } while (uVar3 != *(uint *)((int)this + 0x50));
    }
    uVar3 = 0xffffffff;
    piVar2 = (int *)0x0;
    piVar1 = piVar2;
  } while( true );
}

/* ref: FUN_00a554c0 */
uint F_00a554c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa554c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
    if (uVar1 == 0) {
      uVar1 = F_00a55330(&REFG(undefined * PTR32, 0x1334920),param_1);
      if (uVar1 != 0) {
        *(undefined4 *)(uVar1 + 0x6c) = *param_2;
        *(undefined2 *)(uVar1 + 0x72) = *(undefined2 *)((int)param_2 + 6);
        uVar2 = F_00ab21a0((uint)*(byte *)(uVar1 + 0x6b));
        if (*(int *)(uVar2 + 0x10) == 0x20) {
          *(undefined2 *)(uVar1 + 0x70) = *(undefined2 *)(param_2 + 2);
        }
        else if (*(int *)(uVar2 + 0x10) != 0x21) {
          *(undefined2 *)(uVar1 + 0x70) = *(undefined2 *)(param_2 + 1);
        }
      }
    }
    else {
      *(undefined4 *)(uVar1 + 0x1690) = *param_2;
      *(uint *)(uVar1 + 0x1698) = (uint)*(ushort *)(param_2 + 1);
      *(undefined2 *)(uVar1 + 0x16a2) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(uVar1 + 0x16a0) = *(undefined2 *)((int)param_2 + 6);
    }
    uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 0x58) = *param_2;
      *(undefined2 *)(uVar1 + 0x60) = *(undefined2 *)(param_2 + 1);
      *(undefined2 *)(uVar1 + 100) = *(undefined2 *)((int)param_2 + 6);
    }
    in_EAX = F_00ae0880(&REFG(undefined, 0x1336e40),param_1);
    if (in_EAX != 0) {
      *(undefined4 *)(in_EAX + 0x20c) = *param_2;
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = *param_2;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a555b0 */
uint F_00a555b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa555b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  byte bVar4;
  int * in_EAX = 0;
  int * piVar5;
  uint uVar6;
  undefined * this;
  byte * pbVar7;
  undefined4 * puVar8;
  undefined2 uVar9;
  int iVar10;
  ushort * puVar11;
  uint local_c;
  uint local_8;
  
  if (REFG(int, 0x1379c70) != 3) {
    piVar5 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
    uVar9 = 0;
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    local_c = 0;
    local_8 = 0;
    uVar6 = F_00ab21a0((uint)*param_2);
    if (*(int *)(uVar6 + 0x10) == 0x20) {
      uVar3 = *(undefined2 *)(param_2 + 0xe);
      uVar9 = *(undefined2 *)(param_2 + 0xc);
    }
    else if (*(int *)(uVar6 + 0x10) == 0x21) {
      uVar1 = *(undefined2 *)(param_2 + 0xc);
      uVar2 = *(undefined2 *)(param_2 + 0xe);
    }
    else {
      local_8 = (uint)*(ushort *)(param_2 + 0xc);
      local_c = (uint)*(ushort *)(param_2 + 0xe);
    }
    if (piVar5 == (int *)0x0) {
      uVar6 = F_00a55330(&REFG(undefined * PTR32, 0x1334920),param_1);
      if (uVar6 != 0) {
        *(byte *)(uVar6 + 0x6a) = param_2[1];
        *(byte *)(uVar6 + 0x6b) = *param_2;
        *(undefined4 *)(uVar6 + 0x6c) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(uVar6 + 0x74) = *(undefined4 *)(param_2 + 8);
        *(undefined2 *)(uVar6 + 0x70) = *(undefined2 *)(param_2 + 0xc);
        *(undefined2 *)(uVar6 + 0x78) = *(undefined2 *)(param_2 + 0xe);
        *(undefined2 *)(uVar6 + 0x72) = *(undefined2 *)(param_2 + 0x10);
        puVar8 = (undefined4 *)(uVar6 + 0x98);
        pbVar7 = param_2 + 0x14;
        iVar10 = 0x1e;
        do {
          *puVar8 = *(undefined4 *)pbVar7;
          puVar8[1] = *(undefined4 *)(pbVar7 + 4);
          puVar8[2] = *(undefined4 *)(pbVar7 + 8);
          pbVar7 = pbVar7 + 0xc;
          puVar8 = puVar8 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      *(byte *)(piVar5 + 0x5a2) = *param_2;
      *(byte *)((int)piVar5 + 0x1689) = param_2[1];
      piVar5[0x5a4] = *(int *)(param_2 + 4);
      piVar5[0x5a5] = *(int *)(param_2 + 8);
      piVar5[0x5a6] = local_8;
      piVar5[0x5a7] = local_c;
      *(undefined2 *)(piVar5 + 0x5a9) = uVar3;
      *(undefined2 *)((int)piVar5 + 0x16a2) = uVar9;
      *(undefined2 *)((int)piVar5 + 0x16a6) = uVar1;
      *(undefined2 *)(piVar5 + 0x5aa) = uVar2;
      *(undefined2 *)(piVar5 + 0x5a8) = *(undefined2 *)(param_2 + 0x10);
      bVar4 = F_00a9f620(piVar5);
      if (bVar4 == 0) {
        pbVar7 = param_2 + 0x14;
        this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xd4))(piVar5)));
        F_00b7b8e0(this,pbVar7);
      }
    }
    uVar6 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
    if (uVar6 != 0) {
      *(byte *)(uVar6 + 0x51) = *param_2;
      *(byte *)(uVar6 + 0x53) = param_2[2];
      *(byte *)(uVar6 + 0x54) = param_2[3];
      *(undefined4 *)(uVar6 + 0x58) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(uVar6 + 0x5c) = *(undefined4 *)(param_2 + 8);
      *(undefined2 *)(uVar6 + 0x60) = (undefined2)local_8;
      *(undefined2 *)(uVar6 + 0x62) = (undefined2)local_c;
      *(undefined2 *)(uVar6 + 100) = *(undefined2 *)(param_2 + 0x10);
      iVar10 = 0;
      puVar11 = (ushort *)(param_2 + 0x16);
      do {
        F_00b7b840(uVar6 + 0x6c,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),(uint)*puVar11,
                     *(undefined4 *)(puVar11 + 3));
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (iVar10 < 0x1e);
    }
    in_EAX = (int *)F_00ae0880(&REFG(undefined, 0x1336e40),param_1);
    if (in_EAX != (int *)0x0) {
      in_EAX[0x83] = *(int *)(param_2 + 4);
      in_EAX[0x84] = *(int *)(param_2 + 8);
      if (*in_EAX == REFG(int, 0x1379690)) {
        iVar10 = 0;
        piVar5 = in_EAX + 0x85;
        puVar11 = (ushort *)(param_2 + 0x16);
        do {
          in_EAX = (int *)F_00b7b840(piVar5,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),
                                       (uint)*puVar11,*(undefined4 *)(puVar11 + 3));
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 6;
        } while (iVar10 < 0x1e);
      }
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = *(undefined4 *)(param_2 + 4);
      REFG(undefined4, 0x14ab5c4) = *(undefined4 *)(param_2 + 8);
      iVar10 = 0;
      puVar11 = (ushort *)(param_2 + 0x16);
      do {
        in_EAX = (int *)F_00b7b840(&REFG(undefined, 0x14ab5c8),iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),
                                     (uint)*puVar11,*(undefined4 *)(puVar11 + 3));
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (iVar10 < 0x1e);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a55860 */
uint F_00a55860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54be0((undefined *)&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55880 */
uint F_00a55880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54a90(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a558a0 */
uint F_00a558a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa558a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54950(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a558c0 */
byte F_00a558c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa558c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 != REFG(undefined4, 0x1379690)) {
    bVar1 = F_00a54ef0(param_1);
    uVar2 = (uint)bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00a55930 */
uint F_00a55930(unsigned int gen_a0)
{
  GEN_ENTER(0xa55930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cd8));
  if (*(int *)((int)this + 0x44) != 0) {
    F_00406b30(*(int *)((int)this + 0x44) + -8);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    F_00406b30(*(int *)((int)this + 0x34) + -8);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x24) + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  return uVar1;
}

/* ref: FUN_00a55990 */
uint F_00a55990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(ushort *)(param_2 + 2) - 0x1af;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 4: ;
  case 8: ;
    uVar3 = F_00a54d40(this,param_1,*(undefined4 *)(param_2 + 0x10),param_2);
    break;
  case 1: ;
    uVar4 = *(uint *)((int)this + 0x1c);
    if (uVar4 != 0) {
      do {
        if (*(int *)(uVar4 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a559ef;
        uVar4 = *(uint *)(uVar4 + 0x28);
      } while (uVar4 != 0);
    }
    uVar4 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    uVar3 = 0;
    if (uVar4 != 0) {
LAB_00a559ef: ;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      iVar2 = *(int *)(param_2 + 0x14);
      ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + 0x18);
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(int *)(gen_frame + 0xc)) = iVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 0x1c);
      *(int *)(uVar4 + 0x20) = iVar2 + 1;
      uVar3 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar4,((uint *)(gen_frame + 0x0)));
      if (*(int *)(uVar4 + 0x20) <= *(int *)(uVar4 + 0x1c)) {
        F_00a49c10(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar4 + 0x14),param_1);
        uVar3 = F_00a53a80(this_00,uVar4);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a55a90 */
uint F_00a55a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d350((undefined *)((int)this + 0x24),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a54e30(this,5);
    bVar1 = F_00a5d350((undefined *)((int)this + 0x24),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55ae0 */
uint F_00a55ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar3;
  uint uVar2;
  
  puVar3 = &(*(undefined4 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  F_009755f0(this_00,puVar3);
  bVar1 = F_00a5d450((undefined *)((int)this + 0x34),param_1,param_2,(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55030(this,1);
    bVar1 = F_00a5d450((undefined *)((int)this + 0x34),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55b70 */
uint F_00a55b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d540((undefined *)((int)this + 0x44),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55210(this,10);
    bVar1 = F_00a5d540((undefined *)((int)this + 0x44),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: Global::HandleSpawn */
uint F_00a55c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d350(&REFG(undefined, 0x1334944),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a54e30(&REFG(undefined * PTR32, 0x1334920),5);
    bVar1 = F_00a5d350(&REFG(undefined, 0x1334944),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55c40 */
uint F_00a55c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a55ae0(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55c60 */
uint F_00a55c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d540(&REFG(undefined, 0x1334964),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55210(&REFG(undefined * PTR32, 0x1334920),10);
    bVar1 = F_00a5d540(&REFG(undefined, 0x1334964),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55ca0 */
uint F_00a55ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a55990(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55cc0 */
uint F_00a55cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa55cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x10,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  return (uint)this;
}

/* ref: FUN_00a55cf0 */
unsigned int F_00a55cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa55cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)));
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      F_009bc530((undefined *)piVar2[2],1);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 4));
  }
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  if (piVar1 != *(int * PTR32 *)((int)this + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      F_00429760(piVar1,0x10,800);
      piVar1 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00a55d60 */
unsigned int F_00a55d60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa55d60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  piVar3 = (int *)*piVar2;
  while (piVar4 = piVar3, piVar4 != piVar2) {
    fVar1 = gen_bits2f(piVar4[3]);
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) &&
       (piVar4[3] = (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(piVar4[3]))) - (float10)param_2)),
       gen_bits2f(piVar4[3]) <= 0.0)) {
      F_009bc530((undefined *)piVar4[2],1);
      piVar3 = (int *)*piVar4;
      if (piVar4 != *(int * PTR32 *)(param_1 + 4)) {
        *(int * PTR32 *)piVar4[1] = piVar3;
        *(int *)(*piVar4 + 4) = piVar4[1];
        F_00429760(piVar4,0x10,800);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      }
    }
    else {
      piVar3 = (int *)*piVar4;
    }
  }
  return 0;
}

/* ref: FUN_00a55df0 */
uint F_00a55df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xa55df0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  uint in_ecx;
  undefined * this;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(int *)(gen_frame + 0xc)) = param_1;
  in_ecx = F_00ab44e0(param_2,param_3,(float)(float10)1,0);
  if (in_ecx != 0) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x40)) = (float)fVar1;
    (*(float *)(gen_frame + 0x44)) = (float)fVar1;
    (*(float *)(gen_frame + 0x48)) = (float)fVar1;
    ((float *)(gen_frame + 0x10))[0] = param_5;
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    ((float *)(gen_frame + 0x10))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x24)) = param_5;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(float *)(gen_frame + 0x38)) = param_5;
    F_0065ed60(((float *)(gen_frame + 0x10)),param_6);
    pfVar2 = ((float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x40)) + (float10)*param_3);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)param_3[1] + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x48)) = (float)((float10)param_3[2] + (float10)(*(float *)(gen_frame + 0x48)));
    this = (undefined *)F_00983160(in_ecx);
    F_009bc130(this,pfVar2);
    if ((!GEN_ISNAN(param_4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_4 <= *(float *)&REFG(undefined, 0x1088114))) {
      (*(uint *)(gen_frame + 0x4)) = in_ecx;
      (*(float *)(gen_frame + 0x8)) = param_4;
      F_00a5ed60((undefined *)((*(int *)(gen_frame + 0xc)) + 4),&(*(uint *)(gen_frame + 0x4)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return in_ecx;
}

/* ref: FUN_00a55f00 */
uint F_00a55f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xa55f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00ab4370(param_2,param_3,param_4,0,0);
  if ((uVar1 != 0) &&
     ((!GEN_ISNAN(param_5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_5 <= *(float *)&REFG(undefined, 0x1088114)))) {
    (*(uint *)(gen_frame + 0x4)) = uVar1;
    (*(float *)(gen_frame + 0x8)) = param_5;
    F_00a5ed60((undefined *)(param_1 + 4),&(*(uint *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00a55f60 */
uint F_00a55f60(unsigned int gen_a0)
{
  GEN_ENTER(0xa55f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  F_00a55cf0(this);
  uVar1 = F_00a5ec40((undefined *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a5c400 */
ushort F_00a5c400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  *(undefined4 *)((int)this + 0x166c) = *param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  *(ushort *)((int)this + 0x1670) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5c430 */
byte F_00a5c430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2dd4)) & 2;
  *(byte *)(in_ecx + 0x2dd4) = *(byte *)(in_ecx + 0x2dd4) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c450 */
byte F_00a5c450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0x2dd4)) & 8;
  *(byte *)(in_ecx + 0x2dd4) = *(byte *)(in_ecx + 0x2dd4) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c470 */
byte F_00a5c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x196) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c480 */
uint F_00a5c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x198) = param_1;
  *(undefined4 *)((int)this + 0x19c) = param_2;
  return param_1;
}

/* ref: FUN_00a5c4a0 */
uint F_00a5c4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1a0) = param_1;
  *(undefined4 *)((int)this + 0x1a4) = param_2;
  return param_1;
}

/* ref: FUN_00a5c4c0 */
byte F_00a5c4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1688) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c4d0 */
byte F_00a5c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1689) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c4e0 */
uint F_00a5c4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1690) = param_2;
  return param_2;
}

/* ref: FUN_00a5c4f0 */
uint F_00a5c4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1694) = param_2;
  return param_2;
}

/* ref: FUN_00a5c500 */
uint F_00a5c500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1698) = param_2;
  return param_2;
}

/* ref: FUN_00a5c510 */
uint F_00a5c510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x169c) = param_2;
  return param_2;
}

/* ref: FUN_00a5c520 */
ushort F_00a5c520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a0) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c540 */
ushort F_00a5c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a2) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c560 */
ushort F_00a5c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c580 */
ushort F_00a5c580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a6) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c5a0 */
ushort F_00a5c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c5a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c5c0 */
uint F_00a5c5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5c5c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xd4))(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd4))(param_1);
    uVar2 = F_00b7b840(uVar2,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}

/* ref: FUN_00a5c610 */
byte F_00a5c610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c620 */
byte F_00a5c620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2dd2)) & 2;
  *(byte *)(in_ecx + 0x2dd2) = *(byte *)(in_ecx + 0x2dd2) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c670 */
byte F_00a5c670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c680 */
unsigned int F_00a5c680(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5c680u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00a5c6a0 */
uint F_00a5c6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6b0 */
byte F_00a5c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c6c0 */
uint F_00a5c6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x254) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6d0 */
byte F_00a5c6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c6e0 */
uint F_00a5c6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((-1 < (int)param_1) && (param_1 < 3)) {
    *(undefined1 *)(param_1 + 0x22f + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c700 */
uint F_00a5c700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 4) {
    *(undefined1 *)(param_1 + 600 + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c720 */
uint F_00a5c720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 4) {
    bVar3 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 600 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 600 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a5c760 */
uint F_00a5c760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 3) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x25c) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c780 */
uint F_00a5c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x268) = param_2;
  return param_2;
}

/* ref: FUN_00a5c790 */
uint F_00a5c790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5c790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + param_1 * 2 + 0x272) = (undefined2)param_2;
  *(undefined2 *)((int)this + param_1 * 2 + 0x296) = (undefined2)param_3;
  return param_1;
}

/* ref: FUN_00a5c7c0 */
byte F_00a5c7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x2d3 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c7e0 */
uint F_00a5c7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x308) = param_2;
  return param_2;
}

/* ref: FUN_00a5c7f0 */
uint F_00a5c7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x3aa8) = param_1;
  *(undefined2 *)((int)this + 0x3aac) = (undefined2)param_2;
  return param_1;
}

/* ref: FUN_00a5c810 */
float10 F_00a5c810(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3960)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x10912a8))));
}

/* ref: FUN_00a5c840 */
float10 F_00a5c840(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)REFG(double, 0x109cab0))) * (float10)*(double *)&REFG(undefined, 0x10928e8) -
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_00a5c880 */
float10 F_00a5c880(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xff) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)*(double *)&REFG(undefined, 0x1088100))) * (float10)*(double *)&REFG(undefined, 0x10928e8) -
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_00a5c8c0 */
uint F_00a5c8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8e0 */
uint F_00a5c8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 6) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8f0 */
uint F_00a5c8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 7) = *param_1;
  return (uint)param_1;
}

