#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00bd7a90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd7a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1107cd4));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: FUN_00bd7ad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd7ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bd7b11;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bd7afc;
  }
  else {
LAB_00bd7afc: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bd7b11: ;
  if (((iVar3 != 0) && (*((char *)GEN_TOP((iVar3 + 0x12))) == '\0')) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd7b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd7b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_FWD)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd7b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 0;
  return;
}

/* ref: FUN_00bd7b90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd7b90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbd7b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,param_1,0,0)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd7bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 0;
  *((ushort *)GEN_TOP((in_ecx + 0x7c))) = *((ushort *)GEN_TOP((in_ecx + 0x7c))) & 0xffef;
  return 0xffef;
}

/* ref: FUN_00bd7be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd7be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd7be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xc)));
  piVar2 = ((int *)GEN_TOP(F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0x10))),0,0)));
  uVar4 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = F_00ab4370(uVar1,param_2,uVar3,0,0);
      *((uint *)GEN_TOP(((int)this + 0x88))) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd7c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  if (*(undefined * PTR32 *)(this + 0x88) != ((undefined *)GEN_TOP(0x0))) {
    F_009bc530(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_FWD,1);
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd7c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = F_00bd7ad0(this GEN_EDX_FWD);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    piVar3 = ((int *)GEN_TOP(F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10))),0,0)));
    uVar5 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd7cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x1107cd4));
  param_1[0x22] = 0;
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd7d10 */
GEN_OWN GEN_FRAME float10 F_00bd7d10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd7d10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd7d30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd7d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110852c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd7d60(void)
{
  GEN_ENTER(0xbd7d60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bd7e20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd7e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bd7e61;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bd7e4c;
  }
  else {
LAB_00bd7e4c: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bd7e61: ;
  if (((iVar3 != 0) && (*((char *)GEN_TOP((iVar3 + 0x12))) == '\0')) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd7e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd7e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_FWD)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd7ed0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd7ed0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbd7ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,param_1,0,0)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd7f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((ushort *)GEN_TOP((in_ecx + 0x7c))) = *((ushort *)GEN_TOP((in_ecx + 0x7c))) & 0xffef;
  return 0xffef;
}

/* ref: FUN_00bd7f10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd7f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd7f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x53c, 4);
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int * piVar5;
  undefined4 * this_00;
  float * pfVar6;
  int iVar7;
  uint * puVar8;
  uint uVar9;
  undefined1 * puVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined8 uVar15;
  
  (*(uint *)(gen_frame + 0x528)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x52c);
  (*(int *)(gen_frame + 0x4)) = param_2;
  F_00c48350(&(*(int *)(gen_frame + 0x14)),0,0x4b0);
  iVar7 = *((int *)GEN_TOP(((int)this + 0x24)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar7 + 0x14)));
  (*(uint *)(gen_frame + 0xc)) = *((uint *)GEN_TOP((iVar7 + 0xc)));
  uVar3 = *((undefined4 *)GEN_TOP((iVar7 + 0x18)));
  ((undefined4 *)(gen_frame + 0x508))[0] = uVar2;
  ((undefined4 *)(gen_frame + 0x508))[1] = uVar3;
  ((undefined4 *)(gen_frame + 0x508))[2] = *((undefined4 *)GEN_TOP((iVar7 + 0x1c)));
  ((undefined4 *)(gen_frame + 0x508))[3] = *((undefined4 *)GEN_TOP((iVar7 + 0x20)));
  ((undefined4 *)(gen_frame + 0x508))[4] = *((undefined4 *)GEN_TOP((iVar7 + 0x24)));
  ((undefined4 *)(gen_frame + 0x508))[5] = *((undefined4 *)GEN_TOP((iVar7 + 0x28)));
  uVar11 = 0;
  ((undefined4 *)(gen_frame + 0x508))[6] = *((undefined4 *)GEN_TOP((iVar7 + 0x2c)));
  ((undefined4 *)(gen_frame + 0x508))[7] = *((undefined4 *)GEN_TOP((iVar7 + 0x30)));
  (*(uint *)(gen_frame + 0x10)) = 0;
  do {
    uVar2 = ((undefined4 *)(gen_frame + 0x508))[(int)(uVar11)];
    ((int *)(gen_frame + 0x4c4))[(int)(uVar11 * 2)] = -0x20000000;
    ((int *)(gen_frame + 0x4c4))[(int)(uVar11 * 2 + 1)] = -1;
    piVar5 = ((int *)GEN_TOP(F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,uVar2,0,0)));
    if ((piVar5 == ((int *)GEN_TOP(0x0))) ||
       (this_00 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x4c))))(piVar5 GEN_EDX_ARG))), this_00 == ((undefined4 *)GEN_TOP(0x0)))
       ) {
LAB_00bd80d5: ;
      fVar13 = (float10)*(double *)&REFG(undefined, 0x1088118);
    }
    else {
      uVar15 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*this_00)))(this_00);
      ((int *)(gen_frame + 0x4c4))[(int)((*(uint *)(gen_frame + 0x10)) * 2)] = (int)uVar15;
      ((int *)(gen_frame + 0x4c4))[(int)((*(uint *)(gen_frame + 0x10)) * 2 + 1)] = (int)((ulonglong)uVar15 >> 0x20);
      if ((((int *)(gen_frame + 0x4c4))[(int)(uVar11 * 2)] == -0x20000000) && (((int *)(gen_frame + 0x4c4))[(int)(uVar11 * 2 + 1)] == -1))
      goto LAB_00bd80d5;
      if ((*(uint *)(gen_frame + 0x10)) == 0) {
        pfVar6 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
        fVar12 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        fVar13 = (float10)*(double *)&REFG(undefined, 0x1088118);
        fVar14 = (float10)*(double *)&REFG(undefined, 0x10a3960);
        iVar7 = (int)((((float10)*pfVar6 + fVar12) * fVar13) / fVar14);
        if (iVar7 < 0x10000) {
          if (iVar7 < 0) {
            iVar7 = 0;
          }
        }
        else {
          iVar7 = 0xffff;
        }
        (*(undefined2 *)(gen_frame + 0x4bc)) = (short)iVar7;
        iVar7 = (int)((((float10)pfVar6[1] + fVar12) * fVar13) / fVar14);
        if (iVar7 < 0x10000) {
          if (iVar7 < 0) {
            iVar7 = 0;
          }
        }
        else {
          iVar7 = 0xffff;
        }
        (*(undefined2 *)(gen_frame + 0x4be)) = (short)iVar7;
        iVar7 = (int)((((float10)pfVar6[2] + fVar12) * fVar13) / fVar14);
        if (iVar7 < 0x10000) {
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          (*(undefined2 *)(gen_frame + 0x4c0)) = (short)iVar7;
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
        }
        else {
          (*(undefined2 *)(gen_frame + 0x4c0)) = 0xffff;
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
        }
      }
      else {
        fVar13 = (float10)*(double *)&REFG(undefined, 0x1088118);
        (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
      }
    }
    uVar9 = (*(uint *)(gen_frame + 0xc));
    uVar11 = uVar11 + 1;
    if (7 < uVar11) {
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      fVar1 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0xb0)));
      (*(int *)(gen_frame + 0x14)) = ((int *)(gen_frame + 0x4c4))[0];
      (*(undefined4 *)(gen_frame + 0x18)) = ((int *)(gen_frame + 0x4c4))[1];
      (*(short *)(gen_frame + 0x1c)) = (short)(*(uint *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0xc));
      (*(undefined2 *)(gen_frame + 0x1e)) = 0x100;
      uVar11 = (uint)((((float10)fVar1 + (float10)*(double *)&REFG(undefined, 0x1080228)) * fVar13) /
                     (((float10)*(float *)&REFG(undefined, 0x13442d8) * fVar13) / (float10)REFG(double, 0x109cab0)));
      (*(uint *)(gen_frame + 0xc)) = uVar11;
      (*(uint *)(gen_frame + 0x0)) = 0xffff;
      (*(uint *)(gen_frame + 0x8)) = 0;
      if ((int)uVar11 < 0xffff) {
        puVar8 = &(*(uint *)(gen_frame + 0xc));
        if ((int)uVar11 < 1) {
          puVar8 = &(*(uint *)(gen_frame + 0x8));
        }
      }
      else {
        puVar8 = &(*(uint *)(gen_frame + 0x0));
      }
      (*(undefined2 *)(gen_frame + 0x30)) = (short)*puVar8;
      (*(undefined1 *)(gen_frame + 0x32)) = (undefined1)(*(uint *)(gen_frame + 0x10));
      uVar11 = F_00ab1ed0(uVar9);
      uVar9 = 0;
      (*(uint *)(gen_frame + 0x8)) = uVar11;
      if ((*(uint *)(gen_frame + 0x10)) != 0) {
        puVar10 = ((undefined1 *)(gen_frame + 0x5a));
        do {
          if ((((((*(short *)(gen_frame + 0x1c)) == 0x78) || ((*(short *)(gen_frame + 0x1c)) == 0x7c)) || ((*(short *)(gen_frame + 0x1c)) == 0x83)) ||
              (((*(short *)(gen_frame + 0x1c)) == 0x85 || ((*(short *)(gen_frame + 0x1c)) == 0x87)))) ||
             (((*(short *)(gen_frame + 0x1c)) == 0x8c || (((*(short *)(gen_frame + 0x1c)) == 0x76 || ((*(short *)(gen_frame + 0x1c)) == 0x72)))))) {
            puVar10[-2] = 4;
          }
          else {
            puVar10[-2] = 3;
            puVar10[-1] = *((undefined1 *)GEN_TOP((uVar11 + 0x2d)));
            *puVar10 = *((undefined1 *)GEN_TOP((uVar11 + 0x25)));
          }
          iVar7 = ((int *)(gen_frame + 0x4c4))[(int)(uVar9 * 2)];
          *(undefined2 *)(puVar10 + 2) = 1;
          iVar4 = ((int *)(gen_frame + 0x4c4))[(int)(uVar9 * 2 + 1)];
          ((int *)(gen_frame + 0x43c))[(int)(uVar9 * 2)] = iVar7;
          ((int *)(gen_frame + 0x43c))[(int)(uVar9 * 2 + 1)] = iVar4;
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 0x40;
        } while (uVar9 < (*(uint *)(gen_frame + 0x10)));
      }
      uVar11 = F_00a4e510(*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0x74))),&(*(int *)(gen_frame + 0x14)));
      return uVar11;
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd8280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd82a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd82a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x38, 8);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  uVar4 = F_00bd7e20(this GEN_EDX_FWD);
  uVar5 = 0;
  if (uVar4 != 0) {
    iVar1 = *(int *)(this + 0x24);
    if (*((char *)GEN_TOP((iVar1 + 0x10))) == '\0') {
      uVar5 = F_00bd7f10(this GEN_EDX_ARG,param_1,uVar4);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(float *)(gen_frame + 0x8)) = 0.0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0xc)));
      uVar5 = F_00ab1ed0(uVar2);
      uVar3 = (*(undefined4 *)(gen_frame + 0x0));
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (short)uVar2;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 3)) = SUB41(uVar3,3);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)) = 1;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)(CONCAT12(1,(short)uVar2)));
      (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
      (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((uVar5 + 0x14))) / (float10)REFG(double, 0x10944b8))));
      uVar5 = F_00a52d10(*((undefined4 *)GEN_TOP((uVar4 + 0x74))),&(*(undefined4 *)(gen_frame + 0x0)));
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd8360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110852c));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd8390 */
GEN_OWN GEN_FRAME float10 F_00bd8390(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd8390u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd83b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd83b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd83b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11086cc));
  *((undefined2 *)GEN_TOP(((int)this + 0x89))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd83f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd83f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x88)));
}

/* ref: FUN_00bd8410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd8410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bd8451;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bd843c;
  }
  else {
LAB_00bd843c: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bd8451: ;
  if (((iVar3 != 0) && (*((char *)GEN_TOP((iVar3 + 0x12))) == '\0')) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd8470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd8470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  float * pfVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(F_00bd8410(this GEN_EDX_FWD)));
  uVar2 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pfVar1 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
    uVar2 = F_00a9f6d0(this_00 GEN_EDX_ARG,*pfVar1,pfVar1[1],pfVar1[2],GEN_ARGF(*((float *)GEN_TOP(((int)this_00 + 0xb0)))),GEN_ARGF(*((float *)GEN_TOP(((int)this_00 + 0xb0)))),0,1,(float)(float10)0,(float)(float10)0);
  }
  return uVar2;
}

/* ref: FUN_00bd84d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd84d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd84d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  float * pfVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(F_00bd8410(this GEN_EDX_FWD)));
  uVar2 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pfVar1 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
    uVar2 = F_00a9f6d0(this_00 GEN_EDX_ARG,*pfVar1,
                         (float)((float10)pfVar1[1] + (float10)*(double *)&REFG(undefined, 0x1092098)),pfVar1[2],GEN_ARGF(*((float *)GEN_TOP(((int)this_00 + 0xb0)))),GEN_ARGF(*((float *)GEN_TOP(((int)this_00 + 0xb0)))),0,4,
                         REFG(float, 0x1088068),(float)(float10)0);
  }
  return uVar2;
}

/* ref: FUN_00bd8540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd8540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  float * pfVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(F_00bd8410(this GEN_EDX_FWD)));
  uVar2 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    pfVar1 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
    uVar2 = F_00a9f6d0(this_00 GEN_EDX_ARG,*pfVar1,pfVar1[1],pfVar1[2],GEN_ARGF(*((float *)GEN_TOP(((int)this_00 + 0xb0)))),GEN_ARGF(*((float *)GEN_TOP(((int)this_00 + 0xb0)))),0,2,(float)(float10)0,(float)(float10)0);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf26 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd85a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd85a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined2 *)GEN_TOP((in_ecx + 0x89))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x88))) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd85c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd85c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((ushort *)GEN_TOP((in_ecx + 0x7c))) = *((ushort *)GEN_TOP((in_ecx + 0x7c))) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd85d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd85d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00bd8410(this GEN_EDX_FWD);
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00bd8470(this GEN_EDX_ARG);
    uVar2 = F_00bd84d0(this GEN_EDX_ARG);
    this[0x89] = (undefined1)0x1;
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd8600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd8620(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd8620u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP(((int)param_1 + 0x7c))) >> 4;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((((bVar1 & 1) != 0) && (*((char *)GEN_TOP(((int)param_1 + 0x8a))) == '\0')) &&
     ((float10)*(double *)&REFG(undefined, 0x1094400) - (float10)param_2 < (float10)0)) {
    uVar2 = F_00bd8540(param_1 GEN_EDX_FWD);
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x8a))) = 1;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x88))) = 1;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd8670(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x11086cc));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd86a0 */
GEN_OWN GEN_FRAME float10 F_00bd86a0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd86a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd86c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd86c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd86c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110886c));
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd86f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd86f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x88)));
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd8700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x88))) = 0;
  return;
}

/* ref: FUN_00bd8720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd8720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bd8761;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bd874c;
  }
  else {
LAB_00bd874c: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bd8761: ;
  if (((iVar3 != 0) && (*((char *)GEN_TOP((iVar3 + 0x12))) == '\0')) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd8780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((ushort *)GEN_TOP((in_ecx + 0x7c))) = *((ushort *)GEN_TOP((in_ecx + 0x7c))) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd8790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  in_ecx = F_00bd8720(this GEN_EDX_FWD);
  uVar2 = 0;
  if (in_ecx != 0) {
    bVar1 = F_00a9fa40(in_ecx GEN_EDX_ARG,*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) != '\0');
    uVar2 = CONCAT31(extraout_var,bVar1);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd87c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd87c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd87e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd87e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x78, 8);
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  byte bVar6;
  undefined4 in_EAX = 0;
  undefined * this_00;
  uint uVar7;
  float * pfVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    this_00 = ((undefined *)GEN_TOP(F_00bd8720(this GEN_EDX_FWD)));
    uVar7 = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      iVar4 = *(int *)(this + 0x24);
      (*(float *)(gen_frame + 0x4)) = gen_bits2f(REFG(float, 0x1108820));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(int *)(gen_frame + 0x24)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined1 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      bVar9 = *((char *)GEN_TOP((iVar4 + 0xc))) != '\0';
      (*(undefined1 *)(gen_frame + 0x67)) = (undefined1)0x0;
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x24)) + 3)) = bVar9;
      (*(int *)(gen_frame + 0x24)) = (uint)bVar9 << 0x18;
      pfVar8 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
      fVar1 = pfVar8[1];
      (*(float *)(gen_frame + 0x4c)) = *((float *)GEN_TOP((iVar4 + 0x14)));
      (*(float *)(gen_frame + 0x48)) = *((float *)GEN_TOP((iVar4 + 0x10)));
      (*(float *)(gen_frame + 0x50)) = *((float *)GEN_TOP((iVar4 + 0x18)));
      (*(float *)(gen_frame + 0x3c)) = 0.0;
      fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar4 + 0x10))) - (float10)*pfVar8)));
      fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar4 + 0x18))) - (float10)pfVar8[2])));
      (*(float *)(gen_frame + 0x38)) = fVar2;
      (*(float *)(gen_frame + 0x40)) = fVar3;
      pfVar8 = ((float *)GEN_TOP(F_004bd580(&(*(float *)(gen_frame + 0x38)) GEN_EDX_ARG)));
      fVar12 = *pfVar8;
      (*(float *)(gen_frame + 0x38)) = fVar12;
      (*(float *)(gen_frame + 0x3c)) = pfVar8[1];
      (*(float *)(gen_frame + 0x40)) = pfVar8[2];
      fVar5 = ((float10)GEN_TOD(atan2((float10)fVar12,(float10)pfVar8[2])));
      (*(float *)(gen_frame + 0x60)) = (float)fVar5;
      (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe50)));
      (*(undefined4 *)(gen_frame + 0x20)) = 1;
      if ((*(uint *)&REFG(undefined, 0x14c5abc) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14c5abc) = *(uint *)&REFG(undefined, 0x14c5abc) | 1;
        *(undefined4 *)&REFG(undefined, 0x14c5aac) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5aac), REFG(float, 0x1108830));
        *(undefined4 *)&REFG(undefined, 0x14c5ab0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ab0), REFG(float, 0x10adb9c));
        *(undefined4 *)&REFG(undefined, 0x14c5ab4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ab4), REFG(float, 0x1094870));
        *(undefined4 *)&REFG(undefined, 0x14c5ab8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ab8), REFG(float, 0x1108984));
      }
      fVar12 = REFG(float, 0x1087f04);
      if (*((char *)GEN_TOP((iVar4 + 0xe))) != '\0') {
        fVar12 = REFG(float, 0x10ac108);
      }
      (*(float *)(gen_frame + 0x60)) = fVar12;
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      fVar12 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x14c5aac) +
                                          ((-(uint)(*((char *)GEN_TOP(((int)this_00 + 0x2e08))) != '\0') & 2) +
                                          (uint)(*((char *)GEN_TOP((iVar4 + 0xc))) == '\0')) * 4) *
                      (float10)fVar12)));
      (*(float *)(gen_frame + 0x60)) = fVar12;
      (*(float *)(gen_frame + 0x4)) = fVar12;
      fVar10 = (float10)fVar2;
      fVar11 = (float10)fVar3;
      fVar2 = ((float)GEN_TOF((fVar11 * fVar11 + ((float10)0 * (float10)0 + fVar10 * fVar10))));
      (*(float *)(gen_frame + 0x5c)) = fVar2;
      fVar2 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar2))));
      (*(float *)(gen_frame + 0x5c)) = fVar2;
      if ((float10)fVar2 <= (float10)fVar12) {
        (*(undefined1 *)(gen_frame + 0x67)) = (undefined1)0x1;
      }
      bVar6 = F_00a9fca0(this_00 GEN_EDX_ARG);
      if (bVar6 != 0) {
        (*(float *)(gen_frame + 0x4c)) = fVar1;
      }
      uVar7 = F_00a9f7c0(this_00 GEN_EDX_ARG,(*(float *)(gen_frame + 0x48)),(*(float *)(gen_frame + 0x4c)),(*(float *)(gen_frame + 0x50)),(float)fVar5,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      (*(undefined * PTR32 *)(gen_frame + 0x34))[0x88] = (*(undefined1 *)(gen_frame + 0x67));
    }
  }
  return uVar7;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd8a60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110886c));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd8aa0 */
GEN_OWN GEN_FRAME float10 F_00bd8aa0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd8aa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd8ac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd8ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108b5c));
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd8af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x88))) = 0;
  return;
}

/* ref: FUN_00bd8b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd8b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bd8b51;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bd8b3c;
  }
  else {
LAB_00bd8b3c: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bd8b51: ;
  if (((iVar3 != 0) && (*((char *)GEN_TOP((iVar3 + 0x12))) == '\0')) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd8b80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd8b80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
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
  pbVar2 = ((byte *)GEN_TOP(F_0042a990(*param_2 + 0xa8 GEN_EDX_ARG)));
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c74))[(int)(uVar6 * 2)];
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
      if ((&REFG(undefined1, 0x1108c78))[(int)(uVar6 * 8)] == '\0') {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_ARG,5,0);
        return uVar6;
      }
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,5,0);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8c30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd8c30(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = (param_2[1] - *param_2) / 0x54;
  if (2 < uVar3) {
    pbVar2 = ((byte *)GEN_TOP(F_0042a990(*param_2 + 0xa8 GEN_EDX_ARG)));
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
    uVar3 = F_00aaa5b0(param_1 GEN_EDX_ARG,REFG(undefined4, 0x1108c88));
  }
  return uVar3;
}

/* ref: FUN_00bd8cc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd8cc0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
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
  pbVar2 = ((byte *)GEN_TOP(F_0042a990(*param_2 + 0xa8 GEN_EDX_ARG)));
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c8c))[(int)(uVar6 * 2)];
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
      F_00aa2c50(param_1 GEN_EDX_ARG,0,0,0);
      uVar6 = F_00aa6f20(param_1 GEN_EDX_ARG,(&REFG(undefined1, 0x1108c90))[(int)(uVar6 * 8)],1);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8d70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd8d70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
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
  pbVar2 = ((byte *)GEN_TOP(F_0042a990(*param_2 + 0xa8 GEN_EDX_ARG)));
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c9c))[(int)(uVar6 * 2)];
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
      uVar6 = F_00aab790(param_1 GEN_EDX_ARG,(&REFG(undefined1, 0x1108ca0))[(int)(uVar6 * 8)],0,0,0,0);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: FUN_00bd8e10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd8e10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
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
  pbVar2 = ((byte *)GEN_TOP(F_0042a990(*param_2 + 0xa8 GEN_EDX_ARG)));
  uVar8 = 0;
  do {
    pbVar5 = (&REFG(undefined * PTR32, 0x1108cb0))[(int)(uVar8 * 2)];
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
      uVar3 = F_00c4b813((&REFG(undefined * PTR32, 0x1108cb0))[(int)(uVar8 * 2)],((char *)REFP(0x1108b34)),5);
      if ((int)uVar8 < 0) {
        return uVar3;
      }
      uVar4 = F_0042a990(*param_2 + 0xfc GEN_EDX_ARG);
      uVar4 = F_00c4c74c(uVar4);
      this = param_1;
      if (uVar3 == 0) {
        if (8 < (int)uVar4) {
          uVar4 = 1;
        }
        this = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x2e00)));
      }
      if (this == ((undefined *)GEN_TOP(0x0))) {
        return uVar4;
      }
      uVar8 = F_00aa2260(this GEN_EDX_ARG,*(undefined4 *)(&REFG(undefined, 0x1108cb4) + uVar8 * 8),uVar4);
      return uVar8;
    }
    uVar8 = uVar8 + 1;
    if (0xe < uVar8) {
      return (uint)pbVar2;
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd8f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((ushort *)GEN_TOP((in_ecx + 0x7c))) = *((ushort *)GEN_TOP((in_ecx + 0x7c))) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd8f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: FUN_00bd8f40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd8f40(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbd8f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  uVar2 = (param_1[1] - *param_1) / 0x54;
  if (4 < uVar2) {
    uVar2 = F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG);
    uVar2 = F_00c4c74c(uVar2);
    uVar3 = F_0042a990(*param_1 + 0xfc GEN_EDX_ARG);
    uVar3 = F_00c4c74c(uVar3);
    uVar4 = F_0042a990(*param_1 + 0x150 GEN_EDX_ARG);
    uVar4 = F_00c4c74c(uVar4);
    bVar1 = F_005f2520(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,uVar2,uVar3,uVar4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00bd8fd0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00bd8fd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  uVar2 = (param_2[1] - iVar1) / 0x54;
  if (2 < uVar2) {
    (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
    (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 9;
    uVar2 = F_0042a990(iVar1 + 0xa8 GEN_EDX_ARG);
    uVar2 = F_00c4c74c(uVar2);
    uVar2 = F_00aa4270(param_1 GEN_EDX_ARG,uVar2,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0);
  }
  return uVar2;
}

/* ref: FUN_00bd90a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bd90a0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbd90a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
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
    _Str2 = ((char *)REFP(0x1108b3c));
    _Str1 = ((char *)GEN_TOP(F_0042a990(*param_1 + 0x54 GEN_EDX_ARG)));
    uVar2 = F_00c4c468(_Str1,_Str2);
    if ((uVar2 == 0) && (2 < uVar4)) {
      pbVar3 = ((byte *)GEN_TOP(F_0042a990(*param_1 + 0xa8 GEN_EDX_ARG)));
      uVar2 = 0;
      do {
        pbVar6 = (&REFG(undefined * PTR32, 0x1108d28))[(int)(uVar2 * 2)];
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
          uVar2 = F_006352b0(REFG(undefined4, 0x1371280) GEN_EDX_ARG,(&REFG(undefined1, 0x1108d2c))[(int)(uVar2 * 8)]);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd9170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  pbVar2 = ((byte *)GEN_TOP(((param_1[1] - *param_1) / 0x54)));
  if (((byte *)GEN_TOP(0x1)) < pbVar2) {
    pbVar2 = ((byte *)GEN_TOP(F_0042a990(*param_1 + 0x54 GEN_EDX_FWD)));
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
      pbVar2 = ((byte *)GEN_TOP(F_00bd8f40(param_1)));
    }
  }
  return (uint)pbVar2;
}

/* ref: FUN_00bd9210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd9210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = F_00bd8b10(this GEN_EDX_FWD);
  uVar7 = 0;
  if (uVar2 != 0) {
    uVar7 = (param_1[1] - *param_1) / 0x54;
    if (1 < uVar7) {
      pbVar3 = ((byte *)GEN_TOP(F_0042a990(*param_1 + 0x54 GEN_EDX_ARG)));
      uVar7 = 0;
      do {
        pbVar4 = (&REFG(undefined * PTR32, 0x1108d44))[(int)(uVar7 * 2)];
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
            pbVar3 = ((byte *)GEN_TOP((&REFG(undefined4, 0x1108d40))[(int)(uVar7 * 2)]));
            switch((unsigned int)(uintptr_t)(pbVar3)) {
            case 0x0: ;
              uVar7 = F_00bd8b80(uVar2,param_1);
              return uVar7;
            case 0x1: ;
              uVar7 = F_00bd8c30(uVar2,param_1);
              return uVar7;
            case 0x2: ;
              uVar7 = F_00bd8cc0(uVar2,param_1);
              return uVar7;
            case 0x3: ;
              uVar7 = F_00bd8d70(uVar2,param_1);
              return uVar7;
            case 0x4: ;
              uVar7 = F_00bd8fd0(uVar2,param_1);
              return uVar7;
            case 0x6: ;
              pbVar3 = ((byte *)GEN_TOP(F_00bd8e10(uVar2,param_1)));
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
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bd9370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0xc0, 0, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc));
  iVar6 = *(int *)(this + 0x24);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x8)) = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_FWD,&REFG(undefined, 0x1108a08),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,*((int *)GEN_TOP((iVar6 + 0xc))) + iVar6,REFG(undefined4, 0x108cc50));
  F_00ada1b0(((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x64)),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  iVar6 = (int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
  if (((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54 + iVar6 == iVar6) {
    uVar2 = F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar2;
  }
  pbVar3 = ((byte *)GEN_TOP(F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  uVar2 = 0;
  do {
    pbVar5 = (&REFG(undefined * PTR32, 0x1108d7c))[(int)(uVar2 * 2)];
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
    if (uVar4 == 0) {
      if (-1 < (int)uVar2) {
        iVar6 = (&REFG(undefined4, 0x1108d78))[(int)(uVar2 * 2)];
        if (iVar6 == 0) {
          uVar2 = F_00bd9170(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
        }
        else if (iVar6 == 1) {
          uVar2 = F_00bd9210(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
        }
        else {
          uVar2 = iVar6 - 2;
          if (uVar2 == 0) {
            uVar2 = F_00bd90a0(&(*(undefined * PTR32 *)(gen_frame + 0x0)));
          }
        }
        pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x4));
        *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
        pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x0));
        if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x0))) {
          return uVar2;
        }
        for (; pvVar9 != pvVar8; pvVar9 = ((undefined *)GEN_TOP(((int)pvVar9 + 0x54)))) {
          F_0042c880(pvVar9 GEN_EDX_ARG);
        }
        iVar6 = (*(int *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
        goto LAB_00bd9574;
      }
      goto LAB_00bd9495;
    }
    uVar2 = uVar2 + 1;
    if (2 < uVar2) {
LAB_00bd9495: ;
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x0));
      if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x0))) {
        return uVar4;
      }
      for (; pvVar8 != pvVar9; pvVar8 = ((undefined *)GEN_TOP(((int)pvVar8 + 0x54)))) {
        F_0042c880(pvVar8 GEN_EDX_ARG);
      }
      iVar6 = (*(int *)(gen_frame + 0x8)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0));
LAB_00bd9574: ;
      uVar11 = F_00429760((*(undefined * PTR32 *)(gen_frame + 0x0)),(iVar6 / 0x54) * 0x54,0x35);
      return (uint)uVar11;
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd95a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd95a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x1108b5c));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd95d0 */
GEN_OWN GEN_FRAME float10 F_00bd95d0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd95d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd95f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd95f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd95f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108e1c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd9620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd9650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x24)));
  if ((*((int *)GEN_TOP((iVar1 + 0xc))) == 0) || (*((int *)GEN_TOP((iVar1 + 0x10))) == 0)) {
    F_00621530(REFG(int, 0x137127c) + 0xee30 GEN_EDX_FWD);
  }
  if (*((int *)GEN_TOP((iVar1 + 0xc))) == 2) {
    F_006214b0(REFG(int, 0x137127c) + 0xee30 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x14)))));
  }
  if (*((int *)GEN_TOP((iVar1 + 0x10))) == 2) {
    F_006214e0(REFG(int, 0x137127c) + 0xee30 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar1 + 0x18)))));
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::GrassNearClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd96c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd96c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x1108e1c));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd9720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108f3c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *((uint *)GEN_TOP((in_ecx + 0x78)));
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bd977e;
  iVar3 = *((int *)GEN_TOP((in_ecx + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP((in_ecx + 4))) != 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP((in_ecx + 0x6c)));
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00bd9769;
  }
  else {
LAB_00bd9769: ;
    uVar2 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = uVar2;
    uVar4 = F_00b595f0(uVar2);
  }
  uVar5 = *((uint *)GEN_TOP((in_ecx + 0x78)));
LAB_00bd977e: ;
  if ((uVar5 != 0) && (*((int *)GEN_TOP((uVar5 + 0x454))) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x454))) + 0x19)));
    *pbVar1 = *pbVar1 & 0xfb;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd97a0(void)
{
  GEN_ENTER(0xbd97a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd97b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd97b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *((uint *)GEN_TOP((in_ecx + 0x78)));
  uVar5 = uVar4;
  if (uVar4 != 0) goto LAB_00bd97ee;
  iVar3 = *((int *)GEN_TOP((in_ecx + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP((in_ecx + 4))) != 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP((in_ecx + 0x6c)));
    uVar4 = 0;
    if (iVar3 != 0) goto LAB_00bd97d9;
  }
  else {
LAB_00bd97d9: ;
    uVar2 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = uVar2;
    uVar4 = F_00b595f0(uVar2);
  }
  uVar5 = *((uint *)GEN_TOP((in_ecx + 0x78)));
LAB_00bd97ee: ;
  if ((uVar5 != 0) && (*((int *)GEN_TOP((uVar5 + 0x454))) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x454))) + 0x19)));
    *pbVar1 = *pbVar1 | 4;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd9810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte * pbVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP((in_ecx + 0x78)));
  if (iVar3 != 0) goto LAB_00bd984e;
  iVar3 = *((int *)GEN_TOP((in_ecx + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP((in_ecx + 4))) != 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP((in_ecx + 0x6c)));
    if (iVar3 != 0) goto LAB_00bd9839;
  }
  else {
LAB_00bd9839: ;
    uVar2 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = uVar2;
    F_00b595f0(uVar2);
  }
  iVar3 = *((int *)GEN_TOP((in_ecx + 0x78)));
LAB_00bd984e: ;
  if ((iVar3 != 0) && (*((int *)GEN_TOP((iVar3 + 0x454))) != 0)) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x454))) + 0x19)));
    *pbVar1 = *pbVar1 & 0xfb;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LocalWindScaleClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd9880(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd98b0 */
GEN_OWN GEN_FRAME float10 F_00bd98b0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd98b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd98d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd98d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd98d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11090dc));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd9900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd9910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort * puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd994a;
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
    uVar2 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd994a: ;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00bbaf90(this_00 GEN_EDX_ARG);
    if ((uVar4 != 0) && (*((int *)GEN_TOP((uVar4 + 0xec))) != 0)) {
      puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 0xec))) + 0x70)));
      *puVar1 = *puVar1 & 0xffef;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  iVar1 = *(int *)(this + 0x24);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd99b2;
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
    uVar2 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00bd99b2: ;
  uVar4 = F_00bbaf90(this_00 GEN_EDX_ARG);
  uVar5 = 0;
  if ((uVar4 != 0) && (uVar5 = *((uint *)GEN_TOP((uVar4 + 0xec))), uVar5 != 0)) {
    *((ushort *)GEN_TOP((uVar5 + 0x70))) =
         (ushort)(*((char *)GEN_TOP((iVar1 + 0xc))) != '\0') << 4 | *((ushort *)GEN_TOP((uVar5 + 0x70))) & 0xffef;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::KeepHighTextureClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd99f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd99f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x11090dc));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd9a30 */
GEN_OWN GEN_FRAME float10 F_00bd9a30(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd9a30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd9a50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110927c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf25 */
GEN_OWN GEN_NOFRAME uint F_00bd9a80(void)
{
  GEN_ENTER(0xbd9a80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14c4e78);
  if (REFG(undefined4, 0x14c4e78) != 0) {
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x14c4e78) + 0x18))) = *((undefined4 *)GEN_TOP((REFG(undefined4, 0x14c4e78) + 0x1c)));
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd9a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x14c4e78);
  uVar3 = *(uint *)(this + 0x24);
  if (REFG(int, 0x14c4e78) != 0) {
    if (*((int *)GEN_TOP((uVar3 + 0x10))) == 0) {
      *((undefined4 *)GEN_TOP((REFG(int, 0x14c4e78) + 0x18))) = *((undefined4 *)GEN_TOP((REFG(int, 0x14c4e78) + 0x1c)));
    }
    piVar2 = ((int *)GEN_TOP(F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((uVar3 + *((int *)GEN_TOP((uVar3 + 0xc)))))),0,0)));
    uVar3 = 0;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar1 + 0x18))) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00bd9af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd9af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::SpecialSelfShadowClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd9b10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110927c));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd9b40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  return (uint)this;
}

/* ref: FUN_00bd9b60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  F_00bc09b0(this);
  uVar1 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf25 */
GEN_OWN GEN_NOFRAME uint F_00bd9b80(void)
{
  GEN_ENTER(0xbd9b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00bc09b0(in_ECX);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bd9b90(void)
{
  GEN_ENTER(0xbd9b90u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bd9ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd9bde;
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
    uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return;
  }
LAB_00bd9bde: ;
  if ((*((char *)GEN_TOP(((int)this_00 + 0x12))) == '\0') && (iVar4 = *((int *)GEN_TOP(((int)this_00 + 4))), iVar4 != 0))
  {
    bVar3 = false;
    if ((*((int *)GEN_TOP((iVar4 + 0x6c))) == 2) && (*((int *)GEN_TOP((iVar4 + 0x88))) == 0)) {
      bVar3 = true;
    }
    cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    if (-1 < cVar1) {
      if (!bVar3) {
        F_00bc40b0(this_00 GEN_EDX_ARG,this,(int)cVar1);
        return;
      }
      F_00bc0910(this,(int)cVar1);
      return;
    }
    if (bVar3) {
      F_00bc09b0(this);
      return;
    }
    F_00bc40c0(this_00 GEN_EDX_ARG,this);
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::PhysicsWindClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd9c50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110939c));
  F_00bc09b0(param_1);
  F_00bd2e60(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bd9c90 */
GEN_OWN GEN_FRAME float10 F_00bd9c90(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd9c90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bd9cb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109554));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bd9ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00bd9cf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar2 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
      pvVar3 = ((undefined *)GEN_TOP(0x0));
      if (iVar2 != 0) goto LAB_00bd9d16;
    }
    else {
LAB_00bd9d16: ;
      uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(F_00b595f0(uVar1)));
    }
    pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
    if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
      pvVar4 = ((undefined *)GEN_TOP(0x0));
      goto LAB_00bd9d3a;
    }
  }
  pvVar3 = ((undefined *)GEN_TOP(F_00bbaf90(pvVar4 GEN_EDX_ARG)));
  pvVar4 = pvVar3;
LAB_00bd9d3a: ;
  iVar2 = REFG(int, 0x1379694);
  if ((pvVar4 != ((undefined *)GEN_TOP(0x0))) && (REFG(int, 0x1379694) != 0)) {
    F_00aa2260(pvVar4 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x2d90))));
    F_00aa2260(pvVar4 GEN_EDX_ARG,1,*((undefined4 *)GEN_TOP((iVar2 + 0x2d94))));
    F_00aa2260(pvVar4 GEN_EDX_ARG,2,*((undefined4 *)GEN_TOP((iVar2 + 0x2d98))));
    F_00aa2260(pvVar4 GEN_EDX_ARG,3,*((undefined4 *)GEN_TOP((iVar2 + 0x2d9c))));
    F_00aa2260(pvVar4 GEN_EDX_ARG,4,*((undefined4 *)GEN_TOP((iVar2 + 0x2da0))));
    F_00aa80c0(pvVar4 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((iVar2 + 0x16b0))),*((undefined4 *)GEN_TOP((iVar2 + 0x16b4))));
    pvVar3 = ((undefined *)GEN_TOP(F_00aa80c0(pvVar4 GEN_EDX_ARG,1,*((undefined4 *)GEN_TOP((iVar2 + 0x1e50))),
                                  *((undefined4 *)GEN_TOP((iVar2 + 0x1e54))))));
  }
  return (uint)pvVar3;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf19 */
GEN_OWN GEN_NOFRAME byte F_00bd9dd0(void)
{
  GEN_ENTER(0xbd9dd0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  piVar1 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,((char *)REFP(0x1109534)))));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
    iVar4 = 0;
    if (0 < (int)uVar2) {
      do {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,iVar4)));
        if (piVar3 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar2);
    }
  }
  return 1;
}

/* ref: FUN_00bd9e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bd9e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd9e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint local_8;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd9e88;
  iVar6 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar6 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar6 = *((int *)GEN_TOP(((int)this + 0x6c)));
    uVar2 = 0;
    if (iVar6 != 0) goto LAB_00bd9e6b;
  }
  else {
LAB_00bd9e6b: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    uVar2 = F_00b595f0(uVar1);
  }
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    return uVar2;
  }
LAB_00bd9e88: ;
  pvVar3 = ((undefined *)GEN_TOP(F_00bbaf90(pvVar3 GEN_EDX_ARG)));
  uVar2 = 0;
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00ab21a0((uint)*((byte *)GEN_TOP(((int)pvVar3 + 0x1688))));
    uVar2 = 0;
    if (uVar4 != 0) {
      local_8 = (uint)*((byte *)GEN_TOP((uVar4 + 0x3e)));
      if ((*((int *)GEN_TOP((uVar4 + 0x10))) == 0x20) || (*((int *)GEN_TOP((uVar4 + 0x10))) == 0x21)) {
        local_8 = 1;
      }
      iVar6 = 0;
      uVar2 = F_00530100(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xc0);
      if (0 < (int)uVar2) {
        while( true ) {
          puVar5 = ((undefined4 *)GEN_TOP(F_00ab3660(iVar6)));
          if (puVar5[0xe] == local_8) break;
          iVar6 = iVar6 + 1;
          if ((int)uVar2 <= iVar6) {
            return local_8;
          }
        }
        F_00aa2260(pvVar3 GEN_EDX_ARG,0,*puVar5);
        F_00aa2260(pvVar3 GEN_EDX_ARG,1,puVar5[2]);
        F_00aa2260(pvVar3 GEN_EDX_ARG,2,puVar5[4]);
        F_00aa2260(pvVar3 GEN_EDX_ARG,3,puVar5[6]);
        F_00aa2260(pvVar3 GEN_EDX_ARG,4,puVar5[8]);
        F_00aa80c0(pvVar3 GEN_EDX_ARG,0,puVar5[10],0);
        uVar2 = F_00aa80c0(pvVar3 GEN_EDX_ARG,1,puVar5[0xc],0);
      }
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bd9f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd9f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == '\0') {
      F_00bd9cf0(this GEN_EDX_FWD);
    }
    else {
      F_00bd9e40(this GEN_EDX_ARG);
    }
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bd9fdf;
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
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  }
LAB_00bd9fdf: ;
  piVar4 = ((int *)GEN_TOP(F_00bbaf90(this_00 GEN_EDX_ARG)));
  uVar3 = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x70))))(piVar4 GEN_EDX_ARG);
    if ((char)uVar3 == '\0') {
      uVar3 = F_00bd30b0(this GEN_EDX_ARG,0);
    }
    if ((piVar4[0x3b] != 0) && (*((int *)GEN_TOP((piVar4[0x3b] + 0x2c8))) != 0)) {
      uVar3 = F_00bd30b0(this GEN_EDX_ARG,0);
    }
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::SetHigherEquipmentClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bda030(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbda030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x1109554));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bda060 */
GEN_OWN GEN_FRAME float10 F_00bda060(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbda060u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bda080 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bda080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbda080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109704));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::PadVibrationClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bda0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbda0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PadVibrationClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bda0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbda0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x4c, 4);
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
  
  bVar4 = F_00bd2480(this GEN_EDX_FWD);
  if (bVar4 != 0) {
    return CONCAT31(extraout_var,bVar4);
  }
  uVar5 = F_00424cd0();
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = *((undefined * PTR32 *)GEN_TOP((uVar5 + 0x14)));
  uVar5 = (uint)*((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) != '\0') {
    piVar6 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
    if (piVar6 == ((int *)GEN_TOP(0x0))) {
      this_00 = ((undefined *)GEN_TOP(F_00bd40a0(this GEN_EDX_ARG)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00bda1d5;
      pfVar7 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
    }
    else {
      pfVar7 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG)));
    }
    if (pfVar7 != ((float *)GEN_TOP(0x0))) {
      iVar3 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
      fVar11 = ((float)GEN_TOF(((float10)*pfVar7 - (float10)*((float *)GEN_TOP((iVar3 + 0x90))))));
      (*(float *)(gen_frame + 0x1c)) = fVar11;
      fVar1 = ((float)GEN_TOF(((float10)pfVar7[1] - (float10)*((float *)GEN_TOP((iVar3 + 0x94))))));
      (*(float *)(gen_frame + 0x20)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)pfVar7[2] - (float10)*((float *)GEN_TOP((iVar3 + 0x98))))));
      (*(float *)(gen_frame + 0x24)) = fVar2;
      fVar8 = (float10)fVar1;
      fVar9 = (float10)fVar11;
      fVar10 = (float10)fVar2;
      fVar11 = ((float)GEN_TOF((fVar10 * fVar10 + (fVar9 * fVar9 + fVar8 * fVar8))));
      (*(float *)(gen_frame + 0x34)) = fVar11;
      fVar11 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar11))));
      (*(float *)(gen_frame + 0x34)) = fVar11;
      (*(float *)(gen_frame + 0x38)) = fVar11;
      if ((float10)REFG(float, 0x11096ec) < (float10)fVar11) {
        (*(float *)(gen_frame + 0x38)) = REFG(float, 0x11096ec);
      }
      (*(float *)(gen_frame + 0x34)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x38)) * (float10)*(double *)&REFG(double, 0x10969f8));
    }
  }
LAB_00bda1d5: ;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
  fVar11 = (float)(extraout_ST0 / (float10)*(double *)&REFG(undefined, 0x1088070));
  (*(float *)(gen_frame + 0x38)) = fVar11;
  if ((float10)REFG(float, 0x11096f0) < (float10)fVar11) {
    fVar11 = REFG(float, 0x11096f0);
  }
  ((uint *)(gen_frame + 0x0))[0] = uVar5;
  ((uint *)(gen_frame + 0x0))[1] = 0;
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x34));
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x18)) = fVar11;
  uVar5 = F_00b8a100((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)));
  return uVar5;
}

/* ref: FUN_00bda250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bda250(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbda250u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bda290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbda290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x1109704));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bda2c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bda2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbda2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 10))) = param_2;
  return param_2;
}

/* ref: FUN_00bda2d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bda2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbda2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109824));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bda2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbda2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bda32e;
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
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return uVar3;
  }
LAB_00bda32e: ;
  uVar3 = F_00bc4060(this_00 GEN_EDX_ARG,this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bda340(void)
{
  GEN_ENTER(0xbda340u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bda350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbda350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * this_00;
  
  pvVar4 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar4;
  if (pvVar4 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bda393;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    pvVar4 = ((undefined *)GEN_TOP(0x0));
    if (iVar2 != 0) goto LAB_00bda37e;
  }
  else {
LAB_00bda37e: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    pvVar4 = ((undefined *)GEN_TOP(F_00b595f0(uVar1)));
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bda393: ;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    iVar2 = *(int *)(this + 0x24);
    gen_piece_set(&(*(int *)(gen_frame + 0x0)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(int *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x0)), 1, 3),1);
    uVar3 = F_00bd3040(this GEN_EDX_ARG);
    if ((uVar3 & 0x100) != 0) {
      (*(int *)(gen_frame + 0x0)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x0)), 1, 3) << 8;
    }
    pvVar4 = ((undefined *)GEN_TOP(F_00bc4040(this_00 GEN_EDX_ARG,this,(uint)*((ushort *)GEN_TOP((iVar2 + 0xc))),(*(int *)(gen_frame + 0x0)))));
  }
  return (uint)pvVar4;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bda3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbda3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  int in_ecx;
  byte bVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bda414;
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
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 1;
  }
LAB_00bda414: ;
  iVar3 = *(int *)(this + 0x24);
  if (((param_1 == 6) && (in_ecx = *((int *)GEN_TOP(((int)this_00 + 0x448))), in_ecx != 0)) &&
     (bVar2 = F_00a0b720(in_ecx GEN_EDX_ARG), bVar2 != 0)) {
    *((undefined1 *)GEN_TOP((in_ecx + 10))) = *((undefined1 *)GEN_TOP((iVar3 + 0xc)));
    return 0;
  }
  F_00bc4050(this_00 GEN_EDX_ARG,this,(uint)*((ushort *)GEN_TOP((iVar3 + 0xc))),1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::PhysicsOffClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bda480(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbda480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bda4b0 */
GEN_OWN GEN_FRAME float10 F_00bda4b0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbda4b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bda4d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bda4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbda4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11099c4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bda4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbda4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00bda540 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bda540(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbda540u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = REFG(float * PTR32, 0x1371290);
  pfVar2 = REFG(float * PTR32, 0x1371290);
  if ((*((char *)GEN_TOP((REFG(float * PTR32, 0x1371290) + 0xc6))) == -0x80) &&
     (pfVar2 = REFG(float * PTR32, 0x1371290) + 0xbc, pfVar2 != ((float *)GEN_TOP(0x0)))) {
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
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bda590(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbda590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  uVar2 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_ARG,0x10,(char)param_1,0x80);
  if (((*((char *)GEN_TOP((iVar1 + 0x318))) == -0x80) && (iVar1 = iVar1 + 0x2f0, iVar1 != 0)) &&
     ((char)param_1 != '\0')) {
    F_004a6420(iVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf25 */
GEN_OWN GEN_NOFRAME uint F_00bda5e0(void)
{
  GEN_ENTER(0xbda5e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_ARG,0x10,0,0x80);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bda600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbda600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 2) {
    uVar2 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_FWD,0x10,0,0x80);
    return uVar2;
  }
  uVar2 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_ARG,0x10,1,0x80);
  if ((*((char *)GEN_TOP((iVar1 + 0x318))) == -0x80) && (iVar1 = iVar1 + 0x2f0, iVar1 != 0)) {
    F_004a6420(iVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bda660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbda660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 0) {
    F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_FWD,0x10,0,0x80);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::VignettingClip::vf29 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bda690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbda690u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  uint uVar8;
  float * pfVar9;
  
  uVar8 = (*(uint *)&gen_args[0]);
  pfVar7 = REFG(float * PTR32, 0x1371290);
  pfVar9 = *((float * PTR32 *)GEN_TOP((param_1 + 0x24)));
  if (pfVar9[4] != 2.8026e-45) {
    fVar1 = *((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x30)));
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x0)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar1);
    pfVar9 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x0));
    }
    fVar1 = *pfVar9;
    fVar2 = *((float *)GEN_TOP((uVar8 + 0x34)));
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar2);
    pfVar9 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar2 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x0));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    fVar2 = *pfVar9;
    fVar3 = *((float *)GEN_TOP((uVar8 + 0x38)));
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1094880);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar3);
    pfVar9 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar3 < REFG(float, 0x1094880))) {
      pfVar9 = &(*(float *)(gen_frame + 0x0));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    fVar3 = *pfVar9;
    fVar4 = *((float *)GEN_TOP((uVar8 + 0x3c)));
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar4);
    pfVar9 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar4 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x0));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    fVar4 = *pfVar9;
    fVar5 = *((float *)GEN_TOP((uVar8 + 0x40)));
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar5);
    pfVar9 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar5 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x0));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    fVar5 = *pfVar9;
    fVar6 = *((float *)GEN_TOP((uVar8 + 0x44)));
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar6);
    pfVar9 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar6 < REFG(float, 0x1087f04))) {
      pfVar9 = &(*(float *)(gen_frame + 0x0));
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x4));
    }
    fVar6 = *pfVar9;
    pfVar9 = REFG(float * PTR32, 0x1371290);
    if ((*((char *)GEN_TOP((REFG(float * PTR32, 0x1371290) + 0xc6))) == -0x80) &&
       (pfVar9 = REFG(float * PTR32, 0x1371290) + 0xbc, pfVar9 != ((float *)GEN_TOP(0x0)))) {
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bda830(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbda830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bda860 */
GEN_OWN GEN_FRAME float10 F_00bda860(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbda860u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bda880 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bda880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbda880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109b64));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bda8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbda8a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00bda8f0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bda8f0(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8))
{
  GEN_ENTER(0xbda8f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1371290);
  if ((*((char *)GEN_TOP((REFG(int, 0x1371290) + 0x317))) == -0x80) &&
     (((float *)GEN_TOP((REFG(int, 0x1371290) + 0x2c4))) != ((float *)GEN_TOP(0x0)))) {
    *((float *)GEN_TOP((REFG(int, 0x1371290) + 0x2c4))) = param_1;
    *((float *)GEN_TOP((iVar2 + 0x2c8))) = param_2;
    *((float *)GEN_TOP((iVar2 + 0x2cc))) = param_3;
    *((float *)GEN_TOP((iVar2 + 0x2d0))) = param_4;
    *((undefined4 *)GEN_TOP((iVar2 + 0x2d4))) = *param_5;
    *((undefined4 *)GEN_TOP((iVar2 + 0x2d8))) = param_5[1];
    uVar1 = param_5[2];
    *((float *)GEN_TOP((iVar2 + 0x2e0))) = param_6;
    *((float *)GEN_TOP((iVar2 + 0x2e4))) = param_7;
    *((float *)GEN_TOP((iVar2 + 0x2e8))) = param_8;
    *((undefined4 *)GEN_TOP((iVar2 + 0x2dc))) = uVar1;
    *((float *)GEN_TOP((iVar2 + 0x2ec))) = param_9;
  }
  return 0;
}

/* ref: FUN_00bda970 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bda970(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbda970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  uVar2 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_ARG,0xf,(char)param_1,0x80);
  if (((*((char *)GEN_TOP((iVar1 + 0x317))) == -0x80) && (iVar1 = iVar1 + 0x2c4, iVar1 != 0)) &&
     ((char)param_1 != '\0')) {
    F_004a63e0(iVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf25 */
GEN_OWN GEN_NOFRAME uint F_00bda9c0(void)
{
  GEN_ENTER(0xbda9c0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_ARG,0xf,0,0x80);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bda9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbda9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 2) {
    uVar2 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_FWD,0xf,0,0x80);
    return uVar2;
  }
  uVar2 = F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_ARG,0xf,1,0x80);
  if ((*((char *)GEN_TOP((iVar1 + 0x317))) == -0x80) && (iVar1 = iVar1 + 0x2c4, iVar1 != 0)) {
    F_004a63e0(iVar1 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdaa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdaa40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == 0) {
    F_004adca0(REFG(int, 0x1371290) + 0x25c GEN_EDX_FWD,0xf,0,0x80);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ColorFilterClip::vf29 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdaa70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdaa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
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
  puVar11 = REFG(uint * PTR32, 0x1371290);
  puVar14 = *((uint * PTR32 *)GEN_TOP((param_1 + 0x24)));
  if (puVar14[4] != 2) {
    param_2 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 0x30))) -
                                       (float10)(longlong)
                                                ((float10)*((float *)GEN_TOP((param_2 + 0x30))) /
                                                (float10)*(double *)&REFG(undefined, 0x10920b0)) *
                                       (float10)*(double *)&REFG(undefined, 0x10920b0)))));
    fVar15 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    if ((float10)REFG(float, 0x10943cc) < fVar15) {
      param_2 = (uint)gen_fl2bits((float)(fVar15 - (float10)*(double *)&REFG(undefined, 0x10920b0)));
      fVar15 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    }
    if (gen_bits2f(param_2) < REFG(float, 0x10943d0)) {
      param_2 = (uint)gen_fl2bits((float)(fVar15 + (float10)*(double *)&REFG(undefined, 0x10920b0)));
    }
    fVar1 = *((float *)GEN_TOP((uVar12 + 0x34)));
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
    fVar2 = *((float *)GEN_TOP((uVar12 + 0x38)));
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
    fVar3 = *((float *)GEN_TOP((uVar12 + 0x3c)));
    ((float *)(gen_frame + 0x0))[0] = fVar3;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar3 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar3 = *pfVar13;
    fVar4 = *((float *)GEN_TOP((uVar12 + 0x40)));
    ((float *)(gen_frame + 0x0))[0] = fVar4;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar4 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar4 = *pfVar13;
    fVar5 = *((float *)GEN_TOP((uVar12 + 0x44)));
    ((float *)(gen_frame + 0x0))[0] = fVar5;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar5 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar5 = *pfVar13;
    fVar6 = *((float *)GEN_TOP((uVar12 + 0x48)));
    ((float *)(gen_frame + 0x0))[0] = fVar6;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar6 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar6 = *pfVar13;
    fVar7 = *((float *)GEN_TOP((uVar12 + 0x2c)));
    ((float *)(gen_frame + 0x0))[0] = fVar7;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar7 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar7 = *pfVar13;
    fVar8 = *((float *)GEN_TOP((uVar12 + 0x20)));
    ((float *)(gen_frame + 0x0))[0] = fVar8;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar8 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar8 = *pfVar13;
    fVar9 = *((float *)GEN_TOP((uVar12 + 0x24)));
    ((float *)(gen_frame + 0x0))[0] = fVar9;
    pfVar13 = ((float *)(gen_frame + 0x0));
    if (!(fVar9 < REFG(float, 0x1087f04))) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 1;
    }
    if (!(REFG(float, 0x1090708) < *pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x0)) + 2;
    }
    fVar9 = *pfVar13;
    fVar10 = *((float *)GEN_TOP((uVar12 + 0x28)));
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
       (puVar14 = REFG(uint * PTR32, 0x1371290) + 0xb1, puVar14 != ((uint *)GEN_TOP(0x0)))) {
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdad50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdad50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdad80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bdad80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdad80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((byte *)GEN_TOP(((uint)(ushort)param_2 + in_ecx)));
}

/* ref: FUN_00bdada0 */
GEN_OWN GEN_FRAME float10 F_00bdada0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbdada0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bdadc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdadc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdadc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109d04));
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdadf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdadf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x24);
  fVar3 = F_00bd2390(this GEN_EDX_FWD);
  if ((float10)*((float *)GEN_TOP((iVar1 + 0x1c))) <= (float10)fVar3) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,7);
    return uVar2;
  }
  return extraout_EAX & 0xffffff00;
}

/* ref: FUN_00bdae20 */
GEN_OWN GEN_NOFRAME uint F_00bdae20(void)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdae50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdae50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(((uint)(ushort)param_2 + in_ecx)));
  *pcVar1 = *pcVar1 + '\x01';
  return (uint)(ushort)param_2;
}

/* ref: FUN_00bdae60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bdae60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdae60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP((in_ecx + (uint)(ushort)param_2)));
  if (bVar1 != 0) {
    bVar1 = bVar1 - 1;
    *((byte *)GEN_TOP((in_ecx + (uint)(ushort)param_2))) = bVar1;
  }
  return bVar1;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf25 */
GEN_OWN GEN_NOFRAME uint F_00bdaea0(void)
{
  GEN_ENTER(0xbdaea0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(0x0));
  if (REFG(void * PTR32, 0x14c5b08) != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = F_00c48350(REFG(void * PTR32, 0x14c5b08),0,0x3c);
  }
  return (uint)pvVar1;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdaec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdaec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char * pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(this + 0x24);
  if (REFG(int, 0x14c5b08) != 0) {
    this[0x88] = (undefined1)0x0;
    uVar4 = F_00bd3f80(this GEN_EDX_FWD);
    iVar3 = *((int *)GEN_TOP((uVar4 + 0x134)));
    *((int *)GEN_TOP((uVar4 + 0x134))) = iVar3 + 1;
    *(int *)(this + 0x8c) = iVar3;
    if (*((ushort *)GEN_TOP((iVar2 + 0x14))) != 0xffff) {
      pcVar1 = ((char *)GEN_TOP((REFG(int, 0x14c5b08) + (uint)*((ushort *)GEN_TOP((iVar2 + 0x14))))));
      *pcVar1 = *pcVar1 + '\x01';
      if ((REFG(int, 0x14c5b08) != 0) &&
         (*((ushort *)GEN_TOP((iVar2 + 0x16))) <=
          (ushort)*((byte *)GEN_TOP(((uint)*((ushort *)GEN_TOP((iVar2 + 0x14))) + REFG(int, 0x14c5b08)))))) {
        this[0x88] = (undefined1)0x1;
      }
      if (this[0x88] == (undefined1)0x0) {
        return;
      }
    }
    F_004ff5f0(REFG(undefined4, 0x1375aec) GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdaf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdaf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  char * pcVar2;
  
  if ((REFG(int, 0x14c5b08) != 0) && (*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0x14))) != 0xffff)) {
    pcVar2 = ((char *)GEN_TOP((REFG(int, 0x14c5b08) + (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0x14))))));
    cVar1 = *pcVar2;
    if (cVar1 != '\0') {
      *pcVar2 = cVar1 - 1;
    }
  }
  return 1;
}

/* ref: FUN_00bdaf90 */
GEN_OWN GEN_NOFRAME uint F_00bdaf90(void)
{
  GEN_ENTER(0xbdaf90u, 0u, 0u, 0u, 0u);
  undefined * _Dst;
  undefined * pvVar1;
  
  if (REFG(void * PTR32, 0x14c5b08) != ((undefined *)GEN_TOP(0x0))) {
    F_00406ad0(REFG(void * PTR32, 0x14c5b08));
    REFG(void * PTR32, 0x14c5b08) = ((undefined *)GEN_TOP(0x0));
  }
  _Dst = ((undefined *)GEN_TOP(F_00406b90(0x3c,0,0)));
  if (_Dst != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = F_00c48350(_Dst,0,0x3c);
    REFG(void * PTR32, 0x14c5b08) = _Dst;
    return (uint)pvVar1;
  }
  REFG(void * PTR32, 0x14c5b08) = ((undefined *)GEN_TOP(0x0));
  return 0;
}

/* ref: FUN_00bdaff0 */
GEN_OWN GEN_FRAME uint F_00bdaff0(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int * in_edx, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbdaff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * in_edx = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb010(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbdb010u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
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
  
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x24)));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = param_1;
  uVar6 = F_00bd3f80(param_1 GEN_EDX_FWD);
  if (((uVar6 != 0) && (!((float10)*((float *)GEN_TOP((iVar3 + 0x1c))) <= (float10)param_2))) &&
     (iVar4 = *((int *)GEN_TOP((iVar3 + 0x10))), iVar4 != 0)) {
    iVar5 = *((int *)GEN_TOP((iVar3 + 0x18)));
    iVar7 = (int)param_2 / iVar5;
    ((int *)(gen_frame + 0x2c))[1] = iVar7;
    ((int *)(gen_frame + 0x2c))[0] = iVar7 + 1;
    if (iVar5 < 1) {
      fVar10 = (float10)0;
    }
    else {
      ((int *)(gen_frame + 0x2c))[2] = iVar5;
      ((int *)(gen_frame + 0x2c))[3] = iVar5 * iVar7;
      fVar10 = GEN_X87(((float10)param_2 - (float10)(iVar5 * iVar7)) / (float10)iVar5);
    }
    iVar4 = iVar4 - 1;
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
    iVar4 = *((int *)GEN_TOP((iVar3 + 0xc))) + *piVar8 * 0xc;
    uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 4 + iVar3)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 8 + iVar3)));
    (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((iVar4 + iVar3)));
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
    iVar4 = *((int *)GEN_TOP((iVar3 + 0xc))) + iVar5 * 0xc;
    (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar4 + iVar3)));
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar4 + 4 + iVar3)));
    (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar4 + 8 + iVar3)));
    uVar6 = F_0054cdb0(&(*(undefined4 *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x0)),(float)fVar10);
    this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    if (((*((short *)GEN_TOP((iVar3 + 0x14))) == -1) || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x88))) != '\0')) &&
       (uVar6 = F_00bd3f80((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG), *((int *)GEN_TOP((uVar6 + 0xf8))) == -1)) {
      uVar6 = F_00bd3f80(this GEN_EDX_ARG);
      iVar3 = *((int *)GEN_TOP(((int)this + 0x8c)));
      if (*((int *)GEN_TOP((uVar6 + 0x130))) <= iVar3) {
        uVar6 = F_00bd3f80(this GEN_EDX_ARG);
        *((int *)GEN_TOP((uVar6 + 0x130))) = iVar3;
        uVar6 = REFG(undefined4, 0x13712a4);
        *((undefined4 *)GEN_TOP((REFG(undefined4, 0x13712a4) + 0x20))) = (*(undefined4 *)(gen_frame + 0x10));
        *((undefined4 *)GEN_TOP((uVar6 + 0x24))) = (*(undefined4 *)(gen_frame + 0x14));
        *((undefined4 *)GEN_TOP((uVar6 + 0x28))) = (*(undefined4 *)(gen_frame + 0x18));
        uVar6 = REFG(undefined4, 0x13712a4);
        *((uint *)GEN_TOP((REFG(undefined4, 0x13712a4) + 0x30))) = *((uint *)GEN_TOP((REFG(undefined4, 0x13712a4) + 0x30))) | 2;
        if (REFG(int, 0x13759f4) != 0) {
          uVar6 = F_0068bc00(REFG(int, 0x13759f4) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)));
          return uVar6;
        }
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00bdb1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb1e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x130))) = param_2;
  return param_2;
}

/* ref: FUN_00bdb200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Clip::AutoExtraStreamPointClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x1109d04));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdb250 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109e24));
  puVar1 = ((undefined4 *)GEN_TOP(F_005d7370()));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = *puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = puVar1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = puVar1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = puVar1[3];
  puVar1 = ((undefined4 *)GEN_TOP(F_005d7370()));
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = *puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = puVar1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = puVar1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = puVar1[3];
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x24)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = *((undefined4 *)GEN_TOP((uVar1 + 0xc)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = *((undefined4 *)GEN_TOP((uVar1 + 0x10)));
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = *((undefined4 *)GEN_TOP((uVar1 + 0x14)));
  *((undefined4 *)GEN_TOP((in_ecx + 0xa4))) = *((undefined4 *)GEN_TOP((uVar1 + 0x18)));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bdb2f0(void)
{
  GEN_ENTER(0xbdb2f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdb300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00bdb350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bdb38e;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bdb379;
  }
  else {
LAB_00bdb379: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bdb38e: ;
  if ((((iVar3 == 0) || (*((char *)GEN_TOP((iVar3 + 0x12))) != '\0')) ||
      (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 == ((int *)GEN_TOP(0x0)))) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG), uVar4 == 0 ||
       (*((char *)GEN_TOP((uVar4 + 0x11))) != '\x01')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb3d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbdb3d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  this = ((undefined *)GEN_TOP(F_00bdb350(param_1 GEN_EDX_FWD)));
  uVar5 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x10)) = 0.0;
    pfVar6 = &(*(float *)&gen_args[0]);
    if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x14));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x10));
    }
    fVar7 = (float10)*pfVar6;
    (*(float *)&gen_args[0]) = (float)((float10)1 - fVar7);
    fVar8 = (float10)(*(float *)&gen_args[0]);
    fVar1 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)param_1 + 0x88))))));
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x8c))) * fVar8)));
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x90))) * fVar8)));
    (*(float *)(gen_frame + 0x8)) = fVar3;
    fVar4 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)param_1 + 0x94))))));
    (*(float *)(gen_frame + 0xc)) = fVar4;
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x98))) * fVar7 + (float10)fVar1)));
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x9c))) * fVar7 + (float10)fVar2)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xa0))) * fVar7 + (float10)fVar3)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP(((int)param_1 + 0xa4))) + (float10)fVar4)));
    uVar5 = F_005e45d0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00bdb350(this GEN_EDX_FWD)));
  uVar1 = 0;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_005dde30(this_00 GEN_EDX_ARG,this + 0x88);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdb4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdb4c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float10 fVar1;
  double dVar2;
  float * pfVar3;
  float10 extraout_ST0;
  float fVar4;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    fVar4 = F_00bd2390(param_1 GEN_EDX_FWD);
    (*(double *)(gen_frame + 0x0)) = (double)fVar4;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1);
    dVar2 = (*(double *)(gen_frame + 0x0));
    fVar1 = (float10)(*(double *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = 0;
    (*(double *)(gen_frame + 0x0)) = gen_bits2d((ulonglong)gen_d2bits(dVar2) & 0xffffffff);
    pfVar3 = (float *)&(*(uint *)&gen_args[1]);
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar1 / extraout_ST0));
    if (!((float10)(float)(fVar1 / extraout_ST0) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x0)) + 4)));
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar3);
    F_00bdb3d0(param_1 GEN_EDX_ARG,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))));
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::EmissiveColorClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb550(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdb580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1109f44));
  *((undefined2 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: FUN_00bdb5e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bdb61e;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bdb609;
  }
  else {
LAB_00bdb609: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bdb61e: ;
  if ((((iVar3 == 0) || (*((char *)GEN_TOP((iVar3 + 0x12))) != '\0')) ||
      (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 == ((int *)GEN_TOP(0x0)))) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG), uVar4 == 0 ||
       (*((char *)GEN_TOP((uVar4 + 0x11))) != '\x01')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb660(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbdb660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  uVar1 = F_00bdb5e0(param_1 GEN_EDX_FWD);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (*((char *)GEN_TOP(((int)param_1 + 0x89))) == '\0') {
      (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x0)) = 0.0;
      pfVar3 = &(*(float *)&gen_args[0]);
      if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
        pfVar3 = &(*(float *)(gen_frame + 0x4));
      }
      if (!(0.0 < *pfVar3)) {
        pfVar3 = &(*(float *)(gen_frame + 0x0));
      }
      fVar4 = (float10)*pfVar3;
      if (*((char *)GEN_TOP(((int)param_1 + 0x88))) == '\0') {
        fVar4 = GEN_X87((float10)1 - fVar4);
      }
      (*(float *)&gen_args[0]) = (float)fVar4;
    }
    else if (*((char *)GEN_TOP(((int)param_1 + 0x88))) == '\0') {
      (*(float *)&gen_args[0]) = 0.0;
    }
    else {
      (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
    }
    uVar2 = F_005e4530(uVar1 GEN_EDX_ARG,(*(float *)&gen_args[0]));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00bdb5e0(this GEN_EDX_FWD);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_005e4530(uVar1 GEN_EDX_ARG,(float)(float10)1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  this[0x89] = (undefined1)(*((short *)GEN_TOP((*(int *)(this + 0x24) + 4))) == 1);
  uVar1 = F_00bdb660(this GEN_EDX_FWD,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdb750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bdb660(this GEN_EDX_FWD,(float)(float10)1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdb760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdb760u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float10 fVar1;
  double dVar2;
  float * pfVar3;
  float10 extraout_ST0;
  float fVar4;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    fVar4 = F_00bd2390(param_1 GEN_EDX_FWD);
    (*(double *)(gen_frame + 0x0)) = (double)fVar4;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1);
    dVar2 = (*(double *)(gen_frame + 0x0));
    fVar1 = (float10)(*(double *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = 0;
    (*(double *)(gen_frame + 0x0)) = gen_bits2d((ulonglong)gen_d2bits(dVar2) & 0xffffffff);
    pfVar3 = (float *)&(*(uint *)&gen_args[1]);
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar1 / extraout_ST0));
    if (!((float10)(float)(fVar1 / extraout_ST0) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x0)) + 4)));
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar3);
    F_00bdb660(param_1 GEN_EDX_ARG,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))));
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::EmissiveFadeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb7f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdb820 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a064));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = REFG(undefined4, 0x1302e54);
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = REFG(undefined4, 0x1302e58);
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = REFG(undefined4, 0x1302e5c);
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = REFG(undefined4, 0x1302e60);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = REFG(undefined4, 0x1302e54);
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = REFG(undefined4, 0x1302e58);
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = REFG(undefined4, 0x1302e5c);
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = REFG(undefined4, 0x1302e60);
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bdb890(void)
{
  GEN_ENTER(0xbdb890u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdb8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdb8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x24);
  uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 0x18)));
  fVar2 = *((float *)GEN_TOP((iVar4 + 0x10)));
  fVar3 = *((float *)GEN_TOP((iVar4 + 0x14)));
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar4 + 0xc))) * (float10)*((float *)GEN_TOP((iVar4 + 0xc))))));
  *(float *)(this + 0x9c) = (float)((float10)fVar2 * (float10)fVar2);
  fVar2 = (float)((float10)fVar3 * (float10)fVar3);
  *(float *)(this + 0xa0) = fVar2;
  *(undefined4 *)(this + 0xa4) = uVar1;
  return (uint)gen_fl2bits(fVar2);
}

/* ref: FUN_00bdb960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdb960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdb960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bdb99e;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bdb989;
  }
  else {
LAB_00bdb989: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bdb99e: ;
  if ((((iVar3 == 0) || (*((char *)GEN_TOP((iVar3 + 0x12))) != '\0')) ||
      (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 == ((int *)GEN_TOP(0x0)))) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG), uVar4 == 0 ||
       (*((char *)GEN_TOP((uVar4 + 0x11))) != '\x03')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdb9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdb9e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbdb9e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  this = ((undefined *)GEN_TOP(F_00bdb960(param_1 GEN_EDX_FWD)));
  uVar5 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x10)) = 0.0;
    pfVar6 = &(*(float *)&gen_args[0]);
    if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x14));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x10));
    }
    fVar7 = (float10)*pfVar6;
    (*(float *)&gen_args[0]) = (float)((float10)1 - fVar7);
    fVar8 = (float10)(*(float *)&gen_args[0]);
    fVar1 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)param_1 + 0x88))))));
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x8c))) * fVar8)));
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x90))) * fVar8)));
    (*(float *)(gen_frame + 0x8)) = fVar3;
    fVar4 = ((float)GEN_TOF((fVar8 * (float10)*((float *)GEN_TOP(((int)param_1 + 0x94))))));
    (*(float *)(gen_frame + 0xc)) = fVar4;
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x98))) * fVar7 + (float10)fVar1)));
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0x9c))) * fVar7 + (float10)fVar2)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)param_1 + 0xa0))) * fVar7 + (float10)fVar3)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((fVar7 * (float10)*((float *)GEN_TOP(((int)param_1 + 0xa4))) + (float10)fVar4)));
    uVar5 = F_005de250(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdbab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_ecx;
  undefined4 * puVar1;
  
  in_ecx = F_00bdb960(this GEN_EDX_FWD);
  puVar1 = ((undefined4 *)GEN_TOP(0x0));
  if (in_ecx != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(F_005de230(in_ecx GEN_EDX_ARG)));
    *(undefined4 *)(this + 0x88) = *puVar1;
    *(undefined4 *)(this + 0x8c) = puVar1[1];
    *(undefined4 *)(this + 0x90) = puVar1[2];
    *(undefined4 *)(this + 0x94) = puVar1[3];
  }
  return (uint)puVar1;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdbaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdbaf0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float10 fVar1;
  double dVar2;
  float * pfVar3;
  float10 extraout_ST0;
  float fVar4;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    fVar4 = F_00bd2390(param_1 GEN_EDX_FWD);
    (*(double *)(gen_frame + 0x0)) = (double)fVar4;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1);
    dVar2 = (*(double *)(gen_frame + 0x0));
    fVar1 = (float10)(*(double *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = 0;
    (*(double *)(gen_frame + 0x0)) = gen_bits2d((ulonglong)gen_d2bits(dVar2) & 0xffffffff);
    pfVar3 = (float *)&(*(uint *)&gen_args[1]);
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar1 / extraout_ST0));
    if (!((float10)(float)(fVar1 / extraout_ST0) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x0)) + 4)));
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar3);
    F_00bdb9e0(param_1 GEN_EDX_ARG,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))));
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::LightColorClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdbb80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdbbc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdbbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdbbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a184));
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: FUN_00bdbc20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdbc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdbc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bdbc5e;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bdbc49;
  }
  else {
LAB_00bdbc49: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bdbc5e: ;
  if ((((iVar3 == 0) || (*((char *)GEN_TOP((iVar3 + 0x12))) != '\0')) ||
      (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 == ((int *)GEN_TOP(0x0)))) ||
     (((piVar2[0x1b] != 8 && (piVar2[0x1b] != 9)) ||
      ((uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG), uVar4 == 0 ||
       (*((char *)GEN_TOP((uVar4 + 0x11))) != '\x03')))))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00bdbca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdbca0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbdbca0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  float * pfVar4;
  float10 fVar5;
  
  piVar2 = ((int *)GEN_TOP(F_00bdbc20(param_1 GEN_EDX_FWD)));
  uVar3 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x0)) = 0.0;
    pfVar4 = &(*(float *)&gen_args[0]);
    if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
      pfVar4 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar4)) {
      pfVar4 = &(*(float *)(gen_frame + 0x0));
    }
    fVar5 = (float10)*pfVar4;
    if (*((char *)GEN_TOP(((int)param_1 + 0x88))) != '\0') {
      fVar5 = GEN_X87((float10)1 - fVar5);
    }
    (*(float *)&gen_args[0]) = (float)fVar5;
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar2 + 0xd4)));
    uVar3 = (*pcVar1)(piVar2,(undefined4)gen_fl2bits((*(float *)&gen_args[0])));
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdbd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdbd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00bdbc20(this GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd4))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdbd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  float10 fVar3;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  piVar1 = ((int *)GEN_TOP(F_00bdbc20(this GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (this[0x88] == (undefined1)0x0) {
      fVar3 = (float10)0;
    }
    else {
      fVar3 = GEN_X87((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd4))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar3));
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bdbda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  float10 fVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00bdbc20(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (this[0x88] == (undefined1)0x0) {
      fVar2 = (float10)1;
    }
    else {
      fVar2 = (float10)0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd4))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar2));
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdbde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdbde0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  double dVar2;
  float * pfVar3;
  int * piVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float fVar6;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    fVar6 = F_00bd2390(param_1 GEN_EDX_FWD);
    (*(double *)(gen_frame + 0x0)) = (double)fVar6;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1);
    dVar2 = (*(double *)(gen_frame + 0x0));
    fVar5 = (float10)(*(double *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = 0.0;
    (*(double *)(gen_frame + 0x0)) = gen_bits2d((ulonglong)gen_d2bits(dVar2) & 0xffffffff);
    pfVar3 = (float *)&(*(uint *)&gen_args[1]);
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar5 / extraout_ST0));
    if (!((float10)(float)(fVar5 / extraout_ST0) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x0)) + 4)));
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar3);
    piVar4 = ((int *)GEN_TOP(F_00bdbc20(param_1 GEN_EDX_ARG)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      (*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = REFG(float, 0x1087f04);
      (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(REFG(float, 0x1087f04)),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0))));
      (*(float *)(gen_frame + 0x8)) = 0.0;
      pfVar3 = (float *)&(*(uint *)&gen_args[1]);
      if (!(gen_bits2f((*(uint *)&gen_args[1])) < REFG(float, 0x1087f04))) {
        pfVar3 = ((float *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x0)) + 4)));
      }
      if (!(0.0 < *pfVar3)) {
        pfVar3 = &(*(float *)(gen_frame + 0x8));
      }
      fVar5 = (float10)*pfVar3;
      if ((char)param_1[0x22] != '\0') {
        fVar5 = GEN_X87((float10)1 - fVar5);
      }
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)fVar5);
      pcVar1 = *((gen_code32 *)GEN_TOP((*piVar4 + 0xd4)));
      (*pcVar1)(piVar4,(*(uint *)&gen_args[1]));
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::LightFadeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdbed0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdbf00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdbf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdbf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a2a4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bdbf20(void)
{
  GEN_ENTER(0xbdbf20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdbf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_005e1640();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_00bd30b0(this GEN_EDX_ARG,0);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdbf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbf50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::FocusWaitClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdbf70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdbfa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdbfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdbfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a3c4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bdbfc0(void)
{
  GEN_ENTER(0xbdbfc0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdbfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00b5c930(REFG(undefined4, 0x14c4e90) GEN_EDX_FWD,*(int *)(this + 0x24) + 0xc,0);
  return;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdbff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdbff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::WeatherClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc010(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdc040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a4e4));
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar4 = F_00b595f0(uVar1);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdc09e: ;
  if ((((uVar5 != 0) && (*((char *)GEN_TOP((uVar5 + 0x12))) == '\0')) &&
      (piVar3 = *((int * PTR32 *)GEN_TOP((uVar5 + 4))), piVar3 != ((int *)GEN_TOP(0x0)))) &&
     ((uVar4 = piVar3[0x1b], uVar4 == 9 || (uVar4 == 8)))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xac))))(piVar3 GEN_EDX_ARG)));
    uVar4 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xd4))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe0))))(piVar3 GEN_EDX_ARG,1);
    }
  }
  return uVar4;
}

/* ref: FUN_00bdc130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc130(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbdc130u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * piVar2;
  code * pcVar3;
  int iVar4;
  float * pfVar5;
  bool bVar6;
  int * piVar7;
  float10 fVar8;
  
  iVar4 = *((int *)GEN_TOP((param_1 + 0x78)));
  piVar7 = ((int *)GEN_TOP(0x0));
  if (iVar4 == 0) {
    iVar4 = *((int *)GEN_TOP((param_1 + 0x6c)));
    if (iVar4 == 0) {
      if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
        *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      }
      iVar4 = *((int *)GEN_TOP((param_1 + 0x6c)));
      if (iVar4 != 0) goto LAB_00bdc15f;
    }
    else {
LAB_00bdc15f: ;
      uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
      *((undefined4 *)GEN_TOP((param_1 + 0x78))) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar4 = *((int *)GEN_TOP((param_1 + 0x78)));
    if (iVar4 == 0) goto LAB_00bdc194;
  }
  if (((*((char *)GEN_TOP((iVar4 + 0x12))) == '\0') && (piVar2 = *((int * PTR32 *)GEN_TOP((iVar4 + 4))), piVar2 != ((int *)GEN_TOP(0x0))))
     && ((piVar2[0x1b] == 9 || (piVar2[0x1b] == 8)))) {
    piVar7 = piVar2;
  }
LAB_00bdc194: ;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  pfVar5 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar5 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(0.0 < *pfVar5)) {
    pfVar5 = &(*(float *)(gen_frame + 0x0));
  }
  fVar8 = (float10)*pfVar5;
  if (*((char *)GEN_TOP((param_1 + 0x88))) == '\0') {
    fVar8 = GEN_X87((float10)1 - fVar8);
  }
  (*(float *)&gen_args[0]) = (float)fVar8;
  fVar8 = (float10)(*(float *)&gen_args[0]);
  if (!((float10)0 < fVar8)) {
    (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
  }
  bVar6 = (float10)0 < fVar8;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x4)) + 0)) = bVar6;
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(REFG(float, 0x1087f04)) >> 8),bVar6));
  if (piVar7 != ((int *)GEN_TOP(0x0))) {
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xac))))(piVar7 GEN_EDX_ARG)));
    pfVar5 = ((float *)GEN_TOP(0x0));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar7 + 0xd4)));
      (*(float *)&gen_args[0]) = (float)((float10)1 - (float10)(*(float *)&gen_args[0]));
      (*pcVar3)(piVar7,(undefined4)gen_fl2bits((*(float *)&gen_args[0])));
      pfVar5 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xdc))))(piVar7 GEN_EDX_ARG)));
      if ((bool)(char)pfVar5 != bVar6) {
        pfVar5 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xe0))))(piVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4))))));
      }
    }
  }
  return (uint)pfVar5;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  this[0x88] = (undefined1)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0');
  uVar1 = F_00bdc130(this GEN_EDX_FWD,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdc280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bdc130(this GEN_EDX_FWD,(float)(float10)1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdc290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbdc290u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float10 fVar1;
  double dVar2;
  float * pfVar3;
  float10 extraout_ST0;
  float fVar4;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    fVar4 = F_00bd2390(param_1 GEN_EDX_FWD);
    (*(double *)(gen_frame + 0x0)) = (double)fVar4;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1);
    dVar2 = (*(double *)(gen_frame + 0x0));
    fVar1 = (float10)(*(double *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = 0;
    (*(double *)(gen_frame + 0x0)) = gen_bits2d((ulonglong)gen_d2bits(dVar2) & 0xffffffff);
    pfVar3 = (float *)&(*(uint *)&gen_args[1]);
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar1 / extraout_ST0));
    if (!((float10)(float)(fVar1 / extraout_ST0) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)GEN_TOP(((int)&(*(double *)(gen_frame + 0x0)) + 4)));
    }
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar3);
    F_00bdc130(param_1 GEN_EDX_ARG,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))));
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::BgFadeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc320(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdc360 */
GEN_OWN GEN_FRAME float10 F_00bdc360(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbdc360u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bdc380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a684));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bdc3a0(void)
{
  GEN_ENTER(0xbdc3a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdc3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
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
  if (*((int *)GEN_TOP((iVar1 + 0x10))) == 0) {
    uVar6 = F_00bd3ff0(this GEN_EDX_FWD);
    if (*((int *)GEN_TOP((uVar6 + 0x6c))) != 2) {
      return uVar6;
    }
    if (*((int *)GEN_TOP((uVar6 + 0x88))) != 9) {
      return uVar6;
    }
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar6 + 0x80))) + 0xb4))))(*((int * PTR32 *)GEN_TOP((uVar6 + 0x80))) GEN_EDX_ARG)));
  }
  else {
    this_00 = ((undefined *)GEN_TOP(F_005ef690(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14))) GEN_EDX_ARG,
                                   CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),*((undefined1 *)GEN_TOP((iVar1 + 0xd)))),
                                   *((int *)GEN_TOP((iVar1 + 0x10))),0,1)));
  }
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = (undefined3)((uint)((int)(uintptr_t)this_00) >> 8);
  uVar8 = ((uint)((int)(uintptr_t)this_00) >> 8) << 8;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  uVar3 = 0;
  gen_piece_set(&(*(uint *)(gen_frame + 0x8)), 1, 3, (unsigned long long)(SUB43(uVar7,1)));
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((iVar1 + 0x18))))) {
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
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((iVar1 + 0x14))))) {
  case 0: ;
    bVar5 = F_005d6860(this_00 GEN_EDX_ARG,(cVar4 == '\0') + 2,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var,bVar5);
  case 1: ;
    bVar5 = F_005d6860(this_00 GEN_EDX_ARG,(cVar4 == '\0') + 4,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var_00,bVar5);
  case 2: ;
    bVar5 = F_005d6860(this_00 GEN_EDX_ARG,(cVar4 == '\0') + 6,(*(uint *)(gen_frame + 0x8)));
    return CONCAT31(extraout_var_01,bVar5);
  case 3: ;
    uVar7 = F_005f51d0(this_00 GEN_EDX_ARG,CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),uVar3),(*(uint *)(gen_frame + 0x8)));
    return uVar7;
  case 4: ;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)(ushort)(*(undefined4 *)(gen_frame + 0x4)));
    (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)
               (longlong)TRUNC((double)*((int *)GEN_TOP((iVar1 + 0x24))) * *(double *)&REFG(undefined, 0x110a7a0));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    uVar8 = F_005eb180(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x1c))),(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar8;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupActionClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc560(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdc590 */
GEN_OWN GEN_FRAME float10 F_00bdc590(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbdc590u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bdc5b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a834));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdc5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_005f3310(*(undefined4 *)(this + 0x24));
  return;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdc5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BgShowHideClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc610(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdc640 */
GEN_OWN GEN_FRAME float10 F_00bdc640(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbdc640u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bdc660 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110a9d4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdc680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00bdc690 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdc690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbdc690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bdc6cd;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar2 != 0) goto LAB_00bdc6b8;
  }
  else {
LAB_00bdc6b8: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
LAB_00bdc6cd: ;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00bbaf90(this_00 GEN_EDX_ARG);
    if (uVar3 != 0) {
      if (param_1 == 0) {
        F_00aa6a50(uVar3 GEN_EDX_ARG,0,2,(undefined1)param_2);
      }
      else {
        if (param_1 == 1) {
          F_00aa6a50(uVar3 GEN_EDX_ARG,1,2,(undefined1)param_2);
          return;
        }
        if (param_1 == 2) {
          F_00aa6a50(uVar3 GEN_EDX_ARG,2,2,(undefined1)param_2);
          return;
        }
      }
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdc730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bdc690(this GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0xe))),1);
  return;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdc740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bdc690(this GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 0xe))),
               (uint)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0'));
  return;
}

/* ref: Client::System::Scheduler::Clip::EquipmentShowHideClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc770(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdc7a0 */
GEN_OWN GEN_FRAME float10 F_00bdc7a0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbdc7a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bdc7c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ab74));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdc7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00bdc7f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbdc7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar2 == 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar2 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar2 != 0) goto LAB_00bdc818;
    }
    else {
LAB_00bdc818: ;
      uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x78)));
    if (iVar2 != 0) goto LAB_00bdc831;
  }
  else {
LAB_00bdc831: ;
    if (*((char *)GEN_TOP((iVar2 + 0x12))) == '\0') {
      uVar3 = *((uint *)GEN_TOP((iVar2 + 4)));
      goto LAB_00bdc83e;
    }
  }
  uVar3 = 0;
LAB_00bdc83e: ;
  iVar2 = *((int *)GEN_TOP((uVar3 + 0x88)));
  if (iVar2 == 10) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar3 + 0x80))) + 0x34))))(*((int * PTR32 *)GEN_TOP((uVar3 + 0x80))) GEN_EDX_ARG);
    uVar3 = F_006a0720(uVar3 GEN_EDX_ARG,param_1,(undefined1)param_2);
  }
  else if ((iVar2 == 4) || (iVar2 == 5)) {
    uVar3 = F_00bd40a0(this GEN_EDX_ARG);
    if ((uVar3 != 0) && (uVar3 + 0x16c0 != 0)) {
      uVar3 = F_006a0720(uVar3 + 0x16c0 GEN_EDX_ARG,param_1,(undefined1)param_2);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00bdc7f0(this GEN_EDX_FWD,*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) + *(int *)(this + 0x24),1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x24);
  uVar2 = F_00bdc7f0(this GEN_EDX_FWD,*((int *)GEN_TOP((iVar1 + 0xc))) + iVar1,(uint)(*((char *)GEN_TOP((iVar1 + 0x10))) != '\0'));
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::WeaponClusterVisibilityClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdc900(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdc930 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdc930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ac94));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf25 */
GEN_OWN_GS GEN_FRAME uint F_00bdc960(void)
{
  GEN_ENTER(0xbdc960u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  ((undefined4 *)(gen_frame + 0x0))[0] = 1;
  uVar1 = F_005f32e0(((undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf20 */
GEN_OWN GEN_NOFRAME unsigned int F_00bdc9a0(void)
{
  GEN_ENTER(0xbdc9a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdc9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005f32e0(*(int *)(this + 0x24) + 0xc);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdc9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdc9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Client::System::Scheduler::Clip::FocusClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdcaa0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdcaa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110ac94));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdcad0 */
GEN_OWN GEN_FRAME float10 F_00bdcad0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbdcad0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00bdcaf0(void)
{
  GEN_ENTER(0xbdcaf0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bdcb00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdcb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbdcb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  memcpy(&gen_args[4], &gen_a5, sizeof gen_a5);
  int * piVar1;
  uint in_ecx;
  uint uVar2;
  int iVar3;
  undefined * this;
  
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x6c)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *((uint *)GEN_TOP((param_1 + 0x6c))) = uVar2;
    }
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x6c)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      return uVar2;
    }
  }
  piVar1 = ((int *)GEN_TOP(F_00beb6b0(this GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP((param_1 + 0xb8))) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]));
    }
    in_ecx = F_00beb670(this GEN_EDX_ARG);
    uVar2 = in_ecx;
    if (*((char *)GEN_TOP((param_1 + 0xb9))) != '\0') {
      if (in_ecx == 0) {
        (*(float *)&gen_args[4]) = (float)((float10)1 - (float10)(*(float *)&gen_args[4]));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[4])));
      }
      else {
        uVar2 = F_00aa0980(in_ecx GEN_EDX_ARG,(*(float *)&gen_args[4]),1);
      }
    }
    if ((*((char *)GEN_TOP((param_1 + 0xb8))) != '\0') && (in_ecx != 0)) {
      iVar3 = 3;
      piVar1 = ((int *)GEN_TOP((in_ecx + 0x2da0)));
      do {
        iVar3 = iVar3 - 1;
        piVar1 = piVar1 - 0x1e8;
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]));
        }
      } while (iVar3 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_00bdcc00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdcc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdcc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)this + 0xba))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110ae34));
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xb8))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bdcc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdcc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bdcb00(this GEN_EDX_FWD,(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1087f04))),(float)(float10)1);
  return 1;
}

/* ref: FUN_00bdccb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdccb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbdccb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  float10 fVar2;
  float local_14;
  float local_10;
  float local_c;
  
  if (*((char *)GEN_TOP((param_1 + 0xb8))) == '\0') {
    local_14 = REFG(float, 0x1087f04);
    local_10 = REFG(float, 0x1087f04);
    local_c = REFG(float, 0x1087f04);
    param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xb4))) * (float10)param_2 +
                     (float10)*((float *)GEN_TOP((param_1 + 0x94))))));
  }
  else {
    fVar2 = (float10)param_2;
    param_2 = REFG(float, 0x1087f04);
    local_14 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x88))) +
                      fVar2 * (float10)*((float *)GEN_TOP((param_1 + 0xa8))))));
    local_10 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xac))) * fVar2 +
                      (float10)*((float *)GEN_TOP((param_1 + 0x8c))))));
    local_c = ((float)GEN_TOF((fVar2 * (float10)*((float *)GEN_TOP((param_1 + 0xb0))) +
                     (float10)*((float *)GEN_TOP((param_1 + 0x90))))));
  }
  uVar1 = F_00bdcb00(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(local_14),(undefined4)gen_fl2bits(local_10),
                       (undefined4)gen_fl2bits(local_c),(undefined4)gen_fl2bits(REFG(float, 0x1087f04)),
                       param_2);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdcd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdcd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  iVar3 = *(int *)(this + 0x2c);
  if (iVar3 == 0x4c) {
    iVar3 = *(int *)(this + 0x24);
    iVar4 = *((int *)GEN_TOP((iVar3 + 0xc)));
    uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 4 + iVar3)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 8 + iVar3)));
    *(undefined4 *)(this + 0x88) = *((undefined4 *)GEN_TOP((iVar4 + iVar3)));
    *(undefined4 *)(this + 0x8c) = uVar1;
    uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *(undefined4 *)(this + 0x90) = uVar2;
    *(undefined4 *)(this + 0x94) = uVar5;
    iVar4 = *((int *)GEN_TOP((iVar3 + 0x14)));
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar4)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar3 + 8 + iVar4)));
    *(undefined4 *)(this + 0x98) = *((undefined4 *)GEN_TOP((iVar3 + iVar4)));
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
    *(undefined4 *)(this + 0x88) = GEN_FLT_TO(*(undefined4 *)(this + 0x88), REFG(float, 0x1087f04));
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
    *(undefined4 *)(this + 0x88) = GEN_FLT_TO(*(undefined4 *)(this + 0x88), REFG(float, 0x1087f04));
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
  uVar6 = F_00bdccb0(this GEN_EDX_FWD,(float)(float10)0);
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdd090(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbdd090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float10 extraout_ST0;
  float fVar1;
  
  if ((char)param_3 != '\0') {
    fVar1 = F_00bd2390(param_1 GEN_EDX_FWD);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1);
    param_3 = (uint)gen_fl2bits((float)((float10)fVar1 / extraout_ST0));
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_3)))) {
      param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    }
    if (*((char *)GEN_TOP(((int)param_1 + 0xba))) == '\0') {
      F_00bdccb0(param_1 GEN_EDX_ARG,GEN_ARGF(gen_bits2f(param_3)));
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf29 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdd0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbdd0f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  
  if (*((char *)GEN_TOP((param_1 + 0xba))) != '\0') {
    iVar5 = *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x1c)));
    fVar1 = *((float *)GEN_TOP((iVar5 + 0x30)));
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x0)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar1);
    pfVar6 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x0));
    }
    fVar1 = *pfVar6;
    fVar2 = *((float *)GEN_TOP((iVar5 + 0x34)));
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar2);
    pfVar6 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar2 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x0));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    fVar2 = *pfVar6;
    fVar3 = *((float *)GEN_TOP((iVar5 + 0x38)));
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar3);
    pfVar6 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar3 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x0));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    fVar3 = *pfVar6;
    fVar4 = *((float *)GEN_TOP((iVar5 + 0x3c)));
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar4);
    pfVar6 = (float *)&(*(uint *)&gen_args[0]);
    if (!(fVar4 < REFG(float, 0x1087f04))) {
      pfVar6 = &(*(float *)(gen_frame + 0x0));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    F_00bdcb00(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(fVar1),(undefined4)gen_fl2bits(fVar2),
                 (undefined4)gen_fl2bits(fVar3),(undefined4)gen_fl2bits(REFG(float, 0x1087f04)),*pfVar6);
  }
  return;
}

/* ref: FUN_00bdd210 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00bdd210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdd210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 8 + param_2 * 4)));
}

/* ref: FUN_00bdd220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdd220(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbdd220u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x1087f04));
  return (uint)in_ecx;
}

/* ref: FUN_00bdd260 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00bdd260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdd260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bdd280 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00bdd280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdd280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::ColorAlphaClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdd2b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdd2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdd2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdd2e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdd2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 * 8 ^ *((uint *)GEN_TOP((in_ecx + 0x3fc)))) & 8;
  *((uint *)GEN_TOP((in_ecx + 0x3fc))) = *((uint *)GEN_TOP((in_ecx + 0x3fc))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bdd300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdd300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdd300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: FUN_00bdd310 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bdd310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdd310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x2c))) == param_2;
}

/* ref: FUN_00bdd330 */
GEN_OWN GEN_FRAME float10 F_00bdd330(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbdd330u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bdd350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdd350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdd350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110afd4));
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdd390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdd390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
      uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar3 = *(int *)(this + 0x78);
    if (iVar3 != 0) goto LAB_00bdd3ce;
  }
  else {
LAB_00bdd3ce: ;
    if ((*((char *)GEN_TOP((iVar3 + 0x12))) == '\0') && (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 != ((int *)GEN_TOP(0x0))))
    {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG,0);
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
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar4 = F_00b595f0(uVar1);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdd424: ;
  if (uVar5 != 0) {
    *((uint *)GEN_TOP((uVar5 + 0x3fc))) = *((uint *)GEN_TOP((uVar5 + 0x3fc))) & 0xfffffff7;
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf31 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdd440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdd440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *((uint *)GEN_TOP((in_ecx + 0x78)));
  if (uVar3 != 0) {
    *((undefined4 *)GEN_TOP((uVar3 + 0x2c))) = 0;
    return uVar3;
  }
  iVar2 = *((int *)GEN_TOP((in_ecx + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP((in_ecx + 4))) != 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP((in_ecx + 0x6c)));
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_00bdd480;
  }
  uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = uVar1;
  uVar3 = F_00b595f0(uVar1);
LAB_00bdd480: ;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x78))) + 0x2c))) = 0;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdd490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdd490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  uVar3 = *(uint *)(this + 0x78);
LAB_00bdd4ca: ;
  if (*((undefined * PTR32 *)GEN_TOP((uVar3 + 0x2c))) == this) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))(this GEN_EDX_ARG,5);
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdd4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdd4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
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
  bVar2 = F_00bd2480(this GEN_EDX_FWD);
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
        uVar7 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
        *(undefined4 *)(this + 0x78) = uVar7;
        F_00b595f0(uVar7);
      }
      iVar3 = *(int *)(this + 0x78);
    }
    piVar4 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
    uVar5 = 0;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG)));
      uVar5 = 0;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        bVar6 = *((char *)GEN_TOP(((int)this_00 + 0x2e08))) != '\0';
        iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
        if (iVar1 < 0x81) {
          if (iVar1 == 0x80) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
            if (bVar6) {
              F_00aab790(this_00 GEN_EDX_ARG,0,0,0,0,0);
            }
            F_00aa0560(this_00 GEN_EDX_ARG,0x22);
            F_00aaa5b0(this_00 GEN_EDX_ARG,1);
            F_00aa6f20(this_00 GEN_EDX_ARG,0,0);
            F_00aa6f20(this_00 GEN_EDX_ARG,1,1);
            uVar5 = F_00aa2c50(this_00 GEN_EDX_ARG,0,0,0);
            *((uint *)GEN_TOP((iVar3 + 0x3fc))) = *((uint *)GEN_TOP((iVar3 + 0x3fc))) | 8;
            *(undefined4 *)(this + 0x8c) = 1;
            return uVar5;
          }
          if (iVar1 == 0) {
            *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) | 8;
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa4))))(piVar4 GEN_EDX_ARG,0);
            *((uint *)GEN_TOP((iVar3 + 0x3fc))) = *((uint *)GEN_TOP((iVar3 + 0x3fc))) & 0xfffffff7;
            this[0x90] = (undefined1)0x1;
            return uVar5;
          }
          uVar5 = iVar1 - 1;
          if (uVar5 == 0) {
            *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) | 8;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa4))))(piVar4 GEN_EDX_ARG,1);
            *((uint *)GEN_TOP((iVar3 + 0x3fc))) = *((uint *)GEN_TOP((iVar3 + 0x3fc))) | 8;
            this[0x90] = (undefined1)0x1;
            return (uint)this;
          }
        }
        else {
          if (iVar1 < 0x101) {
            if (iVar1 == 0x100) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
              if (bVar6) {
                F_00aab790(this_00 GEN_EDX_ARG,0,0,0,0,0);
              }
              F_00aa6f20(this_00 GEN_EDX_ARG,1,1);
              F_00aabf60(this_00 GEN_EDX_ARG,0);
              uVar5 = F_00aaa5b0(this_00 GEN_EDX_ARG,2);
              *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) & 0xf7;
              *((uint *)GEN_TOP((iVar3 + 0x3fc))) = *((uint *)GEN_TOP((iVar3 + 0x3fc))) | 8;
              return uVar5;
            }
            if (iVar1 == 0x81) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
              if (bVar6) {
                F_00aab790(this_00 GEN_EDX_ARG,0,0,0,0,0);
              }
              F_00aa0560(this_00 GEN_EDX_ARG,3);
              F_00aaa5b0(this_00 GEN_EDX_ARG,1);
              F_00aa6f20(this_00 GEN_EDX_ARG,1,0);
              F_00aa6f20(this_00 GEN_EDX_ARG,0,1);
              uVar5 = F_00aa2c50(this_00 GEN_EDX_ARG,0,0,0);
              *((uint *)GEN_TOP((iVar3 + 0x3fc))) = *((uint *)GEN_TOP((iVar3 + 0x3fc))) | 8;
              *(undefined4 *)(this + 0x8c) = 2;
              return uVar5;
            }
            if (iVar1 == 0x82) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
              if (bVar6) {
                F_00aab790(this_00 GEN_EDX_ARG,0,0,0,0,0);
              }
              F_00aaa5b0(this_00 GEN_EDX_ARG,1);
              F_00aa6f20(this_00 GEN_EDX_ARG,1,0);
              uVar7 = 0x22;
            }
            else {
              if (iVar1 - 0x83U != 0) {
                return iVar1 - 0x83U;
              }
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
              if (bVar6) {
                F_00aab790(this_00 GEN_EDX_ARG,0,0,0,0,0);
              }
              F_00aaa5b0(this_00 GEN_EDX_ARG,1);
              F_00aa6f20(this_00 GEN_EDX_ARG,0,0);
              uVar7 = 3;
            }
            F_00aa4150(this_00 GEN_EDX_ARG,uVar7,0,0);
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa4))))(piVar4 GEN_EDX_ARG,1);
          }
          else {
            uVar5 = iVar1 - 0x101;
            switch((unsigned int)(uintptr_t)(iVar1)) {
            case 0x101: ;
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
              if (bVar6) {
                F_00aab790(this_00 GEN_EDX_ARG,0,0,0,0,0);
              }
              F_00aa6f20(this_00 GEN_EDX_ARG,0,1);
              F_00aabf60(this_00 GEN_EDX_ARG,0);
              uVar5 = F_00aaa5b0(this_00 GEN_EDX_ARG,2);
              *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) & 0xf7;
              *((uint *)GEN_TOP((iVar3 + 0x3fc))) = *((uint *)GEN_TOP((iVar3 + 0x3fc))) | 8;
              return uVar5;
            case 0x102: ;
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
              if (bVar6) {
                F_00aab790(this_00 GEN_EDX_ARG,0,0,0,0,0);
              }
              F_00aa0560(this_00 GEN_EDX_ARG,0x49);
              F_00aa2c50(this_00 GEN_EDX_ARG,0,0,0);
              F_00aaa5b0(this_00 GEN_EDX_ARG,2);
              *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) & 0xf7;
              uVar5 = F_00aa6f20(this_00 GEN_EDX_ARG,1,0);
              break;
            case 0x103: ;
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
              if (bVar6) {
                F_00aab790(this_00 GEN_EDX_ARG,0,0,0,0,0);
              }
              F_00aa0560(this_00 GEN_EDX_ARG,0x43);
              F_00aa2c50(this_00 GEN_EDX_ARG,0,0,0);
              F_00aaa5b0(this_00 GEN_EDX_ARG,2);
              *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) & 0xf7;
              uVar5 = F_00aa6f20(this_00 GEN_EDX_ARG,0,0);
              break;
            default: ;
              goto switchD_00bdd84a_caseD_104;
            case 0x180: ;
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xa0))))(piVar4 GEN_EDX_ARG);
              if (!bVar6) {
                uVar5 = F_00aab790(this_00 GEN_EDX_ARG,1,0,0,0,0);
              }
            }
          }
          *((uint *)GEN_TOP((iVar3 + 0x3fc))) = *((uint *)GEN_TOP((iVar3 + 0x3fc))) | 8;
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
    uVar7 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar7;
    F_00b595f0(uVar7);
  }
  uVar5 = *(uint *)(this + 0x78);
LAB_00bdd53d: ;
  *((undefined * PTR32 *)GEN_TOP((uVar5 + 0x2c))) = this;
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdda30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdda30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
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
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(this + 0x78);
LAB_00bdda7b: ;
  piVar3 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
  if ((iVar2 != 0) && (piVar3 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa4))))(piVar3 GEN_EDX_ARG,1);
    *((uint *)GEN_TOP((iVar2 + 0x3fc))) = *((uint *)GEN_TOP((iVar2 + 0x3fc))) | 8;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bddab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbddab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  if ((((*(int *)(this + 0x8c) == -1) && (fVar4 = F_00bd2390(this GEN_EDX_FWD), (float10)1 < (float10)fVar4))
      && (piVar1 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG))), piVar1 != ((int *)GEN_TOP(0x0)))) &&
     ((uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG), uVar2 != 0 &&
      (uVar3 = F_00aa2d30(uVar2 GEN_EDX_ARG,0), (char)uVar3 != '\0')))) {
    uVar2 = F_00aa0250(uVar2 GEN_EDX_ARG,0,0);
    *(uint *)(this + 0x8c) = uVar2;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bddb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbddb10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x90] != (undefined1)0x0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  piVar1 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_FWD)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG);
    if ((uVar2 != 0) && (*(int *)(this + 0x8c) != -1)) {
      uVar2 = F_00aa02d0(uVar2 GEN_EDX_ARG,*(int *)(this + 0x8c),0);
      if ((char)uVar2 == '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,7);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bddb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbddb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
      uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar4 = *(int *)(this + 0x78);
    if (iVar4 == 0) goto LAB_00bddbf8;
  }
  if ((*((char *)GEN_TOP((iVar4 + 0x12))) == '\0') && (piVar2 = *((int * PTR32 *)GEN_TOP((iVar4 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG)));
    if ((this_01 != ((undefined *)GEN_TOP(0x0))) &&
       (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_01 + 0xec))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
      if (this[0x88] == (undefined1)0x0) {
        F_00aa2210(this_01 GEN_EDX_ARG);
        this[0x88] = (undefined1)0x1;
      }
      bVar3 = F_006b3620(this_00 GEN_EDX_ARG);
      if (bVar3 != 0) {
        return 0;
      }
    }
  }
LAB_00bddbf8: ;
  bVar3 = F_00bd2590((undefined *)this GEN_EDX_ARG);
  return bVar3;
}

/* ref: Client::System::Scheduler::Clip::ConditionChangeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bddc10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbddc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110afd4));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bddc40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bddc40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbddc40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xac))) = param_2;
  return;
}

/* ref: FUN_00bddc60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bddc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbddc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b0f4));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf29 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bddc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbddc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x88);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 0x50))) != 0)) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x50))) + 0xac))) = *((undefined4 *)GEN_TOP((param_1 + 0x38)));
    uVar1 = F_00befda0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x88) + 0x50))) GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf56 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bddcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbddcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x88) != 0) {
    F_00bbac80(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
    F_00bbacc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*(undefined4 *)(this + 0x88));
    uVar2 = F_00bbaea0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    if ((((char)uVar2 != '\0') ||
        (((*((char *)GEN_TOP((param_1 + 0x12))) == '\0' && (*((int *)GEN_TOP((param_1 + 4))) != 0)) &&
         (bVar1 = F_00b630d0(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 4)))), bVar1 != 0))))
       && (*(undefined * PTR32 *)(this + 0x88) != ((undefined *)GEN_TOP(0x0)))) {
      F_00b63220(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_ARG);
      *(undefined4 *)(this + 0x88) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bddd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbddd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)(this + 0x88) != ((undefined *)GEN_TOP(0x0))) {
    F_00b63220(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_FWD);
    *(undefined4 *)(this + 0x88) = 0;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bddd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbddd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xb0, 0);
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
    uVar3 = *((undefined4 *)GEN_TOP((iVar5 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar3;
    F_00b595f0(uVar3);
  }
  uVar6 = *(uint *)(this + 0x78);
  if (uVar6 == 0) {
    return 0;
  }
LAB_00bdddd2: ;
  if (*((char *)GEN_TOP((uVar6 + 0x12))) == '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP((uVar6 + 4)));
    (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this_00;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      *(undefined * PTR32 *)(this + 0x88) = this_00;
      if (*((int *)GEN_TOP(((int)this_00 + 0x50))) != 0) {
        F_00b63220(this_00 GEN_EDX_ARG);
        *(undefined4 *)(this + 0x88) = 0;
      }
      uVar6 = 0xffffffff;
      if ((*((int *)GEN_TOP((iVar2 + 0x18))) != -1) || (*((int *)GEN_TOP((iVar2 + 0x20))) != -1)) {
        *(undefined * PTR32 *)(this + 0x88) = (*(undefined * PTR32 *)(gen_frame + 0x9c));
        uVar7 = F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0x18))),0,0);
        uVar8 = F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0x20))),0,0);
        (*(uint *)(gen_frame + 0x98)) = uVar8;
        if ((uVar7 != 0) || (uVar6 = 0, uVar8 != 0)) {
          uVar3 = *((undefined4 *)GEN_TOP((iVar2 + 0x30)));
          uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x34)));
          (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((iVar2 + 0x2c)));
          (*(undefined4 *)(gen_frame + 0x30)) = *((undefined4 *)GEN_TOP((iVar2 + 0x44)));
          (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
          (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
          (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
          uVar3 = *((undefined4 *)GEN_TOP((iVar2 + 0x48)));
          (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
          uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x4c)));
          (*(undefined4 *)(gen_frame + 0x80)) = *((undefined4 *)GEN_TOP((iVar2 + 0x38)));
          (*(undefined4 *)(gen_frame + 0x34)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
          (*(undefined4 *)(gen_frame + 0x84)) = *((undefined4 *)GEN_TOP((iVar2 + 0x3c)));
          (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
          (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
          (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
          (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
          (*(undefined4 *)(gen_frame + 0x88)) = *((undefined4 *)GEN_TOP((iVar2 + 0x40)));
          F_00a1e0d0(&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x80)));
          (*(undefined4 *)(gen_frame + 0x80)) = *((undefined4 *)GEN_TOP((iVar2 + 0x50)));
          (*(undefined4 *)(gen_frame + 0x84)) = *((undefined4 *)GEN_TOP((iVar2 + 0x54)));
          (*(undefined4 *)(gen_frame + 0x88)) = *((undefined4 *)GEN_TOP((iVar2 + 0x58)));
          F_00a1e0d0(&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x80)));
          (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x68));
          (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x74));
          (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x60));
          (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x6c));
          (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x64));
          (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x78));
          (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x70));
          (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x7c));
          bVar4 = F_00b63030((*(undefined * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar2 + 0x14))),uVar7,&(*(undefined4 *)(gen_frame + 0x0)),
                               (uint)*((ushort *)GEN_TOP((iVar2 + 0x1c))),(*(uint *)(gen_frame + 0x98)),&(*(undefined4 *)(gen_frame + 0x30)),
                               (uint)*((ushort *)GEN_TOP((iVar2 + 0x24))),
                               (uint)(*((int *)GEN_TOP((iVar2 + 0x28))) != 1) * 4 + 2);
          uVar6 = CONCAT31(extraout_var,bVar4);
        }
      }
    }
  }
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bddfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbddfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if ((*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) == '\0') && (*(undefined * PTR32 *)(this + 0x88) != ((undefined *)GEN_TOP(0x0))))
  {
    F_00b63220(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_FWD);
    *(undefined4 *)(this + 0x88) = 0;
  }
  return 1;
}

/* ref: FUN_00bddfe0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bddfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbddfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) != ((undefined *)GEN_TOP(0x0))) {
    F_00b63220(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  return;
}

/* ref: FUN_00bde000 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00bde000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbde000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x2c + param_2 * 4)));
}

/* ref: FUN_00bde010 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00bde010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbde010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x38 + param_2 * 4)));
}

/* ref: FUN_00bde020 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00bde020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbde020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x44 + param_2 * 4)));
}

/* ref: FUN_00bde030 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00bde030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbde030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x50 + param_2 * 4)));
}

/* ref: Client::System::Scheduler::Clip::ConstrainClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bde040(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbde040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110b0f4));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bde070 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b214));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bde0c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 0;
  return;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bde0e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbde0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 2) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = 0;
    *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 0;
  }
  return 1;
}

/* ref: FUN_00bde110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bde14e;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bde139;
  }
  else {
LAB_00bde139: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bde14e: ;
  if ((((iVar3 != 0) && (*((char *)GEN_TOP((iVar3 + 0x12))) == '\0')) &&
      (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) &&
     ((piVar2[0x1b] == 8 || (piVar2[0x1b] == 9)))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bde180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar3 != 0) goto LAB_00bde1be;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar3 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 != 0) goto LAB_00bde1a9;
  }
  else {
LAB_00bde1a9: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x78)));
LAB_00bde1be: ;
  if ((((iVar3 != 0) && (*((char *)GEN_TOP((iVar3 + 0x12))) == '\0')) &&
      (piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) &&
     ((piVar2[0x1b] == 8 || (piVar2[0x1b] == 9)))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb4))))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bde230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbde230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
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
  
  uVar9 = F_00bde110(this GEN_EDX_FWD);
  if (((uVar9 != 0) && (*((char *)GEN_TOP((uVar9 + 0x11))) == '\x06')) && (*((int *)GEN_TOP((uVar9 + 0xa4))) != 0)) {
    this_00 = ((undefined *)GEN_TOP(F_00bde180(this GEN_EDX_ARG)));
    bVar7 = F_005db4d0(this_00 GEN_EDX_ARG);
    uVar9 = CONCAT31(extraout_var,bVar7);
    if (bVar7 == 0) {
      iVar4 = *(int *)(this + 0x24);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb0))))(this);
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2)) = gen_x87_cw;
      (*(ushort *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x4)));
      (*(int *)(gen_frame + 0x0)) = (int)(longlong)TRUNC(extraout_ST0);
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      fVar14 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      pSVar12 = this + 0x8c;
      fVar3 = ((float)GEN_TOF((((float10)GEN_TOD(((uint)((*(int *)(gen_frame + 0x0)) * 1000) / 0x1e))) / fVar14)));
      *(float *)pSVar12 = fVar3;
      *(float *)(this + 0x90) =
           ((float)GEN_TOF((((float10)GEN_TOD((((uint)*((ushort *)GEN_TOP((iVar4 + 0x12))) * 1000) / 0x1e))) / fVar14)));
      uVar9 = (uint)*((ushort *)GEN_TOP((iVar4 + 0x14))) * 1000;
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bde3b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
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
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x90)));
  ((float *)(gen_frame + 0x4))[1] = *((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)));
  fVar9 = (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)));
  pfVar7 = ((float *)GEN_TOP(CONCAT22((short)((uint)REFG(int, 0x137104c) >> 0x10),(ushort)(byte)REFG(int, 0x137104c))));
  ((float *)(gen_frame + 0x4))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[2], REFG(float, 0x1087f04));
  fVar2 = ((float)GEN_TOF((fVar9 + (float10)*((float *)GEN_TOP((in_ecx + 0x98))))));
  ((float *)(gen_frame + 0x4))[1] = fVar2;
  ((float *)(gen_frame + 0x4))[1] = fVar1;
  *((float *)GEN_TOP((in_ecx + 0x98))) = fVar2;
  fVar5 = (float10)1;
  if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) && ((float10)fVar2 < (float10)fVar1)) {
    ((float *)(gen_frame + 0x4))[1] = fVar6;
    ((float *)(gen_frame + 0x4))[0] = 0.0;
    pfVar7 = ((float *)(gen_frame + 0x4)) + 2;
    fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * (float10)fVar2)));
    ((float *)(gen_frame + 0x4))[2] = fVar1;
    if (!((float10)fVar1 < fVar5)) {
      pfVar7 = ((float *)(gen_frame + 0x4)) + 1;
    }
    if (!(0.0 < *pfVar7)) {
      pfVar7 = ((float *)(gen_frame + 0x4));
    }
    ((float *)(gen_frame + 0x4))[2] = *pfVar7;
  }
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x94)));
  bVar4 = GEN_ISNAN(fVar1);
  bVar8 = bVar4 || fVar1 == 0.0;
  pfVar7 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)pfVar7) >> 0x10),
                             CONCAT11(bVar8 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),(char)pfVar7))));
  ((float *)(gen_frame + 0x4))[0] = fVar1;
  if (bVar4 == bVar8) {
    fVar2 = *((float *)GEN_TOP((in_ecx + 0x8c)));
    ((float *)(gen_frame + 0x4))[1] = fVar2;
    fVar3 = *((float *)GEN_TOP((in_ecx + 0x98)));
    (*(float *)(gen_frame + 0x0)) = fVar3;
    fVar10 = (float10)fVar2;
    fVar11 = (float10)fVar3;
    if (fVar10 - (float10)fVar1 < fVar11) {
      (*(float *)(gen_frame + 0x0)) = fVar6;
      ((float *)(gen_frame + 0x4))[0] = 0.0;
      pfVar7 = ((float *)(gen_frame + 0x4)) + 2;
      fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * (fVar10 - fVar11))));
      ((float *)(gen_frame + 0x4))[2] = fVar1;
      if (!((float10)fVar1 < fVar5)) {
        pfVar7 = &(*(float *)(gen_frame + 0x0));
      }
      if (!(0.0 < *pfVar7)) {
        pfVar7 = ((float *)(gen_frame + 0x4));
      }
      ((float *)(gen_frame + 0x4))[2] = *pfVar7;
    }
  }
  ((float *)(gen_frame + 0x4))[1] = *((float *)GEN_TOP((in_ecx + 0x8c)));
  fVar10 = (float10)*((float *)GEN_TOP((in_ecx + 0x8c)));
  fVar1 = (float)(fVar9 / fVar10);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar9 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)((float *)(gen_frame + 0x4))[2] + (float10)*((float *)GEN_TOP((in_ecx + 0x88))))));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x9c))) * fVar9 + (float10)fVar1)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  *((float *)GEN_TOP((in_ecx + 0x88))) = fVar1;
  if ((GEN_ISNAN((float10)fVar1) || GEN_ISNAN(fVar5)) || (float10)fVar1 <= fVar5) {
    if (fVar10 < (float10)*((float *)GEN_TOP((in_ecx + 0x98)))) {
      *((float *)GEN_TOP((in_ecx + 0x88))) = fVar6;
      *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = 0;
      return (uint)pfVar7;
    }
  }
  else {
    *((float *)GEN_TOP((in_ecx + 0x88))) = fVar6;
    *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = 0;
  }
  return (uint)pfVar7;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbde550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  byte bVar2;
  int * this_00;
  uint uVar3;
  undefined * this_01;
  undefined3 extraout_var = 0;
  int * piVar4;
  bool bVar5;
  float10 fVar6;
  
  this_00 = ((int *)GEN_TOP(F_00bde110(this GEN_EDX_FWD)));
  piVar4 = this_00;
  if (((this_00 != ((int *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)this_00 + 0x11))) == '\x06')) &&
     (this_00[0x29] != 0)) {
    uVar3 = F_005f08c0(this_00 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x28)) = uVar3;
    piVar4 = ((int *)GEN_TOP(0x0));
    if (uVar3 != 0) {
      this_01 = ((undefined *)GEN_TOP(F_00bde180(this GEN_EDX_ARG)));
      bVar2 = F_005db4d0(this_01 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
      if (bVar2 == 0) {
        iVar1 = *(int *)(this + 0x24);
        (*(int *)(gen_frame + 0x24)) = iVar1;
        F_00bde3b0(this GEN_EDX_ARG);
        bVar5 = *((char *)GEN_TOP((iVar1 + 0x10))) != '\0';
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = bVar5;
        (*(undefined4 *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x2c)), 1, 3),bVar5);
        F_005d8960((*(uint *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),*(float *)(this + 0x88),bVar5);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xe8))))(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + 0xc))) == 1) {
          F_005d89f0((*(uint *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*(float *)(this + 0x88),(char)(*(undefined4 *)(gen_frame + 0x2c)));
        }
        else {
          uVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + 0xc))) - 2;
          if (uVar3 != 0) {
            return uVar3;
          }
          fVar6 = F_005e11b0((*(uint *)(gen_frame + 0x28)) GEN_EDX_ARG,*(float *)(this + 0x88),(*(undefined4 *)(gen_frame + 0x2c)));
          F_005fe650(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(float)fVar6);
        }
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xf0))))(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      }
    }
  }
  return (uint)piVar4;
}

/* ref: Client::System::Scheduler::Clip::SGMovePathClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bde680(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbde680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bde6e0 */
GEN_OWN GEN_FRAME float10 F_00bde6e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbde6e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf18 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_FWD,2);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf35 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bde740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbde740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x94) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x7c))))(*(int * PTR32 *)(this + 0x94) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x58))))(*(int * PTR32 *)(this + 0x94) GEN_EDX_ARG,param_2,5);
    }
  }
  return;
}

/* ref: FUN_00bde780 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bde780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x94))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,100);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x94))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  }
  return;
}

/* ref: FUN_00bde810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b4a4));
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00bde860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b4a4));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x94))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,100);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x94))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x9c))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x9c))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  uVar2 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x94);
  this[0x98] = (undefined1)0x0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x50))))(*(int * PTR32 *)(this + 0x94) GEN_EDX_ARG,100);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x78))))(*(int * PTR32 *)(this + 0x94) GEN_EDX_ARG,500);
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bde940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbde940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
    bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90) GEN_EDX_FWD);
    return CONCAT31(extraout_var_00,bVar2 == 0);
  }
  iVar3 = *(int *)(this + 0x2c) - 0x26;
  if (iVar3 != 0) {
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  if (*(int *)(this + 0x9c) == 0) {
    uVar4 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,*((int *)GEN_TOP((*(int *)(this + 0x24) + 0x24))) + *(int *)(this + 0x24)
                        );
    if (uVar4 == 0) {
      bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG);
      return CONCAT31(extraout_var,bVar2 == 0);
    }
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      uVar9 = 0;
      uVar8 = 0;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x18))))(piVar5 GEN_EDX_ARG)));
      pcVar6 = ((char *)GEN_TOP(F_00460270(this_00 GEN_EDX_ARG,uVar4,uVar8,uVar9)));
      if (pcVar6 == ((char *)GEN_TOP(0x0))) {
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
  bVar2 = F_00b5ca70(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG);
  if ((bVar2 == 0) && (*(int *)(this + 0x9c) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdea40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined4 extraout_EAX = 0;
  
  if (*(int *)(this + 0x94) == 0) {
LAB_00bdea75: ;
    if ((this[0x90] != (undefined1)0x0) && (this[0x99] == (undefined1)0x0)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_FWD,7);
      return uVar1;
    }
    return CONCAT31((int3)((uint)in_EAX >> 8),this[0x88] == (undefined1)0x0);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x7c))))(*(int * PTR32 *)(this + 0x94) GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x14))))(*(int * PTR32 *)(this + 0x94) GEN_EDX_ARG);
    if ((char)uVar1 == '\0') {
      F_00bde780(this GEN_EDX_ARG);
      in_EAX = extraout_EAX;
      goto LAB_00bdea75;
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00bdeab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdeab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdeab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
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
  
  (*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44);
  uVar3 = F_0049c160(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_FWD);
  if (uVar3 != 0x100) {
    uVar4 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,param_1);
    uVar3 = 0;
    if (uVar4 != 0) {
      ((float *)(gen_frame + 0xc))[1] = 0.0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
      if (piVar5 == ((int *)GEN_TOP(0x0))) {
        F_005a2710(((float *)(gen_frame + 0xc)) + 1 GEN_EDX_ARG,6);
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = &REFG(undefined, 0x110b3e2);
      }
      else {
        uVar9 = 0;
        uVar8 = 0;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x18))))(piVar5 GEN_EDX_ARG)));
        puVar6 = ((undefined *)GEN_TOP(F_00460270(this_00 GEN_EDX_ARG,uVar4,uVar8,uVar9)));
        F_005a2710(((float *)(gen_frame + 0xc)) + 1 GEN_EDX_ARG,6);
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = puVar6;
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      ((float *)(gen_frame + 0xc))[0] = 0.0;
      (*(float *)(gen_frame + 0x0)) = 0.0;
      (*(float *)(gen_frame + 0x4)) = 0.0;
      (*(float *)(gen_frame + 0x8)) = 0.0;
      if (REFG(int, 0x1370c0c) == 0) {
        uVar3 = F_00bd3f80(this GEN_EDX_ARG);
        F_00be7fc0(uVar3 + 0x3c GEN_EDX_ARG,(uint)((float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4)),(uint)&(*(float *)(gen_frame + 0x8)));
      }
      else {
        uVar3 = F_00bd3f80(this GEN_EDX_ARG);
        F_00be7d90(uVar3 + 0x3c GEN_EDX_ARG,((float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x8)));
      }
      if ((!GEN_ISNAN(((float *)(gen_frame + 0xc))[0]) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          !(((float *)(gen_frame + 0xc))[0] <= *(float *)&REFG(undefined, 0x1088114))) {
        dVar1 = GEN_X87((double)((float *)(gen_frame + 0xc))[0] * *(double *)&REFG(undefined, 0x1088118));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
        dVar2 = GEN_X87((double)(*(float *)(gen_frame + 0x0)) * *(double *)&REFG(undefined, 0x1088118));
        (*(int *)(gen_frame + 0x24)) = (int)dVar1;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
        (*(int *)(gen_frame + 0x2c)) = (int)dVar2;
        iVar7 = (int)(*(float *)(gen_frame + 0x8));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,3);
        (*(int *)(gen_frame + 0x34)) = iVar7;
        iVar7 = (int)(*(float *)(gen_frame + 0x4));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG,3);
        (*(int *)(gen_frame + 0x3c)) = iVar7;
      }
      uVar3 = F_00bd3f80(this GEN_EDX_ARG);
      F_00be8250(((undefined *)GEN_TOP((uVar3 + 0x3c))) GEN_EDX_ARG,1,((float *)(gen_frame + 0xc)) + 1,6);
      this_01 = &(*(uint *)(gen_frame + 0x40));
      iVar7 = 5;
      do {
        this_01 = this_01 - 2;
        uVar3 = F_005a2670(this_01 GEN_EDX_ARG);
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
    }
  }
  return uVar3;
}

/* ref: FUN_00bdec70 */
GEN_OWN GEN_FRAME uint F_00bdec70(GEN_P(uint * in_eax, unsigned int gen_a0), GEN_P(uint * in_edx, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbdec70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * in_eax = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * in_edx = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_00bdec90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdec90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x98, 8);
  ushort uVar1;
  undefined * puVar2;
  int * PTR32 * ppiVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  uint * puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88);
  if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0x26) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88);
  }
  iVar9 = *((int *)GEN_TOP(((int)this + 0x24)));
  (*(int *)(gen_frame + 0x8)) = iVar9;
  piVar6 = *((int * PTR32 *)GEN_TOP((iVar9 + 0x10)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x3));
  (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
  if (piVar6 < ((int *)GEN_TOP(0x3))) {
    ppiVar3 = &(*(int * PTR32 *)(gen_frame + 0x14));
    if (piVar6 == ((int *)GEN_TOP(0x0))) {
      ppiVar3 = &(*(int * PTR32 *)(gen_frame + 0x4));
    }
  }
  else {
    ppiVar3 = &(*(int * PTR32 *)(gen_frame + 0xc));
  }
  (*(int * PTR32 *)(gen_frame + 0x14)) = *ppiVar3;
  pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = REFG(int * PTR32, 0x14c4e84);
  if (pvVar7 == ((undefined *)GEN_TOP(0x0))) {
    iVar9 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar9 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar9 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar9 != 0) goto LAB_00bded2e;
    }
    else {
LAB_00bded2e: ;
      uVar13 = *((undefined4 *)GEN_TOP((iVar9 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar13;
      F_00b595f0(uVar13);
    }
    pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
    piVar6 = ((int *)GEN_TOP(0x0));
    if (pvVar7 == ((undefined *)GEN_TOP(0x0))) goto LAB_00bdef13;
  }
  piVar4 = ((int *)GEN_TOP(F_00bbaf90(pvVar7 GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar4;
  piVar6 = ((int *)GEN_TOP(0x0));
  if ((piVar4 != ((int *)GEN_TOP(0x0))) && (piVar6 = (*(int * PTR32 *)(gen_frame + 0x14)), (*(int * PTR32 *)(gen_frame + 0x14)) != ((int *)GEN_TOP(0x3)))) {
    if (0 < *((int *)GEN_TOP(((int)this + 0x8c)))) {
      puVar2 = (&REFG(undefined * PTR32, 0x110b40c))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x14)))];
      *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0xffffffff;
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0xffffffff));
      (*(undefined4 *)(gen_frame + 0x30)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x34)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0x5c)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = puVar2;
      *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa0))) = puVar2;
      uVar1 = *(ushort *)(piVar4 + 0x22);
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x38)) = 0x1000000;
      uVar5 = F_00b5be60((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)),(uint)uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x0)),0,0,&(*(undefined4 *)(gen_frame + 0x18)));
      return uVar5;
    }
    if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x16))) == '\0') {
      *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 1;
    }
    uVar5 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,*((int *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x24))) + (*(int *)(gen_frame + 0x8)));
    piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (uVar5 == 0) {
      return (uint)piVar6;
    }
    if (piVar6 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar12 = 0;
    uVar11 = 0;
    uVar13 = REFG(undefined4, 0x108cc50);
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG)));
    uVar5 = F_00460270(pvVar7 GEN_EDX_ARG,uVar5,uVar11,uVar12);
    F_0042cc20(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar5,uVar13);
    iVar9 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x14))) * 0xc;
    (*(int * PTR32 *)(gen_frame + 0x14)) = *(int * PTR32 *)(&REFG(undefined, 0x110b3ac) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x14))) * 0xc);
    uVar5 = F_0042a970(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    if (uVar5 < 0x40) {
      piVar6 = (*(int * PTR32 *)(gen_frame + 0x14));
      if (0xf < uVar5) {
        piVar6 = *(int * PTR32 *)(&REFG(undefined, 0x110b3b0) + iVar9);
      }
    }
    else {
      piVar6 = *(int * PTR32 *)(&REFG(undefined, 0x110b3b4) + iVar9);
    }
    puVar8 = ((uint *)GEN_TOP(F_00ab2a20(piVar6)));
    if (puVar8 != ((uint *)GEN_TOP(0x0))) {
      iVar9 = (*puVar8 & 0xffffff) + (int)puVar8;
      *((int *)GEN_TOP(((int)this + 0xa0))) = iVar9;
      (*(int *)(gen_frame + 0x10)) = iVar9;
      *((int * PTR32 *)GEN_TOP(((int)this + 0xa4))) = piVar6;
      uVar1 = *(ushort *)((*(int * PTR32 *)(gen_frame + 0x4)) + 0x22);
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
      F_00b5be60((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)),(uint)uVar1,&(*(int *)(gen_frame + 0x10)),0,0,0);
    }
    uVar10 = F_0042c880(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    return (uint)uVar10;
  }
LAB_00bdef13: ;
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 1;
  return (uint)piVar6;
}

/* ref: FUN_00bdef30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bdef30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdef30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 uVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  undefined * this_01;
  uint uVar5;
  
  this_00 = REFG(void * PTR32, 0x14c4e84);
  if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0x26) {
    return;
  }
  uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0x10)));
  ((int *)(gen_frame + 0x0))[2] = uVar5;
  ((int *)(gen_frame + 0x0))[1] = 3;
  ((int *)(gen_frame + 0x0))[0] = 0;
  if (uVar5 < 3) {
    piVar3 = ((int *)(gen_frame + 0x0)) + 2;
    if (uVar5 == 0) {
      piVar3 = ((int *)(gen_frame + 0x0));
    }
  }
  else {
    piVar3 = ((int *)(gen_frame + 0x0)) + 1;
  }
  iVar1 = *piVar3;
  this_01 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_01 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bdefb9;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar4 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar4 != 0) goto LAB_00bdefa0;
  }
  else {
LAB_00bdefa0: ;
    uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar2;
    F_00b595f0(uVar2);
  }
  this_01 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_01 == ((undefined *)GEN_TOP(0x0))) {
    return;
  }
LAB_00bdefb9: ;
  uVar5 = F_00bbaf90(this_01 GEN_EDX_ARG);
  if (((uVar5 != 0) && (iVar1 != 3)) &&
     ((*((int *)GEN_TOP(((int)this + 0xa4))) != -1 || (*((int *)GEN_TOP(((int)this + 0xa0))) != 0)))) {
    F_00b5ad70(this_00 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar5 + 0x88))),((int *)GEN_TOP(((int)this + 0xa0))),0);
  }
  return;
}

/* ref: FUN_00bdf000 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bdf000(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbdf000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0049c120(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_ARG);
  if (3 < uVar1) {
    return 4;
  }
  if (uVar1 != 0) {
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bdf060 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bdf060(unsigned int gen_a0)
{
  GEN_ENTER(0xbdf060u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  uVar3 = F_0049c120(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_ARG);
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
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    uVar5 = 0;
  }
  else {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
    uVar5 = uVar5 & 0xff;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c))) + uVar3 * 0xc + (*(int *)&gen_args[0]))));
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
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bdf120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbdf120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  uint uVar1;
  undefined1 * puVar2;
  int * piVar3;
  undefined1 * puVar4;
  int iVar5;
  uint * puVar6;
  int * piVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  *param_1 = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = param_1;
  puVar4 = param_1;
  if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0x26) {
    iVar5 = *((int *)GEN_TOP(((int)this + 0x24)));
    piVar7 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0x24))) + iVar5)));
    uVar1 = F_0049c120(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_FWD);
    ((uint *)(gen_frame + 0x4))[0] = uVar1;
    ((uint *)(gen_frame + 0x4))[1] = 4;
    ((uint *)(gen_frame + 0x4))[2] = 0;
    if (uVar1 < 4) {
      puVar6 = ((uint *)(gen_frame + 0x4));
      if (uVar1 == 0) {
        puVar6 = ((uint *)(gen_frame + 0x4)) + 2;
      }
    }
    else {
      puVar6 = ((uint *)(gen_frame + 0x4)) + 1;
    }
    (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar6;
    puVar2 = ((undefined1 *)GEN_TOP(F_00bdf060(iVar5)));
    puVar4 = puVar2;
    if ((*piVar7 == 0x54584554) && ((char)piVar7[1] == '_')) {
      piVar3 = piVar7;
      do {
        iVar5 = *piVar3;
        piVar3 = ((int *)GEN_TOP(((int)piVar3 + 1)));
      } while ((char)iVar5 != '\0');
      puVar4 = ((undefined1 *)GEN_TOP(((int)piVar3 - (int)((int)piVar7 + 1))));
      if (((((undefined1 *)GEN_TOP(0x1a)) < puVar4) && (*((char *)GEN_TOP(((int)piVar7 + 0xe))) == '_')) &&
         ((char)piVar7[5] == '_')) {
        iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0xb))));
        puVar4 = ((undefined1 *)GEN_TOP(0x0));
        if (iVar5 != 0) {
          iVar5 = F_00c48637((int)(char)piVar7[3]);
          puVar4 = ((undefined1 *)GEN_TOP(0x0));
          if (iVar5 != 0) {
            iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0xd))));
            puVar4 = ((undefined1 *)GEN_TOP(0x0));
            if (iVar5 != 0) {
              iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0xf))));
              puVar4 = ((undefined1 *)GEN_TOP(0x0));
              if (iVar5 != 0) {
                iVar5 = F_00c48637((int)(char)piVar7[4]);
                puVar4 = ((undefined1 *)GEN_TOP(0x0));
                if (iVar5 != 0) {
                  iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0x11))));
                  puVar4 = ((undefined1 *)GEN_TOP(0x0));
                  if (iVar5 != 0) {
                    iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0x12))));
                    puVar4 = ((undefined1 *)GEN_TOP(0x0));
                    if (iVar5 != 0) {
                      iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0x13))));
                      puVar4 = ((undefined1 *)GEN_TOP(0x0));
                      if (iVar5 != 0) {
                        iVar5 = F_00c486bb((int)*((char *)GEN_TOP(((int)piVar7 + 0x15))));
                        puVar4 = ((undefined1 *)GEN_TOP(0x0));
                        if (iVar5 != 0) {
                          iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0x16))));
                          puVar4 = ((undefined1 *)GEN_TOP(0x0));
                          if (iVar5 != 0) {
                            iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0x17))));
                            puVar4 = ((undefined1 *)GEN_TOP(0x0));
                            if (iVar5 != 0) {
                              iVar5 = F_00c48637((int)(char)piVar7[6]);
                              puVar4 = ((undefined1 *)GEN_TOP(0x0));
                              if (iVar5 != 0) {
                                iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0x19))));
                                puVar4 = ((undefined1 *)GEN_TOP(0x0));
                                if (iVar5 != 0) {
                                  iVar5 = F_00c48637((int)*((char *)GEN_TOP(((int)piVar7 + 0x1a))));
                                  puVar4 = ((undefined1 *)GEN_TOP(0x0));
                                  if ((iVar5 != 0) &&
                                     (puVar4 = ((undefined1 *)GEN_TOP(F_00c4c844(piVar7,((char *)REFP(0x110b440)),
                                                          ((undefined1 *)(gen_frame + 0x28)),7,&(*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x1c)),
                                                          &(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x14))))),
                                     puVar4 == &REFG(undefined, 0x6))) {
                                    puVar4 = ((undefined1 *)GEN_TOP(F_00c472af((*(undefined1 * PTR32 *)(gen_frame + 0x10)),param_2,
                                                                                                                
                                                  ((char *)REFP(0x110b45c))
                                                  ,((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x18)),
                                                  (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x14)),
                                                  (-(uint)(puVar2 != ((undefined1 *)GEN_TOP(0x0))) & 0xfffffff9
                                                  ) + 0x6d,(&REFG(undefined * PTR32, 0x1345aa4))[(int)(*(*(uint * PTR32 *)(gen_frame + 0x24)))])));
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
  return (uint)puVar4;
}

/* ref: FUN_00bdf390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdf390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdf390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x88, 8, 4);
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84);
  (*(uint *)(gen_frame + 0x80)) = uVar5;
  if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0x26) {
    uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
    iVar3 = *((int *)GEN_TOP(((int)this + 0x24)));
    uVar6 = F_0049c120(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_FWD);
    uVar5 = uVar6 * 3;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x1c))) + uVar6 * 0xc + iVar3))) != 0) {
      F_00bdf120(this GEN_EDX_ARG,((char *)(gen_frame + 0x0)),0x80);
      pcVar7 = ((char *)(gen_frame + 0x0));
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0;
      if (pcVar7 != ((char *)(gen_frame + 0x0)) + 1) {
        piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x94)));
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          uVar5 = F_004e9a80(uVar2 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(float)(float10)1,0,0,0);
          if (uVar5 == 0) {
            return 0;
          }
        }
        else {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x78))))(piVar4 GEN_EDX_ARG,500);
          uVar5 = F_004e9a80(uVar2 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(float)(float10)1,0,0,0);
        }
        *((uint *)GEN_TOP(((int)this + 0x94))) = uVar5;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00bdf470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdf470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbdf470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  
  uVar2 = F_0049c120(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_FWD);
  iVar5 = (*(int *)&gen_args[0]);
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
  uVar2 = F_00bdf060((*(int *)&gen_args[0]));
  uVar4 = F_0049c120(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_ARG);
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0x1c))) + uVar4 * 0xc + iVar5))) != 0) {
    iVar1 = *((int *)GEN_TOP((iVar5 + 0x1c))) + iVar1 * 0xc;
    if (uVar2 == 0) {
      iVar5 = *((int *)GEN_TOP((iVar1 + 4 + iVar5)));
    }
    else {
      iVar5 = *((int *)GEN_TOP((iVar1 + 8 + iVar5)));
    }
    iVar5 = (iVar5 * 0x1e) / 1000 - 0xf;
    (*(int *)&gen_args[0]) = iVar5;
    puVar6 = (uint *)&(*(int *)&gen_args[0]);
    if (iVar5 < 0x10) {
      puVar6 = &REFG(undefined4, 0x110b418);
    }
    return *puVar6;
  }
  return 0;
}

/* ref: FUN_00bdf540 */
GEN_OWN GEN_FRAME unsigned int F_00bdf540(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbdf540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x94)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x94))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x94))) GEN_EDX_ARG,100);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x94))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x94))) GEN_EDX_ARG,500);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x94))) = 0;
  }
  F_00bdef30(param_1 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x90))) = 1;
  return;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf1 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00bdf5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdf5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  char cVar1;
  int iVar2;
  int * piVar3;
  float10 fVar4;
  byte bVar5;
  uint uVar6;
  char * pcVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar5 = F_00bd1fe0(this GEN_EDX_FWD);
  if (bVar5 != 0) {
    bVar5 = F_00bd2590((undefined *)this GEN_EDX_ARG);
    return bVar5;
  }
  if ((*(int *)(this + 0x2c) == 0x26) &&
     (iVar2 = *(int *)(this + 0x24), this[0x98] == (undefined1)0x0)) {
    if (*(int *)(this + 0x94) == 0) {
      uVar6 = F_0049c120(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_ARG);
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x1c))) + uVar6 * 0xc + iVar2))) != 0) {
        F_00bdf120(this GEN_EDX_ARG,((char *)(gen_frame + 0x0)),0x80);
        pcVar7 = ((char *)(gen_frame + 0x0));
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (pcVar7 != ((char *)(gen_frame + 0x0)) + 1) {
          fVar4 = (float10)0;
          uVar6 = F_004e96c0(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(float)(float10)1,0,
                               (float)fVar4,(float)fVar4,(float)fVar4,(float)(float10)1,0,0,0);
          if (uVar6 != 0) {
            *(uint *)(this + 0x94) = uVar6;
          }
        }
      }
    }
    piVar3 = *(int * PTR32 *)(this + 0x94);
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
      if ((char)uVar6 != '\0') {
        return 0;
      }
      this[0x98] = (undefined1)0x1;
    }
  }
  bVar5 = F_00bd2590((undefined *)this GEN_EDX_ARG);
  return bVar5;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdf6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdf6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x10, 0);
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
  uVar3 = F_00bd3f80(this GEN_EDX_FWD);
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = *(int *)(this + 0x2c) - 0x24;
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x24: ;
    uVar3 = F_00bdeab0(this GEN_EDX_ARG,*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) + *(int *)(this + 0x24));
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x25: ;
    uVar3 = F_00bd3f80(this GEN_EDX_ARG);
    uVar3 = F_00be8250(((undefined *)GEN_TOP((uVar3 + 0x3c))) GEN_EDX_ARG,5,0,0);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x26: ;
    uVar4 = F_00bd3f80(this GEN_EDX_ARG);
    iVar5 = *(int *)(this + 0x24);
    iVar1 = *((int *)GEN_TOP((iVar5 + 0xc)));
    if (iVar1 == 0) {
LAB_00bdf79b: ;
      F_00bdf390(this GEN_EDX_ARG);
      this[0x88] = (undefined1)0x1;
      uVar3 = F_00bdf470(this GEN_EDX_ARG,iVar5);
      *(uint *)(this + 0x8c) = uVar3;
      this[0x99] = (undefined1)0x0;
      uVar3 = F_00bd40a0(this GEN_EDX_ARG);
      MVar6 = (undefined1)(uVar3 == 0);
      uVar3 = CONCAT31((int3)(uVar3 >> 8),MVar6);
      this[0x90] = MVar6;
      if ((!(bool)MVar6) && (*(int *)(this + 0x8c) == 0)) {
        this[0x90] = (undefined1)0x1;
      }
    }
    else {
      if (iVar1 == 9) {
        F_00bdeab0(this GEN_EDX_ARG,*((int *)GEN_TOP((iVar5 + 0x24))) + iVar5);
        goto LAB_00bdf79b;
      }
      uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),(byte)this[0x7c] >> 4);
      (*(char *)(gen_frame + 0xb)) = '\0';
      if (((byte)this[0x7c] >> 4 & 1) == 0) {
        uVar3 = F_00bd3ff0(this GEN_EDX_ARG);
        F_00be90c0(((undefined *)GEN_TOP((uVar4 + 0x3c))) GEN_EDX_ARG,iVar5,*(undefined4 *)(this + 0x9c),uVar3);
        *((gen_code32 *)GEN_TOP((uVar4 + 0x8c))) = ((code *)REFP(0xbdf540));
        *((undefined * PTR32 *)GEN_TOP((uVar4 + 0x90))) = this;
        F_00bdf390(this GEN_EDX_ARG);
        this[0x88] = (undefined1)0x1;
        (*(char *)(gen_frame + 0xb)) = '\x01';
        uVar3 = F_00bdf470(this GEN_EDX_ARG,iVar5);
        *(uint *)(this + 0x8c) = uVar3;
        this[0x99] = (undefined1)(*((char *)GEN_TOP((iVar5 + 0x15))) != '\0');
      }
      if (*((char *)GEN_TOP((iVar5 + 0x15))) != '\0') {
        bVar2 = *((byte *)GEN_TOP((uVar4 + 0x70))) >> 1;
        uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
        if ((bVar2 & 1) == 0) {
          this[0x99] = (undefined1)0x0;
        }
        else {
          uVar3 = F_00bd30b0(this GEN_EDX_ARG,1);
        }
      }
      if ((*(char *)(gen_frame + 0xb)) == '\0') break;
    }
    if (this[0x88] != (undefined1)0x0) {
      uVar3 = F_00bdec90(this GEN_EDX_ARG);
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
    uVar3 = F_00bd3f80(this GEN_EDX_ARG);
    bVar2 = F_00bdfd90(uVar3 + 0x3c GEN_EDX_ARG);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      uVar3 = F_00bd30b0(this GEN_EDX_ARG,1);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    break;
  case 0x35: ;
    uVar3 = F_00bd3f80(this GEN_EDX_ARG);
    if (*((int *)GEN_TOP((uVar3 + 0x6c))) == 1) {
      uVar3 = F_00bd3f80(this GEN_EDX_ARG);
      bVar2 = F_00be8e90(uVar3 + 0x3c GEN_EDX_ARG,1,0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return CONCAT31(extraout_var_00,bVar2);
    }
    uVar3 = F_00bd3f80(this GEN_EDX_ARG);
    bVar2 = F_00be8e90(uVar3 + 0x3c GEN_EDX_ARG,0,0);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return CONCAT31(extraout_var_01,bVar2);
  case 0x36: ;
    iVar5 = *(int *)(this + 0x24);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    iVar5 = *((int *)GEN_TOP((iVar5 + 0xc)));
    if ((iVar5 < 0) && (*((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14))) != 0)) {
      iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14))) + 0x18)));
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x4)) = iVar5;
    uVar3 = F_00bd3f80(this GEN_EDX_ARG);
    F_00be8250(((undefined *)GEN_TOP((uVar3 + 0x3c))) GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)),1);
    uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x67: ;
    uVar4 = F_00bd3f80(this GEN_EDX_ARG);
    uVar3 = uVar4;
    if (((byte)this[0x7c] >> 4 & 1) == 0) {
      uVar3 = F_00be84a0(((undefined *)GEN_TOP((uVar4 + 0x3c))) GEN_EDX_ARG,*(undefined4 *)(this + 0x24));
    }
    if ((*((byte *)GEN_TOP((uVar4 + 0x70))) >> 2 & 1) == 0) {
      uVar3 = F_00bd30b0(this GEN_EDX_ARG,1);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    this[0x90] = (undefined1)0x1;
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    return uVar3;
  case 0x6c: ;
    if (*((int *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != 1) {
      uVar3 = F_00bd3f80(this GEN_EDX_ARG);
      uVar3 = F_00be8250(((undefined *)GEN_TOP((uVar3 + 0x3c))) GEN_EDX_ARG,7,0,0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    uVar3 = F_00bd3f80(this GEN_EDX_ARG);
    uVar3 = F_00be8250(((undefined *)GEN_TOP((uVar3 + 0x3c))) GEN_EDX_ARG,8,0,0);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdfae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdfae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
  uVar2 = F_00bd3f80(this GEN_EDX_FWD);
  this_00 = REFG(void * PTR32, 0x14c4ea0);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = *(int *)(this + 0x2c) - 0x24;
    switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
    case 0x24: ;
      uVar3 = F_00bd3f80(this GEN_EDX_ARG);
      F_00be8e90(uVar3 + 0x3c GEN_EDX_ARG,1,1);
      return CONCAT31(extraout_var,1);
    case 0x26: ;
      F_00bd3f80(this GEN_EDX_ARG);
      uVar3 = *(uint *)(this + 0x24);
      if ((((param_1 == 2) || (param_1 == 3)) || (param_1 == 4)) ||
         (((param_1 == 7 && (*((char *)GEN_TOP((uVar3 + 0x15))) != '\0')) && (*((char *)GEN_TOP((uVar3 + 0x16))) == '\0'))
         )) {
        if (*((int *)GEN_TOP((uVar3 + 0xc))) == 0) {
          F_00bde780(this GEN_EDX_ARG);
          F_00bdef30(this GEN_EDX_ARG);
          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        }
        uVar3 = F_00bd3f80(this GEN_EDX_ARG);
        F_00be8e90(uVar3 + 0x3c GEN_EDX_ARG,0,0);
        return CONCAT31(extraout_var_00,1);
      }
      break;
    case 0x36: ;
      uVar3 = F_00bd3f80(this GEN_EDX_ARG);
      bVar1 = F_00be8e90(uVar3 + 0x3c GEN_EDX_ARG,4,0);
      return CONCAT31(extraout_var_01,bVar1);
    case 0x67: ;
      uVar3 = F_00bd3f80(this GEN_EDX_ARG);
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00b5f440(this_00 GEN_EDX_ARG,0x1000000e,*((byte *)GEN_TOP((uVar3 + 0x69))) + 1);
      }
      uVar3 = F_00bd3f80(this GEN_EDX_ARG);
      F_00be8e90(uVar3 + 0x3c GEN_EDX_ARG,6,0);
      return CONCAT31(extraout_var_02,1);
    }
  }
  return uVar3 & 0xffffff00;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdfc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbdfc60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  
  if ((*(int *)(this + 0x2c) == 0x26) && (this[0x90] == (undefined1)0x0)) {
    F_00bd3f80(this GEN_EDX_FWD);
    if (0 < *(int *)(this + 0x8c)) {
      fVar1 = F_00bd2390(this GEN_EDX_ARG);
      if ((float10)*(int *)(this + 0x8c) <= (float10)fVar1) {
        F_00bdef30(this GEN_EDX_ARG);
        this[0x90] = (undefined1)0x1;
      }
    }
  }
  return;
}

/* ref: FUN_00bdfce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdfce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbdfce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x50))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_1;
  return param_2;
}

/* ref: FUN_00bdfd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdfd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdfd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 0x1c))) + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Clip::MessageClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bdfd60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbdfd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bde860(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bdfd90 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdfd90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdfd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x10))) != 0) && ((*((byte *)GEN_TOP((in_ecx + 0x34))) >> 1 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bdfdc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdfdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdfdc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  return (uint)this;
}

/* ref: FUN_00bdfde0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdfde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdfde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) != ((undefined *)GEN_TOP(0x0))) {
    F_00ba1f90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x8c))) = 0;
  uVar1 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdfe20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdfe20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x88) != 0) {
    uVar1 = F_00ba1950();
    return uVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf24 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdfe40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdfe40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)(this + 0x88) != ((undefined *)GEN_TOP(0x0))) {
    F_00ba1f90(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_FWD);
    *(undefined4 *)(this + 0x88) = 0;
  }
  this[0x8c] = (undefined1)0x0;
  return;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdfe70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdfe70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (this[0x8c] != (undefined1)0x0) {
    uVar2 = F_00ba1930();
    if ((char)uVar2 == '\0') {
      bVar1 = F_00ba1940();
      if (bVar1 == 0) goto LAB_00bdfeb7;
    }
    F_00ba1d20(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_ARG);
    this[0x8c] = (undefined1)0x0;
    *(undefined2 *)(this + 0x8e) = 0x101;
    return;
  }
LAB_00bdfeb7: ;
  this[0x8e] = (undefined1)0x1;
  return;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdfec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdfec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return;
  }
  if (*((int *)GEN_TOP(((int)this_00 + 0x28))) == 3) {
    F_00ba1a40(this_00 GEN_EDX_FWD,2,0xffffffff);
  }
  uVar2 = F_00ba1e40(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    if (this[0x8c] == (undefined1)0x0) {
      F_00ba1c30(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_ARG,0);
      this[0x8c] = (undefined1)0x1;
    }
    uVar2 = F_00ba1930();
    if ((char)uVar2 != '\0') {
      return;
    }
    bVar1 = F_00ba1940();
    if (bVar1 != 0) {
      return;
    }
  }
  F_00bd30b0(this GEN_EDX_ARG,0);
  return;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bdff40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbdff40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)(this + 0x88) != 0) && (this[0x8c] != (undefined1)0x0)) {
    uVar2 = F_00ba1930();
    if ((char)uVar2 == '\0') {
      bVar1 = F_00ba1940();
      if (bVar1 == 0) goto LAB_00bdff8f;
    }
    F_00ba1d20(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_ARG);
    this[0x8c] = (undefined1)0x0;
    *(undefined2 *)(this + 0x8e) = 0x101;
    return 1;
  }
LAB_00bdff8f: ;
  this[0x8e] = (undefined1)0x1;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf35 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bdffa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbdffa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  *((byte *)GEN_TOP((in_ecx + 0x8d))) = param_3;
  return param_3;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bdffb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbdffb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf19 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bdffc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbdffc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint in_EAX = 0;
  char * pcVar2;
  uint uVar3;
  char * _Str;
  
  if (*(int *)(this + 0x88) == 0) {
    iVar1 = *(int *)(this + 0x24);
    in_EAX = 0;
    if (iVar1 != 0) {
      _Str = ((char *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xc))) + iVar1)));
      pcVar2 = F_00c46a10(_Str,((char *)REFP(0x110b5bc)));
      if (pcVar2 == ((char *)GEN_TOP(0x0))) {
        pcVar2 = F_00c46a10(_Str,((char *)REFP(0x110b5c8)));
        in_EAX = 0;
        if (pcVar2 == ((char *)GEN_TOP(0x0))) goto LAB_00be0010;
      }
      in_EAX = F_00ba1ef0(2,0xffffffff);
      *(uint *)(this + 0x88) = in_EAX;
    }
  }
LAB_00be0010: ;
  if (*(undefined * PTR32 *)(this + 0x88) == ((undefined *)GEN_TOP(0x0))) {
    return in_EAX & 0xffffff00;
  }
  uVar3 = F_00ba1e40(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_ARG);
  if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x28))) == 3)) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::ShowMovieClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be0050(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110b5d4));
  if (((undefined *)GEN_TOP(param_1[0x22])) != ((undefined *)GEN_TOP(0x0))) {
    F_00ba1f90(((undefined *)GEN_TOP(param_1[0x22])) GEN_EDX_FWD);
    param_1[0x22] = 0;
  }
  *(undefined1 *)(param_1 + 0x23) = 0;
  F_00bd2e60(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00be00a0 */
GEN_OWN GEN_FRAME float10 F_00be00a0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbe00a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf6 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00be00c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe00c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint in_ecx;
  undefined * this_00;
  
  if (this[0x88] == (undefined1)0x0) {
    return;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
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
      uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)(this + 0x78);
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00be0117;
  }
  in_ecx = F_00bbaf90(this_00 GEN_EDX_ARG);
  if (in_ecx != 0) {
    F_00a9fbd0(in_ecx GEN_EDX_ARG);
  }
LAB_00be0117: ;
  this[0x88] = (undefined1)0x0;
  return;
}

/* ref: FUN_00be0120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be0120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00be0161;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00be0148;
  }
  else {
LAB_00be0148: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return uVar3;
  }
LAB_00be0161: ;
  uVar3 = F_00bc5190(this_00 GEN_EDX_ARG,param_1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xc))));
  return uVar3;
}

/* ref: FUN_00be0180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be0180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00be01be;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
  if (iVar2 == 0) {
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x6c)));
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00be01a5;
  }
  else {
LAB_00be01a5: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return uVar3;
  }
LAB_00be01be: ;
  uVar4 = F_00bbaf90(this_00 GEN_EDX_ARG);
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = F_00bd2420(this GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00be01e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be01e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbe01e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
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
  
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x6c)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    uVar6 = 0;
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      uVar6 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *((uint *)GEN_TOP((param_1 + 0x6c))) = uVar6;
    }
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x6c)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      return uVar6;
    }
  }
  piVar4 = ((int *)GEN_TOP(F_00beb6b0(this GEN_EDX_FWD)));
  uVar6 = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    fVar9 = (float10)param_2;
    iVar8 = *((int *)GEN_TOP((param_1 + 0x24)));
    pfVar7 = ((float *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 0xc))) + iVar8)));
    pfVar5 = ((float *)GEN_TOP((iVar8 + *((int *)GEN_TOP((iVar8 + 0x14))))));
    fVar10 = GEN_X87((float10)(float)((float10)1 - fVar9));
    fVar1 = (float)(fVar9 * (float10)*pfVar5 + fVar10 * (float10)*pfVar7);
    fVar2 = pfVar5[1];
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = (float)((float10)pfVar7[1] * fVar10 + (float10)fVar2 * fVar9);
    (*(float *)(gen_frame + 0x18)) = fVar2;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    fVar2 = (float)((float10)pfVar7[2] * fVar10 + (float10)pfVar5[2] * fVar9);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x10)) = (float)(fVar10 * (float10)pfVar7[3] + (float10)pfVar5[3] * fVar9);
    (*(float *)(gen_frame + 0x8)) = fVar2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x60))))(piVar4 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    fVar9 = (float10)(*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)1 - fVar9);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x68))))(piVar4 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)((float10)1 - fVar9)));
    uVar6 = F_00beb670(this GEN_EDX_ARG);
    if (uVar6 != 0) {
      iVar8 = 3;
      piVar4 = ((int *)GEN_TOP((uVar6 + 0x2da0)));
      do {
        iVar8 = iVar8 - 1;
        piVar4 = piVar4 - 0x1e8;
        if (piVar4 != ((int *)GEN_TOP(0x0))) {
          pcVar3 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x60)));
          (*(float *)(gen_frame + 0x0)) = fVar1;
          (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x18));
          (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x14));
          (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*pcVar3)(piVar4,&(*(float *)(gen_frame + 0x0)));
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x68))))(piVar4 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10))));
        }
      } while (iVar8 != 0);
    }
  }
  return uVar6;
}

/* ref: FUN_00be0340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be0340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe0340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b774));
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((ushort *)GEN_TOP(((int)this + 0x7c))) = *((ushort *)GEN_TOP(((int)this + 0x7c))) & 0xffef;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be0370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe0370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_FWD,3);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be0390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  
  pvVar5 = *(undefined * PTR32 *)(this + 0x78);
  if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
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
      uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar1;
      uVar3 = F_00b595f0(uVar1);
    }
    pvVar5 = *(undefined * PTR32 *)(this + 0x78);
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      return uVar3;
    }
  }
  uVar3 = F_00bbaf90(pvVar5 GEN_EDX_ARG);
  if (uVar3 == 0) {
    return 0;
  }
  iVar2 = *(int *)(this + 0x2c);
  if (iVar2 != 0x22) {
    if (iVar2 == 0x38) {
      uVar3 = F_00be01e0(this GEN_EDX_ARG,(float)(float10)0);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    if (iVar2 == 0x6b) {
      uVar3 = F_00a9fbc0(uVar3 GEN_EDX_ARG);
      this[0x88] = (undefined1)0x1;
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar3;
    }
    goto LAB_00be0469;
  }
  pvVar5 = *(undefined * PTR32 *)(this + 0x78);
  iVar2 = *(int *)(this + 0x24);
  if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
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
      uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    pvVar5 = *(undefined * PTR32 *)(this + 0x78);
    uVar3 = 0;
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) goto LAB_00be0469;
  }
  uVar3 = F_00bc3c60(pvVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0xc))));
LAB_00be0469: ;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be0480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00be04ce;
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
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 1;
  }
LAB_00be04ce: ;
  uVar3 = F_00bbaf90(this_00 GEN_EDX_ARG);
  if (uVar3 != 0) {
    iVar2 = *(int *)(this + 0x2c);
    if (iVar2 == 0x22) {
      iVar2 = *(int *)(this + 0x24);
      uVar3 = F_00a0b580(this GEN_EDX_ARG);
      if (uVar3 != 0) {
        F_00bc3c90(uVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0xc))));
      }
    }
    else {
      if (iVar2 == 0x38) {
        F_00be01e0(this GEN_EDX_ARG,(float)(float10)1);
        *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
        return 1;
      }
      if (iVar2 == 0x6b) {
        F_00a9fbd0(uVar3 GEN_EDX_ARG);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be0550(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbe0550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 in_EAX = 0;
  uint uVar1;
  float10 extraout_ST0;
  float fVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(byte *)(param_1 + 0x1f) >> 4);
  if ((((*(byte *)(param_1 + 0x1f) >> 4 & 1) != 0) && (param_1[0xb] == 0x38)) &&
     ((char)param_3 != '\0')) {
    fVar2 = F_00bd2390(param_1 GEN_EDX_FWD);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1);
    param_3 = (uint)gen_fl2bits((float)((float10)fVar2 / extraout_ST0));
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_3)))) {
      param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    }
    uVar1 = F_00be01e0(param_1 GEN_EDX_ARG,GEN_ARGF(gen_bits2f(param_3)));
  }
  return uVar1;
}

/* ref: FUN_00be05d0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00be05d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe05d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00be05f0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00be05f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe05f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::RangeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be0620(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110b774));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00be0660 */
GEN_OWN GEN_FRAME float10 F_00be0660(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbe0660u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00be0680 */
GEN_OWN GEN_FRAME uint F_00be0680(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbe0680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(&REFG(undefined, 0x110b914) + param_1 * 0xc);
}

/* ref: FUN_00be06a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be06a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe06a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110b954));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00be06c0(void)
{
  GEN_ENTER(0xbe06c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00be08c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be08c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe08c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xa0, 0);
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * pvVar5;
  float * pfVar6;
  int iVar7;
  int * piVar8;
  float * pfVar9;
  undefined * this_00;
  bool bVar10;
  float10 extraout_ST0;
  float10 fVar11;
  undefined8 uVar12;
  undefined * PTR32 * PTR32 * pppuVar13;
  
  pvVar5 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
    iVar7 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar7 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar7 = *((int *)GEN_TOP(((int)this + 0x6c)));
      uVar4 = 0;
      if (iVar7 != 0) goto LAB_00be0902;
    }
    else {
LAB_00be0902: ;
      uVar3 = *((undefined4 *)GEN_TOP((iVar7 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar3;
      uVar4 = F_00b595f0(uVar3);
    }
    pvVar5 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      return uVar4;
    }
  }
  pvVar5 = ((undefined *)GEN_TOP(F_00bbaf90(pvVar5 GEN_EDX_ARG)));
  if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  ((float *)(gen_frame + 0x84))[1] = gen_bits2f(*((int *)GEN_TOP(((int)this + 0x24))));
  (*(uint * PTR32 *)(gen_frame + 0x7c)) = (uint *)(&REFG(undefined, 0x110b914) + (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xe))) * 0xc);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
  bVar10 = *((char *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x84))[1]) + 0xf))) == '\x01';
  (*(bool *)(gen_frame + 0x83)) = bVar10;
  (*(float *)(gen_frame + 0x74)) = (float)(extraout_ST0 / (float10)*(double *)&REFG(undefined, 0x1088070));
  if (!bVar10) goto LAB_00be09be;
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    iVar7 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar7 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar7 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar7 != 0) goto LAB_00be0991;
    }
    else {
LAB_00be0991: ;
      uVar3 = *((undefined4 *)GEN_TOP((iVar7 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)this + 0x78))) = uVar3;
      F_00b595f0(uVar3);
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x78)));
  }
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00bc4090(this_00 GEN_EDX_ARG,REFG(undefined4, 0x14a2490));
  }
LAB_00be09be: ;
  if (*((char *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x84))[1]) + 0xd))) == '\0') {
    piVar8 = ((int *)GEN_TOP(F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x84))[1]) + 0x10))),
                                 0,0)));
    uVar4 = 0;
    if (piVar8 != ((int *)GEN_TOP(0x0))) {
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)) = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x4c))))(piVar8 GEN_EDX_ARG)));
      if ((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)) == ((undefined4 *)GEN_TOP(0x0))) {
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)) = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG)));
        uVar4 = *(*(uint * PTR32 *)(gen_frame + 0x7c));
        ((float *)(gen_frame + 0x84))[2] = 0.0;
        if (*(float *)&REFG(undefined, 0x1088114) <= (float)(int)uVar4) {
          do {
            uVar4 = F_00aa1400(pvVar5 GEN_EDX_ARG,uVar4);
            F_00aa13d0(pvVar5 GEN_EDX_ARG,(*(float *)(gen_frame + 0x74)),uVar4);
            F_00aa52e0(pvVar5 GEN_EDX_ARG,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)),uVar4,0);
            iVar7 = (int)gen_fl2bits(((float *)(gen_frame + 0x84))[2]) + 1;
            ((float *)(gen_frame + 0x84))[2] = gen_bits2f(iVar7);
            uVar4 = (*(uint * PTR32 *)(gen_frame + 0x7c))[iVar7];
          } while ((!GEN_ISNAN((float)(int)uVar4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                   !((float)(int)uVar4 < *(float *)&REFG(undefined, 0x1088114)));
        }
      }
      else {
        uVar3 = *((undefined4 *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x84))[1]) + 0x14)));
        (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0x20))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c98c));
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(undefined4 *)(gen_frame + 0x34)) = uVar3;
        if ((*(bool *)(gen_frame + 0x83)) != false) {
          (*(undefined4 *)(gen_frame + 0x30)) = 0;
        }
        uVar4 = *(*(uint * PTR32 *)(gen_frame + 0x7c));
        ((float *)(gen_frame + 0x84))[2] = 0.0;
        if (0.0 <= (float)(int)uVar4) {
          do {
            uVar4 = F_00aa1400(pvVar5 GEN_EDX_ARG,uVar4);
            F_00aa13d0(pvVar5 GEN_EDX_ARG,(*(float *)(gen_frame + 0x74)),uVar4);
            pppuVar13 = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x20));
            uVar12 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)))))((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)));
            F_00aa7a30(pvVar5 GEN_EDX_ARG,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20),uVar4,pppuVar13);
            iVar7 = (int)gen_fl2bits(((float *)(gen_frame + 0x84))[2]) + 1;
            ((float *)(gen_frame + 0x84))[2] = gen_bits2f(iVar7);
            uVar4 = (*(uint * PTR32 *)(gen_frame + 0x7c))[iVar7];
          } while ((!GEN_ISNAN((float)(int)uVar4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                   !((float)(int)uVar4 < *(float *)&REFG(undefined, 0x1088114)));
          return uVar4;
        }
      }
    }
  }
  else {
    fVar1 = *((float *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x84))[1]) + 0x1c)));
    (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1302c90);
    ((float *)(gen_frame + 0x84))[2] = fVar1;
    (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1302c94);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x68)) + 0)) = REFG(float, 0x1302c98);
    (*(double *)(gen_frame + 0x68)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)),(uint)gen_fl2bits(REFG(float, 0x1302c98))));
    fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
    ((float *)(gen_frame + 0x84))[0] = fVar1;
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c80)));
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c84)));
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c88)));
    fVar11 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    fVar2 = (float)fVar11;
    ((float *)(gen_frame + 0x84))[2] = fVar2;
    fVar11 = (float10)fVar2;
    (*(float *)(gen_frame + 0x0)) = (float)(fVar11 * (float10)REFG(float, 0x1302c90));
    (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c94) * fVar11);
    (*(float *)(gen_frame + 0x8)) = (float)(fVar11 * (float10)REFG(float, 0x1302c98));
    fVar11 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    ((float *)(gen_frame + 0x84))[2] = (float)fVar11;
    (*(float *)(gen_frame + 0xc)) = (float)fVar11;
    F_004f41e0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x84))[1]) + 0x18))) /
                   (float10)*(float *)&REFG(undefined, 0x1345c08))));
    ((float *)(gen_frame + 0x84))[2] = fVar1;
    F_0054cdb0(&(*(float *)(gen_frame + 0x50)),(uint)&(*(float *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x10)),fVar1);
    F_0046f390(&(*(float *)(gen_frame + 0x50)) GEN_EDX_ARG);
    fVar1 = (float)((float10)*(float *)&REFG(undefined, 0x1345c08) - (float10)*(double *)&REFG(undefined, 0x109ce00));
    ((float *)(gen_frame + 0x84))[1] = fVar1;
    ((float *)(gen_frame + 0x84))[2] = ((float)GEN_TOF(-(float10)fVar1));
    (*(double *)(gen_frame + 0x68)) = (double)(*(float *)(gen_frame + 0x54));
    fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x58)) +
                   ((float10)0 * (float10)0 + (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x50))))));
    ((float *)(gen_frame + 0x84))[0] = fVar2;
    fVar2 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar2))));
    ((float *)(gen_frame + 0x84))[0] = fVar2;
    fVar11 = ((float10)GEN_TOD(atan2((float10)(*(float *)(gen_frame + 0x54)),(float10)fVar2)));
    fVar2 = (float)fVar11;
    ((float *)(gen_frame + 0x84))[0] = fVar2;
    pfVar9 = ((float *)(gen_frame + 0x84)) + 1;
    if (!((float10)fVar1 < (float10)fVar2)) {
      pfVar9 = ((float *)(gen_frame + 0x84));
    }
    pfVar6 = ((float *)(gen_frame + 0x84)) + 2;
    if (!((float10)*pfVar9 < (float10)((float)GEN_TOF(-(float10)fVar1)))) {
      pfVar6 = pfVar9;
    }
    ((float *)(gen_frame + 0x84))[0] = *pfVar6;
    fVar11 = ((float10)GEN_TOD(atan2((float10)(*(float *)(gen_frame + 0x50)),(float10)(*(float *)(gen_frame + 0x58)))));
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)fVar11)));
    ((float *)(gen_frame + 0x84))[2] = (float)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x68)) + 0)) = gen_bits2f((uint)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x54))));
    (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x20))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c98c));
    (*(undefined4 *)(gen_frame + 0x34)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    ((float *)(gen_frame + 0x84))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x84))[1], REFG(float, 0x1087f04));
    if ((*(bool *)(gen_frame + 0x83)) != false) {
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
    }
    uVar4 = *(*(uint * PTR32 *)(gen_frame + 0x7c));
    ((float *)(gen_frame + 0x84))[2] = 0.0;
    if (0.0 <= (float)(int)uVar4) {
      do {
        uVar4 = F_00aa1400(pvVar5 GEN_EDX_ARG,uVar4);
        F_00aa13d0(pvVar5 GEN_EDX_ARG,(*(float *)(gen_frame + 0x74)),uVar4);
        fVar1 = (float)((float10)((float *)(gen_frame + 0x84))[1] * (float10)((float *)(gen_frame + 0x84))[0]);
        (*(float *)(gen_frame + 0x78)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)((float *)(gen_frame + 0x84))[1] * (float10)(float)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x68)) + 4)))));
        (*(float *)(gen_frame + 0x78)) = fVar2;
        F_00aa5250(pvVar5 GEN_EDX_ARG,fVar2,fVar1,(float)(float10)0,uVar4,((undefined * PTR32 * PTR32 *)(gen_frame + 0x20)));
        iVar7 = (int)gen_fl2bits(((float *)(gen_frame + 0x84))[2]) + 1;
        ((float *)(gen_frame + 0x84))[2] = gen_bits2f(iVar7);
        uVar4 = (*(uint * PTR32 *)(gen_frame + 0x7c))[iVar7];
        ((float *)(gen_frame + 0x84))[1] = (float)((float10)((float *)(gen_frame + 0x84))[1] * (float10)REFG(double, 0x1088108));
      } while ((!GEN_ISNAN((float)(int)uVar4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
               !((float)(int)uVar4 < *(float *)&REFG(undefined, 0x1088114)));
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be0d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) != '\0') {
    uVar1 = F_00be08c0(this GEN_EDX_FWD);
    return uVar1;
  }
  uVar1 = F_00be06d0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00be0da0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00be0da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbe0da0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return;
}

/* ref: FUN_00be0dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be0dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::LookAtClip2::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be0de0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe0de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00be0e10 */
GEN_OWN GEN_FRAME float10 F_00be0e10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbe0e10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf13 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be0e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe0e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
  }
  if (*((int *)GEN_TOP((iVar1 + 0x20))) == 0) {
    return 0;
  }
  uVar2 = F_00bccde0(*((int *)GEN_TOP((iVar1 + 0x20))) GEN_EDX_FWD,*(uint *)(this + 0x24),0,0,0x1e);
  *(uint *)(this + 0xa4) = uVar2;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be0e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe0e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  bool bVar1;
  float10 extraout_ST0;
  float fVar2;
  
  bVar1 = GEN_ISNAN(*(float *)(this + 0xb0)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar1 == (bVar1 || *(float *)(this + 0xb0) == *(float *)&REFG(undefined, 0x1088114))) {
    fVar2 = F_00bd2390(this GEN_EDX_FWD);
    bVar1 = (float10)*(float *)(this + 0xb0) <= (float10)fVar2;
  }
  else {
    fVar2 = F_00bd2390(this GEN_EDX_ARG);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
    bVar1 = extraout_ST0 <= (float10)fVar2;
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00be0ed0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00be0ed0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbe0ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  char cVar2;
  uint uVar3;
  
  cVar1 = (char)param_1[0xb6e];
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG);
  if (((char)param_1[0xb6e] == '\x01') && ((*((byte *)GEN_TOP(((int)param_1 + 0x2dce))) & 0x80) != 0)) {
    return 0xe;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x2dba))) == '\x04') {
    return 0xc;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x2dba))) == '\x03') {
    return 0xd;
  }
  if (cVar1 == '\0') {
    return 1;
  }
  cVar2 = (char)uVar3;
  if (cVar1 == '\x01') {
    if (cVar2 == '\0') {
      return 2;
    }
    if (cVar2 == '\x01') {
      return 3;
    }
  }
  else if (cVar1 == '\x02') {
    if (cVar2 == '\0') {
      return 4;
    }
    if (cVar2 == '\x01') {
      return 5;
    }
  }
  else if (cVar1 == '\x04') {
    if (cVar2 == '\0') {
      return 6;
    }
    if (cVar2 == '\x01') {
      return 7;
    }
  }
  else if (cVar1 == '\x03') {
    if (cVar2 == '\0') {
      return 10;
    }
    if (cVar2 == '\x01') {
      return 0xb;
    }
  }
  else if (cVar1 == '\x05') {
    if (cVar2 == '\0') {
      return 8;
    }
    if (cVar2 == '\x01') {
      return 9;
    }
  }
  return 0;
}

/* ref: FUN_00be0fd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be0fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe0fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110baf4));
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = REFG(undefined4, 0x1302cf0);
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = REFG(undefined4, 0x1302cf4);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = REFG(undefined4, 0x1302cf8);
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = REFG(undefined4, 0x1302cfc);
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  return (uint)this;
}

/* ref: FUN_00be1040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be1040(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbe1040u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302cf0);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1302cf4);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(undefined4, 0x1302cf8);
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(undefined4, 0x1302cfc);
  if ((float10)param_3 < (float10)param_2) {
    param_2 = param_3;
  }
  if (*(float *)&REFG(undefined, 0x1088114) < param_3) {
    fVar1 = (float)((float10)param_2 / (float10)param_3);
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar8 = F_00a1d840(REFG(float, 0x1088068),fVar1,REFG(float, 0x1087ef8));
    (*(float *)(gen_frame + 0x3c)) = (float)fVar8;
    fVar1 = *((float *)GEN_TOP((param_1 + 0xa0)));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    fVar1 = (float)((float10)fVar1 * (float10)(float)fVar8);
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar8 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x38)) = (float)fVar8;
    (*(float *)(gen_frame + 0x14)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    fVar8 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x38)) = (float)fVar8;
    (*(float *)(gen_frame + 0x1c)) = (float)fVar8;
    puVar4 = ((undefined4 *)GEN_TOP(F_004f6d80(((undefined1 *)(gen_frame + 0x0)),param_1 + 0x90,(uint)&(*(undefined4 *)(gen_frame + 0x10)))));
    (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x24)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x28)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = puVar4[3];
  }
  uVar6 = *((uint *)GEN_TOP((param_1 + 0x78)));
  uVar7 = uVar6;
  if (uVar6 != 0) goto LAB_00be1184;
  iVar5 = *((int *)GEN_TOP((param_1 + 0x6c)));
  if (iVar5 == 0) {
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
    }
    iVar5 = *((int *)GEN_TOP((param_1 + 0x6c)));
    uVar6 = 0;
    if (iVar5 != 0) goto LAB_00be116f;
  }
  else {
LAB_00be116f: ;
    uVar2 = *((undefined4 *)GEN_TOP((iVar5 + 0x20)));
    *((undefined4 *)GEN_TOP((param_1 + 0x78))) = uVar2;
    uVar6 = F_00b595f0(uVar2);
  }
  uVar7 = *((uint *)GEN_TOP((param_1 + 0x78)));
LAB_00be1184: ;
  if (((uVar7 != 0) && (*((char *)GEN_TOP((uVar7 + 0x12))) == '\0')) &&
     (piVar3 = *((int * PTR32 *)GEN_TOP((uVar7 + 4))), piVar3 != ((int *)GEN_TOP(0x0)))) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)));
  }
  return uVar6;
}

/* ref: FUN_00be11b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be11b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe11b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  byte bVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  float10 extraout_ST0;
  float fVar10;
  
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c)));
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar5;
    }
    pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c)));
    if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
      return uVar5;
    }
  }
  pvVar4 = ((undefined *)GEN_TOP(F_00beb670(pvVar4 GEN_EDX_FWD)));
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar3 = F_00be0ed0(pvVar4);
  uVar5 = F_00ab3840((uint)bVar3);
  if (uVar5 == 0) {
    return 0;
  }
  if (((*((byte *)GEN_TOP(((int)pvVar4 + 0x8f))) & 0x40) != 0) && (bVar3 != 1)) {
    *((byte *)GEN_TOP(((int)pvVar4 + 0x2dd3))) = *((byte *)GEN_TOP(((int)pvVar4 + 0x2dd3))) | 0x10;
  }
  uVar8 = *((uint *)GEN_TOP(((int)this + 0x24)));
  if (uVar8 == 0) goto switchD_00be1235_default;
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((uVar8 + 0xc))))) {
  case 0: ;
    fVar10 = *((float *)GEN_TOP((uVar8 + 0x10)));
    (*(float *)(gen_frame + 0x4)) = fVar10;
    if (*(float *)&REFG(undefined, 0x1088114) <= fVar10) {
      if (!((double)fVar10 <= *(double *)&REFG(undefined, 0x1106550))) {
        bVar2 = *((byte *)GEN_TOP((uVar5 + 0x1a)));
        goto LAB_00be12bb;
      }
      fVar10 = (float)*((byte *)GEN_TOP((uVar5 + 0x18)));
    }
    else if (*(double *)&REFG(undefined, 0x1106548) <= (double)fVar10) {
      fVar10 = (float)*((byte *)GEN_TOP((uVar5 + 0x19)));
    }
    else {
      fVar10 = (float)*((byte *)GEN_TOP((uVar5 + 0x1b)));
    }
    break;
  case 1: ;
    bVar2 = *((byte *)GEN_TOP((uVar5 + 0x18)));
    goto LAB_00be12bb;
  case 2: ;
    fVar10 = (float)*((byte *)GEN_TOP((uVar5 + 0x19)));
    break;
  case 3: ;
    fVar10 = (float)*((byte *)GEN_TOP((uVar5 + 0x1a)));
    break;
  case 4: ;
    bVar2 = *((byte *)GEN_TOP((uVar5 + 0x1b)));
LAB_00be12bb: ;
    uVar8 = (uint)bVar2;
    fVar10 = (float)uVar8;
    break;
  default: ;
    goto switchD_00be1235_default;
  }
  *((float *)GEN_TOP(((int)this + 0xac))) = fVar10;
switchD_00be1235_default: ;
  if (bVar3 != 1) {
    if (*((int *)GEN_TOP(((int)this + 0xa4))) != 0) {
      uVar5 = F_0054d950(this GEN_EDX_ARG);
      iVar9 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar9 == 0) {
        if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
        }
        iVar9 = *((int *)GEN_TOP(((int)this + 0x6c)));
      }
      puVar6 = ((undefined4 *)GEN_TOP(F_00b5bff0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0xa4))),
                            *((undefined4 *)GEN_TOP((uVar5 + 0x10c))),*((undefined4 *)GEN_TOP((iVar9 + 0x20))),1,
                            0xffffffff,0,0,uVar5,0x1e,0)));
      *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = *puVar6;
      piVar7 = ((int *)GEN_TOP(F_00b5b260(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)this + 0xa8))))));
      uVar8 = 0;
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xb4))))(piVar7);
        *((float *)GEN_TOP(((int)this + 0xb0))) = (float)extraout_ST0;
        uVar8 = F_00bcfc00(piVar7 GEN_EDX_ARG,(float)(float10)1);
      }
    }
    return uVar8;
  }
  F_00a1e160(&(*(float *)(gen_frame + 0x0)),(int)this + 0x90);
  F_00aaa5b0(pvVar4 GEN_EDX_ARG,1);
  uVar5 = F_00bd3ff0(this GEN_EDX_ARG);
  if (*((int *)GEN_TOP((uVar5 + 0x6c))) == 2) {
    fVar10 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xac))) / (float10)*(double *)&REFG(undefined, 0x1088070))));
    (*(float *)(gen_frame + 0x4)) = fVar10;
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xa0))) + (float10)(*(float *)(gen_frame + 0x0)))));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    uVar5 = F_00bef4c0(*((undefined4 *)GEN_TOP((uVar5 + 0x80))) GEN_EDX_ARG,fVar1,fVar10);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP(((int)this + 0xac)));
  return uVar5;
}

/* ref: FUN_00be13f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be13f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe13f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  if ((*((uint *)GEN_TOP(((int)this + 0xa8))) & 0xc0000000) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  }
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      *((uint *)GEN_TOP(((int)this + 0x6c))) = uVar3;
    }
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return uVar3;
    }
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00beb670(pvVar2 GEN_EDX_FWD)));
  uVar3 = 0;
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    if ((*((byte *)GEN_TOP(((int)pvVar2 + 0x8f))) & 0x40) != 0) {
      *((byte *)GEN_TOP(((int)pvVar2 + 0x2dd3))) = *((byte *)GEN_TOP(((int)pvVar2 + 0x2dd3))) & 0xef;
    }
    bVar1 = F_00be0ed0(pvVar2);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 1) {
      uVar3 = F_00aaa5b0(pvVar2 GEN_EDX_ARG,0);
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be1460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe1460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 != 0) goto LAB_00be149e;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00be1485;
  }
  else {
LAB_00be1485: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 == 0) {
    return 0;
  }
LAB_00be149e: ;
  if (*((char *)GEN_TOP((uVar4 + 0x12))) == '\0') {
    piVar2 = *((int * PTR32 *)GEN_TOP((uVar4 + 4)));
    uVar4 = 0;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,this + 0x90);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
      uVar4 = F_00be13f0(this GEN_EDX_ARG);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be14f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbe14f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  float fVar6;
  
  fVar6 = F_00bd2390(param_1 GEN_EDX_FWD);
  iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x78)));
  if (iVar3 == 0) {
    iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x6c)));
    if (iVar3 == 0) {
      if (*((int *)GEN_TOP(((int)param_1 + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 4))) + 4)));
      }
      iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x6c)));
      if (iVar3 != 0) goto LAB_00be1521;
    }
    else {
LAB_00be1521: ;
      uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
      *((undefined4 *)GEN_TOP(((int)param_1 + 0x78))) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar3 = *((int *)GEN_TOP(((int)param_1 + 0x78)));
    if (iVar3 != 0) goto LAB_00be153a;
  }
  else {
LAB_00be153a: ;
    if ((*((char *)GEN_TOP((iVar3 + 0x12))) == '\0') && (*((int *)GEN_TOP((iVar3 + 4))) != 0)) {
      piVar4 = ((int *)GEN_TOP(F_00bd3ff0(param_1 GEN_EDX_ARG)));
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG);
      bVar2 = F_00be0ed0(uVar5);
      uVar5 = CONCAT31(extraout_var,bVar2);
      if (bVar2 == 1) goto LAB_00be157c;
    }
  }
  uVar5 = F_00be1040(param_1 GEN_EDX_ARG,fVar6,GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0xac)))));
LAB_00be157c: ;
  if ((float10)*((float *)GEN_TOP(((int)param_1 + 0xb0))) <= (float10)param_2) {
    uVar5 = F_00be13f0(param_1 GEN_EDX_ARG);
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be15a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe15a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 in_EAX = 0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  }
  piVar1 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_FWD)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG)));
  *(undefined4 *)(this + 0x90) = *puVar2;
  *(undefined4 *)(this + 0x94) = puVar2[1];
  *(undefined4 *)(this + 0x98) = puVar2[2];
  *(undefined4 *)(this + 0x9c) = puVar2[3];
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))))) {
  case 0: ;
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x24) + 0x10))) ^ REFG(uint, 0x10920d0);
    break;
  case 1: ;
    uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x109ca60)));
    break;
  case 2: ;
    uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x109ca64)));
    break;
  case 3: ;
    uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x109cb20)));
    break;
  case 4: ;
    uVar3 = (uint)gen_fl2bits((float)(REFG(float, 0x110baec)));
    break;
  default: ;
    goto switchD_00be15ed_default;
  }
  *(uint *)(this + 0xa0) = uVar3;
switchD_00be15ed_default: ;
  uVar3 = F_00be11b0(this GEN_EDX_ARG);
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be1660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe1660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  F_00be13f0(this GEN_EDX_FWD);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be1680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbe1680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  undefined4 in_EAX = 0;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  float fVar4;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if ((((byte)this[0x7c] >> 4 & 1) != 0) &&
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD), this_00 = REFG(void * PTR32, 0x14c4e84), (char)uVar1 == '\0')
     ) {
    piVar2 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
    uVar1 = 0;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
      uVar1 = 0;
      if (uVar3 != 0) {
        if ((char)param_2 == '\0') {
          uVar3 = F_00b5b260(this_00 GEN_EDX_ARG,this + 0xa8);
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = F_00bcfc00(uVar3 GEN_EDX_ARG,(float)(float10)1);
            return uVar1;
          }
        }
        else {
          F_00be13f0(this GEN_EDX_ARG);
          F_00be11b0(this GEN_EDX_ARG);
          uVar3 = F_00b5b260(this_00 GEN_EDX_ARG,this + 0xa8);
          uVar1 = 0;
          if (uVar3 != 0) {
            F_00bcfc00(uVar3 GEN_EDX_ARG,(float)(float10)1);
            fVar4 = F_00bd2390(this GEN_EDX_ARG);
            F_00b5bc50(this_00 GEN_EDX_ARG,this + 0xa8,fVar4);
            uVar1 = F_00bcfc00(uVar3 GEN_EDX_ARG,(float)(float10)0);
          }
        }
      }
    }
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::TurnClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be1760(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe1760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00be17b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00be17b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe17b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x40))) = param_2;
  return param_2;
}

/* ref: FUN_00be17c0 */
GEN_OWN GEN_FRAME float10 F_00be17c0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbe17c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00be17e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be17e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe17e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x88)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bc94));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  F_00536010();
  uVar2 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf13 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be1820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe1820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
  }
  if (*((int *)GEN_TOP((iVar1 + 0x20))) == 0) {
    return 0;
  }
  uVar2 = F_00bccde0(*((int *)GEN_TOP((iVar1 + 0x20))) GEN_EDX_FWD,*(uint *)(this + 0x24),0,0,0x1d);
  *(uint *)(this + 0x150) = uVar2;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf20 */
GEN_OWN GEN_NOFRAME unsigned int F_00be1860(void)
{
  GEN_ENTER(0xbe1860u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be1870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe1870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + 0x78);
  if (uVar5 != 0) goto LAB_00be18ae;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00be1895;
  }
  else {
LAB_00be1895: ;
    uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  uVar5 = *(uint *)(this + 0x78);
  if (uVar5 == 0) {
    return 0;
  }
LAB_00be18ae: ;
  if (*((char *)GEN_TOP((uVar5 + 0x12))) == '\0') {
    piVar2 = *((int * PTR32 *)GEN_TOP((uVar5 + 4)));
    uVar5 = 0;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = F_0053be20(this + 0xc0 GEN_EDX_ARG);
        this[0xd4] = (undefined1)0x0;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00be1aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be1aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe1aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bc94));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  F_0053bd80(((undefined *)GEN_TOP(((int)this + 0xc0))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be1ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe1ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  code * pcVar2;
  
  if ((((byte)this[0x7c] >> 4 & 1) != 0) && (piVar1 = *(int * PTR32 *)(this + 0x88), piVar1 != ((int *)GEN_TOP(0x0))))
  {
    if ((*((byte *)GEN_TOP(((int)piVar1 + 0xe))) & 1) == 0) {
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x1c)));
    }
    else {
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x20)));
    }
    (*pcVar2)(piVar1);
    if (this[0xd4] == (undefined1)0x0) {
      return 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_FWD,2);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be1b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe1b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(this + 0x78);
  if (uVar6 == 0) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00be1b45;
    }
    else {
LAB_00be1b45: ;
      uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    uVar6 = *(uint *)(this + 0x78);
    if (uVar6 == 0) goto LAB_00be1b8a;
  }
  if ((*((char *)GEN_TOP((uVar6 + 0x12))) == '\0') &&
     (piVar2 = *((int * PTR32 *)GEN_TOP((uVar6 + 4))), uVar6 = 0, piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = F_0053be20(this + 0xc0 GEN_EDX_ARG);
      this[0xd4] = (undefined1)0x0;
    }
  }
LAB_00be1b8a: ;
  puVar3 = *(undefined4 * PTR32 *)(this + 0x88);
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x88) = 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be1bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbe1bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  byte bVar1;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  int * piVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    bVar1 = F_00bd2480(this GEN_EDX_FWD);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      (*(int *)(gen_frame + 0x38)) = *(int *)(this + 0x24);
      piVar2 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
      uVar3 = 0;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x30)) = uVar3;
        if (uVar3 != 0) {
          (*(float *)(gen_frame + 0x3c)) = *(float *)(this + 0x34);
          fVar4 = F_00bd2390(this GEN_EDX_ARG);
          uVar6 = *(undefined4 *)(this + 0x150);
          (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x3c)));
          fVar4 = *(float *)(this + 0x34);
          (*(float *)(gen_frame + 0x34)) = fVar4;
          iVar5 = (*(int *)(gen_frame + 0x38));
          uVar3 = F_00bd3ff0(this GEN_EDX_ARG);
          F_00549000(this + 0xc0 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),this,uVar3,iVar5,fVar4,uVar6);
          if ((*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 0x8f))) & 0x40) == 0) {
            uVar3 = F_005490f0(this + 0xc0 GEN_EDX_ARG,(*(float *)(gen_frame + 0x3c)));
            return uVar3;
          }
          uVar3 = F_005490c0(this + 0xc0 GEN_EDX_ARG,(*(float *)(gen_frame + 0x3c)));
          return uVar3;
        }
        fVar4 = F_00bd2390(this GEN_EDX_ARG);
        fVar4 = ((float)GEN_TOF((((float10)fVar4 / (float10)*(double *)&REFG(undefined, 0x10d4598)) *
                       (float10)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0x20))))));
        (*(float *)(gen_frame + 0x3c)) = fVar4;
        if ((float10)1 < (float10)fVar4) {
          (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
        }
        (*(uint *)(gen_frame + 0x30)) = *piVar2;
        uVar3 = F_00be2070(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x3c)));
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((*(uint *)(gen_frame + 0x30)) + 0x20))))(piVar2,uVar3);
      }
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00be1d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe1d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  uint uVar5;
  int * piVar6;
  undefined1 * puVar7;
  int iVar8;
  bool bVar9;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x88);
  iVar8 = *(int *)(this + 0x24);
  (*(int *)(gen_frame + 0x3c)) = iVar8;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)(this + 0x88) = 0;
  }
  if (*((int *)GEN_TOP((iVar8 + 100))) < 2) {
    return;
  }
  bVar9 = *((int *)GEN_TOP((iVar8 + 0x30))) != 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x38)) + 0)) = bVar9;
  (*(undefined4 *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x38)), 1, 3),bVar9);
  pvVar4 = ((undefined *)GEN_TOP(F_00406b90(0x14,0,0)));
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    uVar5 = 0;
  }
  else {
    uVar5 = F_00c22e00(pvVar4 GEN_EDX_ARG,iVar8 + 0x58,(*(undefined4 *)(gen_frame + 0x38)));
  }
  *(uint *)(this + 0x88) = uVar5;
  piVar6 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_ARG)));
  if (piVar6 == ((int *)GEN_TOP(0x0))) {
    *(undefined4 *)(this + 0x90) = GEN_FLT_TO(*(undefined4 *)(this + 0x90), REFG(float, 0x1302df0));
    *(undefined4 *)(this + 0x94) = GEN_FLT_TO(*(undefined4 *)(this + 0x94), REFG(float, 0x1302df4));
    *(undefined4 *)(this + 0x98) = GEN_FLT_TO(*(undefined4 *)(this + 0x98), REFG(float, 0x1302df8));
    *(undefined4 *)(this + 0xa0) = REFG(undefined4, 0x1302e00);
    *(undefined4 *)(this + 0xa4) = REFG(undefined4, 0x1302e04);
    *(undefined4 *)(this + 0xa8) = REFG(undefined4, 0x1302e08);
    *(undefined4 *)(this + 0xac) = REFG(undefined4, 0x1302e0c);
    *(undefined4 *)(this + 0xb0) = GEN_FLT_TO(*(undefined4 *)(this + 0xb0), REFG(float, 0x1302e10));
    *(undefined4 *)(this + 0xb4) = GEN_FLT_TO(*(undefined4 *)(this + 0xb4), REFG(float, 0x1302e14));
    *(undefined4 *)(this + 0xb8) = GEN_FLT_TO(*(undefined4 *)(this + 0xb8), REFG(float, 0x1302e18));
  }
  else {
    if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x3c)) + 0x19))) == '\0') {
      puVar7 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x24))))(piVar6 GEN_EDX_ARG)));
    }
    else {
      F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x3c)) + 0x34);
      puVar7 = ((undefined1 *)(gen_frame + 0x0));
    }
    F_006001e0(this + 0x90 GEN_EDX_ARG,puVar7);
    iVar8 = *piVar6;
    *(undefined4 *)(this + 0xb0) = GEN_FLT_TO(*(undefined4 *)(this + 0xb0), REFG(float, 0x1302c60));
    *(undefined4 *)(this + 0xb4) = GEN_FLT_TO(*(undefined4 *)(this + 0xb4), REFG(float, 0x1302c64));
    pcVar2 = *((gen_code32 *)GEN_TOP((iVar8 + 8)));
    *(undefined4 *)(this + 0xb8) = GEN_FLT_TO(*(undefined4 *)(this + 0xb8), REFG(float, 0x1302c68));
    (*pcVar2)(piVar6,this + 0x90);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x10))))(piVar6 GEN_EDX_ARG,this + 0xa0);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x4c))))(piVar6 GEN_EDX_ARG);
    if (uVar5 != 0) {
      if ((*((byte *)GEN_TOP((uVar5 + 0x8f))) & 0x40) != 0) {
        *((byte *)GEN_TOP((uVar5 + 0x2dd3))) = *((byte *)GEN_TOP((uVar5 + 0x2dd3))) | 0x10;
      }
      if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x3c)) + 0x18))) == '\0') {
        F_00a9fa40(uVar5 GEN_EDX_ARG,1);
        *((undefined1 *)GEN_TOP((uVar5 + 0x2ea7))) = 0;
      }
      else {
        F_00a9fa40(uVar5 GEN_EDX_ARG,0);
        *((undefined1 *)GEN_TOP((uVar5 + 0x2ea7))) = 1;
      }
    }
  }
  this[0x100] = (undefined1)(*((char *)GEN_TOP(((*(int *)(gen_frame + 0x3c)) + 0x18))) != '\0');
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  pvVar4 = *(undefined * PTR32 *)(this + 0x78);
  if (pvVar4 != ((undefined *)GEN_TOP(0x0))) goto LAB_00be1f45;
  iVar8 = *(int *)(this + 0x6c);
  if (iVar8 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar8 = *(int *)(this + 0x6c);
    if (iVar8 != 0) goto LAB_00be1f2c;
  }
  else {
LAB_00be1f2c: ;
    uVar3 = *((undefined4 *)GEN_TOP((iVar8 + 0x20)));
    *(undefined4 *)(this + 0x78) = uVar3;
    F_00b595f0(uVar3);
  }
  pvVar4 = *(undefined * PTR32 *)(this + 0x78);
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    return;
  }
LAB_00be1f45: ;
  F_00bc4070(pvVar4 GEN_EDX_ARG,0xffffffff);
  return;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf34 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00be1f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe1f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(F_00bd3ff0(this GEN_EDX_FWD)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG);
    if (uVar4 != 0) {
      fVar6 = *(float *)(this + 0x34);
      uVar1 = *(undefined4 *)(this + 0x88);
      uVar7 = *(undefined4 *)(this + 0x150);
      uVar5 = *(undefined4 *)(this + 0x24);
      uVar4 = F_00bd3ff0(this GEN_EDX_ARG);
      F_00549000(this + 0xc0 GEN_EDX_ARG,uVar1,this,uVar4,uVar5,fVar6,uVar7);
      F_0053be20(this + 0xc0 GEN_EDX_ARG);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG);
      if ((*((byte *)GEN_TOP((uVar4 + 0x8f))) & 0x40) != 0) {
        *((byte *)GEN_TOP((uVar4 + 0x2dd3))) = *((byte *)GEN_TOP((uVar4 + 0x2dd3))) & 0xef;
      }
    }
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x88);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x88) = 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf35 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00be2030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbe2030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  float fVar2;
  
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    fVar1 = *(float *)(this + 0x34);
    fVar2 = F_00bd2390(this GEN_EDX_FWD);
    F_00542550(this + 0xc0 GEN_EDX_ARG,(float)((float10)fVar2 + (float10)fVar1),param_2);
  }
  return;
}

/* ref: FUN_00be2070 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be2070(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbe2070u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00b66530(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x20)),param_3)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar1;
  puVar1 = ((undefined4 *)GEN_TOP(F_00b67040(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),param_3)));
  puVar2 = ((undefined4 *)GEN_TOP(F_00b66e50(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_3)));
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[4] = *puVar1;
  param_2[5] = puVar1[1];
  param_2[6] = puVar1[2];
  param_2[7] = puVar1[3];
  param_2[8] = *(*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  param_2[9] = (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1];
  param_2[10] = (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2];
  return (uint)param_2;
}

/* ref: Client::System::Scheduler::Clip::AutoMoveClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2120(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[0x22]));
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x110bc94));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    param_1[0x22] = 0;
  }
  F_00536010();
  F_00bd2e60(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00be2170 */
GEN_OWN GEN_FRAME float10 F_00be2170(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbe2170u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00be2190 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be2190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe2190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110be34));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00be21b0(void)
{
  GEN_ENTER(0xbe21b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf53 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be21c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe21c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00be21e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe21e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be21f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe21f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00be2200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x24)));
  cVar1 = *((char *)GEN_TOP((uVar3 + 0x10)));
  iVar5 = 2 - (uint)(*((int *)GEN_TOP((uVar3 + 0xc))) != 1);
  uVar4 = (uint)(*((char *)GEN_TOP((uVar3 + 0x12))) != '\0');
  if (cVar1 == '\0') {
    if (*((char *)GEN_TOP((uVar3 + 0x11))) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG,uVar4,0,iVar5);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa8))))(piVar2 GEN_EDX_ARG,uVar4,param_1,iVar5);
  }
  else {
    if (cVar1 == '\x01') {
      if (*((char *)GEN_TOP((uVar3 + 0x11))) != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa8))))(piVar2 GEN_EDX_ARG,uVar4,0,iVar5);
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG,uVar4,param_1,iVar5);
      return uVar3;
    }
    if (cVar1 == '\x02') {
      if (param_1 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG,uVar4,0,(iVar5 != 2) + 1);
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG,uVar4,param_1,iVar5);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be22e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe22e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa4))))(piVar1 GEN_EDX_ARG,1,0,1);
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf52 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  int iVar3;
  float10 extraout_ST0;
  float fVar4;
  int local_10;
  ushort uStack_c;
  
  fVar4 = F_00bd2390(this GEN_EDX_FWD);
  uVar2 = extraout_EAX;
  if (((float10)0 <= (float10)fVar4) &&
     (uVar2 = CONCAT31((int3)(extraout_EAX >> 8),(byte)this[0x7c] >> 4),
     ((byte)this[0x7c] >> 4 & 1) == 0)) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this);
    uStack_c = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_c);
    local_10 = (int)(longlong)TRUNC(extraout_ST0);
    iVar3 = local_10 * 2 - 2;
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    bVar1 = F_00bd2480(this GEN_EDX_ARG);
    if (bVar1 != 0) {
      iVar3 = 0;
    }
    uVar2 = F_00be2200(this GEN_EDX_ARG,iVar3);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ScreenFadeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2390(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00be2400 */
GEN_OWN GEN_FRAME float10 F_00be2400(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbe2400u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00be2420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be2420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe2420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x158))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bfd4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00be2440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe2440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar1 = *(int *)(this + 0x6c);
    }
    F_00c23840(this_00 GEN_EDX_FWD);
    if (iVar1 != 0) {
      if (*(int *)(this + 0x2c) == 9) {
        F_00c23280(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x24),iVar1,(float)(float10)0);
        return;
      }
      F_00c236d0(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x24),iVar1,(float)(float10)0);
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00be24a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe24a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (*((char *)GEN_TOP(((int)this_00 + 0xc0))) != '\0')) {
    F_00c23840(this_00 GEN_EDX_FWD);
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be24c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe24c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be24d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe24d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf53 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be24f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe24f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
  return uVar1;
}

/* ref: FUN_00be2510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x88)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    if (param_1 == 0) {
      uVar1 = F_00c23840(this_00 GEN_EDX_FWD);
      return uVar1;
    }
    in_EAX = F_00c238f0(this_00 GEN_EDX_ARG,0,param_1);
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf35 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00be2540(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbe2540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x88)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      return;
    }
    if ((char)piVar1[0x30] == '\0') {
      return;
    }
  }
  if (param_3 == '\0') {
    if (*((char *)GEN_TOP((param_1 + 0x158))) != '\0') {
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        F_00c23070();
      }
      *((undefined1 *)GEN_TOP((param_1 + 0x158))) = 0;
    }
  }
  else if ((*((char *)GEN_TOP((param_1 + 0x158))) == '\0') && (param_2 == 3)) {
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      F_00c23070();
    }
    *((undefined1 *)GEN_TOP((param_1 + 0x158))) = 1;
    return;
  }
  return;
}

/* ref: FUN_00be25c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00be25c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe25c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * this_00;
  
  this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x88)));
  while (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00c23840(this_00 GEN_EDX_FWD);
    puVar1 = ((undefined4 *)GEN_TOP(this_00[7]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_00)))(this_00 GEN_EDX_ARG,0);
    this_00 = puVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  return;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be2600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe2600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  if (*(int *)(this + 0x88) == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD);
  if ((byte)uVar1 != 0) {
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
  }
  return (byte)uVar1;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be2650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe2650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 1;
  for (piVar1 = *(int * PTR32 *)(this + 0x88); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[7]))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 == '\0') {
      bVar3 = 0;
    }
  }
  return bVar3;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf52 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * this_00;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  undefined * pvVar5;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  float fVar6;
  undefined * local_c;
  
  pvVar5 = *(undefined * PTR32 *)(this + 0x70);
  this_00 = *(int * PTR32 *)(this + 0x88);
  local_c = pvVar5;
  if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
    pvVar5 = *(undefined * PTR32 *)(this + 0x6c);
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      pvVar5 = *(undefined * PTR32 *)(this + 0x6c);
      if (pvVar5 != ((undefined *)GEN_TOP(0x0))) goto LAB_00be26b7;
    }
    else {
LAB_00be26b7: ;
      *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP(((int)pvVar5 + 4)));
    }
    local_c = *(undefined * PTR32 *)(this + 0x70);
  }
  if (local_c == ((undefined *)GEN_TOP(0x0))) {
    return (uint)pvVar5;
  }
  if (this_00 == ((int *)GEN_TOP(0x0))) {
    return (uint)pvVar5;
  }
  fVar6 = F_00bd2390(this GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x10))))(this_00 GEN_EDX_ARG);
  if ((char)uVar3 != '\0') {
    return uVar3;
  }
  bVar2 = F_00bd1fe0(this GEN_EDX_ARG);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    if (!(*(float *)&REFG(undefined, 0x1088114) <= fVar6)) {
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
    return uVar3;
  }
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar6) {
    if (this[0xc] != (undefined1)0x0) {
      if ((char)this_00[0x30] == '\0') {
        if (*(int *)(this + 0x2c) == 9) {
          piVar4 = ((int *)GEN_TOP(F_0054d950(this GEN_EDX_ARG)));
          if ((((piVar4 != ((int *)GEN_TOP(0x0))) && (-1 < piVar4[0x32])) &&
              (bVar2 = F_00bd3f20(this GEN_EDX_ARG), bVar2 == 0)) &&
             (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x78))))(piVar4 GEN_EDX_ARG), (char)uVar3 != '\0')) {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x7c))))(piVar4 GEN_EDX_ARG);
            pvVar5 = ((undefined *)GEN_TOP(F_00475fd0(uVar3)));
            if (((pvVar5 != ((undefined *)GEN_TOP(0x0))) && (uVar3 = F_00a5f290(pvVar5 GEN_EDX_ARG), uVar3 != 0)) &&
               (bVar2 = F_00aa19d0(uVar3 GEN_EDX_ARG,0,0), bVar2 == 0)) goto LAB_00be2870;
          }
          uVar1 = *(undefined4 *)(this + 0x24);
          uVar3 = F_0054d900(this GEN_EDX_ARG);
          F_00c23280(this_00 GEN_EDX_ARG,uVar1,uVar3,fVar6);
        }
        else {
          uVar1 = *(undefined4 *)(this + 0x24);
          uVar3 = F_0054d900(this GEN_EDX_ARG);
          F_00c236d0(this_00 GEN_EDX_ARG,uVar1,uVar3,fVar6);
        }
        F_00c23800(this_00 GEN_EDX_ARG);
        this[0x158] = (undefined1)0x0;
      }
      uVar3 = F_00bc1e50(local_c GEN_EDX_ARG,0);
      if ((char)uVar3 != '\0') {
        bVar2 = F_00bd3f20(this GEN_EDX_ARG);
        uVar3 = CONCAT31(extraout_var_00,bVar2);
        if (bVar2 != 0) {
          if (this[0x158] == (undefined1)0x0) {
            F_00c23070();
            this[0x158] = (undefined1)0x1;
          }
          goto LAB_00be285c;
        }
      }
      if (this[0x158] != (undefined1)0x0) {
        F_00c23070();
        this[0x158] = (undefined1)0x0;
      }
    }
  }
  else if (this[0xc] != (undefined1)0x0) {
    if ((char)this_00[0x30] != '\0') {
      uVar3 = F_00c23840(this_00 GEN_EDX_ARG);
    }
    *(undefined4 *)(this + 10) = 0x1000000;
  }
LAB_00be285c: ;
  if ((char)this_00[0x30] == '\0') {
    return uVar3;
  }
  bVar2 = F_00c23880(this_00 GEN_EDX_ARG);
  if (bVar2 == 0) {
    return CONCAT31(extraout_var_01,bVar2);
  }
LAB_00be2870: ;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG,1);
  if ((char)uVar3 != '\0') {
    uVar3 = F_00b61910(this_00 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00be28a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be28a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe28a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110bfd4));
  F_00be25c0(this GEN_EDX_FWD);
  uVar1 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00be28c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00be28c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe28c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  if ((int)this + 0x90 == 0) {
    this_00 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this_00 = ((undefined *)GEN_TOP(F_00c23090((int)this + 0x90 GEN_EDX_FWD)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  if (*((int *)GEN_TOP(((int)this + 0x2c))) == 9) {
    F_00c23180(this_00 GEN_EDX_ARG,*((int *)GEN_TOP((iVar1 + 0xc))) + iVar1);
    uVar2 = F_00bd2420(this GEN_EDX_ARG);
    if ((uVar2 != 0) && (*((char *)GEN_TOP((uVar2 + 0x20))) != '\0')) {
      iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
      if (iVar3 == 0) {
        if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
        }
        iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
      }
      F_00c231e0(this_00 GEN_EDX_ARG,uVar2 + 0x30,iVar3);
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    }
    F_00c23280(this_00 GEN_EDX_ARG,iVar1,iVar3,(float)(float10)0);
  }
  else {
    F_00c23180(this_00 GEN_EDX_ARG,*((int *)GEN_TOP((iVar1 + 0x10))) + iVar1);
    iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    if (iVar3 == 0) {
      if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
      }
      iVar3 = *((int *)GEN_TOP(((int)this + 0x6c)));
    }
    F_00c236d0(this_00 GEN_EDX_ARG,iVar1,iVar3,(float)(float10)0);
  }
  *((undefined4 *)GEN_TOP(((int)this_00 + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this_00 + 0x1c))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
  if (*((int *)GEN_TOP(((int)this + 0x88))) != 0) {
    *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x18))) = this_00;
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x88))) = this_00;
  return (uint)this_00;
}

/* ref: Client::System::Scheduler::Clip::BattleVfxClip::vf19 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00be29b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe29b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  byte bVar5;
  
  bVar5 = 1;
  if (*(int *)(this + 0x88) == 0) {
    F_00be28c0(this GEN_EDX_FWD);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x88);
  do {
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      return bVar5;
    }
    iVar2 = *(int *)(this + 0x24);
    if (*(int *)(this + 0x2c) == 9) {
      bVar1 = F_00c23130(this_00 GEN_EDX_ARG,*((int *)GEN_TOP((iVar2 + 0xc))) + iVar2);
      if (bVar1 == 0) {
        iVar2 = *(int *)(this + 0x74);
        if (iVar2 == 0) {
          piVar4 = *(int * PTR32 *)(this + 0x70);
          if (piVar4 == ((int *)GEN_TOP(0x0))) {
            iVar2 = *(int *)(this + 0x6c);
            if (iVar2 == 0) {
              if (*(int *)(this + 4) != 0) {
                *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
              }
              iVar2 = *(int *)(this + 0x6c);
              if (iVar2 != 0) goto LAB_00be2a16;
            }
            else {
LAB_00be2a16: ;
              *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
            }
            piVar4 = *(int * PTR32 *)(this + 0x70);
            if (piVar4 != ((int *)GEN_TOP(0x0))) goto LAB_00be2a23;
          }
          else {
LAB_00be2a23: ;
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 100))))(piVar4 GEN_EDX_ARG);
            *(uint *)(this + 0x74) = uVar3;
          }
          iVar2 = *(int *)(this + 0x74);
          if (iVar2 == 0) goto LAB_00be2a59;
        }
        if ((*((uint *)GEN_TOP((iVar2 + 0x2c))) >> 4 & 1) == 0) goto LAB_00be2a59;
        *((undefined1 *)GEN_TOP(((int)this_00 + 0xc1))) = 1;
      }
    }
    else {
      bVar1 = F_00c23130(this_00 GEN_EDX_ARG,*((int *)GEN_TOP((iVar2 + 0x10))) + iVar2);
      if (bVar1 != 0) goto LAB_00be2a5b;
LAB_00be2a59: ;
      bVar5 = 0;
    }
LAB_00be2a5b: ;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
  } while( true );
}

/* ref: FUN_00be2a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2a80(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00be2a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2a90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00be2ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00be2ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbe2ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *param_1;
  if (*param_1 != 0) {
    *((int *)GEN_TOP((*param_1 + 0x18))) = (int)this - 0x18;
  }
  *param_1 = (int)this - 0x18;
  return (uint)param_1;
}

