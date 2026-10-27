#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00bba380 */
uint F_00bba380(unsigned int gen_a0)
{
  GEN_ENTER(0xbba380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = *(uint *)((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x11048b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x11048a4));
  if (uVar2 != 0) {
    *(undefined4 *)(uVar2 + 0xb4) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    piVar4 = *(int * PTR32 *)((int)this + 0x10);
    if ((piVar4 != (int *)0x0) && ((*(byte *)((int)this + 0x36) & 1) == 0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
      *(ushort *)((int)this + 0x36) = *(ushort *)((int)this + 0x36) | 1;
    }
  }
  piVar4 = (int *)((int)this + 0x14);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_00c1e4a0((int)this + 0xc);
  F_00c1e490(this);
  return uVar2;
}

/* ref: FUN_00bba400 */
unsigned int F_00bba400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbba400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int *)((int)this + 0x10) != 0) {
    F_009f6650(*(int *)((int)this + 0x10),(float)(float10)0);
    F_009f7cb0(*(undefined * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x14a2434));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf3 */
unsigned int F_00bba440(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba440u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(param_1 + 0x10) != (undefined *)0x0) {
    bVar1 = F_009f2f00(*(undefined * PTR32 *)(param_1 + 0x10));
    if (bVar1 != 0) {
      if ((((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(param_2 <= *(float *)&REFG(undefined, 0x1088114))) && (*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0xc))) != 0))
         && (*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) != 0)) {
        F_00bba2d0(param_1,param_2);
      }
      this = *(undefined * PTR32 *)(param_1 + 0x10);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2 / (float10)*(double *)&REFG(undefined, 0x1088070));
      F_009f7cb0(this,&(*(undefined4 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0xc))))(*(int * PTR32 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x34) = 1;
      return 0;
    }
  }
  if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    if (*(int *)(param_1 + 0x10) != 0) {
      F_00bba2d0(param_1,param_2);
      return 0;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x34) = 1;
    if (*(int *)(param_1 + 0x10) != 0) {
      F_009f6650(*(int *)(param_1 + 0x10),(float)(float10)0);
    }
  }
  return 0;
}

/* ref: FUN_00bba510 */
unsigned int F_00bba510(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba510u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  iVar2 = *(int *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10);
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!((float10)0 < (float10)(*(float *)&gen_args[1]))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[1]) = fVar1;
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    (*(float *)&gen_args[1]) = *pfVar3;
    F_009f6650(iVar2,(*(float *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_00bba570 */
uint F_00bba570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  F_00c1e470(this);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x1104898));
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x11048b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x11048a4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  for (puVar2 = (undefined4 *)((int)this + 0x14); puVar2 != (undefined4 *)((int)this + 0x1c);
      puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00bba5e0 */
unsigned int F_00bba5e0(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbba5e0u, gen_trace_f(gen_a0), gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  *(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x38) = (*(float *)&gen_args[2]);
  iVar2 = *(int *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x3c) * (float10)(*(float *)&gen_args[2]))));
  (*(float *)&gen_args[2]) = fVar1;
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[2]);
    if (!((float10)0 < (float10)fVar1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[2]) = fVar1;
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[2]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    (*(float *)&gen_args[2]) = *pfVar3;
    F_009f6650(iVar2,(*(float *)&gen_args[2]));
  }
  return 0;
}

/* ref: FUN_00bba650 */
uint F_00bba650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)((int)this + 0x14);
  piVar1 = (int *)((int)this + 0x1c);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      return (uint)piVar2;
    }
  }
  uVar3 = 0;
  piVar2 = (int *)((int)this + 0x14);
  do {
    if (*piVar2 == 0) {
      *(int *)((int)this + uVar3 * 4 + 0x14) = param_1;
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 2);
  return uVar3;
}

/* ref: FUN_00bba6a0 */
unsigned int F_00bba6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = (int *)((int)this + 0x14);
  piVar2 = (int *)((int)this + 0x1c);
  if (piVar1 != piVar2) {
    do {
      if (*piVar1 == param_1) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != piVar2);
    if (piVar1 != piVar2) {
      *piVar1 = 0;
    }
  }
  return 0;
}

/* ref: FUN_00bba6d0 */
byte F_00bba6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  for (piVar1 = (int *)((int)this + 0x14);
      (piVar1 != (int *)((int)this + 0x1c) && (*piVar1 != param_1)); piVar1 = piVar1 + 1) {
  }
  return piVar1 != (int *)((int)this + 0x1c);
}

/* ref: FUN_00bba700 */
unsigned int F_00bba700(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba700u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  *(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x3c) = (*(float *)&gen_args[1]);
  iVar2 = *(int *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x38) * (float10)(*(float *)&gen_args[1]))));
  (*(float *)&gen_args[1]) = fVar1;
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!((float10)0 < (float10)fVar1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[1]) = fVar1;
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    (*(float *)&gen_args[1]) = *pfVar3;
    F_009f6650(iVar2,(*(float *)&gen_args[1]));
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf1 */
uint F_00bba770(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbba770u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14c5980) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c5980) = *(uint *)&REFG(undefined, 0x14c5980) | 1;
    *(gen_code32 *)&REFG(undefined, 0x14c5970) = ((code *)REFP(0xbba5e0));
    *(undefined4 *)&REFG(undefined, 0x14c5974) = 0;
    *(gen_code32 *)&REFG(undefined, 0x14c5978) = ((code *)REFP(0xbba400));
    *(undefined4 *)&REFG(undefined, 0x14c597c) = 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14c5970) + *(short *)(param_1 + 0x34) * 8))
                    (*(int *)(&REFG(undefined, 0x14c5974) + *(short *)(param_1 + 0x34) * 8) + param_1);
  return uVar1;
}

/* ref: FUN_00bba7e0 */
unsigned int F_00bba7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  
  iVar2 = *(int *)((int)this + 0x10);
  if ((iVar2 != 0) && (piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)(iVar2 + 0x14))), piVar7 != *(int * PTR32 *)(iVar2 + 0x14)))
  {
    do {
      iVar3 = piVar7[3];
      if (param_1 != (int *)0x0) {
        piVar6 = (int *)(iVar3 + 0xc);
        for (piVar4 = piVar6; piVar4 != (int *)(iVar3 + 0x1c); piVar4 = piVar4 + 1) {
          if ((int *)*piVar4 == param_1) goto LAB_00bba84e;
        }
        if ((int *)*piVar4 != param_1) {
          iVar5 = 0;
          do {
            if (*piVar6 == 0) {
              *(int * PTR32 *)(iVar3 + 0xc + iVar5 * 4) = param_1;
              ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1,iVar3);
              break;
            }
            iVar5 = iVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar5 < 4);
        }
      }
LAB_00bba84e: ;
      if (*(char *)((int)piVar7 + 0x11) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x11);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x11);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x11);
          piVar4 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x11);
            piVar4 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int * PTR32 *)(iVar2 + 0x14));
  }
  return 0;
}

/* ref: FUN_00bba8b0 */
unsigned int F_00bba8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  iVar2 = *(int *)((int)this + 0x10);
  if ((iVar2 != 0) && (piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(iVar2 + 0x14))), piVar5 != *(int * PTR32 *)(iVar2 + 0x14)))
  {
    do {
      if (param_1 != 0) {
        iVar4 = 0;
        piVar6 = (int *)(piVar5[3] + 0xc);
        do {
          if (*piVar6 == param_1) {
            *(undefined4 *)(piVar5[3] + 0xc + iVar4 * 4) = 0;
            break;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < 4);
      }
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar6 = (int *)piVar5[2];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x11);
          piVar5 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x11);
            piVar5 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar6 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar6 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar3 = (int *)piVar5[1];
            piVar6 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(iVar2 + 0x14));
  }
  return 0;
}

/* ref: FUN_00bba950 */
byte F_00bba950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x14)));
    puVar2 = (undefined4 *)F_00bbaae0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*puVar1,puVar1,&(*(undefined4 *)&gen_args[1]));
    return (undefined4 *)*puVar2 != puVar1;
  }
  return 0;
}

/* ref: FUN_00bba990 */
uint F_00bba990(unsigned int gen_a0)
{
  GEN_ENTER(0xbba990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bba9a0 */
unsigned int F_00bba9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbba9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00bba9c0 */
unsigned int F_00bba9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbba9c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bba9e0 */
uint F_00bba9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bba9f0 */
uint F_00bba9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbba9f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbaa00 */
unsigned int F_00bbaa00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbaa00u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbaa20 */
uint F_00bbaa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaa20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf4 */
uint F_00bbaa30(void)
{
  GEN_ENTER(0xbbaa30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00bbaa40 */
uint F_00bbaa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bbaab0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00bbaa50 */
unsigned int F_00bbaa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbaa50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00bbaa70 */
unsigned int F_00bbaa70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbaa70u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbaa90 */
unsigned int F_00bbaa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbaa90u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf0 */
uint F_00bbaab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bba380(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bbaae0 */
uint F_00bbaae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbaae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
    return (uint)param_1;
  }
  piVar4 = param_2;
  do {
    if (piVar4[3] == *param_4) break;
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      piVar2 = (int *)piVar4[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        piVar4 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar4[1] + 0x11);
        piVar3 = (int *)piVar4[1];
        piVar2 = piVar4;
        while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
        }
      }
    }
  } while (piVar4 != param_3);
  *param_1 = piVar4;
  return (uint)param_1;
}

/* ref: FUN_00bbab60 */
uint F_00bbab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbab60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00bbaae0(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bbab90 */
uint F_00bbab90(unsigned int gen_a0)
{
  GEN_ENTER(0xbbab90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c1e470(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x11048c8));
  return (uint)in_ecx;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf1 */
unsigned int F_00bbabc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbabc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf2 */
unsigned int F_00bbabd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbabd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf3 */
unsigned int F_00bbabe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbabe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf4 */
uint F_00bbabf0(void)
{
  GEN_ENTER(0xbbabf0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf0 */
uint F_00bbac00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbac00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x11048c8));
  F_00c1e490(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bbac40 */
byte F_00bbac40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbac40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(char *)(in_ecx + 0x10) == '\0') {
    return 0;
  }
  return *(int *)(in_ecx + 0xc) == param_2;
}

/* ref: FUN_00bbac60 */
unsigned int F_00bbac60(float gen_a0)
{
  GEN_ENTER(0xbbac60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bbac80 */
uint F_00bbac80(unsigned int gen_a0)
{
  GEN_ENTER(0xbbac80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0xffffffff;
  *(undefined2 *)(in_ecx + 4) = 0;
  *(undefined1 *)((int)in_ecx + 0x12) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bbaca0 */
uint F_00bbaca0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbaca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0xffffffff;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined2 *)(in_ecx + 0x10) = 0;
  *(undefined1 *)(in_ecx + 0x12) = 0;
  return 0;
}

/* ref: FUN_00bbacc0 */
uint F_00bbacc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbacc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    if (*(char *)((int)this + 0x11) != '\0') {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 0xc) = 0xffffffff;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined2 *)((int)this + 0x10) = 0;
      *(undefined1 *)((int)this + 0x12) = 0;
    }
    *(int *)((int)this + 4) = param_1;
    *(undefined2 *)((int)this + 0x11) = 1;
  }
  return 0;
}

/* ref: FUN_00bbad00 */
byte F_00bbad00(unsigned int gen_a0)
{
  GEN_ENTER(0xbbad00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(char *)((int)this + 0x10) != '\0') {
      return 1;
    }
    if ((*(int *)((int)this + 4) != 0) &&
       (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4)),
       uVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbad30 */
uint F_00bbad30(unsigned int gen_a0)
{
  GEN_ENTER(0xbbad30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(char *)((int)this + 0x10) != '\0') {
      return *(uint *)((int)this + 0xc);
    }
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
      if (uVar1 != 0) {
        return (uint)*(ushort *)(uVar1 + 0x88);
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00bbad60 */
byte F_00bbad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(char *)((int)this + 0x10) != '\0') {
      return *(uint *)((int)this + 0xc) == param_1;
    }
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
      if (uVar1 != 0) {
        return *(ushort *)(uVar1 + 0x88) == param_1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbadb0 */
byte F_00bbadb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbadb0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 0xc) = param_2;
  *(undefined1 *)(in_ecx + 0x10) = 1;
  *(undefined2 *)(in_ecx + 0x11) = 1;
  return 1;
}

/* ref: FUN_00bbadd0 */
uint F_00bbadd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbadd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != 0) {
    *(uint *)(in_ecx + 8) = param_2;
    *(undefined2 *)(in_ecx + 0x11) = 1;
  }
  return param_2;
}

/* ref: FUN_00bbadf0 */
byte F_00bbadf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbadf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0xc) = param_1;
  if ((param_1 < 0x158) && ((&REFG(undefined4, 0x14a31f0))[(int)(param_1)] != 0)) {
    *(undefined1 *)((int)this + 0x10) = 1;
    *(undefined2 *)((int)this + 0x11) = 1;
    return 1;
  }
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x11) = 0x100;
  return (byte)param_1;
}

/* ref: FUN_00bbae30 */
uint F_00bbae30(unsigned int gen_a0)
{
  GEN_ENTER(0xbbae30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
      return uVar1;
    }
    if (*(char *)((int)this + 0x10) == '\0') {
      return *(uint *)((int)this + 8);
    }
    if ((*(uint *)((int)this + 0xc) < 0x158) &&
       (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)((int)this + 0xc))])) != (undefined *)0x0)) {
      uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)((int)this + 0xc))])));
      if (uVar1 != 0) {
        return *(uint *)(uVar1 + 0xec);
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbaea0 */
uint F_00bbaea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (((param_1 != (undefined *)0x0) && (*(char *)((int)this + 0x11) != '\0')) &&
     (*(char *)((int)param_1 + 0x11) != '\0')) {
    if (*(uint *)((int)this + 4) != 0) {
      if (*(char *)((int)param_1 + 0x12) == '\0') {
        in_EAX = *(uint *)((int)param_1 + 4);
      }
      else {
        in_EAX = 0;
      }
      if (*(uint *)((int)this + 4) == in_EAX) goto LAB_00bbaed2;
    }
    if (*(char *)((int)this + 0x10) != '\0') {
      bVar1 = F_00bbad00(param_1);
      if (bVar1 != 0) {
        uVar2 = F_00bbad30(param_1);
        bVar1 = F_00bbac40(this,uVar2);
        return CONCAT31(extraout_var,bVar1);
      }
    }
    uVar2 = F_00bbae30(this);
    in_EAX = 0;
    if (uVar2 != 0) {
      in_EAX = F_00bbae30(param_1);
      if (uVar2 == in_EAX) {
LAB_00bbaed2: ;
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00bbaf20 */
uint F_00bbaf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bbaea0(this,param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *(undefined2 *)((int)this + 0x11) = 0x100;
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_00bbaf50 */
uint F_00bbaf50(unsigned int gen_a0)
{
  GEN_ENTER(0xbbaf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      return uVar1;
    }
    if ((*(char *)((int)this + 0x10) != '\0') && (*(uint *)((int)this + 0xc) < 0x158)) {
      return (&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)((int)this + 0xc))];
    }
  }
  return 0;
}

/* ref: FUN_00bbaf90 */
uint F_00bbaf90(unsigned int gen_a0)
{
  GEN_ENTER(0xbbaf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
      return uVar1;
    }
    if (((*(char *)((int)this + 0x10) != '\0') && (*(uint *)((int)this + 0xc) < 0x158)) &&
       (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)((int)this + 0xc))])) != (undefined *)0x0)) {
      uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)((int)this + 0xc))])));
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00bbafd0 */
uint F_00bbafd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbafd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 == 0) {
      if (*(char *)((int)this + 0x10) == '\0') {
        if (*(int *)((int)this + 8) != 0) {
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 8))))(*(int * PTR32 *)((int)this + 8));
          if (uVar3 == 3) {
            return *(uint *)((int)this + 8);
          }
        }
      }
      else if ((*(uint *)((int)this + 0xc) < 0x158) &&
              (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)((int)this + 0xc))])) != (undefined *)0x0)) {
        uVar3 = F_00a5f500(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(*(uint *)((int)this + 0xc))])));
        return uVar3;
      }
    }
    else if ((*(int *)(iVar1 + 0x6c) != 2) ||
            ((*(int *)(iVar1 + 0x88) != 8 && (*(int *)(iVar1 + 0x88) != 9)))) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
      if (piVar2 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        if (uVar3 == 3) {
          return (uint)piVar2;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbb060 */
unsigned int F_00bbb060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined2 *)((int)this + 0x10) = 0;
    *(undefined1 *)((int)this + 0x12) = 0;
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
    return 0;
  }
  if (*(char *)(param_1 + 0x12) != '\0') goto LAB_00bbb149;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if (*(char *)((int)this + 0x11) != '\0') {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 0xc) = 0xffffffff;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined2 *)((int)this + 0x10) = 0;
      *(undefined1 *)((int)this + 0x12) = 0;
    }
    *(int *)((int)this + 4) = iVar1;
    *(undefined2 *)((int)this + 0x11) = 1;
  }
  if (*(char *)(param_1 + 0x12) != '\0') goto LAB_00bbb149;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 4) == 0) goto LAB_00bbb149;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x4c))))(*(int * PTR32 *)(param_1 + 4));
    if (uVar2 == 0) goto LAB_00bbb149;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(int *)(param_1 + 4) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x44))))(*(int * PTR32 *)(param_1 + 4));
    }
    if (*(char *)(param_1 + 0x12) != '\0') goto LAB_00bbb11e;
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(param_1 + 4) != 0) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x4c))))(*(int * PTR32 *)(param_1 + 4));
        if (uVar2 != 0) {
          uVar2 = (uint)*(ushort *)(uVar2 + 0x88);
          goto LAB_00bbb121;
        }
      }
      goto LAB_00bbb11e;
    }
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  else {
LAB_00bbb11e: ;
    uVar2 = 0xffffffff;
  }
LAB_00bbb121: ;
  *(uint *)((int)this + 0xc) = uVar2;
  if ((uVar2 < 0x158) && ((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)] != 0)) {
    *(undefined1 *)((int)this + 0x10) = 1;
    *(undefined2 *)((int)this + 0x11) = 1;
  }
  else {
    *(undefined1 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x11) = 0x100;
  }
LAB_00bbb149: ;
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)((int)this + 8) = *(int *)(param_1 + 8);
    *(undefined2 *)((int)this + 0x11) = 1;
  }
  return 0;
}

/* ref: FUN_00bbb160 */
uint F_00bbb160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb160u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00bbb180 */
uint F_00bbb180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb180u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb1d0 */
uint F_00bbb1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb1d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb220 */
uint F_00bbb220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb220u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb280 */
uint F_00bbb280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb280u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb300 */
uint F_00bbb300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb360 */
uint F_00bbb360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb3c0 */
uint F_00bbb3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb420 */
uint F_00bbb420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb440 */
uint F_00bbb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbb460 */
uint F_00bbb460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbb480 */
uint F_00bbb480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb4c0 */
uint F_00bbb4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb4c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb500 */
uint F_00bbb500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb540 */
uint F_00bbb540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb540u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb5b0 */
uint F_00bbb5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb5c0 */
uint F_00bbb5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb5d0 */
uint F_00bbb5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb5e0 */
uint F_00bbb5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb5f0 */
uint F_00bbb5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb620 */
uint F_00bbb620(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb630 */
uint F_00bbb630(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb640 */
uint F_00bbb640(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb650 */
uint F_00bbb650(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb660 */
uint F_00bbb660(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb680 */
uint F_00bbb680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbb680u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbb6b0 */
uint F_00bbb6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb6c0 */
uint F_00bbb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb6c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb6e0 */
uint F_00bbb6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbb6e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbb750 */
uint F_00bbb750(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb760 */
uint F_00bbb760(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb7b0 */
uint F_00bbb7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb7e0 */
uint F_00bbb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb7f0 */
uint F_00bbb7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb7f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb810 */
byte F_00bbb810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xbbb810u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  bool bVar1;
  
  if (((((short)param_2 == *(short *)(param_1 + 0xc)) && (param_3 == *(int *)(param_1 + 0x20))) &&
      (bVar1 = GEN_ISNAN((float10)*param_4) || GEN_ISNAN((float10)*(float *)(param_1 + 0x10)),
      bVar1 != (bVar1 || (float10)*param_4 == (float10)*(float *)(param_1 + 0x10)))) &&
     (((bVar1 = GEN_ISNAN((float10)param_4[1]) || GEN_ISNAN((float10)*(float *)(param_1 + 0x14)),
       bVar1 != (bVar1 || (float10)param_4[1] == (float10)*(float *)(param_1 + 0x14)) &&
       (bVar1 = GEN_ISNAN((float10)param_4[2]) || GEN_ISNAN((float10)*(float *)(param_1 + 0x18)),
       bVar1 != (bVar1 || (float10)param_4[2] == (float10)*(float *)(param_1 + 0x18)))) &&
      (bVar1 = GEN_ISNAN((float10)param_5) || GEN_ISNAN((float10)*(float *)(param_1 + 0x40)),
      bVar1 != (bVar1 || (float10)param_5 == (float10)*(float *)(param_1 + 0x40)))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb880 */
byte F_00bbb880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbb880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  bool bVar1;
  
  if (((((short)param_1 == *(short *)((int)this + 0xc)) && (param_2 == *(int *)((int)this + 0x20)))
      && (bVar1 = GEN_ISNAN((float10)*param_3) || GEN_ISNAN((float10)*(float *)((int)this + 0x10)),
         bVar1 != (bVar1 || (float10)*param_3 == (float10)*(float *)((int)this + 0x10)))) &&
     ((bVar1 = GEN_ISNAN((float10)param_3[1]) || GEN_ISNAN((float10)*(float *)((int)this + 0x14)),
      bVar1 != (bVar1 || (float10)param_3[1] == (float10)*(float *)((int)this + 0x14)) &&
      (bVar1 = GEN_ISNAN((float10)param_3[2]) || GEN_ISNAN((float10)*(float *)((int)this + 0x18)),
      bVar1 != (bVar1 || (float10)param_3[2] == (float10)*(float *)((int)this + 0x18)))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb8e0 */
byte F_00bbb8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xbbb8e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  bool bVar1;
  
  if ((((param_2 == *(int *)(param_1 + 0xc)) && (param_3 == *(int *)(param_1 + 0x10))) ||
      ((param_2 == *(int *)(param_1 + 0x10) && (param_3 == *(int *)(param_1 + 0xc))))) &&
     ((bVar1 = GEN_ISNAN((float10)param_4) || GEN_ISNAN((float10)*(float *)(param_1 + 0x18)),
      bVar1 != (bVar1 || (float10)param_4 == (float10)*(float *)(param_1 + 0x18)) &&
      (bVar1 = GEN_ISNAN((float10)param_5) || GEN_ISNAN((float10)*(float *)(param_1 + 0x1c)),
      bVar1 != (bVar1 || (float10)param_5 == (float10)*(float *)(param_1 + 0x1c)))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb940 */
uint F_00bbb940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(ushort *)((int)this + 0xb8) - 1;
  uVar1 = 0;
  if (0 < iVar2) {
    uVar3 = 0;
    do {
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x14) + 2 + uVar3 * 2))) == (short)param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      uVar3 = uVar1 & 0xffff;
    } while ((int)uVar3 < iVar2);
  }
  return 0xffff;
}

/* ref: FUN_00bbb980 */
uint F_00bbb980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(ushort *)(in_ecx + 0xb8) <= (ushort)param_2) {
    return 0;
  }
  return (uint)(ushort)param_2 * 0x60 + *(int *)(in_ecx + 0x18);
}

/* ref: FUN_00bbb9b0 */
uint F_00bbb9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbb9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  float * pfVar5;
  int iVar6;
  float fVar7;
  undefined4 * puVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  fVar7 = gen_bits2f((uint)(ushort)param_2);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = param_1;
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    (*(float *)(gen_frame + 0x3c)) = fVar7;
    if (fVar7 == gen_bits2f(*(ushort *)((int)this + 0xb8) - 1)) {
      puVar4 = (undefined4 *)
               F_00623320(*(undefined * PTR32 *)((int)this + 0x10),
                            (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x14) + (int)gen_fl2bits(fVar7) * 2))));
      puVar8 = ((undefined4 *)(gen_frame + 0x80));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)));
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      puVar8 = ((undefined4 *)(gen_frame + 0xc0));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      pfVar5 = (float *)F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90,((undefined4 *)(gen_frame + 0xc0)));
      (*(float *)(gen_frame + 0x20)) = *pfVar5;
      (*(float *)(gen_frame + 0x24)) = pfVar5[1];
      (*(float *)(gen_frame + 0x28)) = pfVar5[2];
      F_0046f390(&(*(float *)(gen_frame + 0x20)));
      fVar7 = *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) * 0xa0 + 0x8c + *(int *)((int)pvVar3 + 0x1c))));
      (*(float *)(gen_frame + 0x3c)) = fVar7;
      fVar9 = (float10)fVar7;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar9);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x28)));
      fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x20))))));
      (*(float *)(gen_frame + 0x20)) = fVar7;
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar9))));
      (*(float *)(gen_frame + 0x24)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x28))))));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      *(*(float * PTR32 *)(gen_frame + 0x1c)) = fVar7;
      (*(float * PTR32 *)(gen_frame + 0x1c))[1] = fVar1;
      (*(float * PTR32 *)(gen_frame + 0x1c))[2] = fVar2;
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x1c));
      goto LAB_00bbbbaf;
    }
    puVar4 = (undefined4 *)
             F_00623320(*(undefined * PTR32 *)((int)this + 0x10),
                          (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x14) + 2 + (int)gen_fl2bits(fVar7) * 2))));
    puVar8 = ((undefined4 *)(gen_frame + 0x80));
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar4 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)));
    puVar8 = ((undefined4 *)(gen_frame + 0xc0));
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    *(*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xf0));
    (*(float * PTR32 *)(gen_frame + 0x1c))[1] = (*(float *)(gen_frame + 0xf4));
    fVar7 = (*(float *)(gen_frame + 0xf8));
  }
  else {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
    fVar7 = REFG(float, 0x1375ac8);
  }
  (*(float * PTR32 *)(gen_frame + 0x1c))[2] = fVar7;
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x1c));
LAB_00bbbbaf: ;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar5;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)pfVar5;
}

/* ref: FUN_00bbbbd0 */
uint F_00bbbbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xbbbbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  *(undefined4 *)(param_1 + 4) = param_10;
  *(undefined4 *)(param_1 + 6) = param_11;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(undefined4 *)(param_1 + 10) = param_8;
  *param_1 = (ushort)param_2;
  param_1[1] = (ushort)param_3;
  param_1[2] = (ushort)param_4;
  param_1[3] = (ushort)param_5;
  *(undefined4 *)(param_1 + 0xc) = param_9;
  *(float *)(param_1 + 0xe) = param_6;
  if ((ushort)param_3 < (ushort)param_2) {
    param_1[2] = (ushort)param_5;
    param_1[3] = (ushort)param_4;
    *param_1 = (ushort)param_3;
    param_1[1] = (ushort)param_2;
    return (uint)param_1;
  }
  if (((ushort)param_2 == (ushort)param_3) && ((ushort)param_5 < (ushort)param_4)) {
    param_1[3] = (ushort)param_4;
    param_1[2] = (ushort)param_5;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbbce0 */
uint F_00bbbce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbce0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00bbbd00 */
uint F_00bbbd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbd00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bbbd10 */
uint F_00bbbd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbd10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00bbbd20 */
uint F_00bbbd20(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbbbd20u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((float10)(*(float *)&gen_args[0]) < (float10)(*(float *)&gen_args[1]))) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  return (uint)pfVar1;
}

/* ref: FUN_00bbbd40 */
uint F_00bbbd40(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbbbd40u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((float10)(*(float *)&gen_args[1]) < (float10)(*(float *)&gen_args[0]))) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  return (uint)pfVar1;
}

/* ref: FUN_00bbbde0 */
uint F_00bbbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbbe00 */
uint F_00bbbe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbbe30 */
uint F_00bbbe30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbe30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00bbbe70 */
uint F_00bbbe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbe70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00bbbeb0 */
uint F_00bbbeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00bbbef0 */
uint F_00bbbef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
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

/* ref: FUN_00bbbf20 */
uint F_00bbbf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbbf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf30 */
uint F_00bbbf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbbf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf40 */
byte F_00bbbf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbf60 */
byte F_00bbbf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbf80 */
uint F_00bbbf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbbf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf90 */
byte F_00bbbf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbfb0 */
uint F_00bbbfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbbfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbfc0 */
byte F_00bbbfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbfe0 */
uint F_00bbbfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_2;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc030 */
uint F_00bbc030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc030u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbc060 */
uint F_00bbc060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00bbc0c0 */
unsigned int F_00bbc0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00bbc0e0 */
uint F_00bbc0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbc0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc100 */
uint F_00bbc100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbc100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc120 */
unsigned int F_00bbc120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbc120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbc140 */
unsigned int F_00bbc140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00bbc170 */
unsigned int F_00bbc170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbc1c0 */
unsigned int F_00bbc1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bbc1e0 */
uint F_00bbc1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbc210 */
uint F_00bbc210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbc240 */
uint F_00bbc240(unsigned int gen_a0)
{
  GEN_ENTER(0xbbc240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00bbc260 */
uint F_00bbc260(unsigned int gen_a0)
{
  GEN_ENTER(0xbbc260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00bbc2d0 */
uint F_00bbc2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbc2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  uVar2 = uVar1 & 0xffff;
  if ((short)uVar1 != 0) {
    iVar3 = 0;
    do {
      F_00bfa090(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x74)))));
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(uVar1 + 0x10);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(uVar1 + 0x14);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x18);
  return uVar1;
}

/* ref: FUN_00bbc320 */
uint F_00bbc320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbc320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  longlong lVar1;
  float fVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined1 uVar7;
  int * piVar8;
  byte bVar9;
  double dVar10;
  undefined * pvVar11;
  float * PTR32 * ppfVar12;
  uint uVar13;
  uint uVar14;
  ushort * puVar15;
  float * pfVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  
  pfVar16 = *(float * PTR32 *)(REFG(int, 0x137104c) + 0x1198);
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
  iVar17 = *(int *)((int)this + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0xbc)) = this;
  (*(float * PTR32 *)(gen_frame + 0xa0)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1104968)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) < REFG(double, 0x1094800))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xa0));
  }
  pfVar16 = *ppfVar12;
  bVar18 = GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar19 = bVar18 || ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) == *(float *)&REFG(undefined, 0x1088114);
  (*(float * PTR32 *)(gen_frame + 0xc0)) = pfVar16;
  if (bVar18 != bVar19) {
    return CONCAT22((short)((uint)((int)(uintptr_t)ppfVar12) >> 0x10),
                    CONCAT11(bVar19 << 6 | bVar18 << 2 | 2U |
                             !(*(float *)&REFG(undefined, 0x1088114) <= ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))),(char)ppfVar12));
  }
  (*(uint *)(gen_frame + 0xb0)) = param_1 + 0x50;
  cVar6 = *(char *)((int)this + 0xcc);
  (*(uint *)(gen_frame + 0xb4)) = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 & 0xffff;
  if (cVar6 == '\0') {
    pfVar16 = (float *)(param_1 + 0x40);
  }
  else {
    pfVar16 = (float *)(iVar17 + 0x10);
  }
  fVar2 = *(float *)(param_1 + 0x94);
  (*(float *)(gen_frame + 0x9c)) = *(float *)(param_1 + 0x90);
  (*(float * PTR32 *)(gen_frame + 0xa0)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094778)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  pfVar3 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar2))));
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar3;
  if (!((float10)(float)REFG(float, 0x1094778) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc8));
  }
  (*(float * PTR32 *)(gen_frame + 0x4c)) = *ppfVar12;
  if (cVar6 != '\0') {
    F_00bbc2d0(this);
    *(undefined1 *)((int)this + 0xcc) = 0;
  }
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) - (float10)*pfVar16)));
  (*(float *)(gen_frame + 0x80)) = fVar2;
  fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x24) - (float10)pfVar16[1])));
  (*(float *)(gen_frame + 0x84)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x28) - (float10)pfVar16[2])));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = fVar5;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x9c)) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))))))));
  fVar20 = (float10)(float)((float10)(*(float *)(gen_frame + 0x9c)) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0))))));
  fVar2 = (float)(fVar20 * (float10)fVar2);
  (*(float *)(gen_frame + 0x80)) = fVar2;
  fVar4 = (float)((float10)fVar4 * fVar20);
  (*(float *)(gen_frame + 0x84)) = fVar4;
  fVar5 = (float)(fVar20 * (float10)fVar5);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = fVar5;
  (*(longlong *)(gen_frame + 0x88)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)),(uint)gen_fl2bits(fVar5));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) + (float10)fVar4)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x48) + (float10)fVar5)));
  F_004eebf0(&(*(float *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0xb0)));
  F_005fe2e0(((undefined1 *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x20)));
  F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x30,(*(uint *)(gen_frame + 0xb0)));
  uVar14 = *(int *)((int)this + 0x88) - *(int *)((int)this + 0x84) >> 2;
  (*(uint *)(gen_frame + 0x6c)) = uVar14 & 0xffff;
  if ((short)uVar14 != 0) {
    iVar17 = 0;
    (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)(uVar14 & 0xffff);
    do {
      piVar8 = *((int * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)this + 0x84))));
      ((code *)*(gen_code32 *)(*piVar8 + 0x10))(piVar8);
      iVar17 = iVar17 + 4;
      pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
      (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
    } while (pfVar16 != (float *)0x0);
  }
  uVar14 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  if ((short)uVar14 != 0) {
    iVar17 = 0;
    (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)(uVar14 & 0xffff);
    do {
      F_00bfa370(*((undefined * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)this + 0x74)))));
      iVar17 = iVar17 + 4;
      pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
      (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
    } while (pfVar16 != (float *)0x0);
  }
  pfVar16 = *(float * PTR32 *)((int)this + 0x5c);
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)0x0;
  fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
  if (fVar20 < (float10)REFG(double, 0x1094800)) {
    *(float *)((int)this + 0x5c) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0))))) + fVar20);
  }
  fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))));
  if (*(char *)((int)this + 0xca) == '\0') {
    if (*(char *)((int)this + 0xcb) == '\0') goto LAB_00bbc606;
    pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)this + 0x58) + fVar20))))));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = pfVar16;
    *(float * PTR32 *)((int)this + 0x58) = pfVar16;
    fVar2 = *(float *)((int)this + 0x60);
    (*(float *)(gen_frame + 0xc4)) = fVar2;
    if ((float10)fVar2 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))) {
      *(float *)((int)this + 0x58) = fVar2;
      (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      *(undefined1 *)((int)this + 0xcb) = 0;
      *(undefined1 *)((int)this + 0xc4) = 0;
      goto LAB_00bbc606;
    }
    fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) / (float10)fVar2;
  }
  else {
    pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)this + 0x58) + fVar20))))));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = pfVar16;
    *(float * PTR32 *)((int)this + 0x58) = pfVar16;
    fVar2 = *(float *)((int)this + 0x60);
    (*(float *)(gen_frame + 0xc4)) = fVar2;
    if ((float10)fVar2 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))) {
      *(float *)((int)this + 0x58) = fVar2;
      (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)0x0;
      *(undefined1 *)((int)this + 0xca) = 0;
      goto LAB_00bbc606;
    }
    fVar21 = (float10)1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) / (float10)fVar2;
  }
  (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar21)));
  fVar21 = (float10)(float)fVar21;
  (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x10944e0) - (fVar21 + fVar21)) *
                             (fVar21 * fVar21)))))));
LAB_00bbc606: ;
  pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar20 * (float10)*(float *)((int)this + 0x54) - (float10)REFG(double, 0x1088108)))))))
  ;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
  dVar10 = (double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
  fVar20 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar10),
                        (int)((ulonglong)gen_d2bits(dVar10) >> 0x20));
  pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar20)));
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  if (!((float10)1 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc8));
  }
  pfVar16 = *ppfVar12;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xc0)) = (float *)0x0;
  fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
  (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0x50);
  (*(float *)(gen_frame + 0x40)) = *(float *)((int)this + 0x54);
  (*(float *)(gen_frame + 0x54)) = *(float *)((int)this + 100);
  (*(float *)(gen_frame + 0x48)) = *(float *)((int)this + 0x68);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xb8)) + 2)) = ((undefined2)0x27f);
  (*(uint *)(gen_frame + 0xb8)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0xb8)));
  fVar2 = (float)((float10)1 / fVar20);
  (*(float *)(gen_frame + 0x9c)) = fVar2;
  (*(float *)(gen_frame + 0xc4)) = fVar2;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)(((undefined2)0x27f) | 0xc00);
  lVar1 = (longlong)TRUNC(fVar20);
  (*(longlong *)(gen_frame + 0x88)) = lVar1;
  lVar1 = (*(longlong *)(gen_frame + 0x88));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = gen_bits2f((uint)lVar1);
  pfVar16 = ((float *)GEN_TOP(((int)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))) + *(int *)((int)this + 0x70))));
  if (pfVar16 != (float *)0x0) {
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)) = REFG(float, 0x1087f04);
    (*(longlong *)(gen_frame + 0x88)) = CONCAT44(REFG(float, 0x1087f04),(uint)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
    do {
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        uVar14 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
        iVar17 = 0;
        do {
          F_00bfa530(*((undefined4 *)GEN_TOP((iVar17 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))),((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),
                       ((undefined1 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x44)),(*(float *)(gen_frame + 0x40)),(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0xc4)),(*(float *)(gen_frame + 0x48)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))));
          iVar17 = iVar17 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0xbc));
      if (*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x6c) != 0) {
        (*(uint *)(gen_frame + 0xb0)) = (uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x6c);
        do {
          if ((short)(*(uint *)(gen_frame + 0x6c)) != 0) {
            iVar17 = 0;
            (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)((*(uint *)(gen_frame + 0x6c)) & 0xffff);
            do {
              piVar8 = *((int * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)pvVar11 + 0x84))));
              ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
              iVar17 = iVar17 + 4;
              pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
              (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
            } while (pfVar16 != (float *)0x0);
          }
          if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
            iVar17 = 0;
            (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)((*(uint *)(gen_frame + 0xb4)) & 0xffff);
            do {
              F_00bfab80(*((undefined * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)pvVar11 + 0x74)))));
              iVar17 = iVar17 + 4;
              pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
              (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
            } while (pfVar16 != (float *)0x0);
          }
          uVar14 = (*(uint *)(gen_frame + 0xb0)) - 1;
          (*(uint *)(gen_frame + 0xb0)) = uVar14;
        } while (uVar14 != 0);
      }
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        iVar17 = 0;
        (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)((*(uint *)(gen_frame + 0xb4)) & 0xffff);
        do {
          F_00bfaf20(*((undefined * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)pvVar11 + 0x74)))));
          iVar17 = iVar17 + 4;
          pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
          (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
        } while (pfVar16 != (float *)0x0);
      }
      if (*(char *)((int)pvVar11 + 0xc6) != '\0') {
        (*(uint *)(gen_frame + 0x64)) = *(int *)((int)pvVar11 + 0xb8) - *(int *)((int)pvVar11 + 0xb4) >> 5 & 0xffff;
        (*(uint *)(gen_frame + 0x7c)) = *(int *)((int)pvVar11 + 0x98) - *(int *)((int)pvVar11 + 0x94) >> 3;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x3c)) + 0)) = *(undefined1 *)((int)pvVar11 + 200);
        (*(undefined4 *)(gen_frame + 0x3c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3c)), 1, 3),*(undefined1 *)((int)pvVar11 + 200));
        (*(uint *)(gen_frame + 0x58)) = *(int *)((int)pvVar11 + 0xa8) - *(int *)((int)pvVar11 + 0xa4) >> 3;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x50)) + 0)) = *(undefined1 *)((int)pvVar11 + 199);
        (*(undefined4 *)(gen_frame + 0x50)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x50)), 1, 3),*(undefined1 *)((int)pvVar11 + 199));
        if (*(ushort *)((int)pvVar11 + 0x6e) != 0) {
          (*(float *)(gen_frame + 0xa4)) = gen_bits2f((uint)*(ushort *)((int)pvVar11 + 0x6e));
          do {
            pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0xbc));
            if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
              iVar17 = 0;
              (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)((*(uint *)(gen_frame + 0xb4)) & 0xffff);
              do {
                F_00bfbbe0(*((undefined4 *)GEN_TOP((iVar17 + *(int *)((int)pvVar11 + 0x74)))),
                             (int)pvVar11 + 0x94,(*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x3c)),GEN_TOF((*(float * PTR32 *)(gen_frame + 0xc0))),
                             (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc4))));
                iVar17 = iVar17 + 4;
                pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
                (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
              } while (pfVar16 != (float *)0x0);
            }
            if ((short)(*(uint *)(gen_frame + 0x64)) != 0) {
              (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)0x0;
              (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x64)) & 0xffff;
              do {
                puVar15 = ((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xb4) + (int)(*(float * PTR32 *)(gen_frame + 0xcc)))));
                (*(uint *)(gen_frame + 0x68)) = *(uint *)(puVar15 + 4);
                (*(uint *)(gen_frame + 0x60)) = *(uint *)(puVar15 + 6);
                iVar17 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74) + (uint)*puVar15 * 4)));
                (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(puVar15 + 0xe);
                if (puVar15[2] < *(ushort *)(iVar17 + 0xb8)) {
                  (*(int *)(gen_frame + 0x98)) = (uint)puVar15[2] * 0x60 + *(int *)(iVar17 + 0x18);
                }
                else {
                  (*(int *)(gen_frame + 0x98)) = 0;
                }
                iVar17 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74) + (uint)puVar15[1] * 4)));
                if (puVar15[3] < *(ushort *)(iVar17 + 0xb8)) {
                  (*(uint *)(gen_frame + 0xb0)) = (uint)puVar15[3] * 0x60 + *(int *)(iVar17 + 0x18);
                }
                else {
                  (*(uint *)(gen_frame + 0xb0)) = 0;
                }
                bVar18 = GEN_ISNAN(*(float *)((*(int *)(gen_frame + 0x98)) + 0x54)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
                (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x78)) + 0)) = 1;
                (*(int *)(gen_frame + 0x78)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x78)), 1, 3),1);
                if (bVar18 == (bVar18 || *(float *)((*(int *)(gen_frame + 0x98)) + 0x54) == *(float *)&REFG(undefined, 0x1088114))) {
                  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x78)) + 0)) = 0;
                  (*(int *)(gen_frame + 0x78)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x78)), 1, 3) << 8;
                }
                (*(uint *)(gen_frame + 0x70)) = 0;
                (*(uint *)(gen_frame + 0xa8)) = 0;
                (*(uint *)(gen_frame + 0xb8)) = 1;
                if ((*(uint *)(gen_frame + 0x7c)) != 0) {
                  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x7c));
                  do {
                    uVar14 = (*(uint *)(gen_frame + 0xb8));
                    if (((*(uint *)(gen_frame + 0x68)) & (*(uint *)(gen_frame + 0xb8))) != 0) {
                      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x94) + (*(uint *)(gen_frame + 0xa8)) * 8)));
                      ((code *)*(gen_code32 *)(*piVar8 + 0x20))
                                (piVar8,(*(int *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xb0)),(*(undefined4 *)(gen_frame + 0x74)),
                                 (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x94) + (*(uint *)(gen_frame + 0xa8)) * 8 + 4))),
                                 (uint)(((*(uint *)(gen_frame + 0xb8)) & (*(uint *)(gen_frame + 0x60))) != 0),puVar15 + 8,(*(int *)(gen_frame + 0x78)));
                      uVar14 = (*(uint *)(gen_frame + 0xb8));
                    }
                    uVar13 = (*(uint *)(gen_frame + 0xa8)) + 1;
                    (*(uint *)(gen_frame + 0xb8)) = uVar14 << 1 | (uint)((int)uVar14 < 0);
                    (*(uint *)(gen_frame + 0xa8)) = uVar13;
                  } while (uVar13 < (*(uint *)(gen_frame + 0x7c)));
                }
                bVar9 = (byte)(*(uint *)(gen_frame + 0x70)) & 0x1f;
                (*(uint *)(gen_frame + 0xb8)) = 1 << bVar9 | 1U >> 0x20 - bVar9;
                (*(uint *)(gen_frame + 0xa8)) = 0;
                if ((*(uint *)(gen_frame + 0x58)) != 0) {
                  do {
                    if (((*(uint *)(gen_frame + 0x68)) & (*(uint *)(gen_frame + 0xb8))) != 0) {
                      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xa4) + (*(uint *)(gen_frame + 0xa8)) * 8)));
                      ((code *)*(gen_code32 *)(*piVar8 + 0x20))
                                (piVar8,(*(int *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xb0)),(*(undefined4 *)(gen_frame + 0x74)),
                                 (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xa4) + (*(uint *)(gen_frame + 0xa8)) * 8 + 4))),
                                 (uint)(((*(uint *)(gen_frame + 0xb8)) & (*(uint *)(gen_frame + 0x60))) != 0),puVar15 + 8,(*(int *)(gen_frame + 0x78)));
                    }
                    uVar14 = (*(uint *)(gen_frame + 0xa8)) + 1;
                    (*(uint *)(gen_frame + 0xb8)) = (*(uint *)(gen_frame + 0xb8)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0xb8)) < 0);
                    (*(uint *)(gen_frame + 0xa8)) = uVar14;
                  } while (uVar14 < (*(uint *)(gen_frame + 0x58)));
                }
                (*(float * PTR32 *)(gen_frame + 0xcc)) = (*(float * PTR32 *)(gen_frame + 0xcc)) + 8;
                uVar14 = (*(uint *)(gen_frame + 0x5c)) - 1;
                (*(uint *)(gen_frame + 0x5c)) = uVar14;
              } while (uVar14 != 0);
            }
            fVar2 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xa4))) + -1);
            (*(float *)(gen_frame + 0xa4)) = fVar2;
          } while (fVar2 != 0.0);
        }
      }
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        iVar17 = 0;
        uVar14 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
        do {
          F_00bfdb00(*((undefined * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))));
          iVar17 = iVar17 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(uintptr_t)gen_fl2bits((float)((*(float *)(gen_frame + 0xc4)))));
      pfVar16 = &(*(float *)(gen_frame + 0xa4));
      (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) + (float10)(*(float *)(gen_frame + 0x9c)));
      if (!((float10)(float)((float10)(*(float *)(gen_frame + 0xc4)) + (float10)(*(float *)(gen_frame + 0x9c))) < (float10)1)) {
        pfVar16 = (float *)((int)&(*(longlong *)(gen_frame + 0x88)) + 4);
      }
      pfVar3 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xc8)) - 1);
      (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar3;
      (*(float *)(gen_frame + 0xc4)) = *pfVar16;
      lVar1 = (*(longlong *)(gen_frame + 0x88));
    } while (pfVar3 != (float *)0x0);
  }
  (*(longlong *)(gen_frame + 0x88)) = lVar1;
  uVar7 = *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xc9);
  (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)) = uVar7;
  gen_piece_set(&(*(longlong *)(gen_frame + 0x88)), 0, 5, (unsigned long long)(CONCAT14(uVar7,(uint)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))))));
  if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
    uVar14 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
    iVar17 = 0;
    do {
      F_00bfe990(*((undefined4 *)GEN_TOP((iVar17 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))),(*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)),
                   ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xac))))));
      iVar17 = iVar17 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x20) = *(*(float * PTR32 *)(gen_frame + 0xa0));
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x24) = (*(float * PTR32 *)(gen_frame + 0xa0))[1];
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x28) = (*(float * PTR32 *)(gen_frame + 0xa0))[2];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x70) = 0;
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0xbc));
}

/* ref: FUN_00bbcb10 */
uint F_00bbcb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbcb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int * piVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_10;
  
  F_00bbc2d0(this);
  uVar4 = *(int *)((int)this + 0x88) - *(int *)((int)this + 0x84) >> 2;
  sVar3 = (short)uVar4;
  if (sVar3 != 0) {
    iVar8 = 0;
    uVar6 = uVar4 & 0xffff;
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x84))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      iVar8 = iVar8 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  uVar7 = uVar6 & 0xffff;
  uVar1 = *(ushort *)((int)this + 0x6c);
  local_10 = (uint)uVar1;
  sVar5 = (short)uVar6;
  if (*(char *)((int)this + 0xcd) == '\0') {
    if (uVar1 != 0) {
      do {
        if (sVar3 != 0) {
          iVar8 = 0;
          uVar6 = uVar4 & 0xffff;
          do {
            piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x84))));
            ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
            iVar8 = iVar8 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (sVar5 != 0) {
          iVar8 = 0;
          uVar6 = uVar7;
          do {
            F_00bfab80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + iVar8))));
            iVar8 = iVar8 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else if (uVar1 != 0) {
    do {
      if (sVar3 != 0) {
        iVar8 = 0;
        uVar6 = uVar4 & 0xffff;
        do {
          piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x84))));
          ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,(undefined4)gen_fl2bits((float)(float10)1));
          iVar8 = iVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (sVar5 != 0) {
        iVar8 = 0;
        uVar6 = uVar7;
        do {
          F_00bfab80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + iVar8))));
          iVar8 = iVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  if (sVar5 != 0) {
    iVar8 = 0;
    local_10 = uVar7;
    do {
      F_00bfdb00(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + iVar8))));
      iVar8 = iVar8 + 4;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  uVar4 = 0;
  if (sVar5 != 0) {
    iVar8 = 0;
    do {
      uVar4 = F_00bfe990(*((undefined4 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x74)))),
                           (uint)*(byte *)((int)this + 0xc9),(float)(float10)0);
      iVar8 = iVar8 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return uVar4;
}

/* ref: FUN_00bbcca0 */
uint F_00bbcca0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbcca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  uVar2 = uVar1 & 0xffff;
  if ((short)uVar1 != 0) {
    iVar3 = 0;
    uVar1 = uVar2;
    do {
      uVar2 = F_00bfedc0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x74)))));
      iVar3 = iVar3 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uVar2;
}

/* ref: FUN_00bbcce0 */
uint F_00bbcce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbcce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_1 != 0) &&
     ((param_3 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2))) {
    uVar1 = F_00bff380(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_3 & 0xffff) * 4))),param_1,
                         param_2,*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3,
                         param_4);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00bbcd30 */
uint F_00bbcd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbbcd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  
  if ((param_1 != 0) &&
     ((param_3 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2))) {
    uVar1 = F_00bff3f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_3 & 0xffff) * 4))),param_1,
                         param_2,param_4,param_5 & 0xff,
                         (uint)(*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3 != 0),
                         param_6);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00bbcd90 */
byte F_00bbcd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbcd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (param_1 != 0) {
    if ((param_2 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2)) {
      bVar1 = F_00bff330(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_2 & 0xffff) * 4))),param_1,
                           param_3);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00bbcdd0 */
unsigned int F_00bbcdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbcdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if ((param_1 != 0) &&
     ((param_2 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2))) {
    F_00bfe7f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_2 & 0xffff) * 4))),param_1,param_3);
  }
  return 0;
}

/* ref: FUN_00bbce10 */
uint F_00bbce10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbce10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar2 = *(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4);
  puVar3 = (undefined4 *)(iVar2 >> 5);
  uVar1 = (ushort)puVar3;
  if (((ushort)param_1 < uVar1) &&
     (puVar3 = ((undefined4 *)GEN_TOP(CONCAT22((short)(iVar2 >> 0x15),(ushort)param_2))),
     (ushort)param_2 < uVar1)) {
    puVar3 = ((undefined4 *)GEN_TOP(((uint)(ushort)param_2 * 0x20 + *(int *)((int)this + 0xb4))));
    puVar4 = ((undefined4 *)GEN_TOP(((uint)(ushort)param_1 * 0x20 + *(int *)((int)this + 0xb4))));
    puVar5 = puVar4;
    puVar6 = ((undefined4 *)(gen_frame + 0xc));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar3;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar5 = ((undefined4 *)(gen_frame + 0xc));
    puVar4 = puVar3;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00bbce80 */
unsigned int F_00bbce80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbce80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if ((param_1 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2)) {
    iVar1 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
    F_00bfbc40(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_1 & 0xffff) * 4))),param_2,param_3,
                 iVar1 + param_2,iVar1 + param_3);
  }
  return 0;
}

/* ref: FUN_00bbced0 */
unsigned int F_00bbced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbced0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_c;
  
  uVar5 = -1 << ((byte)param_1 & 0x1f);
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  uVar3 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5 != 0) {
    do {
      iVar4 = uVar3 * 0x20;
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 8 + iVar4)));
      *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 8 + iVar4))) =
           (uVar3 & uVar5) * 2 | ~uVar5 & uVar3 | uVar2;
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 0xc + iVar4)));
      uVar3 = *puVar1;
      *puVar1 = (uVar3 & uVar5) * 2 | ~uVar5 & uVar3 | uVar2;
      local_c = local_c + 1;
      uVar3 = local_c & 0xffff;
    } while (uVar3 < (uint)(*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbcf80 */
unsigned int F_00bbcf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbcf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  uVar2 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5 != 0) {
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 8 + iVar3)));
      *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 8 + iVar3))) =
           (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 0xc + iVar3)));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      local_8 = local_8 + 1;
      uVar2 = local_8 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbd030 */
unsigned int F_00bbd030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbd030u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint uVar7;
  uint local_14;
  
  puVar4 = &(*(int *)&gen_args[1]);
  if ((ushort)(*(undefined4 *)&gen_args[2]) <= (ushort)(*(int *)&gen_args[1])) {
    puVar4 = &(*(undefined4 *)&gen_args[2]);
  }
  puVar5 = &(*(int *)&gen_args[1]);
  if ((ushort)(*(int *)&gen_args[1]) <= (ushort)(*(undefined4 *)&gen_args[2])) {
    puVar5 = &(*(undefined4 *)&gen_args[2]);
  }
  uVar6 = 1 << ((byte)*(undefined2 *)puVar4 & 0x1f);
  uVar7 = 1 << ((byte)*(undefined2 *)puVar5 & 0x1f);
  local_14 = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) >> 3 != 0) {
    bVar3 = (byte)*(undefined2 *)puVar5 - (byte)*(undefined2 *)puVar4;
    (*(int *)&gen_args[1]) = 0;
    do {
      puVar1 = ((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar7) >> (bVar3 & 0x1f) | (uVar2 & uVar6) << (bVar3 & 0x1f) |
                uVar2 & ~uVar6 & ~uVar7;
      puVar1 = ((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar7) >> (bVar3 & 0x1f) | (uVar2 & uVar6) << (bVar3 & 0x1f) |
                uVar2 & ~uVar6 & ~uVar7;
      local_14 = local_14 + 1;
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 0x20;
    } while (local_14 < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) >> 3));
  }
  return 0;
}

/* ref: FUN_00bbd140 */
byte F_00bbd140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbd140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  uVar2 = 0;
  if (uVar6 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4)));
      iVar4 = *(ushort *)(iVar1 + 0xb8) - 1;
      uVar5 = 0;
      if (0 < iVar4) {
        uVar3 = 0;
        do {
          if (*((short *)GEN_TOP((*(int *)(iVar1 + 0x14) + 2 + uVar3 * 2))) == (short)param_1) {
            if (uVar5 != 0xffff) {
              *param_2 = uVar2;
              *param_3 = uVar5;
              return 1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          uVar3 = (uint)uVar5;
        } while ((int)uVar3 < iVar4);
      }
      uVar2 = uVar2 + 1;
      uVar3 = (uint)uVar2;
    } while (uVar3 < uVar6);
  }
  return 0;
}

/* ref: FUN_00bbd1e0 */
byte F_00bbd1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbd1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00bbd240 */
byte F_00bbd240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbd240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  if (uVar2 != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if ((*piVar4 == param_1) && (*(ushort *)(piVar4 + 1) == param_2)) {
        *param_4 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  bVar1 = F_00bfb740(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_3 & 0xffff) * 4))),param_1,
                       param_2,param_4);
  if (bVar1 != 0) {
    *param_4 = *param_4 + (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbd2d0 */
byte F_00bbd2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbd2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  uVar4 = 0;
  uVar3 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
  if (uVar3 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0xa4);
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar1 + uVar4;
        return 1;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_00bbd360 */
byte F_00bbd360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbd360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a5;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort * puVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort local_8;
  
  local_8 = (ushort)param_1;
  uVar1 = (ushort)param_1;
  uVar7 = (ushort)param_2;
  if (((ushort)param_2 < (ushort)param_1) ||
     ((uVar6 = (ushort)param_4, uVar1 = (ushort)param_2, uVar2 = (ushort)param_3,
      (ushort)param_1 == (ushort)param_2 &&
      (uVar7 = (ushort)param_1, (ushort)param_4 < (ushort)param_3)))) {
    local_8 = uVar7;
    uVar6 = (ushort)param_3;
    uVar2 = (ushort)param_4;
  }
  uVar7 = 0;
  uVar5 = *(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      puVar4 = ((ushort *)GEN_TOP((uVar3 * 0x20 + *(int *)((int)this + 0xb4))));
      if ((((*puVar4 == local_8) && (puVar4[2] == uVar2)) && (puVar4[1] == uVar1)) &&
         (puVar4[3] == uVar6)) {
        *param_5 = uVar7;
        return 1;
      }
      uVar7 = uVar7 + 1;
      uVar3 = (uint)uVar7;
    } while (uVar3 < uVar5);
  }
  return 0;
}

/* ref: FUN_00bbd420 */
byte F_00bbd420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbbd420u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  ushort * param_7 = (ushort *)(uintptr_t)gen_a6;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  
  if ((uint)(*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2) <= (uint)(ushort)param_4) {
    return 0;
  }
  iVar5 = *((int *)GEN_TOP((*(int *)(param_1 + 0x74) + (uint)(ushort)param_4 * 4)));
  if (((ushort)param_5 < *(ushort *)(iVar5 + 0xb8)) &&
     (iVar5 = (uint)(ushort)param_5 * 0x60 + *(int *)(iVar5 + 0x18), iVar5 != 0)) {
    uVar6 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2;
    uVar7 = 0;
    if (uVar6 != 0) {
      iVar1 = *(int *)(param_1 + 0x84);
      uVar4 = 0;
      do {
        iVar2 = *(int *)(iVar1 + uVar4 * 4);
        if (*(int *)(iVar2 + 8) == 1) {
          bVar3 = F_00bbb810(iVar2,param_2,iVar5,param_3,param_6);
          if (bVar3 != 0) {
            *param_7 = uVar7;
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar4 = (uint)uVar7;
      } while (uVar4 < uVar6);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd4d0 */
byte F_00bbd4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbd4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a5;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  
  if ((uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2) <= (uint)(ushort)param_3)
  {
    return 0;
  }
  iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + (uint)(ushort)param_3 * 4)));
  if (((ushort)param_4 < *(ushort *)(iVar4 + 0xb8)) &&
     (iVar4 = (uint)(ushort)param_4 * 0x60 + *(int *)(iVar4 + 0x18), iVar4 != 0)) {
    uVar3 = *(int *)((int)this + 0x88) - *(int *)((int)this + 0x84) >> 2;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x84) + uVar2 * 4)));
        if ((((*(int *)(iVar1 + 8) == 2) && ((short)param_1 == *(short *)(iVar1 + 0xc))) &&
            (iVar4 == *(int *)(iVar1 + 0x20))) &&
           (((bVar6 = GEN_ISNAN((float10)*param_2) || GEN_ISNAN((float10)*(float *)(iVar1 + 0x10)),
             bVar6 != (bVar6 || (float10)*param_2 == (float10)*(float *)(iVar1 + 0x10)) &&
             (bVar6 = GEN_ISNAN((float10)param_2[1]) || GEN_ISNAN((float10)*(float *)(iVar1 + 0x14)),
             bVar6 != (bVar6 || (float10)param_2[1] == (float10)*(float *)(iVar1 + 0x14)))) &&
            (bVar6 = GEN_ISNAN((float10)param_2[2]) || GEN_ISNAN((float10)*(float *)(iVar1 + 0x18)),
            bVar6 != (bVar6 || (float10)param_2[2] == (float10)*(float *)(iVar1 + 0x18)))))) {
          *param_5 = uVar5;
          return 1;
        }
        uVar5 = uVar5 + 1;
        uVar2 = (uint)uVar5;
      } while (uVar2 < uVar3);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd5b0 */
byte F_00bbd5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbbd5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  ushort * param_8 = (ushort *)(uintptr_t)gen_a7;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  
  uVar4 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2;
  if ((uVar4 <= (ushort)param_2) || (uVar4 <= (ushort)param_3)) {
    return 0;
  }
  iVar6 = *((int *)GEN_TOP((*(int *)(param_1 + 0x74) + (uint)(ushort)param_2 * 4)));
  if (((ushort)param_4 < *(ushort *)(iVar6 + 0xb8)) &&
     (iVar6 = (uint)(ushort)param_4 * 0x60 + *(int *)(iVar6 + 0x18), iVar6 != 0)) {
    iVar7 = *((int *)GEN_TOP((*(int *)(param_1 + 0x74) + (uint)(ushort)param_3 * 4)));
    if (((ushort)param_5 < *(ushort *)(iVar7 + 0xb8)) &&
       (iVar7 = (uint)(ushort)param_5 * 0x60 + *(int *)(iVar7 + 0x18), iVar7 != 0)) {
      uVar8 = 0;
      uVar4 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2;
      if (uVar4 != 0) {
        iVar1 = *(int *)(param_1 + 0x84);
        uVar5 = 0;
        do {
          iVar2 = *(int *)(iVar1 + uVar5 * 4);
          if (*(int *)(iVar2 + 8) == 0) {
            bVar3 = F_00bbb8e0(iVar2,iVar6,iVar7,param_6,param_7);
            if (bVar3 != 0) {
              *param_8 = uVar8;
              return 1;
            }
          }
          uVar8 = uVar8 + 1;
          uVar5 = (uint)uVar8;
        } while (uVar5 < uVar4);
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd8e0 */
byte F_00bbd8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbd8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  if (uVar2 != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if (*piVar4 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
  if (uVar2 != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xa4);
    do {
      if (*piVar4 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      bVar1 = F_00bfb890(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar2 * 4))),param_1);
      if (bVar1 != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
  }
  return 0;
}

/* ref: FUN_00bbd9a0 */
byte F_00bbd9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbd9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x14) = param_1;
  F_00bbc2d0(this);
  return 1;
}

/* ref: FUN_00bbdb70 */
unsigned int F_00bbdb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbdb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (*(uint *)&gen_args[3]);
  uVar2 = (*(undefined4 *)&gen_args[2]);
  iVar1 = (*(uint *)&gen_args[1]);
  if (((*(uint *)&gen_args[1]) != 0) &&
     ((*(uint *)&gen_args[3]) = (*(uint *)&gen_args[3]) & 0xffff,
     (*(uint *)&gen_args[3]) < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) >> 2))) {
    (*(uint *)&gen_args[1]) = 0xffffffff;
    bVar3 = F_00bbd240((*(undefined * PTR32 *)&gen_args[0]),iVar1,(*(undefined4 *)&gen_args[2]),uVar4,&(*(uint *)&gen_args[1]));
    if ((bVar3 != 0) &&
       (uVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) >> 3, uVar4 <= (*(uint *)&gen_args[1]))) {
      F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) + (*(uint *)&gen_args[3]) * 4))),iVar1,uVar2,uVar4);
    }
  }
  return 0;
}

/* ref: FUN_00bbdbe0 */
uint F_00bbdbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbdbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0xa4);
    uVar4 = 0;
    while ((*piVar3 != param_1 || (*(ushort *)(piVar3 + 1) != param_2))) {
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 2;
      if (uVar2 <= uVar4) {
        return uVar2;
      }
    }
    uVar2 = (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) + uVar4 & 0xffff;
    iVar1 = uVar2 * 8;
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + *(int *)((int)this + 0xa4))));
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0xa4)))) = 0;
    }
    if (uVar4 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar4 * 8))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 8 + uVar4 * 8)));
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar4 * 8 + 4))) =
             *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xc + uVar4 * 8)));
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar4 * 8 + 6))) =
             *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xe + uVar4 * 8)));
        uVar4 = uVar4 + 1;
      } while (uVar4 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U);
    }
    F_00bbcf80(this,uVar2);
    uVar4 = *(uint *)((int)this + 0xa8);
    if (*(uint *)((int)this + 0xa4) != uVar4) {
      uVar4 = uVar4 - 8;
      *(uint *)((int)this + 0xa8) = uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00bbdd00 */
unsigned int F_00bbdd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbdd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (ushort)(*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3);
  if (((ushort)param_1 < uVar3) && ((ushort)param_2 < uVar3)) {
    iVar4 = (param_1 & 0xffff) * 8;
    iVar6 = *(int *)((int)this + 0xa4);
    uVar2 = *(undefined4 *)(iVar6 + iVar4);
    iVar5 = (param_2 & 0xffff) * 8;
    *(undefined4 *)(iVar6 + iVar4) = *(undefined4 *)(iVar5 + iVar6);
    *((undefined4 *)GEN_TOP((iVar5 + *(int *)((int)this + 0xa4)))) = uVar2;
    iVar6 = *(int *)((int)this + 0xa4);
    uVar1 = *(undefined2 *)(iVar6 + 4 + iVar4);
    *(undefined2 *)(iVar6 + 4 + iVar4) = *(undefined2 *)(iVar5 + 4 + iVar6);
    *((undefined2 *)GEN_TOP((iVar5 + 4 + *(int *)((int)this + 0xa4)))) = uVar1;
    iVar6 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
    F_00bbd030(this,iVar6 + param_1,iVar6 + param_2);
  }
  return 0;
}

/* ref: FUN_00bbddb0 */
unsigned int F_00bbddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbddb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  
  uVar5 = 0;
  if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
    uVar2 = 0;
    do {
      F_00bf96f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar2 * 4))),param_1);
      uVar5 = uVar5 + 1;
      uVar2 = uVar5 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
  }
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  uVar2 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5 != 0) {
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0xb4))));
      *((uint *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0xb4)))) =
           (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      puVar1 = ((uint *)GEN_TOP((iVar3 + 0xc + *(int *)((int)this + 0xb4))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      local_c = local_c + 1;
      uVar2 = local_c & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbde90 */
unsigned int F_00bbde90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbde90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
    uVar2 = 0;
    do {
      F_00bf97a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar2 * 4))),param_1);
      uVar4 = uVar4 + 1;
      uVar2 = uVar4 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
  }
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  local_8 = 0;
  if (*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5 != 0) {
    uVar2 = 0;
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0xb4))));
      *((uint *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0xb4)))) =
           (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      puVar1 = ((uint *)GEN_TOP((iVar3 + 0xc + *(int *)((int)this + 0xb4))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      local_8 = local_8 + 1;
      uVar2 = local_8 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbdf70 */
unsigned int F_00bbdf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbdf70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  byte bVar6;
  byte bVar7;
  uint * puVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) >> 2 != 0) {
    uVar4 = 0;
    do {
      F_00bfb640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) + uVar4 * 4))),(*(uint *)&gen_args[1]),(*(uint *)&gen_args[2]));
      uVar9 = uVar9 + 1;
      uVar4 = uVar9 & 0xffff;
    } while (uVar4 < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) >> 2));
  }
  uVar9 = (*(uint *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)&gen_args[2]) & 0xffff;
  (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[1]) & 0xffff;
  puVar8 = &(*(uint *)&gen_args[2]);
  if ((ushort)uVar9 <= (ushort)(*(uint *)&gen_args[1])) {
    puVar8 = &(*(uint *)(gen_frame + 0x18));
  }
  puVar5 = &(*(uint *)&gen_args[2]);
  if ((ushort)(*(uint *)&gen_args[1]) <= (ushort)uVar9) {
    puVar5 = &(*(uint *)(gen_frame + 0x18));
  }
  bVar6 = (byte)(short)*puVar8;
  uVar9 = 1 << (bVar6 & 0x1f);
  bVar7 = (byte)(short)*puVar5;
  uVar4 = 1 << (bVar7 & 0x1f);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
  (*(uint *)(gen_frame + 0x18)) = uVar9;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (iVar1 - iVar2 >> 3 != 0) {
    bVar7 = bVar7 - bVar6;
    (*(uint *)&gen_args[2]) = 0;
    do {
      puVar8 = ((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))));
      uVar3 = *puVar8;
      *puVar8 = (uVar3 & uVar4) >> (bVar7 & 0x1f) | (uVar3 & uVar9) << (bVar7 & 0x1f) |
                uVar3 & ~uVar9 & ~uVar4;
      puVar8 = ((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 0xc + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))));
      (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x20;
      uVar3 = *puVar8;
      *puVar8 = (uVar3 & uVar4) >> (bVar7 & 0x1f) | (uVar3 & uVar9) << (bVar7 & 0x1f) |
                uVar3 & ~uVar9 & ~uVar4;
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
    } while ((*(uint *)(gen_frame + 0xc)) < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) >> 3));
  }
  return 0;
}

/* ref: FUN_00bbe0d0 */
unsigned int F_00bbe0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbe0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  byte bVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (param_1 != 0) {
    pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3)));
    pvVar5 = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xffffffff;
    if (pvVar4 != (undefined *)0x0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x94);
      piVar6 = piVar2;
      do {
        if ((*piVar6 == param_1) && (*(ushort *)(piVar6 + 1) == param_2)) {
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar5;
          piVar2 = (int *)piVar2[(int)((int)(uintptr_t)pvVar5) * 2];
          if (piVar2 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) * 8))) = 0;
          }
          pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          if ((*(undefined * PTR32 *)(gen_frame + 0x8)) < ((undefined *)GEN_TOP(((*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) - 1U
                                )))) {
            do {
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + (int)((int)(uintptr_t)pvVar4) * 8))) =
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + 8 + (int)((int)(uintptr_t)pvVar4) * 8)));
              *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + (int)((int)(uintptr_t)pvVar4) * 8 + 4))) =
                   *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + 0xc + (int)((int)(uintptr_t)pvVar4) * 8)));
              *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + (int)((int)(uintptr_t)pvVar4) * 8 + 6))) =
                   *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + 0xe + (int)((int)(uintptr_t)pvVar4) * 8)));
              pvVar4 = (undefined *)((int)pvVar4 + 1);
            } while (pvVar4 < ((undefined *)GEN_TOP(((*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3
                                       ) - 1U))));
          }
          F_00bbde90(this,(*(undefined * PTR32 *)(gen_frame + 0x8)));
          if (*(int *)((int)this + 0x94) == *(int *)((int)this + 0x98)) {
            return 0;
          }
          *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + -8;
          return 0;
        }
        pvVar5 = (undefined *)((int)pvVar5 + 1);
        piVar6 = piVar6 + 2;
      } while (pvVar5 < pvVar4);
    }
    uVar8 = 0;
    if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
      uVar7 = 0;
      do {
        bVar3 = F_00bbd240(this,param_1,param_2,uVar8,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
        if (bVar3 != 0) {
          F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar7 * 4))),param_1,param_2,
                       *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3);
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar8 & 0xffff;
      } while (uVar7 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
    }
    uVar7 = 0;
    uVar8 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
    if (uVar8 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0xa4);
      piVar6 = piVar2;
      while ((*piVar6 != param_1 || (*(ushort *)(piVar6 + 1) != param_2))) {
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 2;
        if (uVar8 <= uVar7) {
          return 0;
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) + uVar7)));
      piVar2 = (int *)piVar2[uVar7 * 2];
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar7 * 8))) = 0;
      }
      if (uVar7 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U) {
        do {
          puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar7 * 8)));
          *puVar1 = puVar1[2];
          *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar7 * 8 + 4))) =
               *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xc + uVar7 * 8)));
          *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar7 * 8 + 6))) =
               *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xe + uVar7 * 8)));
          uVar7 = uVar7 + 1;
        } while (uVar7 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U);
      }
      F_00bbcf80(this,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (*(int *)((int)this + 0xa4) != *(int *)((int)this + 0xa8)) {
        *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa8) + -8;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbe340 */
unsigned int F_00bbe340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbe340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (ushort)(*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3);
  if (((ushort)param_1 < uVar4) && ((ushort)param_2 < uVar4)) {
    iVar2 = *(int *)((int)this + 0x94);
    iVar5 = (param_1 & 0xffff) * 8;
    uVar3 = *(undefined4 *)(iVar2 + iVar5);
    iVar6 = (param_2 & 0xffff) * 8;
    *(undefined4 *)(iVar2 + iVar5) = *(undefined4 *)(iVar6 + iVar2);
    *((undefined4 *)GEN_TOP((iVar6 + *(int *)((int)this + 0x94)))) = uVar3;
    iVar2 = *(int *)((int)this + 0x94);
    uVar1 = *(undefined2 *)(iVar2 + 4 + iVar5);
    *(undefined2 *)(iVar2 + 4 + iVar5) = *(undefined2 *)(iVar6 + 4 + iVar2);
    *((undefined2 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x94)))) = uVar1;
    F_00bbdf70(this,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00bbe3e0 */
byte F_00bbe3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbe3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2) <= (param_1 & 0xffff)) {
    return 0;
  }
  iVar3 = (param_1 & 0xffff) * 4;
  F_00bfbba0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x74)))));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x74) + iVar3))) != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + iVar3)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    *((undefined4 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x74)))) = 0;
  }
  iVar3 = *(int *)((int)this + 0x74) + iVar3;
  iVar1 = iVar3 + 4;
  F_00c46e20(iVar3,iVar1,(*(int *)((int)this + 0x78) - iVar1 >> 2) * 4);
  *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + -4;
  return 1;
}

/* ref: FUN_00bbe460 */
byte F_00bbe460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbe460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(*(int *)((int)this + 0x88) - *(int *)((int)this + 0x84) >> 2) <= (param_1 & 0xffff)) {
    return 0;
  }
  iVar4 = (param_1 & 0xffff) * 4;
  piVar2 = *((int * PTR32 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x84))));
  ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x84) + iVar4))) != 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x84) + iVar4)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
    *((undefined4 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x84)))) = 0;
  }
  iVar4 = *(int *)((int)this + 0x84) + iVar4;
  iVar1 = iVar4 + 4;
  F_00c46e20(iVar4,iVar1,(*(int *)((int)this + 0x88) - iVar1 >> 2) * 4);
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + -4;
  return 1;
}

/* ref: FUN_00bbe500 */
unsigned int F_00bbe500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbe500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  
  if (param_1 != 0) {
    uVar4 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
    (*(uint *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    if (uVar4 != 0) {
      do {
        piVar2 = *(int * PTR32 *)((int)this + 0x94);
        if (piVar2[(*(uint *)(gen_frame + 0xc)) * 2] == param_1) {
          uVar4 = (uint)*(ushort *)(piVar2 + (*(uint *)(gen_frame + 0xc)) * 2 + 1);
          uVar5 = *(int *)((int)this + 0x98) - (int)((int)(uintptr_t)piVar2) >> 3;
          uVar6 = 0;
          (*(uint *)(gen_frame + 0x18)) = 0xffffffff;
          piVar7 = piVar2;
          if (uVar5 != 0) {
LAB_00bbe568: ;
            if ((*piVar7 != param_1) || (*(ushort *)(piVar7 + 1) != uVar4)) goto LAB_00bbe57c;
            (*(uint *)(gen_frame + 0x18)) = uVar6;
            piVar2 = (int *)piVar2[uVar6 * 2];
            if (piVar2 != (int *)0x0) {
              ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + (*(uint *)(gen_frame + 0x18)) * 8))) = 0;
            }
            uVar4 = (*(uint *)(gen_frame + 0x18));
            if ((*(uint *)(gen_frame + 0x18)) < (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) - 1U) {
              do {
                puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar4 * 8)));
                *puVar1 = puVar1[2];
                *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar4 * 8 + 4))) =
                     *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + 0xc + uVar4 * 8)));
                *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar4 * 8 + 6))) =
                     *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + 0xe + uVar4 * 8)));
                uVar4 = uVar4 + 1;
              } while (uVar4 < (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) - 1U);
            }
            F_00bbde90(this,(*(uint *)(gen_frame + 0x18)));
            if (*(int *)((int)this + 0x94) == *(int *)((int)this + 0x98)) goto LAB_00bbe79d;
            *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + -8;
            uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
            (*(uint *)(gen_frame + 0x10)) = uVar4;
            goto LAB_00bbe7ad;
          }
LAB_00bbe584: ;
          uVar5 = 0;
          if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
            uVar6 = 0;
            do {
              bVar3 = F_00bbd240(this,param_1,uVar4,uVar5,&(*(uint *)(gen_frame + 0x18)));
              if (bVar3 != 0) {
                F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar6 * 4))),param_1,uVar4,
                             *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3);
              }
              uVar5 = uVar5 + 1;
              uVar6 = uVar5 & 0xffff;
            } while (uVar6 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
          }
          uVar6 = 0;
          uVar5 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
          if (uVar5 == 0) {
LAB_00bbe79d: ;
            uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
            (*(uint *)(gen_frame + 0x10)) = uVar4;
          }
          else {
            piVar2 = *(int * PTR32 *)((int)this + 0xa4);
            piVar7 = piVar2;
            do {
              if ((*piVar7 == param_1) && (*(ushort *)(piVar7 + 1) == uVar4)) {
                (*(uint *)(gen_frame + 0x18)) = (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) + uVar6;
                piVar2 = (int *)piVar2[uVar6 * 2];
                if (piVar2 != (int *)0x0) {
                  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
                  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar6 * 8))) = 0;
                }
                if (uVar6 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U) {
                  do {
                    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar6 * 8)));
                    *puVar1 = puVar1[2];
                    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar6 * 8 + 4))) =
                         *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xc + uVar6 * 8)));
                    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar6 * 8 + 6))) =
                         *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xe + uVar6 * 8)));
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) -
                                   1U);
                }
                F_00bbcf80(this,(*(uint *)(gen_frame + 0x18)));
                if (*(int *)((int)this + 0xa4) != *(int *)((int)this + 0xa8)) {
                  *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa8) + -8;
                }
                goto LAB_00bbe79d;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 < uVar5);
            uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
            (*(uint *)(gen_frame + 0x10)) = uVar4;
          }
        }
        else {
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        }
LAB_00bbe7ad: ;
      } while ((*(uint *)(gen_frame + 0xc)) < uVar4);
    }
  }
  return 0;
LAB_00bbe57c: ;
  uVar6 = uVar6 + 1;
  piVar7 = piVar7 + 2;
  if (uVar5 <= uVar6) goto LAB_00bbe584;
  goto LAB_00bbe568;
}

/* ref: FUN_00bbe7c0 */
uint F_00bbe7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbe7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1104970));
  iVar1 = *(int *)((int)this + 0xb4);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0xbc) - iVar1 & 0xffffffe0,200);
  }
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  iVar1 = *(int *)((int)this + 0xa4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xac) - iVar1 >> 3) * 8,200);
  }
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  iVar1 = *(int *)((int)this + 0x94);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x9c) - iVar1 >> 3) * 8,200);
  }
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x8c) - iVar1 >> 2) * 4,200);
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  iVar1 = *(int *)((int)this + 0x74);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x7c) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Physics::BoneSimulator::vf1 */
uint F_00bbe8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbe8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(this + 0x88) - *(int *)(this + 0x84) >> 2 != 0) {
    uVar4 = 0;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if (*((int *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4))) != 0) {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4))) = 0;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < (uint)(*(int *)(this + 0x88) - *(int *)(this + 0x84) >> 2));
  }
  iVar3 = *(int *)(this + 0x84);
  if (iVar3 != *(int *)(this + 0x88)) {
    F_00c46e20(iVar3,*(int *)(this + 0x88),0);
    *(int *)(this + 0x88) = iVar3;
  }
  uVar5 = 0;
  if (*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2 != 0) {
    uVar4 = 0;
    do {
      F_00bfbba0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))));
      if (*((int *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) != 0) {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) = 0;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < (uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2));
  }
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 != *(int *)(this + 0x78)) {
    F_00c46e20(iVar3,*(int *)(this + 0x78),0);
    *(int *)(this + 0x78) = iVar3;
  }
  uVar5 = 0;
  if (*(int *)(this + 0x98) - *(int *)(this + 0x94) >> 3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + uVar5 * 8)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x94) + uVar5 * 8))) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(this + 0x98) - *(int *)(this + 0x94) >> 3));
  }
  if (*(int *)(this + 0x94) != *(int *)(this + 0x98)) {
    *(int *)(this + 0x98) = *(int *)(this + 0x94);
  }
  uVar5 = *(uint *)(this + 0xb4);
  if (uVar5 != *(uint *)(this + 0xb8)) {
    *(uint *)(this + 0xb8) = uVar5;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  return uVar5;
}

/* ref: FUN_00bbeae0 */
unsigned int F_00bbeae0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbeae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 8)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 8))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(int *)((int)this + 0x94) != *(int *)((int)this + 0x98)) {
    *(int *)((int)this + 0x98) = *(int *)((int)this + 0x94);
  }
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar3 * 8)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar3 * 8))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(int *)((int)this + 0xa4) != *(int *)((int)this + 0xa8)) {
    *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa4);
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
    uVar3 = 0;
    do {
      F_00bff0e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4))));
      uVar2 = uVar2 + 1;
      uVar3 = uVar2 & 0xffff;
    } while (uVar3 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
  }
  return 0;
}

/* ref: FUN_00bbec00 */
uint F_00bbec00(unsigned int gen_a0)
{
  GEN_ENTER(0xbbec00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1104970));
  uVar1 = REFG(float, 0x110497c);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x28) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x108bee8);
  uVar1 = REFG(float, 0x1104978);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x5c) = REFG(float, 0x1104968);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x10adc54);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x10abe50);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x6c) = 2;
  *(undefined2 *)((int)this + 0x6e) = 2;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0x1010100;
  *(undefined4 *)((int)this + 200) = 0x100;
  *(undefined2 *)((int)this + 0xcc) = 0x100;
  return (uint)this;
}

/* ref: FUN_00bbed50 */
uint F_00bbed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xbbed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    uVar4 = param_2 & 0xffff;
    uVar2 = *(int *)(param_1 + 0x78) - iVar1 >> 2;
    (*(uint *)(gen_frame + 0x4c)) = uVar4;
    if ((uVar4 < uVar2) && (uVar5 = param_3 & 0xffff, uVar5 < uVar2)) {
      iVar3 = *(int *)(iVar1 + uVar4 * 4);
      if (((ushort)param_4 < *(ushort *)(iVar3 + 0xb8)) &&
         (iVar3 = (param_4 & 0xffff) * 0x60 + *(int *)(iVar3 + 0x18), (*(int *)(gen_frame + 0x40)) = iVar3, iVar3 != 0))
      {
        uVar2 = F_00bbb980(*(undefined4 *)(iVar1 + uVar5 * 4),param_5);
        (*(uint *)(gen_frame + 0x44)) = uVar2;
        if (uVar2 != 0) {
          uVar2 = F_00bbbbd0(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11);
          F_00bc0590((undefined *)(param_1 + 0xb4),uVar2);
          F_00bbb9b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x74) + (*(uint *)(gen_frame + 0x4c)) * 4))),((undefined1 *)(gen_frame + 0x20)),param_4);
          F_00bbb9b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x74) + uVar5 * 4))),((undefined1 *)(gen_frame + 0x30)),param_5);
          F_00bfb8d0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x74) + (*(uint *)(gen_frame + 0x4c)) * 4))),(*(uint *)(gen_frame + 0x44)),((undefined1 *)(gen_frame + 0x30)),param_4
                      );
          F_00bfb8d0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x74) + uVar5 * 4))),(*(int *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x20)),param_5);
          return ((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) & 0xffffffe0U) - 0x20) +
                 *(int *)(param_1 + 0xb4);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbeeb0 */
uint F_00bbeeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbeeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  iVar1 = *(int *)((int)this + 0x98);
  iVar2 = *(int *)((int)this + 0x94);
  (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_2;
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
  (*(ushort *)(gen_frame + 0xa)) = (ushort)(iVar1 - iVar2 >> 3);
  F_00bc0510((undefined *)((int)this + 0x94),&(*(int * PTR32 *)(gen_frame + 0x4)));
  return (uint)(*(ushort *)(gen_frame + 0xa));
}

/* ref: FUN_00bbef10 */
uint F_00bbef10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbef10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_2;
  (*(ushort *)(gen_frame + 0xa)) = (short)(*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) +
            (short)(*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3);
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
  F_00bc0510((undefined *)((int)this + 0xa4),&(*(int * PTR32 *)(gen_frame + 0x4)));
  return (uint)(*(ushort *)(gen_frame + 0xa));
}

/* ref: FUN_00bbef80 */
uint F_00bbef80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbef80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort * puVar5;
  uint uVar6;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  uVar3 = (ushort)(*(undefined4 *)&gen_args[3]);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94)));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(*(undefined4 *)&gen_args[2]);
  (*(ushort *)(gen_frame + 0x6)) = (ushort)(*(undefined4 *)&gen_args[3]);
  F_00bc0510(piVar1,&(*(int * PTR32 *)(gen_frame + 0x0)));
  iVar2 = *piVar1;
  uVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) - iVar2 >> 3;
  (*(int * PTR32 *)&gen_args[1]) = (int *)(uVar4 - 1 & 0xffff);
  puVar5 = (ushort *)&(*(undefined4 *)&gen_args[3]);
  if ((ushort)(uVar4 - 1) <= uVar3) {
    puVar5 = (ushort *)&(*(int * PTR32 *)&gen_args[1]);
  }
  uVar6 = (uint)*puVar5;
  if (uVar6 != 0) {
    puVar5 = (ushort *)(iVar2 + -2 + uVar6 * 8);
    do {
      if (*puVar5 < uVar3) break;
      puVar5 = puVar5 + -4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  while (uVar4 = uVar4 - 1, uVar6 < uVar4) {
    *(undefined4 *)(*piVar1 + uVar4 * 8) = *(undefined4 *)(*piVar1 + -8 + uVar4 * 8);
    *(undefined2 *)(*piVar1 + uVar4 * 8 + 4) = *(undefined2 *)(*piVar1 + -4 + uVar4 * 8);
    *(undefined2 *)(*piVar1 + uVar4 * 8 + 6) = *(undefined2 *)(*piVar1 + -2 + uVar4 * 8);
  }
  *(int * PTR32 *)(*piVar1 + uVar6 * 8) = (*(int * PTR32 *)(gen_frame + 0x0));
  *(undefined2 *)(*piVar1 + 4 + uVar6 * 8) = (*(undefined2 *)(gen_frame + 0x4));
  *(ushort *)(*piVar1 + 6 + uVar6 * 8) = (*(ushort *)(gen_frame + 0x6));
  if ((char)(*(undefined4 *)&gen_args[4]) != '\0') {
    F_00bbddb0((*(undefined * PTR32 *)(gen_frame + 0x8)),uVar6);
  }
  return uVar6;
}

/* ref: FUN_00bbf070 */
uint F_00bbf070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbf070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  ushort * puVar5;
  uint uVar6;
  int iVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
  (*(undefined2 *)(gen_frame + 0x12)) = (ushort)(*(uint *)&gen_args[3]);
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
  (*(undefined2 *)(gen_frame + 0x10)) = (undefined2)(*(uint *)&gen_args[2]);
  F_00bc0510(piVar1,&(*(int * PTR32 *)(gen_frame + 0xc)));
  iVar2 = *piVar1;
  iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) >> 3;
  uVar3 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) - iVar2 >> 3) - 1;
  uVar6 = ((*(uint *)&gen_args[3]) & 0xffff) - iVar7;
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  (*(uint *)&gen_args[2]) = uVar3;
  (*(int * PTR32 *)&gen_args[1]) = (int *)uVar6;
  puVar4 = (uint *)&(*(int * PTR32 *)&gen_args[1]);
  if (uVar3 <= uVar6) {
    puVar4 = &(*(uint *)&gen_args[2]);
  }
  uVar6 = *puVar4;
  if (uVar6 != 0) {
    puVar5 = (ushort *)(iVar2 + -2 + uVar6 * 8);
    do {
      if (*puVar5 < (ushort)(*(uint *)&gen_args[3])) break;
      puVar5 = puVar5 + -4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  for (; uVar6 < uVar3; uVar3 = uVar3 - 1) {
    *(undefined4 *)(*piVar1 + uVar3 * 8) = *(undefined4 *)(*piVar1 + -8 + uVar3 * 8);
    *(undefined2 *)(*piVar1 + uVar3 * 8 + 4) = *(undefined2 *)(*piVar1 + -4 + uVar3 * 8);
    *(undefined2 *)(*piVar1 + uVar3 * 8 + 6) = *(undefined2 *)(*piVar1 + -2 + uVar3 * 8);
    (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  *(int * PTR32 *)(*piVar1 + uVar6 * 8) = (*(int * PTR32 *)(gen_frame + 0xc));
  *(undefined2 *)(*piVar1 + 4 + uVar6 * 8) = (*(undefined2 *)(gen_frame + 0x10));
  uVar3 = iVar7 + uVar6;
  *(undefined2 *)(*piVar1 + 6 + uVar6 * 8) = (*(undefined2 *)(gen_frame + 0x12));
  if ((char)(*(undefined4 *)&gen_args[4]) != '\0') {
    F_00bbced0((*(undefined * PTR32 *)&gen_args[0]),uVar3);
  }
  return uVar3;
}

/* ref: FUN_00bbf180 */
uint F_00bbf180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbf180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * pvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x14) == 0) {
    return 0;
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0xe0,0x10)));
  if (pvVar2 == (undefined *)0x0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_00bff170(pvVar2);
  }
  uVar1 = *(undefined4 *)((int)this + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  F_00bfbd10(pvVar2,uVar1,param_1,param_2,param_3,param_4);
  F_00bc06d0((undefined *)((int)this + 0x74),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
}

/* ref: FUN_00bbf1f0 */
uint F_00bbf1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbbf1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  uint uVar1;
  int iVar2;
  
  if (*(int *)((*(int *)&gen_args[0]) + 0x14) != 0) {
    if (((*(uint *)&gen_args[3]) & 0xffff) < (uint)(*(int *)((*(int *)&gen_args[0]) + 0x78) - *(int *)((*(int *)&gen_args[0]) + 0x74) >> 2)) {
      iVar2 = *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x74) + ((*(uint *)&gen_args[3]) & 0xffff) * 4)));
      if (((ushort)(*(uint *)&gen_args[4]) < *(ushort *)(iVar2 + 0xb8)) &&
         (iVar2 = ((*(uint *)&gen_args[4]) & 0xffff) * 0x60 + *(int *)(iVar2 + 0x18), iVar2 != 0)) {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x50,0x10);
        if (uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = F_00c1e4d0(uVar1);
        }
        F_00c1e500(uVar1,*(undefined4 *)((*(int *)&gen_args[0]) + 0x14),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar2,(*(float *)&gen_args[5]));
        (*(uint *)&gen_args[3]) = uVar1;
        F_00bc0740((undefined *)((*(int *)&gen_args[0]) + 0x84),&(*(uint *)&gen_args[3]));
        return uVar1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00bbf2a0 */
uint F_00bbf2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbf2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint in_ecx;
  undefined * this_00;
  int iVar1;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0) {
    if (((uint)(*(undefined * PTR32 *)&gen_args[3]) & 0xffff) <
        (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) >> 2)) {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) + ((uint)(*(undefined * PTR32 *)&gen_args[3]) & 0xffff) * 4)));
      if (((ushort)(*(uint *)&gen_args[4]) < *(ushort *)(iVar1 + 0xb8)) &&
         (iVar1 = ((*(uint *)&gen_args[4]) & 0xffff) * 0x60 + *(int *)(iVar1 + 0x18), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x54) = 0;
        in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x40,0x10);
        if (in_ecx == 0) {
          this_00 = (undefined *)0x0;
        }
        else {
          this_00 = (undefined *)F_00c1e730(in_ecx);
        }
        F_00c1e760(this_00,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar1);
        (*(undefined * PTR32 *)&gen_args[3]) = this_00;
        F_00bc0740(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))),&(*(undefined * PTR32 *)&gen_args[3]));
        return (uint)this_00;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00bbf360 */
uint F_00bbf360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xbbf360u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  int iVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  (*(uint *)(gen_frame + 0x14)) = param_1;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    uVar3 = *(int *)(param_1 + 0x78) - iVar1 >> 2;
    if (((param_2 & 0xffff) < uVar3) && ((param_3 & 0xffff) < uVar3)) {
      iVar4 = *((int *)GEN_TOP((iVar1 + (param_2 & 0xffff) * 4)));
      if (((ushort)param_4 < *(ushort *)(iVar4 + 0xb8)) &&
         (iVar4 = (uint)(ushort)param_4 * 0x60 + *(int *)(iVar4 + 0x18), iVar4 != 0)) {
        uVar3 = F_00bbb980(*((undefined4 *)GEN_TOP((iVar1 + (param_3 & 0xffff) * 4))),param_5);
        (*(uint *)(gen_frame + 0x18)) = uVar3;
        if (uVar3 != 0) {
          this = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),iVar4,uVar3);
          fVar5 = F_004bd280(this);
          (*(float *)(gen_frame + 0x1c)) = fVar5;
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x20,0x10);
          if (uVar3 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = F_00c1e910(uVar3);
          }
          uVar2 = (*(uint *)(gen_frame + 0x14));
          F_00c1e8a0(uVar3,*(undefined4 *)((*(uint *)(gen_frame + 0x14)) + 0x14),iVar4,(*(uint *)(gen_frame + 0x18)),(*(float *)(gen_frame + 0x1c)),param_6,
                       param_7);
          (*(uint *)(gen_frame + 0x14)) = uVar3;
          F_00bc0740((undefined *)(uVar2 + 0x84),&(*(uint *)(gen_frame + 0x14)));
          return uVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbf4e0 */
uint F_00bbf4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bbf500 */
uint F_00bbf500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bbf530 */
uint F_00bbf530(unsigned int gen_a0)
{
  GEN_ENTER(0xbbf530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbf580 */
uint F_00bbf580(unsigned int gen_a0)
{
  GEN_ENTER(0xbbf580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbf5c0 */
uint F_00bbf5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf5d0 */
uint F_00bbf5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf5e0 */
byte F_00bbf5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf600 */
byte F_00bbf600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf620 */
uint F_00bbf620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf630 */
byte F_00bbf630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf650 */
uint F_00bbf650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf660 */
byte F_00bbf660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbf680 */
unsigned int F_00bbf680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbf6a0 */
unsigned int F_00bbf6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bbf6c0 */
uint F_00bbf6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf6e0 */
uint F_00bbf6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf700 */
uint F_00bbf700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf720 */
uint F_00bbf720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf740 */
unsigned int F_00bbf740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbf760 */
unsigned int F_00bbf760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00bbf790 */
unsigned int F_00bbf790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbf7e0 */
unsigned int F_00bbf7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00bbf810 */
unsigned int F_00bbf810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 8) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 8;
  }
  return 0;
}

/* ref: FUN_00bbf850 */
unsigned int F_00bbf850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bbf880 */
unsigned int F_00bbf880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bbf8b0 */
uint F_00bbf8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbf8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbf8f0 */
uint F_00bbf8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf900 */
uint F_00bbf900(unsigned int gen_a0)
{
  GEN_ENTER(0xbbf900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbf940 */
uint F_00bbf940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf950 */
uint F_00bbf950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf960 */
uint F_00bbf960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bbf970 */
uint F_00bbf970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bbf980 */
uint F_00bbf980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbf990 */
uint F_00bbf990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbf990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbf9f0 */
uint F_00bbf9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bbfa00 */
uint F_00bbfa00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfa00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfa10 */
uint F_00bbfa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbfa10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfa70 */
uint F_00bbfa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfa70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbfa80 */
uint F_00bbfa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfa80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bbfa90 */
uint F_00bbfa90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfa90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfab0 */
uint F_00bbfab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfad0 */
unsigned int F_00bbfad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfad0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfb00 */
unsigned int F_00bbfb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfb00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 8;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfb40 */
unsigned int F_00bbfb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfb40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfb70 */
unsigned int F_00bbfb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfb70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfbb0 */
uint F_00bbfbb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbfc00 */
uint F_00bbfc00(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbfc40 */
uint F_00bbfc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfc80 */
unsigned int F_00bbfc80(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00bbfcb0 */
uint F_00bbfcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfcf0 */
unsigned int F_00bbfcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfcf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00bbfd20 */
uint F_00bbfd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbfd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 2) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfd70 */
uint F_00bbfd70(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbfdb0 */
uint F_00bbfdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbfdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 8;
      puVar6 = puVar2 + 8;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 8; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfe00 */
uint F_00bbfe00(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xffffffe0,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbfe40 */
unsigned int F_00bbfe40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfe40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfe80 */
unsigned int F_00bbfe80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfe80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 8;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfec0 */
unsigned int F_00bbfec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfec0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfef0 */
unsigned int F_00bbfef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbff20 */
uint F_00bbff20(unsigned int gen_a0)
{
  GEN_ENTER(0xbbff20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbff90 */
uint F_00bbff90(unsigned int gen_a0)
{
  GEN_ENTER(0xbbff90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xffffffe0,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbffd0 */
unsigned int F_00bbffd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbffd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_00bc0020 */
uint F_00bc0020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,200);
    F_00bbfe40(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,200);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00bc00c0 */
uint F_00bc00c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc00c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  puVar4 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5))) < param_1) {
    puVar2 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 0x20,0,200);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar2;
    for (puVar3 = *(undefined4 * PTR32 *)this; puVar3 != puVar4; puVar3 = puVar3 + 8) {
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = puVar3;
        puVar8 = puVar6;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 8;
    }
    iVar5 = *(int *)this;
    iVar1 = *(int *)((int)this + 4);
    if (iVar5 != 0) {
      F_00429760(iVar5,*(int *)((int)this + 8) - iVar5 & 0xffffffe0,200);
    }
    puVar4 = puVar2 + (int)((int)(uintptr_t)param_1) * 8;
    *(undefined4 * PTR32 *)this = puVar2;
    *(uint *)((int)this + 4) = (iVar1 - iVar5 & 0xffffffe0U) + (int)puVar2;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4;
  }
  return (uint)puVar4;
}

/* ref: FUN_00bc0180 */
unsigned int F_00bc0180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc0180u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bc01b0 */
unsigned int F_00bc01b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc01b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bc01f0 */
uint F_00bc01f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc01f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bc0240 */
uint F_00bc0240(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xffffffe0,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bc0280 */
uint F_00bc0280(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1);
  }
  return uVar1;
}

/* ref: FUN_00bc02a0 */
uint F_00bc02a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc02a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bc0020(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bc0020(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc0310 */
uint F_00bc0310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 5;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bc00c0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bc00c0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc0380 */
uint F_00bc0380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,200);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00bc0430 */
uint F_00bc0430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,200);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: Client::Graphics::Physics::BoneSimulator::vf0 */
uint F_00bc04e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc04e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bbe7c0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00bc0510 */
uint F_00bc0510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00bc02a0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00bc02a0(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_00bc0590 */
uint F_00bc0590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar3 = *(undefined4 * PTR32 *)this, puVar3 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar1 = (undefined4 *)F_00bc0310(this,1);
    }
    puVar3 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar3 & 0xffffffe0U) + *(int *)this)));
  }
  else {
    puVar3 = param_1;
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar1 = (undefined4 *)F_00bc0310(this,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  return (uint)puVar1;
}

/* ref: FUN_00bc05f0 */
uint F_00bc05f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc05f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bc0380(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bc0380(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc0660 */
uint F_00bc0660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bc0430(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bc0430(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc06d0 */
uint F_00bc06d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00bc05f0(this,1);
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
      F_00bc05f0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00bc0740 */
uint F_00bc0740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00bc0660(this,1);
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
      F_00bc0660(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00bc07b0 */
uint F_00bc07b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc07b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00bc07e0 */
uint F_00bc07e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc07e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bc07f0 */
unsigned int F_00bc07f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc07f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bc0810 */
uint F_00bc0810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0810u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Client::System::Animation::CutSceneWind::WindControllerListener::vf0 */
uint F_00bc0830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bb9a40(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc0860 */
byte F_00bc0860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc0860u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined4 * puVar2;
  
  (*(byte *)(gen_frame + 0x2f)) = 0;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = 0.0;
  puVar2 = &REFG(undefined4, 0x14c598c);
  do {
    if ((undefined *)*puVar2 != (undefined *)0x0) {
      bVar1 = F_00bb9a20((undefined *)*puVar2,&(*(float *)(gen_frame + 0x0)),param_2,param_3);
      if (bVar1 != 0) {
        (*(byte *)(gen_frame + 0x2f)) = 1;
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x8)));
      }
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x14c599c);
  if ((*(byte *)(gen_frame + 0x2f)) != 0) {
    *param_1 = (*(float *)(gen_frame + 0x10));
    param_1[1] = (*(float *)(gen_frame + 0x14));
    param_1[2] = (*(float *)(gen_frame + 0x18));
  }
  return (*(byte *)(gen_frame + 0x2f));
}

/* ref: FUN_00bc0910 */
uint F_00bc0910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0910u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  undefined * this;
  uint * puVar3;
  int iVar4;
  
  this = *(undefined * PTR32 *)(param_1 + 0x78);
  if (this != (undefined *)0x0) goto LAB_00bc0952;
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
    }
    iVar4 = *(int *)(param_1 + 0x6c);
    uVar2 = 0;
    if (iVar4 != 0) goto LAB_00bc0939;
  }
  else {
LAB_00bc0939: ;
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    uVar2 = F_00b595f0(uVar1);
  }
  this = *(undefined * PTR32 *)(param_1 + 0x78);
  if (this == (undefined *)0x0) {
    return uVar2;
  }
LAB_00bc0952: ;
  uVar2 = F_00bc40b0(this,param_1,param_2);
  puVar3 = &REFG(undefined4, 0x14c598c);
  do {
    if (*puVar3 == uVar2) {
      if (puVar3 != &REFG(undefined4, 0x14c599c)) {
        return uVar2;
      }
      break;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != &REFG(undefined4, 0x14c599c));
  iVar4 = 0;
  do {
    if ((&REFG(undefined4, 0x14c598c))[(int)(iVar4)] == 0) {
      *(undefined * PTR32 * PTR32 *)(uVar2 + 0x1c) = &REFG(undefined * PTR32, 0x1341d94);
      (&REFG(undefined4, 0x14c598c))[(int)(iVar4)] = uVar2;
      return uVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return uVar2;
}

/* ref: FUN_00bc09b0 */
uint F_00bc09b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc09b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * this;
  
  pvVar5 = *(undefined * PTR32 *)(param_1 + 0x78);
  this = pvVar5;
  if (pvVar5 != (undefined *)0x0) goto LAB_00bc09f2;
  iVar2 = *(int *)(param_1 + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
    }
    iVar2 = *(int *)(param_1 + 0x6c);
    pvVar5 = (undefined *)0x0;
    if (iVar2 != 0) goto LAB_00bc09dd;
  }
  else {
LAB_00bc09dd: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    pvVar5 = (undefined *)F_00b595f0(uVar1);
  }
  this = *(undefined * PTR32 *)(param_1 + 0x78);
LAB_00bc09f2: ;
  if ((this != (undefined *)0x0) && (iVar2 = *(int *)((int)this + 0x458), iVar2 != 0)) {
    piVar3 = &REFG(undefined4, 0x14c598c);
    while (*piVar3 != iVar2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == &REFG(undefined4, 0x14c599c)) {
        uVar4 = F_00bc40c0(this,param_1);
        return uVar4;
      }
    }
    if (piVar3 != &REFG(undefined4, 0x14c599c)) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *piVar3 = 0;
    }
    pvVar5 = (undefined *)F_00bc40c0(this,param_1);
  }
  return (uint)pvVar5;
}

/* ref: FUN_00bc0a40 */
unsigned int F_00bc0a40(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0a40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14c598c);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != &REFG(undefined4, 0x14c599c)) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *piVar1 = 0;
      }
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != &REFG(undefined4, 0x14c599c));
  return 0;
}

/* ref: FUN_00bc0a80 */
unsigned int F_00bc0a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc0a80u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: Client::System::Animation::CutSceneWind::WindControllerListener::vf1 */
unsigned int F_00bc0aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14c598c);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != &REFG(undefined4, 0x14c599c)) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *piVar1 = 0;
      }
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != &REFG(undefined4, 0x14c599c));
  return 0;
}

/* ref: FUN_00bc0ae0 */
uint F_00bc0ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0ae0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_00bc0af0 */
uint F_00bc0af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbc0af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0.0;
  uVar1 = F_00c4f2dd();
  param_1[2] = (float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0));
  uVar1 = F_00c4f2dd();
  param_1[4] = 0.0;
  param_1[3] = (float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0));
  return uVar1;
}

/* ref: FUN_00bc0c10 */
float10 F_00bc0c10(float gen_a0)
{
  GEN_ENTER(0xbc0c10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  return (float10)((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x10944e0) - (fVar1 + fVar1)) * (fVar1 * fVar1))));
}

/* ref: FUN_00bc0c30 */
unsigned int F_00bc0c30(float gen_a0)
{
  GEN_ENTER(0xbc0c30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bc0c60 */
float10 F_00bc0c60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbc0c60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = (float10)param_2;
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  fVar5 = (float10)*(float *)(param_1 + 4) * fVar2;
  fVar3 = (float10)*(float *)(param_1 + 8) * fVar2;
  fVar4 = (float10)*(float *)param_1;
  return (float10)((float)GEN_TOF((fVar4 + (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((((fVar5 - 
                                                  fVar4) - fVar3) +
                                                  (float10)*(float *)(param_1 + 0xc)) *
                                                  (float10)((float)GEN_TOF(((float10)(float)(fVar1 * fVar1) *
                                                                  fVar1)))))) +
                                                  (float10)(float)(fVar1 * fVar1) *
                                                  ((fVar4 * fVar2 -
                                                   (float10)*(float *)(param_1 + 4) *
                                                   (float10)*(double *)&REFG(undefined, 0x10944d0)) + fVar3)))) +
                                                  (fVar5 - fVar4 * fVar2) * fVar1))))));
}

/* ref: FUN_00bc0d20 */
uint F_00bc0d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0d20u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 << 0x10 | param_1;
}

/* ref: FUN_00bc0d30 */
uint F_00bc0d30(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (-1 < (int)param_1) {
    return param_1 & 0xffff;
  }
  return 0xffffffff;
}

/* ref: FUN_00bc0d60 */
byte F_00bc0d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0d60u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = *in_ecx | (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bc0d70 */
byte F_00bc0d70(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0d70u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00bba1e0(param_1);
  return bVar1 == 0;
}

/* ref: FUN_00bc0d90 */
byte F_00bc0d90(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0d90u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00bba210(param_1);
  return bVar1 == 0;
}

/* ref: FUN_00bc0db0 */
unsigned int F_00bc0db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x40) == 0) {
    uVar1 = F_00a0b6b0(param_1);
    *(uint *)((int)this + 0x40) = uVar1;
  }
  return 0;
}

/* ref: FUN_00bc0dd0 */
uint F_00bc0dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    uVar1 = F_00a0b6f0(*(int *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc0df0 */
unsigned int F_00bc0df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x44) == 0) {
    uVar1 = F_00a0c3f0(param_1);
    *(uint *)((int)this + 0x44) = uVar1;
  }
  return 0;
}

/* ref: FUN_00bc0e10 */
uint F_00bc0e10(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x44) != 0) {
    uVar1 = F_00a0c430(*(int *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc0e30 */
unsigned int F_00bc0e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc0e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x48) == 0) {
    uVar1 = F_00a0b300(param_1,param_2);
    *(uint *)((int)this + 0x48) = uVar1;
  }
  if (*(int *)((int)this + 0x48) != 0) {
    F_00a0b4a0(*(int *)((int)this + 0x48),param_2);
  }
  return 0;
}

/* ref: FUN_00bc0e70 */
uint F_00bc0e70(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x48) != 0) {
    uVar1 = F_00a0b310(*(int *)((int)this + 0x48));
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc0e90 */
unsigned int F_00bc0e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc0e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x4c) == 0) {
    uVar1 = F_00a05020(param_1,param_2);
    *(uint *)((int)this + 0x4c) = uVar1;
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    F_00a05190(*(int *)((int)this + 0x4c),param_2);
  }
  return 0;
}

/* ref: FUN_00bc0ed0 */
uint F_00bc0ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc0ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    uVar1 = F_00a04ea0(*(int *)((int)this + 0x4c));
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc0ef0 */
uint F_00bc0ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
    this = (undefined *)F_00a0c1d0(*(undefined * PTR32 *)((int)this + 0x40),this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00bc0f10 */
byte F_00bc0f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
    bVar1 = F_00a0bfc0(*(undefined * PTR32 *)((int)this + 0x40),this,param_1);
    this = (undefined *)(uint)bVar1;
  }
  return (byte)this;
}

/* ref: FUN_00bc0f30 */
uint F_00bc0f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
    this = (undefined *)F_00a0c200(*(undefined * PTR32 *)((int)this + 0x40),this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00bc0f50 */
uint F_00bc0f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x40) != 0) {
    F_00a0b710(*(int *)((int)this + 0x40),this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00bc0f70 */
byte F_00bc0f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc0f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
    bVar1 = F_00a0b7b0(*(undefined * PTR32 *)((int)this + 0x40),this,param_1);
    this = (undefined *)(uint)bVar1;
  }
  return (byte)this;
}

/* ref: FUN_00bc0f90 */
uint F_00bc0f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc0f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
    this = (undefined *)F_00a0b930(*(undefined * PTR32 *)((int)this + 0x40),this,param_1,param_2);
  }
  return (uint)this;
}

/* ref: FUN_00bc0fb0 */
uint F_00bc0fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
    this = (undefined *)F_00a0b950(*(undefined * PTR32 *)((int)this + 0x40),this,param_1,param_2);
  }
  return (uint)this;
}

/* ref: FUN_00bc0fe0 */
uint F_00bc0fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc0fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x4c) != 0) {
    in_EAX = F_00a04f10(*(int *)((int)this + 0x4c),param_2,param_3);
  }
  return in_EAX;
}

/* ref: FUN_00bc1000 */
byte F_00bc1000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc1000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte in_AL = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x4c) != (undefined *)0x0) {
    uVar1 = F_00a05080(*(undefined * PTR32 *)((int)this + 0x4c),param_2,param_3);
    in_AL = (byte)uVar1;
  }
  return in_AL;
}

/* ref: FUN_00bc1020 */
uint F_00bc1020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x4c) != (undefined *)0x0) {
    in_EAX = F_00a05870(*(undefined * PTR32 *)((int)this + 0x4c));
  }
  return in_EAX;
}

/* ref: FUN_00bc1030 */
uint F_00bc1030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc1030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x4c) != 0) {
    uVar1 = F_00a05810(param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00bc1050 */
unsigned int F_00bc1050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc1050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int *)((int)this + 0x4c) != 0) {
    F_00a05840(param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_00bc1070 */
uint F_00bc1070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc1070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x50) == 0) {
    uVar1 = F_00a04070();
    *(uint *)((int)this + 0x50) = uVar1;
  }
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00bb9a50(*(undefined * PTR32 *)((int)this + 0x50),param_1,param_2);
    return *(uint *)((int)this + 0x50);
  }
  return 0;
}

/* ref: FUN_00bc10b0 */
uint F_00bc10b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc10b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00bb9a00(*(undefined * PTR32 *)((int)this + 0x50),param_1);
    in_EAX = F_00a04540(*(undefined4 *)((int)this + 0x50));
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bc10e0 */
uint F_00bc10e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc10e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)((int)this + 4) == param_1) {
      return (uint)this;
    }
    iVar1 = iVar1 + 1;
    this = (undefined *)((int)this + 8);
  } while (iVar1 < 8);
  return 0;
}

/* ref: FUN_00bc1130 */
uint F_00bc1130(unsigned int gen_a0)
{
  GEN_ENTER(0xbc1130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)this;
}

/* ref: FUN_00bc1180 */
uint F_00bc1180(unsigned int gen_a0)
{
  GEN_ENTER(0xbc1180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = *(int *)((int)this + iVar3 * 8);
    if (iVar1 != 0) {
      F_00a041f0(iVar1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  if (*(int *)((int)this + 0x40) != 0) {
    F_00a0b6f0(*(int *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  if (*(int *)((int)this + 0x44) != 0) {
    F_00a0c430(*(int *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  if (*(int *)((int)this + 0x48) != 0) {
    F_00a0b310(*(int *)((int)this + 0x48));
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    F_00a04ea0(*(int *)((int)this + 0x4c));
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x50) != 0) {
    uVar2 = F_00a04540(*(int *)((int)this + 0x50));
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bc1210 */
uint F_00bc1210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  pvVar1 = this;
  do {
    if (*(uint *)((int)pvVar1 + 4) == param_1) {
      return (uint)pvVar1;
    }
    iVar3 = iVar3 + 1;
    pvVar1 = (undefined *)((int)pvVar1 + 8);
  } while (iVar3 < 8);
  iVar3 = 0;
  do {
    if (*(uint *)((int)this + 4) == 0xffffffff) {
      if (this != (uint *)0x0) {
        uVar2 = F_00a03dd0();
        *(uint *)this = uVar2;
        *(uint *)((int)this + 4) = param_1;
      }
      return (uint)this;
    }
    iVar3 = iVar3 + 1;
    this = (undefined *)((int)this + 8);
  } while (iVar3 < 8);
  return 0;
}

/* ref: FUN_00bc1270 */
uint F_00bc1270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)this + 4) == param_1) {
      uVar1 = 0;
      if (*(int *)this != 0) {
        uVar1 = F_00a041f0(*(int *)this);
        *(int *)this = 0;
      }
      *(int *)((int)this + 4) = -1;
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    this = (undefined *)((int)this + 8);
  } while ((int)uVar1 < 8);
  return uVar1;
}

/* ref: FUN_00bc12c0 */
unsigned int F_00bc12c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbc12c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int local_8;
  
  piVar3 = param_1 + 1;
  local_8 = 8;
  do {
    if (-1 < *piVar3) {
      iVar2 = piVar3[-1];
      F_00b63990(iVar2,param_3);
      bVar1 = F_00b63680(iVar2);
      if (bVar1 != 0) {
        iVar2 = 0;
        piVar4 = param_1;
        do {
          if (piVar4[1] == *piVar3) {
            if (*piVar4 != 0) {
              F_00a041f0(*piVar4);
              *piVar4 = 0;
            }
            piVar4[1] = -1;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar2 < 8);
      }
    }
    piVar3 = piVar3 + 2;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      if ((undefined *)param_1[0x10] != (undefined *)0x0) {
        F_00a0c1a0((undefined *)param_1[0x10],param_1,param_2,(undefined4)gen_fl2bits(param_3));
      }
      if (param_1[0x11] != 0) {
        F_00a0c870(param_1[0x11],param_1,param_2,param_3);
      }
      if (param_1[0x12] != 0) {
        F_00a0b330(param_1,param_2);
      }
      if (param_1[0x13] != 0) {
        F_00a05890(param_1[0x13],param_2,param_3);
      }
      if ((undefined *)param_1[0x14] != (undefined *)0x0) {
        F_00bb9a80((undefined *)param_1[0x14],param_2,(undefined4)gen_fl2bits(param_3));
      }
      return 0;
    }
  } while( true );
}

/* ref: FUN_00bc13b0 */
unsigned int F_00bc13b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc13b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int local_8;
  
  iVar3 = 0;
  do {
    if (-1 < *(int *)((int)this + iVar3 * 8 + 4)) {
      F_00b642d0(*(undefined * PTR32 *)((int)this + iVar3 * 8));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  piVar2 = (int *)((int)this + 4);
  local_8 = 8;
  do {
    if (-1 < *piVar2) {
      iVar3 = piVar2[-1];
      F_00b63990(iVar3,(float)(float10)0);
      bVar1 = F_00b63680(iVar3);
      if (bVar1 != 0) {
        iVar3 = 0;
        piVar4 = this;
        do {
          if (piVar4[1] == *piVar2) {
            if (*piVar4 != 0) {
              F_00a041f0(*piVar4);
              *piVar4 = 0;
            }
            piVar4[1] = -1;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar3 < 8);
      }
    }
    piVar2 = piVar2 + 2;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
        F_00a0c1a0(*(undefined * PTR32 *)((int)this + 0x40),this,0,(undefined4)gen_fl2bits((float)(float10)0))
        ;
      }
      if (*(int *)((int)this + 0x44) != 0) {
        F_00a0c870(*(int *)((int)this + 0x44),this,0,(float)(float10)0);
      }
      if (*(int *)((int)this + 0x48) != 0) {
        F_00a0b330(this,0);
      }
      if (*(int *)((int)this + 0x4c) != 0) {
        F_00a05890(*(int *)((int)this + 0x4c),0,(float)(float10)0);
      }
      if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
        F_00bb9a80(*(undefined * PTR32 *)((int)this + 0x50),0,(undefined4)gen_fl2bits((float)(float10)0));
      }
      return 0;
    }
  } while( true );
}

/* ref: FUN_00bc14b0 */
uint F_00bc14b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc14b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137129c) + 0x60);
  uVar3 = 0;
  iVar4 = 0;
  do {
    uVar2 = *(uint *)((int)this + iVar4 * 8 + 4);
    if (-1 < (int)uVar2) {
      uVar2 = uVar2 & 0xffff;
      bVar1 = F_00500b00(in_ecx);
      if ((uVar2 < bVar1) &&
         (uVar2 = F_00500ae0(in_ecx,uVar2), (*(uint *)(uVar2 + 8) >> 1 & 1) != 0)) {
        if (param_2 <= (int)uVar3) {
          return uVar3;
        }
        *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)((int)this + iVar4 * 8);
        uVar3 = uVar3 + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return uVar3;
}

/* ref: FUN_00bc1530 */
byte F_00bc1530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  
  if (-1 < param_2) {
    bVar1 = F_00500b00(*(undefined4 *)(REFG(int, 0x137129c) + 0x60));
    if (param_2 < (int)(uint)bVar1) {
      bVar1 = F_00a06620(param_2,param_1);
      return bVar1;
    }
  }
  return 1;
}

/* ref: FUN_00bc1570 */
uint F_00bc1570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00500af0(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60),param_1);
  if ((short)uVar1 != -1) {
    return param_2 << 0x10 | uVar1 & 0xffff;
  }
  return 0xffffffff;
}

/* ref: FUN_00bc15a0 */
uint F_00bc15a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc15a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined * this_00;
  int iVar8;
  
  if (((*(int *)((int)this + 0x40) != 0) &&
      (bVar4 = F_00a0b720(*(int *)((int)this + 0x40)), bVar4 != 0)) &&
     ((*(byte *)(param_1 + 0x12) >> 4 & 1) != 0)) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x14);
  uVar5 = F_00500af0(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60),*(undefined4 *)(param_1 + 0x20));
  if ((short)uVar5 == -1) {
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = uVar5 & 0xffff | (int)cVar1 << 0x10;
  }
  uVar5 = F_00a065a0();
  if ((((char)uVar5 != '\0') && (uVar5 = F_00bbafd0(param_2), uVar5 != 0)) &&
     (*(int *)(uVar5 + 0x78) != 0)) {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x78) + 0xa0)));
    if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (*(uint *)(gen_frame + 0x0)) & 0xffff;
    }
    if (((-1 < (int)uVar5) &&
        (bVar4 = F_00500b00(*(undefined4 *)(REFG(int, 0x137129c) + 0x60)), (int)uVar5 < (int)(uint)bVar4))
       && (bVar4 = F_00a06620(uVar5,uVar2), bVar4 == 0)) {
      return 0;
    }
  }
  uVar2 = *(undefined4 *)(REFG(int, 0x137129c) + 0x60);
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    bVar4 = F_00500b00(uVar2);
    if (((*(uint *)(gen_frame + 0x0)) & 0xffff) < (uint)bVar4) {
      uVar5 = F_00500ae0(uVar2,(*(uint *)(gen_frame + 0x0)) & 0xffff);
      iVar8 = 0;
      do {
        uVar6 = *(uint *)((int)this + iVar8 * 8 + 4);
        if (-1 < (int)uVar6) {
          uVar6 = uVar6 & 0xffff;
          bVar4 = F_00500b00(uVar2);
          if (uVar6 < bVar4) {
            uVar6 = F_00500ae0(uVar2,uVar6);
            pvVar3 = *(undefined * PTR32 *)((int)this + iVar8 * 8);
            if ((((*(uint *)(uVar6 + 8) >> 7 & 1) != 0) && ((*(uint *)(uVar5 + 8) >> 10 & 1) != 0))
               && (bVar4 = F_00b63c90(pvVar3), bVar4 == 0)) {
              return 0;
            }
            if ((((*(uint *)(uVar6 + 8) >> 8 & 1) != 0) && ((*(uint *)(uVar5 + 8) >> 9 & 1) != 0))
               && (bVar4 = F_00b63cc0(pvVar3), bVar4 == 0)) {
              return 0;
            }
            if ((((*(uint *)(uVar6 + 8) >> 10 & 1) != 0) && ((*(uint *)(uVar5 + 8) >> 7 & 1) != 0))
               && ((*(byte *)(param_1 + 0x12) >> 6 & 1) == 0)) {
              F_00bc1af0((uint)pvVar3,param_1);
            }
            if ((((*(uint *)(uVar6 + 8) >> 9 & 1) != 0) && ((*(uint *)(uVar5 + 8) >> 8 & 1) != 0))
               && (-1 < *(char *)(param_1 + 0x12))) {
              F_00bc1b60((uint)pvVar3,param_1);
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 8);
    }
  }
  iVar8 = 0;
  puVar7 = this;
  do {
    if (puVar7[1] == (*(uint *)(gen_frame + 0x0))) goto LAB_00bc17e2;
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar8 < 8);
  puVar7 = (undefined4 *)F_00bc1210(this,(*(uint *)(gen_frame + 0x0)));
  if (puVar7 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00bc17e2: ;
  pvVar3 = (undefined *)*puVar7;
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar2 = *(undefined4 *)(REFG(int, 0x137129c) + 0x60);
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    bVar4 = F_00500b00(uVar2);
    if (((*(uint *)(gen_frame + 0x0)) & 0xffff) < (uint)bVar4) {
      uVar5 = F_00500ae0(uVar2,(*(uint *)(gen_frame + 0x0)) & 0xffff);
      cVar1 = *(char *)(uVar5 + 0xf);
      if (((-1 < cVar1) && (uVar6 = F_00b63c10(pvVar3), (int)cVar1 <= (int)uVar6)) &&
         (this_00 = (undefined *)F_00b63670(pvVar3), this_00 != (undefined *)0x0)) {
        F_00bba140(this_00,0,(float)(float10)0,(int)*(char *)(param_1 + 0x17));
        F_00bba0e0(this_00);
      }
      if ((((*(uint *)(uVar5 + 8) >> 0xc & 1) != 0) && (*(int *)((int)this + 0x40) != 0)) &&
         (bVar4 = F_00a0b720(*(int *)((int)this + 0x40)), bVar4 != 0)) {
        F_00a0bff0(*(undefined * PTR32 *)((int)this + 0x40),this,param_2);
      }
      if ((*(uint *)(uVar5 + 8) >> 0xb & 1) != 0) {
        (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) | 1;
      }
      if ((*(uint *)(uVar5 + 8) >> 0xd & 1) != 0) {
        (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) | 2;
      }
    }
  }
  uVar5 = F_00b63d30(pvVar3,param_1,param_2,&(*(byte *)(gen_frame + 0xb)));
  return uVar5;
}

/* ref: FUN_00bc18e0 */
uint F_00bc18e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbc18e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(param_4 + 0x10);
  ((undefined4 *)(gen_frame + 0x4))[0] = *(undefined4 *)(param_4 + 0xc);
  ((undefined4 *)(gen_frame + 0x4))[1] = uVar1;
  uVar4 = 0;
  uVar5 = param_3;
  do {
    this = (int *)((undefined4 *)(gen_frame + 0x4))[(int)(uVar4)];
    if (this != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
      if (uVar3 == 1) {
        bVar2 = F_00bba1e0(this);
        if ((bVar2 == 0) && ((int)uVar5 < param_2)) {
          *(int * PTR32 *)(param_1 + uVar5 * 4) = this;
          uVar5 = uVar5 + 1;
        }
      }
      else if (uVar3 == 0) {
        uVar5 = F_00bc18e0(param_1,param_2,uVar5,(int)this,param_5);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar5;
}

/* ref: FUN_00bc1960 */
uint F_00bc1960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbc1960u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(param_4 + 0x10);
  ((undefined4 *)(gen_frame + 0x4))[0] = *(undefined4 *)(param_4 + 0xc);
  ((undefined4 *)(gen_frame + 0x4))[1] = uVar1;
  uVar4 = 0;
  uVar5 = param_3;
  do {
    this = (int *)((undefined4 *)(gen_frame + 0x4))[(int)(uVar4)];
    if (this != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*this + 0x10))(this);
      if (uVar3 == 1) {
        bVar2 = F_00bba210(this);
        if ((bVar2 == 0) && ((int)uVar5 < param_2)) {
          *(int * PTR32 *)(param_1 + uVar5 * 4) = this;
          uVar5 = uVar5 + 1;
        }
      }
      else if (uVar3 == 0) {
        uVar5 = F_00bc1960(param_1,param_2,uVar5,(int)this,param_5);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar5;
}

/* ref: FUN_00bc1a20 */
uint F_00bc1a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc1a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00bc18e0(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_3);
  return uVar1;
}

/* ref: FUN_00bc1a50 */
uint F_00bc1a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc1a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00bc1960(param_1,param_2,0,*(undefined4 *)((int)this + 4),param_3);
  return uVar1;
}

/* ref: FUN_00bc1af0 */
uint F_00bc1af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1af0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00bc18e0(((int *)(gen_frame + 0xc)),8,0,*(undefined4 *)(param_1 + 4),param_2);
  iVar4 = 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    do {
      piVar1 = (int *)((int *)(gen_frame + 0xc))[(int)(iVar4)];
      F_00a09fe0((int)(char)piVar1[0xb],(int)*(char *)((int)piVar1 + 0x2d));
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return uVar3;
}

/* ref: FUN_00bc1b60 */
uint F_00bc1b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1b60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00bc1960(((int *)(gen_frame + 0xc)),8,0,*(undefined4 *)(param_1 + 4),param_2);
  iVar4 = 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    do {
      piVar1 = (int *)((int *)(gen_frame + 0xc))[(int)(iVar4)];
      F_00a09fe0((int)(char)piVar1[0xb],(int)*(char *)((int)piVar1 + 0x2d));
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return uVar3;
}

/* ref: FUN_00bc1bd0 */
uint F_00bc1bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00bc1c50 */
uint F_00bc1c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x24);
  param_1[1] = *(undefined4 *)((int)this + 0x28);
  param_1[2] = *(undefined4 *)((int)this + 0x2c);
  param_1[3] = *(undefined4 *)((int)this + 0x30);
  return (uint)param_1;
}

/* ref: FUN_00bc1d60 */
byte F_00bc1d60(unsigned int gen_a0)
{
  GEN_ENTER(0xbc1d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x88) != 2) && (*(int *)(in_ecx + 0x88) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bc1de0 */
uint F_00bc1de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf22 */
uint F_00bc1e40(unsigned int gen_a0)
{
  GEN_ENTER(0xbc1e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,4,&REFG(undefined, 0x13056c0));
  return uVar1;
}

/* ref: FUN_00bc1e50 */
uint F_00bc1e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  if (this_00 != this) {
    uVar1 = F_00bc1e50(this_00,param_1);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  if (param_1 == 0) {
    return (uint)(*(int *)((int)this + 0x18) != 0);
  }
  return (uint)((1 << ((byte)param_1 & 0x1f) & *(uint *)((int)this + 0x18)) != 0);
}

/* ref: FUN_00bc1ec0 */
uint F_00bc1ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc1ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00406520();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1,0x10);
  *(undefined4 *)((int)this + 0x90) = param_1;
  *(uint *)((int)this + 0x8c) = uVar2;
  return uVar2;
}

/* ref: FUN_00bc1ef0 */
uint F_00bc1ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc1ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x8c) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x8c));
    *(undefined4 *)((int)this + 0x8c) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc1f20 */
uint F_00bc1f20(unsigned int gen_a0)
{
  GEN_ENTER(0xbc1f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,5,&REFG(undefined, 0x13056c0));
  return uVar1;
}

/* ref: FUN_00bc1f50 */
uint F_00bc1f50(unsigned int gen_a0)
{
  GEN_ENTER(0xbc1f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(char *)(in_ecx + 0x80) != '\0') {
    *(undefined4 *)(in_ecx + 0x88) = 3;
    return in_EAX;
  }
  if ((float10)*(float *)(in_ecx + 100) <= (float10)*(float *)(in_ecx + 0x58)) {
    *(float *)(in_ecx + 0x58) = *(float *)(in_ecx + 100);
    uVar1 = (*(char *)(in_ecx + 0x81) == '\0') + 2;
    *(uint *)(in_ecx + 0x88) = uVar1;
    return uVar1;
  }
  if ((float10)*(float *)(in_ecx + 0x60) <= (float10)*(float *)(in_ecx + 0x58)) {
    *(undefined4 *)(in_ecx + 0x88) = 1;
    return in_EAX;
  }
  *(undefined4 *)(in_ecx + 0x88) = 0;
  return in_EAX;
}

/* ref: FUN_00bc1fd0 */
uint F_00bc1fd0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbc1fd0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  bool bVar1;
  bool bVar2;
  uint uVar3;
  float10 fVar4;
  
  if ((*(int *)((*(int *)&gen_args[0]) + 0x74) != 1) && (*(int *)((*(int *)&gen_args[0]) + 0x7c) != 0)) {
    if (*(int *)((*(int *)&gen_args[0]) + 0x74) == 0) {
      fVar4 = (float10)(*(float *)&gen_args[1]);
      bVar1 = (!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)*(float *)((*(int *)&gen_args[0]) + 0x5c))) &&
              !(fVar4 <= (float10)*(float *)((*(int *)&gen_args[0]) + 0x5c));
      bVar2 = fVar4 <= (float10)*(float *)((*(int *)&gen_args[0]) + 0x58);
    }
    else {
      fVar4 = (float10)(*(float *)&gen_args[1]);
      bVar1 = (!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)*(float *)((*(int *)&gen_args[0]) + 0x5c))) &&
              !(fVar4 <= (float10)*(float *)((*(int *)&gen_args[0]) + 0x5c));
      bVar2 = fVar4 <= (float10)*(float *)((*(int *)&gen_args[0]) + 0x58);
    }
    uVar3 = (uint)bVar1;
    if (bVar2) {
      uVar3 = uVar3 + 1;
    }
    return (uVar3 - 1) + *(int *)((*(int *)&gen_args[0]) + 0x7c);
  }
  fVar4 = (float10)(*(float *)&gen_args[1]);
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[2]) + 0)) == '\0') {
    bVar1 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x5c) < fVar4;
  }
  else {
    bVar1 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x5c) <= fVar4;
  }
  if ((bVar1) && (fVar4 <= (float10)*(float *)((*(int *)&gen_args[0]) + 0x58))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc2080 */
uint F_00bc2080(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * PTR32 * ppvVar2;
  undefined4 * puVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xffffffe8;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1104994));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 1;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0x100;
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined * PTR32 *)((int)this + 0x94) = REFG(void * PTR32, 0x14c599c);
  iVar1 = (int)REFG(void * PTR32, 0x14c599c) + 1;
  REFG(void * PTR32, 0x14c599c) = (undefined *)iVar1;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  ppvVar2 = &REFG(void * PTR32, 0x14c599c);
  if (iVar1 < 1) {
    ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  REFG(void * PTR32, 0x14c599c) = *ppvVar2;
  iVar1 = 4;
  puVar3 = (undefined4 *)((int)this + 0x48);
  do {
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = 0;
  } while (iVar1 != 0);
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf6 */
uint F_00bc2160(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
  puVar2 = (undefined4 *)0x0;
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1c);
  while (this_00 = puVar1, this_00 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)this_00[7];
    F_00bec2c0(this_00);
    puVar1 = puVar2;
    if (*(char *)((int)this_00 + 0x16) == '\0') {
      ((code *)*(gen_code32 *)*this_00)(this_00,1);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x8c);
  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) & 0xfffffffb;
  *(undefined4 * PTR32 *)(this + 0x1c) = puVar2;
  if (puVar1 != puVar2) {
    puVar1 = (undefined4 *)F_00406810(puVar1);
    *(undefined4 * PTR32 *)(this + 0x8c) = puVar2;
    *(undefined4 * PTR32 *)(this + 0x90) = puVar2;
  }
  return (uint)puVar1;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf1 */
byte F_00bc21c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc21c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = true;
  if (*(int *)(this + 0x24) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x1c);
    if (piVar3 != (int *)0x0) {
      do {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
        if ((char)uVar2 == '\0') {
          bVar1 = false;
        }
        piVar3 = (int *)piVar3[7];
      } while (piVar3 != (int *)0x0);
      if (!bVar1) {
        return bVar1;
      }
    }
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
    return bVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf2 */
byte F_00bc2240(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] != (undefined1)0x0) {
    piVar1 = *(int * PTR32 *)(this + 0x1c);
    while( true ) {
      if (piVar1 == (int *)0x0) {
        this[0xe] = (undefined1)0x1;
        this[0x12] = (undefined1)0x0;
        if (*(int *)(this + 4) != 0) {
          *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
        }
        return 1;
      }
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if ((char)uVar2 == '\0') break;
      piVar1 = (int *)piVar1[7];
    }
    this[0x12] = (undefined1)0x0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00bc22a0 */
byte F_00bc22a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc22a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 == '\0') break;
    piVar1 = (int *)piVar1[7];
  }
  *(undefined1 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00bc22e0 */
byte F_00bc22e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc22e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
    if ((char)uVar2 == '\0') break;
    piVar1 = (int *)piVar1[7];
  }
  *(undefined1 *)((int)this + 0x15) = 0;
  return 0;
}

/* ref: FUN_00bc2320 */
unsigned int F_00bc2320(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 8) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 9))) = 1;
  }
  *(undefined2 *)((int)this + 10) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0xd) = 1;
  *(undefined1 *)((int)this + 0xe) = 1;
  *(undefined1 *)((int)this + 0xf) = 1;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined1 *)((int)this + 0x11) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x15) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 2;
  return 0;
}

/* ref: FUN_00bc23a0 */
byte F_00bc23a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc23a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  
  bVar2 = 1;
  if ((param_1 != 0x12) && (param_1 != 0x1a)) {
    for (pvVar3 = *(undefined * PTR32 *)((int)this + 0x1c); pvVar3 != (undefined *)0x0;
        pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x1c)) {
      bVar1 = F_00bebca0(pvVar3,param_1);
      if (bVar1 == 0) {
        bVar2 = 0;
      }
    }
    return bVar2;
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffff7;
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x1c);
  if (pvVar3 == (undefined *)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
    return 1;
  }
  do {
    bVar1 = F_00bebca0(pvVar3,param_1);
    if (bVar1 == 0) {
      bVar2 = 0;
LAB_00bc2417: ;
      if ((*(uint *)((int)this + 0x2c) >> 3 & 1) != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
        return 0;
      }
    }
    else if (bVar2 == 0) goto LAB_00bc2417;
    pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x1c);
    if (pvVar3 == (undefined *)0x0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
      return bVar2;
    }
  } while( true );
}

/* ref: FUN_00bc2450 */
byte F_00bc2450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc2450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xa58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa5c);
  if (*(int *)((int)this + 0x24) != 0) {
LAB_00bc24e7: ;
    F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
    return 1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  if (param_1 == 0) {
    F_00bc2320(this);
  }
  else {
    F_00b5c440(((byte *)(gen_frame + 0x8)));
    bVar1 = F_00bce490(((byte *)(gen_frame + 0x8)),param_1,this,param_2);
    if (bVar1 != 0) {
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36));
      *(undefined4 *)((int)this + 0x3c) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 40));
      *(undefined4 *)((int)this + 0x40) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 44));
      *(undefined4 *)((int)this + 0x44) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 48));
      *(undefined4 *)((int)this + 0x24) = 1;
      goto LAB_00bc24e7;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
  return 0;
}

/* ref: FUN_00bc2500 */
byte F_00bc2500(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  byte bVar2;
  undefined * this_00;
  
  bVar1 = true;
  if (*(int *)((int)this + 0x24) != 1) {
    return 1;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
  if (this_00 != (undefined *)0x0) {
    do {
      if ((*(uint *)((int)this_00 + 0x24) < 2) &&
         (bVar2 = F_00bec620(this_00,1,&REFG(undefined, 0x13056c0)), bVar2 == 0)) {
        bVar1 = false;
      }
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
    } while (this_00 != (undefined *)0x0);
    if (!bVar1) {
      return bVar1;
    }
  }
  *(undefined4 *)((int)this + 0x24) = 2;
  return bVar1;
}

/* ref: FUN_00bc2550 */
uint F_00bc2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc2550u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  undefined * this;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  float10 fVar5;
  float local_c;
  
  uVar4 = (uint)*(ushort *)(param_1[8] + 2);
  local_c = (float)(int)(*(ushort *)(param_1[8] + 4) - uVar4);
  if ((param_2 == 0) ||
     ((fVar1 = *(float *)param_2, GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0) &&
      (fVar2 = *(float *)(param_2 + 4), GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0))))) {
    fVar5 = (float10)uVar4;
  }
  else {
    fVar5 = (float10)fVar1;
    if (fVar5 < (float10)*(float *)(param_2 + 4)) {
      local_c = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) - fVar5)));
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x54))
                    (param_1,(undefined4)gen_fl2bits((float)(float10)0),
                     (undefined4)gen_fl2bits((float)fVar5),(undefined4)gen_fl2bits(local_c));
  for (this = (undefined *)param_1[7]; this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x1c)) {
    bVar3 = F_00bec620(this,6,&REFG(undefined, 0x13056c0));
    uVar4 = CONCAT31(extraout_var,bVar3);
  }
  param_1[9] = 3;
  return uVar4;
}

/* ref: FUN_00bc2630 */
unsigned int F_00bc2630(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x1c); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    F_00bec620(this_00,7,&REFG(undefined, 0x13056c0));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf9 */
unsigned int F_00bc2660(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbc2660u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(float *)(gen_frame + 0x8)) = param_1;
  iVar1 = *(int *)((int)gen_fl2bits(param_1) + 0x1c);
  (*(float *)(gen_frame + 0x8)) = 0.0;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    F_00bebe20(iVar1,param_2,param_3,param_4,param_5,param_6,&(*(float *)(gen_frame + 0x8)),param_8);
  }
  if ((float10)*param_7 < (float10)(*(float *)(gen_frame + 0x8))) {
    *param_7 = (*(float *)(gen_frame + 0x8));
  }
  return 0;
}

/* ref: FUN_00bc26d0 */
unsigned int F_00bc26d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc26d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = *(undefined * PTR32 *)((int)this + 0x1c); this_00 != (undefined *)0x0;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    F_00bebeb0(this_00,param_1);
  }
  if (*(char *)((int)this + 0x10) == '\0') {
    if (*(char *)((int)this + 9) != '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    }
    if (*(char *)((int)this + 8) != '\0') {
      if ((*(char *)((int)this + 0x12) != '\0') &&
         (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this), (char)uVar1 != '\0')) {
        *(undefined1 *)((int)this + 0x13) = 1;
      }
      if ((*(char *)((int)this + 0x13) != '\0') &&
         (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this), (char)uVar1 != '\0')) {
        *(undefined1 *)((int)this + 0x14) = 1;
      }
      if ((*(char *)((int)this + 0xf) != '\0') &&
         (((*(char *)((int)this + 0x14) != '\0' || (*(int *)((int)this + 0x88) == 2)) ||
          (*(int *)((int)this + 0x88) == 3)))) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
      }
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf16 */
byte F_00bc2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc2770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (((*(uint *)(this + 0x2c) >> 2 & 1) == 0) && (*(undefined * PTR32 *)(this + 0x1c) != (undefined *)0x0)) {
    bVar1 = F_00bec460(*(undefined * PTR32 *)(this + 0x1c),param_1);
    return bVar1;
  }
  return (byte)(*(uint *)(this + 0x2c) >> 2);
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf17 */
unsigned int F_00bc27a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc27a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  byte bVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  bVar1 = false;
  if (this_00 != (undefined *)0x0) {
    do {
      bVar2 = F_00bebfb0(this_00,param_1);
      if (bVar2 != 0) {
        bVar1 = true;
      }
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
    } while (this_00 != (undefined *)0x0);
    if (bVar1) {
      *(undefined4 *)(this + 10) = 0x1010000;
    }
  }
  return 0;
}

/* ref: FUN_00bc27e0 */
unsigned int F_00bc27e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc27e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 10) != '\0') {
    *(undefined1 *)((int)this + 10) = 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,3,0);
  *(undefined2 *)((int)this + 8) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 9))) = 1;
  }
  *(undefined2 *)((int)this + 10) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0xd) = 1;
  *(undefined1 *)((int)this + 0xe) = 1;
  *(undefined1 *)((int)this + 0xf) = 1;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined1 *)((int)this + 0x11) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x15) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 2;
  return 0;
}

/* ref: FUN_00bc2850 */
unsigned int F_00bc2850(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 10) != '\0') {
    *(undefined1 *)((int)this + 10) = 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,5,0);
  *(undefined2 *)((int)this + 8) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 9))) = 1;
  }
  *(undefined2 *)((int)this + 10) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0xd) = 1;
  *(undefined1 *)((int)this + 0xe) = 1;
  *(undefined1 *)((int)this + 0xf) = 1;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined1 *)((int)this + 0x11) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x15) = 1;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 2;
  return 0;
}

/* ref: FUN_00bc28c0 */
byte F_00bc28c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc28c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_2;
  if (this_00 == (undefined *)0x0) {
    param_2[1] = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
    if (this_00 == (undefined *)0x0) goto LAB_00bc28f7;
  }
  do {
    bVar1 = F_00bec120(this_00,param_1,param_2 + 1);
    if (bVar1 != 0) {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  } while (this_00 != (undefined *)0x0);
LAB_00bc28f7: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00bc2920 */
byte F_00bc2920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc2920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_2;
  if (this_00 == (undefined *)0x0) {
    param_2[1] = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
    if (this_00 == (undefined *)0x0) goto LAB_00bc2957;
  }
  do {
    bVar1 = F_00bec1a0(this_00,param_1,param_2 + 1);
    if (bVar1 != 0) {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
  } while (this_00 != (undefined *)0x0);
LAB_00bc2957: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00bc2980 */
unsigned int F_00bc2980(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  bool bVar1;
  float fVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
  if (this_00 != (undefined *)0x0) {
    while (fVar2 = F_00bec210(this_00), bVar1 = GEN_ISNAN((float10)fVar2) || GEN_ISNAN((float10)0),
          bVar1 != (bVar1 || (float10)fVar2 == (float10)0)) {
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
      if (this_00 == (undefined *)0x0) {
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bc29d0 */
unsigned int F_00bc29d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc29d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  
  if (param_1 == 1) {
    F_00bc1f50(this);
    this = ((undefined *)(uint)(this));
  }
  *(int *)((int)this + 0x78) = param_1;
  *(int *)((int)this + 0x74) = param_1;
  return 0;
}

/* ref: FUN_00bc29f0 */
uint F_00bc29f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc29f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 1;
  *(undefined2 *)((int)this + 0x12) = 0x101;
  *(undefined1 *)((int)this + 0x14) = 1;
  uVar1 = F_00bc1f50(this);
  *(undefined4 *)(((int)(uint)(this)) + 0x74) = 1;
  *(undefined4 *)(((int)(uint)(this)) + 0x78) = 1;
  return uVar1;
}

/* ref: FUN_00bc2a10 */
unsigned int F_00bc2a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc2a10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  
  for (in_ecx_00 = *(int *)(in_ecx + 0x1c); in_ecx_00 != 0; in_ecx_00 = *(int *)(in_ecx_00 + 0x1c))
  {
    F_00beb840(in_ecx_00,param_2);
  }
  return 0;
}

/* ref: FUN_00bc2a40 */
uint F_00bc2a40(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x1c);
  iVar3 = iVar1;
  while( true ) {
    if (iVar3 == 0) {
      while( true ) {
        if (iVar1 == 0) {
          return 0;
        }
        if (((*(int *)(iVar1 + 0x24) == 2) && (uVar2 = *(uint *)(iVar1 + 0x20), uVar2 != 0)) &&
           (*(char *)(uVar2 + 0x11) != '\0')) break;
        iVar1 = *(int *)(iVar1 + 0x1c);
      }
      return uVar2;
    }
    if ((((*(int *)(iVar3 + 0x24) == 1) || (*(int *)(iVar3 + 0x24) == 0)) &&
        (uVar2 = *(uint *)(iVar3 + 0x20), uVar2 != 0)) && (*(char *)(uVar2 + 0x11) != '\0')) break;
    iVar3 = *(int *)(iVar3 + 0x1c);
  }
  return uVar2;
}

/* ref: FUN_00bc2aa0 */
uint F_00bc2aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc2aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(uint *)(gen_frame + 0xf8)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
      ((undefined * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 *)(gen_frame + 0x8));
      this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
      goto joined_r0x00bc2ad4;
    }
    while( true ) {
      bVar1 = F_00bec1a0(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined * PTR32 *)(gen_frame + 0xc)));
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
joined_r0x00bc2ad4: ;
      if (this_00 == (undefined *)0x0) {
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return uVar2;
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x2c) == 9) {
      uVar2 = F_00be2510((*(undefined * PTR32 *)(gen_frame + 0x4)),param_1);
    }
  } while( true );
}

/* ref: FUN_00bc2b40 */
float F_00bc2b40(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  float fVar1;
  byte bVar2;
  undefined * this_00;
  float10 extraout_ST0;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1090708);
  if (*(char *)((int)this + 0x13) != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  fVar1 = REFG(float, 0x1090708);
  if (*(char *)((int)this + 0xf) == '\0') {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    do {
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
        this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
        ((undefined4 *)(gen_frame + 0xc))[0] = 0;
        fVar1 = (*(float *)(gen_frame + 0x4));
        goto joined_r0x00bc2bb5;
      }
      while (bVar2 = F_00bec1a0(this_00,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0xc))), bVar2 == 0) {
        this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
        fVar1 = (*(float *)(gen_frame + 0x4));
joined_r0x00bc2bb5: ;
        (*(float *)(gen_frame + 0x4)) = fVar1;
        if (this_00 == (undefined *)0x0) {
          F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
          return fVar1;
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
      if ((*(int * PTR32 *)(gen_frame + 0x0))[0xb] == 6) {
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x58))((*(int * PTR32 *)(gen_frame + 0x0)));
        if ((float10)(*(float *)(gen_frame + 0x4)) < (float10)(float)extraout_ST0) {
          (*(float *)(gen_frame + 0x4)) = (float)extraout_ST0;
        }
      }
    } while( true );
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return fVar1;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf21 */
uint F_00bc2c50(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbc2c50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  bool bVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = GEN_ISNAN(*(float *)(param_1 + 0x70)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar1 = *(float *)(param_1 + 0x70) == *(float *)&REFG(undefined, 0x1088114);
  *(float *)(param_1 + 0x5c) = param_2;
  *(float *)(param_1 + 0x58) = param_2;
  *(undefined4 *)(param_1 + 0x74) = param_5;
  *(undefined4 *)(param_1 + 0x78) = param_5;
  *(float *)(param_1 + 0x60) = param_3;
  *(float *)(param_1 + 0x68) = param_4;
  if (bVar3 != (bVar3 || bVar1)) {
    *(float *)(param_1 + 0x6c) = param_4;
  }
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x81) = (undefined1)param_6;
  *(float *)(param_1 + 100) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x6c) + (float10)param_3)));
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  uVar2 = F_00bc1f50(param_1);
  return uVar2;
}

/* ref: FUN_00bc2cd0 */
uint F_00bc2cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  uVar1 = F_00bc1f50(this);
  *(undefined4 *)(((int)(uint)(this)) + 0x34) = 0;
  return uVar1;
}

/* ref: FUN_00bc2d00 */
uint F_00bc2d00(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  *(undefined1 *)(in_ecx + 0x80) = 0;
  uVar1 = F_00bc1f50(in_ecx);
  return uVar1;
}

/* ref: FUN_00bc2d10 */
byte F_00bc2d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc2d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(byte *)(gen_frame + 0x1b)) = 0;
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(char *)(param_1 + 0x82) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x58) + (float10)*(float *)param_2)));
      *(float *)(param_1 + 0x58) = fVar1;
      if ((float10)fVar1 < (float10)0) {
        return 0;
      }
      fVar1 = *(float *)(param_1 + 0x6c);
      (*(float *)(gen_frame + 0x10)) = fVar1;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      if (*(int *)(param_1 + 0x74) != 1) {
        fVar2 = *(float *)(param_1 + 100);
        (*(float *)(gen_frame + 0x14)) = fVar2;
        fVar5 = (float10)fVar2;
        fVar6 = (float10)*(float *)(param_1 + 0x58);
        if (fVar5 <= fVar6) {
          if (((*(char *)(param_1 + 0x85) == '\0') && (*(char *)(param_1 + 0x84) != '\0')) ||
             ((float10)*(float *)(param_1 + 0x5c) < fVar5)) {
            *(float *)(param_1 + 0x58) = fVar2;
            *(float *)param_2 = ((float)GEN_TOF((fVar5 - (float10)*(float *)(param_1 + 0x5c))));
            *(undefined4 *)(param_1 + 0x88) = 1;
            return 0;
          }
          F_00b5f8f0(((float)GEN_TOF(((fVar6 - (float10)*(float *)(param_1 + 0x60)) / (float10)fVar1))),
                       &(*(float *)(gen_frame + 0xc)));
          (*(uint *)(gen_frame + 0x4)) = (uint)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0xc)));
          *(uint *)(param_1 + 0x7c) = (*(uint *)(gen_frame + 0x4));
          if (((*(uint *)(gen_frame + 0x4)) < 2) || (*(char *)(param_1 + 0x83) == '\0')) {
            fVar5 = (float10)(int)(*(uint *)(gen_frame + 0x4));
            if ((int)(*(uint *)(gen_frame + 0x4)) < 0) {
              fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            *(float *)(param_1 + 0x58) =
                 ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x58) -
                        (float10)(float)(fVar5 * (float10)(*(float *)(gen_frame + 0x10))))));
          }
          else {
            fVar1 = *(float *)(param_1 + 100);
            (*(float *)(gen_frame + 0x14)) = fVar1;
            *(undefined4 *)(param_1 + 0x7c) = 1;
            *(float *)(param_1 + 0x58) = fVar1;
            *(float *)param_2 =
                 ((float)GEN_TOF((((float10)fVar1 - (float10)*(float *)(param_1 + 0x5c)) + (float10)(*(float *)(gen_frame + 0x10)))))
            ;
          }
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x7c);
          (*(byte *)(gen_frame + 0x1b)) = 1;
          if (*(char *)(param_1 + 0x83) != '\0') {
            *(undefined1 *)(param_1 + 0x84) = 1;
            *(undefined4 *)(param_1 + 0x88) = 1;
            return 1;
          }
        }
        else if (fVar6 < (float10)*(float *)(param_1 + 0x60)) {
          if (*(int *)(param_1 + 0x78) != 0) {
            F_00b5f8f0(((float)GEN_TOF((((float10)*(float *)(param_1 + 0x60) - fVar6) / (float10)fVar1))),
                         &(*(float *)(gen_frame + 0xc)));
            uVar3 = *(uint *)(param_1 + 0x78);
            (*(uint *)(gen_frame + 0x4)) = (uint)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0xc)));
            uVar4 = (*(uint *)(gen_frame + 0x4)) + 1;
            *(uint *)(param_1 + 0x7c) = uVar4;
            if (uVar4 <= uVar3) {
              fVar5 = (float10)(int)uVar4;
              *(uint *)(param_1 + 0x78) = uVar3 - uVar4;
              if ((int)uVar4 < 0) {
                fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
              }
              *(undefined4 *)(param_1 + 0x88) = 1;
              *(float *)(param_1 + 0x58) =
                   ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)(*(float *)(gen_frame + 0x10))) +
                          (float10)*(float *)(param_1 + 0x58))));
              return (*(byte *)(gen_frame + 0x1b));
            }
            *(uint *)(param_1 + 0x7c) = uVar3;
            fVar5 = (float10)*(int *)(param_1 + 0x7c);
            *(undefined4 *)(param_1 + 0x78) = 0;
            if ((int)uVar3 < 0) {
              fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            *(float *)(param_1 + 0x58) =
                 ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)(*(float *)(gen_frame + 0x10))) +
                        (float10)*(float *)(param_1 + 0x58))));
            F_00bc1f50(param_1);
            return (*(byte *)(gen_frame + 0x1b));
          }
          goto LAB_00bc2f9b;
        }
        *(undefined4 *)(param_1 + 0x88) = 1;
        return (*(byte *)(gen_frame + 0x1b));
      }
      (*(float *)(gen_frame + 0x14)) = *(float *)(param_1 + 100);
      fVar5 = (float10)*(float *)(param_1 + 100);
      if (fVar5 <= (float10)*(float *)(param_1 + 0x58)) {
        *(float *)param_2 = ((float)GEN_TOF((fVar5 - (float10)*(float *)(param_1 + 0x5c))));
        F_00bc1f50(param_1);
        return (*(byte *)(gen_frame + 0x1b));
      }
LAB_00bc2f9b: ;
      F_00bc1f50(param_1);
      return (*(byte *)(gen_frame + 0x1b));
    }
    *(undefined4 *)param_2 = 0;
  }
  return 0;
}

/* ref: FUN_00bc2fd0 */
uint F_00bc2fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1104994));
  uVar1 = F_00bc2160(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf3 */
byte F_00bc2ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc2ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0xf] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] != (undefined1)0x0) {
    piVar1 = *(int * PTR32 *)(this + 0x1c);
    while( true ) {
      if (piVar1 == (int *)0x0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
        if (((*(int *)(this + 0x74) == 0) && (uVar3 != 0)) &&
           (bVar2 = F_00bcfbc0(uVar3), bVar2 != 0)) {
          F_00bc1f50(this);
          *(undefined4 *)(this + 0x74) = 1;
          *(undefined4 *)(this + 0x78) = 1;
        }
        this[0xf] = (undefined1)0x1;
        this[0x13] = (undefined1)0x0;
        if (*(int *)(this + 4) != 0) {
          *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
        }
        return 1;
      }
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      if ((char)uVar3 == '\0') break;
      piVar1 = (int *)piVar1[7];
    }
    this[0x13] = (undefined1)0x0;
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf7 */
byte F_00bc3080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc3080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * this_00;
  byte bVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x8)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x14)) = param_2[3];
  (*(int *)(gen_frame + 0xc)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  (*(byte *)(gen_frame + 0x7)) = 1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 4: ;
  case 5: ;
    F_00bc1f50(this);
    *(undefined4 *)(this + 0x74) = 1;
    *(undefined4 *)(this + 0x78) = 1;
    break;
  case 10: ;
    if (this[0x80] != (undefined1)0x0) {
      F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
      return 1;
    }
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) & 0xfffffffe;
    *(undefined4 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xe) = 0;
    this[0x10] = (undefined1)0x0;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    F_00bc2cd0(this);
    break;
  case 0xb: ;
    *(undefined4 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xe) = 0;
    this[0x10] = (undefined1)0x0;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    break;
  case 0x17: ;
  case 0x18: ;
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
  case 0x16: ;
    (*(int *)(gen_frame + 0xc)) = *(int *)(this + 0x34);
    break;
  case 0x1e: ;
    if (param_2[1] == 9) {
      F_00bc29f0(this);
    }
    this[0x80] = (undefined1)0x1;
    *(undefined4 *)(this + 0x88) = 3;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  if (param_1 == 0x13) {
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
      if ((*(uint *)((int)this_00 + 0x24) < 2) &&
         (bVar2 = F_00bec620(this_00,0x13,&(*(undefined4 *)(gen_frame + 0x8))), bVar2 == 0)) {
        (*(byte *)(gen_frame + 0x7)) = 0;
      }
    }
  }
  else {
    for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
      bVar2 = F_00bec620(this_00,param_1,&(*(undefined4 *)(gen_frame + 0x8)));
      if (bVar2 == 0) {
        (*(byte *)(gen_frame + 0x7)) = 0;
      }
    }
  }
  if (param_1 == 0x11) {
    this[0x82] = (undefined1)0x0;
  }
  else if (param_1 == 0x1d) {
    if ((*(byte *)(gen_frame + 0x7)) == 0) {
      *(undefined4 *)(this + 10) = 0x1010000;
    }
  }
  else if ((param_1 == 0x1e) && ((((*(int *)(gen_frame + 0xc)) == 1 || ((*(int *)(gen_frame + 0xc)) == 3)) || ((*(int *)(gen_frame + 0xc)) == 5)))) {
    *(undefined4 *)(this + 10) = 0x1000000;
    *(undefined2 *)(this + 0xe) = 0x101;
    this[0x10] = (undefined1)0x1;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (*(byte *)(gen_frame + 0x7));
}

/* ref: FUN_00bc3270 */
uint F_00bc3270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3270u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x5c))) >> 1;
    if (((uVar3 & 1) == 0) || ((uVar3 & 1) == 0)) {
      bVar2 = F_00bcd860((*(undefined * PTR32 *)&gen_args[1]));
      if (bVar2 == 0) {
        uVar3 = F_00bcd800(this_00,&(*(undefined * PTR32 *)&gen_args[1]));
        return uVar3;
      }
      if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) >> 4 & 1) == 0) {
        return 0;
      }
      puVar1 = (uint *)((int)this_00 + 0x5c);
      *puVar1 = *puVar1 | 2;
    }
    F_00bc27e0((*(undefined * PTR32 *)&gen_args[0]));
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf18 */
byte F_00bc32d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc32d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 0;
  if (param_1 == 9) {
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
    *(undefined2 *)(this + 0x12) = 0x101;
    this[0x14] = (undefined1)0x1;
    F_00bc1f50(this);
    *(undefined4 *)(this + 0x74) = 1;
    *(undefined4 *)(this + 0x78) = 1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
  if (uVar3 != 0) {
    *(undefined1 *)(uVar3 + 0xf0) = 1;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  this[0x80] = (undefined1)0x1;
  *(undefined4 *)(this + 0x88) = 3;
  bVar1 = local_5;
  for (; this_00 != (undefined *)0x0; this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
    bVar2 = F_00bec010(this_00,param_1,param_2);
    if (bVar2 != 0) {
      bVar1 = 1;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((param_1 == 1) || (param_1 == 3)) || (param_1 == 5)) {
    *(undefined4 *)(this + 10) = 0x1000000;
    *(undefined2 *)(this + 0xe) = 0x101;
    this[0x10] = (undefined1)0x1;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
    }
  }
  return bVar1;
}

/* ref: FUN_00bc33b0 */
uint F_00bc33b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc33b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * this_00;
  int * piVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,9,0);
  this_00 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 100))(this)));
  piVar1 = this_00;
  if ((this_00 != (int *)0x0) && (this_00[0x37] == 0)) {
    if ((char)param_1 != '\0') {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0x94))(this_00)));
      if (((*(char *)((int)this_00 + 0x24a) != '\0') || (piVar1 == (int *)0x0)) ||
         (*(char *)((int)piVar1 + 0x23) == '\0')) {
        this_00[0xb] = this_00[0xb] | 1;
        *(undefined2 *)((int)this_00 + 0x12) = 0x101;
        *(undefined1 *)(this_00 + 5) = 1;
        piVar1 = (int *)F_00bc1f50(this_00);
        this_00[0x1d] = 1;
        this_00[0x1e] = 1;
      }
    }
    if (*(char *)((int)this_00 + 0x24a) != '\0') {
      piVar1 = (int *)F_00bd0910(this_00);
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_00bc3440 */
uint F_00bc3440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc3440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pvVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = *(uint *)((int)this + 0x18);
  if ((byte)param_2 == 0) {
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x18) = 0;
      goto LAB_00bc3486;
    }
    uVar4 = ~(1 << ((byte)param_1 & 0x1f)) & uVar1;
  }
  else {
    uVar4 = 1 << ((byte)param_1 & 0x1f) | uVar1;
  }
  *(uint *)((int)this + 0x18) = uVar4;
LAB_00bc3486: ;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = (byte)param_2;
  (*(uint *)(gen_frame + 0x8)) = (uint)(byte)param_2;
  if ((char)param_3 == '\0') {
    if (*(uint *)((int)this + 0x18) != uVar1) {
      pvVar3 = *(undefined * PTR32 *)((int)this + 0x1c);
      (*(int *)(gen_frame + 0xc)) = param_1;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      for (; pvVar3 != (undefined *)0x0; pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x1c)) {
        bVar2 = F_00bec620(pvVar3,0x1f,&(*(uint *)(gen_frame + 0x8)));
        this = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar2)));
      }
    }
  }
  else {
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x1c);
    (*(int *)(gen_frame + 0xc)) = param_1;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if (pvVar3 != (undefined *)0x0) {
      do {
        bVar2 = F_00bec620(pvVar3,0x20,&(*(uint *)(gen_frame + 0x8)));
        pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x1c);
      } while (pvVar3 != (undefined *)0x0);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return CONCAT31(extraout_var,bVar2);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)this;
}

/* ref: FUN_00bc3520 */
uint F_00bc3520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbc3520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  if (4 < param_3) {
    param_3 = 0;
  }
  if (param_5 == (undefined *)0x0) {
    if (param_1 == (undefined *)0x0) {
      pvVar3 = (undefined *)F_00406b90(0x3c,0,0);
      if (pvVar3 == (undefined *)0x0) {
        pvVar3 = (undefined *)0x0;
        F_00beb600();
      }
      else {
        pvVar3 = (undefined *)F_00beb860(pvVar3,param_2,param_3,param_4);
        F_00beb600();
      }
    }
    else {
      pvVar3 = (undefined *)F_00beb860(param_1,param_2,param_3,param_4);
      *(undefined1 *)((int)pvVar3 + 0x16) = 1;
      F_00beb600();
    }
  }
  else {
    F_00beb960(param_5,param_2,param_3,param_4);
    pvVar3 = param_5;
  }
  *(undefined * PTR32 *)((int)pvVar3 + 4) = this;
  piVar1 = (int *)((int)pvVar3 + 0x18);
  iVar2 = *(int *)((int)this + 0x1c);
  if (*(int *)((int)this + 0x1c) == 0) {
    *piVar1 = 0;
    *(undefined4 *)((int)pvVar3 + 0x1c) = 0;
    *(undefined * PTR32 *)((int)this + 0x1c) = pvVar3;
    return (uint)pvVar3;
  }
  do {
    iVar4 = iVar2;
    iVar2 = *(int *)(iVar4 + 0x1c);
  } while (*(int *)(iVar4 + 0x1c) != 0);
  if (piVar1 != (int *)0x0) {
    *(undefined * PTR32 *)(iVar4 + 0x1c) = pvVar3;
    *(undefined4 *)((int)pvVar3 + 0x1c) = 0;
    *piVar1 = iVar4;
    return (uint)pvVar3;
  }
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)((int)pvVar3 + 0x1c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar4;
  return (uint)pvVar3;
}

/* ref: FUN_00bc3620 */
uint F_00bc3620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbc3620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this);
  if (uVar1 == 0) {
LAB_00bc365c: ;
    uVar3 = F_00b597c0(REFG(void * PTR32, 0x14c4e78),param_2);
    if (uVar3 != 0) goto LAB_00bc36b6;
    uVar2 = F_0052ed20(REFG(undefined4, 0x1375b00),param_2,0,0);
    uVar3 = F_00b59750(REFG(void * PTR32, 0x14c4e78),uVar2,0);
    if (uVar2 == 0) goto LAB_00bc36b6;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,param_3);
    uVar3 = F_00b59750(REFG(void * PTR32, 0x14c4e78),uVar2,1);
    if (uVar2 == 0) goto LAB_00bc365c;
  }
  if (uVar3 == 0) {
    uVar3 = F_00b59f90(REFG(void * PTR32, 0x14c4e78),uVar2);
    *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + 0x4a8;
    if (uVar1 != 0) {
      *(undefined1 *)(uVar3 + 0x3f9) = 1;
    }
  }
LAB_00bc36b6: ;
  uVar1 = F_00bc3520(this,param_1,uVar3,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00bc36e0 */
uint F_00bc36e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc36e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(uint *)(gen_frame + 0xf8)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
      ((undefined * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 *)(gen_frame + 0x8));
      this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
      goto joined_r0x00bc3714;
    }
    while( true ) {
      bVar1 = F_00bec1a0(this_00,&(*(uint *)(gen_frame + 0x4)),((undefined * PTR32 *)(gen_frame + 0xc)));
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
joined_r0x00bc3714: ;
      if (this_00 == (undefined *)0x0) {
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return uVar2;
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
    uVar2 = (*(uint *)(gen_frame + 0x4));
    if ((*(byte *)((*(uint *)(gen_frame + 0x4)) + 0x7c) >> 4 & 1) != 0) {
      *(ushort *)((*(uint *)(gen_frame + 0x4)) + 0x7c) = *(ushort *)((*(uint *)(gen_frame + 0x4)) + 0x7c) | 0x40;
    }
  } while( true );
}

/* ref: FUN_00bc3780 */
uint F_00bc3780(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbc3780u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  bool bVar2;
  
  fVar1 = *(float *)(param_1 + 0x58);
  (*(float *)(gen_frame + 0x8)) = fVar1;
  bVar2 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)param_2);
  if (bVar2 == (bVar2 || (float10)fVar1 == (float10)param_2)) {
    *(float *)(param_1 + 0x58) = param_2;
    *(undefined1 *)(param_1 + 0x82) = 0;
    (*(float *)(gen_frame + 0x8)) = 0.0;
    F_00bc2d10(param_1,(uint)&(*(float *)(gen_frame + 0x8)));
    *(float *)(param_1 + 0x5c) = fVar1;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  F_00bc1f50(param_1);
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)(longlong)TRUNC((float10)param_2);
  *(undefined4 *)(param_1 + 0x34) = (*(undefined4 *)(gen_frame + 0x0));
  return ((undefined2)0x27f) | 0xc00;
}

/* ref: FUN_00bc3830 */
uint F_00bc3830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3830u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bc3840 */
uint F_00bc3840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bc3850 */
uint F_00bc3850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00bc38a0 */
byte F_00bc38a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc38a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 10) = 0x1000000;
  *(undefined2 *)((int)this + 0xe) = 0x101;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf14 */
unsigned int F_00bc38e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc38e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf15 */
unsigned int F_00bc38f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc38f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf19 */
unsigned int F_00bc3900(void)
{
  GEN_ENTER(0xbc3900u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf24 */
unsigned int F_00bc3910(void)
{
  GEN_ENTER(0xbc3910u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf46 */
uint F_00bc3920(void)
{
  GEN_ENTER(0xbc3920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf47 */
unsigned int F_00bc3930(void)
{
  GEN_ENTER(0xbc3930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf48 */
unsigned int F_00bc3940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00bc3950 */
uint F_00bc3950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this + -0x18;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0x1c);
  } while (*(int *)(iVar2 + 0x1c) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0x1c) = (int)this - 0x18U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 0x18U;
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00bc39a0 */
byte F_00bc39a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc39a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2))) & 1 << ((byte)param_1 & 0xf)) != 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf0 */
uint F_00bc39e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc39e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1104994));
  F_00bc2160(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc3a20 */
uint F_00bc3a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bc3a60 */
uint F_00bc3a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3a60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00bc3ab0 */
uint F_00bc3ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc3ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  bool bVar1;
  
  bVar1 = GEN_ISNAN(*(float *)(in_ecx + 0x38)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar1 != (bVar1 || *(float *)(in_ecx + 0x38) == *(float *)&REFG(undefined, 0x1088114))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc3b20 */
uint F_00bc3b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 * 3 + 3) * 0x10 + in_ecx;
}

/* ref: FUN_00bc3b40 */
unsigned int F_00bc3b40(float gen_a0)
{
  GEN_ENTER(0xbc3b40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bc3b60 */
byte F_00bc3b60(unsigned int gen_a0)
{
  GEN_ENTER(0xbc3b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x404) != 0) {
    return 0;
  }
  return *(int *)(in_ecx + 0x28) == 0;
}

/* ref: FUN_00bc3b80 */
byte F_00bc3b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00bbadf0(this,param_1,0);
  return bVar1;
}

/* ref: FUN_00bc3ba0 */
unsigned int F_00bc3ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc3ba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(uint *)(in_ecx + 0x3fc) = *(uint *)(in_ecx + 0x3fc) & 0xfffffffd;
  return 0;
}

/* ref: FUN_00bc3bb0 */
unsigned int F_00bc3bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc3bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00bc3bc0 */
unsigned int F_00bc3bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bc13b0((undefined *)((int)this + 0x408));
  return 0;
}

/* ref: Client::System::Scheduler::Object::CharacterController::vf2 */
byte F_00bc3bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00bbaea0(this,param_1);
  bVar1 = 0;
  if ((char)uVar2 != '\0') {
    bVar1 = F_00b59a30(REFG(void * PTR32, 0x14c4e78),this);
    F_00bc13b0(this + 0x408);
  }
  F_00bbaf20(this,param_1);
  return bVar1;
}

/* ref: FUN_00bc3c20 */
uint F_00bc3c20(unsigned int gen_a0)
{
  GEN_ENTER(0xbc3c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = F_00bbaf50(this);
  if (uVar1 != 0) {
    uVar2 = F_00531ed0(uVar1);
    if ((int)uVar2 < 0) {
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00bc3c50 */
byte F_00bc3c50(unsigned int gen_a0)
{
  GEN_ENTER(0xbc3c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x24) != 0;
}

/* ref: FUN_00bc3c60 */
uint F_00bc3c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x484);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x464) = 1;
  }
  *(int *)((int)this + param_1 * 4 + 0x484) = iVar1 + 1;
  *(undefined1 *)((int)this + 0x460) = 1;
  return param_1;
}

/* ref: FUN_00bc3c90 */
uint F_00bc3c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3c90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)(in_ecx + 0x484 + param_2 * 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(in_ecx + 0x464 + param_2 * 4) = 3;
  }
  *(undefined1 *)(in_ecx + 0x460) = 1;
  return param_2;
}

/* ref: FUN_00bc3cc0 */
uint F_00bc3cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc3cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined1 local_5;
  
  uVar2 = F_00bbaf90(this);
  if (uVar2 == 0) {
    *(undefined1 *)((int)this + 0x460) = 0;
    return 0;
  }
  iVar3 = 0;
  local_5 = 0;
  piVar4 = (int *)((int)this + 0x464);
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        F_00a62fd0(uVar2,iVar3);
        *piVar4 = 2;
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 == 3) {
            F_00a63030(uVar2,iVar3);
            *piVar4 = 0;
          }
          goto LAB_00bc3d2c;
        }
        F_00a622e0(uVar2,iVar3);
      }
      local_5 = 1;
    }
LAB_00bc3d2c: ;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
    if (7 < iVar3) {
      *(undefined1 *)((int)this + 0x460) = local_5;
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00bc3d50 */
byte F_00bc3d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x34);
  do {
    if ((*piVar2 != 0) && (*piVar2 != param_1)) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0xc;
  } while (iVar1 < 2);
  if ((*(int *)((int)this + 100) != 0) && (*(int *)((int)this + 100) != param_1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc3d90 */
byte F_00bc3d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc3d90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 4 + (param_2 * 3 + 3) * 0x10)));
  if ((iVar1 != 0) && (iVar1 != param_3)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc3dc0 */
byte F_00bc3dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  byte bVar1;
  uint * puVar3;
  uint * puVar2;
  
  puVar3 = ((uint *)GEN_TOP((((int)((int)(uintptr_t)param_1) * 3 + 3) * 0x10 + (int)this)));
  puVar2 = param_1;
  if ((*puVar3 & 1) != 0) {
    puVar2 = puVar3 + 0xb;
    if ((puVar3[0xb] & 0xc0000000) != 0) {
      bVar1 = F_00b5b6c0(REFG(void * PTR32, 0x14c4e84),puVar2);
      puVar2 = (uint *)(uint)bVar1;
      if (bVar1 != 0) goto LAB_00bc3df4;
    }
    *puVar3 = *puVar3 & 0xfffffffe;
  }
LAB_00bc3df4: ;
  return (byte)puVar2;
}

