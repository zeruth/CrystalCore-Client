#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00e30ff0 */
byte F_00e30ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe30ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2f0);
  (*(uint *)(gen_frame + 0x10)) = param_1;
  ((undefined4 *)(gen_frame + 0x18))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (param_3[0xd] == 0) {
    (*(bool *)(gen_frame + 0x17)) = param_3[0xc] == 0;
    ((code *)*(gen_code32 *)(*param_3 + 8))(param_3,this);
    if (((*(bool *)(gen_frame + 0x17)) != false) && (param_3[0xc] != 0)) {
      uVar1 = *(undefined4 *)(param_3[0xb] + 0xc);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_3[0xb] + 8);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      F_00e29e50((undefined *)((int)this + 0x20),&(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0x14))(param_3,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = *(undefined4 *)(param_3[0xb] + 0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_3[0xb] + 8);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  uVar3 = F_00e2b5e0(param_3 + 9,*(undefined4 *)((int)this + 8),((undefined4 *)(gen_frame + 0x18)),uVar3,(*(undefined4 *)(gen_frame + 0x4)),
                       *(undefined4 *)((int)this + 0x80));
  if (uVar3 == 0) {
    switch((unsigned int)(uintptr_t)((*(undefined2 *)(gen_frame + 0x2c)))) {
    case 1: ;
      F_00e2ee20(this,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x20)),0);
      bVar2 = 1;
      break;
    case 2: ;
      F_00e2ef40(this,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x20)));
      bVar2 = 1;
      break;
    default: ;
      bVar2 = 0;
      break;
    case 7: ;
      LOCK();
      param_3[0x12] = 1;
      UNLOCK();
      bVar2 = 1;
      break;
    case 8: ;
      goto switchD_00e31116_caseD_8;
    case 9: ;
      (*(uint *)(gen_frame + 0x10)) = 0;
      if (*(int *)((int)this + 0x80) == 0) {
LAB_00e31172: ;
        F_00e29270(&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0)));
      }
      else {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 8))))
                          (*(int * PTR32 *)((int)this + 0x80),param_2,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0)));
        (*(uint *)(gen_frame + 0x10)) = uVar3;
        if (uVar3 == 0) goto LAB_00e31172;
      }
      F_00e2ee20(this,param_2,param_3,((undefined1 *)(gen_frame + 0x2b0)),(*(uint *)(gen_frame + 0x10)));
      bVar2 = 1;
      break;
    case 10: ;
      if ((*(int *)((int)this + 0x80) == 0) ||
         (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x10))))
                            (*(int * PTR32 *)((int)this + 0x80),param_2,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0))),
         (char)uVar3 == '\0')) {
        F_00e29330(&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0)));
      }
      F_00e2ef40(this,param_2,param_3,((undefined1 *)(gen_frame + 0x2b0)));
      bVar2 = 1;
    }
  }
  else {
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
    *(uint *)((*(uint *)(gen_frame + 0x10)) + 0xc) = uVar3;
    *(undefined4 *)((*(uint *)(gen_frame + 0x10)) + 0x10) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((*(uint *)(gen_frame + 0x10)) + 0x14) = (*(undefined4 *)(gen_frame + 0xc));
switchD_00e31116_caseD_8: ;
    bVar2 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x2ec)) ^ (uint)(uint)(gen_frame + 0x2f0));
  return bVar2;
}

/* ref: FUN_00e31250 */
uint F_00e31250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe31250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  F_01050ce0(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x115731c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x20) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 4))) = *(int *)((int)this + 0x20);
    *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 8))) = *(int *)((int)this + 0x20);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x15))) = 1;
    *(undefined4 *)((int)this + 0x34) = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x30) = uVar1;
      *(uint *)uVar1 = uVar1;
      *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 4))) = *(int *)((int)this + 0x30);
      *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 8))) = *(int *)((int)this + 0x30);
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x15))) = 1;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined1 *)((int)this + 0x40) = (undefined1)param_3;
      puVar2 = param_1;
      if (param_1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)F_004069f0(4);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x115720c));
        }
      }
      *(undefined4 * PTR32 *)((int)this + 0x44) = puVar2;
      *(bool *)((int)this + 0x48) = param_1 == (undefined4 *)0x0;
      puVar2 = param_2;
      if (param_2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)F_004069f0(4);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x11571dc));
        }
      }
      *(undefined4 * PTR32 *)((int)this + 0x4c) = puVar2;
      *(bool *)((int)this + 0x50) = param_2 == (undefined4 *)0x0;
      *(undefined4 *)((int)this + 0x58) = 0;
      uVar1 = F_004069f0(0xc);
      if (uVar1 != 0) {
        *(uint *)((int)this + 0x54) = uVar1;
        *(uint *)uVar1 = uVar1;
        *((int *)GEN_TOP((*(int *)((int)this + 0x54) + 4))) = *(int *)((int)this + 0x54);
        *(undefined4 *)((int)this + 0x60) = 0;
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 4))))(*(int * PTR32 *)((int)this + 0x44),this,0);
        *(uint *)((int)this + 0x3c) = uVar1;
        return (uint)this;
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf5 */
unsigned int F_00e31390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe31390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf6 */
unsigned int F_00e313a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe313a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf19 */
unsigned int F_00e313b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe313b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf20 */
unsigned int F_00e313c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe313c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf21 */
unsigned int F_00e313d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe313d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf24 */
unsigned int F_00e313e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe313e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00e31410 */
float10 F_00e31410(unsigned int gen_a0)
{
  GEN_ENTER(0xe31410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(in_ecx + 0xc);
  if (iVar1 == 0) {
    return (float10)1;
  }
  fVar2 = (float10)*(int *)(in_ecx + 0x10);
  if (*(int *)(in_ecx + 0x10) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)(float)(fVar2 / fVar3);
}

/* ref: FUN_00e31470 */
uint F_00e31470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe31470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 8))))
                    (*(int * PTR32 *)((int)this + 0x4c),this,param_1,param_2);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf22 */
byte F_00e31490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe31490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int * PTR32 *)(param_1 + 0x2c), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
  }
  return 1;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf23 */
byte F_00e314b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe314b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int * PTR32 *)(param_1 + 0x30), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
  }
  return 1;
}

/* ref: FUN_00e314d0 */
uint F_00e314d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe314d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e29b40(this);
  return (uint)param_1;
}

/* ref: FUN_00e314f0 */
uint F_00e314f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe314f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar4 = 0;
    iVar2 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x14);
    iVar2 = *(int *)(iVar2 + 0x18);
  }
  if ((iVar4 == 0) || (iVar2 == 0)) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 8))))
                      (*(int * PTR32 *)((int)this + 0x4c),this,*(undefined4 *)((int)this + 0x3c),
                       *(undefined4 *)((int)this + 0x3c));
    ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,uVar3,param_1);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 0x18))))(*(int * PTR32 *)((int)this + 0x4c),uVar3);
  }
  else {
    this_00 = (undefined *)F_00c31810(this,iVar2);
    uVar3 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar3 = F_00c31860(this_00,iVar4);
      piVar1 = *(int * PTR32 *)((int)this_00 + 0x28);
      if (piVar1 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar3,param_1);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00e31580 */
byte F_00e31580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe31580u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = param_1;
  piVar3 = param_1;
  while (piVar5 != param_2) {
    iVar2 = *(int *)(piVar5[4] + 0x24);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0)) {
      F_00e2ebc0((undefined *)piVar5[4],0);
      piVar5 = piVar3;
    }
    if (*(char *)((int)piVar5 + 0x15) == '\0') {
      piVar3 = (int *)piVar5[2];
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x15);
        piVar5 = piVar3;
        piVar4 = (int *)*piVar3;
        while (piVar3 = piVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          piVar5 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0x15);
        piVar3 = (int *)piVar5[1];
        piVar4 = piVar5;
        while ((piVar5 = piVar3, piVar3 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar5[2]))) {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar4 = piVar5;
        }
      }
    }
  }
  return (byte)param_3;
}

/* ref: FUN_00e31610 */
uint F_00e31610(unsigned int gen_a0)
{
  GEN_ENTER(0xe31610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e2f030(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  return (uint)this;
}

/* ref: FUN_00e31630 */
uint F_00e31630(unsigned int gen_a0)
{
  GEN_ENTER(0xe31630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e2fcf0(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  return (uint)this;
}

/* ref: FUN_00e31650 */
uint F_00e31650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe31650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_01050b90(this,param_2);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x11572ec));
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x18) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
    *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e316d0 */
uint F_00e316d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe316d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x115731c));
  F_00e2e6d0(this);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 8))))
            (*(int * PTR32 *)((int)this + 0x44),*(undefined4 *)((int)this + 0x3c));
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((*(char *)((int)this + 0x48) != '\0') &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x44), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  if ((*(char *)((int)this + 0x50) != '\0') &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x4c), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  piVar2 = *(int * PTR32 *)((int)this + 0x54);
  piVar3 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x54) + 4))) = *(int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x58) = 0;
  if (piVar3 != *(int * PTR32 *)((int)this + 0x54)) {
    do {
      piVar2 = (int *)*piVar3;
      F_00406ad0(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x54));
  }
  F_00406ad0(*(undefined4 *)((int)this + 0x54));
  F_00e2e2b0((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  F_00406ad0(*(undefined4 *)((int)this + 0x30));
  F_00e2e210((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x20),
               *(undefined4 * PTR32 *)((int)this + 0x20));
  F_00406ad0(*(undefined4 *)((int)this + 0x20));
  uVar4 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar4 = F_00406ad0(*(int *)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_01050cd0(this);
  return uVar4;
}

/* ref: FUN_00e317d0 */
uint F_00e317d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe317d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990((undefined4 *)((int)this + 100));
  uVar1 = F_00e316d0(this);
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf13 */
uint F_00e31830(unsigned int gen_a0)
{
  GEN_ENTER(0xe31830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb4);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf14 */
uint F_00e31840(unsigned int gen_a0)
{
  GEN_ENTER(0xe31840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb4);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf15 */
uint F_00e31850(unsigned int gen_a0)
{
  GEN_ENTER(0xe31850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb8);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf16 */
uint F_00e31870(unsigned int gen_a0)
{
  GEN_ENTER(0xe31870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb8);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf17 */
unsigned int F_00e31890(void)
{
  GEN_ENTER(0xe31890u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf18 */
unsigned int F_00e318a0(void)
{
  GEN_ENTER(0xe318a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e318b0 */
uint F_00e318b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe318b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990((undefined4 *)((int)this + 100));
  uVar1 = F_00e316d0(this);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e318f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe318f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e316d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e31920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe31920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990((undefined4 *)((int)this + 100));
  F_00e316d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e31970 */
byte F_00e31970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xe31970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int * piVar6;
  undefined4 * puVar7;
  byte bVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  int * piVar12;
  undefined4 * puVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)(param_1 + 0x1a);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  piVar12 = *(int * PTR32 *)param_1[4];
  if (piVar12 != (int *)param_1[4]) {
    do {
      uVar9 = ((code *)*(gen_code32 *)(*(int *)piVar12[4] + 0xc))((int *)piVar12[4]);
      if ((char)uVar9 != '\0') {
        puVar13 = (undefined4 *)piVar12[4];
        iVar3 = piVar12[3];
        F_00e2ccd0((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 3,((undefined1 *)(gen_frame + 0x0)),piVar12);
        puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        ((code *)*(gen_code32 *)(*(int *)(*(undefined4 * PTR32 *)(gen_frame + 0x8))[2] + 0x14))((int *)(*(undefined4 * PTR32 *)(gen_frame + 0x8))[2],iVar3);
        if (puVar11[0x20] != 0) {
          piVar12 = (int *)puVar11[0x20];
          ((code *)*(gen_code32 *)(*piVar12 + 0x20))(piVar12,iVar3);
        }
        param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        if (puVar13 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar13)(puVar13,1);
          param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        }
        break;
      }
      if (*(char *)((int)piVar12 + 0x15) == '\0') {
        piVar2 = (int *)piVar12[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar12 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar12 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar12[1] + 0x15);
          piVar6 = (int *)piVar12[1];
          piVar2 = piVar12;
          while ((piVar12 = piVar6, cVar1 == '\0' && (piVar2 == (int *)piVar12[2]))) {
            cVar1 = *(char *)(piVar12[1] + 0x15);
            piVar6 = (int *)piVar12[1];
            piVar2 = piVar12;
          }
        }
      }
    } while (piVar12 != (int *)param_1[4]);
  }
  if ((param_3 == 0) || (param_3 == 0xe0000000)) {
    puVar13 = *(undefined4 * PTR32 *)param_1[4];
  }
  else {
    puVar11 = ((undefined4 *)GEN_TOP(((undefined4 *)param_1[4])[1]));
    cVar1 = *(char *)((int)puVar11 + 0x15);
    puVar13 = (undefined4 *)param_1[4];
    while (cVar1 == '\0') {
      if ((uint)puVar11[3] < param_3) {
        puVar10 = (undefined4 *)puVar11[2];
        puVar11 = puVar13;
      }
      else {
        puVar10 = (undefined4 *)*puVar11;
      }
      puVar13 = puVar11;
      puVar11 = puVar10;
      cVar1 = *(char *)((int)puVar10 + 0x15);
    }
    puVar11 = (undefined4 *)param_1[4];
    if ((puVar13 == puVar11) || (param_3 < (uint)puVar13[3])) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar11;
      puVar13 = puVar11;
    }
  }
  if (puVar13 != (undefined4 *)param_1[4]) {
    do {
      fVar5 = REFG(float, 0x1087f04);
      *param_4 = 0xe0000000;
      puVar11 = *(undefined4 * PTR32 *)param_1[4];
      while (puVar11 != (undefined4 *)param_1[4]) {
        iVar3 = puVar11[4];
        if (*(int *)(iVar3 + 0x30) != 0) {
          iVar4 = *(int *)(iVar3 + 0x30);
          fVar16 = fVar5;
          if (iVar4 != 0) {
            fVar14 = (float10)*(int *)(iVar3 + 0x34);
            if (*(int *)(iVar3 + 0x34) < 0) {
              fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            fVar15 = (float10)iVar4;
            if (iVar4 < 0) {
              fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            fVar16 = (float)(fVar14 / fVar15);
          }
          if ((!GEN_ISNAN(param_5) && !GEN_ISNAN(fVar16)) && !(param_5 <= fVar16)) {
            *param_4 = puVar11[3];
            break;
          }
        }
        if (*(char *)((int)puVar11 + 0x15) == '\0') {
          puVar10 = (undefined4 *)puVar11[2];
          if (*(char *)((int)puVar10 + 0x15) == '\0') {
            cVar1 = *(char *)((int)*puVar10 + 0x15);
            puVar11 = puVar10;
            puVar10 = (undefined4 *)*puVar10;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar10 + 0x15);
              puVar11 = puVar10;
              puVar10 = (undefined4 *)*puVar10;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar11[1] + 0x15);
            puVar7 = (undefined4 *)puVar11[1];
            puVar10 = puVar11;
            while ((puVar11 = puVar7, cVar1 == '\0' && (puVar10 == (undefined4 *)puVar11[2]))) {
              cVar1 = *(char *)((int)puVar11[1] + 0x15);
              puVar7 = (undefined4 *)puVar11[1];
              puVar10 = puVar11;
            }
          }
        }
      }
      bVar8 = F_00e30ff0(param_1,param_2,puVar13[3],puVar13[4]);
      if (bVar8 != 0) {
        iVar3 = *(int *)(param_2 + 0xc);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return iVar3 != 0;
      }
      if (*(char *)((int)puVar13 + 0x15) == '\0') {
        puVar11 = (undefined4 *)puVar13[2];
        if (*(char *)((int)puVar11 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar11 + 0x15);
          puVar13 = puVar11;
          puVar11 = (undefined4 *)*puVar11;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar11 + 0x15);
            puVar13 = puVar11;
            puVar11 = (undefined4 *)*puVar11;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar13[1] + 0x15);
          puVar10 = (undefined4 *)puVar13[1];
          puVar11 = puVar13;
          while ((puVar13 = puVar10, cVar1 == '\0' && (puVar11 == (undefined4 *)puVar13[2]))) {
            cVar1 = *(char *)((int)puVar13[1] + 0x15);
            puVar10 = (undefined4 *)puVar13[1];
            puVar11 = puVar13;
          }
        }
      }
    } while (puVar13 != (undefined4 *)param_1[4]);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00e31c00 */
byte F_00e31c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe31c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pvVar5;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)((int)this + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar9 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      uVar8 = ((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0xc))((int *)piVar9[4]);
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((char)uVar8 != '\0') {
        puVar3 = (undefined4 *)piVar9[4];
        iVar4 = piVar9[3];
        F_00e2ccd0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc),((undefined1 *)(gen_frame + 0x0)),piVar9);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 8) + 0x14))))(*(int * PTR32 *)((int)pvVar5 + 8),iVar4);
        if (*(int *)((int)pvVar5 + 0x80) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x80) + 0x20))))(*(int * PTR32 *)((int)pvVar5 + 0x80),iVar4);
        }
        this = pvVar5;
        if (puVar3 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        }
        break;
      }
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x15);
          piVar6 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar6 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)this + 0x10));
  }
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar9 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      bVar7 = F_00e30ff0(this,param_1,piVar9[3],piVar9[4]);
      if (bVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0xc);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return iVar4 != 0;
      }
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x15);
          piVar6 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar6 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)this + 0x10));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00e31d60 */
uint F_00e31d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe31d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)((int)this + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar9 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      uVar7 = ((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0xc))((int *)piVar9[4]);
      piVar8 = piVar9;
      if ((char)uVar7 == '\0') {
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          piVar8 = (int *)piVar9[2];
          if (*(char *)((int)piVar8 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x15);
            piVar9 = (int *)*piVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar9 + 0x15);
              piVar8 = piVar9;
              piVar9 = (int *)*piVar9;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar4 = (int *)piVar9[1];
            while ((piVar8 = piVar4, cVar1 == '\0' && (piVar9 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x15);
              piVar4 = (int *)piVar8[1];
              piVar9 = piVar8;
            }
          }
        }
      }
      else {
        puVar2 = (undefined4 *)piVar9[4];
        iVar3 = piVar9[3];
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          piVar8 = (int *)piVar9[2];
          if (*(char *)((int)piVar8 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x15);
            piVar4 = (int *)*piVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x15);
              piVar8 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar5 = (int *)piVar9[1];
            piVar4 = piVar9;
            while ((piVar8 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x15);
              piVar5 = (int *)piVar8[1];
              piVar4 = piVar8;
            }
          }
        }
        F_00e2ccd0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc),((undefined1 *)(gen_frame + 0x0)),piVar9);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + 0x14))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8),iVar3);
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80) + 0x20))))
                    (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80),iVar3);
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
          this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        }
      }
      piVar9 = piVar8;
    } while (piVar8 != *(int * PTR32 *)((int)this + 0x10));
  }
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar9 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      bVar6 = F_00e30ff0(this,param_1,piVar9[3],piVar9[4]);
      if (bVar6 != 0) {
        if (*(int *)(param_1 + 0xc) == 0) {
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
          return 0;
        }
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return 1;
      }
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar8 = (int *)piVar9[2];
        if (*(char *)((int)piVar8 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar8 + 0x15);
          piVar9 = piVar8;
          piVar8 = (int *)*piVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x15);
            piVar9 = piVar8;
            piVar8 = (int *)*piVar8;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x15);
          piVar4 = (int *)piVar9[1];
          piVar8 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar8 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar4 = (int *)piVar9[1];
            piVar8 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)this + 0x10));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0xffffffff;
}

/* ref: FUN_00e31f50 */
byte F_00e31f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe31f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00e31580(param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_00e31f70 */
uint F_00e31f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe31f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)F_004069f0(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115720c));
    }
  }
  F_00e31250(this,puVar1,param_2,param_5,param_6);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2f030((undefined *)((int)this + 100));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e2fcf0((undefined *)((int)this + 0x8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  *(undefined4 *)((int)this + 0xb8) = param_4;
  *(undefined4 *)((int)this + 0xb4) = param_3;
  return (uint)this;
}

/* ref: FUN_00e31ff0 */
uint F_00e31ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe31ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_01050b90(this,param_2);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x11572ec));
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x18) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
    *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x15))) = 1;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[6])REFP(0x11572fc));
    *(undefined4 *)((int)this + 0x24) = param_3;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf4 */
unsigned int F_00e32080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe32080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e320a0 */
uint F_00e320a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe320a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00e320e0 */
uint F_00e320e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe320e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
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
      return (uint)this;
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
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e32140 */
uint F_00e32140(unsigned int gen_a0)
{
  GEN_ENTER(0xe32140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e32150 */
uint F_00e32150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32170 */
uint F_00e32170(unsigned int gen_a0)
{
  GEN_ENTER(0xe32170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e32180 */
uint F_00e32180(unsigned int gen_a0)
{
  GEN_ENTER(0xe32180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e32190 */
uint F_00e32190(unsigned int gen_a0)
{
  GEN_ENTER(0xe32190u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e321a0 */
uint F_00e321a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe321a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e321d0 */
uint F_00e321d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe321d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
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
      return (uint)this;
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
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e32230 */
uint F_00e32230(unsigned int gen_a0)
{
  GEN_ENTER(0xe32230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e32240 */
uint F_00e32240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32260 */
uint F_00e32260(unsigned int gen_a0)
{
  GEN_ENTER(0xe32260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e32270 */
uint F_00e32270(unsigned int gen_a0)
{
  GEN_ENTER(0xe32270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e32280 */
uint F_00e32280(unsigned int gen_a0)
{
  GEN_ENTER(0xe32280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e32290 */
uint F_00e32290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e322b0 */
uint F_00e322b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe322b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e322c0 */
uint F_00e322c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe322c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e322e0 */
uint F_00e322e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe322e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e322f0 */
uint F_00e322f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe322f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32310 */
uint F_00e32310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe32310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00e32340 */
uint F_00e32340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32370 */
uint F_00e32370(unsigned int gen_a0)
{
  GEN_ENTER(0xe32370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e320e0(this);
  return (uint)this;
}

/* ref: FUN_00e32380 */
uint F_00e32380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e323a0 */
uint F_00e323a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe323a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e323c0 */
uint F_00e323c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe323c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e32410 */
uint F_00e32410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32440 */
uint F_00e32440(unsigned int gen_a0)
{
  GEN_ENTER(0xe32440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e321d0(this);
  return (uint)this;
}

/* ref: FUN_00e32450 */
uint F_00e32450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32470 */
uint F_00e32470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32490 */
uint F_00e32490(unsigned int gen_a0)
{
  GEN_ENTER(0xe32490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e324e0 */
uint F_00e324e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe324e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e32500 */
uint F_00e32500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe32500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e32520 */
uint F_00e32520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe32520u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -4;
  return (uint)in_ecx;
}

/* ref: FUN_00e32550 */
uint F_00e32550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe32550u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0x1ffffffd < *(uint *)((int)this + 8)) {
    F_00406ad0(param_4);
                    
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
LAB_00e3274d: ;
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
        goto LAB_00e3274d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e32780 */
uint F_00e32780(unsigned int gen_a0)
{
  GEN_ENTER(0xe32780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e320e0(this);
  return (uint)this;
}

/* ref: FUN_00e32790 */
uint F_00e32790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e327b0 */
uint F_00e327b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe327b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0x1ffffffd < *(uint *)((int)this + 8)) {
    F_00406ad0(param_4);
                    
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
LAB_00e329ad: ;
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
        goto LAB_00e329ad;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e329e0 */
uint F_00e329e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe329e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e321d0(this);
  return (uint)this;
}

/* ref: FUN_00e329f0 */
uint F_00e329f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe329f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e32a10 */
unsigned int F_00e32a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e32a30 */
unsigned int F_00e32a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e32a60 */
uint F_00e32a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * -4;
  return (uint)param_1;
}

/* ref: FUN_00e32a80 */
uint F_00e32a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe32a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e32550((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e320e0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e32550((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e32b60 */
unsigned int F_00e32b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e32b80 */
uint F_00e32b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe32b80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e327b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e321d0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e327b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e32c60 */
unsigned int F_00e32c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e32c90 */
uint F_00e32c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32c90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 * puVar1;
  int * piVar2;
  uint uVar3;
  bool bVar4;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[2]);
  uVar3 = (*(uint *)&gen_args[1]);
  *(*(undefined1 * PTR32 *)&gen_args[2]) = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) != 0) {
    if ((((((*(uint *)&gen_args[1]) != 0) && ((*(uint *)&gen_args[1]) != 0x20000000)) && ((*(uint *)&gen_args[1]) != 0x40000000)) &&
        (((*(uint *)&gen_args[1]) != 0x60000000 && ((*(uint *)&gen_args[1]) != 0x80000000)))) &&
       (((*(uint *)&gen_args[1]) != 0xa0000000 && (((*(uint *)&gen_args[1]) != 0xc0000000 && ((*(uint *)&gen_args[1]) != 0xe0000000)))))) {
      piVar2 = (int *)F_00c31730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined1 * PTR32 *)&gen_args[2]),&(*(uint *)&gen_args[1]));
      if (*piVar2 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
        return uVar3;
      }
      *puVar1 = 1;
      return uVar3;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))),(*(uint *)&gen_args[1]) >> 0x1d);
    return uVar3;
  }
  if ((*(uint *)&gen_args[1]) < 0x80000001) {
    if ((*(uint *)&gen_args[1]) == 0x80000000) goto LAB_00e32dd4;
    if ((*(uint *)&gen_args[1]) < 0x40000001) {
      if ((*(uint *)&gen_args[1]) == 0x40000000) {
        uVar3 = F_01050cf0((*(undefined * PTR32 *)&gen_args[0]));
        return uVar3 | 0x40000000;
      }
      if ((*(uint *)&gen_args[1]) == 0) goto LAB_00e32dd4;
      if ((*(uint *)&gen_args[1]) == 0x20000000) {
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) >> 2 == 0) {
          uVar3 = F_01050cf0((*(undefined * PTR32 *)&gen_args[0]));
          return uVar3 | 0x20000000;
        }
        uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + -4)));
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
          return uVar3;
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + -4;
        return uVar3;
      }
      goto LAB_00e32db1;
    }
    bVar4 = (*(uint *)&gen_args[1]) == 0x60000000;
  }
  else {
    if (((*(uint *)&gen_args[1]) == 0xa0000000) || ((*(uint *)&gen_args[1]) == 0xc0000000)) goto LAB_00e32dd4;
    bVar4 = (*(uint *)&gen_args[1]) == 0xe0000000;
  }
  if (!bVar4) {
LAB_00e32db1: ;
    piVar2 = (int *)F_00c31730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined1 * PTR32 *)&gen_args[2]),&(*(uint *)&gen_args[1]));
    if (*piVar2 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
      return uVar3;
    }
    *puVar1 = 1;
    return uVar3;
  }
LAB_00e32dd4: ;
  uVar3 = F_01050cf0((*(undefined * PTR32 *)&gen_args[0]));
  return uVar3 | 0xe0000000;
}

/* ref: FUN_00e32df0 */
uint F_00e32df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe32df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
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
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e32e50 */
uint F_00e32e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe32e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
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
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e32eb0 */
uint F_00e32eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e32a80(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e32f30 */
uint F_00e32f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e32b80(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e32fb0 */
uint F_00e32fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe32fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 == 0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
  }
  else {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x4c) + 8))))(*(int * PTR32 *)(iVar1 + 0x4c),iVar1,this,this);
    (*(uint *)(gen_frame + 0x18)) = uVar3;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  uVar2 = *(undefined4 *)((int)this + 8);
  puVar4 = (undefined4 *)F_004069f0(0x18);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = *(undefined4 *)((int)this + 0x18);
    puVar4[1] = *(undefined4 *)((int)this + 0x18);
    puVar4[2] = *(undefined4 *)((int)this + 0x18);
    *(undefined2 *)(puVar4 + 5) = 0;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[3] = uVar2;
      puVar4[4] = (*(uint *)(gen_frame + 0x18));
    }
    F_00e32b80((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0xc)),puVar4,0);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return uVar3;
  }
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: FUN_00e33060 */
uint F_00e33060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 4);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 8);
  (*pcVar1)(this);
  F_00c317a0((undefined *)((int)this + 0x14),&(*(int *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x18)));
  if ((*(int *)(gen_frame + 0x10)) == *(int *)((int)this + 0x18)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x10);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if (uVar4 == 0) {
    iVar2 = *(int *)((int)this + 0x10);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x4c) + 8))))
                        (*(int * PTR32 *)(iVar2 + 0x4c),iVar2,this,param_1);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = *(undefined * PTR32 * PTR32 *)(param_1 + 8);
    puVar3 = (undefined4 *)F_004069f0(0x18);
    if (puVar3 == (undefined4 *)0x0) {
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
    *puVar3 = *(undefined4 *)((int)this + 0x18);
    puVar3[1] = *(undefined4 *)((int)this + 0x18);
    puVar3[2] = *(undefined4 *)((int)this + 0x18);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc));
      puVar3[4] = uVar4;
    }
    F_00e32b80((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x14)),puVar3,0);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar4;
}

/* ref: FUN_00e33160 */
uint F_00e33160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00e33060(param_1,this);
  uVar1 = F_00e33060(this,param_1);
  return uVar1;
}

/* ref: FUN_00e33180 */
uint F_00e33180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33180u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  undefined * this_01;
  undefined4 * puVar4;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))((*(undefined * PTR32 *)&gen_args[0]));
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  (*(char *)(gen_frame + 0x1b)) = '\0';
  uVar3 = F_00e32c90((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),&(*(char *)(gen_frame + 0x1b)));
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  if ((*(char *)(gen_frame + 0x1b)) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return (uint)piVar2;
  }
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))),(*(undefined * PTR32 *)&gen_args[0]),uVar3)));
  F_00e32fb0(this_01);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar1;
  if ((piVar2 != (int *)0x40000000) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0)) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)*piVar1;
    if ((*(int * PTR32 *)&gen_args[1]) != piVar1) {
      do {
        this_00 = ((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[4]));
        F_00e33060(this_00,this_01);
        F_00e33060(this_01,this_00);
        F_00e29ae0(&(*(int * PTR32 *)&gen_args[1]));
      } while ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)(gen_frame + 0x10)));
    }
  }
  puVar4 = (undefined4 *)F_004069f0(0x18);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    *(undefined2 *)(puVar4 + 5) = 0;
    if (puVar4 + 3 != (uint *)0x0) {
      puVar4[3] = (*(uint *)(gen_frame + 0x14));
      puVar4[4] = this_01;
    }
    F_00e32a80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),((undefined1 *)(gen_frame + 0x4)),puVar4,0);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return (*(uint *)(gen_frame + 0x14));
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
}

/* ref: FUN_00e33290 */
uint F_00e33290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33290u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00e33180((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  (*(undefined4 *)&gen_args[1]) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))((*(undefined * PTR32 *)&gen_args[0]));
  piVar2 = (int *)F_00c31730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(*piVar2 + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]),piVar2);
  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))))((*(undefined * PTR32 *)&gen_args[0]),piVar2);
  return uVar3;
}

/* ref: FUN_00e33300 */
uint F_00e33300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e33290(this,param_1);
  return uVar1;
}

/* ref: FUN_00e33310 */
uint F_00e33310(unsigned int gen_a0)
{
  GEN_ENTER(0xe33310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint local_8;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))();
  if (*(int *)((int)this + 0x24) != 0) {
    local_8 = (uint)this & 0xffffff00;
    F_00e31580(**(undefined4 * PTR32 *)((int)this + 0x20),*(undefined4 * PTR32 *)((int)this + 0x20),local_8);
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf7 */
unsigned int F_00e33350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  F_01050b60(((undefined1 *)(gen_frame + 0xc)));
  iVar1 = *(int *)((int)this + 0x58);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined8 *)(gen_frame + 0x14)) = 0;
  if (iVar1 == 0) {
    bVar4 = F_00e31c00(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    if (bVar4 == 0) goto LAB_00e333ec;
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x54);
    (*(int *)(gen_frame + 0x10)) = *(int *)(*piVar2 + 8);
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar2) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00406ad0(piVar3);
      *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
    }
  }
  F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
  (*(int *)(gen_frame + 0x10)) = 0;
LAB_00e333ec: ;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  F_01050b70();
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf8 */
unsigned int F_00e33410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  
  if (*(int *)((int)this + 8) != 0) {
    if (*(int *)((int)this + 0x58) != 0) {
      F_01050b60(((undefined1 *)(gen_frame + 0x8)));
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8),(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      F_01050b70();
      return 0;
    }
    (*(uint *)(gen_frame + 0x18)) = 0xe0000000;
    do {
      uVar4 = (*(uint *)(gen_frame + 0x18));
      F_01050b60(((undefined1 *)(gen_frame + 0x8)));
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      uVar3 = *(undefined4 *)((int)this + 8);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      (*(int *)(gen_frame + 0xc)) = 0;
      bVar5 = F_00e31970(uVar3,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),uVar4,&(*(uint *)(gen_frame + 0x18)),REFG(float, 0x10ac050));
      if (bVar5 != 0) {
        F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8),(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      F_01050b70();
    } while (((*(uint *)(gen_frame + 0x18)) != 0) && ((*(uint *)(gen_frame + 0x18)) != 0xe0000000));
  }
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf9 */
uint F_00e33540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x58);
  if (*(int *)((int)this + 8) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      bVar3 = F_00e31c00(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      while (bVar3 != 0) {
        F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
        (*(int *)(gen_frame + 0x10)) = 0;
        uVar4 = uVar4 + 1;
        bVar3 = F_00e31c00(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      }
    }
    else {
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x10)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf10 */
uint F_00e33620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x58);
  if (*(int *)((int)this + 8) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          uVar3 = F_00e31d60(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          if (uVar3 != 1) break;
          F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
          (*(int *)(gen_frame + 0x10)) = 0;
          uVar4 = uVar4 + 1;
        }
      } while (uVar3 == 0);
    }
    else {
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x10)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf11 */
uint F_00e33700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe33700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x58);
  if (*(int *)((int)this + 8) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          if (param_1 <= uVar4) goto LAB_00e337bd;
          uVar3 = F_00e31d60(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          if (uVar3 != 1) break;
          F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
          (*(int *)(gen_frame + 0x10)) = 0;
          uVar4 = uVar4 + 1;
        }
      } while (uVar3 == 0);
    }
    else {
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x10)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
LAB_00e337bd: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf12 */
uint F_00e337e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe337e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = *(uint *)((int)this + 0x58);
  uVar5 = 0;
  if (*(int *)((int)this + 8) != 0) {
    if (uVar4 == 0) {
      uVar6 = F_00427e30();
      (*(ulonglong *)(gen_frame + 0x24)) = uVar6 + (longlong)CONCAT44(param_2,param_1);
      F_01050b60(((undefined1 *)(gen_frame + 0x14)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(undefined8 *)(gen_frame + 0x1c)) = 0;
      do {
        while( true ) {
          uVar3 = F_00e31d60(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
          if (uVar3 != 1) break;
          F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8),(*(int *)(gen_frame + 0x18)));
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 + 1;
          (*(int *)(gen_frame + 0x18)) = 0;
          if (param_3 <= uVar5) {
            uVar6 = F_00427e30();
            if ((*(ulonglong *)(gen_frame + 0x24)) < uVar6) goto LAB_00e338e4;
            uVar5 = 0;
          }
        }
      } while (uVar3 == 0);
    }
    else {
      F_01050b60(((undefined1 *)(gen_frame + 0x14)));
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x18)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      (*(undefined8 *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x18)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e314f0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8),(*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
    }
LAB_00e338e4: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return uVar4;
}

/* ref: FUN_00e33900 */
byte F_00e33900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe33900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  
  if (*(int *)((int)this + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x54) + 8)));
    piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x54)));
    if (piVar1 != *(int * PTR32 *)((int)this + 0x54)) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      F_00406ad0(piVar1);
      *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
    }
    return 1;
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    bVar2 = F_00e31c00(*(undefined * PTR32 *)((int)this + 8),param_1);
    return bVar2;
  }
  return 0;
}

/* ref: FUN_00e33970 */
uint F_00e33970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe33970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00e31f70(this,param_1,param_2,param_3,param_4,param_5,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157454));
  *(undefined4 *)((int)this + 0xbc) = 0;
  return (uint)this;
}

/* ref: FUN_00e33a20 */
uint F_00e33a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe33a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 != '\0') {
    puVar1 = (undefined4 *)F_004069f0(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115722c))
      ;
      puVar1[2] = 0;
      uVar2 = F_004069f0(0xc);
      if (uVar2 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      }
      puVar1[1] = uVar2;
      *(uint *)uVar2 = uVar2;
      *(undefined4 *)(puVar1[1] + 4) = puVar1[1];
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115723c));
      goto LAB_00e33a86;
    }
  }
  puVar1 = (undefined4 *)0x0;
LAB_00e33a86: ;
  F_00e31ff0(this,param_1,param_2,puVar1);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574bc));
  return (uint)this;
}

/* ref: PrimaryEntityTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf1 */
unsigned int F_00e33ad0(void)
{
  GEN_ENTER(0xe33ad0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: PrimaryEntityTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf2 */
unsigned int F_00e33ae0(void)
{
  GEN_ENTER(0xe33ae0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e33af0 */
uint F_00e33af0(unsigned int gen_a0)
{
  GEN_ENTER(0xe33af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11572fc));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar2 = F_00e30db0(this);
  return uVar2;
}

/* ref: PrimaryEntityTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e33b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11572fc));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00e30db0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf0 */
uint F_00e33b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x11573ec));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this);
  *(undefined * PTR32 * PTR32 *)(this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00(this + 0x8c);
  *(undefined * PTR32 * PTR32 *)(this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990(this + 100);
  F_00e316d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf1 */
uint F_00e33bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe33bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * this_00;
  undefined4 * puVar1;
  uint uVar2;
  
  this_00 = (undefined4 *)F_004069f0(0x34);
  if (this_00 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)F_004069f0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115722c));
    puVar1[2] = 0;
    uVar2 = F_004069f0(0xc);
    if (uVar2 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
    puVar1[1] = uVar2;
    *(uint *)uVar2 = uVar2;
    *(undefined4 *)(puVar1[1] + 4) = puVar1[1];
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115723c));
  }
  F_00e31ff0(this_00,param_1,param_2,puVar1);
  *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x11574bc));
  return (uint)this_00;
}

/* ref: FUN_00e33cd0 */
uint F_00e33cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe33cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x104) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x104) + 0x10c0)));
}

/* ref: FUN_00e33cf0 */
uint F_00e33cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe33cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x104) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x104) + 0x10c4)));
}

/* ref: FUN_00e33d10 */
uint F_00e33d10(unsigned int gen_a0)
{
  GEN_ENTER(0xe33d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x104);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x10c0) = 0;
    *(undefined4 *)(uVar1 + 0x10c4) = 0;
  }
  return uVar1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::vf3 */
uint F_00e33d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x104);
  *(undefined4 *)(uVar1 + 4) = param_1;
  *(undefined4 *)(this + 0x88) = 2;
  return uVar1;
}

/* ref: FUN_00e33d50 */
uint F_00e33d50(unsigned int gen_a0)
{
  GEN_ENTER(0xe33d50u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00ba7100(in_ecx);
  return in_ecx;
}

/* ref: FUN_00e33d70 */
byte F_00e33d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x54);
  uVar2 = F_0042a990(param_1);
  F_00ba86c0((undefined *)((int)this + 0x68),uVar2,uVar1);
  return 1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf3 */
uint F_00e33de0(unsigned int gen_a0)
{
  GEN_ENTER(0xe33de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x90) != (undefined *)0x0) {
    uVar1 = F_00ba7490(*(undefined * PTR32 *)(this + 0x90));
    return CONCAT31((int3)(uVar1 >> 8),uVar1 == 7);
  }
  return 1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf4 */
uint F_00e33e00(unsigned int gen_a0)
{
  GEN_ENTER(0xe33e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x90) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00ba7490(*(undefined * PTR32 *)(this + 0x90));
  if ((uVar1 != 4) && (uVar1 = F_00ba7490(*(undefined * PTR32 *)(this + 0x90)), uVar1 != 5)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00e33e60 */
uint F_00e33e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33e60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00e33e80 */
uint F_00e33e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe33e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e33ed0 */
byte F_00e33ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe33ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0xc) + 0x58U <= *(uint *)this)) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = (undefined2)param_2;
    (*(undefined2 *)(gen_frame + 0xc)) = 1;
    (*(ulonglong *)(gen_frame + 0x10)) = 0;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x38;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined8 *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x20)) = 0;
    (*(undefined8 *)(gen_frame + 0x28)) = 0;
    (*(undefined8 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = param_1;
    (*(ulonglong *)(gen_frame + 0x10)) = (ulonglong)param_1;
    if (param_3 != (int *)0x0) {
      iVar5 = *param_3;
      if (iVar5 != param_3[1]) {
        F_00c46aa0((int)&(*(ulonglong *)(gen_frame + 0x10)) + 4,iVar5,param_3[1] - iVar5);
      }
    }
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x38;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x3c)) ^ (uint)(uint)(gen_frame + 0x40));
  return bVar4;
}

/* ref: FUN_00e34000 */
byte F_00e34000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe34000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0xc) + 0x298U <= *(uint *)this)) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = (undefined2)param_3;
    (*(undefined2 *)(gen_frame + 0xc)) = 9;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x278;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x10)),0,0x268);
    (*(undefined4 *)(gen_frame + 0x10)) = param_2;
    if (param_4 != (int *)0x0) {
      iVar6 = *param_4;
      if (iVar6 != param_4[1]) {
        F_00c46aa0(((undefined1 *)(gen_frame + 0x14)),iVar6,param_4[1] - iVar6);
      }
    }
    if (param_1 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined4 *)(gen_frame + 0x0)));
      if ((char)uVar5 != '\0') {
        puVar7 = ((undefined4 *)(gen_frame + 0x0));
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
        for (iVar6 = 0x9e; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x278;
        piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
        *piVar1 = *piVar1 + 0x278;
        psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
        *psVar2 = *psVar2 + 1;
        bVar4 = 1;
        goto LAB_00e34150;
      }
    }
  }
  bVar4 = 0;
LAB_00e34150: ;
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return bVar4;
}

/* ref: FUN_00e34170 */
uint F_00e34170(unsigned int gen_a0)
{
  GEN_ENTER(0xe34170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e29b40(this);
  return (uint)this;
}

/* ref: FUN_00e34190 */
byte F_00e34190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e341b0 */
uint F_00e341b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe341b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e341f0 */
uint F_00e341f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe341f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*(int *)((int)this + 0x10) == 0) &&
     (in_EAX = *(uint *)((int)this + 0xc), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = (undefined2)param_2;
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    puVar3 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x700000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x18;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00e342e0 */
uint F_00e342e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe342e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00ba85b0(in_ecx,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11574d8));
  return (uint)in_ecx;
}

/* ref: FUN_00e34300 */
uint F_00e34300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba78e0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e34310 */
uint F_00e34310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*(int *)((int)this + 0x10) == 0) &&
     (in_EAX = *(uint *)((int)this + 0xc), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
    }
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    puVar3 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x800000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x18;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00e343f0 */
uint F_00e343f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe343f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba7890(this,param_1);
  return uVar1;
}

/* ref: FUN_00e34400 */
uint F_00e34400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe34400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ba7a40(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e34410 */
uint F_00e34410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe34410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ba7aa0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e34420 */
uint F_00e34420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba7b00(this,param_1);
  return uVar1;
}

/* ref: FUN_00e34440 */
uint F_00e34440(unsigned int gen_a0)
{
  GEN_ENTER(0xe34440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_InitializeCriticalSection(this);
  return (uint)this;
}

/* ref: FUN_00e34460 */
byte F_00e34460(unsigned int gen_a0)
{
  GEN_ENTER(0xe34460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x104);
  uVar2 = (uint)*(ushort *)((int)this + 0xe0);
  uVar3 = F_0042a990((int)this + 0x8c);
  F_00ba86c0((undefined *)(iVar1 + 0x68),uVar3,uVar2);
  return 1;
}

/* ref: FUN_00e34490 */
unsigned int F_00e34490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe34490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10a8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar3 = *(int *)((int)this + 0x10a4);
  *(int *)((int)this + 0x10c4) = *(int *)((int)this + 0x10c4) + param_3;
  if (iVar3 + param_3 < 0x1001) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,param_3);
    *(int *)((int)this + 0x10a4) = *(int *)((int)this + 0x10a4) + param_3;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar4 = 0x1000 - iVar3;
  if (0 < iVar4) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,iVar4);
    *(int *)((int)this + 0x10a4) = *(int *)((int)this + 0x10a4) + iVar4;
  }
  if (*(int *)((int)this + 0x1094) == 0) {
    uVar1 = param_3;
    if (param_3 < 0x1001) {
      uVar1 = 0x1000;
    }
    *(uint *)((int)this + 0x1098) = uVar1;
    pvVar2 = F_00c51787(uVar1);
    *(undefined * PTR32 *)((int)this + 0x1094) = pvVar2;
    F_00c46aa0(pvVar2,iVar4 + param_2,param_3 - iVar4);
    *(uint *)((int)this + 0x109c) = param_3 - iVar4;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (*(uint *)((int)this + 0x1098) < *(int *)((int)this + 0x109c) + param_3) {
    iVar3 = *(uint *)((int)this + 0x1098) + param_3;
    pvVar2 = F_00c52171(*(int *)((int)this + 0x1094),iVar3);
    *(undefined * PTR32 *)((int)this + 0x1094) = pvVar2;
    *(int *)((int)this + 0x1098) = iVar3;
  }
  F_00c46aa0(*(int *)((int)this + 0x1094) + *(int *)((int)this + 0x109c),iVar4 + param_2,
             param_3 - iVar4);
  *(int *)((int)this + 0x109c) = *(int *)((int)this + 0x109c) + (param_3 - iVar4);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf1 */
uint F_00e345e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe345e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x14);
  uVar1 = 0;
  if (uVar2 != 0) {
    if ((*(int *)(this + 0x90) == 0) || (uVar1 = *(uint *)(this + 0x18), uVar2 <= uVar1)) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      return uVar2;
    }
    uVar1 = F_00ba7610(this + 0x68,*(int *)(this + 0x10) + uVar1,uVar2 - uVar1);
    if ((int)uVar1 < 1) {
      if ((int)uVar1 < 0) {
        uVar2 = F_00ba74d0(this + 0x68);
        *(undefined4 *)(this + 0x90) = 0;
        return uVar2;
      }
    }
    else {
      *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar1;
      if (*(uint *)(this + 0x14) <= *(uint *)(this + 0x18)) {
        *(undefined4 *)(this + 0x14) = 0;
        *(undefined4 *)(this + 0x18) = 0;
      }
      *(uint *)(this + 0x10c0) = *(int *)(this + 0x10c0) + uVar1;
    }
  }
  return uVar1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf2 */
unsigned int F_00e34650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x10a8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x90) != 0) {
    iVar1 = *(int *)(this + 0x10a0);
    if (iVar1 < *(int *)(this + 0x10a4)) {
      uVar2 = *(uint *)(this + 0x30);
      if (uVar2 < 0x20) {
        uVar4 = *(int *)(this + 0x10a4) - iVar1;
        uVar5 = 0x20 - uVar2;
        if (uVar4 < 0x20 - uVar2) {
          uVar5 = uVar4;
        }
        F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
        *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
        *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
      }
      iVar1 = *(int *)(this + 0x10a0);
      if ((iVar1 < *(int *)(this + 0x10a4)) && (uVar2 = *(uint *)(this + 0x30), 0x1f < uVar2)) {
        uVar5 = *((uint *)GEN_TOP((*(int *)(this + 0x2c) + 0x10)));
        if (uVar2 < uVar5) {
          uVar4 = *(int *)(this + 0x10a4) - iVar1;
          uVar5 = uVar5 - uVar2;
          if (uVar4 < uVar5) {
            uVar5 = uVar4;
          }
          F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
          *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
          *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
        }
      }
      if (*(int *)(this + 0x10a4) <= *(int *)(this + 0x10a0)) {
        iVar1 = *(int *)(this + 0x1094);
        *(undefined4 *)(this + 0x10a4) = 0;
        *(undefined4 *)(this + 0x10a0) = 0;
        if ((iVar1 != 0) && (uVar2 = *(uint *)(this + 0x109c), 0 < (int)uVar2)) {
          if (uVar2 < 0x1001) {
            F_00c46aa0(this + 0x94,iVar1,uVar2);
            uVar3 = *(undefined4 *)(this + 0x109c);
            *(undefined4 *)(this + 0x109c) = 0;
            *(undefined4 *)(this + 0x10a4) = uVar3;
            gen_imp_LeaveCriticalSection(lpCriticalSection);
            return 0;
          }
          F_00c46aa0(this + 0x94,iVar1,0x1000);
          *(undefined4 *)(this + 0x10a4) = 0x1000;
          F_00c46e20(*(int *)(this + 0x1094),*(int *)(this + 0x1094) + 0x1000,
                     *(int *)(this + 0x109c) + -0x1000);
          *(int *)(this + 0x109c) = *(int *)(this + 0x109c) + -0x1000;
        }
      }
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00e347f0 */
byte F_00e347f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe347f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  
  if (*(int *)((int)this + 0x80) != 0) {
    bVar1 = F_00e34000(param_1 + 2,*(int *)((int)this + 0x80),param_2,param_4,param_5);
    if (bVar1 != 0) goto LAB_00e34835;
  }
  bVar1 = F_00e33ed0(param_1 + 2,param_2,param_4,param_5);
LAB_00e34835: ;
  if (((char)param_3 != '\0') && (param_1[5] != 0)) {
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,this);
  }
  return bVar1;
}

/* ref: FUN_00e348a0 */
uint F_00e348a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe348a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_1 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  *(gen_size32 *)this = param_1;
  pvVar1 = F_00c51787(param_1);
  *(undefined * PTR32 *)((int)this + 4) = pvVar1;
  *(undefined * PTR32 *)((int)this + 8) = pvVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_00c48350(*(undefined * PTR32 *)((int)this + 4),0,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00e348e0 */
uint F_00e348e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe348e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e348f0 */
byte F_00e348f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe348f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e34920 */
uint F_00e34920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  bool bVar3;
  undefined4 * puVar4;
  uint uVar5;
  __time64_t _Var6;
  
  piVar2 = (int *)param_1[1];
  bVar3 = false;
  puVar4 = param_1;
  if (piVar2[5] == 0) {
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    LOCK();
    iVar1 = piVar2[0x12];
    piVar2[0x12] = 0;
    UNLOCK();
    if (iVar1 == 0) {
      puVar4 = (undefined4 *)((int)_Var6 - piVar2[0x10]);
      if (puVar4 <= (undefined4 *)((uint)piVar2[0x11] >> 1)) goto LAB_00e34980;
      puVar4 = (undefined4 *)F_00e341f0(piVar2 + 2,*param_1,0);
    }
    else {
      puVar4 = (undefined4 *)F_00e34310(piVar2 + 2,*param_1);
    }
    bVar3 = true;
    piVar2[0x10] = (int)_Var6;
  }
LAB_00e34980: ;
  if (piVar2[5] != 0) {
    if ((piVar2[6] == 0) && (uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2), (char)uVar5 == '\0')) {
      return uVar5;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,*(undefined4 *)this)));
    if (bVar3) {
      piVar2[5] = 0;
      piVar2[6] = 0;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00e349c0 */
uint F_00e349c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe349c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LOCK();
  *(undefined4 *)this = param_1;
  UNLOCK();
  return (uint)this;
}

/* ref: FUN_00e349d0 */
uint F_00e349d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe349d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ba85e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e34a00 */
uint F_00e34a00(unsigned int gen_a0)
{
  GEN_ENTER(0xe34a00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(uVar1 + 0x90) = uVar1 + 0x68;
  return uVar1;
}

/* ref: FUN_00e34a20 */
unsigned int F_00e34a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe34a20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00e34490(*(undefined * PTR32 *)(param_1 + 0x24),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00e34a40 */
uint F_00e34a40(unsigned int gen_a0)
{
  GEN_ENTER(0xe34a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x24) + 0x58))) + 0x88))) = 4;
  return param_1;
}

/* ref: FUN_00e34a60 */
byte F_00e34a60(unsigned int gen_a0)
{
  GEN_ENTER(0xe34a60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x58) + 0x88))) = 3;
  return 0;
}

/* ref: FUN_00e34aa0 */
uint F_00e34aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe34aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574e0));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x28));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0xc));
  return extraout_EAX;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf5 */
uint F_00e34ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf4 */
byte F_00e34ae0(void)
{
  GEN_ENTER(0xe34ae0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00e34af0 */
uint F_00e34af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_1 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574e0));
  *(gen_size32 *)((int)this + 8) = param_1;
  pvVar1 = F_00c51787(param_1);
  *(undefined * PTR32 *)((int)this + 0xc) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x10) = pvVar1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  F_00c48350(*(undefined * PTR32 *)((int)this + 0xc),0,param_1);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(gen_size32 *)((int)this + 0x24) = param_1;
  pvVar1 = F_00c51787(param_1);
  *(undefined * PTR32 *)((int)this + 0x28) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x2c) = pvVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x28),0,param_1);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  LOCK();
  *(undefined4 *)((int)this + 0x48) = 0;
  UNLOCK();
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x2d;
  return (uint)this;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf0 */
uint F_00e34b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574e0));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x28));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0xc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e34bb0 */
uint F_00e34bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe34bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e34c10 */
uint F_00e34c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe34c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e29b40(this);
  return (uint)param_1;
}

/* ref: FUN_00e34c30 */
uint F_00e34c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e34c40 */
uint F_00e34c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe34c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  if ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2])) {
    do {
      F_00e34920(&(*(undefined4 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[1]) + 3);
      if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]));
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          (*(int * PTR32 *)&gen_args[1]) = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            (*(int * PTR32 *)&gen_args[1]) = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
          piVar2 = (*(int * PTR32 *)&gen_args[1]);
          while (((*(int * PTR32 *)&gen_args[1]) = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]))))) {
            cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
            piVar2 = (*(int * PTR32 *)&gen_args[1]);
          }
        }
      }
    } while ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e34cd0 */
uint F_00e34cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe34cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e34af0(this,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574fc));
  *(int *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 0x58) = param_2;
  F_00ba7100((int)this + 0x5c);
  F_00ba85b0((int)this + 0x68,*(undefined4 *)(param_1 + 0x58));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[1])REFP(0x11574d8));
  *(undefined4 *)((int)this + 0x1094) = 0;
  *(undefined4 *)((int)this + 0x1098) = 0;
  *(undefined4 *)((int)this + 0x109c) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10a8));
  *(undefined4 *)((int)this + 0x10c0) = 0;
  *(undefined4 *)((int)this + 0x10c4) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x10a0) = 0;
  *(undefined4 *)((int)this + 0x10a4) = 0;
  F_00ba8040();
  gen_imp_InterlockedExchange((LONG *)((int)this + 0x8c),(LONG)this);
  F_00baba80((undefined *)((int)this + 0x68));
  F_00ba78e0((undefined *)((int)this + 0x68),((code *)REFP(0xe34a00)));
  F_00ba7890((undefined *)((int)this + 0x68),((code *)REFP(0xe34a20)));
  F_00ba7b00((undefined *)((int)this + 0x68),((code *)REFP(0xe34a60)));
  F_00ba7a40((undefined *)((int)this + 0x68),((code *)REFP(0xe34a40)),5);
  F_00ba9ae0((undefined *)((int)this + 0x68),(int)this + 0x5c);
  F_00ba7aa0((undefined *)((int)this + 0x68),((code *)REFP(0xe34a40)),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x74);
  return (uint)this;
}

/* ref: FUN_00e34dd0 */
uint F_00e34dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe34dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574fc));
  F_00ba74d0((undefined *)((int)this + 0x68));
  F_00baa650((undefined *)((int)this + 0x5c));
  if (*(undefined * PTR32 *)((int)this + 0x1094) != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x1094));
    *(undefined4 *)((int)this + 0x1094) = 0;
  }
  if (*(int *)((int)this + 0x58) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + 0x104))) = 0;
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10a8));
  F_00ba85e0((undefined *)((int)this + 0x68));
  F_00bac250((undefined *)((int)this + 0x5c));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574e0));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x28));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0xc));
  return extraout_EAX;
}

/* ref: FUN_00e34e60 */
uint F_00e34e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe34e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e34ec0 */
unsigned int F_00e34ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e34ec0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00e34f00 */
uint F_00e34f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe34f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00e34c40(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: FUN_00e34f30 */
byte F_00e34f30(unsigned int gen_a0)
{
  GEN_ENTER(0xe34f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x104);
  uVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  this_00 = (undefined *)F_004069f0(0x10c8);
  if (this_00 != (undefined *)0x0) {
    uVar4 = F_00e34cd0(this_00,(int)this + 0x8c,this);
  }
  *(uint *)((int)this + 0x104) = uVar4;
  uVar2 = (uint)*(ushort *)((int)this + 0xe0);
  uVar3 = F_0042a990((int)this + 0x8c);
  F_00ba86c0((undefined *)(uVar4 + 0x68),uVar3,uVar2);
  return 1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf0 */
uint F_00e34fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe34fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e34dd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e34fd0 */
unsigned int F_00e34fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe34fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  F_00e34c40(&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),*(undefined4 * PTR32 *)((int)this + 0x10),this)
  ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  return 0;
}

/* ref: FUN_00e35020 */
uint F_00e35020(unsigned int gen_a0)
{
  GEN_ENTER(0xe35020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e34ec0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
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

/* ref: FUN_00e35070 */
uint F_00e35070(unsigned int gen_a0)
{
  GEN_ENTER(0xe35070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042cc20(this,"127.0.0.1",REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0x3e81388;
  *(undefined2 *)((int)this + 0x54) = 0xbff9;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00e350b0 */
uint F_00e350b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe350b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e35020(this);
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
    F_00e2ccd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e35150 */
uint F_00e35150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    F_0042ccf0(this,param_1);
    *(undefined2 *)((int)this + 0x54) = *(undefined2 *)((int)param_1 + 0x54);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)param_1 + 0x58);
    *(undefined2 *)((int)this + 0x5c) = *(undefined2 *)((int)param_1 + 0x5c);
    *(undefined2 *)((int)this + 0x5e) = *(undefined2 *)((int)param_1 + 0x5e);
    F_00c2eb30((undefined *)((int)this + 0x60),
                 *(int *)((int)param_1 + 100) - *(int *)((int)param_1 + 0x60));
    iVar1 = *(int *)((int)param_1 + 100) - *(int *)((int)param_1 + 0x60);
    if (iVar1 != 0) {
      F_00c46aa0(*(undefined4 *)((int)this + 0x60),*(int *)((int)param_1 + 0x60),iVar1);
    }
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)param_1 + 0x70);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)param_1 + 0x74);
  }
  return (uint)this;
}

/* ref: FUN_00e351c0 */
uint F_00e351c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe351c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042b630(this);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00e35150(this,param_1);
  return (uint)this;
}

/* ref: FUN_00e351f0 */
uint F_00e351f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe351f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e350b0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e35210 */
uint F_00e35210(unsigned int gen_a0)
{
  GEN_ENTER(0xe35210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e350b0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e35240 */
uint F_00e35240(unsigned int gen_a0)
{
  GEN_ENTER(0xe35240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e350b0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e35270 */
uint F_00e35270(unsigned int gen_a0)
{
  GEN_ENTER(0xe35270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::vf1 */
byte F_00e352d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe352d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  __time64_t _Var7;
  longlong lVar8;
  
  iVar6 = *(int *)(this + 0x108);
  iVar1 = *(int *)(this + 0x10c);
  (*(longlong *)(gen_frame + 0x20)) = 0;
  if (iVar6 != 0 || iVar1 != 0) {
    _Var7 = F_00c4b7c2(&(*(longlong *)(gen_frame + 0x20)));
    iVar6 = (int)((ulonglong)_Var7 >> 0x20);
    if ((iVar6 < *(int *)(this + 0x10c)) ||
       ((iVar6 <= *(int *)(this + 0x10c) && ((uint)_Var7 < *(uint *)(this + 0x108)))))
    goto LAB_00e353de;
  }
  piVar2 = *(int * PTR32 *)(this + 0x104);
  if ((piVar2 == (int *)0x0) || (piVar2[1] != 0)) goto LAB_00e353de;
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar5 == '\0') goto LAB_00e353de;
  piVar2 = *(int * PTR32 *)(this + 0x104);
  if (*(int *)(this + 0x80) == 0) {
LAB_00e35369: ;
    bVar4 = F_00e33ed0(piVar2 + 2,0,2,this + 0xec);
  }
  else {
    bVar4 = F_00e34000(piVar2 + 2,*(int *)(this + 0x80),0,2,this + 0xec);
    if (bVar4 == 0) goto LAB_00e35369;
  }
  if (piVar2[5] != 0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,this);
  }
  if (bVar4 != 0) {
    lVar8 = (*(longlong *)(gen_frame + 0x20));
    if ((int)(*(longlong *)(gen_frame + 0x20)) == 0 && (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 4)) == 0) {
      lVar8 = F_00c4b7c2((__time64_t *)0x0);
    }
    *(longlong *)(this + 0x108) = lVar8 + (int)(*(ushort *)(this + 0xe8) / 1000);
    *(undefined4 *)(this + 0x88) = 1;
  }
LAB_00e353de: ;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  F_00e34c40(((undefined1 *)(gen_frame + 0x28)),**(undefined4 * PTR32 *)(this + 0x10),*(undefined4 * PTR32 *)(this + 0x10),this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  if ((*(int *)(this + 0x104) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x104) + 4))) == 0)) {
    F_01050b60(((undefined1 *)(gen_frame + 0x10)));
    uVar3 = *(undefined4 *)(this + 0x104);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(undefined8 *)(gen_frame + 0x18)) = 0;
    bVar4 = F_00e30ff0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),0,uVar3);
    if ((bVar4 != 0) && ((*(int *)(gen_frame + 0x14)) != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x14)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x14)) + 8),(*(int *)(gen_frame + 0x14)));
      (*(int *)(gen_frame + 0x14)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  if (*(int *)(this + 0x104) != 0) {
    F_00bad720(((undefined *)GEN_TOP((*(int *)(this + 0x104) + 0x5c))));
  }
  return 1;
}

/* ref: FUN_00e354a0 */
uint F_00e354a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe354a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157524));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e350b0((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 0x10));
  return uVar1;
}

/* ref: ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf2 */
unsigned int F_00e354f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe354f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf3 */
unsigned int F_00e35500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e35510 */
uint F_00e35510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157524));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x10) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
    *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x15))) = 1;
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
    gen_imp_InitializeCriticalSection((int)this + 0x50);
    gen_imp_InitializeCriticalSection((int)this + 0x68);
    *(undefined4 *)((int)this + 0x80) = 0;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e355c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe355c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157524));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e350b0((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  F_00406ad0(*(undefined4 *)((int)this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e35620 */
uint F_00e35620(unsigned int gen_a0)
{
  GEN_ENTER(0xe35620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x104);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157538));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x104) = 0;
  if (*(int *)((int)this + 0xec) != 0) {
    F_00406ad0(*(int *)((int)this + 0xec));
  }
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  F_0042c880((undefined *)((int)this + 0x8c));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157524));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e350b0((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar2 = F_00406ad0(*(undefined4 *)((int)this + 0x10));
  return uVar2;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::vf0 */
uint F_00e356c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe356c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e35620(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e356f0 */
uint F_00e356f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe356f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  
  F_00e35510(this,param_1);
  this_00 = (undefined *)((int)this + 0x8c);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157538));
  F_0042b630(this_00);
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  F_00e35150(this_00,param_2);
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  this_01 = (undefined *)F_004069f0(0x10c8);
  if (this_01 != (undefined *)0x0) {
    uVar1 = F_00e34cd0(this_01,this_00,this);
    *(uint *)((int)this + 0x104) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x104) = 0;
  return (uint)this;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf2 */
unsigned int F_00e35780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe35780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf3 */
unsigned int F_00e35790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe35790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf4 */
unsigned int F_00e357a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe357a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf5 */
unsigned int F_00e357b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe357b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf6 */
unsigned int F_00e357c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe357c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf7 */
unsigned int F_00e357d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe357d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf8 */
unsigned int F_00e357e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe357e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf9 */
unsigned int F_00e357f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe357f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf10 */
unsigned int F_00e35800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe35800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf11 */
unsigned int F_00e35810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe35810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf12 */
unsigned int F_00e35820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe35820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00e35830 */
uint F_00e35830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35830u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = in_eax >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *(undefined1 *)(in_ecx + uVar2);
    *(undefined1 *)(in_ecx + uVar2) = *(undefined1 *)(in_ecx + 7 + uVar2);
    *(undefined1 *)(in_ecx + 7 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 1 + uVar2);
    *(undefined1 *)(in_ecx + 1 + uVar2) = *(undefined1 *)(in_ecx + 6 + uVar2);
    *(undefined1 *)(in_ecx + 6 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 2 + uVar2);
    *(undefined1 *)(in_ecx + 2 + uVar2) = *(undefined1 *)(in_ecx + 5 + uVar2);
    *(undefined1 *)(in_ecx + 5 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 3 + uVar2);
    *(undefined1 *)(in_ecx + 3 + uVar2) = *(undefined1 *)(in_ecx + 4 + uVar2);
    *(undefined1 *)(in_ecx + 4 + uVar2) = uVar1;
    uVar2 = uVar2 + 8;
  }
  return uVar2;
}

/* ref: FUN_00e35900 */
uint F_00e35900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35900u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e35930 */
uint F_00e35930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35930u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_00e35990 */
uint F_00e35990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  uVar2 = uVar1 + 1;
  if ((uVar1 + 0x21 <= param_2) && (uVar2 = uVar1 + 0x421, param_2 < uVar1 + 0x421)) {
    uVar2 = uVar1 + 0x21;
  }
  return uVar2;
}

/* ref: FUN_00e359d0 */
uint F_00e359d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe359d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e35830(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_00e35830(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 5;
      if ((uVar2 + 0x25 <= param_2) && (uVar3 = uVar2 + 0x425, param_2 < uVar2 + 0x425)) {
        uVar3 = uVar2 + 0x25;
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00e35a50 */
uint F_00e35a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_00e35a70 */
uint F_00e35a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_00e35a90 */
uint F_00e35a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_00e35b40 */
uint F_00e35b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  uVar2 = uVar1 + 1;
  if (uVar1 + 0x21 <= param_2) {
    uVar2 = uVar1 + 0x21;
  }
  return uVar2;
}

/* ref: FUN_00e35bb0 */
uint F_00e35bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_00e35c70 */
uint F_00e35c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe35c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  return param_3;
}

/* ref: FUN_00e35c80 */
uint F_00e35c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35c80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_00e35d10 */
uint F_00e35d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35d10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e35d20 */
uint F_00e35d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35d20u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e35d50 */
uint F_00e35d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35d50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 0x24) {
    return 4;
  }
  if (param_2 < 0x2c) {
    return 0x24;
  }
  uVar3 = F_00e35830(8,param_1 + 0x28);
  if (param_2 < uVar3 + 0x54) {
    return uVar3 + 0x24;
  }
  uVar4 = uVar3 + 0x58;
  if (param_2 < uVar4) {
    return uVar3 + 0x54;
  }
  uVar1 = param_1[99];
  uVar2 = param_1[0x62];
  param_1[99] = param_1[0x60];
  param_1[0x62] = param_1[0x61];
  param_1[0x60] = uVar1;
  param_1[0x61] = uVar2;
  if (uVar3 + 0x60 <= param_2) {
    uVar3 = F_00e35830(8,param_1 + 0x68);
    uVar4 = uVar4 + uVar3;
    if (uVar4 + 8 <= param_2) {
      uVar3 = F_00e35830(8,param_1 + 0x70);
      return uVar3 + uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00e35e10 */
uint F_00e35e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 0x20) {
    return 0;
  }
  return (-(uint)(param_2 < 0x420) & 0xfffffc00) + 0x420;
}

/* ref: FUN_00e35e40 */
uint F_00e35e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  if (uVar1 + 0x400 <= param_2) {
    uVar1 = uVar1 + 0x400;
  }
  return uVar1;
}

/* ref: FUN_00e35e70 */
uint F_00e35e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_00e35ed0 */
uint F_00e35ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e35f00 */
uint F_00e35f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_00e35830(8,param_1);
  return uVar1;
}

/* ref: FUN_00e35fc0 */
uint F_00e35fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe35fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return param_3;
}

/* ref: FUN_00e35fd0 */
uint F_00e35fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe35fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_00e36060 */
uint F_00e36060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return param_2;
}

/* ref: RecvCallbackInterface_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
uint F_00e360a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe360a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x115754c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e360e0 */
unsigned int F_00e360e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe360e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x115754c));
  return 0;
}

/* ref: FUN_00e360f0 */
uint F_00e360f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe360f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[13])REFP(0x1157558));
  return (uint)in_ecx;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf0 */
uint F_00e36100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x115754c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoDownCallbackInterface::vf1 */
uint F_00e36130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_2 + 0xc) + 0x24)));
  switch((unsigned int)(uintptr_t)(*(undefined2 *)(uVar1 + 2))) {
  case 1: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 2: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 100: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x65: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x66: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x67: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x68: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x69: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0x6a: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 200: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,param_1,param_2,uVar1 + 0x10);
    return uVar1;
  case 0xc9: ;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,param_1,param_2,uVar1 + 0x10);
  }
  return uVar1;
}

/* ref: FUN_00e36490 */
uint F_00e36490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe36490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_01050d30(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x10) = param_1;
  return (uint)this;
}

/* ref: Application::Network::ChatProtoChannel::ClientPacketBuilder::vf1 */
uint F_00e364c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe364c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Application::Network::ChatProtoChannel::ClientPacketBuilder::vf2 */
uint F_00e364d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe364d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *(undefined2 *)((int)param_1 + 2) = *(undefined2 *)(this + 0x30);
  *(undefined1 *)((int)param_1 + 1) = 0;
  param_1[2] = 10;
  return (uint)param_1;
}

/* ref: Application::Network::ChatProtoChannel::ClientPacketBuilder::vf3 */
uint F_00e36500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_00e35fc0((uint)*(ushort *)(param_1 + 2),param_1 + 0x10,param_2 + -0x10,0);
  uVar1 = F_00e36060(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf2 */
unsigned int F_00e36560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: PacketDataBuilder_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf3 */
unsigned int F_00e36570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: PacketBufferTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e36580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketDataBuilder_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e365b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe365b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e365f0 */
uint F_00e365f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe365f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  return (uint)in_ecx;
}

/* ref: FUN_00e36630 */
uint F_00e36630(unsigned int gen_a0)
{
  GEN_ENTER(0xe36630u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  F_01050b60(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  return (uint)in_ecx;
}

/* ref: FUN_00e36660 */
unsigned int F_00e36660(unsigned int gen_a0)
{
  GEN_ENTER(0xe36660u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  return 0;
}

/* ref: FUN_00e36680 */
uint F_00e36680(unsigned int gen_a0)
{
  GEN_ENTER(0xe36680u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  F_01050b60(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11575ac));
  return (uint)in_ecx;
}

/* ref: Application::Network::ChatProtoChannel::ChatProtoUpPacketBuilder::vf0 */
uint F_00e366b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe366b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e366f0 */
uint F_00e366f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe366f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  F_01050b60((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x11575c0));
  F_01050d30((undefined *)((int)this + 0x20),param_2,param_3);
  *(undefined4 *)((int)this + 0x30) = param_1;
  return (uint)this;
}

/* ref: Application::Network::ChatProtoChannel::ClientPacketBuilder::vf0 */
uint F_00e36740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157598));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157590));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e36790 */
uint F_00e36790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_0042ccf0(this,param_1);
    *(undefined2 *)((int)this + 0x54) = *(undefined2 *)((int)param_1 + 0x54);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::vf3 */
uint F_00e367d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe367d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x118);
  *(undefined4 *)(uVar1 + 4) = param_2;
  return uVar1;
}

/* ref: FUN_00e367f0 */
byte F_00e367f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe367f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x54);
  uVar2 = F_0042a990(param_1);
  F_00ba86c0((undefined *)((int)this + 0x68),uVar2,uVar1);
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf4 */
byte F_00e36850(void)
{
  GEN_ENTER(0xe36850u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf3 */
byte F_00e36860(void)
{
  GEN_ENTER(0xe36860u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::WriteEncryptionInit */
byte F_00e36880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  __time64_t _Var2;
  
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (1) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (2) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (3) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (4) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (5) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (6) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (7) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (8) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (9) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (10) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xb) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xc) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xd) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xe) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0xf) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x10) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x11) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x12) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x13) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x14) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x15) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x16) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x17) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x18) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x19) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1a) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1b) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1c) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1d) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1e) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x1f) * 1))))) = '\0';
  uVar1 = (*(uint *)(((char *)(this) + 8)));
  *(undefined8 *)((char *)(((char *)(this) + 16))) = (*(undefined8 *)((char *)REFP(0x011575d4) + 0));
  *((undefined8 *)GEN_TOP((((char *)(((char *)(this) + 16))) + 8))) = (*(undefined8 *)((char *)REFP(0x011575d4) + 8));
  (*((char *)GEN_TOP(((((char *)(this) + 16) + (0x10) * 1))))) = ((char *)REFP(0x11575d4))[0x10];
  if (uVar1 == 0) {
    _Var2 = F_00c4b7c2((__time64_t *)0x0);
    (*(uint *)(((char *)(this) + 8))) = (uint)_Var2;
  }
  F_00c48350((undefined8 *)(param_1 + 0x34),0,0x40);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)((char *)(((char *)(this) + 16)));
  *(undefined8 *)(param_1 + 0x3c) = *((undefined8 *)GEN_TOP((((char *)(((char *)(this) + 16))) + 8)));
  *(undefined8 *)(param_1 + 0x44) = *((undefined8 *)GEN_TOP((((char *)(((char *)(this) + 16))) + 0x10)));
  *(undefined8 *)(param_1 + 0x4c) = *((undefined8 *)GEN_TOP((((char *)(((char *)(this) + 16))) + 0x18)));
  *(uint *)(param_1 + 0x74) = (*(uint *)(((char *)(this) + 8)));
  return 1;
}

/* ref: FUN_00e36920 */
byte F_00e36920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    F_00407e80(*(undefined * PTR32 *)((int)this + 0x30),param_1,param_1,param_2 & 0xffffffe0);
    return 1;
  }
  return 0;
}

/* ref: FUN_00e36950 */
byte F_00e36950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    F_00407f40(*(undefined * PTR32 *)((int)this + 0x30),param_1,param_1,param_2 & 0xffffffe0);
    return 1;
  }
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf2 */
uint F_00e36980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe36980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf3 */
byte F_00e36990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf5 */
byte F_00e369a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe369a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::Encrypt */
byte F_00e369b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe369b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  if ((*(undefined * PTR32 *)(((char *)(this) + 48))) != (undefined *)0x0) {
    F_00407e80((*(undefined * PTR32 *)(((char *)(this) + 48))),param_2,param_2,param_3 & 0xffffffe0);
  }
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::Decrypt */
byte F_00e369e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe369e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  if ((*(undefined * PTR32 *)(((char *)(this) + 48))) != (undefined *)0x0) {
    F_00407f40((*(undefined * PTR32 *)(((char *)(this) + 48))),param_2,param_2,param_3 & 0xffffffe0);
  }
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf8 */
byte F_00e36a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: CryptEngineInterface_ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
uint F_00e36a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e36a80 */
uint F_00e36a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36a80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: FUN_00e36aa0 */
uint F_00e36aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return param_1;
}

/* ref: FUN_00e36ac0 */
uint F_00e36ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e36b10 */
uint F_00e36b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36b10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e36b30 */
uint F_00e36b30(unsigned int gen_a0)
{
  GEN_ENTER(0xe36b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e36b50 */
uint F_00e36b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00e36bb0 */
uint F_00e36bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe36bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e36bd0 */
uint F_00e36bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe36bd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e36c00 */
unsigned int F_00e36c00(unsigned int gen_a0)
{
  GEN_ENTER(0xe36c00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e36c60 */
uint F_00e36c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36c60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00e36c80 */
uint F_00e36c80(unsigned int gen_a0)
{
  GEN_ENTER(0xe36c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e36ca0 */
uint F_00e36ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xe36ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: Global::InflateFrame */
uint F_00e36cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe36cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  uint uVar1;
  undefined1 * puVar2;
  
  (*(uint *)(gen_frame + 0x11008)) = 0xe36cfd;
  (*(uint *)(gen_frame + 0x11008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar1 = *(uint *)((int)this + 8);
  if (*(char *)(uVar1 + 0x19) == '\x01') {
    if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
      puVar2 = ((undefined1 *)(gen_frame + 0x10008));
      (*(int *)(gen_frame + 0x10004)) = 0x1000;
    }
    else {
      (*(int *)(gen_frame + 0x10004)) = param_2;
      puVar2 = param_1;
    }
    F_01050f50(puVar2,&(*(int *)(gen_frame + 0x10004)),*(int *)((int)this + 8) + 0x20,
                 *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) + -0x20);
    F_00c46aa0(*(int *)((int)this + 8) + 0x20,puVar2,(*(int *)(gen_frame + 0x10004)));
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x19))) = 0;
    uVar1 = (*(int *)(gen_frame + 0x10004)) + 0x20;
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar1;
}

/* ref: FUN_00e36da0 */
uint F_00e36da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00e36db0 */
uint F_00e36db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00e36dc0 */
uint F_00e36dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36dc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00e36df0 */
byte F_00e36df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0xc) + 0x58U <= *(uint *)this)) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
    }
    iVar4 = *(int *)((int)this + 0xc);
    iVar5 = *(int *)((int)this + 8);
    (*(undefined2 *)(gen_frame + 0x14)) = 2;
    ((undefined4 *)(gen_frame + 0x8))[1] = 0;
    ((undefined4 *)(gen_frame + 0x8))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x38;
    puVar7 = ((undefined4 *)(gen_frame + 0x8));
    puVar8 = (undefined4 *)(iVar4 + iVar5);
    for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x38;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e36eb0 */
byte F_00e36eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe36eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x2b0];
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x29c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2a0);
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0xc) + 0x2b0U <= *(uint *)this)) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
    }
    (*(undefined2 *)(gen_frame + 0x14)) = 10;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x290;
    ((undefined4 *)(gen_frame + 0x8))[1] = 0;
    ((undefined4 *)(gen_frame + 0x8))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    if (param_1 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_2,((undefined4 *)(gen_frame + 0x8)));
      if ((char)uVar5 != '\0') {
        puVar7 = ((undefined4 *)(gen_frame + 0x8));
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
        for (iVar6 = 0xa4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x290;
        piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
        *piVar1 = *piVar1 + 0x290;
        psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
        *psVar2 = *psVar2 + 1;
        bVar4 = 1;
        goto LAB_00e36fab;
      }
    }
  }
  bVar4 = 0;
LAB_00e36fab: ;
  F_00c47745((*(uint *)(gen_frame + 0x29c)) ^ (uint)(uint)(gen_frame + 0x2a0));
  return bVar4;
}

/* ref: FUN_00e36fc0 */
uint F_00e36fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe36fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e36c00(this);
  return (uint)this;
}

/* ref: FUN_00e36fe0 */
byte F_00e36fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe36fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e37000 */
uint F_00e37000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe37000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e37020 */
uint F_00e37020(unsigned int gen_a0)
{
  GEN_ENTER(0xe37020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
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
      return (uint)this;
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
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e37080 */
uint F_00e37080(unsigned int gen_a0)
{
  GEN_ENTER(0xe37080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e37090 */
uint F_00e37090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe37090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e370b0 */
uint F_00e370b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe370b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e370c0 */
uint F_00e370c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe370c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e370d0 */
uint F_00e370d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe370d0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00408da0(in_ecx);
  return in_ecx;
}

/* ref: FUN_00e37100 */
uint F_00e37100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe37100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00409a70(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e37120 */
uint F_00e37120(unsigned int gen_a0)
{
  GEN_ENTER(0xe37120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e37130 */
uint F_00e37130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe37130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e37150 */
uint F_00e37150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe37150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*(int *)((int)this + 0x10) == 0) &&
     (in_EAX = *(uint *)((int)this + 0xc), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = (undefined2)param_2;
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    puVar3 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x700000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x18;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00e37240 */
uint F_00e37240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe37240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*(int *)((int)this + 0x10) == 0) &&
     (in_EAX = *(uint *)((int)this + 0xc), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
    }
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    puVar3 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x800000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x18;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00e37320 */
uint F_00e37320(unsigned int gen_a0)
{
  GEN_ENTER(0xe37320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e37330 */
uint F_00e37330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe37330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e37350 */
uint F_00e37350(unsigned int gen_a0)
{
  GEN_ENTER(0xe37350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042cc20(this,"127.0.0.1",REFG(undefined4, 0x108cc50));
  *(undefined2 *)((int)this + 0x54) = 0x71d5;
  return (uint)this;
}

/* ref: FUN_00e37370 */
uint F_00e37370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe37370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_0042b630(this);
  if (this != param_1) {
    F_0042ccf0(this,param_1);
    *(undefined2 *)((int)this + 0x54) = *(undefined2 *)((int)param_1 + 0x54);
  }
  return (uint)this;
}

/* ref: FUN_00e373a0 */
byte F_00e373a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe373a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x118);
  uVar2 = (uint)*(ushort *)((int)this + 0x114);
  uVar3 = F_0042a990((int)this + 0xc0);
  F_00ba86c0((undefined *)(iVar1 + 0x68),uVar3,uVar2);
  return 1;
}

/* ref: FUN_00e373d0 */
unsigned int F_00e373d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe373d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10e0);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar3 = *(int *)((int)this + 0x10a4);
  if (iVar3 + param_3 < 0x1001) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,param_3);
    *(int *)((int)this + 0x10a4) = *(int *)((int)this + 0x10a4) + param_3;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar4 = 0x1000 - iVar3;
  if (0 < iVar4) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,iVar4);
    *(int *)((int)this + 0x10a4) = *(int *)((int)this + 0x10a4) + iVar4;
  }
  if (*(int *)((int)this + 0x1094) == 0) {
    uVar1 = param_3;
    if (param_3 < 0x1001) {
      uVar1 = 0x1000;
    }
    *(uint *)((int)this + 0x1098) = uVar1;
    pvVar2 = F_00c51787(uVar1);
    *(undefined * PTR32 *)((int)this + 0x1094) = pvVar2;
    F_00c46aa0(pvVar2,iVar4 + param_2,param_3 - iVar4);
    *(uint *)((int)this + 0x109c) = param_3 - iVar4;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (*(uint *)((int)this + 0x1098) < *(int *)((int)this + 0x109c) + param_3) {
    iVar3 = *(uint *)((int)this + 0x1098) + param_3;
    pvVar2 = F_00c52171(*(int *)((int)this + 0x1094),iVar3);
    *(undefined * PTR32 *)((int)this + 0x1094) = pvVar2;
    *(int *)((int)this + 0x1098) = iVar3;
  }
  F_00c46aa0(*(int *)((int)this + 0x1094) + *(int *)((int)this + 0x109c),iVar4 + param_2,
             param_3 - iVar4);
  *(int *)((int)this + 0x109c) = *(int *)((int)this + 0x109c) + (param_3 - iVar4);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf1 */
uint F_00e37520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe37520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x14);
  uVar2 = 0;
  if (uVar1 != 0) {
    if ((*(int *)(this + 0x90) == 0) || (uVar2 = *(uint *)(this + 0x18), uVar1 <= uVar2)) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      return uVar1;
    }
    uVar1 = F_00ba7610(this + 0x68,*(int *)(this + 0x10) + uVar2,uVar1 - uVar2);
    if ((int)uVar1 < 1) {
      uVar1 = F_00ba74d0(this + 0x68);
      *(undefined4 *)(this + 0x90) = 0;
      return uVar1;
    }
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar1;
    uVar2 = *(uint *)(this + 0x18);
    if (*(uint *)(this + 0x14) <= uVar2) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    if (this[0x10b8] != (undefined1)0x0) {
      uVar2 = F_00427ed0(this + 0x10c0);
      this[0x10b8] = (undefined1)0x0;
    }
  }
  return uVar2;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf2 */
unsigned int F_00e375b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe375b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x10e0);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x90) != 0) {
    iVar1 = *(int *)(this + 0x10a0);
    if (iVar1 < *(int *)(this + 0x10a4)) {
      uVar2 = *(uint *)(this + 0x30);
      if (uVar2 < 0x20) {
        uVar4 = *(int *)(this + 0x10a4) - iVar1;
        uVar5 = 0x20 - uVar2;
        if (uVar4 < 0x20 - uVar2) {
          uVar5 = uVar4;
        }
        F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
        *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
        *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
      }
      iVar1 = *(int *)(this + 0x10a0);
      if ((iVar1 < *(int *)(this + 0x10a4)) && (uVar2 = *(uint *)(this + 0x30), 0x1f < uVar2)) {
        uVar5 = *((uint *)GEN_TOP((*(int *)(this + 0x2c) + 0x10)));
        if (uVar2 < uVar5) {
          uVar4 = *(int *)(this + 0x10a4) - iVar1;
          uVar5 = uVar5 - uVar2;
          if (uVar4 < uVar5) {
            uVar5 = uVar4;
          }
          F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
          *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
          *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
        }
      }
      if (*(int *)(this + 0x10a4) <= *(int *)(this + 0x10a0)) {
        iVar1 = *(int *)(this + 0x1094);
        *(undefined4 *)(this + 0x10a4) = 0;
        *(undefined4 *)(this + 0x10a0) = 0;
        if ((iVar1 != 0) && (uVar2 = *(uint *)(this + 0x109c), 0 < (int)uVar2)) {
          if (uVar2 < 0x1001) {
            F_00c46aa0(this + 0x94,iVar1,uVar2);
            uVar3 = *(undefined4 *)(this + 0x109c);
            *(undefined4 *)(this + 0x109c) = 0;
            *(undefined4 *)(this + 0x10a4) = uVar3;
            gen_imp_LeaveCriticalSection(lpCriticalSection);
            return 0;
          }
          F_00c46aa0(this + 0x94,iVar1,0x1000);
          *(undefined4 *)(this + 0x10a4) = 0x1000;
          F_00c46e20(*(int *)(this + 0x1094),*(int *)(this + 0x1094) + 0x1000,
                     *(int *)(this + 0x109c) + -0x1000);
          *(int *)(this + 0x109c) = *(int *)(this + 0x109c) + -0x1000;
        }
      }
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00e37740 */
uint F_00e37740(unsigned int gen_a0)
{
  GEN_ENTER(0xe37740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 0x30));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  return uVar1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::vf0 */
uint F_00e37770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe37770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  (*(void * PTR32 *)((char *)(this))) = (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  F_00406ad0((*(undefined * PTR32 *)(((char *)(this) + 48))));
  (*(undefined * PTR32 *)(((char *)(this) + 48))) = (undefined *)0x0;
  (*(void * PTR32 *)((char *)(this))) =
       (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::LobbyCryptEngine */
uint F_00e377b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe377b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  (*(void * PTR32 *)((char *)(this))) = (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  (*(undefined * PTR32 *)(((char *)(this) + 48))) = (undefined *)0x0;
  F_00c48350(&(*(uint *)(((char *)(this) + 4))),0,0x2c);
  (*(uint *)(((char *)(this) + 4))) = 0x12345678;
  (*(uint *)(((char *)(this) + 12))) = 1000;
  return (uint)this;
}

/* ref: FUN_00e377f0 */
uint F_00e377f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe377f0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00408da0(in_ecx);
  return in_ecx;
}

/* ref: FUN_00e37800 */
uint F_00e37800(unsigned int gen_a0)
{
  GEN_ENTER(0xe37800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00e37870 */
uint F_00e37870(unsigned int gen_a0)
{
  GEN_ENTER(0xe37870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e378c0 */
uint F_00e378c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe378c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e37920 */
uint F_00e37920(unsigned int gen_a0)
{
  GEN_ENTER(0xe37920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e36c00(this);
  return (uint)this;
}

/* ref: FUN_00e37930 */
uint F_00e37930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe37930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_1 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  *(gen_size32 *)this = param_1;
  pvVar1 = F_00c51787(param_1);
  *(undefined * PTR32 *)((int)this + 4) = pvVar1;
  *(undefined * PTR32 *)((int)this + 8) = pvVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_00c48350(*(undefined * PTR32 *)((int)this + 4),0,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00e37970 */
byte F_00e37970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe37970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0xc) + 0x58U <= *(uint *)this)) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = (undefined2)param_2;
    (*(undefined2 *)(gen_frame + 0xc)) = 1;
    (*(ulonglong *)(gen_frame + 0x10)) = 0;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x38;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined8 *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x20)) = 0;
    (*(undefined8 *)(gen_frame + 0x28)) = 0;
    (*(undefined8 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = param_1;
    (*(ulonglong *)(gen_frame + 0x10)) = (ulonglong)param_1;
    if (param_3 != (int *)0x0) {
      iVar5 = *param_3;
      if (iVar5 != param_3[1]) {
        F_00c46aa0((int)&(*(ulonglong *)(gen_frame + 0x10)) + 4,iVar5,param_3[1] - iVar5);
      }
    }
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x38;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x3c)) ^ (uint)(uint)(gen_frame + 0x40));
  return bVar4;
}

/* ref: FUN_00e37aa0 */
byte F_00e37aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe37aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0xc) + 0x298U <= *(uint *)this)) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = (undefined2)param_3;
    (*(undefined2 *)(gen_frame + 0xc)) = 9;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x278;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x10)),0,0x268);
    (*(undefined4 *)(gen_frame + 0x10)) = param_2;
    if (param_4 != (int *)0x0) {
      iVar6 = *param_4;
      if (iVar6 != param_4[1]) {
        F_00c46aa0(((undefined1 *)(gen_frame + 0x14)),iVar6,param_4[1] - iVar6);
      }
    }
    if (param_1 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined4 *)(gen_frame + 0x0)));
      if ((char)uVar5 != '\0') {
        puVar7 = ((undefined4 *)(gen_frame + 0x0));
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
        for (iVar6 = 0x9e; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x278;
        piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
        *piVar1 = *piVar1 + 0x278;
        psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
        *psVar2 = *psVar2 + 1;
        bVar4 = 1;
        goto LAB_00e37bf0;
      }
    }
  }
  bVar4 = 0;
LAB_00e37bf0: ;
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return bVar4;
}

/* ref: Global::ReadSegment */
uint F_00e37c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe37c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  uint * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  *(undefined2 *)(param_2 + 5) = 0;
  if ((*(uint *)((int)this + 0xc) < 0x20) ||
     (*(uint *)((int)this + 0xc) < *((uint *)GEN_TOP((*(int *)((int)this + 8) + 0x10))))) {
    return 0;
  }
  F_00e36cf0(this,param_3,param_4);
  iVar2 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar2 + 0x10);
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0x20;
  }
  iVar5 = *(int *)((int)this + 0x10);
  if (iVar5 + 0x10U <= *(uint *)((int)this + 0xc)) {
    puVar1 = param_2 + 2;
    *(undefined8 *)puVar1 = *(undefined8 *)(iVar5 + iVar2);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(iVar5 + 8 + iVar2);
    uVar4 = *puVar1;
    iVar2 = *(int *)((int)this + 0x10);
    if (uVar4 + iVar2 <= *(uint *)((int)this + 0xc)) {
      switch((unsigned int)(uintptr_t)((short)param_2[5])) {
      case 1: ;
        if (uVar4 == 0x38) {
          puVar6 = ((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *puVar1;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        return 0;
      case 2: ;
        if (uVar4 == 0x38) {
          puVar6 = ((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *puVar1;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        return 0;
      case 3: ;
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x40))(param_1)));
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x8c8,0);
        if (uVar4 == 0) {
          return 0;
        }
        *(uint *)(uVar4 + 0x14) = param_2[3];
        *(uint *)(uVar4 + 0x18) = param_2[4];
        F_00c46aa0(*(undefined4 *)(uVar4 + 0x24),
                   *(int *)((int)this + 8) + 0x10 + *(int *)((int)this + 0x10),*puVar1 - 0x10);
        *(uint *)(uVar4 + 0x20) = *puVar1 - 0x10;
        if (param_5 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*param_5 + 0x1c))
                    (param_5,param_2[3],*(undefined4 *)(uVar4 + 0x24),*puVar1 - 0x10);
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *puVar1;
        *param_2 = uVar4;
        if (*(int *)((int)this + 0x10) == *(int *)((int)this + 0xc)) {
          *(undefined4 *)((int)this + 0x10) = 0;
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        return uVar4;
      default: ;
        *(uint *)((int)this + 0x10) = uVar4 + iVar2;
        break;
      case 7: ;
        if (uVar4 == 0x18) {
          iVar5 = *(int *)((int)this + 8);
          *(undefined8 *)puVar1 = *(undefined8 *)(iVar5 + iVar2);
          *(undefined8 *)(param_2 + 4) = *(undefined8 *)(iVar5 + 8 + iVar2);
          *(undefined8 *)(param_2 + 6) = *(undefined8 *)(iVar5 + 0x10 + iVar2);
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *puVar1;
        if (*(int *)((int)this + 0x10) != *(int *)((int)this + 0xc)) {
          return 0;
        }
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        return 0;
      case 8: ;
        if (uVar4 == 0x18) {
          iVar5 = *(int *)((int)this + 8);
          *(undefined8 *)puVar1 = *(undefined8 *)(iVar5 + iVar2);
          *(undefined8 *)(param_2 + 4) = *(undefined8 *)(iVar5 + 8 + iVar2);
          *(undefined8 *)(param_2 + 6) = *(undefined8 *)(iVar5 + 0x10 + iVar2);
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *puVar1;
        if (*(int *)((int)this + 0x10) != *(int *)((int)this + 0xc)) {
          return 0;
        }
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        return 0;
      case 9: ;
        if (uVar4 == 0x278) {
          puVar6 = ((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0x9e; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *puVar1;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        return 0;
      case 10: ;
        if (uVar4 == 0x290) {
          puVar6 = ((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar2)));
          puVar7 = puVar1;
          for (iVar5 = 0xa4; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *puVar1;
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        return 0;
      }
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 0;
}

/* ref: FUN_00e37ef0 */
uint F_00e37ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe37ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e37f10 */
uint F_00e37f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe37f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e37f20 */
byte F_00e37f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe37f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e37f60 */
uint F_00e37f60(unsigned int gen_a0)
{
  GEN_ENTER(0xe37f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e37020(this);
  return (uint)this;
}

/* ref: FUN_00e37f70 */
uint F_00e37f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe37f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e37f90 */
uint F_00e37f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe37f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  bool bVar3;
  undefined4 * puVar4;
  uint uVar5;
  __time64_t _Var6;
  
  piVar2 = (int *)param_1[1];
  bVar3 = false;
  puVar4 = param_1;
  if (piVar2[5] == 0) {
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    LOCK();
    iVar1 = piVar2[0x12];
    piVar2[0x12] = 0;
    UNLOCK();
    if (iVar1 == 0) {
      puVar4 = (undefined4 *)((int)_Var6 - piVar2[0x10]);
      if (puVar4 <= (undefined4 *)((uint)piVar2[0x11] >> 1)) goto LAB_00e37ff0;
      puVar4 = (undefined4 *)F_00e37150(piVar2 + 2,*param_1,0);
    }
    else {
      puVar4 = (undefined4 *)F_00e37240(piVar2 + 2,*param_1);
    }
    bVar3 = true;
    piVar2[0x10] = (int)_Var6;
  }
LAB_00e37ff0: ;
  if (piVar2[5] != 0) {
    if ((piVar2[6] == 0) && (uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2), (char)uVar5 == '\0')) {
      return uVar5;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,*(undefined4 *)this)));
    if (bVar3) {
      piVar2[5] = 0;
      piVar2[6] = 0;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00e38030 */
uint F_00e38030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe38030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e38050 */
uint F_00e38050(unsigned int gen_a0)
{
  GEN_ENTER(0xe38050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e380a0 */
uint F_00e380a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe380a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e380c0 */
uint F_00e380c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe380c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(uVar1 + 0x90) = uVar1 + 0x68;
  return uVar1;
}

/* ref: FUN_00e380e0 */
unsigned int F_00e380e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe380e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00e373d0(*(undefined * PTR32 *)(param_1 + 0x24),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00e38100 */
uint F_00e38100(unsigned int gen_a0)
{
  GEN_ENTER(0xe38100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x24) + 0x58))) + 0xbc))) = 4;
  return param_1;
}

/* ref: FUN_00e38120 */
byte F_00e38120(unsigned int gen_a0)
{
  GEN_ENTER(0xe38120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x24) + 0x90))) = 0;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::LobbyCryptEngine::ReadEncryptionReply */
byte F_00e38140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe38140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x310];
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x2fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x300);
  F_00406ad0((*(undefined * PTR32 *)(((char *)(this) + 48))));
  (*(undefined * PTR32 *)(((char *)(this) + 48))) = (undefined *)0x0;
  F_00408da0(((undefined1 *)(gen_frame + 0x290)));
  F_0040b1f0(((undefined1 *)(gen_frame + 0x290)),&(*(uint *)(((char *)(this) + 4))),0x2c);
  F_0040b2a0(((undefined1 *)(gen_frame + 0x290)),((undefined1 *)(gen_frame + 0x2ec)));
  this_00 = (undefined *)F_004069f0(0x1048);
  if (this_00 == (undefined *)0x0) {
    this_00 = (undefined *)0x0;
  }
  else {
    F_00409a70(this_00,((undefined1 *)(gen_frame + 0x2ec)),0x10);
  }
  (*(undefined * PTR32 *)(((char *)(this) + 48))) = this_00;
  puVar2 = param_2;
  puVar3 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar1 = 0xa4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (this_00 != (undefined *)0x0) {
    F_00407f40(this_00,((undefined4 *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x10)),0x280);
    *(undefined2 *)(param_3 + 3) = 2;
    param_3[1] = ((undefined4 *)(gen_frame + 0x0))[1];
    *param_3 = 0x38;
    param_3[2] = ((undefined4 *)(gen_frame + 0x0))[2];
    *(undefined8 *)(param_3 + 5) = (*(undefined8 *)(gen_frame + 0x1c));
    *(undefined8 *)(param_3 + 7) = (*(undefined8 *)(gen_frame + 0x24));
    *(undefined8 *)(param_3 + 9) = (*(undefined8 *)(gen_frame + 0x2c));
    param_3[4] = ((undefined4 *)(gen_frame + 0x10))[0];
    *(undefined8 *)(param_3 + 0xb) = (*(undefined8 *)(gen_frame + 0x34));
  }
  F_00c47745((*(uint *)(gen_frame + 0x2fc)) ^ (uint)(uint)(gen_frame + 0x300));
  return this_00 != (undefined *)0x0;
}

/* ref: FUN_00e38290 */
byte F_00e38290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe38290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  
  if (*(int *)((int)this + 0x80) != 0) {
    bVar1 = F_00e37aa0(param_1 + 2,*(int *)((int)this + 0x80),param_2,param_4,param_5);
    if (bVar1 != 0) goto LAB_00e382d8;
  }
  bVar1 = F_00e37970(param_1 + 2,param_2,param_4,param_5);
LAB_00e382d8: ;
  if (((char)param_3 != '\0') && (param_1[5] != 0)) {
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,this);
  }
  return bVar1;
}

/* ref: FUN_00e38300 */
uint F_00e38300(unsigned int gen_a0)
{
  GEN_ENTER(0xe38300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x115763c));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x28));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0xc));
  return extraout_EAX;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf5 */
uint F_00e38320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe38320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  return 0;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf4 */
byte F_00e38340(void)
{
  GEN_ENTER(0xe38340u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00e38350 */
uint F_00e38350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe38350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_1 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x115763c));
  *(gen_size32 *)((int)this + 8) = param_1;
  pvVar1 = F_00c51787(param_1);
  *(undefined * PTR32 *)((int)this + 0xc) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x10) = pvVar1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  F_00c48350(*(undefined * PTR32 *)((int)this + 0xc),0,param_1);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(gen_size32 *)((int)this + 0x24) = param_1;
  pvVar1 = F_00c51787(param_1);
  *(undefined * PTR32 *)((int)this + 0x28) = pvVar1;
  *(undefined * PTR32 *)((int)this + 0x2c) = pvVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x28),0,param_1);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  LOCK();
  *(undefined4 *)((int)this + 0x48) = 0;
  UNLOCK();
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x2d;
  return (uint)this;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
uint F_00e383d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe383d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x115763c));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x28));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0xc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e38410 */
uint F_00e38410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe38410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e38470 */
uint F_00e38470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe38470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e36c00(this);
  return (uint)param_1;
}

/* ref: FUN_00e38490 */
uint F_00e38490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe38490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)(param_2 + 0x48);
  *(uint *)(param_2 + 0x48) = 1;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00e384d0 */
uint F_00e384d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe384d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e384e0 */
uint F_00e384e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe384e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  if ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2])) {
    do {
      F_00e37f90(&(*(undefined4 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[1]) + 3);
      if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]));
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          (*(int * PTR32 *)&gen_args[1]) = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            (*(int * PTR32 *)&gen_args[1]) = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
          piVar2 = (*(int * PTR32 *)&gen_args[1]);
          while (((*(int * PTR32 *)&gen_args[1]) = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]))))) {
            cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
            piVar2 = (*(int * PTR32 *)&gen_args[1]);
          }
        }
      }
    } while ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e38570 */
uint F_00e38570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe38570u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0x1ffffffd < *(uint *)((int)this + 8)) {
    F_00406ad0(param_4);
                    
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
LAB_00e3876d: ;
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
        goto LAB_00e3876d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e387a0 */
uint F_00e387a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe387a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e37020(this);
  return (uint)this;
}

/* ref: FUN_00e387b0 */
uint F_00e387b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe387b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e387d0 */
unsigned int F_00e387d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe387d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e387f0 */
uint F_00e387f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe387f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __time64_t _Var1;
  ulonglong uVar2;
  
  F_00e38350(this,0x1000);
  *(undefined4 *)((int)this + 0x58) = param_2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157658));
  *(undefined4 *)((int)this + 0x54) = param_1;
  F_00ba7100((int)this + 0x5c);
  F_00ba85b0((int)this + 0x68,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[1])REFP(0x11574d8));
  *(undefined4 *)((int)this + 0x1094) = 0;
  *(undefined4 *)((int)this + 0x1098) = 0;
  *(undefined4 *)((int)this + 0x109c) = 0;
  *(undefined1 *)((int)this + 0x10b8) = 1;
  F_00a1af40((undefined *)((int)this + 0x10c0));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x10a0) = 0;
  *(undefined4 *)((int)this + 0x10a4) = 0;
  F_00ba8040();
  gen_imp_InterlockedExchange((LONG *)((int)this + 0x8c),(LONG)this);
  F_00baba80((undefined *)((int)this + 0x68));
  F_00ba78e0((undefined *)((int)this + 0x68),((code *)REFP(0xe380c0)));
  F_00ba7890((undefined *)((int)this + 0x68),((code *)REFP(0xe380e0)));
  F_00ba7b00((undefined *)((int)this + 0x68),((code *)REFP(0xe38120)));
  F_00ba7a40((undefined *)((int)this + 0x68),((code *)REFP(0xe38100)),0x78);
  F_00ba7aa0((undefined *)((int)this + 0x68),((code *)REFP(0xe38100)),0x2d);
  F_00ba9ae0((undefined *)((int)this + 0x68),(int)this + 0x5c);
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x10c0) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x10c8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x10d0) = uVar2;
  *(undefined4 *)((int)this + 0x44) = 0x14;
  return (uint)this;
}

/* ref: FUN_00e38930 */
uint F_00e38930(unsigned int gen_a0)
{
  GEN_ENTER(0xe38930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157658));
  F_00ba74d0((undefined *)((int)this + 0x68));
  F_00baa650((undefined *)((int)this + 0x5c));
  if (*(undefined * PTR32 *)((int)this + 0x1094) != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x1094));
    *(undefined4 *)((int)this + 0x1094) = 0;
  }
  if (*(int *)((int)this + 0x58) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + 0x118))) = 0;
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  F_00ba85e0((undefined *)((int)this + 0x68));
  F_00bac250((undefined *)((int)this + 0x5c));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x115763c));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x28));
  F_00c4c68f(*(undefined * PTR32 *)((int)this + 0xc));
  return extraout_EAX;
}

/* ref: FUN_00e389c0 */
uint F_00e389c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe389c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e389e0 */
uint F_00e389e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe389e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e38a40 */
uint F_00e38a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe38a40u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e36c00(&(*(int * PTR32 *)&gen_args[2]));
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
      goto LAB_00e38b5a;
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
      piVar4 = (int *)F_00e36bd0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e36bb0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e38b5a: ;
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
            F_00e378c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e36b50((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e378c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00e38c18: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e36b50((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e38c18;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e378c0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e36b50((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e38c90 */
unsigned int F_00e38c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe38c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e38c90(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00e38cd0 */
uint F_00e38cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe38cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00e384e0(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: FUN_00e38d00 */
uint F_00e38d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe38d00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e38570((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e37020(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e38570((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e38de0 */
unsigned int F_00e38de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe38de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e38e00 */
byte F_00e38e00(unsigned int gen_a0)
{
  GEN_ENTER(0xe38e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  __time64_t _Var5;
  ulonglong uVar6;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x118);
  uVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  _Var5 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x120) = (int)_Var5;
  uVar6 = F_00427d90();
  *(ulonglong *)((int)this + 0x128) = uVar6;
  uVar6 = F_00427e30();
  *(ulonglong *)((int)this + 0x130) = uVar6;
  *(undefined4 *)((int)this + 0x138) = 0;
  this_00 = (undefined *)F_00406b90(0x10f8,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar4 = F_00e387f0(this_00,(int)this + 0xc0,this);
  }
  *(uint *)((int)this + 0x118) = uVar4;
  uVar2 = (uint)*(ushort *)((int)this + 0x114);
  uVar3 = F_0042a990((int)this + 0xc0);
  F_00ba86c0((undefined *)(uVar4 + 0x68),uVar3,uVar2);
  return 1;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf0 */
uint F_00e38ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe38ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e38930(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e38ed0 */
unsigned int F_00e38ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xe38ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  F_00e384e0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),*(undefined4 * PTR32 *)((int)this + 0x10),this)
  ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  return 0;
}

/* ref: FUN_00e38f20 */
uint F_00e38f20(unsigned int gen_a0)
{
  GEN_ENTER(0xe38f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e38c90(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
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

/* ref: FUN_00e38f70 */
uint F_00e38f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe38f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
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
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e38fd0 */
uint F_00e38fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe38fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e38f20(this);
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
    F_00e38a40(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e39070 */
uint F_00e39070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e38d00(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e390f0 */
uint F_00e390f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe390f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e38fd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e39110 */
unsigned int F_00e39110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 0x10);
    puVar1[1] = *(undefined4 *)((int)this + 0x10);
    puVar1[2] = *(undefined4 *)((int)this + 0x10);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = param_1;
      puVar1[4] = param_2;
    }
    F_00e38d00((undefined *)((int)this + 0xc),((undefined1 *)(gen_frame + 0xc)),puVar1,0);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: FUN_00e39190 */
uint F_00e39190(unsigned int gen_a0)
{
  GEN_ENTER(0xe39190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e38fd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e391c0 */
unsigned int F_00e391c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe391c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  __time64_t _Var6;
  
  iVar2 = (int)(*(LPCRITICAL_SECTION *)&gen_args[2]);
  if (*(int *)((int)(*(LPCRITICAL_SECTION *)&gen_args[2]) + 4) != 0) {
    return 0;
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 *)&gen_args[3]));
  if (uVar4 != 0) {
    *(uint *)(iVar2 + 4) = uVar4;
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != 0) && ((*(int *)&gen_args[4]) != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))),uVar4,(*(int *)&gen_args[4]));
    }
    (*(LPCRITICAL_SECTION *)&gen_args[2]) = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68);
    gen_imp_EnterCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
    piVar5 = (int *)F_00c32fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[1]));
    if (*piVar5 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
      F_00e38a40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(undefined4 *)&gen_args[3]),*piVar5);
      uVar1 = (*(undefined4 *)&gen_args[1]);
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 *)&gen_args[1]));
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))),uVar1);
      }
    }
    F_00e39110((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)(iVar2 + 4),iVar2);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)(iVar2 + 4));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),*(undefined4 *)(iVar2 + 4));
    }
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) == 0) ||
       (bVar3 = F_00e36eb0((undefined *)(iVar2 + 8),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))),
                             *(undefined4 *)(iVar2 + 4),(*(int *)&gen_args[4])), bVar3 == 0)) {
      F_00e36df0((undefined *)(iVar2 + 8),*(undefined4 *)(iVar2 + 4));
    }
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)(iVar2 + 0x40) = (int)_Var6;
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
    return 0;
  }
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::AcceptConnectionId */
unsigned int F_00e392e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe392e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  iVar3 = (*(int *)&gen_args[2]);
  if ((*(int *)((*(int *)&gen_args[2]) + 4) == 0) && (*(int *)((*(int *)&gen_args[3]) + 0x10) != 0)) {
    if ((*(int *)&gen_args[1]) != 0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x68));
      piVar4 = (int *)F_00c32fe0((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]));
      if (*piVar4 != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
        F_00e38a40((*(undefined * PTR32 *)&gen_args[0]) + 0xc,&(*(int *)&gen_args[2]),*piVar4);
        iVar2 = (*(int *)&gen_args[1]);
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(int *)&gen_args[1]));
        if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x80))),iVar2);
        }
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x68));
    }
    uVar1 = *(undefined4 *)((*(int *)&gen_args[3]) + 0x10);
    *(undefined4 *)(iVar3 + 4) = uVar1;
    F_00e39110((*(undefined * PTR32 *)&gen_args[0]),uVar1,iVar3);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)(iVar3 + 4));
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),*(undefined4 *)(iVar3 + 4));
    }
  }
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::DispatchSegment */
byte F_00e393a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe393a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2f0);
  (*(uint *)(gen_frame + 0x10)) = param_1;
  ((undefined4 *)(gen_frame + 0x18))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (param_3[0xd] == 0) {
    (*(bool *)(gen_frame + 0x17)) = param_3[0xc] == 0;
    ((code *)*(gen_code32 *)(*param_3 + 8))(param_3,this);
    if (((*(bool *)(gen_frame + 0x17)) != false) && (param_3[0xc] != 0)) {
      uVar1 = *(undefined4 *)(param_3[0xb] + 0xc);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_3[0xb] + 8);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      F_00e29e50(this + 0x20,&(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0x14))(param_3,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = *(undefined4 *)(param_3[0xb] + 0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_3[0xb] + 8);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  uVar3 = F_00e37c10(param_3 + 9,*(undefined4 *)(this + 8),((undefined4 *)(gen_frame + 0x18)),uVar3,(*(undefined4 *)(gen_frame + 0x4)),
                              *(undefined4 *)(this + 0x80));
  if (uVar3 == 0) {
    switch((unsigned int)(uintptr_t)((*(undefined2 *)(gen_frame + 0x2c)))) {
    case 1: ;
      F_00e391c0(this,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x20)),0);
      bVar2 = 1;
      break;
    case 2: ;
      F_00e392e0(this,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x20)));
      bVar2 = 1;
      break;
    default: ;
      bVar2 = 0;
      break;
    case 7: ;
      LOCK();
      param_3[0x12] = 1;
      UNLOCK();
      bVar2 = 1;
      break;
    case 8: ;
      goto switchD_00e394c6_caseD_8;
    case 9: ;
      (*(uint *)(gen_frame + 0x10)) = 0;
      if (*(int *)(this + 0x80) == 0) {
LAB_00e39522: ;
        F_00e29270(&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0)));
      }
      else {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 8))))
                          (*(int * PTR32 *)(this + 0x80),param_2,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0)));
        (*(uint *)(gen_frame + 0x10)) = uVar3;
        if (uVar3 == 0) goto LAB_00e39522;
      }
      F_00e391c0(this,param_2,param_3,((undefined1 *)(gen_frame + 0x2b0)),(*(uint *)(gen_frame + 0x10)));
      bVar2 = 1;
      break;
    case 10: ;
      if ((*(int *)(this + 0x80) == 0) ||
         (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x10))))
                            (*(int * PTR32 *)(this + 0x80),param_2,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0))),
         (char)uVar3 == '\0')) {
        F_00e29330(&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0)));
      }
      F_00e392e0(this,param_2,param_3,((undefined1 *)(gen_frame + 0x2b0)));
      bVar2 = 1;
    }
  }
  else {
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    *(uint *)((*(uint *)(gen_frame + 0x10)) + 0xc) = uVar3;
    *(undefined4 *)((*(uint *)(gen_frame + 0x10)) + 0x10) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((*(uint *)(gen_frame + 0x10)) + 0x14) = (*(undefined4 *)(gen_frame + 0xc));
switchD_00e394c6_caseD_8: ;
    bVar2 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x2ec)) ^ (uint)(uint)(gen_frame + 0x2f0));
  return bVar2;
}

/* ref: FUN_00e39600 */
uint F_00e39600(unsigned int gen_a0)
{
  GEN_ENTER(0xe39600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e38fd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e39630 */
uint F_00e39630(unsigned int gen_a0)
{
  GEN_ENTER(0xe39630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::vf1 */
byte F_00e39690(unsigned int gen_a0)
{
  GEN_ENTER(0xe39690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  
  if ((*(int *)(this + 0x118) == 0) || (*((int *)GEN_TOP((*(int *)(this + 0x118) + 4))) != 0))
  goto LAB_00e3975d;
  if (*(int *)(this + 0x138) != 0) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    if ((uint)((int)_Var4 - *(int *)(this + 0x120)) < *(uint *)(this + 0x138)) goto LAB_00e3975d;
  }
  piVar1 = *(int * PTR32 *)(this + 0x118);
  if (*(int *)(this + 0x80) == 0) {
LAB_00e396fd: ;
    bVar3 = F_00e37970(piVar1 + 2,0,3,0);
  }
  else {
    bVar3 = F_00e37aa0(piVar1 + 2,*(int *)(this + 0x80),0,3,0);
    if (bVar3 == 0) goto LAB_00e396fd;
  }
  if (piVar1[5] != 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
  }
  if (bVar3 != 0) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)(this + 0x120) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)(this + 0x128) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)(this + 0x130) = uVar5;
    *(undefined4 *)(this + 0x138) = 2;
  }
LAB_00e3975d: ;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  F_00e384e0(((undefined1 *)(gen_frame + 0x18)),**(undefined4 * PTR32 *)(this + 0x10),*(undefined4 * PTR32 *)(this + 0x10),this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  if ((*(int *)(this + 0x118) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x118) + 4))) == 0)) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)));
    uVar2 = *(undefined4 *)(this + 0x118);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    bVar3 = F_00e393a0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,uVar2);
    if ((bVar3 != 0) && ((*(int *)(gen_frame + 0xc)) != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8),(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  if ((*(int *)(this + 0x118) != 0) && (*(int *)(this + 0xbc) != 4)) {
    F_00bad720(((undefined *)GEN_TOP((*(int *)(this + 0x118) + 0x5c))));
  }
  return 1;
}

/* ref: FUN_00e39820 */
uint F_00e39820(unsigned int gen_a0)
{
  GEN_ENTER(0xe39820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e38fd0((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 0x10));
  return uVar1;
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
unsigned int F_00e39870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf3 */
unsigned int F_00e39880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e39890 */
uint F_00e39890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x10) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
    *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x15))) = 1;
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
    gen_imp_InitializeCriticalSection((int)this + 0x50);
    gen_imp_InitializeCriticalSection((int)this + 0x68);
    *(undefined4 *)((int)this + 0x80) = 0;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e39940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e38fd0((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  F_00406ad0(*(undefined4 *)((int)this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e399a0 */
uint F_00e399a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe399a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x118);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157688));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  F_0042c880((undefined *)((int)this + 0xc0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) =
       (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  F_00406ad0(*(undefined4 *)((int)this + 0xb8));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) =
       (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e38fd0((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar2 = F_00406ad0(*(undefined4 *)((int)this + 0x10));
  return uVar2;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::vf0 */
uint F_00e39a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e399a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ServiceConsumerConnectionManager */
uint F_00e39a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  F_00e39890(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1157688));
  *(undefined * PTR32 * PTR32 *)(this + 0x88) = (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  *(undefined4 *)(this + 0xb8) = 0;
  F_00c48350(this + 0x8c,0,0x2c);
  *(undefined4 *)(this + 0x8c) = 0x12345678;
  this_00 = this + 0xc0;
  *(undefined4 *)(this + 0x94) = 1000;
  F_0042b630(this_00);
  if (this_00 != param_2) {
    F_0042ccf0(this_00,param_2);
    *(undefined2 *)(this + 0x114) = *(undefined2 *)(param_2 + 0x54);
  }
  *(undefined4 *)(this + 0x118) = 0;
  F_00a1af40(this + 0x120);
  *(undefined4 *)(this + 0x138) = 0;
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)(this + 0x120) = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)(this + 0x128) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)(this + 0x130) = uVar3;
  *(undefined4 *)(this + 0xbc) = 0;
  this_01 = (undefined *)F_00406b90(0x10f8,0,0);
  if (this_01 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00e387f0(this_01,this + 0xc0,this);
  }
  *(undefined4 *)(this + 0x13c) = 0;
  *(uint *)(this + 0x118) = uVar1;
  *(undefined * PTR32 *)(this + 0x80) = this + 0x88;
  return (uint)this;
}

/* ref: FUN_00e39b80 */
uint F_00e39b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00e39bb0 */
uint F_00e39bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_01050d30(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x10) = param_1;
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf1 */
uint F_00e39be0(unsigned int gen_a0)
{
  GEN_ENTER(0xe39be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf3 */
uint F_00e39bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_00e3b780((uint)*(ushort *)(param_1 + 2),param_1 + 0x10,param_2 + -0x10,0);
  uVar1 = F_00e3b820(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
unsigned int F_00e39c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf3 */
unsigned int F_00e39c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: PacketBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e39c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e39ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e39ce0 */
uint F_00e39ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xe39ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf2 */
uint F_00e39d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __time64_t _Var1;
  
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *(undefined2 *)((int)param_1 + 2) = *(undefined2 *)(this + 0x30);
  *(undefined1 *)((int)param_1 + 1) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  param_1[2] = (uint)_Var1;
  return (uint)_Var1;
}

/* ref: FUN_00e39d70 */
uint F_00e39d70(unsigned int gen_a0)
{
  GEN_ENTER(0xe39d70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  return (uint)in_ecx;
}

/* ref: FUN_00e39da0 */
unsigned int F_00e39da0(unsigned int gen_a0)
{
  GEN_ENTER(0xe39da0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  return 0;
}

/* ref: FUN_00e39dc0 */
uint F_00e39dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe39dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576b8));
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoUpPacketBuilder::vf0 */
uint F_00e39df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e39e30 */
uint F_00e39e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe39e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x11576cc));
  F_01050d30((undefined *)((int)this + 0x20),param_2,param_4);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x28) = *param_3;
  *(undefined4 *)((int)this + 0x2c) = param_3[1];
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf0 */
uint F_00e39e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::ClientPacketBuilder */
uint F_00e39ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(this + 0x10);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x11576cc));
  F_01050d30(this + 0x20,param_2,param_3);
  *(undefined4 *)(this + 0x30) = param_1;
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf2 */
unsigned int F_00e39f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf3 */
unsigned int F_00e39f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf4 */
unsigned int F_00e39f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf5 */
unsigned int F_00e39f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf6 */
unsigned int F_00e39f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf7 */
unsigned int F_00e39f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf8 */
unsigned int F_00e39f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf9 */
unsigned int F_00e39f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf10 */
unsigned int F_00e39fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf11 */
unsigned int F_00e39fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf12 */
unsigned int F_00e39fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf13 */
unsigned int F_00e39fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00e39fe0 */
uint F_00e39fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39fe0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = in_eax >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *(undefined1 *)(in_ecx + uVar2);
    *(undefined1 *)(in_ecx + uVar2) = *(undefined1 *)(in_ecx + 7 + uVar2);
    *(undefined1 *)(in_ecx + 7 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 1 + uVar2);
    *(undefined1 *)(in_ecx + 1 + uVar2) = *(undefined1 *)(in_ecx + 6 + uVar2);
    *(undefined1 *)(in_ecx + 6 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 2 + uVar2);
    *(undefined1 *)(in_ecx + 2 + uVar2) = *(undefined1 *)(in_ecx + 5 + uVar2);
    *(undefined1 *)(in_ecx + 5 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 3 + uVar2);
    *(undefined1 *)(in_ecx + 3 + uVar2) = *(undefined1 *)(in_ecx + 4 + uVar2);
    *(undefined1 *)(in_ecx + 4 + uVar2) = uVar1;
    uVar2 = uVar2 + 8;
  }
  return uVar2;
}

/* ref: FUN_00e3a100 */
uint F_00e3a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a100u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x34) {
    return 0x14;
  }
  return (-(uint)(param_2 < 0x54) & 0xffffffe0) + 0x54;
}

/* ref: FUN_00e3a1d0 */
uint F_00e3a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  return (-(uint)(param_2 < 0x28) & 0xffffffe0) + 0x28;
}

/* ref: FUN_00e3a230 */
uint F_00e3a230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3a230u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e39fe0(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_00e39fe0(8,param_1 + 8);
  uVar3 = uVar2 + 2 + uVar3;
  uVar2 = uVar3 + 2;
  if (param_2 < uVar2) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  if (uVar3 + 6 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x17);
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
    *(undefined1 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x16);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
    uVar2 = uVar3 + 8;
    *(undefined1 *)(param_1 + 0x15) = uVar1;
    if (param_2 < uVar2) {
      return uVar3 + 6;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x19);
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    if (uVar3 + 0x28 <= param_2) {
      uVar2 = uVar3 + 0x38;
      if (param_2 < uVar2) {
        return uVar3 + 0x28;
      }
      if (uVar3 + 0x438 <= param_2) {
        return uVar3 + 0x438;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00e3a2e0 */
uint F_00e3a2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3a2e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e39fe0(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_00e39fe0(8,param_1 + 8);
  uVar3 = uVar2 + 2 + uVar3;
  uVar2 = uVar3;
  if (uVar3 + 2 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x13);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    uVar2 = uVar3 + 2;
    if (uVar3 + 6 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x17);
      *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x14) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x16);
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
      uVar2 = uVar3 + 0x26;
      *(undefined1 *)(param_1 + 0x15) = uVar1;
      if (param_2 < uVar2) {
        return uVar3 + 6;
      }
    }
  }
  return uVar2;
}

