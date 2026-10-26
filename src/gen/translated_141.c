#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00bd5570 */
uint F_00bd5570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0xb4) == (char)param_2) {
    return in_ecx + 0x30;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf26 */
unsigned int F_00bd55a0(void)
{
  GEN_ENTER(0xbd55a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf33 */
unsigned int F_00bd55b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd55b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf34 */
byte F_00bd55c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd55c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf13 */
byte F_00bd55d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd55d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd560a;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd55f5;
  }
  else {
LAB_00bd55f5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd560a: ;
  uVar3 = F_00bccde0(this_00,*(undefined4 *)(this + 0x24),0,0,*(undefined4 *)(this + 0x2c));
  *(uint *)(this + 0x88) = uVar3;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf33 */
uint F_00bd5630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  
  pvVar2 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar2;
  if (pvVar2 == (undefined *)0x0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      pvVar2 = (undefined *)0x0;
      if (iVar3 != 0) goto LAB_00bd565a;
    }
    else {
LAB_00bd565a: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      pvVar2 = (undefined *)F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)(this + 0x78);
  }
  if (this_00 == (undefined *)0x0) {
    return (uint)pvVar2;
  }
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 != 0) goto LAB_00bd56b6;
  piVar5 = *(int * PTR32 *)(this + 0x70);
  if (piVar5 == (int *)0x0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bd569c;
    }
    else {
LAB_00bd569c: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar3 + 4);
    }
    piVar5 = *(int * PTR32 *)(this + 0x70);
    if (piVar5 != (int *)0x0) goto LAB_00bd56a9;
  }
  else {
LAB_00bd56a9: ;
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 100))(piVar5);
    *(uint *)(this + 0x74) = uVar4;
  }
  iVar3 = *(int *)(this + 0x74);
LAB_00bd56b6: ;
  uVar4 = F_00bc4ce0(this_00,*(undefined4 *)(this + 0x88),*(undefined4 *)(this + 0x24),this,iVar3,
                       *(undefined4 *)(this + 0x2c));
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf35 */
uint F_00bd56e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd56e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd5721;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5708;
  }
  else {
LAB_00bd5708: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd5721: ;
  uVar3 = F_00bc4e60(this_00,param_2,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: FUN_00bd5740 */
uint F_00bd5740(unsigned int gen_a0)
{
  GEN_ENTER(0xbd5740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd577e;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5765;
  }
  else {
LAB_00bd5765: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd577e: ;
  uVar3 = F_00bc4e00(this_00,*(undefined4 *)((int)this + 0x88),this,
                       *(undefined4 *)((int)this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf26 */
uint F_00bd57a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd57a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd57de;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd57c5;
  }
  else {
LAB_00bd57c5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd57de: ;
  uVar3 = F_00bc4e00(this_00,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf8 */
uint F_00bd5800(unsigned int gen_a0)
{
  GEN_ENTER(0xbd5800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd583e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5825;
  }
  else {
LAB_00bd5825: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd583e: ;
  uVar3 = F_00bc4e00(this_00,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf34 */
byte F_00bd5860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd589e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd5885;
  }
  else {
LAB_00bd5885: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd589e: ;
  F_00bc4e00(this_00,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return 1;
}

/* ref: FUN_00bd58c0 */
unsigned int F_00bd58c0(float gen_a0)
{
  GEN_ENTER(0xbd58c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf25 */
unsigned int F_00bd58e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd58e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x2c) == 0x75) && (REFG(int, 0x13759f4) != 0)) {
    F_00690270(REFG(int, 0x13759f4));
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf33 */
uint F_00bd5900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar8;
  undefined3 extraout_var_01 = 0;
  uint uVar9;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x6c);
  if (this_00 == (undefined *)0x0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    this_00 = *(undefined * PTR32 *)(this + 0x6c);
  }
  F_00beb760(this_00);
  piVar6 = (int *)F_00beb670(this_00);
  (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar6;
  if ((piVar6 != (int *)0x0) || (uVar7 = 0, *(int *)(this + 0x2c) == 0x75)) {
    uVar7 = *(int *)(this + 0x2c) - 0x21;
    switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
    case 0x21: ;
      bVar5 = F_00bd1fe0(this);
      uVar7 = CONCAT31(extraout_var,bVar5);
      if (bVar5 == 0) {
        bVar5 = F_00bd2480(this);
        uVar7 = CONCAT31(extraout_var_00,bVar5);
        if (bVar5 == 0) {
          uVar7 = F_00c22ac0((*(int * PTR32 *)(gen_frame + 0x4c)),*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))),
                               *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10))));
          return uVar7;
        }
      }
      break;
    case 0x37: ;
      uVar8 = F_00beb790(this_00);
      uVar9 = 0;
      (*(uint *)(gen_frame + 0x48)) = uVar8;
      uVar7 = 0;
      if (uVar8 != 0) {
        do {
          uVar8 = F_00bec250(this_00,uVar9);
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = F_00a62370(uVar8,(*(int * PTR32 *)(gen_frame + 0x4c)));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (*(uint *)(gen_frame + 0x48)));
        return uVar7;
      }
      break;
    case 0x49: ;
      bVar5 = F_00bd1fe0(this);
      uVar7 = CONCAT31(extraout_var_01,bVar5);
      if (bVar5 == 0) {
        iVar3 = *(int *)(this + 0x24);
        if (*(int *)(iVar3 + 0x24) != 0) {
          iVar4 = *(int *)(iVar3 + 0x20);
          (*(float *)(gen_frame + 0x30)) = *(float *)(iVar4 + iVar3);
          (*(float *)(gen_frame + 0x34)) = *(float *)(iVar4 + 4 + iVar3);
          (*(float *)(gen_frame + 0x38)) = *(float *)(iVar4 + 8 + iVar3);
        }
        if (*(int *)(iVar3 + 0x1c) != 0) {
          iVar4 = *(int *)(iVar3 + 0x18);
          uVar1 = *(undefined4 *)(iVar4 + 8 + iVar3);
          uVar2 = *(undefined4 *)(iVar4 + 4 + iVar3);
          (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(iVar4 + iVar3);
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          (*(undefined4 *)(gen_frame + 0x28)) = uVar1;
          F_00a1e0d0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)));
        }
        if (*(int *)(iVar3 + 0x14) != 0) {
          (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((iVar3 + *(int *)(iVar3 + 0x10))));
        }
        uVar7 = F_00a62390((*(int * PTR32 *)(gen_frame + 0x4c)),*(undefined4 *)(iVar3 + 0xc),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),
                             (*(float *)(gen_frame + 0x10)));
        return uVar7;
      }
      break;
    case 0x6a: ;
      if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) < '\x01') {
        uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x28))(0xe,0);
        return uVar7;
      }
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(0xe,0);
      return uVar7;
    case 0x72: ;
      uVar8 = F_0054d950(this);
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = F_00aa2500((*(int * PTR32 *)(gen_frame + 0x4c)),*(undefined4 *)(uVar8 + 200));
        return uVar7;
      }
      break;
    case 0x75: ;
      if (REFG(void * PTR32, 0x13759f4) != (undefined *)0x0) {
        if (*((short *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == 1) {
          uVar7 = F_006aac30(REFG(void * PTR32, 0x13759f4));
          return uVar7;
        }
        uVar7 = F_00690270(REFG(void * PTR32, 0x13759f4));
      }
    }
  }
  return uVar7;
}

/* ref: FUN_00bd5bb0 */
uint F_00bd5bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x10) + param_1 * 4;
}

/* ref: FUN_00bd5bd0 */
uint F_00bd5bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x18) + param_1 * 4;
}

/* ref: FUN_00bd5bf0 */
uint F_00bd5bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x20) + param_1 * 4;
}

/* ref: FUN_00bd5c10 */
unsigned int F_00bd5c10(float gen_a0)
{
  GEN_ENTER(0xbd5c10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd5c30 */
uint F_00bd5c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  code * pcVar6;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x74);
  if (pvVar4 == (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar5 == (int *)0x0) {
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar2 = *(int *)((int)this + 0x6c);
        if (iVar2 != 0) goto LAB_00bd5c78;
      }
      else {
LAB_00bd5c78: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
      }
      piVar5 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar5 != (int *)0x0) goto LAB_00bd5c85;
    }
    else {
LAB_00bd5c85: ;
      uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 100))(piVar5);
      *(uint *)((int)this + 0x74) = uVar3;
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x74);
  }
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  bVar1 = F_00bc2920(pvVar4,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
  while (bVar1 != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xb8))((*(int * PTR32 *)(gen_frame + 0x4)));
    if (uVar3 == param_1) {
      if (*(int *)((int)this + 0x2c) == 0x28) goto LAB_00bd5d4d;
      if (*(int *)((int)this + 0x2c) == 0x2a) {
        pcVar6 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x9c);
        goto override_prt_bd5d55_776d44d0;
      }
    }
    bVar1 = F_00bc2920(pvVar4,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
  }
  uVar3 = F_00bd3f80(this);
  piVar5 = (int *)0x0;
  if (uVar3 != 0) {
    pvVar4 = (undefined *)F_00bd3f80(this);
    piVar5 = (int *)F_00b607f0(pvVar4,param_1);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
    if (piVar5 != (int *)0x0) {
      if (*(int *)((int)this + 0x2c) == 0x28) {
LAB_00bd5d4d: ;
        pcVar6 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x98);
      }
      else {
        if (*(int *)((int)this + 0x2c) != 0x2a) goto LAB_00bd5d57;
        pcVar6 = *(gen_code32 *)(*piVar5 + 0x9c);
      }
override_prt_bd5d55_776d44d0: ;
      piVar5 = ((int *)GEN_TOP((*pcVar6)((*(int * PTR32 *)(gen_frame + 0x4)))));
    }
  }
LAB_00bd5d57: ;
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return (uint)piVar5;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf25 */
uint F_00bd5db0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd5db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x137129c);
  uVar2 = *(uint *)(this + 0x2c);
  if (uVar2 == 0x50) {
    uVar2 = F_00bd3f80(this);
    if (*(undefined * PTR32 *)(uVar2 + 0x38) != (undefined *)0x0) {
      uVar2 = F_00beb190(*(undefined * PTR32 *)(uVar2 + 0x38));
      return uVar2;
    }
  }
  else if (uVar2 == 0x60) {
    uVar1 = F_00bd3f80(this);
    uVar2 = 0;
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 0xf8) = 0xffffffff;
      return uVar1;
    }
  }
  else if (uVar2 == 0x6d) {
    *(undefined4 *)(REFG(undefined4, 0x137129c) + 0xec) = REFG(float, 0x1087f04);
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf33 */
uint F_00bd5e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd5e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  int iVar8;
  float fVar2;
  float fVar3;
  
  uVar6 = REFG(undefined4, 0x137129c);
  iVar4 = *(int *)(this + 0x2c);
  uVar5 = iVar4 - 0x28;
  if (uVar5 < 0x46) {
    uVar5 = (uint)*(byte *)(iVar4 + 0xbd5fb0);
    switch((unsigned int)(uintptr_t)(iVar4)) {
    case 0x28: ;
      iVar4 = *(int *)(this + 0x24);
      iVar8 = *(int *)(iVar4 + 0x10);
      if (iVar8 != 0) {
        do {
          iVar8 = iVar8 + -1;
          uVar5 = F_00bd5c30(this,*((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0xc) + iVar8 * 4 + iVar4))));
        } while (iVar8 != 0);
        return uVar5;
      }
      break;
    case 0x2a: ;
      iVar4 = *(int *)(this + 0x24);
      iVar8 = *(int *)(iVar4 + 0x10);
      if (iVar8 != 0) {
        do {
          iVar8 = iVar8 + -1;
          uVar5 = F_00bd5c30(this,*((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0xc) + iVar8 * 4 + iVar4))));
        } while (iVar8 != 0);
        return uVar5;
      }
      break;
    case 0x50: ;
      uVar5 = F_00bd3f80(this);
      this_00 = *(undefined * PTR32 *)(uVar5 + 0x38);
      if (this_00 != (undefined *)0x0) {
        iVar4 = *(int *)(this + 0x24);
        uVar5 = (uint)*(byte *)(iVar4 + 0xc);
        if (uVar5 == 0) {
          iVar8 = *(int *)((int)this_00 + 0xd0);
          *(undefined4 *)(iVar8 + 0xac) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(iVar4 + 0x14);
          return 0;
        }
        if (uVar5 == 1) {
          uVar5 = F_00beb190(this_00);
          return uVar5;
        }
        uVar5 = uVar5 - 2;
        if (uVar5 == 0) {
          if (*(char *)(iVar4 + 0xd) == '\0') {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xac))) =
                 *(undefined4 *)((int)this_00 + 300);
          }
          else if (*(char *)(iVar4 + 0xd) == '\x02') {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xac))) = *(undefined4 *)(iVar4 + 0x10);
          }
          if (*(byte *)(iVar4 + 0xe) == 0) {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xb0))) =
                 *(undefined4 *)((int)this_00 + 0x130);
            return 0;
          }
          uVar5 = *(byte *)(iVar4 + 0xe) - 2;
          if (uVar5 == 0) {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xb0))) = *(undefined4 *)(iVar4 + 0x14);
            return 0;
          }
        }
      }
      break;
    case 0x60: ;
      uVar6 = F_00bd3f80(this);
      uVar5 = 0;
      if (uVar6 != 0) {
        *(undefined4 *)(uVar6 + 0xf8) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
        F_004ff5f0(REFG(undefined4, 0x1375aec));
        return uVar6;
      }
      break;
    case 0x6d: ;
      pfVar7 = ((float *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
      fVar1 = *pfVar7;
      fVar2 = *pfVar7;
      fVar3 = *pfVar7;
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1094880);
      (*(float *)(gen_frame + 0x4)) = 0.0;
      if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(fVar1)) || (REFG(float, 0x1094880) < fVar3 || REFG(uint, 0x1094880) == fVar2)) {
        pfVar7 = &(*(float *)(gen_frame + 0x8));
      }
      if (!(0.0 < *pfVar7)) {
        pfVar7 = &(*(float *)(gen_frame + 0x4));
      }
      *(float *)(REFG(undefined4, 0x137129c) + 0xec) = *pfVar7;
      uVar5 = uVar6;
    }
  }
  return uVar5;
}

/* ref: FUN_00bd6040 */
unsigned int F_00bd6040(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbd6040u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xec) = param_2;
  return 0;
}

/* ref: FUN_00bd6060 */
uint F_00bd6060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd6080 */
uint F_00bd6080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf34 */
byte F_00bd60c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd60c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  if (param_1 != 2) {
    piVar1 = (int *)F_00bd3ff0(this);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(int *)(this + 0x2c) == 0x2d) {
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1)));
      F_005e98e0(this_00,500);
    }
    else if (*(int *)(this + 0x2c) == 0x2e) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1);
      F_005d7a50(uVar2,(float)(float10)0);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00bd6130 */
uint F_00bd6130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6130u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  uVar3 = *param_1;
  bVar1 = *param_2;
  if (bVar1 == 0) {
    *param_1 = uVar3;
    return in_EAX;
  }
  bVar2 = param_2[1];
  if (bVar2 != 0) {
    if (param_2[2] != 0) {
      uVar3 = (uint)CONCAT21(CONCAT11(param_2[2],bVar2),bVar1) << 8 | uVar3 >> 0x18;
      *param_1 = uVar3;
      return uVar3;
    }
    if (bVar2 != 0) {
      uVar3 = (uint)CONCAT11(bVar2,bVar1) << 0x10 | uVar3 >> 0x10;
      *param_1 = uVar3;
      return uVar3;
    }
  }
  uVar3 = (uint)bVar1 << 0x18 | uVar3 >> 8;
  *param_1 = uVar3;
  return uVar3;
}

/* ref: FUN_00bd61c0 */
uint F_00bd61c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbd61c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  uint uVar1;
  undefined * this_00;
  byte bVar2;
  
  *(*(uint * PTR32 *)&gen_args[1]) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[5]) = 0;
  *(*(uint * PTR32 *)&gen_args[2]) = 0;
  if ((*(int * PTR32 *)&gen_args[3]) == (int *)0x0) {
    return (uint)(*(undefined4 * PTR32 *)&gen_args[5]);
  }
  if ((*(int * PTR32 *)&gen_args[3])[0x1b] == 7) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xb4))))((*(int * PTR32 *)&gen_args[3]))));
    *(*(uint * PTR32 *)&gen_args[1]) = (uint)this_00;
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar2 = *(byte *)((int)this_00 + 0x28) >> 4;
  }
  else {
    uVar1 = (*(int * PTR32 *)&gen_args[3])[0x1b] - 8;
    if (uVar1 != 0) {
      return uVar1;
    }
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xb4))))((*(int * PTR32 *)&gen_args[3]))));
    *(*(uint * PTR32 *)&gen_args[1]) = (uint)this_00;
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar2 = (*(byte *)((int)this_00 + 0x28) >> 4) + 1;
  }
  (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[1]), 1, 3),bVar2)));
  uVar1 = F_005d9bb0(this_00,(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]));
  *(*(uint * PTR32 *)&gen_args[2]) = uVar1;
  uVar1 = 0;
  if ((*(int *)&gen_args[6]) != 0) {
    uVar1 = F_00bd6130((*(uint * PTR32 *)&gen_args[2]),(*(int *)&gen_args[6]));
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf25 */
uint F_00bd6250(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffbf;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffbf;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf26 */
uint F_00bd6270(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffbf;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffbf;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf33 */
uint F_00bd6290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined * pvVar8;
  undefined3 uVar13;
  int * piVar9;
  undefined * pvVar10;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  uint uVar11;
  uint uVar12;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  byte bVar14;
  char * pcVar15;
  
  uVar11 = *(uint *)(this + 0x78);
  if (uVar11 == 0) {
    iVar7 = *(int *)(this + 0x6c);
    if (iVar7 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar7 = *(int *)(this + 0x6c);
      if (iVar7 != 0) goto LAB_00bd62bb;
    }
    else {
LAB_00bd62bb: ;
      uVar3 = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar3;
      F_00b595f0(uVar3);
    }
    uVar11 = *(uint *)(this + 0x78);
    if (uVar11 == 0) {
      return 0;
    }
  }
  if (*(char *)(uVar11 + 0x12) != '\0') {
    return uVar11;
  }
  piVar9 = *(int * PTR32 *)(uVar11 + 4);
  if (piVar9 == (int *)0x0) {
    return uVar11;
  }
  pvVar8 = ((undefined *)GEN_TOP((*(int *)(this + 0x2c) + -0x2b)));
  uVar13 = (undefined3)((uint)((int)(uintptr_t)pvVar8) >> 8);
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x2b: ;
    iVar7 = *(int *)(this + 0x24);
    piVar9 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    uVar11 = ((code *)*(gen_code32 *)(*piVar9 + 0x90))(piVar9,(uint)(*(char *)(iVar7 + 0xc) != '\0'));
    return uVar11;
  case 0x2c: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    if (*(char *)((int)pvVar8 + 0x11) == '\a') {
      fVar2 = *(float *)(iVar7 + 0xc);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(undefined4 *)(gen_frame + 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(((undefined2)0x27f) | 0xc00);
      (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((float10)fVar2);
      lVar4 = (*(longlong *)(gen_frame + 0xc));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0xc));
      (*(longlong *)(gen_frame + 0xc)) = lVar4;
      uVar11 = F_005e98e0(pvVar8,uVar3);
      return uVar11;
    }
    break;
  case 0x2d: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    if (*(char *)((int)pvVar8 + 0x11) == '\a') {
      fVar2 = *(float *)(iVar7 + 0xc);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(undefined4 *)(gen_frame + 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(((undefined2)0x27f) | 0xc00);
      (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((float10)fVar2);
      lVar4 = (*(longlong *)(gen_frame + 0xc));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0xc));
      (*(longlong *)(gen_frame + 0xc)) = lVar4;
      uVar11 = F_005f4000(pvVar8,uVar3);
      return uVar11;
    }
    break;
  case 0x2e: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    if (*(char *)((int)pvVar8 + 0x11) == '\x04') {
      uVar11 = F_005d79f0(pvVar8,*(float *)(iVar7 + 0xc),(uint)(*(char *)(iVar7 + 0x10) != '\0'));
      return uVar11;
    }
    break;
  case 0x2f: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9)));
    if (*(char *)((int)pvVar8 + 0x11) == '\x04') {
      uVar11 = F_005d7a80(pvVar8,*(undefined4 *)(iVar7 + 0xc));
      return uVar11;
    }
    break;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
  case 0x37: ;
  case 0x38: ;
  case 0x39: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3e: ;
  case 0x3f: ;
  case 0x40: ;
  case 0x41: ;
  case 0x42: ;
  case 0x43: ;
  case 0x47: ;
  case 0x48: ;
  case 0x49: ;
  case 0x4a: ;
  case 0x4b: ;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
  case 0x50: ;
  case 0x51: ;
  case 0x52: ;
  case 0x53: ;
  case 0x54: ;
  case 0x55: ;
  case 0x56: ;
  case 0x57: ;
  case 0x58: ;
  case 0x59: ;
  case 0x5a: ;
  case 0x5b: ;
  case 0x5c: ;
  case 0x5d: ;
  case 0x5e: ;
  case 0x5f: ;
  case 0x60: ;
  case 0x61: ;
  case 0x62: ;
  case 99: ;
  case 100: ;
  case 0x65: ;
  case 0x66: ;
  case 0x67: ;
  case 0x68: ;
  case 0x69: ;
  case 0x6a: ;
  case 0x6b: ;
  case 0x6c: ;
  case 0x6d: ;
  case 0x6e: ;
  case 0x6f: ;
  case 0x70: ;
    break;
  case 0x44: ;
    bVar6 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(uVar13,bVar6)));
    if ((bVar6 != 0) && (((byte)this[0x7c] >> 6 & 1) == 0)) {
      piVar9 = (int *)F_00bd3ff0(this);
      pvVar8 = (undefined *)0x0;
      if (piVar9 != (int *)0x0) {
        if (piVar9[0x1b] == 7) {
          pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9)));
          pvVar8 = (undefined *)0x0;
          if (pvVar10 != (undefined *)0x0) {
            bVar14 = *(byte *)((int)pvVar10 + 0x28) >> 4;
            (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar14;
            (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar14)));
LAB_00bd649c: ;
            uVar11 = F_005d9bb0(pvVar10,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
            pvVar8 = (undefined *)F_005e3880(pvVar10,uVar11);
            if ((char)pvVar8 != '\0') {
              F_00bd30b0(this,0);
              *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
              pvVar8 = (undefined *)F_0054d920(this);
              *(uint *)((int)pvVar8 + 0x2c) = *(uint *)((int)pvVar8 + 0x2c) | 8;
            }
          }
        }
        else {
          pvVar8 = (undefined *)(piVar9[0x1b] + -8);
          if (pvVar8 == (undefined *)0x0) {
            pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9)));
            pvVar8 = (undefined *)0x0;
            if (pvVar10 != (undefined *)0x0) {
              cVar5 = (*(byte *)((int)pvVar10 + 0x28) >> 4) + 1;
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = cVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),cVar5)));
              goto LAB_00bd649c;
            }
          }
        }
      }
    }
    break;
  case 0x45: ;
    bVar6 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(uVar13,bVar6)));
    if (bVar6 != 0) {
      piVar9 = (int *)F_00bd3ff0(this);
      pvVar8 = (undefined *)0x0;
      if (piVar9 != (int *)0x0) {
        if (piVar9[0x1b] == 7) {
          pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9)));
          pvVar8 = (undefined *)0x0;
          if (pvVar10 != (undefined *)0x0) {
            bVar14 = *(byte *)((int)pvVar10 + 0x28) >> 4;
            (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar14;
            (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar14)));
            uVar11 = F_005d9bb0(pvVar10,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
            bVar6 = F_005e37c0(pvVar10,uVar11);
            return CONCAT31(extraout_var_00,bVar6);
          }
        }
        else {
          pvVar8 = (undefined *)(piVar9[0x1b] + -8);
          if (pvVar8 == (undefined *)0x0) {
            pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9)));
            pvVar8 = (undefined *)0x0;
            if (pvVar10 != (undefined *)0x0) {
              cVar5 = (*(byte *)((int)pvVar10 + 0x28) >> 4) + 1;
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = cVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),cVar5)));
              uVar11 = F_005d9bb0(pvVar10,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
              bVar6 = F_005e37c0(pvVar10,uVar11);
              return CONCAT31(extraout_var,bVar6);
            }
          }
        }
      }
    }
    break;
  case 0x46: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x24);
    if (*(byte *)((int)pvVar8 + 0xc) != 0) {
      pcVar1 = (char *)((int)pvVar8 + 0xd);
      uVar12 = (uint)*(byte *)((int)pvVar8 + 0xc);
      iVar7 = (int)&(*(longlong *)(gen_frame + 0xc)) + 4;
      pcVar15 = pcVar1;
      uVar11 = F_00bd3ff0(this);
      pvVar8 = (undefined *)F_00bd61c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),uVar11,uVar12,iVar7,pcVar15);
      if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
        if (*pcVar1 != '\0') {
          pvVar8 = (undefined *)F_005d6000((*(undefined * PTR32 *)(gen_frame + 0x14)));
          bVar6 = F_005ef790(pvVar8,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14),(*(undefined4 *)(gen_frame + 0x18)),0xffffffff);
          return CONCAT31(extraout_var_01,bVar6);
        }
        bVar6 = F_005e3670((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),0xffffffff,0);
        return CONCAT31(extraout_var_02,bVar6);
      }
    }
    break;
  case 0x71: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x24);
    if (*(byte *)((int)pvVar8 + 0xc) != 0) {
      pcVar1 = (char *)((int)pvVar8 + 0xd);
      uVar11 = (uint)*(byte *)((int)pvVar8 + 0xc);
      iVar7 = (int)&(*(longlong *)(gen_frame + 0xc)) + 4;
      pcVar15 = pcVar1;
      uVar12 = F_00bd3ff0(this);
      pvVar8 = (undefined *)F_00bd61c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),uVar12,uVar11,iVar7,pcVar15);
      if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
        if (*pcVar1 != '\0') {
          pvVar8 = (undefined *)F_005d6000((*(undefined * PTR32 *)(gen_frame + 0x14)));
          bVar6 = F_005ef7d0(pvVar8,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14),(*(undefined4 *)(gen_frame + 0x18)));
          return CONCAT31(extraout_var_03,bVar6);
        }
        bVar6 = F_005e3700((*(undefined * PTR32 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
        return CONCAT31(extraout_var_04,bVar6);
      }
    }
    break;
  default: ;
    goto switchD_00bd6304_default;
  }
switchD_00bd6304_default: ;
  return (uint)pvVar8;
}

/* ref: FUN_00bd6700 */
unsigned int F_00bd6700(float gen_a0)
{
  GEN_ENTER(0xbd6700u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd6720 */
uint F_00bd6720(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f284c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  uVar2 = F_00bd2e60(this);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf25 */
uint F_00bd6760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbd6760u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf26 */
unsigned int F_00bd6770(void)
{
  GEN_ENTER(0xbd6770u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf8 */
unsigned int F_00bd6780(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  this[0x8c] = (undefined1)0x0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x50))))(*(int * PTR32 *)(this + 0x88),500);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88),500);
    *(undefined4 *)(this + 0x88) = 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf7 */
byte F_00bd67d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd67d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (((*(int *)(this + 0x2c) == 0x29) || (*(int *)(this + 0x2c) == 0x33)) &&
     (piVar1 = *(int * PTR32 *)(this + 0x88), piVar1 != (int *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x14))))(*(int * PTR32 *)(this + 0x88)),
       (char)uVar2 == '\0')) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88),500);
      *(undefined4 *)(this + 0x88) = 0;
      return 1;
    }
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf35 */
unsigned int F_00bd6830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd6830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((param_1 != 2) && (*(int *)(this + 0x88) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x58))))(*(int * PTR32 *)(this + 0x88),param_2,5);
  }
  return 0;
}

/* ref: FUN_00bd6860 */
uint F_00bd6860(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  undefined * this_00;
  
  iVar4 = *(int *)((int)this + 0x74);
  if (iVar4 == 0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar5 == (int *)0x0) {
      iVar4 = *(int *)((int)this + 0x6c);
      if (iVar4 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar4 = *(int *)((int)this + 0x6c);
        if (iVar4 != 0) goto LAB_00bd688d;
      }
      else {
LAB_00bd688d: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar4 + 4);
      }
      piVar5 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar5 != (int *)0x0) goto LAB_00bd689a;
    }
    else {
LAB_00bd689a: ;
      uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 100))(piVar5);
      *(uint *)((int)this + 0x74) = uVar3;
    }
    iVar4 = *(int *)((int)this + 0x74);
    if (iVar4 != 0) goto LAB_00bd68ab;
  }
  else {
LAB_00bd68ab: ;
    bVar2 = F_00bbad00((undefined *)(iVar4 + 0x124));
    if (bVar2 != 0) {
      uVar3 = F_00bbaf90((undefined *)(iVar4 + 0x124));
      return uVar3;
    }
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd6900;
  iVar4 = *(int *)((int)this + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar4 = *(int *)((int)this + 0x6c);
    if (iVar4 != 0) goto LAB_00bd68e7;
  }
  else {
LAB_00bd68e7: ;
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd6900: ;
  uVar3 = F_00bbaf90(this_00);
  return uVar3;
}

/* ref: FUN_00bd6910 */
uint F_00bd6910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x14))))(*(int * PTR32 *)((int)this + 0x88)),
       (char)uVar2 == '\0')) {
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x50))))(*(int * PTR32 *)((int)this + 0x88),param_1);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x78))))(*(int * PTR32 *)((int)this + 0x88),500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf1 */
byte F_00bd6970(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar4 = F_00bd1fe0(this);
  if (((bVar4 == 0) && (*(int *)(this + 0x2c) == 0x33)) && (this[0x8c] == (undefined1)0x0)) {
    if (*(int *)(this + 0x88) == 0) {
      iVar1 = *(int *)(this + 0x24);
      fVar3 = (float10)0;
      uVar5 = F_004e96c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),*(int *)(iVar1 + 0xc) + iVar1,
                           (float)(float10)1,0,(float)fVar3,(float)fVar3,(float)fVar3,
                           (float)(float10)1,0,*(undefined4 *)(iVar1 + 0x10),0);
      if (uVar5 != 0) {
        *(uint *)(this + 0x88) = uVar5;
      }
    }
    piVar2 = *(int * PTR32 *)(this + 0x88);
    if (piVar2 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
      if ((char)uVar5 == '\0') {
        this[0x8c] = (undefined1)0x1;
        bVar4 = F_00bd2590((undefined *)this);
        return bVar4;
      }
      uVar5 = F_0054d950(this);
      if ((uVar5 != 0) && ((*(uint *)(uVar5 + 0x2c) >> 4 & 1) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88),500);
        *(undefined4 *)(this + 0x88) = 0;
        F_00b61910(this);
        return 1;
      }
      return 0;
    }
  }
  bVar4 = F_00bd2590((undefined *)this);
  return bVar4;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf34 */
byte F_00bd6a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (((param_1 == 9) || (param_1 == 5)) || (param_1 == 3)) {
    if (*(int *)(this + 0x2c) == 0x29) {
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0x12))) & 1;
    }
    else {
      if (*(int *)(this + 0x2c) != 0x33) {
        return 1;
      }
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0x14))) & 2;
    }
    if (bVar1 != 0) {
      F_00bd6910(this,0x1e);
    }
  }
  return 1;
}

/* ref: FUN_00bd6ab0 */
byte F_00bd6ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x2c) == 0x29) {
    this_00 = (undefined *)F_00bd6860(this);
  }
  else {
    if (*(int *)((int)this + 0x2c) != 0x33) {
      return 1;
    }
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x24) + 0x14))) & 1) == 0) {
      return 0;
    }
    piVar1 = (int *)F_00bd3ff0(this);
    if (piVar1 != (int *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
      *param_1 = *puVar2;
      param_1[1] = puVar2[1];
      param_1[2] = puVar2[2];
      return 1;
    }
    this_00 = (undefined *)F_00bd4050(this);
  }
  if (this_00 == (undefined *)0x0) {
    F_004e78b0(param_1,param_1 + 1,param_1 + 2);
    return 1;
  }
  puVar2 = (undefined4 *)F_00a5feb0(this_00);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  return 1;
}

/* ref: FUN_00bd6b60 */
uint F_00bd6b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x14))))(*(int * PTR32 *)((int)this + 0x88)),
       (char)uVar2 == '\0')) {
      return uVar2;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x50))))(*(int * PTR32 *)((int)this + 0x88),param_1);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x78))))(*(int * PTR32 *)((int)this + 0x88),500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bd6bc0 */
uint F_00bd6bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd6bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bd6ab0(this,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x44))))(*(int * PTR32 *)((int)this + 0x88));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf33 */
uint F_00bd6c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var_01 = 0;
  undefined * this_00;
  
  bVar5 = F_00bd1fe0(this);
  this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
  if (bVar5 == 0) {
    bVar5 = F_00bd6ab0(this,&(*(float *)(gen_frame + 0x0)));
    (*(byte *)(gen_frame + 0x1f)) = bVar5;
    this_00 = *(undefined * PTR32 *)(this + 0x2c);
    if (this_00 == (undefined *)0x29) {
      bVar5 = F_00bd2480(this);
      this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_01,bVar5)));
      if (bVar5 == 0) {
        this_00 = (undefined *)F_00bd6860(this);
        if ((*(int *)(this + 0x88) == 0) && (this_00 != (undefined *)0x0)) {
          iVar3 = *(int *)(this + 0x24);
          uVar7 = F_00aa2e00(this_00,(uint)*(ushort *)(iVar3 + 0xe),(uint)*(ushort *)(iVar3 + 0xc)
                               ,0,0,(uint)*(ushort *)(iVar3 + 0x10));
          *(uint *)(this + 0x88) = uVar7;
          this_00 = (undefined *)0x0;
          if (uVar7 != 0) {
            this_00 = (undefined *)F_00bd6bc0(this);
          }
        }
      }
    }
    else if (this_00 == (undefined *)0x33) {
      bVar5 = F_00bd2480(this);
      this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar5)));
      if (bVar5 == 0) {
        piVar1 = *(int * PTR32 *)(this + 0x88);
        uVar2 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
        iVar3 = *(int *)(this + 0x24);
        (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
          fVar4 = (float10)1;
          iVar6 = *(int *)(iVar3 + 0xc) + iVar3;
          if ((*(byte *)(gen_frame + 0x1f)) != 0) {
            uVar7 = F_004e95a0((*(undefined4 *)(gen_frame + 0x18)),iVar6,(float)fVar4,0,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)),
                                 (float)fVar4,0,*(undefined4 *)(iVar3 + 0x10),0);
            *(uint *)(this + 0x88) = uVar7;
            return uVar7;
          }
          uVar7 = F_004e9a80((*(undefined4 *)(gen_frame + 0x18)),iVar6,(float)fVar4,*(undefined4 *)(iVar3 + 0x10),0,0);
          *(uint *)(this + 0x88) = uVar7;
          return uVar7;
        }
        fVar4 = (float10)1;
        iVar6 = *(int *)(iVar3 + 0xc) + iVar3;
        if ((*(byte *)(gen_frame + 0x1f)) == 0) {
          uVar7 = F_004e9a80(uVar2,iVar6,(float)fVar4,*(undefined4 *)(iVar3 + 0x10),0,0);
        }
        else {
          uVar7 = F_004e95a0(uVar2,iVar6,(float)fVar4,0,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)),(float)fVar4,0,
                               *(undefined4 *)(iVar3 + 0x10),0);
        }
        this_00 = (undefined *)0x0;
        if (uVar7 != 0) {
          *(uint *)(this + 0x88) = uVar7;
          return uVar7;
        }
      }
    }
  }
  return (uint)this_00;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf30 */
unsigned int F_00bd6de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd6de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  if (*(int *)(this + 0x88) != 0) {
    bVar1 = F_00bd6ab0(this,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x44))))(*(int * PTR32 *)(this + 0x88));
    }
  }
  return 0;
}

/* ref: FUN_00bd6e50 */
unsigned int F_00bd6e50(float gen_a0)
{
  GEN_ENTER(0xbd6e50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf25 */
unsigned int F_00bd6e70(void)
{
  GEN_ENTER(0xbd6e70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf33 */
uint F_00bd6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar4 = *(int *)(this + 0x2c) - 0x3c;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    bVar3 = F_00bd2480(this);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 == 0) {
      iVar2 = *(int *)(this + 0x24);
      uVar4 = *(uint *)(iVar2 + 0x14);
      if (*(int *)(iVar2 + 0xc) == 1) {
        uVar4 = F_00ab4c70();
      }
      uVar5 = F_00bd3f80(this);
      *(uint *)(uVar5 + 0x100) = uVar4;
      cVar1 = *(char *)(iVar2 + 0x10);
      uVar5 = F_00bd3f80(this);
      *(bool *)(uVar5 + 0x104) = cVar1 != '\0';
      if (*(char *)(iVar2 + 0x11) == '\x01') {
        F_00ab4b90(100);
        F_00ab6dc0();
      }
      uVar4 = F_00ab6d50(uVar4,1,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x18),0,0);
      return uVar4;
    }
    break;
  case 1: ;
    iVar2 = *(int *)(this + 0x24);
    uVar4 = F_004e79c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(int)*(short *)(iVar2 + 0xc),
                         *(float *)(iVar2 + 0x10),(int)*(short *)(iVar2 + 0xe));
    return uVar4;
  case 2: ;
    bVar3 = F_00bd2480(this);
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 == 0) {
      iVar2 = *(int *)(this + 0x24);
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 0x10)) {
        do {
          uVar8 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0xc) + iVar7 * 4 + iVar2)));
          pvVar6 = (undefined *)F_00bd3f80(this);
          pvVar6 = (undefined *)F_00b607f0(pvVar6,uVar8);
          uVar4 = 0;
          if (pvVar6 != (undefined *)0x0) {
            uVar4 = *(uint *)((int)pvVar6 + 0x2c);
            if (uVar4 == 0x33) {
              uVar4 = *(uint *)(iVar2 + 0x14);
              if (uVar4 == 0) {
                uVar4 = F_00bd6b60(pvVar6,*(undefined4 *)(iVar2 + 0x18));
              }
              else if (uVar4 == 1) {
                uVar4 = F_00bd6910(pvVar6,*(undefined4 *)(iVar2 + 0x18));
              }
            }
            else if (uVar4 == 0x3c) {
              uVar4 = F_00ab6dc0();
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar2 + 0x10));
        return uVar4;
      }
    }
    break;
  case 3: ;
    iVar2 = *(int *)(this + 0x24);
    uVar4 = F_00bd40a0(this);
    if (uVar4 != 0) {
      *(bool *)(uVar4 + 0x2ea7) = *(char *)(iVar2 + 0xc) != '\0';
    }
  }
  return uVar4;
}

/* ref: FUN_00bd7000 */
uint F_00bd7000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x100) = param_2;
  return param_2;
}

/* ref: FUN_00bd7010 */
byte F_00bd7010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x104) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bd7020 */
uint F_00bd7020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd7040 */
unsigned int F_00bd7040(float gen_a0)
{
  GEN_ENTER(0xbd7040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CutVFXTriggerClip::vf33 */
uint F_00bd7060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x24);
  this_00 = (undefined *)F_00bd3f80(this);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    do {
      this_01 = (undefined *)F_00b607f0(this_00,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xc) + iVar3 * 4 + iVar1))));
      if ((this_01 != (undefined *)0x0) &&
         ((*(int *)((int)this_01 + 0x2c) == 9 || (*(int *)((int)this_01 + 0x2c) == 0x27)))) {
        F_00be2510(this_01,*(undefined4 *)(iVar1 + 0x14));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x10));
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,1);
  return uVar2;
}

/* ref: FUN_00bd70d0 */
uint F_00bd70d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd70d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::RandomSyncClip::vf26 */
uint F_00bd70f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd70f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: FUN_00bd71b0 */
unsigned int F_00bd71b0(float gen_a0)
{
  GEN_ENTER(0xbd71b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CutActionClip::vf26 */
uint F_00bd71f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd71f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 == 0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bd7215;
    }
    else {
LAB_00bd7215: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    uVar4 = *(uint *)(this + 0x78);
    if (uVar4 == 0) goto LAB_00bd7249;
  }
  if ((*(char *)(uVar4 + 0x12) == '\0') &&
     (piVar2 = *(int * PTR32 *)(uVar4 + 4), uVar4 = 0, piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0);
  }
LAB_00bd7249: ;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return uVar4;
}

/* ref: FUN_00bd76e0 */
uint F_00bd76e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd76e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x14) + param_1 * 8 + (int)this;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf33 */
uint F_00bd7700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(this + 0x78);
  if (iVar2 != 0) goto LAB_00bd773e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7725;
  }
  else {
LAB_00bd7725: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(this + 0x78);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00bd773e: ;
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x44c) != 0) {
    uVar3 = F_00a0c450(*(int *)(iVar2 + 0x44c),
                         (uint)(*((short *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == 1));
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf25 */
uint F_00bd7770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbd7770u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf26 */
uint F_00bd7780(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(in_ecx + 0x78);
  uVar4 = uVar3;
  if (uVar3 != 0) goto LAB_00bd77be;
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar2 = *(int *)(in_ecx + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd77a9;
  }
  else {
LAB_00bd77a9: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  uVar4 = *(uint *)(in_ecx + 0x78);
LAB_00bd77be: ;
  if ((uVar4 != 0) && (*(int *)(uVar4 + 0x44c) != 0)) {
    uVar3 = F_00a0c450(*(int *)(uVar4 + 0x44c),1);
  }
  return uVar3;
}

/* ref: FUN_00bd77f0 */
uint F_00bd77f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd77f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
  if (this_00 != (undefined *)0x0) goto LAB_00bd7834;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd781f;
  }
  else {
LAB_00bd781f: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bd7834: ;
  if ((this_00 != (undefined *)0x0) && (*(int *)((int)this + 0x24) != 0)) {
    F_00bc3fb0(this_00,this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))));
  }
  uVar3 = F_00bd2e60(this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf25 */
uint F_00bd7860(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd789a;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7885;
  }
  else {
LAB_00bd7885: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd789a: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bc5140(this_00);
    return uVar3;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf33 */
uint F_00bd78b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd78b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * this_00;
  
  pvVar3 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar3;
  if (pvVar3 != (undefined *)0x0) goto LAB_00bd78ee;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    pvVar3 = (undefined *)0x0;
    if (iVar2 != 0) goto LAB_00bd78d9;
  }
  else {
LAB_00bd78d9: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    pvVar3 = (undefined *)F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd78ee: ;
  if (this_00 != (undefined *)0x0) {
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x24) != 0) {
      pvVar3 = (undefined *)F_00bc3fa0(this_00,this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))));
    }
  }
  return (uint)pvVar3;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf34 */
byte F_00bd7910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  int in_ecx;
  byte bVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7954;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd793b;
  }
  else {
LAB_00bd793b: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd7954: ;
  iVar3 = *(int *)(this + 0x24);
  if (((param_1 == 6) && (in_ecx = *(int *)((int)this_00 + 0x448), in_ecx != 0)) &&
     (bVar2 = F_00a0b720(in_ecx), bVar2 != 0)) {
    F_00a0b730(in_ecx,*(undefined4 *)(iVar3 + 0xc));
    return 0;
  }
  F_00bc3fb0(this_00,this,*(undefined4 *)(iVar3 + 0xc));
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoShakeBaseClip::vf25 */
unsigned int F_00bd79b0(void)
{
  GEN_ENTER(0xbd79b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::AutoShakeBaseClip::vf26 */
unsigned int F_00bd79c0(void)
{
  GEN_ENTER(0xbd79c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::NonAutoShakeClip::vf33 */
uint F_00bd79d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd79d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7a0e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd79f5;
  }
  else {
LAB_00bd79f5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd7a0e: ;
  uVar3 = F_00bc3f80(this_00,this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::NonAutoShakeClip::vf34 */
byte F_00bd7a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7a5e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7a45;
  }
  else {
LAB_00bd7a45: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd7a5e: ;
  F_00bc3f90(this_00,this);
  return 1;
}

/* ref: FUN_00bd7a70 */
unsigned int F_00bd7a70(float gen_a0)
{
  GEN_ENTER(0xbd7a70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd7a90 */
uint F_00bd7a90(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1107cd4));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bd7ad0 */
uint F_00bd7ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd7b11;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd7afc;
  }
  else {
LAB_00bd7afc: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd7b11: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd7b30 */
uint F_00bd7b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)F_00bd3ff0(this);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf26 */
unsigned int F_00bd7b80(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: FUN_00bd7b90 */
uint F_00bd7b90(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7b90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),param_1,0,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf25 */
uint F_00bd7bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: FUN_00bd7be0 */
uint F_00bd7be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd7be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc)));
  piVar2 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0x10))),0,0);
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = F_00ab4370(uVar1,param_2,uVar3,0,0);
      *(uint *)((int)this + 0x88) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf34 */
byte F_00bd7c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)(this + 0x88),1);
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf33 */
uint F_00bd7c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = F_00bd7ad0(this);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    piVar3 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10))),0,0);
    uVar5 = 0;
    if (piVar3 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = F_00ab4370(uVar1,uVar2,uVar4,0,0);
        *(uint *)(this + 0x88) = uVar5;
      }
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf0 */
uint F_00bd7cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1107cd4));
  *(undefined4 *)(this + 0x88) = 0;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd7d10 */
unsigned int F_00bd7d10(float gen_a0)
{
  GEN_ENTER(0xbd7d10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd7d30 */
uint F_00bd7d30(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110852c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf26 */
unsigned int F_00bd7d60(void)
{
  GEN_ENTER(0xbd7d60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bd7e20 */
uint F_00bd7e20(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd7e61;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd7e4c;
  }
  else {
LAB_00bd7e4c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd7e61: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd7e80 */
uint F_00bd7e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd7e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)F_00bd3ff0(this);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
  return uVar2;
}

/* ref: FUN_00bd7ed0 */
uint F_00bd7ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),param_1,0,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf25 */
uint F_00bd7f00(unsigned int gen_a0)
{
  GEN_ENTER(0xbd7f00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf34 */
byte F_00bd8280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf33 */
uint F_00bd82a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd82a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  uVar4 = F_00bd7e20(this);
  uVar5 = 0;
  if (uVar4 != 0) {
    iVar1 = *(int *)(this + 0x24);
    if (*(char *)(iVar1 + 0x10) == '\0') {
      uVar5 = F_00bd7f10(this,param_1,uVar4);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(float *)(gen_frame + 0x10)) = 0.0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      uVar5 = F_00ab1ed0(uVar2);
      uVar3 = (*(undefined4 *)(gen_frame + 0x8));
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (short)uVar2;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 3)) = SUB41(uVar3,3);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = 1;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(CONCAT12(1,(short)uVar2)));
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(ushort *)(uVar5 + 0x14) / (float10)REFG(double, 0x10944b8))));
      uVar5 = F_00a52d10(*(undefined4 *)(uVar4 + 0x74),&(*(undefined4 *)(gen_frame + 0x8)));
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)(uint)(gen_frame + 0x30));
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf0 */
uint F_00bd8360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110852c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd8390 */
unsigned int F_00bd8390(float gen_a0)
{
  GEN_ENTER(0xbd8390u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd83b0 */
uint F_00bd83b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd83b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11086cc));
  *(undefined2 *)((int)this + 0x89) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf7 */
byte F_00bd83f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd83f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x88);
}

/* ref: FUN_00bd8410 */
uint F_00bd8410(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8451;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd843c;
  }
  else {
LAB_00bd843c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8451: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf26 */
byte F_00bd85a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd85a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0x89) = 0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf25 */
uint F_00bd85c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd85c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf33 */
uint F_00bd85d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd85d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  uVar1 = F_00bd8410(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00bd8470(this);
    F_00bd84d0(this);
    this[0x89] = (undefined1)0x1;
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf34 */
byte F_00bd8600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf0 */
uint F_00bd8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11086cc));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd86a0 */
unsigned int F_00bd86a0(float gen_a0)
{
  GEN_ENTER(0xbd86a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd86c0 */
uint F_00bd86c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd86c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110886c));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf7 */
byte F_00bd86f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd86f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x88);
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf26 */
unsigned int F_00bd8700(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: FUN_00bd8720 */
uint F_00bd8720(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8761;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd874c;
  }
  else {
LAB_00bd874c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8761: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf25 */
uint F_00bd8780(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf33 */
uint F_00bd8790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  in_ecx = F_00bd8720(this);
  uVar2 = 0;
  if (in_ecx != 0) {
    bVar1 = F_00a9fa40(in_ecx,(uint)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) != '\0'));
    uVar2 = CONCAT31(extraout_var,bVar1);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf34 */
byte F_00bd87c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd87c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf30 */
uint F_00bd87e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd87e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_EAX = 0;
  undefined * this_00;
  uint uVar6;
  float * pfVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    this_00 = (undefined *)F_00bd8720(this);
    uVar6 = 0;
    if (this_00 != (undefined *)0x0) {
      iVar4 = *(int *)(this + 0x24);
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(REFG(float, 0x1108820));
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1108820);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1108820);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1108820);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1108820);
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined1 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      bVar8 = *(char *)(iVar4 + 0xc) != '\0';
      (*(undefined1 *)(gen_frame + 0x6f)) = (undefined1)0x0;
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x2c)) + 3)) = bVar8;
      (*(int *)(gen_frame + 0x2c)) = (uint)bVar8 << 0x18;
      pfVar7 = (float *)F_00a5feb0(this_00);
      fVar1 = pfVar7[1];
      (*(float *)(gen_frame + 0x54)) = *(float *)(iVar4 + 0x14);
      (*(float *)(gen_frame + 0x50)) = *(float *)(iVar4 + 0x10);
      (*(float *)(gen_frame + 0x58)) = *(float *)(iVar4 + 0x18);
      (*(float *)(gen_frame + 0x44)) = 0.0;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x10) - (float10)*pfVar7)));
      fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x18) - (float10)pfVar7[2])));
      (*(float *)(gen_frame + 0x40)) = fVar2;
      (*(float *)(gen_frame + 0x48)) = fVar3;
      pfVar7 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x40)) = *pfVar7;
      (*(float *)(gen_frame + 0x44)) = pfVar7[1];
      (*(float *)(gen_frame + 0x48)) = pfVar7[2];
      fVar9 = F_00c4d1fa((float10)pfVar7[2]);
      (*(float *)(gen_frame + 0x68)) = (float)fVar9;
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10abe50);
      (*(undefined4 *)(gen_frame + 0x28)) = 1;
      if ((*(uint *)&REFG(undefined, 0x14c5abc) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14c5abc) = *(uint *)&REFG(undefined, 0x14c5abc) | 1;
        *(undefined4 *)&REFG(undefined, 0x14c5aac) = REFG(float, 0x1108830);
        *(undefined4 *)&REFG(undefined, 0x14c5ab0) = REFG(float, 0x10adb9c);
        *(undefined4 *)&REFG(undefined, 0x14c5ab4) = REFG(float, 0x1094870);
        *(undefined4 *)&REFG(undefined, 0x14c5ab8) = REFG(float, 0x1108984);
      }
      fVar12 = REFG(float, 0x1087f04);
      if (*(char *)(iVar4 + 0xe) != '\0') {
        fVar12 = REFG(float, 0x10ac108);
      }
      (*(float *)(gen_frame + 0x68)) = fVar12;
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1108820);
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      fVar12 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x14c5aac) +
                                          ((-(uint)(*(char *)((int)this_00 + 0x2e08) != '\0') & 2) +
                                          (uint)(*(char *)(iVar4 + 0xc) == '\0')) * 4) *
                      (float10)fVar12)));
      (*(float *)(gen_frame + 0x68)) = fVar12;
      (*(float *)(gen_frame + 0xc)) = fVar12;
      fVar10 = (float10)fVar2;
      fVar11 = (float10)fVar3;
      fVar2 = ((float)GEN_TOF((fVar11 * fVar11 + ((float10)0 * (float10)0 + fVar10 * fVar10))));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      if ((float10)fVar2 <= (float10)fVar12) {
        (*(undefined1 *)(gen_frame + 0x6f)) = (undefined1)0x1;
      }
      bVar5 = F_00a9fca0(this_00);
      if (bVar5 != 0) {
        (*(float *)(gen_frame + 0x54)) = fVar1;
      }
      uVar6 = F_00a9f7c0(this_00,(*(float *)(gen_frame + 0x50)),(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0x58)),(float)fVar9,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
      (*(undefined * PTR32 *)(gen_frame + 0x3c))[0x88] = (*(undefined1 *)(gen_frame + 0x6f));
    }
  }
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf0 */
uint F_00bd8a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110886c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd8aa0 */
unsigned int F_00bd8aa0(float gen_a0)
{
  GEN_ENTER(0xbd8aa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd8ac0 */
uint F_00bd8ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108b5c));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf26 */
unsigned int F_00bd8af0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8af0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: FUN_00bd8b10 */
uint F_00bd8b10(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8b51;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd8b3c;
  }
  else {
LAB_00bd8b3c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8b51: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd8b80 */
uint F_00bd8b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8b80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (param_2[1] - *param_2) / 0x54;
  if (uVar6 < 3) {
    return uVar6;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c74))[uVar6 * 2];
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd8be0: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8be5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd8be0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd8be5: ;
    if (iVar4 == 0) {
      if ((int)uVar6 < 0) {
        return (uint)pbVar2;
      }
      if ((&REFG(undefined1, 0x1108c78))[uVar6 * 8] == '\0') {
        uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,5,0);
        return uVar6;
      }
      uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,5,0);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8c30 */
uint F_00bd8c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = (param_2[1] - *param_2) / 0x54;
  if (2 < uVar3) {
    pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
    pbVar4 = REFG(undefined * PTR32, 0x1108c84);
    pbVar6 = pbVar2;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00bd8c90: ;
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8c95;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00bd8c90;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00bd8c95: ;
    if (iVar5 != 0) {
      return (uint)pbVar2;
    }
    uVar3 = F_00aaa5b0(param_1,REFG(undefined4, 0x1108c88));
  }
  return uVar3;
}

/* ref: FUN_00bd8cc0 */
uint F_00bd8cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (param_2[1] - *param_2) / 0x54;
  if (uVar6 < 3) {
    return uVar6;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c8c))[uVar6 * 2];
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd8d20: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8d25;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd8d20;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd8d25: ;
    if (iVar4 == 0) {
      if ((int)uVar6 < 0) {
        return (uint)pbVar2;
      }
      F_00aa2c50(param_1,0,0,0);
      uVar6 = F_00aa6f20(param_1,(uint)(byte)(&REFG(undefined1, 0x1108c90))[uVar6 * 8],1);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8d70 */
uint F_00bd8d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (param_2[1] - *param_2) / 0x54;
  if (uVar6 < 3) {
    return uVar6;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c9c))[uVar6 * 2];
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd8dd0: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8dd5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd8dd0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd8dd5: ;
    if (iVar4 == 0) {
      if ((int)uVar6 < 0) {
        return (uint)pbVar2;
      }
      uVar6 = F_00aab790(param_1,(uint)(byte)(&REFG(undefined1, 0x1108ca0))[uVar6 * 8],0,0,0,0);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8e10 */
uint F_00bd8e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  undefined * this;
  bool bVar9;
  
  uVar8 = (param_2[1] - *param_2) / 0x54;
  if (uVar8 < 4) {
    return uVar8;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8);
  uVar8 = 0;
  do {
    pbVar5 = (&REFG(undefined * PTR32, 0x1108cb0))[uVar8 * 2];
    pbVar7 = pbVar2;
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00bd8e80: ;
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00bd8e85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00bd8e80;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00bd8e85: ;
    if (iVar6 == 0) {
      uVar3 = F_00c4b813((&REFG(undefined * PTR32, 0x1108cb0))[uVar8 * 2],"mount",5);
      if ((int)uVar8 < 0) {
        return uVar3;
      }
      uVar4 = F_0042a990(*param_2 + 0xfc);
      uVar4 = F_00c4c74c(uVar4);
      this = param_1;
      if (uVar3 == 0) {
        if (8 < (int)uVar4) {
          uVar4 = 1;
        }
        this = *(undefined * PTR32 *)((int)param_1 + 0x2e00);
      }
      if (this == (undefined *)0x0) {
        return uVar4;
      }
      uVar8 = F_00aa2260(this,*(undefined4 *)(&REFG(undefined, 0x1108cb4) + uVar8 * 8),uVar4);
      return uVar8;
    }
    uVar8 = uVar8 + 1;
    if (0xe < uVar8) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf25 */
uint F_00bd8f10(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf34 */
byte F_00bd8f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: FUN_00bd8f40 */
uint F_00bd8f40(unsigned int gen_a0)
{
  GEN_ENTER(0xbd8f40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  uVar2 = (param_1[1] - *param_1) / 0x54;
  if (4 < uVar2) {
    uVar2 = F_0042a990(*param_1 + 0xa8);
    uVar2 = F_00c4c74c(uVar2);
    uVar3 = F_0042a990(*param_1 + 0xfc);
    uVar3 = F_00c4c74c(uVar3);
    uVar4 = F_0042a990(*param_1 + 0x150);
    uVar4 = F_00c4c74c(uVar4);
    bVar1 = F_005f2520(REFG(void * PTR32, 0x1379cb0),uVar2,uVar3,uVar4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00bd8fd0 */
uint F_00bd8fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd8fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  uVar2 = (param_2[1] - iVar1) / 0x54;
  if (2 < uVar2) {
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 9;
    uVar2 = F_0042a990(iVar1 + 0xa8);
    uVar2 = F_00c4c74c(uVar2);
    uVar2 = F_00aa4270(param_1,uVar2,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0);
  }
  return uVar2;
}

/* ref: FUN_00bd90a0 */
uint F_00bd90a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd90a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  char * _Str1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  char * _Str2;
  
  iVar5 = param_1[1] - *param_1;
  uVar2 = iVar5 * 0x30c30c31;
  uVar4 = iVar5 / 0x54;
  if (1 < uVar4) {
    _Str2 = "omnishadow";
    _Str1 = (char *)F_0042a990(*param_1 + 0x54);
    uVar2 = F_00c4c468(_Str1,_Str2);
    if ((uVar2 == 0) && (2 < uVar4)) {
      pbVar3 = (byte *)F_0042a990(*param_1 + 0xa8);
      uVar2 = 0;
      do {
        pbVar6 = (&REFG(undefined * PTR32, 0x1108d28))[uVar2 * 2];
        pbVar7 = pbVar3;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00bd9130: ;
            uVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00bd9135;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00bd9130;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_00bd9135: ;
        if (uVar4 == 0) {
          if ((int)uVar2 < 0) {
            return 0;
          }
          uVar2 = F_006352b0(REFG(void * PTR32, 0x1371280),(uint)(byte)(&REFG(undefined1, 0x1108d2c))[uVar2 * 8]);
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        if (1 < uVar2) {
          return uVar4;
        }
      } while( true );
    }
  }
  return uVar2;
}

/* ref: FUN_00bd9170 */
uint F_00bd9170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  pbVar2 = ((byte *)GEN_TOP(((param_1[1] - *param_1) / 0x54)));
  if ((byte *)0x1 < pbVar2) {
    pbVar2 = (byte *)F_0042a990(*param_1 + 0x54);
    pbVar3 = REFG(undefined * PTR32, 0x1108d3c);
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd91d0: ;
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00bd91d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd91d0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd91d5: ;
    if (iVar4 != 0) {
      return (uint)pbVar2;
    }
    if (REFG(int, 0x1108d38) == 0) {
      pbVar2 = (byte *)F_00bd8f40(param_1);
    }
  }
  return (uint)pbVar2;
}

/* ref: FUN_00bd9210 */
uint F_00bd9210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = F_00bd8b10(this);
  uVar7 = 0;
  if (uVar2 != 0) {
    uVar7 = (param_1[1] - *param_1) / 0x54;
    if (1 < uVar7) {
      pbVar3 = (byte *)F_0042a990(*param_1 + 0x54);
      uVar7 = 0;
      do {
        pbVar4 = (&REFG(undefined * PTR32, 0x1108d44))[uVar7 * 2];
        pbVar6 = pbVar3;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00bd9290: ;
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00bd9295;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00bd9290;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00bd9295: ;
        if (iVar5 == 0) {
          if (-1 < (int)uVar7) {
            pbVar3 = ((byte *)GEN_TOP((&REFG(undefined4, 0x1108d40))[uVar7 * 2]));
            switch((unsigned int)(uintptr_t)(pbVar3)) {
            case (byte *)0x0: ;
              uVar7 = F_00bd8b80(uVar2,param_1);
              return uVar7;
            case (byte *)0x1: ;
              uVar7 = F_00bd8c30(uVar2,param_1);
              return uVar7;
            case (byte *)0x2: ;
              uVar7 = F_00bd8cc0(uVar2,param_1);
              return uVar7;
            case (byte *)0x3: ;
              uVar7 = F_00bd8d70(uVar2,param_1);
              return uVar7;
            case (byte *)0x4: ;
              uVar7 = F_00bd8fd0(uVar2,param_1);
              return uVar7;
            case (byte *)0x6: ;
              pbVar3 = (byte *)F_00bd8e10(uVar2,param_1);
            }
          }
          return (uint)pbVar3;
        }
        uVar7 = uVar7 + 1;
        if (6 < uVar7) {
          return (uint)pbVar3;
        }
      } while( true );
    }
  }
  return uVar7;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf33 */
uint F_00bd9370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  undefined * pvVar8;
  undefined * pvVar9;
  bool bVar10;
  ulonglong uVar11;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  iVar6 = *(int *)(this + 0x24);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),&REFG(undefined, 0x1108a08),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),*(int *)(iVar6 + 0xc) + iVar6,REFG(undefined4, 0x108cc50));
  F_00ada1b0(((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x64)),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  iVar6 = (int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
  if (((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54 + iVar6 == iVar6) {
    uVar2 = F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return uVar2;
  }
  pbVar3 = (byte *)F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x0)));
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  uVar2 = 0;
LAB_00bd9450: ;
  pbVar5 = (&REFG(undefined * PTR32, 0x1108d7c))[uVar2 * 2];
  pbVar7 = pbVar3;
  do {
    bVar1 = *pbVar5;
    bVar10 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00bd9480: ;
      uVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00bd9485;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar10 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00bd9480;
    pbVar5 = pbVar5 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_00bd9485: ;
  if (uVar4 != 0) {
    uVar2 = uVar2 + 1;
    if (2 < uVar2) goto LAB_00bd9495;
    goto LAB_00bd9450;
  }
  if ((int)uVar2 < 0) goto LAB_00bd9495;
  iVar6 = (&REFG(undefined4, 0x1108d78))[uVar2 * 2];
  if (iVar6 == 0) {
    uVar4 = F_00bd9170(this,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  else if (iVar6 == 1) {
    uVar4 = F_00bd9210(this,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  else {
    uVar4 = iVar6 - 2;
    if (uVar4 == 0) {
      uVar4 = F_00bd90a0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    }
  }
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == (undefined *)0x0) goto LAB_00bd957d;
  for (; pvVar9 != pvVar8; pvVar9 = (undefined *)((int)pvVar9 + 0x54)) {
    F_0042c880(pvVar9);
  }
  iVar6 = (*(int *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
LAB_00bd9574: ;
  uVar11 = F_00429760((*(undefined * PTR32 *)(gen_frame + 0x0)),(iVar6 / 0x54) * 0x54,0x35);
  uVar4 = (uint)uVar11;
LAB_00bd957d: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar4;
LAB_00bd9495: ;
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == (undefined *)0x0) goto LAB_00bd957d;
  for (; pvVar8 != pvVar9; pvVar8 = (undefined *)((int)pvVar8 + 0x54)) {
    F_0042c880(pvVar8);
  }
  iVar6 = (*(int *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
  goto LAB_00bd9574;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf0 */
uint F_00bd95a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108b5c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd95d0 */
unsigned int F_00bd95d0(float gen_a0)
{
  GEN_ENTER(0xbd95d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd95f0 */
uint F_00bd95f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd95f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108e1c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf34 */
byte F_00bd9620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf33 */
unsigned int F_00bd9650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x24);
  if ((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(iVar1 + 0x10) == 0)) {
    F_00621530(REFG(int, 0x137127c) + 0xee30);
  }
  if (*(int *)(iVar1 + 0xc) == 2) {
    F_006214b0(REFG(int, 0x137127c) + 0xee30,*(float *)(iVar1 + 0x14));
  }
  if (*(int *)(iVar1 + 0x10) == 2) {
    F_006214e0(REFG(int, 0x137127c) + 0xee30,*(float *)(iVar1 + 0x18));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf0 */
uint F_00bd96c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd96c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108e1c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd9720 */
uint F_00bd9720(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108f3c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf25 */
uint F_00bd9740(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(in_ecx + 0x78);
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bd977e;
  iVar3 = *(int *)(in_ecx + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar3 = *(int *)(in_ecx + 0x6c);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00bd9769;
  }
  else {
LAB_00bd9769: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar2;
    uVar4 = F_00b595f0(uVar2);
  }
  uVar5 = *(uint *)(in_ecx + 0x78);
LAB_00bd977e: ;
  if ((uVar5 != 0) && (*(int *)(uVar5 + 0x454) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(uVar5 + 0x454) + 0x19)));
    *pbVar1 = *pbVar1 & 0xfb;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf26 */
unsigned int F_00bd97a0(void)
{
  GEN_ENTER(0xbd97a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf33 */
uint F_00bd97b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd97b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(in_ecx + 0x78);
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bd97ee;
  iVar3 = *(int *)(in_ecx + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar3 = *(int *)(in_ecx + 0x6c);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00bd97d9;
  }
  else {
LAB_00bd97d9: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar2;
    uVar4 = F_00b595f0(uVar2);
  }
  uVar5 = *(uint *)(in_ecx + 0x78);
LAB_00bd97ee: ;
  if ((uVar5 != 0) && (*(int *)(uVar5 + 0x454) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(uVar5 + 0x454) + 0x19)));
    *pbVar1 = *pbVar1 | 4;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf34 */
byte F_00bd9810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_ecx + 0x78);
  if (iVar3 != 0) goto LAB_00bd984e;
  iVar3 = *(int *)(in_ecx + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar3 = *(int *)(in_ecx + 0x6c);
    if (iVar3 != 0) goto LAB_00bd9839;
  }
  else {
LAB_00bd9839: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  iVar3 = *(int *)(in_ecx + 0x78);
LAB_00bd984e: ;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x454) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(iVar3 + 0x454) + 0x19)));
    *pbVar1 = *pbVar1 & 0xfb;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf0 */
uint F_00bd9880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd98b0 */
unsigned int F_00bd98b0(float gen_a0)
{
  GEN_ENTER(0xbd98b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd98d0 */
uint F_00bd98d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd98d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11090dc));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf34 */
byte F_00bd9900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf25 */
unsigned int F_00bd9910(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd994a;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd9935;
  }
  else {
LAB_00bd9935: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd994a: ;
  if (this_00 != (undefined *)0x0) {
    uVar4 = F_00bbaf90(this_00);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 0xec) != 0)) {
      puVar1 = ((ushort *)GEN_TOP((*(int *)(uVar4 + 0xec) + 0x70)));
      *puVar1 = *puVar1 & 0xffef;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf33 */
uint F_00bd9970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  iVar1 = *(int *)(this + 0x24);
  if (this_00 != (undefined *)0x0) goto LAB_00bd99b2;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd9999;
  }
  else {
LAB_00bd9999: ;
    uVar2 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd99b2: ;
  uVar4 = F_00bbaf90(this_00);
  uVar5 = 0;
  if ((uVar4 != 0) && (uVar5 = *(uint *)(uVar4 + 0xec), uVar5 != 0)) {
    *(ushort *)(uVar5 + 0x70) =
         (ushort)(*(char *)(iVar1 + 0xc) != '\0') << 4 | *(ushort *)(uVar5 + 0x70) & 0xffef;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf0 */
uint F_00bd99f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd99f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11090dc));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd9a30 */
unsigned int F_00bd9a30(float gen_a0)
{
  GEN_ENTER(0xbd9a30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd9a50 */
uint F_00bd9a50(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110927c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf25 */
uint F_00bd9a80(void)
{
  GEN_ENTER(0xbd9a80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14c4e78);
  if (REFG(undefined4, 0x14c4e78) != 0) {
    *(undefined4 *)(REFG(undefined4, 0x14c4e78) + 0x18) = *(undefined4 *)(REFG(undefined4, 0x14c4e78) + 0x1c);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf34 */
byte F_00bd9a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf33 */
uint F_00bd9aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x14c4e78);
  uVar3 = *(uint *)(this + 0x24);
  if (REFG(int, 0x14c4e78) != 0) {
    if (*(int *)(uVar3 + 0x10) == 0) {
      *(undefined4 *)(REFG(int, 0x14c4e78) + 0x18) = *(undefined4 *)(REFG(int, 0x14c4e78) + 0x1c);
    }
    piVar2 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),*((undefined4 *)GEN_TOP((uVar3 + *(int *)(uVar3 + 0xc)))),0,0);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2);
      *(uint *)(iVar1 + 0x18) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00bd9af0 */
uint F_00bd9af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf0 */
uint F_00bd9b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110927c));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd9b40 */
uint F_00bd9b40(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  return (uint)this;
}

/* ref: FUN_00bd9b60 */
uint F_00bd9b60(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  F_00bc09b0(this);
  uVar1 = F_00bd2e60(this);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf25 */
uint F_00bd9b80(void)
{
  GEN_ENTER(0xbd9b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00bc09b0(in_ECX);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf26 */
unsigned int F_00bd9b90(void)
{
  GEN_ENTER(0xbd9b90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf33 */
unsigned int F_00bd9ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd9bde;
  iVar4 = *(int *)(this + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 != 0) goto LAB_00bd9bc5;
  }
  else {
LAB_00bd9bc5: ;
    uVar2 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd9bde: ;
  if ((*(char *)((int)this_00 + 0x12) == '\0') && (iVar4 = *(int *)((int)this_00 + 4), iVar4 != 0))
  {
    bVar3 = false;
    if ((*(int *)(iVar4 + 0x6c) == 2) && (*(int *)(iVar4 + 0x88) == 0)) {
      bVar3 = true;
    }
    cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    if (-1 < cVar1) {
      if (!bVar3) {
        F_00bc40b0(this_00,this,(int)cVar1);
        return 0;
      }
      F_00bc0910(this,(int)cVar1);
      return 0;
    }
    if (bVar3) {
      F_00bc09b0(this);
      return 0;
    }
    F_00bc40c0(this_00,this);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf0 */
uint F_00bd9c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  F_00bc09b0(this);
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd9c90 */
unsigned int F_00bd9c90(float gen_a0)
{
  GEN_ENTER(0xbd9c90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bd9cb0 */
uint F_00bd9cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109554));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf34 */
byte F_00bd9ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00bd9cf0 */
uint F_00bd9cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar4 == (undefined *)0x0) {
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar2 = *(int *)((int)this + 0x6c);
      pvVar3 = (undefined *)0x0;
      if (iVar2 != 0) goto LAB_00bd9d16;
    }
    else {
LAB_00bd9d16: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar1;
      pvVar3 = (undefined *)F_00b595f0(uVar1);
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x78);
    if (pvVar4 == (undefined *)0x0) {
      pvVar4 = (undefined *)0x0;
      goto LAB_00bd9d3a;
    }
  }
  pvVar3 = (undefined *)F_00bbaf90(pvVar4);
  pvVar4 = pvVar3;
LAB_00bd9d3a: ;
  iVar2 = REFG(int, 0x1379694);
  if ((pvVar4 != (undefined *)0x0) && (REFG(int, 0x1379694) != 0)) {
    F_00aa2260(pvVar4,0,*(undefined4 *)(REFG(int, 0x1379694) + 0x2d90));
    F_00aa2260(pvVar4,1,*(undefined4 *)(iVar2 + 0x2d94));
    F_00aa2260(pvVar4,2,*(undefined4 *)(iVar2 + 0x2d98));
    F_00aa2260(pvVar4,3,*(undefined4 *)(iVar2 + 0x2d9c));
    F_00aa2260(pvVar4,4,*(undefined4 *)(iVar2 + 0x2da0));
    F_00aa80c0(pvVar4,0,*(undefined4 *)(iVar2 + 0x16b0),*(undefined4 *)(iVar2 + 0x16b4));
    pvVar3 = (undefined *)F_00aa80c0(pvVar4,1,*(undefined4 *)(iVar2 + 0x1e50),
                                  *(undefined4 *)(iVar2 + 0x1e54));
  }
  return (uint)pvVar3;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf19 */
byte F_00bd9dd0(void)
{
  GEN_ENTER(0xbd9dd0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),"CharaMakeClassEquip");
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    iVar4 = 0;
    if (0 < (int)uVar2) {
      do {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,iVar4)));
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar2);
    }
  }
  return 1;
}

/* ref: FUN_00bd9e40 */
uint F_00bd9e40(unsigned int gen_a0)
{
  GEN_ENTER(0xbd9e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint local_8;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar3 != (undefined *)0x0) goto LAB_00bd9e88;
  iVar6 = *(int *)((int)this + 0x6c);
  if (iVar6 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar6 = *(int *)((int)this + 0x6c);
    uVar2 = 0;
    if (iVar6 != 0) goto LAB_00bd9e6b;
  }
  else {
LAB_00bd9e6b: ;
    uVar1 = *(undefined4 *)(iVar6 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar2 = F_00b595f0(uVar1);
  }
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar3 == (undefined *)0x0) {
    return uVar2;
  }
LAB_00bd9e88: ;
  pvVar3 = (undefined *)F_00bbaf90(pvVar3);
  uVar2 = 0;
  if (pvVar3 != (undefined *)0x0) {
    uVar4 = F_00ab21a0((uint)*(byte *)((int)pvVar3 + 0x1688));
    uVar2 = 0;
    if (uVar4 != 0) {
      local_8 = (uint)*(byte *)(uVar4 + 0x3e);
      if ((*(int *)(uVar4 + 0x10) == 0x20) || (*(int *)(uVar4 + 0x10) == 0x21)) {
        local_8 = 1;
      }
      iVar6 = 0;
      uVar2 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc0);
      if (0 < (int)uVar2) {
        while( true ) {
          puVar5 = (undefined4 *)F_00ab3660(iVar6);
          if (puVar5[0xe] == local_8) break;
          iVar6 = iVar6 + 1;
          if ((int)uVar2 <= iVar6) {
            return local_8;
          }
        }
        F_00aa2260(pvVar3,0,*puVar5);
        F_00aa2260(pvVar3,1,puVar5[2]);
        F_00aa2260(pvVar3,2,puVar5[4]);
        F_00aa2260(pvVar3,3,puVar5[6]);
        F_00aa2260(pvVar3,4,puVar5[8]);
        F_00aa80c0(pvVar3,0,puVar5[10],0);
        uVar2 = F_00aa80c0(pvVar3,1,puVar5[0xc],0);
      }
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf33 */
uint F_00bd9f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbd9f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == '\0') {
      F_00bd9cf0(this);
    }
    else {
      F_00bd9e40(this);
    }
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd9fdf;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd9fc6;
  }
  else {
LAB_00bd9fc6: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  }
LAB_00bd9fdf: ;
  piVar4 = (int *)F_00bbaf90(this_00);
  uVar3 = 0;
  if (piVar4 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x70))(piVar4);
    if ((char)uVar3 == '\0') {
      uVar3 = F_00bd30b0(this,0);
    }
    if ((piVar4[0x3b] != 0) && (*(int *)(piVar4[0x3b] + 0x2c8) != 0)) {
      uVar3 = F_00bd30b0(this,0);
    }
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf0 */
uint F_00bda030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109554));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bda060 */
unsigned int F_00bda060(float gen_a0)
{
  GEN_ENTER(0xbda060u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bda080 */
uint F_00bda080(unsigned int gen_a0)
{
  GEN_ENTER(0xbda080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109704));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::PadVibrationClip::vf34 */
byte F_00bda0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PadVibrationClip::vf33 */
uint F_00bda0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  int * piVar6;
  float * pfVar7;
  undefined * this_00;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float fVar11;
  
  bVar4 = F_00bd2480(this);
  if (bVar4 != 0) {
    return CONCAT31(extraout_var,bVar4);
  }
  uVar5 = F_00424cd0();
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = *(undefined * PTR32 *)(uVar5 + 0x14);
  uVar5 = (uint)*((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) != '\0') {
    piVar6 = (int *)F_00bd3ff0(this);
    if (piVar6 == (int *)0x0) {
      this_00 = (undefined *)F_00bd40a0(this);
      if (this_00 == (undefined *)0x0) goto LAB_00bda1d5;
      pfVar7 = (float *)F_00a5feb0(this_00);
    }
    else {
      pfVar7 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6)));
    }
    if (pfVar7 != (float *)0x0) {
      iVar3 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
      fVar11 = ((float)GEN_TOF(((float10)*pfVar7 - (float10)*(float *)(iVar3 + 0x90))));
      (*(float *)(gen_frame + 0x20)) = fVar11;
      fVar1 = ((float)GEN_TOF(((float10)pfVar7[1] - (float10)*(float *)(iVar3 + 0x94))));
      (*(float *)(gen_frame + 0x24)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)pfVar7[2] - (float10)*(float *)(iVar3 + 0x98))));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      fVar8 = (float10)fVar1;
      fVar9 = (float10)fVar11;
      fVar10 = (float10)fVar2;
      fVar11 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
      (*(float *)(gen_frame + 0x38)) = fVar11;
      fVar11 = ((float)GEN_TOF(SQRT((float10)fVar11)));
      (*(float *)(gen_frame + 0x38)) = fVar11;
      (*(float *)(gen_frame + 0x3c)) = fVar11;
      if ((float10)REFG(float, 0x11096ec) < (float10)fVar11) {
        (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x11096ec);
      }
      (*(float *)(gen_frame + 0x38)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x3c)) * (float10)*(double *)&REFG(double, 0x10969f8));
    }
  }
LAB_00bda1d5: ;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
  fVar11 = (float)(extraout_ST0 / (float10)*(double *)&REFG(undefined, 0x1088070));
  (*(float *)(gen_frame + 0x3c)) = fVar11;
  if ((float10)REFG(float, 0x11096f0) < (float10)fVar11) {
    fVar11 = REFG(float, 0x11096f0);
  }
  ((uint *)(gen_frame + 0x4))[0] = uVar5;
  ((uint *)(gen_frame + 0x4))[1] = 0;
  (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x38));
  (*(uint *)(gen_frame + 0x10)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x38));
  (*(float *)(gen_frame + 0x1c)) = fVar11;
  uVar5 = F_00b8a100((*(undefined * PTR32 *)(gen_frame + 0x34)),((uint *)(gen_frame + 0x4)));
  return uVar5;
}

/* ref: FUN_00bda250 */
uint F_00bda250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xbda250u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  param_1[2] = (undefined4)gen_fl2bits(param_4);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = (undefined4)gen_fl2bits(param_7);
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[6] = (undefined4)gen_fl2bits(param_8);
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::PadVibrationClip::vf0 */
uint F_00bda290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109704));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bda2c0 */
byte F_00bda2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bda2d0 */
uint F_00bda2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbda2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109824));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf25 */
uint F_00bda2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbda2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bda32e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bda315;
  }
  else {
LAB_00bda315: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bda32e: ;
  uVar3 = F_00bc4060(this_00,this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf26 */
unsigned int F_00bda340(void)
{
  GEN_ENTER(0xbda340u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf33 */
uint F_00bda350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * this_00;
  
  pvVar4 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar4;
  if (pvVar4 != (undefined *)0x0) goto LAB_00bda393;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    pvVar4 = (undefined *)0x0;
    if (iVar2 != 0) goto LAB_00bda37e;
  }
  else {
LAB_00bda37e: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    pvVar4 = (undefined *)F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bda393: ;
  if (this_00 != (undefined *)0x0) {
    iVar2 = *(int *)(this + 0x24);
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    uVar3 = F_00bd3040(this);
    if ((uVar3 & 0x100) != 0) {
      (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
    }
    pvVar4 = (undefined *)F_00bc4040(this_00,this,(uint)*(ushort *)(iVar2 + 0xc),(*(int *)(gen_frame + 0x8)));
  }
  return (uint)pvVar4;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf34 */
byte F_00bda3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  int in_ecx;
  byte bVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bda414;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bda3fb;
  }
  else {
LAB_00bda3fb: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bda414: ;
  iVar3 = *(int *)(this + 0x24);
  if (((param_1 == 6) && (in_ecx = *(int *)((int)this_00 + 0x448), in_ecx != 0)) &&
     (bVar2 = F_00a0b720(in_ecx), bVar2 != 0)) {
    *(undefined1 *)(in_ecx + 10) = *(undefined1 *)(iVar3 + 0xc);
    return 0;
  }
  F_00bc4050(this_00,this,(uint)*(ushort *)(iVar3 + 0xc),1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf0 */
uint F_00bda480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bda4b0 */
unsigned int F_00bda4b0(float gen_a0)
{
  GEN_ENTER(0xbda4b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bda4d0 */
uint F_00bda4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbda4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11099c4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf30 */
unsigned int F_00bda4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbda4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00bda540 */
uint F_00bda540(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbda540u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = REFG(float * PTR32, 0x1371290);
  pfVar2 = REFG(float * PTR32, 0x1371290);
  if ((*((char *)GEN_TOP((REFG(float * PTR32, 0x1371290) + 0xc6))) == -0x80) &&
     (pfVar2 = REFG(float * PTR32, 0x1371290) + 0xbc, pfVar2 != (float *)0x0)) {
    *pfVar2 = param_1;
    pfVar1[0xbd] = param_2;
    pfVar1[0xbe] = param_3;
    pfVar1[0xbf] = *param_4;
    pfVar1[0xc0] = param_4[1];
    pfVar1[0xc1] = param_4[2];
  }
  return (uint)pfVar2;
}

/* ref: FUN_00bda590 */
uint F_00bda590(unsigned int gen_a0)
{
  GEN_ENTER(0xbda590u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0x10,param_1,0x80);
  if (((*(char *)(iVar1 + 0x318) == -0x80) && (iVar1 = iVar1 + 0x2f0, iVar1 != 0)) &&
     ((char)param_1 != '\0')) {
    F_004a6420(iVar1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf25 */
uint F_00bda5e0(void)
{
  GEN_ENTER(0xbda5e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0x10,0,0x80);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf33 */
uint F_00bda600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 2) {
    uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0x10,0,0x80);
    return uVar2;
  }
  uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0x10,1,0x80);
  if ((*(char *)(iVar1 + 0x318) == -0x80) && (iVar1 = iVar1 + 0x2f0, iVar1 != 0)) {
    F_004a6420(iVar1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf34 */
byte F_00bda660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 0) {
    F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0x10,0,0x80);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf29 */
uint F_00bda690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda690u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  uint uVar8;
  float * pfVar9;
  
  uVar8 = (*(uint *)&gen_args[1]);
  pfVar7 = REFG(float * PTR32, 0x1371290);
  pfVar9 = *(float * PTR32 *)((*(int *)&gen_args[0]) + 0x24);
  if (pfVar9[4] != 2.8026e-45) {
    fVar1 = *(float *)((*(uint *)&gen_args[1]) + 0x30);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
    pfVar9 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    fVar1 = *pfVar9;
    fVar2 = *(float *)(uVar8 + 0x34);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar2);
    pfVar9 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar2 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x8));
    }
    fVar2 = *pfVar9;
    fVar3 = *(float *)(uVar8 + 0x38);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1094880);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar3);
    pfVar9 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar3 < REFG(float, 0x1094880))) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x8));
    }
    fVar3 = *pfVar9;
    fVar4 = *(float *)(uVar8 + 0x3c);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar4);
    pfVar9 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar4 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x8));
    }
    fVar4 = *pfVar9;
    fVar5 = *(float *)(uVar8 + 0x40);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar5);
    pfVar9 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar5 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x8));
    }
    fVar5 = *pfVar9;
    fVar6 = *(float *)(uVar8 + 0x44);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar6);
    pfVar9 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar6 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x8));
    }
    fVar6 = *pfVar9;
    pfVar9 = REFG(float * PTR32, 0x1371290);
    if ((*((char *)GEN_TOP((REFG(float * PTR32, 0x1371290) + 0xc6))) == -0x80) &&
       (pfVar9 = REFG(float * PTR32, 0x1371290) + 0xbc, pfVar9 != (float *)0x0)) {
      REFG(float * PTR32, 0x1371290)[0xbf] = fVar4;
      pfVar7[0xc0] = fVar5;
      *pfVar9 = fVar1;
      pfVar7[0xbd] = fVar2;
      pfVar7[0xbe] = fVar3;
      pfVar7[0xc1] = fVar6;
    }
  }
  return (uint)pfVar9;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf0 */
uint F_00bda830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bda860 */
unsigned int F_00bda860(float gen_a0)
{
  GEN_ENTER(0xbda860u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bda880 */
uint F_00bda880(unsigned int gen_a0)
{
  GEN_ENTER(0xbda880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109b64));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf30 */
unsigned int F_00bda8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbda8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00bda8f0 */
unsigned int F_00bda8f0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0xbda8f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1371290);
  if ((*(char *)(REFG(int, 0x1371290) + 0x317) == -0x80) &&
     ((float *)(REFG(int, 0x1371290) + 0x2c4) != (float *)0x0)) {
    *(float *)(REFG(int, 0x1371290) + 0x2c4) = param_1;
    *(float *)(iVar2 + 0x2c8) = param_2;
    *(float *)(iVar2 + 0x2cc) = param_3;
    *(float *)(iVar2 + 0x2d0) = param_4;
    *(undefined4 *)(iVar2 + 0x2d4) = *param_5;
    *(undefined4 *)(iVar2 + 0x2d8) = param_5[1];
    uVar1 = param_5[2];
    *(float *)(iVar2 + 0x2e0) = param_6;
    *(float *)(iVar2 + 0x2e4) = param_7;
    *(float *)(iVar2 + 0x2e8) = param_8;
    *(undefined4 *)(iVar2 + 0x2dc) = uVar1;
    *(float *)(iVar2 + 0x2ec) = param_9;
  }
  return 0;
}

/* ref: FUN_00bda970 */
uint F_00bda970(unsigned int gen_a0)
{
  GEN_ENTER(0xbda970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0xf,param_1,0x80);
  if (((*(char *)(iVar1 + 0x317) == -0x80) && (iVar1 = iVar1 + 0x2c4, iVar1 != 0)) &&
     ((char)param_1 != '\0')) {
    F_004a63e0(iVar1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf25 */
uint F_00bda9c0(void)
{
  GEN_ENTER(0xbda9c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0xf,0,0x80);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf33 */
uint F_00bda9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbda9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 2) {
    uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0xf,0,0x80);
    return uVar2;
  }
  uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0xf,1,0x80);
  if ((*(char *)(iVar1 + 0x317) == -0x80) && (iVar1 = iVar1 + 0x2c4, iVar1 != 0)) {
    F_004a63e0(iVar1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf34 */
byte F_00bdaa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdaa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 0) {
    F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c),0xf,0,0x80);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf29 */
uint F_00bdaa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdaa70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
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
  uint * puVar11;
  uint uVar12;
  float * pfVar13;
  uint * puVar14;
  float10 fVar15;
  
  uVar12 = param_2;
  puVar14 = *(uint * PTR32 *)(param_1 + 0x24);
  if (puVar14[4] != 2) {
    fVar15 = F_00c4d3da((float10)*(double *)&REFG(undefined, 0x10920b0));
    puVar11 = REFG(uint * PTR32, 0x1371290);
    param_2 = (uint)gen_fl2bits((float)fVar15);
    fVar15 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    if ((float10)REFG(float, 0x10943cc) < fVar15) {
      param_2 = (uint)gen_fl2bits((float)(fVar15 - (float10)*(double *)&REFG(undefined, 0x10920b0)));
      fVar15 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    }
    if (gen_bits2f(param_2) < REFG(float, 0x10943d0)) {
      param_2 = (uint)gen_fl2bits((float)(fVar15 + (float10)*(double *)&REFG(undefined, 0x10920b0)));
    }
    fVar1 = *(float *)(uVar12 + 0x34);
    ((float *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[1], REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x1090708));
    ((float *)(gen_frame + 0x0))[2] = fVar1;
    pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0));
    }
    fVar1 = *pfVar13;
    fVar2 = *(float *)(uVar12 + 0x38);
    ((float *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[2], REFG(float, 0x1090708));
    ((float *)(gen_frame + 0x0))[0] = fVar2;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar2 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar2 = *pfVar13;
    fVar3 = *(float *)(uVar12 + 0x3c);
    ((float *)(gen_frame + 0x0))[0] = fVar3;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar3 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar3 = *pfVar13;
    fVar4 = *(float *)(uVar12 + 0x40);
    ((float *)(gen_frame + 0x0))[0] = fVar4;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar4 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar4 = *pfVar13;
    fVar5 = *(float *)(uVar12 + 0x44);
    ((float *)(gen_frame + 0x0))[0] = fVar5;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar5 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar5 = *pfVar13;
    fVar6 = *(float *)(uVar12 + 0x48);
    ((float *)(gen_frame + 0x0))[0] = fVar6;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar6 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar6 = *pfVar13;
    fVar7 = *(float *)(uVar12 + 0x2c);
    ((float *)(gen_frame + 0x0))[0] = fVar7;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar7 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar7 = *pfVar13;
    fVar8 = *(float *)(uVar12 + 0x20);
    ((float *)(gen_frame + 0x0))[0] = fVar8;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar8 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar8 = *pfVar13;
    fVar9 = *(float *)(uVar12 + 0x24);
    ((float *)(gen_frame + 0x0))[0] = fVar9;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar9 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar9 = *pfVar13;
    fVar10 = *(float *)(uVar12 + 0x28);
    ((float *)(gen_frame + 0x0))[0] = fVar10;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar10 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar10 = *pfVar13;
    puVar14 = REFG(uint * PTR32, 0x1371290);
    if ((*((char *)GEN_TOP(((int)REFG(uint * PTR32, 0x1371290) + 0x317))) == -0x80) &&
       (puVar14 = REFG(uint * PTR32, 0x1371290) + 0xb1, puVar14 != (uint *)0x0)) {
      *puVar14 = param_2;
      puVar11[0xb5] = (uint)gen_fl2bits(fVar8);
      puVar11[0xb2] = (uint)gen_fl2bits(fVar1);
      puVar11[0xb6] = (uint)gen_fl2bits(fVar9);
      puVar11[0xb3] = (uint)gen_fl2bits(fVar2);
      puVar11[0xb4] = (uint)gen_fl2bits(fVar3);
      puVar11[0xb7] = (uint)gen_fl2bits(fVar10);
      puVar11[0xb8] = (uint)gen_fl2bits(fVar7);
      puVar11[0xb9] = (uint)gen_fl2bits(fVar5);
      puVar11[0xba] = (uint)gen_fl2bits(fVar4);
      puVar11[0xbb] = (uint)gen_fl2bits(fVar6);
    }
  }
  return (uint)puVar14;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf0 */
uint F_00bdad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdad50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdad80 */
byte F_00bdad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdad80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(byte *)((uint)(ushort)param_2 + in_ecx);
}

/* ref: FUN_00bdada0 */
unsigned int F_00bdada0(float gen_a0)
{
  GEN_ENTER(0xbdada0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bdadc0 */
uint F_00bdadc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdadc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109d04));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf7 */
uint F_00bdadf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdadf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x24);
  fVar3 = F_00bd2390(this);
  if ((float10)*(float *)(iVar1 + 0x1c) <= (float10)fVar3) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,7);
    return uVar2;
  }
  return extraout_EAX & 0xffffff00;
}

/* ref: FUN_00bdae20 */
uint F_00bdae20(void)
{
  GEN_ENTER(0xbdae20u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int, 0x14c5b08) != 0) {
    uVar1 = F_00406ad0(REFG(int, 0x14c5b08));
    REFG(int, 0x14c5b08) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bdae50 */
uint F_00bdae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdae50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * pcVar1;
  
  pcVar1 = (char *)((uint)(ushort)param_2 + in_ecx);
  *pcVar1 = *pcVar1 + '\x01';
  return (uint)(ushort)param_2;
}

/* ref: FUN_00bdae60 */
byte F_00bdae60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdae60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)(in_ecx + (uint)(ushort)param_2);
  if (bVar1 != 0) {
    bVar1 = bVar1 - 1;
    *(byte *)(in_ecx + (uint)(ushort)param_2) = bVar1;
  }
  return bVar1;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf25 */
uint F_00bdaea0(void)
{
  GEN_ENTER(0xbdaea0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = (undefined *)0x0;
  if (REFG(void * PTR32, 0x14c5b08) != (undefined *)0x0) {
    pvVar1 = F_00c48350(REFG(void * PTR32, 0x14c5b08),0,0x3c);
  }
  return (uint)pvVar1;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf33 */
unsigned int F_00bdaec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdaec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(this + 0x24);
  if (REFG(int, 0x14c5b08) != 0) {
    this[0x88] = (undefined1)0x0;
    uVar4 = F_00bd3f80(this);
    iVar3 = *(int *)(uVar4 + 0x134);
    *(int *)(uVar4 + 0x134) = iVar3 + 1;
    *(int *)(this + 0x8c) = iVar3;
    if (*(ushort *)(iVar2 + 0x14) != 0xffff) {
      pcVar1 = ((char *)GEN_TOP((REFG(int, 0x14c5b08) + (uint)*(ushort *)(iVar2 + 0x14))));
      *pcVar1 = *pcVar1 + '\x01';
      if ((REFG(int, 0x14c5b08) != 0) &&
         (*(ushort *)(iVar2 + 0x16) <=
          (ushort)*((byte *)GEN_TOP(((uint)*(ushort *)(iVar2 + 0x14) + REFG(int, 0x14c5b08)))))) {
        this[0x88] = (undefined1)0x1;
      }
      if (this[0x88] == (undefined1)0x0) {
        return 0;
      }
    }
    F_004ff5f0(REFG(undefined4, 0x1375aec));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf34 */
byte F_00bdaf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdaf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  char * pcVar2;
  
  if ((REFG(int, 0x14c5b08) != 0) && (*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0x14))) != 0xffff)) {
    pcVar2 = ((char *)GEN_TOP((REFG(int, 0x14c5b08) + (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0x14))))));
    cVar1 = *pcVar2;
    if (cVar1 != '\0') {
      *pcVar2 = cVar1 + -1;
    }
  }
  return 1;
}

/* ref: FUN_00bdaf90 */
uint F_00bdaf90(void)
{
  GEN_ENTER(0xbdaf90u, 0u, 0u, 0u, 0u);
  undefined * _Dst;
  undefined * pvVar1;
  
  if (REFG(void * PTR32, 0x14c5b08) != (undefined *)0x0) {
    F_00406ad0(REFG(void * PTR32, 0x14c5b08));
    REFG(void * PTR32, 0x14c5b08) = (undefined *)0x0;
  }
  _Dst = (undefined *)F_00406b90(0x3c,0,0);
  if (_Dst != (undefined *)0x0) {
    pvVar1 = F_00c48350(_Dst,0,0x3c);
    REFG(void * PTR32, 0x14c5b08) = _Dst;
    return (uint)pvVar1;
  }
  REFG(void * PTR32, 0x14c5b08) = (undefined *)0x0;
  return 0;
}

/* ref: FUN_00bdaff0 */
uint F_00bdaff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdaff0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_edx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf30 */
uint F_00bdb010(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdb010u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined * this;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  float10 fVar10;
  
  iVar3 = *(int *)((int)param_1 + 0x24);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = param_1;
  uVar6 = F_00bd3f80(param_1);
  if (((uVar6 != 0) && (!((float10)*(float *)(iVar3 + 0x1c) <= (float10)param_2))) &&
     (iVar4 = *(int *)(iVar3 + 0x10), iVar4 != 0)) {
    iVar5 = *(int *)(iVar3 + 0x18);
    iVar7 = (int)param_2 / iVar5;
    ((int *)(gen_frame + 0x2c))[1] = iVar7;
    ((int *)(gen_frame + 0x2c))[0] = iVar7 + 1;
    if (iVar5 < 1) {
      fVar10 = (float10)0;
    }
    else {
      ((int *)(gen_frame + 0x2c))[2] = iVar5;
      ((int *)(gen_frame + 0x2c))[3] = iVar5 * iVar7;
      fVar10 = ((float10)param_2 - (float10)(iVar5 * iVar7)) / (float10)iVar5;
    }
    iVar4 = iVar4 + -1;
    (*(float *)(gen_frame + 0x28)) = (float)fVar10;
    ((int *)(gen_frame + 0x2c))[2] = iVar4;
    ((int *)(gen_frame + 0x2c))[3] = 0;
    piVar8 = ((int *)(gen_frame + 0x2c)) + 1;
    if (iVar4 <= iVar7) {
      piVar8 = ((int *)(gen_frame + 0x2c)) + 2;
    }
    if (*piVar8 < 1) {
      piVar8 = ((int *)(gen_frame + 0x2c)) + 3;
    }
    ((int *)(gen_frame + 0x2c))[1] = iVar4;
    ((int *)(gen_frame + 0x2c))[2] = 0;
    piVar9 = ((int *)(gen_frame + 0x2c));
    if (iVar4 <= iVar7 + 1) {
      piVar9 = ((int *)(gen_frame + 0x2c)) + 1;
    }
    if (*piVar9 < 1) {
      piVar9 = ((int *)(gen_frame + 0x2c)) + 2;
    }
    iVar5 = *piVar9;
    iVar4 = *(int *)(iVar3 + 0xc) + *piVar8 * 0xc;
    uVar1 = *(undefined4 *)(iVar4 + 4 + iVar3);
    uVar2 = *(undefined4 *)(iVar4 + 8 + iVar3);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar4 + iVar3);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
    iVar4 = *(int *)(iVar3 + 0xc) + iVar5 * 0xc;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar4 + iVar3);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar4 + 4 + iVar3);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar4 + 8 + iVar3);
    uVar6 = F_0054cdb0(&(*(undefined4 *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x0)),(float)fVar10);
    this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    if (((*(short *)(iVar3 + 0x14) == -1) || (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x88) != '\0')) &&
       (uVar6 = F_00bd3f80((*(undefined * PTR32 *)(gen_frame + 0x3c))), *(int *)(uVar6 + 0xf8) == -1)) {
      uVar6 = F_00bd3f80(this);
      iVar3 = *(int *)((int)this + 0x8c);
      if (*(int *)(uVar6 + 0x130) <= iVar3) {
        uVar6 = F_00bd3f80(this);
        *(int *)(uVar6 + 0x130) = iVar3;
        uVar6 = REFG(undefined4, 0x13712a4);
        *(undefined4 *)(REFG(undefined4, 0x13712a4) + 0x20) = (*(undefined4 *)(gen_frame + 0x10));
        *(undefined4 *)(uVar6 + 0x24) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined4 *)(uVar6 + 0x28) = (*(undefined4 *)(gen_frame + 0x18));
        uVar6 = REFG(undefined4, 0x13712a4);
        *(uint *)(REFG(undefined4, 0x13712a4) + 0x30) = *(uint *)(REFG(undefined4, 0x13712a4) + 0x30) | 2;
        if (REFG(int, 0x13759f4) != 0) {
          uVar6 = F_0068bc00(REFG(int, 0x13759f4),&(*(undefined4 *)(gen_frame + 0x10)));
          return uVar6;
        }
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00bdb1e0 */
uint F_00bdb1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb1e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x130) = param_2;
  return param_2;
}

/* ref: FUN_00bdb200 */
uint F_00bdb200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0xc) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf0 */
uint F_00bdb220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109d04));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdb250 */
uint F_00bdb250(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109e24));
  puVar1 = (undefined4 *)F_005d7370();
  *(undefined4 *)((int)this + 0x88) = *puVar1;
  *(undefined4 *)((int)this + 0x8c) = puVar1[1];
  *(undefined4 *)((int)this + 0x90) = puVar1[2];
  *(undefined4 *)((int)this + 0x94) = puVar1[3];
  puVar1 = (undefined4 *)F_005d7370();
  *(undefined4 *)((int)this + 0x98) = *puVar1;
  *(undefined4 *)((int)this + 0x9c) = puVar1[1];
  *(undefined4 *)((int)this + 0xa0) = puVar1[2];
  *(undefined4 *)((int)this + 0xa4) = puVar1[3];
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf20 */
uint F_00bdb2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb2c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x24);
  *(undefined4 *)(in_ecx + 0x98) = *(undefined4 *)(uVar1 + 0xc);
  *(undefined4 *)(in_ecx + 0x9c) = *(undefined4 *)(uVar1 + 0x10);
  *(undefined4 *)(in_ecx + 0xa0) = *(undefined4 *)(uVar1 + 0x14);
  *(undefined4 *)(in_ecx + 0xa4) = *(undefined4 *)(uVar1 + 0x18);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf26 */
unsigned int F_00bdb2f0(void)
{
  GEN_ENTER(0xbdb2f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf34 */
byte F_00bdb300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00bdb350 */
uint F_00bdb350(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bdb38e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdb379;
  }
  else {
LAB_00bdb379: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bdb38e: ;
  if ((((iVar3 == 0) || (*(char *)(iVar3 + 0x12) != '\0')) ||
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 == (int *)0x0)) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2), uVar4 == 0 ||
       (*(char *)(uVar4 + 0x11) != '\x01')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb3d0 */
uint F_00bdb3d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdb3d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  this = (undefined *)F_00bdb350((*(undefined * PTR32 *)&gen_args[0]));
  uVar5 = 0;
  if (this != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    pfVar6 = &(*(float *)&gen_args[1]);
    if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x18));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x14));
    }
    fVar7 = (float10)*pfVar6;
    (*(float *)&gen_args[1]) = (float)((float10)1 - fVar7);
    fVar8 = (float10)(*(float *)&gen_args[1]);
    fVar1 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))))));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) * fVar8)));
    (*(float *)(gen_frame + 0x8)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) * fVar8)));
    (*(float *)(gen_frame + 0xc)) = fVar3;
    fVar4 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))))));
    (*(float *)(gen_frame + 0x10)) = fVar4;
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) * fVar7 + (float10)fVar1)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) * fVar7 + (float10)fVar2)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) * fVar7 + (float10)fVar3)));
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) + (float10)fVar4)));
    uVar5 = F_005e45d0(this,&(*(float *)(gen_frame + 0x4)));
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf33 */
uint F_00bdb4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00bdb350(this);
  uVar1 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_005dde30(this_00,this + 0x88);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf0 */
uint F_00bdb550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdb580 */
uint F_00bdb580(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109f44));
  *(undefined2 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bdb5e0 */
uint F_00bdb5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bdb61e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdb609;
  }
  else {
LAB_00bdb609: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bdb61e: ;
  if ((((iVar3 == 0) || (*(char *)(iVar3 + 0x12) != '\0')) ||
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 == (int *)0x0)) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2), uVar4 == 0 ||
       (*(char *)(uVar4 + 0x11) != '\x01')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb660 */
uint F_00bdb660(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdb660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  uVar1 = F_00bdb5e0((*(undefined * PTR32 *)&gen_args[0]));
  uVar2 = 0;
  if (uVar1 != 0) {
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x89))) == '\0') {
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x4)) = 0.0;
      pfVar3 = &(*(float *)&gen_args[1]);
      if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
        pfVar3 = &(*(float *)(gen_frame + 0x8));
      }
      if (!(0.0 < *pfVar3)) {
        pfVar3 = &(*(float *)(gen_frame + 0x4));
      }
      fVar4 = (float10)*pfVar3;
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) == '\0') {
        fVar4 = (float10)1 - fVar4;
      }
      (*(float *)&gen_args[1]) = (float)fVar4;
    }
    else if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) == '\0') {
      (*(float *)&gen_args[1]) = 0.0;
    }
    else {
      (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
    }
    uVar2 = F_005e4530(uVar1,(*(float *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf26 */
uint F_00bdb700(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00bdb5e0(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_005e4530(uVar1,(float)(float10)1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf33 */
uint F_00bdb720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  this[0x89] = (undefined1)(*((short *)GEN_TOP((*(int *)(this + 0x24) + 4))) == 1);
  uVar1 = F_00bdb660(this,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf34 */
byte F_00bdb750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bdb660(this,(float)(float10)1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf0 */
uint F_00bdb7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdb820 */
uint F_00bdb820(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a064));
  *(undefined4 *)((int)this + 0x88) = REFG(undefined4, 0x1302e54);
  *(undefined4 *)((int)this + 0x8c) = REFG(undefined4, 0x1302e58);
  *(undefined4 *)((int)this + 0x90) = REFG(undefined4, 0x1302e5c);
  *(undefined4 *)((int)this + 0x94) = REFG(undefined4, 0x1302e60);
  *(undefined4 *)((int)this + 0x98) = REFG(undefined4, 0x1302e54);
  *(undefined4 *)((int)this + 0x9c) = REFG(undefined4, 0x1302e58);
  *(undefined4 *)((int)this + 0xa0) = REFG(undefined4, 0x1302e5c);
  *(undefined4 *)((int)this + 0xa4) = REFG(undefined4, 0x1302e60);
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf26 */
unsigned int F_00bdb890(void)
{
  GEN_ENTER(0xbdb890u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf34 */
byte F_00bdb8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdb8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf20 */
uint F_00bdb8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x24);
  uVar1 = *(undefined4 *)(iVar4 + 0x18);
  fVar2 = *(float *)(iVar4 + 0x10);
  fVar3 = *(float *)(iVar4 + 0x14);
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0xc) * (float10)*(float *)(iVar4 + 0xc))));
  *(float *)(this + 0x9c) = (float)((float10)fVar2 * (float10)fVar2);
  fVar2 = (float)((float10)fVar3 * (float10)fVar3);
  *(float *)(this + 0xa0) = fVar2;
  *(undefined4 *)(this + 0xa4) = uVar1;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_00bdb960 */
uint F_00bdb960(unsigned int gen_a0)
{
  GEN_ENTER(0xbdb960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bdb99e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdb989;
  }
  else {
LAB_00bdb989: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bdb99e: ;
  if ((((iVar3 == 0) || (*(char *)(iVar3 + 0x12) != '\0')) ||
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 == (int *)0x0)) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2), uVar4 == 0 ||
       (*(char *)(uVar4 + 0x11) != '\x03')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb9e0 */
uint F_00bdb9e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdb9e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  this = (undefined *)F_00bdb960((*(undefined * PTR32 *)&gen_args[0]));
  uVar5 = 0;
  if (this != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    pfVar6 = &(*(float *)&gen_args[1]);
    if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x18));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x14));
    }
    fVar7 = (float10)*pfVar6;
    (*(float *)&gen_args[1]) = (float)((float10)1 - fVar7);
    fVar8 = (float10)(*(float *)&gen_args[1]);
    fVar1 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))))));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) * fVar8)));
    (*(float *)(gen_frame + 0x8)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) * fVar8)));
    (*(float *)(gen_frame + 0xc)) = fVar3;
    fVar4 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))))));
    (*(float *)(gen_frame + 0x10)) = fVar4;
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) * fVar7 + (float10)fVar1)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) * fVar7 + (float10)fVar2)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) * fVar7 + (float10)fVar3)));
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) + (float10)fVar4)));
    uVar5 = F_005de250(this,&(*(float *)(gen_frame + 0x4)));
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf33 */
uint F_00bdbab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_ecx;
  undefined4 * puVar1;
  
  in_ecx = F_00bdb960(this);
  puVar1 = (undefined4 *)0x0;
  if (in_ecx != 0) {
    puVar1 = (undefined4 *)F_005de230(in_ecx);
    *(undefined4 *)(this + 0x88) = *puVar1;
    *(undefined4 *)(this + 0x8c) = puVar1[1];
    *(undefined4 *)(this + 0x90) = puVar1[2];
    *(undefined4 *)(this + 0x94) = puVar1[3];
  }
  return (uint)puVar1;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf0 */
uint F_00bdbb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdbbc0 */
uint F_00bdbbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a184));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bdbc20 */
uint F_00bdbc20(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bdbc5e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdbc49;
  }
  else {
LAB_00bdbc49: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bdbc5e: ;
  if ((((iVar3 == 0) || (*(char *)(iVar3 + 0x12) != '\0')) ||
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 == (int *)0x0)) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2), uVar4 == 0 ||
       (*(char *)(uVar4 + 0x11) != '\x03')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdbca0 */
uint F_00bdbca0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdbca0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  piVar1 = (int *)F_00bdbc20((*(undefined * PTR32 *)&gen_args[0]));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = &(*(float *)(gen_frame + 0x4));
    }
    fVar4 = (float10)*pfVar3;
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != '\0') {
      fVar4 = (float10)1 - fVar4;
    }
    (*(float *)&gen_args[1]) = (float)fVar4;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf26 */
uint F_00bdbd20(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00bdbc20(this);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits((float)(float10)0));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf33 */
uint F_00bdbd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  float10 fVar3;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  piVar1 = (int *)F_00bdbc20(this);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (this[0x88] == (undefined1)0x0) {
      fVar3 = (float10)0;
    }
    else {
      fVar3 = (float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8);
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits((float)fVar3));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf34 */
byte F_00bdbda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  float10 fVar2;
  
  piVar1 = (int *)F_00bdbc20(this);
  if (piVar1 != (int *)0x0) {
    if (this[0x88] == (undefined1)0x0) {
      fVar2 = (float10)1;
    }
    else {
      fVar2 = (float10)0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits((float)fVar2));
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf0 */
uint F_00bdbed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdbf00 */
uint F_00bdbf00(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a2a4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf26 */
unsigned int F_00bdbf20(void)
{
  GEN_ENTER(0xbdbf20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf33 */
uint F_00bdbf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_005e1640();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_00bd30b0(this,0);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf34 */
byte F_00bdbf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf0 */
uint F_00bdbf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdbfa0 */
uint F_00bdbfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdbfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a3c4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf26 */
unsigned int F_00bdbfc0(void)
{
  GEN_ENTER(0xbdbfc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf33 */
unsigned int F_00bdbfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b5c930(REFG(undefined4, 0x14c4e90),*(int *)(this + 0x24) + 0xc,0);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf34 */
byte F_00bdbff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdbff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf0 */
uint F_00bdc010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc040 */
uint F_00bdc040(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a4e4));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf26 */
uint F_00bdc060(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(this + 0x78);
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bdc09e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar4 = 0;
    if (iVar2 != 0) goto LAB_00bdc089;
  }
  else {
LAB_00bdc089: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar4 = F_00b595f0(uVar1);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdc09e: ;
  if ((((uVar5 != 0) && (*(char *)(uVar5 + 0x12) == '\0')) &&
      (piVar3 = *(int * PTR32 *)(uVar5 + 4), piVar3 != (int *)0x0)) &&
     ((uVar4 = piVar3[0x1b], uVar4 == 9 || (uVar4 == 8)))) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xac))(piVar3)));
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xd4))(piVar3,(undefined4)gen_fl2bits((float)(float10)0));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xe0))(piVar3,1);
    }
  }
  return uVar4;
}

/* ref: FUN_00bdc130 */
uint F_00bdc130(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdc130u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  float * pfVar4;
  bool bVar5;
  int * piVar6;
  float10 fVar7;
  
  iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x78);
  piVar6 = (int *)0x0;
  if (iVar3 == 0) {
    iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)((*(int *)&gen_args[0]) + 4) != 0) {
        *(undefined4 *)((*(int *)&gen_args[0]) + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 4) + 4)));
      }
      iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x6c);
      if (iVar3 != 0) goto LAB_00bdc15f;
    }
    else {
LAB_00bdc15f: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x78);
    if (iVar3 == 0) goto LAB_00bdc194;
  }
  if (((*(char *)(iVar3 + 0x12) == '\0') && (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0))
     && ((piVar2[0x1b] == 9 || (piVar2[0x1b] == 8)))) {
    piVar6 = piVar2;
  }
LAB_00bdc194: ;
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar4 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
    pfVar4 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar4)) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  fVar7 = (float10)*pfVar4;
  if (*(char *)((*(int *)&gen_args[0]) + 0x88) == '\0') {
    fVar7 = (float10)1 - fVar7;
  }
  (*(float *)&gen_args[1]) = (float)fVar7;
  fVar7 = (float10)(*(float *)&gen_args[1]);
  if (!((float10)0 < fVar7)) {
    (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
  }
  bVar5 = (float10)0 < fVar7;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) = bVar5;
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(REFG(float, 0x1087f04)) >> 8),bVar5));
  if (piVar6 != (int *)0x0) {
    piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xac))(piVar6)));
    pfVar4 = (float *)0x0;
    if (piVar6 != (int *)0x0) {
      (*(float *)&gen_args[1]) = (float)((float10)1 - (float10)(*(float *)&gen_args[1]));
      ((code *)*(gen_code32 *)(*piVar6 + 0xd4))(piVar6,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
      pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xdc))(piVar6)));
      if ((bool)(char)pfVar4 != bVar5) {
        pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xe0))(piVar6,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8))))));
      }
    }
  }
  return (uint)pfVar4;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf33 */
uint F_00bdc260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  uVar1 = F_00bdc130(this,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf34 */
byte F_00bdc280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bdc130(this,(float)(float10)1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf0 */
uint F_00bdc320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc360 */
unsigned int F_00bdc360(float gen_a0)
{
  GEN_ENTER(0xbdc360u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bdc380 */
uint F_00bdc380(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a684));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf26 */
unsigned int F_00bdc3a0(void)
{
  GEN_ENTER(0xbdc3a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf34 */
byte F_00bdc3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf33 */
uint F_00bdc3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  undefined * this_00;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (*(uint *)(gen_frame + 0x8));
  iVar1 = *(int *)(this + 0x24);
  if (*(int *)(iVar1 + 0x10) == 0) {
    uVar6 = F_00bd3ff0(this);
    if (*(int *)(uVar6 + 0x6c) != 2) {
      return uVar6;
    }
    if (*(int *)(uVar6 + 0x88) != 9) {
      return uVar6;
    }
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x80) + 0xb4))))(*(int * PTR32 *)(uVar6 + 0x80))));
  }
  else {
    this_00 = (undefined *)F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),
                                   CONCAT31((*(undefined3 *)(gen_frame + 0x5)),*(undefined1 *)(iVar1 + 0xd)),
                                   *(int *)(iVar1 + 0x10),0,1);
  }
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar2 = (undefined3)((uint)((int)(uintptr_t)this_00) >> 8);
  uVar8 = ((uint)((int)(uintptr_t)this_00) >> 8) << 8;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  uVar3 = 0;
  gen_piece_set(&(*(uint *)(gen_frame + 0x8)), 1, 3, (unsigned long long)(SUB43(uVar7,1)));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0x18))) {
  case 0: ;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),1);
    uVar8 = CONCAT31(uVar2,1);
    break;
  case 1: ;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),1);
    goto LAB_00bdc458;
  case 2: ;
    (*(uint *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3) << 8;
    uVar8 = CONCAT31(uVar2,1);
    break;
  case 3: ;
    (*(uint *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3) << 8;
LAB_00bdc458: ;
    uVar8 = ((uint)((int)(uintptr_t)this_00) >> 8) << 8;
    break;
  default: ;
    goto switchD_00bdc437_default;
  }
  uVar3 = (undefined1)uVar8;
  uVar6 = (*(uint *)(gen_frame + 0x8));
switchD_00bdc437_default: ;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  cVar4 = (char)uVar8;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0x14))) {
  case 0: ;
    bVar5 = F_005d6860(this_00,(cVar4 == '\0') + 2,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var,bVar5);
  case 1: ;
    bVar5 = F_005d6860(this_00,(cVar4 == '\0') + 4,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var_00,bVar5);
  case 2: ;
    bVar5 = F_005d6860(this_00,(cVar4 == '\0') + 6,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var_01,bVar5);
  case 3: ;
    uVar7 = F_005f51d0(this_00,CONCAT31((*(undefined3 *)(gen_frame + 0x5)),uVar3),(*(uint *)(gen_frame + 0x8)));
    return uVar7;
  case 4: ;
    (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)
               (longlong)TRUNC((double)*(int *)(iVar1 + 0x24) * *(double *)&REFG(undefined, 0x110a7a0));
    uVar8 = F_005eb180(this_00,*(undefined4 *)(iVar1 + 0x1c),(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar8;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf0 */
uint F_00bdc560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc590 */
unsigned int F_00bdc590(float gen_a0)
{
  GEN_ENTER(0xbdc590u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bdc5b0 */
uint F_00bdc5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a834));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf33 */
unsigned int F_00bdc5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005f3310(*(undefined4 *)(this + 0x24));
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf34 */
byte F_00bdc5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf0 */
uint F_00bdc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc640 */
unsigned int F_00bdc640(float gen_a0)
{
  GEN_ENTER(0xbdc640u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bdc660 */
uint F_00bdc660(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a9d4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf34 */
byte F_00bdc680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00bdc690 */
unsigned int F_00bdc690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdc690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar3 != (undefined *)0x0) goto LAB_00bdc6cd;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bdc6b8;
  }
  else {
LAB_00bdc6b8: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bdc6cd: ;
  if (pvVar3 != (undefined *)0x0) {
    pvVar3 = (undefined *)F_00bbaf90(pvVar3);
    if (pvVar3 != (undefined *)0x0) {
      if (param_1 == 0) {
        F_00aa6a50(pvVar3,0,2,param_2);
      }
      else {
        if (param_1 == 1) {
          F_00aa6a50(pvVar3,1,2,param_2);
          return 0;
        }
        if (param_1 == 2) {
          F_00aa6a50(pvVar3,2,2,param_2);
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf26 */
unsigned int F_00bdc730(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bdc690(this,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0xe))),1);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf33 */
unsigned int F_00bdc740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bdc690(this,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0xe))),
               (uint)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0'));
  return 0;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf0 */
uint F_00bdc770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc7a0 */
unsigned int F_00bdc7a0(float gen_a0)
{
  GEN_ENTER(0xbdc7a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bdc7c0 */
uint F_00bdc7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ab74));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf34 */
byte F_00bdc7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00bdc7f0 */
uint F_00bdc7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdc7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar2 = *(int *)((int)this + 0x78);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 != 0) goto LAB_00bdc818;
    }
    else {
LAB_00bdc818: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar2 = *(int *)((int)this + 0x78);
    if (iVar2 != 0) goto LAB_00bdc831;
  }
  else {
LAB_00bdc831: ;
    if (*(char *)(iVar2 + 0x12) == '\0') {
      uVar3 = *(uint *)(iVar2 + 4);
      goto LAB_00bdc83e;
    }
  }
  uVar3 = 0;
LAB_00bdc83e: ;
  iVar2 = *(int *)(uVar3 + 0x88);
  if (iVar2 == 10) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x80) + 0x34))))(*(int * PTR32 *)(uVar3 + 0x80))));
    uVar3 = F_006a0720(this_00,param_1,param_2);
  }
  else if ((iVar2 == 4) || (iVar2 == 5)) {
    uVar3 = F_00bd40a0(this);
    if ((uVar3 != 0) && ((undefined *)(uVar3 + 0x16c0) != (undefined *)0x0)) {
      uVar3 = F_006a0720((undefined *)(uVar3 + 0x16c0),param_1,param_2);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf26 */
uint F_00bdc8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bdc7f0(this,*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) + *(int *)(this + 0x24),1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf33 */
uint F_00bdc8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x24);
  uVar2 = F_00bdc7f0(this,*(int *)(iVar1 + 0xc) + iVar1,(uint)(*(char *)(iVar1 + 0x10) != '\0'));
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf0 */
uint F_00bdc900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdc930 */
uint F_00bdc930(unsigned int gen_a0)
{
  GEN_ENTER(0xbdc930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ac94));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf25 */
uint F_00bdc960(void)
{
  GEN_ENTER(0xbdc960u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((undefined4 *)(gen_frame + 0x0))[0] = 1;
  uVar1 = F_005f32e0(((undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf20 */
unsigned int F_00bdc9a0(void)
{
  GEN_ENTER(0xbdc9a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf33 */
uint F_00bdc9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005f32e0(*(int *)(this + 0x24) + 0xc);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf34 */
byte F_00bdc9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdc9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf0 */
uint F_00bdcaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdcaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ac94));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdcad0 */
unsigned int F_00bdcad0(float gen_a0)
{
  GEN_ENTER(0xbdcad0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf26 */
unsigned int F_00bdcaf0(void)
{
  GEN_ENTER(0xbdcaf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bdcb00 */
uint F_00bdcb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbdcb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  int * piVar1;
  uint in_ecx;
  uint uVar2;
  int iVar3;
  undefined * this;
  
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x6c);
  if (this == (undefined *)0x0) {
    uVar2 = 0;
    if (*(int *)((*(int *)&gen_args[0]) + 4) != 0) {
      uVar2 = *((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 4) + 4)));
      *(uint *)((*(int *)&gen_args[0]) + 0x6c) = uVar2;
    }
    this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x6c);
    if (this == (undefined *)0x0) {
      return uVar2;
    }
  }
  piVar1 = (int *)F_00beb6b0(this);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (*(char *)((*(int *)&gen_args[0]) + 0xb8) != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,&(*(undefined4 *)&gen_args[1]));
    }
    in_ecx = F_00beb670(this);
    uVar2 = in_ecx;
    if (*(char *)((*(int *)&gen_args[0]) + 0xb9) != '\0') {
      if (in_ecx == 0) {
        (*(float *)&gen_args[5]) = (float)((float10)1 - (float10)(*(float *)&gen_args[5]));
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,(undefined4)gen_fl2bits((*(float *)&gen_args[5])));
      }
      else {
        uVar2 = F_00aa0980(in_ecx,(*(float *)&gen_args[5]),1);
      }
    }
    if ((*(char *)((*(int *)&gen_args[0]) + 0xb8) != '\0') && (in_ecx != 0)) {
      iVar3 = 3;
      piVar1 = (int *)(in_ecx + 0x2da0);
      do {
        iVar3 = iVar3 + -1;
        piVar1 = piVar1 + -0x1e8;
        if (piVar1 != (int *)0x0) {
          uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,&(*(undefined4 *)&gen_args[1]));
        }
      } while (iVar3 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_00bdcc00 */
uint F_00bdcc00(unsigned int gen_a0)
{
  GEN_ENTER(0xbdcc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined1 *)((int)this + 0xba) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ae34));
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined2 *)((int)this + 0xb8) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf34 */
byte F_00bdcc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdcc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bdcb00(this,(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(float)(float10)1);
  return 1;
}

/* ref: FUN_00bdccb0 */
uint F_00bdccb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbdccb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    local_14 = REFG(float, 0x1087f04);
    local_10 = REFG(float, 0x1087f04);
    local_c = REFG(float, 0x1087f04);
    param_2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xb4) * (float10)param_2 +
                     (float10)*(float *)(param_1 + 0x94))));
  }
  else {
    fVar2 = (float10)param_2;
    param_2 = REFG(float, 0x1087f04);
    local_14 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x88) +
                      fVar2 * (float10)*(float *)(param_1 + 0xa8))));
    local_10 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xac) * fVar2 +
                      (float10)*(float *)(param_1 + 0x8c))));
    local_c = ((float)GEN_TOF((fVar2 * (float10)*(float *)(param_1 + 0xb0) +
                     (float10)*(float *)(param_1 + 0x90))));
  }
  uVar1 = F_00bdcb00(param_1,(undefined4)gen_fl2bits(local_14),(undefined4)gen_fl2bits(local_10),
                       (undefined4)gen_fl2bits(local_c),(undefined4)gen_fl2bits(REFG(float, 0x1087f04)),
                       param_2);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf33 */
uint F_00bdcd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdcd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar1 = REFG(float, 0x1087f04);
  iVar3 = *(int *)(this + 0x2c);
  if (iVar3 == 0x4c) {
    iVar3 = *(int *)(this + 0x24);
    iVar4 = *(int *)(iVar3 + 0xc);
    uVar1 = *(undefined4 *)(iVar4 + 4 + iVar3);
    uVar2 = *(undefined4 *)(iVar4 + 8 + iVar3);
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(iVar4 + iVar3);
    *(undefined4 *)(this + 0x8c) = uVar1;
    uVar5 = REFG(float, 0x1087f04);
    *(undefined4 *)(this + 0x90) = uVar2;
    *(undefined4 *)(this + 0x94) = uVar5;
    iVar4 = *(int *)(iVar3 + 0x14);
    uVar1 = *(undefined4 *)(iVar3 + 4 + iVar4);
    uVar2 = *(undefined4 *)(iVar3 + 8 + iVar4);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(iVar3 + iVar4);
    *(undefined4 *)(this + 0x9c) = uVar1;
    *(undefined4 *)(this + 0xa0) = uVar2;
    *(undefined4 *)(this + 0xa4) = uVar5;
    *(undefined2 *)(this + 0xb8) = 1;
    this[0xba] = (undefined1)0x0;
  }
  else if (iVar3 == 0x4d) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined4 *)(this + 0x94) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10)));
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
    *(undefined4 *)(this + 0xa0) = 0;
    *(undefined4 *)(this + 0xa4) = uVar1;
    *(undefined2 *)(this + 0xb8) = 0x100;
    this[0xba] = (undefined1)0x0;
  }
  else if ((iVar3 == 0x4e) || (iVar3 == 0x4f)) {
    *(undefined4 *)(this + 0x88) = REFG(float, 0x1087f04);
    *(undefined4 *)(this + 0x8c) = uVar1;
    *(undefined4 *)(this + 0x90) = uVar1;
    *(undefined4 *)(this + 0x94) = uVar1;
    *(undefined4 *)(this + 0x98) = uVar1;
    *(undefined4 *)(this + 0x9c) = uVar1;
    *(undefined4 *)(this + 0xa0) = uVar1;
    *(undefined4 *)(this + 0xa4) = uVar1;
    this[0xb8] = (undefined1)(iVar3 == 0x4e);
    this[0xb9] = (undefined1)(iVar3 == 0x4f);
    this[0xba] = (undefined1)0x1;
  }
  else {
    *(undefined4 *)(this + 0x88) = REFG(float, 0x1087f04);
    *(undefined4 *)(this + 0x8c) = uVar1;
    *(undefined4 *)(this + 0x90) = uVar1;
    *(undefined4 *)(this + 0x98) = uVar1;
    *(undefined4 *)(this + 0x94) = uVar1;
    *(undefined4 *)(this + 0x9c) = uVar1;
    *(undefined4 *)(this + 0xa0) = uVar1;
    *(undefined4 *)(this + 0xa4) = uVar1;
    *(undefined2 *)(this + 0xb8) = 0;
    this[0xba] = (undefined1)0x0;
  }
  *(float *)(this + 0xa8) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x98) - (float10)*(float *)(this + 0x88))));
  *(float *)(this + 0xac) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x9c) - (float10)*(float *)(this + 0x8c))));
  *(float *)(this + 0xb0) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa0) - (float10)*(float *)(this + 0x90))));
  *(float *)(this + 0xb4) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa4) - (float10)*(float *)(this + 0x94))));
  uVar6 = F_00bdccb0(this,(float)(float10)0);
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf30 */
unsigned int F_00bdd090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdd090u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 extraout_ST0;
  float fVar1;
  
  if ((char)param_3 != '\0') {
    fVar1 = F_00bd2390(param_1);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa4))(param_1);
    param_3 = (uint)gen_fl2bits((float)((float10)fVar1 / extraout_ST0));
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_3)))) {
      param_3 = REFG(float, 0x1087f04);
    }
    if (*(char *)((int)param_1 + 0xba) == '\0') {
      F_00bdccb0(param_1,GEN_TOF(gen_bits2f(param_3)));
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf29 */
unsigned int F_00bdd0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd0f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  
  if (*(char *)((*(int *)&gen_args[0]) + 0xba) != '\0') {
    iVar5 = *(int *)((*(uint *)&gen_args[1]) + 0x1c);
    fVar1 = *(float *)(iVar5 + 0x30);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    fVar1 = *pfVar6;
    fVar2 = *(float *)(iVar5 + 0x34);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar2);
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar2 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    fVar2 = *pfVar6;
    fVar3 = *(float *)(iVar5 + 0x38);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar3);
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar3 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    fVar3 = *pfVar6;
    fVar4 = *(float *)(iVar5 + 0x3c);
    (*(float *)(gen_frame + 0x8)) = 0.0;
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar4);
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if (!(fVar4 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    F_00bdcb00((*(int *)&gen_args[0]),(undefined4)gen_fl2bits(fVar1),(undefined4)gen_fl2bits(fVar2),
                 (undefined4)gen_fl2bits(fVar3),(undefined4)gen_fl2bits(REFG(float, 0x1087f04)),*pfVar6);
  }
  return 0;
}

/* ref: FUN_00bdd210 */
uint F_00bdd210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00bdd220 */
uint F_00bdd220(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xbdd220u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x1087f04));
  return (uint)in_ecx;
}

/* ref: FUN_00bdd260 */
uint F_00bdd260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0xc) + param_1 * 4;
}

/* ref: FUN_00bdd280 */
uint F_00bdd280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x14) + param_1 * 4;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf0 */
uint F_00bdd2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdd2e0 */
uint F_00bdd2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) * 8 ^ *(uint *)(in_ecx + 0x3fc)) & 8;
  *(uint *)(in_ecx + 0x3fc) = *(uint *)(in_ecx + 0x3fc) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bdd300 */
uint F_00bdd300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00bdd310 */
byte F_00bdd310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x2c) == param_2;
}

/* ref: FUN_00bdd330 */
unsigned int F_00bdd330(float gen_a0)
{
  GEN_ENTER(0xbdd330u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bdd350 */
uint F_00bdd350(unsigned int gen_a0)
{
  GEN_ENTER(0xbdd350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110afd4));
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf25 */
uint F_00bdd390(unsigned int gen_a0)
{
  GEN_ENTER(0xbdd390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(this + 0x78);
  if (iVar3 == 0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bdd3b5;
    }
    else {
LAB_00bdd3b5: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar3 = *(int *)(this + 0x78);
    if (iVar3 != 0) goto LAB_00bdd3ce;
  }
  else {
LAB_00bdd3ce: ;
    if ((*(char *)(iVar3 + 0x12) == '\0') && (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0))
    {
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0);
    }
  }
  uVar4 = *(uint *)(this + 0x78);
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bdd424;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00bdd40f;
  }
  else {
LAB_00bdd40f: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar4 = F_00b595f0(uVar1);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdd424: ;
  if (uVar5 != 0) {
    *(uint *)(uVar5 + 0x3fc) = *(uint *)(uVar5 + 0x3fc) & 0xfffffff7;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf31 */
uint F_00bdd440(unsigned int gen_a0)
{
  GEN_ENTER(0xbdd440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(in_ecx + 0x78);
  if (uVar3 != 0) {
    *(undefined4 *)(uVar3 + 0x2c) = 0;
    return uVar3;
  }
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar2 = *(int *)(in_ecx + 0x6c);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_00bdd480;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(in_ecx + 0x78) = uVar1;
  uVar3 = F_00b595f0(uVar1);
LAB_00bdd480: ;
  *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x2c))) = 0;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf32 */
uint F_00bdd490(unsigned int gen_a0)
{
  GEN_ENTER(0xbdd490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x78);
  if (uVar3 != 0) goto LAB_00bdd4ca;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bdd4b5;
  }
  else {
LAB_00bdd4b5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  uVar3 = *(uint *)(this + 0x78);
LAB_00bdd4ca: ;
  if (*(undefined * PTR32 *)(uVar3 + 0x2c) == this) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,5);
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf33 */
uint F_00bdd4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  int iVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  this[0x90] = (undefined1)0x0;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  bVar2 = F_00bd2480(this);
  if (bVar2 == 0) {
    iVar3 = *(int *)(this + 0x78);
    if (iVar3 == 0) {
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar3 = *(int *)(this + 0x6c);
        if (iVar3 != 0) goto LAB_00bdd56a;
      }
      else {
LAB_00bdd56a: ;
        uVar7 = *(undefined4 *)(iVar3 + 0x20);
        *(undefined4 *)(this + 0x78) = uVar7;
        F_00b595f0(uVar7);
      }
      iVar3 = *(int *)(this + 0x78);
    }
    piVar4 = (int *)F_00bd3ff0(this);
    uVar5 = 0;
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x4c))(piVar4)));
      uVar5 = 0;
      if (this_00 != (undefined *)0x0) {
        bVar6 = *(char *)((int)this_00 + 0x2e08) != '\0';
        iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
        if (iVar1 < 0x81) {
          if (iVar1 == 0x80) {
            ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
            if (bVar6) {
              F_00aab790(this_00,0,0,0,0,0);
            }
            F_00aa0560(this_00,0x22);
            F_00aaa5b0(this_00,1);
            F_00aa6f20(this_00,0,0);
            F_00aa6f20(this_00,1,1);
            uVar5 = F_00aa2c50(this_00,0,0,0);
            *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
            *(undefined4 *)(this + 0x8c) = 1;
            return uVar5;
          }
          if (iVar1 == 0) {
            *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) | 8;
            uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,0);
            *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) & 0xfffffff7;
            this[0x90] = (undefined1)0x1;
            return uVar5;
          }
          uVar5 = iVar1 - 1;
          if (uVar5 == 0) {
            *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) | 8;
            ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,1);
            *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
            this[0x90] = (undefined1)0x1;
            return (uint)this;
          }
        }
        else {
          if (iVar1 < 0x101) {
            if (iVar1 == 0x100) {
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa6f20(this_00,1,1);
              F_00aabf60(this_00,0);
              uVar5 = F_00aaa5b0(this_00,2);
              *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xf7;
              *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
              return uVar5;
            }
            if (iVar1 == 0x81) {
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa0560(this_00,3);
              F_00aaa5b0(this_00,1);
              F_00aa6f20(this_00,1,0);
              F_00aa6f20(this_00,0,1);
              uVar5 = F_00aa2c50(this_00,0,0,0);
              *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
              *(undefined4 *)(this + 0x8c) = 2;
              return uVar5;
            }
            if (iVar1 == 0x82) {
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aaa5b0(this_00,1);
              F_00aa6f20(this_00,1,0);
              uVar7 = 0x22;
            }
            else {
              if (iVar1 - 0x83U != 0) {
                return iVar1 - 0x83U;
              }
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aaa5b0(this_00,1);
              F_00aa6f20(this_00,0,0);
              uVar7 = 3;
            }
            F_00aa4150(this_00,uVar7,0,0);
            uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,1);
          }
          else {
            uVar5 = iVar1 - 0x101;
            switch((unsigned int)(uintptr_t)(iVar1)) {
            case 0x101: ;
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa6f20(this_00,0,1);
              F_00aabf60(this_00,0);
              uVar5 = F_00aaa5b0(this_00,2);
              *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xf7;
              *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
              return uVar5;
            case 0x102: ;
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa0560(this_00,0x49);
              F_00aa2c50(this_00,0,0,0);
              F_00aaa5b0(this_00,2);
              *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xf7;
              uVar5 = F_00aa6f20(this_00,1,0);
              break;
            case 0x103: ;
              ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (bVar6) {
                F_00aab790(this_00,0,0,0,0,0);
              }
              F_00aa0560(this_00,0x43);
              F_00aa2c50(this_00,0,0,0);
              F_00aaa5b0(this_00,2);
              *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xf7;
              uVar5 = F_00aa6f20(this_00,0,0);
              break;
            default: ;
              goto switchD_00bdd84a_caseD_104;
            case 0x180: ;
              uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4);
              if (!bVar6) {
                uVar5 = F_00aab790(this_00,1,0,0,0,0);
              }
            }
          }
          *(uint *)(iVar3 + 0x3fc) = *(uint *)(iVar3 + 0x3fc) | 8;
          this[0x90] = (undefined1)0x1;
        }
      }
    }
switchD_00bdd84a_caseD_104: ;
    return uVar5;
  }
  uVar5 = *(uint *)(this + 0x78);
  if (uVar5 != 0) goto LAB_00bdd53d;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bdd528;
  }
  else {
LAB_00bdd528: ;
    uVar7 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar7;
    F_00b595f0(uVar7);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdd53d: ;
  *(undefined * PTR32 *)(uVar5 + 0x2c) = this;
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf34 */
byte F_00bdda30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdda30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  
  if (this[0x90] != (undefined1)0x0) {
    return 1;
  }
  iVar2 = *(int *)(this + 0x78);
  this[0x90] = (undefined1)0x1;
  if (iVar2 != 0) goto LAB_00bdda7b;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bdda66;
  }
  else {
LAB_00bdda66: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(this + 0x78);
LAB_00bdda7b: ;
  piVar3 = (int *)F_00bd3ff0(this);
  if ((iVar2 != 0) && (piVar3 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,1);
    *(uint *)(iVar2 + 0x3fc) = *(uint *)(iVar2 + 0x3fc) | 8;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf7 */
uint F_00bddb10(unsigned int gen_a0)
{
  GEN_ENTER(0xbddb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (this[0x90] != (undefined1)0x0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  piVar1 = (int *)F_00bd3ff0(this);
  this_00 = (undefined *)0x0;
  if (piVar1 != (int *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1)));
    if ((this_00 != (undefined *)0x0) && (*(int *)(this + 0x8c) != -1)) {
      this_00 = (undefined *)F_00aa02d0(this_00,*(int *)(this + 0x8c),0);
      if ((char)this_00 == '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,7);
        return uVar2;
      }
    }
  }
  return (uint)this_00 & 0xffffff00;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf1 */
byte F_00bddb70(unsigned int gen_a0)
{
  GEN_ENTER(0xbddb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  undefined * this_00;
  byte bVar3;
  int iVar4;
  undefined * this_01;
  
  iVar4 = *(int *)(this + 0x78);
  if (iVar4 == 0) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00bddb96;
    }
    else {
LAB_00bddb96: ;
      uVar1 = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar4 = *(int *)(this + 0x78);
    if (iVar4 == 0) goto LAB_00bddbf8;
  }
  if ((*(char *)(iVar4 + 0x12) == '\0') && (piVar2 = *(int * PTR32 *)(iVar4 + 4), piVar2 != (int *)0x0)) {
    this_01 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2)));
    if ((this_01 != (undefined *)0x0) &&
       (this_00 = *(undefined * PTR32 *)((int)this_01 + 0xec), this_00 != (undefined *)0x0)) {
      if (this[0x88] == (undefined1)0x0) {
        F_00aa2210(this_01);
        this[0x88] = (undefined1)0x1;
      }
      bVar3 = F_006b3620(this_00);
      if (bVar3 != 0) {
        return 0;
      }
    }
  }
LAB_00bddbf8: ;
  bVar3 = F_00bd2590((undefined *)this);
  return bVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf0 */
uint F_00bddc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110afd4));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bddc40 */
unsigned int F_00bddc40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbddc40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xac) = param_2;
  return 0;
}

/* ref: FUN_00bddc60 */
uint F_00bddc60(unsigned int gen_a0)
{
  GEN_ENTER(0xbddc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b0f4));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf29 */
uint F_00bddc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x88);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x50) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x50) + 0xac))) = *(undefined4 *)(param_1 + 0x38);
    uVar1 = F_00befda0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x88) + 0x50))));
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf56 */
unsigned int F_00bddcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x88) != 0) {
    F_00bbac80(((undefined1 *)(gen_frame + 0x8)));
    F_00bbacc0(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x88));
    uVar2 = F_00bbaea0(((undefined1 *)(gen_frame + 0x8)),param_1);
    if ((((char)uVar2 != '\0') ||
        (((*(char *)(param_1 + 0x12) == '\0' && (*(int *)(param_1 + 4) != 0)) &&
         (bVar1 = F_00b630d0(*(undefined4 *)(this + 0x88),*(int *)(param_1 + 4)), bVar1 != 0))))
       && (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0)) {
      F_00b63220(*(undefined * PTR32 *)(this + 0x88));
      *(undefined4 *)(this + 0x88) = 0;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf25 */
unsigned int F_00bddd50(unsigned int gen_a0)
{
  GEN_ENTER(0xbddd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_00b63220(*(undefined * PTR32 *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf33 */
uint F_00bddd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * this_00;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  
  uVar6 = *(uint *)(this + 0x78);
  iVar2 = *(int *)(this + 0x24);
  if (uVar6 != 0) goto LAB_00bdddd2;
  iVar5 = *(int *)(this + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 != 0) goto LAB_00bdddb5;
  }
  else {
LAB_00bdddb5: ;
    uVar3 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar3;
    F_00b595f0(uVar3);
  }
  uVar6 = *(uint *)(this + 0x78);
  if (uVar6 == 0) {
    return 0;
  }
LAB_00bdddd2: ;
  if (*(char *)(uVar6 + 0x12) == '\0') {
    this_00 = *(undefined * PTR32 *)(uVar6 + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this_00;
    if (this_00 != (undefined *)0x0) {
      *(undefined * PTR32 *)(this + 0x88) = this_00;
      if (*(int *)((int)this_00 + 0x50) != 0) {
        F_00b63220(this_00);
        *(undefined4 *)(this + 0x88) = 0;
      }
      uVar6 = 0xffffffff;
      if ((*(int *)(iVar2 + 0x18) != -1) || (*(int *)(iVar2 + 0x20) != -1)) {
        *(undefined * PTR32 *)(this + 0x88) = (*(undefined * PTR32 *)(gen_frame + 0x9c));
        uVar7 = F_0052ed20(REFG(undefined4, 0x1375b00),*(undefined4 *)(iVar2 + 0x18),0,0);
        uVar8 = F_0052ed20(REFG(undefined4, 0x1375b00),*(undefined4 *)(iVar2 + 0x20),0,0);
        (*(uint *)(gen_frame + 0x98)) = uVar8;
        if ((uVar7 != 0) || (uVar6 = 0, uVar8 != 0)) {
          uVar3 = *(undefined4 *)(iVar2 + 0x30);
          uVar1 = *(undefined4 *)(iVar2 + 0x34);
          (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar2 + 0x2c);
          (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar2 + 0x44);
          (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
          (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1302c60);
          (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
          uVar3 = *(undefined4 *)(iVar2 + 0x48);
          (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
          uVar1 = *(undefined4 *)(iVar2 + 0x4c);
          (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(iVar2 + 0x38);
          (*(undefined4 *)(gen_frame + 0x34)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
          (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(iVar2 + 0x3c);
          (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
          (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
          (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1302c64);
          (*(undefined4 *)(gen_frame + 0x58)) = REFG(float, 0x1302c68);
          (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(iVar2 + 0x40);
          F_00a1e0d0(&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x80)));
          (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(iVar2 + 0x50);
          (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(iVar2 + 0x54);
          (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(iVar2 + 0x58);
          F_00a1e0d0(&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x80)));
          (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x68));
          (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x74));
          (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x60));
          (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x6c));
          (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x64));
          (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x78));
          (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x70));
          (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x7c));
          bVar4 = F_00b63030((*(undefined * PTR32 *)(gen_frame + 0x9c)),(uint)*(ushort *)(iVar2 + 0x14),uVar7,&(*(undefined4 *)(gen_frame + 0x0)),
                               (uint)*(ushort *)(iVar2 + 0x1c),(*(uint *)(gen_frame + 0x98)),&(*(undefined4 *)(gen_frame + 0x30)),
                               (uint)*(ushort *)(iVar2 + 0x24),
                               (uint)(*(int *)(iVar2 + 0x28) != 1) * 4 + 2);
          uVar6 = CONCAT31(extraout_var,bVar4);
        }
      }
    }
  }
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf34 */
byte F_00bddfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbddfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == '\0') && (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0))
  {
    F_00b63220(*(undefined * PTR32 *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  return 1;
}

/* ref: FUN_00bddfe0 */
unsigned int F_00bddfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xbddfe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x88) != (undefined *)0x0) {
    F_00b63220(*(undefined * PTR32 *)((int)this + 0x88));
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return 0;
}

/* ref: FUN_00bde000 */
uint F_00bde000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00bde010 */
uint F_00bde010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00bde020 */
uint F_00bde020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00bde030 */
uint F_00bde030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf0 */
uint F_00bde040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b0f4));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bde070 */
uint F_00bde070(unsigned int gen_a0)
{
  GEN_ENTER(0xbde070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b214));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf26 */
unsigned int F_00bde0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbde0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x98) = 0;
  *(undefined4 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf34 */
byte F_00bde0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde0e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 2) {
    *(undefined4 *)(in_ecx + 0x98) = 0;
    *(undefined4 *)(in_ecx + 0x88) = 0;
  }
  return 1;
}

/* ref: FUN_00bde110 */
uint F_00bde110(unsigned int gen_a0)
{
  GEN_ENTER(0xbde110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bde14e;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bde139;
  }
  else {
LAB_00bde139: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bde14e: ;
  if ((((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) &&
     ((piVar2[0x1b] == 8 || (piVar2[0x1b] == 9)))) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bde180 */
uint F_00bde180(unsigned int gen_a0)
{
  GEN_ENTER(0xbde180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bde1be;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bde1a9;
  }
  else {
LAB_00bde1a9: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bde1be: ;
  if ((((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
      (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) &&
     ((piVar2[0x1b] == 8 || (piVar2[0x1b] == 9)))) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf33 */
uint F_00bde230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined2 uVar11;
  undefined * pSVar12;
  bool bVar13;
  float10 extraout_ST0;
  float10 fVar14;
  uint uVar10;
  
  uVar9 = F_00bde110(this);
  if (((uVar9 != 0) && (*(char *)(uVar9 + 0x11) == '\x06')) && (*(int *)(uVar9 + 0xa4) != 0)) {
    this_00 = (undefined *)F_00bde180(this);
    bVar7 = F_005db4d0(this_00);
    uVar9 = CONCAT31(extraout_var,bVar7);
    if (bVar7 == 0) {
      iVar4 = *(int *)(this + 0x24);
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xb0))(this);
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2)) = ((undefined2)0x27f);
      (*(int *)(gen_frame + 0x0)) = (int)(longlong)TRUNC(extraout_ST0);
      fVar14 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      pSVar12 = this + 0x8c;
      fVar3 = ((float)GEN_TOF((((float10)GEN_TOD(((uint)((*(int *)(gen_frame + 0x0)) * 1000) / 0x1e))) / fVar14)));
      *(float *)pSVar12 = fVar3;
      *(float *)(this + 0x90) =
           ((float)GEN_TOF((((float10)GEN_TOD((((uint)*(ushort *)(iVar4 + 0x12) * 1000) / 0x1e))) / fVar14)));
      uVar9 = (uint)*(ushort *)(iVar4 + 0x14) * 1000;
      lVar6 = (ulonglong)uVar9 * 0x88888889;
      fVar1 = *(float *)(this + 0x90);
      bVar5 = GEN_ISNAN(fVar1);
      bVar13 = bVar5 || fVar1 == 0.0;
      uVar11 = (undefined2)((ulonglong)lVar6 >> 0x10);
      uVar8 = (undefined1)lVar6;
      uVar10 = CONCAT22(uVar11,CONCAT11(bVar13 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar1),uVar8));
      *(undefined4 *)(this + 0x98) = 0;
      *(undefined4 *)(this + 0x88) = 0;
      *(undefined4 *)(this + 0x9c) = 0;
      *(float *)(this + 0x94) = ((float)GEN_TOF(((float10)(uVar9 / 0x1e) / fVar14)));
      if (bVar5 != bVar13) {
        fVar2 = *(float *)(this + 0x94);
        bVar5 = GEN_ISNAN(fVar2);
        bVar13 = bVar5 || fVar2 == 0.0;
        uVar10 = CONCAT22(uVar11,CONCAT11(bVar13 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar2),uVar8));
        if (bVar5 != bVar13) {
          return uVar10;
        }
      }
      fVar2 = *(float *)(this + 0x94);
      (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar1 + (float10)fVar2);
      if ((float10)(float)((float10)fVar1 + (float10)fVar2) < (float10)*(float *)pSVar12) {
        pSVar12 = (undefined *)&(*(float *)(gen_frame + 0x8));
      }
      *(float *)(this + 0x9c) =
           ((float)GEN_TOF((((float10)*(float *)((int)(uintptr_t)pSVar12) / (float10)fVar3) * (float10)REFG(double, 0x1088108))));
      return uVar10;
    }
  }
  return uVar9;
}

/* ref: FUN_00bde3b0 */
uint F_00bde3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbde3b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  float * pfVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = REFG(float, 0x1087f04);
  fVar1 = *(float *)(in_ecx + 0x90);
  ((float *)(gen_frame + 0x10))[1] = *(float *)(REFG(int, 0x137104c) + 0x1198);
  fVar9 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198);
  pfVar7 = ((float *)GEN_TOP(CONCAT22((short)((uint)REFG(int, 0x137104c) >> 0x10),(ushort)(byte)REFG(int, 0x137104c))));
  ((float *)(gen_frame + 0x10))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x10))[2], REFG(float, 0x1087f04));
  fVar2 = ((float)GEN_TOF((fVar9 + (float10)*(float *)(in_ecx + 0x98))));
  ((float *)(gen_frame + 0x10))[1] = fVar2;
  ((float *)(gen_frame + 0x10))[1] = fVar1;
  *(float *)(in_ecx + 0x98) = fVar2;
  fVar5 = (float10)1;
  if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) && ((float10)fVar2 < (float10)fVar1)) {
    ((float *)(gen_frame + 0x10))[1] = fVar6;
    ((float *)(gen_frame + 0x10))[0] = 0.0;
    pfVar7 = ((float *)(gen_frame + 0x10)) + 2;
    fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * (float10)fVar2)));
    ((float *)(gen_frame + 0x10))[2] = fVar1;
    if (!((float10)fVar1 < fVar5)) {
      pfVar7 = ((float *)(gen_frame + 0x10)) + 1;
    }
    if (!(0.0 < *pfVar7)) {
      pfVar7 = ((float *)(gen_frame + 0x10));
    }
    ((float *)(gen_frame + 0x10))[2] = *pfVar7;
  }
  fVar1 = *(float *)(in_ecx + 0x94);
  bVar4 = GEN_ISNAN(fVar1);
  bVar8 = bVar4 || fVar1 == 0.0;
  pfVar7 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)pfVar7) >> 0x10),
                             CONCAT11(bVar8 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),(char)pfVar7))));
  ((float *)(gen_frame + 0x10))[0] = fVar1;
  if (bVar4 == bVar8) {
    fVar2 = *(float *)(in_ecx + 0x8c);
    ((float *)(gen_frame + 0x10))[1] = fVar2;
    fVar3 = *(float *)(in_ecx + 0x98);
    (*(float *)(gen_frame + 0xc)) = fVar3;
    fVar10 = (float10)fVar2;
    fVar11 = (float10)fVar3;
    if (fVar10 - (float10)fVar1 < fVar11) {
      (*(float *)(gen_frame + 0xc)) = fVar6;
      ((float *)(gen_frame + 0x10))[0] = 0.0;
      pfVar7 = ((float *)(gen_frame + 0x10)) + 2;
      fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * (fVar10 - fVar11))));
      ((float *)(gen_frame + 0x10))[2] = fVar1;
      if (!((float10)fVar1 < fVar5)) {
        pfVar7 = &(*(float *)(gen_frame + 0xc));
      }
      if (!(0.0 < *pfVar7)) {
        pfVar7 = ((float *)(gen_frame + 0x10));
      }
      ((float *)(gen_frame + 0x10))[2] = *pfVar7;
    }
  }
  ((float *)(gen_frame + 0x10))[1] = *(float *)(in_ecx + 0x8c);
  fVar10 = (float10)*(float *)(in_ecx + 0x8c);
  fVar1 = (float)(fVar9 / fVar10);
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar9 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)((float *)(gen_frame + 0x10))[2] + (float10)*(float *)(in_ecx + 0x88))));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x9c) * fVar9 + (float10)fVar1)));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  *(float *)(in_ecx + 0x88) = fVar1;
  if ((GEN_ISNAN((float10)fVar1) || GEN_ISNAN(fVar5)) || (float10)fVar1 <= fVar5) {
    if (fVar10 < (float10)*(float *)(in_ecx + 0x98)) {
      *(float *)(in_ecx + 0x88) = fVar6;
      *(undefined4 *)(in_ecx + 0x98) = 0;
      return (uint)pfVar7;
    }
  }
  else {
    *(float *)(in_ecx + 0x88) = fVar6;
    *(undefined4 *)(in_ecx + 0x98) = 0;
  }
  return (uint)pfVar7;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf28 */
uint F_00bde550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  byte bVar2;
  int * this_00;
  uint uVar3;
  undefined * this_01;
  undefined3 extraout_var = 0;
  int * piVar4;
  bool bVar5;
  float10 fVar6;
  
  this_00 = (int *)F_00bde110(this);
  piVar4 = this_00;
  if (((this_00 != (int *)0x0) && (*(char *)((int)this_00 + 0x11) == '\x06')) &&
     (this_00[0x29] != 0)) {
    uVar3 = F_005f08c0(this_00);
    (*(uint *)(gen_frame + 0x28)) = uVar3;
    piVar4 = (int *)0x0;
    if (uVar3 != 0) {
      this_01 = (undefined *)F_00bde180(this);
      bVar2 = F_005db4d0(this_01);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
      if (bVar2 == 0) {
        iVar1 = *(int *)(this + 0x24);
        (*(int *)(gen_frame + 0x24)) = iVar1;
        F_00bde3b0(this);
        bVar5 = *(char *)(iVar1 + 0x10) != '\0';
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = bVar5;
        (*(undefined4 *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x2c)), 1, 3),bVar5);
        F_005d8960((*(uint *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x10)),*(float *)(this + 0x88),(*(undefined4 *)(gen_frame + 0x2c)));
        ((code *)*(gen_code32 *)(*this_00 + 0xe8))(this_00,((undefined1 *)(gen_frame + 0x10)));
        if (*(int *)((*(int *)(gen_frame + 0x24)) + 0xc) == 1) {
          F_005d89f0((*(uint *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x0)),*(float *)(this + 0x88),(*(undefined4 *)(gen_frame + 0x2c)));
        }
        else {
          uVar3 = *(int *)((*(int *)(gen_frame + 0x24)) + 0xc) - 2;
          if (uVar3 != 0) {
            return uVar3;
          }
          fVar6 = F_005e11b0((*(uint *)(gen_frame + 0x28)),*(float *)(this + 0x88),(*(undefined4 *)(gen_frame + 0x2c)));
          F_005fe650(((undefined1 *)(gen_frame + 0x0)),(float)fVar6);
        }
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0xf0))(this_00,((undefined1 *)(gen_frame + 0x0)))));
      }
    }
  }
  return (uint)piVar4;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf0 */
uint F_00bde680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbde680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bde6e0 */
unsigned int F_00bde6e0(float gen_a0)
{
  GEN_ENTER(0xbde6e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf18 */
uint F_00bde700(unsigned int gen_a0)
{
  GEN_ENTER(0xbde700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x9c) != 0) {
    uVar2 = F_00406b30(*(int *)(this + 0x9c));
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)(this + 0x9c) = 0;
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf25 */
uint F_00bde730(unsigned int gen_a0)
{
  GEN_ENTER(0xbde730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,2);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf35 */
unsigned int F_00bde740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbde740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x94) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x7c))))(*(int * PTR32 *)(this + 0x94));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x58))))(*(int * PTR32 *)(this + 0x94),param_2,5);
    }
  }
  return 0;
}

/* ref: FUN_00bde780 */
unsigned int F_00bde780(unsigned int gen_a0)
{
  GEN_ENTER(0xbde780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x94);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 0x50))))(*(int * PTR32 *)((int)this + 0x94),100);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 0x78))))(*(int * PTR32 *)((int)this + 0x94),500);
    *(undefined4 *)((int)this + 0x94) = 0;
  }
  return 0;
}

/* ref: FUN_00bde810 */
uint F_00bde810(unsigned int gen_a0)
{
  GEN_ENTER(0xbde810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined2 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b4a4));
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00bde860 */
uint F_00bde860(unsigned int gen_a0)
{
  GEN_ENTER(0xbde860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x94);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b4a4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 0x50))))(*(int * PTR32 *)((int)this + 0x94),100);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x94) + 0x78))))(*(int * PTR32 *)((int)this + 0x94),500);
    *(undefined4 *)((int)this + 0x94) = 0;
  }
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00406b30(*(int *)((int)this + 0x9c));
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  uVar2 = F_00bd2e60(this);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf8 */
uint F_00bde8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbde8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x94);
  this[0x98] = (undefined1)0x0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x50))))(*(int * PTR32 *)(this + 0x94),100);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x78))))(*(int * PTR32 *)(this + 0x94),500);
    *(undefined4 *)(this + 0x94) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x9c) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x9c));
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)(this + 0x9c) = 0;
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf19 */
uint F_00bde940(unsigned int gen_a0)
{
  GEN_ENTER(0xbde940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  char * pcVar6;
  char * pcVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(this + 0x2c) == 0x24) {
    bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90));
    return CONCAT31(extraout_var_00,bVar2 == 0);
  }
  iVar3 = *(int *)(this + 0x2c) + -0x26;
  if (iVar3 != 0) {
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  if (*(int *)(this + 0x9c) == 0) {
    uVar4 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90),*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x24))) + *(int *)(this + 0x24)
                        );
    if (uVar4 == 0) {
      bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90));
      return CONCAT31(extraout_var,bVar2 == 0);
    }
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar5 != (int *)0x0) {
      uVar9 = 0;
      uVar8 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5)));
      pcVar6 = (char *)F_00460270(this_00,uVar4,uVar8,uVar9);
      if (pcVar6 == (char *)0x0) {
        return 0;
      }
      pcVar7 = pcVar6;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = F_00406bb0(pcVar7 + (1 - (int)(pcVar6 + 1)),0,0);
      *(uint *)(this + 0x9c) = uVar4;
      if (uVar4 != 0) {
        F_00c49908(uVar4,pcVar7 + (1 - (int)(pcVar6 + 1)),pcVar6);
      }
    }
  }
  bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90));
  if ((bVar2 == 0) && (*(int *)(this + 0x9c) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf7 */
uint F_00bdea40(unsigned int gen_a0)
{
  GEN_ENTER(0xbdea40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined4 extraout_EAX = 0;
  
  if (*(int *)(this + 0x94) == 0) {
LAB_00bdea75: ;
    if ((this[0x90] != (undefined1)0x0) && (this[0x99] == (undefined1)0x0)) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,7);
      return uVar1;
    }
    return CONCAT31((int3)((uint)in_EAX >> 8),this[0x88] == (undefined1)0x0);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x7c))))(*(int * PTR32 *)(this + 0x94));
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x14))))(*(int * PTR32 *)(this + 0x94));
    if ((char)uVar1 == '\0') {
      F_00bde780(this);
      in_EAX = extraout_EAX;
      goto LAB_00bdea75;
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00bdeab0 */
uint F_00bdeab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdeab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  undefined * puVar6;
  int iVar7;
  uint * this_01;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar3 = F_0049c160(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  if (uVar3 != 0x100) {
    uVar4 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90),param_1);
    uVar3 = 0;
    if (uVar4 != 0) {
      ((float *)(gen_frame + 0x14))[1] = 0.0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
      if (piVar5 == (int *)0x0) {
        F_005a2710(((float *)(gen_frame + 0x14)) + 1,6);
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = &REFG(undefined, 0x110b3e2);
      }
      else {
        uVar9 = 0;
        uVar8 = 0;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5)));
        puVar6 = (undefined *)F_00460270(this_00,uVar4,uVar8,uVar9);
        F_005a2710(((float *)(gen_frame + 0x14)) + 1,6);
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = puVar6;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      ((float *)(gen_frame + 0x14))[0] = 0.0;
      (*(float *)(gen_frame + 0x8)) = 0.0;
      (*(float *)(gen_frame + 0xc)) = 0.0;
      (*(float *)(gen_frame + 0x10)) = 0.0;
      if (REFG(int, 0x1370c0c) == 0) {
        uVar3 = F_00bd3f80(this);
        F_00be7fc0(uVar3 + 0x3c,(uint)((float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0xc)),(uint)&(*(float *)(gen_frame + 0x10)));
      }
      else {
        uVar3 = F_00bd3f80(this);
        F_00be7d90(uVar3 + 0x3c,((float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x8)),(uint)&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x10)));
      }
      if ((!GEN_ISNAN(((float *)(gen_frame + 0x14))[0]) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          !(((float *)(gen_frame + 0x14))[0] <= *(float *)&REFG(undefined, 0x1088114))) {
        dVar1 = (double)((float *)(gen_frame + 0x14))[0] * *(double *)&REFG(undefined, 0x1088118);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
        dVar2 = (double)(*(float *)(gen_frame + 0x8)) * *(double *)&REFG(undefined, 0x1088118);
        (*(int *)(gen_frame + 0x2c)) = (int)dVar1;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
        (*(int *)(gen_frame + 0x34)) = (int)dVar2;
        iVar7 = (int)(*(float *)(gen_frame + 0x10));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),3);
        (*(int *)(gen_frame + 0x3c)) = iVar7;
        iVar7 = (int)(*(float *)(gen_frame + 0xc));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),3);
        (*(int *)(gen_frame + 0x44)) = iVar7;
      }
      uVar3 = F_00bd3f80(this);
      F_00be8250((undefined *)(uVar3 + 0x3c),1,((float *)(gen_frame + 0x14)) + 1,6);
      this_01 = &(*(uint *)(gen_frame + 0x48));
      iVar7 = 5;
      do {
        this_01 = this_01 + -2;
        uVar3 = F_005a2670(this_01);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_00bdec70 */
uint F_00bdec70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdec70u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  uint * in_edx = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_00bdf000 */
uint F_00bdf000(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  if (3 < uVar1) {
    return 4;
  }
  if (uVar1 != 0) {
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bdf060 */
uint F_00bdf060(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf060u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  uVar3 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  ((uint *)(gen_frame + 0x0))[2] = uVar3;
  ((uint *)(gen_frame + 0x0))[1] = 4;
  ((uint *)(gen_frame + 0x0))[0] = 0;
  if (uVar3 < 4) {
    puVar4 = ((uint *)(gen_frame + 0x0)) + 2;
    if (uVar3 == 0) {
      puVar4 = ((uint *)(gen_frame + 0x0));
    }
  }
  else {
    puVar4 = ((uint *)(gen_frame + 0x0)) + 1;
  }
  uVar3 = *puVar4;
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
    uVar5 = uVar5 & 0xff;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1c) + uVar3 * 0xc + (*(int *)&gen_args[0]))));
  ((uint *)(gen_frame + 0x0))[2] = uVar5;
  ((uint *)(gen_frame + 0x0))[0] = 0;
  if (uVar5 == 0) {
    puVar4 = ((uint *)(gen_frame + 0x0));
  }
  else {
    puVar4 = (uint *)&(*(int *)&gen_args[0]);
  }
  if (iVar1 == 1) {
    return 0;
  }
  return *puVar4;
}

/* ref: FUN_00bdf120 */
uint F_00bdf120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdf120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined1 * puVar2;
  int * piVar3;
  undefined1 * puVar4;
  int iVar5;
  uint * puVar6;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  *param_1 = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = param_1;
  puVar4 = param_1;
  if (*(int *)((int)this + 0x2c) == 0x26) {
    iVar5 = *(int *)((int)this + 0x24);
    piVar7 = ((int *)GEN_TOP((*(int *)(iVar5 + 0x24) + iVar5)));
    uVar1 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
    ((uint *)(gen_frame + 0xc))[0] = uVar1;
    ((uint *)(gen_frame + 0xc))[1] = 4;
    ((uint *)(gen_frame + 0xc))[2] = 0;
    if (uVar1 < 4) {
      puVar6 = ((uint *)(gen_frame + 0xc));
      if (uVar1 == 0) {
        puVar6 = ((uint *)(gen_frame + 0xc)) + 2;
      }
    }
    else {
      puVar6 = ((uint *)(gen_frame + 0xc)) + 1;
    }
    (*(uint * PTR32 *)(gen_frame + 0x2c)) = puVar6;
    puVar2 = (undefined1 *)F_00bdf060(iVar5);
    puVar4 = puVar2;
    if ((*piVar7 == 0x54584554) && ((char)piVar7[1] == '_')) {
      piVar3 = piVar7;
      do {
        iVar5 = *piVar3;
        piVar3 = (int *)((int)piVar3 + 1);
      } while ((char)iVar5 != '\0');
      puVar4 = ((undefined1 *)GEN_TOP(((int)piVar3 - (int)((int)piVar7 + 1))));
      if ((((undefined1 *)0x1a < puVar4) && (*(char *)((int)piVar7 + 0xe) == '_')) &&
         ((char)piVar7[5] == '_')) {
        iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0xb));
        puVar4 = (undefined1 *)0x0;
        if (iVar5 != 0) {
          iVar5 = F_00c48637((int)(char)piVar7[3]);
          puVar4 = (undefined1 *)0x0;
          if (iVar5 != 0) {
            iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0xd));
            puVar4 = (undefined1 *)0x0;
            if (iVar5 != 0) {
              iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0xf));
              puVar4 = (undefined1 *)0x0;
              if (iVar5 != 0) {
                iVar5 = F_00c48637((int)(char)piVar7[4]);
                puVar4 = (undefined1 *)0x0;
                if (iVar5 != 0) {
                  iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x11));
                  puVar4 = (undefined1 *)0x0;
                  if (iVar5 != 0) {
                    iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x12));
                    puVar4 = (undefined1 *)0x0;
                    if (iVar5 != 0) {
                      iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x13));
                      puVar4 = (undefined1 *)0x0;
                      if (iVar5 != 0) {
                        iVar5 = F_00c486bb((int)*(char *)((int)piVar7 + 0x15));
                        puVar4 = (undefined1 *)0x0;
                        if (iVar5 != 0) {
                          iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x16));
                          puVar4 = (undefined1 *)0x0;
                          if (iVar5 != 0) {
                            iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x17));
                            puVar4 = (undefined1 *)0x0;
                            if (iVar5 != 0) {
                              iVar5 = F_00c48637((int)(char)piVar7[6]);
                              puVar4 = (undefined1 *)0x0;
                              if (iVar5 != 0) {
                                iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x19));
                                puVar4 = (undefined1 *)0x0;
                                if (iVar5 != 0) {
                                  iVar5 = F_00c48637((int)*(char *)((int)piVar7 + 0x1a));
                                  puVar4 = (undefined1 *)0x0;
                                  if ((iVar5 != 0) &&
                                     (puVar4 = (undefined1 *)
                                               F_00c4c844(piVar7,"TEXT_%6s%3d_%5d_%1x%2d%3d",
                                                          ((undefined1 *)(gen_frame + 0x30)),7,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x24)),
                                                          &(*(undefined4 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x1c))),
                                     puVar4 == &REFG(undefined, 0x6))) {
                                    puVar4 = (undefined1 *)
                                             F_00c472af((*(undefined1 * PTR32 *)(gen_frame + 0x18)),param_2,
                                                                                                                
                                                  "cut/ffxiv/sound/%s/%s%03d/vo_%s%03d_%1x%02d%03d_%c_%s.scd"
                                                  ,((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x20)),
                                                  (*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x1c)),
                                                  (-(uint)(puVar2 != (undefined1 *)0x0) & 0xfffffff9
                                                  ) + 0x6d,(&REFG(undefined * PTR32, 0x1345aa4))[*(*(uint * PTR32 *)(gen_frame + 0x2c))]);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)puVar4;
}

/* ref: FUN_00bdf390 */
uint F_00bdf390(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar5;
  if (*(int *)((int)this + 0x2c) == 0x26) {
    uVar2 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
    iVar3 = *(int *)((int)this + 0x24);
    uVar6 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
    uVar5 = uVar6 * 3;
    if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x1c) + uVar6 * 0xc + iVar3))) != 0) {
      F_00bdf120(this,((char *)(gen_frame + 0x8)),0x80);
      pcVar7 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0;
      if (pcVar7 != ((char *)(gen_frame + 0x8)) + 1) {
        piVar4 = *(int * PTR32 *)((int)this + 0x94);
        if (piVar4 == (int *)0x0) {
          uVar5 = F_004e9a80(uVar2,((char *)(gen_frame + 0x8)),(float)(float10)1,0,0,0);
          if (uVar5 == 0) goto LAB_00bdf459;
        }
        else {
          ((code *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4,500);
          uVar5 = F_004e9a80(uVar2,((char *)(gen_frame + 0x8)),(float)(float10)1,0,0,0);
        }
        *(uint *)((int)this + 0x94) = uVar5;
      }
    }
  }
LAB_00bdf459: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar5;
}

/* ref: FUN_00bdf470 */
uint F_00bdf470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdf470u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  
  uVar2 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  iVar5 = (*(int *)&gen_args[1]);
  ((int *)(gen_frame + 0x0))[2] = uVar2;
  ((int *)(gen_frame + 0x0))[1] = 4;
  ((int *)(gen_frame + 0x0))[0] = 0;
  if (uVar2 < 4) {
    piVar3 = ((int *)(gen_frame + 0x0)) + 2;
    if (uVar2 == 0) {
      piVar3 = ((int *)(gen_frame + 0x0));
    }
  }
  else {
    piVar3 = ((int *)(gen_frame + 0x0)) + 1;
  }
  iVar1 = *piVar3;
  uVar2 = F_00bdf060((*(int *)&gen_args[1]));
  uVar4 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
  if (*((int *)GEN_TOP((*(int *)(iVar5 + 0x1c) + uVar4 * 0xc + iVar5))) != 0) {
    iVar1 = *(int *)(iVar5 + 0x1c) + iVar1 * 0xc;
    if (uVar2 == 0) {
      iVar5 = *(int *)(iVar1 + 4 + iVar5);
    }
    else {
      iVar5 = *(int *)(iVar1 + 8 + iVar5);
    }
    iVar5 = (iVar5 * 0x1e) / 1000 + -0xf;
    (*(int *)&gen_args[1]) = iVar5;
    puVar6 = (uint *)&(*(int *)&gen_args[1]);
    if (iVar5 < 0x10) {
      puVar6 = &REFG(undefined4, 0x110b418);
    }
    return *puVar6;
  }
  return 0;
}

/* ref: FUN_00bdf540 */
float F_00bdf540(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf540u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  float fVar3;
  
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x94);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x94) + 0x50))))(*(int * PTR32 *)((int)param_1 + 0x94),100);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x94) + 0x78))))(*(int * PTR32 *)((int)param_1 + 0x94),500);
    *(undefined4 *)((int)param_1 + 0x94) = 0;
  }
  fVar3 = F_00bdef30(param_1);
  *(undefined1 *)((int)param_1 + 0x90) = 1;
  return fVar3;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf1 */
byte F_00bdf5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  int iVar2;
  int * piVar3;
  float10 fVar4;
  byte bVar5;
  uint uVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (this[8] != (undefined1)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
  bVar5 = F_00bd1fe0(this);
  if (bVar5 != 0) {
    bVar5 = F_00bd2590((undefined *)this);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return bVar5;
  }
  if ((*(int *)(this + 0x2c) == 0x26) &&
     (iVar2 = *(int *)(this + 0x24), this[0x98] == (undefined1)0x0)) {
    if (*(int *)(this + 0x94) == 0) {
      uVar6 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
      if (*((int *)GEN_TOP((*(int *)(iVar2 + 0x1c) + uVar6 * 0xc + iVar2))) != 0) {
        F_00bdf120(this,((char *)(gen_frame + 0x8)),0x80);
        pcVar7 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (pcVar7 != ((char *)(gen_frame + 0x8)) + 1) {
          fVar4 = (float10)0;
          uVar6 = F_004e96c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),((char *)(gen_frame + 0x8)),(float)(float10)1,0,
                               (float)fVar4,(float)fVar4,(float)fVar4,(float)(float10)1,0,0,0);
          if (uVar6 != 0) {
            *(uint *)(this + 0x94) = uVar6;
          }
        }
      }
    }
    piVar3 = *(int * PTR32 *)(this + 0x94);
    if (piVar3 != (int *)0x0) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
      if ((char)uVar6 != '\0') {
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return 0;
      }
      this[0x98] = (undefined1)0x1;
    }
  }
  bVar5 = F_00bd2590((undefined *)this);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return bVar5;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf33 */
uint F_00bdf6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdf6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  int iVar5;
  undefined1 MVar6;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    this[0x88] = (undefined1)0x0;
    *(undefined4 *)(this + 0x8c) = 0xffffffff;
    this[0x90] = (undefined1)0x0;
    this[0x99] = (undefined1)0x0;
  }
  if ((*(int *)(this + 0x2c) == 0x26) && (*(int *)(this + 0x9c) == 0)) {
    this[0x90] = (undefined1)0x1;
    return CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  }
  uVar3 = F_00bd3f80(this);
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = *(int *)(this + 0x2c) - 0x24;
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x24: ;
    uVar3 = F_00bdeab0(this,*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) + *(int *)(this + 0x24));
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x25: ;
    uVar3 = F_00bd3f80(this);
    uVar3 = F_00be8250((undefined *)(uVar3 + 0x3c),5,0,0);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x26: ;
    uVar4 = F_00bd3f80(this);
    iVar5 = *(int *)(this + 0x24);
    iVar1 = *(int *)(iVar5 + 0xc);
    if (iVar1 == 0) {
LAB_00bdf79b: ;
      F_00bdf390(this);
      this[0x88] = (undefined1)0x1;
      uVar3 = F_00bdf470(this,iVar5);
      *(uint *)(this + 0x8c) = uVar3;
      this[0x99] = (undefined1)0x0;
      uVar3 = F_00bd40a0(this);
      MVar6 = (undefined1)(uVar3 == 0);
      uVar3 = CONCAT31((int3)(uVar3 >> 8),MVar6);
      this[0x90] = MVar6;
      if ((!(bool)MVar6) && (*(int *)(this + 0x8c) == 0)) {
        this[0x90] = (undefined1)0x1;
      }
    }
    else {
      if (iVar1 == 9) {
        F_00bdeab0(this,*(int *)(iVar5 + 0x24) + iVar5);
        goto LAB_00bdf79b;
      }
      uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),(byte)this[0x7c] >> 4);
      (*(char *)(gen_frame + 0xb)) = '\0';
      if (((byte)this[0x7c] >> 4 & 1) == 0) {
        uVar3 = F_00bd3ff0(this);
        F_00be90c0((undefined *)(uVar4 + 0x3c),iVar5,*(undefined4 *)(this + 0x9c),uVar3);
        *(gen_code32 *)(uVar4 + 0x8c) = ((code *)REFP(0xbdf540));
        *(undefined * PTR32 *)(uVar4 + 0x90) = this;
        F_00bdf390(this);
        this[0x88] = (undefined1)0x1;
        (*(char *)(gen_frame + 0xb)) = '\x01';
        uVar3 = F_00bdf470(this,iVar5);
        *(uint *)(this + 0x8c) = uVar3;
        this[0x99] = (undefined1)(*(char *)(iVar5 + 0x15) != '\0');
      }
      if (*(char *)(iVar5 + 0x15) != '\0') {
        bVar2 = *(byte *)(uVar4 + 0x70) >> 1;
        uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
        if ((bVar2 & 1) == 0) {
          this[0x99] = (undefined1)0x0;
        }
        else {
          uVar3 = F_00bd30b0(this,1);
        }
      }
      if ((*(char *)(gen_frame + 0xb)) == '\0') break;
    }
    if (this[0x88] != (undefined1)0x0) {
      uVar3 = F_00bdec90(this);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    this[0x90] = (undefined1)0x1;
    break;
  case 0x27: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2a: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x37: ;
  case 0x38: ;
  case 0x39: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3e: ;
  case 0x3f: ;
  case 0x40: ;
  case 0x41: ;
  case 0x42: ;
  case 0x43: ;
  case 0x44: ;
  case 0x45: ;
  case 0x46: ;
  case 0x47: ;
  case 0x48: ;
  case 0x49: ;
  case 0x4a: ;
  case 0x4b: ;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
  case 0x50: ;
  case 0x51: ;
  case 0x52: ;
  case 0x53: ;
  case 0x54: ;
  case 0x55: ;
  case 0x56: ;
  case 0x57: ;
  case 0x58: ;
  case 0x59: ;
  case 0x5a: ;
  case 0x5b: ;
  case 0x5c: ;
  case 0x5d: ;
  case 0x5e: ;
  case 0x5f: ;
  case 0x60: ;
  case 0x61: ;
  case 0x62: ;
  case 99: ;
  case 100: ;
  case 0x65: ;
  case 0x66: ;
  case 0x68: ;
  case 0x69: ;
  case 0x6a: ;
  case 0x6b: ;
    break;
  case 0x34: ;
    uVar3 = F_00bd3f80(this);
    bVar2 = F_00bdfd90(uVar3 + 0x3c);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      uVar3 = F_00bd30b0(this,1);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    break;
  case 0x35: ;
    uVar3 = F_00bd3f80(this);
    if (*(int *)(uVar3 + 0x6c) == 1) {
      uVar3 = F_00bd3f80(this);
      bVar2 = F_00be8e90((undefined *)(uVar3 + 0x3c),1,0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return CONCAT31(extraout_var_00,bVar2);
    }
    uVar3 = F_00bd3f80(this);
    bVar2 = F_00be8e90((undefined *)(uVar3 + 0x3c),0,0);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return CONCAT31(extraout_var_01,bVar2);
  case 0x36: ;
    iVar5 = *(int *)(this + 0x24);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    iVar5 = *(int *)(iVar5 + 0xc);
    if ((iVar5 < 0) && (*(int *)(REFG(int, 0x1379cb0) + 0x14) != 0)) {
      iVar5 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379cb0) + 0x14) + 0x18)));
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
    (*(int *)(gen_frame + 0x4)) = iVar5;
    uVar3 = F_00bd3f80(this);
    F_00be8250((undefined *)(uVar3 + 0x3c),4,&(*(undefined4 *)(gen_frame + 0x0)),1);
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)));
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x67: ;
    uVar4 = F_00bd3f80(this);
    uVar3 = uVar4;
    if (((byte)this[0x7c] >> 4 & 1) == 0) {
      uVar3 = F_00be84a0((undefined *)(uVar4 + 0x3c),*(undefined4 *)(this + 0x24));
    }
    if ((*(byte *)(uVar4 + 0x70) >> 2 & 1) == 0) {
      uVar3 = F_00bd30b0(this,1);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    this[0x90] = (undefined1)0x1;
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x6c: ;
    if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != 1) {
      uVar3 = F_00bd3f80(this);
      uVar3 = F_00be8250((undefined *)(uVar3 + 0x3c),7,0,0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    uVar3 = F_00bd3f80(this);
    uVar3 = F_00be8250((undefined *)(uVar3 + 0x3c),8,0,0);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  default: ;
    goto switchD_00bdf763_default;
  }
switchD_00bdf763_default: ;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf34 */
uint F_00bdfae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdfae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 extraout_EAX = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  uVar2 = F_00bd3f80(this);
  this_00 = REFG(void * PTR32, 0x14c4ea0);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = *(int *)(this + 0x2c) - 0x24;
    switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
    case 0x24: ;
      uVar3 = F_00bd3f80(this);
      F_00be8e90((undefined *)(uVar3 + 0x3c),1,1);
      return CONCAT31(extraout_var,1);
    case 0x26: ;
      F_00bd3f80(this);
      uVar3 = *(uint *)(this + 0x24);
      if ((((param_1 == 2) || (param_1 == 3)) || (param_1 == 4)) ||
         (((param_1 == 7 && (*(char *)(uVar3 + 0x15) != '\0')) && (*(char *)(uVar3 + 0x16) == '\0'))
         )) {
        if (*(int *)(uVar3 + 0xc) == 0) {
          F_00bde780(this);
          F_00bdef30(this);
          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        }
        uVar3 = F_00bd3f80(this);
        F_00be8e90((undefined *)(uVar3 + 0x3c),0,0);
        return CONCAT31(extraout_var_00,1);
      }
      break;
    case 0x36: ;
      uVar3 = F_00bd3f80(this);
      bVar1 = F_00be8e90((undefined *)(uVar3 + 0x3c),4,0);
      return CONCAT31(extraout_var_01,bVar1);
    case 0x67: ;
      uVar3 = F_00bd3f80(this);
      if (this_00 != (undefined *)0x0) {
        F_00b5f440(this_00,0x1000000e,*(byte *)(uVar3 + 0x69) + 1);
      }
      uVar3 = F_00bd3f80(this);
      F_00be8e90((undefined *)(uVar3 + 0x3c),6,0);
      return CONCAT31(extraout_var_02,1);
    }
  }
  return uVar3 & 0xffffff00;
}

/* ref: FUN_00bdfce0 */
uint F_00bdfce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdfce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + 0x50) = param_2;
  *(undefined4 *)((int)this + 0x54) = param_1;
  return param_2;
}

/* ref: FUN_00bdfd00 */
uint F_00bdfd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdfd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x1c) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf0 */
uint F_00bdfd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdfd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bde860(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bdfd90 */
byte F_00bdfd90(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfd90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x10) != 0) && ((*(byte *)(in_ecx + 0x34) >> 1 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bdfdc0 */
uint F_00bdfdc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  return (uint)this;
}

/* ref: FUN_00bdfde0 */
uint F_00bdfde0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  if (*(undefined * PTR32 *)((int)this + 0x88) != (undefined *)0x0) {
    F_00ba1f90(*(undefined * PTR32 *)((int)this + 0x88));
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  *(undefined1 *)((int)this + 0x8c) = 0;
  uVar1 = F_00bd2e60(this);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf7 */
uint F_00bdfe20(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x88) != 0) {
    uVar1 = F_00ba1950();
    return uVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf24 */
unsigned int F_00bdfe40(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_00ba1f90(*(undefined * PTR32 *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  this[0x8c] = (undefined1)0x0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf25 */
unsigned int F_00bdfe70(unsigned int gen_a0)
{
  GEN_ENTER(0xbdfe70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (this[0x8c] != (undefined1)0x0) {
    uVar2 = F_00ba1930();
    if ((char)uVar2 == '\0') {
      bVar1 = F_00ba1940();
      if (bVar1 == 0) goto LAB_00bdfeb7;
    }
    F_00ba1d20(*(undefined * PTR32 *)(this + 0x88));
    this[0x8c] = (undefined1)0x0;
    *(undefined2 *)(this + 0x8e) = 0x101;
    return 0;
  }
LAB_00bdfeb7: ;
  this[0x8e] = (undefined1)0x1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf33 */
unsigned int F_00bdfec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdfec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  if (*(int *)((int)this_00 + 0x28) == 3) {
    F_00ba1a40(this_00,2,0xffffffff);
  }
  uVar2 = F_00ba1e40(*(undefined * PTR32 *)(this + 0x88));
  if ((char)uVar2 != '\0') {
    if (this[0x8c] == (undefined1)0x0) {
      F_00ba1c30(*(undefined * PTR32 *)(this + 0x88),0);
      this[0x8c] = (undefined1)0x1;
    }
    uVar2 = F_00ba1930();
    if ((char)uVar2 != '\0') {
      return 0;
    }
    bVar1 = F_00ba1940();
    if (bVar1 != 0) {
      return 0;
    }
  }
  F_00bd30b0(this,0);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf34 */
byte F_00bdff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbdff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)(this + 0x88) != 0) && (this[0x8c] != (undefined1)0x0)) {
    uVar2 = F_00ba1930();
    if ((char)uVar2 == '\0') {
      bVar1 = F_00ba1940();
      if (bVar1 == 0) goto LAB_00bdff8f;
    }
    F_00ba1d20(*(undefined * PTR32 *)(this + 0x88));
    this[0x8c] = (undefined1)0x0;
    *(undefined2 *)(this + 0x8e) = 0x101;
    return 1;
  }
LAB_00bdff8f: ;
  this[0x8e] = (undefined1)0x1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf35 */
byte F_00bdffa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdffa0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(byte *)(in_ecx + 0x8d) = (byte)param_3;
  return (byte)param_3;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf30 */
unsigned int F_00bdffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdffb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf19 */
uint F_00bdffc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbdffc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  char * pcVar2;
  uint uVar3;
  char * _Str;
  
  if (*(int *)(this + 0x88) == 0) {
    iVar1 = *(int *)(this + 0x24);
    in_EAX = 0;
    if (iVar1 != 0) {
      _Str = ((char *)GEN_TOP((*(int *)(iVar1 + 0xc) + iVar1)));
      pcVar2 = F_00c46a10(_Str,"manfst20006");
      if (pcVar2 == (char *)0x0) {
        pcVar2 = F_00c46a10(_Str,"00002");
        in_EAX = 0;
        if (pcVar2 == (char *)0x0) goto LAB_00be0010;
      }
      in_EAX = F_00ba1ef0(2,0xffffffff);
      *(uint *)(this + 0x88) = in_EAX;
    }
  }
LAB_00be0010: ;
  if (*(undefined * PTR32 *)(this + 0x88) == (undefined *)0x0) {
    return in_EAX & 0xffffff00;
  }
  uVar3 = F_00ba1e40(*(undefined * PTR32 *)(this + 0x88));
  if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x28))) == 3)) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf0 */
uint F_00be0050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_00ba1f90(*(undefined * PTR32 *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  this[0x8c] = (undefined1)0x0;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be00a0 */
unsigned int F_00be00a0(float gen_a0)
{
  GEN_ENTER(0xbe00a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf6 */
unsigned int F_00be00c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe00c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint in_ecx;
  undefined * this_00;
  
  if (this[0x88] == (undefined1)0x0) {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 != 0) goto LAB_00be00ee;
    }
    else {
LAB_00be00ee: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)(this + 0x78);
    if (this_00 == (undefined *)0x0) goto LAB_00be0117;
  }
  in_ecx = F_00bbaf90(this_00);
  if (in_ecx != 0) {
    F_00a9fbd0(in_ecx);
  }
LAB_00be0117: ;
  this[0x88] = (undefined1)0x0;
  return 0;
}

/* ref: FUN_00be0120 */
uint F_00be0120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be0161;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00be0148;
  }
  else {
LAB_00be0148: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00be0161: ;
  uVar3 = F_00bc5190(this_00,param_1,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))));
  return uVar3;
}

/* ref: FUN_00be0180 */
uint F_00be0180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be01be;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00be01a5;
  }
  else {
LAB_00be01a5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00be01be: ;
  uVar4 = F_00bbaf90(this_00);
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = F_00bd2420(this);
  }
  return uVar3;
}

/* ref: FUN_00be01e0 */
uint F_00be01e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe01e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  code * pcVar3;
  int * piVar4;
  float * pfVar5;
  uint uVar6;
  float * pfVar7;
  undefined * this;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  this = *(undefined * PTR32 *)(param_1 + 0x6c);
  if (this == (undefined *)0x0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar6 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
      *(uint *)(param_1 + 0x6c) = uVar6;
    }
    this = *(undefined * PTR32 *)(param_1 + 0x6c);
    if (this == (undefined *)0x0) {
      return uVar6;
    }
  }
  piVar4 = (int *)F_00beb6b0(this);
  uVar6 = 0;
  if (piVar4 != (int *)0x0) {
    fVar9 = (float10)param_2;
    iVar8 = *(int *)(param_1 + 0x24);
    pfVar7 = ((float *)GEN_TOP((*(int *)(iVar8 + 0xc) + iVar8)));
    pfVar5 = ((float *)GEN_TOP((iVar8 + *(int *)(iVar8 + 0x14))));
    fVar10 = (float10)(float)((float10)1 - fVar9);
    fVar1 = (float)(fVar9 * (float10)*pfVar5 + fVar10 * (float10)*pfVar7);
    fVar2 = pfVar5[1];
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = (float)((float10)pfVar7[1] * fVar10 + (float10)fVar2 * fVar9);
    (*(float *)(gen_frame + 0x18)) = fVar2;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    fVar2 = (float)((float10)pfVar7[2] * fVar10 + (float10)pfVar5[2] * fVar9);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x10)) = (float)(fVar10 * (float10)pfVar7[3] + (float10)pfVar5[3] * fVar9);
    (*(float *)(gen_frame + 0x8)) = fVar2;
    ((code *)*(gen_code32 *)(*piVar4 + 0x60))(piVar4,&(*(float *)(gen_frame + 0x0)));
    fVar9 = (float10)(*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)1 - fVar9);
    ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,(undefined4)gen_fl2bits((float)((float10)1 - fVar9)));
    uVar6 = F_00beb670(this);
    if (uVar6 != 0) {
      iVar8 = 3;
      piVar4 = (int *)(uVar6 + 0x2da0);
      do {
        iVar8 = iVar8 + -1;
        piVar4 = piVar4 + -0x1e8;
        if (piVar4 != (int *)0x0) {
          pcVar3 = *(gen_code32 *)(*piVar4 + 0x60);
          (*(float *)(gen_frame + 0x0)) = fVar1;
          (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x18));
          (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x14));
          (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
          (*pcVar3)(piVar4,&(*(float *)(gen_frame + 0x0)));
          uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10))));
        }
      } while (iVar8 != 0);
    }
  }
  return uVar6;
}

/* ref: FUN_00be0340 */
uint F_00be0340(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b774));
  *(undefined1 *)((int)this + 0x88) = 0;
  *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) & 0xffef;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf24 */
uint F_00be0370(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,3);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf33 */
uint F_00be0390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  
  pvVar5 = *(undefined * PTR32 *)(this + 0x78);
  if (pvVar5 == (undefined *)0x0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar2 = *(int *)(this + 0x6c);
      uVar3 = 0;
      if (iVar2 != 0) goto LAB_00be03b5;
    }
    else {
LAB_00be03b5: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      uVar3 = F_00b595f0(uVar1);
    }
    pvVar5 = *(undefined * PTR32 *)(this + 0x78);
    if (pvVar5 == (undefined *)0x0) {
      return uVar3;
    }
  }
  uVar3 = F_00bbaf90(pvVar5);
  if (uVar3 == 0) {
    return 0;
  }
  iVar2 = *(int *)(this + 0x2c);
  if (iVar2 != 0x22) {
    if (iVar2 == 0x38) {
      uVar3 = F_00be01e0(this,(float)(float10)0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    if (iVar2 == 0x6b) {
      uVar3 = F_00a9fbc0(uVar3);
      this[0x88] = (undefined1)0x1;
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    goto LAB_00be0469;
  }
  pvVar5 = *(undefined * PTR32 *)(this + 0x78);
  iVar2 = *(int *)(this + 0x24);
  if (pvVar5 == (undefined *)0x0) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00be0444;
    }
    else {
LAB_00be0444: ;
      uVar1 = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    pvVar5 = *(undefined * PTR32 *)(this + 0x78);
    uVar3 = 0;
    if (pvVar5 == (undefined *)0x0) goto LAB_00be0469;
  }
  uVar3 = F_00bc3c60(pvVar5,*(undefined4 *)(iVar2 + 0xc));
LAB_00be0469: ;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf34 */
byte F_00be0480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be04ce;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00be04b5;
  }
  else {
LAB_00be04b5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00be04ce: ;
  uVar3 = F_00bbaf90(this_00);
  if (uVar3 != 0) {
    iVar2 = *(int *)(this + 0x2c);
    if (iVar2 == 0x22) {
      iVar2 = *(int *)(this + 0x24);
      uVar3 = F_00a0b580(this);
      if (uVar3 != 0) {
        F_00bc3c90(uVar3,*(undefined4 *)(iVar2 + 0xc));
      }
    }
    else {
      if (iVar2 == 0x38) {
        F_00be01e0(this,(float)(float10)1);
        *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
        return 1;
      }
      if (iVar2 == 0x6b) {
        F_00a9fbd0(uVar3);
        this[0x88] = (undefined1)0x0;
        *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
        return 1;
      }
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf30 */
uint F_00be0550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe0550u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  float10 extraout_ST0;
  float fVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(byte *)(param_1 + 0x1f) >> 4);
  if ((((*(byte *)(param_1 + 0x1f) >> 4 & 1) != 0) && (param_1[0xb] == 0x38)) &&
     ((char)param_3 != '\0')) {
    fVar2 = F_00bd2390(param_1);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa4))(param_1);
    param_3 = (uint)gen_fl2bits((float)((float10)fVar2 / extraout_ST0));
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_3)))) {
      param_3 = REFG(float, 0x1087f04);
    }
    uVar1 = F_00be01e0(param_1,GEN_TOF(gen_bits2f(param_3)));
  }
  return uVar1;
}

/* ref: FUN_00be05d0 */
uint F_00be05d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe05d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0xc) + param_1 * 4;
}

/* ref: FUN_00be05f0 */
uint F_00be05f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe05f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x14) + param_1 * 4;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf0 */
uint F_00be0620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b774));
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be0660 */
unsigned int F_00be0660(float gen_a0)
{
  GEN_ENTER(0xbe0660u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00be0680 */
uint F_00be0680(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined, 0x110b914) + param_1 * 0xc);
}

/* ref: FUN_00be06a0 */
uint F_00be06a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe06a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b954));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf26 */
unsigned int F_00be06c0(void)
{
  GEN_ENTER(0xbe06c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf33 */
uint F_00be0d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0') {
    uVar1 = F_00be08c0(this);
    return uVar1;
  }
  uVar1 = F_00be06d0(this);
  return uVar1;
}

/* ref: FUN_00be0da0 */
unsigned int F_00be0da0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbe0da0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00be0dc0 */
uint F_00be0dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0dc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf0 */
uint F_00be0de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe0de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bd2e60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be0e10 */
unsigned int F_00be0e10(float gen_a0)
{
  GEN_ENTER(0xbe0e10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf13 */
byte F_00be0e30(unsigned int gen_a0)
{
  GEN_ENTER(0xbe0e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
  }
  if (*(undefined * PTR32 *)(iVar1 + 0x20) == (undefined *)0x0) {
    return 0;
  }
  uVar2 = F_00bccde0(*(undefined * PTR32 *)(iVar1 + 0x20),*(undefined4 *)(this + 0x24),0,0,0x1e);
  *(uint *)(this + 0xa4) = uVar2;
  return 1;
}

