#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c23a10 */
GEN_FRAME float10 F_00c23a10(float gen_a0)
{
  GEN_ENTER(0xc23a10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf7 */
GEN_FRAME uint GEN_THISCALL F_00c23a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc23a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  
  if (param_2 == 0x1d) {
    fVar1 = *(float *)(param_3 + 8);
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
      F_00bc3780(param_1 GEN_EDX_FWD,fVar1);
    }
  }
  bVar2 = F_00bc3080(param_1 GEN_EDX_ARG,param_2,param_3);
  if (bVar2 == 0) {
    return CONCAT31(extraout_var,bVar2);
  }
  return CONCAT31(extraout_var,1);
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf9 */
GEN_FRAME unsigned int GEN_THISCALL F_00c23a90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc23a90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  uint param_8 = (uint)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  undefined * this;
  uint uVar4;
  int * piVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  F_00bc2660(GEN_TOF(param_1) GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6,&(*(int * PTR32 *)(gen_frame + 0x8)),param_8);
  if ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
      ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) == *(float *)&REFG(undefined, 0x1088114))) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 100))(param_1 GEN_EDX_ARG);
    uVar4 = F_00bd01e0(uVar4 GEN_EDX_ARG);
    if ((uVar4 == 0x66) && ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) < ((float10)GEN_TOD(gen_bits2f(param_1[0x1a]))))) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)param_1[0x1a];
    }
  }
  else {
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x6c))(param_1 GEN_EDX_ARG)));
    piVar5 = ((int *)(uintptr_t)gen_fl2bits((float)(F_00be40b0(this GEN_EDX_ARG))));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar5;
  }
  bVar2 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar3 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) == *(float *)&REFG(undefined, 0x1088114);
  uVar1 = *(undefined1 *)param_8;
  param_1[0x1c] = (int)(*(int * PTR32 *)(gen_frame + 0x8));
  if ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) || bVar2) == ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) || bVar2) || bVar3)) {
    param_1[0x1b] = (int)(*(int * PTR32 *)(gen_frame + 0x8));
  }
  else {
    param_1[0x1b] = param_1[0x1a];
  }
  *(undefined1 *)((int)param_1 + 0x83) = uVar1;
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  param_1[0x19] =
       (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x18]))) +
                               ((float10)GEN_TOD(gen_bits2f(param_1[0x1b])))));
  if ((float10)*param_7 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))))) {
    *param_7 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8)))));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf10 */
GEN_NOFRAME unsigned int F_00c23b80(void)
{
  GEN_ENTER(0xc23b80u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf11 */
GEN_NOFRAME unsigned int F_00c23b90(void)
{
  GEN_ENTER(0xc23b90u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf12 */
GEN_FRAME unsigned int GEN_THISCALL F_00c23ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (this[0xd] == (undefined1)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD)));
    if (piVar1 == (int *)0x0) {
      return;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1 GEN_EDX_ARG);
    return;
  }
  if (this[0x30] != (undefined1)0x0) {
    return;
  }
  if (this[0x80] != (undefined1)0x0) {
    return;
  }
  return;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00c23c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_FWD);
  if (uVar1 == 0) {
    F_00bc29d0(this GEN_EDX_ARG,0);
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,10,&REFG(undefined, 0x13056c0));
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf14 */
GEN_FRAME unsigned int GEN_THISCALL F_00c23c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc23c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bc26d0(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf15 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c23c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc23c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00c23c90 */
GEN_FRAME unsigned int GEN_THISCALL F_00c23c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xc23c90u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  float local_8;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 0x6c))(param_1 GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 0x68))(param_1 GEN_EDX_ARG);
  if (*(char *)(uVar2 + 0x30) == '\0') {
    if (*(char *)(uVar2 + 0x80) == '\0') {
      local_8 = *(float *)(uVar2 + 0x58);
    }
    else {
      local_8 = *(float *)(uVar2 + 0x6c);
    }
  }
  else {
    fVar3 = (float10)*(int *)(uVar2 + 0x34);
    if (*(int *)(uVar2 + 0x34) < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    local_8 = (float)fVar3;
  }
  F_00bc3780(param_1 GEN_EDX_ARG,((float)GEN_TOF((((float10)local_8 - (float10)*(float *)(uVar1 + 0x34)) *
                               (float10)param_4 + (float10)param_3))));
  F_00bc27a0(param_1 GEN_EDX_ARG,param_2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf21 */
GEN_FRAME uint GEN_THISCALL F_00c23d20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc23d20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x74))(param_1 GEN_EDX_FWD);
  uVar1 = F_00bc2c50(param_1 GEN_EDX_ARG,param_2,param_3,param_4,uVar1 * param_5,param_6,param_7);
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_00c23d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xa0);
  if (uVar1 == 0) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD)));
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_0054d950(this_00 GEN_EDX_ARG);
      *(uint *)(this + 0xa0) = uVar1;
    }
    uVar1 = *(uint *)(this + 0xa0);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf26 */
GEN_NOFRAME uint GEN_THISCALL F_00c23d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(uint *)(uVar1 + 0x70) != 0) {
    return *(uint *)(uVar1 + 0x70);
  }
  iVar2 = *(int *)(uVar1 + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(uVar1 + 4) != 0) {
      *(undefined4 *)(uVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 4) + 4)));
    }
    iVar2 = *(int *)(uVar1 + 0x6c);
    if (iVar2 == 0) goto LAB_00c23dc7;
  }
  *(undefined4 *)(uVar1 + 0x70) = *(undefined4 *)(iVar2 + 4);
LAB_00c23dc7: ;
  return *(uint *)(uVar1 + 0x70);
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf29 */
GEN_NOFRAME uint GEN_THISCALL F_00c23dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc23dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD)));
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x108))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf41 */
GEN_FRAME uint GEN_THISCALL F_00c23df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc23df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  undefined * this_00;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD);
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x6c);
  if (this_00 == (undefined *)0x0) {
    if (*(int *)(uVar2 + 4) != 0) {
      *(undefined4 *)(uVar2 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 4) + 4)));
    }
    this_00 = *(undefined * PTR32 *)(uVar2 + 0x6c);
  }
  uVar1 = *(undefined4 *)((int)this_00 + 0x24);
  if (*(short *)(param_2 + 2) == 2) {
    uVar2 = F_00beb790(this_00 GEN_EDX_ARG);
    if ((param_3 < uVar2) && (*((char *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x11))) != '\0')) {
      uVar2 = F_00bc3520(this GEN_EDX_ARG,param_1,*(int *)((int)this_00 + 0x20),uVar1,param_3,0);
      *(undefined * PTR32 *)(uVar2 + 4) = this;
      return uVar2;
    }
  }
  else if (*((char *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x11))) != '\0') {
    uVar2 = F_00bc3520(this GEN_EDX_ARG,param_1,*(int *)((int)this_00 + 0x20),uVar1,0,0);
    *(undefined * PTR32 *)(uVar2 + 4) = this;
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00c23e90 */
GEN_FRAME byte GEN_THISCALL F_00c23e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc23e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x24) != 0) {
    return 1;
  }
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar2 = F_00bc3270(this GEN_EDX_FWD,param_1);
    if (uVar2 == 0) {
      return 0;
    }
  }
  bVar1 = F_00bc2450(this GEN_EDX_ARG,uVar2,0);
  return bVar1 != 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf46 */
GEN_NOFRAME uint GEN_THISCALL F_00c23f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    uVar1 = F_00be38d0(uVar1 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf47 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c23f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_ecx;
  
  in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD);
  if (in_ecx != 0) {
    F_00be38e0(in_ecx GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf48 */
GEN_FRAME uint GEN_THISCALL F_00c23f50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xc23f50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  float10 fVar5;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x6c))(param_1 GEN_EDX_FWD)));
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  fVar5 = (float10)(int)((uint)*(ushort *)(param_1[8] + 4) - (uint)*(ushort *)(param_1[8] + 2));
  bVar4 = GEN_ISNAN(fVar5) || GEN_ISNAN((float10)param_2);
  if (bVar4 != (bVar4 || fVar5 == (float10)param_2)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  fVar3 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1);
  return (uint)gen_fl2bits(fVar3);
}

/* ref: FUN_00c23fc0 */
GEN_NOFRAME uint GEN_THISCALL F_00c23fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bc2080(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x110f294));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00c23ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc23ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if ((this[8] != (undefined1)0x0) &&
     ((this[0x80] != (undefined1)0x0 ||
      ((*(int *)(this + 0x74) != 0 && (*(uint *)(this + 0x78) < 2)))))) {
    bVar2 = F_00bc22a0(this GEN_EDX_FWD);
    if (bVar2 != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG);
      bVar1 = true;
      if ((uVar3 != 0) && (*(int *)(uVar3 + 0x2c) != 7)) {
        bVar2 = F_00bc1d60(this GEN_EDX_ARG);
        if (bVar2 == 0) {
          bVar1 = false;
        }
      }
      if (((this[0xb] == (undefined1)0x0) && (((byte)this[0x2c] & 1) == 0)) && (!bVar1))
      {
        return 0;
      }
      *(undefined4 *)(this + 10) = 0x1000000;
      F_00b61910(this GEN_EDX_ARG);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_00c24080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc24080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x10] != (undefined1)0x0) {
    bVar1 = F_00bc22e0(this GEN_EDX_FWD);
    if (bVar1 != 0) {
      this[0x11] = (undefined1)0x1;
      this[0x15] = (undefined1)0x0;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf8 */
GEN_FRAME uint GEN_THISCALL F_00c240c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc240c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int iVar2;
  int * piVar3;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD);
  iVar2 = *(int *)(uVar1 + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(uVar1 + 4) != 0) {
      *(undefined4 *)(uVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 4) + 4)));
    }
    iVar2 = *(int *)(uVar1 + 0x6c);
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 < 100)) {
    return 1;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG)));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x20))
                    (piVar3 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf42 */
GEN_FRAME uint GEN_THISCALL F_00c24120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc24120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint in_ecx;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG);
  iVar4 = *(int *)(uVar2 + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(uVar2 + 4) != 0) {
      *(undefined4 *)(uVar2 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 4) + 4)));
    }
    iVar4 = *(int *)(uVar2 + 0x6c);
  }
  if (*(int *)(iVar4 + 0x24) == 2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1 GEN_EDX_ARG);
    if (uVar2 <= param_2) {
      return 0;
    }
  }
  else {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      iVar4 = *(int *)(iVar4 + 0x20);
      if (*(char *)(iVar4 + 0x11) == '\0') {
        return 0;
      }
      uVar2 = F_00406b90(0x1c,0,0);
      if (uVar2 == 0) {
        F_00bccc00((undefined *)0x0 GEN_EDX_ARG,iVar4);
        return 0;
      }
      pvVar3 = (undefined *)F_00bccbd0(uVar2 GEN_EDX_ARG);
      F_00bccc00(pvVar3 GEN_EDX_ARG,iVar4);
      return (uint)pvVar3;
    }
  }
  uVar2 = F_00bbad30(*(undefined * PTR32 *)(iVar4 + 0x20) GEN_EDX_ARG);
  if ((uVar2 < 0x158) && (iVar4 = (&REFG(undefined4, 0x14a31f0))[(int)(uVar2)], iVar4 != 0)) {
    in_ecx = F_00406b90(0x1c,0,0);
    if (in_ecx != 0) {
      pvVar3 = (undefined *)F_00bccbd0(in_ecx GEN_EDX_ARG);
      F_00bbadf0(pvVar3 GEN_EDX_ARG,uVar2,iVar4);
      return (uint)pvVar3;
    }
    F_00bbadf0((undefined *)0x0 GEN_EDX_ARG,uVar2,iVar4);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf49 */
GEN_FRAME uint GEN_THISCALL F_00c24220(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xc24220u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  code * pcVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  uint * puVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(float *)(gen_frame + 0xc)) = 0.0;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 0x98))(param_1 GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    param_1[0x82] = (undefined1)0x0;
  }
  if (param_1[0x80] != (undefined1)0x0) {
    param_2 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x6c);
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar7 = param_2;
  if ((float10)fVar1 < (float10)param_2) {
    fVar7 = fVar1;
  }
  (*(float *)(gen_frame + 0x14)) = fVar7;
  if (0.0 < fVar7) {
    do {
      if (REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x14))) {
        (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)REFG(double, 0x1088130));
      }
      else {
        (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0x14)) = 0.0;
      }
      fVar1 = (*(float *)(gen_frame + 0x10));
      bVar2 = F_00bc1d60(param_1 GEN_EDX_ARG);
      if (bVar2 == 0) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 8))(param_1 GEN_EDX_ARG);
        if ((char)uVar3 != '\0') {
          param_1[0x84] = (undefined1)0x0;
        }
        bVar2 = F_00bc2d10(param_1 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x10)));
        if (bVar2 != 0) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 0x6c))(param_1 GEN_EDX_ARG);
          if (uVar3 == 0) {
            pcVar4 = *(gen_code32 *)(*(int *)param_1 + 0x1c);
            puVar8 = ((uint *)(gen_frame + 0x28));
            ((uint *)(gen_frame + 0x28))[0] = 0;
            ((uint *)(gen_frame + 0x28))[1] = 0;
            ((uint *)(gen_frame + 0x28))[2] = 0;
            ((uint *)(gen_frame + 0x28))[3] = 0;
            (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x28))[0] + 0)) = 0;
            ((uint *)(gen_frame + 0x28))[0] = 0;
          }
          else {
            bVar2 = *(byte *)(uVar3 + 0x7c);
            pcVar4 = *(gen_code32 *)(*(int *)param_1 + 0x1c);
            puVar8 = ((uint *)(gen_frame + 0x18));
            ((uint *)(gen_frame + 0x18))[0] = 0;
            ((uint *)(gen_frame + 0x18))[1] = 0;
            ((uint *)(gen_frame + 0x18))[2] = 0;
            ((uint *)(gen_frame + 0x18))[3] = 0;
            (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x18))[0] + 0)) = bVar2 & 1;
            ((uint *)(gen_frame + 0x18))[0] = bVar2 & 0xffffff01;
          }
          (*pcVar4)(param_1,0xb,puVar8);
          F_00bc27a0(param_1 GEN_EDX_ARG,6);
        }
      }
      *(float *)(param_1 + 0x28) = (*(float *)(gen_frame + 0x14));
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(float *)(gen_frame + 0x40)) = 0.0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      (*(undefined4 *)(gen_frame + 0x44)) = 0;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x38)) + 0)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x10));
      F_00bc3080(param_1 GEN_EDX_ARG,0x10,&(*(undefined4 *)(gen_frame + 0x38)));
      F_00bc23a0(param_1 GEN_EDX_ARG,0x12);
      fVar5 = (float10)(*(float *)(gen_frame + 0x10));
      (*(float *)(gen_frame + 0xc)) = (float)(fVar5 + (float10)(*(float *)(gen_frame + 0xc)));
      if ((GEN_ISNAN((*(float *)(gen_frame + 0x10))) == (GEN_ISNAN((*(float *)(gen_frame + 0x10))) || (*(float *)(gen_frame + 0x10)) == 0.0)) &&
         (fVar6 = (float10)fVar1,
         (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) || fVar5 == fVar6))) {
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((fVar6 - fVar5) + (float10)(*(float *)(gen_frame + 0x14)))));
      }
    } while (!GEN_ISNAN((*(float *)(gen_frame + 0x14))) && !((*(float *)(gen_frame + 0x14)) <= 0.0));
  }
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(float *)(gen_frame + 0x50)) = 0.0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x48)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0xc));
  bVar2 = F_00bc3080(param_1 GEN_EDX_ARG,0x11,&(*(undefined4 *)(gen_frame + 0x48)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_00c24410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24410u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf22 */
GEN_NOFRAME uint GEN_THISCALL F_00c24420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24420u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_00bc1e40((undefined *)this GEN_EDX_FWD);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x58))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf23 */
GEN_NOFRAME uint GEN_THISCALL F_00c24440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24440u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x5c))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf27 */
GEN_NOFRAME uint GEN_THISCALL F_00c24460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc24460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf28 */
GEN_NOFRAME uint GEN_THISCALL F_00c24470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24470u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x70))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf30 */
GEN_NOFRAME uint GEN_THISCALL F_00c24480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24480u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf31 */
GEN_NOFRAME uint GEN_THISCALL F_00c24490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24490u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x7c))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf32 */
GEN_NOFRAME uint GEN_THISCALL F_00c244a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc244a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x80))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf33 */
GEN_FRAME uint GEN_THISCALL F_00c244c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc244c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x84))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf34 */
GEN_NOFRAME uint GEN_THISCALL F_00c244e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc244e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x88))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf35 */
GEN_FRAME uint GEN_THISCALL F_00c24500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24500u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x8c))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00c24520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24520u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x90))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00c24540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24540u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x94))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf38 */
GEN_NOFRAME uint GEN_THISCALL F_00c24560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24560u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x98))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf39 */
GEN_NOFRAME uint GEN_THISCALL F_00c24580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc24580u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x9c))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf40 */
GEN_NOFRAME unsigned int F_00c245a0(void)
{
  GEN_ENTER(0xc245a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_00c245b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc245b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xb4))))
                    (*(int * PTR32 *)(this + 4) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00c245c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc245c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb0))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_00c245e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc245e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb4))
                    (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::ChildSchedulerTimeline::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c24610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc24610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x110f294));
  F_00bc2fd0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c24640 */
GEN_FRAME byte GEN_THISCALL F_00c24640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc24640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)((int)this + 0x28) = param_1;
  F_00c49908((int)this + 8,0x20,param_2);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionBase::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c24690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc24690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x28) = 0;
  }
  return;
}

/* ref: FUN_00c246b0 */
GEN_FRAME uint GEN_THISCALL F_00c246b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc246b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  in_ecx[1] = 1;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110f3a4));
  in_ecx[10] = 0;
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = in_ecx + 0xc;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(in_ecx + 0x1c) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c246f0 */
GEN_NOFRAME byte F_00c246f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc246f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar3 = (float10)(float)((float10)*param_1 - (float10)*param_2);
  fVar4 = (float10)(float)((float10)param_1[1] - (float10)param_2[1]);
  fVar5 = (float10)(float)((float10)param_1[2] - (float10)param_2[2]);
  fVar3 = (float10)((float)GEN_TOF((fVar5 * fVar5 + (fVar4 * fVar4 + fVar3 * fVar3))));
  fVar4 = (float10)(float)((float10)param_5 * (float10)param_5);
  if (fVar3 < fVar4) {
    *param_6 = 0.0;
    return 1;
  }
  fVar5 = (float10)(float)((float10)*param_3 - (float10)*param_4);
  fVar6 = (float10)(float)((float10)param_3[1] - (float10)param_4[1]);
  fVar7 = (float10)(float)((float10)param_3[2] - (float10)param_4[2]);
  fVar1 = ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5))));
  if ((float10)fVar1 <= (float10)REFG(float, 0x10905c4)) {
    if (fVar3 < fVar4) {
      *param_6 = 0.0;
      return 1;
    }
  }
  else {
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)param_3[2] - (float10)param_4[2]) *
                    (float10)(float)((float10)param_1[2] - (float10)param_2[2]) +
                   ((float10)(float)((float10)*param_1 - (float10)*param_2) * fVar5 +
                   (float10)(float)((float10)param_1[1] - (float10)param_2[1]) * fVar6))));
    fVar5 = (float10)fVar2;
    fVar3 = (float10)((float)GEN_TOF((fVar5 * fVar5 - (float10)fVar1 * (fVar3 - fVar4))));
    if ((float10)0 <= fVar3) {
      fVar4 = (float10)fVar2;
      fVar3 = (float10)((float)GEN_TOF(SQRT(fVar3)));
      fVar5 = (float10)(float)(-fVar4 - fVar3);
      if (((float10)0 <= fVar5) && (fVar5 <= (float10)fVar1)) {
        *param_6 = (float)(fVar5 / (float10)fVar1);
        return 1;
      }
      fVar3 = (float10)(float)(fVar3 - fVar4);
      if (((float10)0 <= fVar3) && (fVar3 <= (float10)fVar1)) {
        *param_6 = (float)(fVar3 / (float10)fVar1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c24890 */
GEN_NOFRAME uint F_00c24890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc24890u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar28;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar59 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  
  fVar58 = param_3[4] - param_2[4];
  fVar60 = param_3[5] - param_2[5];
  fVar61 = param_3[6] - param_2[6];
  fVar62 = param_3[7] - param_2[7];
  fVar36 = param_5[4] - param_4[4];
  fVar41 = param_5[5] - param_4[5];
  fVar46 = param_5[6] - param_4[6];
  fVar51 = param_5[7] - param_4[7];
  fVar63 = param_3[8] - param_2[8];
  fVar64 = param_3[9] - param_2[9];
  fVar65 = param_3[10] - param_2[10];
  fVar66 = param_3[0xb] - param_2[0xb];
  fVar18 = *param_5 - *param_4;
  fVar22 = param_5[1] - param_4[1];
  fVar24 = param_5[2] - param_4[2];
  fVar26 = param_5[3] - param_4[3];
  fVar37 = param_5[8] - param_4[8];
  fVar42 = param_5[9] - param_4[9];
  fVar47 = param_5[10] - param_4[10];
  fVar52 = param_5[0xb] - param_4[0xb];
  fVar28 = *param_3 - *param_2;
  fVar33 = param_3[1] - param_2[1];
  fVar34 = param_3[2] - param_2[2];
  fVar35 = param_3[3] - param_2[3];
  fVar38 = *param_2 - *param_4;
  fVar43 = param_2[1] - param_4[1];
  fVar48 = param_2[2] - param_4[2];
  fVar53 = param_2[3] - param_4[3];
  fVar39 = (fVar58 * fVar58 + fVar28 * fVar28) + fVar63 * fVar63;
  fVar44 = (fVar60 * fVar60 + fVar33 * fVar33) + fVar64 * fVar64;
  fVar49 = (fVar61 * fVar61 + fVar34 * fVar34) + fVar65 * fVar65;
  fVar54 = (fVar62 * fVar62 + fVar35 * fVar35) + fVar66 * fVar66;
  fVar40 = (fVar36 * fVar36 + fVar18 * fVar18) + fVar37 * fVar37;
  fVar45 = (fVar41 * fVar41 + fVar22 * fVar22) + fVar42 * fVar42;
  fVar50 = (fVar46 * fVar46 + fVar24 * fVar24) + fVar47 * fVar47;
  fVar55 = (fVar51 * fVar51 + fVar26 * fVar26) + fVar52 * fVar52;
  fVar19 = (fVar36 * fVar58 + fVar18 * fVar28) + fVar37 * fVar63;
  fVar23 = (fVar41 * fVar60 + fVar22 * fVar33) + fVar42 * fVar64;
  fVar25 = (fVar46 * fVar61 + fVar24 * fVar34) + fVar47 * fVar65;
  fVar27 = (fVar51 * fVar62 + fVar26 * fVar35) + fVar52 * fVar66;
  fVar67 = ((param_2[4] - param_4[4]) * fVar58 + fVar38 * fVar28) +
           (param_2[8] - param_4[8]) * fVar63;
  fVar68 = ((param_2[5] - param_4[5]) * fVar60 + fVar43 * fVar33) +
           (param_2[9] - param_4[9]) * fVar64;
  fVar69 = ((param_2[6] - param_4[6]) * fVar61 + fVar48 * fVar34) +
           (param_2[10] - param_4[10]) * fVar65;
  fVar70 = ((param_2[7] - param_4[7]) * fVar62 + fVar53 * fVar35) +
           (param_2[0xb] - param_4[0xb]) * fVar66;
  (*(float *)((char *)&auVar56 + 0)) =
       ((param_2[4] - param_4[4]) * fVar36 + fVar38 * fVar18) + (param_2[8] - param_4[8]) * fVar37;
  (*(float *)((char *)&auVar56 + 4)) =
       ((param_2[5] - param_4[5]) * fVar41 + fVar43 * fVar22) + (param_2[9] - param_4[9]) * fVar42;
  (*(float *)((char *)&auVar56 + 8)) =
       ((param_2[6] - param_4[6]) * fVar46 + fVar48 * fVar24) + (param_2[10] - param_4[10]) * fVar47
  ;
  (*(float *)((char *)&auVar56 + 12)) =
       ((param_2[7] - param_4[7]) * fVar51 + fVar53 * fVar26) +
       (param_2[0xb] - param_4[0xb]) * fVar52;
  fVar38 = fVar40 * fVar39 - fVar19 * fVar19;
  fVar43 = fVar45 * fVar44 - fVar23 * fVar23;
  fVar48 = fVar50 * fVar49 - fVar25 * fVar25;
  fVar53 = fVar55 * fVar54 - fVar27 * fVar27;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits(fVar43);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (undefined4)gen_fl2bits(fVar38);
  (*(float *)(gen_frame + 0x8)) = fVar48;
  (*(float *)(gen_frame + 0xc)) = fVar53;
  uVar2 = -(uint)(fVar39 <= *(float *)&REFG(undefined, 0x110f370));
  uVar6 = -(uint)(fVar44 <= *(float *)&REFG(undefined, 0x110f374));
  uVar10 = -(uint)(fVar49 <= *(float *)&REFG(undefined, 0x110f378));
  uVar14 = -(uint)(fVar54 <= *(float *)&REFG(undefined, 0x110f37c));
  uVar3 = -(uint)(fVar40 <= *(float *)&REFG(undefined, 0x110f370));
  uVar7 = -(uint)(fVar45 <= *(float *)&REFG(undefined, 0x110f374));
  uVar11 = -(uint)(fVar50 <= *(float *)&REFG(undefined, 0x110f378));
  uVar15 = -(uint)(fVar55 <= *(float *)&REFG(undefined, 0x110f37c));
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar44);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar39);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar49);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar54);
  gen_divps(&(auVar29), &(*(gen_v16 *)&REFG(undefined4, 0x110f380)), &(auVar1));
  (*(float *)((char *)&auVar59 + 0)) = (0.0 - fVar67) * (*(float *)((char *)&auVar29 + 0));
  (*(float *)((char *)&auVar59 + 4)) = (0.0 - fVar68) * (*(float *)((char *)&auVar29 + 4));
  (*(float *)((char *)&auVar59 + 8)) = (0.0 - fVar69) * (*(float *)((char *)&auVar29 + 8));
  (*(float *)((char *)&auVar59 + 12)) = (0.0 - fVar70) * (*(float *)((char *)&auVar29 + 12));
  (*(float *)((char *)&auVar30 + 0)) = (*(float *)((char *)&auVar56 + 0)) * fVar19 - fVar67 * fVar40;
  (*(float *)((char *)&auVar30 + 4)) = (*(float *)((char *)&auVar56 + 4)) * fVar23 - fVar68 * fVar45;
  (*(float *)((char *)&auVar30 + 8)) = (*(float *)((char *)&auVar56 + 8)) * fVar25 - fVar69 * fVar50;
  (*(float *)((char *)&auVar30 + 12)) = (*(float *)((char *)&auVar56 + 12)) * fVar27 - fVar70 * fVar55;
  gen_divps(&(auVar31), &(auVar30), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))));
  gen_minps(&(auVar31), &(auVar31), &(*(gen_v16 *)&REFG(undefined4, 0x110f380)));
  gen_maxps(&(auVar31), &(auVar31), (&(unsigned long long[2]){0, 0}));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (*(undefined4 *)((char *)&auVar31 + 0));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (*(undefined4 *)((char *)&auVar31 + 4));
  (*(float *)(gen_frame + 0x8)) = (*(float *)((char *)&auVar31 + 8));
  (*(float *)(gen_frame + 0xc)) = (*(float *)((char *)&auVar31 + 12));
  fVar38 = gen_bits2f(~-(uint)(fVar38 <= *(float *)&REFG(undefined, 0x110f390)) & (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)));
  fVar43 = gen_bits2f(~-(uint)(fVar43 <= *(float *)&REFG(undefined, 0x110f394)) & (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)));
  fVar48 = gen_bits2f(~-(uint)(fVar48 <= *(float *)&REFG(undefined, 0x110f398)) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
  fVar53 = gen_bits2f(~-(uint)(fVar53 <= *(float *)&REFG(undefined, 0x110f39c)) & (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
  (*(float *)((char *)&auVar20 + 0)) = (fVar19 - fVar67) * (*(float *)((char *)&auVar29 + 0));
  (*(float *)((char *)&auVar20 + 4)) = (fVar23 - fVar68) * (*(float *)((char *)&auVar29 + 4));
  (*(float *)((char *)&auVar20 + 8)) = (fVar25 - fVar69) * (*(float *)((char *)&auVar29 + 8));
  (*(float *)((char *)&auVar20 + 12)) = (fVar27 - fVar70) * (*(float *)((char *)&auVar29 + 12));
  (*(float *)((char *)&auVar32 + 0)) = fVar38 * fVar19 + (*(float *)((char *)&auVar56 + 0));
  (*(float *)((char *)&auVar32 + 4)) = fVar43 * fVar23 + (*(float *)((char *)&auVar56 + 4));
  (*(float *)((char *)&auVar32 + 8)) = fVar48 * fVar25 + (*(float *)((char *)&auVar56 + 8));
  (*(float *)((char *)&auVar32 + 12)) = fVar53 * fVar27 + (*(float *)((char *)&auVar56 + 12));
  (*(undefined4 *)((char *)&auVar29 + 4)) = (undefined4)gen_fl2bits(fVar45);
  (*(undefined4 *)((char *)&auVar29 + 0)) = (undefined4)gen_fl2bits(fVar40);
  (*(undefined4 *)((char *)&auVar29 + 8)) = (undefined4)gen_fl2bits(fVar50);
  (*(undefined4 *)((char *)&auVar29 + 12)) = (undefined4)gen_fl2bits(fVar55);
  gen_divps(&(auVar29), &(auVar32), &(auVar29));
  (*(undefined4 *)((char *)&auVar31 + 4)) = (undefined4)gen_fl2bits(fVar45);
  (*(undefined4 *)((char *)&auVar31 + 0)) = (undefined4)gen_fl2bits(fVar40);
  (*(undefined4 *)((char *)&auVar31 + 8)) = (undefined4)gen_fl2bits(fVar50);
  (*(undefined4 *)((char *)&auVar31 + 12)) = (undefined4)gen_fl2bits(fVar55);
  gen_divps(&(auVar31), &(auVar56), &(auVar31));
  uVar4 = -(uint)((*(float *)((char *)&auVar29 + 0)) < 0.0);
  uVar8 = -(uint)((*(float *)((char *)&auVar29 + 4)) < 0.0);
  uVar12 = -(uint)((*(float *)((char *)&auVar29 + 8)) < 0.0);
  uVar16 = -(uint)((*(float *)((char *)&auVar29 + 12)) < 0.0);
  gen_minps(&(auVar57), &(auVar31), &(*(gen_v16 *)&REFG(undefined4, 0x110f380)));
  uVar5 = -(uint)((float)REFG(undefined4, 0x110f380) < (*(float *)((char *)&auVar29 + 0)));
  uVar9 = -(uint)((*(float *)((char *)&REFG(undefined4, 0x110f380) + 4)) < (*(float *)((char *)&auVar29 + 4)));
  uVar13 = -(uint)((*(float *)((char *)&REFG(undefined4, 0x110f380) + 8)) < (*(float *)((char *)&auVar29 + 8)));
  uVar17 = -(uint)((*(float *)((char *)&REFG(undefined4, 0x110f380) + 12)) < (*(float *)((char *)&auVar29 + 12)));
  gen_maxps(&(auVar29), &(auVar29), (&(unsigned long long[2]){0, 0}));
  gen_minps(&(auVar31), &(auVar29), &(*(gen_v16 *)&REFG(undefined4, 0x110f380)));
  gen_maxps(&(auVar57), &(auVar57), (&(unsigned long long[2]){0, 0}));
  gen_minps(&(auVar29), &(auVar20), &(*(gen_v16 *)&REFG(undefined4, 0x110f380)));
  fVar40 = gen_bits2f(~uVar3 & ((*(undefined4 *)((char *)&auVar57 + 0)) & uVar2 | ~uVar2 & (*(undefined4 *)((char *)&auVar31 + 0))));
  fVar44 = gen_bits2f(~uVar7 & ((*(undefined4 *)((char *)&auVar57 + 4)) & uVar6 | ~uVar6 & (*(undefined4 *)((char *)&auVar31 + 4))));
  fVar45 = gen_bits2f(~uVar11 & ((*(undefined4 *)((char *)&auVar57 + 8)) & uVar10 | ~uVar10 & (*(undefined4 *)((char *)&auVar31 + 8))));
  fVar49 = gen_bits2f(~uVar15 & ((*(undefined4 *)((char *)&auVar57 + 12)) & uVar14 | ~uVar14 & (*(undefined4 *)((char *)&auVar31 + 12))));
  gen_minps(&(auVar31), &(auVar59), &(*(gen_v16 *)&REFG(undefined4, 0x110f380)));
  gen_maxps(&(auVar31), &(auVar31), (&(unsigned long long[2]){0, 0}));
  gen_maxps(&(auVar29), &(auVar29), (&(unsigned long long[2]){0, 0}));
  fVar25 = gen_bits2f(~uVar2 & (~uVar3 & ((*(undefined4 *)((char *)&auVar29 + 0)) & uVar5 |
                                         ~uVar5 & (uVar4 & (*(undefined4 *)((char *)&auVar31 + 0)) |
                                                  ~uVar4 & (uint)gen_fl2bits(fVar38))) |
                               (*(undefined4 *)((char *)&auVar31 + 0)) & uVar3));
  fVar27 = gen_bits2f(~uVar6 & (~uVar7 & ((*(undefined4 *)((char *)&auVar29 + 4)) & uVar9 |
                                         ~uVar9 & (uVar8 & (*(undefined4 *)((char *)&auVar31 + 4)) |
                                                  ~uVar8 & (uint)gen_fl2bits(fVar43))) |
                               (*(undefined4 *)((char *)&auVar31 + 4)) & uVar7));
  fVar38 = gen_bits2f(~uVar10 & (~uVar11 & ((*(undefined4 *)((char *)&auVar29 + 8)) & uVar13 |
                                           ~uVar13 & (uVar12 & (*(undefined4 *)((char *)&auVar31 + 8)) |
                                                     ~uVar12 & (uint)gen_fl2bits(fVar48))) |
                                (*(undefined4 *)((char *)&auVar31 + 8)) & uVar11));
  fVar43 = gen_bits2f(~uVar14 & (~uVar15 & ((*(undefined4 *)((char *)&auVar29 + 12)) & uVar17 |
                                           ~uVar17 & (uVar16 & (*(undefined4 *)((char *)&auVar31 + 12)) |
                                                     ~uVar16 & (uint)gen_fl2bits(fVar53))) |
                                (*(undefined4 *)((char *)&auVar31 + 12)) & uVar15));
  fVar48 = (fVar25 * fVar58 + param_2[4]) - (fVar40 * fVar36 + param_4[4]);
  fVar53 = (fVar27 * fVar60 + param_2[5]) - (fVar44 * fVar41 + param_4[5]);
  fVar36 = (fVar38 * fVar61 + param_2[6]) - (fVar45 * fVar46 + param_4[6]);
  fVar39 = (fVar43 * fVar62 + param_2[7]) - (fVar49 * fVar51 + param_4[7]);
  fVar18 = (fVar25 * fVar28 + *param_2) - (fVar40 * fVar18 + *param_4);
  fVar19 = (fVar27 * fVar33 + param_2[1]) - (fVar44 * fVar22 + param_4[1]);
  fVar22 = (fVar38 * fVar34 + param_2[2]) - (fVar45 * fVar24 + param_4[2]);
  fVar23 = (fVar43 * fVar35 + param_2[3]) - (fVar49 * fVar26 + param_4[3]);
  (*(float *)((char *)&auVar21 + 0)) = fVar18 * fVar18;
  (*(float *)((char *)&auVar21 + 4)) = fVar19 * fVar19;
  (*(float *)((char *)&auVar21 + 8)) = fVar22 * fVar22;
  (*(float *)((char *)&auVar21 + 12)) = fVar23 * fVar23;
  fVar18 = (fVar25 * fVar63 + param_2[8]) - (fVar40 * fVar37 + param_4[8]);
  fVar19 = (fVar27 * fVar64 + param_2[9]) - (fVar44 * fVar42 + param_4[9]);
  fVar22 = (fVar38 * fVar65 + param_2[10]) - (fVar45 * fVar47 + param_4[10]);
  fVar23 = (fVar43 * fVar66 + param_2[0xb]) - (fVar49 * fVar52 + param_4[0xb]);
  (*(undefined4 *)((char *)&auVar57 + 4)) = (undefined4)gen_fl2bits((fVar53 * fVar53 + (*(float *)((char *)&auVar21 + 4))) + fVar19 * fVar19);
  (*(undefined4 *)((char *)&auVar57 + 0)) = (undefined4)gen_fl2bits((fVar48 * fVar48 + (*(float *)((char *)&auVar21 + 0))) + fVar18 * fVar18);
  (*(undefined4 *)((char *)&auVar57 + 8)) = (undefined4)gen_fl2bits((fVar36 * fVar36 + (*(float *)((char *)&auVar21 + 8))) + fVar22 * fVar22);
  (*(undefined4 *)((char *)&auVar57 + 12)) = (undefined4)gen_fl2bits((fVar39 * fVar39 + (*(float *)((char *)&auVar21 + 12))) + fVar23 * fVar23);
  gen_sqrtps(&(auVar29), &(auVar21), &(auVar57));
  memcpy(&(*param_1), &(auVar29), sizeof(auVar29) < sizeof(*param_1) ? sizeof(auVar29) : sizeof(*param_1));
  return (uint)param_1;
}

/* ref: FUN_00c24d00 */
GEN_NOFRAME byte GEN_THISCALL F_00c24d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc24d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * puVar1;
  undefined * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  
  if (param_1 >> 2 != 0) {
    puVar1 = (undefined *)(uintptr_t)gen_fl2bits((float)((&REFG(float, 0x110f3cc))[(int)(param_1 >> 2 & 3)]));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = puVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)(uintptr_t)gen_fl2bits((float)((&REFG(float, 0x110f3cc))[(int)(param_1 >> 6 & 3)]));
    puVar2 = (undefined *)(uintptr_t)gen_fl2bits((float)((&REFG(float, 0x110f3cc))[(int)(param_1 >> 4 & 3)]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = puVar2;
    fVar12 = (float10)((float)GEN_TOF((&REFG(float, 0x110f3cc))[(int)(param_1 >> 6 & 3)]));
    fVar3 = ((float)GEN_TOF((fVar12 * (float10)*(float *)((int)this + 0x30))));
    (*(float *)(gen_frame + 0x0)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) * fVar12)));
    (*(float *)(gen_frame + 0x4)) = fVar4;
    fVar5 = ((float)GEN_TOF((fVar12 * (float10)*(float *)((int)this + 0x38))));
    (*(float *)(gen_frame + 0x8)) = fVar5;
    fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar2)));
    fVar6 = *(float *)((int)this + 0x44);
    fVar7 = *(float *)((int)this + 0x48);
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar1)));
    fVar8 = *(float *)((int)this + 0x50);
    fVar9 = *(float *)((int)this + 0x54);
    fVar10 = *(float *)((int)this + 0x58);
    fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 * (float10)*(float *)((int)this + 0x40)))) +
                   (float10)fVar3)));
    (*(float *)(gen_frame + 0x0)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 * fVar12) + (float10)fVar4)));
    (*(float *)(gen_frame + 0x4)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)fVar7) + (float10)fVar5)));
    (*(float *)(gen_frame + 0x8)) = fVar5;
    fVar3 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)fVar8) + (float10)fVar3)));
    (*(float *)(gen_frame + 0x0)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 * fVar13) + (float10)fVar4)));
    (*(float *)(gen_frame + 0x4)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)fVar10) + (float10)fVar5)));
    (*(float *)(gen_frame + 0x8)) = fVar5;
    fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*(float *)((int)this + 0x68)))) *
                    (float10)fVar5 +
                   ((float10)((float)GEN_TOF(((float10)*param_2 - (float10)*(float *)((int)this + 0x60)))) *
                    (float10)fVar3 +
                   (float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)((int)this + 100)))) *
                   (float10)fVar4))));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    if ((float10)fVar3 < (float10)0) {
      puVar11 = (undefined4 *)F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_FWD);
      *param_3 = *puVar11;
      param_3[1] = puVar11[1];
      param_3[2] = puVar11[2];
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c24e60 */
GEN_NOFRAME byte F_00c24e60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc24e60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x250];
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  byte bVar25;
  uint uVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float * pfVar33;
  
  if ((param_8 == 0) || (param_3 <= 0.0)) {
    *param_7 = param_5;
    return 1;
  }
  fVar1 = (float)((float10)param_6 - (float10)param_5);
  (*(float *)(gen_frame + 0x23c)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 *
                 ((float10)*(float *)(param_1 + 0x40) + (float10)*(float *)(param_2 + 0x40)))));
  (*(float *)(gen_frame + 0x23c)) = fVar1;
  fVar27 = (float10)fVar1;
  if ((!GEN_ISNAN((float10)param_3) && !GEN_ISNAN(fVar27)) && !((float10)param_3 <= fVar27)) {
    return 0;
  }
  if (!(fVar27 < (float10)param_4)) {
    fVar1 = (float)((float10)param_6 + (float10)param_5);
    (*(float *)(gen_frame + 0x23c)) = fVar1;
    fVar1 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1094810));
    (*(float *)(gen_frame + 0x21c)) = fVar1;
    F_004bd830(&(*(float *)(gen_frame + 0x200)),fVar1,param_1 + 0x20);
    F_004bd830(&(*(float *)(gen_frame + 0x1e0)),(*(float *)(gen_frame + 0x21c)),param_1 + 0x30);
    F_004bd830(&(*(float *)(gen_frame + 0x220)),(*(float *)(gen_frame + 0x21c)),param_2 + 0x20);
    F_004bd830(&(*(float *)(gen_frame + 0x1d0)),(*(float *)(gen_frame + 0x21c)),param_2 + 0x30);
    fVar27 = (float10)(*(float *)(gen_frame + 0x21c));
    (*(float *)(gen_frame + 0x1fc)) = (float)(fVar27 + fVar27);
    fVar28 = (float10)(float)(fVar27 + fVar27);
    (*(float *)(gen_frame + 0x1f8)) = (float)(fVar28 + fVar27);
    (*(float *)(gen_frame + 0x23c)) = (float)(fVar28 + fVar28);
    F_004bd670(&(*(float *)(gen_frame + 0x130)),param_1,&(*(float *)(gen_frame + 0x200)));
    F_004bd670(&(*(float *)(gen_frame + 0x120)),param_1 + 0x10,&(*(float *)(gen_frame + 0x1e0)));
    F_004bd670(&(*(float *)(gen_frame + 0x140)),param_2,&(*(float *)(gen_frame + 0x220)));
    F_004bd670(&(*(float *)(gen_frame + 0x110)),param_2 + 0x10,&(*(float *)(gen_frame + 0x1d0)));
    fVar27 = (float10)(*(float *)(gen_frame + 0x200));
    fVar1 = (float)(fVar27 + (float10)(*(float *)(gen_frame + 0x130)));
    (*(float *)(gen_frame + 0x180)) = fVar1;
    fVar28 = (float10)(*(float *)(gen_frame + 0x204));
    fVar2 = (float)(fVar28 + (float10)(*(float *)(gen_frame + 0x134)));
    (*(float *)(gen_frame + 0x184)) = fVar2;
    fVar29 = (float10)(*(float *)(gen_frame + 0x208));
    fVar3 = (float)(fVar29 + (float10)(*(float *)(gen_frame + 0x138)));
    (*(float *)(gen_frame + 0x188)) = fVar3;
    fVar30 = (float10)(*(float *)(gen_frame + 0x1e0));
    fVar4 = (float)(fVar30 + (float10)(*(float *)(gen_frame + 0x120)));
    (*(float *)(gen_frame + 0x1a0)) = fVar4;
    fVar31 = (float10)(*(float *)(gen_frame + 0x1e4));
    fVar5 = (float)(fVar31 + (float10)(*(float *)(gen_frame + 0x124)));
    (*(float *)(gen_frame + 0x1a4)) = fVar5;
    fVar32 = (float10)(*(float *)(gen_frame + 0x1e8));
    fVar6 = (float)(fVar32 + (float10)(*(float *)(gen_frame + 0x128)));
    (*(float *)(gen_frame + 0x1a8)) = fVar6;
    fVar7 = (float)((float10)(*(float *)(gen_frame + 0x220)) + (float10)(*(float *)(gen_frame + 0x140)));
    (*(float *)(gen_frame + 0x160)) = fVar7;
    fVar8 = (float)((float10)(*(float *)(gen_frame + 0x224)) + (float10)(*(float *)(gen_frame + 0x144)));
    (*(float *)(gen_frame + 0x164)) = fVar8;
    fVar9 = (float)((float10)(*(float *)(gen_frame + 0x228)) + (float10)(*(float *)(gen_frame + 0x148)));
    (*(float *)(gen_frame + 0x168)) = fVar9;
    fVar10 = (float)((float10)(*(float *)(gen_frame + 0x1d0)) + (float10)(*(float *)(gen_frame + 0x110)));
    (*(float *)(gen_frame + 0x1b0)) = fVar10;
    fVar11 = (float)((float10)(*(float *)(gen_frame + 0x1d4)) + (float10)(*(float *)(gen_frame + 0x114)));
    (*(float *)(gen_frame + 0x1b4)) = fVar11;
    fVar12 = (float)((float10)(*(float *)(gen_frame + 0x1d8)) + (float10)(*(float *)(gen_frame + 0x118)));
    (*(float *)(gen_frame + 0x1b8)) = fVar12;
    fVar13 = (float)((float10)fVar1 + fVar27);
    (*(float *)(gen_frame + 0x150)) = fVar13;
    fVar14 = (float)((float10)fVar2 + fVar28);
    (*(float *)(gen_frame + 0x154)) = fVar14;
    fVar15 = (float)((float10)fVar3 + fVar29);
    (*(float *)(gen_frame + 0x158)) = fVar15;
    fVar16 = (float)((float10)fVar4 + fVar30);
    (*(float *)(gen_frame + 0x170)) = fVar16;
    fVar17 = (float)((float10)fVar5 + fVar31);
    (*(float *)(gen_frame + 0x174)) = fVar17;
    fVar18 = (float)((float10)fVar6 + fVar32);
    (*(float *)(gen_frame + 0x178)) = fVar18;
    fVar19 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x220)));
    (*(float *)(gen_frame + 0x1c0)) = fVar19;
    fVar20 = (float)((float10)fVar8 + (float10)(*(float *)(gen_frame + 0x224)));
    (*(float *)(gen_frame + 0x1c4)) = fVar20;
    fVar21 = (float)((float10)fVar9 + (float10)(*(float *)(gen_frame + 0x228)));
    (*(float *)(gen_frame + 0x1c8)) = fVar21;
    fVar22 = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0x1d0)));
    (*(float *)(gen_frame + 0x190)) = fVar22;
    fVar23 = (float)((float10)fVar11 + (float10)(*(float *)(gen_frame + 0x1d4)));
    (*(float *)(gen_frame + 0x194)) = fVar23;
    fVar24 = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x1d8)));
    (*(float *)(gen_frame + 0x198)) = fVar24;
    (*(float *)(gen_frame + 0x100)) = (float)((float10)fVar13 + fVar27);
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x130));
    (*(float *)(gen_frame + 0x104)) = (float)((float10)fVar14 + fVar28);
    (*(float *)(gen_frame + 0x4)) = fVar1;
    (*(float *)(gen_frame + 0x8)) = fVar13;
    (*(float *)(gen_frame + 0xc)) = (float)((float10)fVar13 + fVar27);
    (*(float *)(gen_frame + 0x108)) = (float)((float10)fVar15 + fVar29);
    (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x120));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x134));
    (*(float *)(gen_frame + 0x1e0)) = (float)(fVar30 + (float10)fVar16);
    (*(float *)(gen_frame + 0x84)) = fVar4;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x88)) = fVar16;
    (*(float *)(gen_frame + 0x1e4)) = (float)(fVar31 + (float10)fVar17);
    (*(float *)(gen_frame + 0x18)) = fVar14;
    (*(float *)(gen_frame + 0x8c)) = (float)(fVar30 + (float10)fVar16);
    (*(float *)(gen_frame + 0x1e8)) = (float)(fVar32 + (float10)fVar18);
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)fVar14 + fVar28);
    fVar27 = (float10)(*(float *)(gen_frame + 0x220));
    (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x124));
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x138));
    (*(float *)(gen_frame + 0x200)) = (float)((float10)fVar19 + fVar27);
    (*(float *)(gen_frame + 0x94)) = fVar5;
    fVar28 = (float10)(*(float *)(gen_frame + 0x224));
    (*(float *)(gen_frame + 0x24)) = fVar3;
    (*(float *)(gen_frame + 0x204)) = (float)((float10)fVar20 + fVar28);
    (*(float *)(gen_frame + 0x98)) = fVar17;
    fVar30 = (float10)(*(float *)(gen_frame + 0x228));
    (*(float *)(gen_frame + 0x28)) = fVar15;
    (*(float *)(gen_frame + 0x9c)) = (float)(fVar31 + (float10)fVar17);
    (*(float *)(gen_frame + 0x208)) = (float)((float10)fVar21 + fVar30);
    (*(float *)(gen_frame + 0x2c)) = (float)((float10)fVar15 + fVar29);
    (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0x128));
    (*(float *)(gen_frame + 0x220)) = (float)((float10)fVar22 + (float10)(*(float *)(gen_frame + 0x1d0)));
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(float *)(gen_frame + 0xa4)) = fVar6;
    (*(float *)(gen_frame + 0x224)) = (float)((float10)fVar23 + (float10)(*(float *)(gen_frame + 0x1d4)));
    (*(float *)(gen_frame + 0x228)) = (float)((float10)fVar24 + (float10)(*(float *)(gen_frame + 0x1d8)));
    (*(float *)(gen_frame + 0xa8)) = fVar18;
    (*(float *)(gen_frame + 0xac)) = (float)(fVar32 + (float10)fVar18);
    (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x140));
    (*(float *)(gen_frame + 0x44)) = fVar7;
    (*(float *)(gen_frame + 0x48)) = fVar19;
    (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar19 + fVar27);
    (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x144));
    (*(float *)(gen_frame + 0x54)) = fVar8;
    (*(float *)(gen_frame + 0x58)) = fVar20;
    (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar20 + fVar28);
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x148));
    (*(float *)(gen_frame + 0x64)) = fVar9;
    (*(float *)(gen_frame + 0x68)) = fVar21;
    (*(float *)(gen_frame + 0x6c)) = (float)((float10)fVar21 + fVar30);
    (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0x110));
    (*(float *)(gen_frame + 0xc4)) = fVar10;
    (*(float *)(gen_frame + 0xc8)) = fVar22;
    (*(float *)(gen_frame + 0xcc)) = (float)((float10)fVar22 + (float10)(*(float *)(gen_frame + 0x1d0)));
    (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x114));
    (*(float *)(gen_frame + 0xd4)) = fVar11;
    (*(float *)(gen_frame + 0xd8)) = fVar23;
    pfVar33 = &(*(float *)(gen_frame + 0x200));
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)fVar23 + (float10)(*(float *)(gen_frame + 0x1d4)));
    (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x118));
    (*(float *)(gen_frame + 0xe4)) = fVar12;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(float *)(gen_frame + 0xe8)) = fVar24;
    (*(undefined4 *)(gen_frame + 0xf0)) = 0;
    (*(undefined4 *)(gen_frame + 0xf4)) = 0;
    (*(undefined4 *)(gen_frame + 0xf8)) = 0;
    (*(undefined4 *)(gen_frame + 0xfc)) = 0;
    fVar1 = *(float *)(param_1 + 0x44);
    (*(float *)(gen_frame + 0xec)) = (float)((float10)fVar24 + (float10)(*(float *)(gen_frame + 0x1d8)));
    (*(float *)(gen_frame + 0x200)) = fVar1;
    (*(float *)(gen_frame + 0x204)) = fVar1;
    (*(float *)(gen_frame + 0x208)) = fVar1;
    (*(float *)(gen_frame + 0x20c)) = fVar1;
    uVar26 = F_00c24890(&(*(float *)(gen_frame + 0x1e0)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xc0)));
    F_00687590(&(*(float *)(gen_frame + 0x220)),uVar26,pfVar33);
    fVar27 = (float10)(*(float *)(gen_frame + 0x220));
    fVar28 = (float10)(*(float *)(gen_frame + 0x224));
    (*(int *)(gen_frame + 0x218)) = param_8 - 1;
    if ((((!GEN_ISNAN(fVar27) && !GEN_ISNAN((float10)param_3)) && !(fVar27 < (float10)param_3)) ||
        ((!GEN_ISNAN(fVar28) && !GEN_ISNAN(fVar27)) && !(fVar28 < fVar27))) || ((*(float *)(gen_frame + 0x220)) <= 0.0)) {
      bVar25 = F_00c24e60(param_1,param_2,param_3,(*(float *)(gen_frame + 0x220)),param_5,(*(float *)(gen_frame + 0x21c)),param_7,param_8 - 1);
      if (bVar25 != 0) {
        return 1;
      }
      fVar27 = (float10)(*(float *)(gen_frame + 0x220));
      fVar28 = (float10)(*(float *)(gen_frame + 0x224));
    }
    fVar30 = (float10)(*(float *)(gen_frame + 0x228));
    if ((((!GEN_ISNAN((float10)param_3) && !GEN_ISNAN(fVar27)) && !((float10)param_3 < fVar27)) ||
        ((!GEN_ISNAN(fVar27) && !GEN_ISNAN(fVar28)) && !(fVar27 < fVar28))) ||
       (((!GEN_ISNAN(fVar30) && !GEN_ISNAN(fVar28)) && !(fVar30 < fVar28) || ((*(float *)(gen_frame + 0x224)) <= 0.0)))) {
      bVar25 = F_00c24e60(param_1,param_2,(float)fVar27,(float)fVar28,(*(float *)(gen_frame + 0x21c)),(*(float *)(gen_frame + 0x1fc)),param_7,
                            (*(int *)(gen_frame + 0x218)));
      if (bVar25 != 0) {
        return 1;
      }
      fVar27 = (float10)(*(float *)(gen_frame + 0x220));
      fVar28 = (float10)(*(float *)(gen_frame + 0x224));
      fVar30 = (float10)(*(float *)(gen_frame + 0x228));
    }
    fVar29 = (float10)(*(float *)(gen_frame + 0x22c));
    if ((((!GEN_ISNAN(fVar27) && !GEN_ISNAN(fVar28)) && !(fVar27 < fVar28)) ||
        ((!GEN_ISNAN(fVar28) && !GEN_ISNAN(fVar30)) && !(fVar28 < fVar30))) ||
       (((!GEN_ISNAN(fVar29) && !GEN_ISNAN(fVar30)) && !(fVar29 < fVar30) || ((*(float *)(gen_frame + 0x228)) <= 0.0)))) {
      bVar25 = F_00c24e60(param_1,param_2,(float)fVar28,(float)fVar30,(*(float *)(gen_frame + 0x1fc)),(*(float *)(gen_frame + 0x1f8)),param_7,
                            (*(int *)(gen_frame + 0x218)));
      if (bVar25 != 0) {
        return 1;
      }
      fVar28 = (float10)(*(float *)(gen_frame + 0x224));
      fVar30 = (float10)(*(float *)(gen_frame + 0x228));
      fVar29 = (float10)(*(float *)(gen_frame + 0x22c));
    }
    if (((((!GEN_ISNAN(fVar28) && !GEN_ISNAN(fVar30)) && !(fVar28 < fVar30)) ||
         ((!GEN_ISNAN(fVar30) && !GEN_ISNAN(fVar29)) && !(fVar30 < fVar29))) ||
        ((!GEN_ISNAN((float10)param_4) && !GEN_ISNAN(fVar29)) && !((float10)param_4 < fVar29))) ||
       ((*(float *)(gen_frame + 0x22c)) <= 0.0)) {
      bVar25 = F_00c24e60(param_1,param_2,(float)fVar30,(float)fVar29,(*(float *)(gen_frame + 0x1f8)),(*(float *)(gen_frame + 0x23c)),param_7,
                            (*(int *)(gen_frame + 0x218)));
      if (bVar25 != 0) {
        return 1;
      }
      fVar30 = (float10)(*(float *)(gen_frame + 0x228));
      fVar29 = (float10)(*(float *)(gen_frame + 0x22c));
    }
    if (((fVar29 <= fVar30) || ((float10)param_4 <= fVar29)) &&
       (bVar25 = F_00c24e60(param_1,param_2,(float)fVar29,param_4,(*(float *)(gen_frame + 0x23c)),param_6,param_7,
                              (*(int *)(gen_frame + 0x218))), bVar25 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c25760 */
GEN_FRAME uint F_00c25760(float gen_a0)
{
  GEN_ENTER(0xc25760u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  return (uint)pfVar1;
}

/* ref: FUN_00c257a0 */
GEN_NOFRAME byte F_00c257a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc257a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x290];
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  byte bVar37;
  float * pfVar38;
  float10 fVar39;
  float10 fVar40;
  float10 fVar41;
  float10 fVar42;
  float10 fVar43;
  float10 fVar44;
  float10 fVar45;
  
  (*(float *)(gen_frame + 0x25c)) = *param_5;
  (*(float *)(gen_frame + 0x27c)) = *param_6;
  fVar39 = (float10)*param_6;
  fVar40 = (float10)*param_5;
  fVar6 = (float)(fVar40 + fVar39);
  (*(float *)(gen_frame + 0x260)) = fVar6;
  (*(float *)(gen_frame + 0x25c)) = param_5[1];
  (*(float *)(gen_frame + 0x27c)) = param_6[1];
  fVar41 = (float10)param_6[1];
  fVar42 = (float10)param_5[1];
  fVar7 = (float)(fVar42 + fVar41);
  (*(float *)(gen_frame + 0x264)) = fVar7;
  (*(float *)(gen_frame + 0x25c)) = param_5[2];
  (*(float *)(gen_frame + 0x27c)) = param_6[2];
  fVar43 = (float10)param_6[2];
  fVar44 = (float10)param_5[2];
  fVar8 = (float)(fVar44 + fVar43);
  (*(float *)(gen_frame + 0x268)) = fVar8;
  fVar9 = *param_7;
  (*(float *)(gen_frame + 0x23c)) = fVar9;
  fVar6 = (float)((float10)fVar9 + (float10)fVar6);
  (*(float *)(gen_frame + 0x260)) = fVar6;
  fVar10 = param_7[1];
  (*(float *)(gen_frame + 0x21c)) = fVar10;
  fVar7 = (float)((float10)fVar10 + (float10)fVar7);
  (*(float *)(gen_frame + 0x264)) = fVar7;
  fVar11 = param_7[2];
  (*(float *)(gen_frame + 0x218)) = fVar11;
  fVar8 = (float)((float10)fVar8 + (float10)fVar11);
  (*(float *)(gen_frame + 0x268)) = fVar8;
  fVar12 = *param_8;
  (*(float *)(gen_frame + 0x214)) = fVar12;
  fVar6 = (float)((float10)fVar12 + (float10)fVar6);
  (*(float *)(gen_frame + 0x260)) = fVar6;
  fVar13 = param_8[1];
  (*(float *)(gen_frame + 0x274)) = fVar13;
  fVar7 = (float)((float10)fVar13 + (float10)fVar7);
  (*(float *)(gen_frame + 0x264)) = fVar7;
  fVar14 = param_8[2];
  (*(float *)(gen_frame + 0x278)) = fVar14;
  fVar8 = (float)((float10)fVar8 + (float10)fVar14);
  (*(float *)(gen_frame + 0x268)) = fVar8;
  fVar45 = (float10)*(double *)&REFG(undefined, 0x1094878);
  fVar6 = (float)((float10)fVar6 * fVar45);
  (*(float *)(gen_frame + 0x260)) = fVar6;
  fVar7 = (float)((float10)fVar7 * fVar45);
  (*(float *)(gen_frame + 0x264)) = fVar7;
  fVar8 = (float)(fVar45 * (float10)fVar8);
  (*(float *)(gen_frame + 0x268)) = fVar8;
  fVar45 = (float10)fVar6;
  fVar6 = (float)(fVar40 - fVar45);
  (*(float *)(gen_frame + 0x200)) = fVar6;
  fVar40 = (float10)fVar7;
  fVar7 = (float)(fVar42 - fVar40);
  (*(float *)(gen_frame + 0x204)) = fVar7;
  fVar42 = (float10)fVar8;
  fVar8 = (float)(fVar44 - fVar42);
  (*(float *)(gen_frame + 0x208)) = fVar8;
  fVar15 = (float)(fVar39 - fVar45);
  (*(float *)(gen_frame + 0x260)) = fVar15;
  fVar16 = (float)(fVar41 - fVar40);
  (*(float *)(gen_frame + 0x264)) = fVar16;
  fVar17 = (float)(fVar43 - fVar42);
  (*(float *)(gen_frame + 0x268)) = fVar17;
  fVar9 = (float)((float10)fVar9 - fVar45);
  (*(float *)(gen_frame + 0x1f0)) = fVar9;
  fVar10 = (float)((float10)fVar10 - fVar40);
  (*(float *)(gen_frame + 0x1f4)) = fVar10;
  fVar11 = (float)((float10)fVar11 - fVar42);
  (*(float *)(gen_frame + 0x1f8)) = fVar11;
  fVar12 = (float)((float10)fVar12 - fVar45);
  (*(float *)(gen_frame + 0x220)) = fVar12;
  fVar13 = (float)((float10)fVar13 - fVar40);
  (*(float *)(gen_frame + 0x224)) = fVar13;
  fVar14 = (float)((float10)fVar14 - fVar42);
  (*(float *)(gen_frame + 0x228)) = fVar14;
  fVar18 = ((float)GEN_TOF(((float10)fVar8 * (float10)fVar8 +
                  ((float10)fVar7 * (float10)fVar7 + (float10)fVar6 * (float10)fVar6))));
  (*(float *)(gen_frame + 0x27c)) = fVar18;
  fVar18 = ((float)GEN_TOF(SQRT((float10)fVar18)));
  (*(float *)(gen_frame + 0x27c)) = fVar18;
  (*(float *)(gen_frame + 0x278)) = fVar18;
  fVar19 = ((float)GEN_TOF(((float10)fVar17 * (float10)fVar17 +
                  ((float10)fVar16 * (float10)fVar16 + (float10)fVar15 * (float10)fVar15))));
  (*(float *)(gen_frame + 0x27c)) = fVar19;
  fVar19 = ((float)GEN_TOF(SQRT((float10)fVar19)));
  (*(float *)(gen_frame + 0x27c)) = fVar19;
  pfVar38 = &(*(float *)(gen_frame + 0x278));
  (*(float *)(gen_frame + 0x274)) = fVar19;
  if (!((float10)fVar19 < (float10)fVar18)) {
    pfVar38 = &(*(float *)(gen_frame + 0x274));
  }
  fVar18 = *param_1;
  (*(float *)(gen_frame + 0x1e4)) = fVar18;
  (*(float *)(gen_frame + 0x0)) = fVar18;
  (*(float *)(gen_frame + 0x4)) = param_1[1];
  (*(float *)(gen_frame + 0x8)) = param_1[2];
  fVar19 = *param_2;
  (*(float *)(gen_frame + 0x25c)) = fVar19;
  (*(float *)(gen_frame + 0x10)) = fVar19;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = fVar7;
  fVar20 = ((float)GEN_TOF(((float10)fVar11 * (float10)fVar11 +
                  ((float10)fVar10 * (float10)fVar10 + (float10)fVar9 * (float10)fVar9))));
  (*(float *)(gen_frame + 0x27c)) = fVar20;
  (*(float *)(gen_frame + 0x28)) = fVar8;
  (*(float *)(gen_frame + 0x30)) = fVar15;
  (*(float *)(gen_frame + 0x34)) = fVar16;
  (*(float *)(gen_frame + 0x38)) = fVar17;
  (*(float *)(gen_frame + 0x40)) = *pfVar38;
  (*(float *)(gen_frame + 0x44)) = param_9;
  fVar20 = ((float)GEN_TOF(SQRT((float10)fVar20)));
  (*(float *)(gen_frame + 0x27c)) = fVar20;
  (*(float *)(gen_frame + 0x278)) = fVar20;
  fVar21 = ((float)GEN_TOF(((float10)fVar14 * (float10)fVar14 +
                  ((float10)fVar13 * (float10)fVar13 + (float10)fVar12 * (float10)fVar12))));
  (*(float *)(gen_frame + 0x27c)) = fVar21;
  fVar21 = ((float)GEN_TOF(SQRT((float10)fVar21)));
  (*(float *)(gen_frame + 0x27c)) = fVar21;
  pfVar38 = &(*(float *)(gen_frame + 0x278));
  (*(float *)(gen_frame + 0x274)) = fVar21;
  if (!((float10)fVar21 < (float10)fVar20)) {
    pfVar38 = &(*(float *)(gen_frame + 0x274));
  }
  fVar39 = (float10)REFG(double, 0x1088108);
  fVar20 = *param_3;
  fVar21 = param_3[1];
  fVar1 = param_3[2];
  (*(float *)(gen_frame + 0x240)) = (float)((float10)fVar6 * fVar39);
  fVar2 = param_4[1];
  (*(float *)(gen_frame + 0x1e8)) = fVar2;
  (*(float *)(gen_frame + 0x64)) = fVar2;
  fVar3 = param_4[2];
  (*(float *)(gen_frame + 0x1ec)) = fVar3;
  (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar7 * fVar39);
  (*(float *)(gen_frame + 0x68)) = fVar3;
  (*(float *)(gen_frame + 0x70)) = fVar9;
  (*(float *)(gen_frame + 0x74)) = fVar10;
  (*(float *)(gen_frame + 0x248)) = (float)((float10)fVar8 * fVar39);
  (*(float *)(gen_frame + 0x78)) = fVar11;
  (*(float *)(gen_frame + 0x80)) = fVar12;
  (*(float *)(gen_frame + 0x84)) = fVar13;
  fVar22 = ((float)GEN_TOF(((float10)fVar18 + (float10)(float)((float10)fVar6 * fVar39))));
  (*(float *)(gen_frame + 0x1b0)) = fVar22;
  fVar23 = param_1[1];
  (*(float *)(gen_frame + 0x88)) = fVar14;
  fVar4 = *pfVar38;
  (*(float *)(gen_frame + 0x278)) = fVar23;
  fVar5 = *param_4;
  (*(float *)(gen_frame + 0x90)) = fVar4;
  (*(float *)(gen_frame + 0x214)) = fVar20;
  (*(float *)(gen_frame + 0x50)) = fVar20;
  fVar4 = ((float)GEN_TOF(((float10)fVar23 + (float10)(float)((float10)fVar7 * fVar39))));
  (*(float *)(gen_frame + 0x1b4)) = fVar4;
  (*(float *)(gen_frame + 0x218)) = fVar21;
  fVar24 = param_1[2];
  (*(float *)(gen_frame + 0x54)) = fVar21;
  (*(float *)(gen_frame + 0x274)) = fVar24;
  (*(float *)(gen_frame + 0x21c)) = fVar1;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x1e0)) = fVar5;
  (*(float *)(gen_frame + 0x60)) = fVar5;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  fVar25 = ((float)GEN_TOF(((float10)fVar24 + (float10)(float)((float10)fVar8 * fVar39))));
  (*(float *)(gen_frame + 0x1b8)) = fVar25;
  (*(float *)(gen_frame + 0x240)) = (float)((float10)fVar15 * fVar39);
  (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar16 * fVar39);
  (*(float *)(gen_frame + 0x248)) = (float)((float10)fVar17 * fVar39);
  fVar26 = ((float)GEN_TOF(((float10)fVar19 + (float10)(float)((float10)fVar15 * fVar39))));
  (*(float *)(gen_frame + 0x1a0)) = fVar26;
  fVar27 = param_2[1];
  (*(float *)(gen_frame + 0x27c)) = fVar27;
  fVar28 = ((float)GEN_TOF(((float10)fVar27 + (float10)(float)((float10)fVar16 * fVar39))));
  (*(float *)(gen_frame + 0x1a4)) = fVar28;
  fVar29 = param_2[2];
  (*(float *)(gen_frame + 0x23c)) = fVar29;
  fVar30 = ((float)GEN_TOF(((float10)fVar29 + (float10)(float)((float10)fVar17 * fVar39))));
  (*(float *)(gen_frame + 0x1a8)) = fVar30;
  (*(float *)(gen_frame + 0x240)) = (float)((float10)fVar9 * fVar39);
  (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar10 * fVar39);
  (*(float *)(gen_frame + 0x248)) = (float)((float10)fVar11 * fVar39);
  fVar31 = ((float)GEN_TOF(((float10)fVar20 + (float10)(float)((float10)fVar9 * fVar39))));
  (*(float *)(gen_frame + 0x1c0)) = fVar31;
  fVar32 = ((float)GEN_TOF(((float10)(float)((float10)fVar10 * fVar39) + (float10)fVar21)));
  (*(float *)(gen_frame + 0x1c4)) = fVar32;
  fVar33 = ((float)GEN_TOF(((float10)(float)((float10)fVar11 * fVar39) + (float10)fVar1)));
  (*(float *)(gen_frame + 0x1c8)) = fVar33;
  (*(float *)(gen_frame + 0x240)) = (float)((float10)fVar12 * fVar39);
  (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar13 * fVar39);
  (*(float *)(gen_frame + 0x248)) = (float)((float10)fVar14 * fVar39);
  fVar34 = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)((float10)fVar12 * fVar39))));
  (*(float *)(gen_frame + 0x1d0)) = fVar34;
  fVar35 = ((float)GEN_TOF(((float10)(float)((float10)fVar13 * fVar39) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x1d4)) = fVar35;
  fVar36 = ((float)GEN_TOF(((float10)(float)((float10)fVar14 * fVar39) + (float10)fVar3)));
  (*(float *)(gen_frame + 0x1d8)) = fVar36;
  fVar6 = (float)((float10)fVar6 + (float10)fVar18);
  (*(float *)(gen_frame + 0x240)) = fVar6;
  fVar7 = (float)((float10)fVar7 + (float10)fVar23);
  (*(float *)(gen_frame + 0x244)) = fVar7;
  fVar8 = (float)((float10)fVar24 + (float10)fVar8);
  (*(float *)(gen_frame + 0x248)) = fVar8;
  fVar15 = (float)((float10)fVar19 + (float10)fVar15);
  (*(float *)(gen_frame + 0x200)) = fVar15;
  fVar16 = (float)((float10)fVar16 + (float10)fVar27);
  (*(float *)(gen_frame + 0x204)) = fVar16;
  (*(float *)(gen_frame + 0x208)) = (float)((float10)fVar29 + (float10)fVar17);
  (*(float *)(gen_frame + 0x260)) = (float)((float10)fVar20 + (float10)fVar9);
  (*(float *)(gen_frame + 0x264)) = (float)((float10)fVar10 + (float10)fVar21);
  (*(float *)(gen_frame + 0x268)) = (float)((float10)fVar11 + (float10)fVar1);
  fVar12 = (float)((float10)fVar5 + (float10)fVar12);
  (*(float *)(gen_frame + 0x1f0)) = fVar12;
  (*(float *)(gen_frame + 0x1f4)) = (float)((float10)fVar13 + (float10)fVar2);
  (*(float *)(gen_frame + 0x1f8)) = (float)((float10)fVar14 + (float10)fVar3);
  (*(float *)(gen_frame + 0x120)) = fVar18;
  (*(float *)(gen_frame + 0x124)) = fVar22;
  (*(float *)(gen_frame + 0x128)) = fVar6;
  (*(float *)(gen_frame + 0x130)) = fVar23;
  (*(float *)(gen_frame + 0x134)) = fVar4;
  (*(float *)(gen_frame + 0x138)) = fVar7;
  (*(float *)(gen_frame + 0x140)) = fVar24;
  (*(float *)(gen_frame + 0x144)) = fVar25;
  (*(float *)(gen_frame + 0x160)) = fVar20;
  (*(float *)(gen_frame + 0x148)) = fVar8;
  (*(float *)(gen_frame + 0x164)) = fVar31;
  (*(float *)(gen_frame + 0xa0)) = fVar19;
  (*(float *)(gen_frame + 0x168)) = (float)((float10)fVar20 + (float10)fVar9);
  (*(float *)(gen_frame + 0xa4)) = fVar26;
  (*(float *)(gen_frame + 0x174)) = fVar32;
  (*(float *)(gen_frame + 0xa8)) = fVar15;
  (*(float *)(gen_frame + 0x178)) = (float)((float10)fVar10 + (float10)fVar21);
  (*(float *)(gen_frame + 0xb0)) = fVar27;
  (*(float *)(gen_frame + 0x184)) = fVar33;
  (*(float *)(gen_frame + 0xb4)) = fVar28;
  (*(float *)(gen_frame + 0x188)) = (float)((float10)fVar11 + (float10)fVar1);
  (*(float *)(gen_frame + 0xb8)) = fVar16;
  (*(float *)(gen_frame + 0xe4)) = fVar34;
  (*(float *)(gen_frame + 0xc0)) = fVar29;
  (*(float *)(gen_frame + 0xe8)) = fVar12;
  (*(float *)(gen_frame + 0xc4)) = fVar30;
  (*(float *)(gen_frame + 0xf0)) = param_4[1];
  (*(undefined4 *)(gen_frame + 0x12c)) = 0;
  (*(undefined4 *)(gen_frame + 0x13c)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined4 *)(gen_frame + 0x150)) = 0;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  (*(float *)(gen_frame + 0xc8)) = (float)((float10)fVar29 + (float10)fVar17);
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xdc)) = 0;
  (*(undefined4 *)(gen_frame + 0x16c)) = 0;
  (*(float *)(gen_frame + 0x170)) = fVar21;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0;
  (*(float *)(gen_frame + 0x180)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x18c)) = 0;
  (*(undefined4 *)(gen_frame + 0x190)) = 0;
  (*(undefined4 *)(gen_frame + 0x194)) = 0;
  (*(undefined4 *)(gen_frame + 0x198)) = 0;
  (*(undefined4 *)(gen_frame + 0x19c)) = 0;
  (*(float *)(gen_frame + 0xe0)) = fVar5;
  (*(undefined4 *)(gen_frame + 0xec)) = 0;
  (*(float *)(gen_frame + 0xf4)) = fVar35;
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar13 + (float10)fVar2);
  (*(float *)(gen_frame + 0x100)) = param_4[2];
  (*(float *)(gen_frame + 0x104)) = fVar36;
  (*(undefined4 *)(gen_frame + 0xfc)) = 0;
  (*(float *)(gen_frame + 0x108)) = (float)((float10)fVar14 + (float10)fVar3);
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(undefined4 *)(gen_frame + 0x11c)) = 0;
  pfVar38 = (float *)F_00c24890(&(*(float *)(gen_frame + 0x1d0)),&(*(float *)(gen_frame + 0x120)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x160)),&(*(float *)(gen_frame + 0xe0)));
  fVar39 = (float10)param_9;
  fVar6 = (float)((float10)*pfVar38 - fVar39);
  (*(float *)(gen_frame + 0x220)) = fVar6;
  fVar7 = (float)((float10)pfVar38[1] - fVar39);
  (*(float *)(gen_frame + 0x224)) = fVar7;
  (*(float *)(gen_frame + 0x228)) = (float)((float10)pfVar38[2] - fVar39);
  fVar40 = (float10)fVar6;
  fVar41 = (float10)fVar7;
  fVar39 = (float10)(float)((float10)pfVar38[2] - fVar39);
  if ((((!GEN_ISNAN(fVar41) && !GEN_ISNAN(fVar40)) && !(fVar41 < fVar40)) ||
      ((!GEN_ISNAN(fVar39) && !GEN_ISNAN(fVar41)) && !(fVar39 < fVar41))) || (fVar7 <= 0.0)) {
    bVar37 = F_00c24e60(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x50)),fVar6,fVar7,(float)(float10)0,REFG(float, 0x1088068),param_10,
                          3);
    if (bVar37 != 0) {
      return 1;
    }
    fVar41 = (float10)(*(float *)(gen_frame + 0x224));
    fVar39 = (float10)(*(float *)(gen_frame + 0x228));
    fVar40 = (float10)(*(float *)(gen_frame + 0x220));
  }
  if (((fVar41 <= fVar40) || (fVar39 <= fVar41)) &&
     (bVar37 = F_00c24e60(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x50)),(float)fVar41,(float)fVar39,REFG(float, 0x1088068),
                            (float)(float10)1,param_10,3), bVar37 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c26130 */
GEN_NOFRAME float F_00c26130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc26130u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(float *)(gen_frame + 0x20)) = *param_1;
  fVar8 = (float10)*param_1;
  (*(float *)(gen_frame + 0x20)) = param_1[1];
  fVar9 = (float10)param_1[1];
  (*(float *)(gen_frame + 0x20)) = param_1[2];
  fVar10 = (float10)param_1[2];
  fVar1 = (float)((float10)param_2[2] - fVar10);
  fVar11 = (float10)(float)((float10)param_2[1] - fVar9);
  fVar12 = (float10)(float)((float10)*param_2 - fVar8);
  (*(double *)(gen_frame + 0x8)) = (double)fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 + (fVar12 * fVar12 + fVar11 * fVar11))));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  if ((float10)fVar2 <= (float10)0) {
    fVar8 = (float10)*param_3 - fVar8;
    fVar9 = (float10)param_3[1] - fVar9;
    fVar10 = (float10)param_3[2] - fVar10;
  }
  else {
    fVar3 = *param_3;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    fVar4 = param_3[1];
    (*(float *)(gen_frame + 0x24)) = fVar4;
    fVar5 = param_3[2];
    pfVar7 = &(*(float *)(gen_frame + 0x2c));
    (*(float *)(gen_frame + 0x20)) = fVar5;
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 - fVar10) * (float10)fVar1 +
                   ((float10)(float)((float10)fVar3 - fVar8) * fVar12 +
                   (float10)(float)((float10)fVar4 - fVar9) * fVar11))));
    (*(float *)(gen_frame + 0x1c)) = fVar6;
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = 0.0;
    fVar2 = (float)((float10)fVar6 / (float10)fVar2);
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    if (!((float10)fVar2 < (float10)1)) {
      pfVar7 = &(*(float *)(gen_frame + 0x1c));
    }
    if (!(0.0 < *pfVar7)) {
      pfVar7 = (float *)((int)&(*(double *)(gen_frame + 0x8)) + 4);
    }
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = *pfVar7;
    fVar13 = (float10)*pfVar7;
    fVar8 = (float10)fVar3 - (float10)((float)GEN_TOF(((float10)(float)(fVar13 * fVar12) + fVar8)));
    fVar9 = (float10)fVar4 - (float10)((float)GEN_TOF((fVar9 + (float10)(float)(fVar13 * fVar11))));
    fVar10 = (float10)fVar5 - (float10)((float)GEN_TOF((fVar10 + (float10)(float)(fVar13 * (float10)fVar1))));
  }
  (*(float *)(gen_frame + 0x4)) = (float)fVar9;
  (*(float *)(gen_frame + 0x0)) = (float)fVar8;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 0)) = (float)fVar10;
  fVar8 = (float10)(float)fVar10;
  fVar1 = ((float)GEN_TOF((fVar8 * fVar8 +
                 ((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4))))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = fVar1;
  return fVar1;
}

/* ref: FUN_00c262e0 */
GEN_NOFRAME uint F_00c262e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc262e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar5 = REFG(float, 0x1087f04);
  fVar1 = *param_1;
  ((float *)(gen_frame + 0x0))[3] = fVar1;
  fVar2 = param_1[1];
  ((float *)(gen_frame + 0x0))[2] = fVar2;
  fVar3 = param_1[2];
  ((float *)(gen_frame + 0x0))[1] = fVar3;
  fVar7 = (float10)(float)((float10)param_2[1] - (float10)fVar2);
  fVar8 = (float10)(float)((float10)*param_2 - (float10)fVar1);
  fVar9 = (float10)(float)((float10)param_2[2] - (float10)fVar3);
  fVar4 = ((float)GEN_TOF(((fVar8 * fVar8 + fVar7 * fVar7) + fVar9 * fVar9)));
  ((float *)(gen_frame + 0x0))[0] = fVar4;
  fVar10 = (float10)fVar4;
  if (fVar10 <= (float10)0) {
    *param_4 = fVar1;
    param_4[1] = param_1[1];
    param_4[2] = param_1[2];
    *param_5 = 0.0;
    return (uint)param_5;
  }
  ((float *)(gen_frame + 0x0))[2] = 0.0;
  pfVar6 = ((float *)(gen_frame + 0x0));
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)param_3[2] - (float10)fVar3) * fVar9 +
                 ((float10)(float)((float10)*param_3 - (float10)fVar1) * fVar8 +
                 (float10)(float)((float10)param_3[1] - (float10)fVar2) * fVar7))));
  ((float *)(gen_frame + 0x0))[0] = fVar1;
  fVar1 = (float)((float10)fVar1 / fVar10);
  ((float *)(gen_frame + 0x0))[1] = fVar1;
  *param_5 = fVar1;
  ((float *)(gen_frame + 0x0))[0] = fVar1;
  ((float *)(gen_frame + 0x0))[1] = fVar5;
  if (!(fVar1 < fVar5)) {
    pfVar6 = ((float *)(gen_frame + 0x0)) + 1;
  }
  if (!(0.0 < *pfVar6)) {
    pfVar6 = ((float *)(gen_frame + 0x0)) + 2;
  }
  fVar1 = *pfVar6;
  ((float *)(gen_frame + 0x0))[0] = fVar1;
  fVar10 = (float10)fVar1;
  *param_4 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)(fVar10 * fVar8))));
  param_4[1] = ((float)GEN_TOF(((float10)(float)(fVar10 * fVar7) + (float10)param_1[1])));
  param_4[2] = ((float)GEN_TOF(((float10)param_1[2] + (float10)(float)(fVar9 * fVar10))));
  return (uint)param_4;
}

/* ref: FUN_00c26450 */
GEN_NOFRAME uint F_00c26450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc26450u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
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
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  fVar8 = REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0x4))[2] = *param_1;
  fVar10 = (float10)*param_1;
  fVar1 = (float)((float10)param_1[4] - fVar10);
  ((float *)(gen_frame + 0x4))[2] = param_1[1];
  fVar11 = (float10)param_1[1];
  ((float *)(gen_frame + 0x4))[2] = param_1[2];
  fVar12 = (float10)param_1[2];
  fVar2 = (float)((float10)param_1[6] - fVar12);
  ((float *)(gen_frame + 0x4))[2] = *param_2;
  fVar13 = (float10)*param_2;
  ((float *)(gen_frame + 0x4))[2] = param_2[1];
  fVar14 = (float10)param_2[1];
  ((float *)(gen_frame + 0x4))[2] = param_2[2];
  fVar15 = (float10)param_2[2];
  fVar3 = (float)(fVar10 - fVar13);
  fVar4 = (float)(fVar11 - fVar14);
  fVar5 = (float)(fVar12 - fVar15);
  fVar10 = (float10)(float)((float10)param_1[5] - fVar11);
  fVar6 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                 ((float10)fVar1 * (float10)fVar1 + fVar10 * fVar10))));
  ((float *)(gen_frame + 0x4))[2] = fVar6;
  fVar11 = (float10)(float)((float10)param_2[5] - fVar14);
  fVar12 = (float10)(float)((float10)param_2[4] - fVar13);
  fVar13 = (float10)(float)((float10)param_2[6] - fVar15);
  fVar7 = ((float)GEN_TOF(((fVar12 * fVar12 + fVar11 * fVar11) + fVar13 * fVar13)));
  (*(float *)(gen_frame + 0x1c)) = fVar7;
  fVar14 = (float10)fVar6;
  if (fVar14 <= (float10)REFG(float, 0x110f360)) {
    if (fVar7 <= REFG(float, 0x110f360)) {
      *param_6 = 0.0;
      *param_5 = 0.0;
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *param_4 = *param_2;
      param_4[1] = param_2[1];
      param_4[2] = param_2[2];
      return (uint)param_4;
    }
    *param_5 = 0.0;
    ((float *)(gen_frame + 0x4))[3] = 0.0;
    pfVar9 = ((float *)(gen_frame + 0x4)) + 4;
    fVar3 = ((float)GEN_TOF(((float10)fVar5 * fVar13 + ((float10)fVar3 * fVar12 + (float10)fVar4 * fVar11))));
    ((float *)(gen_frame + 0x4))[2] = fVar3;
    ((float *)(gen_frame + 0x4))[2] = fVar8;
    fVar3 = (float)((float10)fVar3 / (float10)fVar7);
    ((float *)(gen_frame + 0x4))[4] = fVar3;
    if (!((float10)fVar3 < (float10)1)) {
      pfVar9 = ((float *)(gen_frame + 0x4)) + 2;
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = ((float *)(gen_frame + 0x4)) + 3;
    }
    *param_6 = *pfVar9;
  }
  else {
    fVar6 = ((float)GEN_TOF(((float10)fVar5 * (float10)fVar2 +
                   ((float10)fVar3 * (float10)fVar1 + (float10)fVar4 * fVar10))));
    ((float *)(gen_frame + 0x4))[4] = fVar6;
    if (fVar7 <= REFG(float, 0x110f360)) {
      *param_6 = 0.0;
      ((float *)(gen_frame + 0x4))[3] = fVar8;
      pfVar9 = ((float *)(gen_frame + 0x4)) + 2;
      fVar3 = (float)(-(float10)fVar6 / fVar14);
      ((float *)(gen_frame + 0x4))[4] = fVar3;
      ((float *)(gen_frame + 0x4))[2] = fVar3;
      ((float *)(gen_frame + 0x4))[4] = 0.0;
      if (!((float10)fVar3 < (float10)1)) {
        pfVar9 = ((float *)(gen_frame + 0x4)) + 3;
      }
      if (!(0.0 < *pfVar9)) {
        pfVar9 = ((float *)(gen_frame + 0x4)) + 4;
      }
      *param_5 = *pfVar9;
    }
    else {
      fVar3 = ((float)GEN_TOF(((float10)fVar5 * fVar13 + ((float10)fVar3 * fVar12 + (float10)fVar4 * fVar11))))
      ;
      ((float *)(gen_frame + 0x4))[2] = fVar3;
      fVar4 = ((float)GEN_TOF((fVar13 * (float10)fVar2 + (fVar12 * (float10)fVar1 + fVar11 * fVar10))));
      ((float *)(gen_frame + 0x4))[5] = fVar4;
      fVar5 = (float)((float10)fVar7 * fVar14 - (float10)fVar4 * (float10)fVar4);
      ((float *)(gen_frame + 0x4))[3] = fVar5;
      if ((float10)REFG(float, 0x10905c4) < (float10)fVar5) {
        ((float *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[1], REFG(float, 0x1087f04));
        ((float *)(gen_frame + 0x4))[0] = 0.0;
        pfVar9 = ((float *)(gen_frame + 0x4)) + 3;
        fVar5 = ((float)GEN_TOF((((float10)fVar4 * (float10)fVar3 - (float10)fVar7 * (float10)fVar6) /
                       (float10)fVar5)));
        ((float *)(gen_frame + 0x4))[3] = fVar5;
        if (!((float10)fVar5 < (float10)1)) {
          pfVar9 = ((float *)(gen_frame + 0x4)) + 1;
        }
        if (!(0.0 < *pfVar9)) {
          pfVar9 = ((float *)(gen_frame + 0x4));
        }
        *param_5 = *pfVar9;
      }
      else {
        *param_5 = 0.0;
      }
      fVar3 = ((float)GEN_TOF((((float10)*param_5 * (float10)fVar4 + (float10)fVar3) / (float10)fVar7)));
      ((float *)(gen_frame + 0x4))[2] = fVar3;
      *param_6 = fVar3;
      if ((float10)fVar3 < (float10)0) {
        *param_6 = 0.0;
        ((float *)(gen_frame + 0x4))[1] = fVar8;
        ((float *)(gen_frame + 0x4))[2] = 0.0;
        pfVar9 = ((float *)(gen_frame + 0x4));
        fVar3 = (float)(-(float10)fVar6 / fVar14);
        ((float *)(gen_frame + 0x4))[4] = fVar3;
        ((float *)(gen_frame + 0x4))[0] = fVar3;
        if (!((float10)fVar3 < (float10)1)) {
          pfVar9 = ((float *)(gen_frame + 0x4)) + 1;
        }
        if (!(0.0 < *pfVar9)) {
          pfVar9 = ((float *)(gen_frame + 0x4)) + 2;
        }
        *param_5 = *pfVar9;
      }
      else if (fVar8 < fVar3) {
        *param_6 = fVar8;
        ((float *)(gen_frame + 0x4))[0] = fVar8;
        ((float *)(gen_frame + 0x4))[1] = 0.0;
        pfVar9 = ((float *)(gen_frame + 0x4)) + 2;
        fVar3 = ((float)GEN_TOF((((float10)fVar4 - (float10)fVar6) / fVar14)));
        ((float *)(gen_frame + 0x4))[2] = fVar3;
        if (!((float10)fVar3 < (float10)1)) {
          pfVar9 = ((float *)(gen_frame + 0x4));
        }
        if (!(0.0 < *pfVar9)) {
          pfVar9 = ((float *)(gen_frame + 0x4)) + 1;
        }
        *param_5 = *pfVar9;
      }
    }
  }
  fVar3 = *param_5;
  ((float *)(gen_frame + 0x4))[0] = fVar3;
  fVar14 = (float10)fVar3;
  *param_3 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)(fVar14 * (float10)fVar1))));
  param_3[1] = ((float)GEN_TOF(((float10)param_1[1] + (float10)(float)(fVar14 * fVar10))));
  param_3[2] = ((float)GEN_TOF(((float10)param_1[2] + (float10)(float)((float10)fVar2 * fVar14))));
  fVar1 = *param_6;
  ((float *)(gen_frame + 0x4))[0] = fVar1;
  fVar10 = (float10)fVar1;
  *param_4 = ((float)GEN_TOF(((float10)*param_2 + (float10)(float)(fVar10 * fVar12))));
  param_4[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)(float)(fVar10 * fVar11))));
  param_4[2] = ((float)GEN_TOF(((float10)(float)(fVar13 * fVar10) + (float10)param_2[2])));
  return (uint)param_4;
}

/* ref: FUN_00c26850 */
GEN_NOFRAME byte F_00c26850(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc26850u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  byte bVar3;
  float10 fVar4;
  float fVar5;
  
  if ((param_8 == 0) || (param_3 <= 0.0)) {
    *param_7 = param_5;
    return 1;
  }
  fVar5 = (float)((float10)param_6 - (float10)param_5);
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar5 = (float)((float10)fVar5 * (float10)param_1[0x10]);
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar4 = (float10)fVar5;
  if ((!GEN_ISNAN((float10)param_3) && !GEN_ISNAN(fVar4)) && !((float10)param_3 <= fVar4)) {
    return 0;
  }
  if (!(fVar4 < (float10)param_4)) {
    fVar5 = ((float)GEN_TOF((((float10)param_5 + (float10)param_6) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x28)) = fVar5;
    fVar4 = (float10)fVar5;
    fVar5 = param_1[8];
    (*(float *)(gen_frame + 0x0)) = (float)(fVar4 * (float10)fVar5);
    fVar1 = param_1[9];
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar1 * fVar4);
    fVar2 = param_1[10];
    (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 * fVar4);
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)(float)(fVar4 * (float10)fVar5) + (float10)*param_1)));
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)param_1[1] + (float10)(float)((float10)fVar1 * fVar4))));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)param_1[2] + (float10)(float)((float10)fVar2 * fVar4))));
    fVar5 = param_1[0xc];
    (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar5 * fVar4);
    fVar1 = param_1[0xd];
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 * fVar4);
    fVar2 = param_1[0xe];
    (*(float *)(gen_frame + 0x18)) = (float)(fVar4 * (float10)fVar2);
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)param_1[4] + (float10)(float)((float10)fVar5 * fVar4))));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)param_1[5] + (float10)(float)((float10)fVar1 * fVar4))));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)param_1[6] + (float10)(float)(fVar4 * (float10)fVar2))));
    fVar5 = F_00c26130(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),param_2);
    fVar5 = (float)((float10)fVar5 - (float10)param_1[0x11]);
    (*(float *)(gen_frame + 0x2c)) = fVar5;
    fVar4 = (float10)fVar5;
    if ((((float10)param_3 <= fVar4) || (fVar4 <= (float10)param_4)) || (fVar5 <= 0.0)) {
      bVar3 = F_00c26850(param_1,param_2,param_3,fVar5,param_5,(*(float *)(gen_frame + 0x28)),param_7,param_8 - 1);
      if (bVar3 != 0) {
        return 1;
      }
      fVar4 = (float10)(*(float *)(gen_frame + 0x2c));
    }
    if ((((!GEN_ISNAN((float10)param_3) && !GEN_ISNAN(fVar4)) && !((float10)param_3 < fVar4)) ||
        ((float10)param_4 <= fVar4)) &&
       (bVar3 = F_00c26850(param_1,param_2,(float)fVar4,param_4,(*(float *)(gen_frame + 0x28)),param_6,param_7,
                             param_8 - 1), bVar3 != 0)) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00c26b40 */
GEN_NOFRAME byte F_00c26b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc26b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  float * pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  fVar15 = *param_6;
  (*(float *)(gen_frame + 0xac)) = fVar15;
  fVar12 = (float10)fVar15;
  fVar15 = (float)((float10)*param_4 - fVar12);
  (*(float *)(gen_frame + 0x90)) = fVar15;
  fVar3 = param_6[1];
  (*(float *)(gen_frame + 0xac)) = fVar3;
  fVar13 = (float10)fVar3;
  fVar3 = (float)((float10)param_4[1] - fVar13);
  (*(float *)(gen_frame + 0x94)) = fVar3;
  fVar4 = param_6[2];
  (*(float *)(gen_frame + 0xac)) = fVar4;
  fVar14 = (float10)fVar4;
  fVar4 = (float)((float10)param_4[2] - fVar14);
  (*(float *)(gen_frame + 0x98)) = fVar4;
  fVar5 = (float)((float10)*param_5 - fVar12);
  (*(float *)(gen_frame + 0x70)) = fVar5;
  fVar6 = (float)((float10)param_5[1] - fVar13);
  (*(float *)(gen_frame + 0x74)) = fVar6;
  fVar7 = (float)((float10)param_5[2] - fVar14);
  (*(float *)(gen_frame + 0x78)) = fVar7;
  fVar8 = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar4 +
                 ((float10)fVar15 * (float10)fVar15 + (float10)fVar3 * (float10)fVar3))));
  (*(float *)(gen_frame + 0xac)) = fVar8;
  fVar8 = ((float)GEN_TOF(SQRT((float10)fVar8)));
  (*(float *)(gen_frame + 0xac)) = fVar8;
  (*(float *)(gen_frame + 0x88)) = fVar8;
  fVar9 = ((float)GEN_TOF(((float10)fVar7 * (float10)fVar7 +
                 ((float10)fVar5 * (float10)fVar5 + (float10)fVar6 * (float10)fVar6))));
  (*(float *)(gen_frame + 0xac)) = fVar9;
  fVar9 = ((float)GEN_TOF(SQRT((float10)fVar9)));
  (*(float *)(gen_frame + 0xac)) = fVar9;
  pfVar11 = &(*(float *)(gen_frame + 0x88));
  if (!((float10)fVar9 < (float10)fVar8)) {
    pfVar11 = &(*(float *)(gen_frame + 0xac));
  }
  fVar8 = *param_1;
  (*(float *)(gen_frame + 0x60)) = fVar8;
  (*(float *)(gen_frame + 0x0)) = fVar8;
  fVar9 = param_1[1];
  (*(float *)(gen_frame + 0x68)) = fVar9;
  (*(float *)(gen_frame + 0x4)) = fVar9;
  fVar1 = param_1[2];
  (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar8 + (float10)fVar15);
  (*(float *)(gen_frame + 0x64)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  fVar8 = *param_2;
  (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar9 + (float10)fVar3);
  (*(float *)(gen_frame + 0x6c)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar8;
  fVar9 = param_2[1];
  (*(float *)(gen_frame + 0xa8)) = fVar9;
  (*(float *)(gen_frame + 0x14)) = fVar9;
  fVar2 = param_2[2];
  (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar1 + (float10)fVar4);
  (*(float *)(gen_frame + 0x8c)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  (*(float *)(gen_frame + 0x20)) = fVar15;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar8 + (float10)fVar5);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x28)) = fVar4;
  (*(float *)(gen_frame + 0x30)) = fVar5;
  (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar9 + (float10)fVar6);
  (*(float *)(gen_frame + 0x34)) = fVar6;
  (*(float *)(gen_frame + 0x38)) = fVar7;
  (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar2 + (float10)fVar7);
  (*(float *)(gen_frame + 0x40)) = *pfVar11;
  (*(float *)(gen_frame + 0x44)) = param_7;
  fVar15 = F_00c26130(param_1,param_2,param_3);
  (*(float *)(gen_frame + 0xa8)) = (float)((float10)fVar15 - (float10)param_7);
  fVar15 = F_00c26130(&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x90)),param_3);
  (*(float *)(gen_frame + 0x8c)) = (float)((float10)fVar15 - (float10)param_7);
  bVar10 = F_00c26850(&(*(float *)(gen_frame + 0x0)),param_3,(*(float *)(gen_frame + 0xa8)),(float)((float10)fVar15 - (float10)param_7),
                        (float)(float10)0,(float)(float10)1,param_8,7);
  return bVar10;
}

/* ref: FUN_00c26d90 */
GEN_FRAME unsigned int GEN_THISCALL F_00c26d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xc26d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  in_ecx[8] = *param_4;
  in_ecx[9] = param_4[1];
  in_ecx[10] = param_4[2];
  in_ecx[0xc] = *param_5;
  in_ecx[0xd] = param_5[1];
  in_ecx[0xe] = param_5[2];
  in_ecx[0x10] = (undefined4)gen_fl2bits(param_6);
  in_ecx[0x11] = (undefined4)gen_fl2bits(param_7);
  return 0;
}

/* ref: Client::Graphics::Physics::CollisionBase::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c26e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc26e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_00c26ed0 */
GEN_NOFRAME uint F_00c26ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc26ed0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (in_eax - in_ecx) - 1;
  puVar1 = ((uint *)GEN_TOP((*(int *)(*param_3 + 0xc) + in_ecx * 4)));
  uVar3 = (int)uVar2 >> 0x1f;
  uVar3 = (uVar2 ^ uVar3) - uVar3;
  if (0x1ffff < (int)uVar3) {
    uVar3 = F_00c11c20(param_3[3],((char *)REFP(0x134a0c4)));
  }
  *puVar1 = ((in_eax - in_ecx) + 0x1fffe) * 0x4000 ^ *puVar1 & 0x3fff;
  return uVar3;
}

/* ref: FUN_00c26f20 */
GEN_NOFRAME uint F_00c26f20(unsigned int gen_a0)
{
  GEN_ENTER(0xc26f20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x18);
  return *(uint *)(param_1 + 0x18);
}

/* ref: FUN_00c26f80 */
GEN_NOFRAME uint F_00c26f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc26f80u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  
  if ((*(int *)&gen_a1) != -1) {
    do {
      puVar1 = ((uint *)GEN_TOP((*(int *)(*in_eax + 0xc) + (*(int *)&gen_a1) * 4)));
      if (((*(int *)&gen_a1) < 1) || (puVar3 = puVar1 - 1, ((&REFG(undefined, 0x110f47c))[(int)(puVar1[-1] & 0x3f)] & 0x80) == 0))
      {
        puVar3 = puVar1;
      }
      if (((byte)*puVar3 & 0x3f) != 0x1b) {
        return 1;
      }
      iVar2 = (*puVar1 >> 0xe) - 0x1ffff;
    } while ((iVar2 != -1) && ((*(int *)&gen_a1) = (*(int *)&gen_a1) + 1 + iVar2, (*(int *)&gen_a1) != -1));
  }
  return 0;
}

/* ref: FUN_00c26ff0 */
GEN_NOFRAME uint F_00c26ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc26ff0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)(*param_3 + 0xc) + in_eax * 4)));
  if ((in_eax < 1) || (puVar3 = puVar1 - 1, ((&REFG(undefined, 0x110f47c))[(int)(puVar1[-1] & 0x3f)] & 0x80) == 0)) {
    puVar3 = puVar1;
  }
  uVar2 = *puVar3;
  if (((byte)uVar2 & 0x3f) != 0x1b) {
    return 0;
  }
  if (((*(uint *)&gen_a1) != 0xff) && ((*(uint *)&gen_a1) != uVar2 >> 0x17)) {
    *puVar3 = ((*(uint *)&gen_a1) << 6 ^ uVar2) & 0x3fc0 ^ uVar2;
    return 1;
  }
  *puVar3 = (uVar2 & 0xffb5ffff | 0x340000) >> 0x11 | uVar2 & 0x7fc000;
  return 1;
}

/* ref: FUN_00c27070 */
GEN_NOFRAME uint F_00c27070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27070u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar1 = in_eax;
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return in_eax;
    }
    puVar3 = ((uint *)GEN_TOP((*(int *)(*param_2 + 0xc) + uVar1 * 4)));
    if (((int)uVar1 < 1) || (puVar4 = puVar3 - 1, ((&REFG(undefined, 0x110f47c))[(int)(puVar3[-1] & 0x3f)] & 0x80) == 0)
       ) {
      puVar4 = puVar3;
    }
    uVar2 = *puVar4;
    if (((byte)uVar2 & 0x3f) == 0x1b) {
      *puVar4 = (uVar2 & 0xffb5ffff | 0x340000) >> 0x11 | uVar2 & 0x7fc000;
    }
    in_eax = (*((uint *)GEN_TOP((uVar1 * 4 + *(int *)(*param_2 + 0xc)))) >> 0xe) - 0x1ffff;
    if (in_eax == 0xffffffff) break;
    uVar1 = uVar1 + 1 + in_eax;
  }
  return 0xffffffff;
}

/* ref: FUN_00c27100 */
GEN_NOFRAME uint F_00c27100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc27100u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint in_eax = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint in_eax_00;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint local_4;
  
  in_eax_00 = in_eax;
  while (in_eax_00 != 0xffffffff) {
    uVar1 = *((uint *)GEN_TOP((in_eax_00 * 4 + *(int *)(*param_2 + 0xc)))) >> 0xe;
    if (uVar1 == 0x1fffe) {
      local_4 = 0xffffffff;
    }
    else {
      local_4 = (uVar1 - 0x1fffe) + in_eax_00;
    }
    uVar1 = F_00c26ff0(in_eax_00,param_4,param_2);
    iVar3 = param_5;
    if (uVar1 != 0) {
      iVar3 = param_3;
    }
    puVar2 = ((uint *)GEN_TOP((*(int *)(*param_2 + 0xc) + in_eax_00 * 4)));
    uVar4 = (iVar3 - in_eax_00) - 1;
    uVar1 = (int)uVar4 >> 0x1f;
    in_eax = (uVar4 ^ uVar1) - uVar1;
    if (0x1ffff < (int)in_eax) {
      in_eax = F_00c11c20(param_2[3],((char *)REFP(0x134a0c4)));
    }
    *puVar2 = ((iVar3 - in_eax_00) + 0x1fffe) * 0x4000 ^ *puVar2 & 0x3fff;
    in_eax_00 = local_4;
  }
  return in_eax;
}

/* ref: FUN_00c271e0 */
GEN_NOFRAME uint F_00c271e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc271e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint in_ecx;
  uint uVar1;
  
  uVar1 = param_3;
  if (param_3 != 0xffffffff) {
    if (*param_2 == 0xffffffff) {
      *param_2 = param_3;
      return param_3;
    }
    uVar1 = *param_2;
    do {
      in_ecx = uVar1;
      uVar1 = *((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + in_ecx * 4))) >> 0xe;
      if (uVar1 == 0x1fffe) break;
      uVar1 = (uVar1 - 0x1fffe) + in_ecx;
    } while (uVar1 != 0xffffffff);
    uVar1 = F_00c26ed0(param_3,in_ecx,param_1);
  }
  return uVar1;
}

/* ref: FUN_00c27230 */
GEN_NOFRAME uint F_00c27230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27230u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[9] + param_2;
  if ((int)(uint)*(byte *)(uVar1 + 0x4b) < iVar2) {
    if (0xf9 < iVar2) {
      F_00c11c20(param_1[3],((char *)REFP(0x134a0e0)));
    }
    uVar1 = *param_1;
    *(char *)(uVar1 + 0x4b) = (char)iVar2;
  }
  return uVar1;
}

/* ref: FUN_00c27270 */
GEN_NOFRAME uint F_00c27270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27270u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[9] + param_2;
  if ((int)(uint)*(byte *)(uVar1 + 0x4b) < iVar2) {
    if (0xf9 < iVar2) {
      F_00c11c20(param_1[3],((char *)REFP(0x134a0e0)));
    }
    uVar1 = *param_1;
    *(char *)(uVar1 + 0x4b) = (char)iVar2;
  }
  param_1[9] = param_1[9] + param_2;
  return uVar1;
}

/* ref: FUN_00c272d0 */
GEN_NOFRAME uint F_00c272d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc272d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_ecx = (int)gen_a1;
  if (((*in_eax == 0xc) && (in_eax = (int *)in_eax[2], ((uint)in_eax & 0x100) == 0)) &&
     ((int)(uint)*(byte *)(in_ecx + 0x32) <= (int)in_eax)) {
    *(int *)(in_ecx + 0x24) = *(int *)(in_ecx + 0x24) - 1;
  }
  return (uint)in_eax;
}

/* ref: FUN_00c272f0 */
GEN_NOFRAME uint GEN_THISCALL F_00c272f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc272f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  double * pdVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  uint * puVar7;
  int iVar8;
  
  iVar1 = param_1[4];
  pdVar3 = (double *)F_00c052a0(iVar1,param_1[1],this);
  iVar2 = *param_1;
  iVar8 = *(int *)(iVar2 + 0x28);
  piVar6 = (int *)(iVar2 + 0x28);
  if (*(int *)(pdVar3 + 1) == 3) {
    return (int)*pdVar3;
  }
  puVar7 = (uint *)(param_1 + 10);
  *pdVar3 = (double)param_1[10];
  *(undefined4 *)(pdVar3 + 1) = 3;
  if (*piVar6 < (int)(*puVar7 + 1)) {
    uVar4 = F_00c11980(iVar1,*(undefined4 *)(iVar2 + 8),piVar6,0x10,0x3ffff,
                         ((char *)REFP(0x134a104)));
    *(uint *)(iVar2 + 8) = uVar4;
  }
  if (iVar8 < *piVar6) {
    iVar5 = iVar8 << 4;
    do {
      *((undefined4 *)GEN_TOP((iVar5 + 8 + *(int *)(iVar2 + 8)))) = 0;
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar8 < *piVar6);
  }
  piVar6 = ((int *)GEN_TOP((*puVar7 * 0x10 + *(int *)(iVar2 + 8))));
  *piVar6 = *param_2;
  piVar6[1] = param_2[1];
  piVar6[2] = param_2[2];
  if (((3 < param_2[2]) && ((*(byte *)(*param_2 + 5) & 3) != 0)) &&
     ((*(byte *)(iVar2 + 5) & 4) != 0)) {
    F_00c01900(iVar1,iVar2,*param_2);
  }
  uVar4 = *puVar7;
  *puVar7 = uVar4 + 1;
  return uVar4;
}

/* ref: FUN_00c273d0 */
GEN_NOFRAME uint F_00c273d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc273d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  uVar1 = F_00c272f0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,((undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00c27400 */
GEN_NOFRAME uint F_00c27400(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc27400u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double param_2 = (double)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(double *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  uVar1 = F_00c272f0(&(*(double *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,&(*(double *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00c27430 */
GEN_NOFRAME uint F_00c27430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = in_eax;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  uVar1 = F_00c272f0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,in_edx,((undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00c27450 */
GEN_NOFRAME uint F_00c27450(unsigned int gen_a0)
{
  GEN_ENTER(0xc27450u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)(in_eax + 4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 5;
  uVar1 = F_00c272f0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,in_eax,((undefined1 *)(gen_frame + 0x10)));
  return uVar1;
}

/* ref: FUN_00c27480 */
GEN_NOFRAME uint F_00c27480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc27480u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 == 0xd) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)));
    *puVar1 = *puVar1 ^ ((param_3 + 1) * 0x4000 ^
                        *((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)))) & 0x7fc000;
    return (uint)puVar1;
  }
  if (uVar2 == 0xe) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)));
    *puVar1 = (param_3 + 1) * 0x800000 ^ *puVar1 & 0x7fffff;
    puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)));
    *puVar1 = *puVar1 ^ (param_1[9] << 6 ^ *puVar1) & 0x3fc0;
    uVar2 = F_00c27270(param_1,1);
  }
  return uVar2;
}

/* ref: FUN_00c27510 */
GEN_NOFRAME uint F_00c27510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27510u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint * puVar1;
  
  if (*param_2 == 0xd) {
    *param_2 = 0xc;
    param_2[2] = *((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4))) >> 6 & 0xff;
    return (uint)param_2;
  }
  if (*param_2 == 0xe) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_2[2] * 4)));
    *puVar1 = *puVar1 & 0x7fffff | 0x1000000;
    *param_2 = 0xb;
  }
  return (uint)param_2;
}

/* ref: FUN_00c27570 */
GEN_NOFRAME uint F_00c27570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27570u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = ((uint *)GEN_TOP((*(int *)(*in_ecx + 0xc) + *(int *)(in_eax + 8) * 4)));
  if ((0 < *(int *)(in_eax + 8)) && (((&REFG(undefined, 0x110f47c))[(int)(puVar2[-1] & 0x3f)] & 0x80) != 0)) {
    puVar2 = puVar2 - 1;
  }
  uVar1 = *puVar2;
  *puVar2 = ((uint)((uVar1 & 0x3fc0) == 0) * 0x40 ^ uVar1) & 0x3fc0 ^ uVar1;
  return uVar1;
}

/* ref: FUN_00c275c0 */
GEN_NOFRAME uint F_00c275c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc275c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  double dVar1;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((((*in_esi == 5) && (in_esi[4] == -1)) && (in_esi[5] == -1)) &&
     (((*in_eax == 5 && (in_eax[4] == -1)) && (in_eax[5] == -1)))) {
    dVar1 = *(double *)(in_eax + 2);
    dVar5 = *(double *)(in_esi + 2);
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 0xc: ;
      dVar5 = dVar1 + dVar5;
      break;
    case 0xd: ;
      dVar5 = dVar5 - dVar1;
      break;
    case 0xe: ;
      dVar5 = dVar1 * dVar5;
      break;
    case 0xf: ;
      if ((GEN_ISNAN(dVar1) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) !=
          ((GEN_ISNAN(dVar1) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || dVar1 == *(double *)&REFG(undefined, 0x108bec8))) {
        return 0;
      }
      dVar5 = dVar5 / dVar1;
      break;
    case 0x10: ;
      if ((GEN_ISNAN(dVar1) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) !=
          ((GEN_ISNAN(dVar1) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || dVar1 == *(double *)&REFG(undefined, 0x108bec8))) {
        return 0;
      }
      dVar6 = dVar5 / dVar1;
      dVar4 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar6));
      dVar4 = (dVar6 + dVar4) - dVar4;
      dVar5 = dVar5 - (dVar4 - gen_bits2d(-(ulonglong)
                                           !(dVar4 - dVar6 <=
                                            gen_bits2d(REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar6)))
                                          & REFG(ulonglong, 0x1088130))) * dVar1;
      break;
    case 0x11: ;
      fVar3 = ((float10)GEN_TOD(pow((float10)dVar5,(float10)dVar1)));
      dVar5 = (double)fVar3;
      break;
    case 0x12: ;
      dVar5 = gen_bits2d((ulonglong)gen_d2bits(dVar5) ^ REFG(ulonglong, 0x110e610));
      break;
    default: ;
      in_esi[2] = 0;
      in_esi[3] = 0;
      return 1;
    case 0x14: ;
      goto switchD_00c27621_caseD_14;
    }
    if (!GEN_ISNAN(dVar5)) {
      *(double *)(in_esi + 2) = dVar5;
      return 1;
    }
  }
switchD_00c27621_caseD_14: ;
  return 0;
}

/* ref: FUN_00c27740 */
GEN_NOFRAME uint F_00c27740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27740u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14);
  *((undefined4 *)GEN_TOP(((uVar1 - 4) + param_1[6] * 4))) = param_2;
  return uVar1;
}

/* ref: FUN_00c27760 */
GEN_NOFRAME uint F_00c27760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc27760u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *in_esi;
  F_00c27100(in_esi[8],in_esi,in_esi[6],0xff,in_esi[6]);
  in_esi[8] = -1;
  if (*(int *)(iVar1 + 0x2c) < in_esi[6] + 1) {
    uVar2 = F_00c11980(in_esi[4],*(undefined4 *)(iVar1 + 0xc),(int *)(iVar1 + 0x2c),4,0x7ffffffd,
                         ((char *)REFP(0x134a11c)));
    *(uint *)(iVar1 + 0xc) = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xc) + in_esi[6] * 4))) = param_2;
  if (*(int *)(iVar1 + 0x30) < in_esi[6] + 1) {
    uVar2 = F_00c11980(in_esi[4],*(undefined4 *)(iVar1 + 0x14),(int *)(iVar1 + 0x30),4,0x7ffffffd,
                         ((char *)REFP(0x134a130)));
    *(uint *)(iVar1 + 0x14) = uVar2;
  }
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x14) + in_esi[6] * 4))) = param_3;
  uVar2 = in_esi[6];
  in_esi[6] = uVar2 + 1;
  return uVar2;
}

/* ref: FUN_00c27800 */
GEN_NOFRAME uint F_00c27800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc27800u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c27760(param_1,((param_4 << 9 | param_5) << 8 | param_3) << 6 | param_2,
                       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
  return uVar1;
}

/* ref: FUN_00c27830 */
GEN_NOFRAME uint F_00c27830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc27830u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c27760(param_1,(param_4 << 8 | param_3) << 6 | param_2,
                       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
  return uVar1;
}

/* ref: FUN_00c27860 */
GEN_NOFRAME uint F_00c27860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc27860u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = ((*(int *)&gen_args[2]) - 1) / 0x32 + 1;
  uVar2 = -(uint)((*(uint *)&gen_args[3]) != 0xffffffff) & (*(uint *)&gen_args[3]);
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0xc) + 8)));
  if ((int)uVar3 < 0x200) {
    uVar3 = F_00c27760((*(int *)&gen_args[0]),((uVar2 << 9 | uVar3) << 8 | (*(uint *)&gen_args[1])) << 6 | 0x22,uVar1);
    *(uint *)((*(int *)&gen_args[0]) + 0x24) = (*(uint *)&gen_args[1]) + 1;
    return uVar3;
  }
  F_00c27760((*(int *)&gen_args[0]),(uVar2 << 0x11 | (*(uint *)&gen_args[1])) << 6 | 0x22,uVar1);
  uVar3 = F_00c27760((*(int *)&gen_args[0]),uVar3,*((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0xc) + 8))));
  *(uint *)((*(int *)&gen_args[0]) + 0x24) = (*(uint *)&gen_args[1]) + 1;
  return uVar3;
}

/* ref: FUN_00c278f0 */
GEN_NOFRAME uint F_00c278f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc278f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[6];
  if (param_1[7] < iVar2) {
    if (iVar2 == 0) {
      if ((int)(uint)*(byte *)((int)param_1 + 0x32) <= (int)param_2) {
        return (uint)*(byte *)((int)param_1 + 0x32);
      }
    }
    else {
      puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) - 4 + iVar2 * 4)));
      uVar3 = *puVar1;
      if (((((byte)uVar3 & 0x3f) == 3) && ((int)(uVar3 >> 6 & 0xff) <= (int)param_2)) &&
         ((int)param_2 <= (int)((uVar3 >> 0x17) + 1))) {
        if ((int)((param_2 - 1) + param_3) <= (int)(uVar3 >> 0x17)) {
          return uVar3;
        }
        *puVar1 = ((param_2 - 1) + param_3) * 0x800000 | uVar3 & 0x7fffff;
        return uVar3 & 0x7fffff;
      }
    }
  }
  uVar3 = F_00c27760(param_1,(((param_2 - 1) + param_3) * 0x20000 | param_2) << 6 | 3,
                       *(undefined4 *)(param_1[3] + 8));
  return uVar3;
}

/* ref: FUN_00c27990 */
GEN_NOFRAME uint F_00c27990(unsigned int gen_a0)
{
  GEN_ENTER(0xc27990u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (*(uint *)&gen_args[0]);
  uVar1 = *(undefined4 *)((*(uint *)&gen_args[0]) + 0x20);
  *(undefined4 *)((*(uint *)&gen_args[0]) + 0x20) = 0xffffffff;
  (*(uint *)&gen_args[0]) = F_00c27760((*(uint *)&gen_args[0]),0x7fff8016,*((undefined4 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0xc) + 8))));
  F_00c271e0(iVar2,&(*(uint *)&gen_args[0]),uVar1);
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00c279d0 */
GEN_NOFRAME uint F_00c279d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc279d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c27760(param_1,(param_3 + 1) * 0x800000 | param_2 << 6 | 0x1e,
                       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
  return uVar1;
}

/* ref: FUN_00c27a00 */
GEN_NOFRAME uint F_00c27a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc27a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 uVar1;
  
  F_00c27760((*(int *)&gen_args[1]),(((*(int *)&gen_args[0]) << 9 | (*(uint *)&gen_args[4])) << 8 | (*(uint *)&gen_args[3])) << 6 | (*(uint *)&gen_args[2]),
               *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0xc) + 8))));
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + 0x20);
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x20) = 0xffffffff;
  (*(uint *)&gen_args[4]) = F_00c27760((*(int *)&gen_args[1]),0x7fff8016,*((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0xc) + 8))));
  F_00c271e0((*(int *)&gen_args[1]),&(*(uint *)&gen_args[4]),uVar1);
  return (*(uint *)&gen_args[4]);
}

/* ref: FUN_00c27a60 */
GEN_NOFRAME uint F_00c27a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27a60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  uVar1 = F_00c271e0(param_1,param_1 + 0x20,param_2);
  return uVar1;
}

/* ref: FUN_00c27a80 */
GEN_NOFRAME uint F_00c27a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27a80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_2 - 6;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    *param_2 = 0xc;
    return uVar1;
  case 1: ;
    uVar1 = F_00c27760(param_1,param_2[2] << 0x17 | 4,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8)))
                        );
    param_2[2] = uVar1;
    *param_2 = 0xb;
    return uVar1;
  case 2: ;
    uVar1 = F_00c27760(param_1,param_2[2] << 0xe | 5,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))))
    ;
    param_2[2] = uVar1;
    *param_2 = 0xb;
    return uVar1;
  case 3: ;
    if (((param_2[3] & 0x100U) == 0) && ((int)(uint)*(byte *)(param_1 + 0x32) <= param_2[3])) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - 1;
    }
    if (((param_2[2] & 0x100U) == 0) && ((int)(uint)*(byte *)(param_1 + 0x32) <= param_2[2])) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - 1;
    }
    uVar1 = F_00c27800(param_1,6,0,param_2[2],param_2[3]);
    param_2[2] = uVar1;
    *param_2 = 0xb;
    return uVar1;
  case 4: ;
  case 5: ;
  case 6: ;
    goto switchD_00c27a94_caseD_a;
  case 7: ;
  case 8: ;
    uVar1 = F_00c27510(param_1,param_2);
switchD_00c27a94_caseD_a: ;
    return uVar1;
  default: ;
    return uVar1;
  }
}

/* ref: FUN_00c27bb0 */
GEN_NOFRAME uint F_00c27bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc27bb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  uint in_edi = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  F_00c27a80(in_esi,param_3);
  uVar2 = *param_3;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    uVar2 = F_00c278f0(in_esi,in_edi,1);
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return uVar2;
  case 2: ;
  case 3: ;
    uVar2 = F_00c27800(in_esi,2,in_edi,(uint)(uVar2 == 2),0);
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return uVar2;
  case 4: ;
    uVar2 = F_00c27830(in_esi,1,in_edi,param_3[2]);
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return uVar2;
  case 5: ;
    uVar2 = F_00c27400(in_esi,*(double *)(param_3 + 2));
    uVar2 = F_00c27830(in_esi,1,in_edi,uVar2);
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return uVar2;
  case 0xb: ;
    puVar1 = ((uint *)GEN_TOP((*(int *)(*in_esi + 0xc) + param_3[2] * 4)));
    *puVar1 = *puVar1 ^ (in_edi << 6 ^ *((uint *)GEN_TOP((*(int *)(*in_esi + 0xc) + param_3[2] * 4)))) & 0x3fc0
    ;
    param_3[2] = in_edi;
    *param_3 = 0xc;
    return (uint)puVar1;
  case 0xc: ;
    uVar2 = param_3[2];
    if (in_edi != uVar2) {
      uVar2 = F_00c27800(in_esi,0,in_edi,uVar2,0);
    }
    param_3[2] = in_edi;
    *param_3 = 0xc;
  }
  return uVar2;
}

/* ref: FUN_00c27cd0 */
GEN_NOFRAME uint F_00c27cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27cd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (*param_2 != 0xc) {
    iVar1 = in_eax[9] + 1;
    if ((int)(uint)*(byte *)(*in_eax + 0x4b) < iVar1) {
      if (0xf9 < iVar1) {
        F_00c11c20(in_eax[3],((char *)REFP(0x134a0e0)));
      }
      *(char *)(*in_eax + 0x4b) = (char)iVar1;
    }
    in_eax[9] = in_eax[9] + 1;
    in_eax = (int *)F_00c27bb0(in_eax,in_eax[9] - 1,param_2);
  }
  return (uint)in_eax;
}

/* ref: FUN_00c27d30 */
GEN_NOFRAME uint F_00c27d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc27d30u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int in_edx;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint local_4;
  
  piVar2 = param_2;
  F_00c27bb0(in_eax,param_3,param_2);
  if (*param_2 == 10) {
    F_00c271e0(in_eax,param_2 + 4,param_2[2]);
  }
  in_edx = param_2[5];
  if (param_2[4] == in_edx) goto LAB_00c27e29;
  uVar4 = 0xffffffff;
  local_4 = 0xffffffff;
  uVar3 = F_00c26f80(in_eax,param_2[4]);
  if (uVar3 == 0) {
    uVar3 = F_00c26f80(in_eax,in_edx);
    if (uVar3 != 0) goto LAB_00c27d8b;
  }
  else {
LAB_00c27d8b: ;
    if (*param_2 == 10) {
      param_2 = (int *)0xffffffff;
    }
    else {
      param_2 = (int *)F_00c27990(in_eax);
    }
    *(undefined4 *)(in_eax + 0x1c) = *(undefined4 *)(in_eax + 0x18);
    uVar4 = F_00c27760(in_eax,param_3 << 6 | 0x4002,*((undefined4 *)GEN_TOP((*(int *)(in_eax + 0xc) + 8))));
    *(undefined4 *)(in_eax + 0x1c) = *(undefined4 *)(in_eax + 0x18);
    local_4 = F_00c27760(in_eax,param_3 << 6 | 0x800002,
                           *((undefined4 *)GEN_TOP((*(int *)(in_eax + 0xc) + 8))));
    *(undefined4 *)(in_eax + 0x1c) = *(undefined4 *)(in_eax + 0x18);
    F_00c271e0(in_eax,in_eax + 0x20,param_2);
  }
  uVar1 = *(undefined4 *)(in_eax + 0x18);
  *(undefined4 *)(in_eax + 0x1c) = uVar1;
  F_00c27100(piVar2[5],in_eax,uVar1,param_3,uVar4);
  F_00c27100(piVar2[4],in_eax,uVar1,param_3,local_4);
LAB_00c27e29: ;
  piVar2[4] = -1;
  piVar2[5] = -1;
  piVar2[2] = param_3;
  *piVar2 = 0xc;
  return 0xffffffff;
}

/* ref: FUN_00c27e50 */
GEN_NOFRAME uint F_00c27e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27e50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  F_00c27a80(param_1,param_2);
  if (((*param_2 == 0xc) && ((param_2[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)((int)param_1 + 0x32) <= param_2[2])) {
    param_1[9] = param_1[9] - 1;
  }
  iVar2 = param_1[9] + 1;
  if ((int)(uint)*(byte *)(*param_1 + 0x4b) < iVar2) {
    if (0xf9 < iVar2) {
      F_00c11c20(param_1[3],((char *)REFP(0x134a0e0)));
    }
    *(char *)(*param_1 + 0x4b) = (char)iVar2;
  }
  param_1[9] = param_1[9] + 1;
  uVar1 = F_00c27d30(param_1,param_2,param_1[9] - 1);
  return uVar1;
}

/* ref: FUN_00c27ed0 */
GEN_NOFRAME uint F_00c27ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27ed0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00c27a80(param_1,param_2);
  if (*param_2 == 0xc) {
    uVar1 = param_2[2];
    if (param_2[4] == param_2[5]) {
      return uVar1;
    }
    if ((int)(uint)*(byte *)(param_1 + 0x32) <= (int)uVar1) {
      F_00c27d30(param_1,param_2,uVar1);
      return param_2[2];
    }
  }
  F_00c27e50(param_1,param_2);
  return param_2[2];
}

/* ref: FUN_00c27f20 */
GEN_NOFRAME uint F_00c27f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x14)) {
    uVar1 = F_00c27ed0(param_1,param_2);
    return uVar1;
  }
  uVar1 = F_00c27a80(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c27f40 */
GEN_NOFRAME uint F_00c27f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc27f40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  if (param_2[4] == param_2[5]) {
    F_00c27a80(param_1,param_2);
  }
  else {
    F_00c27ed0(param_1,param_2);
  }
  iVar1 = *param_2;
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
    if (*(int *)(param_1 + 0x28) < 0x100) {
      if (iVar1 == 1) {
        uVar2 = F_00c27450(param_1);
        param_2[2] = uVar2;
        *param_2 = 4;
        return uVar2 | 0x100;
      }
      if (iVar1 == 5) {
        uVar2 = F_00c27400(param_1,*(double *)(param_2 + 2));
        param_2[2] = uVar2;
        *param_2 = 4;
        return uVar2 | 0x100;
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      ((uint *)(gen_frame + 0x0))[0] = (uint)(iVar1 == 2);
      uVar2 = F_00c272f0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,((uint *)(gen_frame + 0x0)));
      param_2[2] = uVar2;
      *param_2 = 4;
LAB_00c28000: ;
      return uVar2 | 0x100;
    }
    break;
  case 4: ;
    uVar2 = param_2[2];
    if ((int)uVar2 < 0x100) goto LAB_00c28000;
  }
  uVar2 = F_00c27ed0(param_1,param_2);
  return uVar2;
}

/* ref: FUN_00c28040 */
GEN_NOFRAME uint F_00c28040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = *param_2 - 6;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (((*param_3 == 0xc) && ((param_3[2] & 0x100U) == 0)) &&
       ((int)(uint)*(byte *)(param_1 + 0x32) <= param_3[2])) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - 1;
    }
    uVar1 = F_00c27d30(param_1,param_3,param_2[2]);
    return uVar1;
  case 1: ;
    uVar1 = F_00c27ed0(param_1,param_3);
    uVar1 = F_00c27760(param_1,(param_2[2] << 0x11 | uVar1) << 6 | 8,
                         *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
    break;
  case 2: ;
    uVar1 = F_00c27ed0(param_1,param_3);
    uVar1 = F_00c27760(param_1,(param_2[2] << 8 | uVar1) << 6 | 7,
                         *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))));
    break;
  case 3: ;
    uVar1 = F_00c27f40(param_1,param_3);
    uVar1 = F_00c27800(param_1,9,param_2[2],param_2[3],uVar1);
  }
  if (((*param_3 == 0xc) && ((param_3[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)(param_1 + 0x32) <= param_3[2])) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - 1;
  }
  return uVar1;
}

/* ref: FUN_00c28130 */
GEN_NOFRAME uint F_00c28130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28130u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  F_00c27a80(param_1,param_2);
  if (*param_2 == 0xc) {
    if (param_2[4] == param_2[5]) goto LAB_00c28173;
    if ((int)(uint)*(byte *)((int)param_1 + 0x32) <= param_2[2]) {
      F_00c27d30(param_1,param_2,param_2[2]);
      goto LAB_00c28173;
    }
  }
  F_00c27e50(param_1,param_2);
LAB_00c28173: ;
  if (((*param_2 == 0xc) && ((param_2[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)((int)param_1 + 0x32) <= param_2[2])) {
    param_1[9] = param_1[9] - 1;
  }
  uVar2 = param_1[9];
  iVar1 = uVar2 + 2;
  if ((int)(uint)*(byte *)(*param_1 + 0x4b) < iVar1) {
    if (0xf9 < iVar1) {
      F_00c11c20(param_1[3],((char *)REFP(0x134a0e0)));
    }
    *(char *)(*param_1 + 0x4b) = (char)iVar1;
  }
  param_1[9] = param_1[9] + 2;
  uVar3 = F_00c27f40(param_1,param_3);
  uVar3 = F_00c27760(param_1,((param_2[2] << 9 | uVar3) << 8 | uVar2) << 6 | 0xb,
                       *(undefined4 *)(param_1[3] + 8));
  if (((*param_3 == 0xc) && ((param_3[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)((int)param_1 + 0x32) <= param_3[2])) {
    param_1[9] = param_1[9] - 1;
  }
  param_2[2] = uVar2;
  *param_2 = 0xc;
  return uVar3;
}

/* ref: FUN_00c28220 */
GEN_NOFRAME uint F_00c28220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28220u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if ((*in_edi == 0xb) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)(*in_esi + 0xc) + in_edi[2] * 4))), ((byte)uVar1 & 0x3f) == 0x13)) {
    in_esi[6] = in_esi[6] - 1;
    uVar1 = F_00c27a00(0,in_esi,0x1a,uVar1 >> 0x17,(uint)(param_3 == 0));
    return uVar1;
  }
  F_00c27cd0(in_esi,in_edi);
  if ((*in_edi == 0xc) &&
     (((in_edi[2] & 0x100U) == 0 && ((int)(uint)*(byte *)((int)in_esi + 0x32) <= in_edi[2])))) {
    in_esi[9] = in_esi[9] - 1;
  }
  uVar1 = F_00c27a00(in_edi[2],in_esi,0x1b,0xff,param_3);
  return uVar1;
}

/* ref: FUN_00c282a0 */
GEN_NOFRAME uint F_00c282a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc282a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  F_00c27a80(param_1,param_2);
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 2: ;
  case 4: ;
  case 5: ;
    uVar2 = 0xffffffff;
    break;
  case 3: ;
    uVar2 = F_00c27990(param_1);
    break;
  default: ;
    uVar2 = F_00c28220(param_1,param_2,0);
    break;
  case 10: ;
    F_00c27570(param_2,param_1);
    uVar2 = param_2[2];
  }
  F_00c271e0(param_1,param_2 + 5,uVar2);
  uVar1 = param_2[4];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  uVar2 = F_00c271e0(param_1,param_1 + 0x20,uVar1);
  param_2[4] = 0xffffffff;
  return uVar2;
}

/* ref: FUN_00c283d0 */
GEN_NOFRAME uint F_00c283d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc283d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  int in_eax;
  uint uVar1;
  
  F_00c27a80(in_edi,in_esi);
  switch((unsigned int)(uintptr_t)(*in_esi)) {
  case 1: ;
  case 3: ;
    *in_esi = 2;
    break;
  case 2: ;
  case 4: ;
  case 5: ;
    *in_esi = 3;
    break;
  case 10: ;
    F_00c27570(in_esi,in_edi);
    break;
  case 0xb: ;
  case 0xc: ;
    F_00c27cd0(in_edi,in_esi);
    if (((*in_esi == 0xc) && ((in_esi[2] & 0x100U) == 0)) &&
       ((int)(uint)*(byte *)(in_edi + 0x32) <= in_esi[2])) {
      *(int *)(in_edi + 0x24) = *(int *)(in_edi + 0x24) - 1;
    }
    uVar1 = F_00c27800(in_edi,0x13,0,in_esi[2],0);
    in_esi[2] = uVar1;
    *in_esi = 0xb;
  }
  in_eax = in_esi[4];
  in_esi[4] = in_esi[5];
  in_esi[5] = in_eax;
  F_00c27070(in_eax,in_edi);
  uVar1 = F_00c27070(in_esi[4],in_edi);
  return uVar1;
}

/* ref: FUN_00c28490 */
GEN_NOFRAME uint F_00c28490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c27f40(param_1,param_3);
  param_2[3] = uVar1;
  *param_2 = 9;
  return uVar1;
}

/* ref: FUN_00c284b0 */
GEN_NOFRAME uint F_00c284b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc284b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_edi = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c275c0(param_4,param_3,param_2);
  if (uVar1 == 0) {
    if ((param_2 == 0x12) || (param_2 == 0x14)) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00c27f40(in_edi,param_4);
    }
    uVar2 = F_00c27f40(in_edi,param_3);
    if ((int)uVar1 < (int)uVar2) {
      if (((*param_3 == 0xc) && ((param_3[2] & 0x100U) == 0)) &&
         ((int)(uint)*(byte *)(in_edi + 0x32) <= param_3[2])) {
        *(int *)(in_edi + 0x24) = *(int *)(in_edi + 0x24) - 1;
      }
      if (((*param_4 == 0xc) && ((param_4[2] & 0x100U) == 0)) &&
         ((int)(uint)*(byte *)(in_edi + 0x32) <= param_4[2])) {
        *(int *)(in_edi + 0x24) = *(int *)(in_edi + 0x24) - 1;
      }
    }
    else {
      if (((*param_4 == 0xc) && ((param_4[2] & 0x100U) == 0)) &&
         ((int)(uint)*(byte *)(in_edi + 0x32) <= param_4[2])) {
        *(int *)(in_edi + 0x24) = *(int *)(in_edi + 0x24) - 1;
      }
      if (((*param_3 == 0xc) && ((param_3[2] & 0x100U) == 0)) &&
         ((int)(uint)*(byte *)(in_edi + 0x32) <= param_3[2])) {
        *(int *)(in_edi + 0x24) = *(int *)(in_edi + 0x24) - 1;
      }
    }
    uVar1 = F_00c27760(in_edi,(uVar2 << 9 | uVar1) << 0xe | param_2,
                         *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0xc) + 8))));
    param_3[2] = uVar1;
    *param_3 = 0xb;
  }
  return uVar1;
}

/* ref: FUN_00c285a0 */
GEN_NOFRAME uint F_00c285a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc285a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00c27f40(in_esi,param_5);
  uVar2 = F_00c27f40(in_esi,in_eax);
  if (((*in_eax == 0xc) && ((in_eax[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)(in_esi + 0x32) <= in_eax[2])) {
    *(int *)(in_esi + 0x24) = *(int *)(in_esi + 0x24) - 1;
  }
  if (((*param_5 == 0xc) && ((param_5[2] & 0x100U) == 0)) &&
     ((int)(uint)*(byte *)(in_esi + 0x32) <= param_5[2])) {
    *(int *)(in_esi + 0x24) = *(int *)(in_esi + 0x24) - 1;
  }
  uVar3 = uVar2;
  if ((param_4 == 0) && ((*(int *)&gen_a2) != 0x17)) {
    param_4 = 1;
    uVar3 = uVar1;
    uVar1 = uVar2;
  }
  uVar1 = F_00c27a00(uVar1,in_esi,(*(int *)&gen_a2),param_4,uVar3);
  param_5[2] = uVar1;
  *param_5 = 10;
  return uVar1;
}

/* ref: FUN_00c28640 */
GEN_NOFRAME uint F_00c28640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  ((undefined4 *)(gen_frame + 0x8))[0] = 5;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  if (param_2 == 0) {
    if (((*param_3 != 5) || (param_3[4] != -1)) || (param_3[5] != -1)) {
      F_00c27ed0(param_1,param_3);
    }
    uVar1 = F_00c284b0(param_1,0x12,param_3,((undefined4 *)(gen_frame + 0x8)));
  }
  else {
    if (param_2 == 1) {
      uVar1 = F_00c283d0(param_3,param_1);
      return uVar1;
    }
    uVar1 = param_2 - 2;
    if (uVar1 == 0) {
      F_00c27ed0(param_1,param_3);
      uVar1 = F_00c284b0(param_1,0x14,param_3,((undefined4 *)(gen_frame + 0x8)));
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00c286f0 */
GEN_NOFRAME uint F_00c286f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc286f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
    if (((*param_3 != 5) || (param_3[4] != -1)) || (piVar3 = param_3, param_3[5] != -1)) {
      uVar2 = F_00c27f40(param_1,param_3);
      return uVar2;
    }
    break;
  case 6: ;
    uVar2 = F_00c27e50(param_1,param_3);
    return uVar2;
  default: ;
    piVar3 = (int *)F_00c27f40(param_1,param_3);
    break;
  case 0xd: ;
    uVar2 = F_00c282a0(param_1,param_3);
    return uVar2;
  case 0xe: ;
    F_00c27a80(param_1,param_3);
    switch((unsigned int)(uintptr_t)(*param_3)) {
    case 1: ;
    case 3: ;
      uVar2 = 0xffffffff;
      break;
    case 2: ;
      uVar2 = F_00c27990(param_1);
      break;
    default: ;
      uVar2 = F_00c28220(param_1,param_3,1);
      break;
    case 10: ;
      uVar2 = param_3[2];
    }
    F_00c271e0(param_1,param_3 + 4,uVar2);
    iVar1 = param_3[5];
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    uVar2 = F_00c271e0(param_1,param_1 + 0x20,iVar1);
    param_3[5] = -1;
    return uVar2;
  }
  return (uint)piVar3;
}

/* ref: FUN_00c287a0 */
GEN_NOFRAME uint F_00c287a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc287a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar2 = F_00c284b0(param_1,0xc,param_3,param_4);
    return uVar2;
  case 1: ;
    uVar2 = F_00c284b0(param_1,0xd,param_3,param_4);
    return uVar2;
  case 2: ;
    uVar2 = F_00c284b0(param_1,0xe,param_3,param_4);
    return uVar2;
  case 3: ;
    uVar2 = F_00c284b0(param_1,0xf,param_3,param_4);
    return uVar2;
  case 4: ;
    uVar2 = F_00c284b0(param_1,0x10,param_3,param_4);
    return uVar2;
  case 5: ;
    uVar2 = F_00c284b0(param_1,0x11,param_3,param_4);
    return uVar2;
  case 6: ;
    F_00c27f20(param_1,param_4);
    if ((*param_4 == 0xb) &&
       (((byte)*((undefined4 *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_4[2] * 4))) & 0x3f) == 0x15)) {
      F_00c272d0(param_3,param_1);
      puVar1 = ((uint *)GEN_TOP((*(int *)(*param_1 + 0xc) + param_4[2] * 4)));
      *puVar1 = *(int *)(param_3 + 1) << 0x17 | *puVar1 & 0x7fffff;
      *(undefined4 *)param_3 = 0xb;
      *(int *)(param_3 + 1) = param_4[2];
      return (uint)puVar1;
    }
    F_00c27e50(param_1,param_4);
    uVar2 = F_00c284b0(param_1,0x15,param_3,param_4);
    return uVar2;
  case 7: ;
    uVar2 = F_00c285a0(param_4,param_1,0x17,0,param_3);
    return uVar2;
  case 8: ;
    uVar2 = F_00c285a0(param_4,param_1,0x17,1,param_3);
    return uVar2;
  case 9: ;
    uVar2 = F_00c285a0(param_4,param_1,0x18,1,param_3);
    return uVar2;
  case 10: ;
    uVar2 = F_00c285a0(param_4,param_1,0x19,1,param_3);
    return uVar2;
  case 0xb: ;
    uVar2 = F_00c285a0(param_4,param_1,0x18,0,param_3);
    return uVar2;
  case 0xc: ;
    uVar2 = F_00c285a0(param_4,param_1,0x19,0,param_3);
    return uVar2;
  case 0xd: ;
    F_00c27a80(param_1,param_4);
    uVar4 = *(undefined4 *)((int)param_3 + 0x14);
    piVar3 = param_4 + 5;
    break;
  case 0xe: ;
    F_00c27a80(param_1,param_4);
    uVar4 = *(undefined4 *)(param_3 + 2);
    piVar3 = param_4 + 4;
    break;
  default: ;
    return param_2;
  }
  uVar2 = F_00c271e0(param_1,piVar3,uVar4);
  *param_3 = *(undefined8 *)param_4;
  param_3[1] = *(undefined8 *)(param_4 + 2);
  param_3[2] = *(undefined8 *)(param_4 + 4);
  return uVar2;
}

/* ref: FUN_00c28a30 */
GEN_NOFRAME uint F_00c28a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc28a30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 == *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
    uVar1 = F_00c271e0(param_1,param_1 + 0x20,param_2);
    return uVar1;
  }
  uVar1 = F_00c27100(param_2,param_1,param_3,0xff,param_3);
  return uVar1;
}

/* ref: FUN_00c28a70 */
GEN_FRAME uint GEN_THISCALL F_00c28a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc28a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110eea4));
  in_ecx[1] = 0;
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c28a90 */
GEN_FRAME byte GEN_THISCALL F_00c28a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc28a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)((int)this + 4) = param_1;
  return 1;
}

/* ref: Client::Graphics::Physics::ConstraintBase::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c28ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc28ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

/* ref: FUN_00c28af0 */
GEN_FRAME float10 F_00c28af0(float gen_a0)
{
  GEN_ENTER(0xc28af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Object::CharacterPapController::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00c28b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc28b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint3 uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar3 = (uint3)((uint)in_EAX >> 8);
  if (this[0x51] != (undefined1)0x0) {
    return CONCAT31(uVar3,1);
  }
  if (this[0x50] == (undefined1)0x0) {
    return (uint)uVar3 << 8;
  }
  this_00 = (undefined *)F_00bbafd0(*(undefined * PTR32 *)(this + 0x4c) GEN_EDX_FWD);
  if (this_00 == (undefined *)0x0) {
    this[0x51] = (undefined1)0x1;
    return 1;
  }
  bVar1 = F_006a7f50(this_00 GEN_EDX_ARG,this + 0x18);
  if (bVar1 == 0) {
    *(undefined2 *)(this + 0x50) = 0x100;
    return CONCAT31(extraout_var,1);
  }
  uVar2 = F_006a7e90(this_00 GEN_EDX_ARG,this + 0x18);
  return uVar2;
}

/* ref: FUN_00c28b70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c28b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc28b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  if ((*(char *)((int)this + 0x50) != '\0') &&
     (this_00 = (undefined *)F_00bbafd0(*(undefined * PTR32 *)((int)this + 0x4c) GEN_EDX_FWD), this_00 != (undefined *)0x0)) {
    bVar1 = F_006a7f50(this_00 GEN_EDX_ARG,(int)this + 0x18);
    if (bVar1 != 0) {
      F_006aba70(this_00 GEN_EDX_ARG,(int)this + 0x18);
    }
    *(undefined1 *)((int)this + 0x50) = 0;
  }
  return;
}

/* ref: FUN_00c28bb0 */
GEN_NOFRAME uint GEN_THISCALL F_00c28bb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc28bb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x50) == '\0') {
    return 0;
  }
  return in_ecx + 0x18;
}

/* ref: FUN_00c28bc0 */
GEN_FRAME byte GEN_THISCALL F_00c28bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc28bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if ((*(int *)((int)this + 0xc) == param_1) && (*(int *)((int)this + 0x54) == param_3)) {
    if (*(int *)((int)this + 0x54) != -1) {
      return 1;
    }
    pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
    pbVar4 = param_2;
    if (pbVar2 != (byte *)0x0) {
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00c28c02: ;
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00c28c07;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00c28c02;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00c28c07: ;
      if (iVar3 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c28c20 */
GEN_FRAME byte GEN_THISCALL F_00c28c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc28c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x14) == param_2;
}

/* ref: FUN_00c28c30 */
GEN_NOFRAME uint GEN_THISCALL F_00c28c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc28c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f534));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  uVar1 = *(uint *)((int)this + 0x44);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)((int)this + 0x30),uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  return uVar1;
}

/* ref: FUN_00c28c80 */
GEN_FRAME uint GEN_THISCALL F_00c28c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc28c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f534));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x656d70;
  *(undefined4 *)((int)this + 0x28) = 0x656d70;
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00c28ce0 */
GEN_FRAME uint GEN_THISCALL F_00c28ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc28ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined * this_00;
  byte * pbVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined1 * this_01;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  this_00 = (undefined *)F_00bbafd0(*(undefined * PTR32 *)((int)this + 0x4c) GEN_EDX_FWD);
  *(uint * PTR32 *)((int)this + 0x14) = param_1;
  uVar3 = *param_1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    pbVar1 = (byte *)(param_1[2] + (int)param_1);
    if ((*(int *)pbVar1 == 0x2f747563) ||
       ((((iVar4 = *pbVar1 - 99, iVar4 == 0 && (iVar4 = pbVar1[1] - 0x75, iVar4 == 0)) &&
         (iVar4 = pbVar1[2] - 0x74, iVar4 == 0)) && (iVar4 = pbVar1[3] - 0x2f, iVar4 == 0)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = iVar4 >> 0x1f | 1;
    }
    F_004e6b60(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,pbVar1);
    puVar2 = (undefined4 *)F_004ff310(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(uVar3 != 0) + 3,0);
    uVar3 = F_006acff0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x124)),2,((undefined1 *)(gen_frame + 0x34)),0x656d70,0x656d70,*puVar2);
    F_00c292c0((undefined *)((int)this + 0x18) GEN_EDX_ARG,uVar3);
    if (0xf < (*(uint *)(gen_frame + 0x150))) {
      F_00429760((*(uint *)(gen_frame + 0x13c)),(*(uint *)(gen_frame + 0x150)) + 1,0x32);
    }
    uVar3 = (*(uint *)(gen_frame + 0x13c));
    (*(uint *)(gen_frame + 0x150)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x14c)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x13c)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x13c)) = uVar3 & 0xffffff00;
    this_01 = ((undefined1 *)(gen_frame + 0x34));
    break;
  case 1: ;
    F_004e6b60(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,param_1[2] + (int)param_1);
    puVar2 = (undefined4 *)F_004ff310(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,4,0);
    uVar3 = F_006acff0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xf0)),0,((undefined1 *)(gen_frame + 0x6c)),0x656d70,0x656d70,*puVar2);
    F_00c292c0((undefined *)((int)this + 0x18) GEN_EDX_ARG,uVar3);
    if (0xf < (*(uint *)(gen_frame + 0x11c))) {
      F_00429760((*(uint *)(gen_frame + 0x108)),(*(uint *)(gen_frame + 0x11c)) + 1,0x32);
    }
    uVar3 = (*(uint *)(gen_frame + 0x108));
    (*(uint *)(gen_frame + 0x11c)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x118)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x108)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x108)) = uVar3 & 0xffffff00;
    this_01 = ((undefined1 *)(gen_frame + 0x6c));
    break;
  case 2: ;
    F_004e6b60(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,param_1[2] + (int)param_1);
    puVar2 = (undefined4 *)F_004ff310(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,3,0);
    uVar3 = F_006acff0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x88)),5,((undefined1 *)(gen_frame + 0x50)),0x656d70,0x656d70,*puVar2);
    F_00c292c0((undefined *)((int)this + 0x18) GEN_EDX_ARG,uVar3);
    if (0xf < (*(uint *)(gen_frame + 0xb4))) {
      F_00429760((*(uint *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xb4)) + 1,0x32);
    }
    uVar3 = (*(uint *)(gen_frame + 0xa0));
    (*(uint *)(gen_frame + 0xb4)) = 0xf;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xa0)) + 0)) = 0;
    (*(uint *)(gen_frame + 0xa0)) = uVar3 & 0xffffff00;
    this_01 = ((undefined1 *)(gen_frame + 0x50));
    break;
  case 3: ;
    F_004e6b60(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_1[2] + (int)param_1);
    puVar2 = (undefined4 *)F_004ff310(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,4,0);
    uVar3 = F_006acff0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xbc)),4,((undefined1 *)(gen_frame + 0x18)),0x656d70,0x656d70,*puVar2);
    F_00c292c0((undefined *)((int)this + 0x18) GEN_EDX_ARG,uVar3);
    if (0xf < (*(uint *)(gen_frame + 0xe8))) {
      F_00429760((*(uint *)(gen_frame + 0xd4)),(*(uint *)(gen_frame + 0xe8)) + 1,0x32);
    }
    uVar3 = (*(uint *)(gen_frame + 0xd4));
    (*(uint *)(gen_frame + 0xe8)) = 0xf;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd4)) + 0)) = 0;
    (*(uint *)(gen_frame + 0xd4)) = uVar3 & 0xffffff00;
    this_01 = ((undefined1 *)(gen_frame + 0x18));
    break;
  default: ;
    goto switchD_00c28d13_default;
  }
  uVar3 = F_004e5440(this_01 GEN_EDX_ARG);
switchD_00c28d13_default: ;
  *(undefined1 *)((int)this + 0x50) = 1;
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c28fa0 */
GEN_FRAME byte GEN_THISCALL F_00c28fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc28fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  char * pcVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *(int *)((int)this + 0x54) = param_3;
  *(int *)((int)this + 0xc) = param_1;
  this_00 = (undefined *)F_00bbafd0(*(undefined * PTR32 *)((int)this + 0x4c) GEN_EDX_FWD);
  uVar4 = F_00bbaf90(*(undefined * PTR32 *)((int)this + 0x4c) GEN_EDX_ARG);
  iVar2 = *(int *)((int)this + 0x10);
  (*(uint *)(gen_frame + 0x4)) = uVar4;
  if (iVar2 != 0) {
    F_00406b30(iVar2);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (param_3 == -1) {
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar4 = F_00406bb0(pcVar5 + (1 - (int)(param_2 + 1)),0,0);
    *(uint *)((int)this + 0x10) = uVar4;
    F_00c49908(uVar4,pcVar5 + (1 - (int)(param_2 + 1)),param_2);
    uVar4 = (*(uint *)(gen_frame + 0x4));
  }
  if ((uVar4 == 0) || (param_1 == 3)) {
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined1 *)((char *)&((int *)(gen_frame + 0x3c))[0] + 0)) = 0;
    ((int *)(gen_frame + 0x3c))[0] = (uint)GEN_PIECE(&((int *)(gen_frame + 0x3c))[0], 1, 3) << 8;
    (*(uint *)(gen_frame + 0x50)) = 0xf;
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_004e5c20(((int *)(gen_frame + 0x3c)) GEN_EDX_ARG,param_2,(int)pcVar5 - (int)(param_2 + 1));
    puVar6 = (undefined4 *)F_004ff310(&(*(uint *)(gen_frame + 0x4)) GEN_EDX_ARG,4,0);
    puVar6 = (undefined4 *)
             F_006acff0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0xc),((int *)(gen_frame + 0x3c)),0x656d70,
                          0x656d70,*puVar6);
    *(undefined4 *)((int)this + 0x18) = *puVar6;
    *(undefined4 *)((int)this + 0x1c) = puVar6[1];
    *(undefined4 *)((int)this + 0x20) = puVar6[2];
    *(undefined4 *)((int)this + 0x24) = puVar6[3];
    *(undefined4 *)((int)this + 0x28) = puVar6[4];
    *(undefined4 *)((int)this + 0x2c) = puVar6[5];
    F_004e54d0((undefined *)((int)this + 0x30) GEN_EDX_ARG,puVar6 + 6,0,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x34))) {
      F_00429760((*(uint *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x34)) + 1,0x32);
    }
    (*(uint *)(gen_frame + 0x34)) = 0xf;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined1 *)((char *)&((int *)(gen_frame + 0x3c))[0] + 0)) = 0;
    ((int *)(gen_frame + 0x3c))[0] = (uint)GEN_PIECE(&((int *)(gen_frame + 0x3c))[0], 1, 3) << 8;
    (*(uint *)(gen_frame + 0x50)) = 0xf;
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_004e5c20(((int *)(gen_frame + 0x3c)) GEN_EDX_ARG,param_2,(int)pcVar5 - (int)(param_2 + 1));
    puVar6 = (undefined4 *)F_004ff310(&(*(uint *)(gen_frame + 0x4)) GEN_EDX_ARG,4,0);
    uVar8 = *puVar6;
    uVar7 = F_00694320((undefined *)(uVar4 + 0x1e60) GEN_EDX_ARG);
    uVar4 = F_00694320((undefined *)(uVar4 + 0x16c0) GEN_EDX_ARG);
    puVar6 = (undefined4 *)
             F_006acff0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)((int)this + 0xc),((int *)(gen_frame + 0x3c)),uVar4,uVar7,
                          uVar8);
    *(undefined4 *)((int)this + 0x18) = *puVar6;
    *(undefined4 *)((int)this + 0x1c) = puVar6[1];
    *(undefined4 *)((int)this + 0x20) = puVar6[2];
    *(undefined4 *)((int)this + 0x24) = puVar6[3];
    *(undefined4 *)((int)this + 0x28) = puVar6[4];
    *(undefined4 *)((int)this + 0x2c) = puVar6[5];
    F_004e54d0((undefined *)((int)this + 0x30) GEN_EDX_ARG,puVar6 + 6,0,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x34))) {
      F_00429760((*(uint *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x34)) + 1,0x32);
    }
    (*(uint *)(gen_frame + 0x34)) = 0xf;
  }
  uVar4 = (*(uint *)(gen_frame + 0x20));
  (*(uint *)(gen_frame + 0x34)) = 0xf;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x20)) = uVar4 & 0xffffff00;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  if (0xf < (*(uint *)(gen_frame + 0x50))) {
    F_00429760(((int *)(gen_frame + 0x3c))[0],(*(uint *)(gen_frame + 0x50)) + 1,0x32);
  }
  bVar3 = F_006a7f50(this_00 GEN_EDX_ARG,(int)this + 0x18);
  *(undefined1 *)((int)this + 0x50) = 1;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return bVar3;
}

/* ref: Client::System::Scheduler::Object::CharacterPapController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c29210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc29210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f534));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (0xf < *(uint *)(this + 0x44)) {
    F_00429760(*(undefined4 *)(this + 0x30),*(uint *)(this + 0x44) + 1,0x32);
  }
  *(undefined4 *)(this + 0x44) = 0xf;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x30] = (undefined1)0x0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c29280 */
GEN_FRAME uint GEN_THISCALL F_00c29280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc29280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  F_004e54d0((undefined *)((int)this + 0x14) GEN_EDX_FWD,param_1 + 5,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00c292c0 */
GEN_FRAME uint GEN_THISCALL F_00c292c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc292c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  F_004e54d0((undefined *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 6,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00c29310 */
GEN_FRAME uint F_00c29310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc29310u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  gen_size32 in_edx = (gen_size32)gen_a0;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * param_3 = (wchar_t *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c54066(param_2,in_edx,param_3,(undefined *)0x0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c29330 */
GEN_NOFRAME uint GEN_THISCALL F_00c29330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc29330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c2a9a0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x110f5d0));
  F_00bc8480((int)this + 0x18 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x664) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x24c));
  return (uint)this;
}

/* ref: Client::SupportDesk::HttpRequestImpl::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_00c29380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc29380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 8) != 0) {
    return 1;
  }
  if (*(int *)(in_ecx + 0x23c) == 0) {
    return 0;
  }
  return *(int *)(in_ecx + 0x23c) < 6;
}

/* ref: Client::SupportDesk::HttpRequestImpl::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00c293b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc293b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x23c))) {
  case 8: ;
    return 1;
  case 9: ;
  case 0xb: ;
  case 0xc: ;
    return 3;
  case 10: ;
    return 2;
  default: ;
    return -(uint)(*(char *)(in_ecx + 0x240) != '\0') & 4;
  }
}

/* ref: FUN_00c29400 */
GEN_FRAME unsigned int GEN_STDCALL F_00c29400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc29400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return (uint)(gen_imp_WinHttpConnect(param_1,param_2,param_3,0));
}

/* ref: FUN_00c29460 */
GEN_FRAME uint GEN_THISCALL F_00c29460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc29460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined * _Dst;
  uint _Size;
  
  if (param_1 < 0x400) {
    _Dst = (undefined *)((int)this + 0x264);
    _Size = 0x3ff;
  }
  else {
    piVar1 = (int *)F_00406520();
    _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,param_1,0)));
    _Size = param_1;
  }
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,_Size);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c294b0 */
GEN_FRAME unsigned int GEN_STDCALL F_00c294b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc294b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_2 = (uint)gen_a1;
  if ((0x3ff < param_2) && ((*(int *)&gen_a0) != 0)) {
    F_00406810((*(int *)&gen_a0));
  }
  return;
}

/* ref: FUN_00c294d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c294d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc294d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x110f5d0));
  F_00bc86b0((undefined *)((int)this + 0x18) GEN_EDX_FWD);
  if (*(int *)((int)this + 0xc) != 0) {
    if (0x3ff < *(uint *)((int)this + 0x14)) {
      F_00406810(*(int *)((int)this + 0xc));
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x24c));
  uVar1 = F_00bc8670((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  F_00c2a9b0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c29530 */
GEN_FRAME unsigned int GEN_THISCALL F_00c29530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc29530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((char)param_1 != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x24c));
  }
  if (*(int *)((int)this + 8) != 0) {
    gen_imp_WinHttpCloseHandle(*(int *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (*(int *)((int)this + 4) != 0) {
    gen_imp_WinHttpCloseHandle(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  if ((char)param_1 != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x24c));
  }
  return 0;
}

/* ref: FUN_00c29590 */
GEN_FRAME uint GEN_THISCALL F_00c29590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc29590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  if (param_2 < param_3) {
    return (*(uint *)&gen_a1);
  }
  if (param_2 < 0x400) {
    uVar1 = (int)this + 0x264;
  }
  else {
    uVar1 = F_00c29460(this GEN_EDX_FWD,param_2);
    F_00c46aa0(uVar1,(*(uint *)&gen_a1),param_3);
    if ((0x3ff < param_3) && ((*(uint *)&gen_a1) != 0)) {
      F_00406810((*(uint *)&gen_a1));
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::SupportDesk::HttpRequestImpl::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00c29600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc29600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  BOOL BVar1;
  
  *(float *)(this + 0x664) =
       ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)(this + 0x664))));
  BVar1 = gen_imp_TryEnterCriticalSection((LPCRITICAL_SECTION)(this + 0x24c));
  if (BVar1 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x23c) == 4) {
    if (((*(int *)(this + 0x244) == 200) && (this[0x240] == (undefined1)0x0)) &&
       (*(int *)(this + 0xc) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 0xc) + *(int *)(this + 0x14)))) = 0;
      F_00bc88c0(this + 0x18 GEN_EDX_ARG,*(undefined4 *)(this + 0xc));
    }
  }
  else if (4 < *(int *)(this + 0x23c) - 8U) goto LAB_00c2969e;
  if (*(int *)(this + 8) != 0) {
    gen_imp_WinHttpCloseHandle(*(int *)(this + 8));
  }
  *(undefined4 *)(this + 8) = 0;
  if (*(int *)(this + 4) != 0) {
    gen_imp_WinHttpCloseHandle(*(int *)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
LAB_00c2969e: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x24c));
  return 5 < *(int *)(this + 0x23c);
}

/* ref: Client::SupportDesk::HttpRequestImpl::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_00c296c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc296c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)(this + 0x23c) != 0) && (*(int *)(this + 0x23c) < 6)) {
    if (*(int *)(this + 0x23c) != 5) {
      *(undefined4 *)(this + 0x23c) = 5;
      this[0x240] = (undefined1)0x1;
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x24c));
      if (*(int *)(this + 8) != 0) {
        gen_imp_WinHttpCloseHandle(*(int *)(this + 8));
      }
      *(undefined4 *)(this + 8) = 0;
      if (*(int *)(this + 4) != 0) {
        gen_imp_WinHttpCloseHandle(*(int *)(this + 4));
      }
      *(undefined4 *)(this + 4) = 0;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x24c));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00c29740 */
GEN_FRAME unsigned int GEN_STDCALL F_00c29740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc29740u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this;
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(LPCRITICAL_SECTION *)&gen_args[2]);
  this = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    return;
  }
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x240))) != '\0') && ((*(LPCRITICAL_SECTION *)&gen_args[2]) != (LPCRITICAL_SECTION)0x800)) {
    return;
  }
  (*(LPCRITICAL_SECTION *)&gen_args[2]) = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x24c);
  gen_imp_EnterCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
  if (uVar1 < 0x80001) {
    if (uVar1 == 0x80000) {
      if (*(int *)((int)this + 0xc) != 0) {
        if ((*(int *)&gen_args[4]) == 0) {
          *(undefined4 *)((int)this + 0x23c) = 4;
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
          return;
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (*(int *)&gen_args[4]);
        iVar2 = *(int *)((int)this + 0x10);
        if (iVar2 + 0x3c0U <= *(uint *)((int)this + 0x14)) {
LAB_00c29935: ;
          gen_imp_WinHttpReadData(*(undefined4 *)((int)this + 8),*(int *)((int)this + 0xc) + iVar2,0x3c0,0);
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
          return;
        }
        uVar1 = F_00c29590(this GEN_EDX_ARG,*(int *)((int)this + 0xc),iVar2 + 0x3c1,
                             *(uint *)((int)this + 0x14));
        if (uVar1 != 0) {
          *(uint *)((int)this + 0xc) = uVar1;
          iVar2 = *(int *)((int)this + 0x10);
          *(int *)((int)this + 0x14) = iVar2 + 0x3c0;
          goto LAB_00c29935;
        }
      }
    }
    else {
      if (uVar1 == 0x800) {
        *(undefined4 *)((int)this + 0x23c) = 7;
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
        return;
      }
      if (uVar1 == 0x10000) {
LAB_00c299b8: ;
        *(undefined4 *)((int)this + 0x23c) = 8;
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
        return;
      }
      if (uVar1 != 0x20000) goto LAB_00c299df;
      (*(undefined4 *)(gen_frame + 0x4)) = 4;
      *(undefined4 *)((int)this + 0x23c) = 2;
      gen_imp_WinHttpQueryHeaders((*(undefined4 *)&gen_args[0]),0x20000013,0,&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x4)),0);
      if ((*(int *)(gen_frame + 0x8)) != 200) {
        *(undefined4 *)((int)this + 0x23c) = 8;
        *(int *)((int)this + 0x244) = (*(int *)(gen_frame + 0x8));
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
        return;
      }
      *(undefined4 *)((int)this + 0x23c) = 2;
      F_00bc86b0((undefined *)((int)this + 0x18) GEN_EDX_ARG);
      if (*(int *)((int)this + 0xc) != 0) {
        F_00c294b0(*(int *)((int)this + 0xc),*(undefined4 *)((int)this + 0x14));
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
      }
      (*(undefined4 *)(gen_frame + 0x0)) = 4;
      uVar1 = gen_imp_WinHttpQueryHeaders((*(undefined4 *)&gen_args[0]),0x20000005,0,&(*(undefined * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)),0);
      if (((uVar1 == 0) || ((*(undefined * PTR32 *)&gen_args[1]) < (undefined *)0x3c0)) || ((undefined *)0xfffff < (*(undefined * PTR32 *)&gen_args[1]))) {
        (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x3c0;
      }
      uVar1 = F_00c29460(this GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[1]) + 1);
      *(uint *)((int)this + 0xc) = uVar1;
      *(undefined * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 *)&gen_args[1]);
      if (uVar1 != 0) {
        *(undefined4 *)((int)this + 0x23c) = 3;
        *(undefined4 *)((int)this + 0x10) = 0;
        gen_imp_WinHttpReadData(*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0xc),(*(undefined * PTR32 *)&gen_args[1]),0);
        *(int *)((int)this + 0x244) = (*(int *)(gen_frame + 0x8));
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
        return;
      }
    }
  }
  else {
    if (uVar1 != 0x200000) {
      if (uVar1 == 0x400000) {
        gen_imp_WinHttpReceiveResponse((*(undefined4 *)&gen_args[0]),0);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
        return;
      }
      goto LAB_00c299df;
    }
    if (*(*(int * PTR32 *)&gen_args[3]) != 1) {
      if (*(*(int * PTR32 *)&gen_args[3]) == 5) goto LAB_00c299b8;
      goto LAB_00c299df;
    }
  }
  *(undefined4 *)((int)this + 0x23c) = 10;
LAB_00c299df: ;
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
  return;
}

/* ref: FUN_00c29a00 */
GEN_FRAME uint GEN_THISCALL F_00c29a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc29a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  uint uVar2;
  
  cVar1 = (char)(*(undefined4 *)&gen_args[4]);
  uVar2 = gen_imp_WinHttpOpenRequest((*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[2]),0,0,0,-(uint)((char)(*(undefined4 *)&gen_args[4]) != '\0') & 0x800000
                            );
  if (uVar2 == 0) {
    return 0;
  }
  if (cVar1 != '\0') {
    (*(undefined4 *)&gen_args[4]) = 0x3100;
    gen_imp_WinHttpSetOption(uVar2,0x1f,&(*(undefined4 *)&gen_args[4]),4);
  }
  gen_imp_WinHttpSetOption(uVar2,0x2d,(*(undefined * PTR32 *)&gen_args[0]),4);
  gen_imp_WinHttpSetTimeouts(uVar2,0,10000,10000,10000);
  gen_imp_WinHttpSetStatusCallback(uVar2,((code *)REFP(0xc29740)),0xffffffff,0);
  return uVar2;
}

/* ref: FUN_00c29aa0 */
GEN_FRAME byte GEN_THISCALL F_00c29aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc29aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x3e0];
  byte bVar1;
  short sVar2;
  code * pcVar3;
  byte * PTR32 * PTR32 * pppbVar4;
  undefined4 * PTR32 * PTR32 * pppuVar5;
  undefined4 * PTR32 * PTR32 * pppuVar6;
  undefined4 * PTR32 * PTR32 * pppuVar7;
  undefined4 * puVar8;
  uint uVar9;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar10;
  byte * PTR32 * PTR32 * PTR32 * ppppbVar11;
  int iVar12;
  short * psVar13;
  byte * pbVar14;
  bool bVar15;
  
  pppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0];
  pppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c))[0];
  pppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x130))[0];
  pppbVar4 = ((byte * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x114))[0];
  (*(uint *)(gen_frame + 0x3d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3dc);
  (*(uint *)(gen_frame + 0x128)) = 0xf;
  (*(uint *)(gen_frame + 0x144)) = 0xf;
  (*(uint *)(gen_frame + 0x160)) = 0xf;
  (*(uint *)(gen_frame + 0x17c)) = 0xf;
  pcVar3 = *(gen_code32 *)(*(int *)this + 0xc);
  (*(undefined4 *)(gen_frame + 0x124)) = 0;
  (*(undefined1 *)((char *)&((byte * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x114))[0] + 0)) = 0;
  ((byte * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x114))[0] = (byte * PTR32 * PTR32 *)((uint)pppbVar4 & 0xffffff00);
  (*(undefined4 *)(gen_frame + 0x140)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x130))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x130))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar5 & 0xffffff00);
  (*(undefined4 *)(gen_frame + 0x15c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar6 & 0xffffff00);
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar7 & 0xffffff00);
  uVar9 = (*pcVar3)(this);
  if ((char)uVar9 == '\0') {
    F_00c2a7e0(((byte * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x114)) GEN_EDX_FWD,param_2);
    ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x130))[0];
    if ((*(uint *)(gen_frame + 0x144)) < 0x10) {
      ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x130));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,ppppuVar10,REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,param_3,REFG(undefined4, 0x108cc50));
    ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0];
    if ((*(uint *)(gen_frame + 0x17c)) < 0x10) {
      ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,ppppuVar10,REFG(undefined4, 0x108cc50));
    (*(uint *)(gen_frame + 0x198)) = 7;
    (*(uint *)(gen_frame + 0x1b4)) = 7;
    (*(uint *)(gen_frame + 0x1d0)) = 7;
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x1a0)) + 0)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1a0)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x1a0)) + 2)) << 0x10)));
    (*(undefined4 *)(gen_frame + 0x194)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x184)) + 0)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x184)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x184)) + 2)) << 0x10)));
    (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x1bc)) + 0)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1bc)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x1bc)) + 2)) << 0x10)));
    F_0042eae0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x184)));
    F_0042eae0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1a0)));
    F_0042eae0(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1bc)));
    if ((*(uint *)(gen_frame + 0x198)) < 8) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 * PTR32 *)(gen_frame + 0x184));
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)(gen_frame + 0x184));
    }
    if ((*(uint *)(gen_frame + 0x1b4)) < 8) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 * PTR32 *)(gen_frame + 0x1a0));
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1a0));
    }
    if ((*(uint *)(gen_frame + 0x1d0)) < 8) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = &(*(undefined4 * PTR32 *)(gen_frame + 0x1bc));
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1bc));
    }
    ppppuVar10 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c))[0];
    if ((*(uint *)(gen_frame + 0x160)) < 0x10) {
      ppppuVar10 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c));
    }
    uVar9 = F_00c4c74c(ppppuVar10);
    ppppbVar11 = (byte * PTR32 * PTR32 * PTR32 *)((byte * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x114))[0];
    if ((*(uint *)(gen_frame + 0x128)) < 0x10) {
      ppppbVar11 = ((byte * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x114));
    }
    pbVar14 = &REFG(undefined1, 0x110f540);
    do {
      bVar1 = *(byte *)ppppbVar11;
      bVar15 = bVar1 < *pbVar14;
      if (bVar1 != *pbVar14) {
LAB_00c29cf0: ;
        iVar12 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00c29cf5;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)ppppbVar11 + 1);
      bVar15 = bVar1 < pbVar14[1];
      if (bVar1 != pbVar14[1]) goto LAB_00c29cf0;
      ppppbVar11 = (byte * PTR32 * PTR32 * PTR32 *)((int)ppppbVar11 + 2);
      pbVar14 = pbVar14 + 2;
    } while (bVar1 != 0);
    iVar12 = 0;
LAB_00c29cf5: ;
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),iVar12 == 0);
    iVar12 = gen_imp_WinHttpConnect(param_1,(*(undefined4 * PTR32 *)(gen_frame + 0xc)),uVar9 & 0xffff,0);
    *(int *)((int)this + 4) = iVar12;
    if (iVar12 == 0) {
      if (7 < (*(uint *)(gen_frame + 0x1d0))) {
        F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1bc)),(*(uint *)(gen_frame + 0x1d0)) * 2 + 2,0x3d);
      }
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x1bc));
      (*(uint *)(gen_frame + 0x1d0)) = 7;
      (*(undefined4 *)(gen_frame + 0x1cc)) = 0;
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x1bc)) + 0)) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1bc)) = (undefined4 *)((uint)puVar8 & 0xffff0000);
      if (7 < (*(uint *)(gen_frame + 0x1b4))) {
        F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x1a0)),(*(uint *)(gen_frame + 0x1b4)) * 2 + 2,0x3d);
      }
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x1a0));
      (*(uint *)(gen_frame + 0x1b4)) = 7;
      (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x1a0)) + 0)) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1a0)) = (undefined4 *)((uint)puVar8 & 0xffff0000);
      if (7 < (*(uint *)(gen_frame + 0x198))) {
        F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x184)),(*(uint *)(gen_frame + 0x198)) * 2 + 2,0x3d);
      }
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x184));
      (*(uint *)(gen_frame + 0x198)) = 7;
      (*(undefined4 *)(gen_frame + 0x194)) = 0;
      (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x184)) + 0)) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x184)) = (undefined4 *)((uint)puVar8 & 0xffff0000);
    }
    else {
      uVar9 = F_00c29a00(this GEN_EDX_ARG,iVar12,(*(undefined4 * PTR32 *)(gen_frame + 0x14)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x4)));
      *(uint *)((int)this + 8) = uVar9;
      if (uVar9 != 0) {
        *(undefined4 *)((int)this + 0x244) = 0;
        F_00c29310(&(*(short *)(gen_frame + 0x1d8)),(*(undefined * PTR32 (*)[6])REFP(0x110f548)),param_5);
        F_00bc86b0((undefined *)((int)this + 0x18) GEN_EDX_ARG);
        if (*(int *)((int)this + 0xc) != 0) {
          if (0x3ff < *(uint *)((int)this + 0x14)) {
            F_00406810(*(int *)((int)this + 0xc));
          }
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        *(undefined4 *)((int)this + 0x14) = 0;
        psVar13 = &(*(short *)(gen_frame + 0x1d8));
        *(undefined4 *)((int)this + 0x23c) = 1;
        *(undefined1 *)((int)this + 0x240) = 0;
        do {
          sVar2 = *psVar13;
          psVar13 = psVar13 + 1;
        } while (sVar2 != 0);
        iVar12 = gen_imp_WinHttpSendRequest(*(undefined4 *)((int)this + 8),&(*(short *)(gen_frame + 0x1d8)),
                                    (int)psVar13 - (int)((undefined1 *)(gen_frame + 0x1da)) >> 1,param_4,param_5,param_5,this)
        ;
        if (iVar12 == 0) {
          *(undefined4 *)((int)this + 0x23c) = 8;
        }
        *(undefined4 *)((int)this + 0x664) = 0;
        F_00403330(&(*(undefined4 * PTR32 *)(gen_frame + 0x1bc)) GEN_EDX_ARG);
        F_00403330(&(*(undefined4 * PTR32 *)(gen_frame + 0x1a0)) GEN_EDX_ARG);
        F_00403330(&(*(undefined4 * PTR32 *)(gen_frame + 0x184)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
        F_00c2a4b0(((byte * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x114)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x3d8)) ^ (uint)(uint)(gen_frame + 0x3dc) GEN_EDX_ARG);
        return 1;
      }
      F_00403330(&(*(undefined4 * PTR32 *)(gen_frame + 0x1bc)) GEN_EDX_ARG);
      F_00403330(&(*(undefined4 * PTR32 *)(gen_frame + 0x1a0)) GEN_EDX_ARG);
      F_00403330(&(*(undefined4 * PTR32 *)(gen_frame + 0x184)) GEN_EDX_ARG);
    }
    F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  }
  F_00c2a4b0(((byte * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x114)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x3d8)) ^ (uint)(uint)(gen_frame + 0x3dc) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::SupportDesk::HttpRequestImpl::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00c29f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc29f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: Client::SupportDesk::HttpRequestImpl::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00c29f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc29f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x244);
}

/* ref: FUN_00c2a000 */
GEN_FRAME uint GEN_STDCALL F_00c2a000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x259);
  return (uint)uVar1;
}

/* ref: FUN_00c2a020 */
GEN_FRAME uint GEN_STDCALL F_00c2a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x259);
  return uVar1;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00c2a060 */
GEN_FRAME uint GEN_THISCALL F_00c2a060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return param_2;
}

/* ref: FUN_00c2a080 */
GEN_FRAME byte GEN_THISCALL F_00c2a080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a080u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c2a0c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c2a0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2a0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) + 1,0x259);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return;
}

/* ref: FUN_00c2a130 */
GEN_FRAME uint GEN_THISCALL F_00c2a130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2a130u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c2a1d0 */
GEN_FRAME uint GEN_THISCALL F_00c2a1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2a1d0u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar4 = F_004296a0(uVar5 + 1,0,0x259);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x259);
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

/* ref: FUN_00c2a290 */
GEN_FRAME uint GEN_THISCALL F_00c2a290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2a290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: Client::SupportDesk::HttpRequestImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2a340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c294d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2a390 */
GEN_NOFRAME uint GEN_THISCALL F_00c2a390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2a390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x259);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00c2a3c0 */
GEN_FRAME uint GEN_THISCALL F_00c2a3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2a3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(uint *)&gen_a1) == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < (*(uint *)&gen_a1)) {
    F_00c2a1d0(this GEN_EDX_ARG,(*(uint *)&gen_a1),*(undefined4 *)((int)this + 0x10));
    return (uint)((*(uint *)&gen_a1) != 0);
  }
  if (((char)param_2 != '\0') && ((*(uint *)&gen_a1) < 0x10)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if ((*(uint *)&gen_a1) < uVar3) {
      uVar3 = (*(uint *)&gen_a1);
    }
    if (0xf < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3);
      }
      F_00429760(uVar2,*(int *)((int)this + 0x14) + 1,0x259);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)(uVar3 + (int)this) = 0;
    return (uint)((*(uint *)&gen_a1) != 0);
  }
  if ((*(uint *)&gen_a1) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined1 *)this = 0;
  }
  return (uint)((*(uint *)&gen_a1) != 0);
}

/* ref: FUN_00c2a480 */
GEN_FRAME uint GEN_THISCALL F_00c2a480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a480u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_00c2a290(this GEN_EDX_FWD,0,*(undefined4 *)((int)this + 0x10),param_1,
                       (int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00c2a4b0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2a4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2a4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  if (0xf < *(uint *)((int)this + 0x68)) {
    F_00429760(*(undefined4 *)((int)this + 0x54),*(uint *)((int)this + 0x68) + 1,0x259);
  }
  *(undefined4 *)((int)this + 0x68) = 0xf;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  if (0xf < *(uint *)((int)this + 0x4c)) {
    F_00429760(*(undefined4 *)((int)this + 0x38),*(uint *)((int)this + 0x4c) + 1,0x259);
  }
  *(undefined4 *)((int)this + 0x4c) = 0xf;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  if (0xf < *(uint *)((int)this + 0x30)) {
    F_00429760(*(undefined4 *)((int)this + 0x1c),*(uint *)((int)this + 0x30) + 1,0x259);
  }
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x259);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_00c2a550 */
GEN_FRAME uint GEN_THISCALL F_00c2a550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2a550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_00c2a130(this GEN_EDX_ARG,uVar3 + param_2,0xffffffff);
    F_00c2a130(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_00c2a1d0(this GEN_EDX_ARG,uVar3,*(undefined4 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *(uint *)((int)this + 0x10) = uVar3;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + uVar3) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + uVar3) = 0;
  return (uint)this;
}

/* ref: FUN_00c2a640 */
GEN_FRAME byte F_00c2a640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a640u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c2a290(param_1 GEN_EDX_ARG,0,*(undefined4 *)((int)param_1 + 0x10),param_2,
                       (int)pcVar2 - (int)(param_2 + 1));
  return 1 - (uVar3 != 0);
}

/* ref: FUN_00c2a680 */
GEN_FRAME uint GEN_THISCALL F_00c2a680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2a680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00c2a550(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00c2a550(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_00c2a1d0(this GEN_EDX_ARG,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return (uint)this;
}

/* ref: FUN_00c2a780 */
GEN_FRAME uint GEN_THISCALL F_00c2a780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a780u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_00c2a680(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00c2a7b0 */
GEN_FRAME uint GEN_THISCALL F_00c2a7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a7b0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_00c2a680(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00c2a7e0 */
GEN_FRAME byte GEN_THISCALL F_00c2a7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint uVar2;
  byte bVar3;
  char * pcVar4;
  char * pcVar5;
  undefined * pvVar6;
  uint uVar7;
  
  F_00c2a680(this GEN_EDX_FWD,&REFG(undefined1, 0x107fc63),0);
  pcVar4 = F_00c46a10(param_1,"://");
  if (pcVar4 != (char *)0x0) {
    F_00c2a680(this GEN_EDX_ARG,param_1,(int)pcVar4 - (int)param_1);
    pcVar4 = pcVar4 + 3;
    F_00c2a680((undefined *)((int)this + 0x1c) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),0);
    pcVar5 = F_00c52d60(pcVar4,":/");
    if (pcVar5 != (char *)0x0) {
      F_00c2a680((undefined *)((int)this + 0x1c) GEN_EDX_ARG,pcVar4,(int)pcVar5 - (int)pcVar4);
      if (*pcVar5 == ':') {
        pcVar4 = pcVar5 + 1;
        pcVar5 = (char *)F_00c51da0(pcVar4,0x2f);
        if (pcVar5 == (char *)0x0) {
          return 0;
        }
        F_00c2a680((undefined *)((int)this + 0x38) GEN_EDX_ARG,pcVar4,(int)pcVar5 - (int)pcVar4);
      }
      else {
        uVar2 = *(uint *)((int)this + 0x10);
        uVar7 = uVar2;
        if (3 < uVar2) {
          uVar7 = 4;
        }
        pvVar6 = this;
        if (0xf < *(uint *)((int)this + 0x14)) {
          pvVar6 = *(undefined * PTR32 *)this;
        }
        uVar7 = F_0040d320(pvVar6,&REFG(undefined, 0x110f5fc),uVar7);
        if (((uVar7 == 0) && (3 < uVar2)) && (uVar2 == 4)) {
          F_00c2a680((undefined *)((int)this + 0x38) GEN_EDX_ARG,&REFG(undefined, 0x110f5f8),2);
        }
        else {
          bVar3 = F_00c2a640(this,"https");
          if (bVar3 != 0) {
            F_00c2a7b0((undefined *)((int)this + 0x38) GEN_EDX_ARG,&REFG(undefined, 0x110f5ec));
          }
        }
      }
      if (*pcVar5 != '/') {
        F_00c2a680((undefined *)((int)this + 0x54) GEN_EDX_ARG,&REFG(undefined, 0x1080808),1);
        return 1;
      }
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      F_00c2a680((undefined *)((int)this + 0x54) GEN_EDX_ARG,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c2a940 */
GEN_FRAME uint GEN_THISCALL F_00c2a940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xf;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x68) = 0xf;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  if (param_1 != 0) {
    F_00c2a7e0(this GEN_EDX_FWD,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00c2a9a0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2a9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2a9a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x110f610));
  return (uint)in_ecx;
}

/* ref: FUN_00c2a9b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c2a9b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2a9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[7])REFP(0x110f610));
  return;
}

/* ref: Client::SupportDesk::HttpRequest::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2a9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2a9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x110f610));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2aa40 */
GEN_FRAME uint GEN_THISCALL F_00c2aa40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xc2aa40u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  in_ecx[1] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = (undefined4)gen_fl2bits(param_4);
  in_ecx[3] = (undefined4)gen_fl2bits(param_5);
  *in_ecx = param_2;
  in_ecx[4] = (undefined4)gen_fl2bits(param_6);
  return (uint)in_ecx;
}

/* ref: FUN_00c2aa80 */
GEN_FRAME uint GEN_THISCALL F_00c2aa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2aa80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x65;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined8 *)((int)this + 0x1c) = *param_2;
  *(undefined8 *)((int)this + 0x24) = param_2[1];
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00c2aac0 */
GEN_FRAME uint GEN_THISCALL F_00c2aac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xc2aac0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_11 = (undefined4)gen_a11;
  undefined8 * param_12 = (undefined8 *)(uintptr_t)gen_a12;
  undefined8 * param_13 = (undefined8 *)(uintptr_t)gen_a13;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined1 *)((int)this + 0x30) = (undefined1)param_7;
  *(undefined4 *)((int)this + 0x2c) = param_6;
  *(undefined4 *)((int)this + 0x38) = param_9;
  *(undefined4 *)((int)this + 0x34) = param_8;
  *(undefined4 *)((int)this + 0x40) = param_11;
  *(undefined4 *)this = 0x66;
  *(undefined4 *)((int)this + 4) = 0x90;
  *(undefined1 *)((int)this + 0x3c) = (undefined1)param_10;
  *(undefined8 *)((int)this + 0x44) = *param_12;
  *(undefined8 *)((int)this + 0x4c) = param_12[1];
  *(undefined8 *)((int)this + 0x54) = param_12[2];
  *(undefined8 *)((int)this + 0x5c) = param_12[3];
  *(undefined8 *)((int)this + 100) = *param_13;
  *(undefined8 *)((int)this + 0x6c) = param_13[1];
  *(undefined8 *)((int)this + 0x74) = param_13[2];
  *(undefined8 *)((int)this + 0x7c) = param_13[3];
  *(undefined8 *)((int)this + 0x84) = param_13[4];
  *(undefined8 *)((int)this + 0x8c) = param_13[5];
  return (uint)this;
}

/* ref: FUN_00c2ab90 */
GEN_FRAME uint GEN_THISCALL F_00c2ab90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2ab90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x67;
  *(undefined4 *)((int)this + 4) = 0x430;
  *(undefined8 *)((int)this + 0x1c) = *param_2;
  *(undefined8 *)((int)this + 0x24) = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((int)this + 0x30) = (undefined2)param_3;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  puVar3 = param_4;
  puVar4 = (undefined4 *)((int)this + 0x32);
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00c2abf0 */
GEN_FRAME uint GEN_THISCALL F_00c2abf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2abf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0x69;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_00c2ac30 */
GEN_FRAME uint GEN_THISCALL F_00c2ac30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ac30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x263;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2ac50 */
GEN_FRAME uint GEN_THISCALL F_00c2ac50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x264;
  in_ecx[1] = 0x18;
  *(undefined1 *)(in_ecx + 6) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2ac70 */
GEN_NOFRAME uint GEN_THISCALL F_00c2ac70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2ac70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a1af40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00c2ac80 */
GEN_FRAME uint GEN_THISCALL F_00c2ac80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2ac80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *in_ecx = 100;
  in_ecx[1] = 0x430;
  *(undefined8 *)(in_ecx + 6) = *param_2;
  *(undefined8 *)(in_ecx + 8) = param_2[1];
  *(undefined8 *)(in_ecx + 10) = param_2[2];
  *(undefined8 *)(in_ecx + 0xc) = param_2[3];
  puVar2 = param_3;
  puVar3 = in_ecx + 0xe;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00c2ace0 */
GEN_FRAME uint GEN_THISCALL F_00c2ace0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2ace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x65;
  *(undefined4 *)((int)this + 4) = 0x418;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  puVar2 = param_3;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00c2ad20 */
GEN_FRAME uint GEN_THISCALL F_00c2ad20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ad20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *in_ecx = 0x66;
  in_ecx[1] = 0x30;
  *(undefined8 *)(in_ecx + 6) = *param_2;
  *(undefined8 *)(in_ecx + 8) = param_2[1];
  *(undefined8 *)(in_ecx + 10) = param_2[2];
  *(undefined8 *)(in_ecx + 0xc) = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00c2ad60 */
GEN_FRAME uint GEN_THISCALL F_00c2ad60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2ad60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x67;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined2 *)((int)this + 0x20) = (undefined2)param_3;
  return (uint)this;
}

/* ref: FUN_00c2ad90 */
GEN_FRAME uint GEN_THISCALL F_00c2ad90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x68;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2adb0 */
GEN_FRAME uint GEN_THISCALL F_00c2adb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2adb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0x69;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_00c2ade0 */
GEN_FRAME uint GEN_THISCALL F_00c2ade0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyClient::LobbyLoginParam::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2ae10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ae10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2ae50 */
GEN_NOFRAME uint GEN_THISCALL F_00c2ae50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2ae50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00427e30();
  return (int)uVar1 - *(int *)((int)this + 0x10);
}

/* ref: FUN_00c2ae90 */
GEN_FRAME uint GEN_THISCALL F_00c2ae90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2ae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(uint *)((int)this + 4) = param_1 + param_2 / 1000;
  *(uint *)((int)this + 8) = param_2 % 1000;
  *(undefined4 *)this = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x18) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x20) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x28) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00c2af00 */
GEN_FRAME uint GEN_THISCALL F_00c2af00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2af00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00c2af50 */
GEN_NOFRAME uint GEN_THISCALL F_00c2af50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2af50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00f36280(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClientSelectData::vf1 */
GEN_NOFRAME uint F_00c2af80(void)
{
  GEN_ENTER(0xc2af80u, 0u, 0u, 0u, 0u);
  return 0x136a514;
}

/* ref: FUN_00c2afa0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2afa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2afa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00efc4c0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ZoneInitData::vf1 */
GEN_NOFRAME uint F_00c2afd0(void)
{
  GEN_ENTER(0xc2afd0u, 0u, 0u, 0u, 0u);
  return 0x1369c9c;
}

/* ref: Application::Network::LobbyProtoChannel::ClientSelectData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2aff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00f36370(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ZoneInitData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2b020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00efc530(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2b050 */
GEN_FRAME unsigned int GEN_THISCALL F_00c2b050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = (undefined1 *)((int)this + 4);
  iVar1 = 0x1a;
  do {
    *puVar2 = puVar2[param_1 - (int)this];
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  *(undefined1 *)((int)this + 0x1e) = *(undefined1 *)(param_1 + 0x1e);
  *(undefined1 *)((int)this + 0x1f) = *(undefined1 *)(param_1 + 0x1f);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)(param_1 + 0x22);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}

/* ref: FUN_00c2b0b0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2b0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2b0b0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0x18 GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x6c GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00c2b120 */
GEN_FRAME uint GEN_THISCALL F_00c2b120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b120u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2b160 */
GEN_FRAME byte GEN_THISCALL F_00c2b160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x340) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x348) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x350) = uVar2;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x3d8) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x3e0) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 1000) = uVar2;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x3a0) = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x3a8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x3b0) = uVar2;
  *(undefined4 *)((int)this + 0x2a4) = param_1;
  return 1;
}

/* ref: FUN_00c2b220 */
GEN_FRAME uint GEN_THISCALL F_00c2b220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c31190(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2b250 */
GEN_FRAME uint GEN_THISCALL F_00c2b250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c318c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2b280 */
GEN_NOFRAME byte GEN_THISCALL F_00c2b280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2b280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  
  if (*(int *)((int)this + 0x290) == 0) {
    if ((**(char * PTR32 *)((int)this + 0x1c) != '\0') && (0 < *(int *)((int)this + 0x18))) {
      pvVar2 = (undefined *)F_00406b90(0x5c0,0,0);
      if (pvVar2 == (undefined *)0x0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = (undefined *)F_00c31a70(pvVar2 GEN_EDX_ARG,(int)this + 0x1c,*(undefined4 *)((int)this + 0x18),
                                      (int)this + 0x184,0);
      }
      *(undefined * PTR32 *)((int)this + 0x290) = pvVar2;
      F_00c31b40(pvVar2 GEN_EDX_ARG,(int)this + 0x1d8);
      F_00c31b30(*(undefined * PTR32 *)((int)this + 0x290) GEN_EDX_ARG,(int)this + 0x22c);
      *(undefined1 *)((int)this + 0x2a0) = 0;
    }
    if (*(undefined * PTR32 *)((int)this + 0x290) == (undefined *)0x0) {
      *(undefined4 *)((int)this + 0x2b4) = 1;
    }
    else {
      bVar1 = F_00c31be0(*(undefined * PTR32 *)((int)this + 0x290) GEN_EDX_ARG);
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_00c2b380 */
GEN_FRAME byte GEN_THISCALL F_00c2b380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2b380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    bVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD,param_1,param_2,param_3);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c2b3a0 */
GEN_NOFRAME byte GEN_THISCALL F_00c2b3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  undefined * this_00;
  byte bVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar1 = *param_1;
  *(undefined4 *)((int)this + 0x3c0) = uVar1;
  this_00 = *(undefined * PTR32 *)((int)this + 0x288);
  bVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x69;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    bVar2 = F_00c308b0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return bVar2;
}

/* ref: FUN_00c2b430 */
GEN_NOFRAME byte GEN_THISCALL F_00c2b430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2b430u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x110f0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x110dc)) = 0xc2b450;
  (*(uint *)(gen_frame + 0x110dc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  if (*(int *)(param_1 + 0x288) == 0) {
    bVar1 = 0;
  }
  else {
    uVar2 = F_0042d420(param_7 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x10c28)),0x400);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x10c80)) GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x10c28)) GEN_EDX_ARG);
    F_00c48350(((undefined4 *)(gen_frame + 0x10cd8)),0,0x400);
    uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x10c80)) GEN_EDX_ARG);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x10c80)) GEN_EDX_ARG);
    F_00c46aa0(((undefined4 *)(gen_frame + 0x10cd8)),uVar3,uVar2);
    (*(undefined8 *)(gen_frame + 0x10024)) = CONCAT44((uint)gen_fl2bits(param_3),param_2);
    (*(float *)(gen_frame + 0x10034)) = param_6;
    (*(undefined4 *)(gen_frame + 0x10008)) = 0x67;
    (*(undefined4 *)(gen_frame + 0x1000c)) = 0x430;
    (*(undefined4 *)(gen_frame + 0x10020)) = 0;
    (*(undefined8 *)(gen_frame + 0x1002c)) = CONCAT44((uint)gen_fl2bits(param_5),(uint)gen_fl2bits(param_4));
    (*(undefined2 *)(gen_frame + 0x10038)) = (undefined2)param_8;
    puVar5 = ((undefined4 *)(gen_frame + 0x10cd8));
    puVar6 = ((undefined4 *)(gen_frame + 0x1003a));
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    bVar1 = F_00c308b0(*(undefined * PTR32 *)(param_1 + 0x288) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10008)),0,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x10c80)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x110dc)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2b5d0 */
GEN_NOFRAME byte GEN_THISCALL F_00c2b5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2b5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x900];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x8ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8f0);
  if (*(int *)((int)this + 0x28c) == 0) {
    bVar1 = 0;
  }
  else {
    uVar2 = F_0042d420(param_3 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x438)),0x400);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x490)) GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG);
    F_00c48350(((undefined4 *)(gen_frame + 0x4e8)),0,0x400);
    uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x490)) GEN_EDX_ARG);
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x490)) GEN_EDX_ARG);
    F_00c46aa0(((undefined4 *)(gen_frame + 0x4e8)),uVar3,uVar2);
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x65;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x418;
    puVar5 = ((undefined4 *)(gen_frame + 0x4e8));
    puVar6 = ((undefined4 *)(gen_frame + 0x20));
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    bVar1 = F_00c31350(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x490)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8ec)) ^ (uint)(uint)(gen_frame + 0x8f0) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2b700 */
GEN_NOFRAME byte GEN_THISCALL F_00c2b700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2b700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x980];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x96c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x970);
  if (*(int *)((int)this + 0x28c) != 0) {
    uVar2 = F_0042b790(param_1 GEN_EDX_FWD);
    if (uVar2 != 0) {
      uVar2 = F_0042d420(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x490)),0x20);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x490)) GEN_EDX_ARG);
      uVar2 = F_0042d420(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x490)),0x400);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x4e8)) GEN_EDX_ARG,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x490)) GEN_EDX_ARG);
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x940)), 0x0);
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x950)), 0x0);
      uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG);
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG);
      F_00c46aa0(((undefined1 *)(gen_frame + 0x940)),uVar3,uVar2);
      F_00c48350(((undefined4 *)(gen_frame + 0x540)),0,0x400);
      uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4e8)) GEN_EDX_ARG);
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4e8)) GEN_EDX_ARG);
      F_00c46aa0(((undefined4 *)(gen_frame + 0x540)),uVar3,uVar2);
      (*(undefined8 *)(gen_frame + 0x18)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x940)) + 0));
      (*(undefined8 *)(gen_frame + 0x20)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x940)) + 8));
      (*(undefined8 *)(gen_frame + 0x28)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x950)) + 0));
      (*(undefined4 *)(gen_frame + 0x0)) = 100;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x430;
      (*(undefined8 *)(gen_frame + 0x30)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x950)) + 8));
      puVar5 = ((undefined4 *)(gen_frame + 0x540));
      puVar6 = ((undefined4 *)(gen_frame + 0x38));
      for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      bVar1 = F_00c31350(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4e8)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x438)) GEN_EDX_ARG);
      goto LAB_00c2b8a6;
    }
  }
  bVar1 = 0;
LAB_00c2b8a6: ;
  F_00c47745((*(uint *)(gen_frame + 0x96c)) ^ (uint)(uint)(gen_frame + 0x970) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2b8c0 */
GEN_NOFRAME byte GEN_THISCALL F_00c2b8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2b8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x530];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x51c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x520);
  if (*(int *)((int)this + 0x28c) != 0) {
    uVar2 = F_0042b790(param_1 GEN_EDX_FWD);
    if (uVar2 != 0) {
      uVar2 = F_0042d420(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x440)),0x20);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x498)) GEN_EDX_ARG,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG);
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x4f0)), 0x0);
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x500)), 0x0);
      uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x498)) GEN_EDX_ARG);
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x498)) GEN_EDX_ARG);
      F_00c46aa0(((undefined1 *)(gen_frame + 0x4f0)),uVar3,uVar2);
      this_00 = *(undefined * PTR32 *)((int)this + 0x28c);
      (*(undefined8 *)(gen_frame + 0x20)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x4f0)) + 0));
      (*(undefined8 *)(gen_frame + 0x28)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x4f0)) + 8));
      (*(undefined8 *)(gen_frame + 0x30)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x500)) + 0));
      (*(undefined4 *)(gen_frame + 0x8)) = 0x66;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
      (*(undefined8 *)(gen_frame + 0x38)) = (*(undefined8 *)((char *)((undefined1 *)(gen_frame + 0x500)) + 8));
      bVar1 = F_00c31350(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x498)) GEN_EDX_ARG);
      goto LAB_00c2b9d7;
    }
  }
  bVar1 = 0;
LAB_00c2b9d7: ;
  F_00c47745((*(uint *)(gen_frame + 0x51c)) ^ (uint)(uint)(gen_frame + 0x520) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2b9f0 */
GEN_NOFRAME byte GEN_THISCALL F_00c2b9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2b9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x450];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x43c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440);
  this_00 = *(undefined * PTR32 *)((int)this + 0x28c);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x69;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    bVar1 = F_00c31350(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x43c)) ^ (uint)(uint)(gen_frame + 0x440) GEN_EDX_ARG);
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440) ^ (uint)(uint)(gen_frame + 0x440) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2ba80 */
GEN_NOFRAME byte GEN_THISCALL F_00c2ba80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2ba80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x450];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x43c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440);
  this_00 = *(undefined * PTR32 *)((int)this + 0x28c);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x67;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x20;
    (*(ushort *)(gen_frame + 0x20)) = (ushort)(byte)param_3;
    bVar1 = F_00c31350(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x43c)) ^ (uint)(uint)(gen_frame + 0x440) GEN_EDX_ARG);
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440) ^ (uint)(uint)(gen_frame + 0x440) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2bb20 */
GEN_NOFRAME byte GEN_THISCALL F_00c2bb20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2bb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x450];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x43c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440);
  this_00 = *(undefined * PTR32 *)((int)this + 0x28c);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0x68;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar1 = F_00c31350(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x43c)) ^ (uint)(uint)(gen_frame + 0x440) GEN_EDX_ARG);
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x440) ^ (uint)(uint)(gen_frame + 0x440) GEN_EDX_ARG);
  return 0;
}

/* ref: Global::SendLogout */
GEN_NOFRAME byte GEN_THISCALL F_00c2bba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2bba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = *(undefined * PTR32 *)((int)this + 0x288);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x263;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    bVar1 = F_00c308b0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2bc20 */
GEN_NOFRAME byte GEN_THISCALL F_00c2bc20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2bc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = *(undefined * PTR32 *)((int)this + 0x288);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x264;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(undefined1 *)(gen_frame + 0x20)) = 0;
    bVar1 = F_00c308b0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
    return bVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2bcc0 */
GEN_FRAME uint GEN_THISCALL F_00c2bcc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bcc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * puVar1;
  undefined4 * puVar2;
  
  puVar1 = (uint *)F_00e3bd70(*(undefined4 *)(in_ecx + 0x298) GEN_EDX_FWD);
  if (1 < *puVar1) {
    puVar2 = (undefined4 *)F_00e3bd20(param_2 GEN_EDX_ARG);
    puVar1 = (uint *)*puVar2;
    *(undefined4 *)(in_ecx + 0x2d8 + (int)((int)(uintptr_t)puVar1) * 4) = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_00c2bcf0 */
GEN_FRAME byte GEN_THISCALL F_00c2bcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00e3c520(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_00c2bd00 */
GEN_FRAME uint GEN_THISCALL F_00c2bd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3c590(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2bd30 */
GEN_FRAME byte GEN_THISCALL F_00c2bd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bd30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x298) != 0) && ((*(int *)&gen_a1) != 0)) {
    bVar1 = F_00e3e870(*(undefined4 *)((*(int *)&gen_a1) + 100) GEN_EDX_FWD);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c2bd60 */
GEN_NOFRAME uint GEN_THISCALL F_00c2bd60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2bd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  return (uint)uVar1;
}

/* ref: FUN_00c2bd80 */
GEN_NOFRAME uint GEN_THISCALL F_00c2bd80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2bd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  return (uint)uVar1;
}

/* ref: FUN_00c2bda0 */
GEN_FRAME uint GEN_THISCALL F_00c2bda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bda0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00e3c0b0(in_ecx GEN_EDX_FWD);
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[39])REFP(0x110f774));
  return (uint)in_ecx;
}

/* ref: Application::Network::MyGameLoginCallback::vf1 */
GEN_FRAME uint GEN_THISCALL F_00c2bde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc2bde0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int * piVar2;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(uVar1 + 0x304);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf2 */
GEN_FRAME uint GEN_THISCALL F_00c2be10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc2be10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int * piVar2;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(uVar1 + 0x304);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf4 */
GEN_FRAME uint GEN_THISCALL F_00c2be40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2be40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(this + 4) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x304)));
  }
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_FWD,param_1);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG,param_1,param_2);
  }
  uVar1 = *(uint *)(this + 4);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x304) = 0;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf19 */
GEN_FRAME uint GEN_THISCALL F_00c2be90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc2be90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int * piVar2;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(uVar1 + 0x304);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf20 */
GEN_FRAME uint GEN_THISCALL F_00c2bec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc2bec0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int * piVar2;
  
  uVar1 = *(uint *)(this + 4);
  if (uVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(uVar1 + 0x304);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x50))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf22 */
GEN_FRAME uint GEN_THISCALL F_00c2bef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2bef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(this + 4) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x304)));
  }
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2 GEN_EDX_FWD,param_1);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2 GEN_EDX_ARG,param_1,param_2);
  }
  uVar1 = *(uint *)(this + 4);
  if (uVar1 != 0) {
    if (*(int *)(uVar1 + 0x2b0) == 0) {
      *(undefined4 *)(uVar1 + 0x2b0) = 2;
    }
    *(undefined4 *)(uVar1 + 0x304) = 0;
  }
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2bf60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2bf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x110f774));
  F_00e3c0c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2bf90 */
GEN_NOFRAME uint GEN_THISCALL F_00c2bf90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2bf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x6c) GEN_EDX_FWD);
  uVar1 = F_0042c880((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00c2bfb0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2bfb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2bfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00efc530((int)this + 0x200 GEN_EDX_FWD);
  F_00e5bc00((int)this + 0x1d8 GEN_EDX_ARG);
  F_00f36370((int)this + 0xf0 GEN_EDX_ARG);
  F_00e75880((int)this + 0xc0 GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x6c) GEN_EDX_ARG);
  uVar1 = F_0042c880((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00c2bff0 */
GEN_NOFRAME byte GEN_THISCALL F_00c2bff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2bff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x288) != 0;
}

/* ref: FUN_00c2c000 */
GEN_NOFRAME uint GEN_THISCALL F_00c2c000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2c000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    uVar1 = F_00c31260(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c2c040 */
GEN_FRAME byte GEN_THISCALL F_00c2c040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    bVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD,param_1,param_2,param_3);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c2c060 */
GEN_FRAME byte GEN_THISCALL F_00c2c060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    bVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD,param_1,param_2,param_3);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c2c080 */
GEN_FRAME byte GEN_THISCALL F_00c2c080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    bVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD,param_1,param_2,param_3);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c2c0a0 */
GEN_FRAME byte GEN_THISCALL F_00c2c0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    bVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD,param_1,param_2,param_3);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c2c0c0 */
GEN_FRAME byte GEN_THISCALL F_00c2c0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    bVar1 = F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD,param_1,param_2,param_3);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c2c0f0 */
GEN_FRAME uint GEN_THISCALL F_00c2c0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c0f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00c2c1a0 */
GEN_FRAME uint GEN_THISCALL F_00c2c1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: ScalarTypeLoginParam_VUtf8String_Misc_Sqex_LobbyClient_Network::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00c2c1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2c1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x5c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 2;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
    F_0042cbc0(puVar1 + 2 GEN_EDX_ARG,(int)this + 8);
    return (uint)puVar1;
  }
  return 0;
}

/* ref: FUN_00c2c210 */
GEN_FRAME uint GEN_THISCALL F_00c2c210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x110f820));
  F_0042cbc0((undefined *)((int)this + 8) GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: ScalarTypeLoginParam_VUtf8String_Misc_Sqex_LobbyClient_Network::vf1_00c2c240 */
GEN_NOFRAME uint GEN_THISCALL F_00c2c240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2c240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x5c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 3;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x110f820));
    F_0042cbc0(puVar1 + 2 GEN_EDX_ARG,(int)this + 8);
    return (uint)puVar1;
  }
  return 0;
}

/* ref: ScalarTypeLoginParam_VUtf8String_Misc_Sqex_LobbyClient_Network::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2c280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ScalarTypeLoginParam_VUtf8String_Misc_Sqex_LobbyClient_Network::vf0_00c2c2b0 */
GEN_FRAME uint GEN_THISCALL F_00c2c2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 8) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2c300 */
GEN_FRAME uint GEN_THISCALL F_00c2c300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c300u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c2c390 */
GEN_FRAME uint GEN_THISCALL F_00c2c390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)this;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00c2c400 */
GEN_FRAME uint GEN_THISCALL F_00c2c400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2c420 */
GEN_FRAME uint GEN_STDCALL F_00c2c420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00c2c450 */
GEN_FRAME uint GEN_THISCALL F_00c2c450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2c460 */
GEN_FRAME uint GEN_THISCALL F_00c2c460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c460u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2c490 */
GEN_NOFRAME uint GEN_THISCALL F_00c2c490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2c490u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  return (uint)in_ecx;
}

/* ref: FUN_00c2c4d0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2c4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2c4d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  return (uint)in_ecx;
}

/* ref: FUN_00c2c500 */
GEN_FRAME uint F_00c2c500(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c510 */
GEN_FRAME uint F_00c2c510(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: PacketBufferTmpl_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2c560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketBufferTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c2c590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2c5e0 */
GEN_FRAME uint F_00c2c5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c5e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c5f0 */
GEN_FRAME uint GEN_STDCALL F_00c2c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c2c610 */
GEN_FRAME uint F_00c2c610(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c630 */
GEN_FRAME byte F_00c2c630(void)
{
  GEN_ENTER(0xc2c630u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00c2c650 */
GEN_FRAME uint F_00c2c650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c650u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c2c670 */
GEN_FRAME unsigned int F_00c2c670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00c2c690 */
GEN_FRAME uint F_00c2c690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c690u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2c6c0 */
GEN_FRAME uint F_00c2c6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c6c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2c6f0 */
GEN_FRAME uint GEN_THISCALL F_00c2c6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c6f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((param_2 - in_ecx[1]) * 1000 - in_ecx[2]) + param_3;
  *in_ecx = uVar1;
  return uVar1;
}

/* ref: FUN_00c2c710 */
GEN_NOFRAME uint GEN_THISCALL F_00c2c710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2c710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 0x18 GEN_EDX_FWD);
  F_0042b630((int)this + 0x6c GEN_EDX_ARG);
  F_00e75840((int)this + 0xc0 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4))
  ;
  F_00f36280((undefined *)((int)this + 0xf0) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf0) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  F_00e5bbd0((int)this + 0x1d8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  F_00efc4c0((undefined *)((int)this + 0x200) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x200) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: FUN_00c2c780 */
GEN_FRAME uint GEN_THISCALL F_00c2c780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c2b050(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00c2c7a0 */
GEN_FRAME uint GEN_THISCALL F_00c2c7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * piVar1;
  undefined4 * puVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  piVar1 = (int *)F_00e3bd70(*(undefined4 *)((int)this + 0x298) GEN_EDX_FWD);
  if (*piVar1 == 2) {
    piVar1 = (int *)F_00e3bd20(param_2 GEN_EDX_ARG);
    if (*(int *)((int)this + *piVar1 * 4 + 0x2d8) == 0) {
      _Var3 = F_00c4b7c2((__time64_t *)0x0);
      piVar1 = (int *)F_00e3bd20(param_2 GEN_EDX_ARG);
      *(int *)((int)this + *piVar1 * 4 + 0x2d8) = (int)_Var3;
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
      return (uint)piVar1;
    }
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    puVar2 = (undefined4 *)F_00e3bd20(param_2 GEN_EDX_ARG);
    piVar1 = (int *)*puVar2;
    if ((uint)(*(int *)((int)this + (int)((int)(uintptr_t)piVar1) * 4 + 0x2d8) + *(int *)((int)this + 0x2e4)) <
        (uint)_Var3) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x5c)) = 6;
      ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d6;
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x54)),param_2);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
      piVar1 = (int *)uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return (uint)piVar1;
}

/* ref: FUN_00c2c8c0 */
GEN_FRAME byte GEN_THISCALL F_00c2c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_FWD);
    return 0;
  }
  if (param_3 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x64))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,((byte *)(gen_frame + 0x8)) + 8);
    F_0042c880(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0xc4)) = 0x32c9;
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x10))(param_2 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x64)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
    return 1;
  }
  F_00c2c7a0(this GEN_EDX_ARG,param_2,param_3);
  this_00 = *(undefined * PTR32 *)(param_3 + 100);
  *(int * PTR32 *)(param_3 + 0x68) = param_2;
  if (this_00 == (undefined *)0x0) goto LAB_00c2ca06;
  bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
  if (bVar1 == 0) goto LAB_00c2ca06;
  ((byte *)(gen_frame + 0x8))[4] = 2;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG,param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c1a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) GEN_EDX_ARG,param_1);
    bVar1 = F_00e3edd0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
      goto LAB_00c2ca20;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2ca20: ;
    bVar1 = F_00e40ba0(this_00 GEN_EDX_ARG,param_2);
    if (bVar1 != 0) {
      F_00c2bcc0(this GEN_EDX_ARG,param_3);
      F_0042c880(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
      return 1;
    }
  }
  F_0042c880(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG);
LAB_00c2ca06: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2ca60 */
GEN_FRAME byte GEN_THISCALL F_00c2ca60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2ca60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  undefined * this_00;
  byte bVar2;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  iVar1 = *(int *)((int)this + 0x298);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = param_2;
  if (iVar1 == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_FWD);
    return 0;
  }
  if (param_4 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x74)) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x74))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0xc)) + 0x14 GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,((byte *)(gen_frame + 0xc)) + 0x14);
    F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14 GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0xd4)) = 0x32c9;
    ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x10))(param_3 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x74)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
    return 1;
  }
  F_00c2c7a0(this GEN_EDX_ARG,param_3,param_4);
  this_00 = *(undefined * PTR32 *)(param_4 + 100);
  *(int * PTR32 *)(param_4 + 0x68) = param_3;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cbae;
  bVar2 = F_00e3e870(this_00 GEN_EDX_ARG);
  if (bVar2 == 0) goto LAB_00c2cbae;
  ((byte *)(gen_frame + 0xc))[0x10] = 2;
  ((byte *)(gen_frame + 0xc))[0x11] = 0;
  ((byte *)(gen_frame + 0xc))[0x12] = 0;
  ((byte *)(gen_frame + 0xc))[0x13] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) =
       (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0xc)) + 0x14 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)));
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c1a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)));
    bVar2 = F_00e3edd0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)));
    if (bVar2 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
      goto LAB_00c2cbc8;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x84)) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2cbc8: ;
    bVar2 = F_00e40860(this_00 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)),param_3);
    if (bVar2 != 0) {
      F_00c2bcc0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) GEN_EDX_ARG,param_4);
      F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
      return 1;
    }
  }
  F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14 GEN_EDX_ARG);
LAB_00c2cbae: ;
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2cc10 */
GEN_FRAME byte GEN_THISCALL F_00c2cc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_FWD);
    return 0;
  }
  if (param_5 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
    F_0042cc20(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)));
    F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
    ((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x10))(param_4 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
    return 1;
  }
  F_00c2c7a0(this GEN_EDX_ARG,param_4,param_5);
  this_00 = *(undefined * PTR32 *)(param_5 + 100);
  *(int * PTR32 *)(param_5 + 0x68) = param_4;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cd92;
  bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
  if (bVar1 == 0) goto LAB_00c2cd92;
  (*(undefined4 *)(gen_frame + 0x70)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    bVar1 = F_00e3edd0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) goto LAB_00c2cd47;
  }
  else {
LAB_00c2cd47: ;
    bVar1 = F_00e3f450(this_00 GEN_EDX_ARG,param_2,param_3,param_4);
    if (bVar1 != 0) {
      F_00c2bcc0(this GEN_EDX_ARG,param_5);
      F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
      return 1;
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
LAB_00c2cd92: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2cdb0 */
GEN_FRAME byte GEN_THISCALL F_00c2cdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_FWD);
    return 0;
  }
  if (param_5 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x64))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,((byte *)(gen_frame + 0x8)) + 8);
    F_0042c880(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0xc4)) = 0x32c9;
    ((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x10))(param_4 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x64)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
    return 1;
  }
  F_00c2c7a0(this GEN_EDX_ARG,param_4,param_5);
  this_00 = *(undefined * PTR32 *)(param_5 + 100);
  *(int * PTR32 *)(param_5 + 0x68) = param_4;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cf08;
  bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
  if (bVar1 == 0) goto LAB_00c2cf08;
  ((byte *)(gen_frame + 0x8))[4] = 2;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG,param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c210(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) GEN_EDX_ARG,param_1);
    bVar1 = F_00e3edd0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
      goto LAB_00c2cf22;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2cf22: ;
    bVar1 = F_00e3f450(this_00 GEN_EDX_ARG,param_2,param_3,param_4);
    if (bVar1 != 0) {
      F_00c2bcc0(this GEN_EDX_ARG,param_5);
      F_0042c880(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
      return 1;
    }
  }
  F_0042c880(((byte *)(gen_frame + 0x8)) + 8 GEN_EDX_ARG);
LAB_00c2cf08: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2cf70 */
GEN_NOFRAME byte GEN_THISCALL F_00c2cf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0x10)) = 6;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
      F_0042cc20(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)));
      F_0042c880(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x10))(param_4 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      bVar1 = 1;
      goto LAB_00c2d083;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0x78)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x70)) = param_2;
        (*(undefined4 *)(gen_frame + 0x74)) = param_3;
        (*(undefined1 *)(gen_frame + 0x79)) = 0;
        bVar1 = F_00e40d30(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)),param_4);
        if (bVar1 != 0) {
          F_00c2bcc0(this GEN_EDX_ARG,param_5);
          bVar1 = 1;
          goto LAB_00c2d083;
        }
      }
    }
  }
  bVar1 = 0;
LAB_00c2d083: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2d0a0 */
GEN_NOFRAME byte GEN_THISCALL F_00c2d0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0x10)) = 6;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
      F_0042cc20(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)));
      F_0042c880(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x10))(param_4 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      bVar1 = 1;
      goto LAB_00c2d1b3;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0x78)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x70)) = param_2;
        (*(undefined4 *)(gen_frame + 0x74)) = param_3;
        (*(undefined1 *)(gen_frame + 0x79)) = 1;
        bVar1 = F_00e40d30(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)),param_4);
        if (bVar1 != 0) {
          F_00c2bcc0(this GEN_EDX_ARG,param_5);
          bVar1 = 1;
          goto LAB_00c2d1b3;
        }
      }
    }
  }
  bVar1 = 0;
LAB_00c2d1b3: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2d1d0 */
GEN_FRAME byte GEN_THISCALL F_00c2d1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0xb4)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0xbc)) = 6;
      ((undefined4 *)(gen_frame + 0xb4))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x114)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x10))(param_4 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0xb4)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
      return 1;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
        F_0042b630(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
        ((undefined1 *)(gen_frame + 0x58))[0] = (undefined1)param_1;
        (*(undefined2 *)(gen_frame + 0x5a)) = 0;
        (*(undefined4 *)(gen_frame + 0x60)) = param_2;
        (*(undefined4 *)(gen_frame + 0x64)) = param_3;
        (*(undefined8 *)(gen_frame + 0x68)) = 0;
        F_0042aca0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
        F_0042aca0(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
        if (*(int *)((int)this + 0x29c) == 0) {
          uVar2 = F_00406b90(8,0,0);
          if (uVar2 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = F_00c2bda0(uVar2 GEN_EDX_ARG,this);
          }
          *(uint *)((int)this + 0x29c) = uVar2;
        }
        bVar1 = F_00e3f950(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)),*(undefined4 *)((int)this + 0x29c));
        if (bVar1 != 0) {
          *(int * PTR32 *)((int)this + 0x304) = param_4;
          F_00427f00((undefined *)((int)this + 0x2e8) GEN_EDX_ARG);
          F_00c2bcc0(this GEN_EDX_ARG,param_5);
          F_0042c880(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
          return 1;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0xc4)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2d3b0 */
GEN_NOFRAME byte GEN_THISCALL F_00c2d3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_4 + 0x10))(param_4 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG);
      bVar1 = 1;
      goto LAB_00c2d54d;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        (*(undefined8 *)(gen_frame + 0x8)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = (undefined2)param_3;
        (*(undefined4 *)(gen_frame + 0x0)) = 1;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_2);
        F_0042ccf0(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,(int)this + 0x1d8);
        F_00e3f250(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00 GEN_EDX_ARG,param_4);
        if (bVar1 != 0) {
          F_00c2bcc0(this GEN_EDX_ARG,param_5);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          bVar1 = 1;
          goto LAB_00c2d54d;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  bVar1 = 0;
LAB_00c2d54d: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2d570 */
GEN_NOFRAME byte GEN_THISCALL F_00c2d570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2d570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x2b8)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0x2c0)) = 6;
      ((undefined4 *)(gen_frame + 0x2b8))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x2c4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x320)));
      F_0042c880(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x318)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_5 + 0x10))(param_5 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x2b8)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x2c4)) GEN_EDX_ARG);
      bVar1 = 1;
      goto LAB_00c2d71b;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 2;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042cc20(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x320)));
        F_0042c880(((undefined1 *)(gen_frame + 0x320)) GEN_EDX_ARG);
        F_0090e260(((undefined1 *)(gen_frame + 0x1d8)) GEN_EDX_ARG,param_4);
        F_00e3f250(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00 GEN_EDX_ARG,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this GEN_EDX_ARG,param_6);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          bVar1 = 1;
          goto LAB_00c2d71b;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  bVar1 = 0;
LAB_00c2d71b: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2d730 */
GEN_NOFRAME byte GEN_THISCALL F_00c2d730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2d730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_7 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_6 + 0x10))(param_6 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG);
      bVar1 = 1;
      goto LAB_00c2d8c3;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_6,param_7);
    this_00 = *(undefined * PTR32 *)(param_7 + 100);
    *(int * PTR32 *)(param_7 + 0x68) = param_6;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 7;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_4);
        F_00c2b050(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,param_5);
        F_00e3f250(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00 GEN_EDX_ARG,param_6);
        if (bVar1 != 0) {
          F_00c2bcc0(this GEN_EDX_ARG,param_7);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          bVar1 = 1;
          goto LAB_00c2d8c3;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  bVar1 = 0;
LAB_00c2d8c3: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2d8e0 */
GEN_NOFRAME byte GEN_THISCALL F_00c2d8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2d8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_5 + 0x10))(param_5 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG);
      bVar1 = 1;
      goto LAB_00c2da64;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 4;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_4);
        F_00e3f250(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00 GEN_EDX_ARG,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this GEN_EDX_ARG,param_6);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          bVar1 = 1;
          goto LAB_00c2da64;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  bVar1 = 0;
LAB_00c2da64: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2da80 */
GEN_NOFRAME byte GEN_THISCALL F_00c2da80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2da80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_5 + 0x10))(param_5 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG);
      bVar1 = 1;
      goto LAB_00c2dc04;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 3;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_4);
        F_00e3f250(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00 GEN_EDX_ARG,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this GEN_EDX_ARG,param_6);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          bVar1 = 1;
          goto LAB_00c2dc04;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  bVar1 = 0;
LAB_00c2dc04: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2dc20 */
GEN_NOFRAME byte GEN_THISCALL F_00c2dc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2dc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_7 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)) GEN_EDX_FWD);
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((GEN_TCODE *)*(gen_code32 *)(*param_6 + 0x10))(param_6 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)) GEN_EDX_ARG);
      bVar1 = 1;
      goto LAB_00c2ddad;
    }
    F_00c2c7a0(this GEN_EDX_ARG,param_6,param_7);
    this_00 = *(undefined * PTR32 *)(param_7 + 100);
    *(int * PTR32 *)(param_7 + 0x68) = param_6;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00 GEN_EDX_ARG);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        (*(undefined1 *)(gen_frame + 0x5)) = (undefined1)param_4;
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 6;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_5);
        F_00e3f250(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00 GEN_EDX_ARG,param_6);
        if (bVar1 != 0) {
          F_00c2bcc0(this GEN_EDX_ARG,param_7);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          bVar1 = 1;
          goto LAB_00c2ddad;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
  }
  bVar1 = 0;
LAB_00c2ddad: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2de40 */
GEN_FRAME uint GEN_THISCALL F_00c2de40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2de40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2de50 */
GEN_FRAME byte GEN_THISCALL F_00c2de50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2de50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c2de80 */
GEN_FRAME uint GEN_THISCALL F_00c2de80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2de80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00c2deb0 */
GEN_FRAME uint GEN_THISCALL F_00c2deb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2deb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2dec0 */
GEN_FRAME uint GEN_THISCALL F_00c2dec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dec0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2ded0 */
GEN_FRAME uint GEN_STDCALL F_00c2ded0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ded0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00c2df20 */
GEN_FRAME byte GEN_THISCALL F_00c2df20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2df20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c2df40 */
GEN_NOFRAME uint GEN_THISCALL F_00c2df40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2df40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00c2df60 */
GEN_NOFRAME uint GEN_THISCALL F_00c2df60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2df60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00c2df80 */
GEN_FRAME uint F_00c2df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2df80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c2dfc0 */
GEN_FRAME uint GEN_STDCALL F_00c2dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c2dfe0 */
GEN_FRAME uint F_00c2dfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)0x0;
  if (param_2 != 0) {
    pvVar1 = F_00c48350(param_1,0,param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_00c2e000 */
GEN_FRAME uint F_00c2e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e000u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2e020 */
GEN_FRAME uint F_00c2e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2e050 */
GEN_FRAME unsigned int GEN_THISCALL F_00c2e050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  int * piVar1;
  double dVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    F_00c31370(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_FWD);
    F_01050b60(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    this_00 = *(undefined * PTR32 *)((int)this + 0x28c);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x1c)) = 0;
    bVar5 = F_00c31330(this_00 GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    while (bVar5 != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 0x2a4);
      if (piVar1 != (int *)0x0) {
        if ((*(int *)(gen_frame + 0x18)) == 0) {
          uVar8 = 0;
          uVar6 = 0;
        }
        else {
          uVar8 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x14);
          uVar6 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x24);
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,uVar8,uVar6);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
      bVar5 = F_00c31330(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
    if ((char)param_1 != '\0') {
      uVar7 = F_00c31550(*(undefined4 *)((int)this + 0x28c) GEN_EDX_ARG);
      fVar9 = (float10)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar9 = fVar9 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar10 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar10 = fVar10 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar3 = (GEN_X87MATH((((double)GEN_TOD(((fVar9 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar10)))),0xe));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 4)) = gen_x87_cw | 0xc00;
      (*(longlong *)(gen_frame + 0x24)) = (longlong)TRUNC(dVar3);
      lVar4 = (*(longlong *)(gen_frame + 0x24));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 0)) = (undefined4)(longlong)TRUNC(dVar3);
      *(undefined4 *)((int)this + 0x360) = (undefined4)(*(longlong *)(gen_frame + 0x24));
      (*(longlong *)(gen_frame + 0x24)) = lVar4;
      uVar7 = F_00c31560(*(undefined4 *)((int)this + 0x28c) GEN_EDX_ARG);
      fVar9 = (float10)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar9 = fVar9 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar10 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar10 = fVar10 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar3 = (GEN_X87MATH((((double)GEN_TOD(((fVar9 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar10)))),0xe));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 4)) = gen_x87_cw | 0xc00;
      (*(longlong *)(gen_frame + 0x24)) = (longlong)TRUNC(dVar3);
      lVar4 = (*(longlong *)(gen_frame + 0x24));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 0)) = (undefined4)(longlong)TRUNC(dVar3);
      *(undefined4 *)((int)this + 0x364) = (undefined4)(*(longlong *)(gen_frame + 0x24));
      (*(longlong *)(gen_frame + 0x24)) = lVar4;
      F_00c31570(*(undefined4 *)((int)this + 0x28c) GEN_EDX_ARG);
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return;
}

/* ref: FUN_00c2e1f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c2e1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x288);
  if (this_00 != (undefined *)0x0) {
    (*(undefined8 *)(gen_frame + 0x1c)) = 0;
    (*(undefined8 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x2c)) = 0;
    (*(undefined8 *)(gen_frame + 0x34)) = 0;
    F_00c30dd0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
    *param_1 = (*(undefined4 *)(gen_frame + 0xc));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x18));
    param_1[4] = (undefined4)(*(undefined8 *)(gen_frame + 0x1c));
    param_1[5] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1c)) + 4));
    param_1[6] = (undefined4)(*(undefined8 *)(gen_frame + 0x24));
    param_1[7] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x24)) + 4));
    param_1[8] = (undefined4)(*(undefined8 *)(gen_frame + 0x2c));
    param_1[9] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c)) + 4));
    param_1[10] = (undefined4)(*(undefined8 *)(gen_frame + 0x34));
    param_1[0xb] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x34)) + 4));
  }
  return 0;
}

/* ref: FUN_00c2e290 */
GEN_FRAME byte GEN_THISCALL F_00c2e290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2e290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00c2d3b0(this GEN_EDX_FWD,0,param_1,param_2,param_3,param_4);
  return bVar1;
}

/* ref: FUN_00c2e2b0 */
GEN_FRAME byte GEN_THISCALL F_00c2e2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2e2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
  bVar1 = F_00c2d730(this GEN_EDX_ARG,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),param_4,param_5,param_6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00c2e320 */
GEN_FRAME uint GEN_THISCALL F_00c2e320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c2e330 */
GEN_FRAME uint GEN_THISCALL F_00c2e330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c2e340 */
GEN_FRAME byte GEN_THISCALL F_00c2e340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c2e360 */
GEN_FRAME uint GEN_THISCALL F_00c2e360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c2e370 */
GEN_FRAME uint GEN_THISCALL F_00c2e370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c2e380 */
GEN_FRAME uint GEN_THISCALL F_00c2e380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e380u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00c2e3a0 */
GEN_FRAME uint GEN_STDCALL F_00c2e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c2e3c0 */
GEN_FRAME byte GEN_THISCALL F_00c2e3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c2e3f0 */
GEN_FRAME uint F_00c2e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)0x0;
  if (param_2 != 0) {
    pvVar1 = F_00c48350(param_1,0,param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_00c2e410 */
GEN_FRAME uint F_00c2e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c2e430 */
GEN_FRAME uint GEN_STDCALL F_00c2e430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2e460 */
GEN_FRAME uint GEN_STDCALL F_00c2e460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2e490 */
GEN_NOFRAME uint GEN_THISCALL F_00c2e490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2e490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x298);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar5 = (int *)*piVar1;
    if (piVar5 != (int *)piVar1[1]) {
      do {
        if ((*piVar5 != 0) && (pvVar2 = *(undefined * PTR32 *)(*piVar5 + 100), pvVar2 != (undefined *)0x0)) {
          F_00c31c30(pvVar2 GEN_EDX_FWD);
          puVar3 = *(undefined4 * PTR32 *)(*piVar5 + 100);
          if (puVar3 != (undefined4 *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
          }
          *(undefined4 *)(*piVar5 + 100) = 0;
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 4))));
    }
    uVar4 = F_00e3c600(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_ARG);
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x298);
    if (pvVar2 != (undefined *)0x0) {
      F_00e3c590(pvVar2 GEN_EDX_ARG);
      uVar4 = F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x298) = 0;
  }
  return uVar4;
}

/* ref: FUN_00c2e520 */
GEN_FRAME uint GEN_THISCALL F_00c2e520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2e520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c2e570 */
GEN_NOFRAME uint GEN_THISCALL F_00c2e570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2e570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00c2e5a0 */
GEN_FRAME uint GEN_THISCALL F_00c2e5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)this) < param_1) {
    uVar3 = 0;
    if ((param_1 != 0) && (uVar3 = F_004069f0(param_1), uVar3 == 0)) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
    F_00c46e20(uVar3,*(int *)this,*(int *)((int)this + 4) - *(int *)this);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = uVar3 + param_1;
    *(uint *)((int)this + 4) = uVar3 + (iVar2 - iVar1);
  }
  return param_1;
}

/* ref: FUN_00c2e640 */
GEN_FRAME uint GEN_THISCALL F_00c2e640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar3 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = uVar3;
    *(uint *)((int)this + 4) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00c2e6f0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2e6f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2e6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00c2e720 */
GEN_FRAME uint GEN_THISCALL F_00c2e720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00c2e5a0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00c2e5a0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00c2e780 */
GEN_FRAME uint GEN_THISCALL F_00c2e780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00c2e640(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00c2e640(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00c2e7f0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2e7f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2e7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x290) != (undefined *)0x0) {
    F_00c31c30(*(undefined * PTR32 *)((int)this + 0x290) GEN_EDX_FWD);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x290);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
    *(undefined4 *)((int)this + 0x290) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x358) = 0;
    *(undefined4 *)((int)this + 0x35c) = 0;
    F_00c30870(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_ARG);
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x288);
    if (pvVar2 != (undefined *)0x0) {
      F_00c31190(pvVar2 GEN_EDX_ARG);
      F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x288) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x360) = 0;
    *(undefined4 *)((int)this + 0x364) = 0;
    F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG);
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x28c);
    if (pvVar2 != (undefined *)0x0) {
      F_00c318c0(pvVar2 GEN_EDX_ARG);
      F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x28c) = 0;
  }
  uVar3 = F_004cc540(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c2e8b0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2e8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2e8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00c2e8e0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2e8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2e8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: Global::FinishLogout */
GEN_FRAME uint GEN_THISCALL F_00c2e910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2e910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  F_00c30870(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD);
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG);
  }
  uVar1 = *(undefined4 *)((int)this + 0x2a4);
  piVar2 = *(int * PTR32 *)((int)this + 0x2ac);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x2a8);
  F_00c2e7f0(this GEN_EDX_ARG);
  bVar3 = F_00c2b160(this GEN_EDX_ARG,uVar1);
  uVar4 = CONCAT31(extraout_var,bVar3);
  *(undefined4 *)((int)this + 0x2a8) = (*(undefined4 *)(gen_frame + 0x8));
  *(int * PTR32 *)((int)this + 0x2ac) = piVar2;
  if (piVar2 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar4;
}

/* ref: FUN_00c2e990 */
GEN_FRAME byte GEN_THISCALL F_00c2e990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2e990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  __time64_t _Var5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (param_4 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_FWD);
    (*(undefined4 *)(gen_frame + 0x5c)) = 6;
    ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d5;
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
    ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x10))(param_3 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x54)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
    return 1;
  }
  if ((**(char * PTR32 *)(param_4 + 8) != '\0') && (0 < *(int *)(param_4 + 4))) {
    uVar1 = *(undefined4 *)((int)this + 0x2a8);
    uVar2 = *(undefined4 *)((int)this + 0x2ac);
    uVar3 = *(undefined4 *)((int)this + 0x2a4);
    F_00c2e7f0(this GEN_EDX_ARG);
    F_00c2b160(this GEN_EDX_ARG,uVar3);
    *(undefined4 *)((int)this + 0x2a8) = uVar1;
    *(undefined4 *)((int)this + 0x2ac) = uVar2;
    if (*(undefined * PTR32 *)(param_4 + 100) != (undefined *)0x0) {
      F_00c31c30(*(undefined * PTR32 *)(param_4 + 100) GEN_EDX_ARG);
      puVar4 = *(undefined4 * PTR32 *)(param_4 + 100);
      if (puVar4 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
      }
      *(undefined4 *)(param_4 + 100) = 0;
    }
    *(undefined1 *)(param_4 + 0x70) = 1;
    *(undefined4 *)(param_4 + 0x94) = param_2;
    *(undefined4 *)(param_4 + 0x90) = param_1;
    *(int * PTR32 *)(param_4 + 0x68) = param_3;
    _Var5 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)(param_4 + 0x78) = (int)_Var5;
    uVar6 = F_00427d90();
    *(ulonglong *)(param_4 + 0x80) = uVar6;
    uVar6 = F_00427e30();
    *(ulonglong *)(param_4 + 0x88) = uVar6;
    *(undefined4 *)((int)this + 0x304) = 0;
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c2eb30 */
GEN_FRAME uint GEN_THISCALL F_00c2eb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2eb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  gen_size32 _Size;
  
  iVar2 = *(int *)((int)this + 4);
  uVar3 = *(uint *)this;
  if (param_1 < iVar2 - uVar3) {
    iVar1 = uVar3 + param_1;
    if (iVar1 != iVar2) {
      uVar3 = F_00c46e20(iVar1,iVar2,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar2 - uVar3 < param_1) {
    F_00c2e720(this GEN_EDX_ARG,(uVar3 - iVar2) + param_1);
    _Size = (*(int *)this - (int)*(undefined * PTR32 *)((int)this + 4)) + param_1;
    if (_Size != 0) {
      F_00c48350(*(undefined * PTR32 *)((int)this + 4),0,_Size);
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar3;
}

/* ref: FUN_00c2eba0 */
GEN_FRAME uint GEN_THISCALL F_00c2eba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c2e780(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c2e780(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00c2ec50 */
GEN_NOFRAME uint GEN_THISCALL F_00c2ec50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2ec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004cc540(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c2ec70 */
GEN_FRAME uint GEN_THISCALL F_00c2ec70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ec70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x66);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  F_0042cbc0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,param_1 + 1);
  *(undefined4 *)((int)this + 0x70) = param_1[0x16];
  F_0042cbc0((undefined *)((int)this + 0x74) GEN_EDX_ARG,param_1 + 0x17);
  *(undefined4 *)((int)this + 200) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x2d];
  *(undefined4 *)((int)this + 0xd0) = param_1[0x2e];
  *(undefined4 *)((int)this + 0xd4) = param_1[0x2f];
  F_0042cbc0((undefined *)((int)this + 0xd8) GEN_EDX_ARG,param_1 + 0x30);
  F_0042cbc0((undefined *)((int)this + 300) GEN_EDX_ARG,param_1 + 0x45);
  *(undefined4 *)((int)this + 0x180) = param_1[0x5a];
  F_0042cbc0((undefined *)((int)this + 0x184) GEN_EDX_ARG,param_1 + 0x5b);
  F_0042cbc0((undefined *)((int)this + 0x1d8) GEN_EDX_ARG,param_1 + 0x70);
  F_0042cbc0((undefined *)((int)this + 0x22c) GEN_EDX_ARG,param_1 + 0x85);
  *(undefined1 *)((int)this + 0x280) = *(undefined1 *)(param_1 + 0x9b);
  *(undefined4 *)((int)this + 0x284) = param_1[0x9a];
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined1 *)((int)this + 0x2b8) = 0;
  F_00a1af40((undefined *)((int)this + 0x2c0) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0x1e;
  F_00a1af40((undefined *)((int)this + 0x2e8) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x300) = 0x1e;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x30c) = (int)_Var3;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  F_00a1af40((undefined *)((int)this + 800) GEN_EDX_ARG);
  *(undefined1 *)((int)this + 0x338) = 0;
  F_00a1af40((undefined *)((int)this + 0x340) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  F_00a1af40((undefined *)((int)this + 0x368) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x380) = 3000;
  *(undefined4 *)((int)this + 900) = 0;
  F_00a1af40((undefined *)((int)this + 0x388) GEN_EDX_ARG);
  F_00a1af40((undefined *)((int)this + 0x3a0) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x3b8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x3b8), REFG(float, 0x10916ec));
  *(undefined1 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = param_1[0x9c];
  *(undefined4 *)((int)this + 0x3c8) = param_1[0x9d];
  *(undefined4 *)((int)this + 0x3cc) = param_1[0x9e];
  *(undefined4 *)((int)this + 0x3d0) = param_1[0x9f];
  F_00a1af40((undefined *)((int)this + 0x3d8) GEN_EDX_ARG);
  uVar2 = F_00ba7c10();
  if ((int)uVar2 < 0) {
    *(undefined1 *)((int)this + 0x2a1) = 1;
  }
  return (uint)this;
}

/* ref: FUN_00c2ef00 */
GEN_NOFRAME uint GEN_THISCALL F_00c2ef00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x29c);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x29c) = 0;
  }
  F_00c2e490(this GEN_EDX_ARG);
  F_00c2e7f0(this GEN_EDX_ARG);
  F_00bacd70();
  F_0042c880((undefined *)((int)this + 0x22c) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1d8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x184) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 300) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xd8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x74) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1c) GEN_EDX_ARG);
  F_004cc540(this GEN_EDX_ARG);
  uVar2 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar2;
}

/* ref: FUN_00c2efa0 */
GEN_FRAME uint GEN_THISCALL F_00c2efa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2efa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  *(undefined1 *)((int)this + 0x2a0) = 1;
  uVar4 = param_1;
  if (0 < param_2) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,(int)this + 0x184);
    F_01046b00(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    uVar1 = REFG(undefined4, 0x108cc50);
    uVar4 = F_0042a990(param_1 GEN_EDX_ARG);
    F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,uVar4,uVar1);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0xb0)) = (short)param_2;
    if (**(char * PTR32 *)((int)this + 300) != '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
      uVar4 = F_0042bba0((undefined *)((int)this + 300) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0xb4)) = 0;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,&REFG(undefined, 0x110f84c),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042bba0((undefined *)((int)this + 300) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
        if (uVar4 == 0) {
          (*(undefined4 *)(gen_frame + 0xb4)) = 2;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,"RUDP2",REFG(undefined4, 0x108cc50));
          uVar4 = F_0042bba0((undefined *)((int)this + 300) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
          F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
          if (uVar4 == 0) {
            (*(undefined4 *)(gen_frame + 0xb4)) = 3;
          }
        }
      }
    }
    if (param_3 != 0) {
      F_00c472af(((undefined1 *)(gen_frame + 0x128)),0x20,&REFG(undefined, 0x110f840),param_3);
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x128)),REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
    }
    uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_00c2eb30(((int *)(gen_frame + 0xbc)) GEN_EDX_ARG,uVar4 + 1);
    iVar2 = ((int *)(gen_frame + 0xbc))[0];
    uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    iVar5 = uVar4 + 1;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_00c46aa0(iVar2,uVar4,iVar5);
    (*(undefined2 *)(gen_frame + 0xba)) = 0x14d;
    (*(undefined4 *)(gen_frame + 0xcc)) = *(undefined4 *)((int)this + 0x3c4);
    (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)((int)this + 0x3c8);
    if (*(int *)((int)this + 0x288) == 0) {
      pvVar6 = (undefined *)F_00406b90(0x7c,0,0);
      if (pvVar6 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00c31240(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
      }
      *(uint *)((int)this + 0x288) = uVar4;
    }
    if (((int *)(gen_frame + 0xbc))[0] != 0) {
      F_00406ad0(((int *)(gen_frame + 0xbc))[0]);
    }
    ((int *)(gen_frame + 0xbc))[0] = 0;
    ((int *)(gen_frame + 0xbc))[1] = 0;
    ((int *)(gen_frame + 0xbc))[2] = 0;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar4 = (uint)uVar7;
  }
  if (*(undefined * PTR32 *)((int)this + 0x288) == (undefined *)0x0) {
LAB_00c2f23a: ;
    if ((0 < param_2) && (*(char *)((int)this + 0x280) != '\0')) {
      F_0042cbc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,(int)this + 0x184);
      F_00e35070(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      uVar1 = REFG(undefined4, 0x108cc50);
      uVar4 = F_0042a990(param_1 GEN_EDX_ARG);
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,uVar4,uVar1);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
      (*(undefined2 *)(gen_frame + 0xb0)) = (short)param_2;
      if (**(char * PTR32 *)((int)this + 300) != '\0') {
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042bba0((undefined *)((int)this + 300) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
        if (uVar4 == 0) {
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,&REFG(undefined, 0x110f84c),REFG(undefined4, 0x108cc50));
          uVar4 = F_0042bba0((undefined *)((int)this + 300) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
          F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
          if (uVar4 == 0) {
            (*(undefined4 *)(gen_frame + 0xb4)) = 2;
          }
          else {
            F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,"RUDP2",REFG(undefined4, 0x108cc50));
            uVar4 = F_0042bba0((undefined *)((int)this + 300) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
            F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
            if (uVar4 == 0) {
              (*(undefined4 *)(gen_frame + 0xb4)) = 3;
            }
          }
        }
      }
      if (param_3 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x128)),0x20,&REFG(undefined, 0x110f840),param_3);
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x128)),REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
      }
      uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      F_00c2eb30(((int *)(gen_frame + 0xbc)) GEN_EDX_ARG,uVar4 + 1);
      iVar2 = ((int *)(gen_frame + 0xbc))[0];
      uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      iVar5 = uVar4 + 1;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      F_00c46aa0(iVar2,uVar4,iVar5);
      (*(undefined2 *)(gen_frame + 0xba)) = 0x14d;
      (*(undefined4 *)(gen_frame + 0xcc)) = *(undefined4 *)((int)this + 0x3cc);
      (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)((int)this + 0x3d0);
      if (*(int *)((int)this + 0x28c) == 0) {
        pvVar6 = (undefined *)F_00406b90(0x7c,0,0);
        if (pvVar6 == (undefined *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = F_00c31970(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
        }
        *(uint *)((int)this + 0x28c) = uVar4;
      }
      if (((int *)(gen_frame + 0xbc))[0] != 0) {
        F_00406ad0(((int *)(gen_frame + 0xbc))[0]);
      }
      ((int *)(gen_frame + 0xbc))[0] = 0;
      ((int *)(gen_frame + 0xbc))[1] = 0;
      ((int *)(gen_frame + 0xbc))[2] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      uVar4 = (uint)uVar7;
    }
    if (*(undefined * PTR32 *)((int)this + 0x28c) == (undefined *)0x0) goto LAB_00c2f49b;
    bVar3 = F_00c312d0(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG);
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) goto LAB_00c2f49b;
  }
  else {
    bVar3 = F_00c30830(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_ARG);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 != 0) goto LAB_00c2f23a;
  }
  uVar4 = F_00c2e7f0(this GEN_EDX_ARG);
LAB_00c2f49b: ;
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00c2f4b0 */
GEN_FRAME uint GEN_THISCALL F_00c2f4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2f4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x298) == 0) {
    pvVar2 = (undefined *)F_00406b90(0x28,0,0);
    if (pvVar2 == (undefined *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00e3c560(pvVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xd0));
    }
    *(uint *)((int)this + 0x298) = uVar3;
    pvVar2 = (undefined *)F_00406b90(0x98,0,0);
    if (pvVar2 == (undefined *)0x0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = (undefined *)F_00e3bcb0(pvVar2 GEN_EDX_ARG);
    }
    uVar1 = *(undefined4 *)((int)this + 0x18);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
    *(undefined4 *)((int)pvVar2 + 4) = uVar1;
    F_0042ccf0((undefined *)((int)pvVar2 + 8) GEN_EDX_ARG,(int)this + 0x1c);
    uVar3 = F_00e3bd60(*(undefined4 *)((int)this + 0x298) GEN_EDX_ARG);
    *(uint *)((int)pvVar2 + 0x5c) = uVar3;
    F_00c2eba0(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(undefined4 *)((int)this + 0x2dc) = 0;
    pvVar2 = (undefined *)F_00406b90(0x98,0,0);
    if (pvVar2 == (undefined *)0x0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = (undefined *)F_00e3bcb0(pvVar2 GEN_EDX_ARG);
    }
    uVar1 = *(undefined4 *)((int)this + 0x70);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
    *(undefined4 *)((int)pvVar2 + 4) = uVar1;
    F_0042ccf0((undefined *)((int)pvVar2 + 8) GEN_EDX_ARG,(int)this + 0x74);
    uVar3 = F_00e3bd60(*(undefined4 *)((int)this + 0x298) GEN_EDX_ARG);
    *(uint *)((int)pvVar2 + 0x5c) = uVar3;
    F_00c2eba0(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(undefined4 *)((int)this + 0x2e0) = 0;
  }
  puVar4 = (undefined4 *)F_00e3c380(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_ARG);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = param_1;
    return (uint)puVar4;
  }
  puVar4 = (undefined4 *)F_00e3c4e0(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_ARG);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = param_1;
  }
  return (uint)puVar4;
}

/* ref: FUN_00c2f5f0 */
GEN_NOFRAME uint GEN_THISCALL F_00c2f5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2f5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x66);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xd6d2;
  F_0042cc20((undefined *)((int)this + 0x1c) GEN_EDX_ARG,"xiv-0017",REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x70) = 0xd6d2;
  F_0042cc20((undefined *)((int)this + 0x74) GEN_EDX_ARG,"xiv-0017",REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 200) = 0x1e;
  *(undefined4 *)((int)this + 0xcc) = 5;
  *(undefined4 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  F_0042cc20((undefined *)((int)this + 0xd8) GEN_EDX_ARG,"xiv-0017",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 300) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x180) = 0;
  F_0042cc20((undefined *)((int)this + 0x184) GEN_EDX_ARG,"10005",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x1d8) GEN_EDX_ARG,"dev_test",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x22c) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
  *(undefined1 *)((int)this + 0x280) = 1;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined1 *)((int)this + 0x2b8) = 0;
  F_00a1af40((undefined *)((int)this + 0x2c0) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0x1e;
  F_00a1af40((undefined *)((int)this + 0x2e8) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x300) = 0x1e;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x30c) = (int)_Var3;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  F_00a1af40((undefined *)((int)this + 800) GEN_EDX_ARG);
  *(undefined1 *)((int)this + 0x338) = 0;
  F_00a1af40((undefined *)((int)this + 0x340) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  F_00a1af40((undefined *)((int)this + 0x368) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x380) = 3000;
  *(undefined4 *)((int)this + 900) = 0;
  F_00a1af40((undefined *)((int)this + 0x388) GEN_EDX_ARG);
  F_00a1af40((undefined *)((int)this + 0x3a0) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x3b8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x3b8), REFG(float, 0x10916ec));
  *(undefined1 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0x2d;
  *(undefined4 *)((int)this + 0x3c8) = 0x14;
  *(undefined4 *)((int)this + 0x3cc) = 600;
  *(undefined4 *)((int)this + 0x3d0) = 0x14;
  F_00a1af40((undefined *)((int)this + 0x3d8) GEN_EDX_ARG);
  uVar2 = F_00ba7c10();
  if ((int)uVar2 < 0) {
    *(undefined1 *)((int)this + 0x2a1) = 1;
  }
  return (uint)this;
}

/* ref: FUN_00c2f870 */
GEN_FRAME uint GEN_THISCALL F_00c2f870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc2f870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint extraout_EAX_00 = 0;
  uint uVar4;
  __time64_t _Var5;
  ulonglong uVar6;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(uint *)(gen_frame + 0x158)) = uVar3;
  if (*(char *)((int)this + 0x2a0) != '\0') goto LAB_00c2fa5a;
  if (*(int *)((int)this + 0x2b4) == 0) {
    F_00c338f0(*(undefined * PTR32 *)((int)this + 0x290) GEN_EDX_FWD);
    if (*(char *)((int)this + 0x2b8) == '\0') {
      bVar2 = F_00c31cd0(*(undefined4 *)((int)this + 0x290) GEN_EDX_ARG);
      if (bVar2 == 0) {
        bVar2 = F_00c31cf0(*(undefined * PTR32 *)((int)this + 0x290) GEN_EDX_ARG);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 == 0) goto LAB_00c2f9d0;
        bVar2 = F_00c31d00(*(undefined4 *)((int)this + 0x290) GEN_EDX_ARG);
        if (bVar2 == 0) {
          *(int *)((int)this + 0x2d8) = *(int *)((int)this + 0x2d8) + 1;
          if (*(int *)((int)this + 0x2d8) < *(int *)((int)this + 200)) {
            *(undefined1 *)((int)this + 0x2b8) = 1;
            uVar3 = F_00427f00((undefined *)((int)this + 0x2c0) GEN_EDX_ARG);
            goto LAB_00c2f9d0;
          }
        }
        else if (*(int *)((int)this + 0x180) == 0) {
          uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x290) + 0x50c)));
          uVar4 = 0;
          if (200000 < uVar3) {
            uVar4 = uVar3;
          }
          F_0042cc20(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
          F_0042cc20(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
          F_00c2efa0(this GEN_EDX_ARG,*(int *)((int)this + 0x290) + 0x4b4,
                       (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x290) + 0x508))),uVar4,((undefined1 *)(gen_frame + 0xb0)),
                       ((undefined1 *)(gen_frame + 0x104)));
          F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
          F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
          F_00c2efa0(this GEN_EDX_ARG,(int)this + 0xd8,*(undefined4 *)((int)this + 0xd4),0,((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x5c))
                      );
          F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
        }
        F_00c31c30(*(undefined * PTR32 *)((int)this + 0x290) GEN_EDX_ARG);
        puVar1 = *(undefined4 * PTR32 *)((int)this + 0x290);
        uVar3 = extraout_EAX_00;
        if (puVar1 != (undefined4 *)0x0) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
        }
      }
      else {
        F_00c31c30(*(undefined * PTR32 *)((int)this + 0x290) GEN_EDX_ARG);
        puVar1 = *(undefined4 * PTR32 *)((int)this + 0x290);
        uVar3 = extraout_EAX;
        if (puVar1 != (undefined4 *)0x0) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
        }
      }
      *(undefined4 *)((int)this + 0x290) = 0;
    }
    else {
      _Var5 = F_00c4b7c2((__time64_t *)0x0);
      uVar3 = (int)_Var5 - *(int *)((int)this + 0x2c0);
      if (*(uint *)((int)this + 0xcc) < uVar3) {
        F_00c31d30(*(undefined4 *)((int)this + 0x290) GEN_EDX_ARG);
        *(undefined1 *)((int)this + 0x2b8) = 0;
      }
    }
LAB_00c2f9d0: ;
    if (((*(int *)((int)this + 0x290) == 0) && (*(char *)((int)this + 0x2a0) == '\0')) &&
       (*(int *)((int)this + 0x2b4) == 0)) {
      *(undefined4 *)((int)this + 0x2b4) = 1;
    }
  }
  if (*(int *)((int)this + 0x2b4) == 1) {
    F_0042cc20(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
    F_00c2efa0(this GEN_EDX_ARG,(int)this + 0xd8,*(undefined4 *)((int)this + 0xd4),0,((undefined1 *)(gen_frame + 0x104)),((undefined1 *)(gen_frame + 0xb0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG);
    uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG);
    uVar3 = (uint)uVar6;
  }
LAB_00c2fa5a: ;
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Global::ZoneClientUpdate */
GEN_NOFRAME uint GEN_THISCALL F_00c2fb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc2fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc60];
  float fVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  double dVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  __time64_t _Var16;
  ulonglong uVar17;
  
  uVar10 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc50);
  (*(uint *)(gen_frame + 0xc4c)) = uVar10;
  if (*(undefined * PTR32 *)((int)this + 0x288) == (undefined *)0x0) goto LAB_00c302ef;
  F_00c308f0(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_FWD);
  F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x288);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  bVar9 = F_00c30890(pvVar2 GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  while (bVar9 != 0) {
    _Var16 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x388) = (int)_Var16;
    uVar17 = F_00427d90();
    *(ulonglong *)((int)this + 0x390) = uVar17;
    uVar17 = F_00427e30();
    *(ulonglong *)((int)this + 0x398) = uVar17;
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xc));
    if ((*(float *)(gen_frame + 0xc)) == 0.0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
    }
    iVar11 = *(int *)(iVar11 + 8);
    if (*(char *)((int)this + 0x338) == '\0') {
      if (*(uint *)((int)this + 900) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(uint *)((int)this + 900) >> 1;
      }
      *(uint *)((int)this + 0x30c) = uVar10 / 1000 + iVar11;
      *(uint *)((int)this + 0x310) = uVar10 % 1000;
      *(undefined4 *)((int)this + 0x308) = 0;
      _Var16 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 800) = (int)_Var16;
      uVar17 = F_00427d90();
      *(ulonglong *)((int)this + 0x328) = uVar17;
      uVar17 = F_00427e30();
      *(ulonglong *)((int)this + 0x330) = uVar17;
      *(undefined1 *)((int)this + 0x338) = 1;
      _Var16 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 0x3d8) = (int)_Var16;
      uVar17 = F_00427d90();
      *(ulonglong *)((int)this + 0x3e0) = uVar17;
      uVar17 = F_00427e30();
      *(ulonglong *)((int)this + 1000) = uVar17;
    }
    if (*(uint *)((int)this + 900) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)((int)this + 900) >> 1;
    }
    *(uint *)((int)this + 0x308) =
         ((iVar11 - *(int *)((int)this + 0x30c)) * 1000 - *(int *)((int)this + 0x310)) + uVar10;
    if ((*(float *)(gen_frame + 0x1c)) == 0.0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) + 0x14);
    }
    if ((uVar10 & 0x5ff80000) == 0x5ff80000) {
      uVar10 = 0x5ff80002 - ((uVar10 & 1) != 0);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x2a4);
    if (piVar3 != (int *)0x0) {
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG,uVar10,uVar12);
    }
    if ((*(float *)(gen_frame + 0xc)) == 0.0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
    }
    if (*(short *)(iVar11 + 2) == 0x65) {
      uVar17 = F_00427d90();
      uVar10 = (uint)uVar17;
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      uVar4 = *(uint *)(iVar11 + 0x10);
      if (uVar4 < uVar10) {
        iVar11 = uVar10 - uVar4;
      }
      else {
        iVar11 = (uVar10 - uVar4) - 1;
      }
      *(int *)((int)this + 900) = iVar11;
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      if (99 < *(uint *)(iVar11 + 0x14)) {
        if ((*(float *)(gen_frame + 0xc)) == 0.0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
        }
        F_00c30920(*(undefined4 *)((int)this + 0x288) GEN_EDX_ARG,(uint)*(ushort *)(iVar11 + 0x14));
      }
    }
    else if (*(short *)(iVar11 + 2) == 0x19a) {
      piVar3 = *(int * PTR32 *)((int)this + 0x2a8);
      if (piVar3 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
      }
      uVar12 = *(undefined4 *)((int)this + 0x3c0);
      pvVar2 = *(undefined * PTR32 *)((int)this + 0x288);
      (*(undefined4 *)(gen_frame + 0x28)) = 0x69;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x18;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x44)) + 0)) = uVar12;
      (*(undefined8 *)(gen_frame + 0x44)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x44)) + 4)),uVar12);
      F_00c308b0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x28)),0,0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 8) + 0x10))))
              (*(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 8) GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc))));
    (*(float *)(gen_frame + 0xc)) = 0.0;
    bVar9 = F_00c30890(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  uVar17 = F_00427d90();
  iVar13 = (uint)uVar17 - *(uint *)((int)this + 0x3e0);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f(((int)(uVar17 >> 0x20) - *(int *)((int)this + 0x3e4)) -
                         (uint)((uint)uVar17 < *(uint *)((int)this + 0x3e0)));
  _Var16 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x3d8) = (int)_Var16;
  uVar17 = F_00427d90();
  *(ulonglong *)((int)this + 0x3e0) = uVar17;
  uVar17 = F_00427e30();
  *(ulonglong *)((int)this + 1000) = uVar17;
  uVar17 = F_00427e30();
  iVar11 = (uint)uVar17 - *(uint *)((int)this + 0x398);
  uVar10 = ((int)(uVar17 >> 0x20) - *(int *)((int)this + 0x39c)) -
           (uint)((uint)uVar17 < *(uint *)((int)this + 0x398));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar11;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar10 & 0x7fffffff;
  (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar10,iVar11) & 0x7fffffffffffffff;
  fVar14 = (float10)(*(ulonglong *)(gen_frame + 0x20));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar10 & 0x80000000;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
  (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)(uVar10 & 0x80000000) << 0x20;
  if ((float10)*(double *)&REFG(undefined, 0x110f888) <= -(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar14) {
    fVar1 = *(float *)((int)this + 0x3b8);
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar13;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x7fffffff;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))),iVar13) & 0x7fffffffffffffff;
    fVar14 = (float10)(*(ulonglong *)(gen_frame + 0x20));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
    (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000) << 0x20;
    fVar1 = ((float)GEN_TOF(((float10)fVar1 -
                   (-(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar14) / (float10)*(double *)&REFG(undefined, 0x1094560))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    *(float *)((int)this + 0x3b8) = fVar1;
    uVar12 = (undefined4)gen_fl2bits((float)(REFG(float, 0x110f878)));
    if ((double)fVar1 < *(double *)&REFG(undefined, 0x110f880)) {
LAB_00c2ff99: ;
      *(undefined4 *)((int)this + 0x3b8) = uVar12;
    }
  }
  else {
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar13;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x7fffffff;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))),iVar13) & 0x7fffffffffffffff;
    fVar14 = (float10)(*(ulonglong *)(gen_frame + 0x20));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
    (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000) << 0x20;
    fVar1 = ((float)GEN_TOF(((-(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar14) / (float10)*(double *)&REFG(undefined, 0x1094560) +
                   (float10)*(float *)((int)this + 0x3b8))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    *(float *)((int)this + 0x3b8) = fVar1;
    uVar12 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10916ec)));
    if (*(double *)&REFG(undefined, 0x1088118) < (double)fVar1) goto LAB_00c2ff99;
  }
  uVar10 = F_00c30900(*(undefined4 *)((int)this + 0x288) GEN_EDX_ARG);
  if ((int)uVar10 < 4) {
    uVar17 = F_00427d90();
    uVar10 = (uint)uVar17 - *(uint *)((int)this + 0x348);
    iVar11 = ((int)(uVar17 >> 0x20) - *(int *)((int)this + 0x34c)) -
             (uint)((uint)uVar17 < *(uint *)((int)this + 0x348));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = iVar11;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(iVar11,(int)(*(ulonglong *)(gen_frame + 0x20)));
    if ((iVar11 != 0) || (9999 < uVar10)) {
      (*(undefined4 *)(gen_frame + 0x28)) = 0x65;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x28;
      uVar17 = F_00427d90();
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined8 *)(gen_frame + 0x44)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = (int)uVar17;
      (*(undefined8 *)(gen_frame + 0x4c)) = 0;
      if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
        F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x28)),0x65,0);
      }
      _Var16 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 0x340) = (int)_Var16;
      uVar17 = F_00427d90();
      *(ulonglong *)((int)this + 0x348) = uVar17;
      uVar17 = F_00427e30();
      uVar10 = (uint)uVar17;
      *(ulonglong *)((int)this + 0x350) = uVar17;
    }
    if ((char)param_1 != '\0') {
      uVar10 = F_00c30be0(*(undefined4 *)((int)this + 0x288) GEN_EDX_ARG);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar10;
      fVar14 = (float10)(int)uVar10;
      if ((int)uVar10 < 0) {
        fVar14 = fVar14 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar15 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar15 = fVar15 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar7 = (GEN_X87MATH((((double)GEN_TOD(((fVar14 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar15)))),0xe));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 2)) = gen_x87_cw;
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0))));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = gen_x87_cw | 0xc00;
      (*(ulonglong *)(gen_frame + 0x20)) = (longlong)TRUNC(dVar7);
      lVar8 = (*(ulonglong *)(gen_frame + 0x20));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = (int)(longlong)TRUNC(dVar7);
      *(int *)((int)this + 0x358) = (int)(*(ulonglong *)(gen_frame + 0x20));
      (*(ulonglong *)(gen_frame + 0x20)) = lVar8;
      uVar10 = F_00c30bf0(*(undefined4 *)((int)this + 0x288) GEN_EDX_ARG);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar10;
      fVar14 = (float10)(int)uVar10;
      if ((int)uVar10 < 0) {
        fVar14 = fVar14 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar15 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar15 = fVar15 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar7 = (GEN_X87MATH((((double)GEN_TOD(((fVar14 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar15)))),0xe));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 2)) = gen_x87_cw;
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0))));
      uVar12 = *(undefined4 *)((int)this + 0x288);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = gen_x87_cw | 0xc00;
      (*(ulonglong *)(gen_frame + 0x20)) = (longlong)TRUNC(dVar7);
      lVar8 = (*(ulonglong *)(gen_frame + 0x20));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = (int)(longlong)TRUNC(dVar7);
      *(int *)((int)this + 0x35c) = (int)(*(ulonglong *)(gen_frame + 0x20));
      (*(ulonglong *)(gen_frame + 0x20)) = lVar8;
      uVar10 = F_00c30c00(uVar12 GEN_EDX_ARG);
    }
  }
  else {
    uVar10 = F_00c30900(*(undefined4 *)((int)this + 0x288) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar10);
    F_004cd120(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x1c)));
    uVar10 = F_00c31260(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar10);
    F_004cd120(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x1c)));
    _Var16 = F_00c4b7c2((__time64_t *)0x0);
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)_Var16);
    F_004cd120(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x1c)));
    if (*(int *)((int)this + 0x2ac) != 0) {
      uVar10 = F_00c30900(*(undefined4 *)((int)this + 0x288) GEN_EDX_ARG);
      if (uVar10 == 4) {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 1;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = 0x2775;
        (*(ulonglong *)(gen_frame + 0x20)) = 0x277500000001;
      }
      else {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 2;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = 90000;
        (*(ulonglong *)(gen_frame + 0x20)) = 0x15f9000000002;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2ac) + 4))))(*(int * PTR32 *)((int)this + 0x2ac) GEN_EDX_ARG,&(*(ulonglong *)(gen_frame + 0x20)));
    }
    F_00c30870(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_ARG);
    if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
      F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG);
    }
    uVar12 = *(undefined4 *)((int)this + 0x2ac);
    fVar1 = *(float *)((int)this + 0x2a8);
    uVar5 = *(undefined4 *)((int)this + 0x2a4);
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar12;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar12,(int)(*(ulonglong *)(gen_frame + 0x20)));
    *(undefined4 *)((int)this + 0x3b8) = 0;
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    F_00c2e7f0(this GEN_EDX_ARG);
    F_00c2b160(this GEN_EDX_ARG,uVar5);
    *(float *)((int)this + 0x2a8) = (*(float *)(gen_frame + 0x1c));
    *(uint *)((int)this + 0x2ac) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
    uVar10 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  F_01050b70();
LAB_00c302ef: ;
  F_00c47745((*(uint *)(gen_frame + 0xc4c)) ^ (uint)(uint)(gen_frame + 0xc50) GEN_EDX_ARG);
  return uVar10;
}

/* ref: FUN_00c30310 */
GEN_FRAME uint GEN_THISCALL F_00c30310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * pvVar6;
  __time64_t _Var7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar1 = *(int * PTR32 *)((int)this + 0x304);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,0);
  }
  if (*(undefined * PTR32 *)((int)this + 0x298) == (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x294) = 0;
  }
  else {
    F_00e3c330(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_ARG);
    uVar5 = F_00e3c350(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_ARG);
    *(uint *)((int)this + 0x294) = uVar5;
    F_00e3c4d0(*(undefined * PTR32 *)((int)this + 0x298) GEN_EDX_ARG);
  }
  iVar2 = *(int *)((int)this + 0x294);
  if (((iVar2 != 0) && (*(char *)(iVar2 + 0x70) != '\0')) &&
     (_Var7 = F_00c4b7c2((__time64_t *)0x0), 0x1e < (uint)((int)_Var7 - *(int *)(iVar2 + 0x78)))) {
    F_00e3ee60(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x68))),*(int *)((int)this + 0x294));
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x70))) = 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x2b0))) {
  case 0: ;
    iVar2 = *(int *)((int)this + 0x294);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x70) != '\0')) {
      if (*(int *)(iVar2 + 100) == 0) {
        pvVar6 = (undefined *)F_00406b90(0x5c0,0,0);
        if (pvVar6 == (undefined *)0x0) {
          uVar5 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 0x294);
          uVar5 = F_00c31a70(pvVar6 GEN_EDX_ARG,iVar2 + 8,*(undefined4 *)(iVar2 + 4),(int)this + 0x184,iVar2);
        }
        *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + 100))) = uVar5;
      }
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x294) + 100)));
      if ((iVar2 != 0) && (bVar4 = F_00e3e7d0(iVar2 GEN_EDX_ARG), bVar4 == 0)) {
        F_00e37350(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        F_0042ccf0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,*(int *)((int)this + 0x294) + 8);
        iVar2 = *(int *)((int)this + 0x294);
        (*(undefined2 *)(gen_frame + 0x64)) = *(undefined2 *)(iVar2 + 4);
        F_00e3efd0(*(undefined * PTR32 *)(iVar2 + 100) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),*(undefined4 *)(iVar2 + 0x90),
                     *(undefined4 *)(iVar2 + 0x94),*(undefined4 *)(iVar2 + 0x68));
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x70))) = 0;
        F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      }
    }
    if (*(int *)((int)this + 0x290) != 0) {
      *(undefined4 *)((int)this + 0x2b0) = 1;
    }
    break;
  case 1: ;
    F_00c2f870(this GEN_EDX_ARG);
    if (*(char *)((int)this + 0x2a0) != '\0') {
      piVar1 = *(int * PTR32 *)((int)this + 0x304);
      *(undefined4 *)((int)this + 0x2b0) = 3;
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,0);
        *(undefined4 *)((int)this + 0x304) = 0;
        F_00c2e490(this GEN_EDX_ARG);
      }
    }
    break;
  case 2: ;
  case 3: ;
    *(undefined4 *)((int)this + 0x2b0) = 4;
  }
  if ((*(int *)((int)this + 0x294) != 0) &&
     (pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x294) + 100))), pvVar6 != (undefined *)0x0)) {
    F_00c338f0(pvVar6 GEN_EDX_ARG);
  }
  uVar5 = *(uint *)((int)this + 0x2b0);
  if (((0 < (int)uVar5) && (*(char *)((int)this + 0x2a0) != '\0')) && (uVar5 != 5)) {
    _Var7 = F_00c4b7c2((__time64_t *)0x0);
    uVar5 = (int)_Var7 - *(int *)((int)this + 0x2e8);
    if ((*(uint *)((int)this + 0x300) < uVar5) && (*(int *)((int)this + 0x2ac) != 0)) {
      if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
        F_00c30870(*(undefined * PTR32 *)((int)this + 0x288) GEN_EDX_ARG);
      }
      if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
        F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG);
      }
      uVar3 = *(undefined4 *)((int)this + 0x2a4);
      piVar1 = *(int * PTR32 *)((int)this + 0x2ac);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x2a8);
      F_00c2e7f0(this GEN_EDX_ARG);
      F_00c2b160(this GEN_EDX_ARG,uVar3);
      *(undefined4 *)((int)this + 0x2a8) = (*(undefined4 *)(gen_frame + 0xc));
      *(int * PTR32 *)((int)this + 0x2ac) = piVar1;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x2776;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00c305d0 */
GEN_FRAME uint GEN_THISCALL F_00c305d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc305d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c2efa0(this GEN_EDX_FWD,param_1,(uint)*(ushort *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x58),param_1 + 0x5c,param_1 + 0xb0);
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf23 */
GEN_FRAME unsigned int GEN_THISCALL F_00c30600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    F_00c2efa0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD,param_1,(uint)*(ushort *)(param_1 + 0x54),
                 *(undefined4 *)(param_1 + 0x58),param_1 + 0x5c,param_1 + 0xb0);
  }
  return;
}

/* ref: FUN_00c30630 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c30630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = (*(uint *)(gen_frame + 0x4)) >> 8;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
  uVar3 = F_00427d90();
  if (((int)(uVar3 >> 0x20) - *(int *)((int)this + 0x374) !=
       (uint)((uint)uVar3 < *(uint *)((int)this + 0x370))) ||
     (*(uint *)((int)this + 0x380) <= (uint)uVar3 - *(uint *)((int)this + 0x370))) {
    (*(uint *)(gen_frame + 0x4)) = CONCAT31((int3)uVar2,1);
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x368) = (int)_Var4;
    uVar3 = F_00427d90();
    *(ulonglong *)((int)this + 0x370) = uVar3;
    uVar3 = F_00427e30();
    *(ulonglong *)((int)this + 0x378) = uVar3;
  }
  if (*(int *)((int)this + 0x2b0) == 4) {
    F_00c2fb20(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
    if (((*(undefined * PTR32 *)((int)this + 0x28c) == (undefined *)0x0) ||
        (uVar2 = F_00c31990(*(undefined * PTR32 *)((int)this + 0x28c) GEN_EDX_ARG), uVar2 != 0)) &&
       (this_00 = *(undefined * PTR32 *)((int)this + 0x288), this_00 != (undefined *)0x0)) {
      uVar2 = F_00c2aac0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0,0,0,0,0,0,0,0,0,0,0,"client",&REFG(undefined1, 0x107fc63));
      bVar1 = F_00c308b0(this_00 GEN_EDX_ARG,uVar2,0,0);
      if (bVar1 != 0) {
        *(undefined4 *)((int)this + 0x2b0) = 5;
        F_00c2e490(this GEN_EDX_ARG);
      }
    }
  }
  else if (*(int *)((int)this + 0x2b0) == 5) {
    F_00c2fb20(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
    goto LAB_00c30764;
  }
  F_00c30310(this GEN_EDX_ARG);
LAB_00c30764: ;
  F_00bada50();
  uVar3 = F_00427d90();
  if (((int)(uVar3 >> 0x20) - *(int *)((int)this + 0x3ac) !=
       (uint)((uint)uVar3 < *(uint *)((int)this + 0x3a8))) ||
     (99 < (uint)uVar3 - *(uint *)((int)this + 0x3a8))) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x3a0) = (int)_Var4;
    uVar3 = F_00427d90();
    *(ulonglong *)((int)this + 0x3a8) = uVar3;
    uVar3 = F_00427e30();
    *(ulonglong *)((int)this + 0x3b0) = uVar3;
    F_01050d70((undefined *)((int)this + 0x308) GEN_EDX_ARG);
    F_00c2e050(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00c307f0 */
GEN_FRAME uint GEN_THISCALL F_00c307f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc307f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00c30830 */
GEN_NOFRAME byte GEN_THISCALL F_00c30830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(200,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_01047a50(this_00 GEN_EDX_ARG,this);
    *(uint *)((int)this + 0x78) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  return 0;
}

/* ref: FUN_00c30870 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c30870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return;
}

/* ref: FUN_00c30890 */
GEN_FRAME byte GEN_THISCALL F_00c30890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_01047bd0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD,param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c308b0 */
GEN_FRAME byte GEN_THISCALL F_00c308b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc308b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = param_3;
    bVar1 = F_01047820(this_00 GEN_EDX_FWD,param_1,&(*(undefined4 *)(gen_frame + 0x4)));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c308f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c308f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc308f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_01047b20(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00c30900 */
GEN_NOFRAME uint GEN_THISCALL F_00c30900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0xc0)));
}

/* ref: FUN_00c30920 */
GEN_FRAME unsigned int GEN_THISCALL F_00c30920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x78) != 0) {
    F_010477e0(*(int *)(in_ecx + 0x78) GEN_EDX_FWD,param_2);
    return;
  }
  return;
}

/* ref: FUN_00c30990 */
GEN_FRAME unsigned int GEN_THISCALL F_00c30990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *(undefined4 *)((int)this + 0xc) = param_1[3];
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    *(undefined4 *)((int)this + 0x18) = param_1[6];
    *(undefined4 *)((int)this + 0x1c) = param_1[7];
    *(undefined4 *)((int)this + 0x28) = param_1[10];
    *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
    *(undefined4 *)((int)this + 0x20) = param_1[8];
    *(undefined4 *)((int)this + 0x24) = param_1[9];
  }
  return 0;
}

/* ref: FUN_00c30a00 */
GEN_FRAME byte GEN_THISCALL F_00c30a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c30a30 */
GEN_FRAME uint F_00c30a30(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c30a40 */
GEN_FRAME uint F_00c30a40(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30a50 */
GEN_FRAME uint F_00c30a50(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c30a60 */
GEN_FRAME uint F_00c30a60(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c30a70 */
GEN_FRAME uint F_00c30a70(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30a90 */
GEN_FRAME uint GEN_THISCALL F_00c30a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30aa0 */
GEN_FRAME byte GEN_THISCALL F_00c30aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c30ac0 */
GEN_FRAME byte GEN_THISCALL F_00c30ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c30ae0 */
GEN_FRAME uint F_00c30ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c30af0 */
GEN_FRAME uint F_00c30af0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30b00 */
GEN_FRAME uint F_00c30b00(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c30b10 */
GEN_FRAME uint F_00c30b10(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c30b20 */
GEN_FRAME uint F_00c30b20(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30b50 */
GEN_FRAME uint GEN_THISCALL F_00c30b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30b80 */
GEN_FRAME uint F_00c30b80(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30b90 */
GEN_FRAME uint F_00c30b90(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30ba0 */
GEN_NOFRAME uint GEN_THISCALL F_00c30ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  iVar1 = *(int *)((int)this + 0x10a4);
  iVar2 = *(int *)((int)this + 0x10a0);
  iVar3 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x30);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  return ((iVar1 - iVar2) - iVar3) + iVar4;
}

/* ref: FUN_00c30be0 */
GEN_NOFRAME uint GEN_THISCALL F_00c30be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_01044460(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00c30bf0 */
GEN_NOFRAME uint GEN_THISCALL F_00c30bf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_01044480(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00c30c00 */
GEN_NOFRAME uint GEN_THISCALL F_00c30c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc30c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_010444a0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c30c10 */
GEN_FRAME uint GEN_THISCALL F_00c30c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 8);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (param_1 != puVar2) {
    *param_1 = *puVar2;
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x44);
    param_1[9] = puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_00c30cc0 */
GEN_FRAME uint GEN_THISCALL F_00c30cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30ce0 */
GEN_FRAME uint GEN_THISCALL F_00c30ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30d10 */
GEN_FRAME uint F_00c30d10(unsigned int gen_a0)
{
  GEN_ENTER(0xc30d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30d20 */
GEN_FRAME uint F_00c30d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc30d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30d30 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c30d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c30d60 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c30d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00c30dd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c30dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00c30c10(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00c30e90 */
GEN_FRAME uint GEN_THISCALL F_00c30e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30ea0 */
GEN_FRAME uint GEN_THISCALL F_00c30ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30eb0 */
GEN_FRAME uint GEN_THISCALL F_00c30eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c30ef0 */
GEN_FRAME uint GEN_THISCALL F_00c30ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00c30f30 */
GEN_FRAME uint GEN_THISCALL F_00c30f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 8);
  if (param_1 != (undefined4 *)(iVar1 + 0x20)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x20);
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    param_1[9] = *(undefined4 *)(iVar1 + 0x44);
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)(uVar2 + 0x20) = 0;
  *(undefined4 *)(uVar2 + 0x24) = 0;
  *(undefined4 *)(uVar2 + 0x28) = 0;
  *(undefined4 *)(uVar2 + 0x2c) = 0;
  *(undefined4 *)(uVar2 + 0x30) = 0;
  *(undefined4 *)(uVar2 + 0x34) = 0;
  *(undefined4 *)(uVar2 + 0x38) = 0;
  *(undefined4 *)(uVar2 + 0x3c) = 0;
  *(undefined4 *)(uVar2 + 0x48) = 0;
  *(undefined4 *)(uVar2 + 0x4c) = 0;
  *(undefined4 *)(uVar2 + 0x40) = 0;
  *(undefined4 *)(uVar2 + 0x44) = 0;
  return uVar2;
}

/* ref: FUN_00c30fc0 */
GEN_FRAME uint GEN_THISCALL F_00c30fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c30fd0 */
GEN_FRAME uint GEN_THISCALL F_00c30fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc30fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c30fe0 */
GEN_FRAME uint GEN_THISCALL F_00c30fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c31050 */
GEN_FRAME uint GEN_THISCALL F_00c31050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00c310c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c310c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc310c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00c30f30(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00c310e0 */
GEN_FRAME uint GEN_THISCALL F_00c310e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc310e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  piVar2 = (int *)F_00c30fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return uVar1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c31130 */
GEN_FRAME uint GEN_THISCALL F_00c31130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  F_00c31050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c31190 */
GEN_NOFRAME uint GEN_THISCALL F_00c31190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar2 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00c311d0 */
GEN_FRAME uint GEN_THISCALL F_00c311d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc311d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_FWD);
  piVar1 = (int *)F_00c30fe0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c31130(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c31240 */
GEN_FRAME uint GEN_THISCALL F_00c31240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_01046cd0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x78) = 0;
  return (uint)this;
}

/* ref: FUN_00c31260 */
GEN_NOFRAME uint GEN_THISCALL F_00c31260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_00c311d0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD);
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x20) != 0) {
        return *((uint *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8)));
      }
      return *(uint *)(uVar1 + 0x1c);
    }
  }
  return 0;
}

/* ref: FUN_00c312d0 */
GEN_NOFRAME byte GEN_THISCALL F_00c312d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc312d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xc4,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00e28fa0(this_00 GEN_EDX_ARG,this);
    *(uint *)((int)this + 0x78) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  return 0;
}

/* ref: FUN_00c31310 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c31310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return;
}

/* ref: FUN_00c31330 */
GEN_FRAME byte GEN_THISCALL F_00c31330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_00e290e0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD,param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c31350 */
GEN_FRAME byte GEN_THISCALL F_00c31350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_00e28d90(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD,param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c31370 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c31370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00e29060(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00c313b0 */
GEN_FRAME byte GEN_THISCALL F_00c313b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc313b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c313d0 */
GEN_FRAME uint F_00c313d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c313e0 */
GEN_FRAME uint F_00c313e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c313f0 */
GEN_FRAME uint F_00c313f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31400 */
GEN_FRAME uint F_00c31400(unsigned int gen_a0)
{
  GEN_ENTER(0xc31400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c31410 */
GEN_FRAME uint F_00c31410(unsigned int gen_a0)
{
  GEN_ENTER(0xc31410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31430 */
GEN_FRAME uint GEN_THISCALL F_00c31430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31440 */
GEN_FRAME byte GEN_THISCALL F_00c31440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

