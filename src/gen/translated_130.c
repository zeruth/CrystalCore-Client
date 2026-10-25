#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf19 */
uint F_00b62e80(void)
{
  GEN_ENTER(0xb62e80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf18 */
uint F_00b62e90(void)
{
  GEN_ENTER(0xb62e90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf25 */
byte F_00b62ea0(void)
{
  GEN_ENTER(0xb62ea0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf26 */
byte F_00b62eb0(void)
{
  GEN_ENTER(0xb62eb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf28 */
unsigned int F_00b62ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf29 */
byte F_00b62ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xb62ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x60);
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf33 */
unsigned int F_00b62ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf23 */
unsigned int F_00b62ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb62ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x62) = 1;
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf0 */
uint F_00b62f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb62f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  if (this[0x62] == (undefined1)0x0) {
    F_0052f2b0(REFG(undefined4, 0x1375b00),this);
  }
  F_00b63250(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf10 */
unsigned int F_00b62f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb62f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return 0;
}

/* ref: FUN_00b63000 */
unsigned int F_00b63000(float gen_a0)
{
  GEN_ENTER(0xb63000u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b63020 */
unsigned int F_00b63020(unsigned int gen_a0)
{
  GEN_ENTER(0xb63020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00bf04f0(*(undefined * PTR32 *)((int)this + 0x50));
    return 0;
  }
  return 0;
}

/* ref: FUN_00b63030 */
byte F_00b63030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb63030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x50) == 0) {
    if (param_2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
      if ((char)uVar1 != '\0') goto LAB_00b6306a;
    }
    if (param_5 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*param_5 + 4))(param_5);
      if ((char)uVar1 != '\0') {
LAB_00b6306a: ;
        ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
        this_00 = (undefined *)F_00406b90(0xc0,0,0);
        if (this_00 != (undefined *)0x0) {
          uVar1 = F_00beff80(this_00,this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8);
          *(uint *)((int)this + 0x50) = uVar1;
          return 1;
        }
        *(undefined4 *)((int)this + 0x50) = 0;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b630d0 */
byte F_00b630d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb630d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x50);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 4) == param_2 || (*(int *)(iVar1 + 8) == param_2)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b63100 */
uint F_00b63100(unsigned int gen_a0)
{
  GEN_ENTER(0xb63100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x28) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x30) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x34) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x38) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x3c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302e18);
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)this;
}

/* ref: FUN_00b63190 */
byte F_00b63190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb63190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  undefined * this_00;
  
  if ((*(int *)((int)this + 0x50) == 0) && (param_2 != (int *)0x0)) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    if ((char)uVar1 != '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
      this_00 = (undefined *)F_00406b90(0xc0,0,0);
      if (this_00 != (undefined *)0x0) {
        uVar1 = F_00beff80(this_00,this,param_1,param_2,param_3,param_4,0,&REFG(float, 0x1302df0),0,param_5)
        ;
        *(uint *)((int)this + 0x50) = uVar1;
        return 1;
      }
      *(undefined4 *)((int)this + 0x50) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b63220 */
unsigned int F_00b63220(unsigned int gen_a0)
{
  GEN_ENTER(0xb63220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x50);
  if (this_00 != (undefined *)0x0) {
    F_00befd60(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return 0;
}

/* ref: FUN_00b63250 */
unsigned int F_00b63250(unsigned int gen_a0)
{
  GEN_ENTER(0xb63250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x50);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  if (this_00 != (undefined *)0x0) {
    F_00befd60(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return 0;
}

/* ref: FUN_00b63280 */
uint F_00b63280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00befd60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf9 */
uint F_00b632c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb632c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf20 */
unsigned int F_00b632d0(void)
{
  GEN_ENTER(0xb632d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf21 */
unsigned int F_00b632e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb632e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf22 */
byte F_00b632f0(void)
{
  GEN_ENTER(0xb632f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf23 */
unsigned int F_00b63300(void)
{
  GEN_ENTER(0xb63300u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf2 */
uint F_00b63310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf3 */
uint F_00b63330(unsigned int gen_a0)
{
  GEN_ENTER(0xb63330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf4 */
uint F_00b63340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x3c) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf5 */
uint F_00b63370(unsigned int gen_a0)
{
  GEN_ENTER(0xb63370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf6 */
uint F_00b63380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x40) = *param_2;
  *(undefined4 *)(in_ecx + 0x44) = param_2[1];
  *(undefined4 *)(in_ecx + 0x48) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf7 */
uint F_00b633a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb633a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf8 */
unsigned int F_00b633b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb633b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  *(undefined4 *)(this + 0x3c) = param_1[7];
  *(undefined4 *)(this + 0x40) = param_1[8];
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf0 */
uint F_00b63400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x50);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  if (this_00 != (undefined *)0x0) {
    F_00befd60(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)(this + 0x50) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b63450 */
byte F_00b63450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return ((ushort)param_2 & *(ushort *)(in_ecx + 0x12)) != 0;
}

/* ref: FUN_00b63470 */
byte F_00b63470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63470u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*in_ecx & (byte)param_2) != 0;
}

/* ref: FUN_00b63490 */
uint F_00b63490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00b634b0 */
unsigned int F_00b634b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb634b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bb9d80(this,(int)this + 0xc,param_1);
  return 0;
}

/* ref: FUN_00b634d0 */
unsigned int F_00b634d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb634d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bb9d80(this,(int)this + 0x10,param_1);
  return 0;
}

/* ref: FUN_00b63510 */
ushort F_00b63510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 6) = *(ushort *)(in_ecx + 6) | (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b63520 */
byte F_00b63520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return ((ushort)param_2 & *(ushort *)(in_ecx + 6)) != 0;
}

/* ref: FUN_00b63540 */
uint F_00b63540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00b63570 */
uint F_00b63570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00b63590 */
uint F_00b63590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x28) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x2c) = uVar1;
  return uVar1;
}

/* ref: FUN_00b635c0 */
unsigned int F_00b635c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb635c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x38) = param_2;
  return 0;
}

/* ref: FUN_00b635e0 */
uint F_00b635e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb635e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00b635f0 */
uint F_00b635f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb635f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 * 3 + 3) * 0x10 + in_ecx;
}

/* ref: FUN_00b63640 */
uint F_00b63640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xb4) = param_2;
  return param_2;
}

/* ref: FUN_00b63650 */
unsigned int F_00b63650(float gen_a0)
{
  GEN_ENTER(0xb63650u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b63670 */
uint F_00b63670(unsigned int gen_a0)
{
  GEN_ENTER(0xb63670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    uVar1 = F_00bb9d00(*(undefined * PTR32 *)((int)this + 4));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b63680 */
byte F_00b63680(unsigned int gen_a0)
{
  GEN_ENTER(0xb63680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4);
  if (iVar1 == 0) {
    return 1;
  }
  if ((*(int *)(iVar1 + 0xc) == 0) && (*(int *)(iVar1 + 0x10) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b636a0 */
unsigned int F_00b636a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb636a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  do {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        return 0;
      }
      F_00bba8b0(param_1,this);
      return 0;
    }
    if (param_1[3] != 0) {
      F_00b636a0(this,(int *)param_1[3]);
    }
    param_1 = (int *)param_1[4];
  } while (param_1 != (int *)0x0);
  return 0;
}

/* ref: FUN_00b636f0 */
unsigned int F_00b636f0(void)
{
  GEN_ENTER(0xb636f0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  while (iVar1 != 0) {
    *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4) = 0;
    REFG(int, 0x14c4ec8) = 1 - REFG(int, 0x14c4ec8);
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      F_00a04370(iVar1);
      iVar1 = iVar2;
    }
    iVar1 = *(int *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  }
  return 0;
}

/* ref: FUN_00b63750 */
uint F_00b63750(unsigned int gen_a0)
{
  GEN_ENTER(0xb63750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  *(uint *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4) = param_1;
  return param_1;
}

/* ref: FUN_00b63780 */
uint F_00b63780(unsigned int gen_a0)
{
  GEN_ENTER(0xb63780u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  ((int *)(gen_frame + 0xc))[2] = *(undefined4 *)((int)param_1 + 0x10);
  ((int *)(gen_frame + 0xc))[3] = *(undefined4 *)((int)param_1 + 0xc);
  uVar2 = 0;
  do {
    piVar4 = (int *)((int *)(gen_frame + 0xc))[uVar2 + 2];
    if ((piVar4 != (int *)0x0) && (uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4), uVar1 == 0)) {
      F_00b63780(piVar4);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  uVar1 = F_00bb9e90(param_1,((int *)(gen_frame + 0xc)),4);
  iVar3 = 0;
  uVar2 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar2 = F_00a04370(((int *)(gen_frame + 0xc))[iVar3]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  if (((*(int *)((int)param_1 + 0xc) == 0) && (*(int *)((int)param_1 + 0x10) == 0)) &&
     (*(undefined * PTR32 *)((int)param_1 + 4) != (undefined *)0x0)) {
    F_00bb9e40(*(undefined * PTR32 *)((int)param_1 + 4),param_1);
    uVar2 = REFG(undefined4, 0x14c4ec8);
    *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
    *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
  }
  this = *(undefined * PTR32 *)((int)param_1 + 4);
  if (this != (undefined *)0x0) {
    uVar1 = *(uint *)((int)param_1 + 0xc);
    uVar2 = *(uint *)((int)param_1 + 0x10);
    if (uVar1 == 0) {
      uVar1 = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
    }
    else if (uVar2 != 0) {
      return uVar1;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar4 = (int *)((int)this + 0xc);
      if ((undefined *)*piVar4 != param_1) {
        piVar4 = (int *)((int)this + 0x10);
      }
      F_00bb9d80(this,piVar4,uVar1);
      F_00bb9d80(param_1,(uint *)((int)param_1 + 0xc),0);
      F_00bb9d80(param_1,(int)param_1 + 0x10,0);
      *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
      uVar2 = REFG(undefined4, 0x14c4ec8);
      *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
    }
  }
  return uVar2;
}

/* ref: FUN_00b638a0 */
byte F_00b638a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb638a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_1 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar2 = 0;
  do {
    if (((int *)(gen_frame + 0x4))[uVar2] != 0) {
      bVar1 = F_00b638f0(((int *)(gen_frame + 0x4))[uVar2],param_2);
      if (bVar1 == 0) {
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return 1;
}

/* ref: FUN_00b638f0 */
byte F_00b638f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb638f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  if (uVar2 == 1) {
    return param_1[8] == param_2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  if (uVar2 == 0) {
    bVar1 = F_00b638a0(param_1,param_2);
    return bVar1;
  }
  return 1;
}

/* ref: FUN_00b63940 */
uint F_00b63940(unsigned int gen_a0)
{
  GEN_ENTER(0xb63940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  uVar1 = F_00a03e20();
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: FUN_00b63960 */
uint F_00b63960(unsigned int gen_a0)
{
  GEN_ENTER(0xb63960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00b636a0(this,*(int *)((int)this + 4));
    uVar1 = F_00a04250(*(undefined4 *)((int)this + 4));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  return uVar1;
}

/* ref: FUN_00b63990 */
unsigned int F_00b63990(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb63990u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 4))))(*(int * PTR32 *)(param_1 + 4));
    F_00b63780(*(undefined4 *)(param_1 + 4));
  }
  return 0;
}

/* ref: FUN_00b639d0 */
uint F_00b639d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb639d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  F_00bba8b0(param_1,this);
  this_00 = *(undefined * PTR32 *)((int)param_1 + 4);
  F_00bb9e40(this_00,param_1);
  uVar2 = REFG(undefined4, 0x14c4ec8);
  *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
  *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
  this_01 = *(undefined * PTR32 *)((int)this_00 + 4);
  if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_00 + 0x10) == 0)) {
    puVar3 = (undefined4 *)((int)this_01 + 0xc);
    puVar1 = (undefined4 *)((int)this_00 + 0xc);
    if ((undefined *)*puVar3 == this_00) {
      uVar4 = *puVar1;
    }
    else {
      uVar4 = *puVar1;
      puVar3 = (undefined4 *)((int)this_01 + 0x10);
    }
    F_00bb9d80(this_01,puVar3,uVar4);
    F_00bb9d80(this_00,puVar1,0);
    uVar2 = REFG(undefined4, 0x14c4ec8);
    *(undefined4 *)((int)this_00 + 8) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
    *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = this_00;
  }
  return uVar2;
}

/* ref: FUN_00b63a60 */
uint F_00b63a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb63a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_01;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar2 = F_00a03e70(param_1);
  pvVar3 = (undefined *)F_00b644c0(*(undefined4 *)((int)this + 4),uVar2);
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (*(int *)((int)pvVar3 + 0xc) == 0) {
      F_00bb9d80(pvVar3,(int)pvVar3 + 0xc,uVar2);
      return uVar2;
    }
    if (*(int *)((int)pvVar3 + 0x10) != 0) {
      pvVar3 = (undefined *)F_00a03e20();
      F_00bb9d80(pvVar3,(int)pvVar3 + 0xc,*(undefined4 *)((int)this + 4));
      *(undefined * PTR32 *)((int)this + 4) = pvVar3;
    }
    F_00bb9d80(*(undefined * PTR32 *)((int)this + 4),(int)*(undefined * PTR32 *)((int)this + 4) + 0x10,uVar2);
    return uVar2;
  }
  if (*(int *)((int)pvVar3 + 0x10) == 0) {
    F_00bb9d80(pvVar3,(int)pvVar3 + 0x10,uVar2);
    return uVar2;
  }
  this_01 = (undefined *)F_00a03e20();
  if ((char)param_2 == '\x01') {
LAB_00b63b72: ;
    pvVar6 = *(undefined * PTR32 *)((int)pvVar3 + 4);
    if (pvVar6 == (undefined *)0x0) {
      *(undefined * PTR32 *)((int)this + 4) = this_01;
    }
    else {
      piVar5 = (int *)((int)pvVar6 + 0xc);
      if ((undefined *)*piVar5 != pvVar3) {
        piVar5 = (int *)((int)pvVar6 + 0x10);
      }
      F_00bb9d80(pvVar6,piVar5,this_01);
    }
    F_00bb9d80(this_01,(int)this_01 + 0xc,pvVar3);
    F_00bb9d80(this_01,(int)this_01 + 0x10,uVar2);
    return uVar2;
  }
  bVar1 = F_00b638a0(pvVar3,param_1);
  if (bVar1 != 0) goto LAB_00b63b72;
  bVar1 = F_00b638f0(*(undefined4 *)((int)pvVar3 + 0xc),param_1);
  if (bVar1 == 0) {
    uVar8 = *(undefined4 *)((int)pvVar3 + 0x10);
    iVar7 = (int)pvVar3 + 0x10;
  }
  else {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x10) + 0x10))))(*(int * PTR32 *)((int)pvVar3 + 0x10));
    if (uVar4 == 2) {
      this_00 = *(undefined * PTR32 *)((int)pvVar3 + 4);
      pvVar6 = this_01;
      if (this_00 == (undefined *)0x0) {
        iVar7 = (int)this_01 + 0xc;
        *(undefined * PTR32 *)((int)this + 4) = this_01;
      }
      else if (*(undefined * PTR32 *)((int)this_00 + 0xc) == pvVar3) {
        F_00bb9d80(this_00,(int *)((int)this_00 + 0xc),this_01);
        iVar7 = (int)this_01 + 0xc;
      }
      else {
        F_00bb9d80(this_00,(int)this_00 + 0x10,this_01);
        iVar7 = (int)this_01 + 0xc;
      }
      goto LAB_00b63b53;
    }
    uVar8 = *(undefined4 *)((int)pvVar3 + 0xc);
    iVar7 = (int)pvVar3 + 0xc;
  }
  F_00bb9d80(this_01,(int)this_01 + 0xc,uVar8);
  pvVar6 = pvVar3;
  pvVar3 = this_01;
LAB_00b63b53: ;
  F_00bb9d80(pvVar6,iVar7,pvVar3);
  F_00bb9d80(this_01,(int)this_01 + 0x10,uVar2);
  return uVar2;
}

/* ref: FUN_00b63c10 */
uint F_00b63c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb63c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b64560(0,*(undefined4 *)((int)this + 4),this);
  return uVar1;
}

/* ref: FUN_00b63c30 */
uint F_00b63c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb63c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b645c0(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_2);
  return uVar1;
}

/* ref: FUN_00b63c60 */
uint F_00b63c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb63c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b64630(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_3);
  return uVar1;
}

/* ref: FUN_00b63c90 */
byte F_00b63c90(unsigned int gen_a0)
{
  GEN_ENTER(0xb63c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00b646b0(*(int *)((int)this + 4),this);
    return 1 - (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00b63cc0 */
byte F_00b63cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb63cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00b64730(*(int *)((int)this + 4),this);
    return 1 - (uVar1 != 0);
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTree::vf6 */
uint F_00b63cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb63cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  if (*(int *)(param_1 + 4) == 2) {
    this_00 = (undefined *)F_00b647b0(*(undefined4 *)(this + 4),param_1);
    param_1 = 0;
    if (this_00 != (undefined *)0x0) {
      if (*(int *)((int)this_00 + 0x10) != 0) {
        F_00bba120(this_00);
      }
      param_1 = F_00b639d0(this,this_00);
    }
  }
  return param_1;
}

/* ref: FUN_00b63d30 */
uint F_00b63d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb63d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  bool bVar2;
  byte * pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  float * pfVar9;
  int iVar10;
  int * piVar11;
  uint uVar12;
  int * piVar13;
  byte bVar14;
  uint uVar15;
  float10 fVar16;
  float fVar17;
  
  uVar12 = (*(uint *)&gen_args[1]);
  iVar10 = *(int *)((*(uint *)&gen_args[1]) + 0x18);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[1]) = 0;
  (*(float *)(gen_frame + 0xc)) = -NAN;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0xffffffff;
  fVar17 = (*(float *)(gen_frame + 0xc));
  if (iVar10 != 0) {
    uVar8 = *(uint *)(iVar10 + 0x74);
    if (uVar8 == 0) {
      piVar13 = *(int * PTR32 *)(iVar10 + 0x70);
      if (piVar13 == (int *)0x0) {
        iVar5 = *(int *)(iVar10 + 0x6c);
        if (iVar5 == 0) {
          if (*(int *)(iVar10 + 4) != 0) {
            *(undefined4 *)(iVar10 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar10 + 4) + 4)));
          }
          iVar5 = *(int *)(iVar10 + 0x6c);
          if (iVar5 != 0) goto LAB_00b63d8a;
        }
        else {
LAB_00b63d8a: ;
          *(undefined4 *)(iVar10 + 0x70) = *(undefined4 *)(iVar5 + 4);
        }
        piVar13 = *(int * PTR32 *)(iVar10 + 0x70);
        if (piVar13 != (int *)0x0) goto LAB_00b63d97;
      }
      else {
LAB_00b63d97: ;
        uVar8 = ((code *)*(gen_code32 *)(*piVar13 + 100))(piVar13);
        *(uint *)(iVar10 + 0x74) = uVar8;
      }
      uVar8 = *(uint *)(iVar10 + 0x74);
    }
    uVar6 = *(uint *)(uVar8 + 0x240);
    uVar15 = uVar8;
    if (uVar6 != 0) {
      uVar15 = uVar6;
    }
    (*(float *)(gen_frame + 0xc)) = *(float *)(uVar8 + 0x94);
    if ((((uVar6 != 0) || (uVar6 = uVar8, uVar8 != 0)) && (*(int *)(uVar6 + 0xdc) != 0)) &&
       (iVar5 = *((int *)GEN_TOP((*(int *)(uVar6 + 0xdc) + 4))), iVar5 != 0)) {
      (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)(iVar5 + 0xfc);
    }
    fVar17 = (*(float *)(gen_frame + 0xc));
    (*(uint *)&gen_args[1]) = uVar8;
    if (uVar15 != 0) {
      fVar17 = *(float *)(uVar15 + 0x94);
    }
  }
  pvVar7 = (undefined *)F_00b63a60((*(undefined * PTR32 *)(gen_frame + 0x10)),(undefined4)gen_fl2bits(fVar17),(uint)(-1 < (int)(*(int * PTR32 *)(gen_frame + 0x18))));
  bVar4 = (byte)*(ushort *)(uVar12 + 0x12);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar7;
  (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(uVar12 + 0x15);
  if ((bVar4 >> 1 & 1) != 0) {
    (*(uint *)(gen_frame + 0x4)) = CONCAT22(1,*(ushort *)(uVar12 + 0x15));
  }
  if ((bVar4 >> 3 & 1) != 0) {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x20000;
  }
  if ((bVar4 >> 6 & 1) != 0) {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x40000;
  }
  if ((char)bVar4 < '\0') {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x80000;
  }
  if ((bVar4 >> 4 & 1) == 0) {
    if ((bVar4 >> 5 & 1) == 0) {
      if ((*(ushort *)(uVar12 + 0x12) >> 8 & 1) != 0) {
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x400000;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x200000;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 0x100000;
  }
  *(undefined4 *)((int)pvVar7 + 0x28) = *(undefined4 *)(uVar12 + 0xc);
  *(uint *)((int)pvVar7 + 0x2c) = (*(uint *)(gen_frame + 0x4));
  *(int * PTR32 *)((int)pvVar7 + 0x24) = (*(int * PTR32 *)(gen_frame + 0x18));
  if (iVar10 != 0) {
    *(int *)((int)pvVar7 + 0x1c) = iVar10;
    *(uint *)(iVar10 + 0xb4) = (int)pvVar7 + 0xc;
  }
  piVar13 = *(int * PTR32 *)((int)pvVar7 + 4);
  if ((undefined *)piVar13[4] != pvVar7) {
    (*(int *)(gen_frame + 0x8)) = 0;
    if (((*(uint *)&gen_args[1]) == 0) || (bVar4 = F_00bcfe30((undefined *)(*(uint *)&gen_args[1]),&(*(int *)(gen_frame + 0x8))), bVar4 == 0)) {
      uVar8 = F_00a09f30(0,(uint)*(byte *)(uVar12 + 0x15),(uint)*(byte *)(uVar12 + 0x16));
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(int)uVar8);
    }
    else {
      fVar16 = (float10)(*(int *)(gen_frame + 0x8));
      if ((*(int *)(gen_frame + 0x8)) < 0) {
        fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)fVar16);
    }
    if ((*(*(byte * PTR32 *)&gen_args[3]) & 1) != 0) {
      (*(uint *)&gen_args[1]) = 0;
    }
    bVar1 = true;
    goto LAB_00b64156;
  }
  piVar11 = (int *)piVar13[3];
  uVar8 = ((code *)*(gen_code32 *)(*piVar11 + 0x10))(piVar11);
  if (uVar8 == 1) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar11;
LAB_00b63f0e: ;
    if ((*(int * PTR32 *)(gen_frame + 0x18)) == (int *)0x0) goto LAB_00b63f14;
  }
  else {
    uVar8 = ((code *)*(gen_code32 *)(*piVar11 + 0x10))(piVar11);
    if (uVar8 != 0) goto LAB_00b63f14;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)F_00bb9d70(piVar11);
    if ((*(int * PTR32 *)(gen_frame + 0x18)) == (int *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)F_00b64450(piVar11,(*(undefined * PTR32 *)&gen_args[2]));
      goto LAB_00b63f0e;
    }
  }
  bVar4 = F_00b638f0(piVar11,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc))));
  piVar11 = (*(int * PTR32 *)(gen_frame + 0x18));
  bVar14 = (byte)*(undefined2 *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0x2e);
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = bVar4;
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar4);
  if (((bVar14 >> 1 & 1) != 0) && ((*(byte *)(uVar12 + 0x12) >> 3 & 1) == 0)) {
LAB_00b63f14: ;
    F_00b639d0((*(undefined * PTR32 *)(gen_frame + 0x10)),pvVar7);
    return 0;
  }
  if (((bVar4 == 0) && (-1 < (*(int * PTR32 *)(gen_frame + 0x18))[9])) && ((*(int * PTR32 *)(gen_frame + 0x18))[9] == *(int *)((int)pvVar7 + 0x24))) {
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = 1;
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  }
  fVar17 = 0.0;
  if (((*(byte *)(uVar12 + 0x12) & 1) != 0) || ((*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0x2e) & 1) != 0))
  goto LAB_00b640bb;
  if (((bVar14 >> 4 & 1) == 0) && ((*(byte *)(uVar12 + 0x12) >> 4 & 1) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((bVar14 >> 5 & 1) == 0) && ((*(byte *)(uVar12 + 0x12) >> 5 & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((bVar4 != 1) || (bVar1)) || (bVar2)) || ((bVar14 >> 6 & 1) != 0)) {
    (*(float *)(gen_frame + 0xc)) = 0.0;
    if (bVar1) {
      iVar10 = (int)(*(undefined * PTR32 *)&gen_args[2]) + 0x30;
LAB_00b64055: ;
      if ((iVar10 == 0) || (*(int *)(iVar10 + 0x1c) != 0)) goto LAB_00b64074;
      fVar16 = (float10)*(int *)(iVar10 + 0x18);
      if (*(int *)(iVar10 + 0x18) < 0) {
        (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110)));
        goto LAB_00b640c0;
      }
    }
    else {
      if (bVar2) {
        iVar10 = (int)(*(undefined * PTR32 *)&gen_args[2]) + 0x60;
        goto LAB_00b64055;
      }
LAB_00b64074: ;
      if (((*(uint *)&gen_args[1]) == 0) || (bVar4 = F_00bcfe30((undefined *)(*(uint *)&gen_args[1]),&(*(float *)(gen_frame + 0xc))), bVar4 == 0)) {
        uVar8 = F_00a09f30((int)(char)piVar11[0xb],(uint)*(byte *)(uVar12 + 0x15),
                             (uint)*(byte *)(uVar12 + 0x16));
        fVar17 = (float)(int)uVar8;
        goto LAB_00b640bb;
      }
      fVar16 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0xc)));
      if ((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) < 0) {
        fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)fVar16);
  }
  else {
    (*(float *)(gen_frame + 0xc)) = (float)(int)*(short *)(uVar12 + 0xc);
    fVar16 = (float10)(int)*(short *)(uVar12 + 0xc);
    if ((float10)(int)(short)(*(int * PTR32 *)(gen_frame + 0x18))[10] < fVar16) {
      (*(float *)(gen_frame + 0xc)) = 0.0;
      pfVar9 = (float *)&(*(uint *)&gen_args[1]);
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF((((float10)(int)*(short *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0x2a) +
                                          (float10)(int)(short)(*(int * PTR32 *)(gen_frame + 0x18))[10]) - fVar16))));
      if (!((float10)0 < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))))) {
        pfVar9 = &(*(float *)(gen_frame + 0xc));
      }
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar9);
      if (!((float10)*pfVar9 <= (float10)*(float *)(uVar12 + 8))) goto LAB_00b640c0;
    }
LAB_00b640bb: ;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar17);
  }
LAB_00b640c0: ;
  ((code *)*(gen_code32 *)(*piVar13 + 8))(piVar13,(*(uint *)&gen_args[1]));
  F_00bba140((*(int * PTR32 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x8)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))),(int)*(char *)(uVar12 + 0x17));
  bVar1 = false;
LAB_00b64156: ;
  gen_piece_set(&(*(uint *)(gen_frame + 0x4)), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)piVar13) >> 8)));
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),*(byte *)(uVar12 + 0x12) >> 2) & 0xffffff01;
  piVar11 = (int *)F_00bccc60((*(undefined * PTR32 *)&gen_args[2]),*(undefined4 *)(uVar12 + 0x1c),
                                *(undefined4 *)(uVar12 + 0x20),*(undefined4 *)(uVar12 + 0x24),
                                *(undefined4 *)(uVar12 + 0x28),(int)*(short *)(uVar12 + 0x10),
                                *(float *)uVar12,*(float *)(uVar12 + 4),(*(uint *)(gen_frame + 0x4)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
  if (piVar11 != (int *)0x0) {
    if (piVar11[6] != 0) {
      ((code *)*(gen_code32 *)(*piVar11 + 8))(piVar11);
      F_009f7c20(piVar11,&REFG(undefined, 0x1333238));
      pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      pbVar3 = (*(byte * PTR32 *)&gen_args[3]);
      if (bVar1) {
        if (((*(*(byte * PTR32 *)&gen_args[3]) & 1) == 0) &&
           ((GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[1]))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
            ((GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[1]))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
            gen_bits2f((*(uint *)&gen_args[1])) == *(float *)&REFG(undefined, 0x1088114)))) {
          fVar16 = (float10)0;
        }
        else {
          fVar16 = (float10)1;
        }
        F_009f6650(piVar11,(float)fVar16);
        if ((*pbVar3 & 2) != 0) {
          F_00bc4070((*(undefined * PTR32 *)&gen_args[2]),0xffffffff);
        }
        bVar4 = F_009f2f00(piVar11);
        if ((bVar4 == 0) && (*(float *)&REFG(undefined, 0x1088114) < gen_bits2f((*(uint *)&gen_args[1])))) {
          uVar12 = F_00a03ed0();
          pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x14));
          *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x38) = 0;
          F_00bb9d80(piVar13,piVar13 + 3,uVar12);
          F_00bb9d80(piVar13,piVar13 + 4,pvVar7);
          ((code *)*(gen_code32 *)(*piVar13 + 8))(piVar13,(*(uint *)&gen_args[1]));
        }
        else {
          F_00bb9c80(piVar13);
          pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x14));
        }
      }
      else if (0.0 < gen_bits2f((*(uint *)&gen_args[1]))) {
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x38) = 0;
        F_009f6650(piVar11,(float)(float10)0);
      }
      else {
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x38) = REFG(float, 0x1087f04);
      }
      *(int * PTR32 *)((int)pvVar7 + 0x10) = piVar11;
      F_00bba7e0(pvVar7,(*(undefined * PTR32 *)(gen_frame + 0x10)));
      return (uint)pvVar7;
    }
    ((code *)*(gen_code32 *)(*piVar11 + 0xc))(piVar11);
  }
  F_00b639d0((*(undefined * PTR32 *)(gen_frame + 0x10)),(*(undefined * PTR32 *)(gen_frame + 0x14)));
  return 0;
}

/* ref: FUN_00b642d0 */
uint F_00b642d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb642d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00b645c0(((byte *)(gen_frame + 0x8)),0x20,0,*(int *)((int)this + 4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 128)));
    iVar3 = 0;
    uVar2 = uVar1;
    if (0 < (int)uVar1) {
      do {
        uVar2 = F_00bba0e0(*(undefined * PTR32 *)(((byte *)(gen_frame + 0x8)) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b64330 */
uint F_00b64330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b64340 */
byte F_00b64340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00bba950(param_1,*(undefined4 *)this);
  return bVar1;
}

/* ref: FUN_00b64370 */
uint F_00b64370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b64380 */
byte F_00b64380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this == *(int *)(param_1 + 0x20);
}

/* ref: FUN_00b643a0 */
uint F_00b643a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb643a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b643b0 */
byte F_00b643b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb643b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if (((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) == *(int *)(*(int *)this + 0x20))) {
    return 1;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x10);
  if (((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x20))) == *(int *)(*(int *)this + 0x20))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b64410 */
byte F_00b64410(unsigned int gen_a0)
{
  GEN_ENTER(0xb64410u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00bba1e0(param_1);
  return bVar1 == 0;
}

/* ref: FUN_00b64430 */
byte F_00b64430(unsigned int gen_a0)
{
  GEN_ENTER(0xb64430u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00bba210(param_1);
  return bVar1 == 0;
}

/* ref: FUN_00b64450 */
uint F_00b64450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64450u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_1 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  do {
    piVar1 = (int *)((int *)(gen_frame + 0x4))[uVar3];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if (uVar2 == 1) {
        return (uint)piVar1;
      }
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((uVar2 == 0) && (uVar2 = F_00b64450((int)piVar1,param_2), uVar2 != 0)) {
        return uVar2;
      }
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b644c0 */
uint F_00b644c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb644c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  ((int * PTR32 *)(gen_frame + 0x4))[0] = *(int * PTR32 *)(param_1 + 0xc);
  ((int * PTR32 *)(gen_frame + 0x4))[1] = (int *)*(undefined4 *)(param_1 + 0x10);
  if (((((int * PTR32 *)(gen_frame + 0x4))[0] != (int *)0x0) &&
      (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int * PTR32 *)(gen_frame + 0x4))[0] + 0x10))))(((int * PTR32 *)(gen_frame + 0x4))[0]), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) == *(int *)(param_2 + 0x20))) {
    return param_1;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x10);
  if (((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x20))) == *(int *)(param_2 + 0x20))) {
    return param_1;
  }
  uVar2 = 0;
  while (((piVar1 = ((int * PTR32 *)(gen_frame + 0x4))[uVar2], piVar1 == (int *)0x0 ||
          (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar3 != 0)) ||
         (uVar3 = F_00b644c0((uint)piVar1,param_2), uVar3 == 0))) {
    uVar2 = uVar2 + 1;
    if (1 < uVar2) {
      return 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00b64560 */
uint F_00b64560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb64560u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_2 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_2 + 0x10);
  uVar3 = 0;
  do {
    piVar1 = (int *)((int *)(gen_frame + 0x4))[uVar3];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if (uVar2 == 1) {
        param_1 = param_1 + 1;
      }
      else if (uVar2 == 0) {
        param_1 = F_00b64560(param_1,(int)piVar1,param_3);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return param_1;
}

/* ref: FUN_00b645c0 */
uint F_00b645c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb645c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_4 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_4 + 0x10);
  uVar3 = 0;
  do {
    piVar1 = (int *)((int *)(gen_frame + 0x4))[uVar3];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if (uVar2 == 1) {
        if ((int)param_3 < param_2) {
          *(int * PTR32 *)(param_1 + param_3 * 4) = piVar1;
          param_3 = param_3 + 1;
        }
      }
      else if (uVar2 == 0) {
        param_3 = F_00b645c0(param_1,param_2,param_3,(int)piVar1,param_5);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return param_3;
}

/* ref: FUN_00b64630 */
uint F_00b64630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb64630u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  ((int *)(gen_frame + 0x4))[0] = *(int *)(param_4 + 0xc);
  ((int *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_4 + 0x10);
  uVar3 = 0;
  do {
    piVar1 = (int *)((int *)(gen_frame + 0x4))[uVar3];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if (uVar2 == 1) {
        if ((param_5 == piVar1[8]) && ((int)param_3 < param_2)) {
          *(int * PTR32 *)(param_1 + param_3 * 4) = piVar1;
          param_3 = param_3 + 1;
        }
      }
      else if (uVar2 == 0) {
        param_3 = F_00b64630(param_1,param_2,param_3,(int)piVar1,param_5);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return param_3;
}

/* ref: FUN_00b646b0 */
uint F_00b646b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb646b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = *(undefined4 *)(param_1 + 0xc);
  ((undefined4 *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  do {
    this = (int *)((undefined4 *)(gen_frame + 0x4))[uVar3];
    if (this != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
      if (uVar2 == 1) {
        bVar1 = F_00bba1e0(this);
        if (bVar1 == 0) {
          return (uint)this;
        }
      }
      else {
        uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
        if ((uVar2 == 0) && (uVar2 = F_00b646b0((int)this,param_2), uVar2 != 0)) {
          return uVar2;
        }
      }
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b64730 */
uint F_00b64730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64730u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = *(undefined4 *)(param_1 + 0xc);
  ((undefined4 *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  do {
    this = (int *)((undefined4 *)(gen_frame + 0x4))[uVar3];
    if (this != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
      if (uVar2 == 1) {
        bVar1 = F_00bba210(this);
        if (bVar1 == 0) {
          return (uint)this;
        }
      }
      else {
        uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
        if ((uVar2 == 0) && (uVar2 = F_00b64730((int)this,param_2), uVar2 != 0)) {
          return uVar2;
        }
      }
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b647b0 */
uint F_00b647b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb647b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  ((undefined4 *)(gen_frame + 0x4))[0] = *(undefined4 *)(param_1 + 0xc);
  ((undefined4 *)(gen_frame + 0x4))[1] = *(undefined4 *)(param_1 + 0x10);
  uVar3 = 0;
  do {
    this = (int *)((undefined4 *)(gen_frame + 0x4))[uVar3];
    if (this != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
      if (uVar2 == 1) {
        bVar1 = F_00bba950(this,param_2);
        if (bVar1 != 0) {
          return (uint)this;
        }
      }
      else {
        uVar2 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
        if ((uVar2 == 0) && (uVar2 = F_00b647b0((int)this,param_2), uVar2 != 0)) {
          return uVar2;
        }
      }
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b64850 */
uint F_00b64850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b644c0(*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00b64870 */
uint F_00b64870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b64560(0,*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00b64890 */
uint F_00b64890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb64890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b645c0(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_3);
  return uVar1;
}

/* ref: FUN_00b648c0 */
uint F_00b648c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb648c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b64630(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_3);
  return uVar1;
}

/* ref: FUN_00b648f0 */
uint F_00b648f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb648f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b646b0(*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00b64910 */
uint F_00b64910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b64730(*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00b64930 */
uint F_00b64930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b647b0(*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: Client::System::Animation::AnimationTree::vf0 */
uint F_00b64950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  if (*(int *)(this + 4) != 0) {
    F_00b636a0(this,*(int *)(this + 4));
    F_00a04250(*(undefined4 *)(this + 4));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b649c0 */
uint F_00b649c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb649c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b649d0 */
uint F_00b649d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb649d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b649e0 */
uint F_00b649e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb649e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00b649f0 */
uint F_00b649f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb649f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00b64a00 */
uint F_00b64a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64a00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00b64a60 */
unsigned int F_00b64a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb64a60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar5 = (float10)param_4;
  pfVar1 = *(float * PTR32 *)(param_1 + 8);
  iVar3 = 0;
  fVar4 = (float10)*pfVar1 + (float10)*(double *)&REFG(undefined, 0x108bec8);
  param_4 = 0.0;
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc) * fVar5)));
  if (fVar4 < fVar5) {
    do {
      iVar3 = iVar3 + 1;
      param_4 = (float)fVar4;
      fVar4 = (float10)pfVar1[iVar3 * *(int *)(param_1 + 0x14)] + (float10)param_4;
    } while ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 <= fVar4));
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar3 < iVar2 + -1) {
    *param_2 = ((float)GEN_TOF(((float10)(float)(fVar5 - (float10)param_4) /
                      (float10)pfVar1[iVar3 * *(int *)(param_1 + 0x14)])));
    *param_3 = iVar3;
    return 0;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  *param_3 = iVar2 + -2;
  return 0;
}

/* ref: FUN_00b64b10 */
float F_00b64b10(unsigned int gen_a0)
{
  GEN_ENTER(0xb64b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  float * pfVar8;
  float * local_10;
  float * local_c;
  float local_8;
  
  uVar3 = *(uint *)((int)this + 0x10);
  iVar4 = *(int *)((int)this + 0x14);
  uVar6 = 0;
  local_8 = 0.0;
  if (3 < (int)uVar3) {
    pfVar8 = *(float * PTR32 *)((int)this + 8);
    pfVar5 = pfVar8 + iVar4;
    iVar7 = (uVar3 - 4 >> 2) + 1;
    uVar6 = iVar7 * 4;
    local_10 = pfVar8 + iVar4 * 3;
    local_c = pfVar8 + iVar4 * 2;
    do {
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + iVar4 * 4;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + iVar4 * 4;
      iVar7 = iVar7 + -1;
      local_8 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 +
                                                                          (float10)local_8) +
                                                         (float10)fVar2))) + (float10)*local_c))) +
                       (float10)*local_10)));
      local_10 = local_10 + iVar4 * 4;
      local_c = local_c + iVar4 * 4;
    } while (iVar7 != 0);
  }
  if (uVar6 < uVar3) {
    pfVar5 = ((float *)GEN_TOP((*(int *)((int)this + 8) + uVar6 * iVar4 * 4)));
    iVar7 = uVar3 - uVar6;
    do {
      fVar1 = *pfVar5;
      pfVar5 = pfVar5 + iVar4;
      iVar7 = iVar7 + -1;
      local_8 = (float)((float10)fVar1 + (float10)local_8);
    } while (iVar7 != 0);
  }
  return local_8;
}

/* ref: FUN_00b64bd0 */
uint F_00b64bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x14) * param_2;
}

/* ref: FUN_00b64bf0 */
float F_00b64bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb64bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  float * local_c;
  float local_8;
  
  iVar3 = *(int *)((int)this + 0x14);
  local_8 = 0.0;
  if (param_1 < param_2) {
    uVar9 = (uint)param_1;
    if (3 < (int)(param_2 - (int)param_1)) {
      iVar4 = *(int *)((int)this + 8);
      pfVar8 = (float *)(iVar4 + iVar3 * (int)((int)(uintptr_t)param_1) * 4);
      iVar6 = (int)param_1 + 3;
      pfVar7 = ((float *)GEN_TOP((iVar4 + ((int)param_1 + 1U) * iVar3 * 4)));
      iVar5 = ((param_2 - (int)param_1) - 4 >> 2) + 1;
      uVar9 = (int)param_1 + iVar5 * 4;
      param_1 = ((float *)GEN_TOP((iVar4 + ((int)param_1 + 2U) * iVar3 * 4)));
      local_c = (float *)(iVar4 + iVar6 * iVar3 * 4);
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + iVar3 * 4;
        fVar2 = *pfVar7;
        pfVar7 = pfVar7 + iVar3 * 4;
        iVar5 = iVar5 + -1;
        local_8 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 +
                                                                            (float10)local_8) +
                                                           (float10)fVar2))) + (float10)*param_1))) +
                         (float10)*local_c)));
        param_1 = param_1 + iVar3 * 4;
        local_c = local_c + iVar3 * 4;
      } while (iVar5 != 0);
    }
    if (uVar9 < param_2) {
      pfVar8 = ((float *)GEN_TOP((*(int *)((int)this + 8) + uVar9 * iVar3 * 4)));
      iVar6 = param_2 - uVar9;
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + iVar3;
        iVar6 = iVar6 + -1;
        local_8 = (float)((float10)fVar1 + (float10)local_8);
      } while (iVar6 != 0);
    }
  }
  return local_8;
}

/* ref: FUN_00b64d50 */
uint F_00b64d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb64d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *(uint *)((int)this + 4);
}

/* ref: FUN_00b64d70 */
float F_00b64d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb64d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_00b64bf0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
  return fVar1;
}

/* ref: FUN_00b64d80 */
uint F_00b64d80(unsigned int gen_a0)
{
  GEN_ENTER(0xb64d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b64dd0 */
unsigned int F_00b64dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb64dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int local_1c;
  uint local_18;
  
  iVar1 = *(int *)((int)this + 0x14);
  iVar5 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_18 = 0;
  if (*(int *)((int)this + 0x10) != 1) {
    iVar3 = iVar1 * 0x10;
    local_1c = 0;
    iVar4 = iVar3;
    do {
      iVar2 = *(int *)this;
      fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 4 + iVar2) -
                              (float10)*(float *)(iVar4 + 4 + iVar2))));
      fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + iVar2) -
                              (float10)*(float *)(iVar4 + iVar2))));
      fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 8 + iVar2) -
                              (float10)*(float *)(iVar4 + 8 + iVar2))));
      local_18 = local_18 + 1;
      *((float *)GEN_TOP((local_1c + *(int *)((int)this + 8)))) =
           ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6)))))));
      iVar4 = iVar4 + iVar3;
      iVar5 = iVar5 + iVar3;
      *(float *)((int)this + 0xc) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((local_1c + *(int *)((int)this + 8)))) +
                  (float10)*(float *)((int)this + 0xc))));
      local_1c = local_1c + iVar1 * 4;
    } while (local_18 < *(int *)((int)this + 0x10) - 1U);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + (*(int *)((int)this + 0x10) + -1) * iVar1 * 4))) = 0;
  return 0;
}

/* ref: FUN_00b64ec0 */
uint F_00b64ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb64ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar3 = *(int *)((int)this + 0x14);
  if (*(char *)((int)this + 0x18) == '\0') {
    iVar6 = param_2 + 1;
  }
  else if (param_2 < *(int *)((int)this + 0x10) + -2) {
    iVar6 = param_2 + 1;
  }
  else {
    iVar6 = 0;
  }
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 8) + iVar3 * param_2 * 4)));
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    pfVar5 = (float *)(iVar3 * param_2 * 0x10 + *(int *)this);
    pfVar4 = (float *)(iVar6 * iVar3 * 0x10 + *(int *)this);
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
    fVar8 = (float10)fVar1;
    local_30 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar4 - (float10)*pfVar5) *
                                       fVar7))) / fVar8)));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar4[1] - (float10)pfVar5[1]) *
                                       fVar7))) / fVar8)));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)(float)((float10)pfVar4[2] -
                                                                (float10)pfVar5[2])))) / fVar8)));
  }
  else {
    local_30 = REFG(float, 0x1375ac0);
    local_2c = REFG(float, 0x1375ac4);
    local_28 = REFG(float, 0x1375ac8);
  }
  pfVar4 = ((float *)GEN_TOP((iVar6 * iVar3 * 0x10 + *(int *)((int)this + 4))));
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  fVar7 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)local_30 - (float10)*pfVar4) * fVar7)));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)local_2c - (float10)fVar1) * fVar7)));
  param_1[2] = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)local_28 - (float10)fVar2))));
  return (uint)param_1;
}

/* ref: FUN_00b65020 */
uint F_00b65020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb65020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  
  if (*(char *)((int)this + 0x18) == '\0') {
    iVar4 = param_2 + -1;
  }
  else if (param_2 < 1) {
    iVar4 = *(int *)((int)this + 0x10) + -2;
  }
  else {
    iVar4 = param_2 + -1;
  }
  iVar4 = iVar4 * *(int *)((int)this + 0x14);
  fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 8) + iVar4 * 4)));
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    iVar6 = *(int *)((int)this + 0x14) * param_2;
    iVar3 = *(int *)this;
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
    fVar8 = (float10)fVar1;
    local_30 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar3 + iVar6 * 0x10) -
                                                        (float10)*(float *)(iVar3 + iVar4 * 0x10)))) *
                                       fVar7))) / fVar8)));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar3 + 4 +
                                                                            iVar6 * 0x10) -
                                                        (float10)*(float *)(iVar3 + 4 + iVar4 * 0x10
                                                                           )))) * fVar7))) / fVar8)));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)((float)GEN_TOF(((float10)*(float *)(iVar3 + 8 +
                                                                                    iVar6 * 0x10) -
                                                                (float10)*(float *)(iVar3 + 8 +
                                                                                   iVar4 * 0x10))))))) /
                      fVar8)));
  }
  else {
    local_30 = REFG(float, 0x1375ac0);
    local_2c = REFG(float, 0x1375ac4);
    local_28 = REFG(float, 0x1375ac8);
  }
  pfVar5 = ((float *)GEN_TOP((iVar4 * 0x10 + *(int *)((int)this + 4))));
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[2];
  fVar7 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)local_30 - (float10)*pfVar5) * fVar7)));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)local_2c - (float10)fVar1) * fVar7)));
  param_1[2] = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)local_28 - (float10)fVar2))));
  return (uint)param_1;
}

/* ref: FUN_00b65190 */
float F_00b65190(unsigned int gen_a0)
{
  GEN_ENTER(0xb65190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  int local_18;
  float local_14;
  
  local_18 = *(int *)((int)this + 0x10) + -1;
  local_14 = 0.0;
  if (local_18 != 0) {
    pfVar4 = *(float * PTR32 *)this;
    pfVar3 = pfVar4;
    do {
      pfVar3 = pfVar3 + *(int *)((int)this + 0x14) * 4;
      fVar2 = *pfVar4;
      pfVar1 = pfVar4 + 2;
      pfVar4 = pfVar4 + *(int *)((int)this + 0x14) * 4;
      local_18 = local_18 + -1;
      local_14 = ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)(float)((float10)fVar2 -
                                                                                (float10)*pfVar3) *
                                                                (float10)(float)((float10)fVar2 -
                                                                                (float10)*pfVar3) +
                                                               (float10)0.0) +
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)pfVar3[2]) *
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)pfVar3[2])))))))
                        + (float10)local_14)));
    } while (local_18 != 0);
  }
  return local_14;
}

/* ref: FUN_00b652b0 */
float F_00b652b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb652b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  float * pfVar7;
  int local_18;
  float local_14;
  
  iVar5 = *(int *)((int)this + 0x14);
  local_14 = 0.0;
  if (param_1 < param_2) {
    pfVar7 = (float *)(iVar5 * param_1 * 0x10 + *(int *)this);
    pfVar6 = ((float *)GEN_TOP(((param_1 + 1) * iVar5 * 0x10 + *(int *)this)));
    local_18 = param_2 - param_1;
    do {
      fVar3 = *pfVar7;
      fVar4 = *pfVar6;
      pfVar1 = pfVar7 + 2;
      pfVar2 = pfVar6 + 2;
      pfVar6 = pfVar6 + iVar5 * 4;
      pfVar7 = pfVar7 + iVar5 * 4;
      local_18 = local_18 + -1;
      local_14 = ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)(float)((float10)fVar3 -
                                                                                (float10)fVar4) *
                                                                (float10)(float)((float10)fVar3 -
                                                                                (float10)fVar4) +
                                                               (float10)0.0) +
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)*pfVar2) *
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)*pfVar2))))))) +
                        (float10)local_14)));
    } while (local_18 != 0);
  }
  return local_14;
}

/* ref: FUN_00b65370 */
uint F_00b65370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xb65370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = param_1;
  ((undefined4 *)(gen_frame + 0x80))[0] = *param_2;
  ((undefined4 *)(gen_frame + 0x80))[1] = param_2[1];
  (*(undefined4 *)(gen_frame + 0x90)) = *param_4;
  ((undefined4 *)(gen_frame + 0x80))[2] = param_2[2];
  (*(undefined4 *)(gen_frame + 0x94)) = param_4[1];
  ((undefined4 *)(gen_frame + 0x80))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x80))[3], REFG(float, 0x1087f04));
  (*(undefined4 *)(gen_frame + 0x9c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0xa0)) = *param_3;
  (*(undefined4 *)(gen_frame + 0xa4)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x98)) = param_4[2];
  (*(undefined4 *)(gen_frame + 0xb0)) = *param_5;
  (*(undefined4 *)(gen_frame + 0xa8)) = param_3[2];
  (*(undefined4 *)(gen_frame + 0xb4)) = param_5[1];
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = param_5[2];
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  puVar1 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0x40)),0x133d0a0,(uint)((undefined4 *)(gen_frame + 0x80)));
  fVar4 = (float10)param_6;
  puVar2 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar4 * (fVar4 * fVar4))));
  (*(float *)(gen_frame + 0x14)) = (float)(fVar4 * fVar4);
  (*(float *)(gen_frame + 0x18)) = param_6;
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  puVar1 = (undefined4 *)F_004eede0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x80)));
  (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar1;
  (*(undefined4 *)(gen_frame + 0x28)) = puVar1[2];
  (*(undefined4 *)(gen_frame + 0x2c)) = puVar1[3];
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = *puVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = (*(undefined4 *)(gen_frame + 0x24));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = (*(undefined4 *)(gen_frame + 0x28));
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)puVar2;
}

/* ref: FUN_00b65520 */
uint F_00b65520(unsigned int gen_a0)
{
  GEN_ENTER(0xb65520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37dc));
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b65550 */
float * F_00b65550(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb65550u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  pfVar1 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,((undefined1 *)(gen_frame + 0x10)),param_4 + 1)));
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,((undefined1 *)(gen_frame + 0x0)),param_4)));
  (*(float *)(gen_frame + 0x2c)) = *pfVar2;
  fVar3 = (float10)*pfVar2;
  fVar4 = (float10)param_3;
  *param_2 = ((float)GEN_TOF((fVar4 * ((float10)*pfVar1 - fVar3) + fVar3)));
  (*(float *)(gen_frame + 0x2c)) = pfVar2[1];
  fVar3 = (float10)pfVar2[1];
  param_2[1] = ((float)GEN_TOF((fVar3 + fVar4 * ((float10)pfVar1[1] - fVar3))));
  (*(float *)(gen_frame + 0x2c)) = pfVar2[2];
  fVar3 = (float10)pfVar2[2];
  param_2[2] = ((float)GEN_TOF((fVar3 + ((float10)pfVar1[2] - fVar3) * fVar4)));
  return param_2;
}

/* ref: FUN_00b655f0 */
float F_00b655f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb655f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  float * pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  iVar3 = 0;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (uVar1 != 1 && -1 < (int)(uVar1 - 1)) {
    do {
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),iVar3)));
      iVar3 = iVar3 + 1;
      pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),iVar3)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar2[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]);
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar2[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar4 = (float10)(float)((float10)pfVar2[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]);
      fVar5 = (float10)(float)((float10)*pfVar2 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      fVar6 = (float10)(float)((float10)pfVar2[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4)))))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x38)))))))))));
      (*(float *)(gen_frame + 0x3c)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x38))))) + (float10)(*(float *)(gen_frame + 0x3c)));
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    } while (iVar3 < (int)(uVar1 - 1));
  }
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b656b0 */
float F_00b656b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb656b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  pfVar1 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),param_1)));
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),param_1 + 1)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*pfVar1);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar2[1] - (float10)pfVar1[1]);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar2[2] - (float10)pfVar1[2]);
  fVar3 = (float10)(float)((float10)pfVar2[1] - (float10)pfVar1[1]);
  fVar4 = (float10)(float)((float10)*pfVar2 - (float10)*pfVar1);
  fVar5 = (float10)(float)((float10)pfVar2[2] - (float10)pfVar1[2]);
  (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF((fVar5 * fVar5 + (fVar4 * fVar4 + fVar3 * fVar3))));
  (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x3c)))));
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b65740 */
float F_00b65740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb65740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  while (param_1 < param_2) {
    (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),param_1)));
    param_1 = param_1 + 1;
    pfVar1 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),param_1)));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar1 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar1[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar1[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
    fVar2 = (float10)(float)((float10)pfVar1[1] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1]);
    fVar3 = (float10)(float)((float10)*pfVar1 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
    fVar4 = (float10)(float)((float10)pfVar1[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
    (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2)))))));
    (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x38)))))))))));
    (*(float *)(gen_frame + 0x3c)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x38))))) + (float10)(*(float *)(gen_frame + 0x3c)));
  }
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b657f0 */
float F_00b657f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb657f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  float * pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  iVar3 = 0;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (uVar1 != 1 && -1 < (int)(uVar1 - 1)) {
    (*(double *)(gen_frame + 0x30)) = 0.0;
    do {
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),iVar3)));
      iVar3 = iVar3 + 1;
      pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),iVar3)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar2[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar4 = (float10)(float)((float10)*pfVar2 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      fVar5 = (float10)(float)((float10)pfVar2[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar4 * fVar4 + (float10)(*(double *)(gen_frame + 0x30))) + fVar5 * fVar5))))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x38)))))))))));
      (*(float *)(gen_frame + 0x3c)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x38))))) + (float10)(*(float *)(gen_frame + 0x3c)));
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    } while (iVar3 < (int)(uVar1 - 1));
  }
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b658b0 */
float F_00b658b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb658b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  pfVar1 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),param_1)));
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),param_1 + 1)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*pfVar1);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar2[2] - (float10)pfVar1[2]);
  fVar3 = (float10)(float)((float10)*pfVar2 - (float10)*pfVar1);
  fVar4 = (float10)(float)((float10)pfVar2[2] - (float10)pfVar1[2]);
  (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF((fVar4 * fVar4 + ((float10)0 * (float10)0 + fVar3 * fVar3))));
  (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x3c)))));
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b65940 */
float F_00b65940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb65940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  if (param_1 < param_2) {
    (*(double *)(gen_frame + 0x30)) = 0.0;
    do {
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x10)),param_1)));
      param_1 = param_1 + 1;
      pfVar1 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this,((undefined1 *)(gen_frame + 0x0)),param_1)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar1 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar1[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      fVar2 = (float10)(float)((float10)*pfVar1 - (float10)*(*(float * PTR32 *)(gen_frame + 0x38)));
      fVar3 = (float10)(float)((float10)pfVar1[2] - (float10)(*(float * PTR32 *)(gen_frame + 0x38))[2]);
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar2 * fVar2 + (float10)(*(double *)(gen_frame + 0x30))) + fVar3 * fVar3))))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x38)))))))))));
      (*(float *)(gen_frame + 0x3c)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x38))))) + (float10)(*(float *)(gen_frame + 0x3c)));
    } while (param_1 < param_2);
  }
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_00b65a00 */
float F_00b65a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb65a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar1 = **(int * PTR32 *)((int)this + 4);
  iVar3 = (*(int * PTR32 *)((int)this + 4))[5];
  iVar2 = (param_1 + 1) * iVar3;
  iVar3 = iVar3 * param_1;
  fVar4 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar1 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar1 + iVar2 * 0x10))));
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar1 + 8 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar1 + 8 + iVar2 * 0x10))));
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar5 * fVar5 + ((float10)0 * (float10)0 + fVar4 * fVar4)))))));
}

/* ref: FUN_00b65a80 */
float F_00b65a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb65a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_00b652b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
  return fVar1;
}

/* ref: FUN_00b65a90 */
uint F_00b65a90(unsigned int gen_a0)
{
  GEN_ENTER(0xb65a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (*(int * PTR32 *)(gen_frame + 0xa8)) = this;
  F_00b64dd0(this);
  (*(uint *)(gen_frame + 0xa0)) = *(uint *)((int)this + 0x14);
  iVar4 = *(int *)((int)this + 0x10);
  if (*(char *)((int)this + 0x18) != '\0') {
    (*(uint *)(gen_frame + 0xac)) = 0;
    if (iVar4 != 1) {
      iVar5 = 0;
      (*(int *)(gen_frame + 0x98)) = (*(uint *)(gen_frame + 0xa0)) << 4;
      do {
        if ((*(uint *)(gen_frame + 0xac)) < iVar4 - 2U) {
          iVar3 = (*(uint *)(gen_frame + 0xac)) + 1;
        }
        else {
          iVar3 = 0;
        }
        if ((*(uint *)(gen_frame + 0xac)) == 0) {
          (*(uint *)(gen_frame + 0xa4)) = iVar4 - 2U;
        }
        else {
          (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xac)) - 1;
        }
        iVar3 = iVar3 * (*(uint *)(gen_frame + 0xa0));
        iVar4 = *(int *)this;
        (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar4 + iVar5))));
        (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 4 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar4 + 4 + iVar5))));
        (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 8 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar4 + 8 + iVar5))));
        (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x70));
        (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x74));
        (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x78));
        F_005fe2e0(&(*(float *)(gen_frame + 0x30)),(uint)&(*(float *)(gen_frame + 0x50)));
        iVar3 = (*(uint *)(gen_frame + 0xa4)) * (*(uint *)(gen_frame + 0xa0));
        (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar4 + iVar5))));
        (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 4 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar4 + 4 + iVar5))));
        (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 8 + iVar3 * 0x10) -
                          (float10)*(float *)(iVar4 + 8 + iVar5))));
        (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x80));
        (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x84));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x88));
        F_005fe2e0(&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x20)));
        (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x18)));
        (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x18)));
        F_005fe2e0(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x40)));
        iVar4 = (*(int * PTR32 *)(gen_frame + 0xa8))[1];
        *(float *)(iVar4 + iVar5) = (*(float *)(gen_frame + 0x0));
        *(float *)(iVar4 + 4 + iVar5) = (*(float *)(gen_frame + 0x4));
        *(float *)(iVar4 + 8 + iVar5) = (*(float *)(gen_frame + 0x8));
        iVar4 = (*(int * PTR32 *)(gen_frame + 0xa8))[4];
        (*(uint *)(gen_frame + 0xac)) = (*(uint *)(gen_frame + 0xac)) + 1;
        iVar5 = iVar5 + (*(int *)(gen_frame + 0x98));
        this = (*(int * PTR32 *)(gen_frame + 0xa8));
      } while ((*(uint *)(gen_frame + 0xac)) < iVar4 - 1U);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    iVar4 = (*(int *)((int)this + 0x10) + -1) * (*(uint *)(gen_frame + 0xa0));
    puVar2[iVar4 * 4] = *puVar2;
    puVar2[iVar4 * 4 + 1] = puVar2[1];
    puVar2[iVar4 * 4 + 2] = puVar2[2];
    return (*(uint *)(gen_frame + 0xa0));
  }
  (*(uint *)(gen_frame + 0xa4)) = 1;
  if (1 < iVar4 - 1U) {
    iVar4 = (*(uint *)(gen_frame + 0xa0)) << 4;
    (*(int *)(gen_frame + 0x9c)) = (*(uint *)(gen_frame + 0xa0)) << 5;
    (*(int *)(gen_frame + 0x98)) = iVar4;
    (*(uint *)(gen_frame + 0xac)) = 0;
    do {
      iVar5 = *(int *)this;
      (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF(((float10)*(float *)(iVar5 + (*(int *)(gen_frame + 0x9c))) - (float10)*(float *)(iVar5 + iVar4))))
      ;
      (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 4 + (*(int *)(gen_frame + 0x9c))) -
                        (float10)*(float *)(iVar5 + 4 + iVar4))));
      (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 8 + (*(int *)(gen_frame + 0x9c))) -
                        (float10)*(float *)(iVar5 + 8 + iVar4))));
      (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x68));
      F_005fe2e0(&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(iVar5 + (*(uint *)(gen_frame + 0xac))) - (float10)*(float *)(iVar5 + iVar4))))
      ;
      (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 4 + (*(uint *)(gen_frame + 0xac))) -
                        (float10)*(float *)(iVar5 + 4 + iVar4))));
      (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 8 + (*(uint *)(gen_frame + 0xac))) -
                        (float10)*(float *)(iVar5 + 8 + iVar4))));
      (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x80));
      (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x84));
      (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x88));
      F_005fe2e0(&(*(float *)(gen_frame + 0x30)),(uint)&(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x38)));
      F_005fe2e0(&(*(float *)(gen_frame + 0x50)),(uint)&(*(float *)(gen_frame + 0x20)));
      iVar5 = (*(int * PTR32 *)(gen_frame + 0xa8))[1];
      *(float *)(iVar5 + iVar4) = (*(float *)(gen_frame + 0x50));
      *(float *)(iVar5 + 4 + iVar4) = (*(float *)(gen_frame + 0x54));
      *(float *)(iVar5 + 8 + iVar4) = (*(float *)(gen_frame + 0x58));
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + (*(int *)(gen_frame + 0x98));
      (*(uint *)(gen_frame + 0xac)) = (*(uint *)(gen_frame + 0xac)) + (*(int *)(gen_frame + 0x98));
      (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
      iVar4 = iVar4 + (*(int *)(gen_frame + 0x98));
      this = (*(int * PTR32 *)(gen_frame + 0xa8));
    } while ((*(uint *)(gen_frame + 0xa4)) < (*(int * PTR32 *)(gen_frame + 0xa8))[4] - 1U);
  }
  puVar1 = (undefined4 *)F_00b64ec0(this,&(*(float *)(gen_frame + 0x50)),0);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  iVar4 = (*(int *)((int)this + 0x10) + -1) * (*(uint *)(gen_frame + 0xa0));
  puVar2 = (undefined4 *)F_00b65020(this,&(*(float *)(gen_frame + 0x50)),iVar4);
  puVar1 = ((undefined4 *)GEN_TOP((iVar4 * 0x10 + *(int *)((int)this + 4))));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  return (uint)puVar2;
}

/* ref: FUN_00b66190 */
unsigned int F_00b66190(unsigned int gen_a0)
{
  GEN_ENTER(0xb66190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar4 = *(int *)((int)this + 0x14);
  local_24 = 1;
  if (1 < *(int *)((int)this + 0x10) - 1U) {
    iVar1 = iVar4 * 4;
    local_20 = iVar4 << 5;
    iVar4 = iVar4 * 0x10;
    local_18 = 0;
    local_1c = 0;
    iVar5 = iVar4;
    local_28 = iVar1;
    do {
      iVar2 = *(int *)this;
      fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 4 + iVar2) -
                              (float10)*(float *)(local_1c + 4 + iVar2))));
      fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + iVar2) -
                              (float10)*(float *)(local_1c + iVar2))));
      fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 8 + iVar2) -
                              (float10)*(float *)(local_1c + 8 + iVar2))));
      fVar9 = (float10)((float)GEN_TOF(((float10)*(float *)(local_20 + 4 + iVar2) -
                              (float10)*(float *)(iVar5 + 4 + iVar2))));
      fVar10 = (float10)((float)GEN_TOF(((float10)*(float *)(local_20 + iVar2) -
                               (float10)*(float *)(iVar5 + iVar2))));
      fVar11 = (float10)((float)GEN_TOF(((float10)*(float *)(local_20 + 8 + iVar2) -
                               (float10)*(float *)(iVar5 + 8 + iVar2))));
      pfVar3 = ((float *)GEN_TOP((*(int *)((int)this + 4) + iVar5)));
      fVar9 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar11 * fVar11 +
                                                                    (fVar10 * fVar10 + fVar9 * fVar9
                                                                    ))))))) /
                              (float10)*((float *)GEN_TOP((local_28 + *(int *)((int)this + 8)))))));
      fVar6 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar8 * fVar8 +
                                                                    (fVar7 * fVar7 + fVar6 * fVar6))))
                                                   ))) /
                              (float10)*((float *)GEN_TOP((local_18 + *(int *)((int)this + 8)))))));
      fVar7 = fVar6 + fVar9;
      fVar6 = (float10)((float)GEN_TOF((((fVar6 * (float10)*(double *)&REFG(undefined, 0x1094788)) * fVar9) /
                              (fVar7 * fVar7))));
      *pfVar3 = (float)(fVar6 * (float10)*pfVar3);
      local_24 = local_24 + 1;
      pfVar3[1] = (float)((float10)pfVar3[1] * fVar6);
      pfVar3[2] = (float)(fVar6 * (float10)pfVar3[2]);
      local_18 = local_18 + iVar1;
      local_28 = local_28 + iVar1;
      local_1c = local_1c + iVar4;
      local_20 = local_20 + iVar4;
      iVar5 = iVar5 + iVar4;
    } while (local_24 < *(int *)((int)this + 0x10) - 1U);
  }
  return 0;
}

/* ref: FUN_00b66320 */
uint F_00b66320(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66320u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar2 = param_1[5] * param_4;
  (*(float *)(gen_frame + 0x3c)) = *(float *)(param_1[2] + iVar2 * 4);
  iVar1 = param_1[1];
  iVar2 = iVar2 * 0x10;
  fVar4 = (float10)(*(float *)(gen_frame + 0x3c));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF((fVar4 * (float10)*(float *)(iVar1 + iVar2))));
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x3c));
  iVar3 = (param_4 + 1) * param_1[5] * 0x10;
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 4 + iVar2) * fVar4)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((fVar4 * (float10)*(float *)(iVar1 + 8 + iVar2))));
  (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x28));
  fVar4 = (float10)(*(float *)(gen_frame + 0x3c));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF((fVar4 * (float10)*(float *)(iVar3 + iVar1))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 4 + iVar1) * fVar4)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((fVar4 * (float10)*(float *)(iVar3 + 8 + iVar1))));
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
  F_00b65370(param_2,*param_1 + iVar2,&(*(float *)(gen_frame + 0x0)),iVar3 + *param_1,&(*(float *)(gen_frame + 0x10)),param_3);
  return param_2;
}

/* ref: FUN_00b66400 */
unsigned int F_00b66400(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66400u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  float10 fVar4;
  
  (*(int *)(gen_frame + 0x38)) = param_4;
  (*(float *)(gen_frame + 0x3c)) = (float)((float10)REFG(double, 0x1091858) + (float10)param_3);
  fVar4 = (float10)(float)((float10)REFG(double, 0x1091858) + (float10)param_3);
  if ((float10)1 < fVar4) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    (*(float *)(gen_frame + 0x3c)) = (float)(fVar4 - (float10)REFG(double, 0x1088130));
    (*(int *)(gen_frame + 0x38)) = param_4 + 1;
    if (iVar1 <= param_4 + 1) {
      pfVar3 = ((float *)GEN_TOP((*(int *)(param_1 + 0x14) * iVar1 * 0x10 + *(int *)(param_1 + 4))));
      *param_2 = *pfVar3;
      param_2[1] = pfVar3[1];
      param_2[2] = pfVar3[2];
      return 0;
    }
  }
  pfVar3 = (float *)F_00b66320(param_1,&(*(float *)(gen_frame + 0x10)),param_3,param_4);
  pfVar2 = (float *)F_00b66320(param_1,((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*pfVar3);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar2[1] - (float10)pfVar3[1]);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar2[2] - (float10)pfVar3[2]);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar2 - (float10)*pfVar3);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar2[1] - (float10)pfVar3[1]);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar2[2] - (float10)pfVar3[2]);
  F_005fe2e0(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x10)));
  *param_2 = (*(float *)(gen_frame + 0x20));
  param_2[1] = (*(float *)(gen_frame + 0x24));
  param_2[2] = (*(float *)(gen_frame + 0x28));
  return 0;
}

/* ref: FUN_00b66510 */
uint F_00b66510(unsigned int gen_a0)
{
  GEN_ENTER(0xb66510u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x10f37dc));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b66530 */
uint F_00b66530(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb66530u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    param_3 = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 - 1);
    dVar1 = (double)((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
    param_3 = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),(*(undefined4 *)(gen_frame + 0x4))));
    (*(float *)(gen_frame + 0x8)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  F_00b65550(param_1,param_2,param_3,iVar3);
  return param_2;
}

/* ref: FUN_00b66680 */
float F_00b66680(unsigned int gen_a0)
{
  GEN_ENTER(0xb66680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b655f0(this);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b64b10(*(undefined * PTR32 *)((int)this + 4));
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b666d0 */
float F_00b666d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb666d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  float fVar2;
  
  sVar1 = *(short *)((int)this + 0xc);
  fVar2 = 0.0;
  if (sVar1 == 0) {
    fVar2 = F_00b656b0(this,param_1);
    return fVar2;
  }
  if (sVar1 != 1) {
    if (sVar1 != 2) {
      return 0.0;
    }
    fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) +
                      *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) * param_1 * 4)));
  }
  return fVar2;
}

/* ref: FUN_00b66720 */
float F_00b66720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb66720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b65740(this,param_1,param_2);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b64bf0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b66780 */
float F_00b66780(unsigned int gen_a0)
{
  GEN_ENTER(0xb66780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b657f0(this);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b65190(*(undefined * PTR32 *)((int)this + 4));
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b667d0 */
float F_00b667d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb667d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b658b0(this,param_1);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b65a00(this,param_1);
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b66830 */
float F_00b66830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb66830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  float fVar2;
  float local_8;
  
  sVar1 = *(short *)((int)this + 0xc);
  local_8 = 0.0;
  if (sVar1 == 0) {
    local_8 = F_00b65940(this,param_1,param_2);
  }
  else {
    if (sVar1 == 1) {
      return 0.0;
    }
    if (sVar1 == 2) {
      fVar2 = F_00b652b0(*(undefined * PTR32 *)((int)this + 4),param_1,param_2);
      return fVar2;
    }
  }
  return local_8;
}

/* ref: FUN_00b66890 */
unsigned int F_00b66890(unsigned int gen_a0)
{
  GEN_ENTER(0xb66890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * this_01;
  
  F_00b65a90(this);
  F_00b65e10(this);
  F_00b65e10(this_00);
  F_00b65e10(this_01);
  return 0;
}

/* ref: FUN_00b668b0 */
unsigned int F_00b668b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb668b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b65a90(this);
  F_00b65e10(this);
  return 0;
}

/* ref: FUN_00b668c0 */
unsigned int F_00b668c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb668c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  F_00b65a90(this);
  F_00b65e10(this);
  F_00b66190(this_00);
  return 0;
}

/* ref: FUN_00b668e0 */
uint F_00b668e0(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb668e0u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  F_00b64a60((undefined4)gen_fl2bits((*(float *)&gen_args[0])),&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b66320((undefined4)gen_fl2bits((*(float *)&gen_args[0])),(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b66920 */
uint F_00b66920(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb66920u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  F_00b64a60((undefined4)gen_fl2bits((*(float *)&gen_args[0])),&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b66400((undefined4)gen_fl2bits((*(float *)&gen_args[0])),(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b66960 */
uint F_00b66960(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66960u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  
  uVar4 = REFG(float, 0x1375ac8);
  uVar3 = REFG(float, 0x1375ac4);
  uVar2 = REFG(float, 0x1375ac0);
  sVar1 = *(short *)(param_1 + 0xc);
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  if (sVar1 == 0) {
    puVar5 = (undefined4 *)F_00b677f0(param_1,((undefined1 *)(gen_frame + 0x0)),param_3,param_4);
    *param_2 = *puVar5;
    param_2[1] = puVar5[1];
    param_2[2] = puVar5[2];
  }
  else if (sVar1 == 1) {
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
  }
  else if (sVar1 == 2) {
    F_00b66320(*(undefined4 *)(param_1 + 4),&(*(undefined4 *)(gen_frame + 0x10)),param_3,param_4);
    *param_2 = (*(undefined4 *)(gen_frame + 0x10));
    param_2[1] = (*(undefined4 *)(gen_frame + 0x14));
    param_2[2] = (*(undefined4 *)(gen_frame + 0x18));
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    param_2[1] = 0;
  }
  return (uint)param_2;
}

/* ref: FUN_00b66b20 */
unsigned int F_00b66b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1;
  uVar3 = F_00406bb0(param_1 * 0x24 + 0x20,0,0);
  *(uint *)((int)this + 4) = uVar3;
  **(int * PTR32 *)((int)this + 4) = uVar3 + 0x20;
  iVar4 = uVar3 + 0x20 + param_1 * 0x10;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar4 + param_1 * 0x10;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = param_1;
  iVar4 = **(int * PTR32 *)((int)this + 4);
  param_1 = 0;
  if (3 < iVar7) {
    iVar8 = (iVar7 - 4U >> 2) + 1;
    puVar6 = (undefined4 *)(iVar4 + 0x18);
    puVar5 = (undefined4 *)(param_2 + 0x2c);
    param_1 = iVar8 * 4;
    do {
      uVar1 = puVar5[-10];
      uVar2 = puVar5[-9];
      puVar6[-6] = puVar5[-0xb];
      puVar6[-5] = uVar1;
      puVar6[-4] = uVar2;
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      puVar6[-2] = puVar5[-2];
      puVar6[-1] = uVar1;
      *puVar6 = uVar2;
      uVar1 = puVar5[8];
      uVar2 = puVar5[9];
      puVar6[2] = puVar5[7];
      puVar6[3] = uVar1;
      puVar6[4] = uVar2;
      uVar1 = puVar5[0x11];
      uVar2 = puVar5[0x12];
      puVar6[6] = puVar5[0x10];
      puVar6[7] = uVar1;
      puVar6[8] = uVar2;
      puVar5 = puVar5 + 0x24;
      puVar6 = puVar6 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (param_1 < iVar7) {
    puVar6 = (undefined4 *)(iVar4 + param_1 * 0x10 + 8);
    iVar7 = iVar7 - param_1;
    puVar5 = (undefined4 *)(param_2 + 8 + param_1 * 0x24);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      puVar6[-2] = puVar5[-2];
      puVar6[-1] = uVar1;
      *puVar6 = uVar2;
      puVar5 = puVar5 + 9;
      puVar6 = puVar6 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((char)param_3 == '\0') {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) & 0xfffd;
  }
  else {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) | 2;
  }
  *((char *)GEN_TOP((*(int *)((int)this + 4) + 0x18))) = (char)param_3;
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  F_00b65a90(this_00);
  F_00b65e10(this_00);
  return 0;
}

/* ref: FUN_00b66cc0 */
unsigned int F_00b66cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb66cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1;
  uVar3 = F_00406bb0(param_1 * 0x24 + 0x20,0,0);
  *(uint *)((int)this + 4) = uVar3;
  **(int * PTR32 *)((int)this + 4) = uVar3 + 0x20;
  iVar4 = uVar3 + 0x20 + param_1 * 0x10;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar4 + param_1 * 0x10;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) = param_1;
  iVar4 = **(int * PTR32 *)((int)this + 4);
  param_1 = 0;
  if (3 < iVar7) {
    puVar6 = (undefined4 *)(iVar4 + 0x24);
    puVar5 = (undefined4 *)(param_2 + 0x18);
    iVar8 = (iVar7 - 4U >> 2) + 1;
    param_1 = iVar8 * 4;
    do {
      uVar1 = puVar5[-5];
      uVar2 = puVar5[-4];
      puVar6[-9] = puVar5[-6];
      puVar6[-8] = uVar1;
      puVar6[-7] = uVar2;
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      puVar6[-5] = puVar5[-2];
      puVar6[-4] = uVar1;
      *((undefined4 *)GEN_TOP(((iVar4 - param_2) + (int)puVar5))) = uVar2;
      uVar1 = puVar5[3];
      uVar2 = puVar5[4];
      puVar6[-1] = puVar5[2];
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      uVar1 = puVar5[7];
      uVar2 = puVar5[8];
      puVar6[3] = puVar5[6];
      puVar6[4] = uVar1;
      puVar6[5] = uVar2;
      puVar5 = puVar5 + 0x10;
      puVar6 = puVar6 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (param_1 < iVar7) {
    puVar5 = (undefined4 *)(iVar4 + param_1 * 0x10);
    puVar6 = (undefined4 *)(param_1 * 0x10 + 8 + param_2);
    iVar7 = iVar7 - param_1;
    do {
      uVar1 = puVar6[-1];
      uVar2 = *puVar6;
      *puVar5 = puVar6[-2];
      puVar5[1] = uVar1;
      *((undefined4 *)GEN_TOP(((iVar4 - param_2) + (int)puVar6))) = uVar2;
      puVar6 = puVar6 + 4;
      puVar5 = puVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((char)param_3 == '\0') {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) & 0xfffd;
  }
  else {
    *(ushort *)((int)this + 0xe) = *(ushort *)((int)this + 0xe) | 2;
  }
  *((char *)GEN_TOP((*(int *)((int)this + 4) + 0x18))) = (char)param_3;
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  F_00b65a90(this_00);
  F_00b65e10(this_00);
  return 0;
}

/* ref: FUN_00b66e50 */
uint F_00b66e50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb66e50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  
  uVar4 = REFG(float, 0x1375ac8);
  uVar3 = REFG(float, 0x1375ac4);
  uVar2 = REFG(float, 0x1375ac0);
  sVar1 = *(short *)(param_1 + 0xc);
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  if (sVar1 == 0) {
    puVar5 = (undefined4 *)F_00b67b00(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
    *param_2 = *puVar5;
    param_2[1] = puVar5[1];
    param_2[2] = puVar5[2];
  }
  else if (sVar1 == 1) {
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
  }
  else if (sVar1 == 2) {
    F_00b64a60(*(undefined4 *)(param_1 + 4),&(*(float *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x2c)),param_3);
    F_00b66320(*(undefined4 *)(param_1 + 4),&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)));
    *param_2 = (*(undefined4 *)(gen_frame + 0x10));
    param_2[1] = (*(undefined4 *)(gen_frame + 0x14));
    param_2[2] = (*(undefined4 *)(gen_frame + 0x18));
  }
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    param_2[1] = 0;
  }
  return (uint)param_2;
}

/* ref: FUN_00b66f40 */
uint F_00b66f40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb66f40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 == 0) {
    puVar3 = (undefined4 *)F_00b67bc0(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    return (uint)param_2;
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      uVar2 = *(undefined4 *)(param_1 + 4);
      F_00b64a60(uVar2,&(*(float *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x2c)),param_3);
      F_00b66400(uVar2,&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)));
      *param_2 = (*(undefined4 *)(gen_frame + 0x10));
      param_2[1] = (*(undefined4 *)(gen_frame + 0x14));
      param_2[2] = (*(undefined4 *)(gen_frame + 0x18));
      return (uint)param_2;
    }
    return (uint)param_2;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1375ac4));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1375ac8));
  return (uint)param_2;
}

/* ref: FUN_00b67040 */
uint F_00b67040(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb67040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  uVar2 = REFG(undefined4, 0x1302cf4);
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 == 0) {
    puVar4 = (undefined4 *)F_00b68040(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
    *param_2 = *puVar4;
    param_2[1] = puVar4[1];
    uVar2 = puVar4[3];
    param_2[2] = puVar4[2];
    param_2[3] = uVar2;
    return (uint)param_2;
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      F_00b64a60(*(undefined4 *)(param_1 + 4),&(*(float *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x2c)),param_3);
      F_00b67db0(param_1,&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)));
      *param_2 = (*(undefined4 *)(gen_frame + 0x10));
      param_2[1] = (*(undefined4 *)(gen_frame + 0x14));
      param_2[2] = (*(undefined4 *)(gen_frame + 0x18));
      param_2[3] = (*(undefined4 *)(gen_frame + 0x1c));
      return (uint)param_2;
    }
    return (uint)param_2;
  }
  *param_2 = REFG(undefined4, 0x1302cf0);
  uVar3 = REFG(undefined4, 0x1302cf8);
  param_2[1] = uVar2;
  uVar2 = REFG(undefined4, 0x1302cfc);
  param_2[2] = uVar3;
  param_2[3] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00b672f0 */
uint F_00b672f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb672f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  undefined4 * puVar2;
  
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 == 0) {
    puVar2 = (undefined4 *)F_00b68130(param_1,((undefined1 *)(gen_frame + 0x0)),param_3);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    return (uint)param_2;
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      puVar2 = (undefined4 *)F_00b68270(param_1,((undefined1 *)(gen_frame + 0x10)),param_3);
      *param_2 = *puVar2;
      param_2[1] = puVar2[1];
      param_2[2] = puVar2[2];
      return (uint)param_2;
    }
    return (uint)param_2;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1375ac4));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1375ac8));
  return (uint)param_2;
}

/* ref: FUN_00b675a0 */
unsigned int F_00b675a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb675a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = REFG(undefined4, 0x1302cf4);
  *param_1 = REFG(undefined4, 0x1302cf0);
  uVar2 = REFG(undefined4, 0x1302cf8);
  param_1[1] = uVar1;
  uVar1 = REFG(undefined4, 0x1302cfc);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return 0;
}

/* ref: FUN_00b675d0 */
uint F_00b675d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb675d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  double dVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar1 = *param_1;
  if (REFG(float, 0x1087f04) <= param_4) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
    uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x10))(param_1);
    *param_3 = uVar3 - 2;
    return uVar3 - 2;
  }
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x10))();
  (*(int *)(gen_frame + 0x8)) = uVar3 - 1;
  dVar2 = (double)((float)GEN_TOF(((float10)(int)(uVar3 - 1) * (float10)param_4)));
  fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
  *param_2 = (float)fVar4;
  *param_3 = (int)gen_bits2d(CONCAT44((*(int *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4))));
  return (int)gen_bits2d(CONCAT44((*(int *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4))));
}

/* ref: FUN_00b67660 */
unsigned int F_00b67660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb67660u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*(float *)param_2) +
                    (float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      fVar1 * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      fVar1 * ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)))));
  param_1[3] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) +
                      ((float10)param_3[3] - (float10)*(float *)(param_2 + 0xc)) * fVar1)));
  return 0;
}

/* ref: FUN_00b676e0 */
uint F_00b676e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb676e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00b676f0 */
uint F_00b676f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb676f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf4 */
uint F_00b67710(void)
{
  GEN_ENTER(0xb67710u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf5 */
uint F_00b67720(void)
{
  GEN_ENTER(0xb67720u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf6 */
uint F_00b67730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb67730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf7 */
unsigned int F_00b67740(void)
{
  GEN_ENTER(0xb67740u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf8 */
unsigned int F_00b67750(void)
{
  GEN_ENTER(0xb67750u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf1 */
uint F_00b67760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb67760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf2 */
uint F_00b67790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb67790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf3 */
uint F_00b677c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb677c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c60));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c64));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c68));
  return (uint)param_1;
}

/* ref: FUN_00b677f0 */
uint F_00b677f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb677f0u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  pfVar1 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined1 *)(gen_frame + 0x10)),param_4 + 1)));
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1,((undefined1 *)(gen_frame + 0x0)),param_4)));
  (*(float *)(gen_frame + 0x2c)) = *pfVar2;
  fVar3 = (float10)*pfVar2;
  fVar4 = (float10)param_3;
  *param_2 = ((float)GEN_TOF((fVar4 * ((float10)*pfVar1 - fVar3) + fVar3)));
  (*(float *)(gen_frame + 0x2c)) = pfVar2[1];
  fVar3 = (float10)pfVar2[1];
  param_2[1] = ((float)GEN_TOF((fVar3 + fVar4 * ((float10)pfVar1[1] - fVar3))));
  (*(float *)(gen_frame + 0x2c)) = pfVar2[2];
  fVar3 = (float10)pfVar2[2];
  param_2[2] = ((float)GEN_TOF((fVar3 + ((float10)pfVar1[2] - fVar3) * fVar4)));
  return (uint)param_2;
}

/* ref: FUN_00b67890 */
uint F_00b67890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb67890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00b678c0 */
uint F_00b678c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb678c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00b678f0 */
uint F_00b678f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb678f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00b67920 */
uint F_00b67920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb67920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this,&(*(float *)(gen_frame + 0x10)),param_3);
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this,&(*(float *)(gen_frame + 0x20)),param_3 + 1);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x18)));
  puVar1 = (undefined4 *)F_0046f390(&(*(float *)(gen_frame + 0x0)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00b679c0 */
uint F_00b679c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb679c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00b679f0 */
uint F_00b679f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb679f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::DevEnv::Common::ControlPoint::IControlPoint::vf0 */
uint F_00b67ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb67ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37dc));
  if (*(int *)(this + 4) != 0) {
    F_00406ad0(*(int *)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b67b00 */
uint F_00b67b00(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb67b00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    param_3 = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 - 1);
    dVar1 = (double)((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
    param_3 = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),(*(undefined4 *)(gen_frame + 0x4))));
    (*(float *)(gen_frame + 0x8)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  F_00b677f0(param_1,param_2,param_3,iVar3);
  return param_2;
}

/* ref: FUN_00b67b90 */
uint F_00b67b90(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb67b90u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00b66320(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return param_2;
}

/* ref: FUN_00b67bc0 */
uint F_00b67bc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb67bc0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    param_3 = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 - 1);
    dVar1 = (double)((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
    param_3 = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),(*(undefined4 *)(gen_frame + 0x4))));
    (*(float *)(gen_frame + 0x8)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  F_00b67920(param_1,param_2,(undefined4)gen_fl2bits(param_3),iVar3);
  return param_2;
}

/* ref: FUN_00b67c50 */
uint F_00b67c50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb67c50u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00b66400(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return param_2;
}

/* ref: FUN_00b67ee0 */
uint F_00b67ee0(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb67ee0u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  uVar1 = *(undefined4 *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 4);
  F_00b64a60(uVar1,&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b66320(uVar1,(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b68000 */
uint F_00b68000(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68000u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  uVar1 = *(undefined4 *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 4);
  F_00b64a60(uVar1,&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b66400(uVar1,(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b68040 */
uint F_00b68040(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68040u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    param_3 = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 - 1);
    dVar1 = (double)((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x4)));
    param_3 = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))),(*(undefined4 *)(gen_frame + 0x4))));
    (*(float *)(gen_frame + 0x8)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  F_00b67c80(param_1,param_2,param_3,iVar3);
  return param_2;
}

/* ref: FUN_00b680d0 */
uint F_00b680d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb680d0u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00b67db0(param_1,param_2,param_3,param_4);
  return param_2;
}

/* ref: FUN_00b680f0 */
uint F_00b680f0(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb680f0u, 0u, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  F_00b64a60(*(undefined4 *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 4),&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[2]),(*(float *)&gen_args[2]));
  F_00b67db0((undefined4)gen_fl2bits((*(float *)&gen_args[0])),(*(uint *)&gen_args[1]),(*(float *)(gen_frame + 0x8)),(undefined4)gen_fl2bits((*(float *)&gen_args[2])));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b68130 */
uint F_00b68130(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68130u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if (REFG(float, 0x1087f04) <= param_3) {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    iVar3 = uVar2 - 2;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))();
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar2 - 1);
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(int)(uVar2 - 1) * (float10)param_3)));
    dVar1 = (double)(*(float *)(gen_frame + 0x1c));
    fVar4 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar1),
                         (int)((ulonglong)gen_d2bits(dVar1) >> 0x20),&(*(undefined4 *)(gen_frame + 0x8)));
    (*(float *)(gen_frame + 0x1c)) = (float)fVar4;
    dVar1 = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))),(*(undefined4 *)(gen_frame + 0x8))));
    (*(float *)(gen_frame + 0xc)) = (float)dVar1;
    iVar3 = (int)dVar1;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1302c90));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1302c94));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1302c98));
  F_00b67c80(param_1,((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x1c)),iVar3);
  F_004f41e0(param_2,((undefined1 *)(gen_frame + 0x0)));
  return (uint)param_2;
}

/* ref: FUN_00b68270 */
uint F_00b68270(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00b64a60(*(undefined4 *)(param_1 + 4),&(*(float *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x1c)),param_3);
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1302c90));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1302c94));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1302c98));
  F_00b67db0(param_1,((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)));
  F_004f41e0(param_2,((undefined1 *)(gen_frame + 0x0)));
  return (uint)param_2;
}

/* ref: FUN_00b68310 */
uint F_00b68310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*(uint *)this ^ *param_1) & 0xc0000000) == 0 &&
               ((*(uint *)this ^ *param_1) & 0x3fffffff) == 0);
}

/* ref: FUN_00b68340 */
uint F_00b68340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x45c) = param_2;
  return param_2;
}

/* ref: FUN_00b68360 */
unsigned int F_00b68360(float gen_a0)
{
  GEN_ENTER(0xb68360u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b68380 */
unsigned int F_00b68380(unsigned int gen_a0)
{
  GEN_ENTER(0xb68380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0x14) == 0) && (*(int *)((int)this + 0x10) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = 0;
    F_00b59c20(REFG(undefined4, 0x14c4e78),*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00b683c0 */
byte F_00b683c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb683c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x9dc);
  if ((iVar1 != 0) && (-1 < *(int *)(param_1 + 4))) {
    piVar2 = (int *)((int)this + iVar1 * 4 + 0x9bc);
    do {
      piVar2 = piVar2 + -1;
      iVar1 = iVar1 + -1;
      if (*piVar2 == *(int *)(param_1 + 4)) {
        return 0;
      }
    } while (iVar1 != 0);
  }
  return 1;
}

/* ref: FUN_00b68400 */
unsigned int F_00b68400(unsigned int gen_a0)
{
  GEN_ENTER(0xb68400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00b68410 */
uint F_00b68410(unsigned int gen_a0)
{
  GEN_ENTER(0xb68410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((uVar1 == 0) && (uVar1 = F_00b59660(REFG(undefined4, 0x14c4e78),(int)this + 0x9a8), uVar1 != 0)) {
    *(uint *)((int)this + 0x10) = uVar1;
    F_00b595f0(uVar1);
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
  }
  return uVar1;
}

/* ref: FUN_00b68450 */
uint F_00b68450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f38a0));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[0x269] = param_2;
  F_00bbac80(in_ecx + 0x26a);
  in_ecx[0x278] = in_ecx[0x278] & 0xfffffffe;
  in_ecx[0x277] = 0;
  in_ecx[0x279] = 0;
  in_ecx[0x27a] = 0;
  *(undefined2 *)(in_ecx + 0x27b) = 0xffff;
  in_ecx[0x27c] = 0xffffffff;
  *(undefined2 *)(in_ecx + 0x27d) = 0;
  *(undefined1 *)((int)in_ecx + 0x9f6) = 0;
  iVar2 = 4;
  do {
    iVar1 = iVar2 + -1;
    *(undefined1 *)((int)in_ecx + iVar2 + 0x99f) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return (uint)in_ecx;
}

/* ref: FUN_00b684e0 */
uint F_00b684e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb684e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  while( true ) {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar2 = F_00bcf9f0(this_00,uVar1,&(*(uint *)&gen_args[1]));
    if ((char)uVar2 != '\0') break;
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c);
  }
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b68520 */
uint F_00b68520(unsigned int gen_a0)
{
  GEN_ENTER(0xb68520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    in_EAX = F_00bd0840(this_00);
  }
  return in_EAX;
}

/* ref: FUN_00b68540 */
uint F_00b68540(unsigned int gen_a0)
{
  GEN_ENTER(0xb68540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    in_EAX = F_00bd0970(this_00);
  }
  return in_EAX;
}

/* ref: FUN_00b68560 */
uint F_00b68560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    in_EAX = F_00bcfbe0(this_00);
    if (in_EAX == param_1) {
      if ((char)param_2 == '\0') {
        in_EAX = F_00bd0910(this_00);
      }
      else {
        bVar1 = F_00bd0880(this_00,1,0);
        in_EAX = CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b685b0 */
uint F_00b685b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb685b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int * this_00;
  uint in_EAX = 0;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  this_00 = *(int * PTR32 *)((int)this + 0x14);
  do {
    if (this_00 == (int *)0x0) {
      return in_EAX;
    }
    if (param_2 == (byte *)0x0) {
LAB_00b685fb: ;
      in_EAX = F_00bc2aa0(this_00,param_1);
    }
    else {
      pbVar2 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0x5c))(this_00)));
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar4 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_00b685f2: ;
          in_EAX = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
          goto LAB_00b685f7;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar4 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_00b685f2;
        pbVar3 = pbVar3 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      in_EAX = 0;
LAB_00b685f7: ;
      if (in_EAX == 0) goto LAB_00b685fb;
    }
    this_00 = (int *)this_00[0x27];
  } while( true );
}

/* ref: FUN_00b68620 */
uint F_00b68620(unsigned int gen_a0)
{
  GEN_ENTER(0xb68620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint in_EAX = 0;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x27]) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x94))(piVar1);
    if (in_EAX != 0) {
      *(undefined1 *)(in_EAX + 0x21) = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_00b68650 */
unsigned int F_00b68650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  *(uint *)((int)this + 0x9e0) = *(uint *)((int)this + 0x9e0) & 0xfffffffe | param_1 & 1;
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    do {
      *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xfffffffd | (param_1 & 1) * 2;
      iVar1 = *(int *)(iVar1 + 0x9c);
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00b686a0 */
uint F_00b686a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb686a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((uVar1 == 0) && (uVar1 = F_00b59660(REFG(undefined4, 0x14c4e78),(int)this + 0x9a8), uVar1 != 0)) {
    *(uint *)((int)this + 0x10) = uVar1;
    F_00b595f0(uVar1);
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
  }
  if (uVar1 != 0) {
    uVar1 = F_00b5ccd0(REFG(undefined4, 0x14c4e90),param_1,uVar1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b68700 */
uint F_00b68700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  uVar2 = 0xffffffff;
  do {
    if (this_00 == (undefined *)0x0) {
      return uVar2;
    }
    uVar1 = F_00bd0ae0(this_00,param_1);
    if ((char)uVar1 != '\0') {
      if (*(char *)((int)this_00 + 0x24a) != '\0') {
        return 0xffffffff;
      }
      if (*(char *)((int)this_00 + 8) == '\0') {
        return 0;
      }
      uVar2 = 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c);
  } while( true );
}

/* ref: FUN_00b68760 */
byte F_00b68760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * this_00;
  uint uVar1;
  
  this_00 = *(int * PTR32 *)((int)this + 0x14);
  do {
    if (this_00 == (int *)0x0) {
      return 0;
    }
    uVar1 = F_00bd0ae0(this_00,param_1);
    if ((char)uVar1 != '\0') {
      if (*(char *)((int)this_00 + 0x24a) != '\0') {
        return 0;
      }
      if (((char)this_00[2] == '\0') ||
         ((*(char *)((int)this_00 + 0xd) != '\0' &&
          (uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00), (char)uVar1 == '\0')))) {
        return 1;
      }
    }
    this_00 = (int *)this_00[0x27];
  } while( true );
}

/* ref: FUN_00b687c0 */
byte F_00b687c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb687c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 0x9dc);
  if ((iVar2 != 0) && (-1 < *(int *)(param_1 + 4))) {
    piVar4 = (int *)((int)this + iVar2 * 4 + 0x9bc);
    do {
      piVar4 = piVar4 + -1;
      iVar2 = iVar2 + -1;
      if (*piVar4 == *(int *)(param_1 + 4)) {
        return 0;
      }
    } while (iVar2 != 0);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  do {
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    uVar3 = F_00bd0ae0(this_00,param_1);
    if ((char)uVar3 != '\0') {
      if (*(char *)((int)this_00 + 0x24a) != '\0') {
        return 0;
      }
      bVar1 = F_00bcfba0(this_00);
      if (bVar1 == 0) {
        return 0;
      }
      if ((*(char *)((int)this_00 + 8) == '\0') ||
         ((*(char *)((int)this_00 + 0xd) != '\0' && (*(char *)((int)this_00 + 0xf) == '\0')))) {
        return 1;
      }
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c);
  } while( true );
}

/* ref: FUN_00b68840 */
byte F_00b68840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int in_ecx_00;
  uint uVar1;
  
  in_ecx_00 = *(int *)(in_ecx + 0x14);
  do {
    if (in_ecx_00 == 0) {
      return 0;
    }
    uVar1 = F_00bcfbe0(in_ecx_00);
    if (uVar1 == param_2) {
      if (*(char *)(in_ecx_00 + 0x24a) != '\0') {
        return 0;
      }
      if ((*(char *)(in_ecx_00 + 8) == '\0') ||
         ((*(char *)(in_ecx_00 + 0xd) != '\0' && (*(char *)(in_ecx_00 + 0xf) == '\0')))) {
        return 1;
      }
    }
    in_ecx_00 = *(int *)(in_ecx_00 + 0x9c);
  } while( true );
}

/* ref: FUN_00b68890 */
uint F_00b68890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    uVar1 = F_00bd0ae0(this_00,param_1);
    if (((char)uVar1 != '\0') && (uVar1 = F_00bcff00(this_00), (int)uVar2 < (int)uVar1)) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

/* ref: FUN_00b688d0 */
uint F_00b688d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb688d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  uint in_EAX = 0;
  
  for (this = *(undefined * PTR32 *)(param_1 + 0x14); this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x9c))
  {
    in_EAX = F_00bd0ae0(this,param_2);
    if ((((char)in_EAX != '\0') && (*(char *)((int)this + 0x24a) == '\0')) &&
       (*(char *)((int)this + 0xf) == '\0')) {
      in_EAX = F_00bcfc00(this,param_3);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b68920 */
uint F_00b68920(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68920u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  uint in_EAX = 0;
  
  for (this = *(undefined * PTR32 *)(param_1 + 0x14); this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x9c))
  {
    in_EAX = F_00bd0ae0(this,param_2);
    if ((((char)in_EAX != '\0') && (*(char *)((int)this + 0x24a) == '\0')) &&
       (*(char *)((int)this + 0xf) == '\0')) {
      in_EAX = F_00bcfc70(this,param_3);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b68970 */
unsigned int F_00b68970(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb68970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  uint uVar1;
  
  for (this = *(undefined * PTR32 *)(param_1 + 0x14); this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x9c))
  {
    uVar1 = F_00bd0ae0(this,param_2);
    if ((((char)uVar1 != '\0') && (*(char *)((int)this + 0x24a) == '\0')) &&
       (*(char *)((int)this + 0xf) == '\0')) {
      F_00bd1550(this,param_3);
    }
  }
  return 0;
}

/* ref: FUN_00b689c0 */
byte F_00b689c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb689c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  char cVar1;
  
  cVar1 = (char)param_1;
  if (*(char *)((int)this + 0x9f6) != cVar1) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x14);
    *(char *)((int)this + 0x9f6) = cVar1;
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
      if ((cVar1 == '\0') || (*(char *)((int)this_00 + 0x24a) == '\0')) {
        F_00bc3440(this_00,2,param_1,0);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b68a10 */
unsigned int F_00b68a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    uVar1 = F_00bd0ae0(this_00,param_1);
    if (((char)uVar1 != '\0') && (*(char *)((int)this_00 + 0x24a) == '\0')) {
      F_00bc3440(this_00,2,param_2,0);
    }
  }
  return 0;
}

/* ref: FUN_00b68a60 */
byte F_00b68a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*param_2 == 0) {
    *param_2 = *(int *)((int)this + 0x14);
  }
  else {
    *param_2 = *(int *)(*param_2 + 0x9c);
  }
  iVar1 = *param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(*param_2 + 0xf8);
    if (((*param_1 ^ uVar2) & 0xc0000000) == 0 && ((*param_1 ^ uVar2) & 0x3fffffff) == 0) break;
    iVar1 = *(int *)(*param_2 + 0x9c);
    *param_2 = iVar1;
  }
  return 1;
}

/* ref: FUN_00b68ad0 */
byte F_00b68ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*param_2 == 0) {
    *param_2 = *(int *)((int)this + 0x14);
  }
  else {
    *param_2 = *(int *)(*param_2 + 0x9c);
  }
  iVar1 = *param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = F_00bd0ae0((undefined *)*param_2,param_1);
    if ((char)uVar2 != '\0') break;
    iVar1 = *(int *)(*param_2 + 0x9c);
    *param_2 = iVar1;
  }
  return 1;
}

/* ref: FUN_00b68b20 */
byte F_00b68b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb68b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  if (*param_3 == 0) {
    *param_3 = *(int *)((int)this + 0x14);
  }
  else {
    *param_3 = *(int *)(*param_3 + 0x9c);
  }
  iVar2 = *param_3;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *param_3;
    if (*(int *)(iVar2 + 200) == -1) {
      pbVar3 = *(byte * PTR32 *)(iVar2 + 0xd4);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00b68b90: ;
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00b68b95;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00b68b90;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00b68b95: ;
      bVar6 = iVar4 == 0;
    }
    else {
      bVar6 = *(int *)(iVar2 + 200) == param_2;
    }
    if (bVar6) {
      return 1;
    }
    iVar2 = *(int *)(iVar2 + 0x9c);
    *param_3 = iVar2;
  } while( true );
}

/* ref: FUN_00b68bc0 */
byte F_00b68bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (*param_2 == 0) {
    *param_2 = *(int *)((int)this + 0x14);
  }
  else {
    *param_2 = *(int *)(*param_2 + 0x9c);
  }
  iVar1 = *param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(*param_2 + 0xd0) == param_1) break;
    iVar1 = *(int *)(*param_2 + 0x9c);
    *param_2 = iVar1;
  }
  return 1;
}

/* ref: FUN_00b68c10 */
uint F_00b68c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x14);
  for (; (iVar1 != 0 && (param_2 != 0)); param_2 = param_2 + -1) {
    iVar1 = *(int *)(iVar1 + 0x9c);
  }
  return iVar1 + 0xfc;
}

/* ref: FUN_00b68c40 */
uint F_00b68c40(unsigned int gen_a0)
{
  GEN_ENTER(0xb68c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  
  for (iVar1 = *(int *)(in_ecx + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
    F_00bcf970();
  }
  *(undefined4 *)(in_ecx + 0x9dc) = 0;
  *(undefined1 *)(in_ecx + 0x9f5) = 0;
  return in_EAX;
}

/* ref: FUN_00b68c80 */
uint F_00b68c80(unsigned int gen_a0)
{
  GEN_ENTER(0xb68c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint in_EAX = 0;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x14); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x9c)) {
    in_EAX = F_00bcf980(this_00);
  }
  *(undefined4 *)((int)this + 0x9dc) = 0;
  *(undefined1 *)((int)this + 0x9f5) = 1;
  return in_EAX;
}

/* ref: FUN_00b68cc0 */
unsigned int F_00b68cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  
  for (in_ecx_00 = *(int *)(in_ecx + 0x14); in_ecx_00 != 0; in_ecx_00 = *(int *)(in_ecx_00 + 0x9c))
  {
    F_00bc2a10(in_ecx_00,param_2);
  }
  return 0;
}

/* ref: FUN_00b68cf0 */
byte F_00b68cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  if (*(int *)((int)this + 0x9e4) == 1) {
    for (pvVar2 = *(undefined * PTR32 *)((int)this + 0x14); pvVar2 != (undefined *)0x0;
        pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x9c)) {
      uVar1 = F_00bd0ae0(pvVar2,param_1);
      if ((char)uVar1 != '\0') {
        return 1;
      }
    }
    for (pvVar2 = *(undefined * PTR32 *)((int)this + 0x14); pvVar2 != (undefined *)0x0;
        pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x9c)) {
      F_00bd0910(pvVar2);
    }
    pvVar2 = (undefined *)F_00b68410(this);
    if (pvVar2 != (undefined *)0x0) {
      F_00bc3bc0(pvVar2,0);
    }
  }
  *(undefined4 *)((int)this + 0x9e4) = 0;
  return 0;
}

/* ref: FUN_00b68d80 */
uint F_00b68d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    in_EAX = F_00bd0ae0(pvVar1,param_1);
    if ((char)in_EAX != '\0') {
      bVar2 = F_00bd0880(pvVar1,1,param_2);
      in_EAX = CONCAT31(extraout_var,bVar2);
    }
  }
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    in_EAX = F_00bd0840(pvVar1);
  }
  return in_EAX;
}

/* ref: FUN_00b68de0 */
uint F_00b68de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb68de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    in_EAX = F_00bd0ae0(pvVar1,param_1);
    if ((char)in_EAX != '\0') {
      bVar2 = F_00bd0880(pvVar1,3,param_2);
      in_EAX = CONCAT31(extraout_var,bVar2);
    }
  }
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    in_EAX = F_00bd0840(pvVar1);
  }
  return in_EAX;
}

/* ref: FUN_00b68e40 */
uint F_00b68e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 4;
  do {
    iVar4 = iVar3 + -1;
    if (*(char *)((int)this + iVar3 + 0x99f) == '\0') {
      pvVar1 = (undefined *)(iVar4 * 0x260 + 0x20 + (int)this);
      if (pvVar1 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00bd0210(pvVar1,this);
      }
      *(undefined1 *)(iVar3 + 0x99f + (int)this) = 1;
      if (uVar2 != 0) goto LAB_00b68eb5;
      break;
    }
    iVar3 = iVar4;
  } while (iVar4 != 0);
  pvVar1 = (undefined *)F_00406b90(0x260,0,0x10);
  if ((pvVar1 == (undefined *)0x0) || (uVar2 = F_00bd0210(pvVar1,this), uVar2 == 0)) {
    return 0;
  }
LAB_00b68eb5: ;
  *(undefined4 *)(uVar2 + 0xf8) = *param_1;
  F_00b69d80((undefined *)(uVar2 + 0x98),(int *)((int)this + 0x14));
  iVar3 = *(int *)((int)this + 0x14);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  if (iVar3 != 0) {
    iVar4 = 1;
    do {
      *(int *)(iVar3 + 0x1e0) = iVar4;
      iVar3 = *(int *)(iVar3 + 0x9c);
      iVar4 = iVar4 + 1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

/* ref: FUN_00b68f00 */
uint F_00b68f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb68f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,3,&REFG(undefined, 0x13056c0));
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
    ((code *)*(gen_code32 *)*param_1)(param_1,0);
    uVar3 = (int)param_1 + (-0x20 - (int)this);
    *(undefined1 *)(uVar3 / 0x260 + 0x9a0 + (int)this) = 0;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    return uVar3 * -0x50d79435;
  }
  uVar3 = ((code *)*(gen_code32 *)*param_1)(param_1,1);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  return uVar3;
}

/* ref: FUN_00b68fa0 */
uint F_00b68fa0(unsigned int gen_a0)
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
    ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,3,&REFG(undefined, 0x13056c0));
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
      ((code *)*(gen_code32 *)*piVar4)(piVar4,1);
    }
    else {
      ((code *)*(gen_code32 *)*piVar4)(piVar4,0);
      *((undefined1 *)GEN_TOP(((uint)((int)piVar4 + (-0x20 - (int)this)) / 0x260 + 0x9a0 + (int)this))) = 0;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    piVar4 = piVar1;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00b69050 */
byte F_00b69050(unsigned int gen_a0)
{
  GEN_ENTER(0xb69050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  while (piVar1 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
    if ((char)uVar4 == '\0') {
      piVar1 = (int *)piVar1[0x27];
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,3,&REFG(undefined, 0x13056c0));
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
        ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
        piVar1 = *(int * PTR32 *)((int)this + 0x14);
      }
      else {
        ((code *)*(gen_code32 *)*piVar1)(piVar1,0);
        *((undefined1 *)GEN_TOP(((uint)((int)piVar1 + (-0x20 - (int)this)) / 0x260 + 0x9a0 + (int)this))) = 0;
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
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
byte F_00b69120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
     (bVar2 = F_00b683c0(this,param_2), bVar2 != 0)) {
    if (((*(int *)((int)this + 0x9e4) != 0) && ((char)param_6 == '\0')) &&
       (bVar2 = F_00b68cf0(this,param_2), bVar2 != 0)) {
      return 1;
    }
    pvVar6 = *(undefined * PTR32 *)((int)this + 0x14);
    piVar5 = (int *)((int)this + 0x14);
    local_8 = 0;
    if (pvVar6 != (undefined *)0x0) {
      do {
        uVar3 = F_00bd0ae0(pvVar6,param_2);
        if ((char)uVar3 == '\0') {
          local_8 = local_8 + 1;
        }
        else {
          bVar2 = F_00bcfba0(pvVar6);
          if (bVar2 == 0) {
            return 0;
          }
          if ((*(char *)((int)pvVar6 + 0x24a) == '\0') &&
             (((*(uint *)((int)pvVar6 + 0x138) >> 2 & 1) != 0 ||
              (bVar2 = F_00bcf500(pvVar6), bVar2 == 0)))) {
            if ((char)param_6 != '\0') {
              return 1;
            }
            F_00b69de0((undefined *)((int)pvVar6 + 0x98),piVar5);
            F_00b69d80((undefined *)((int)pvVar6 + 0x98),piVar5);
            iVar4 = 1;
            for (iVar1 = *piVar5; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
              *(int *)(iVar1 + 0x1e0) = iVar4;
              iVar4 = iVar4 + 1;
            }
            F_00bd1210(pvVar6,param_2,param_5);
            if (*(char *)((int)this + 0x9f6) != '\0') {
              F_00bc3440(pvVar6,2,1,0);
            }
            F_00b68520(this);
            return 1;
          }
        }
        if ((*(uint *)((int)pvVar6 + 0x138) >> 2 & 1) != 0) {
          pvVar7 = pvVar6;
        }
        pvVar6 = *(undefined * PTR32 *)((int)pvVar6 + 0x9c);
      } while (pvVar6 != (undefined *)0x0);
      if ((pvVar7 != (undefined *)0x0) &&
         (((char)param_6 != '\0' || (bVar2 = F_00bd0a80(pvVar7,param_5), bVar2 != 0)))) {
        F_00bd0910(pvVar7);
      }
    }
    if ((*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) && (5 < local_8)) {
      iVar1 = local_8 + -5;
      pvVar7 = (undefined *)*piVar5;
      while ((pvVar6 = pvVar7, pvVar6 != (undefined *)0x0 && (iVar1 != 0))) {
        pvVar7 = *(undefined * PTR32 *)((int)pvVar6 + 0x9c);
        if (((*(char *)((int)pvVar6 + 0xd) == '\0') ||
            ((*(uint *)((int)pvVar6 + 0x138) >> 7 & 1) == 0)) &&
           (uVar3 = F_00bd1530(pvVar6), (char)uVar3 == '\0')) {
          F_00bd0910(pvVar6);
          iVar1 = iVar1 + -1;
        }
      }
    }
    pvVar7 = (undefined *)F_00b68e40(this,param_1);
    if (pvVar7 != (undefined *)0x0) {
      if (*(char *)((int)this + 0x9f6) != '\0') {
        F_00bc3440(pvVar7,2,1,0);
      }
      uVar3 = F_00bbad30((undefined *)((int)this + 0x9a8));
      F_00bcfcc0(pvVar7,uVar3,param_3,param_4);
      bVar2 = F_00bd1110(pvVar7,param_2,param_6,param_5);
      if (bVar2 != 0) {
        F_00b68520(this);
        if (*(char *)((int)this + 0x9f5) == '\0') {
          return 1;
        }
        F_00bcf980(pvVar7);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b69380 */
uint F_00b69380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb69380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b68e40(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00bd1610(pvVar1,param_2,param_3);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b693d0 */
uint F_00b693d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
  
  pvVar1 = (undefined *)F_00b68e40(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    if ((*(char *)((int)this + 0x9f6) != '\0') && ((char)param_6 == '\0')) {
      F_00bc3440(pvVar1,2,1,0);
    }
    uVar2 = F_00bd13a0(pvVar1,param_2,(int)this + 0x9a8,param_4,param_5,param_6);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b69440 */
uint F_00b69440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
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
  
  pvVar1 = (undefined *)F_00b68e40(this,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    if ((*(char *)((int)this + 0x9f6) != '\0') && ((char)param_7 == '\0')) {
      F_00bc3440(pvVar1,2,1,0);
    }
    uVar2 = F_00bd1460(pvVar1,param_2,(int)this + 0x9a8,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b694c0 */
uint F_00b694c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, float gen_a9)
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
    iVar5 = iVar5 + -1;
    pvVar1 = *(undefined * PTR32 *)((int)param_1 + 0x14);
    while ((pvVar4 = pvVar1, pvVar4 != (undefined *)0x0 && (iVar5 != 0))) {
      pvVar1 = *(undefined * PTR32 *)((int)pvVar4 + 0x9c);
      if ((*(char *)((int)pvVar4 + 0xd) == '\0') &&
         (uVar3 = F_00bd1530(pvVar4), (char)uVar3 == '\0')) {
        F_00bd0910(pvVar4);
        iVar5 = iVar5 + -1;
      }
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0x0)) = (*param_3 & 0xffffff) + (int)param_3;
  (*(int *)(gen_frame + 0x4)) = param_4 + 0x20000;
  pvVar4 = (undefined *)F_00b68e40((*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
  if (pvVar4 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)pvVar1 + 0x9f6) == '\0') {
    if ((char)param_9 != '\0') goto LAB_00b695dd;
  }
  else {
    if ((char)param_9 != '\0') goto LAB_00b695dd;
    F_00bc3440(pvVar4,2,1,0);
  }
  *(short *)((int)pvVar1 + 0x9ec) = (short)param_3[1];
  uVar3 = F_00bbad30(param_6);
  *(uint *)((int)pvVar1 + 0x9f0) = uVar3;
  *(undefined4 *)((int)pvVar1 + 0x9e8) = *param_2;
LAB_00b695dd: ;
  F_00bd12c0(pvVar4,&(*(int *)(gen_frame + 0x0)),param_5,param_6,param_7,param_8,param_9,param_10);
  uVar3 = F_00b68520(pvVar1);
  return uVar3;
}

/* ref: FUN_00b69620 */
unsigned int F_00b69620(unsigned int gen_a0)
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
         (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), (char)uVar2 == '\0')) {
        return 0;
      }
    }
    F_00b5aba0(REFG(undefined4, 0x14c4e84),((undefined1 *)(gen_frame + 0x18)));
    uVar2 = F_00ab2ae0((int)*(short *)((int)this + 0x9ec));
    F_00bbac80(((undefined1 *)(gen_frame + 0x4)));
    F_00bbadf0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x9f0),0);
    F_00b694c0(this,((undefined1 *)(gen_frame + 0x18)),uVar2,(int)*(short *)((int)this + 0x9ec),(int)this + 0x9a8,((undefined1 *)(gen_frame + 0x4)),0,
                 0xffffffff,0,(float)(float10)0);
  }
  return 0;
}

/* ref: FUN_00b696f0 */
uint F_00b696f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb696f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00bbaea0((undefined *)((int)this + 0x9a8),param_1);
  if ((char)uVar2 != '\0') {
    *(undefined2 *)((int)this + 0x9ec) = 0xffff;
    *(undefined1 *)((int)this + 0x9f4) = 0;
  }
  for (piVar1 = *(int * PTR32 *)((int)this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x27]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1,param_1);
  }
  F_00b69050(this);
  uVar2 = F_00bbaf20((undefined *)((int)this + 0x9a8),param_1);
  if (*(char *)((int)this + 0x9f4) == '\0') {
    uVar2 = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = 0;
      uVar2 = F_00b59c20(REFG(undefined4, 0x14c4e78),*(undefined4 *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00b69780 */
uint F_00b69780(unsigned int gen_a0, unsigned int gen_a1)
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
      piVar4 = piVar4 + -1;
      uVar2 = uVar2 - 1;
      if (*piVar4 == *(int *)(param_1 + 4)) goto LAB_00b6988c;
    } while (uVar2 != 0);
  }
  F_00b5aba0(REFG(undefined4, 0x14c4e84),((undefined1 *)(gen_frame + 0x5c)));
  pvVar3 = (undefined *)F_00b68e40(this,((undefined1 *)(gen_frame + 0x5c)));
  uVar2 = 0;
  if (pvVar3 != (undefined *)0x0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = F_00bbad30((undefined *)((int)this + 0x9a8));
    F_00bcfcc0(pvVar3,uVar2,uVar5,uVar6);
    *(uint *)((int)pvVar3 + 0xe0) = *(uint *)((int)pvVar3 + 0xe0) | 0x400;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    bVar1 = F_00bd1110(pvVar3,param_1,0,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      for (pvVar3 = *(undefined * PTR32 *)((int)this + 0x14); pvVar3 != (undefined *)0x0;
          pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x9c)) {
        F_00bd0840(pvVar3);
      }
      *(undefined4 *)((int)this + 0x9e4) = 1;
      return 1;
    }
  }
LAB_00b6988c: ;
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00b698a0 */
uint F_00b698a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb698a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f38a0));
  F_00b68fa0(this);
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = 0;
    uVar1 = F_00b59c20(REFG(undefined4, 0x14c4e78),*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9a8) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  return uVar1;
}

/* ref: FUN_00b698f0 */
byte F_00b698f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb698f0u, gen_a0, 0u, gen_a2, 0u);
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
    F_00bd0e90(iVar1,param_2,param_3);
  }
  for (this = *(undefined * PTR32 *)((int)param_1 + 0x14); this != (undefined *)0x0;
      this = *(undefined * PTR32 *)((int)this + 0x9c)) {
    F_00bd0840(this);
  }
  if (-1 < *(short *)((int)param_1 + 0x9ec)) {
    F_00b69620(param_1);
  }
  bVar2 = F_00b69050(param_1);
  return bVar2;
}

/* ref: FUN_00b69970 */
byte F_00b69970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  F_00b5aba0(REFG(undefined4, 0x14c4e84),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  bVar1 = F_00b69120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1,param_2,param_3,param_4,1);
  return bVar1;
}

/* ref: FUN_00b699b0 */
byte F_00b699b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  F_00b5aba0(REFG(undefined4, 0x14c4e84),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  bVar1 = F_00b69120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1,param_2,param_3,param_4,0);
  return bVar1;
}

/* ref: FUN_00b699f0 */
uint F_00b699f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb699f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bbad00((undefined *)((int)this + 0x9a8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (((bVar1 != 0) && ((*(byte *)((int)this + 0x9e0) & 1) == 0)) &&
     (uVar2 = REFG(undefined4, 0x1375b00), *(int *)(REFG(undefined4, 0x1375b00) + 0x28) == 0)) {
    (*(char * PTR32 *)(gen_frame + 0x14)) = "normal/idle";
    (*(undefined4 *)(gen_frame + 0x18)) = 3;
    uVar2 = F_00b69780(this,&(*(char * PTR32 *)(gen_frame + 0x14)));
    if ((char)uVar2 == '\0') {
      (*(char * PTR32 *)(gen_frame + 0xc)) = "battle/idle";
      (*(undefined4 *)(gen_frame + 0x10)) = 0x22;
      uVar2 = F_00b69780(this,&(*(char * PTR32 *)(gen_frame + 0xc)));
    }
  }
  return uVar2;
}

/* ref: FUN_00b69a60 */
uint F_00b69a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    if ((char)param_1 == '\0') {
      F_00bd0910(pvVar1);
    }
    else {
      F_00bd0880(pvVar1,1,0);
    }
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x10);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)F_00b59660(REFG(undefined4, 0x14c4e78),(int)this + 0x9a8);
    if (pvVar1 == (undefined *)0x0) goto LAB_00b69ad5;
    *(undefined * PTR32 *)((int)this + 0x10) = pvVar1;
    F_00b595f0(pvVar1);
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
  }
  F_00bc3bc0(pvVar1,param_1);
LAB_00b69ad5: ;
  uVar2 = F_00b699f0(this);
  return uVar2;
}

/* ref: FUN_00b69af0 */
byte F_00b69af0(unsigned int gen_a0)
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
    bVar1 = F_00bcf9c0(pvVar2);
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bcfba0(pvVar2);
    if (bVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if ((*(int *)((int)this + 0x14) != 0) || (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0)) {
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x10);
    if ((pvVar2 == (undefined *)0x0) &&
       (pvVar2 = (undefined *)F_00b59660(REFG(undefined4, 0x14c4e78),(int)this + 0x9a8), pvVar2 != (undefined *)0x0)) {
      *(undefined * PTR32 *)((int)this + 0x10) = pvVar2;
      F_00b595f0(pvVar2);
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
    }
    if (((iVar3 != 0) && (pvVar2 != (undefined *)0x0)) && (bVar1 = F_00bc5290(pvVar2), bVar1 == 0)) {
      return 0;
    }
    if (local_8 == 0) {
      F_00b699f0(this);
    }
  }
  return 1;
}

/* ref: FUN_00b69bc0 */
uint F_00b69bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0xf8) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00b69be0 */
uint F_00b69be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*param_1 ^ *(uint *)((int)this + 0xf8)) & 0xc0000000) == 0 &&
               ((*param_1 ^ *(uint *)((int)this + 0xf8)) & 0x3fffffff) == 0);
}

/* ref: FUN_00b69c20 */
byte F_00b69c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb69c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte * pbVar2;
  bool bVar3;
  
  if (*(int *)((int)this + 200) != -1) {
    return *(int *)((int)this + 200) == param_2;
  }
  pbVar2 = *(byte * PTR32 *)((int)this + 0xd4);
  while( true ) {
    bVar1 = *pbVar2;
    bVar3 = bVar1 < *param_1;
    if (bVar1 != *param_1) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar3 = bVar1 < param_1[1];
    if (bVar1 != param_1[1]) break;
    pbVar2 = pbVar2 + 2;
    param_1 = param_1 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar3 == (uint)(bVar3 != 0);
}

/* ref: FUN_00b69cb0 */
byte F_00b69cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xd0) == param_2;
}

/* ref: FUN_00b69ce0 */
uint F_00b69ce0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00b69d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1e0) = param_2;
  return param_2;
}

/* ref: FUN_00b69d50 */
uint F_00b69d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b69d70 */
uint F_00b69d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b69d80 */
uint F_00b69d80(unsigned int gen_a0, unsigned int gen_a1)
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
    *param_1 = (int)this + -0x98;
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
unsigned int F_00b69de0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00b69e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f38a0));
  F_00b68fa0(this);
  if (*(int *)(this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 0x45c))) = 0;
    F_00b59c20(REFG(undefined4, 0x14c4e78),*(undefined4 *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(this + 0x9a8) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::CameraBase::vf3 */
uint F_00b69e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))
                    (this + 0x10,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00b69e90 */
unsigned int F_00b69e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb69e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0068bf80((undefined *)((int)this + 0x10),param_1);
  return 0;
}

/* ref: FUN_00b69ea0 */
unsigned int F_00b69ea0(float gen_a0)
{
  GEN_ENTER(0xb69ea0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b69ec0 */
unsigned int F_00b69ec0(float gen_a0)
{
  GEN_ENTER(0xb69ec0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b69ee0 */
unsigned int F_00b69ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return 0;
}

/* ref: FUN_00b69f10 */
byte F_00b69f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
unsigned int F_00b6a060(unsigned int gen_a0)
{
  GEN_ENTER(0xb6a060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar1 = REFG(float, 0x133d28c);
  fVar3 = (float10)*(float *)&REFG(undefined, 0x133d284);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *(undefined4 *)((int)this + 0xe4) = REFG(float, 0x10f396c);
  uVar2 = REFG(float, 0x133d290);
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
  *(undefined4 *)((int)this + 0x13c) = REFG(float, 0x10f396c);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x168) = uVar1;
  uVar1 = REFG(float, 0x10928e4);
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x170) = uVar1;
  *(undefined4 *)((int)this + 0x174) = REFG(float, 0x1087ef8);
  uVar1 = REFG(float, 0x109482c);
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x184) = uVar1;
  uVar1 = REFG(float, 0x10f3964);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x1b4) = uVar1;
  uVar1 = REFG(float, 0x10f3960);
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
byte F_00b6a2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6a2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x68))(param_1);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + 0x1f8) = 0;
    return 1;
  }
  uVar1 = F_00a5fd10(param_1,((undefined1 *)(gen_frame + 0x10)),0x46);
  uVar2 = F_00a5fd10(param_1,((undefined1 *)(gen_frame + 0x0)),0x2e);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((float10)*(float *)(uVar2 + 4) - (float10)*(float *)(uVar1 + 4))));
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1f8) = (float)((float10)(*(float *)(gen_frame + 0x2c)) * (float10)REFG(double, 0x1088108));
  return 1;
}

/* ref: FUN_00b6a390 */
uint F_00b6a390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
float10 F_00b6a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xb6a440u, gen_a0, gen_a1, gen_a2, 0u);
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
uint F_00b6a4f0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xb6a4f0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
  (*(float *)(gen_frame + 0x18)) = (float)fVar2;
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x18))));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  puVar1 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),param_6,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  *param_5 = *puVar1;
  param_5[1] = puVar1[1];
  param_5[2] = puVar1[2];
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_5;
}

/* ref: FUN_00b6a5c0 */
uint F_00b6a5c0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xb6a5c0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
  (*(float *)(gen_frame + 0x18)) = (float)fVar2;
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
  ((float *)(gen_frame + 0x20))[0] = (*(float *)(gen_frame + 0x1c));
  ((float *)(gen_frame + 0x20))[2] = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x18))));
  ((float *)(gen_frame + 0x20))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  puVar1 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),param_6,(uint)((float *)(gen_frame + 0x20)));
  *param_5 = *puVar1;
  param_5[1] = puVar1[1];
  param_5[2] = puVar1[2];
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_5;
}

/* ref: FUN_00b6a690 */
uint F_00b6a690(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xb6a690u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 * puVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_8);
  (*(float *)(gen_frame + 0x38)) = (float)fVar2;
  (*(float *)(gen_frame + 0x3c)) = (float)fVar2;
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_8);
  (*(float *)(gen_frame + 0x38)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x3c));
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x3c))));
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x3c)) = (float)fVar2;
  (*(float *)(gen_frame + 0x38)) = (float)fVar2;
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  (*(float *)(gen_frame + 0x3c)) = (float)fVar2;
  ((float *)(gen_frame + 0x80))[0] = (*(float *)(gen_frame + 0x3c));
  ((float *)(gen_frame + 0x80))[2] = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x38))));
  ((float *)(gen_frame + 0x80))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0x94)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0x3c));
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  puVar1 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x10)),param_6,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar1[2];
  puVar1 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((float *)(gen_frame + 0x80)));
  *param_5 = *puVar1;
  param_5[1] = puVar1[1];
  param_5[2] = puVar1[2];
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)param_5;
}

/* ref: FUN_00b6a870 */
uint F_00b6a870(void)
{
  GEN_ENTER(0xb6a870u, 0u, 0u, 0u, 0u);
  byte bVar1;
  bool bVar2;
  float fVar3;
  
  bVar1 = F_00542470();
  if (bVar1 != 0) {
    return 1;
  }
  fVar3 = F_0053b320();
  bVar2 = GEN_ISNAN((float10)fVar3) || GEN_ISNAN((float10)0);
  if (bVar2 != (bVar2 || (float10)fVar3 == (float10)0)) {
    fVar3 = F_0053b360();
    bVar2 = GEN_ISNAN((float10)fVar3) || GEN_ISNAN((float10)0);
    if (bVar2 != (bVar2 || (float10)fVar3 == (float10)0)) {
      return -(uint)(REFG(int, 0x1375b64) != 0) & 3;
    }
  }
  return 2;
}

/* ref: FUN_00b6a8d0 */
uint F_00b6a8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6a8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (REFG(undefined4, 0x1379694) == (undefined *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x180);
    param_1[1] = *(undefined4 *)((int)this + 0x184);
    param_1[2] = *(undefined4 *)((int)this + 0x188);
    return (uint)param_1;
  }
  puVar1 = (undefined4 *)F_00a5feb0(REFG(undefined4, 0x1379694));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00b6aa40 */
unsigned int F_00b6aa40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6aa40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xfc) = param_2;
  return 0;
}

/* ref: FUN_00b6ab10 */
unsigned int F_00b6ab10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6ab10u, gen_a0, 0u, 0u, 0u);
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
unsigned int F_00b6ab60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ab60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00b6ab80 */
unsigned int F_00b6ab80(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6ab80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x120) = param_2;
  *(float *)(in_ecx + 0x124) = param_3;
  return 0;
}

/* ref: FUN_00b6ad90 */
uint F_00b6ad90(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_00b6adb0(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_00b6ade0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6ade0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*(int *)((int)this + 0xe0) == 0)) {
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar2 == 0) {
      *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(iVar1 + 0xb0);
    }
  }
  return 0;
}

/* ref: FUN_00b6ae20 */
uint F_00b6ae20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ae20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,3,0);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,3,0);
  return uVar1;
}

/* ref: FUN_00b6ae50 */
uint F_00b6ae50(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00b6ae80(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00b6aeb0(unsigned int gen_a0)
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
uint F_00b6aef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6aef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((param_1 != 3) && (param_1 != 4)) && (param_1 != 5)) && (param_1 != 6)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b6af20 */
byte F_00b6af20(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6af20u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int in_ecx;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  in_ecx = REFG(int, 0x1379694);
  if ((param_5 != 0) && (param_5 != REFG(int, 0x1379694))) {
    uVar1 = F_00a61360(param_5,in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x10)));
    uVar2 = F_00a61360(in_ecx,in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x0)));
    fVar3 = F_00aaea30(uVar2,uVar1);
    if ((float10)0 < (float10)fVar3) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00b6afa0 */
uint F_00b6afa0(void)
{
  GEN_ENTER(0xb6afa0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * this;
  int * piVar2;
  
  uVar1 = F_006b8c00();
  uVar1 = F_006c5190(uVar1);
  if ((char)uVar1 == '\0') {
    this = (undefined *)F_00533c90(&REFG(undefined4, 0x1375bc0));
  }
  else {
    this = (undefined *)F_005339e0(&REFG(undefined4, 0x1375bc0));
  }
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_00a5f290(this);
    if ((((piVar2 != (int *)0x0) &&
         (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)uVar1 == '\x01')) &&
        (piVar2[0xbb6] != -0x20000000)) && (uVar1 = F_00ab1210(piVar2[0xbb6]), uVar1 != 0)) {
      return uVar1;
    }
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00b6b1b0 */
float10 F_00b6b1b0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6b1b0u, 0u, 0u, 0u, 0u);
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
float10 F_00b6b1f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6b1f0u, 0u, 0u, 0u, 0u);
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
float10 F_00b6b230(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xb6b230u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar2 = (float10)(float)((float10)param_5 * (float10)(float)fVar2);
  return (float10)((float)GEN_TOF(((float10)(double)((float10)param_6 * (float10)param_5) /
                         (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar2 * fVar2 +
                                                              (float10)(float)((float10)(float)fVar1
                                                                              * (float10)param_6) *
                                                              (float10)(float)((float10)(float)fVar1
                                                                              * (float10)param_6))))))))))
  ;
}

/* ref: FUN_00b6b2b0 */
unsigned int F_00b6b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + iVar2 * 4);
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  return 0;
}

/* ref: FUN_00b6b310 */
unsigned int F_00b6b310(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb6b310u, gen_a0, 0u, 0u, 0u);
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
    return 0;
  }
  in_ecx[9] = 0.0;
  return 0;
}

/* ref: FUN_00b6b410 */
float10 F_00b6b410(unsigned int gen_a0)
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
uint F_00b6b540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))
                    (this + 0x10,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00b6b550 */
byte F_00b6b550(unsigned int gen_a0)
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
byte F_00b6b580(unsigned int gen_a0)
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
byte F_00b6b5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b5b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((float10)*(float *)(in_ecx + 0x1c8) < (float10)*(float *)(in_ecx + 0x1c4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b6b5d0 */
byte F_00b6b5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((float10)*(float *)(in_ecx + 500) < (float10)*(float *)(in_ecx + 0x1f0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::LobbyCamera::vf8 */
unsigned int F_00b6b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b5f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x2c8) = 0;
  return 0;
}

/* ref: FUN_00b6b600 */
unsigned int F_00b6b600(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6b600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (!(param_2 <= 0.0)) {
    *(float *)(in_ecx + 0x294) = param_2;
  }
  return 0;
}

/* ref: FUN_00b6b620 */
unsigned int F_00b6b620(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6b620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2a4) = param_2;
  *(float *)(in_ecx + 0x2b4) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x294) -
              (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 -
                                               (float10)*(float *)(in_ecx + 0x294)))) *
                              (float10)*(float *)&REFG(undefined, 0x14c4ee0)))))));
  return 0;
}

/* ref: FUN_00b6b660 */
byte F_00b6b660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6b660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x282) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b6b670 */
byte F_00b6b670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6b670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x283) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b6b680 */
byte F_00b6b680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6b680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x280) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b6b690 */
byte F_00b6b690(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  bool bVar1;
  
  bVar1 = *(char *)(in_ecx + 0x281) == '\0';
  *(bool *)(in_ecx + 0x281) = bVar1;
  return bVar1;
}

/* ref: FUN_00b6b6b0 */
unsigned int F_00b6b6b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6b6b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2c4) = param_2;
  return 0;
}

/* ref: FUN_00b6b6d0 */
float10 F_00b6b6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x2c4);
}

/* ref: FUN_00b6b6e0 */
uint F_00b6b6e0(unsigned int gen_a0, unsigned int gen_a1)
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
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2c8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2c8),param_1)));
  uVar3 = 1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
  puVar2 = (uint *)F_00cb0910(this_00,uVar3);
  return *puVar2;
}

/* ref: FUN_00b6b740 */
uint F_00b6b740(unsigned int gen_a0)
{
  GEN_ENTER(0xb6b740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)((int)this + 0x10c);
  if ((GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0)) &&
     (fVar2 = *(float *)((int)this + 0x110), GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0))) {
    return 4;
  }
  fVar2 = F_0053b3a0();
  fVar3 = F_0053b320();
  fVar4 = F_0053b3e0();
  fVar5 = F_0053b360();
  if ((((!((float10)((float)GEN_TOF(ABS((float10)fVar2))) < (float10)((float)GEN_TOF(ABS((float10)fVar3))))) &&
       (!((float10)((float)GEN_TOF(ABS((float10)fVar4))) < (float10)((float)GEN_TOF(ABS((float10)fVar5)))))) &&
      (REFG(int, 0x1375b64) != 1)) &&
     ((uVar1 = F_0053b420(&REFG(undefined, 0x1375b30),0x20), (char)uVar1 == '\0' &&
      (uVar1 = F_0053b420(&REFG(undefined, 0x1375b30),0x21), (char)uVar1 == '\0')))) {
    return 1;
  }
  return 3;
}

/* ref: FUN_00b6b820 */
float10 F_00b6b820(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb6b820u, 0u, gen_a1, gen_a2, gen_a3);
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
unsigned int F_00b6b910(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6b910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
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
    return 0;
  }
  *param_1 = 2;
  param_1[5] = 0;
  param_1[3] = (undefined4)gen_fl2bits(param_3);
  return 0;
}

/* ref: FUN_00b6b970 */
unsigned int F_00b6b970(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6b970u, gen_a0, 0u, gen_a2, 0u);
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
byte F_00b6b9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  cVar2 = (&REFG(undefined, 0x133d382))[param_1[1] * 8];
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
uint F_00b6bb60(unsigned int gen_a0)
{
  GEN_ENTER(0xb6bb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  F_006906c0((undefined *)((int)this + 0x10));
  return (uint)this;
}

/* ref: FUN_00b6bb90 */
float F_00b6bb90(unsigned int gen_a0)
{
  GEN_ENTER(0xb6bb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x70) - (float10)*(float *)((int)this + 0x40))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x74) - (float10)*(float *)((int)this + 0x44))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x78) - (float10)*(float *)((int)this + 0x48))));
  (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x18));
  fVar1 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  return fVar1;
}

/* ref: FUN_00b6bc50 */
byte F_00b6bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb6bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  
  bVar1 = F_00b69f10((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]));
  return bVar1;
}

/* ref: FUN_00b6bec0 */
byte F_00b6bec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  uVar1 = F_00414500(*(undefined4 *)(param_4 + 0x10),iVar3);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: FUN_00b6c300 */
byte F_00b6c300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xb6c300u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(float *)(gen_frame + 0x88)) = *param_3;
  (*(float *)(gen_frame + 0x9c)) = *param_2;
  (*(float *)(gen_frame + 0x98)) = param_2[2];
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)(*(float *)(gen_frame + 0x9c)));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(float *)(gen_frame + 0x84)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x8c)) = param_2[1];
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x8c));
  (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x84)) - (float10)(*(float *)(gen_frame + 0x8c)));
  (*(float *)(gen_frame + 0x8c)) = param_3[2];
  (*(float *)(gen_frame + 0x60)) = param_4;
  (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x70));
  (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x9c));
  (*(float *)(gen_frame + 0x5c)) = (*(float *)(gen_frame + 0x98));
  (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0x8c)) - (float10)(*(float *)(gen_frame + 0x98)));
  (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x74));
  (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x78));
  (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x70)) * (float10)(*(float *)(gen_frame + 0x70)) + (float10)(*(float *)(gen_frame + 0x74)) * (float10)(*(float *)(gen_frame + 0x74)))
                    + (float10)(*(float *)(gen_frame + 0x78)) * (float10)(*(float *)(gen_frame + 0x78)))));
  (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x98)))));
  (*(float *)(gen_frame + 0x9c)) = (*(float *)(gen_frame + 0x98));
  fVar3 = (float10)(*(float *)(gen_frame + 0x98));
  bVar2 = GEN_ISNAN(fVar3) || GEN_ISNAN((float10)0);
  if (bVar2 != (bVar2 || fVar3 == (float10)0)) {
    *param_1 = (*(float *)(gen_frame + 0x88));
    param_1[1] = (*(float *)(gen_frame + 0x84));
    param_1[2] = (*(float *)(gen_frame + 0x8c));
    return 0;
  }
  (*(float *)(gen_frame + 0x98)) = (float)((float10)1 / fVar3);
  fVar4 = (float10)(float)((float10)1 / fVar3);
  (*(float *)(gen_frame + 0x90)) = (float)(fVar4 * (float10)(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0x74)) * fVar4);
  (*(float *)(gen_frame + 0x98)) = (float)(fVar4 * (float10)(*(float *)(gen_frame + 0x78)));
  (*(float *)(gen_frame + 0x64)) = (float)(fVar4 * (float10)(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x74)) * fVar4);
  (*(float *)(gen_frame + 0x6c)) = (float)(fVar4 * (float10)(*(float *)(gen_frame + 0x78)));
  if ((!GEN_ISNAN(param_5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_5 <= *(float *)&REFG(undefined, 0x1088114))) {
    (*(float *)(gen_frame + 0x9c)) = param_5;
    fVar3 = (float10)param_5;
  }
  (*(float *)(gen_frame + 0x94)) = 5.73972e-42;
  (*(float *)(gen_frame + 0x98)) = 5.73972e-42;
  bVar1 = F_00551620(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x54)),&(*(float *)(gen_frame + 0x64)),
                       (float)fVar3,1,&(*(float *)(gen_frame + 0x94)));
  *param_1 = (*(float *)(gen_frame + 0x0));
  param_1[1] = (*(float *)(gen_frame + 0x4));
  param_1[2] = (*(float *)(gen_frame + 0x8));
  return bVar1;
}

/* ref: FUN_00b6c520 */
uint F_00b6c520(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xb6c520u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(float *)(gen_frame + 0x8)) = param_6;
  F_00b6a690(in_xmm1,in_xmm2,in_xmm3,in_xmm7,param_5,&(*(undefined4 *)(gen_frame + 0x0)),param_7,param_8);
  return param_5;
}

/* ref: FUN_00b6c680 */
unsigned int F_00b6c680(unsigned int gen_a0)
{
  GEN_ENTER(0xb6c680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)param_1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
  *(float *)param_1 = fVar1;
  if ((float10)fVar1 <= (float10)0) {
    *(undefined4 *)param_1 = 0;
  }
  return 0;
}

/* ref: FUN_00b6c6b0 */
float F_00b6c6b0(void)
{
  GEN_ENTER(0xb6c6b0u, 0u, 0u, 0u, 0u);
  float fVar1;
  uint uVar2;
  float fVar3;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)REFG(float, 0x133d290))));
  uVar2 = F_0053b420(&REFG(undefined, 0x1375b30),0x23);
  if ((char)uVar2 != '\0') {
    return ((float)GEN_TOF(-(float10)fVar1));
  }
  uVar2 = F_0053b420(&REFG(undefined, 0x1375b30),0x24);
  if ((char)uVar2 != '\0') {
    return fVar1;
  }
  uVar2 = F_0053b420(&REFG(undefined, 0x1375b30),0x25);
  if ((char)uVar2 != '\0') {
    fVar3 = F_0053b360();
    return (float)(-(float10)fVar3 * (float10)fVar1);
  }
  uVar2 = F_0053b300();
  if (uVar2 != 0) {
    uVar2 = F_0053b300();
    return (float)((float10)(int)-uVar2 * (float10)*(double *)&REFG(undefined, 0x10919f0));
  }
  return (float)(float10)0;
}

/* ref: FUN_00b6c760 */
float F_00b6c760(unsigned int gen_a0)
{
  GEN_ENTER(0xb6c760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float local_8;
  
  local_8 = 0.0;
  fVar1 = ((float)GEN_TOF(((((float10)*(float *)((int)this + 0xf4) - (float10)*(float *)((int)this + 0xf8)) *
                  (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)) / (float10)REFG(double, 0x1094800))));
  uVar2 = F_0053b300();
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x23);
  if ((char)uVar3 != '\0') {
    return fVar1;
  }
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x24);
  if ((char)uVar3 != '\0') {
    return gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
  }
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x25);
  if ((char)uVar3 != '\0') {
    fVar4 = F_0053b360();
    return (float)((float10)fVar4 * (float10)fVar1);
  }
  if (uVar2 != 0) {
    local_8 = (float)((float10)(int)-uVar2 * (float10)*(float *)&REFG(undefined, 0x133d2a0));
  }
  return local_8;
}

/* ref: FUN_00b6c830 */
double F_00b6c830(unsigned int gen_a0)
{
  GEN_ENTER(0xb6c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = F_00b6bf70(this);
  if (uVar1 == 0) {
    fVar2 = F_00aae710(((float)GEN_TOF(((float10)*(float *)((int)this + 0xfc) +
                                (float10)*(double *)&REFG(undefined, 0x1080228)))));
    return (double)fVar2;
  }
  return (double)*(float *)((int)this + 0xfc);
}

/* ref: Client::Game::Camera::vf6 */
float F_00b6c870(unsigned int gen_a0)
{
  GEN_ENTER(0xb6c870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x40) - (float10)*(float *)(this + 0x70))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x44) - (float10)*(float *)(this + 0x74))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x48) - (float10)*(float *)(this + 0x78))));
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x40) - (float10)*(float *)(this + 0x70))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x44) - (float10)*(float *)(this + 0x74))));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x48) - (float10)*(float *)(this + 0x78))));
  fVar1 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  return fVar1;
}

/* ref: Client::Game::Camera::vf5 */
float F_00b6c8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6c8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x74) - (float10)*(float *)(this + 0x44))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x78) - (float10)*(float *)(this + 0x48))));
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x74) - (float10)*(float *)(this + 0x44))));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x78) - (float10)*(float *)(this + 0x48))));
  fVar1 = F_00aae920(&(*(float *)(gen_frame + 0x0)));
  return fVar1;
}

/* ref: FUN_00b6c930 */
uint F_00b6c930(unsigned int gen_a0)
{
  GEN_ENTER(0xb6c930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b6bf70(this);
  if (uVar1 == 3) {
    return 2;
  }
  if (uVar1 != 4) {
    return 0;
  }
  return 3;
}

/* ref: FUN_00b6c950 */
uint F_00b6c950(unsigned int gen_a0)
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
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return in_ecx;
}

/* ref: FUN_00b6cb40 */
uint F_00b6cb40(unsigned int gen_a0)
{
  GEN_ENTER(0xb6cb40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) == 0) {
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),param_1);
  return uVar1;
}

/* ref: FUN_00b6cb70 */
uint F_00b6cb70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6cb70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),param_1);
    bVar1 = F_00414ad0(uVar2,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cba0 */
uint F_00b6cba0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6cba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) == 0) {
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),param_1);
  return *(uint *)(uVar1 + 0x14);
}

/* ref: FUN_00b6cbd0 */
uint F_00b6cbd0(unsigned int gen_a0, unsigned int gen_a1)
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
    this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),param_1);
    bVar1 = F_00414a40(this,param_2,uVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cc00 */
byte F_00b6cc00(unsigned int gen_a0)
{
  GEN_ENTER(0xb6cc00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) == 0) {
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),param_1);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: FUN_00b6cc40 */
uint F_00b6cc40(unsigned int gen_a0, unsigned int gen_a1)
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
      pvVar2 = (undefined *)F_00414500(*(undefined4 *)(REFG(undefined4, 0x137104c) + 0x10),param_1);
      bVar1 = F_00414a40(pvVar2,uVar4,uVar5);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  else if (REFG(undefined4, 0x137104c) != 0) {
    uVar5 = 1;
    uVar4 = 0;
    pvVar2 = (undefined *)F_00414500(*(undefined4 *)(REFG(undefined4, 0x137104c) + 0x10),param_1);
    bVar1 = F_00414a40(pvVar2,uVar4,uVar5);
    uVar3 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar3;
}

/* ref: FUN_00b6ccb0 */
uint F_00b6ccb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6ccb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*param_1);
    bVar1 = F_00414ad0(uVar2,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cce0 */
float10 F_00b6cce0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6cce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) == 0) {
    return (float10)0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(in_ecx + 4));
  return (float10)*(float *)(uVar1 + 0x14);
}

/* ref: FUN_00b6cd00 */
uint F_00b6cd00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6cd00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 4));
    bVar1 = F_00414ad0(uVar2,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cd50 */
uint F_00b6cd50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6cd50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 8));
    bVar1 = F_00414ad0(uVar2,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cdb0 */
uint F_00b6cdb0(unsigned int gen_a0)
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
  this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x60);
  bVar1 = F_00414a40(this,uVar2,uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00b6cfa0 */
float10 F_00b6cfa0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6cfa0u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  
  (*(float *)&gen_args[1]) = (float)((float10)(*(float *)&gen_args[1]) - (float10)(*(float *)&gen_args[0]));
  fVar2 = F_00aae710((*(float *)&gen_args[1]));
  (*(float *)&gen_args[0]) = ((float)GEN_TOF(ABS((float10)(float)fVar2)));
  pfVar1 = &(*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)(*(float *)&gen_args[2]))));
  if (!((float10)(*(float *)&gen_args[1]) < (float10)(*(float *)&gen_args[0]))) {
    pfVar1 = &(*(float *)&gen_args[0]);
  }
  fVar3 = (float10)*pfVar1;
  if (!(*(float *)&REFG(undefined, 0x1088114) <= (float)fVar2)) {
    fVar3 = -fVar3;
  }
  return fVar3;
}

/* ref: FUN_00b6d020 */
uint F_00b6d020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6d020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(param_2 + 0x10),*param_1);
  uVar1 = *(uint *)(uVar1 + 0x14);
  if (2 < (int)uVar1) {
    uVar1 = 2;
  }
  return uVar1;
}

/* ref: FUN_00b6d050 */
uint F_00b6d050(unsigned int gen_a0)
{
  GEN_ENTER(0xb6d050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  float10 fVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1379694) != 0) {
    uVar1 = *(uint *)((int)this + 0x134);
    in_EAX = uVar1;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
    case 4: ;
      bVar2 = F_00ae8ef0((int)this + 0xfc);
      return CONCAT31(extraout_var,bVar2);
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      if (uVar1 < 7) {
        in_EAX = (uint)(&REFG(byte, 0xb6d0e4))[uVar1];
        switch((unsigned int)(uintptr_t)(uVar1)) {
        case 0: ;
        case 4: ;
          break;
        default: ;
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)this + 0xfc) +
                                   (float10)*(double *)&REFG(undefined, 0x1080228)))))));
          fVar3 = F_00aae710(((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar3)));
          bVar2 = F_00ae8ef0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
          in_EAX = CONCAT31(extraout_var_00,bVar2);
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b6d0f0 */
uint F_00b6d0f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6d0f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)(param_1 + 0x194) = param_2;
  uVar1 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x1a8) + 4))))(param_1 + 0x1a8,REFG(int, 0x137104c));
  }
  return uVar1;
}

/* ref: FUN_00b6d120 */
uint F_00b6d120(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00b6d140(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00b6d1a0(unsigned int gen_a0, unsigned int gen_a1)
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
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar2 != 0) {
      return 4;
    }
    uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x1d);
    uVar4 = F_0053b420(&REFG(undefined, 0x1375b30),0x1c);
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
    uVar3 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)((int)this + 0x250));
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
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0));
    if (bVar2 != 0) {
      return 3;
    }
    uVar3 = F_00aea9e0();
    if (uVar3 != 0) {
      bVar2 = F_00ae6960();
      if (bVar2 == 0) {
        return 3;
      }
      uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x1d);
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
      if (((REFG(int, 0x1375b64) != 1) && (uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x20), (char)uVar3 == '\0'))
         && (uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x21), (char)uVar3 == '\0')) {
        return 1;
      }
      return 3;
    }
    if ((REFG(int, 0x1375b64) != 3) && (uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x1c), (char)uVar3 != '\0')) {
      return 3;
    }
    uVar3 = F_0053b420(&REFG(undefined, 0x1375b30),0x1d);
    if ((char)uVar3 != '\0') {
      return 3;
    }
    uVar3 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)((int)this + 0x248));
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
uint F_00b6d3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6d3f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xd0);
}

/* ref: FUN_00b6d410 */
uint F_00b6d410(unsigned int gen_a0)
{
  GEN_ENTER(0xb6d410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xd0);
}

/* ref: FUN_00b6d580 */
unsigned int F_00b6d580(unsigned int gen_a0)
{
  GEN_ENTER(0xb6d580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = *(undefined4 * PTR32 *)((int)this + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + iVar2 * 4) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 0;
}

/* ref: FUN_00b6d5b0 */
unsigned int F_00b6d5b0(void)
{
  GEN_ENTER(0xb6d5b0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar2]));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,3,0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x158);
  return 0;
}

/* ref: FUN_00b6d5e0 */
unsigned int F_00b6d5e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6d5e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  if (*(char *)(in_ecx + 0x28) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0xc))));
    *(float *)(in_ecx + 0xc) = fVar1;
    if ((float10)fVar1 < (float10)*(float *)(in_ecx + 8)) {
      *(undefined1 *)(in_ecx + 0x28) = 1;
      return 0;
    }
    *(undefined1 *)(in_ecx + 0x28) = 0;
  }
  return 0;
}

/* ref: FUN_00b6d620 */
uint F_00b6d620(unsigned int gen_a0)
{
  GEN_ENTER(0xb6d620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  F_006906c0((undefined *)((int)this + 0x10));
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
uint F_00b6d8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6d8d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  byte bVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(float *)(gen_frame + 0x30)) = *param_3;
  (*(float *)(gen_frame + 0x38)) = param_3[2];
  (*(float *)(gen_frame + 0x34)) = param_3[1];
  *(float *)(param_1 + 0x1e8) = param_4;
  (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)(param_1 + 0x1e8);
  (*(float *)(gen_frame + 0x40)) = *param_2;
  (*(uint *)(gen_frame + 0x50)) = 0;
  (*(float *)(gen_frame + 0x44)) = param_2[1];
  fVar1 = param_2[2];
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) = fVar1;
  (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4))),(uint)gen_fl2bits(fVar1)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)*param_2);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)param_4 + (float10)REFG(double, 0x1091858));
  pfVar3 = (float *)F_00aaeb70(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),
                                 (float)((float10)param_4 + (float10)REFG(double, 0x1091858)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)pfVar3[2] + (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)pfVar3[2] + (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
  (*(float *)(gen_frame + 0x58)) = *(float *)(param_1 + 0x1b4);
  bVar2 = F_00b6c300(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),*(float *)(param_1 + 0x1b4),REFG(float, 0x1090708));
  if (bVar2 != 0) {
    (*(uint *)(gen_frame + 0x50)) = 1;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
    fVar4 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x44)));
    fVar5 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x40)));
    fVar6 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
    (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4))));
    (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x58)))));
    *(*(float * PTR32 *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x58));
    bVar2 = F_00b6c300(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),*(float *)(param_1 + 0x1b8),REFG(float, 0x1090708));
    if (bVar2 != 0) {
      (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      fVar4 = (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x44)));
      fVar5 = (float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x40)));
      fVar6 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4))));
      (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x58)))));
      (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x5c));
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_2 - (float10)*param_3);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)param_2[1] - (float10)param_3[1]);
      (*(float *)(gen_frame + 0x18)) = (float)((float10)param_2[2] - (float10)param_3[2]);
      fVar4 = (float10)(float)((float10)param_2[1] - (float10)param_3[1]);
      fVar5 = (float10)(float)((float10)*param_2 - (float10)*param_3);
      fVar6 = (float10)(float)((float10)param_2[2] - (float10)param_3[2]);
      (*(double *)(gen_frame + 0x48)) = (double)(*(float *)(gen_frame + 0x5c));
      (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4))));
      (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x58)))));
      if ((double)(*(float *)(gen_frame + 0x5c)) < (double)(*(float *)(gen_frame + 0x58))) {
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x20));
        (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x24));
        (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x50)) = 2;
        pfVar3 = (*(float * PTR32 *)(gen_frame + 0x54));
        if (!((float10)*(*(float * PTR32 *)(gen_frame + 0x54)) < (float10)(*(float *)(gen_frame + 0x5c)))) {
          pfVar3 = &(*(float *)(gen_frame + 0x5c));
        }
        *(*(float * PTR32 *)(gen_frame + 0x54)) = *pfVar3;
      }
    }
  }
  (*(float *)(gen_frame + 0x5c)) = *param_2;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x5c)));
  (*(float *)(gen_frame + 0x58)) = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x58)));
  (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)(uintptr_t)gen_fl2bits((float)(param_2[2])));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x54))))));
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x18));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) =
       ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14))) +
              (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = ((float)GEN_TOF(SQRT((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)))));
  if ((double)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) < *(double *)&REFG(undefined, 0x10a1b58)) {
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_3 - (float10)(*(float *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_3[1] - (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)param_3[2] - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x54))))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) =
         ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) +
                ((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)) + (float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x34))))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = ((float)GEN_TOF(SQRT((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)))));
    fVar4 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4));
    if ((float10)0 < fVar4) {
      fVar5 = (float10)*(double *)&REFG(double, 0x10f48e0);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar5);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar5);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar5 * (float10)(*(float *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x30)) * fVar5) / fVar4)));
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar5) / fVar4)));
      (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)(*(float *)(gen_frame + 0x38))) / fVar4)));
      (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x30));
      (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
      (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
    }
  }
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x5c)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x54))))) + (float10)(*(float *)(gen_frame + 0x28)));
  *param_3 = (float)((float10)(*(float *)(gen_frame + 0x5c)) + (float10)(*(float *)(gen_frame + 0x20)));
  param_3[1] = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)(*(float *)(gen_frame + 0x24)));
  param_3[2] = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x54))))) + (float10)(*(float *)(gen_frame + 0x28)));
  return (*(uint *)(gen_frame + 0x50));
}

/* ref: FUN_00b6ddd0 */
float10 F_00b6ddd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6ddd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x74);
}

/* ref: FUN_00b6dde0 */
float10 F_00b6dde0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6dde0u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)(*(float *)&gen_args[0]);
  fVar3 = (float10)(float)((float10)(*(float *)&gen_args[1]) - fVar2);
  if ((float10)((float)GEN_TOF(ABS(fVar3))) < (float10)*(float *)&REFG(undefined, 0x133d27c)) {
    return (float10)(*(float *)&gen_args[1]);
  }
  (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
  pfVar1 = &(*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) *
                                    (float10)*(double *)&REFG(undefined, 0x10943d8)))) * (float10)REFG(double, 0x1094800))));
  if (!((float10)(*(float *)&gen_args[1]) < (float10)1)) {
    pfVar1 = &(*(float *)&gen_args[0]);
  }
  return (float10)(float)(fVar2 + (float10)*pfVar1 * fVar3);
}

/* ref: FUN_00b6de70 */
unsigned int F_00b6de70(unsigned int gen_a0)
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
    if ((&REFG(undefined, 0x133d382))[iVar2] == '\0') {
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
uint F_00b6dfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6dfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  F_006906f0(this + 0x10);
  uVar2 = REFG(float, 0x10a509c);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar2;
  *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 2;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  uVar2 = REFG(float, 0x10f3960);
  *(undefined4 *)(this + 0x84) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xac))) = uVar2;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xb0))) = REFG(float, 0x1094724);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xa4))) = REFG(float, 0x10f38c0);
  uVar3 = F_00690f90(this + 0x10);
  return uVar3;
}

/* ref: FUN_00b6e060 */
uint F_00b6e060(void)
{
  GEN_ENTER(0xb6e060u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x137104c);
}

/* ref: FUN_00b6e080 */
float10 F_00b6e080(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e080u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)(*(float *)&gen_args[0]);
  fVar3 = (float10)(float)((float10)(*(float *)&gen_args[1]) - fVar2);
  if ((float10)((float)GEN_TOF(ABS(fVar3))) < (float10)REFG(float, 0x10947f8)) {
    return (float10)(*(float *)&gen_args[1]);
  }
  (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
  pfVar1 = &(*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) *
                                    (float10)*(double *)&REFG(undefined, 0x10943d8)))) * (float10)(*(float *)&gen_args[2]))));
  if (!((float10)(*(float *)&gen_args[1]) < (float10)1)) {
    pfVar1 = &(*(float *)&gen_args[0]);
  }
  return (float10)(float)(fVar2 + (float10)*pfVar1 * fVar3);
}

/* ref: FUN_00b6e1f0 */
uint F_00b6e1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6e1f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(float *)(gen_frame + 0x2c)) = *(float *)(REFG(int, 0x137104c) + 0x1198);
  fVar3 = (float10)param_4;
  fVar4 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198);
  if (((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar3)) && !(fVar4 < fVar3)) || (!GEN_ISNAN(param_4) && !(0.0 < param_4))) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return (uint)param_1;
  }
  (*(float *)(gen_frame + 0x24)) = (float)(fVar4 / fVar3);
  (*(float *)(gen_frame + 0x2c)) = *param_3;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) - (float10)*param_2);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)param_3[1] - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)param_3[2] - (float10)param_2[2]);
  (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)) +
                    ((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10))))))
  ;
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x28)))));
  fVar3 = (float10)(*(float *)(gen_frame + 0x28));
  bVar2 = GEN_ISNAN(fVar3) || GEN_ISNAN((float10)0);
  if ((bVar2 == (bVar2 || fVar3 == (float10)0)) &&
     (!((float10)(*(float *)(gen_frame + 0x24)) * fVar3 < (float10)REFG(double, 0x1091858)))) {
    uVar1 = F_004bd7b0(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x24)));
    F_004bd670(param_1,param_2,uVar1);
    return (uint)param_1;
  }
  *param_1 = (*(float *)(gen_frame + 0x2c));
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  return (uint)param_1;
}

/* ref: FUN_00b6e330 */
float10 F_00b6e330(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6e330u, 0u, 0u, 0u, 0u);
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
float10 F_00b6e3b0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e3b0u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float10 fVar2;
  
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  pfVar1 = &(*(float *)&gen_args[2]);
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)*(double *)&REFG(undefined, 0x10943d8))));
  (*(float *)&gen_args[2]) = (float)((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)&gen_args[2]));
  if (!((float10)(*(float *)&gen_args[2]) < (float10)1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  fVar2 = F_00aae710((float)((float10)(*(float *)&gen_args[1]) - (float10)(*(float *)&gen_args[0])));
  fVar2 = F_00aae710((float)(fVar2 * (float10)*pfVar1 + (float10)(*(float *)&gen_args[0])));
  return fVar2;
}

/* ref: FUN_00b6e430 */
float10 F_00b6e430(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e430u, 0u, 0u, 0u, 0u);
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
float10 F_00b6e4a0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e4a0u, 0u, 0u, 0u, 0u);
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
uint F_00b6e680(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb6e680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  float * pfVar2;
  float10 fVar3;
  float fVar4;
  
  if (((char)param_8 != '\0') || (*(char *)(in_ecx + 0x205) != '\0')) {
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)(in_ecx + 0x13c));
    F_00b6a690(in_xmm1,in_xmm2,in_xmm3,in_xmm7,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),*(float *)(in_ecx + 0xfc),
                 *(float *)(in_ecx + 0x100));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_7 + (float10)(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_7[1] + (float10)(*(float *)(gen_frame + 0x4)));
    fVar3 = (float10)param_7[2] + (float10)(*(float *)(gen_frame + 0x8));
    goto LAB_00b6e9c6;
  }
  (*(char *)(gen_frame + 0x5f)) = '\0';
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x230) - (float10)*param_7)));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x234) - (float10)param_7[1])));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x238) - (float10)param_7[2])));
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x30));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
  ((float *)(gen_frame + 0x4c))[1] = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)) +
                        (float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x34))) +
                       (float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)))));
  ((float *)(gen_frame + 0x4c))[2] = ((float)GEN_TOF(SQRT((float10)((float *)(gen_frame + 0x4c))[1])));
  ((float *)(gen_frame + 0x4c))[1] = ((float *)(gen_frame + 0x4c))[2];
  (*(float *)(gen_frame + 0x58)) = ((float *)(gen_frame + 0x4c))[2];
  if (*(int *)(in_ecx + 0x1e4) == 0) {
LAB_00b6e760: ;
    if (*(char *)(in_ecx + 0x1e0) == '\0') {
      if ((!GEN_ISNAN(REFG(float, 0x10f38d0)) && !GEN_ISNAN(((float *)(gen_frame + 0x4c))[2])) &&
          (!(REFG(float, 0x10f38d0) < ((float *)(gen_frame + 0x4c))[2]) && REFG(uint, 0x10f38d0) != ((float *)(gen_frame + 0x4c))[2])) {
        fVar3 = F_00b6e080(((float *)(gen_frame + 0x4c))[2],REFG(float, 0x10f38d0),REFG(float, 0x10f3960));
        (*(float *)(gen_frame + 0x58)) = (float)fVar3;
        pfVar2 = (float *)(in_ecx + 0x1e8);
        if ((float10)(float)fVar3 < (float10)*pfVar2) {
          pfVar2 = &(*(float *)(gen_frame + 0x58));
        }
        (*(float *)(gen_frame + 0x58)) = *pfVar2;
        (*(char *)(gen_frame + 0x5f)) = '\x01';
      }
    }
    else {
      (*(float *)(gen_frame + 0x58)) = *(float *)(in_ecx + 0x13c);
      (*(char *)(gen_frame + 0x5f)) = '\x01';
    }
  }
  else {
    ((float *)(gen_frame + 0x4c))[1] = *(float *)(in_ecx + 0x1e8);
    if (!((float10)((float *)(gen_frame + 0x4c))[1] < (float10)((float *)(gen_frame + 0x4c))[2])) goto LAB_00b6e760;
    fVar3 = F_00b6e080(((float *)(gen_frame + 0x4c))[2],((float *)(gen_frame + 0x4c))[1],REFG(float, 0x10f3960));
    (*(float *)(gen_frame + 0x58)) = (float)fVar3;
    (*(char *)(gen_frame + 0x5f)) = '\x01';
  }
  ((float *)(gen_frame + 0x4c))[1] = *(float *)(in_ecx + 0x13c);
  if ((float10)((float *)(gen_frame + 0x4c))[1] < (float10)(*(float *)(gen_frame + 0x58))) {
    (*(float *)(gen_frame + 0x58)) = ((float *)(gen_frame + 0x4c))[1];
LAB_00b6e80a: ;
    pfVar2 = &(*(float *)(gen_frame + 0x58));
    if (!(*(double *)&REFG(undefined, 0x10a1b58) < (double)(*(float *)(gen_frame + 0x58)))) {
      pfVar2 = (float *)&REFG(float, 0x10f396c);
    }
    (*(float *)(gen_frame + 0x58)) = *pfVar2;
  }
  else if (((*(char *)(gen_frame + 0x5f)) != '\0') ||
          ((!GEN_ISNAN(*(float *)(in_ecx + 0x154)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
           !(*(float *)(in_ecx + 0x154) <= *(float *)&REFG(undefined, 0x1088114)))) goto LAB_00b6e80a;
  if ((((REFG(int, 0x1375b64) == 0) && (bVar1 = F_00a9fcf0(param_9), bVar1 == 0)) &&
      (in_xmm1 = *(float *)(in_ecx + 0x108), GEN_ISNAN(in_xmm1) != (GEN_ISNAN(in_xmm1) || in_xmm1 == 0.0))) &&
     ((in_xmm1 = *(float *)(in_ecx + 0x104), GEN_ISNAN(in_xmm1) != (GEN_ISNAN(in_xmm1) || in_xmm1 == 0.0) &&
      ((!GEN_ISNAN(((float *)(gen_frame + 0x4c))[2]) && !GEN_ISNAN(REFG(float, 0x10947f8))) && !(((float *)(gen_frame + 0x4c))[2] <= REFG(float, 0x10947f8)))))) {
    fVar4 = F_00aae900(&(*(float *)(gen_frame + 0x20)));
    ((float *)(gen_frame + 0x4c))[1] = ((float)GEN_TOF(((float10)fVar4 - (float10)*(float *)(in_ecx + 0xfc))));
    fVar3 = F_00aae710(((float *)(gen_frame + 0x4c))[1]);
    ((float *)(gen_frame + 0x4c))[2] = (float)fVar3;
    ((float *)(gen_frame + 0x4c))[1] = ((float)GEN_TOF(ABS((float10)((float *)(gen_frame + 0x4c))[2])));
    if ((double)((float)GEN_TOF(ABS((float10)((float *)(gen_frame + 0x4c))[2]))) < *(double *)&REFG(undefined, 0x10f4918)) {
      ((float *)(gen_frame + 0x4c))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4c))[1], REFG(float, 0x10f4914));
      ((float *)(gen_frame + 0x4c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x4c))[0], REFG(float, 0x10f4910));
      pfVar2 = ((float *)(gen_frame + 0x4c)) + 2;
      if (!(((float *)(gen_frame + 0x4c))[2] < REFG(float, 0x10f4914))) {
        pfVar2 = ((float *)(gen_frame + 0x4c)) + 1;
      }
      if (!(REFG(float, 0x10f4910) < *pfVar2)) {
        pfVar2 = ((float *)(gen_frame + 0x4c));
      }
      ((float *)(gen_frame + 0x4c))[2] = *pfVar2;
      ((float *)(gen_frame + 0x4c))[0] = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xfc) + (float10)*pfVar2)));
      in_xmm1 = REFG(float, 0x10f4910);
      fVar3 = F_00aae710(((float *)(gen_frame + 0x4c))[0]);
      *(float *)(in_ecx + 0xfc) = (float)fVar3;
    }
  }
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x58));
  F_00b6a690(in_xmm1,in_xmm2,in_xmm3,in_xmm7,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x30)),*(float *)(in_ecx + 0xfc),
               *(float *)(in_ecx + 0x100));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_7 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_7[1] + (float10)(*(float *)(gen_frame + 0x14)));
  fVar3 = (float10)(*(float *)(gen_frame + 0x18)) + (float10)param_7[2];
LAB_00b6e9c6: ;
  (*(float *)(gen_frame + 0x38)) = (float)fVar3;
  *param_6 = (*(float *)(gen_frame + 0x30));
  param_6[1] = (*(float *)(gen_frame + 0x34));
  param_6[2] = (float)fVar3;
  return (uint)param_6;
}

/* ref: FUN_00b6e9f0 */
float10 F_00b6e9f0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e9f0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  
  fVar3 = F_00aae920((*(uint *)&gen_args[0]));
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = (float *)&(*(uint *)&gen_args[0]);
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(((float)GEN_TOF((((float10)((float)GEN_TOF(ABS((float10)fVar3))) /
                                      (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108)))));
  if (!(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0])))) < (float10)1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(*pfVar1);
  pfVar2 = &(*(float *)&gen_args[1]);
  if (!((float10)(*(float *)&gen_args[1]) < (float10)(*(float *)&gen_args[2]))) {
    pfVar2 = &(*(float *)&gen_args[2]);
  }
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)&gen_args[2]) - (float10)(*(float *)&gen_args[1]));
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x4)))));
  return (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * (float10)*pfVar1 + (float10)*pfVar2);
}

/* ref: FUN_00b6eda0 */
uint F_00b6eda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6eda0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  byte bVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(float *)(gen_frame + 0x30)) = *param_3;
  (*(float *)(gen_frame + 0x38)) = param_3[2];
  (*(float *)(gen_frame + 0x34)) = param_3[1];
  *(float *)(param_1 + 0x1e8) = param_4;
  (*(float * PTR32 *)(gen_frame + 0x58)) = (float *)(param_1 + 0x1e8);
  (*(float *)(gen_frame + 0x40)) = *param_2;
  (*(uint *)(gen_frame + 0x50)) = 0;
  (*(float *)(gen_frame + 0x44)) = param_2[1];
  fVar1 = param_2[2];
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) = fVar1;
  (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4))),(uint)gen_fl2bits(fVar1)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)*param_2);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)param_4 + (float10)REFG(double, 0x1091858));
  pfVar3 = (float *)F_00aaeb70(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),
                                 (float)((float10)param_4 + (float10)REFG(double, 0x1091858)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x54)) = *(float *)(param_1 + 0x1b4);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)pfVar3[2] + (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)pfVar3[2] + (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
  uVar4 = F_00aa0f90(param_5);
  if ((char)uVar4 != '\0') {
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x10f3968);
  }
  bVar2 = F_00b6c300(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x54)),REFG(float, 0x1090708));
  if (bVar2 != 0) {
    (*(uint *)(gen_frame + 0x50)) = 1;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
    fVar5 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x44)));
    fVar6 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x40)));
    fVar7 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
    (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5))));
    (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x54)))));
    *(*(float * PTR32 *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x54));
    bVar2 = F_00b6c300(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),*(float *)(param_1 + 0x1b8),REFG(float, 0x1090708));
    if (bVar2 != 0) {
      (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      fVar5 = (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x44)));
      fVar6 = (float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x40)));
      fVar7 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5))));
      (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x54)))));
      (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x5c));
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_2 - (float10)*param_3);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)param_2[1] - (float10)param_3[1]);
      (*(float *)(gen_frame + 0x18)) = (float)((float10)param_2[2] - (float10)param_3[2]);
      fVar5 = (float10)(float)((float10)param_2[1] - (float10)param_3[1]);
      fVar6 = (float10)(float)((float10)*param_2 - (float10)*param_3);
      fVar7 = (float10)(float)((float10)param_2[2] - (float10)param_3[2]);
      (*(double *)(gen_frame + 0x48)) = (double)(*(float *)(gen_frame + 0x5c));
      (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5))));
      (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x54)))));
      if ((double)(*(float *)(gen_frame + 0x5c)) < (double)(*(float *)(gen_frame + 0x54))) {
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x20));
        (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x24));
        (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x50)) = 2;
        pfVar3 = (*(float * PTR32 *)(gen_frame + 0x58));
        if (!((float10)*(*(float * PTR32 *)(gen_frame + 0x58)) < (float10)(*(float *)(gen_frame + 0x5c)))) {
          pfVar3 = &(*(float *)(gen_frame + 0x5c));
        }
        *(*(float * PTR32 *)(gen_frame + 0x58)) = *pfVar3;
      }
    }
  }
  (*(float *)(gen_frame + 0x5c)) = *param_2;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x5c)));
  (*(float * PTR32 *)(gen_frame + 0x58)) = ((float *)(uintptr_t)gen_fl2bits((float)(param_2[1])));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x58))))));
  (*(float *)(gen_frame + 0x54)) = param_2[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x54)));
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x18));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) =
       ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14))) +
              (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = ((float)GEN_TOF(SQRT((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)))));
  if ((double)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) < *(double *)&REFG(undefined, 0x10a1b58)) {
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_3 - (float10)(*(float *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_3[1] - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x58))))));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)param_3[2] - (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) =
         ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) +
                ((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)) + (float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x34))))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = ((float)GEN_TOF(SQRT((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)))));
    fVar5 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4));
    if ((float10)0 < fVar5) {
      fVar6 = (float10)*(double *)&REFG(double, 0x10f48e0);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar6);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar6);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x30)) * fVar6) / fVar5)));
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar6) / fVar5)));
      (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)(*(float *)(gen_frame + 0x38))) / fVar5)));
      (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x30));
      (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
      (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
    }
  }
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x5c)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x58))))) + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)(*(float *)(gen_frame + 0x28)));
  *param_3 = (float)((float10)(*(float *)(gen_frame + 0x5c)) + (float10)(*(float *)(gen_frame + 0x20)));
  param_3[1] = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x58))))) + (float10)(*(float *)(gen_frame + 0x24)));
  param_3[2] = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)(*(float *)(gen_frame + 0x28)));
  return (*(uint *)(gen_frame + 0x50));
}

/* ref: FUN_00b6f4c0 */
unsigned int F_00b6f4c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6f4c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  float * pfVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  float fVar5;
  
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
  case 0: ;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x120) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x124) = 0;
    goto switchD_00b6f4d2_default;
  case 1: ;
    uVar2 = F_00414500(*(undefined4 *)((*(uint *)&gen_args[4]) + 0x10),*(undefined4 *)((*(int *)&gen_args[0]) + 0x1bc));
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)REFG(double, 0x1088108) +
                                                        (float10)*(float *)(uVar2 + 0x14) *
                                                        (float10)REFG(double, 0x1088108)))) *
                                       (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))));
    uVar2 = F_0053b420(&REFG(undefined, 0x1375b30),0x20);
    if ((char)uVar2 == '\0') {
      uVar2 = F_0053b420(&REFG(undefined, 0x1375b30),0x21);
      if ((char)uVar2 != '\0') {
        fVar4 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x120) -
                ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) * (float10)(*(float *)&gen_args[2]);
        goto LAB_00b6f560;
      }
    }
    else {
      fVar4 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) * (float10)(*(float *)&gen_args[2]) + (float10)*(float *)((*(int *)&gen_args[0]) + 0x120)
      ;
LAB_00b6f560: ;
      *(float *)((*(int *)&gen_args[0]) + 0x120) = (float)fVar4;
    }
    uVar2 = F_0053b420(&REFG(undefined, 0x1375b30),0x1e);
    if ((char)uVar2 != '\0') {
      fVar4 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))));
      goto LAB_00b6f682;
    }
    uVar2 = F_0053b420(&REFG(undefined, 0x1375b30),0x1f);
    if ((char)uVar2 == '\0') goto switchD_00b6f4d2_default;
    fVar4 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x124) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) * (float10)(*(float *)&gen_args[3]);
    break;
  case 2: ;
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(F_0053b320());
    (*(float *)&gen_args[2]) = (float)(-((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) * (float10)(*(float *)&gen_args[2]));
    fVar4 = F_00b6e080(*(float *)((*(int *)&gen_args[0]) + 0x120),(*(float *)&gen_args[2]),REFG(float, 0x10f396c));
    *(float *)((*(int *)&gen_args[0]) + 0x120) = (float)fVar4;
    fVar5 = F_0053b360();
    (*(float *)&gen_args[2]) = (float)((float10)fVar5 * (float10)(*(float *)&gen_args[3]));
    fVar4 = F_00b6e080(*(float *)((*(int *)&gen_args[0]) + 0x124),(*(float *)&gen_args[2]),REFG(float, 0x10f396c));
    break;
  case 3: ;
    uVar2 = F_00414500(*(undefined4 *)((*(uint *)&gen_args[4]) + 0x10),*(undefined4 *)((*(int *)&gen_args[0]) + 0x1c4));
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(((float)GEN_TOF((((float10)1 - (float10)*(float *)(uVar2 + 0x14)) *
                                        (float10)*(double *)&REFG(undefined, 0x10df708) +
                                       (float10)*(double *)&REFG(undefined, 0x10d57f0)))));
    uVar2 = F_00535e40(&REFG(undefined, 0x1375b30));
    *(float *)((*(int *)&gen_args[0]) + 0x120) =
         ((float)GEN_TOF((((float10)(int)uVar2 / ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))))) * (float10)(*(float *)&gen_args[2]) +
                (float10)*(float *)((*(int *)&gen_args[0]) + 0x120))));
    uVar2 = F_00535e50(&REFG(undefined, 0x1375b30));
    fVar4 = (float10)(int)uVar2 / ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))));
LAB_00b6f682: ;
    fVar4 = fVar4 * (float10)(*(float *)&gen_args[3]) + (float10)*(float *)((*(int *)&gen_args[0]) + 0x124);
    break;
  default: ;
    goto switchD_00b6f4d2_default;
  }
  *(float *)((*(int *)&gen_args[0]) + 0x124) = (float)fVar4;
switchD_00b6f4d2_default: ;
  (*(float *)&gen_args[3]) = REFG(float, 0x1090708);
  (*(float *)&gen_args[2]) = REFG(float, 0x1087f04);
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0x120);
  pfVar3 = (float *)((*(int *)&gen_args[0]) + 0x120);
  if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar1)) || (REFG(float, 0x1087f04) < *pfVar1 || REFG(uint, 0x1087f04) == *pfVar1)) {
    pfVar3 = &(*(float *)&gen_args[2]);
  }
  if (!(REFG(float, 0x1090708) < *pfVar3)) {
    pfVar3 = &(*(float *)&gen_args[3]);
  }
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0x124);
  *(float *)((*(int *)&gen_args[0]) + 0x120) = *pfVar3;
  pfVar3 = pfVar1;
  if ((GEN_ISNAN((*(float *)&gen_args[2])) || GEN_ISNAN(*pfVar1)) || ((*(float *)&gen_args[2]) < *pfVar1 || (*(float *)&gen_args[2]) == *pfVar1)) {
    pfVar3 = &(*(float *)&gen_args[2]);
  }
  if (!((*(float *)&gen_args[3]) < *pfVar3)) {
    pfVar3 = &(*(float *)&gen_args[3]);
  }
  *pfVar1 = *pfVar3;
  return 0;
}

/* ref: FUN_00b6fac0 */
byte F_00b6fac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6fac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  float fVar8;
  
  bVar3 = false;
  if (REFG(int, 0x137104c) == 0) {
    return 0;
  }
  uVar5 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x60);
  if (*(int *)(uVar5 + 0x14) == 0) {
    return 0;
  }
  bVar4 = false;
  uVar5 = F_0053b420(&REFG(undefined, 0x1375b30),0x23);
  if ((char)uVar5 != '\0') {
    bVar4 = true;
    goto LAB_00b6fb97;
  }
  uVar5 = F_0053b420(&REFG(undefined, 0x1375b30),0x24);
  if ((char)uVar5 == '\0') {
    uVar5 = F_0053b420(&REFG(undefined, 0x1375b30),0x25);
    if ((char)uVar5 == '\0') {
      uVar5 = F_0053b300();
      if (uVar5 == 0) goto LAB_00b6fb97;
      uVar5 = F_0053b300();
      if ((!GEN_ISNAN((float)(int)uVar5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          !((float)(int)uVar5 <= *(float *)&REFG(undefined, 0x1088114))) {
        bVar4 = true;
        goto LAB_00b6fb97;
      }
      uVar5 = F_0053b300();
      fVar8 = (float)(int)uVar5;
      bVar6 = GEN_ISNAN(fVar8) || fVar8 == 0.0;
      bVar2 = fVar8 <= 0.0;
    }
    else {
      fVar8 = F_0053b360();
      if ((float10)0 < (float10)fVar8) {
        bVar4 = true;
        goto LAB_00b6fb97;
      }
      fVar8 = F_0053b360();
      fVar7 = (float10)fVar8;
      fVar1 = (float10)0;
      bVar6 = (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar7)) || fVar1 == fVar7;
      bVar2 = fVar7 <= fVar1;
    }
    if (!bVar2 || bVar6) goto LAB_00b6fb97;
  }
  bVar3 = true;
LAB_00b6fb97: ;
  if (((*(int *)(param_1 + 0xe0) == 0) &&
      ((float10)*(float *)(param_1 + 0xf8) <= (float10)*(float *)(param_1 + 0xf0))) && (bVar3)) {
    *(undefined4 *)(param_1 + 0xe0) = 1;
    return 1;
  }
  if (*(int *)(param_1 + 0xe0) == 1) {
    if (param_2 == 3) {
      fVar8 = *(float *)(param_1 + 0x240);
    }
    else {
      fVar8 = *(float *)(param_1 + 0xe4);
    }
    if ((((float10)fVar8 <= (float10)*(float *)(param_1 + 0xe8)) &&
        ((float10)*(float *)(param_1 + 0xf0) <= (float10)*(float *)(param_1 + 0xf4))) && (bVar4)) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b6fc40 */
float10 F_00b6fc40(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6fc40u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = F_00b6e080((*(float *)&gen_args[0]),(*(float *)&gen_args[1]),REFG(float, 0x10f3960));
  (*(float *)&gen_args[0]) = (float)fVar3;
  fVar4 = (float10)(*(float *)&gen_args[1]);
  pfVar2 = &(*(float *)&gen_args[0]);
  (*(float *)&gen_args[1]) = (float)(fVar4 + (float10)*(double *)&REFG(undefined, 0x10c6318));
  fVar1 = (float)(fVar4 - (float10)*(double *)&REFG(undefined, 0x10c6318));
  if (!((float10)(float)fVar3 < (float10)(*(float *)&gen_args[1]))) {
    pfVar2 = &(*(float *)&gen_args[1]);
  }
  if ((float10)fVar1 < (float10)*pfVar2) {
    return (float10)*pfVar2;
  }
  return (float10)fVar1;
}

/* ref: FUN_00b6fcb0 */
float10 F_00b6fcb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6fcb0u, gen_a0, 0u, 0u, 0u);
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
unsigned int F_00b6fde0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6fde0u, gen_a0, 0u, gen_a2, 0u);
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
    return 0;
  }
  *(*(float * PTR32 *)&gen_args[2]) = *(float *)((*(int *)&gen_args[0]) + 0xe8);
  return 0;
}

/* ref: FUN_00b6fe20 */
unsigned int F_00b6fe20(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6fe20u, 0u, 0u, 0u, 0u);
  float in_ecx = (float)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = in_ecx;
  pfVar1 = (float *)((int)gen_fl2bits(in_ecx) + 0xec);
  (*(float *)(gen_frame + 0x8)) = param_2;
  if ((float10)param_2 < (float10)*(float *)((int)gen_fl2bits(in_ecx) + 0xec)) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if ((float10)*(float *)((int)gen_fl2bits(in_ecx) + 0xe8) < (float10)*pfVar1) {
    *(float *)((int)gen_fl2bits(in_ecx) + 0xe4) = *pfVar1;
    return 0;
  }
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0xe4) =
       *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0xe8);
  return 0;
}

/* ref: FUN_00b6fe80 */
unsigned int F_00b6fe80(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6fe80u, gen_a0, 0u, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  float fVar1;
  float * pfVar2;
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
    return 0;
  }
  pfVar3 = &(*(float *)&gen_args[1]);
  if (!((float10)(*(float *)&gen_args[1]) < (float10)*(float *)((*(int *)&gen_args[0]) + 0xec))) {
    pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xec);
  }
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(*(float *)((*(int *)&gen_args[0]) + 0xe8));
  fVar4 = (float10)*(float *)((*(int *)&gen_args[0]) + 0xe8);
  if (!(fVar4 < (float10)*pfVar3)) {
    pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xe8);
  }
  pfVar2 = &(*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = *pfVar3;
  if (!((float10)*pfVar3 < (float10)*(float *)((*(int *)&gen_args[0]) + 0xec))) {
    pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xec);
  }
  if (!(fVar4 < (float10)*pfVar2)) {
    pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xe8);
  }
  *(float *)((*(int *)&gen_args[0]) + 0xe4) = *pfVar2;
  return 0;
}

/* ref: FUN_00b6ff40 */
unsigned int F_00b6ff40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6ff40u, gen_a0, 0u, 0u, 0u);
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
    return 0;
  }
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x100) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x114);
  return 0;
}

/* ref: FUN_00b6ff90 */
unsigned int F_00b6ff90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6ff90u, gen_a0, 0u, 0u, 0u);
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
    return 0;
  }
  *(undefined4 *)((*(int *)&gen_args[0]) + 0xf0) = *(undefined4 *)((*(int *)&gen_args[0]) + 0xf4);
  return 0;
}

/* ref: FUN_00b6ffe0 */
uint F_00b6ffe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6ffe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  float * pfVar2;
  uint uVar3;
  
  if (REFG(int, 0x137104c) == 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
  }
  else {
    uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(in_ecx + 0x25c));
    (*(float *)(gen_frame + 0x8)) = *(float *)(uVar3 + 0x14);
  }
  pfVar2 = (float *)(in_ecx + 0x118);
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x8));
  if ((float10)(*(float *)(gen_frame + 0x8)) < (float10)*pfVar2) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  if (!((float10)*(float *)(in_ecx + 0x114) < (float10)*pfVar2)) {
    pfVar2 = (float *)(in_ecx + 0x114);
  }
  *(float *)(in_ecx + 0x100) = *pfVar2;
  uVar3 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) == 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x8)) = *(float *)(REFG(undefined4, 0x1379694) + 0xb0);
  }
  *(undefined4 *)(in_ecx + 0x104) = 0;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(undefined1 *)(in_ecx + 0x205) = 1;
  *(float *)(in_ecx + 0xfc) = (float)((float10)(*(float *)(gen_frame + 0x8)) + fVar1);
  *(undefined4 *)(in_ecx + 0x13c) = *(undefined4 *)(in_ecx + 0xe4);
  return uVar3;
}

/* ref: FUN_00b700b0 */
unsigned int F_00b700b0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb700b0u, 0u, 0u, 0u, 0u);
  float in_ecx = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  
  (*(float *)(gen_frame + 0x8)) = in_ecx;
  pfVar2 = (float *)((int)gen_fl2bits(in_ecx) + 0x118);
  (*(float *)(gen_frame + 0x8)) = param_3;
  if ((float10)param_3 < (float10)*(float *)((int)gen_fl2bits(in_ecx) + 0x118)) {
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
  return 0;
}

/* ref: Client::Game::Camera::vf3 */
uint F_00b70120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))
                    (this + 0x10,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00b70140 */
uint F_00b70140(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb70140u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 4));
    F_00414ad0(uVar2,param_2);
  }
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 8));
    F_00414ad0(uVar2,param_3);
  }
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 0xc));
    bVar1 = F_00414ad0(uVar2,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b701c0 */
uint F_00b701c0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb701c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 0x10));
    F_00414ad0(uVar2,param_2);
  }
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 0x14));
    F_00414ad0(uVar2,param_3);
  }
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 0x18));
    bVar1 = F_00414ad0(uVar2,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b70240 */
uint F_00b70240(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb70240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 0x1c));
    F_00414ad0(uVar2,param_2);
  }
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 0x20));
    F_00414ad0(uVar2,param_3);
  }
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(param_1 + 0x24));
    bVar1 = F_00414ad0(uVar2,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b702c0 */
uint F_00b702c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb702c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  if (REFG(int, 0x137104c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(in_ecx + 0x264));
    uVar2 = *(undefined4 *)(uVar1 + 0x14);
  }
  *(undefined4 *)(in_ecx + 0xe4) = uVar2;
  if (REFG(int, 0x137104c) == 0) {
    *(undefined4 *)(in_ecx + 0x100) = 0;
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(in_ecx + 0x25c));
  *(undefined4 *)(in_ecx + 0x100) = *(undefined4 *)(uVar1 + 0x14);
  return uVar1;
}

/* ref: FUN_00b70330 */
uint F_00b70330(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)((int)this + 0x27c));
    fVar2 = *(float *)(uVar1 + 0x14);
  }
  F_00b6fe80(this,fVar2,param_1);
  if (REFG(int, 0x137104c) == 0) {
    *(undefined4 *)((int)this + 0x100) = 0;
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)((int)this + 0x274));
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(uVar1 + 0x14);
  return uVar1;
}

/* ref: FUN_00b703c0 */
uint F_00b703c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb703c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  float * pfVar2;
  
  if (REFG(int, 0x137104c) == 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
    uVar1 = 0;
  }
  else {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(in_ecx + 0x26c));
    (*(float *)(gen_frame + 0x8)) = *(float *)(uVar1 + 0x14);
  }
  pfVar2 = (float *)(in_ecx + 0xf8);
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x8));
  if ((float10)(*(float *)(gen_frame + 0x8)) < (float10)*pfVar2) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  if ((float10)*(float *)(in_ecx + 0xf4) < (float10)*pfVar2) {
    *(float *)(in_ecx + 0xf0) = *pfVar2;
    return uVar1;
  }
  *(undefined4 *)(in_ecx + 0xf0) = *(undefined4 *)(in_ecx + 0xf4);
  return uVar1;
}

/* ref: FUN_00b70440 */
uint F_00b70440(unsigned int gen_a0)
{
  GEN_ENTER(0xb70440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b6bf70(this);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    *(undefined4 *)((int)this + 0x100) = 0;
switchD_00b7044d_caseD_4: ;
    uVar1 = F_00b703c0(this);
    return uVar1;
  case 1: ;
  case 2: ;
    uVar1 = F_00b702c0(this);
    return uVar1;
  case 3: ;
  case 6: ;
    uVar1 = F_00b70330(this,uVar1);
    return uVar1;
  case 4: ;
    goto switchD_00b7044d_caseD_4;
  default: ;
    return uVar1;
  }
}

/* ref: FUN_00b704a0 */
uint F_00b704a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb704a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = F_00b6bf70(this);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 4: ;
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = REFG(float, 0x10f38c0);
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)((int)this + 0x26c));
      F_00414ad0(uVar1,fVar3);
    }
    F_00b703c0(this);
    break;
  case 1: ;
  case 2: ;
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = *(float *)&REFG(undefined, 0x10f38b4);
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)((int)this + 0x264));
      F_00414ad0(uVar1,fVar3);
    }
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = REFG(float, 0x108b28c);
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)((int)this + 0x25c));
      F_00414ad0(uVar1,fVar3);
    }
    F_00b702c0(this);
    *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)((int)this + 0xe4);
    *(undefined1 *)((int)this + 0x205) = 1;
    uVar1 = F_00ab9000(0x35e);
    return uVar1;
  case 3: ;
  case 6: ;
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = *(float *)&REFG(undefined, 0x10f38b4);
      uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)((int)this + 0x27c));
      F_00414ad0(uVar2,fVar3);
    }
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = REFG(float, 0x108b28c);
      uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)((int)this + 0x274));
      F_00414ad0(uVar2,fVar3);
    }
    F_00b70330(this,uVar1);
    uVar1 = F_00ab9000(0x35e);
    return uVar1;
  }
  uVar1 = F_00ab9000(0x35e);
  return uVar1;
}

/* ref: FUN_00b70cf0 */
unsigned int F_00b70cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb70cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x40) = *param_2;
  *(undefined4 *)(in_ecx + 0x44) = param_2[1];
  *(undefined4 *)(in_ecx + 0x48) = param_2[2];
  *(uint *)(in_ecx + 0x34) = *(uint *)(in_ecx + 0x34) | 2;
  return 0;
}

/* ref: FUN_00b70d10 */
unsigned int F_00b70d10(unsigned int gen_a0, unsigned int gen_a1)
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
      ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
    }
    if (*(int *)((int)this + 0x2c) == -1) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
    }
    *(int *)((int)REFG(undefined4, 0x1371298) + 0x34) = *(int *)((int)this + param_1 * 4) + 0x10;
    F_0069c300(REFG(undefined4, 0x1371298),0);
    *(int *)((int)this + 0x2c) = param_1;
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4);
    ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,uVar2);
  }
  return 0;
}

/* ref: FUN_00b70d80 */
unsigned int F_00b70d80(unsigned int gen_a0)
{
  GEN_ENTER(0xb70d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  F_00b6de70((undefined *)((int)this + 0xc));
  if (*(int *)((int)this + 0x2c) != -1) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00b718e0 */
uint F_00b718e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb718e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = REFG(float, 0x10f38c0);
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
  uVar2 = F_00b70dc0(this,(float)(float10)0);
  return uVar2;
}

/* ref: FUN_00b71b60 */
uint F_00b71b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  uVar1 = F_00b70dc0(this,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71b90 */
uint F_00b71b90(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x10c,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71be0 */
uint F_00b71be0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x138,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71d10 */
uint F_00b71d10(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x164,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71d60 */
uint F_00b71d60(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71d60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 400,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71e90 */
uint F_00b71e90(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x1bc,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71f50 */
uint F_00b71f50(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x1e8,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b72010 */
uint F_00b72010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb72010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x214) = (undefined1)param_1;
  uVar1 = F_00b70dc0(this,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b72030 */
uint F_00b72030(unsigned int gen_a0)
{
  GEN_ENTER(0xb72030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  F_006906c0((undefined *)((int)this + 0x10));
  uVar1 = REFG(float, 0x1087f04);
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
uint F_00b720d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb720d0u, gen_a0, gen_a1, gen_a2, 0u);
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
unsigned int F_00b72120(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb72120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  float10 fVar1;
  float * pfVar2;
  int iVar3;
  int * piVar4;
  undefined * this;
  float * pfVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  pfVar5 = (float *)((*(int *)&gen_args[0]) + 0xe8);
  *pfVar5 = (*(float *)&gen_args[3]);
  pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xec);
  *pfVar2 = (*(float *)&gen_args[4]);
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x280) = 0;
  (*(float *)&gen_args[3]) = (*(float *)&gen_args[2]);
  if ((float10)(*(float *)&gen_args[2]) < (float10)*pfVar2) {
    pfVar2 = &(*(float *)&gen_args[3]);
  }
  if ((float10)*pfVar5 < (float10)*pfVar2) {
    pfVar5 = pfVar2;
  }
  pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xf8);
  *(float *)((*(int *)&gen_args[0]) + 0xe4) = *pfVar5;
  (*(float *)&gen_args[2]) = ((float)GEN_TOF((((float10)(*(float *)&gen_args[5]) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                   (float10)*(double *)&REFG(undefined, 0x1080220))));
  if ((float10)(*(float *)&gen_args[2]) < (float10)*pfVar2) {
    pfVar2 = &(*(float *)&gen_args[2]);
  }
  if (!((float10)*(float *)((*(int *)&gen_args[0]) + 0xf4) < (float10)*pfVar2)) {
    pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xf4);
  }
  piVar4 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0x2c8);
  *(float *)((*(int *)&gen_args[0]) + 0xf0) = *pfVar2;
  if (piVar4 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x24))
                              (piVar4,*(undefined4 *)(&REFG(undefined, 0x10f39c8) + ((*(uint *)&gen_args[1]) & 0xff) * 0x14))));
    uVar7 = 1;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
    piVar4 = (int *)F_00cb0910(this,uVar7);
    iVar3 = *piVar4;
  }
  fVar6 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float10)REFG(double, 0x10944b8);
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x2c4) = 0;
  *(float *)((*(int *)&gen_args[0]) + 0x118) =
       ((float)GEN_TOF((((float10)(float)(fVar6 / fVar1) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
              (float10)*(double *)&REFG(undefined, 0x1080220))));
  return 0;
}

/* ref: FUN_00b723c0 */
uint F_00b723c0(unsigned int gen_a0, unsigned int gen_a1)
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
  uVar1 = F_00690f90((undefined *)((int)this + 0x10));
  return uVar1;
}

/* ref: FUN_00b724f0 */
unsigned int F_00b724f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb724f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  float * pfVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  if (REFG(int, 0x137104c) == 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
  }
  else {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(in_ecx + 0x26c));
    (*(float *)(gen_frame + 0x8)) = *(float *)(uVar1 + 0x14);
  }
  pfVar2 = (float *)(in_ecx + 0xf8);
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x8));
  if ((float10)(*(float *)(gen_frame + 0x8)) < (float10)*pfVar2) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  if (!((float10)*(float *)(in_ecx + 0xf4) < (float10)*pfVar2)) {
    pfVar2 = (float *)(in_ecx + 0xf4);
  }
  *(float *)(in_ecx + 0xf0) = *pfVar2;
  if (REFG(int, 0x1379694) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(REFG(int, 0x1379694) + 0xb0);
  }
  *(undefined4 *)(in_ecx + 0xfc) = uVar3;
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
float10 F_00b725f0(float gen_a0)
{
  GEN_ENTER(0xb725f0u, 0u, 0u, 0u, 0u);
  float in_ecx = (float)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  float * pfVar2;
  float10 fVar3;
  float10 extraout_ST1;
  float fVar4;
  
  (*(float *)(gen_frame + 0x8)) = in_ecx;
  pfVar2 = (float *)((int)gen_fl2bits(in_ecx) + 0xf8);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)gen_fl2bits(in_ecx) + 0x140);
  if ((float10)*(float *)((int)gen_fl2bits(in_ecx) + 0x140) < (float10)*pfVar2) {
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
  uVar1 = REFG(float, 0x1088068);
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
  return extraout_ST1;
}

/* ref: FUN_00b726f0 */
byte F_00b726f0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb726f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  undefined4 uVar2;
  float * pfVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1375ac0);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1375ac4);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1375ac8);
  fVar4 = 0.0;
  (*(float *)(gen_frame + 0x20)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x28)) = *(float *)(in_ecx + 0xe4);
  if (REFG(int, 0x1379694) != 0) {
    fVar4 = *(float *)(REFG(int, 0x1379694) + 0xb0);
  }
  (*(float *)(gen_frame + 0x3c)) = fVar4;
  (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar4 - (float10)*(double *)&REFG(undefined, 0x1080228));
  pfVar3 = (float *)F_00b6a5c0(*(float *)(in_ecx + 0xe4),in_xmm2,in_xmm3,in_xmm7,&(*(float *)(gen_frame + 0x0)),
                                 &(*(float *)(gen_frame + 0x20)),
                                 (float)((float10)fVar4 - (float10)*(double *)&REFG(undefined, 0x1080228)));
  (*(float *)(gen_frame + 0x20)) = *pfVar3;
  (*(float *)(gen_frame + 0x24)) = pfVar3[1];
  (*(float *)(gen_frame + 0x3c)) = gen_bits2f(REFG(float, 0x133d294));
  (*(float *)(gen_frame + 0x28)) = pfVar3[2];
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x0));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x8));
  if (*(int *)(in_ecx + 0xd0) == 0) {
    F_006906f0((undefined *)(in_ecx + 0x10));
  }
  *(float *)(in_ecx + 0x40) = (*(float *)(gen_frame + 0x20));
  uVar1 = REFG(float, 0x1087f04);
  *(float *)(in_ecx + 0x44) = (*(float *)(gen_frame + 0x24));
  *(float *)(in_ecx + 0x48) = (*(float *)(gen_frame + 0x28));
  *(uint *)(in_ecx + 0x34) = *(uint *)(in_ecx + 0x34) | 2;
  *(float *)(in_ecx + 0x70) = (*(float *)(gen_frame + 0x10));
  *(float *)(in_ecx + 0x74) = (*(float *)(gen_frame + 0x14));
  *(float *)(in_ecx + 0x78) = (*(float *)(gen_frame + 0x18));
  *(undefined4 *)(in_ecx + 0x80) = 0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  uVar2 = REFG(float, 0x10f3960);
  *(undefined4 *)(in_ecx + 0x84) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0xd0) + 0xac))) = uVar2;
  *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0xd0) + 0xb0))) = REFG(float, 0x10f38dc);
  *((float *)GEN_TOP((*(int *)(in_ecx + 0xd0) + 0xa4))) = (*(float *)(gen_frame + 0x3c));
  return 1;
}

/* ref: FUN_00b72890 */
unsigned int F_00b72890(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb72890u, gen_a0, 0u, 0u, 0u);
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
  (*(float *)&gen_args[2]) = (*(float *)&gen_args[1]);
  if ((float10)(*(float *)&gen_args[1]) < (float10)*pfVar2) {
    pfVar2 = &(*(float *)&gen_args[2]);
  }
  if (!((float10)*(float *)((*(int *)&gen_args[0]) + 0xe8) < (float10)*pfVar2)) {
    pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xe8);
  }
  fVar1 = *pfVar2;
  *(float *)((*(int *)&gen_args[0]) + 0x13c) = (*(float *)&gen_args[1]);
  *(float *)((*(int *)&gen_args[0]) + 0xe4) = fVar1;
  return 0;
}

/* ref: FUN_00b72900 */
unsigned int F_00b72900(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb72900u, gen_a0, 0u, 0u, 0u);
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
  (*(float *)&gen_args[2]) = (*(float *)&gen_args[1]);
  if ((float10)(*(float *)&gen_args[1]) < (float10)*pfVar2) {
    pfVar2 = &(*(float *)&gen_args[2]);
  }
  if (!((float10)*(float *)((*(int *)&gen_args[0]) + 0xf4) < (float10)*pfVar2)) {
    pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xf4);
  }
  fVar1 = *pfVar2;
  *(float *)((*(int *)&gen_args[0]) + 0xf0) = fVar1;
  *(float *)((*(int *)&gen_args[0]) + 0x158) = fVar1;
  return 0;
}

/* ref: FUN_00b732f0 */
uint F_00b732f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb732f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  float10 fVar2;
  
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))) - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[1])) - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[1])))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[2])) - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[2])))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))) - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[1])) - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[1])))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[2])) - ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[2])))));
  (*(float *)(gen_frame + 0x38)) = F_00aae900(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))));
  (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x3c)) = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  if ((*(int *)&gen_args[4]) == 3) {
LAB_00b73398: ;
    if (*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) <= 0.0) {
      fVar2 = (float10)(*(float *)(gen_frame + 0x38));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - fVar2);
      fVar2 = F_00aae710((float)((float10)(*(float *)(gen_frame + 0x3c)) - fVar2));
      (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(ABS(fVar2)));
      if (*(double *)&REFG(undefined, 0x10f4960) < (double)((float)GEN_TOF(ABS(fVar2)))) {
        (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),1);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) = REFG(float, 0x10f3968);
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
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) = REFG(float, 0x10f3968);
  (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),1);
LAB_00b73401: ;
  uVar1 = F_00b6f180((*(undefined * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),(*(float * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00b73430 */
byte F_00b73430(unsigned int gen_a0)
{
  GEN_ENTER(0xb73430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte local_5;
  
  local_5 = 1;
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x68))))(REFG(undefined4, 0x1379694));
    if ((char)uVar1 != '\0') {
      *(undefined4 *)((int)this + 0x170) = *(undefined4 *)((int)this + 0x40);
      *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)this + 0x44);
      *(undefined4 *)((int)this + 0x178) = *(undefined4 *)((int)this + 0x48);
      *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x70);
      *(undefined4 *)((int)this + 0x184) = *(undefined4 *)((int)this + 0x74);
      *(undefined4 *)((int)this + 0x188) = *(undefined4 *)((int)this + 0x78);
      if (*(char *)((int)this + 400) != '\0') {
        ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
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
LAB_00b734da: ;
  *(bool *)((int)this + 400) = REFG(undefined4, 0x1379694) == (int *)0x0;
  return local_5;
}

/* ref: FUN_00b73600 */
uint F_00b73600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  uVar3 = F_00b6bf70(param_1);
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
    uVar6 = F_00414500(*(undefined4 *)(uVar3 + 0x10),iVar8);
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
    uVar7 = F_00414500(*(undefined4 *)(uVar3 + 0x10),iVar8);
    if (*(int *)(uVar7 + 0x14) != 0) {
      param_2 = (uint)gen_fl2bits(REFG(float, 0x1090708));
    }
  }
  if ((char)param_3 != '\0') {
    param_2 = 0;
  }
  if ((local_c == 1) || (local_c == 3)) {
    F_00b6f4c0(param_1,uVar4,local_10,GEN_TOF(gen_bits2f(param_2)),uVar3);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x120) = 0;
    *(undefined4 *)((int)param_1 + 0x124) = 0;
    F_00b6f710(param_1,uVar4,local_10,GEN_TOF(gen_bits2f(param_2)),uVar3);
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

/* ref: FUN_00b73bc0 */
unsigned int F_00b73bc0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xb73bc0u, gen_a0, 0u, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * puVar1;
  uint uVar2;
  float10 fVar3;
  
  (*(int *)(gen_frame + 0xac)) = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    puVar1 = (undefined4 *)F_00a61360(REFG(int, 0x1379694),in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x80)));
    *param_8 = *puVar1;
    param_8[1] = puVar1[1];
    param_8[2] = puVar1[2];
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)in_ecx + 0x134))) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      if ((char)param_10 == '\0') {
        fVar3 = F_00b6fcb0(in_ecx,GEN_TOF(gen_bits2f(param_8[1])));
        (*(float *)(gen_frame + 0xa8)) = (float)fVar3;
        *(float *)((int)in_ecx + 0x1f0) = (*(float *)(gen_frame + 0xa8));
        param_8[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa8)));
      }
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)in_ecx + 0x134))) {
    case 0: ;
      *param_7 = *param_8;
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      param_7[1] = param_8[1];
      (*(undefined4 *)(gen_frame + 0x98)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x94)) = 0;
      param_7[2] = param_8[2];
      F_00b6a690(in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x90)),*(float *)((int)in_ecx + 0xfc)
                   ,GEN_TOF(gen_bits2f(*(uint *)((int)in_ecx + 0x100) ^ REFG(uint, 0x10920d0))));
      puVar1 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x50)),param_8,((undefined1 *)(gen_frame + 0x80)));
      break;
    case 1: ;
      *param_6 = *param_8;
      param_6[1] = param_8[1];
      param_6[2] = param_8[2];
      puVar1 = (undefined4 *)
               F_00b6e680(in_ecx,in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x30)),param_8,param_10,
                            (*(int *)(gen_frame + 0xac)));
      *param_7 = *puVar1;
      param_7[1] = puVar1[1];
      param_7[2] = puVar1[2];
      *(undefined4 *)((int)in_ecx + 0x230) = *param_7;
      *(undefined4 *)((int)in_ecx + 0x234) = param_7[1];
      *(undefined4 *)((int)in_ecx + 0x238) = param_7[2];
      *(undefined1 *)((int)in_ecx + 0x205) = 0;
      return 0;
    case 2: ;
      *param_6 = *param_8;
      param_6[1] = param_8[1];
      param_6[2] = param_8[2];
      uVar2 = F_00b6c520(in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x70)),*(float *)((int)in_ecx + 0x13c),
                           *(float *)((int)in_ecx + 0xfc),*(float *)((int)in_ecx + 0x100));
      puVar1 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x10)),param_8,uVar2);
      param_6 = param_7;
      break;
    case 3: ;
    case 5: ;
    case 6: ;
      puVar1 = (undefined4 *)F_00b6a390(((undefined1 *)(gen_frame + 0x20)),param_8,param_9);
      *param_6 = *puVar1;
      param_6[1] = puVar1[1];
      param_6[2] = puVar1[2];
      puVar1 = (undefined4 *)
               F_00b72ca0(in_ecx,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x0)),param_8,param_6,
                            *(float *)((int)in_ecx + 0x13c),(int)in_ecx + 0xfc,(int)in_ecx + 0x100);
      param_6 = param_7;
      break;
    case 4: ;
      *param_7 = *param_8;
      param_7[1] = param_8[1];
      param_7[2] = param_8[2];
      uVar2 = F_00b72b50(in_ecx,((undefined1 *)(gen_frame + 0x60)),param_7,param_9);
      puVar1 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x40)),param_8,uVar2);
      break;
    default: ;
      goto switchD_00b73c5a_default;
    }
    *param_6 = *puVar1;
    param_6[1] = puVar1[1];
    param_6[2] = puVar1[2];
  }
switchD_00b73c5a_default: ;
  *(undefined1 *)((int)in_ecx + 0x205) = 0;
  return 0;
}

/* ref: FUN_00b73ef0 */
unsigned int F_00b73ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb73ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float10 fVar1;
  undefined * this_00;
  bool bVar2;
  
  if (*(int *)((int)this + 0xe0) == 1) {
    if (param_1 == 3) {
      (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 0x240);
    }
    else {
      (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 0xe4);
    }
    (*(float *)(gen_frame + 0x18)) = F_00b6c6b0();
    bVar2 = GEN_ISNAN((float10)(*(float *)(gen_frame + 0x18))) || GEN_ISNAN((float10)0);
    if (bVar2 == (bVar2 || (float10)(*(float *)(gen_frame + 0x18)) == (float10)0)) {
      (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x14));
      if (((param_1 == 1) && (*(char *)((int)this + 0x1e0) == '\0')) &&
         ((*(int *)((int)this + 0x1e4) == 0 || (!GEN_ISNAN((*(float *)(gen_frame + 0x18))) && !(0.0 <= (*(float *)(gen_frame + 0x18))))))) {
        this_00 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40,(int)this + 0x70);
        (*(float *)(gen_frame + 0x1c)) = F_004bd280(this_00);
        *(undefined1 *)((int)this + 0x1e0) = 1;
        *(float *)((int)this + 0x13c) = (*(float *)(gen_frame + 0x1c));
      }
      fVar1 = (float10)(*(float *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) + fVar1);
      F_00b6fe80(this,(float)((float10)(*(float *)(gen_frame + 0x1c)) + fVar1),param_1);
    }
    if (*(char *)((int)this + 0x1e0) != '\0') {
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)((int)this + 0x13c))));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x14)))));
      if ((float10)REFG(float, 0x10947f8) < (float10)(*(float *)(gen_frame + 0x14))) {
        *(undefined1 *)((int)this + 0x1e0) = 1;
        return 0;
      }
      *(undefined1 *)((int)this + 0x1e0) = 0;
    }
  }
  return 0;
}

/* ref: Client::Game::Camera::vf4 */
uint F_00b744d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb744d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0xe0) == 0) {
    *(undefined4 *)(in_ecx + 0x108) = 0;
    *(undefined4 *)(in_ecx + 0x104) = 0;
    *(undefined4 *)(in_ecx + 0x100) = 0;
    uVar1 = REFG(undefined4, 0x1379694);
    if (REFG(undefined4, 0x1379694) != 0) {
      *(undefined4 *)(in_ecx + 0xfc) = *(undefined4 *)(REFG(undefined4, 0x1379694) + 0xb0);
    }
  }
  else {
    uVar1 = *(int *)(in_ecx + 0xe0) - 1;
    if (uVar1 == 0) {
      uVar1 = F_00b6ffe0(in_ecx);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b74520 */
uint F_00b74520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb74520u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * PTR32 * ppvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  uVar1 = F_00b6bf70(param_1);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    *(undefined4 *)((int)param_1 + 0x100) = 0;
  case 4: ;
    F_00b703c0(param_1);
    break;
  case 1: ;
  case 2: ;
    F_00b702c0(param_1);
    break;
  case 3: ;
  case 6: ;
    F_00b70330(param_1,uVar1);
  }
  *(undefined4 *)((int)param_1 + 0x104) = 0;
  *(undefined4 *)((int)param_1 + 0x108) = 0;
  if ((0 < (int)param_2) && ((int)param_2 < 3)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)param_1 + 0xe4);
    ppvVar2 = (undefined * PTR32 *)((int)param_1 + 0xec);
    if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppvVar2)))) {
      ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    if (!((float10)*(float *)((int)param_1 + 0xe8) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppvVar2))))) {
      ppvVar2 = (undefined * PTR32 *)((int)param_1 + 0xe8);
    }
    *(undefined * PTR32 *)((int)param_1 + 0xe4) = *ppvVar2;
    *(undefined * PTR32 *)((int)param_1 + 0x13c) = (*(undefined * PTR32 *)(gen_frame + 0x8));
    param_2 = F_00b6ffe0(param_1);
  }
  return param_2;
}

/* ref: FUN_00b74940 */
uint F_00b74940(unsigned int gen_a0)
{
  GEN_ENTER(0xb74940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b70140((int)this + 600,*(float *)((int)this + 0x100),*(float *)((int)this + 0xf0),
                       *(float *)((int)this + 0xe4));
  return uVar1;
}

