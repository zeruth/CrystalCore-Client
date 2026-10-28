#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_007902c0 */
GEN_FRAME uint GEN_THISCALL F_007902c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7902c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  
  this_00 = (undefined *)F_00578f50((undefined *)((int)this + 0x24) GEN_EDX_FWD,param_1,param_2,param_3);
  if ((this_00 != (undefined *)0x0) && ((char)param_4 != '\0')) {
    F_0055a300(this_00 GEN_EDX_ARG,param_4);
  }
  return (uint)this_00;
}

/* ref: FUN_00790300 */
GEN_FRAME uint GEN_THISCALL F_00790300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x790300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00790370 */
GEN_FRAME uint GEN_THISCALL F_00790370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x790370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  cVar1 = *(char *)(param_3 + 6);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x1c)) = (uint)(cVar1 != '\0');
  bVar2 = *(byte *)((int)this + 0x13a);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar2;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00790420 */
GEN_FRAME uint GEN_THISCALL F_00790420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x790420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  cVar1 = *(char *)(param_3 + 6);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0x1c)) = (uint)(cVar1 != '\0');
  bVar2 = *(byte *)((int)this + 0x13a);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar2;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 3;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007904d0 */
GEN_FRAME uint GEN_THISCALL F_007904d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7904d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0x14;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00790540 */
GEN_FRAME uint GEN_THISCALL F_00790540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x790540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007905b0 */
GEN_FRAME uint GEN_THISCALL F_007905b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7905b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x15;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007905e0 */
GEN_FRAME unsigned int GEN_THISCALL F_007905e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7905e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x3b8)) {
    do {
      iVar1 = iVar1 + 1;
      pvVar2 = (undefined *)F_00578f50((undefined *)((int)this + 0x24) GEN_EDX_FWD,4,iVar1,0);
      if (pvVar2 != (undefined *)0x0) {
        F_0055a300(pvVar2 GEN_EDX_ARG,1);
      }
      pvVar2 = (undefined *)F_00559c20(pvVar2 GEN_EDX_ARG);
      if (pvVar2 != (undefined *)0x0) {
        puVar5 = &REFG(undefined4, 0x10c13ac);
        do {
          uVar3 = F_00561490(pvVar2 GEN_EDX_ARG,*puVar5);
          if (uVar3 != 0) {
            uVar4 = F_0055dcb0();
            F_00596b10((undefined *)(uVar4 + 0xe0) GEN_EDX_ARG,uVar3);
          }
          puVar5 = puVar5 + 2;
        } while ((int)puVar5 < 0x10c13c4);
      }
    } while (iVar1 < *(int *)((int)this + 0x3b8));
  }
  return 0;
}

/* ref: Client::UI2::AddonActionBarHorizontal::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007906b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7906b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ActionBarHorizontal",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionBarVertical::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007906d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7906d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ActionBarVertical",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionCross::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007906e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7906e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ActionCross",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionCross::vf42 */
GEN_FRAME uint GEN_THISCALL F_007906f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7906f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (this[0x3f8] != (undefined1)0x0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  uVar1 = F_00572ec0((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00790710 */
GEN_NOFRAME uint GEN_THISCALL F_00790710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_0055b850(in_ecx + 0x400 GEN_EDX_FWD,0x120000);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(in_ecx + 0x4dc) = 0;
  *(undefined4 *)(in_ecx + 0x4e0) = 0;
  *(undefined4 *)(in_ecx + 0x4e4) = 0;
  *(undefined4 *)(in_ecx + 0x4f4) = uVar1;
  *(undefined4 *)(in_ecx + 0x4f8) = uVar1;
  *(undefined4 *)(in_ecx + 0x400) = 0;
  *(undefined4 *)(in_ecx + 0x404) = 0;
  *(undefined4 *)(in_ecx + 0x408) = 0;
  *(undefined4 *)(in_ecx + 0x518) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00790780 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00790780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x3f8) != '\0') {
    *(undefined4 *)((int)this + 0x410) = 0;
    *(undefined4 *)((int)this + 0x414) = *(undefined4 *)((int)this + 0x514);
    *(undefined4 *)((int)this + 0x418) = 0;
    *(undefined4 *)((int)this + 0x420) = *(undefined4 *)((int)this + 0x510);
    *(undefined4 *)((int)this + 0x424) = *(undefined4 *)((int)this + 0x514);
    *(undefined4 *)((int)this + 0x428) = 0;
    *(undefined4 *)((int)this + 0x430) = *(undefined4 *)((int)this + 0x510);
    *(undefined4 *)((int)this + 0x434) = 0;
    *(undefined4 *)((int)this + 0x438) = 0;
    *(uint *)((int)this + 0x500) =
         (uint)(ushort)(*(short *)((int)this + 0x128) << 6) << 9 |
         *(uint *)((int)this + 0x500) & 0xfe0001ff;
    uVar1 = *(undefined4 *)((int)this + 0x518);
    *(undefined4 *)((int)this + 0x440) = uVar1;
    *(undefined4 *)((int)this + 0x444) = uVar1;
    *(undefined4 *)((int)this + 0x448) = uVar1;
    *(undefined4 *)((int)this + 0x44c) = uVar1;
    uVar2 = F_0055dcb0();
    F_00585cf0((undefined *)((int)this + 0x400) GEN_EDX_ARG,*(undefined4 *)(uVar2 + 4));
  }
  return;
}

/* ref: Client::UI2::AddonActionCross::vf62 */
GEN_FRAME unsigned int GEN_THISCALL F_00790840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x790840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 AVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 * puVar5;
  uint uVar6;
  undefined1 AVar7;
  int local_8;
  
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2d28))) == 0) {
    F_0055e2a0(this GEN_EDX_FWD,0x10,0);
    F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x18);
    this[0x10d] = (undefined1)0x1;
    (*pcVar2)(this,1,0);
  }
  else {
    uVar3 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
    if (((uVar3 == 5) || (uVar3 == 4)) && ((*(uint *)(this + 0x108) >> 4 & 1) == 0)) {
      this[0x10e] = (undefined1)0x0;
      F_0055e2a0(this GEN_EDX_ARG,0x10,1);
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x14);
      *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 0x2000;
      this[0x10d] = (undefined1)0x1;
      (*pcVar2)(this,1);
    }
  }
  uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8)));
  AVar1 = this[0x19d];
  uVar6 = 1;
  AVar7 = (undefined1)((uVar3 & 1 << ((byte)*(undefined4 *)(this + 0x180) & 0x1f)) != 0);
  this[0x19d] = AVar7;
  if (AVar7 != AVar1) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x104))(this GEN_EDX_ARG);
  }
  param_1 = 1;
  puVar5 = &REFG(undefined4, 0x10c14dc);
  local_8 = 8;
  do {
    uVar4 = F_0055e2f0(this GEN_EDX_ARG,*puVar5);
    this_00 = (undefined *)F_00561530(*(undefined * PTR32 *)(uVar4 + 0x8c) GEN_EDX_ARG,3);
    if ((uVar3 & (uVar6 << 10 | uVar6 >> 0x16)) == 0) {
      uVar4 = F_00435340(param_1);
    }
    else {
      uVar4 = F_004352e0(param_1);
    }
    F_00584110(this_00 GEN_EDX_ARG,uVar4);
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
    uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return 0;
}

/* ref: Client::UI2::AddonActionCross::vf65 */
GEN_NOFRAME uint GEN_THISCALL F_00790980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  
  if (this[0x19d] == (undefined1)0x0) {
    uVar1 = F_00435340(*(int *)(this + 0x180) - 9);
  }
  else {
    uVar1 = F_004352e0(*(int *)(this + 0x180) - 9);
  }
  F_00584110(*(undefined * PTR32 *)(this + 1000) GEN_EDX_ARG,uVar1);
  uVar1 = F_0055dcb0();
  this_00 = *(undefined * PTR32 *)(uVar1 + 0x30);
  if (this[0x520] != (undefined1)0x0) {
    uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x3f4,0,0);
    this_00 = (undefined *)F_00584110(*(undefined * PTR32 *)(this + 1000) GEN_EDX_ARG,uVar1);
  }
  return (uint)this_00;
}

/* ref: Client::UI2::AddonActionCross::vf64 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007909f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7909f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x19f) = 1;
  return;
}

/* ref: Client::UI2::AddonActionCross::vf40 */
GEN_FRAME uint GEN_THISCALL F_00790a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x790a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonActionCross::vf2 */
GEN_FRAME uint GEN_THISCALL F_00790a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x790a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_0078f270((undefined *)this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  if ((short)param_1 == 0x17) {
    uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
    if (param_2 == 0x24) {
      this[0x19c] = (undefined1)(this[0x19c] == (undefined1)0x0);
      uVar1 = F_0078f7d0(this GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonActionCross::vf69 */
GEN_FRAME uint GEN_THISCALL F_00790a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x790a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  AVar1 = this[0x520];
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 4;
  (*(undefined4 *)(gen_frame + 0x20)) = 4;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  if (AVar1 == (undefined1)0x0) {
    (*(undefined4 *)(gen_frame + 0x24)) = 0x14;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x18,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    puVar3 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 2;
    do {
      puVar3 = puVar3 - 2;
      uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x24)) = 0x16;
  uVar2 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x18,3,&(*(undefined4 *)(gen_frame + 0x10)));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  puVar3 = &(*(uint *)(gen_frame + 0x28));
  iVar4 = 2;
  do {
    puVar3 = puVar3 - 2;
    uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00790b50 */
GEN_FRAME uint GEN_THISCALL F_00790b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = 0;
  if (*(char *)((int)this + 0x520) == '\0') {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    bVar1 = *(byte *)((int)this + 0x13a);
    (*(undefined4 *)(gen_frame + 0xc)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    uVar2 = *(undefined4 *)((int)this + 0x180);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 4;
    do {
      this_00 = this_00 - 2;
      uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI2::AddonActionCross::vf70 */
GEN_FRAME uint GEN_THISCALL F_00790c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x790c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if ((this[0x520] == (undefined1)0x0) && (this[0x3f8] == (undefined1)0x0)) {
    uVar1 = F_0078f650((undefined *)this GEN_EDX_FWD,param_1);
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = 5;
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x17,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarCombo::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00790c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ActionBarCombo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonActionBarCombo::vf44 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00790ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x790ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::UI2::AddonActionBarCombo::vf40 */
GEN_FRAME uint GEN_THISCALL F_00790cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x790cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonActionBarCombo::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00790cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x790cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: FUN_00790cd0 */
GEN_NOFRAME uint GEN_THISCALL F_00790cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xe;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c719c));
  F_0055e2a0(this GEN_EDX_ARG,0x4000002,1);
  *(undefined1 *)((int)this + 0x10f) = 0xff;
  return (uint)this;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00790d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FocusTargetInfo",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf40 */
GEN_FRAME uint GEN_THISCALL F_00790d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x790d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return param_1;
}

/* ref: Client::UI2::AddonFocusTargetInfo::vf2 */
GEN_FRAME uint GEN_THISCALL F_00790d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x790d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar4;
  
  this_00 = (gen_frame + 0x2c);
  this_01 = (gen_frame + 0x2c);
  uVar2 = (param_1 & 0xffff) - 3;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    cVar1 = *(char *)(param_4 + 6);
    uVar3 = 0;
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else if (cVar1 == '\x02') {
      uVar3 = 2;
    }
    (*(undefined4 *)(gen_frame + 0x28)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x1c)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 10;
    (*(undefined4 *)(gen_frame + 0x24)) = 3;
    F_005a9110(this GEN_EDX_FWD,2,&(*(undefined4 *)(gen_frame + 0x1c)));
    iVar4 = 1;
    do {
      this_00 = this_00 - 8;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    return uVar2;
  case 1: ;
  case 2: ;
  case 5: ;
    goto switchD_00790d68_caseD_4;
  case 3: ;
    (*(undefined4 *)(gen_frame + 0x24)) = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 0x10;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x24)));
    F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    return uVar2;
  case 4: ;
    (*(undefined4 *)(gen_frame + 0x24)) = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x24)));
    F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    uVar2 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    return uVar2;
  case 6: ;
    (*(undefined4 *)(gen_frame + 0x1c)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 0x10;
    (*(undefined4 *)(gen_frame + 0x24)) = 3;
    (*(undefined4 *)(gen_frame + 0x28)) = 1;
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 4))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x2f,2,&(*(undefined4 *)(gen_frame + 0x1c)));
    F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar4 = 1;
    do {
      this_01 = this_01 - 8;
      uVar2 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
switchD_00790d68_caseD_4: ;
    return uVar2;
  default: ;
    return uVar2;
  }
}

/* ref: FUN_00790ee0 */
GEN_NOFRAME uint GEN_THISCALL F_00790ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c729c));
  iVar3 = 0x1d;
  pvVar2 = (undefined *)((int)this + 0x1534);
  do {
    F_0042c880((undefined *)((int)pvVar2 - 0x54) GEN_EDX_FWD);
    F_0042c880((undefined *)((int)pvVar2 - 0xa8) GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
    pvVar2 = (undefined *)((int)pvVar2 - 0xa8);
  } while (-1 < iVar3);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00790f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x1534) = 0xffffffff;
  *(undefined4 *)(this + 0x1538) = 0;
  pvVar1 = F_00c48350(this + 0x184,0,0x13b0);
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00790f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x790f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"MainCrossNotification",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf46 */
GEN_FRAME byte GEN_THISCALL F_00790f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x790f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  byte * pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * this_00;
  undefined * this_01;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 4);
    }
    *(int *)(this + 0x1538) = iVar2;
    if (iVar2 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD);
      return 0;
    }
    if (0x1e < iVar2) {
      *(undefined4 *)(this + 0x1538) = 0x1e;
    }
    iVar2 = 0;
    if (0 < *(int *)(this + 0x1538)) {
      this_01 = this + 0x1d8;
      pbVar1 = param_2;
      do {
        if ((pbVar1[8] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pbVar1 + 0xc);
        }
        F_0042e430(this_01 - 0x54 GEN_EDX_ARG,uVar3);
        if ((param_2[(*(int *)(this + 0x1538) + iVar2) * 8 + 8] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *((undefined4 *)GEN_TOP((param_2 + (*(int *)(this + 0x1538) + iVar2) * 8 + 0xc)));
        }
        F_0042e430(this_01 GEN_EDX_ARG,uVar3);
        iVar2 = iVar2 + 1;
        this_01 = this_01 + 0xa8;
        pbVar1 = pbVar1 + 8;
      } while (iVar2 < *(int *)(this + 0x1538));
    }
    F_0059ead0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x1538),0,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
    uVar3 = 0;
    uVar4 = F_0055e2f0(this GEN_EDX_ARG,2);
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00 GEN_EDX_ARG,uVar4,this,uVar3);
  }
  return 1;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf47 */
GEN_FRAME unsigned int GEN_THISCALL F_00791080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x791080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (*(int *)(this + 0x1538) != 0) {
    F_0042e430(this + 0x1d8 GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_2 + 8) + 0x20))));
    F_0059ead0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x1538),0,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_007910d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7910d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  if ((short)param_1 == 0x23) {
    *(undefined4 *)(this + 0x1534) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0xc0)));
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    uVar1 = *(undefined4 *)(this + 0x1534);
    (*(undefined4 *)(gen_frame + 0x10)) = 7;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return;
}

/* ref: Client::UI2::AddonMainCrossNotification::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_00791150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x791150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,0,0);
  return uVar1;
}

/* ref: FUN_00791160 */
GEN_FRAME uint GEN_THISCALL F_00791160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x791160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_0042a990((int)this + param_1 * 0xa8 + 0x184 GEN_EDX_FWD);
  pvVar2 = (undefined *)F_00559ba0(*param_2 GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,uVar1);
  uVar1 = F_0042a990((int)this + param_1 * 0xa8 + 0x1d8 GEN_EDX_ARG);
  pvVar2 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
  uVar1 = F_00584110(pvVar2 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_007911b0 */
GEN_NOFRAME uint GEN_THISCALL F_007911b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7911b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_005903f0(this GEN_EDX_FWD);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  *(undefined2 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x186) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf | 0x80;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c739c));
  *(undefined4 *)((int)this + 0x240) = 0x3c;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x77 ^ bVar1 | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc0;
  F_0055e2a0(this GEN_EDX_ARG,0x14000002,1);
  return (uint)this;
}

/* ref: Client::UI2::AddonLimitBreak::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00791270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x791270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"LimitBreak",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonLimitBreak::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00791280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x791280u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  if (((short)param_2 == 0x41) && (*(char *)(param_5 + 2) == '\x01')) {
    *(undefined1 *)(in_ecx + 0x186) = 0;
  }
  return;
}

/* ref: FUN_007912a0 */
GEN_FRAME uint GEN_THISCALL F_007912a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7912a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00559cf0(*(undefined4 *)((int)this + 0x18c) GEN_EDX_FWD);
  if ((ushort)param_2 == 0) {
    if ((short)uVar1 == 0x11) {
      F_0059d640(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,0x65);
      uVar1 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x47);
      F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar1 = 0;
      *(undefined4 *)((int)this + 0x244) = 0;
    }
    *(undefined2 *)((int)this + 0x188) = 0;
    return uVar1;
  }
  if ((short)uVar1 != 0x11) {
    F_0059d670(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,0x11);
  }
  uVar1 = (uint)*(ushort *)((int)this + 0x188);
  if ((ushort)param_2 != *(ushort *)((int)this + 0x188)) {
    iVar3 = 0;
    uVar2 = 0;
    while (((int)*(short *)((int)&REFG(undefined2, 0x10c15b8) + uVar2) != uVar1 ||
           ((int)*(short *)((int)&REFG(undefined2, 0x10c15ba) + uVar2) != (uint)(ushort)param_2))) {
      uVar2 = uVar2 + 0xc;
      iVar3 = iVar3 + 1;
      if (0x6b < uVar2) {
        *(ushort *)((int)this + 0x188) = (ushort)param_2;
        *(undefined2 *)((int)this + 0x244) = (undefined2)param_1;
        return uVar2;
      }
    }
    uVar1 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))
              (*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)(&REFG(undefined, 0x10c15c0) + iVar3 * 0xc));
    F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar1 = F_0059d640(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,*(undefined4 *)(&REFG(undefined, 0x10c15bc) + iVar3 * 0xc));
  }
  *(ushort *)((int)this + 0x188) = (ushort)param_2;
  *(undefined2 *)((int)this + 0x244) = (undefined2)param_1;
  return uVar1;
}

/* ref: Client::UI2::AddonMainCross::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007913d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7913d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x498) = uVar1;
  uVar2 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  return uVar2;
}

/* ref: Client::UI2::AddonMainCross::vf41 */
GEN_FRAME byte GEN_THISCALL F_00791410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x791410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 4;
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 5;
  (*(undefined4 *)(gen_frame + 0x8)) = 6;
  F_0055d870(this + 0x24 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  bVar1 = F_00572e60(this GEN_EDX_ARG,"MainCross",1,6);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: Client::UI2::AddonMainCross::vf47 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00791470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x791470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::UI2::AddonMainCross::vf25 */
GEN_NOFRAME unsigned int F_00791480(void)
{
  GEN_ENTER(0x791480u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::UI2::AddonMainCross::vf53 */
GEN_FRAME unsigned int GEN_THISCALL F_00791490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x791490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((char)param_1 == '\0') && (this[0x4a0] != (undefined1)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_FWD,0);
  }
  return;
}

/* ref: Client::UI2::AddonMainCross::vf62 */
GEN_NOFRAME uint GEN_THISCALL F_007914c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7914c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055e2a0(this GEN_EDX_FWD,2,1);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCross::vf63 */
GEN_NOFRAME uint GEN_THISCALL F_007914d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7914d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055e2a0(this GEN_EDX_FWD,2,0);
  F_0055e2a0(this GEN_EDX_ARG,0x2000000,1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,0,0);
  return uVar1;
}

/* ref: FUN_00791500 */
GEN_FRAME byte F_00791500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x791500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) < *(int *)(param_2 + 4);
}

/* ref: FUN_00791520 */
GEN_FRAME uint GEN_THISCALL F_00791520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0x791520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(float *)(gen_frame + 0x10)) = (float)param_3;
  (*(undefined4 *)(gen_frame + 0x14)) = 5;
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_00595110(param_6 GEN_EDX_FWD,param_4,param_5,&(*(undefined4 *)(gen_frame + 0xc)),2,param_9);
  F_0056c650(param_6 GEN_EDX_ARG,param_7,param_8,param_1,0,0);
  uVar1 = F_0058d530(param_6 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007915a0 */
GEN_FRAME uint GEN_STDCALL F_007915a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7915a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined2 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  
  uVar2 = F_0055dcb0();
  if ((char)param_1 != '\0') {
    uVar1 = F_005602f0((undefined *)(uVar2 + 0x20c) GEN_EDX_ARG,3,(int)(short)param_2,(int)(short)param_3);
    return CONCAT22(extraout_var,uVar1);
  }
  uVar1 = F_005602f0((undefined *)(uVar2 + 0x20c) GEN_EDX_ARG,0,0,0);
  return CONCAT22(extraout_var_00,uVar1);
}

/* ref: FUN_007915e0 */
GEN_FRAME unsigned int GEN_THISCALL F_007915e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7915e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar1 = F_0055dcb0();
    F_005803e0(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,0x10000000,0x20000,4,param_1);
  }
  return;
}

/* ref: Client::UI2::AddonMainCross::vf65 */
GEN_NOFRAME uint GEN_THISCALL F_00791610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x791610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 == 3) || (uVar1 == 2)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,0,0);
  }
  return uVar1;
}

/* ref: FUN_00791640 */
GEN_FRAME unsigned int GEN_THISCALL F_00791640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x791640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float fVar1;
  float10 fVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    uVar5 = F_0055dcb0();
    if ((*((byte *)GEN_TOP((*(int *)(uVar5 + 0x14) + 0x1b0))) & 0x80) == 0) {
      uVar5 = F_0055e2f0(param_1 GEN_EDX_ARG,1);
      uVar3 = F_0055a020(uVar5 GEN_EDX_ARG);
      uVar5 = F_0055e2f0(param_1 GEN_EDX_ARG,4);
      uVar4 = F_0055a020(uVar5 GEN_EDX_ARG);
      *(uint *)param_2 = (uint)(uVar3 >> 1) + (uint)uVar4 * -3;
    }
    else {
      uVar5 = F_0055e2f0(param_1 GEN_EDX_ARG,4);
      uVar3 = F_0055a020(uVar5 GEN_EDX_ARG);
      fVar1 = *(float *)((int)param_1 + 0x498);
      fVar2 = (float10)REFG(double, 0x1088108);
      uVar5 = F_0055e2f0(param_1 GEN_EDX_ARG,1);
      uVar4 = F_0055a020(uVar5 GEN_EDX_ARG);
      *(uint *)param_2 =
           (uint)(uVar4 >> 1) - (int)(((float10)((uint)uVar3 * 6) * (float10)fVar1) * fVar2);
    }
  }
  if (param_3 != (int *)0x0) {
    uVar5 = F_0055e2f0(param_1 GEN_EDX_ARG,8);
    uVar3 = F_0055a030(uVar5 GEN_EDX_ARG);
    *param_3 = (int)(((float10)uVar3 * (float10)REFG(double, 0x1088108)) *
                    (float10)*(float *)((int)param_1 + 0x498));
  }
  return;
}

/* ref: FUN_00791730 */
GEN_NOFRAME uint GEN_THISCALL F_00791730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x791730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 4;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c749c));
  *(undefined1 *)((int)this + 0x180) = 0;
  F_0055e2a0(this GEN_EDX_ARG,0x8000000,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0xa08;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonHudLayout::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007917a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7917a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"HudLayoutBg",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonHudLayout::vf38 */
GEN_NOFRAME uint GEN_THISCALL F_007917b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7917b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (this[0x180] == (undefined1)0x0) {
    uVar2 = F_0055dcb0();
    uVar2 = F_0057f860(*(undefined * PTR32 *)(uVar2 + 0x14) GEN_EDX_ARG,"_HudLayoutWindow");
    uVar3 = F_0055dcb0();
    uVar3 = F_0057f860(*(undefined * PTR32 *)(uVar3 + 0x14) GEN_EDX_ARG,"_HudLayoutScreen");
    if ((uVar2 == 0) || (uVar3 == 0)) {
      this[0x180] = (undefined1)0x1;
    }
    if (this[0x180] == (undefined1)0x0) {
      return uVar3;
    }
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 100);
  this[0x180] = (undefined1)0x0;
  uVar2 = (*pcVar1)(this);
  return uVar2;
}

/* ref: Client::UI2::AddonHudLayout::vf25 */
GEN_FRAME uint GEN_THISCALL F_00791820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x791820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 6;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayout::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00791850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x791850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0057f860(*(undefined * PTR32 *)(uVar2 + 0x14) GEN_EDX_ARG,"_HudLayoutWindow");
  uVar3 = F_0055dcb0();
  uVar3 = F_0057f860(*(undefined * PTR32 *)(uVar3 + 0x14) GEN_EDX_ARG,"_HudLayoutScreen");
  if ((uVar2 != 0) && (uVar3 != 0)) {
    *(uint *)(uVar2 + 0x180) = uVar3;
    *(uint *)(uVar3 + 0x180) = uVar2;
  }
  uVar2 = F_0055dcb0();
  uVar1 = *(undefined4 *)(uVar2 + 0x238);
  uVar2 = F_0055dcb0();
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd8))(this GEN_EDX_ARG,*(undefined4 *)(uVar2 + 0x234),uVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonHudLayout::vf46 */
GEN_FRAME byte GEN_THISCALL F_007918c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7918c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = F_0055dcb0();
  piVar2 = (int *)F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,"_HudLayoutWindow");
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xb8))(piVar2 GEN_EDX_ARG,param_1,param_2);
  }
  uVar1 = F_0055dcb0();
  piVar3 = (int *)F_0057f860(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,"_HudLayoutScreen");
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xb8))(piVar3 GEN_EDX_ARG,param_1,param_2);
  }
  if ((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) {
    return 1;
  }
  this[0x180] = (undefined1)0x1;
  return 1;
}

/* ref: Client::UI2::AddonHudLayout::vf54 */
GEN_FRAME uint GEN_THISCALL F_00791950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x791950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  ushort uVar2;
  uint in_ecx;
  uint uVar3;
  float fVar4;
  
  in_ecx = F_0055e2f0(param_1 GEN_EDX_FWD,2);
  uVar3 = 0;
  if (in_ecx != 0) {
    fVar4 = (float)(int)param_3;
    if ((int)param_3 < 0) {
      fVar4 = fVar4 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0055a030(in_ecx GEN_EDX_ARG);
    fVar4 = (float)((float10)fVar4 / (float10)uVar2);
    fVar1 = (float)param_2;
    if (param_2 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    uVar2 = F_0055a020(in_ecx GEN_EDX_ARG);
    uVar3 = F_00568210(in_ecx GEN_EDX_ARG,(float)((float10)fVar1 / (float10)uVar2),fVar4);
  }
  return uVar3;
}

/* ref: FUN_00791a10 */
GEN_FRAME uint GEN_THISCALL F_00791a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x791a10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  
  ((uint *)(gen_frame + 0x8))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  cVar1 = *(char *)(in_ecx + 0x17);
  ((uint *)(gen_frame + 0x8))[0] = 0xff888888;
  ((uint *)(gen_frame + 0x8))[1] = 0xffeeeeee;
  ((uint *)(gen_frame + 0x8))[2] = 0xff996666;
  ((uint *)(gen_frame + 0x8))[3] = 0xffeeaaaa;
  uVar2 = ((uint *)(gen_frame + 0x8))[(int)((-(uint)(cVar1 != '\0') & 2) + (uint)((char)param_2 != '\0'))];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_FWD);
  return uVar2;
}

/* ref: FUN_00791a70 */
GEN_FRAME uint GEN_THISCALL F_00791a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x791a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined * this_00;
  uint uVar2;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *(bool *)((int)this + 0x17) = (char)param_2 == '\0';
  *(undefined1 *)((int)this + 0x15) = 1;
  if (param_1 != 0) {
    this_00 = (undefined *)F_00559c20(param_1 GEN_EDX_FWD);
    uVar2 = F_00561530(this_00 GEN_EDX_ARG,4);
    if (uVar2 != 0) {
      cVar1 = *(char *)((int)this + 0x17);
      ((uint *)(gen_frame + 0xc))[0] = 0xffeeeeee;
      ((uint *)(gen_frame + 0xc))[1] = 0xff996666;
      ((uint *)(gen_frame + 0xc))[2] = 0xffeeaaaa;
      F_0055aa30(uVar2 GEN_EDX_ARG,((uint *)(gen_frame + 0xc))[(int)(-(uint)(cVar1 != '\0') & 2)]);
    }
  }
  uVar2 = *(uint *)this;
  if (uVar2 != 0) {
    if (*(char *)((int)this + 0x17) != '\0') {
      *(ushort *)(uVar2 + 0x126) = *(ushort *)(uVar2 + 0x126) | 1;
      F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar2;
    }
    *(ushort *)(uVar2 + 0x126) = *(ushort *)(uVar2 + 0x126) & 0xfffe;
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00791b20 */
GEN_FRAME unsigned int GEN_THISCALL F_00791b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x791b20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 != 0) && ((*(uint *)&gen_a2) != 0)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(uint *)&gen_a2) + 0x38))((*(uint *)&gen_a2) GEN_EDX_FWD);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(uint *)&gen_a2) + 0x3c))((*(uint *)&gen_a2) GEN_EDX_ARG);
    *(undefined1 *)(param_1 + 0x15) = 1;
    if ((float10)param_4 + (float10)(int)(short)uVar2 <= (float10)param_5) {
      sVar1 = (short)(int)(float)(int)(short)uVar2;
    }
    else {
      sVar1 = (short)(int)((float10)param_5 - (float10)param_4);
    }
    F_00559e70(param_2 GEN_EDX_ARG,(float)(int)sVar1);
    if ((float10)param_6 + (float10)(int)(short)uVar3 <= (float10)param_7) {
      F_00559f00(param_2 GEN_EDX_ARG,(float)(int)(short)(int)(float)(int)(short)uVar3);
      return;
    }
    F_00559f00(param_2 GEN_EDX_ARG,(float)(int)(short)(int)((float10)param_7 - (float10)param_6));
  }
  return;
}

/* ref: FUN_00791c20 */
GEN_FRAME unsigned int GEN_THISCALL F_00791c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x791c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x38))(param_1 GEN_EDX_FWD);
    *(float *)((int)this + 4) = (float)(int)(short)uVar2;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x3c))(param_1 GEN_EDX_ARG);
    *(float *)((int)this + 8) = (float)(int)(short)uVar2;
    fVar3 = F_0055dfa0(param_1 GEN_EDX_ARG,1);
    *(float *)((int)this + 0xc) = (float)fVar3;
    bVar1 = *(byte *)((int)param_1 + 0x126) & 1;
    *(byte *)((int)this + 0x16) = bVar1;
    *(byte *)((int)this + 0x17) = bVar1;
  }
  *(undefined1 *)((int)this + 0x15) = 0;
  return;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf38 */
GEN_FRAME uint GEN_THISCALL F_00791c90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x791c90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)(param_1 + 0x1a4) = param_2;
  uVar1 = F_005a2370(param_1 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf41 */
GEN_FRAME byte GEN_THISCALL F_00791cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x791cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x1f;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_0055d870(this + 0x24 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
  bVar1 = F_00572e60(this GEN_EDX_ARG,"HudLayoutRect",0,6);
  return bVar1;
}

/* ref: FUN_00791d00 */
GEN_FRAME float * GEN_THISCALL F_00791d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x791d00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  float * pfVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  iVar10 = 0;
  fVar11 = (float10)(float)((float10)param_6 * (float10)*(double *)&REFG(undefined, 0x10c7598));
  pfVar8 = param_2;
  if (0 < *(int *)(param_1 + 0x1b8)) {
    do {
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x194) + iVar10 * 4)));
      pfVar8 = ((float *)GEN_TOP((*(int *)(param_1 + 0x194) + iVar10 * 4)));
      if ((*(char *)((int)puVar5 + 0x17) == '\0') && (puVar5 != *(undefined4 * PTR32 *)(param_1 + 0x1a0)))
      {
        piVar6 = (int *)*puVar5;
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6 GEN_EDX_FWD);
        iVar9 = (int)(short)uVar7;
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x50))(piVar6 GEN_EDX_ARG,0);
        fVar3 = ((float)GEN_TOF(((float10)(uVar7 & 0xffff) + (float10)iVar9)));
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x3c))(piVar6 GEN_EDX_ARG);
        pfVar8 = ((float *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,0)));
        fVar12 = (float10)(int)(short)uVar7;
        fVar4 = ((float)GEN_TOF((fVar12 + (float10)((uint)pfVar8 & 0xffff))));
        if ((!((float10)((float)GEN_TOF((((float10)fVar2 + (float10)param_5) + fVar11))) < fVar12)) &&
           (((fVar13 = (float10)fVar4, !(fVar13 < (float10)(float)((float10)fVar2 - fVar11)) &&
             (fVar14 = (float10)iVar9,
             !((float10)((float)GEN_TOF((fVar11 + ((float10)fVar1 + (float10)param_4)))) < fVar14))) &&
            (fVar15 = (float10)fVar3, !(fVar15 < (float10)(float)((float10)fVar1 - fVar11)))))) {
          fVar16 = (float10)param_6;
          if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - fVar14)))) < fVar16) {
            *param_2 = (float)iVar9;
          }
          else if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - fVar15)))) < fVar16) {
            *param_2 = fVar3;
            pfVar8 = param_2;
          }
          else {
            fVar17 = (float10)(float)((float10)fVar1 + (float10)param_4);
            if ((float10)((float)GEN_TOF(ABS((float10)(float)(fVar17 - fVar14)))) < fVar16) {
              *param_2 = (float)(fVar14 - (float10)param_4);
            }
            else if ((float10)((float)GEN_TOF(ABS((float10)(float)(fVar17 - fVar15)))) < fVar16) {
              *param_2 = (float)(fVar15 - (float10)param_4);
            }
          }
          if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar2 - fVar12)))) < fVar16) {
            *param_3 = (float)(int)(short)uVar7;
            pfVar8 = param_3;
          }
          else if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar2 - fVar13)))) < fVar16) {
            *param_3 = fVar4;
          }
          else {
            fVar14 = (float10)(float)((float10)fVar2 + (float10)param_5);
            if ((float10)((float)GEN_TOF(ABS((float10)(float)(fVar14 - fVar12)))) < fVar16) {
              *param_3 = (float)(fVar12 - (float10)param_5);
            }
            else if ((float10)((float)GEN_TOF(ABS((float10)(float)(fVar14 - fVar13)))) < fVar16) {
              *param_3 = (float)(fVar13 - (float10)param_5);
              pfVar8 = param_3;
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x1b8));
  }
  return pfVar8;
}

/* ref: FUN_00791fd0 */
GEN_FRAME uint GEN_THISCALL F_00791fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x791fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  byte bVar2;
  short sVar3;
  undefined * this;
  uint in_EAX = 0;
  uint uVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (*(int *)((*(int *)&gen_args[0]) + 0x1a0) != 0) {
    uVar4 = F_0055dcb0();
    fVar6 = (float10)*(int *)(uVar4 + 0x234);
    if (*(int *)(uVar4 + 0x234) < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar4 = F_0055dcb0();
    fVar7 = (float10)*(int *)(uVar4 + 0x238);
    if (*(int *)(uVar4 + 0x238) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    this = *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x198) + *((char *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1a0) + 0x14))) * 4)));
    F_0055a000(this GEN_EDX_ARG,((ushort *)(gen_frame + 0x8)),((ushort *)(gen_frame + 0x4)));
    sVar3 = *(short *)((*(uint *)&gen_args[1]) + 2);
    bVar2 = *(byte *)((*(uint *)&gen_args[1]) + 7);
    fVar8 = (float10)(int)*(short *)(*(uint *)&gen_args[1]) - (float10)*(float *)((*(int *)&gen_args[0]) + 0x1b0);
    fVar1 = (float)fVar8;
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar9 = (float10)(int)sVar3 - (float10)*(float *)((*(int *)&gen_args[0]) + 0x1b4);
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)fVar9);
    if ((bVar2 & 1) == 0) {
      if ((bVar2 & 6) != 0) {
        fVar5 = gen_bits2f((int)fVar8 & 0x8000000f);
        if ((int)gen_fl2bits(fVar5) < 0) {
          fVar5 = gen_bits2f(((int)gen_fl2bits(fVar5) - 1U | 0xfffffff0) + 1);
        }
        uVar4 = (int)fVar9 & 0x8000000f;
        (*(float *)(gen_frame + 0x0)) = fVar5;
        (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 - (float10)(int)gen_fl2bits(fVar5));
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
        }
        (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) - (float10)(int)uVar4));
      }
    }
    else {
      F_00791d00((*(int *)&gen_args[0]) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]),(float)((ushort *)(gen_frame + 0x8))[0],(float)((ushort *)(gen_frame + 0x4))[0],
                   *(float *)&REFG(undefined, 0x10c01a4));
    }
    if ((*(float *)(gen_frame + 0x0)) < 0.0) {
      (*(float *)(gen_frame + 0x0)) = 0.0;
    }
    else if ((float10)(float)fVar6 < (float10)(*(float *)(gen_frame + 0x0)) + (float10)((ushort *)(gen_frame + 0x8))[0]) {
      (*(float *)(gen_frame + 0x0)) = (float)((float10)(float)fVar6 - (float10)((ushort *)(gen_frame + 0x8))[0]);
    }
    if (gen_bits2f((*(uint *)&gen_args[1])) < 0.0) {
      (*(uint *)&gen_args[1]) = 0;
    }
    else if ((float10)(float)fVar7 < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) + (float10)((ushort *)(gen_frame + 0x4))[0]) {
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)((float10)(float)fVar7 - (float10)((ushort *)(gen_frame + 0x4))[0]));
    }
    in_EAX = F_00559da0(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x0)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
  }
  return in_EAX;
}

/* ref: FUN_00792180 */
GEN_NOFRAME uint GEN_THISCALL F_00792180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x792180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x1a0) == 0) {
    uVar1 = F_0055dcb0();
    in_EAX = F_005aa060((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG,6,0);
    *(undefined1 *)(uVar1 + 0x21b) = 1;
  }
  return in_EAX;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf25 */
GEN_FRAME uint GEN_THISCALL F_007921e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7921e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00792220 */
GEN_FRAME byte GEN_THISCALL F_00792220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x792220u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  undefined * this;
  int * piVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  if (*(int *)(param_1 + 0x19c) == 0) {
    return 0;
  }
  if (((ushort)param_2 == 0) && ((ushort)param_3 == 0)) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    return 0;
  }
  if ((float10)((float)GEN_TOF(SQRT((float10)((int)(short)(ushort)param_3 * (int)(short)(ushort)param_3 +
                                    (int)(short)(ushort)param_2 * (int)(short)(ushort)param_2)))) <
      (float10)REFG(float, 0x10a509c)) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    return 0;
  }
  uVar6 = F_0055dcb0();
  fVar9 = (float10)*(int *)(uVar6 + 0x234);
  if (*(int *)(uVar6 + 0x234) < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar6 = F_0055dcb0();
  fVar10 = (float10)*(int *)(uVar6 + 0x238);
  if (*(int *)(uVar6 + 0x238) < 0) {
    fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x198) + *((char *)GEN_TOP((*(int *)(param_1 + 0x19c) + 0x14))) * 4)));
  F_0055a000(this GEN_EDX_ARG,((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0x14)));
  F_00559d10(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x10)));
  sVar3 = ((ushort)param_2 ^ (short)(ushort)param_2 >> 0xf) - ((short)(ushort)param_2 >> 0xf);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1a4) + (float10)*(float *)(param_1 + 0x1ac))));
  *(float *)(param_1 + 0x1ac) = fVar1;
  sVar4 = ((ushort)param_3 ^ (short)(ushort)param_3 >> 0xf) - ((short)(ushort)param_3 >> 0xf);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)*(double *)&REFG(undefined, 0x1094878) - (float10)fVar1);
  if ((double)(*(float *)(gen_frame + 0x8)) < *(double *)&REFG(undefined, 0x10a1b58)) {
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10c75a0);
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1a4) + (float10)*(float *)(param_1 + 0x1a8))));
  *(float *)(param_1 + 0x1a8) = fVar1;
  if (!((float10)(*(float *)(gen_frame + 0x8)) < (float10)fVar1)) {
    return 1;
  }
  bVar5 = F_00a34870((undefined *)param_4 GEN_EDX_ARG,0xf);
  if (bVar5 == 0) {
    fVar11 = (float10)((float)GEN_TOF((((float10)*(float *)(param_1 + 0x1ac) +
                              (float10)*(float *)(param_1 + 0x1ac)) + (float10)REFG(double, 0x1088130))));
    iVar7 = (int)(fVar11 * fVar11);
    if (5 < iVar7) {
      iVar7 = 0x10;
    }
    if (0x19 < sVar3) {
      bVar8 = (short)(ushort)param_2 < 0;
      param_2 = iVar7;
      if (bVar8) {
        param_2 = -iVar7;
      }
      (*(float *)(gen_frame + 0xc)) = (float)((float10)param_2 + (float10)(*(float *)(gen_frame + 0xc)));
    }
    if (sVar4 < 0x1a) goto LAB_0079247c;
    if (-1 < (short)(ushort)param_3) {
      iVar7 = -iVar7;
    }
    fVar11 = (float10)iVar7 + (float10)(*(float *)(gen_frame + 0x10));
  }
  else {
    if (0x19 < sVar3) {
      (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)(int)(((-1 < (short)(ushort)param_2) - 1 & 0xffffffe0) + 0x10) +
                        (float10)(*(float *)(gen_frame + 0xc)))));
    }
    uVar6 = (int)(*(float *)(gen_frame + 0xc)) & 0x8000000f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
    }
    (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)(int)uVar6);
    if (0x19 < sVar4) {
      (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(int)(((-1 < (short)(ushort)param_3) - 1 & 0x20) - 0x10) +
                        (float10)(*(float *)(gen_frame + 0x10)))));
    }
    uVar6 = (int)(*(float *)(gen_frame + 0x10)) & 0x8000000f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
    }
    fVar11 = (float10)(*(float *)(gen_frame + 0x10)) - (float10)(int)uVar6;
  }
  (*(float *)(gen_frame + 0x10)) = (float)fVar11;
LAB_0079247c: ;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if ((*(float *)(gen_frame + 0xc)) < 0.0) {
    (*(float *)(gen_frame + 0xc)) = 0.0;
  }
  else if ((float10)(float)fVar9 < (float10)(*(float *)(gen_frame + 0xc)) + (float10)((ushort *)(gen_frame + 0x18))[0]) {
    (*(float *)(gen_frame + 0xc)) = (float)((float10)(float)fVar9 - (float10)((ushort *)(gen_frame + 0x18))[0]);
  }
  if ((*(float *)(gen_frame + 0x10)) < 0.0) {
    (*(float *)(gen_frame + 0x10)) = 0.0;
  }
  else if ((float10)(float)fVar10 < (float10)(*(float *)(gen_frame + 0x10)) + (float10)((ushort *)(gen_frame + 0x14))[0]) {
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(float)fVar10 - (float10)((ushort *)(gen_frame + 0x14))[0]);
  }
  F_00559da0(this GEN_EDX_ARG,(*(float *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x10)));
  *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x19c) + 0x15))) = 1;
  piVar2 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 0x19c)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2 GEN_EDX_ARG,(int)(*(float *)(gen_frame + 0xc)) & 0xffff,(int)(*(float *)(gen_frame + 0x10)) & 0xffff);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x6c))(piVar2 GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00792540 */
GEN_NOFRAME byte GEN_THISCALL F_00792540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x19c);
  if ((this_00 != (undefined *)0x0) && ((*(uint *)((int)this_00 + 0x10) & 0x1000000) == 0)) {
    F_00791a70(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + *(char *)((int)this_00 + 0x14) * 4))),
                 (uint)*(byte *)((int)this_00 + 0x17));
    return 1;
  }
  return 0;
}

/* ref: FUN_00792580 */
GEN_FRAME byte GEN_THISCALL F_00792580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  byte bVar2;
  undefined4 * puVar3;
  int * this_00;
  undefined * this_01;
  int iVar4;
  code * pcVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x19c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (((puVar3 != (undefined4 *)0x0) && ((*(byte *)((int)this + 0xf9) & 1) != 0)) &&
     (this_00 = (int *)*puVar3, this_00 != (int *)0x0)) {
    this_01 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + *(char *)(puVar3 + 5) * 4)));
    F_0055a000(this_01 GEN_EDX_FWD,((ushort *)(gen_frame + 0x28)),((ushort *)(gen_frame + 0x24)));
    iVar4 = *this_00;
    uVar6 = F_00559d90(this_01 GEN_EDX_ARG);
    uVar7 = (uint)uVar6;
    uVar6 = F_00559d70(this_01 GEN_EDX_ARG);
    ((code *)*(gen_code32 *)(iVar4 + 0x2c))(this_00,(uint)uVar6,uVar7);
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x44))(this_00 GEN_EDX_ARG,0);
    F_0056b5f0(this_00 GEN_EDX_ARG,((byte *)(gen_frame + 0x4)));
    uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) & 0xffff;
    uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) & 0xffff;
    (*(uint *)(gen_frame + 0x18)) = uVar7;
    F_0057f4c0(this_01,uVar8,uVar7);
    (*(uint *)(gen_frame + 0x18)) = (int)(((*(uint *)(gen_frame + 0x18)) & 0xffff) - (uint)((ushort *)(gen_frame + 0x24))[0]) / 2;
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x40))(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x20)));
    sVar1 = (short)(*(uint *)(gen_frame + 0x20)) - (short)(*(uint *)(gen_frame + 0x18));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = sVar1;
    (*(uint *)(gen_frame + 0x20)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)),sVar1);
    sVar1 = (short)(*(uint *)(gen_frame + 0x1c)) - (short)((int)(uVar8 - ((ushort *)(gen_frame + 0x28))[0]) / 2);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = sVar1;
    (*(uint *)(gen_frame + 0x1c)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)),sVar1);
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x2c))(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x20)));
    bVar2 = *(byte *)((int)this_00 + 0xfb);
    *(byte *)((int)this_00 + 0xfb) = bVar2 & 0xdf;
    F_0056b300(this_00 GEN_EDX_ARG,0);
    pcVar5 = *(gen_code32 *)(*this_00 + 0x40);
    *(byte *)((int)this_00 + 0xfb) =
         *(byte *)((int)this_00 + 0xfb) ^
         (((~(bVar2 >> 5) & 1) == 0) << 5 ^ *(byte *)((int)this_00 + 0xfb)) & 0x20;
    (*pcVar5)(this_00,&(*(uint *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x20)));
    F_00559e00(this_01 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x20)));
    *((undefined1 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x19c) + 0x15))) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_007926f0 */
GEN_FRAME uint GEN_THISCALL F_007926f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7926f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint in_EAX = 0;
  uint uVar1;
  undefined * this_00;
  
  *(int *)((int)this + 0x1a0) = param_1;
  if (param_1 != 0) {
    F_0043f8b0(1);
    F_00559d10(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + *(char *)(param_1 + 0x14) * 4))) GEN_EDX_ARG,
                 &(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
    *(float *)((int)this + 0x1b0) = (float)((float10)(int)*param_2 - (float10)(*(float *)(gen_frame + 0x8)));
    *(float *)((int)this + 0x1b4) = (float)((float10)(int)param_2[1] - (float10)(*(float *)(gen_frame + 0x4)));
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x21b) = 0;
    F_005aa060((undefined *)(uVar1 + 0x20c) GEN_EDX_ARG,0xe,0);
    *(undefined1 *)(uVar1 + 0x21b) = 1;
    this_00 = (undefined *)F_0055dcb0();
    F_0056a3d0(this_00 GEN_EDX_ARG,5,0x20,this,0,0);
    in_EAX = F_0056a3d0(this_00 GEN_EDX_ARG,4,0x20,this,0,0);
  }
  return in_EAX;
}

/* ref: FUN_007927b0 */
GEN_FRAME uint GEN_THISCALL F_007927b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7927b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 in_ecx;
  int iVar2;
  ushort uVar3;
  uint in_EAX = 0;
  undefined * this_00;
  uint uVar4;
  
  if ((*(int *)((int)this + 0x1a0) != 0) && (*(int *)((int)this + 0x19c) != 0)) {
    *(undefined4 *)((int)this + 0x1a0) = 0;
    this_00 = (undefined *)F_0055dcb0();
    F_00586850(this_00 GEN_EDX_ARG,4,0x20,this);
    F_00586850(this_00 GEN_EDX_ARG,5,0x20,this);
    piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x19c)));
    if (piVar1 != (int *)0x0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + (char)(*(int * PTR32 *)((int)this + 0x19c))[5] * 4)));
      iVar2 = *piVar1;
      uVar3 = F_00559d90(in_ecx GEN_EDX_ARG);
      uVar4 = (uint)uVar3;
      uVar3 = F_00559d70(in_ecx GEN_EDX_ARG);
      ((code *)*(gen_code32 *)(iVar2 + 0x2c))(piVar1,(uint)uVar3,uVar4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1 GEN_EDX_ARG);
    }
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x15))) = 1;
    uVar4 = F_0055dcb0();
    *(undefined1 *)(uVar4 + 0x21b) = 0;
    in_EAX = F_005aa060((undefined *)(uVar4 + 0x20c) GEN_EDX_ARG,6,1);
    *(undefined1 *)(uVar4 + 0x21b) = 1;
  }
  return in_EAX;
}

/* ref: FUN_00792880 */
GEN_FRAME uint GEN_THISCALL F_00792880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x792880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x1b8)) {
    piVar2 = *(int * PTR32 *)((int)this + 0x194);
    do {
      if (*(char *)(*piVar2 + 0x14) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < *(int *)((int)this + 0x1b8));
  }
  return 0xffffffff;
}

/* ref: FUN_007928c0 */
GEN_FRAME unsigned int GEN_STDCALL F_007928c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7928c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (param_1 != (undefined *)0x0) {
    F_007928c0((undefined *)*(undefined4 *)((int)param_1 + 8));
    F_00567e90(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 8));
  }
  return;
}

/* ref: FUN_007928f0 */
GEN_FRAME uint GEN_STDCALL F_007928f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7928f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((*(byte *)(param_1 + 0x10 + param_2 * 8) & 0xf) == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 0x14 + param_2 * 8);
}

/* ref: FUN_00792910 */
GEN_FRAME uint GEN_STDCALL F_00792910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x792910u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = param_3 + 0x22;
  if (((-1 < iVar1) && (iVar1 < param_1)) && ((*(byte *)(param_2 + iVar1 * 8) & 0xf) != 0)) {
    return *(uint *)(param_2 + 4 + iVar1 * 8);
  }
  return 0;
}

/* ref: FUN_00792940 */
GEN_FRAME uint GEN_STDCALL F_00792940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x792940u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((*(byte *)(param_1 + 0x210 + param_2 * 8) & 0xf) == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 0x214 + param_2 * 8);
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf17 */
GEN_NOFRAME byte GEN_THISCALL F_00792970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x792970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00792580(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00792980 */
GEN_NOFRAME uint GEN_THISCALL F_00792980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = F_0055dcb0();
  iVar1 = *(int *)(uVar3 + 0x234);
  uVar3 = F_0055dcb0();
  iVar2 = *(int *)(uVar3 + 0x238);
  fVar4 = (float)iVar1;
  *(float *)((int)this + 0x1d4) = fVar4;
  fVar5 = (float)iVar2;
  *(float *)((int)this + 0x1d8) = fVar5;
  *(float *)((int)this + 0x204) = fVar4;
  *(float *)((int)this + 0x208) = fVar5;
  *(float *)((int)this + 0x234) = fVar4;
  *(float *)((int)this + 0x238) = fVar5;
  *(short *)((int)this + 0x1dc) = (short)((int)(iVar1 + (iVar1 >> 0x1f & 0xfU)) >> 4);
  *(short *)((int)this + 0x1de) = (short)((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4);
  *(short *)((int)this + 0x20c) = (short)((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6);
  uVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6;
  *(short *)((int)this + 0x20e) = (short)uVar3;
  *(undefined4 *)((int)this + 0x23c) = 0x20002;
  *(short *)((int)this + 0x240) = (short)(iVar1 >> 1);
  *(short *)((int)this + 0x242) = (short)(iVar2 >> 1);
  return uVar3;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00792a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  
  sVar1 = *(short *)(this + 0x128) << 6;
  *(short *)(this + 0x1e8) = sVar1;
  *(short *)(this + 0x218) = sVar1;
  *(short *)(this + 0x248) = sVar1;
  uVar2 = F_0055dcb0();
  F_00586530(this + 0x1bc GEN_EDX_ARG,*(undefined4 *)(uVar2 + 4));
  uVar2 = F_0055dcb0();
  F_00586530(this + 0x1ec GEN_EDX_ARG,*(undefined4 *)(uVar2 + 4));
  uVar2 = F_0055dcb0();
  F_00586530(this + 0x21c GEN_EDX_ARG,*(undefined4 *)(uVar2 + 4));
  F_00579170((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00792ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00792ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x200;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c75ac));
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00792b10 */
GEN_NOFRAME uint GEN_THISCALL F_00792b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c75ac));
  if (*(int *)((int)this + 0x188) != 0) {
    F_00406b30(*(int *)((int)this + 0x188));
    *(undefined4 *)((int)this + 0x188) = 0;
  }
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutWindow::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00792b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"HudLayout",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonHudLayoutWindow::vf46 */
GEN_FRAME byte GEN_THISCALL F_00792b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x792b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (((byte)this[0xf9] & 1) == 0)) {
    return 0;
  }
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if (iVar1 == 0) {
    if ((param_2[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    *(undefined4 *)(this + 0x18c) = uVar2;
    F_0059caa0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_FWD,uVar2);
  }
  else {
    if (iVar1 == 4) {
      this[0x10d] = (undefined1)((char)this[0x10d] + '\x01');
      return 1;
    }
    if ((iVar1 == 5) && ('\0' < (char)this[0x10d])) {
      this[0x10d] = (undefined1)((char)this[0x10d] - 1);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00792bf0 */
GEN_FRAME uint GEN_THISCALL F_00792bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x792bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x188) != 0) {
    uVar1 = F_00584110((undefined *)*param_2 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x188) + param_1 * 4)))
                        );
  }
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutWindow::vf25 */
GEN_FRAME uint GEN_THISCALL F_00792c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00792c60 */
GEN_FRAME uint GEN_THISCALL F_00792c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00792ca0 */
GEN_FRAME uint GEN_THISCALL F_00792ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00792ce0 */
GEN_FRAME unsigned int GEN_THISCALL F_00792ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x792ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if (*(int *)((int)this + 0x18c) != param_1) {
    *(int *)((int)this + 0x18c) = param_1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x10)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x18)) = param_1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar1 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00792d50 */
GEN_FRAME uint GEN_THISCALL F_00792d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x792d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = F_0055dcb0();
  iVar5 = *(int *)(uVar1 + 0x234);
  uVar1 = F_0055dcb0();
  iVar6 = *(int *)(uVar1 + 0x238);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,0);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,0);
  iVar7 = (int)(short)uVar2 - (param_2 >> 3);
  iVar8 = (int)(short)uVar1 + (param_1 >> 3);
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  iVar5 = iVar5 - (uVar3 & 0xffff);
  if (iVar5 <= iVar8) {
    iVar8 = iVar5;
  }
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  iVar6 = iVar6 - (uVar4 & 0xffff);
  if (iVar6 <= iVar7) {
    iVar7 = iVar6;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,iVar8);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG,iVar7);
  return uVar1;
}

/* ref: Client::UI2::AddonHudLayoutWindow::vf17 */
GEN_FRAME uint GEN_THISCALL F_00792e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x792e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x44))))
                      (*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00792e20 */
GEN_NOFRAME uint GEN_THISCALL F_00792e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c76ac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x184) = 0;
  F_00580ea0((undefined *)((int)this + 0x188) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_0055e2a0(this GEN_EDX_ARG,0x1000000,1);
  return (uint)this;
}

/* ref: FUN_00792ea0 */
GEN_NOFRAME uint GEN_THISCALL F_00792ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c76ac));
  F_00590cc0((undefined *)((int)this + 0x188) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSocial::vf5 */
GEN_FRAME uint GEN_THISCALL F_00792ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x792ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  F_005a89b0(this GEN_EDX_FWD,param_1,1);
  uVar2 = F_0059bc90(this + 0x188 GEN_EDX_ARG);
  if (((byte)this[0xf9] & 1) != 0) {
    bVar1 = F_005a9130(this GEN_EDX_ARG,3);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonSocial::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00792f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x792f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_005b0610(this GEN_EDX_FWD,param_1,1,param_2);
  F_00580f10(this + 0x188 GEN_EDX_ARG,param_2,param_1);
  return;
}

/* ref: Client::UI2::AddonSocial::vf25 */
GEN_FRAME uint GEN_THISCALL F_00792f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00580fa0(this + 0x188 GEN_EDX_FWD);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSocial::vf36 */
GEN_NOFRAME byte GEN_THISCALL F_00792f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  F_005a91d0(this GEN_EDX_ARG,0,0x11);
  F_005a91d0(this GEN_EDX_ARG,1,0x13);
  F_005a91d0(this GEN_EDX_ARG,0,0xc);
  F_005a91d0(this GEN_EDX_ARG,1,0xe);
  F_005a91d0(this GEN_EDX_ARG,0,0xf);
  F_005a91d0(this GEN_EDX_ARG,1,0x11);
  F_005a91d0(this GEN_EDX_ARG,0,0xe);
  F_005a91d0(this GEN_EDX_ARG,1,0x10);
  bVar1 = F_00560e80(this + 0x188 GEN_EDX_ARG,this);
  return bVar1;
}

/* ref: Client::UI2::AddonSocial::vf37 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00792fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x792fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005b0510((undefined *)this GEN_EDX_FWD);
  F_005a92d0(this GEN_EDX_ARG,0,0x11,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x13,0);
  F_005a92d0(this GEN_EDX_ARG,0,0xc,0);
  F_005a92d0(this GEN_EDX_ARG,1,0xe,0);
  F_005a92d0(this GEN_EDX_ARG,0,0xf,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x11,0);
  F_005a92d0(this GEN_EDX_ARG,0,0xe,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x10,0);
  F_00588e00(this + 0x188 GEN_EDX_ARG,0);
  return;
}

/* ref: Client::UI2::AddonSocial::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00793060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Social",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSocial::vf47 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00793070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x793070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::UI2::AddonSocial::vf49 */
GEN_NOFRAME uint GEN_THISCALL F_00793080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00580f60(this + 0x188 GEN_EDX_FWD,1);
  uVar1 = F_005a9190((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007930a0 */
GEN_FRAME uint GEN_THISCALL F_007930a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7930a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = (uint)*(byte *)((int)this + 0x184);
  if (uVar1 != param_1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x18)) = param_1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    *(char *)((int)this + 0x184) = (char)param_1;
    F_0059bd30((undefined *)((int)this + 0x188) GEN_EDX_ARG,param_1 & 0xff,1,1);
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSocial::vf2 */
GEN_FRAME uint GEN_THISCALL F_00793130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x793130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0x17) {
    F_007930a0(this GEN_EDX_FWD,param_2);
    uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
  }
  else if (uVar1 != 0x3e) {
    uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
    return uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSocial::vf38 */
GEN_FRAME uint GEN_THISCALL F_00793170(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x793170u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x188 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonSocial::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_007931a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7931a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this GEN_EDX_FWD);
  F_00588c10(this + 0x188 GEN_EDX_ARG);
  return;
}

/* ref: Client::UI2::AddonSocial::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_007931c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7931c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = F_00580fd0(this + 0x188 GEN_EDX_FWD);
  if ((uVar1 == 0) ||
     (pAVar2 = *(undefined * PTR32 *)(uVar1 + 4), *(undefined * PTR32 *)(uVar1 + 4) == (undefined *)0x0)) {
    pAVar2 = this;
  }
  return (uint)pAVar2;
}

/* ref: FUN_007931e0 */
GEN_NOFRAME uint GEN_THISCALL F_007931e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7931e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c77ac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0x11;
  *(undefined4 *)((int)this + 0x1ec) = 0xf;
  *(undefined4 *)((int)this + 0x1f0) = 0x640;
  *(undefined4 *)((int)this + 500) = 200;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined2 *)((int)this + 0x204) = 0;
  F_00c48350((undefined *)((int)this + 0x188),0,0x40);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: Client::UI2::AddonSocialList::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_007932b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7932b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  if (*(int *)(this + 500) != 0) {
    piVar2 = (int *)F_00404270();
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,*(int *)(this + 500) * 0x2c,0x10);
    *(uint *)(this + 0x180) = uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSocialList::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007932f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7932f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,0,*(undefined4 *)(this + 0x1ec),0);
  F_005a92d0(this GEN_EDX_ARG,1,*(undefined4 *)(this + 0x1e8),0);
  if (*(int *)(this + 0x180) != 0) {
    F_00406810(*(int *)(this + 0x180));
    *(undefined4 *)(this + 0x180) = 0;
  }
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialList::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00793340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SocialList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSocialList::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_00793350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x793350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00568380(*(undefined * PTR32 *)(this + 0xa4) GEN_EDX_FWD,0x11,0,this,0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialList::vf46 */
GEN_FRAME byte GEN_THISCALL F_00793370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x793370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x24);
  }
  if (iVar3 != *(int *)(this + 500)) {
    if (*(int *)(this + 0x180) != 0) {
      F_00406810(*(int *)(this + 0x180));
    }
    *(undefined4 *)(this + 0x180) = 0;
    *(int *)(this + 500) = iVar3;
    piVar1 = (int *)F_00404270();
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(int *)(this + 500) * 0x2c,0x10);
    *(uint *)(this + 0x180) = uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonSocialList::vf2 */
GEN_FRAME uint GEN_THISCALL F_007933f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7933f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined4 uVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  uVar4 = param_1 & 0xffff;
  (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)param_3;
  if (uVar4 - 0x11 < 0x11) {
    bVar2 = *((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7936f0) + uVar4 + 3)));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0x11: ;
      this[0x204] = (undefined1)0x1;
      F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
      return (uint)bVar2;
    case 0x17: ;
      if (param_2 != 1) {
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
        (*(uint *)(gen_frame + 0x14)) = 0x65;
        (*(char *)(gen_frame + 0xf)) = *((char *)GEN_TOP((*(int *)(this + 0x1d0) + 0x88)));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
        (*(char * PTR32 *)(gen_frame + 0x1c)) = (char *)(uint)((*(char *)(gen_frame + 0xf)) != '\0');
        F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
        F_00557670(param_3 GEN_EDX_ARG,0);
        puVar7 = &(*(uint *)(gen_frame + 0x28));
        iVar8 = 2;
        do {
          puVar7 = puVar7 - 2;
          uVar3 = F_005a2670(puVar7 GEN_EDX_ARG);
          iVar8 = iVar8 - 1;
        } while (-1 < iVar8);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return uVar3;
      }
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x3;
      F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_00557670(param_3 GEN_EDX_ARG,0);
      uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar3;
    case 0x1f: ;
      iVar8 = *param_4;
      F_00560760(&(*(char * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      pcVar5 = (*(char * PTR32 *)(gen_frame + 0x8));
      if ((iVar8 != 0) && (*(undefined * PTR32 *)(iVar8 + 0x1e4) != (undefined *)0x0)) {
        iVar9 = param_4[2] * 0x2c + *(int *)(this + 0x180);
        uVar3 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4) GEN_EDX_ARG);
        if (uVar3 == 5) {
          (*(char * PTR32 *)(gen_frame + 0x1c)) = *(char * PTR32 *)(iVar9 + 0xc);
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x8));
          if (*(int *)(iVar9 + 0xc) == 0) goto LAB_007936b8;
          uVar6 = *(undefined4 *)(iVar8 + 0x1e4);
          AVar1 = this[0x13a];
          uVar3 = F_0055dcb0();
        }
        else {
          uVar3 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4) GEN_EDX_ARG);
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x8));
          if (uVar3 == 0xf) {
            if (**(char * PTR32 *)(iVar9 + 0x10) == '\0') goto LAB_007936b8;
            (*(char * PTR32 *)(gen_frame + 0x1c)) = *(char * PTR32 *)(iVar9 + 0x10);
          }
          else {
            if (((*(int *)(this + 0x1dc) == 0) ||
                (uVar3 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4) GEN_EDX_ARG), pcVar5 = (*(char * PTR32 *)(gen_frame + 0x8)), uVar3 != 0x12))
               || (bVar2 = F_00584440(*(undefined * PTR32 *)(this + 0x1dc) GEN_EDX_ARG,*(undefined4 *)(iVar9 + 4)),
                  pcVar5 = (*(char * PTR32 *)(gen_frame + 0x8)), bVar2 == 0)) goto LAB_007936b8;
            (*(char * PTR32 *)(gen_frame + 0x1c)) = *(char * PTR32 *)(iVar9 + 4);
          }
          uVar6 = *(undefined4 *)(iVar8 + 0x1e4);
          AVar1 = this[0x13a];
          uVar3 = F_0055dcb0();
        }
        F_00588780((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,2,(uint)(byte)AVar1,uVar6,&(*(char * PTR32 *)(gen_frame + 0x1c)),0,0);
        pcVar5 = (*(char * PTR32 *)(gen_frame + 0x8));
      }
      goto LAB_007936b8;
    case 0x20: ;
      iVar8 = *param_4;
      if (((iVar8 != 0) && (*(undefined * PTR32 *)(iVar8 + 0x1e4) != (undefined *)0x0)) &&
         ((uVar3 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4) GEN_EDX_ARG), uVar3 == 5 ||
          ((uVar3 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4) GEN_EDX_ARG), uVar3 == 0xf ||
           (uVar3 = F_00568410(*(undefined * PTR32 *)(iVar8 + 0x1e4) GEN_EDX_ARG), uVar3 == 0x12)))))) {
        uVar3 = F_0055dcb0();
        F_00594d90((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,0);
      }
      break;
    case 0x21: ;
      iVar8 = param_4[4];
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)(uint)((char)iVar8 != '\x02');
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
      (*(uint *)(gen_frame + 0x14)) = (uint)(*(char * PTR32 *)(gen_frame + 0x8));
      (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)param_4[2];
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      iVar8 = param_4[2];
      iVar9 = *(int *)(this + 0x180);
      (*(char * PTR32 *)(gen_frame + 0x1c)) = (*(char * PTR32 *)(gen_frame + 0x8));
      uVar6 = *(undefined4 *)(iVar8 * 0x2c + iVar9);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
      (*(undefined4 *)(gen_frame + 0x24)) = uVar6;
      F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
      F_00557670(param_3 GEN_EDX_ARG,0);
      puVar7 = &(*(uint *)(gen_frame + 0x28));
      iVar8 = 2;
      do {
        puVar7 = puVar7 - 2;
        uVar3 = F_005a2670(puVar7 GEN_EDX_ARG);
        iVar8 = iVar8 - 1;
      } while (-1 < iVar8);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar3;
    }
  }
  pcVar5 = (char *)param_3;
LAB_007936b8: ;
  uVar3 = F_00557670(pcVar5 GEN_EDX_ARG,0);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI2::AddonSocialList::vf25 */
GEN_FRAME uint GEN_THISCALL F_00793720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00793750 */
GEN_FRAME uint GEN_THISCALL F_00793750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x793750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = param_1[5];
  if (uVar2 != 0xffffffff) {
    F_005951c0(param_3 GEN_EDX_FWD,uVar2,0,*param_2);
    if (param_1[7] < 0) {
      F_0055a300((undefined *)param_2[3] GEN_EDX_ARG,0);
    }
    else {
      F_0055a300((undefined *)param_2[3] GEN_EDX_ARG,1);
      F_005951c0(param_3 GEN_EDX_ARG,param_1[7],0,param_2[3]);
    }
    F_0055a300((undefined *)param_2[5] GEN_EDX_ARG,(uint)(-1 < param_1[8]));
    F_005951c0(param_3 GEN_EDX_ARG,param_1[8],0,param_2[5]);
    pvVar1 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
    if (*param_1 != 0) {
      F_005842e0(pvVar1 GEN_EDX_ARG,*param_1,0);
    }
    uVar2 = F_005612d0(param_1[9]);
    F_0055aa30(pvVar1 GEN_EDX_ARG,uVar2);
    F_0055a300((undefined *)param_2[2] GEN_EDX_ARG,(uint)*(byte *)((int)param_1 + 0x2a));
    uVar2 = F_0055dcb0();
    pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x30);
    this_00 = (undefined *)F_00559ba0(param_2[4] GEN_EDX_ARG);
    if (param_1[6] == 0) {
      uVar2 = F_0043bd00(pvVar1 GEN_EDX_ARG,0x7f3,0,0);
    }
    else {
      uVar2 = F_00461d60(pvVar1 GEN_EDX_ARG,0x133,param_1[6],0,0);
    }
    F_00584110(this_00 GEN_EDX_ARG,uVar2);
    pvVar1 = (undefined *)F_00559ba0(param_2[7] GEN_EDX_ARG);
    if (param_1[1] != 0) {
      F_005842e0(pvVar1 GEN_EDX_ARG,param_1[1],0);
    }
    pvVar1 = (undefined *)F_00559ba0(param_2[8] GEN_EDX_ARG);
    F_00584110(pvVar1 GEN_EDX_ARG,param_1[2]);
    if (*(char *)((int)param_1 + 0x29) != '\x04') {
      F_0055a300((undefined *)param_2[10] GEN_EDX_ARG,(uint)(*(byte *)(param_1 + 10) & 1));
      F_0055a300((undefined *)param_2[0xb] GEN_EDX_ARG,(uint)(*(byte *)(param_1 + 10) >> 1 & 1));
      F_0055a300((undefined *)param_2[0xc] GEN_EDX_ARG,(uint)(*(byte *)(param_1 + 10) >> 2 & 1));
      F_0055a300((undefined *)param_2[0xd] GEN_EDX_ARG,(uint)(*(byte *)(param_1 + 10) >> 3 & 1));
    }
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)param_1 + 0x29))) {
    case 0: ;
      uVar3 = 0x65;
      break;
    case 1: ;
      uVar3 = 0x66;
      break;
    case 2: ;
      uVar3 = 0x67;
      break;
    case 3: ;
      uVar3 = 0x68;
      break;
    default: ;
      uVar3 = 0x69;
    }
    uVar2 = F_0059d670((undefined *)param_2[9] GEN_EDX_ARG,uVar3);
    if ((undefined *)param_2[0x10] != (undefined *)0x0) {
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        F_005951c0(param_3 GEN_EDX_ARG,param_1[7],0,param_2[0xf]);
        iVar4 = *param_1;
        pvVar1 = (undefined *)F_00559ba0(param_2[0xe] GEN_EDX_ARG);
        F_00584110(pvVar1 GEN_EDX_ARG,iVar4);
        uVar2 = F_0059d670((undefined *)param_2[0x10] GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1e4));
        return uVar2;
      }
      uVar2 = F_0059d670((undefined *)param_2[0x10] GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1e0));
    }
  }
  return uVar2;
}

/* ref: FUN_00793970 */
GEN_NOFRAME uint GEN_THISCALL F_00793970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c8) + 0x7c))))(*(int * PTR32 *)((int)this + 0x1c8) GEN_EDX_FWD);
  if ((uVar1 == 0) || (*(int *)((int)this + 0x1fc) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  F_0059ead0(*(undefined * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x1fc),0,uVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c8) + 0x70))))(*(int * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG);
  F_0055a300(*(undefined * PTR32 *)((int)this + 0x1d8) GEN_EDX_ARG,(uint)(*(int *)((int)this + 0x1fc) == 0));
  if ((*(int *)((int)this + 0x1fc) == 0) && (*(int *)((int)this + 0x184) != 0)) {
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1d8) GEN_EDX_ARG,*(int *)((int)this + 0x184));
  }
  if (*(int *)((int)this + 0x1d4) != 0) {
    uVar2 = *(undefined4 *)((int)this + 0x1fc);
    uVar3 = 200;
    this_00 = (undefined *)F_0055dcb0();
    uVar1 = F_005b03e0(this_00 GEN_EDX_ARG,uVar2,uVar3);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x1d4) GEN_EDX_ARG,uVar1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1cc) + 0x28))))
            (*(int * PTR32 *)((int)this + 0x1cc) GEN_EDX_ARG,(uint)*(byte *)((int)this + 0x205));
  uVar2 = 0;
  if (*(char *)((int)this + 0x205) != '\0') {
    F_005879b0(this GEN_EDX_ARG,0,7,0,9,0,0);
    uVar2 = *(undefined4 *)((int)this + 0x200);
  }
  uVar1 = F_005879b0(this GEN_EDX_ARG,uVar2,7,0,9,0,0);
  return uVar1;
}

/* ref: FUN_00793a70 */
GEN_NOFRAME uint GEN_THISCALL F_00793a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c78ac));
  F_00c48350((undefined *)((int)this + 0x188),0,800);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  return (uint)this;
}

/* ref: FUN_00793ad0 */
GEN_FRAME uint GEN_THISCALL F_00793ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x793ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint in_ecx;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar2;
  
  in_ecx = F_00559ba0(*param_2 GEN_EDX_FWD);
  uVar2 = 0;
  if (in_ecx != 0) {
    uVar3 = *(undefined4 *)((int)this + param_1 * 4 + 0x188);
    uVar4 = 0;
    this_00 = (undefined *)F_00559ba0(in_ecx GEN_EDX_ARG);
    bVar1 = F_005842e0(this_00 GEN_EDX_ARG,uVar3,uVar4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonBlackList::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00793b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  F_005a91d0(this GEN_EDX_ARG,0,0xe);
  uVar1 = F_005a91d0(this GEN_EDX_ARG,1,0x10);
  return uVar1;
}

/* ref: Client::UI2::AddonBlackList::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00793b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005b0510((undefined *)this GEN_EDX_FWD);
  F_005a92d0(this GEN_EDX_ARG,0,0xe,0);
  uVar1 = F_005a92d0(this GEN_EDX_ARG,1,0x10,0);
  return uVar1;
}

/* ref: Client::UI2::AddonBlackList::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00793b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"BlackList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonBlackList::vf2 */
GEN_FRAME uint GEN_THISCALL F_00793b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x793b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x17: ;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x8)));
    F_00557670(param_3 GEN_EDX_ARG,0);
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar3;
  default: ;
    uVar3 = F_00557670(param_3 GEN_EDX_ARG,0);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar3;
  case 0x21: ;
    cVar1 = *(char *)(param_4 + 0x10);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x14)) = (uint)(cVar1 != '\x02');
    uVar2 = *(undefined4 *)(param_4 + 8);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    uVar2 = *((undefined4 *)GEN_TOP((this + *(int *)(param_4 + 8) * 4 + 0x188)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
    (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_00557670((*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 2;
  }
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI2::AddonBlackList::vf25 */
GEN_FRAME uint GEN_THISCALL F_00793cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00793ce0 */
GEN_NOFRAME uint GEN_THISCALL F_00793ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007931e0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c79ac));
  *(undefined4 *)((int)this + 0x180) = 0;
  F_00c48350((undefined *)((int)this + 0x22c),0,0x2c);
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonPartyMemberList::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00793d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 500) = 8;
  piVar1 = (int *)F_00404270();
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(int *)(this + 500) * 0x2c,0x10);
  *(uint *)(this + 0x180) = uVar2;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x1e0) = 0x65;
  *(undefined4 *)(this + 0x1e4) = 0x66;
  return uVar2;
}

/* ref: Client::UI2::AddonPartyMemberList::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00793dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005b0510((undefined *)this GEN_EDX_FWD);
  F_005a92d0(this GEN_EDX_ARG,0,0xc,0);
  F_005a92d0(this GEN_EDX_ARG,1,0xe,0);
  uVar1 = 0;
  if (*(int *)(this + 0x180) != 0) {
    uVar1 = F_00406810(*(int *)(this + 0x180));
    *(undefined4 *)(this + 0x180) = 0;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonPartyMemberList::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00793e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"PartyMemberList",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonPartyMemberList::vf25 */
GEN_FRAME uint GEN_THISCALL F_00793e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00793e60 */
GEN_FRAME unsigned int GEN_THISCALL F_00793e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x793e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 600) < 2) || (param_1 < 0)) {
    if (*(int *)((int)this + 0x218) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x218) + 0x28))))(*(int * PTR32 *)((int)this + 0x218) GEN_EDX_FWD,0);
    }
    if (*(int *)((int)this + 0x21c) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x21c) + 0x28))))(*(int * PTR32 *)((int)this + 0x21c) GEN_EDX_ARG,0);
    }
  }
  else {
    if (*(int *)((int)this + 0x218) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x218) + 0x28))))
                (*(int * PTR32 *)((int)this + 0x218) GEN_EDX_ARG,(uint)(param_1 != 0));
    }
    if (*(int *)((int)this + 0x21c) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x21c) + 0x28))))
                (*(int * PTR32 *)((int)this + 0x21c) GEN_EDX_ARG,(uint)(param_1 < *(int *)((int)this + 600) - 1));
      return;
    }
  }
  return;
}

/* ref: FUN_00793f00 */
GEN_NOFRAME uint GEN_THISCALL F_00793f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 600);
  if ((int)uVar1 < 2) {
    if (uVar1 == 1) {
      uVar1 = F_005879b0(this GEN_EDX_FWD,0x3d2,7,0,9,0,0);
    }
    return uVar1;
  }
  if (-1 < *((int *)GEN_TOP((*(int *)((int)this + 0x20c) + 0xd0)))) {
    uVar1 = F_005879b0(this GEN_EDX_ARG,0x18ab6,7,0,9,0,0);
    return uVar1;
  }
  uVar1 = F_005879b0(this GEN_EDX_ARG,0x142,7,0,9,0,0);
  return uVar1;
}

/* ref: FUN_00793f60 */
GEN_NOFRAME uint GEN_THISCALL F_00793f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7aac));
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
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterList::vf36 */
GEN_FRAME uint GEN_THISCALL F_00793ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x793ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  *(undefined4 *)(this + 0x1b8) = 0x82;
  uVar1 = F_00404270();
  uVar3 = *(uint *)(this + 0x1b8);
  uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x104 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x104);
  puVar2 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,0,uVar1,0);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar3;
    puVar2 = puVar2 + 1;
    puVar5 = puVar2;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      *puVar5 = 0;
      F_0042b630(puVar5 + 1 GEN_EDX_ARG);
      F_0042b630(puVar5 + 0x16 GEN_EDX_ARG);
      F_0042b630(puVar5 + 0x2b GEN_EDX_ARG);
      puVar5[0x40] = 0;
      puVar5 = puVar5 + 0x41;
    }
  }
  *(uint * PTR32 *)(this + 0x180) = puVar2;
  uVar3 = F_0055dc60((undefined *)this GEN_EDX_ARG);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return uVar3;
}

/* ref: Client::UI2::AddonLetterList::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007940c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7940c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"LetterList",0,6);
  return bVar1;
}

/* ref: FUN_007940d0 */
GEN_FRAME uint GEN_THISCALL F_007940d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7940d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00794140 */
GEN_FRAME uint GEN_THISCALL F_00794140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x794140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  bool bVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar3 = *(int *)(param_2 + 8);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  bVar4 = *(char *)(param_2 + 0x10) != '\0';
  if (bVar4) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(uint *)(gen_frame + 0x4)) = 1;
  }
  else {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  (*(uint *)(gen_frame + 0x4)) = (uint)bVar4;
  uVar1 = *((undefined4 *)GEN_TOP((iVar3 * 0x104 + *(int *)((int)this + 0x180))));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar3 = 2;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007941e0 */
GEN_NOFRAME uint GEN_THISCALL F_007941e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7941e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2 GEN_EDX_ARG);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar3,uVar2);
  return uVar2;
}

/* ref: Client::UI2::AddonLetterList::vf25 */
GEN_FRAME uint GEN_THISCALL F_00794210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00794280 */
GEN_FRAME uint GEN_THISCALL F_00794280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x794280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x104 + *(int *)((int)this + 0x180);
  pvVar1 = (undefined *)*param_2;
  uVar2 = F_0042a990(iVar3 + 4 GEN_EDX_FWD);
  F_00584110(pvVar1 GEN_EDX_ARG,uVar2);
  pvVar1 = (undefined *)param_2[1];
  uVar2 = F_0042a990(iVar3 + 0x58 GEN_EDX_ARG);
  F_00584110(pvVar1 GEN_EDX_ARG,uVar2);
  pvVar1 = (undefined *)param_2[2];
  uVar2 = F_0042a990(iVar3 + 0xac GEN_EDX_ARG);
  F_00584110(pvVar1 GEN_EDX_ARG,uVar2);
  uVar2 = F_005951c0(param_3 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 0x100),0,0);
  return uVar2;
}

/* ref: Client::UI2::AddonLetterList::vf2 */
GEN_FRAME uint GEN_THISCALL F_007942f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7942f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 != 0x17) {
    if ((short)param_1 == 0x21) {
      if (param_2 == 3) {
        F_00794140(this GEN_EDX_FWD,param_3,param_4);
      }
      uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
    }
    return uVar1;
  }
  if (param_2 == 0) {
    F_007940d0(this GEN_EDX_ARG);
  }
  else if ((param_2 == 1) || (param_2 == 2)) {
    F_007941e0(this GEN_EDX_ARG);
    uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
    return uVar1;
  }
  uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Client::UI2::AddonLetterList::vf52 */
GEN_FRAME byte GEN_THISCALL F_00794360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x794360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*param_1 == 5) && ((char)param_1[1] == '\0')) {
    F_007940d0(this GEN_EDX_FWD);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonLetterList::vf60 */
GEN_FRAME byte GEN_THISCALL F_00794390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x794390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (param_1 == 0xf) {
    piVar4 = *(int * PTR32 *)(this + 0x188);
    if ((char)piVar4[0x22] != '\0') {
      piVar4 = *(int * PTR32 *)(this + 0x18c);
      goto LAB_007943df;
    }
  }
  else {
    if (param_1 != 0x10) {
      return 0;
    }
    piVar4 = *(int * PTR32 *)(this + 0x18c);
    if ((char)piVar4[0x22] != '\0') {
      piVar4 = *(int * PTR32 *)(this + 0x188);
      goto LAB_007943df;
    }
  }
  if ((char)param_2 != '\0') {
    return 0;
  }
LAB_007943df: ;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  uVar2 = F_00561390();
  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x60))(piVar4 GEN_EDX_ARG,uVar2 + 0xc0);
  iVar1 = *(int *)this;
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2 GEN_EDX_ARG);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
  ((code *)*(gen_code32 *)(iVar1 + 0xbc))(this,uVar3,uVar2);
  uVar2 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0xd);
  F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00794460 */
GEN_NOFRAME uint GEN_THISCALL F_00794460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7bac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonLetterViewer::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00794510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonLetterViewer::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00794540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"LetterViewer",0,6);
  return bVar1;
}

/* ref: FUN_00794550 */
GEN_FRAME uint GEN_THISCALL F_00794550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x794550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00794590 */
GEN_FRAME uint GEN_THISCALL F_00794590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x794590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007945d0 */
GEN_FRAME uint GEN_THISCALL F_007945d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7945d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00794610 */
GEN_FRAME uint GEN_THISCALL F_00794610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x794610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = param_2;
  if (*(char *)(param_2 + 6) == '\x01') {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonLetterViewer::vf25 */
GEN_FRAME uint GEN_THISCALL F_00794660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonLetterViewer::vf2 */
GEN_FRAME uint GEN_THISCALL F_007946a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7946a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  if ((short)param_1 != 0x17) {
    if ((short)param_1 == 9) {
      if (param_2 == 3) {
        F_00794610(this GEN_EDX_FWD,param_3,param_4);
      }
      uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
    }
    return uVar1;
  }
  if (param_2 == 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 1;
  }
  else if (param_2 == 1) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
  }
  else {
    if (param_2 != 2) goto LAB_0079471c;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 2;
  }
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
LAB_0079471c: ;
  uVar1 = F_00557670(param_3 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00794760 */
GEN_NOFRAME uint GEN_THISCALL F_00794760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7cac));
  iVar3 = 0x7f;
  pvVar2 = (undefined *)((int)this + 0xe680);
  do {
    F_0042c880((undefined *)((int)pvVar2 - 0x174) GEN_EDX_FWD);
    F_0042c880((undefined *)((int)pvVar2 - 0x1c8) GEN_EDX_ARG);
    F_0042c880((undefined *)((int)pvVar2 - 0x21c) GEN_EDX_ARG);
    F_0042c880((undefined *)((int)pvVar2 - 0x270) GEN_EDX_ARG);
    F_0042c880((undefined *)((int)pvVar2 - 0x2c4) GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
    pvVar2 = (undefined *)((int)pvVar2 - 0x1c8);
  } while (-1 < iVar3);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonLinkShell::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007947d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7947d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"LinkShell",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonLinkShell::vf46 */
GEN_FRAME byte GEN_THISCALL F_007947e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7947e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  
  if ((param_2 != 0) && (((byte)this[0xf9] & 1) != 0)) {
    if ((*(byte *)(param_2 + 0x58) & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x5c);
    }
    if (iVar1 == 1) {
      if ((*(byte *)(param_2 + 0x68) & 0xf) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x6c);
      }
      uVar2 = (uint)(iVar1 != 0);
      pvVar4 = (undefined *)F_0055e2f0(this GEN_EDX_FWD,0x17);
      F_0055a300(pvVar4 GEN_EDX_ARG,uVar2);
      if (iVar1 != 0) {
        if ((*(byte *)(param_2 + 0x70) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(param_2 + 0x74);
        }
        pvVar4 = (undefined *)F_0055e340(this GEN_EDX_ARG,0x17);
        F_00584110(pvVar4 GEN_EDX_ARG,uVar5);
      }
    }
    else if (((iVar1 == 2) && ((*(byte *)(param_2 + 0x60) & 0xf) != 0)) &&
            (iVar1 = *(int *)(param_2 + 100), iVar1 != 0)) {
      uVar2 = F_0055dcb0();
      piVar3 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14) GEN_EDX_ARG,iVar1);
      if (piVar3 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3 GEN_EDX_ARG);
        return 1;
      }
    }
  }
  return 1;
}

/* ref: FUN_007948a0 */
GEN_FRAME uint GEN_THISCALL F_007948a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7948a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) * 0x1c8 + 0x180 + (int)this)));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  uVar2 = F_0042a990(*(int *)(param_2 + 8) * 0x1c8 + 0x184 + (int)this GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xe624) + 0x3c))))(*(int * PTR32 *)((int)this + 0xe624) GEN_EDX_ARG);
  *(uint *)((int)this + 0xa4) = uVar2;
  F_00557670(param_1 GEN_EDX_ARG,0);
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar3 = 2;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00794970 */
GEN_FRAME uint GEN_THISCALL F_00794970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x794970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  *(char *)((int)this + 0xe63c) = (char)param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(int *)(gen_frame + 0xc)) = param_1;
  uVar2 = F_0055aaf0(*(undefined4 *)((int)this + param_1 * 4 + 0xe5c4) GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if (*(char *)(param_3 + 6) == '\x01') {
    pvVar1 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0xe580);
    F_0059dde0(pvVar1 GEN_EDX_ARG,(uint)(*(undefined * PTR32 *)((int)this + 0xe630) == pvVar1));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
  }
  else {
    if (((*(byte *)(param_3 + 7) & 8) == 0) && (*(char *)((int)this + param_1 + 0xe634) == '\x04'))
    {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 0xe630);
    if (pvVar1 == *(undefined * PTR32 *)((int)this + param_1 * 4 + 0xe580)) {
      F_0059dde0(pvVar1 GEN_EDX_ARG,1);
      puVar3 = &(*(uint *)(gen_frame + 0x18));
      iVar4 = 2;
      do {
        puVar3 = puVar3 - 2;
        uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
      return uVar2;
    }
    if (pvVar1 != (undefined *)0x0) {
      F_0059dde0(pvVar1 GEN_EDX_ARG,0);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0xe580);
    *(undefined * PTR32 *)((int)this + 0xe630) = pvVar1;
    F_0059dde0(pvVar1 GEN_EDX_ARG,1);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
  }
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00557670(param_2 GEN_EDX_ARG,0);
  puVar3 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    puVar3 = puVar3 - 2;
    uVar2 = F_005a2670(puVar3 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonLinkShell::vf25 */
GEN_FRAME uint GEN_THISCALL F_00794af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00794b60 */
GEN_FRAME uint GEN_THISCALL F_00794b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x794b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  
  iVar3 = param_1 * 0x1c8;
  F_005951c0(param_3 GEN_EDX_FWD,*(undefined4 *)(iVar3 + 0x328 + (int)this),0,*param_2);
  F_0055a300((undefined *)param_2[0xd] GEN_EDX_ARG,(uint)((byte)(*(uint *)((int)this + iVar3 + 0x344) >> 5) & 1));
  uVar4 = F_0042a990((int)this + iVar3 + 0x184 GEN_EDX_ARG);
  if (uVar4 != 0) {
    pvVar5 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
    uVar6 = 0;
    uVar4 = F_0042a990((int)this + iVar3 + 0x184 GEN_EDX_ARG);
    F_005842e0(pvVar5 GEN_EDX_ARG,uVar4,uVar6);
    uVar4 = F_005612d0(*(undefined4 *)((int)this + iVar3 + 0x338));
    F_0055aa30(pvVar5 GEN_EDX_ARG,uVar4);
  }
  uVar4 = F_00559b90(param_2[2] GEN_EDX_ARG);
  if ((uVar4 != 0) && (iVar1 = *(int *)((int)this + iVar3 + 0x330), 0 < iVar1)) {
    F_005951c0(param_3 GEN_EDX_ARG,iVar1,0,uVar4);
  }
  F_0055a300((undefined *)param_2[2] GEN_EDX_ARG,(uint)(0 < *(int *)((int)this + iVar3 + 0x330)));
  uVar4 = F_0055dcb0();
  piVar2 = *(int * PTR32 *)(uVar4 + 0x30);
  pvVar5 = (undefined *)F_00559ba0(param_2[3] GEN_EDX_ARG);
  iVar1 = *(int *)((int)this + iVar3 + 0x32c);
  if (iVar1 == 0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2 GEN_EDX_ARG,0x7f3);
    F_00584110(pvVar5 GEN_EDX_ARG,uVar4);
  }
  else {
    F_0057eb30(pvVar5 GEN_EDX_ARG,iVar1,0,0,0,0);
  }
  uVar4 = *(uint *)((int)this + iVar3 + 0x344);
  if ((uVar4 & 2) == 0) {
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 0x10) == 0) {
        uVar6 = 0x11;
      }
      else {
        uVar6 = 0x67;
      }
    }
    else {
      uVar6 = 0x66;
    }
  }
  else {
    uVar6 = 0x65;
  }
  F_0059d670((undefined *)param_2[0xe] GEN_EDX_ARG,uVar6);
  pvVar5 = (undefined *)F_00559b90(param_2[4] GEN_EDX_ARG);
  if (pvVar5 != (undefined *)0x0) {
    F_005951c0(param_3 GEN_EDX_ARG,*(undefined4 *)((int)this + iVar3 + 0x334),0,pvVar5);
    F_0055a300(pvVar5 GEN_EDX_ARG,(uint)(0 < *(int *)((int)this + iVar3 + 0x334)));
  }
  uVar4 = F_0042a990((int)this + iVar3 + 0x1d8 GEN_EDX_ARG);
  if (uVar4 != 0) {
    pvVar5 = (undefined *)F_00559ba0(param_2[6] GEN_EDX_ARG);
    uVar6 = 0;
    uVar4 = F_0042a990((int)this + iVar3 + 0x1d8 GEN_EDX_ARG);
    F_005842e0(pvVar5 GEN_EDX_ARG,uVar4,uVar6);
  }
  pvVar5 = (undefined *)F_00559ba0(param_2[7] GEN_EDX_ARG);
  uVar4 = F_0042a990((int)this + iVar3 + 0x22c GEN_EDX_ARG);
  F_00584110(pvVar5 GEN_EDX_ARG,uVar4);
  F_0055a300((undefined *)param_2[9] GEN_EDX_ARG,(uint)(*(byte *)((int)this + iVar3 + 0x33c) & 1));
  F_0055a300((undefined *)param_2[10] GEN_EDX_ARG,(uint)((byte)(*(uint *)((int)this + iVar3 + 0x33c) >> 1) & 1));
  F_0055a300((undefined *)param_2[0xb] GEN_EDX_ARG,(uint)((byte)(*(uint *)((int)this + iVar3 + 0x33c) >> 2) & 1));
  F_0055a300((undefined *)param_2[0xc] GEN_EDX_ARG,(uint)((byte)(*(uint *)((int)this + iVar3 + 0x33c) >> 3) & 1));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + iVar3 + 0x340))) {
  case 0: ;
    uVar4 = F_0059d670((undefined *)param_2[8] GEN_EDX_ARG,0x65);
    return uVar4;
  case 1: ;
    uVar4 = F_0059d670((undefined *)param_2[8] GEN_EDX_ARG,0x66);
    return uVar4;
  case 2: ;
    uVar4 = F_0059d670((undefined *)param_2[8] GEN_EDX_ARG,0x67);
    return uVar4;
  case 3: ;
    uVar4 = F_0059d670((undefined *)param_2[8] GEN_EDX_ARG,0x68);
    return uVar4;
  default: ;
    uVar4 = F_0059d670((undefined *)param_2[8] GEN_EDX_ARG,0x69);
    return uVar4;
  }
}

/* ref: FUN_00794df0 */
GEN_FRAME uint GEN_STDCALL F_00794df0(unsigned int gen_a0)
{
  GEN_ENTER(0x794df0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_0055dcb0();
  piVar1 = *(int * PTR32 *)(uVar2 + 0x30);
  if ((short)param_1 == 1) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG,0xafb);
    return uVar2;
  }
  if ((short)param_1 != 2) {
    if ((short)param_1 != 4) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG,0xafe);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG,0xafd);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG,0xafc);
  return uVar2;
}

/* ref: FUN_00794e50 */
GEN_NOFRAME uint GEN_THISCALL F_00794e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7dac));
  pvVar2 = (undefined *)((int)this + 0x22ab0);
  iVar3 = 4;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_0042c880((undefined *)((int)this + 0x228b4) GEN_EDX_ARG);
  iVar3 = 0x642;
  pvVar2 = (undefined *)((int)this + 0x228b8);
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x58);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonLetterEditor::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00794eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonLetterEditor::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00794ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x794ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"LetterEditor",0,6);
  return bVar1;
}

/* ref: FUN_00794ef0 */
GEN_FRAME uint GEN_THISCALL F_00794ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x794ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar3;
  piVar1 = (int *)*param_3;
  uVar5 = piVar1[5];
  if ((uVar5 & 4) != 0) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
    *(undefined1 *)(param_2 + 0x15) = 0;
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_FWD);
    return uVar5;
  }
  if ((uVar5 & 0x8010) != 0) {
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x24)) = param_1;
    uVar2 = *puVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar2;
    uVar2 = puVar4[1];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x34)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x18)));
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
    *(undefined1 *)(param_2 + 0x15) = 1;
    puVar6 = &(*(uint *)(gen_frame + 0x48));
    iVar7 = 5;
    do {
      puVar6 = puVar6 - 2;
      uVar5 = F_005a2670(puVar6 GEN_EDX_ARG);
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return uVar5;
  }
  if ((uVar5 & 0x200) == 0) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
    *(undefined1 *)(param_2 + 0x15) = 0;
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
    return uVar5;
  }
  if (piVar1 == (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1 - 0x21;
  }
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)((int)this + 0x194);
  uVar5 = 0;
  do {
    if (*(*(int * PTR32 *)(gen_frame + 0x14)) == 0) {
      (*(uint *)(gen_frame + 0x10)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x10)) = *(uint *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x70);
    }
    uVar3 = F_005b8800((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    if ((*(uint *)(gen_frame + 0x10)) == uVar3) goto LAB_0079503d;
    (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x14)) + 1;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 5);
  uVar5 = 0;
LAB_0079503d: ;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  iVar7 = 5;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x24)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x18)));
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  puVar6 = &(*(uint *)(gen_frame + 0x48));
  do {
    puVar6 = puVar6 - 2;
    uVar5 = F_005a2670(puVar6 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_007950e0 */
GEN_FRAME uint GEN_THISCALL F_007950e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7950e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  uVar1 = F_0042a990(*(int *)((int)this + 0x188) + 0x9c GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x1c)) = uVar1;
  uVar1 = F_0042a990((int)this + 0x228b4 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00557670(param_1 GEN_EDX_ARG,0);
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 5;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007951b0 */
GEN_FRAME uint GEN_THISCALL F_007951b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7951b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00557670(param_1 GEN_EDX_ARG,0);
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar2 = 5;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00795230 */
GEN_FRAME uint GEN_THISCALL F_00795230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte * pbVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  bool bVar6;
  uint local_8;
  
  uVar3 = F_0042b790(((undefined *)GEN_TOP((*(int *)((int)this + 0x188) + 0x9c))) GEN_EDX_FWD);
  if (uVar3 == 0) {
LAB_00795315: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400) GEN_EDX_ARG,0);
    return uVar3;
  }
  bVar2 = F_00563470(*(undefined4 *)((int)this + 0x18c) GEN_EDX_ARG);
  if (bVar2 != 0) {
    iVar1 = *(int *)((int)this + 0x18c);
    local_8 = 0;
    pbVar4 = (byte *)F_0042a990(iVar1 + 0x9c GEN_EDX_ARG);
    uVar3 = local_8;
    do {
      if ((pbVar4 == (byte *)0x0) || (*pbVar4 == 0)) {
        uVar5 = F_0042b790((undefined *)(iVar1 + 0x9c) GEN_EDX_ARG);
        if (uVar3 == uVar5) {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400) GEN_EDX_ARG,0);
        }
        return uVar5;
      }
      uVar5 = F_0042acc0((uint)*pbVar4);
      if (uVar5 == 1) {
        if (*pbVar4 != 0x20) {
          bVar6 = *pbVar4 == 0xd;
          goto LAB_007952a2;
        }
      }
      else {
        if (((uVar5 != 3) || (*pbVar4 != 0xe3)) || (pbVar4[1] != 0x80)) goto LAB_007952e7;
        bVar6 = pbVar4[2] == 0x80;
LAB_007952a2: ;
        if (!bVar6) {
LAB_007952e7: ;
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400) GEN_EDX_ARG,1);
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      pbVar4 = pbVar4 + uVar5;
    } while( true );
  }
  if (*(int *)((int)this + 0x22908) == 0) {
    bVar2 = F_00563470(*(undefined4 *)((int)this + 0x18c) GEN_EDX_ARG);
    if (bVar2 == 0) goto LAB_00795315;
    if (*(int *)((int)this + 0x22908) == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400) GEN_EDX_ARG,1);
  return uVar3;
}

/* ref: Client::UI2::AddonLetterEditor::vf52 */
GEN_FRAME byte GEN_THISCALL F_00795350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x795350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * this_00;
  int iVar1;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if ((*param_1 == 5) && ((char)param_1[1] == '\0')) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0xc)) = 6;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x38));
    iVar1 = 5;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00795420 */
GEN_FRAME uint GEN_THISCALL F_00795420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x795420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)*param_2;
  uVar1 = F_0042a990(param_1 * 0x58 + 0x1b0 + (int)this GEN_EDX_FWD);
  uVar1 = F_00584110(this_00 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_00795450 */
GEN_FRAME uint GEN_THISCALL F_00795450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x795450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x194);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84 GEN_EDX_FWD);
  *(int *)(uVar2 + 4) = param_1;
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x194);
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84 GEN_EDX_ARG)));
  *puVar3 = 0x7d2;
  return (uint)puVar3;
}

/* ref: FUN_007954a0 */
GEN_NOFRAME uint GEN_THISCALL F_007954a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7954a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7eac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::UI2::AddonRequest::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00795520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(undefined2 *)(this + 0x136) = 0x17;
  return 0x17;
}

/* ref: Client::UI2::AddonRequest::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00795550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"Request",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonRequest::vf46 */
GEN_FRAME byte GEN_THISCALL F_00795560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    F_00589280(*(undefined * PTR32 *)(this + 0x1ac) GEN_EDX_FWD,uVar1);
    if ((param_2[0x10] & 0xf) == 0) {
      F_00589280(*(undefined * PTR32 *)(this + 0x1b0) GEN_EDX_ARG,0);
      return 1;
    }
    F_00589280(*(undefined * PTR32 *)(this + 0x1b0) GEN_EDX_ARG,*(undefined4 *)(param_2 + 0x14));
  }
  return 1;
}

/* ref: Client::UI2::AddonRequest::vf52 */
GEN_FRAME byte GEN_THISCALL F_007955d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7955d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * this_00;
  int iVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*param_1 == 5) && ((char)param_1[1] == '\0')) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
    *(undefined4 *)(this + 0x1e0) = 0xffffffff;
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar1 = 3;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI2::AddonRequest::vf25 */
GEN_FRAME uint GEN_THISCALL F_00795670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007956e0 */
GEN_FRAME uint GEN_THISCALL F_007956e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7956e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00795750 */
GEN_FRAME uint GEN_THISCALL F_00795750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007957c0 */
GEN_FRAME uint GEN_THISCALL F_007957c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7957c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint * this_00;
  int iVar7;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar4;
  uVar5 = *(uint *)(*param_3 + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  ((byte *)(gen_frame + 0x8))[4] = (char)uVar5;
  ((byte *)(gen_frame + 0x8))[5] = (char)(uVar5 >> 8);
  ((byte *)(gen_frame + 0x8))[6] = (char)(uVar5 >> 0x10);
  ((byte *)(gen_frame + 0x8))[7] = (char)(uVar5 >> 0x18);
  if ((uVar5 & 4) != 0) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
    *(undefined1 *)(param_2 + 0x15) = 0;
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_FWD);
    return uVar5;
  }
  if (param_1 != 5) goto LAB_0079584f;
  bVar3 = F_0055a440(param_3[1] GEN_EDX_ARG);
  if (bVar3 == 0) {
LAB_0079582e: ;
    ((byte *)(gen_frame + 0x8))[8] = 1;
    ((byte *)(gen_frame + 0x8))[8] = 1;
  }
  else {
    uVar5 = F_0055a350(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x180) GEN_EDX_ARG);
    uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
    ((byte *)(gen_frame + 0x8))[8] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = uVar1 & 0xffffff00;
    if ((char)uVar5 == '\0') goto LAB_0079582e;
  }
  uVar5 = F_0055dcb0();
  F_005b1490((undefined *)(uVar5 + 0x3c) GEN_EDX_ARG,param_3,param_3[1],(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)));
LAB_0079584f: ;
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_3 + 0x28))((int *)*param_3 GEN_EDX_ARG)));
  uVar1 = puVar6[1];
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar2 = *puVar6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x25;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,4);
  (*(int *)(gen_frame + 0x34)) = param_1;
  uVar5 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38) GEN_EDX_ARG,((byte *)(gen_frame + 0x8)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x18)));
  F_005a2670(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar7 = 3;
  do {
    this_00 = this_00 - 2;
    uVar5 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00795900 */
GEN_FRAME uint GEN_THISCALL F_00795900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x795900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x198);
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x28))))(iVar1 + 0x84 GEN_EDX_FWD)));
  puVar3[1] = param_1;
  *puVar3 = 0x25;
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b990(uVar4 GEN_EDX_ARG);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 0x2c) + 0x20))) + 0x10 +
                  ((uint)*(ushort *)(iVar1 + 0x9c) * 5 + 0x51) * 4)));
  F_00561860(*(undefined * PTR32 *)(iVar1 + 0xa4) GEN_EDX_ARG,(uint)((byte)iVar2 & 1));
  uVar4 = F_005a03c0(*(undefined * PTR32 *)(iVar1 + 0xa4) GEN_EDX_ARG,iVar2 >> 1);
  return uVar4;
}

/* ref: FUN_00795980 */
GEN_FRAME uint GEN_THISCALL F_00795980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x795980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar2 = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00795a00 */
GEN_FRAME byte GEN_STDCALL F_00795a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795a00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  uint uVar1;
  
  if (param_1 != 0) {
    if ((1 < param_2) || ((param_2 == 1 && ((*(int *)&gen_a2) == 5)))) {
      this = *(undefined * PTR32 *)(param_1 + 0xbc);
      uVar1 = F_00560910(param_2);
      F_00584110(this GEN_EDX_ARG,uVar1);
      return 1;
    }
    F_00584110(*(undefined * PTR32 *)(param_1 + 0xbc) GEN_EDX_ARG,"");
  }
  return 0;
}

/* ref: FUN_00795a50 */
GEN_NOFRAME uint GEN_THISCALL F_00795a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c7fac));
  F_0042c880((undefined *)((int)this + 0x2208) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x21b4) GEN_EDX_ARG);
  iVar2 = 0x2d;
  pvVar3 = (undefined *)((int)this + 0x21b4);
  do {
    F_0042c880((undefined *)((int)pvVar3 - 0x54) GEN_EDX_ARG);
    F_0042c880((undefined *)((int)pvVar3 - 0xa8) GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
    pvVar3 = (undefined *)((int)pvVar3 - 0xa8);
  } while (-1 < iVar2);
  F_0042c880((undefined *)((int)this + 0x290) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x23c) GEN_EDX_ARG);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailA::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00795ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] | 0x20);
  this[0xfa] = (undefined1)((byte)this[0xfa] & 0xbf);
  *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 0x8000;
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailA::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00795af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SocialDetailA",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSocialDetailA::vf5 */
GEN_FRAME uint GEN_THISCALL F_00795b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x795b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 == 3) || (uVar1 == 2)) {
    uVar2 = *(undefined4 *)(this + 0xa4);
    uVar4 = 0;
    pAVar3 = this;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00 GEN_EDX_ARG,uVar2,pAVar3,uVar4);
    F_00594790(this GEN_EDX_ARG);
  }
  uVar1 = F_005a89b0(this GEN_EDX_ARG,param_1,1);
  return uVar1;
}

/* ref: FUN_00795b50 */
GEN_NOFRAME uint GEN_THISCALL F_00795b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x88))) != '\0');
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x88))) != '\0') {
    uVar1 = uVar1 | 2;
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x88))) != '\0') {
    uVar1 = uVar1 | 4;
  }
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x88))) != '\0') {
    uVar1 = uVar1 | 8;
  }
  if (uVar1 == 0) {
    uVar1 = F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2e8) * 4 + 0x1ac))) GEN_EDX_FWD,1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailA::vf25 */
GEN_FRAME uint GEN_THISCALL F_00795bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00795c00 */
GEN_FRAME uint GEN_THISCALL F_00795c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x795c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (param_1 != 3) {
    F_0042e430((undefined *)((int)this + 0x23c) GEN_EDX_FWD,param_2);
    F_0042e430((undefined *)((int)this + 0x290) GEN_EDX_ARG,param_3);
    if (param_1 == 0) {
      return 2;
    }
  }
  return 0;
}

/* ref: FUN_00795c50 */
GEN_FRAME uint GEN_THISCALL F_00795c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00795c90 */
GEN_FRAME unsigned int GEN_THISCALL F_00795c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795c90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined * pvVar4;
  uint3 uVar7;
  int iVar5;
  undefined4 * puVar6;
  int iVar8;
  undefined4 uVar9;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 8)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x37c)));
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),iVar1 == iVar2);
  if (((iVar1 == iVar2) && (iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x380))), iVar8 != 0)) &&
     (pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar8 * 4 + 0x1b8))), pvVar4 != (undefined *)0x0)) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e4))) = iVar8;
    F_0059dde0(pvVar4 GEN_EDX_FWD,1);
    F_005614a0(pvVar4 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 * PTR32 *)&gen_args[2]));
    uVar9 = 1;
    pvVar4 = (undefined *)F_00561550(pvVar4 GEN_EDX_ARG,2);
    F_0055a300(pvVar4 GEN_EDX_ARG,uVar9);
  }
  puVar6 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc)));
  iVar8 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x1;
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar6;
  do {
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2ec))) & (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x8))) != 0) {
      piVar3 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
      uVar7 = (uint3)((uint)((int)(uintptr_t)puVar6) >> 8);
      if ((*((char *)GEN_TOP((iVar8 + 0x360 + (int)(*(undefined * PTR32 *)&gen_args[0])))) == '\0') || (iVar1 != iVar2)) {
        iVar5 = (uint)uVar7 << 8;
      }
      else {
        iVar5 = CONCAT31(uVar7,1);
      }
      F_0059dde0(piVar3 GEN_EDX_ARG,iVar5);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
    }
    (*(undefined4 * PTR32 *)&gen_args[2]) = (*(undefined4 * PTR32 *)&gen_args[2]) + 1;
    iVar8 = iVar8 + 1;
    puVar6 = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x8))) << 1 | (uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) < 0));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
  } while (iVar8 < 0x1c);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e4)));
  if (((0 < iVar1) && (iVar1 < 0x1d)) &&
     (piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 4 + 0x1b8))), piVar3 != (int *)0x0)) {
    F_0059dde0(piVar3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
    F_0055a370(piVar3[0x1c] GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_00795da0 */
GEN_FRAME uint GEN_THISCALL F_00795da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x795da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = param_1 * 0xa8 + 900 + (int)this;
  this_00 = (undefined *)*param_2;
  uVar2 = F_0042a990(iVar1 + 0x54 GEN_EDX_FWD);
  F_00584110(this_00 GEN_EDX_ARG,uVar2);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = F_0056c3b0(iVar1);
  uVar2 = F_005951c0(param_3 GEN_EDX_ARG,uVar2,uVar3,uVar4);
  return uVar2;
}

/* ref: FUN_00795df0 */
GEN_NOFRAME uint GEN_THISCALL F_00795df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c80ac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  F_0042b630((int)this + 0x238 GEN_EDX_ARG);
  F_0042b630((int)this + 0x28c GEN_EDX_ARG);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: FUN_00795e90 */
GEN_NOFRAME uint GEN_THISCALL F_00795e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c80ac));
  F_0042c880((undefined *)((int)this + 0x28c) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x238) GEN_EDX_ARG);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00795ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"SocialDetailB",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf5 */
GEN_FRAME uint GEN_THISCALL F_00795ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x795ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 == 3) || (uVar1 == 2)) {
    uVar2 = *(undefined4 *)(this + 0xa4);
    uVar4 = 0;
    pAVar3 = this;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00 GEN_EDX_ARG,uVar2,pAVar3,uVar4);
    F_00594790(this GEN_EDX_ARG);
  }
  uVar1 = F_005a89b0(this GEN_EDX_ARG,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00795f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x795f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,9,0);
  F_005a92d0(this GEN_EDX_ARG,0,8,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf47 */
GEN_FRAME uint GEN_THISCALL F_00795f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x795f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  char * pcVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  uint uVar8;
  undefined * puVar9;
  undefined * pvVar10;
  undefined3 extraout_var = 0;
  int iVar11;
  undefined * pAVar12;
  float10 fVar13;
  
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x18)) = *(int *)(uVar5 + 0x24);
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b9a0(uVar5 GEN_EDX_ARG);
  iVar7 = *(int *)(uVar5 + 0x20);
  F_00584110(*(undefined * PTR32 *)(this + 0x1b0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x100))));
  pcVar6 = (char *)F_0055aaf0(*(undefined4 *)(this + 0x1a4) GEN_EDX_ARG);
  pcVar2 = *((char * PTR32 *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0xfc)));
  if ((((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) || (pcVar2 == (char *)0x0)) ||
     (*pcVar2 == '\0')) {
    F_0059d6a0(this GEN_EDX_ARG,0x11,1,0);
  }
  else {
    F_0059d6a0(this GEN_EDX_ARG,0x65,1,0);
    F_005600b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0xa4))));
    F_00560080(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0xa8))));
    F_005959f0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    F_00584110(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,pcVar2);
    uVar5 = F_00577bc0(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f(uVar5);
    dVar3 = (double)(int)uVar5;
    if ((int)uVar5 < 0) {
      dVar3 = dVar3 + (double)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(double *)(gen_frame + 0x10)) = dVar3;
    fVar13 = F_00559d60(*(undefined4 *)(this + 0x1a0) GEN_EDX_ARG);
    fVar1 = (float)(fVar13 + (float10)(*(double *)(gen_frame + 0x10)));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = fVar1;
    (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x10)) + 0))));
    F_00559e70(*(undefined4 *)(this + 0x1a4) GEN_EDX_ARG,fVar1);
  }
  iVar11 = (*(int *)(gen_frame + 0x18));
  if (*((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + 0xa0))) < 1) {
    F_0055a300(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0);
    F_0042aca0(this + 0x28c GEN_EDX_ARG);
  }
  else {
    F_0055a300(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,1);
    F_00591c00(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar11 + 0x20) + 0xa0))),0);
    F_0042e430(this + 0x28c GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0x104))));
  }
  iVar7 = -0x11c - (int)this;
  pAVar12 = this + 0x1c8;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f(iVar7);
  (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44(iVar7,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x10)) + 0))));
  iVar11 = 0x1c;
  while( true ) {
    uVar5 = *((uint *)GEN_TOP((pAVar12 + *(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + iVar7)));
    uVar8 = uVar5 & 0xffff;
    if (uVar8 == 0) {
      puVar9 = &REFG(undefined, 0x10c179c);
    }
    else {
      puVar9 = (undefined *)F_00560910(uVar8);
    }
    pvVar10 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar12 GEN_EDX_ARG,3);
    F_00584110(pvVar10 GEN_EDX_ARG,puVar9);
    uVar5 = (uint)((byte)(uVar5 >> 0x10) & 1);
    pvVar10 = (undefined *)F_00561550(*(undefined * PTR32 *)pAVar12 GEN_EDX_ARG,2);
    bVar4 = F_0055a300(pvVar10 GEN_EDX_ARG,uVar5);
    pAVar12 = pAVar12 + 4;
    iVar11 = iVar11 - 1;
    if (iVar11 == 0) break;
    iVar7 = (int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)));
  }
  return CONCAT31(extraout_var,bVar4);
}

/* ref: Client::UI2::AddonSocialDetailB::vf53 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00796160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x796160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::UI2::AddonSocialDetailB::vf25 */
GEN_FRAME uint GEN_THISCALL F_00796170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonSocialDetailB::vf2 */
GEN_FRAME uint GEN_THISCALL F_007961b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7961b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined4 uVar3;
  
  if ((short)param_1 == 6) {
    F_00560760(((uint *)(gen_frame + 0x0)) GEN_EDX_FWD);
    if ((*(uint *)&gen_a2) == 0x1c) {
      if (**(char * PTR32 *)(this + 0x238) != '\0') {
        uVar2 = F_0042a990(this + 0x238 GEN_EDX_ARG);
        AVar1 = this[0x13a];
        ((uint *)(gen_frame + 0x0))[0] = uVar2;
        uVar2 = F_0055dcb0();
        uVar3 = *(undefined4 *)(this + 0x188);
        goto LAB_0079623f;
      }
    }
    else if (((*(uint *)&gen_a2) == 0x1d) && (**(char * PTR32 *)(this + 0x28c) != '\0')) {
      uVar2 = F_0042a990(this + 0x28c GEN_EDX_ARG);
      AVar1 = this[0x13a];
      ((uint *)(gen_frame + 0x0))[0] = uVar2;
      uVar2 = F_0055dcb0();
      uVar3 = *(undefined4 *)(this + 400);
LAB_0079623f: ;
      F_00588780((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,2,(uint)(byte)AVar1,uVar3,((uint *)(gen_frame + 0x0)),0,0);
      uVar2 = F_00557670(param_3 GEN_EDX_ARG,0);
      return uVar2;
    }
  }
  else {
    if ((short)param_1 != 7) {
      return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
    }
    if ((0x1b < (*(uint *)&gen_a2)) && ((*(uint *)&gen_a2) < 0x1e)) {
      AVar1 = this[0x13a];
      uVar2 = F_0055dcb0();
      F_00596cb0((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,(uint)(byte)AVar1,0);
    }
  }
  uVar2 = F_00557670(param_3 GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: FUN_007962b0 */
GEN_NOFRAME uint GEN_THISCALL F_007962b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7962b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c81ac));
  iVar2 = (int)this + 0x180;
  iVar1 = 9;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0x4c8;
  iVar1 = 0x1f;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined4 *)((int)this + 0x1050) = 0;
  *(undefined4 *)((int)this + 0x1054) = 0;
  *(undefined4 *)((int)this + 0x1058) = 0;
  *(undefined4 *)((int)this + 0x105c) = 0;
  *(undefined4 *)((int)this + 0x1060) = 0;
  F_00c48350((undefined *)((int)this + 0xf48),0,0x108);
  return (uint)this;
}

/* ref: FUN_00796340 */
GEN_NOFRAME uint GEN_THISCALL F_00796340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c81ac));
  pvVar2 = (undefined *)((int)this + 0xf48);
  iVar3 = 0x1f;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_FWD);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar2 = (undefined *)((int)this + 0x4c8);
  iVar3 = 9;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007963a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7963a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007963d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7963d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"PcSearchDetail",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf5 */
GEN_FRAME uint GEN_THISCALL F_007963e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7963e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if ((uVar1 == 3) || (uVar1 == 2)) {
    uVar2 = *(undefined4 *)(this + 0xa4);
    uVar4 = 0;
    pAVar3 = this;
    this_00 = (undefined *)F_0055dcb0();
    F_0059b300(this_00 GEN_EDX_ARG,uVar2,pAVar3,uVar4);
    F_00594790(this GEN_EDX_ARG);
  }
  uVar1 = F_005a89b0(this GEN_EDX_ARG,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf25 */
GEN_FRAME uint GEN_THISCALL F_00796430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonPcSearchDetail::vf58 */
GEN_FRAME uint GEN_THISCALL F_00796460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x796460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  short sVar1;
  int * piVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  
  uVar3 = (short)param_2 + (short)param_4;
  uVar4 = F_0055dcb0();
  sVar1 = *(short *)(uVar4 + 0x238);
  uVar4 = F_0055dcb0();
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar4 + 0x14) + 0xd8)));
  uVar4 = (uint)uVar3;
  if (piVar2 != (int *)0x0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_ARG,0);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,0);
    uVar7 = (sVar1 - (short)uVar5) - (short)uVar6;
    if ((short)uVar7 < (short)uVar3) {
      uVar4 = (uint)uVar7;
    }
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG,param_1 + param_3,uVar4);
  return uVar4;
}

/* ref: FUN_007964e0 */
GEN_FRAME uint GEN_THISCALL F_007964e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7964e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0xf60);
  iVar2 = 10;
  do {
    uVar1 = 0;
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar1 = F_0059dde0((undefined *)*puVar4 GEN_EDX_FWD,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00796520 */
GEN_FRAME uint GEN_THISCALL F_00796520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x796520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0xf88);
  iVar2 = 0x20;
  do {
    uVar1 = 0;
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar1 = F_0059dde0((undefined *)*puVar4 GEN_EDX_FWD,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00796560 */
GEN_FRAME uint GEN_THISCALL F_00796560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x796560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x1008);
  iVar2 = 9;
  do {
    uVar1 = param_1;
    if (*(int *)((int)this + param_1 * 4 + 0x1008) != 0) {
      uVar1 = F_0059dde0((undefined *)*puVar4 GEN_EDX_FWD,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_007965c0 */
GEN_FRAME uint GEN_THISCALL F_007965c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7965c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x102c);
  iVar2 = 4;
  do {
    uVar1 = 0;
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar1 = F_0059dde0((undefined *)*puVar4 GEN_EDX_FWD,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00796600 */
GEN_FRAME uint GEN_THISCALL F_00796600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x796600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  bVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x103c);
  iVar2 = 3;
  do {
    uVar1 = 0;
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar1 = F_0059dde0((undefined *)*puVar4 GEN_EDX_FWD,(uint)((param_1 & 1 << (bVar3 & 0x1f)) != 0));
    }
    bVar3 = bVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00796660 */
GEN_FRAME uint GEN_STDCALL F_00796660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x796660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00559b90(param_2 GEN_EDX_ARG);
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = F_00591c00(this GEN_EDX_ARG,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00796690 */
GEN_NOFRAME uint GEN_THISCALL F_00796690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c82ac));
  iVar2 = (int)this + 0x180;
  iVar1 = 9;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  iVar2 = (int)this + 0x4c8;
  iVar1 = 0x1f;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0xf48) = 0;
  *(undefined4 *)((int)this + 0xf4c) = 0;
  F_0042b630((int)this + 0xf58 GEN_EDX_ARG);
  F_0042b630((int)this + 0xfac GEN_EDX_ARG);
  F_0042b630((int)this + 0x1000 GEN_EDX_ARG);
  F_0042b630((int)this + 0x1054 GEN_EDX_ARG);
  F_0042b630((int)this + 0x10a8 GEN_EDX_ARG);
  F_0042b630((int)this + 0x10fc GEN_EDX_ARG);
  iVar2 = (int)this + 0x1150;
  iVar1 = 0x47;
  do {
    F_0042b630(iVar2 GEN_EDX_ARG);
    iVar2 = iVar2 + 0x54;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x100;
  *(undefined2 *)((int)this + 0x2a1c) = 0;
  *(undefined4 *)((int)this + 0x2a20) = 0;
  *(undefined4 *)((int)this + 0x2a24) = 0;
  *(undefined4 *)((int)this + 0x2a64) = 0;
  *(undefined4 *)((int)this + 0x2a68) = 0;
  *(undefined2 *)((int)this + 0x2a6c) = 0;
  *(undefined1 *)((int)this + 0x2a6e) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  F_00c48350((undefined *)((int)this + 0x2a28),0,0x3c);
  F_00c48350((undefined *)((int)this + 0x29b8),0,100);
  F_00c48350((undefined *)((int)this + 0x28f0),0,200);
  return (uint)this;
}

/* ref: FUN_007967d0 */
GEN_NOFRAME uint GEN_THISCALL F_007967d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7967d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c82ac));
  pvVar3 = (undefined *)((int)this + 0x28f0);
  iVar2 = 0x47;
  do {
    pvVar3 = (undefined *)((int)pvVar3 - 0x54);
    F_0042c880(pvVar3 GEN_EDX_FWD);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_0042c880((undefined *)((int)this + 0x10fc) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x10a8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1054) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1000) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xfac) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xf58) GEN_EDX_ARG);
  pvVar3 = (undefined *)((int)this + 0xf48);
  iVar2 = 0x1f;
  do {
    pvVar3 = (undefined *)((int)pvVar3 - 0x54);
    F_0042c880(pvVar3 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  pvVar3 = (undefined *)((int)this + 0x4c8);
  iVar2 = 9;
  do {
    pvVar3 = (undefined *)((int)pvVar3 - 0x54);
    F_0042c880(pvVar3 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearch::vf37 */
GEN_FRAME uint GEN_THISCALL F_00796880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if (*(int *)(this + 0x2a20) != 0) {
    F_00406810(*(int *)(this + 0x2a20));
    *(undefined4 *)(this + 0x2a20) = 0;
  }
  if (*(int *)(this + 0x2a64) != 0) {
    F_00406810(*(int *)(this + 0x2a64));
    *(undefined4 *)(this + 0x2a64) = 0;
  }
  iVar1 = *(int *)(this + 0x2a24);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 - 4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 - 0x54);
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    F_00406b30((int *)(iVar1 - 4));
    *(undefined4 *)(this + 0x2a24) = 0;
  }
  F_005a92d0(this GEN_EDX_ARG,0,0x21,0);
  F_005a92d0(this GEN_EDX_ARG,1,0x24,0);
  uVar3 = F_0055dcb0();
  F_00596cb0((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  F_00596b90((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  uVar3 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI2::AddonItemSearch::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00796960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ItemSearch",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonItemSearch::vf25 */
GEN_FRAME uint GEN_THISCALL F_00796970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_007969a0 */
GEN_FRAME uint GEN_THISCALL F_007969a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7969a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (uint)*(byte *)(param_1 + 0x29b8 + (int)this) * 0x10 + *(int *)((int)this + 0x2a64);
  F_005951c0(param_3 GEN_EDX_FWD,*(undefined4 *)(iVar3 + 4),0,0);
  pvVar1 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 4) GEN_EDX_ARG);
  F_00584110(pvVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
  pvVar1 = (undefined *)F_00559ba0(*(undefined4 *)(param_2 + 8) GEN_EDX_ARG);
  uVar2 = F_00584110(pvVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 0xc));
  return uVar2;
}

/* ref: FUN_00796a20 */
GEN_NOFRAME byte GEN_THISCALL F_00796a20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  pcVar3 = (char *)0x0;
  if (*(int *)((int)this + 0x2a28) != 0) {
    pcVar3 = (char *)F_0042a990(*(int *)((int)this + 0x2a28) + 0xf0 GEN_EDX_FWD);
  }
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  return pcVar3 != pcVar1;
}

/* ref: FUN_00796a50 */
GEN_FRAME uint GEN_STDCALL F_00796a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x796a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00559b90(param_2 GEN_EDX_ARG);
  uVar2 = F_0055da10(uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = F_0058f730((undefined *)(uVar2 + 4) GEN_EDX_ARG,param_3,param_4,6);
  }
  return uVar1;
}

/* ref: FUN_00796a80 */
GEN_FRAME uint GEN_THISCALL F_00796a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x796a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a2c) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x2a2c) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00796aa0 */
GEN_FRAME uint GEN_THISCALL F_00796aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x796aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2a44) + 0x28))))
                    (*(int * PTR32 *)((int)this + 0x2a44) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00796ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00796ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c83ac));
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  F_0042b630((int)this + 0x1ac GEN_EDX_ARG);
  F_0042b630((int)this + 0x200 GEN_EDX_ARG);
  F_0042b630((int)this + 0x254 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  return (uint)this;
}

/* ref: FUN_00796b40 */
GEN_NOFRAME uint GEN_THISCALL F_00796b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c83ac));
  F_0042c880((undefined *)((int)this + 0x254) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x200) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1ac) GEN_EDX_ARG);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf25 */
GEN_FRAME uint GEN_THISCALL F_00796b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00796bb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xfb] = (undefined1)((byte)this[0xfb] | 8);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00796bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x1a4) != 0) {
    F_00406810(*(int *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  uVar1 = F_0055dcb0();
  F_00596b90((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  F_00596cb0((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],0);
  F_005b0510((undefined *)this GEN_EDX_ARG);
  F_005a92d0(this GEN_EDX_ARG,0,0x21,0);
  uVar1 = F_005a92d0(this GEN_EDX_ARG,1,0x24,0);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00796c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x796c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ItemSearchResult",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonItemSearchResult::vf47 */
GEN_FRAME uint GEN_THISCALL F_00796c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x796c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_1 + 0x90);
  iVar1 = *(int *)(param_2 + 0x84);
  if ((uVar5 != 0) && (iVar1 != 0)) {
    uVar2 = *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x324)));
    F_0055a300(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_FWD,(uint)(uVar2 == 0));
    if ((int)uVar2 < 1) {
      if (uVar2 == 0) {
        F_0042e430(this + 0x1ac GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x324))));
        uVar5 = F_0042a990(this + 0x1ac GEN_EDX_ARG);
        F_00584110(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,uVar5);
        F_0059ead0(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,0,0,1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x74))))(*(int * PTR32 *)(this + 0x198) GEN_EDX_ARG,0xfffffffe,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x78))))(*(int * PTR32 *)(this + 0x198) GEN_EDX_ARG);
      }
    }
    else {
      F_00592700(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,0);
      if (*(int *)(this + 0x1a8) < (int)uVar2) {
        *(uint *)(this + 0x1a8) = uVar2;
        if (*(int *)(this + 0x1a4) != 0) {
          F_00406810(*(int *)(this + 0x1a4));
          *(undefined4 *)(this + 0x1a4) = 0;
        }
        piVar3 = (int *)F_00404270();
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(int *)(this + 0x1a8) * 0x1c,0x10);
        *(uint *)(this + 0x1a4) = uVar4;
      }
      puVar6 = *(undefined4 * PTR32 *)(this + 0x1a4);
      if (0 < (int)uVar2) {
        iVar7 = 0x330;
        param_2 = uVar2;
        do {
          puVar6[1] = *((undefined4 *)GEN_TOP((iVar7 - 4 + *(int *)(iVar1 + 0x20))));
          puVar6[2] = *((undefined4 *)GEN_TOP((iVar7 + *(int *)(iVar1 + 0x20))));
          puVar6[3] = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)(iVar1 + 0x20))));
          puVar6[4] = *((undefined4 *)GEN_TOP((iVar7 + 0xc + *(int *)(iVar1 + 0x20))));
          puVar6[5] = *((undefined4 *)GEN_TOP((iVar7 + 8 + *(int *)(iVar1 + 0x20))));
          *puVar6 = *((undefined4 *)GEN_TOP((iVar7 + 4 + *(int *)(uVar5 + 0x20))));
          *(bool *)((int)puVar6 + 0x19) = 0 < *((int *)GEN_TOP((iVar7 + *(int *)(uVar5 + 0x20))));
          *(undefined1 *)(puVar6 + 6) = *((undefined1 *)GEN_TOP((iVar7 + 8 + *(int *)(uVar5 + 0x20))));
          F_00596d70(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,*puVar6,0,0,0);
          iVar7 = iVar7 + 0x14;
          puVar6 = puVar6 + 7;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      F_0058d980(*(undefined4 *)(this + 0x198) GEN_EDX_ARG,uVar2);
    }
    F_0055a300(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_ARG,1);
    uVar5 = F_00584110(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x328))));
  }
  return uVar5;
}

/* ref: Client::UI2::AddonItemSearchResult::vf2 */
GEN_FRAME uint GEN_THISCALL F_00796e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x796e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined1 AVar2;
  int iVar3;
  char * pcVar4;
  char * pcVar5;
  uint uVar6;
  char * PTR32 * this_00;
  int iVar7;
  undefined4 uVar8;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0x17: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (param_2 != 3) {
      (*(uint *)(gen_frame + 0x4)) = 1;
    }
    (*(uint *)(gen_frame + 0x4)) = (uint)(param_2 != 3);
    uVar8 = 1;
    goto LAB_00796eb1;
  case 0x1f: ;
    iVar7 = param_4[2];
    if (((-1 < iVar7) && (*param_4 != 0)) && (*(int *)(*param_4 + 0x1e4) != 0)) {
      iVar3 = *(int *)(this + 0x1a4);
      F_00560760(&(*(char * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      uVar6 = F_00568410(*(undefined * PTR32 *)(*param_4 + 0x1e4) GEN_EDX_ARG);
      if ((uVar6 == 9) && (pcVar4 = *(char * PTR32 *)(iVar3 + iVar7 * 0x1c + 0x14), pcVar4 != (char *)0x0))
      {
        pcVar5 = pcVar4;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 != pcVar4 + 1) {
          iVar7 = *param_4;
          AVar2 = this[0x13a];
          (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar4;
          uVar8 = *(undefined4 *)(iVar7 + 0x1e4);
          uVar6 = F_0055dcb0();
          F_00588780((undefined *)(uVar6 + 0xe0) GEN_EDX_ARG,2,(uint)(byte)AVar2,uVar8,&(*(char * PTR32 *)(gen_frame + 0x10)),0,0);
          break;
        }
      }
      uVar8 = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined1 *)(gen_frame + 0x1b)) = (char)param_4[2];
      (*(undefined1 *)(gen_frame + 0x1a)) = 4;
      (*(undefined2 *)(gen_frame + 0x18)) = 0xffff;
      if (*param_4 != 0) {
        uVar8 = *(undefined4 *)(*param_4 + 0x70);
      }
      AVar2 = this[0x13a];
      uVar6 = F_0055dcb0();
      F_00588780((undefined *)(uVar6 + 0xe0) GEN_EDX_ARG,4,(uint)(byte)AVar2,uVar8,&(*(char * PTR32 *)(gen_frame + 0x10)),0,0);
    }
    break;
  case 0x20: ;
    uVar6 = F_0055dcb0();
    F_00594d90((undefined *)(uVar6 + 0xe0) GEN_EDX_ARG,0);
    break;
  case 0x21: ;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    iVar7 = param_4[2];
    (*(uint *)(gen_frame + 0x4)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0xc)) = iVar7;
    uVar8 = 2;
LAB_00796eb1: ;
    F_005a9110(this GEN_EDX_ARG,uVar8,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00557670(param_3 GEN_EDX_ARG,0);
  }
  this_00 = &(*(char * PTR32 *)(gen_frame + 0x10));
  iVar7 = 1;
  do {
    this_00 = this_00 - 2;
    uVar6 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar7 = iVar7 - 1;
  } while (-1 < iVar7);
  return uVar6;
}

/* ref: FUN_00797030 */
GEN_FRAME uint GEN_THISCALL F_00797030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x797030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)((int)this + 0x1a4) + param_1 * 0x1c;
  F_005951c0(param_3 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a4) + param_1 * 0x1c))),0,0);
  F_0055a300((undefined *)param_2[4] GEN_EDX_ARG,(uint)*(byte *)(iVar1 + 0x19));
  F_0055a300((undefined *)param_2[5] GEN_EDX_ARG,(uint)(*(char *)(iVar1 + 0x18) != '\0'));
  if (*(byte *)(iVar1 + 0x18) != 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = (uint)*(byte *)(iVar1 + 0x18);
    uVar4 = 0;
    pvVar2 = (undefined *)F_00559ba0(param_2[5] GEN_EDX_ARG);
    F_0057eb30(pvVar2 GEN_EDX_ARG,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  pvVar2 = (undefined *)F_00559ba0(*param_2 GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x10));
  pvVar2 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 4));
  pvVar2 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0xc));
  pvVar2 = (undefined *)F_00559ba0(param_2[3] GEN_EDX_ARG);
  uVar3 = F_00584110(pvVar2 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 8));
  return uVar3;
}

/* ref: FUN_007970f0 */
GEN_NOFRAME uint GEN_THISCALL F_007970f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7970f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c84ac));
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf25 */
GEN_FRAME uint GEN_THISCALL F_00797130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf37 */
GEN_FRAME uint GEN_THISCALL F_00797170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if (*(int *)(this + 0x184) != 0) {
    F_00406810(*(int *)(this + 0x184));
    *(undefined4 *)(this + 0x184) = 0;
  }
  iVar1 = *(int *)(this + 0x188);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 - 4);
    this_00 = (undefined *)(iVar2 * 0x54 + iVar1);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 - 0x54);
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    F_00406b30((int *)(iVar1 - 4));
    *(undefined4 *)(this + 0x188) = 0;
  }
  uVar3 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007971f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7971f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ItemSearchFilter",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonItemSearchFilter::vf2 */
GEN_FRAME uint GEN_THISCALL F_00797200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x797200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if ((short)param_1 == 0x17) {
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    if (param_2 == 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      if (*((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) != '\0') {
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x18)) = 1;
      }
    }
    else {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
    }
  }
  else {
    if ((short)param_1 != 0x23) goto LAB_007972a9;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
    uVar1 = *(undefined4 *)(param_4 + 8);
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
  }
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  F_00557670(param_3 GEN_EDX_ARG,0);
LAB_007972a9: ;
  iVar3 = 1;
  do {
    this_00 = this_00 - 8;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_007972d0 */
GEN_NOFRAME uint GEN_THISCALL F_007972d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7972d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c85ac));
  return (uint)this;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf25 */
GEN_FRAME uint GEN_THISCALL F_00797310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00797340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  this[0xf8] = (undefined1)((byte)this[0xf8] & 0xdf);
  *(undefined2 *)(this + 0x136) = 0x17;
  uVar1 = F_0055e2a0(this GEN_EDX_ARG,0x1000000,1);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00797370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x18c) != 0) {
    F_00406810(*(int *)(this + 0x18c));
    *(undefined4 *)(this + 0x18c) = 0;
  }
  F_005b0510((undefined *)this GEN_EDX_ARG);
  F_005a92d0(this GEN_EDX_ARG,0,0x21,0);
  uVar1 = F_005a92d0(this GEN_EDX_ARG,1,0x24,0);
  return uVar1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007973c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7973c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"ItemSearchHistory",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_007973d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7973d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf47 */
GEN_FRAME uint GEN_THISCALL F_007973e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7973e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 0x90);
  iVar2 = *(int *)(param_2 + 0x84);
  puVar5 = puVar1;
  if ((puVar1 != (undefined4 *)0x0) && (iVar2 != 0)) {
    uVar7 = *(uint *)(puVar1[8] + 0x968);
    if ((int)uVar7 < 1) {
      if (uVar7 == 0) {
        F_0055a300(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_FWD,1);
        F_0058d980(*(undefined4 *)(this + 0x180) GEN_EDX_ARG,0);
        puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x78))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG)));
      }
    }
    else {
      F_0055a300(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,0);
      F_0058d980(*(undefined4 *)(this + 0x180) GEN_EDX_ARG,uVar7);
      if (*(int *)(this + 400) < (int)uVar7) {
        *(uint *)(this + 400) = uVar7;
        if (*(int *)(this + 0x18c) != 0) {
          F_00406810(*(int *)(this + 0x18c));
          *(undefined4 *)(this + 0x18c) = 0;
        }
        piVar3 = (int *)F_00404270();
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(int *)(this + 400) * 0x14,0x10);
        *(uint *)(this + 0x18c) = uVar4;
      }
      puVar5 = *(undefined4 * PTR32 *)(this + 0x18c);
      if (0 < (int)uVar7) {
        iVar6 = 0xafc;
        iVar8 = 0x974;
        do {
          puVar5[1] = *((undefined4 *)GEN_TOP((iVar6 + *(int *)(iVar2 + 0x20))));
          puVar5[2] = *((undefined4 *)GEN_TOP((iVar6 + 4 + *(int *)(iVar2 + 0x20))));
          *puVar5 = *((undefined4 *)GEN_TOP((iVar6 + 8 + *(int *)(iVar2 + 0x20))));
          puVar5[3] = *((undefined4 *)GEN_TOP((iVar6 + 0xc + *(int *)(iVar2 + 0x20))));
          *(bool *)(puVar5 + 4) = 0 < *(int *)(iVar8 + puVar1[8]);
          iVar8 = iVar8 + 0x18;
          iVar6 = iVar6 + 0x14;
          puVar5 = puVar5 + 5;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        return (uint)puVar5;
      }
    }
  }
  return (uint)puVar5;
}

/* ref: Client::UI2::AddonItemSearchHistory::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00797520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x797520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: FUN_00797530 */
GEN_FRAME uint GEN_THISCALL F_00797530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x797530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18c) + param_1 * 0x14)));
  if (*((char *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x10 + param_1 * 0x14))) == '\0') {
    uVar4 = 0x65;
  }
  else {
    uVar4 = 0x66;
  }
  F_0059d670((undefined *)param_2[4] GEN_EDX_FWD,uVar4);
  pvVar2 = (undefined *)F_00559ba0(*param_2 GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,*puVar1);
  pvVar2 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,puVar1[1]);
  pvVar2 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,puVar1[2]);
  pvVar2 = (undefined *)F_00559ba0(param_2[3] GEN_EDX_ARG);
  uVar3 = F_00584110(pvVar2 GEN_EDX_ARG,puVar1[3]);
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_007975e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7975e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyRights",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf46 */
GEN_FRAME byte GEN_THISCALL F_007975f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7975f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_FWD,uVar1);
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG,uVar1);
    F_0056b300(this GEN_EDX_ARG,0);
    F_00594790(this GEN_EDX_ARG);
  }
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf25 */
GEN_FRAME uint GEN_THISCALL F_00797650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf47 */
GEN_FRAME uint GEN_THISCALL F_007976b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7976b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  uVar2 = *(uint *)(param_2 + 0xa0);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    pAVar3 = this + 0x180;
    param_1 = 2;
    do {
      if (*(undefined * PTR32 *)pAVar3 != (undefined *)0x0) {
        F_0059dde0(*(undefined * PTR32 *)pAVar3 GEN_EDX_FWD,0);
      }
      pAVar3 = pAVar3 + 4;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    if (*((char *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xcc))) == '\x01') {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,1);
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x15c)));
      F_0059d670(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0x65);
      uVar5 = 0x2b;
      uVar4 = 0x49;
    }
    else {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,1);
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x120)));
      if (iVar6 == 0) {
        uVar4 = 0x66;
      }
      else {
        uVar4 = 0x65;
      }
      F_0059d670(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar4);
      uVar5 = 0x17;
      uVar4 = 0x34;
    }
    uVar2 = F_00596e00(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,iVar1,uVar2,uVar4,uVar5,1,1,iVar6,this + 400);
  }
  return uVar2;
}

/* ref: FUN_007977a0 */
GEN_FRAME uint GEN_THISCALL F_007977a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7977a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00797800 */
GEN_NOFRAME uint GEN_THISCALL F_00797800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
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
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c87bc));
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_007978d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7978d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x2a,0);
  F_005a92d0(this GEN_EDX_ARG,0,0x26,0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00797900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyApplication",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_00797910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x797910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00797920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x797920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  undefined1 * this_00;
  
  this_00 = (gen_frame + 0x1c);
  if ((short)param_1 == 0x17) {
    F_00557670(param_3 GEN_EDX_FWD,0);
    iVar1 = param_2 - 1;
    if (param_2 - 2U < 3) {
LAB_00797993: ;
      (*(undefined4 *)(gen_frame + 0xc)) = 3;
      (*(undefined4 *)(gen_frame + 0x10)) = 2;
      (*(undefined4 *)(gen_frame + 0x14)) = 4;
      (*(int *)(gen_frame + 0x18)) = iVar1;
      F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar1 = 1;
      do {
        this_00 = this_00 - 8;
        F_005a2670(this_00 GEN_EDX_ARG);
        iVar1 = iVar1 - 1;
      } while (-1 < iVar1);
      return;
    }
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 0: ;
      iVar1 = 0;
      goto LAB_00797993;
    default: ;
      goto switchD_0079794b_caseD_1;
    case 4: ;
    case 5: ;
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG);
      return;
    case 6: ;
      uVar2 = 0;
      break;
    case 7: ;
      uVar2 = 1;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(int *)(gen_frame + 0x18)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x14)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
switchD_0079794b_caseD_1: ;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyOrganizeSheet::vf25 */
GEN_FRAME uint GEN_THISCALL F_00797a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_FWD,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00797a30 */
GEN_FRAME unsigned int GEN_STDCALL F_00797a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x797a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00561550(param_1 GEN_EDX_ARG,2);
    if (pvVar1 != (undefined *)0x0) {
      F_00591c00(pvVar1 GEN_EDX_ARG,param_2,0);
    }
    pvVar1 = (undefined *)F_00561530(param_1 GEN_EDX_ARG,3);
    if (pvVar1 != (undefined *)0x0) {
      F_00584110(pvVar1 GEN_EDX_ARG,param_3);
    }
  }
  return;
}

/* ref: FUN_00797a80 */
GEN_NOFRAME uint GEN_THISCALL F_00797a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
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
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c88bc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00797b20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyProfile",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00797b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x797b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055e2f0(this GEN_EDX_FWD,1);
  *(uint *)(this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,0x14);
  *(uint *)(this + 0x188) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,6);
  *(uint *)(this + 0x18c) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,5);
  *(uint *)(this + 400) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,7);
  *(uint *)(this + 0x194) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,8);
  *(uint *)(this + 0x198) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,0xc);
  *(uint *)(this + 0x19c) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,0xe);
  *(uint *)(this + 0x1a0) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,0x10);
  *(uint *)(this + 0x1a4) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,0x12);
  *(uint *)(this + 0x1a8) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,0x16);
  *(uint *)(this + 0x1ac) = uVar1;
  uVar1 = F_0055e360(this GEN_EDX_ARG,3);
  *(uint *)(this + 0x1b0) = uVar1;
  uVar1 = F_0055e360(this GEN_EDX_ARG,4);
  *(uint *)(this + 0x1b4) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf46 */
GEN_FRAME byte GEN_THISCALL F_00797c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x797c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  char * pcVar2;
  undefined4 uVar3;
  
  if ((param_2 != (byte *)0x0) && (0 < param_1)) {
    if (((param_2[0x18] & 0xf) == 0) || (iVar1 = *(int *)(param_2 + 0x1c), iVar1 == 0)) {
      F_0059d640(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_FWD,0x65);
      return 1;
    }
    F_0059d640(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,0x11);
    if (iVar1 == 2) {
      uVar3 = 0x66;
    }
    else if (iVar1 == 3) {
      uVar3 = 0x65;
    }
    else {
      uVar3 = 0x11;
    }
    F_0059d640(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar3);
    if ((param_2[0x20] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x24);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar3);
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    F_005600b0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3);
    if ((param_2[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    F_00560080(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3);
    F_005959f0(*(undefined * PTR32 *)(this + 0x1b0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    if ((param_2[0x10] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x14);
    }
    F_00591c00(*(undefined * PTR32 *)(this + 0x1b4) GEN_EDX_ARG,uVar3,0);
    if ((param_2[0x30] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x34);
    }
    F_00584110(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,uVar3);
    if ((param_2[0x38] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x3c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,uVar3);
    if ((param_2[0x40] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x44);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,uVar3);
    if ((param_2[0x48] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_ARG,uVar3);
    if ((param_2[0x28] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
    }
    F_0057eb30(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,uVar3,0,0,0,0);
    if ((param_2[0x50] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x54);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,uVar3);
    if ((param_2[0x58] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x5c);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,uVar3);
    if ((((param_2[0x60] & 0xf) != 0) && (pcVar2 = *(char * PTR32 *)(param_2 + 100), pcVar2 != (char *)0x0)
        ) && (*pcVar2 != '\0')) {
      F_0059d670(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,0x65);
      F_00584110(*(undefined * PTR32 *)(this + 0x1ac) GEN_EDX_ARG,pcVar2);
      return 1;
    }
    F_0059d670(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,0x66);
  }
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyProfile::vf25 */
GEN_FRAME uint GEN_THISCALL F_00797e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00797e50 */
GEN_NOFRAME uint GEN_THISCALL F_00797e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c89bc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined1 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1a8) = 0;
  F_0042b630((int)this + 0x1ac GEN_EDX_ARG);
  F_0042b630((int)this + 0x200 GEN_EDX_ARG);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_00797ef0 */
GEN_NOFRAME uint GEN_THISCALL F_00797ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c89bc));
  F_0042c880((undefined *)((int)this + 0x200) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x1ac) GEN_EDX_ARG);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00797f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"MemberRankAssign",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankAssign::vf25 */
GEN_FRAME uint GEN_THISCALL F_00797f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x797f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00797fb0 */
GEN_FRAME uint GEN_STDCALL F_00797fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x797fb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (0xe < param_1) {
    return 0;
  }
  return param_1 + 0x65;
}

/* ref: FUN_00797fd0 */
GEN_FRAME uint GEN_THISCALL F_00797fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x797fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  if (param_1 < 0x10) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,0);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x14)) = (int)(short)uVar3 + (uVar2 & 0xffff);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x1c)) = (int)(short)uVar2;
    bVar1 = *(byte *)((int)this + param_1 + 400);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar1;
    F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_00 = this_00 - 2;
      uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_007980a0 */
GEN_FRAME uint GEN_THISCALL F_007980a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7980a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar2 = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00798100 */
GEN_FRAME uint GEN_THISCALL F_00798100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar2 = 3;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00798170 */
GEN_NOFRAME uint GEN_THISCALL F_00798170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
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
  F_00c48350((undefined *)((int)this + 0x18),0,0x30);
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00798240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"MemberRankEdit",0,6);
  return bVar1;
}

/* ref: FUN_00798250 */
GEN_FRAME byte GEN_THISCALL F_00798250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  uVar6 = 0;
  uVar4 = 1;
  piVar1 = (int *)((int)this + 0x19c);
  iVar5 = 2;
  do {
    if ((piVar1[-1] != 0) && (*(char *)(piVar1[-1] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((*piVar1 != 0) && (*(char *)(*piVar1 + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[1] != 0) && (*(char *)(piVar1[1] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[2] != 0) && (*(char *)(piVar1[2] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[3] != 0) && (*(char *)(piVar1[3] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[4] != 0) && (*(char *)(piVar1[4] + 0x88) != '\0')) {
      uVar6 = uVar6 | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    piVar1 = piVar1 + 6;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  if (uVar6 != *(uint *)((int)this + 0x224)) {
    return 1;
  }
  uVar4 = 0;
  iVar5 = 0;
  puVar7 = (undefined4 *)((int)this + 0x1d0);
  do {
    uVar6 = F_00562c60(*puVar7 GEN_EDX_FWD);
    bVar3 = (byte)iVar5;
    iVar5 = iVar5 + 2;
    puVar7 = puVar7 + 3;
    uVar4 = uVar4 | uVar6 << (bVar3 & 0x1f);
  } while (iVar5 < 10);
  uVar6 = F_00562c60(*(undefined4 *)((int)this + 0x20c) GEN_EDX_ARG);
  uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x218) GEN_EDX_ARG);
  return (uVar4 | uVar6 << 0xc | uVar2 << 0xe) != *(uint *)((int)this + 0x228);
}

/* ref: FUN_00798360 */
GEN_NOFRAME uint GEN_THISCALL F_00798360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  F_0059d6a0(this GEN_EDX_FWD,0x11,1,0);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,1);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,0);
  uVar1 = F_0055dcb0();
  uVar1 = F_00558e10(*(undefined4 *)(uVar1 + 0x18) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x21c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x21c) GEN_EDX_ARG);
  if (uVar1 != uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x220) + 0x3c))))(*(int * PTR32 *)((int)this + 0x220) GEN_EDX_ARG);
    if (uVar1 != uVar2) {
      uVar4 = 0;
      uVar3 = 1;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x198) + 0x3c))))(*(int * PTR32 *)((int)this + 0x198) GEN_EDX_ARG);
      uVar2 = F_0059b340(this GEN_EDX_ARG,uVar1,uVar3,uVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_007983e0 */
GEN_NOFRAME uint GEN_THISCALL F_007983e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7983e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  F_0059d6a0(this GEN_EDX_FWD,0x65,1,0);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,0);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,1);
  uVar1 = F_0055dcb0();
  uVar1 = F_00558e10(*(undefined4 *)(uVar1 + 0x18) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x21c) + 0x3c))))(*(int * PTR32 *)((int)this + 0x21c) GEN_EDX_ARG);
  if (uVar1 != uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x220) + 0x3c))))(*(int * PTR32 *)((int)this + 0x220) GEN_EDX_ARG);
    if (uVar1 != uVar2) {
      uVar4 = 0;
      uVar3 = 1;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d0) + 0x3c))))(*(int * PTR32 *)((int)this + 0x1d0) GEN_EDX_ARG);
      uVar2 = F_0059b340(this GEN_EDX_ARG,uVar1,uVar3,uVar4);
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf52 */
GEN_FRAME byte GEN_THISCALL F_00798460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x798460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 2) {
    uVar2 = F_0055dcb0();
    uVar2 = F_00558e10(*(undefined4 *)(uVar2 + 0x18) GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x21c) + 0x3c))))(*(int * PTR32 *)(this + 0x21c) GEN_EDX_ARG);
    if (uVar2 != uVar3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x220) + 0x3c))))(*(int * PTR32 *)(this + 0x220) GEN_EDX_ARG);
      if (uVar2 != uVar3) {
        F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x21c),1,0);
        return 1;
      }
    }
    return 0;
  }
  if (iVar1 != 0xf) {
    if (iVar1 == 0x10) {
      if (*((char *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))) == '\0') {
        F_00798360(this GEN_EDX_ARG);
        uVar2 = F_0055dcb0();
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),0xd);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      }
      return 1;
    }
    return 0;
  }
  if (*((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) == '\0') {
    F_007983e0(this GEN_EDX_ARG);
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00798570 */
GEN_FRAME unsigned int GEN_THISCALL F_00798570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x798570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  byte bVar2;
  
  if (param_1 == 6) {
    iVar1 = **(int * PTR32 *)((int)this + 0x21c);
    bVar2 = F_00798250(this GEN_EDX_FWD);
    ((code *)*(gen_code32 *)(iVar1 + 0x28))(*(undefined4 *)((int)this + 0x21c),(uint)(bVar2 != 0));
    F_00557670(param_2 GEN_EDX_ARG,0);
  }
  return;
}

/* ref: FUN_007985b0 */
GEN_FRAME uint GEN_THISCALL F_007985b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7985b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  uint * this_00;
  int * piVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  puVar6 = ((undefined4 *)(gen_frame + 0x10));
  iVar3 = 0x14;
  do {
    *puVar6 = 0;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,3);
  ((undefined4 *)(gen_frame + 0x10))[1] = 0;
  puVar4 = ((undefined1 *)(gen_frame + 0x20));
  piVar5 = (int *)((int)this + 0x198);
  (*(int *)(gen_frame + 0xc)) = 0xc;
  do {
    if (*piVar5 == 0) {
      F_005a2710(puVar4 GEN_EDX_ARG,3);
      *(undefined4 *)(puVar4 + 4) = 0xffffffff;
    }
    else {
      cVar1 = *(char *)(*piVar5 + 0x88);
      F_005a2710(puVar4 GEN_EDX_ARG,3);
      *(uint *)(puVar4 + 4) = (uint)(cVar1 != '\0');
    }
    piVar5 = piVar5 + 1;
    puVar4 = puVar4 + 8;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) - 1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  puVar4 = ((undefined1 *)(gen_frame + 0x80));
  puVar6 = (undefined4 *)((int)this + 0x1d0);
  (*(int *)(gen_frame + 0xc)) = 5;
  do {
    uVar2 = F_00562c60(*puVar6 GEN_EDX_ARG);
    F_005a2710(puVar4 GEN_EDX_ARG,3);
    *(uint *)(puVar4 + 4) = uVar2;
    puVar4 = puVar4 + 8;
    puVar6 = puVar6 + 3;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) - 1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x20c) GEN_EDX_ARG);
  F_005a2710(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0xac)) = uVar2;
  uVar2 = F_00562c60(*(undefined4 *)((int)this + 0x218) GEN_EDX_ARG);
  F_005a2710(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,3);
  (*(uint *)(gen_frame + 0xb4)) = uVar2;
  F_005a9110(this GEN_EDX_ARG,0x15,((undefined4 *)(gen_frame + 0x10)));
  this_00 = &(*(uint *)(gen_frame + 0xb8));
  iVar3 = 0x14;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankEdit::vf25 */
GEN_FRAME uint GEN_THISCALL F_00798710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  puVar2 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x14;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  ((undefined4 *)(gen_frame + 0x0))[1] = 0xffffffff;
  bVar1 = F_00798250(this GEN_EDX_ARG);
  F_005a2710(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0xc)) = (uint)(bVar1 != 0);
  F_005a9110(this GEN_EDX_ARG,0x15,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0xa8));
  iVar4 = 0x14;
  do {
    this_00 = this_00 - 2;
    uVar3 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_007987b0 */
GEN_FRAME uint GEN_THISCALL F_007987b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7987b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0042a990(param_1 * 0x54 + 0x22c + (int)this GEN_EDX_FWD);
  this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_ARG);
  uVar1 = F_00584110(this_00 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00798810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"MemberRankOrderEdit",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf25 */
GEN_FRAME uint GEN_THISCALL F_00798820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00798860 */
GEN_FRAME uint GEN_THISCALL F_00798860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 * this_00;
  uint * this_01;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  puVar4 = ((undefined4 *)(gen_frame + 0x8));
  iVar3 = 0x11;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_005a2710(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  ((undefined4 *)(gen_frame + 0x8))[1] = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x7c))))(*(int * PTR32 *)((int)this + 0x180) GEN_EDX_ARG);
  if (uVar2 != 0) {
    this_00 = ((undefined1 *)(gen_frame + 0x18));
    puVar4 = (undefined4 *)((int)this + 0x2a4);
    (*(uint *)(gen_frame + 0x4)) = uVar2;
    do {
      uVar1 = *puVar4;
      F_005a2710(this_00 GEN_EDX_ARG,4);
      *(undefined4 *)(this_00 + 4) = uVar1;
      puVar4 = puVar4 + 0x19;
      this_00 = this_00 + 8;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
    } while ((*(uint *)(gen_frame + 0x4)) != 0);
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  F_005a9110(this GEN_EDX_ARG,0x12,((undefined4 *)(gen_frame + 0x8)));
  this_01 = &(*(uint *)(gen_frame + 0x98));
  iVar3 = 0x11;
  do {
    this_01 = this_01 - 2;
    uVar2 = F_005a2670(this_01 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00798960 */
GEN_FRAME uint GEN_THISCALL F_00798960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x798960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int in_ecx;
  
  if (param_1 == 0) {
    F_0059c700(*(undefined * PTR32 *)((int)this + 0x180) GEN_EDX_FWD,1);
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x121))) = 0x100;
    uVar2 = F_0042a990((int)this + 0x240 GEN_EDX_ARG);
    F_00584110(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,uVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))(*(int * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x188) + 0x28))))(*(int * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,0);
    return uVar2;
  }
  *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x121))) = 0x101;
  if (((char)param_2 == '\0') ||
     (in_ecx = (int)this + 0x198, *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 0xd0))) != -1)) {
    in_ecx = (int)this + 0x1ec;
  }
  uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,uVar2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x28))))
            (*(int * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,(uint)(param_1 != 1 && -1 < param_1 - 1));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x7c))))(*(int * PTR32 *)((int)this + 0x180) GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)((int)this + 0x188);
  if (param_1 < (int)(uVar2 - 1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,1);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: FUN_00798a50 */
GEN_FRAME uint GEN_THISCALL F_00798a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x798a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  iVar1 = param_1 * 100;
  F_0059d670((undefined *)*param_2 GEN_EDX_FWD,*(int *)((int)this + iVar1 + 0x2a8) + 0x65);
  pvVar2 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_0042a990((int)this + iVar1 + 0x2b4 GEN_EDX_ARG);
    F_00584110(pvVar2 GEN_EDX_ARG,uVar3);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[3] GEN_EDX_ARG);
  if (pvVar2 != (undefined *)0x0) {
    F_0057eb30(pvVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + iVar1 + 0x2b0),0,0,0,0);
  }
  pvVar2 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_0057eb30(pvVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + iVar1 + 0x2ac),0,0,0,0);
  }
  return uVar3;
}

/* ref: FUN_00798ae0 */
GEN_NOFRAME uint GEN_THISCALL F_00798ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8bbc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00798b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyInputString",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_00798b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x798b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00798b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x798b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  if ((short)param_1 == 0x17) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    (*(int *)(gen_frame + 0x10)) = (uint)(param_2 == 0) * 2 - 1;
    uVar1 = F_0042a990(*(int *)(this + 0x18c) + 0x9c GEN_EDX_ARG);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    F_00557670(param_3 GEN_EDX_ARG,0);
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return;
}

/* ref: FUN_00798c10 */
GEN_FRAME uint GEN_THISCALL F_00798c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 0x1d4)));
  uVar4 = REFG(undefined4, 0x108cc50);
  uVar2 = F_0042a970(*(int *)((int)this + 0x18c) + 0x9c GEN_EDX_FWD);
  uVar2 = F_00560910(iVar1 - uVar2);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar2,uVar4);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,uVar2);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyInputString::vf25 */
GEN_FRAME uint GEN_THISCALL F_00798c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00798cd0 */
GEN_NOFRAME uint GEN_THISCALL F_00798cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8cbc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined2 *)((int)this + 0x2c4) = 0;
  *(undefined1 *)((int)this + 0x2c6) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined1 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  F_00c48350((undefined *)((int)this + 0x1a8),0,200);
  F_00c48350((undefined *)((int)this + 0x270),0,0x48);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00798dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyChest",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf25 */
GEN_FRAME uint GEN_THISCALL F_00798de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00798e40 */
GEN_FRAME unsigned int GEN_THISCALL F_00798e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x798e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  char cVar1;
  undefined * this_01;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(bool *)(gen_frame + 0x1b)) = *(int *)((int)this + 0x2cc) != 2;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0xcc;
  do {
    this_00 = *(undefined * PTR32 *)((int)this + (*(int *)(gen_frame + 0x14)) + 0x1a4);
    iVar4 = (*(int *)(gen_frame + 0x14));
    if (this_00 != (undefined *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this_00 + 0x84) + 0xc))))((int)this_00 + 0x84);
      uVar5 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3ee + (*(int *)(gen_frame + 0x10)))));
      if ((uVar5 == 0) || ((*(bool *)(gen_frame + 0x1b)) != false)) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\0';
      }
      *(byte *)((int)this_00 + 0xaa) =
           *(byte *)((int)this_00 + 0xaa) ^ (cVar1 * '\x02' ^ *(byte *)((int)this_00 + 0xaa)) & 2;
      F_0056e530(this_00 GEN_EDX_ARG,2);
      this_01 = (undefined *)F_00561530(this_00 GEN_EDX_ARG,3);
      uVar2 = F_00560910(uVar5);
      F_00584110(this_01 GEN_EDX_ARG,uVar2);
      F_00560760(&(*(char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      pcVar3 = *((char * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + *(int *)(param_2 + 0x20))));
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar3;
      (*(undefined1 *)(gen_frame + 0xa)) = 2;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x43;
      (*(undefined1 *)(gen_frame + 0xb)) = *(undefined1 *)((int)this_00 + 0x9c);
      F_005916c0(this_00 GEN_EDX_ARG,(uint)(uVar5 != 0) * 4 + 2,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x13a),
                   &(*(char * PTR32 *)(gen_frame + 0x0)));
      iVar4 = (*(int *)(gen_frame + 0x14));
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    }
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0xc;
    (*(int *)(gen_frame + 0x14)) = iVar4 + 4;
  } while (iVar4 + 4 < 0x114);
  return 0;
}

/* ref: FUN_00798f70 */
GEN_FRAME uint GEN_STDCALL F_00798f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x798f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00561490(param_1 GEN_EDX_ARG,2);
  if (param_2 == 0) {
    this = (undefined *)F_0059d670(this GEN_EDX_ARG,0x66);
  }
  else {
    if (param_2 == 1) {
      uVar1 = F_0059d670(this GEN_EDX_ARG,0x67);
      return uVar1;
    }
    if (param_2 == 2) {
      uVar1 = F_0059d670(this GEN_EDX_ARG,0x65);
      return uVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00798fb0 */
GEN_FRAME uint GEN_THISCALL F_00798fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x798fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x2c8) >> ((char)param_2 * '\x02' & 0x1fU) & 3;
}

/* ref: FUN_00798fd0 */
GEN_FRAME uint GEN_THISCALL F_00798fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x798fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * this_00;
  undefined1 * this_01;
  int iVar2;
  
  this_01 = (gen_frame + 0x1c);
  F_0059dde0(*(undefined * PTR32 *)((int)this + 0x1a4) GEN_EDX_FWD,0);
  if (*(char *)((int)this + 0x2c4) == '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x2c5) * 4 + 0x18c)));
  }
  else {
    if (*(char *)((int)this + 0x2c4) != '\x01') goto LAB_00799013;
    this_00 = *(undefined * PTR32 *)((int)this + 0x1a0);
  }
  F_0059dde0(this_00 GEN_EDX_ARG,1);
LAB_00799013: ;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_01 = this_01 - 8;
    uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00799060 */
GEN_FRAME byte GEN_THISCALL F_00799060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  bVar3 = 0;
  if ((*(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU) & 3) != 0) {
    piVar1 = (int *)*param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_FWD)));
    uVar2 = *puVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG);
    uVar2 = *(undefined4 *)(uVar5 + 4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    bVar3 = *(byte *)((int)this + 0x2c5);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(int *)(gen_frame + 0x1c)) = bVar3 + 0x3e;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = param_1;
    uVar5 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
    bVar3 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return bVar3;
}

/* ref: FUN_00799160 */
GEN_FRAME byte GEN_THISCALL F_00799160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * this_00;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  bVar3 = 0;
  if (*(int *)((int)this + 0x2cc) != 0) {
    piVar1 = (int *)*param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_FWD)));
    uVar2 = *puVar4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG);
    uVar2 = *(undefined4 *)(uVar5 + 4);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0x43;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x24)) = param_1;
    uVar5 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 4))))(*(int * PTR32 *)(uVar5 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x1a,4,&(*(undefined4 *)(gen_frame + 0x8)));
    F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 - 2;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
    bVar3 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return bVar3;
}

/* ref: FUN_00799240 */
GEN_FRAME uint GEN_THISCALL F_00799240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x799240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_007992b0 */
GEN_FRAME uint GEN_THISCALL F_007992b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7992b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00799240(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_007992c0 */
GEN_FRAME uint GEN_THISCALL F_007992c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7992c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00799330 */
GEN_FRAME uint GEN_THISCALL F_00799330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x799330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = *(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU) &
          0xffffff03;
  if ((char)uVar1 == '\x02') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_00 = this_00 - 8;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return uVar1;
}

/* ref: FUN_007993a0 */
GEN_FRAME unsigned int GEN_THISCALL F_007993a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7993a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * this_00;
  int iVar1;
  
  this_00 = (gen_frame + 0x1c);
  if (*(int *)((int)this + 0x2cc) == 2) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar1 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00799400 */
GEN_FRAME uint GEN_THISCALL F_00799400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x799400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int local_8;
  
  uVar1 = 1;
  puVar2 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
  local_8 = 5;
  do {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar2 + 0x28))((int *)*puVar2 GEN_EDX_FWD,(uint)(((*(uint *)&gen_args[1]) & uVar1) != 0));
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) + 0x28))))
            (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) GEN_EDX_ARG,(uint)((byte)((*(uint *)&gen_args[1]) >> 5) & 1));
  if ((((*(uint *)&gen_args[1]) & 0x40) == 0) ||
     ((*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1), *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2d0))) != 2)) {
    (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) GEN_EDX_ARG,(*(uint *)&gen_args[1]));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c0))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c0))) GEN_EDX_ARG,(*(uint *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_007994a0 */
GEN_FRAME uint GEN_THISCALL F_007994a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7994a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_2 != '\0') {
    return (uint)*(byte *)(in_ecx + 0x2c6);
  }
  return (uint)(byte)param_3;
}

/* ref: FUN_007994c0 */
GEN_FRAME uint GEN_THISCALL F_007994c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7994c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  
  F_0056b780(this GEN_EDX_FWD,0);
  uVar4 = 0;
  if (*(char *)((int)this + 0x2c4) == '\x01') {
    uVar2 = F_0055a030(*(undefined4 *)((int)this + 0x180) GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,0);
    uVar4 = (uint)(ushort)(uVar2 - (short)uVar4);
  }
  if (*(int *)((int)this + 0x2d4) == 1) {
    uVar3 = *(uint *)((int)this + 0x2c8) >> (*(char *)((int)this + 0x2c5) * '\x02' & 0x1fU) &
            0xffffff03;
    if ((char)uVar3 == '\x02') {
      uVar3 = F_0055dcb0();
      if ((*(char *)(uVar3 + 0xbc) == '\0') && ((char)param_1 == '\0')) {
        bVar1 = F_0056b630(this GEN_EDX_ARG,0x18adc,7,0,9,0,uVar4);
        return CONCAT31(extraout_var_00,bVar1);
      }
      bVar1 = F_0056b630(this GEN_EDX_ARG,0x18add,7,0,9,0,uVar4);
      uVar3 = CONCAT31(extraout_var_01,bVar1);
    }
  }
  else {
    uVar3 = *(int *)((int)this + 0x2d4) - 2;
    if ((uVar3 == 0) && (*(int *)((int)this + 0x2cc) == 2)) {
      bVar1 = F_0056b630(this GEN_EDX_ARG,0x18adf,7,0,9,0,uVar4);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00799590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyExchange",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf46 */
GEN_NOFRAME byte GEN_THISCALL F_007995a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7995a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf52 */
GEN_FRAME byte GEN_THISCALL F_007995b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x7995b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*param_1 == 2) {
    if ((char)param_1[1] == '\0') {
      piVar1 = *(int * PTR32 *)(this + 0x1dc);
      uVar3 = F_0055dcb0();
      uVar3 = F_0055b9e0(uVar3 GEN_EDX_ARG);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG);
      if (uVar3 != uVar4) {
        if (*(int *)(this + 0x1dc) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
        }
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b9e0(uVar3 GEN_EDX_ARG);
        bVar2 = F_005612e0(uVar5,uVar3);
        if (bVar2 == 0) {
          F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x1dc),1,0);
          return 1;
        }
      }
    }
  }
  else if ((*param_1 - 7U < 2) && ((char)param_1[1] == '\0')) {
    piVar1 = *(int * PTR32 *)(this + 0x1dc);
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9e0(uVar3 GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG);
    if (uVar3 != uVar4) {
      if (*(int *)(this + 0x1dc) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1dc) + 0x70)));
      }
      uVar3 = F_0055dcb0();
      uVar3 = F_0055b9e0(uVar3 GEN_EDX_ARG);
      bVar2 = F_005612e0(uVar5,uVar3);
      if (bVar2 == 0) {
        return 0;
      }
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x7c))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG);
    if (uVar3 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x7c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
      if (uVar3 != 0) {
        F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x18c),1,0);
      }
      return 1;
    }
    F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x188),1,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_00799710 */
GEN_FRAME uint GEN_THISCALL F_00799710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x799710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00799780 */
GEN_FRAME uint GEN_THISCALL F_00799780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b990(uVar6 GEN_EDX_ARG);
  iVar3 = *(int *)(uVar6 + 0xe4);
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b990(uVar6 GEN_EDX_ARG);
  uVar6 = *(uint *)(uVar6 + 0xc0);
  if ((iVar3 != 0) && (uVar6 != 0)) {
    iVar4 = *(int *)(iVar3 + 0x20);
    iVar3 = param_1 * 4 + 2;
    sVar2 = *(short *)(iVar4 + iVar3 * 4);
    iVar7 = 0;
    if (*((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x10))) < *(uint *)(iVar4 + 8 + iVar3 * 4)) {
      iVar7 = *(int *)((int)this + 0x1e0);
    }
    else if (*((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 0x24))) < *(uint *)(iVar4 + 0xc + iVar3 * 4)) {
      iVar7 = *(int *)((int)this + 0x1e4);
    }
    F_00560760(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x4)) = (int)sVar2;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x18;
    if (iVar7 != 0) {
      (*(int *)(gen_frame + 0x0)) = iVar7;
    }
    bVar1 = *(byte *)((int)this + 0x13a);
    uVar5 = *(undefined4 *)(param_2 + 0x1e4);
    uVar6 = F_0055dcb0();
    uVar6 = F_00588780((undefined *)(uVar6 + 0xe0) GEN_EDX_ARG,
                         (int)CONCAT31((int3)((uint)&(*(int *)(gen_frame + 0x0)) >> 8),iVar7 != 0) * 2 + 8,(uint)bVar1,
                         uVar5,&(*(int *)(gen_frame + 0x0)),0,0);
  }
  return uVar6;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf71 */
GEN_NOFRAME uint GEN_THISCALL F_00799880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_00558e10(*(undefined4 *)(uVar2 + 0x18) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG);
  if (uVar2 != uVar3) {
    uVar4 = 0;
    if (*(int *)(this + 0x188) != 0) {
      uVar4 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    bVar1 = F_005612e0(uVar4,uVar2);
    if ((bVar1 == 0) &&
       (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG),
       uVar2 != uVar3)) {
      uVar4 = 0;
      if (*(int *)(this + 0x18c) != 0) {
        uVar4 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      bVar1 = F_005612e0(uVar4,uVar2);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var,bVar1);
      }
    }
  }
  uVar2 = F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x1dc),1,0);
  return uVar2;
}

/* ref: FUN_00799900 */
GEN_FRAME uint GEN_THISCALL F_00799900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x799900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
  iVar2 = *(int *)(uVar3 + 0xe4);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3 GEN_EDX_ARG);
  uVar3 = *(uint *)(uVar3 + 0xd4);
  uVar5 = uVar3;
  if ((iVar2 != 0) && (uVar3 != 0)) {
    iVar1 = param_1 * 4 + 2;
    F_005951c0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4 + iVar1 * 4))),0,*param_2);
    pvVar4 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
    if (pvVar4 != (undefined *)0x0) {
      F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + param_1 * 8))));
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
    if (pvVar4 != (undefined *)0x0) {
      F_0057eb30(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8 + iVar1 * 4))),0,0,0,0);
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[3] GEN_EDX_ARG);
    uVar5 = 0;
    if (pvVar4 != (undefined *)0x0) {
      uVar5 = F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + param_1 * 8))));
    }
  }
  return uVar5;
}

/* ref: FUN_007999e0 */
GEN_NOFRAME uint GEN_THISCALL F_007999e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7999e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8dbc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyProfileEdit::vf25 */
GEN_FRAME uint GEN_THISCALL F_00799a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyProfileEdit::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00799ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyProfileEdit",0,6);
  return bVar1;
}

/* ref: FUN_00799ac0 */
GEN_FRAME uint GEN_THISCALL F_00799ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  uVar1 = F_0042a990(*(int *)((int)this + 0x188) + 0x9c GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,6);
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_00799b40 */
GEN_NOFRAME uint GEN_THISCALL F_00799b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x188) + 0x1d4)));
  uVar2 = F_0042a970(*(int *)((int)this + 0x188) + 0x9c GEN_EDX_FWD);
  uVar2 = F_00560910(iVar1 - uVar2);
  uVar2 = F_00584110(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00799b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  pvVar1 = F_00c48350(this + 0x180,0,0x78);
  return (uint)pvVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00799ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x1b4) != 0) {
    uVar1 = F_0055dcb0();
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b4) + 0x38))))(*(int * PTR32 *)(this + 0x1b4) GEN_EDX_ARG);
    F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar2);
  }
  if (*(int *)(this + 0x1bc) != 0) {
    uVar1 = F_0055dcb0();
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1bc) + 0x38))))(*(int * PTR32 *)(this + 0x1bc) GEN_EDX_ARG);
    F_00596b10((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,uVar2);
  }
  F_005a92d0(this GEN_EDX_ARG,1,0x3c,0);
  F_00c48350(this + 0x180,0,0x78);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00799c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyCrestEditor",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf38 */
GEN_FRAME uint GEN_THISCALL F_00799c40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x799c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005a2370(param_1 GEN_EDX_FWD,param_2);
  if ((*(byte *)(param_1 + 0xf9) & 1) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x180) != 0) {
      uVar2 = F_0055c500(*(int *)(param_1 + 0x180) + 4 GEN_EDX_ARG);
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = F_00560020((undefined *)(uVar2 + 0x10) GEN_EDX_ARG,param_1 + 0x200);
        if ((char)uVar1 != '\0') {
          uVar1 = F_005944b0(((undefined *)GEN_TOP((*(int *)(param_1 + 0x180) + 4))) GEN_EDX_ARG,param_1 + 0x200);
        }
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00799ca0 */
GEN_NOFRAME uint GEN_THISCALL F_00799ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)((int)this + 600);
  if (*(int *)((int)this + uVar2 * 4 + 400) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + uVar2 * 4 + 400);
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_FWD);
    uVar2 = F_0059b340(this GEN_EDX_ARG,uVar2,uVar3,uVar4);
  }
  return uVar2;
}

/* ref: FUN_00799cd0 */
GEN_FRAME uint GEN_THISCALL F_00799cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00799d60 */
GEN_FRAME uint GEN_THISCALL F_00799d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_005600a0(param_2 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_005600d0(param_2 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00799e50 */
GEN_NOFRAME uint GEN_THISCALL F_00799e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1c8) != 0) {
    uVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0xcc))) + *(int *)((int)this + 0x25c) * 0x18;
  }
  return uVar1;
}

/* ref: FUN_00799e70 */
GEN_FRAME uint F_00799e70(unsigned int gen_a0)
{
  GEN_ENTER(0x799e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 / 0x18;
}

/* ref: FUN_00799e90 */
GEN_FRAME uint F_00799e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_00560050(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
  F_00560080(param_1 GEN_EDX_ARG,param_2);
  F_005600b0(param_1 GEN_EDX_ARG,param_3);
  bVar1 = F_0056bb70(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0056bb40(param_1 GEN_EDX_ARG,(uint)bVar1);
  bVar1 = F_0056bbb0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0056bb80(param_1 GEN_EDX_ARG,(uint)bVar1);
  bVar1 = F_0056bb30(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_0056bb00(param_1 GEN_EDX_ARG,(uint)bVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00799f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00799f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x3c,0);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_00799f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x799f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyCrestColor",0,6);
  return bVar1;
}

/* ref: FUN_00799f70 */
GEN_FRAME uint GEN_THISCALL F_00799f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x799f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_005600a0(param_2 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_005600d0(param_2 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a010 */
GEN_FRAME uint GEN_THISCALL F_0079a010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x79a010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_1 < 0) {
    uVar2 = param_1 + 0x20;
  }
  else {
    uVar2 = param_1;
    if (0x1f < (int)param_1) {
      uVar2 = param_1 - 0x20;
    }
  }
  uVar3 = (int)(((int)uVar2 >> 0x1f & 0xfU) + uVar2) >> 4;
  if ((uVar3 < 2) &&
     (*(uint *)((int)this + 0x1b8) = uVar2, *(int *)((int)this + uVar3 * 4 + 0x188) != 0)) {
    uVar2 = uVar2 & 0x8000000f;
    piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4 + 0x188);
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1 GEN_EDX_FWD,uVar2,0);
    piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4 + 0x188);
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG);
    uVar2 = F_0059b340(this GEN_EDX_ARG,uVar2,uVar4,uVar5);
  }
  return uVar2;
}

/* ref: FUN_0079a090 */
GEN_NOFRAME byte GEN_THISCALL F_0079a090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2 GEN_EDX_ARG);
  uVar3 = 0;
  piVar4 = (int *)(in_ecx + 0x188);
  do {
    if (*piVar4 != 0) {
      bVar1 = F_005615c0(*piVar4 GEN_EDX_ARG,uVar2);
      if (bVar1 != 0) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 2);
  return 0;
}

/* ref: FUN_0079a0e0 */
GEN_FRAME uint F_0079a0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_00560050(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
  F_00560080(param_1 GEN_EDX_ARG,param_2);
  F_005600b0(param_1 GEN_EDX_ARG,param_3);
  bVar1 = F_0056bc70(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_0056bc40(param_1 GEN_EDX_ARG,(uint)bVar1);
  bVar1 = F_0056bcb0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_0056bc80(param_1 GEN_EDX_ARG,(uint)bVar1);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_0079a140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  return 0;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_0079a160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this GEN_EDX_FWD,1,0x3c,0);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0079a190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyCrestSymbolColor",0,6);
  return bVar1;
}

/* ref: FUN_0079a1a0 */
GEN_FRAME uint GEN_THISCALL F_0079a1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_005600a0(param_2 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  uVar1 = F_005600d0(param_2 GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a240 */
GEN_FRAME uint F_0079a240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_00560050(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
  F_00560080(param_1 GEN_EDX_ARG,param_2);
  F_005600b0(param_1 GEN_EDX_ARG,param_3);
  bVar1 = F_0056bbf0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_0056bbc0(param_1 GEN_EDX_ARG,(uint)bVar1);
  return uVar2;
}

/* ref: FUN_0079a290 */
GEN_NOFRAME uint GEN_THISCALL F_0079a290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8ebc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1ac);
  iVar2 = 99;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  *(undefined1 *)((int)this + 0x97c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0079a340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyCrestDecal",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf47 */
GEN_FRAME uint GEN_THISCALL F_0079a350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0x80) != 0) {
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x80) + 0x20)))
                        );
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestDecal::vf25 */
GEN_FRAME uint GEN_THISCALL F_0079a380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a3f0 */
GEN_FRAME uint GEN_THISCALL F_0079a3f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a460 */
GEN_FRAME uint GEN_THISCALL F_0079a460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a4d0 */
GEN_FRAME uint GEN_THISCALL F_0079a4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a540 */
GEN_FRAME uint GEN_THISCALL F_0079a540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x79a540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar2 = 2;
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a5c0 */
GEN_FRAME uint GEN_THISCALL F_0079a5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x79a5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,3);
  iVar2 = 2;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  do {
    this_00 = this_00 - 2;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a630 */
GEN_FRAME unsigned int GEN_THISCALL F_0079a630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 < 100) {
    F_00560760(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
    bVar1 = *(byte *)((int)this + 0x13a);
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + (param_1 * 5 + 0x6e) * 4)));
    uVar2 = *(undefined4 *)(param_2 + 0x1e4);
    (*(undefined1 *)(gen_frame + 0xa)) = 2;
    (*(undefined1 *)(gen_frame + 0xb)) = *(undefined1 *)((int)this + param_1 * 0x14 + 0x1bc);
    uVar3 = F_0055dcb0();
    F_00588780((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,4,(uint)bVar1,uVar2,((undefined1 *)(gen_frame + 0x0)),0,0);
  }
  return;
}

/* ref: FUN_0079a6c0 */
GEN_FRAME uint GEN_THISCALL F_0079a6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79a6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)((int)this + 0x97c) = (undefined1)param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x28))))(*(int * PTR32 *)((int)this + 400) GEN_EDX_FWD,0);
  F_0059ead0(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,0,0,1);
  if (*(char *)((int)this + 0x97c) == '\x01') {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,0);
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,1);
    uVar2 = 0x66;
  }
  else {
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,1);
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,0);
    uVar2 = 0x65;
  }
  F_0059d670(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,uVar2);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = F_00589280(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_0079a750 */
GEN_FRAME unsigned int GEN_THISCALL F_0079a750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79a750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  if (param_1 < 3) {
    this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
    if (this_00 != (undefined *)0x0) {
      F_00584110(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 4 + 0x1a0));
    }
  }
  return;
}

/* ref: FUN_0079a790 */
GEN_FRAME uint GEN_THISCALL F_0079a790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79a790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 100) {
    F_005951c0(param_3 GEN_EDX_FWD,*(undefined4 *)((int)this + param_1 * 0x14 + 0x1ac),0,*param_2);
    pvVar1 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
    if (pvVar1 != (undefined *)0x0) {
      F_00584110(pvVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 0x14 + 0x1b0));
    }
    pvVar1 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
    uVar2 = 0;
    if (pvVar1 != (undefined *)0x0) {
      uVar2 = F_00584110(pvVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 0x14 + 0x1b4));
    }
  }
  return uVar2;
}

/* ref: FUN_0079a800 */
GEN_NOFRAME uint GEN_THISCALL F_0079a800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8fbc));
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
  *(undefined1 *)((int)this + 0x1c0) = 0;
  F_00580ea0((undefined *)((int)this + 0x1c4) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_0079a8b0 */
GEN_NOFRAME uint GEN_THISCALL F_0079a8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c8fbc));
  F_00590cc0((undefined *)((int)this + 0x1c4) GEN_EDX_FWD);
  uVar1 = F_00590600(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf36 */
GEN_NOFRAME byte GEN_THISCALL F_0079a8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_0055dc60((undefined *)this GEN_EDX_FWD);
  bVar1 = F_00560e80(this + 0x1c4 GEN_EDX_ARG,this);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0079a8f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompany",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf25 */
GEN_FRAME uint GEN_THISCALL F_0079a900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79a900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0079a940 */
GEN_FRAME byte GEN_THISCALL F_0079a940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x79a940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    F_0059b390(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x1c0) * 4 + 0x180))),1,
                 0);
    return 1;
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 6: ;
    if (*(int *)((int)this + 0x1fc) == 0) {
      return 1;
    }
    uVar1 = F_0055dcb0();
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1fc) + 0x14)));
    break;
  case 5: ;
    uVar1 = F_0055dcb0();
    uVar1 = F_0055b990(uVar1 GEN_EDX_ARG);
    if ((*(int *)(uVar1 + 0xe8) != 0) &&
       ((piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(uVar1 + 0xe8) + 0x20))), *piVar2 == 0 ||
        ((piVar2[1] == 0 && (piVar2[0xb] == 0)))))) {
      return 0;
    }
    if (*(int *)((int)this + 0x1fc) == 0) {
      return 1;
    }
    uVar1 = F_0055dcb0();
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1fc) + 0x14)));
    break;
  default: ;
    goto switchD_0079a956_default;
  }
  piVar2 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14) GEN_EDX_ARG,uVar3);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x8c))(piVar2 GEN_EDX_ARG);
  }
switchD_0079a956_default: ;
  return 1;
}

/* ref: FUN_0079aa30 */
GEN_FRAME uint GEN_THISCALL F_0079aa30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79aa30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  if (5 < (byte)(*(undefined4 *)&gen_args[1])) {
    return CONCAT31((int3)((uint)in_EAX >> 8),(byte)(*(undefined4 *)&gen_args[1]));
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) = (byte)(*(undefined4 *)&gen_args[1]);
  puVar1 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)(byte)(*(undefined4 *)&gen_args[1]) * 4 + 0x180)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)(byte)(*(undefined4 *)&gen_args[1]) * 4 + 0x180))) == 0) {
    return (uint)puVar1;
  }
  F_0059dde0((undefined *)*puVar1 GEN_EDX_FWD,1);
  if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    F_0059bd30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))) GEN_EDX_ARG,0,1,0);
    bVar2 = F_0079a940((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
    return CONCAT31(extraout_var,bVar2);
  }
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))) {
  case 0: ;
    uVar4 = 1;
    break;
  case 1: ;
    uVar4 = 2;
    break;
  case 2: ;
    uVar4 = 3;
    break;
  case 3: ;
    uVar4 = 4;
    break;
  case 4: ;
    uVar4 = 5;
    break;
  case 5: ;
    uVar4 = 6;
    break;
  default: ;
    goto switchD_0079aa76_default;
  }
  bVar2 = F_0079a940((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar4);
  (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),bVar2);
switchD_0079aa76_default: ;
  uVar3 = F_0059bd30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))) GEN_EDX_ARG,0,1,(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_0079aaf0 */
GEN_FRAME unsigned int GEN_THISCALL F_0079aaf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79aaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  short sVar3;
  float10 fVar4;
  
  if ((*(int *)((int)this + 0x1ac) != 0) && (*(int *)((int)this + 0x1a8) != 0)) {
    sVar3 = 0;
    uVar2 = F_0056b570(this GEN_EDX_FWD);
    if (uVar2 == 0) {
      sVar3 = 0xe;
    }
    uVar2 = F_00577bc0(*(undefined * PTR32 *)((int)this + 0x1a8) GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
    fVar1 = (float)(int)uVar2;
    if ((int)uVar2 < 0) {
      fVar1 = fVar1 + *(float *)&REFG(undefined, 0x1088110);
    }
    fVar4 = F_00559d60(*(undefined4 *)((int)this + 0x1a8) GEN_EDX_ARG);
    F_00559e70(*(undefined4 *)((int)this + 0x1ac) GEN_EDX_ARG,
                 ((float)GEN_TOF((((float10)(int)sVar3 + fVar4) + (float10)fVar1))));
  }
  return;
}

/* ref: Client::UI2::AddonFreeCompany::vf5 */
GEN_FRAME uint GEN_THISCALL F_0079ab80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x79ab80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005a89b0(this GEN_EDX_FWD,param_1,1);
  uVar1 = F_0059bc90(this + 0x1c4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_0079abb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79abb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_005b0610(this GEN_EDX_FWD,param_1,1,param_2);
  F_00580f10(this + 0x1c4 GEN_EDX_ARG,param_2,0);
  return;
}

/* ref: Client::UI2::AddonFreeCompany::vf49 */
GEN_NOFRAME uint GEN_THISCALL F_0079abe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79abe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00580f60(this + 0x1c4 GEN_EDX_FWD,0);
  uVar1 = F_005a9190((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf38 */
GEN_FRAME uint GEN_THISCALL F_0079ac00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x79ac00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_0059d8b0(param_1 + 0x1c4 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompany::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ac30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ac30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00579170((undefined *)this GEN_EDX_FWD);
  F_00588c10(this + 0x1c4 GEN_EDX_ARG);
  return;
}

/* ref: FUN_0079ac50 */
GEN_NOFRAME uint GEN_THISCALL F_0079ac50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ac50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf25 */
GEN_FRAME uint GEN_THISCALL F_0079ac90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79ac90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf2 */
GEN_FRAME uint GEN_THISCALL F_0079acd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x79acd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0xffff;
  uVar2 = uVar1 - 6;
  if (uVar2 < 0x20) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x79ade0) + uVar1 + 2)));
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 6: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x110))(this GEN_EDX_FWD,param_2,param_3,param_4);
      return uVar1;
    case 7: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x114))(this GEN_EDX_ARG,param_2,param_3,param_4);
      break;
    case 0x17: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf8))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x1f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x104))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x20: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x108))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x21: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x24: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    case 0x25: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10c))(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf62 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf63 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf64 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf65 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf66 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf67 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf68 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf69 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0079ae80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79ae80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_0079ae90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79ae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  undefined2 extraout_var = 0;
  
  F_0055e1c0(this GEN_EDX_FWD,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e220(this GEN_EDX_ARG,(float)(float10)0,0,0,(float)(float10)1,0);
  return CONCAT22(extraout_var,uVar1);
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf52 */
GEN_FRAME byte GEN_THISCALL F_0079aed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x79aed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if ((*param_1 == 2) && ((char)param_1[1] == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    piVar4 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14) GEN_EDX_ARG,(uint)(byte)AVar1);
    if (piVar4 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x8c))(piVar4 GEN_EDX_ARG);
    }
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMenuBase::vf70 */
GEN_FRAME uint GEN_THISCALL F_0079af20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79af20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
  iVar2 = *(int *)(uVar3 + 0xe8);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3 GEN_EDX_ARG);
  uVar3 = *(uint *)(uVar3 + 0xd8);
  uVar5 = uVar3;
  if ((iVar2 != 0) && (uVar3 != 0)) {
    iVar1 = param_1 * 2 + 1;
    F_005951c0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + (param_1 * 3 + 3) * 4))),0,*param_2)
    ;
    pvVar4 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
    if (pvVar4 != (undefined *)0x0) {
      F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + iVar1 * 4))));
    }
    pvVar4 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
    uVar5 = 0;
    if (pvVar4 != (undefined *)0x0) {
      uVar5 = F_00584110(pvVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + iVar1 * 4))));
    }
  }
  return uVar5;
}

/* ref: FUN_0079afc0 */
GEN_FRAME uint F_0079afc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x79afc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_2 + 0xac);
  uVar3 = param_1;
  if ((*(int *)(param_1 + 0xbc) != 0) && (iVar1 != 0)) {
    F_0059d670((undefined *)*param_4 GEN_EDX_ARG,
                 *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xbc) + 0x20))) + 8 + param_3 * 4))) + param_5);
    pvVar2 = (undefined *)F_00559ba0(param_4[1] GEN_EDX_ARG);
    if (pvVar2 != (undefined *)0x0) {
      F_00584110(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + param_3 * 8))));
    }
    pvVar2 = (undefined *)F_00559ba0(param_4[2] GEN_EDX_ARG);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_00584110(pvVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 4 + param_3 * 8))));
    }
  }
  return uVar3;
}

/* ref: FUN_0079b040 */
GEN_NOFRAME uint GEN_THISCALL F_0079b040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[72])REFP(0x10c91dc));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf38 */
GEN_FRAME uint GEN_THISCALL F_0079b0c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x79b0c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) != 0) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x188) + 0x7c))))(*(int * PTR32 *)(param_1 + 0x188) GEN_EDX_FWD),
     uVar2 != 0)) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
    if ((*(int *)(uVar3 + 0xe8) != 0) &&
       (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0xe8) + 0x20))) + 0x870))),
       *(int *)(param_1 + 0x1b0) != iVar1)) {
      uVar3 = 0;
      *(int *)(param_1 + 0x1b0) = iVar1;
      if (uVar2 != 0) {
        do {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x188) + 0x6c))))(*(int * PTR32 *)(param_1 + 0x188) GEN_EDX_ARG,uVar3,0,0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
      }
    }
  }
  uVar2 = F_005a2370(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0079b150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyAction",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf47 */
GEN_FRAME uint GEN_THISCALL F_0079b160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79b160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined4 uVar8;
  undefined3 extraout_var_00 = 0;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  piVar2 = *(int * PTR32 *)(iVar1 + 0x20);
  iVar3 = *(int *)(param_2 + 0xd8);
  if (*piVar2 == 0) {
    F_0059ead0(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_FWD,0,0,1);
    F_0059ead0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0,0,1);
    F_0059d670(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,*(undefined4 *)(this + 0x19c));
    F_0059d670(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*(undefined4 *)(this + 0x1a8));
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x11c))(this GEN_EDX_ARG);
    return uVar6;
  }
  iVar4 = piVar2[1];
  if (iVar4 == 0) {
    uVar8 = *(undefined4 *)(this + 0x1a0);
  }
  else {
    uVar8 = *(undefined4 *)(this + 0x198);
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,uVar8);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,iVar4,0,1);
  F_00584110(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,**(undefined4 * PTR32 *)(iVar3 + 0x20));
  iVar1 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x2c)));
  if (iVar1 == 0) {
    uVar8 = *(undefined4 *)(this + 0x1ac);
  }
  else {
    uVar8 = *(undefined4 *)(this + 0x1a4);
  }
  F_0059d670(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,uVar8);
  F_0059ead0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,iVar1,0,1);
  uVar6 = F_00584110(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x1c))));
  if (iVar4 != 0) {
    if (iVar1 == 0) {
      uVar6 = F_0055dcb0();
      uVar6 = F_0055b9e0(uVar6 GEN_EDX_ARG);
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
      if (uVar6 != uVar7) {
        uVar8 = 0;
        if (*(int *)(this + 0x18c) != 0) {
          uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
        }
        bVar5 = F_005612e0(uVar8,uVar6);
        if (bVar5 == 0) {
          return CONCAT31(extraout_var_00,bVar5);
        }
      }
      uVar6 = F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x188),1,0);
    }
    return uVar6;
  }
  if (iVar1 == 0) {
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x11c))(this GEN_EDX_ARG);
    return uVar6;
  }
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b9e0(uVar6 GEN_EDX_ARG);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG);
  if (uVar6 != uVar7) {
    uVar8 = 0;
    if (*(int *)(this + 0x188) != 0) {
      uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    bVar5 = F_005612e0(uVar8,uVar6);
    if (bVar5 == 0) {
      return CONCAT31(extraout_var,bVar5);
    }
  }
  uVar6 = F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x18c),1,0);
  return uVar6;
}

/* ref: FUN_0079b340 */
GEN_FRAME uint GEN_THISCALL F_0079b340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79b340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  if (param_1 == 1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar2 = 1;
    do {
      this_01 = this_01 - 8;
      uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,4);
      (*(undefined4 *)(gen_frame + 0x18)) = param_2;
      F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar2 = 1;
      do {
        this_00 = this_00 - 8;
        uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar2 = iVar2 - 1;
      } while (-1 < iVar2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_0079b400 */
GEN_FRAME uint GEN_THISCALL F_0079b400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79b400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
  uVar3 = *(uint *)(uVar3 + 0xe8);
  if (uVar3 != 0) {
    if (param_1 == 1) {
      sVar4 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8 + param_2 * 0xc)));
    }
    else {
      if (param_1 != 2) {
        return uVar3;
      }
      sVar4 = *((short *)GEN_TOP((*(int *)(uVar3 + 0x20) + (param_2 * 3 + 0xc) * 4)));
    }
    if (-1 < sVar4) {
      F_00560760(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      bVar1 = *(byte *)((int)this + 0x13a);
      uVar2 = *(undefined4 *)(param_3 + 0x1e4);
      (*(int *)(gen_frame + 0x4)) = (int)sVar4;
      (*(undefined2 *)(gen_frame + 0xa)) = 0x18;
      uVar3 = F_0055dcb0();
      uVar3 = F_00588780((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,8,(uint)bVar1,uVar2,((undefined1 *)(gen_frame + 0x0)),0,0);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyAction::vf71 */
GEN_NOFRAME uint GEN_THISCALL F_0079b4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x79b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9e0(uVar3 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x3c))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG);
  if (uVar3 != uVar4) {
    uVar5 = 0;
    if (*(int *)(this + 0x188) != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    bVar2 = F_005612e0(uVar5,uVar3);
    if ((bVar2 == 0) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x3c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG),
       uVar3 != uVar4)) {
      uVar5 = 0;
      if (*(int *)(this + 0x18c) != 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      bVar2 = F_005612e0(uVar5,uVar3);
      if (bVar2 == 0) {
        return CONCAT31(extraout_var,bVar2);
      }
    }
  }
  AVar1 = this[0x13c];
  uVar3 = F_0055dcb0();
  piVar6 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14) GEN_EDX_ARG,(uint)(byte)AVar1);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x8c))
                    (piVar6 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar3;
}

/* ref: FUN_0079b560 */
GEN_FRAME uint GEN_THISCALL F_0079b560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x79b560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
  iVar1 = *(int *)(uVar2 + 0xe8);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9a0(uVar2 GEN_EDX_ARG);
  uVar2 = *(uint *)(uVar2 + 0xd8);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    F_005951c0(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x34 + param_1 * 0xc))),0,*param_2);
    pvVar3 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
    if (pvVar3 != (undefined *)0x0) {
      F_00584110(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x20 + param_1 * 8))));
    }
    pvVar3 = (undefined *)F_00559ba0(param_2[2] GEN_EDX_ARG);
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_00584110(pvVar3 GEN_EDX_ARG,"");
    }
  }
  return uVar2;
}

/* ref: FUN_0079b600 */
GEN_NOFRAME uint GEN_THISCALL F_0079b600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this GEN_EDX_FWD);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c9304));
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf41 */
GEN_NOFRAME byte GEN_THISCALL F_0079b650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x79b650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00572e60(this GEN_EDX_FWD,"FreeCompanyActivity",0,6);
  return bVar1;
}

/* ref: Client::UI2::AddonFreeCompanyActivity::vf47 */
GEN_FRAME uint GEN_THISCALL F_0079b660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79b660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xbc);
  if ((uVar1 != 0) && (*(int *)(param_2 + 0xac) != 0)) {
    if (**(int * PTR32 *)(uVar1 + 0x20) != 0) {
      uVar1 = (*(int * PTR32 *)(uVar1 + 0x20))[1];
      if (100 < uVar1) {
        uVar1 = 100;
      }
      uVar1 = F_0058d980(*(undefined4 *)(this + 0x180) GEN_EDX_FWD,uVar1);
      return uVar1;
    }
    uVar1 = F_0059ead0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,0,0,1);
  }
  return uVar1;
}

/* ref: FUN_0079b6c0 */
GEN_FRAME unsigned int GEN_THISCALL F_0079b6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x79b6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  
  if ((param_1 < 100) && (this_00 = (undefined *)F_00561530(param_2 GEN_EDX_FWD,4), this_00 != (undefined *)0x0)) {
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9a0(uVar3 GEN_EDX_ARG);
    if (*(int *)(uVar3 + 0xac) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0xac) + 0x20))) + param_1 * 8)));
      bVar2 = F_00584440(this_00 GEN_EDX_ARG,uVar1);
      if (bVar2 != 0) {
        F_00560760(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        bVar2 = *(byte *)((int)this + 0x13a);
        ((undefined4 *)(gen_frame + 0x0))[0] = uVar1;
        uVar1 = *(undefined4 *)((int)param_2 + 0x1e4);
        uVar3 = F_0055dcb0();
        F_00588780((undefined *)(uVar3 + 0xe0) GEN_EDX_ARG,2,(uint)bVar2,uVar1,((undefined4 *)(gen_frame + 0x0)),0,0);
      }
    }
  }
  return;
}

