#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: NetBufferFactoryTmpl_LF_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf6 */
unsigned int F_0104dea0(void)
{
  GEN_ENTER(0x104dea0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0104deb0 */
uint F_0104deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104deb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_01049b10(param_1,param_2);
  uVar1 = F_0104c030(*(undefined * PTR32 *)((int)this + 0x20),uVar1);
  return uVar1;
}

/* ref: FUN_0104ded0 */
uint F_0104ded0(unsigned int gen_a0)
{
  GEN_ENTER(0x104ded0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0104b780(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0104df00 */
uint F_0104df00(unsigned int gen_a0)
{
  GEN_ENTER(0x104df00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0104b820(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_0104df30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104df30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0104dbd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_0104df60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104df60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryTmpl_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_0104df90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104df90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0104dd40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryTmpl_LF_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_0104dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104dfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0104dff0 */
uint F_0104dff0(unsigned int gen_a0)
{
  GEN_ENTER(0x104dff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  
  iVar2 = *(int *)((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x12b1fd4));
  piVar7 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this;
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
  while (((*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar4, iVar2 != 0 && (piVar7 != (int *)puVar4[6]))) {
    if (piVar7[3] != puVar4[2]) {
      piVar3 = *(int * PTR32 *)(piVar7[4] + 0x20);
      iVar2 = *piVar3;
      (*(int *)(gen_frame + 0x10)) = puVar4[2];
      ((code *)*(gen_code32 *)(iVar2 + 4))(piVar3);
      F_00c31050(piVar3 + 5,&(*(int *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x10)));
      if ((*(int *)(gen_frame + 0x14)) != piVar3[6]) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(piVar3[4] + 0x4c) + 0x18))))
                  (*(int * PTR32 *)(piVar3[4] + 0x4c),*(undefined4 *)((*(int *)(gen_frame + 0x14)) + 0x10));
        F_0104a8b0(piVar3 + 5,((undefined1 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)));
      }
      ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined4 * PTR32 *)(gen_frame + 0x18))[4] + 0x4c) + 0x18))))(*(int * PTR32 *)((*(undefined4 * PTR32 *)(gen_frame + 0x18))[4] + 0x4c),piVar7[4]);
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar3 = (int *)piVar7[2];
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x15);
        piVar7 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar7 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar7[1] + 0x15);
        piVar5 = (int *)piVar7[1];
        piVar3 = piVar7;
        while ((piVar7 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
          cVar1 = *(char *)(piVar7[1] + 0x15);
          piVar5 = (int *)piVar7[1];
          piVar3 = piVar7;
        }
      }
    }
    iVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18))[7];
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
  }
  cVar1 = *((char *)GEN_TOP(((int)*(int * PTR32 *)(puVar4[6] + 4) + 0x15)));
  piVar7 = *(int * PTR32 *)(puVar4[6] + 4);
  while (cVar1 == '\0') {
    F_0104abe0(puVar4 + 5,piVar7[2]);
    piVar3 = (int *)*piVar7;
    F_00406ad0(piVar7);
    piVar7 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *(undefined4 *)(puVar4[6] + 4) = puVar4[6];
  *(undefined4 *)puVar4[6] = puVar4[6];
  *(undefined4 *)(puVar4[6] + 8) = puVar4[6];
  puVar4[7] = 0;
  F_0104b820(puVar4 + 5,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)puVar4[6],(undefined4 *)puVar4[6]);
  uVar6 = F_00406ad0(puVar4[6]);
  *(*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[1])REFP(0x12b1ee4));
  F_01050b80((*(undefined4 * PTR32 *)(gen_frame + 0x18)));
  return uVar6;
}

/* ref: FUN_0104e160 */
uint F_0104e160(unsigned int gen_a0)
{
  GEN_ENTER(0x104e160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar2 = F_0104dff0(this);
  return uVar2;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf3 */
unsigned int F_0104e190(void)
{
  GEN_ENTER(0x104e190u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf4 */
unsigned int F_0104e1a0(void)
{
  GEN_ENTER(0x104e1a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf5 */
unsigned int F_0104e1b0(void)
{
  GEN_ENTER(0x104e1b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: EntityContainerTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
uint F_0104e1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0104dff0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PrimaryEntityCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
uint F_0104e1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  F_0104dff0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0104e230 */
uint F_0104e230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x104e230u, gen_a0, gen_a1, gen_a2, gen_a3);
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
       (*(undefined * PTR32 (*)[25])REFP(0x12b2004));
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
          *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x12b1ef4));
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
          *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x12b1ec4));
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

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf5 */
unsigned int F_0104e370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf6 */
unsigned int F_0104e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf19 */
unsigned int F_0104e390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf20 */
unsigned int F_0104e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf21 */
unsigned int F_0104e3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf24 */
unsigned int F_0104e3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104e3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0104e3f0 */
float10 F_0104e3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x104e3f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104e450 */
uint F_0104e450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104e450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 8))))
                    (*(int * PTR32 *)((int)this + 0x4c),this,param_1,param_2);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf22 */
byte F_0104e470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int * PTR32 *)(param_1 + 0x2c), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
  }
  return 1;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf23 */
byte F_0104e490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int * PTR32 *)(param_1 + 0x30), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
  }
  return 1;
}

/* ref: FUN_0104e4b0 */
uint F_0104e4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104e4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_010447d0(this);
  return (uint)param_1;
}

/* ref: FUN_0104e4d0 */
uint F_0104e4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e4d0u, gen_a0, gen_a1, 0u, 0u);
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
    this_00 = (undefined *)F_00c310e0(this,iVar2);
    uVar3 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar3 = F_00c31130(this_00,iVar4);
      piVar1 = *(int * PTR32 *)((int)this_00 + 0x28);
      if (piVar1 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar3,param_1);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_0104e560 */
byte F_0104e560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104e560u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_0104c030((undefined *)piVar5[4],0);
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

/* ref: FUN_0104e5f0 */
uint F_0104e5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x104e5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0104c2c0(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  return (uint)this;
}

/* ref: FUN_0104e610 */
uint F_0104e610(unsigned int gen_a0)
{
  GEN_ENTER(0x104e610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0104cf30(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  return (uint)this;
}

/* ref: FUN_0104e630 */
uint F_0104e630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104e630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_01050b90(this,param_2);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x12b1fd4));
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

/* ref: FUN_0104e6b0 */
uint F_0104e6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x104e6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b2004));
  F_0104bbc0(this);
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
  F_0104b820((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  F_00406ad0(*(undefined4 *)((int)this + 0x30));
  F_0104b780((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x20),
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

/* ref: FUN_0104e7b0 */
uint F_0104e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x104e7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0((undefined4 *)((int)this + 100));
  uVar1 = F_0104e6b0(this);
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf13 */
uint F_0104e810(unsigned int gen_a0)
{
  GEN_ENTER(0x104e810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb4);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf14 */
uint F_0104e820(unsigned int gen_a0)
{
  GEN_ENTER(0x104e820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb4);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf15 */
uint F_0104e830(unsigned int gen_a0)
{
  GEN_ENTER(0x104e830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb8);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf16 */
uint F_0104e850(unsigned int gen_a0)
{
  GEN_ENTER(0x104e850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb8);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf17 */
unsigned int F_0104e870(void)
{
  GEN_ENTER(0x104e870u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf18 */
unsigned int F_0104e880(void)
{
  GEN_ENTER(0x104e880u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0104e890 */
uint F_0104e890(unsigned int gen_a0)
{
  GEN_ENTER(0x104e890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0((undefined4 *)((int)this + 100));
  uVar1 = F_0104e6b0(this);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
uint F_0104e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0104e6b0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ChannelManagerTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
uint F_0104e900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104e900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0((undefined4 *)((int)this + 100));
  F_0104e6b0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0104e950 */
byte F_0104e950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x104e950u, gen_a0, gen_a1, gen_a2, gen_a3);
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
        F_01046510((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 3,((undefined1 *)(gen_frame + 0x0)),piVar12);
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
      bVar8 = F_01046fb0(param_1,param_2,puVar13[3],puVar13[4]);
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

/* ref: FUN_0104ebe0 */
byte F_0104ebe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104ebe0u, gen_a0, gen_a1, 0u, 0u);
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
        F_01046510((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc),((undefined1 *)(gen_frame + 0x0)),piVar9);
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
      bVar7 = F_01046fb0(this,param_1,piVar9[3],piVar9[4]);
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

/* ref: FUN_0104ed40 */
uint F_0104ed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104ed40u, gen_a0, gen_a1, 0u, 0u);
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
        F_01046510((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc),((undefined1 *)(gen_frame + 0x0)),piVar9);
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
      bVar6 = F_01046fb0(this,param_1,piVar9[3],piVar9[4]);
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

/* ref: FUN_0104ef30 */
byte F_0104ef30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104ef30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_0104e560(param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_0104ef50 */
uint F_0104ef50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x104ef50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1ef4));
    }
  }
  F_0104e230(this,puVar1,param_2,param_5,param_6);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104c2c0((undefined *)((int)this + 100));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104cf30((undefined *)((int)this + 0x8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  *(undefined4 *)((int)this + 0xb8) = param_4;
  *(undefined4 *)((int)this + 0xb4) = param_3;
  return (uint)this;
}

/* ref: FUN_0104efd0 */
uint F_0104efd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x104efd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_01050b90(this,param_2);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x12b1fd4));
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
         (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
    *(undefined4 *)((int)this + 0x24) = param_3;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_0104f070 */
uint F_0104f070(unsigned int gen_a0)
{
  GEN_ENTER(0x104f070u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104f0d0 */
uint F_0104f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x104f0d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f0e0 */
uint F_0104f0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f100 */
uint F_0104f100(unsigned int gen_a0)
{
  GEN_ENTER(0x104f100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f110 */
uint F_0104f110(unsigned int gen_a0)
{
  GEN_ENTER(0x104f110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f120 */
uint F_0104f120(unsigned int gen_a0)
{
  GEN_ENTER(0x104f120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f130 */
uint F_0104f130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f160 */
uint F_0104f160(unsigned int gen_a0)
{
  GEN_ENTER(0x104f160u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104f1c0 */
uint F_0104f1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x104f1c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f1d0 */
uint F_0104f1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f1f0 */
uint F_0104f1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x104f1f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f200 */
uint F_0104f200(unsigned int gen_a0)
{
  GEN_ENTER(0x104f200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f210 */
uint F_0104f210(unsigned int gen_a0)
{
  GEN_ENTER(0x104f210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f220 */
uint F_0104f220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f240 */
uint F_0104f240(unsigned int gen_a0)
{
  GEN_ENTER(0x104f240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f250 */
uint F_0104f250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f270 */
uint F_0104f270(unsigned int gen_a0)
{
  GEN_ENTER(0x104f270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0104f280 */
uint F_0104f280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f2a0 */
uint F_0104f2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f2d0 */
uint F_0104f2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x104f2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0104f070(this);
  return (uint)this;
}

/* ref: FUN_0104f2e0 */
uint F_0104f2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f300 */
uint F_0104f300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f320 */
uint F_0104f320(unsigned int gen_a0)
{
  GEN_ENTER(0x104f320u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104f370 */
uint F_0104f370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f3a0 */
uint F_0104f3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x104f3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0104f160(this);
  return (uint)this;
}

/* ref: FUN_0104f3b0 */
uint F_0104f3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f3d0 */
uint F_0104f3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f3f0 */
uint F_0104f3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x104f3f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0104f440 */
uint F_0104f440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104f440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0104f460 */
uint F_0104f460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104f460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0104f480 */
uint F_0104f480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x104f480u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_0104f67d: ;
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
        goto LAB_0104f67d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_0104f6b0 */
uint F_0104f6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x104f6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0104f070(this);
  return (uint)this;
}

/* ref: FUN_0104f6c0 */
uint F_0104f6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0104f6e0 */
uint F_0104f6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x104f6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_0104f8dd: ;
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
        goto LAB_0104f8dd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_0104f910 */
uint F_0104f910(unsigned int gen_a0)
{
  GEN_ENTER(0x104f910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0104f160(this);
  return (uint)this;
}

/* ref: FUN_0104f920 */
uint F_0104f920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0104f940 */
unsigned int F_0104f940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0104f960 */
unsigned int F_0104f960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104f960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_0104f980 */
uint F_0104f980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x104f980u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = (undefined4 *)F_0104f480((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_0104f070(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_0104f480((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0104fa60 */
unsigned int F_0104fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104fa60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0104fa80 */
uint F_0104fa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x104fa80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = (undefined4 *)F_0104f6e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_0104f160(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_0104f6e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0104fb60 */
unsigned int F_0104fb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104fb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0104fb80 */
uint F_0104fb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104fb80u, gen_a0, gen_a1, gen_a2, 0u);
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
      piVar2 = (int *)F_00c30fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined1 * PTR32 *)&gen_args[2]),&(*(uint *)&gen_args[1]));
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
    if ((*(uint *)&gen_args[1]) == 0x80000000) goto LAB_0104fcc4;
    if ((*(uint *)&gen_args[1]) < 0x40000001) {
      if ((*(uint *)&gen_args[1]) == 0x40000000) {
        uVar3 = F_01050cf0((*(undefined * PTR32 *)&gen_args[0]));
        return uVar3 | 0x40000000;
      }
      if ((*(uint *)&gen_args[1]) == 0) goto LAB_0104fcc4;
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
      goto LAB_0104fca1;
    }
    bVar4 = (*(uint *)&gen_args[1]) == 0x60000000;
  }
  else {
    if (((*(uint *)&gen_args[1]) == 0xa0000000) || ((*(uint *)&gen_args[1]) == 0xc0000000)) goto LAB_0104fcc4;
    bVar4 = (*(uint *)&gen_args[1]) == 0xe0000000;
  }
  if (!bVar4) {
LAB_0104fca1: ;
    piVar2 = (int *)F_00c30fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined1 * PTR32 *)&gen_args[2]),&(*(uint *)&gen_args[1]));
    if (*piVar2 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
      return uVar3;
    }
    *puVar1 = 1;
    return uVar3;
  }
LAB_0104fcc4: ;
  uVar3 = F_01050cf0((*(undefined * PTR32 *)&gen_args[0]));
  return uVar3 | 0xe0000000;
}

/* ref: FUN_0104fce0 */
uint F_0104fce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104fce0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0104fd40 */
uint F_0104fd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104fd40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0104fda0 */
uint F_0104fda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104fda0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_0104f980(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_0104fe20 */
uint F_0104fe20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x104fe20u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_0104fa80(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_0104fea0 */
uint F_0104fea0(unsigned int gen_a0)
{
  GEN_ENTER(0x104fea0u, gen_a0, 0u, 0u, 0u);
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
    F_0104fa80((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0xc)),puVar4,0);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return uVar3;
  }
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: FUN_0104ff50 */
uint F_0104ff50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x104ff50u, gen_a0, gen_a1, 0u, 0u);
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
  F_00c31050((undefined *)((int)this + 0x14),&(*(int *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x18)));
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
    F_0104fa80((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x14)),puVar3,0);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar4;
}

/* ref: FUN_01050050 */
uint F_01050050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_0104ff50(param_1,this);
  uVar1 = F_0104ff50(this,param_1);
  return uVar1;
}

/* ref: FUN_01050070 */
uint F_01050070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050070u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_0104fb80((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),&(*(char *)(gen_frame + 0x1b)));
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  if ((*(char *)(gen_frame + 0x1b)) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return (uint)piVar2;
  }
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))),(*(undefined * PTR32 *)&gen_args[0]),uVar3)));
  F_0104fea0(this_01);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar1;
  if ((piVar2 != (int *)0x40000000) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0)) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)*piVar1;
    if ((*(int * PTR32 *)&gen_args[1]) != piVar1) {
      do {
        this_00 = ((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[4]));
        F_0104ff50(this_00,this_01);
        F_0104ff50(this_01,this_00);
        F_01048330(&(*(int * PTR32 *)&gen_args[1]));
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
    F_0104f980(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),((undefined1 *)(gen_frame + 0x4)),puVar4,0);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return (*(uint *)(gen_frame + 0x14));
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
}

/* ref: FUN_01050180 */
uint F_01050180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050180u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_01050070((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  (*(undefined4 *)&gen_args[1]) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))((*(undefined * PTR32 *)&gen_args[0]));
  piVar2 = (int *)F_00c30fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
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

/* ref: FUN_010501f0 */
uint F_010501f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10501f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_01050180(this,param_1);
  return uVar1;
}

/* ref: FUN_01050200 */
uint F_01050200(unsigned int gen_a0)
{
  GEN_ENTER(0x1050200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint local_8;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))();
  if (*(int *)((int)this + 0x24) != 0) {
    local_8 = (uint)this & 0xffffff00;
    F_0104e560(**(undefined4 * PTR32 *)((int)this + 0x20),*(undefined4 * PTR32 *)((int)this + 0x20),local_8);
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf7 */
unsigned int F_01050240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050240u, gen_a0, gen_a1, 0u, 0u);
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
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined8 *)(gen_frame + 0x14)) = 0;
  if (iVar1 == 0) {
    bVar4 = F_0104ebe0(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    if (bVar4 == 0) goto LAB_010502dc;
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
  F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
  (*(int *)(gen_frame + 0x10)) = 0;
LAB_010502dc: ;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  F_01050b70();
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf8 */
unsigned int F_01050300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050300u, gen_a0, gen_a1, 0u, 0u);
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
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
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
      F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8),(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
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
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      (*(int *)(gen_frame + 0xc)) = 0;
      bVar5 = F_0104e950(uVar3,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),uVar4,&(*(uint *)(gen_frame + 0x18)),REFG(float, 0x10ac050));
      if (bVar5 != 0) {
        F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8),(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      F_01050b70();
    } while (((*(uint *)(gen_frame + 0x18)) != 0) && ((*(uint *)(gen_frame + 0x18)) != 0xe0000000));
  }
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf9 */
uint F_01050430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050430u, gen_a0, gen_a1, 0u, 0u);
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
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      bVar3 = F_0104ebe0(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      while (bVar3 != 0) {
        F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
        (*(int *)(gen_frame + 0x10)) = 0;
        uVar4 = uVar4 + 1;
        bVar3 = F_0104ebe0(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
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
      F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf10 */
uint F_01050510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050510u, gen_a0, gen_a1, 0u, 0u);
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
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          uVar3 = F_0104ed40(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          if (uVar3 != 1) break;
          F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
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
      F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf11 */
uint F_010505f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10505f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          if (param_1 <= uVar4) goto LAB_010506ad;
          uVar3 = F_0104ed40(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          if (uVar3 != 1) break;
          F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
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
      F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
LAB_010506ad: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf12 */
uint F_010506d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x10506d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
      ;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(undefined8 *)(gen_frame + 0x1c)) = 0;
      do {
        while( true ) {
          uVar3 = F_0104ed40(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
          if (uVar3 != 1) break;
          F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8),(*(int *)(gen_frame + 0x18)));
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 + 1;
          (*(int *)(gen_frame + 0x18)) = 0;
          if (param_3 <= uVar5) {
            uVar6 = F_00427e30();
            if ((*(ulonglong *)(gen_frame + 0x24)) < uVar6) goto LAB_010507d4;
            uVar5 = 0;
          }
        }
      } while (uVar3 == 0);
    }
    else {
      F_01050b60(((undefined1 *)(gen_frame + 0x14)));
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x18)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c))
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
      F_0104e4d0(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8),(*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
    }
LAB_010507d4: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
    F_01050b70();
  }
  return uVar4;
}

/* ref: FUN_010507f0 */
byte F_010507f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10507f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar2 = F_0104ebe0(*(undefined * PTR32 *)((int)this + 8),param_1);
    return bVar2;
  }
  return 0;
}

/* ref: FUN_01050860 */
uint F_01050860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1050860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0104ef50(this,param_1,param_2,param_3,param_4,param_5,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b213c));
  *(undefined4 *)((int)this + 0xbc) = 0;
  return (uint)this;
}

/* ref: FUN_01050910 */
uint F_01050910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1050910u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1f14))
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
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1f24));
      goto LAB_01050976;
    }
  }
  puVar1 = (undefined4 *)0x0;
LAB_01050976: ;
  F_0104efd0(this,param_1,param_2,puVar1);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b21a4));
  return (uint)this;
}

/* ref: PrimaryEntityTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf1 */
unsigned int F_010509c0(void)
{
  GEN_ENTER(0x10509c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: PrimaryEntityTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf2 */
unsigned int F_010509d0(void)
{
  GEN_ENTER(0x10509d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_010509e0 */
uint F_010509e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10509e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar2 = F_0104dff0(this);
  return uVar2;
}

/* ref: PrimaryEntityTmpl_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
uint F_01050a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x12b1fe4));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  F_0104dff0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::ZoneClient::RaptureChannelManager::vf0 */
uint F_01050a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x12b20d4));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x12b206c));
  F_0104bbc0(this);
  *(undefined * PTR32 * PTR32 *)(this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1fb4));
  F_0104dd40(this + 0x8c);
  *(undefined * PTR32 * PTR32 *)(this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x12b1f94));
  F_0104dbd0(this + 100);
  F_0104e6b0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf1 */
uint F_01050ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1050ac0u, gen_a0, gen_a1, gen_a2, 0u);
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
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1f14));
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
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x12b1f24));
  }
  F_0104efd0(this_00,param_1,param_2,puVar1);
  *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x12b21a4));
  return (uint)this_00;
}

/* ref: FUN_01050b60 */
uint F_01050b60(unsigned int gen_a0)
{
  GEN_ENTER(0x1050b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_01050b70 */
unsigned int F_01050b70(void)
{
  GEN_ENTER(0x1050b70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_01050b80 */
unsigned int F_01050b80(unsigned int gen_a0)
{
  GEN_ENTER(0x1050b80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21c0));
  return 0;
}

/* ref: FUN_01050b90 */
uint F_01050b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21c0));
  in_ecx[3] = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_01050bb0 */
uint F_01050bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b21c0));
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_01050c00 */
uint F_01050c00(unsigned int gen_a0)
{
  GEN_ENTER(0x1050c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_01050c10 */
uint F_01050c10(unsigned int gen_a0)
{
  GEN_ENTER(0x1050c10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Component::Network::IpcChannel::EntityBase::vf0 */
uint F_01050c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b21c0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_01050c50 */
uint F_01050c50(unsigned int gen_a0)
{
  GEN_ENTER(0x1050c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_01050c80 */
unsigned int F_01050c80(unsigned int gen_a0)
{
  GEN_ENTER(0x1050c80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21c8));
  return 0;
}

/* ref: FUN_01050c90 */
uint F_01050c90(unsigned int gen_a0)
{
  GEN_ENTER(0x1050c90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21c8));
  return (uint)in_ecx;
}

/* ref: Component::Network::IpcChannel::NetBufferBase::vf0 */
uint F_01050ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b21c8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_01050cd0 */
unsigned int F_01050cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x1050cd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21d0));
  return 0;
}

/* ref: FUN_01050ce0 */
uint F_01050ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x1050ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b21d0));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_01050cf0 */
uint F_01050cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x1050cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 4) + 1;
  *(uint *)(in_ecx + 4) = uVar1;
  return uVar1;
}

/* ref: Component::Network::IpcChannel::ChannelManagerBase::vf0 */
uint F_01050d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b21d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_01050d30 */
uint F_01050d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1050d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_01050d50 */
uint F_01050d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050d50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_01050d70 */
uint F_01050d70(unsigned int gen_a0)
{
  GEN_ENTER(0x1050d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  __time64_t _Var6;
  int local_10;
  
  uVar5 = F_00427d90();
  uVar4 = (int)uVar5 - *(int *)((int)this + 0x20);
  _Var6 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x18) = (int)_Var6;
  uVar5 = F_00427d90();
  *(ulonglong *)((int)this + 0x20) = uVar5;
  uVar5 = F_00427e30();
  *(ulonglong *)((int)this + 0x28) = uVar5;
  uVar2 = *(uint *)this;
  if ((int)uVar2 < 0) {
    if (uVar4 < 0xc) {
      if (uVar4 < 2) goto LAB_01050de3;
      uVar3 = uVar4 - 1 >> 1;
      uVar4 = uVar4 - uVar3;
      uVar2 = uVar2 + uVar3;
    }
    else {
      uVar4 = uVar4 - 10;
      uVar2 = uVar2 + 10;
    }
  }
  else {
    if ((int)uVar2 < 1) goto LAB_01050de3;
    if ((int)uVar2 < 10) {
      uVar4 = uVar4 + uVar2;
      *(undefined4 *)this = 0;
      goto LAB_01050de3;
    }
    uVar4 = uVar4 + 10;
    uVar2 = uVar2 - 10;
  }
  *(uint *)this = uVar2;
LAB_01050de3: ;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + uVar4;
  uVar4 = *(uint *)((int)this + 8);
  if (1000 < uVar4) {
    dVar1 = (double)(int)uVar4;
    if ((int)uVar4 < 0) {
      dVar1 = dVar1 + (double)*(float *)&REFG(undefined, 0x1088110);
    }
    local_10 = (int)(longlong)TRUNC(dVar1 * REFG(double, 0x1091858));
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + local_10;
    uVar2 = uVar4 / 1000;
    *(uint *)((int)this + 8) = uVar4 % 1000;
  }
  return uVar2;
}

/* ref: FUN_01050e40 */
uint F_01050e40(unsigned int gen_a0)
{
  GEN_ENTER(0x1050e40u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  return in_ecx;
}

/* ref: FUN_01050e50 */
unsigned int F_01050e50(void)
{
  GEN_ENTER(0x1050e50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_01050e60 */
uint F_01050e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1050e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_01050e70 */
uint F_01050e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1050e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004cf330(*(undefined * PTR32 *)((int)this + 4),param_1);
  return (-(uint)(uVar1 != 0) & 0x7fbef6ff) + 0x80410901;
}

/* ref: FUN_01050ea0 */
uint F_01050ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1050ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  while( true ) {
    uVar1 = F_004cf330(*(undefined * PTR32 *)((int)this + 4),param_1);
    if (uVar1 != 0) break;
    F_004cee80();
  }
  return 0;
}

/* ref: FUN_01050ed0 */
uint F_01050ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x1050ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_01050ee0 */
uint F_01050ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1050ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  uVar1 = F_004cf180(*(undefined * PTR32 *)((int)this + 4),param_1);
  return (-(uint)((uVar1 & 0xff) != 0) & 0x7fbef6ff) + 0x80410901;
}

/* ref: FUN_01050f10 */
uint F_01050f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1050f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  while( true ) {
    uVar1 = F_004cf180(*(undefined * PTR32 *)((int)this + 4),param_1);
    if ((char)uVar1 != '\0') break;
    F_004cee80();
  }
  return 0;
}

/* ref: FUN_01050f40 */
uint F_01050f40(unsigned int gen_a0)
{
  GEN_ENTER(0x1050f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_01050f50 */
uint F_01050f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1050f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_004cd3d0(((byte *)(gen_frame + 0x4)),"1.2.3",0x38);
  if (uVar1 == 0) {
    uVar1 = F_004cd510(((byte *)(gen_frame + 0x4)),4);
    if (uVar1 != 1) {
      F_004ce970(((byte *)(gen_frame + 0x4)));
      if ((uVar1 != 2) && ((uVar1 != 0xfffffffb || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) != 0)))) {
        return uVar1;
      }
      return 0xfffffffd;
    }
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
    uVar1 = F_004ce970(((byte *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: __Wcrtomb */
int F_01050fec(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1050fecu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  uint CodePage;
  undefined * plVar2;
  int iVar3;
  int * piVar4;
  LPCSTR lpDefaultChar;
  undefined * PTR32 * lpUsedDefaultChar;
  
  if ((*(undefined * PTR32 *)&gen_args[3]) == (undefined *)0x0) {
    uVar1 = F_00c54bcd();
    uVar1 = *(uint *)(uVar1 + 8);
    CodePage = F_00c54b81();
  }
  else {
    uVar1 = (*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[3]))));
    CodePage = (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 4)))));
  }
  if (uVar1 == 0) {
    if ((ushort)(*(wchar_t *)&gen_args[1]) < 0x100) {
      *(*(char * PTR32 *)&gen_args[0]) = (char)(*(wchar_t *)&gen_args[1]);
      return 1;
    }
  }
  else {
    (*(undefined * PTR32 *)&gen_args[3]) = (undefined *)0x0;
    plVar2 = F_010511e9(CodePage);
    lpUsedDefaultChar = &(*(undefined * PTR32 *)&gen_args[3]);
    lpDefaultChar = (LPCSTR)0x0;
    iVar3 = F_00c54b65(plVar2);
    iVar3 = gen_imp_WideCharToMultiByte(CodePage,0,&(*(wchar_t *)&gen_args[1]),1,(*(char * PTR32 *)&gen_args[0]),iVar3,lpDefaultChar,
                                (LPBOOL)lpUsedDefaultChar);
    if ((iVar3 != 0) && ((*(undefined * PTR32 *)&gen_args[3]) == (undefined *)0x0)) {
      return iVar3;
    }
  }
  piVar4 = F_00c51f85();
  *piVar4 = 0x2a;
  return -1;
}

/* ref: __Getcoll */
unsigned long long F_01051073(void)
{
  GEN_ENTER(0x1051073u, 0u, 0u, 0u, 0u);
  uint uVar1;
  wchar_t * pwVar2;
  undefined8 _Var3;
  
  uVar1 = F_00c54bcd();
  uVar1 = *(uint *)(uVar1 + 8);
  pwVar2 = (wchar_t *)F_00c54b81();
  (*(wchar_t * PTR32 *)(((char *)&(_Var3) + 4))) = pwVar2;
  (*(uint *)((char *)&(_Var3))) = uVar1;
  return _Var3;
}

/* ref: FUN_01051089 */
uint F_01051089(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051089u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_01050fec(param_1,(wchar_t)param_2,param_3,param_4);
  return uVar1;
}

/* ref: __Getwctype */
short F_01051094(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1051094u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  BVar1 = gen_imp_GetStringTypeW(1,&(*(wchar_t *)&gen_args[0]),1,((ushort *)(gen_frame + 0x8)));
  return -(ushort)(BVar1 != 0) & ((ushort *)(gen_frame + 0x8))[0];
}

/* ref: __Getwctypes */
wchar_t * F_010510b8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10510b8u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  gen_imp_GetStringTypeW(1,param_1,(int)param_2 - (int)((int)(uintptr_t)param_1) >> 1,(LPWORD)param_3);
  return param_2;
}

/* ref: __Towlower */
wchar_t F_010510d9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10510d9u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  wchar_t wVar2;
  
  (*(uint *)(gen_frame + 0x8)) = (uint)(ushort)(*(wchar_t *)&gen_args[0]);
  wVar2 = (*(wchar_t *)&gen_args[0]);
  if ((*(wchar_t *)&gen_args[0]) != L'\xffff') {
    if (((LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1])))) == (LPCWSTR)0x0) && ((ushort)(*(wchar_t *)&gen_args[0]) < 0x100)) {
      if ((ushort)((*(wchar_t *)&gen_args[0]) + L'﾿') < 0x1a) {
        wVar2 = (*(wchar_t *)&gen_args[0]) + L' ';
      }
    }
    else {
      iVar1 = F_00c7e497((LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1])))),0x100,&(*(wchar_t *)&gen_args[0]),1,(LPWSTR)&(*(uint *)(gen_frame + 0x8)),1);
      wVar2 = (*(wchar_t *)&gen_args[0]);
      if (iVar1 != 0) {
        wVar2 = (wchar_t)(*(uint *)(gen_frame + 0x8));
      }
    }
  }
  return wVar2;
}

/* ref: __Towupper */
wchar_t F_0105113f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105113fu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  wchar_t wVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x8)) = (uint)(ushort)(*(wchar_t *)&gen_args[0]);
  wVar1 = (*(wchar_t *)&gen_args[0]);
  if ((*(wchar_t *)&gen_args[0]) != L'\xffff') {
    if (((LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1])))) == (LPCWSTR)0x0) && ((ushort)(*(wchar_t *)&gen_args[0]) < 0x100)) {
      if ((ushort)((*(wchar_t *)&gen_args[0]) + L'ﾟ') < 0x1a) {
        return (*(wchar_t *)&gen_args[0]) + L'￠';
      }
    }
    else {
      iVar2 = F_00c7e497((LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1])))),0x200,&(*(wchar_t *)&gen_args[0]),1,(LPWSTR)&(*(uint *)(gen_frame + 0x8)),1);
      wVar1 = (*(wchar_t *)&gen_args[0]);
      if (iVar2 != 0) {
        wVar1 = (wchar_t)(*(uint *)(gen_frame + 0x8));
      }
    }
  }
  return wVar1;
}

/* ref: __CreateLocForCP */
uint F_010511a7(unsigned int gen_a0)
{
  GEN_ENTER(0x10511a7u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * plVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(char *)(gen_frame + 0x8)) = '.';
  F_00c70690(param_1,0,((undefined1 *)(gen_frame + 0x9)),0x1f,10);
  plVar1 = F_00c4a66c(0,&(*(char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)plVar1;
}

/* ref: __GetLocaleForCP */
undefined * F_010511e9(unsigned int gen_a0)
{
  GEN_ENTER(0x10511e9u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * Comperand;
  uint uVar1;
  undefined4 * puVar2;
  int * _Memory;
  
  _Memory = (int *)0x0;
  do {
    Comperand = *(undefined4 * PTR32 *)(&REFG(undefined, 0x15e3ea8) + (param_1 % 0x3e) * 4);
    for (puVar2 = Comperand; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[1] == param_1) {
        if (_Memory != (int *)0x0) {
          F_00c49a41((undefined *)_Memory[2]);
          F_00c4c68f(_Memory);
        }
        return (undefined *)puVar2[2];
      }
    }
    if (_Memory == (int *)0x0) {
      _Memory = F_00c54c2e(0xc);
      if (_Memory == (int *)0x0) {
        return (undefined *)0x0;
      }
      uVar1 = F_010511a7(param_1);
      _Memory[2] = uVar1;
      if (uVar1 == 0) {
        F_00c4c68f(_Memory);
        return (undefined *)0x0;
      }
      _Memory[1] = param_1;
    }
    *_Memory = (int)Comperand;
    puVar2 = ((undefined4 *)GEN_TOP(gen_imp_InterlockedCompareExchange((LONG *)(&REFG(undefined, 0x15e3ea8) + (param_1 % 0x3e) * 4),(LONG)_Memory,(LONG)Comperand
                       )));
    if (puVar2 == Comperand) {
      return (undefined *)_Memory[2];
    }
  } while( true );
}

/* ref: FUN_01051284 */
uint F_01051284(void)
{
  GEN_ENTER(0x1051284u, 0u, 0u, 0u, 0u);
  undefined4 * _Memory;
  undefined4 * puVar1;
  undefined4 * extraout_EAX = 0;
  LONG * Target;
  
  Target = (LONG *)&REFG(undefined, 0x15e3ea8);
  do {
    puVar1 = ((undefined4 *)GEN_TOP(gen_imp_InterlockedExchange(Target,0)));
    _Memory = puVar1;
    while (_Memory != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*_Memory;
      F_00c49a41((undefined *)_Memory[2]);
      F_00c4c68f(_Memory);
      _Memory = puVar1;
      puVar1 = extraout_EAX;
    }
    Target = Target + 1;
  } while ((int)Target < 0x15e3fa0);
  return (uint)puVar1;
}

/* ref: FUN_010512c4 */
uint F_010512c4(void)
{
  GEN_ENTER(0x10512c4u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = F_00c47de6(((code *)REFP(0x1051284)));
  return -(uint)(iVar1 != 0) & 0x18;
}

/* ref: __Mbrtowc */
int F_010512d7(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x10512d7u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  ushort uVar1;
  uint uVar2;
  uint CodePage;
  undefined * plVar3;
  int iVar4;
  int * piVar5;
  ushort * puVar6;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return 0;
  }
  if (*param_2 == '\0') {
    if (param_1 == (wchar_t *)0x0) {
      return 0;
    }
    *param_1 = L'\0';
    return 0;
  }
  if (param_5 == (undefined *)0x0) {
    uVar2 = F_00c54bcd();
    uVar2 = *(uint *)(uVar2 + 8);
    CodePage = F_00c54b81();
  }
  else {
    uVar2 = (*(uint *)((char *)(param_5)));
    CodePage = (*(uint *)(((char *)(param_5) + 4)));
  }
  if (uVar2 == 0) {
    if (param_1 != (wchar_t *)0x0) {
      *param_1 = (ushort)(byte)*param_2;
    }
    return 1;
  }
  plVar3 = F_010511e9(CodePage);
  if (*param_4 == 0) {
    if (plVar3 == (undefined *)0x0) {
      puVar6 = F_00c5476c();
      uVar1 = puVar6[(byte)*param_2] & 0x8000;
    }
    else {
      uVar1 = (*((uchar *)GEN_TOP(((((char *)(*(undefined * PTR32 *)(((char *)(plVar3) + 4))) + 24) + ((byte)*param_2 + 5) * 1))))) & 4;
    }
    if (uVar1 == 0) {
      iVar4 = gen_imp_MultiByteToWideChar(CodePage,9,param_2,1,param_1,(uint)(param_1 != (wchar_t *)0x0));
      if (iVar4 != 0) {
        return 1;
      }
      goto LAB_0105138c;
    }
    uVar2 = F_00c54b65(plVar3);
    if (param_3 < uVar2) {
      *(char *)param_4 = *param_2;
      return -2;
    }
    iVar4 = F_00c54b65(plVar3);
    if (1 < iVar4) {
      uVar2 = (uint)(param_1 != (wchar_t *)0x0);
      iVar4 = F_00c54b65(plVar3);
      iVar4 = gen_imp_MultiByteToWideChar(CodePage,9,param_2,iVar4,param_1,uVar2);
      if (iVar4 != 0) goto LAB_0105137d;
    }
    if (param_2[1] != '\0') goto LAB_0105137d;
  }
  else {
    *(char *)((int)param_4 + 1) = *param_2;
    iVar4 = F_00c54b65(plVar3);
    if ((1 < iVar4) &&
       (iVar4 = gen_imp_MultiByteToWideChar(CodePage,9,(LPCSTR)param_4,2,param_1,
                                    (uint)(param_1 != (wchar_t *)0x0)), iVar4 != 0)) {
      *param_4 = 0;
LAB_0105137d: ;
      iVar4 = F_00c54b65(plVar3);
      return iVar4;
    }
  }
  *param_4 = 0;
LAB_0105138c: ;
  piVar5 = F_00c51f85();
  *piVar5 = 0x2a;
  return -1;
}

/* ref: __Stoulx */
uint F_0105144a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105144au, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  int * piVar4;
  char cVar5;
  byte * pbVar6;
  byte * pbVar7;
  byte * pbVar8;
  uint uVar9;
  uint local_10;
  uint local_c;
  byte local_5;
  
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = 0;
  }
  bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
  pbVar6 = (*(byte * PTR32 *)&gen_args[0]);
  while (iVar2 = F_00c4873c((uint)bVar1), iVar2 != 0) {
    pbVar6 = pbVar6 + 1;
    bVar1 = *pbVar6;
  }
  local_5 = *pbVar6;
  if ((local_5 == 0x2d) || (local_5 == 0x2b)) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    local_5 = 0x2b;
  }
  if ((((int)(*(uint *)&gen_args[2]) < 0) || ((*(uint *)&gen_args[2]) == 1)) || (0x24 < (int)(*(uint *)&gen_args[2]))) {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == (undefined4 *)0x0) {
      return 0;
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(byte * PTR32 *)&gen_args[0]);
    return 0;
  }
  pbVar7 = pbVar6;
  if ((int)(*(uint *)&gen_args[2]) < 1) {
    if (*pbVar6 != 0x30) {
      (*(uint *)&gen_args[2]) = 10;
      goto LAB_010514f7;
    }
    if ((pbVar6[1] != 0x78) && (pbVar6[1] != 0x58)) {
      (*(uint *)&gen_args[2]) = 8;
      goto LAB_010514f7;
    }
    (*(uint *)&gen_args[2]) = 0x10;
  }
  else if ((((*(uint *)&gen_args[2]) != 0x10) || (*pbVar6 != 0x30)) || ((pbVar6[1] != 0x78 && (pbVar6[1] != 0x58))))
  goto LAB_010514f7;
  pbVar6 = pbVar6 + 2;
  pbVar7 = pbVar6;
LAB_010514f7: ;
  for (; *pbVar6 == 0x30; pbVar6 = pbVar6 + 1) {
  }
  local_c = 0;
  local_10 = 0;
  uVar9 = (*(uint *)&gen_args[2]);
  iVar2 = F_00c4ef4f((int)(char)*pbVar6);
  pvVar3 = F_00c48f80("0123456789abcdefghijklmnopqrstuvwxyz",iVar2,uVar9);
  pbVar8 = pbVar6;
  if (pvVar3 == (undefined *)0x0) {
    cVar5 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[2]) + 3));
  }
  else {
    do {
      cVar5 = (char)pvVar3 + ',';
      local_10 = local_c;
      local_c = local_c * (*(uint *)&gen_args[2]) + (int)cVar5;
      pbVar8 = pbVar8 + 1;
      uVar9 = (*(uint *)&gen_args[2]);
      iVar2 = F_00c4ef4f((int)(char)*pbVar8);
      pvVar3 = F_00c48f80("0123456789abcdefghijklmnopqrstuvwxyz",iVar2,uVar9);
    } while (pvVar3 != (undefined *)0x0);
  }
  if (pbVar7 == pbVar8) {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(byte * PTR32 *)&gen_args[0]);
    }
    return 0;
  }
  iVar2 = (int)(pbVar8 - (int)(char)(&REFG(undefined, 0x12b21fc))[(int)((*(uint *)&gen_args[2]))]) - (int)pbVar6;
  if ((-1 < iVar2) &&
     (((pbVar8 - (int)(char)(&REFG(undefined, 0x12b21fc))[(int)((*(uint *)&gen_args[2]))] != pbVar6 && -1 < iVar2 ||
       (local_c < local_c - (int)cVar5)) || ((local_c - (int)cVar5) / (*(uint *)&gen_args[2]) != local_10)))) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x22;
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
      *(*(undefined4 * PTR32 *)&gen_args[3]) = 1;
    }
    local_c = 0xffffffff;
    local_5 = 0x2b;
  }
  if (local_5 == 0x2d) {
    local_c = -local_c;
  }
  if ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = pbVar8;
    return local_c;
  }
  return local_c;
}

/* ref: __Stoul */
uint F_010515e6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10515e6u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105144a(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: __Stolx */
uint F_01051600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051600u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  byte * pbVar6;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    piVar5 = (int *)&(*(byte * PTR32 *)&gen_args[0]);
  }
  bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
  pbVar6 = (*(byte * PTR32 *)&gen_args[0]);
  while (iVar3 = F_00c4873c((uint)bVar1), iVar3 != 0) {
    pbVar6 = pbVar6 + 1;
    bVar1 = *pbVar6;
  }
  bVar1 = *pbVar6;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(bVar1,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
    pbVar6 = pbVar6 + 1;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(0x2b,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
  }
  uVar4 = F_0105144a(pbVar6,piVar5,(*(undefined4 *)&gen_args[2]),(*(undefined4 * PTR32 *)&gen_args[3]));
  if (pbVar6 == (byte *)*piVar5) {
    *piVar5 = (int)pbVar2;
  }
  if (((pbVar2 != (byte *)*piVar5) || (uVar4 == 0)) &&
     (((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '+' || (uVar4 < 0x80000000)))) {
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '-') {
      return uVar4;
    }
    if (uVar4 < 0x80000001) {
      return -uVar4;
    }
  }
  piVar5 = F_00c51f85();
  *piVar5 = 0x22;
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = 1;
  }
  return ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) == '-') + 0x7fffffff;
}

/* ref: __Stollx */
ulonglong F_010516a5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10516a5u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  int * piVar4;
  byte * pbVar5;
  ulonglong uVar6;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    piVar4 = (int *)&(*(byte * PTR32 *)&gen_args[0]);
  }
  bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
  pbVar5 = (*(byte * PTR32 *)&gen_args[0]);
  while (iVar3 = F_00c4873c((uint)bVar1), iVar3 != 0) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  bVar1 = *pbVar5;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(bVar1,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
    pbVar5 = pbVar5 + 1;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(0x2b,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
  }
  uVar6 = F_01051782(pbVar5,piVar4,(*(undefined4 *)&gen_args[2]),(*(undefined4 * PTR32 *)&gen_args[3]));
  if (pbVar5 == (byte *)*piVar4) {
    *piVar4 = (int)pbVar2;
  }
  if (((pbVar2 != (byte *)*piVar4) || (uVar6 == 0)) &&
     (((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '+' || (uVar6 < 0x8000000000000000)))) {
    if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '-') {
      return uVar6;
    }
    if (uVar6 < 0x8000000000000001) {
      return CONCAT44(-((int)(uVar6 >> 0x20) + (uint)((int)uVar6 != 0)),-(int)uVar6);
    }
  }
  piVar4 = F_00c51f85();
  *piVar4 = 0x22;
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = 1;
  }
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) == '-') {
    uVar6 = 0x8000000000000000;
  }
  else {
    uVar6 = 0x7fffffffffffffff;
  }
  return uVar6;
}

/* ref: __Stoll */
uint F_01051768(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051768u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  uVar1 = F_010516a5(param_1,param_2,param_3,0);
  return (uint)uVar1;
}

/* ref: __Stoullx */
ulonglong F_01051782(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051782u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined * pvVar6;
  int * piVar7;
  char cVar8;
  byte * pbVar9;
  byte * pbVar10;
  byte * pbVar11;
  gen_size32 sVar12;
  int local_1c;
  int local_18;
  char local_6;
  byte local_5;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  bVar1 = *param_1;
  pbVar9 = param_1;
  while (iVar5 = F_00c4873c((uint)bVar1), iVar5 != 0) {
    pbVar9 = pbVar9 + 1;
    bVar1 = *pbVar9;
  }
  local_5 = *pbVar9;
  if ((local_5 == 0x2d) || (local_5 == 0x2b)) {
    pbVar9 = pbVar9 + 1;
  }
  else {
    local_5 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) goto LAB_01051979;
  pbVar10 = pbVar9;
  if ((int)param_3 < 1) {
    if (*pbVar9 == 0x30) {
      if ((pbVar9[1] == 0x78) || (pbVar9[1] == 0x58)) {
        param_3 = 0x10;
        goto LAB_01051826;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pbVar9 == 0x30)) && ((pbVar9[1] == 0x78 || (pbVar9[1] == 0x58))))
  {
LAB_01051826: ;
    pbVar9 = pbVar9 + 2;
    pbVar10 = pbVar9;
  }
  for (; *pbVar9 == 0x30; pbVar9 = pbVar9 + 1) {
  }
  local_6 = '\0';
  sVar12 = param_3;
  iVar5 = F_00c4ef4f((int)(char)*pbVar9);
  pvVar6 = F_00c48f80("0123456789abcdefghijklmnopqrstuvwxyz",iVar5,sVar12);
  pbVar11 = pbVar9;
  cVar8 = local_6;
  uVar4 = 0;
  uVar3 = 0;
  while (uVar2 = uVar4, pvVar6 != (undefined *)0x0) {
    cVar8 = (char)pvVar6 + -0x24;
    pbVar11 = pbVar11 + 1;
    sVar12 = param_3;
    iVar5 = F_00c4ef4f((int)(char)*pbVar11);
    pvVar6 = F_00c48f80("0123456789abcdefghijklmnopqrstuvwxyz",iVar5,sVar12);
    uVar4 = (longlong)(int)param_3 * uVar2 + (longlong)(int)cVar8;
    uVar3 = uVar2;
  }
  if (pbVar10 != pbVar11) {
    iVar5 = (int)(pbVar11 - (int)(char)(&REFG(undefined, 0x12b224c))[(int)(param_3)]) - (int)pbVar9;
    if ((-1 < iVar5) &&
       (((pbVar11 - (int)(char)(&REFG(undefined, 0x12b224c))[(int)(param_3)] != pbVar9 && -1 < iVar5 ||
         (uVar2 < uVar2 - (longlong)(int)cVar8)) ||
        ((uVar2 - (longlong)(int)cVar8) / (ulonglong)(longlong)(int)param_3 != uVar3)))) {
      piVar7 = F_00c51f85();
      *piVar7 = 0x22;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      uVar2 = 0xffffffffffffffff;
      local_5 = 0x2b;
    }
    local_18 = (int)(uVar2 >> 0x20);
    local_1c = (int)uVar2;
    if (local_5 == 0x2d) {
      uVar2 = CONCAT44(-(local_18 + (uint)(local_1c != 0)),-local_1c);
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar2;
    }
    *param_2 = pbVar11;
    return uVar2;
  }
LAB_01051979: ;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return 0;
}

/* ref: __Stoull */
uint F_01051986(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051986u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  uVar1 = F_01051782(param_1,param_2,param_3,0);
  return (uint)uVar1;
}

/* ref: __Stofx */
float F_010519a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10519a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  double dVar1;
  
  dVar1 = F_010519e1(param_1,param_2,param_3,param_4);
  return (float)dVar1;
}

/* ref: __Stof */
float F_010519c2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10519c2u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * PTR32 * param_2 = (char * PTR32 *)(uintptr_t)gen_a1;
  long param_3 = (long)gen_a2;
  double dVar1;
  
  dVar1 = F_01051a4a(param_1,param_2,param_3);
  return (float)dVar1;
}

/* ref: FUN_010519e1 */
double F_010519e1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10519e1u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  double dVar1;
  int * piVar2;
  int iVar3;
  double local_c;
  
  piVar2 = F_00c51f85();
  iVar3 = *piVar2;
  piVar2 = F_00c51f85();
  *piVar2 = 0;
  local_c = F_00c52474(param_1,param_2);
  piVar2 = F_00c51f85();
  *param_4 = *piVar2;
  piVar2 = F_00c51f85();
  dVar1 = REFG(double, 0x10944b8);
  *piVar2 = iVar3;
  for (iVar3 = param_3; 0 < iVar3; iVar3 = iVar3 + -1) {
    local_c = local_c * dVar1;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    do {
      iVar3 = iVar3 + -1;
      local_c = local_c / dVar1;
    } while (iVar3 != 0);
  }
  return local_c;
}

/* ref: __Stod */
double F_01051a4a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051a4au, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * PTR32 * param_2 = (char * PTR32 *)(uintptr_t)gen_a1;
  long param_3 = (long)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  
  dVar1 = F_010519e1(param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x8)));
  return dVar1;
}

/* ref: FUN_01051a67 */
double F_01051a67(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051a67u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  double dVar1;
  
  dVar1 = F_010519e1(param_1,param_2,param_3,param_4);
  return dVar1;
}

/* ref: __Stold */
double F_01051a72(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051a72u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * PTR32 * param_2 = (char * PTR32 *)(uintptr_t)gen_a1;
  long param_3 = (long)gen_a2;
  double dVar1;
  
  dVar1 = F_01051a4a(param_1,param_2,param_3);
  return dVar1;
}

/* ref: std::ios_base::precision */
uint F_01051a8a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051a8au, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x1c) = param_2;
  return uVar1;
}

/* ref: FUN_01051aa7 */
uint F_01051aa7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1051aa7u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & ~param_2;
  return param_1;
}

/* ref: std::sifun */
unsigned int F_01051ab9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1051ab9u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *(uint *)(param_1 + 0x14) = ~param_2 & *(uint *)(param_1 + 0x14) | param_2 & 0xffffU;
  return 0;
}

/* ref: std::sbfun */
unsigned int F_01051ad7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1051ad7u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_2 == 8) {
    uVar1 = 0x400;
  }
  else if (param_2 == 10) {
    uVar1 = 0x200;
  }
  else if (param_2 == 0x10) {
    uVar1 = 0x800;
  }
  else {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x14) =
       *(uint *)(param_1 + 0x14) ^ (*(uint *)(param_1 + 0x14) ^ uVar1) & 0xe00;
  return 0;
}

/* ref: FUN_01051b18 */
uint F_01051b18(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051b18u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return param_1;
}

/* ref: FUN_01051b2e */
uint F_01051b2e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051b2eu, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return param_1;
}

/* ref: FUN_01051b44 */
uint F_01051b44(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051b44u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_01051b5a */
uint F_01051b5a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051b5au, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *in_ecx = param_2;
  in_ecx[2] = param_3;
  in_ecx[3] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_01051b76 */
uint F_01051b76(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1051b76u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = ((code *)REFP(0x1051aa7));
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_01051b8c */
uint F_01051b8c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1051b8cu, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = ((code *)REFP(0x1051ab9));
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_01051ba2 */
uint F_01051ba2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1051ba2u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = ((code *)REFP(0x1051ad7));
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_01051bb8 */
uint F_01051bb8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051bb8u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  param_1[2] = param_2;
  *param_1 = ((code *)REFP(0x1051b18));
  param_1[3] = param_3;
  return (uint)param_1;
}

/* ref: FUN_01051bd4 */
uint F_01051bd4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1051bd4u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  param_1[2] = param_2;
  *param_1 = ((code *)REFP(0x1051b2e));
  param_1[3] = param_3;
  return (uint)param_1;
}

/* ref: __vsnprintf_l */
int F_01051bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x1051bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if (_Format == (char *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else if ((_MaxCount == 0) || (_DstBuf != (char *)0x0)) {
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = _MaxCount;
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = _DstBuf;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = _DstBuf;
    uVar2 = F_00c56a1d(((undefined *)(gen_frame + 0xc)),_Format,_Locale,_ArgList);
    if (_DstBuf != (char *)0x0) {
      iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
      if (iVar3 < 0) {
        F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
      }
      else {
        *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
      }
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: __vsnprintf */
int F_01051c9c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051c9cu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Dest = (char *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Args = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_01051bf0(_Dest,_Count,_Format,(undefined *)0x0,_Args);
  return iVar1;
}

/* ref: __ArrayUnwind */
unsigned int F_01051ccb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051ccbu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x24];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f7560);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x1051cd7;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  while( true ) {
    (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + -1;
    if ((*(int *)&gen_args[2]) < 0) break;
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - (*(uint *)&gen_args[1]))));
    ((code *)(*(gen_code32 *)&gen_args[3]))();
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
  return 0;
}

/* ref: FUN_01051cee */
uint F_01051cee(unsigned int gen_a0)
{
  GEN_ENTER(0x1051ceeu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  *(undefined4 *)(in_ebp + -0x1c) = *(undefined4 *)(in_ebp + -0x14);
  *(undefined4 *)(in_ebp + -0x20) = **(undefined4 * PTR32 *)(in_ebp + -0x1c);
  if (**(int * PTR32 *)(in_ebp + -0x20) != -0x1f928c9d) {
    *(undefined4 *)(in_ebp + -0x24) = 0;
    return *(uint *)(in_ebp + -0x24);
  }
                    
  F_00c5aa82();
}

/* ref: FUN_01051d17 */
unsigned int F_01051d17(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x1051d17u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ebp = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*(int *)(in_ebp + -0x18) + -4))) = 0x1051d26;
  return 0;
}

/* ref: `eh_vector_destructor_iterator' */
unsigned int F_01051d29(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051d29u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f7580);
  (*(undefined4 *)(gen_frame + 0x14)) = 0x1051d35;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * (*(int *)&gen_args[2]))));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  while( true ) {
    (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + -1;
    if ((*(int *)&gen_args[2]) < 0) break;
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - uVar1)));
    ((code *)(*(gen_code32 *)&gen_args[3]))((*(undefined * PTR32 *)&gen_args[0]));
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_01051d74((gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_01051d74 */
uint F_01051d74(unsigned int gen_a0)
{
  GEN_ENTER(0x1051d74u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  if (*(int *)(in_ebp + -0x1c) == 0) {
    F_01051ccb(*(undefined * PTR32 *)(in_ebp + 8),*(uint *)(in_ebp + 0xc),*(int *)(in_ebp + 0x10),
                  *(gen_code32 *)(in_ebp + 0x14));
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}

/* ref: `eh_vector_constructor_iterator' */
unsigned int F_01051d8c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x1051d8cu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x48];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined * pvVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f75a0);
  (*(undefined4 *)(gen_frame + 0x24)) = 0x1051d98;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  for ((*(int *)(gen_frame + 0x10)) = 0; pvVar1 = (*(undefined * PTR32 *)&gen_args[0]), (*(int *)(gen_frame + 0x10)) < (*(int *)&gen_args[2]); (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1) {
    ((code *)(*(gen_code32 *)&gen_args[3]))((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)((int)pvVar1 + (*(uint *)&gen_args[1]));
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
  F_01051dd9((gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_01051dd9 */
uint F_01051dd9(unsigned int gen_a0)
{
  GEN_ENTER(0x1051dd9u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  if (*(int *)(in_ebp + -0x20) == 0) {
    F_01051ccb(*(undefined * PTR32 *)(in_ebp + 8),*(uint *)(in_ebp + 0xc),*(int *)(in_ebp + -0x1c),
                  *(gen_code32 *)(in_ebp + 0x18));
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}

/* ref: _memmove_s */
int F_01051df1(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1051df1u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * piVar1;
  int eVar2;
  
  if (param_4 == 0) {
LAB_01051e3f: ;
    eVar2 = 0;
  }
  else {
    if ((param_1 == 0) || (param_3 == 0)) {
      piVar1 = F_00c51f85();
      eVar2 = 0x16;
      *piVar1 = 0x16;
    }
    else {
      if (param_4 <= param_2) {
        F_00c46e20(param_1,param_3,param_4);
        goto LAB_01051e3f;
      }
      piVar1 = F_00c51f85();
      eVar2 = 0x22;
      *piVar1 = 0x22;
    }
    F_00c4c305();
  }
  return eVar2;
}

/* ref: FUN_01051e46 */
float F_01051e46(float gen_a0)
{
  GEN_ENTER(0x1051e46u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = ABS(in_xmm0);
  if ((int)gen_fl2bits(fVar2) + 0xc2800000U < 0x1ddb3d7) {
    uVar3 = (int)gen_fl2bits(fVar2) + 0xc2800000U >> 0x10 & 0x1fe;
    iVar1 = uVar3 * 4;
    fVar2 = gen_bits2f((uint)gen_fl2bits(in_xmm0) & 0xfffe0000 | 0x10000);
    fVar5 = fVar2 * SQRT(1.0 - in_xmm0 * in_xmm0);
    fVar7 = ((in_xmm0 - fVar2) * (in_xmm0 + fVar2)) /
            (in_xmm0 * *(float *)(&REFG(undefined, 0x12b2a80) + uVar3 * 2) + fVar5);
    fVar5 = fVar5 - in_xmm0 * *(float *)(&REFG(undefined, 0x12b2a80) + uVar3 * 2);
    fVar2 = REFG(float, 0x12b2e84) -
            gen_bits2f(*(uint *)(&REFG(undefined, 0x12b2284) + iVar1) ^ (uint)gen_fl2bits(in_xmm0) & 0x80000000);
    fVar6 = fVar2 - fVar7;
    return (((fVar5 * 0.16666667) * (fVar5 * fVar5) +
            (REFG(float, 0x12b2e80) -
            gen_bits2f(*(uint *)(&REFG(undefined, 0x12b2280) + iVar1) ^ (uint)gen_fl2bits(in_xmm0) & 0x80000000)))
           - (fVar7 - (fVar2 - fVar6))) + fVar6;
  }
  uVar3 = (int)gen_fl2bits(in_xmm0) >> 0x1f;
  if ((int)gen_fl2bits(fVar2) + 0xc0a24c29U < 0x204c29) {
    fVar8 = gen_bits2f((uint)gen_fl2bits(in_xmm0) & 0xfffff000);
    fVar6 = 1.0 - fVar8 * fVar8;
    fVar5 = (in_xmm0 + fVar8) * (in_xmm0 - fVar8);
    fVar7 = SQRT(fVar6 - fVar5);
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar7) & 0xfffe0000 |
                       (uint)gen_fl2bits(in_xmm0) & 0x80000000 | 0x10000);
    uVar3 = -((uVar3 & 8) >> 3);
    uVar4 = ((uint)gen_fl2bits(fVar7) >> 0x10) - 0x3d80 & 0xfffe;
    fVar7 = fVar7 * *(float *)(&REFG(undefined, 0x12b2a80) + uVar4 * 2);
    fVar8 = (fVar8 * fVar2 - fVar7) + (in_xmm0 - fVar8) * fVar2;
    iVar1 = uVar4 * 4;
    return gen_bits2f(uVar3 & 0x80000000 ^
                      (uint)gen_fl2bits((((fVar8 * -0.16666667) * (fVar8 * fVar8) +
                                         (gen_bits2f(uVar3 & *(uint *)&REFG(undefined, 0x12b2e90)) +
                                         *(float *)(&REFG(undefined, 0x12b2280) + iVar1))) +
                                        ((fVar6 - fVar2 * fVar2) - fVar5) /
                                        ((fVar7 + fVar7) + fVar8)) +
                                        (gen_bits2f(uVar3 & *(uint *)&REFG(undefined, 0x12b2e94)) +
                                        *(float *)(&REFG(undefined, 0x12b2284) + iVar1))));
  }
  if ((int)gen_fl2bits(fVar2) + 0xc8800000U < 0x6000000) {
    fVar2 = in_xmm0 * in_xmm0;
    return (((fVar2 * fVar2) * (in_xmm0 * -0.075) + ((in_xmm0 * -0.16666667) * fVar2 + REFG(float, 0x12b2e80))
            ) - (in_xmm0 - (REFG(float, 0x12b2e84) + (in_xmm0 - REFG(float, 0x12b2e84))))) - (in_xmm0 - REFG(float, 0x12b2e84));
  }
  if ((int)gen_fl2bits(fVar2) + 0xc0820000U < 0x20000) {
    fVar5 = 0.5 - ABS(in_xmm0) * 0.5;
    fVar6 = SQRT(fVar5);
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar6) & 0xfffff000);
    return gen_bits2f((uint)gen_fl2bits(gen_bits2f(uVar3 & REFG(uint, 0x12b2ea4)) +
                                        ((((((fVar5 * -0.075 + -0.16666667) +
                                            (fVar5 * fVar5) * -0.04464286) * fVar5) *
                                           (fVar6 + fVar6) + gen_bits2f(uVar3 & REFG(uint, 0x12b2ea0))) -
                                         ((fVar5 - fVar2 * fVar2) -
                                         (fVar6 - fVar2) * ((fVar6 + fVar6) - (fVar6 - fVar2))) /
                                         fVar6) - (fVar6 + fVar6))) ^
                      uVar3 & 0x80000000 ^ 0x80000000);
  }
  if ((uint)gen_fl2bits(fVar2) < 0x37800000) {
    return (REFG(float, 0x12b2e80) + ((REFG(float, 0x12b2e84) + (in_xmm0 - REFG(float, 0x12b2e84))) - in_xmm0)) -
           (in_xmm0 - REFG(float, 0x12b2e84));
  }
  if (fVar2 != 1.0) {
    if ((uint)gen_fl2bits(fVar2) < 0x7f800001) {
      return -NAN;
    }
    return in_xmm0 + 0.0;
  }
  return gen_bits2f(uVar3 & REFG(uint, 0x12b2ea4)) + gen_bits2f(REFG(uint, 0x12b2ea0) & uVar3);
}

/* ref: FUN_01052223 */
float F_01052223(double gen_a0)
{
  GEN_ENTER(0x1052223u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  double in_xmm0 = (double)gen_a0;
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  ulonglong uVar9;
  
  fVar6 = gen_bits2f((uint)(ulonglong)gen_d2bits(in_xmm0));
  uVar3 = ((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x10) & 0x7fff) - 0x80;
  if (uVar3 < 0x4580) {
    fVar7 = gen_bits2f((uint)REFG(double, 0x12b3300)) * fVar6;
    uVar9 = (*(ulonglong *)&REFG(undefined, 0x12b32b0) & (ulonglong)gen_d2bits(in_xmm0)) << 0x20 ^
            (*(ulonglong *)&REFG(undefined, 0x12b32b0) & (ulonglong)gen_d2bits(in_xmm0)) << 0x1d;
    iVar4 = ((int)ROUND(fVar7) + 0x1c7600U & 0x3f) * 0x10;
    dVar8 = gen_bits2d((longlong)
                       CONCAT44((int)((ulonglong)REFG(ulonglong, 0x12b3300) >> 0x20),
                                (uint)gen_fl2bits((fVar7 + *(float *)&REFG(undefined, 0x12b3308)) -
                                                  *(float *)&REFG(undefined, 0x12b3308))) << 0x1d);
    dVar1 = (double)fVar6 - gen_bits2d(REFG(ulonglong, 0x12b32c8) ^ uVar9) * dVar8;
    dVar2 = dVar1 * dVar1;
    return ((float)GEN_TOF((*(double *)(&REFG(undefined, 0x12b2eb0) + iVar4) *
                   ((REFG(double, 0x12b32e8) * dVar2 + *(double *)&REFG(undefined, 0x12b32d0)) +
                   REFG(double, 0x12b32f0) * (dVar2 * dVar2)) +
                  ((gen_bits2d(uVar9 ^ *(ulonglong *)&REFG(undefined, 0x12b32c0)) * dVar8 + dVar1) *
                  *(double *)(&REFG(undefined, 0x12b2eb8) + iVar4)) *
                  ((REFG(double, 0x12b32d8) * dVar2 + *(double *)&REFG(undefined, 0x12b32d0)) +
                  REFG(double, 0x12b32e0) * (dVar2 * dVar2)))));
  }
  if ((short)uVar3 < 0x4580) {
    return (float)((double)fVar6 * *(double *)&REFG(undefined, 0x12b32f8));
  }
  if (((uint)gen_fl2bits(fVar6) & 0x7f800000) != 0x7f800000) {
    fVar7 = gen_bits2f((uint)(ulonglong)gen_d2bits((double)fVar6));
    fVar5 = F_00c4cda0(fVar7,(undefined4)gen_fl2bits(fVar7),
                         (int)((ulonglong)gen_d2bits((double)fVar6) >> 0x20));
    return (float)fVar5;
  }
  return fVar6 - fVar6;
}

/* ref: FUN_01052372 */
float F_01052372(double gen_a0)
{
  GEN_ENTER(0x1052372u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  double in_xmm0 = (double)gen_a0;
  double dVar1;
  double dVar2;
  ushort uVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  ulonglong uVar9;
  
  fVar6 = gen_bits2f((uint)(ulonglong)gen_d2bits(in_xmm0));
  uVar3 = ((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x10) & 0x7fff) - 0x80;
  if (uVar3 < 0x4580) {
    fVar7 = gen_bits2f((uint)REFG(double, 0x12b3758)) * fVar6;
    uVar9 = (*(ulonglong *)&REFG(undefined, 0x12b3710) & (ulonglong)gen_d2bits(in_xmm0)) << 0x20 ^
            (*(ulonglong *)&REFG(undefined, 0x12b3710) & (ulonglong)gen_d2bits(in_xmm0)) << 0x1d;
    iVar4 = ((int)ROUND(fVar7) + 0x1c7610U & 0x3f) * 0x10;
    dVar8 = gen_bits2d((longlong)
                       CONCAT44((int)((ulonglong)REFG(ulonglong, 0x12b3758) >> 0x20),
                                (uint)gen_fl2bits((fVar7 + *(float *)&REFG(undefined, 0x12b3760)) -
                                                  *(float *)&REFG(undefined, 0x12b3760))) << 0x1d);
    dVar1 = (double)fVar6 - gen_bits2d(REFG(ulonglong, 0x12b3728) ^ uVar9) * dVar8;
    dVar2 = dVar1 * dVar1;
    return ((float)GEN_TOF((*(double *)(&REFG(undefined, 0x12b3310) + iVar4) *
                   ((REFG(double, 0x12b3748) * dVar2 + REFG(double, 0x12b3730)) + REFG(double, 0x12b3750) * (dVar2 * dVar2)) +
                  ((gen_bits2d(uVar9 ^ *(ulonglong *)&REFG(undefined, 0x12b3720)) * dVar8 + dVar1) *
                  *(double *)(&REFG(undefined, 0x12b3318) + iVar4)) *
                  ((REFG(double, 0x12b3738) * dVar2 + REFG(double, 0x12b3730)) + REFG(double, 0x12b3740) * (dVar2 * dVar2)))));
  }
  if ((short)uVar3 < 0x4580) {
    return (float)(REFG(double, 0x12b3730) - (double)fVar6 * (double)fVar6);
  }
  if (((uint)gen_fl2bits(fVar6) & 0x7f800000) != 0x7f800000) {
    fVar7 = gen_bits2f((uint)(ulonglong)gen_d2bits((double)fVar6));
    fVar5 = F_00c4c9e0(fVar7,(undefined4)gen_fl2bits(fVar7),
                         (int)((ulonglong)gen_d2bits((double)fVar6) >> 0x20));
    return (float)fVar5;
  }
  return fVar6 - fVar6;
}

/* ref: __snprintf */
int F_01052886(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0x1052886u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _Dest = (char *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if (_Format == (char *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else if ((_Count == 0) || (_Dest != (char *)0x0)) {
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    if (_Count < 0x80000000) {
      (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = _Count;
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = _Dest;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = _Dest;
    uVar2 = F_00c56a1d(((undefined *)(gen_frame + 0xc)),_Format,0,((undefined *)&gen_args[3]));
    if (_Dest != (char *)0x0) {
      iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) - 1;
      (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
      if (iVar3 < 0) {
        F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
      }
      else {
        *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
      }
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: __snprintf_l */
int F_01052932(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0x1052932u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_01051bf0(_DstBuf,_MaxCount,_Format,_Locale,((undefined *)&gen_args[4]));
  return iVar1;
}

/* ref: FUN_01052a66 */
unsigned int F_01052a66(unsigned int gen_a0)
{
  GEN_ENTER(0x1052a66u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  F_00c6fa05(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return 0;
}

/* ref: _CallDestructExceptionObject */
unsigned int F_01052a81(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1052a81u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  BOOL BVar1;
  
  if ((*param_1 == -0x1f928c9d) && ((*(undefined * PTR32 (*)[1])REFP(0x1125c80))[0] != (undefined *)0x0)) {
    BVar1 = F_00c5b7a0((GEN_LPANY)(*(undefined * PTR32 (*)[1])REFP(0x1125c80)));
    if (BVar1 != 0) {
      F_00c73b13(param_1,param_2);
    }
  }
  return 0;
}

/* ref: _ValidateScopeTableHandlers */
uint F_01052ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1052ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  GEN_LPANY in_edi = (GEN_LPANY)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  GEN_LPANY p_Var2;
  uint uVar3;
  uint uVar4;
  
  p_Var2 = (GEN_LPANY)0x0;
  uVar3 = 0xffffffff;
  while( true ) {
    if (in_ecx == -1) {
      return 1;
    }
    piVar1 = (int *)(param_3 + in_ecx * 0xc);
    uVar4 = piVar1[2] - (int)in_edi & 0xfffff000;
    if (((uVar4 != uVar3) &&
        ((((uVar3 = uVar4, p_Var2 == (GEN_LPANY)0x0 || (uVar4 < (*(DWORD *)(((char *)(p_Var2) + 12)))))
          || ((*(DWORD *)(((char *)(p_Var2) + 8))) + (*(DWORD *)(((char *)(p_Var2) + 12))) <= uVar4)) &&
         ((p_Var2 = F_00c5b750(in_edi,uVar4), p_Var2 == (GEN_LPANY)0x0 ||
          (((*(DWORD *)(((char *)(p_Var2) + 36))) & 0x20000000) == 0)))))) ||
       (((piVar1[1] != 0 &&
         ((uVar4 = piVar1[1] - (int)in_edi & 0xfffff000, uVar4 != uVar3 &&
          ((uVar3 = uVar4, uVar4 < (*(DWORD *)(((char *)(p_Var2) + 12))) ||
           ((*(DWORD *)(((char *)(p_Var2) + 8))) + (*(DWORD *)(((char *)(p_Var2) + 12))) <= uVar4)))))) &&
        ((p_Var2 = F_00c5b750(in_edi,uVar4), p_Var2 == (GEN_LPANY)0x0 ||
         (((*(DWORD *)(((char *)(p_Var2) + 36))) & 0x20000000) == 0)))))) break;
    in_ecx = *piVar1;
  }
  return 0;
}

/* ref: __ValidateEH3RN */
uint F_01052b80(unsigned int gen_a0)
{
  GEN_ENTER(0x1052b80u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x68];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x64);
  gen_args[0] = gen_a0;
  GEN_LPANY pBVar1;
  uint uVar2;
  undefined4 pImageBase;
  uint uVar3;
  BOOL BVar4;
  GEN_LPANY p_Var5;
  int iVar6;
  SIZE_T SVar7;
  uint uVar8;
  uint * puVar9;
  uint * puVar10;
  uint * puVar11;
  int iVar12;
  GEN_LPANY pImageBase_00;
  bool bVar13;
  
  (*(undefined4 *)(gen_frame + 0x58)) = 0xfffffffe;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = &REFG(undefined, 0x12f75c0);
  (*(gen_code32 *)(gen_frame + 0x50)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)(REFG(undefined4, 0x134ab78) ^ 0x12f75c0);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x44)) = (undefined1 *)&(*(uint *)(gen_frame + 0xc));
  puVar11 = ((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]));
  (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar11;
  if (((uint)puVar11 & 3) != 0) {
    return 0;
  }
  puVar9 = *((uint * PTR32 *)GEN_TOP(((int)(*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x18)))) + 8)));
  (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar9;
  if ((puVar9 <= puVar11) && (puVar11 < *((uint * PTR32 *)GEN_TOP(((int)(*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x18)))) + 4))))) {
    return 0;
  }
  uVar8 = (*(uint * PTR32 *)&gen_args[0])[3];
  (*(uint *)(gen_frame + 0x38)) = uVar8;
  if (uVar8 == 0xffffffff) {
    return 1;
  }
  bVar13 = false;
  uVar3 = 0;
  puVar10 = puVar11;
  do {
    if ((*puVar10 != 0xffffffff) && (uVar3 <= *puVar10)) {
      return 0;
    }
    if (puVar10[1] != 0) {
      bVar13 = true;
    }
    uVar3 = uVar3 + 1;
    puVar10 = puVar10 + 3;
  } while (uVar3 <= uVar8);
  if (bVar13) {
    if (((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[-2])) < puVar9) {
      return 0;
    }
    if ((*(uint * PTR32 *)&gen_args[0]) <= ((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[-2]))) {
      return 0;
    }
  }
  (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)((uint)puVar11 & 0xfffff000);
  for (iVar12 = 0; (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x4c)), iVar12 < REFG(int, 0x15e3fa0); iVar12 = iVar12 + 1) {
    uVar8 = (&REFG(undefined4, 0x15e3fa8))[(int)(iVar12 * 2)];
    pImageBase_00 = (GEN_LPANY)(&REFG(undefined4, 0x15e3fac))[(int)(iVar12 * 2)];
    if (uVar8 == ((uint)puVar11 & 0xfffff000)) {
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      BVar4 = F_00c5b710(pImageBase_00);
      if (((BVar4 != 0) &&
          (uVar3 = F_01052ac0((*(uint *)(gen_frame + 0x38)),pImageBase_00,(*(uint * PTR32 *)(gen_frame + 0x40))), uVar3 != 0)) &&
         (p_Var5 = F_00c5b750(pImageBase_00,(*(uint * PTR32 *)&gen_args[0])[1] - (int)pImageBase_00),
         iVar6 = REFG(int, 0x15e3fa4), p_Var5 != (GEN_LPANY)0x0)) {
        (*(undefined4 *)(gen_frame + 0x58)) = 0xfffffffe;
        if (iVar12 < 1) {
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
          return 1;
        }
        LOCK();
        REFG(int, 0x15e3fa4) = 1;
        UNLOCK();
        if (iVar6 != 0) {
          REFG(int, 0x15e3fa4) = 1;
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
          return 1;
        }
        if (((uint *)GEN_TOP((&REFG(undefined4, 0x15e3fa8))[(int)(iVar12 * 2)])) == (*(uint * PTR32 *)(gen_frame + 0x3c))) goto LAB_01052d16;
        iVar12 = REFG(int, 0x15e3fa0) + -1;
        if (-1 < iVar12) goto LAB_01052ce7;
        goto LAB_01052d07;
      }
      (*(undefined4 *)(gen_frame + 0x58)) = 0xfffffffe;
      break;
    }
  }
  (*(undefined4 *)(gen_frame + 0x58)) = 0xfffffffe;
  SVar7 = gen_imp_VirtualQuery((*(uint * PTR32 *)(gen_frame + 0x40)),(GEN_LPANY)((byte *)(gen_frame + 0x1c)),0x1c);
  pImageBase = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 4));
  if (SVar7 == 0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    return 1;
  }
  if (((*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 24)) != 0x1000000) || (BVar4 = F_00c5b710((GEN_LPANY)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 4))), BVar4 == 0)
     ) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    return 0xffffffff;
  }
  if ((((byte *)(gen_frame + 0x1c))[0x14] & 0xcc) != 0) {
    p_Var5 = F_00c5b750((GEN_LPANY)pImageBase,(int)(*(uint * PTR32 *)(gen_frame + 0x40)) - pImageBase);
    if (p_Var5 == (GEN_LPANY)0x0) {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      return 0;
    }
    if (((*(DWORD *)(((char *)(p_Var5) + 36))) & 0x80000000) != 0) {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      return 0;
    }
  }
  uVar8 = F_01052ac0((*(uint *)(gen_frame + 0x38)),pImageBase,(*(uint * PTR32 *)(gen_frame + 0x40)));
  if (uVar8 == 0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    return 0;
  }
  p_Var5 = F_00c5b750((GEN_LPANY)pImageBase,(*(uint * PTR32 *)&gen_args[0])[1] - pImageBase);
  iVar12 = REFG(int, 0x15e3fa4);
  if (p_Var5 == (GEN_LPANY)0x0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    return 0;
  }
  LOCK();
  REFG(int, 0x15e3fa4) = 1;
  UNLOCK();
  if (iVar12 != 0) {
    REFG(int, 0x15e3fa4) = 1;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    return 1;
  }
  iVar12 = REFG(int, 0x15e3fa0);
  if (0 < REFG(int, 0x15e3fa0)) {
    puVar11 = (uint *)(&REFG(int, 0x15e3fa0) + REFG(int, 0x15e3fa0) * 2);
    do {
      if ((uint *)*puVar11 == (*(uint * PTR32 *)(gen_frame + 0x3c))) break;
      iVar12 = iVar12 + -1;
      puVar11 = puVar11 + -2;
    } while (0 < iVar12);
  }
  if (iVar12 == 0) {
    iVar12 = 0xf;
    if (REFG(int, 0x15e3fa0) < 0x10) {
      iVar12 = REFG(int, 0x15e3fa0);
    }
    if (-1 < iVar12) {
      puVar9 = &REFG(undefined4, 0x15e3fa8);
      iVar12 = iVar12 + 1;
      puVar11 = (*(uint * PTR32 *)(gen_frame + 0x3c));
      uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 4));
      do {
        uVar3 = *puVar9;
        uVar2 = puVar9[1];
        *puVar9 = (uint)puVar11;
        puVar9[1] = uVar8;
        puVar9 = puVar9 + 2;
        iVar12 = iVar12 + -1;
        puVar11 = (uint *)uVar3;
        uVar8 = uVar2;
      } while (iVar12 != 0);
    }
    if (REFG(int, 0x15e3fa0) < 0x10) {
      REFG(int, 0x15e3fa0) = REFG(int, 0x15e3fa0) + 1;
    }
  }
  else {
    (&REFG(int, 0x15e3fa4))[(int)(iVar12 * 2)] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x1c)) + 4));
  }
LAB_01052ea6: ;
  LOCK();
  REFG(int, 0x15e3fa4) = 0;
  UNLOCK();
  REFG(int, 0x15e3fa4) = 0;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4c));
  return 1;
  while (iVar12 = iVar12 + -1, -1 < iVar12) {
LAB_01052ce7: ;
    if (((uint *)GEN_TOP((&REFG(undefined4, 0x15e3fa8))[(int)(iVar12 * 2)])) == (*(uint * PTR32 *)(gen_frame + 0x3c))) {
      uVar8 = (&REFG(undefined4, 0x15e3fa8))[(int)(iVar12 * 2)];
      pImageBase_00 = (GEN_LPANY)(&REFG(undefined4, 0x15e3fac))[(int)(iVar12 * 2)];
      break;
    }
  }
  bVar13 = false;
  if (iVar12 < 0) {
LAB_01052d07: ;
    if (REFG(int, 0x15e3fa0) < 0x10) {
      REFG(int, 0x15e3fa0) = REFG(int, 0x15e3fa0) + 1;
    }
    iVar12 = REFG(int, 0x15e3fa0) + -1;
LAB_01052d16: ;
    bVar13 = iVar12 < 0;
  }
  if ((iVar12 != 0 && !bVar13) && (iVar6 = 0, -1 < iVar12)) {
    do {
      uVar3 = (&REFG(undefined4, 0x15e3fa8))[(int)(iVar6 * 2)];
      pBVar1 = (GEN_LPANY)(&REFG(undefined4, 0x15e3fac))[(int)(iVar6 * 2)];
      (&REFG(undefined4, 0x15e3fa8))[(int)(iVar6 * 2)] = uVar8;
      (&REFG(undefined4, 0x15e3fac))[(int)(iVar6 * 2)] = pImageBase_00;
      iVar6 = iVar6 + 1;
      uVar8 = uVar3;
      pImageBase_00 = pBVar1;
    } while (iVar6 <= iVar12);
  }
  goto LAB_01052ea6;
}

/* ref: FUN_01052d5a */
uint F_01052d5a(unsigned int gen_a0)
{
  GEN_ENTER(0x1052d5au, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  return (uint)(*((int *)GEN_TOP(**(undefined4 * PTR32 *)(in_ebp + -0x14))) == -0x3ffffffb);
}

/* ref: FUN_01052d6d */
uint F_01052d6d(unsigned int gen_a0)
{
  GEN_ENTER(0x1052d6du, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  SIZE_T SVar3;
  BOOL BVar4;
  GEN_LPANY p_Var5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  int * piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 * puVar12;
  
  iVar7 = *(int *)(in_ebp + -0x18);
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  uVar10 = *(undefined4 *)(in_ebp + -0x1c);
  *(undefined4 *)(iVar7 + -4) = 0x1c;
  *(int *)(iVar7 + -8) = in_ebp + -0x40;
  *(undefined4 *)(iVar7 + -0xc) = uVar10;
  puVar12 = (undefined1 *)(iVar7 + -0x10);
  *(undefined4 *)(iVar7 + -0x10) = 0x1052d87;
  SVar3 = gen_imp_VirtualQuery(*(LPCVOID *)(iVar7 + -0xc),*(GEN_LPANY *)(iVar7 + -8),
                       *(SIZE_T *)(iVar7 + -4));
  if (SVar3 == 0) {
LAB_01052eaf: ;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(in_ebp + -0x10);
    return 1;
  }
  if (*(int *)(in_ebp + -0x28) != 0x1000000) {
LAB_01052d98: ;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(in_ebp + -0x10);
    return 0xffffffff;
  }
  iVar7 = *(int *)(in_ebp + -0x3c);
  *(int *)(puVar12 + -4) = iVar7;
  *(undefined4 *)(puVar12 + -8) = 0x1052dbc;
  BVar4 = F_00c5b710(*(GEN_LPANY *)(puVar12 + -4));
  if (BVar4 == 0) goto LAB_01052d98;
  if ((*(byte *)(in_ebp + -0x2c) & 0xcc) != 0) {
    *(int *)(puVar12 + -4) = *(int *)(in_ebp + -0x1c) - iVar7;
    *(int *)(puVar12 + -8) = iVar7;
    *(undefined4 *)(puVar12 + -0xc) = 0x1052dd5;
    p_Var5 = F_00c5b750(*(GEN_LPANY *)(puVar12 + -8),*(DWORD_PTR *)(puVar12 + -4));
    if ((p_Var5 == (GEN_LPANY)0x0) || (((*(DWORD *)(((char *)(p_Var5) + 36))) & 0x80000000) != 0))
    goto LAB_01052bc3;
  }
  *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(in_ebp + -0x1c);
  uVar10 = *(undefined4 *)(in_ebp + -0x24);
  *(undefined4 *)(puVar12 + -8) = 0x1052df9;
  uVar6 = F_01052ac0(uVar10,iVar7,*(undefined4 *)(puVar12 + -4));
  if (uVar6 != 0) {
    *(int *)(puVar12 + -4) = *((int *)GEN_TOP((*(int *)(in_ebp + 8) + 4))) - iVar7;
    *(int *)(puVar12 + -8) = iVar7;
    *(undefined4 *)(puVar12 + -0xc) = 0x1052e13;
    p_Var5 = F_00c5b750(*(GEN_LPANY *)(puVar12 + -8),*(DWORD_PTR *)(puVar12 + -4));
    iVar7 = REFG(int, 0x15e3fa4);
    if (p_Var5 != (GEN_LPANY)0x0) {
      LOCK();
      REFG(int, 0x15e3fa4) = 1;
      UNLOCK();
      if (iVar7 == 0) {
        iVar7 = REFG(int, 0x15e3fa0);
        if (0 < REFG(int, 0x15e3fa0)) {
          piVar9 = &REFG(int, 0x15e3fa0) + REFG(int, 0x15e3fa0) * 2;
          do {
            if (*piVar9 == *(int *)(in_ebp + -0x20)) break;
            iVar7 = iVar7 + -1;
            piVar9 = piVar9 + -2;
          } while (0 < iVar7);
        }
        if (iVar7 == 0) {
          iVar7 = 0xf;
          if (REFG(int, 0x15e3fa0) < 0x10) {
            iVar7 = REFG(int, 0x15e3fa0);
          }
          if (-1 < iVar7) {
            puVar8 = &REFG(undefined4, 0x15e3fa8);
            iVar7 = iVar7 + 1;
            uVar10 = *(undefined4 *)(in_ebp + -0x20);
            uVar11 = *(undefined4 *)(in_ebp + -0x3c);
            do {
              uVar1 = *puVar8;
              uVar2 = puVar8[1];
              *puVar8 = uVar10;
              puVar8[1] = uVar11;
              puVar8 = puVar8 + 2;
              iVar7 = iVar7 + -1;
              uVar10 = uVar1;
              uVar11 = uVar2;
            } while (iVar7 != 0);
          }
          if (REFG(int, 0x15e3fa0) < 0x10) {
            REFG(int, 0x15e3fa0) = REFG(int, 0x15e3fa0) + 1;
          }
        }
        else {
          (&REFG(int, 0x15e3fa4))[(int)(iVar7 * 2)] = *(undefined4 *)(in_ebp + -0x3c);
        }
        LOCK();
        REFG(int, 0x15e3fa4) = 0;
        UNLOCK();
      }
      goto LAB_01052eaf;
    }
  }
LAB_01052bc3: ;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(in_ebp + -0x10);
  return 0;
}

/* ref: FUN_01052f50 */
uint F_01052f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1052f50u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = param_1[4] - *param_1;
  fVar4 = param_1[5] - param_1[1];
  fVar6 = param_1[6] - param_1[2];
  fVar8 = param_1[7] - param_1[3];
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x14)) = fVar4;
  (*(float *)(gen_frame + 0x18)) = fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar8;
  fVar3 = param_1[8] - *param_1;
  fVar5 = param_1[9] - param_1[1];
  fVar7 = param_1[10] - param_1[2];
  fVar9 = param_1[0xb] - param_1[3];
  (*(float *)(gen_frame + 0x0)) = fVar3;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar7;
  (*(float *)(gen_frame + 0xc)) = fVar9;
  (*(float *)(gen_frame + 0x20)) = fVar3;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar7;
  (*(float *)(gen_frame + 0x2c)) = fVar9;
  fVar9 = fVar4 * fVar7 - fVar6 * fVar5;
  fVar6 = fVar6 * fVar3 - fVar2 * fVar7;
  fVar2 = fVar2 * fVar5 - fVar4 * fVar3;
  (*(float *)(gen_frame + 0x0)) = fVar9;
  (*(float *)(gen_frame + 0x4)) = fVar6;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar9;
  (*(float *)(gen_frame + 0x14)) = fVar6;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  *param_2 = fVar9;
  param_2[1] = fVar6;
  param_2[2] = fVar2;
  param_2[3] = fVar8;
  pfVar1 = (float *)F_00d034e0(param_2,&(*(float *)(gen_frame + 0x0)));
  *param_2 = *pfVar1;
  param_2[1] = pfVar1[1];
  param_2[2] = pfVar1[2];
  fVar2 = pfVar1[3];
  param_2[3] = fVar2;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_010530d0 */
byte F_010530d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10530d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = (float *)F_00d0bdf0(param_1,&(*(float *)(gen_frame + 0x0)),param_1 + 0x10);
  fVar3 = (float10)0;
  (*(float *)(gen_frame + 0x2c)) = *pfVar4;
  (*(float *)(gen_frame + 0x30)) = pfVar4[1];
  fVar6 = pfVar4[3];
  fVar1 = param_2[3];
  (*(float *)(gen_frame + 0x34)) = pfVar4[2];
  (*(float *)(gen_frame + 0x38)) = fVar6;
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x1c)) = param_2[3];
  fVar5 = pfVar4[1] * param_2[1];
  fVar7 = pfVar4[2] * param_2[2];
  fVar8 = (fVar7 + *pfVar4 * *param_2) + fVar5;
  (*(float *)(gen_frame + 0x0)) = fVar8;
  (*(float *)(gen_frame + 0x4)) = (fVar7 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x8)) = (fVar7 + fVar7) + fVar5;
  (*(float *)(gen_frame + 0xc)) = (fVar7 + fVar6 * fVar1) + fVar5;
  fVar2 = (float10)fVar8;
  if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    (*(int *)(gen_frame + 0x3c)) = param_1 + 0x20;
    pfVar4 = (float *)F_00d0bdf0(param_1 + 0x10,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20);
    fVar3 = (float10)0;
    (*(float *)(gen_frame + 0x2c)) = *pfVar4;
    (*(float *)(gen_frame + 0x30)) = pfVar4[1];
    fVar1 = pfVar4[3];
    (*(float *)(gen_frame + 0x34)) = pfVar4[2];
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
    fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
    fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
    (*(float *)(gen_frame + 0x0)) = fVar7;
    (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
    (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
    (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
    fVar2 = (float10)fVar7;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      pfVar4 = (float *)F_00d0bdf0((*(int *)(gen_frame + 0x3c)),&(*(float *)(gen_frame + 0x0)),param_1);
      fVar3 = (float10)0;
      (*(float *)(gen_frame + 0x2c)) = *pfVar4;
      (*(float *)(gen_frame + 0x30)) = pfVar4[1];
      fVar1 = pfVar4[3];
      (*(float *)(gen_frame + 0x34)) = pfVar4[2];
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
      fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
      fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
      (*(float *)(gen_frame + 0x0)) = fVar7;
      (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
      (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
      (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
      fVar2 = (float10)fVar7;
      if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_01053270 */
byte F_01053270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = (float *)F_00d0bdf0(param_1,&(*(float *)(gen_frame + 0x0)),param_1 + 0x10);
  fVar3 = (float10)0;
  (*(float *)(gen_frame + 0x2c)) = *pfVar4;
  (*(float *)(gen_frame + 0x30)) = pfVar4[1];
  fVar6 = pfVar4[3];
  fVar1 = param_2[3];
  (*(float *)(gen_frame + 0x34)) = pfVar4[2];
  (*(float *)(gen_frame + 0x38)) = fVar6;
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x1c)) = param_2[3];
  fVar5 = pfVar4[1] * param_2[1];
  fVar7 = pfVar4[2] * param_2[2];
  fVar8 = (fVar7 + *pfVar4 * *param_2) + fVar5;
  (*(float *)(gen_frame + 0x0)) = fVar8;
  (*(float *)(gen_frame + 0x4)) = (fVar7 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x8)) = (fVar7 + fVar7) + fVar5;
  (*(float *)(gen_frame + 0xc)) = (fVar7 + fVar6 * fVar1) + fVar5;
  fVar2 = (float10)fVar8;
  if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    pfVar4 = (float *)F_00d0bdf0(param_1 + 0x10,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20);
    fVar3 = (float10)0;
    (*(float *)(gen_frame + 0x2c)) = *pfVar4;
    (*(float *)(gen_frame + 0x30)) = pfVar4[1];
    fVar1 = pfVar4[3];
    (*(float *)(gen_frame + 0x34)) = pfVar4[2];
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
    fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
    fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
    (*(float *)(gen_frame + 0x0)) = fVar7;
    (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
    (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
    (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
    fVar2 = (float10)fVar7;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      (*(int *)(gen_frame + 0x3c)) = param_1 + 0x30;
      pfVar4 = (float *)F_00d0bdf0(param_1 + 0x20,&(*(float *)(gen_frame + 0x0)),param_1 + 0x30);
      fVar3 = (float10)0;
      (*(float *)(gen_frame + 0x2c)) = *pfVar4;
      (*(float *)(gen_frame + 0x30)) = pfVar4[1];
      fVar1 = pfVar4[3];
      (*(float *)(gen_frame + 0x34)) = pfVar4[2];
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
      fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
      fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
      (*(float *)(gen_frame + 0x0)) = fVar7;
      (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
      (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
      (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
      fVar2 = (float10)fVar7;
      if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
        pfVar4 = (float *)F_00d0bdf0((*(int *)(gen_frame + 0x3c)),&(*(float *)(gen_frame + 0x0)),param_1);
        fVar3 = (float10)0;
        (*(float *)(gen_frame + 0x2c)) = *pfVar4;
        (*(float *)(gen_frame + 0x30)) = pfVar4[1];
        fVar1 = pfVar4[3];
        (*(float *)(gen_frame + 0x34)) = pfVar4[2];
        (*(float *)(gen_frame + 0x38)) = fVar1;
        fVar6 = pfVar4[1] * (*(float *)(gen_frame + 0x14));
        fVar5 = pfVar4[2] * (*(float *)(gen_frame + 0x18));
        fVar7 = (fVar5 + *pfVar4 * (*(float *)(gen_frame + 0x10))) + fVar6;
        (*(float *)(gen_frame + 0x0)) = fVar7;
        (*(float *)(gen_frame + 0x4)) = (fVar5 + fVar6) + fVar6;
        (*(float *)(gen_frame + 0x8)) = (fVar5 + fVar5) + fVar6;
        (*(float *)(gen_frame + 0xc)) = (fVar5 + fVar1 * (*(float *)(gen_frame + 0x1c))) + fVar6;
        fVar2 = (float10)fVar7;
        if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_01053470 */
uint F_01053470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1053470u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[3];
  fVar2 = param_2[3];
  fVar7 = *param_2 - *param_1;
  fVar8 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar6 = ((float10)GEN_TOD(((fVar9 * fVar9 + fVar7 * fVar7) + fVar8 * fVar8)));
  bVar5 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6);
  if (bVar5 == (bVar5 || (float10)0 == fVar6)) {
    fVar3 = ((float)GEN_TOF((((float10)GEN_TOD((((param_3[2] - param_1[2]) * fVar9 + (*param_3 - *param_1) * fVar7) +
                             (param_3[1] - param_1[1]) * fVar8))) / fVar6)));
    fVar6 = (float10)fVar3;
    if (!((float10)0 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)0))) {
      if (!(fVar6 <= (float10)1) != (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar6))) {
        *param_4 = *param_2;
        param_4[1] = param_2[1];
        param_4[2] = param_2[2];
        param_4[3] = param_2[3];
        return (uint)param_4;
      }
      *param_4 = fVar3 * fVar7;
      param_4[1] = fVar3 * fVar8;
      param_4[2] = fVar3 * fVar9;
      param_4[3] = fVar3 * (fVar2 - fVar1);
      uVar4 = F_00c34180(param_4,param_1);
      return uVar4;
    }
  }
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = param_1[2];
  param_4[3] = param_1[3];
  return (uint)param_4;
}

/* ref: FUN_010536a0 */
float F_010536a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10536a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1[3];
  fVar2 = param_2[3];
  fVar6 = *param_2 - *param_1;
  fVar7 = param_2[1] - param_1[1];
  fVar8 = param_2[2] - param_1[2];
  fVar5 = ((float10)GEN_TOD(((fVar8 * fVar8 + fVar6 * fVar6) + fVar7 * fVar7)));
  bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar5);
  if (bVar4 == (bVar4 || (float10)0 == fVar5)) {
    fVar3 = ((float)GEN_TOF((((float10)GEN_TOD((((0.0 - param_1[2]) * fVar8 + (0.0 - *param_1) * fVar6) +
                             (0.0 - param_1[1]) * fVar7))) / fVar5)));
    fVar5 = (float10)fVar3;
    if (!((float10)0 <= fVar5) == (GEN_ISNAN(fVar5) || GEN_ISNAN((float10)0))) {
      if (!(fVar5 <= (float10)1) == (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar5))) {
        *param_3 = fVar3 * fVar6;
        param_3[1] = fVar3 * fVar7;
        param_3[2] = fVar3 * fVar8;
        param_3[3] = fVar3 * (fVar2 - fVar1);
        F_00c34180(param_3,param_1);
      }
      else {
        *param_3 = *param_2;
        param_3[1] = param_2[1];
        param_3[2] = param_2[2];
        param_3[3] = param_2[3];
      }
    }
    else {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
  }
  else {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
  }
  return SQRT((param_3[2] * param_3[2] + *param_3 * *param_3) + param_3[1] * param_3[1]);
}

/* ref: FUN_010538c0 */
uint F_010538c0(unsigned int gen_a0)
{
  GEN_ENTER(0x10538c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined1 *)(in_ecx + 0x44) = 0;
  return in_ecx;
}

/* ref: FUN_010538d0 */
unsigned int F_010538d0(unsigned int gen_a0)
{
  GEN_ENTER(0x10538d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  return 0;
}

/* ref: FUN_010538e0 */
unsigned int F_010538e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10538e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  
  iVar1 = param_2;
  if (8 < param_2) {
    iVar1 = 8;
  }
  iVar6 = 0;
  puVar3 = param_1;
  if (3 < iVar1) {
    iVar4 = (iVar1 - 4U >> 2) + 1;
    iVar6 = iVar4 * 4;
    puVar2 = param_1;
    puVar5 = (undefined4 *)((int)this + 8);
    do {
      puVar3 = puVar2 + 8;
      puVar5[-2] = *puVar2;
      iVar4 = iVar4 + -1;
      puVar5[-1] = puVar2[1];
      *puVar5 = puVar2[2];
      puVar5[1] = puVar2[3];
      puVar5[2] = puVar2[4];
      puVar5[3] = puVar2[5];
      puVar5[4] = puVar2[6];
      puVar5[5] = puVar2[7];
      puVar2 = puVar3;
      puVar5 = puVar5 + 8;
    } while (iVar4 != 0);
  }
  while (iVar6 < iVar1) {
    iVar6 = iVar6 + 1;
    *(undefined4 *)((int)this + iVar6 * 8 + -8) = *puVar3;
    *(undefined4 *)((int)this + iVar6 * 8 + -4) = puVar3[1];
    puVar3 = puVar3 + 2;
  }
  *(int *)((int)this + 0x40) = iVar1;
  *(undefined1 *)((int)this + 0x44) = (undefined1)param_3;
  return 0;
}

/* ref: FUN_01053980 */
uint F_01053980(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x1053980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = (float10)param_2;
  iVar4 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  if (0 < iVar4) {
    do {
      fVar8 = (float10)*(float *)(param_1 + uVar2 * 8);
      if (fVar7 <= fVar8 && ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && fVar8 != fVar7)) {
        if (iVar4 == 8) {
          return 0xffffffff;
        }
        if ((int)uVar2 < iVar4) {
          if (3 < (int)(iVar4 - uVar2)) {
            iVar3 = ((iVar4 - uVar2) - 4 >> 2) + 1;
            iVar5 = iVar4 * 8;
            iVar4 = iVar4 + iVar3 * -4;
            puVar1 = (undefined4 *)(param_1 + -8 + iVar5);
            do {
              iVar3 = iVar3 + -1;
              puVar1[2] = *puVar1;
              puVar1[3] = puVar1[1];
              *puVar1 = puVar1[-2];
              puVar1[1] = puVar1[-1];
              puVar1[-2] = puVar1[-4];
              puVar1[-1] = puVar1[-3];
              puVar1[-4] = puVar1[-6];
              puVar1[-3] = puVar1[-5];
              puVar1 = puVar1 + -8;
            } while (iVar3 != 0);
          }
          if ((int)uVar2 < iVar4) {
            iVar5 = iVar4 - uVar2;
            puVar1 = (undefined4 *)(param_1 + -4 + iVar4 * 8);
            do {
              iVar5 = iVar5 + -1;
              puVar1[1] = puVar1[-1];
              puVar1[2] = *puVar1;
              puVar1 = puVar1 + -2;
            } while (iVar5 != 0);
          }
        }
        *(float *)(param_1 + uVar2 * 8) = param_2;
        *(float *)(param_1 + 4 + uVar2 * 8) = param_3;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        return uVar2;
      }
      fVar8 = (float10)*(float *)(param_1 + uVar2 * 8);
      bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8);
      if (bVar6 != (bVar6 || fVar7 == fVar8)) {
        *(float *)(param_1 + 4 + uVar2 * 8) = param_3;
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar4);
    if (uVar2 == 8) {
      return 0xffffffff;
    }
  }
  *(float *)(param_1 + uVar2 * 8) = param_2;
  *(float *)(param_1 + 4 + uVar2 * 8) = param_3;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return uVar2;
}

/* ref: FUN_01053a80 */
uint F_01053a80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x1053a80u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(int *)(in_ecx + 0x40) <= (int)param_2) {
    return 0xffffffff;
  }
  *(float *)(in_ecx + 4 + param_2 * 8) = param_3;
  return param_2;
}

/* ref: FUN_01053aa0 */
uint F_01053aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((int)param_1 < *(int *)((int)this + 0x40)) {
    if ((int)param_1 < *(int *)((int)this + 0x40) + -1) {
      puVar1 = (undefined4 *)((int)this + param_1 * 8 + 0xc);
      uVar2 = param_1;
      do {
        uVar2 = uVar2 + 1;
        puVar1[-3] = puVar1[-1];
        puVar1[-2] = *puVar1;
        puVar1 = puVar1 + 2;
      } while ((int)uVar2 < *(int *)((int)this + 0x40) + -1);
    }
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + -1;
    return param_1;
  }
  return 0xffffffff;
}

/* ref: FUN_01053af0 */
float10 F_01053af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x1053af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    return (float10)0;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    fVar5 = (float10)param_2;
    do {
      fVar6 = (float10)*(float *)(param_1 + iVar3 * 8);
      if (!(fVar5 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
        if (iVar3 == 0) {
          return (float10)*(float *)(param_1 + 4);
        }
        fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + iVar3 * 8) -
                                (float10)*(float *)(param_1 + -8 + iVar3 * 8))));
        bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6);
        if (bVar4 == (bVar4 || (float10)0 == fVar6)) {
          pfVar1 = (float *)(param_1 + -4 + iVar3 * 8);
          return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 - (float10)*(float *)(param_1 + -8 +
                                                                               iVar3 * 8)) / fVar6)))
                                  * (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 4 + iVar3 * 8) -
                                                    (float10)*pfVar1))) + (float10)*pfVar1)));
        }
        return (float10)*(float *)(param_1 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return (float10)*(float *)(param_1 + -4 + iVar3 * 8);
}

/* ref: FUN_01053b90 */
float10 F_01053b90(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053b90u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_1;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  fVar3 = (float10)REFG(double, 0x1088108);
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar3))) *
                          (float10)*(float *)(param_2 + 0x14) +
                         ((float10)(float)(fVar2 * fVar1 + fVar3) *
                          (float10)*(float *)(param_2 + 0xc) +
                         (float10)((float)GEN_TOF((fVar2 * (fVar2 * fVar3)))) *
                         (float10)*(float *)(param_2 + 4)))));
}

/* ref: FUN_01053c00 */
float10 F_01053c00(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053c00u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = ((float)GEN_TOF((((float10)*(float *)param_2 -
                  (float10)*(float *)(param_2 + 8) * (float10)*(double *)&REFG(undefined, 0x1092098)) +
                 (float10)*(float *)(param_2 + 0x10))));
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) - (float10)*(float *)param_2)));
  fVar3 = (float10)REFG(float, 0x10947f8);
  fVar4 = (float10)fVar1;
  if (!(fVar3 <= fVar4) != ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3)) || fVar4 == fVar3)) {
    return (float10)REFG(float, 0x10928e4);
  }
  fVar3 = (float10)fVar2;
  return (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 -
                                                                fVar4 * (float10)((float)GEN_TOF((((float10)*
                                                  (float *)(param_2 + 8) +
                                                  (float10)*(float *)param_2) -
                                                  (float10)param_1 *
                                                  (float10)*(double *)&REFG(undefined, 0x1092098)))))))))) -
                          (float10)fVar2) / (float10)fVar1)));
}

/* ref: FUN_01053c90 */
uint F_01053c90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x1053c90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      fVar6 = (float10)*(float *)(param_1 + uVar3 * 8);
      bVar5 = GEN_ISNAN((float10)param_2) || GEN_ISNAN(fVar6);
      if (bVar5 != (bVar5 || (float10)param_2 == fVar6)) {
        if (iVar1 <= (int)uVar3) {
          return 0xffffffff;
        }
        if ((int)uVar3 < iVar1 + -1) {
          puVar2 = (undefined4 *)(param_1 + 0xc + uVar3 * 8);
          uVar4 = uVar3;
          do {
            uVar4 = uVar4 + 1;
            puVar2[-3] = puVar2[-1];
            puVar2[-2] = *puVar2;
            puVar2 = puVar2 + 2;
          } while ((int)uVar4 < *(int *)(param_1 + 0x40) + -1);
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_01053d00 */
float10 F_01053d00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x1053d00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int iVar2;
  float * pfVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = param_1[0x10];
  if (fVar1 == 0.0) {
    return (float10)0;
  }
  iVar2 = 0;
  if (0 < (int)gen_fl2bits(fVar1)) {
    fVar5 = (float10)param_2;
    do {
      if (fVar5 <= (float10)param_1[iVar2 * 2]) {
        if (iVar2 == 0) {
          return (float10)param_1[1];
        }
        if (iVar2 == 1) {
          pfVar3 = param_1;
          if (fVar5 <= ((float10)param_1[2] - (float10)*param_1) * (float10)REFG(double, 0x1088108) +
                       (float10)*param_1) {
LAB_01053de6: ;
            fVar6 = (float10)(float)((float10)param_1[iVar2 * 2] - (float10)param_1[iVar2 * 2 + -2])
            ;
            bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6);
            if (bVar4 == (bVar4 || (float10)0 == fVar6)) {
              return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 - (float10)param_1[iVar2 * 2 + -2]) /
                                                      fVar6))) *
                                      (float10)(float)((float10)param_1[iVar2 * 2 + 1] -
                                                      (float10)param_1[iVar2 * 2 + -1]) +
                                     (float10)param_1[iVar2 * 2 + -1])));
            }
            return (float10)param_1[iVar2 * 2 + 1];
          }
        }
        else {
          pfVar3 = param_1 + iVar2 * 2 + -2;
          if (fVar5 <= ((float10)param_1[iVar2 * 2] - (float10)*pfVar3) * (float10)REFG(double, 0x1088108) +
                       (float10)*pfVar3) {
            pfVar3 = param_1 + iVar2 * 2 + -4;
          }
          else if (iVar2 == (int)gen_fl2bits(fVar1) + -1) goto LAB_01053de6;
        }
        fVar5 = F_01053c00(param_2,(uint)pfVar3);
        fVar5 = (float10)(float)fVar5;
        bVar4 = GEN_ISNAN((float10)REFG(float, 0x10928e4)) || GEN_ISNAN(fVar5);
        if (bVar4 != (bVar4 || (float10)REFG(float, 0x10928e4) == fVar5)) {
          fVar5 = (float10)((float)GEN_TOF((((((float10)param_2 + (float10)param_2) - (float10)*pfVar3) -
                                   (float10)pfVar3[2]) / ((float10)pfVar3[4] - (float10)*pfVar3))));
        }
        fVar5 = F_01053b90((float)fVar5,pfVar3);
        return (float10)(float)fVar5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)gen_fl2bits(fVar1));
  }
  return (float10)param_1[iVar2 * 2 + -1];
}

/* ref: FUN_01053e40 */
float10 F_01053e40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x1053e40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    fVar1 = F_01053af0(param_1,param_2);
    return fVar1;
  }
  if (*(char *)(param_1 + 0x44) != '\x01') {
    return (float10)0;
  }
  fVar1 = F_01053d00(param_1,param_2);
  return fVar1;
}

/* ref: FUN_01053e80 */
unsigned int F_01053e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053e80u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf4 */
uint F_01053ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1053ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc7020(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf3 */
uint F_01053ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc7150(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf2 */
uint F_01053ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1053ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc8c90(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf5 */
uint F_01053f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1053f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00cc8970(param_1,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf6 */
uint F_01053f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1053f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00cc7310(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_01053f40 */
uint F_01053f40(unsigned int gen_a0)
{
  GEN_ENTER(0x1053f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cc73f0(param_1);
  return uVar1;
}

/* ref: FUN_01053fc0 */
uint F_01053fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1053fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08b40(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,uVar1,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_01054000 */
uint F_01054000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1054000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08c80(*(undefined * PTR32 *)((int)this + 4),param_1,param_2,uVar1,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_01054040 */
uint F_01054040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08d60(*(undefined * PTR32 *)((int)this + 4),param_1,uVar1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf9 */
unsigned int F_01054070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc32f0(param_1);
    F_00cc25e0(param_1);
    F_00cea2f0(param_1);
    F_00cbf830(param_1);
    F_00cc74f0();
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf10 */
uint F_010540b0(unsigned int gen_a0)
{
  GEN_ENTER(0x10540b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = F_00427d90();
  iVar1 = (int)uVar2 - *(int *)(this + 0x18);
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc3430(iVar1);
    F_00cc33c0(iVar1);
  }
  *(ulonglong *)(this + 0x18) = uVar2;
  return (uint)(uVar2 >> 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf11 */
uint F_010540f0(unsigned int gen_a0)
{
  GEN_ENTER(0x10540f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = F_00427d90();
  iVar1 = (int)uVar2 - *(int *)(this + 0x10);
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc3490(iVar1);
    F_00cbf830(iVar1);
    F_00cc74f0();
  }
  *(ulonglong *)(this + 0x10) = uVar2;
  return (uint)(uVar2 >> 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf28 */
uint F_01054140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc52a0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf30 */
uint F_01054170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc5d00(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf31 */
uint F_01054190(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054190u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfb60(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf40 */
unsigned int F_010541b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10541b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf16 */
uint F_010541c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10541c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cbbd50(param_1,param_2,*(undefined4 *)(this + 4));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf18 */
uint F_010541e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10541e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cbe360(param_1,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf17 */
uint F_01054200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc6f60(param_2);
  F_00cbe360(param_1,uVar1);
  return param_1;
}

/* ref: FUN_01054230 */
uint F_01054230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054230u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_01055cb0(param_1,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf20 */
uint F_01054250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfc80(param_2);
  F_00cbb870(param_1,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf21 */
uint F_01054280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfcb0(param_2);
  F_00cc6a70(param_1,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf22 */
uint F_010542b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10542b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfce0(param_2);
  F_00cc6a70(param_1,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf23 */
uint F_010542e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10542e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfd10(param_2);
  F_00cc6a70(param_1,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf24 */
uint F_01054310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfd40(param_2);
  F_00cc6a70(param_1,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf25 */
uint F_01054340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfd70(param_2);
  F_00cc6a70(param_1,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf26 */
uint F_01054370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1054370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00cbfe20(param_2,param_3);
  F_00cc6a70(param_1,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf19 */
uint F_010543a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10543a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cbaea0(param_1,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf27 */
byte F_010543c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10543c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00cc6ea0(param_1,param_2,param_3);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf68 */
uint F_010543e0(void)
{
  GEN_ENTER(0x10543e0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7754);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf33 */
uint F_01054400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00cc5520(((undefined4 *)(gen_frame + 0xc)),0x100);
  uVar4 = param_2;
  if (uVar2 < param_2) {
    uVar4 = uVar2;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0xc))[(int)(uVar2)] + 0xd0))((int *)((undefined4 *)(gen_frame + 0xc))[(int)(uVar2)]);
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + iVar1) = uVar3;
    } while (uVar2 < uVar4);
  }
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf36 */
uint F_01054490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc77f0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf37 */
unsigned int F_010544b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10544b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)(this + 4) != 0) {
    F_00d05de0(*(int *)(this + 4),0xffffffff,param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf38 */
uint F_010544d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10544d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc84b0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf41 */
uint F_010544f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10544f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc5440(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf42 */
unsigned int F_01054510(void)
{
  GEN_ENTER(0x1054510u, 0u, 0u, 0u, 0u);
  F_00cc5800();
  F_00cc00e0();
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf43 */
uint F_01054520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc8600(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf44 */
uint F_01054540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc8690(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf45 */
uint F_01054560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1054560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00cc8710(param_1,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf46 */
uint F_01054580(void)
{
  GEN_ENTER(0x1054580u, 0u, 0u, 0u, 0u);
  return REFG(int, 0x15d86bc) - REFG(int, 0x15d86b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf47 */
uint F_01054590(void)
{
  GEN_ENTER(0x1054590u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d86b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf48 */
unsigned int F_010545a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10545a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cc87b0(param_1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf49 */
byte F_010545c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10545c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cc8800(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf64 */
uint F_010545e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10545e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cbf720(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf65 */
byte F_01054600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbf7b0(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf63 */
byte F_01054620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cc74d0(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf69 */
unsigned int F_01054640(unsigned int gen_a0)
{
  GEN_ENTER(0x1054640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x30));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf70 */
unsigned int F_01054660(unsigned int gen_a0)
{
  GEN_ENTER(0x1054660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x30));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf74 */
uint F_01054680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  int iVar2;
  byte bVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char * pcVar8;
  float10 fVar9;
  double dVar10;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int *)(gen_frame + 0x10)) = param_1;
  F_00c4720f(((char *)(gen_frame + 0x18)),"--Checker Ver.2--\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"[Driver]\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"updateEnabled= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2c]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"busReverbEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2d]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"soundReverbEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2e]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xdc))((*(undefined * PTR32 *)(gen_frame + 0x14)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"PLIIzEnable= %d\n",uVar5 & 0xff);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"busPLIIzEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2f]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xe4))((*(undefined * PTR32 *)(gen_frame + 0x14)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"StereoDownmixEnable= %d\n",uVar5 & 0xff);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"timerVsyncProcessor= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x20));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"timerMsecProcessor= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x24));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"outputChannels= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x28));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"volumeCurveType= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 8));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"lastUpdateVSync= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x10),*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"lastUpdateMsec= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x18),*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x1c));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xb8))((*(undefined * PTR32 *)(gen_frame + 0x14)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"RemainingBank= %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xbc))((*(undefined * PTR32 *)(gen_frame + 0x14)));
  F_00c4720f(((char *)(gen_frame + 0x18)),"UsingBank= %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)REFG(int, 0x15d7754);
  F_00c4720f(((char *)(gen_frame + 0x18)),"BusCount= %d\n",REFG(int, 0x15d7754));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  uVar6 = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  if (0 < (int)(*(undefined * PTR32 *)(gen_frame + 0x14))) {
    do {
      F_00cbf720(uVar6);
      F_00cbf770(uVar6);
      fVar9 = F_00cbfef0(uVar6);
      dVar10 = (double)fVar9;
      bVar3 = F_00cbfb10(uVar6);
      F_00cbfad0(uVar6,(uint)bVar3,(int)(ulonglong)gen_d2bits(dVar10),
                   (int)((ulonglong)gen_d2bits(dVar10) >> 0x20));
      F_00cbfbc0(uVar6);
      bVar3 = F_00cbf7b0(uVar6);
      F_00c4720f(((char *)(gen_frame + 0x18)),"Bus[%d] 3D= %d Rev=%d Pause= %d SPause= %d Vol= %f Play= %d/%d \n",uVar6,
               (uint)bVar3);
      pcVar4 = ((char *)(gen_frame + 0x18));
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
      pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) + -1);
      do {
        pcVar8 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = ((char *)(gen_frame + 0x18));
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar4 = pcVar4 + 4;
      }
      uVar6 = uVar6 + 1;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar4 = pcVar4 + 1;
      }
    } while ((int)uVar6 < (int)(*(undefined * PTR32 *)(gen_frame + 0x14)));
  }
  F_00d2de20(((undefined1 *)(gen_frame + 0x8)),0);
  F_00cbb9b0(((undefined1 *)(gen_frame + 0x8)));
  F_00cbb930(((undefined1 *)(gen_frame + 0x8)));
  uVar5 = F_00cbb9f0(((undefined1 *)(gen_frame + 0x8)));
  uVar5 = F_00cbb8f0(((undefined1 *)(gen_frame + 0x8)),uVar5);
  F_00c4720f(((char *)(gen_frame + 0x18)),"Reverb No= %d TempNo= %d Bypass= %d Level= %.3f\n",uVar5);
  iVar2 = (*(int *)(gen_frame + 0x10));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = F_00cc54e0();
  F_00c4720f(((char *)(gen_frame + 0x18)),"SoundCount = %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(iVar2 + -1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00cc5940(iVar2);
  F_00ce9e30(iVar2);
  uVar5 = F_00ccb6c0(iVar2);
  F_00cbb890(((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf54 */
uint F_01054d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00cbfe50();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(uint)((char)param_1 == '\0'));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf55 */
byte F_01054dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1054dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cbfe50();
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf56 */
uint F_01054de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00cbfe60();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(uint)((char)param_1 == '\0'));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf57 */
byte F_01054e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1054e10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cbfe60();
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf60 */
uint F_01054e30(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054e30u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  undefined4 uVar3;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,((undefined1 *)(gen_frame + 0xc)),0);
  ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,((undefined1 *)(gen_frame + 0x14)),1);
  fVar1 = (float10)1;
  if (((float10)param_2 <= fVar1) && (param_2 = (float)fVar1, param_3 == 0)) {
    F_00cc26e0((float)fVar1,0);
    F_00cc6ad0(((undefined1 *)(gen_frame + 0xc)),1);
    uVar3 = 1;
  }
  else {
    F_00cc26e0(param_2,param_3);
    F_00cc6b10(((undefined1 *)(gen_frame + 0xc)),param_2,0,param_3);
    F_00cc6ad0(((undefined1 *)(gen_frame + 0xc)),0);
    F_00cc6b10(((undefined1 *)(gen_frame + 0x14)),param_2,0,param_3);
    uVar3 = 0;
  }
  uVar2 = F_00cc6ad0(((undefined1 *)(gen_frame + 0x14)),uVar3);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x14)));
  F_00cc6ac0(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf62 */
uint F_01054f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054f00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined1 * puVar4;
  
  iVar1 = *param_1;
  uVar2 = F_00cbfda0();
  puVar4 = ((undefined1 *)(gen_frame + 0x4));
  ((code *)*(gen_code32 *)(iVar1 + 0x60))(param_1);
  fVar3 = F_00cbfdc0(param_2,puVar4,uVar2);
  uVar2 = F_00cbfdf0(param_2);
  F_00cc26e0(fVar3,uVar2);
  F_00cc6b10(((undefined1 *)(gen_frame + 0x4)),fVar3,0,uVar2);
  uVar2 = F_00cc6ad0(((undefined1 *)(gen_frame + 0x4)),0);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_01054f70 */
uint F_01054f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b47fc));
  *(undefined4 *)((int)this + 4) = 0;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = 0x10000;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  *(undefined1 *)((int)this + 0x48) = 1;
  F_00cc0dd0(param_1);
  F_00cc8dd0(param_1);
  F_00cc5dc0(param_1);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 4);
  F_00cea4e0(&(*(undefined4 *)(gen_frame + 0x18)));
  if (*(char *)(param_1 + 0x1bc) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10000;
    (*(char * PTR32 *)(gen_frame + 0x8)) = "CDevSd StreamHandler";
    (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
    F_00ce3d30(&(*(char * PTR32 *)(gen_frame + 0x8)));
  }
  *(undefined4 *)((int)this + 8) = 3;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)((int)this + 0x2c) = 1;
  return (uint)this;
}

/* ref: FUN_01055030 */
unsigned int F_01055030(unsigned int gen_a0)
{
  GEN_ENTER(0x1055030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b47fc));
  if ((REFG(int, 0x15d8c04) != 0) && (REFG(int, 0x15d8c04) != -0xa0)) {
    F_00ce3b10(1);
    F_00ce3530();
  }
  *(undefined1 *)((int)this + 0x2c) = 0;
  F_00cc5320();
  F_00cc27e0();
  F_00ce9fe0();
  F_00cc6d60();
  F_00cbf410();
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b46cc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf7 */
byte F_01055090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1055090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x30);
  this[0x48] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((char)param_2 != '\0') {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,((undefined1 *)(gen_frame + 0x0)),param_1)));
    F_00cbe4b0(this_00);
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  }
  piVar2 = (int *)F_00cc6e00(param_1);
  if (piVar2 == (int *)0x0) {
    if (this[0x48] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  bVar1 = F_00cc2b60(piVar2);
  if ((bVar1 == 0) && ((short)piVar2[8] < 1)) {
    if ((*(byte *)(piVar2 + 0x12) & 8) != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      if (uVar3 != 3) {
        bVar1 = F_00ce3460(piVar2[5]);
        if (bVar1 != 0) goto LAB_0105513a;
      }
    }
    bVar1 = F_00cc8a70(param_1);
    if (this[0x48] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return bVar1;
  }
LAB_0105513a: ;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf8 */
byte F_01055170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x30);
  this[0x48] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar2 = (int *)F_00cc6e00(param_1);
  if (piVar2 != (int *)0x0) {
    bVar1 = F_00cc2b60(piVar2);
    if ((bVar1 != 0) || (0 < (short)piVar2[8])) {
LAB_010551ce: ;
      if (this[0x48] != (undefined1)0x0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if ((*(byte *)(piVar2 + 0x12) & 8) != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      if (uVar3 != 3) {
        bVar1 = F_00ce3460(piVar2[5]);
        if (bVar1 != 0) goto LAB_010551ce;
      }
    }
  }
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: FUN_01055200 */
uint F_01055200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  char * pcVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = this;
  ((byte *)(gen_frame + 0x0))[0x10] = (byte)param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(uint *)(gen_frame + 0x24)) = param_1;
  ((byte *)(gen_frame + 0x0))[0x1c] = (byte)param_7;
  ((byte *)(gen_frame + 0x0))[0x14] = (byte)param_8;
  F_00ccb2c0(((char *)(gen_frame + 0x2c)));
  uVar6 = param_1;
  if ((*(byte *)(param_2 + 4) & 0x80) == 0) {
LAB_010552ac: ;
    puVar2 = (undefined4 *)F_00ce9a60(param_1,param_2);
    if (puVar2 != (undefined4 *)0x0) {
      pcVar8 = ((char *)(gen_frame + 0x2c));
      for (iVar3 = 0x1f; uVar6 = (*(uint *)(gen_frame + 0x24)), iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pcVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        pcVar8 = pcVar8 + 4;
      }
    }
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    if (REFG(char, 0x15d7798) == '\0') goto LAB_010552ac;
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    F_00cca3f0(&REFG(char, 0x15d7798),((char *)(gen_frame + 0x2c)),(uint)*(ushort *)(param_2 + 6));
  }
  uVar4 = (*(uint *)(gen_frame + 0x30));
  bVar1 = (byte)((*(uint *)(gen_frame + 0x30)) >> 0x10);
  if (((*(uint *)(gen_frame + 0x30)) >> 0x10 & 4) == 0) {
    if (((*(uint *)(gen_frame + 0x30)) & 0x80000) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = bVar1 | 2;
      iVar3 = *(int *)(uVar6 + 0x10) * 1000;
      (*(int *)(gen_frame + 0x34)) = iVar3;
      iVar3 = iVar3 + 999;
      goto LAB_0105530a;
    }
  }
  else {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = bVar1 | 2;
    iVar3 = *(int *)(uVar6 + 0x10) * 1000 + (uint)*(ushort *)(param_2 + 0xc);
    (*(int *)(gen_frame + 0x34)) = iVar3;
LAB_0105530a: ;
    (*(uint *)(gen_frame + 0x30)) = uVar4 | 0x20000;
    (*(int *)(gen_frame + 0x38)) = iVar3;
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x2b)) = 0;
  if (((*(undefined2 *)((char *)((char *)(gen_frame + 0x2c)) + 2)) != 0) && (((char *)(gen_frame + 0x2c))[0] != '\0')) {
    uVar4 = F_00cc1e50(((char *)(gen_frame + 0x2c)),param_2,(*(undefined4 *)(gen_frame + 0x20)),param_5,param_6,&(*(undefined1 *)(gen_frame + 0x2b)),0);
    (*(uint *)(gen_frame + 0x24)) = uVar4;
    if ((uVar4 != 0) && (uVar4 - 1 < 5)) {
      if (uVar4 == 1) {
        pcVar8 = ((char *)(gen_frame + 0x3c));
      }
      else {
        pcVar8 = ((char *)(gen_frame + 0x3c)) + (uVar4 * 3 + -6) * 8 + 0x18;
        if (pcVar8 == (char *)0x0) goto LAB_01055390;
      }
      iVar3 = 0;
      do {
        if (pcVar8[iVar3] == '\a') goto LAB_010554a1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 1);
    }
  }
LAB_01055390: ;
  bVar1 = F_00cbf6a0(param_2);
  if ((bVar1 != 0) &&
     (piVar5 = (int *)F_00cc5fc0(uVar6,param_2,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))),
     piVar5 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar5 + 0x198))(piVar5,(*(undefined4 *)(gen_frame + 0x20)));
    ((code *)*(gen_code32 *)(*piVar5 + 0x9c))(piVar5,param_5,param_6);
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xec))(piVar5);
    if ((uVar6 == 2) || (uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xec))(piVar5), uVar6 == 0xc)) {
      *(undefined1 *)(piVar5 + 0x106) = (*(undefined1 *)(gen_frame + 0x2b));
    }
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xa4))(piVar5);
    piVar7 = (int *)F_00cbf660(uVar6);
    if (piVar7 != (int *)0x0) {
      uVar9 = *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + 4)));
      iVar3 = *piVar7;
      uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xd0))(piVar5);
      uVar6 = F_00cbbd50(((byte *)(gen_frame + 0x0)),uVar6,uVar9);
      ((code *)*(gen_code32 *)(iVar3 + 8))(piVar7,uVar6);
      F_00cbbdb0(((byte *)(gen_frame + 0x0)));
    }
    F_00ce9cd0(((char *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x24)),piVar5);
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xd0))(piVar5);
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return uVar6;
  }
LAB_010554a1: ;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_010554c0 */
uint F_010554c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x10554c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[11];
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
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  uint uVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  uint3 uVar8;
  int iVar7;
  code * pcVar9;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30));
  uVar5 = (*(uint *)&gen_args[3]);
  (*(uint *)(gen_frame + 0x50)) = (*(uint *)&gen_args[2]);
  (*(ulonglong *)(gen_frame + 0x18)) = F_00427d90();
  uVar2 = (*(uint *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x34)) = (*(uint *)&gen_args[5]);
  (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x50));
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x80001;
  (*(uint *)(gen_frame + 0x30)) = (*(uint *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)&gen_args[8]);
  (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)&gen_args[9]);
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x38);
  (*(uint *)(gen_frame + 0x58)) = (*(uint *)&gen_args[5]) & 1;
  if (((*(uint *)&gen_args[5]) & 1) == 0) {
    piVar4 = (int *)F_00cc6e60(uVar2);
  }
  else {
    piVar4 = (int *)F_00cc6e00((*(uint *)&gen_args[2]));
  }
  if (piVar4 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
    if (uVar5 == 3) {
LAB_0105556b: ;
      piVar4 = (int *)F_00cc5fc0(piVar4,0,(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[10]),0);
      if (piVar4 != (int *)0x0) {
        uVar13 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
        uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xd0))(piVar4);
        F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]),uVar5,uVar13);
        goto LAB_01055815;
      }
    }
    else if ((*(byte *)(piVar4 + 0x12) & 8) == 0) {
LAB_01055633: ;
      F_00ce11f0(piVar4);
      if ((*(uint *)(gen_frame + 0x58)) == 0) {
        pcVar9 = *(gen_code32 *)(*piVar4 + 0x28);
        uVar5 = (*(uint *)&gen_args[4]);
      }
      else {
        pcVar9 = *(gen_code32 *)(*piVar4 + 0xc);
        uVar5 = (*(uint *)&gen_args[3]);
      }
      uVar5 = (*pcVar9)(piVar4,uVar5);
      (*(uint *)(gen_frame + 0x54)) = uVar5;
      if (uVar5 != 0) {
        if ((*(uint *)(gen_frame + 0x58)) == 0) {
          pcVar9 = *(gen_code32 *)(*piVar4 + 0x2c);
          uVar5 = (*(uint *)&gen_args[4]);
        }
        else {
          pcVar9 = *(gen_code32 *)(*piVar4 + 0x18);
          uVar5 = (*(uint *)&gen_args[3]);
        }
        uVar5 = (*pcVar9)(piVar4,uVar5);
        (*(uint *)(gen_frame + 0x50)) = uVar5;
        if (uVar5 != 0) {
          F_00d2de20(((undefined1 *)(gen_frame + 0x48)),0);
          (*(uint *)(gen_frame + 0x50)) = (uint)*(byte *)((*(uint *)(gen_frame + 0x50)) + 0xd);
          uVar5 = F_00cbb9f0(((undefined1 *)(gen_frame + 0x48)));
          if (uVar5 != (*(uint *)(gen_frame + 0x50))) {
            F_00cbba10(((undefined1 *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x50)));
          }
          F_00cbb890(((undefined1 *)(gen_frame + 0x48)));
        }
        bVar3 = F_00cbf7b0((uint)*(byte *)((*(uint *)(gen_frame + 0x54)) + 1));
        if ((bVar3 == 0) || (((*(uint *)&gen_args[5]) & 0x10) != 0)) {
          if (((*(byte *)(piVar4 + 0x12) & 8) != 0) || (((*(uint *)&gen_args[5]) & 0x10) != 0)) {
            if ((*(uint *)(gen_frame + 0x58)) == 0) {
              pcVar9 = *(gen_code32 *)(*piVar4 + 0x2c);
              uVar5 = (*(uint *)&gen_args[4]);
            }
            else {
              pcVar9 = *(gen_code32 *)(*piVar4 + 0x18);
              uVar5 = (*(uint *)&gen_args[3]);
            }
            uVar5 = (*pcVar9)(piVar4,uVar5);
            fVar12 = (float10)*(float *)(uVar5 + 0x54);
            fVar1 = (float10)0;
            bVar10 = GEN_ISNAN(fVar1) || GEN_ISNAN(fVar12);
            bVar11 = bVar10 || fVar1 == fVar12;
            uVar8 = (uint3)(CONCAT22((short)(uVar5 >> 0x10),
                                     (ushort)!(fVar12 <= fVar1) << 8 | (ushort)bVar10 << 10 |
                                     (ushort)bVar11 << 0xe) >> 8);
            if (bVar10 == bVar11) {
              iVar7 = CONCAT31(uVar8,1);
            }
            else {
              iVar7 = (uint)uVar8 << 8;
            }
            (*(uint *)&gen_args[4]) = F_01055200((*(undefined * PTR32 *)&gen_args[0]),piVar4,(*(uint *)(gen_frame + 0x54)),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),
                                   iVar7);
            F_00ce1230(piVar4);
            F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[4]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
            goto LAB_01055815;
          }
          if ((*(uint *)(gen_frame + 0x58)) == 0) {
            F_00cc6ea0((*(uint *)&gen_args[4]),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
          }
          (*(uint *)&gen_args[4]) = F_01054000((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]),(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]));
        }
        else {
          if ((*(uint *)(gen_frame + 0x58)) == 0) {
            F_00cc6ea0((*(uint *)&gen_args[4]),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
          }
          (*(uint *)&gen_args[4]) = F_01053fc0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[2]),(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]));
        }
        F_00ce1230(piVar4);
        F_00cbbd50(((undefined1 *)(gen_frame + 0x40)),(*(uint *)&gen_args[4]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
        F_00cbc4e0(((undefined1 *)(gen_frame + 0x40)),(*(undefined4 *)&gen_args[7]));
        F_00cbbd90((*(undefined * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x40)));
        F_00cbbdb0(((undefined1 *)(gen_frame + 0x40)));
        goto LAB_01055815;
      }
      F_00ce1230(piVar4);
    }
    else if ((*(byte *)(piVar4 + 0x12) & 0x20) == 0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
      if ((char)uVar5 != '\0') {
        uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x88))(piVar4);
        if ((char)uVar5 == '\0') goto LAB_0105556b;
        goto LAB_01055633;
      }
    }
    else {
      bVar3 = F_00cc5160(piVar4);
      if (bVar3 != 0) {
        piVar6 = (int *)F_00cc5fc0(piVar4,0,(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[10]),0);
        if (piVar6 != (int *)0x0) {
          piVar4[0x30] = (int)piVar6;
          uVar13 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xd0))(piVar6);
          F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]),uVar5,uVar13);
          goto LAB_01055815;
        }
      }
    }
  }
  F_00cbbd70((*(undefined * PTR32 *)&gen_args[1]));
LAB_01055815: ;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30));
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf12 */
uint F_01055830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1055830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_010554c0(this,param_1,0,0,param_2,2,param_4,param_3,param_5,param_6,param_7);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf15 */
uint F_01055870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1055870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_010554c0(this,param_1,param_2,param_3,0,0x11,0,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf14 */
uint F_010558b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x10558b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_010554c0(this,param_1,0,0,param_2,0x12,0,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_010558e0 */
uint F_010558e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x10558e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf13 */
uint F_01055980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  F_010554c0(this,param_1,param_2,param_3,0,1,param_5,param_4,param_6,param_7,param_8);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf1 */
unsigned int F_010559c0(unsigned int gen_a0)
{
  GEN_ENTER(0x10559c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(int *)(this + 4) == 0) {
    piVar1 = (int *)F_00d2cce0();
    if (piVar1 == (int *)0x0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10558e0));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("pLayout","","SoundDriver.cpp",0xb1,
                      "SQEX::CDev::Engine::Sd::Driver::SoundDriver::CreateDefaultLayoutPage");
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x9c))(piVar1,0);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1,uVar2)));
    *(undefined * PTR32 *)(this + 4) = this_00;
    F_00d05170(this_00,1,1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ISoundDriver::vf0 */
uint F_01055a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b46cc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01055af0 */
uint F_01055af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc0) = param_2;
  return param_2;
}

/* ref: FUN_01055b00 */
byte F_01055b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x418) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_01055b40 */
uint F_01055b40(unsigned int gen_a0)
{
  GEN_ENTER(0x1055b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_01055b50 */
uint F_01055b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055b50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_01055b60 */
unsigned int F_01055b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x1055b60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined4 *)((int)this + 0x28) = param_6;
  *(undefined4 *)((int)this + 0x2c) = param_7;
  *(undefined4 *)((int)this + 0x30) = param_8;
  *(undefined4 *)((int)this + 0x34) = param_9;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf66 */
uint F_01055bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf67 */
uint F_01055bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x1055bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf39 */
byte F_01055bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf50 */
byte F_01055be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf51 */
byte F_01055bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x1055bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2d);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf52 */
byte F_01055c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf53 */
byte F_01055c10(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2e);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf58 */
byte F_01055c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf59 */
byte F_01055c30(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2f);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf71 */
uint F_01055c40(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf72 */
uint F_01055c50(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf73 */
uint F_01055c60(unsigned int gen_a0)
{
  GEN_ENTER(0x1055c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf0 */
uint F_01055c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_01055030(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01055ca0 */
uint F_01055ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_01055cb0 */
uint F_01055cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00cbe360(in_ecx,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  return (uint)in_ecx;
}

/* ref: FUN_01055cd0 */
uint F_01055cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x1055cd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00cbe380(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  return (uint)in_ecx;
}

/* ref: FUN_01055cf0 */
uint F_01055cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  F_00cbe380(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  in_ecx[1] = *(undefined4 *)(param_2 + 4);
  return (uint)in_ecx;
}

/* ref: FUN_01055d30 */
uint F_01055d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d30u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_01055d50 */
byte F_01055d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00cbe3e0(param_1);
  uVar2 = F_00cbe3e0(param_2);
  return uVar1 == uVar2;
}

/* ref: FUN_01055d70 */
byte F_01055d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00cbe3e0(param_1);
  uVar2 = F_00cbe3e0(param_2);
  return uVar1 != uVar2;
}

/* ref: FUN_01055d90 */
uint F_01055d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x10) = param_1;
  }
  return uVar1;
}

/* ref: FUN_01055dd0 */
uint F_01055dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e00 */
uint F_01055e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e30 */
uint F_01055e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e60 */
uint F_01055e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e90 */
uint F_01055e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055ec0 */
uint F_01055ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  while (uVar1 != 0) {
    uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_01055ef0 */
uint F_01055ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f20 */
uint F_01055f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f50 */
uint F_01055f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f80 */
uint F_01055f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055fb0 */
uint F_01055fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBankController::vf0 */
uint F_01055fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  F_00cbe3b0(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01056010 */
unsigned int F_01056010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056010u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_01056030 */
unsigned int F_01056030(unsigned int gen_a0)
{
  GEN_ENTER(0x1056030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4bd0));
  iVar2 = 0;
  do {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x28))));
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x28)))) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x78);
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406810(*(int *)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    F_00406810(*(int *)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4ba4));
  return 0;
}

/* ref: FUN_010560d0 */
uint F_010560d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x10560d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  
  iVar1 = (int)param_3;
  if (2 < iVar1) {
    iVar1 = 2;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 4) = **(undefined4 * PTR32 *)(param_1 + 0x2c);
    return param_2;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_2 + 4) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 4)));
    return param_2;
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_2 + 4) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 8)));
    return param_2;
  }
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf1 */
uint F_01056130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_01056140 */
uint F_01056140(unsigned int gen_a0)
{
  GEN_ENTER(0x1056140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf2 */
uint F_01056150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_01056160 */
uint F_01056160(unsigned int gen_a0)
{
  GEN_ENTER(0x1056160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf5 */
uint F_01056170(unsigned int gen_a0)
{
  GEN_ENTER(0x1056170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x34);
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf6 */
byte F_01056260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(undefined4 *)(this + 0x38) = param_1;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 0x30))))(*(int * PTR32 *)(this + 0x20),((undefined1 *)(gen_frame + 0x8)));
  if ((char)uVar2 != '\0') {
    iVar3 = 0;
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) + 0x34))) != -1) {
        bVar1 = F_01057480(*((int *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))),(uint)((undefined1 *)(gen_frame + 0x8)));
        if (bVar1 != 0) {
          F_010570f0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + iVar3))));
        }
        if (*((char *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) + 0x40))) != '\0') {
          F_01056d30(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))));
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x78);
  }
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_01056300 */
uint F_01056300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  piVar3 = *(int * PTR32 *)((int)this + 0x28);
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*(int *)(*piVar3 + 0x34) == param_1) break;
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 1;
    uVar2 = 0xffffffff;
  } while ((int)uVar1 < 0x1e);
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return uVar2;
}

/* ref: FUN_01056350 */
unsigned int F_01056350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1056350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar1 = 0;
  do {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x28))));
    if (*(int *)((int)this_00 + 0x34) != -1) {
      F_010569e0(this_00,param_1,param_2);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x78);
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf9 */
byte F_010563b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10563b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte extraout_AL = 0;
  byte bVar1;
  byte extraout_AL_00 = 0;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *(int * PTR32 *)(this + 0x28);
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if (*(int *)(*piVar3 + 0x34) == param_1) goto LAB_010563f7;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x1e);
  iVar4 = -1;
LAB_010563f7: ;
  bVar1 = (byte)iVar2;
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL;
  }
  if (iVar4 != -1) {
    bVar1 = F_01056cc0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + iVar4 * 4))));
  }
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL_00;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf3 */
uint F_010564e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10564e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if (0x1e < *(int *)(this + 0x30)) {
    *(undefined4 *)(this + 0x30) = 0;
    uVar1 = F_01056300(this,0);
    if (uVar1 != 0xffffffff) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,*(undefined4 *)(this + 0x30));
    }
  }
  uVar1 = *(uint *)(this + 0x30);
  *(uint *)(this + 0x30) = uVar1 + 1;
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
  }
  return uVar1;
}

/* ref: FUN_010565e0 */
uint F_010565e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x10565e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_01056680 */
uint F_01056680(unsigned int gen_a0)
{
  GEN_ENTER(0x1056680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4bd0));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),0x1248,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10);
  *(uint *)((int)this + 0x28) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10565e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x12b4a48),&REFG(undefined, 0x12b49ff),"WhizManager.cpp",0x26,
                    "SQEX::CDev::Engine::Sd::Whiz::WhizManager::WhizManager");
  }
  else {
    iVar3 = 0;
    do {
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                  (REFG(int * PTR32, 0x15d778c),0x9c,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10)));
      if (this_00 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_01056b90(this_00,this);
      }
      *((uint *)GEN_TOP((iVar3 + *(int *)((int)this + 0x28)))) = uVar2;
      F_01056cc0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x28)))));
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x78);
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),0xc,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10);
  *(uint *)((int)this + 0x2c) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10565e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x12b4b24),&REFG(undefined, 0x12b4a37),"WhizManager.cpp",0x2e,
                    "SQEX::CDev::Engine::Sd::Whiz::WhizManager::WhizManager");
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  *puVar1 = 0x99;
  puVar1[1] = 0x9a;
  puVar1[2] = 0x9b;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::IWhizManager::vf0 */
uint F_01056840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4ba4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf4 */
uint F_010568a0(void)
{
  GEN_ENTER(0x10568a0u, 0u, 0u, 0u, 0u);
  return 0x1e;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf0 */
uint F_010568b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10568b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_01056030(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_010568e0 */
unsigned int F_010568e0(float gen_a0)
{
  GEN_ENTER(0x10568e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_01056940 */
unsigned int F_01056940(unsigned int gen_a0)
{
  GEN_ENTER(0x1056940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  F_00cbbdb0((int)this + 0x48);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_01056960 */
byte F_01056960(unsigned int gen_a0)
{
  GEN_ENTER(0x1056960u, gen_a0, 0u, 0u, 0u);
  float * in_esi = (float *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = F_00c51673((double)*in_esi);
  if (iVar1 == 0) {
    iVar1 = F_00c51673((double)in_esi[1]);
    if (iVar1 == 0) {
      iVar1 = F_00c51673((double)in_esi[2]);
      if (iVar1 == 0) {
        iVar1 = F_00c51673((double)in_esi[3]);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_010569e0 */
uint F_010569e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10569e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  HGDIOBJ h;
  HGDIOBJ pvVar5;
  undefined * h_00;
  HGDIOBJ pvVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  ulong color;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = param_2;
  h = gen_imp_GetStockObject(5);
  pvVar5 = gen_imp_SelectObject(param_2,h);
  if (*(char *)((int)this + 0x40) == '\0') {
    color = 0x900000;
  }
  else {
    color = 0x90;
  }
  h_00 = gen_imp_CreatePen(0,1,color);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = h_00;
  pvVar6 = gen_imp_SelectObject(param_2,h_00);
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x28)));
  iVar10 = (*(tagRECT *)(gen_frame + 0x28)).bottom / 2;
  iVar9 = (*(tagRECT *)(gen_frame + 0x28)).right / 2;
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar9 + -300,iVar10 + -300,iVar9 + 300,iVar10 + 300);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar9 + -0x96,iVar10 + -0x96,iVar9 + 0x96,iVar10 + 0x96);
  piVar7 = (int *)F_01056160(*(undefined4 *)((int)this + 0x44));
  ((code *)*(gen_code32 *)(*piVar7 + 0x30))(piVar7,((byte *)(gen_frame + 0x4)) + 0x14);
  fVar1 = *(float *)((int)this + 0x20);
  fVar2 = *(float *)((int)this + 0x28);
  uVar3 = *(undefined4 *)((int)this + 0x2c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = (undefined4)gen_fl2bits(fVar2);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = *(undefined4 *)((int)this + 0x24);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = uVar3;
  fVar11 = (float10)fVar2 - ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = (undefined4)gen_fl2bits((float)fVar11);
  iVar9 = (int)((float10)fVar1 - ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)))))) * 5 + iVar9;
  iVar10 = (int)fVar11 * 5 + iVar10;
  iVar4 = (int)*(float *)((int)this + 0x84);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar9 + iVar4 * -5,iVar10 + iVar4 * -5,iVar4 * 5 + iVar9,
          iVar4 * 5 + iVar10);
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16));
  iVar4 = (int)*(float *)((int)this + 0x80);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar9 + iVar4 * -5,iVar10 + iVar4 * -5,iVar4 * 5 + iVar9,
          iVar4 * 5 + iVar10);
  gen_imp_SelectObject(uVar3,pvVar6);
  gen_imp_SelectObject(uVar3,pvVar5);
  gen_imp_DeleteObject((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)));
  uVar8 = gen_imp_DeleteObject(h);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar8;
}

/* ref: FUN_01056b90 */
uint F_01056b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = param_1;
  F_00cbbd70((int)this + 0x48);
  fVar1 = (float10)0;
  *(float *)((int)this + 0x80) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(float *)((int)this + 0x88) = (float)fVar1;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(float *)((int)this + 0x98) = (float)(float10)1;
  uVar2 = F_00cbbd70(((undefined1 *)(gen_frame + 0xc)));
  F_00cbbdc0((undefined *)((int)this + 0x48),uVar2);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
  fVar1 = (float10)0;
  *(float *)((int)this + 0x58) = (float)fVar1;
  *(float *)((int)this + 0x5c) = (float)fVar1;
  *(float *)((int)this + 0x60) = (float)fVar1;
  *(float *)((int)this + 100) = (float)fVar1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(float *)((int)this + 0x68) = (float)fVar1;
  *(float *)((int)this + 0x6c) = (float)fVar1;
  *(float *)((int)this + 0x70) = (float)fVar1;
  *(float *)((int)this + 0x74) = (float)fVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return (uint)this;
}

/* ref: FUN_01056cc0 */
byte F_01056cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x1056cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  fVar1 = (float10)0;
  *(float *)((int)this + 0x80) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(float *)((int)this + 0x88) = (float)(float10)1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(float *)((int)this + 0x98) = (float)(float10)1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return 1;
}

/* ref: FUN_01056d30 */
byte F_01056d30(unsigned int gen_a0)
{
  GEN_ENTER(0x1056d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  undefined4 in_ecx;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x38)) = lpCriticalSection;
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(char *)((int)this + 0x40) != '\0') {
    bVar2 = F_00cbc040((undefined *)((int)this + 0x48));
    if (bVar2 == 0) {
      *(undefined1 *)((int)this + 0x40) = 0;
    }
    else {
      fVar8 = (float10)0;
      in_ecx = *(undefined4 *)((int)this + 0x44);
      (*(float *)(gen_frame + 0x5c)) = (float)fVar8;
      (*(undefined4 *)(gen_frame + 0x68)) = 0;
      (*(float *)(gen_frame + 0x60)) = (float)fVar8;
      (*(float *)(gen_frame + 0x64)) = (float)fVar8;
      piVar3 = (int *)F_01056160(in_ecx);
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3,&(*(float *)(gen_frame + 0x4c)));
      if ((char)uVar4 != '\0') {
        bVar2 = F_01056960(&(*(float *)(gen_frame + 0x4c)));
        if (bVar2 != 0) {
          fVar8 = (float10)0;
          (*(undefined4 *)(gen_frame + 0x68)) = 0;
          (*(float *)(gen_frame + 0x60)) = (float)fVar8;
          (*(float *)(gen_frame + 0x64)) = (float)fVar8;
          fVar9 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) - (float10)(*(float *)(gen_frame + 0x4c)))));
          (*(float *)(gen_frame + 0x44)) = fVar9;
          (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x24) - (float10)(*(float *)(gen_frame + 0x50)))));
          fVar10 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x28) - (float10)(*(float *)(gen_frame + 0x54)))));
          (*(float *)(gen_frame + 0x40)) = fVar10;
          fVar6 = (float10)fVar9;
          fVar7 = (float10)fVar10;
          if (((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar6)) || fVar8 == fVar6)) ||
             ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) == ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7))) {
            fVar8 = F_00c4d1fa(GEN_TOD(-fVar7));
            (*(float *)(gen_frame + 0x3c)) = (float)fVar8;
            fVar7 = (float10)(*(float *)(gen_frame + 0x40));
            fVar6 = (float10)(*(float *)(gen_frame + 0x44));
          }
          else {
            (*(float *)(gen_frame + 0x3c)) = (float)fVar8;
          }
          fVar9 = (float)(fVar6 * fVar6 + fVar7 * fVar7);
          (*(float *)(gen_frame + 0x44)) = fVar9;
          fVar9 = ((float)GEN_TOF(SQRT((float10)fVar9)));
          (*(float *)(gen_frame + 0x44)) = fVar9;
          (*(float *)(gen_frame + 0x40)) = fVar9;
          fVar8 = (float10)0;
          bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x48)));
          fVar7 = (float10)fVar9;
          if ((bVar5 == (bVar5 || fVar8 == (float10)(*(float *)(gen_frame + 0x48)))) ||
             ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) == ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7))) {
            fVar8 = F_00c4d1fa(fVar7);
            (*(float *)(gen_frame + 0x48)) = (float)fVar8;
            fVar8 = (float10)(float)fVar8;
          }
          (*(float *)(gen_frame + 0x44)) = (float)fVar8;
          (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)((int)this + 0x48);
          (*(float *)(gen_frame + 0x5c)) = *(float *)((int)this + 0x88);
          uVar4 = F_00cbbff0((undefined *)((int)this + 0x48));
          piVar3 = (int *)F_00d2cce0();
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xa0))(piVar3,0)));
          if ((this_00 != (undefined *)0x0) && (uVar4 = F_00d05480(this_00,uVar4), uVar4 != 0)) {
            F_00cbbd90(&(*(float *)(gen_frame + 0x20)),uVar4 + 8);
            fVar9 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x44)) * (float10)*(double *)&REFG(undefined, 0x1092098)) /
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x48)) = fVar9;
            fVar10 = ((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1092098) * (float10)(*(float *)(gen_frame + 0x3c))) /
                            (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x48)) = fVar10;
            F_00cbc9e0(&(*(float *)(gen_frame + 0x20)),fVar10,fVar9,&(*(float *)(gen_frame + 0x5c)));
            F_00cbbdb0(&(*(float *)(gen_frame + 0x20)));
          }
          F_00d03460((int)this + 0x58,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4c)));
          F_00d03460((int)this + 0x68,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x4c)));
          fVar9 = (*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x4));
          fVar10 = (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x8));
          fVar11 = SQRT((fVar10 + (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x0))) + fVar9);
          (*(float *)(gen_frame + 0x0)) = fVar11;
          (*(float *)(gen_frame + 0x4)) = (fVar10 + fVar9) + fVar9;
          (*(float *)(gen_frame + 0x8)) = (fVar10 + fVar10) + fVar9;
          (*(float *)(gen_frame + 0xc)) = (fVar10 + (*(float *)(gen_frame + 0xc)) * (*(float *)(gen_frame + 0xc))) + fVar9;
          fVar9 = (*(float *)(gen_frame + 0x24)) * (*(float *)(gen_frame + 0x24));
          fVar10 = (*(float *)(gen_frame + 0x28)) * (*(float *)(gen_frame + 0x28));
          fVar12 = SQRT((fVar10 + (*(float *)(gen_frame + 0x20)) * (*(float *)(gen_frame + 0x20))) + fVar9);
          (*(float *)(gen_frame + 0x20)) = fVar12;
          (*(float *)(gen_frame + 0x24)) = (fVar10 + fVar9) + fVar9;
          (*(float *)(gen_frame + 0x28)) = (fVar10 + fVar10) + fVar9;
          (*(float *)(gen_frame + 0x2c)) = (fVar10 + (*(float *)(gen_frame + 0x2c)) * (*(float *)(gen_frame + 0x2c))) + fVar9;
          fVar9 = ((float)GEN_TOF((((float10)fVar11 - (float10)fVar12) / (float10)*(double *)&REFG(undefined, 0x10947f0))));
          (*(float *)(gen_frame + 0x48)) = fVar9;
          fVar9 = ((float)GEN_TOF((((float10)fVar9 + (float10)*(double *)&REFG(undefined, 0x1133e48)) /
                         (float10)*(double *)&REFG(undefined, 0x1133e48))));
          (*(float *)(gen_frame + 0x48)) = fVar9;
          fVar9 = ((float)GEN_TOF((((float10)1 - (float10)*(float *)((int)this + 0x8c)) +
                         (float10)fVar9 * (float10)*(float *)((int)this + 0x8c))));
          (*(float *)(gen_frame + 0x40)) = fVar9;
          fVar7 = (float10)0;
          fVar8 = (float10)fVar9;
          if (fVar8 <= fVar7 && ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar8)) && fVar7 != fVar8)) {
            (*(float *)(gen_frame + 0x40)) = (float)fVar7;
          }
          (*(float *)(gen_frame + 0x48)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
          F_00cbdeb0((*(undefined * PTR32 *)(gen_frame + 0x1c)),(*(float *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x48)));
          if (*(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x38))) + (1) * 24))) != '\0') {
            gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x38)));
          }
          F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
          return 1;
        }
        cVar1 = *(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x38))) + (1) * 24)));
        lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x38));
        goto joined_r0x01056d81;
      }
    }
  }
  cVar1 = *(char *)((int)this + 0x1c);
joined_r0x01056d81: ;
  if (cVar1 != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return 0;
}

/* ref: FUN_01057050 */
uint F_01057050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1057050u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[3];
  fVar2 = param_1[3];
  fVar3 = param_2[1] * param_1[1];
  fVar4 = param_2[2] * param_1[2];
  *param_3 = (fVar4 + *param_2 * *param_1) + fVar3;
  param_3[1] = (fVar4 + fVar3) + fVar3;
  param_3[2] = (fVar4 + fVar4) + fVar3;
  param_3[3] = (fVar4 + fVar1 * fVar2) + fVar3;
  return (uint)param_3;
}

/* ref: FUN_010570f0 */
byte F_010570f0(unsigned int gen_a0)
{
  GEN_ENTER(0x10570f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(char *)((int)this + 0x40) != '\0') {
    if (*(char *)((int)this + 0x1c) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  piVar2 = (int *)F_01056140(*(undefined4 *)((int)this + 0x44));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  bVar1 = F_00cbc040((undefined *)((int)this + 0x48));
  if (bVar1 == 0) {
    uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x34))
                      ((*(int * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0x90),
                       *(undefined4 *)((int)this + 0x94),(int)this + 0x20,0,0,0,1);
    F_00cbbdc0((undefined *)((int)this + 0x48),uVar3);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)));
    F_00cbd610((undefined *)((int)this + 0x48),((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x14)),(int)this + 0x88,(int)this + 0x8c);
    F_00cbc630((undefined *)((int)this + 0x48),1);
    *(undefined1 *)((int)this + 0x40) = 1;
    F_01056d30(this);
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    F_00cbdf90((int)this + 0x48,(uint)&(*(int * PTR32 *)(gen_frame + 0x18)),0);
    if (*(char *)((int)this + 0x1c) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_01057200 */
uint F_01057200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1057200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_010572c0 */
float F_010572c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10572c0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *param_1 - *param_2;
  fVar5 = param_1[1] - param_2[1];
  fVar6 = param_1[2] - param_2[2];
  fVar8 = param_1[3] - param_2[3];
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  (*(float *)(gen_frame + 0x3c)) = fVar4;
  (*(float *)(gen_frame + 0x40)) = fVar5;
  (*(float *)(gen_frame + 0x44)) = fVar6;
  (*(float *)(gen_frame + 0x48)) = fVar8;
  fVar4 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar8 = param_3[3] - param_2[3];
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = fVar5;
  (*(float *)(gen_frame + 0x18)) = fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar8;
  pfVar1 = (float *)F_00d034e0(&(*(float *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x20)) = *pfVar1;
  (*(float *)(gen_frame + 0x24)) = pfVar1[1];
  fVar4 = pfVar1[3];
  (*(float *)(gen_frame + 0x28)) = pfVar1[2];
  (*(float *)(gen_frame + 0x2c)) = fVar4;
  fVar5 = pfVar1[1] * (*(float *)(gen_frame + 0x40));
  fVar6 = pfVar1[2] * (*(float *)(gen_frame + 0x44));
  fVar9 = (fVar6 + *pfVar1 * (*(float *)(gen_frame + 0x3c))) + fVar5;
  fVar8 = (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40));
  fVar7 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x10)) = fVar9;
  (*(float *)(gen_frame + 0x14)) = (fVar6 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x18)) = (fVar6 + fVar6) + fVar5;
  (*(float *)(gen_frame + 0x1c)) = (fVar6 + fVar4 * (*(float *)(gen_frame + 0x48))) + fVar5;
  fVar2 = (float10)fVar9;
  fVar4 = SQRT((fVar7 + (*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c))) + fVar8);
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = (fVar7 + fVar8) + fVar8;
  (*(float *)(gen_frame + 0x28)) = (fVar7 + fVar7) + fVar8;
  (*(float *)(gen_frame + 0x2c)) = (fVar7 + (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48))) + fVar8;
  fVar3 = (float10)fVar4;
  fVar4 = (float)(fVar2 * fVar2 - fVar3 * fVar3);
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar4 = ((float)GEN_TOF(ABS((float10)fVar4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  return fVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizObject::vf0 */
uint F_01057720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1057720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  F_00cbbdb0(this + 0x48);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_010577a0 */
unsigned int F_010577a0(float gen_a0)
{
  GEN_ENTER(0x10577a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_010577b0 */
byte F_010577b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x10577b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX = 0;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(in_ecx[5] - param_2[5]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(in_ecx[4] - param_2[4]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(in_ecx[6] - param_2[6]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(in_ecx[7] - param_2[7]) < param_3);
  uVar3 = gen_movmskps(&(auVar2));
  if (((byte)uVar3 & 7) != 7) {
    return 0;
  }
  fVar7 = *in_ecx * *param_2;
  fVar8 = in_ecx[1] * param_2[1];
  fVar9 = in_ecx[2] * param_2[2];
  fVar10 = in_ecx[3] * param_2[3];
  fVar5 = fVar9 + fVar7;
  fVar6 = fVar10 + fVar8;
  fVar7 = fVar7 + fVar9;
  fVar8 = fVar8 + fVar10;
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] -
                             gen_bits2f((uint)gen_fl2bits(fVar5 + fVar6) & *(uint *)&REFG(undefined, 0x1134c84) ^
                                        (uint)gen_fl2bits(param_2[1]))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - gen_bits2f((uint)gen_fl2bits(fVar6 + fVar5) &
                                                  *(uint *)&REFG(undefined, 0x1134c80) ^
                                                  (uint)gen_fl2bits(*param_2))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] -
                             gen_bits2f((uint)gen_fl2bits(fVar8 + fVar7) & *(uint *)&REFG(undefined, 0x1134c88) ^
                                        (uint)gen_fl2bits(param_2[2]))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)(ABS(in_ecx[3] -
                   gen_bits2f((uint)gen_fl2bits(fVar7 + fVar8) & *(uint *)&REFG(undefined, 0x1134c8c) ^
                              (uint)gen_fl2bits(param_2[3]))) < param_3);
  iVar4 = gen_movmskps(&(auVar1));
  return iVar4 == 0xf;
}

/* ref: FUN_01057830 */
unsigned int F_01057830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1057830u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
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
  
  fVar3 = gen_bits2f(*param_2 ^ *(uint *)&REFG(undefined, 0x10ab9b0));
  fVar4 = gen_bits2f(param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4));
  fVar5 = gen_bits2f(param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8));
  fVar6 = gen_bits2f(param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc));
  *in_ecx = fVar3;
  in_ecx[1] = fVar4;
  in_ecx[2] = fVar5;
  in_ecx[3] = fVar6;
  fVar9 = gen_bits2f(param_2[4]);
  fVar10 = gen_bits2f(param_2[5]);
  fVar1 = gen_bits2f(param_2[6]);
  fVar2 = gen_bits2f(param_2[7]);
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar1 * fVar4 - fVar10 * fVar5) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar9 * fVar5 - fVar1 * fVar3) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar10 * fVar3 - fVar9 * fVar4) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  in_ecx[4] = fVar7;
  in_ecx[5] = fVar8;
  in_ecx[6] = fVar9;
  in_ecx[7] = fVar10;
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
  fVar9 = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
  fVar10 = gen_bits2f((uint)gen_fl2bits(fVar10) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
  in_ecx[4] = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
  in_ecx[5] = fVar8;
  in_ecx[6] = fVar9;
  in_ecx[7] = fVar10;
  return 0;
}

/* ref: FUN_010578d0 */
unsigned int F_010578d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10578d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
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
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar13 = param_1[3];
  fVar12 = *(float *)(param_2 + 2);
  fVar4 = *(float *)((int)param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 3);
  fVar6 = *(float *)((int)param_2 + 0x1c);
  fVar7 = fVar12 * fVar1;
  fVar8 = fVar4 * fVar2;
  fVar9 = fVar5 * fVar3;
  fVar10 = (((fVar8 + fVar7) + fVar9) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13) * fVar12)
           + (fVar5 * fVar2 - fVar4 * fVar3) * fVar13;
  fVar11 = (((fVar8 + fVar7) + fVar9) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13) * fVar4)
           + (fVar12 * fVar3 - fVar5 * fVar1) * fVar13;
  fVar12 = (((fVar8 + fVar7) + fVar9) * fVar3 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13) * fVar5)
           + (fVar4 * fVar1 - fVar12 * fVar2) * fVar13;
  fVar13 = (((fVar8 + fVar7) + fVar9) * fVar13 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13) * fVar6)
           + (fVar6 * fVar13 - fVar6 * fVar13) * fVar13;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  *(float *)((int)this + 0x10) = (fVar10 + fVar10) + param_1[4];
  *(float *)((int)this + 0x14) = (fVar11 + fVar11) + fVar1;
  *(float *)((int)this + 0x18) = (fVar12 + fVar12) + fVar2;
  *(float *)((int)this + 0x1c) = (fVar13 + fVar13) + fVar3;
  fVar1 = *(float *)((int)param_2 + 0xc);
  local_20 = gen_bits2f((uint)*(undefined8 *)param_1);
  fStack_1c = gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_1) >> 0x20));
  fStack_18 = gen_bits2f((uint)*(undefined8 *)(param_1 + 2));
  local_30 = gen_bits2f((uint)*param_2);
  fStack_2c = gen_bits2f((uint)((ulonglong)*param_2 >> 0x20));
  fStack_28 = gen_bits2f((uint)param_2[1]);
  fVar2 = param_1[3];
  *(float *)this =
       ((fStack_1c * fStack_28 - fStack_18 * fStack_2c) + local_30 * fVar2) + local_20 * fVar1;
  *(float *)((int)this + 4) =
       ((fStack_18 * local_30 - local_20 * fStack_28) + fStack_2c * fVar2) + fStack_1c * fVar1;
  *(float *)((int)this + 8) =
       ((local_20 * fStack_2c - fStack_1c * local_30) + fStack_28 * fVar2) + fStack_18 * fVar1;
  *(float *)((int)this + 0xc) =
       fVar1 * fVar2 - ((fStack_1c * fStack_2c + local_20 * local_30) + fStack_18 * fStack_28);
  return 0;
}

/* ref: FUN_01059190 */
uint F_01059190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  return (uint)param_1;
}

/* ref: FUN_010591b0 */
uint F_010591b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10591b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  fVar2 = param_2[2] * param_1[2] + *param_2 * *param_1;
  fVar3 = param_2[3] * param_1[3] + param_2[1] * param_1[1];
  fVar4 = *param_2 * *param_1 + param_2[2] * param_1[2];
  fVar5 = param_2[1] * param_1[1] + param_2[3] * param_1[3];
  uVar6 = (uint)gen_fl2bits(fVar2 + fVar3) & *(uint *)&REFG(undefined, 0x1134c84);
  uVar7 = (uint)gen_fl2bits(fVar5 + fVar4) & *(uint *)&REFG(undefined, 0x1134c88);
  uVar8 = (uint)gen_fl2bits(fVar4 + fVar5) & *(uint *)&REFG(undefined, 0x1134c8c);
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar1 = param_1[3];
  *(uint *)this =
       (uint)gen_fl2bits(fVar3 + fVar2) & *(uint *)&REFG(undefined, 0x1134c80) ^ (uint)gen_fl2bits(*param_1);
  *(uint *)((int)this + 4) = uVar6 ^ (uint)gen_fl2bits(fVar4);
  *(uint *)((int)this + 8) = uVar7 ^ (uint)gen_fl2bits(fVar5);
  *(uint *)((int)this + 0xc) = uVar8 ^ (uint)gen_fl2bits(fVar1);
  return (uint)param_1;
}

/* ref: FUN_010591f0 */
byte F_010591f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10591f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 in_EDX = 0;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(*(float *)((int)this + 0x14) - param_1[5]) < param_2[1]);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(*(float *)((int)this + 0x10) - param_1[4]) < *param_2);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(*(float *)((int)this + 0x18) - param_1[6]) < param_2[2]);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(*(float *)((int)this + 0x1c) - param_1[7]) < param_2[3]);
  uVar4 = gen_movmskps(&(auVar2));
  if (((byte)uVar4 & 7) != 7) {
    return 0;
  }
  fVar7 = *(float *)this * *param_1;
  fVar8 = *(float *)((int)this + 4) * param_1[1];
  fVar9 = *(float *)((int)this + 8) * param_1[2];
  fVar10 = *(float *)((int)this + 0xc) * param_1[3];
  fVar5 = fVar9 + fVar7;
  fVar6 = fVar10 + fVar8;
  fVar7 = fVar7 + fVar9;
  fVar8 = fVar8 + fVar10;
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*(float *)((int)this + 4) -
                             gen_bits2f((uint)gen_fl2bits(fVar5 + fVar6) & *(uint *)&REFG(undefined, 0x1134c84) ^
                                        (uint)gen_fl2bits(param_1[1]))) < param_2[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this -
                             gen_bits2f((uint)gen_fl2bits(fVar6 + fVar5) & *(uint *)&REFG(undefined, 0x1134c80) ^
                                        (uint)gen_fl2bits(*param_1))) < *param_2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*(float *)((int)this + 8) -
                             gen_bits2f((uint)gen_fl2bits(fVar8 + fVar7) & *(uint *)&REFG(undefined, 0x1134c88) ^
                                        (uint)gen_fl2bits(param_1[2]))) < param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)(ABS(*(float *)((int)this + 0xc) -
                   gen_bits2f((uint)gen_fl2bits(fVar7 + fVar8) & *(uint *)&REFG(undefined, 0x1134c8c) ^
                              (uint)gen_fl2bits(param_1[3]))) < param_2[3]);
  iVar3 = gen_movmskps(&(auVar1));
  return iVar3 == 0xf;
}

/* ref: FUN_01059630 */
uint F_01059630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_01059650 */
uint F_01059650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_1;
  if (this_00 != (undefined *)0x0) {
    F_00d919e0(this_00);
  }
  *(undefined * PTR32 *)this = this_00;
  return (uint)this;
}

/* ref: FUN_01059680 */
unsigned int F_01059680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_010596b0 */
uint F_010596b0(unsigned int gen_a0)
{
  GEN_ENTER(0x10596b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e4030) + 0x14))))(REFG(int * PTR32, 0x15e4030),*(int *)this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_010596d0 */
uint F_010596d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10596d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  F_00d919e0(param_1);
  return (uint)this;
}

/* ref: FUN_01059700 */
unsigned int F_01059700(unsigned int gen_a0)
{
  GEN_ENTER(0x1059700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_01059720 */
uint F_01059720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8),param_1);
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_01059750 */
uint F_01059750(unsigned int gen_a0)
{
  GEN_ENTER(0x1059750u, gen_a0, 0u, 0u, 0u);
  int * in_edi = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  uint uVar2;
  int iVar3;
  
  ((code *)*(gen_code32 *)(*in_edi + 0x1c))(in_edi,0x40);
  uVar2 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi,((char *)(gen_frame + 0xc)),0x40);
  if (uVar2 == 0) {
    return 0;
  }
  do {
    iVar3 = 0;
    if (0 < (int)uVar2) {
      do {
        cVar1 = ((char *)(gen_frame + 0xc))[(int)(iVar3)];
        if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
          ((code *)*(gen_code32 *)(*in_edi + 0x20))(in_edi);
          uVar2 = ((code *)*(gen_code32 *)(*in_edi + 0x14))(in_edi,iVar3);
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    ((code *)*(gen_code32 *)(*in_edi + 0x1c))(in_edi,0x40);
    uVar2 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi,((char *)(gen_frame + 0xc)),0x40);
    if (uVar2 == 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_010597e0 */
ulonglong F_010597e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10597e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  F_01059750(param_1);
  *param_2 = 0;
  (*(undefined4 *)(gen_frame + 0x104)) = 0;
  (*(undefined4 *)(gen_frame + 0x108)) = 0;
  iVar6 = 0;
  ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,0xff);
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,((char *)(gen_frame + 0x0)),0xff);
  (*(uint *)(gen_frame + 0x100)) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
  if (((char *)(gen_frame + 0x0))[0] != '+') {
    if (((char *)(gen_frame + 0x0))[0] != '-') goto LAB_0105984b;
    *param_2 = 1;
  }
  iVar6 = 1;
LAB_0105984b: ;
  uVar5 = (*(undefined4 *)(gen_frame + 0x108));
  if ((((iVar6 + 3 < (int)uVar3) && (((char *)(gen_frame + 0x0))[(int)(iVar6)] == '0')) &&
      ((((char *)(gen_frame + 0x0))[(int)(iVar6 + 1)] == 'x' || (((char *)(gen_frame + 0x0))[(int)(iVar6 + 1)] == 'X')))) &&
     ((((cVar1 = ((char *)(gen_frame + 0x0))[(int)(iVar6 + 2)], '/' < cVar1 && (cVar1 < ':')) ||
       (('`' < cVar1 && (cVar1 < 'g')))) || (('@' < cVar1 && (cVar1 < 'G')))))) {
    param_2 = (undefined1 *)0x10;
    iVar6 = iVar6 + 2;
  }
  else if ((iVar6 + 2 < (int)uVar3) &&
          (((((char *)(gen_frame + 0x0))[(int)(iVar6)] == '0' && ('/' < ((char *)(gen_frame + 0x0))[(int)(iVar6 + 1)])) &&
           (((char *)(gen_frame + 0x0))[(int)(iVar6 + 1)] < ':')))) {
    param_2 = (undefined1 *)0x8;
    iVar6 = iVar6 + 1;
  }
  else {
    param_2 = (undefined1 *)0xa;
  }
  for (; iVar6 < (int)uVar3; iVar6 = iVar6 + 1) {
    cVar1 = ((char *)(gen_frame + 0x0))[(int)(iVar6)];
    uVar7 = 0xffffffff;
    if ((cVar1 < '0') || ('9' < cVar1)) {
      if ((cVar1 < 'B') || ('F' < cVar1)) {
        if (('a' < cVar1) && (cVar1 < 'g')) {
          uVar7 = (int)cVar1 - 0x57;
        }
      }
      else {
        uVar7 = (int)cVar1 - 0x37;
      }
    }
    else {
      uVar7 = (int)cVar1 - 0x30;
    }
    if (param_2 <= uVar7) break;
    lVar2 = ZEXT48(param_2) * (longlong)CONCAT44(uVar5,(*(undefined4 *)(gen_frame + 0x104))) + (ulonglong)uVar7;
    uVar4 = (undefined4)lVar2;
    uVar5 = (undefined4)((ulonglong)lVar2 >> 0x20);
    (*(undefined4 *)(gen_frame + 0x104)) = uVar4;
  }
  ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1);
  ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,iVar6);
  return CONCAT44(uVar5,(*(undefined4 *)(gen_frame + 0x104)));
}

/* ref: FUN_01059960 */
float10 F_01059960(unsigned int gen_a0)
{
  GEN_ENTER(0x1059960u, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  F_01059750(in_eax);
  iVar3 = 0;
  ((code *)*(gen_code32 *)(*in_eax + 0x1c))(in_eax,0xff);
  uVar2 = ((code *)*(gen_code32 *)(*in_eax + 0x10))(in_eax,((char *)(gen_frame + 0xc)),0xff);
  if ((uVar2 != 0) &&
     ((((('/' < ((char *)(gen_frame + 0xc))[0] && (((char *)(gen_frame + 0xc))[0] < ':')) || (((char *)(gen_frame + 0xc))[0] == '+')) ||
       (((((char *)(gen_frame + 0xc))[0] == '-' || (((char *)(gen_frame + 0xc))[0] == '.')) || (((char *)(gen_frame + 0xc))[0] == ',')))) &&
      (iVar3 = 1, 1 < (int)uVar2)))) {
    do {
      cVar1 = ((char *)(gen_frame + 0xc))[(int)(iVar3)];
      if (((cVar1 < '0') || ('9' < cVar1)) &&
         ((cVar1 != '+' && (((cVar1 != '-' && (cVar1 != 'E')) && (cVar1 != 'e')))))) {
        if (cVar1 != '.') {
          if (cVar1 == ',') goto LAB_010599ff;
          break;
        }
LAB_01059a09: ;
        ((char *)(gen_frame + 0xc))[(int)(iVar3)] = '.';
      }
      else {
LAB_010599ff: ;
        if ((cVar1 == '.') || (cVar1 == ',')) goto LAB_01059a09;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  ((code *)*(gen_code32 *)(*in_eax + 0x20))(in_eax);
  ((code *)*(gen_code32 *)(*in_eax + 0x14))(in_eax,iVar3);
  ((char *)(gen_frame + 0xc))[(int)(iVar3)] = '\0';
  if (iVar3 < 1) {
    return (float10)REFG(float, 0x1090708);
  }
  dVar4 = F_00c52474(((char *)(gen_frame + 0xc)),0);
  return (float10)dVar4;
}

/* ref: FUN_01059a60 */
uint F_01059a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  F_01059750(*(undefined4 *)((int)this + 8));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8),6);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8),((undefined1 *)(gen_frame + 0x4)),6);
  if (3 < (int)uVar1) {
    uVar2 = F_00da0d60(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined1, 0x113bf28),4);
    if ((uVar2 == 0) &&
       ((((uVar1 == 4 || ((*(char *)(gen_frame + 0x8)) == ' ')) || ((*(char *)(gen_frame + 0x8)) == '\t')) ||
        (((*(char *)(gen_frame + 0x8)) == '\r' || ((*(char *)(gen_frame + 0x8)) == '\n')))))) {
      *param_1 = 1;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8),4);
      return (uint)this;
    }
  }
  if (4 < (int)uVar1) {
    uVar2 = F_00da0d60(((undefined1 *)(gen_frame + 0x4)),"false",4);
    if ((uVar2 == 0) &&
       (((uVar1 == 5 || ((*(char *)(gen_frame + 0x9)) == ' ')) ||
        (((*(char *)(gen_frame + 0x9)) == '\t' || (((*(char *)(gen_frame + 0x9)) == '\r' || ((*(char *)(gen_frame + 0x9)) == '\n')))))))) {
      *param_1 = 0;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8),5);
      return (uint)this;
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_01059b60 */
uint F_01059b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8),param_1,1);
  return (uint)this;
}

/* ref: FUN_01059b80 */
uint F_01059b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01059960(*(undefined4 *)((int)this + 8));
  *param_1 = (float)fVar1;
  return (uint)this;
}

/* ref: FUN_01059ba0 */
uint F_01059ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double * param_1 = (double *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01059960(*(undefined4 *)((int)this + 8));
  *param_1 = (double)fVar1;
  return (uint)this;
}

/* ref: FUN_01059bc0 */
uint F_01059bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1059bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  F_01059750(*(undefined4 *)((int)this + 8));
  uVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = F_00da7260(*(undefined * PTR32 *)((int)this + 8));
      if ((uVar1 == 0xffffffff) || (uVar1 == (int)(char)param_3)) {
        *(undefined1 *)(uVar2 + param_1) = 0;
        return uVar2;
      }
      *(char *)(uVar2 + param_1) = (char)uVar1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < param_2);
  }
  return 0xffffffff;
}

/* ref: FUN_01059c20 */
uint F_01059c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1059c20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
                    (*(int * PTR32 *)((int)this + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_01059c30 */
uint F_01059c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0xc))))(REFG(int * PTR32, 0x15dffa8),param_1);
  *(uint *)((int)this + 8) = uVar1;
  return (uint)this;
}

/* ref: FUN_01059c60 */
uint F_01059c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(short)uVar1;
    return (uint)this;
  }
  *param_1 = (short)uVar1;
  return (uint)this;
}

/* ref: FUN_01059cb0 */
uint F_01059cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(short)uVar1;
    return (uint)this;
  }
  *param_1 = (short)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d00 */
uint F_01059d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(int)uVar1;
    return (uint)this;
  }
  *param_1 = (int)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d40 */
uint F_01059d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(int)uVar1;
    return (uint)this;
  }
  *param_1 = (int)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d80 */
uint F_01059d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_1 = uVar1;
  return (uint)this;
}

/* ref: FUN_01059dc0 */
uint F_01059dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_1 = uVar1;
  return (uint)this;
}

/* ref: FUN_01059e00 */
uint F_01059e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x1c)));
  *(undefined2 *)((int)this_00 + 4) = 0x1c;
  uVar2 = F_00d93630(this_00,param_1,param_2,2);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_01059e60 */
uint F_01059e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x18)));
  *(undefined2 *)((int)this_00 + 4) = 0x18;
  uVar2 = F_00db9820(this_00,param_1,2,0);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_01059eb0 */
uint F_01059eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  F_00da4850(param_1);
  piVar1 = (int *)F_00da4200(param_1);
  F_01059750(*(undefined4 *)((int)this + 8));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8),1);
  uVar2 = F_00da7260(*(undefined * PTR32 *)((int)this + 8));
  while ((((uVar2 != 0xffffffff && (uVar2 != 0x20)) && (uVar2 != 9)) &&
         ((uVar2 != 0xd && (uVar2 != 10))))) {
    if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar1,1);
    }
    *(char *)(piVar1[1] + *piVar1) = (char)uVar2;
    piVar1[1] = piVar1[1] + 1;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8),1);
    uVar2 = F_00da7260(*(undefined * PTR32 *)((int)this + 8));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8));
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar1,1);
  }
  *(undefined1 *)(piVar1[1] + *piVar1) = 0;
  piVar1[1] = piVar1[1] + 1;
  return (uint)this;
}

/* ref: FUN_01059f90 */
uint F_01059f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1059f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  F_01059eb0(this,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00d91520(param_1,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return (uint)this;
}

/* ref: FUN_0105a020 */
uint F_0105a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2 & 0xffff;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = -uVar1;
    *param_2 = (short)uVar1;
    return uVar1 & 0xffff;
  }
  *param_2 = (short)uVar2;
  return uVar1;
}

/* ref: FUN_0105a060 */
uint F_0105a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2 & 0xffff;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = -uVar1;
    *param_2 = (short)uVar1;
    return uVar1 & 0xffff;
  }
  *param_2 = (short)uVar2;
  return uVar1;
}

/* ref: FUN_0105a0a0 */
uint F_0105a0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    *param_2 = -uVar1;
    return -uVar1;
  }
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_0105a0d0 */
uint F_0105a0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    *param_2 = -uVar1;
    return -uVar1;
  }
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_0105a100 */
uint F_0105a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  uVar1 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_0105a130 */
uint F_0105a130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  uVar1 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return (uint)uVar1;
}

