#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00551750 */
GEN_FRAME byte GEN_THISCALL F_00551750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x551750u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)param_5;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_5 + 4);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_5 + 8);
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    fVar2 = ((float10)GEN_TOD(fcos((float10)param_3)));
    bVar1 = F_00c97550(*(undefined4 *)(param_1 + 8) GEN_EDX_ARG,param_2,param_7,(float)fVar2,param_4,&(*(undefined4 *)(gen_frame + 0x0))
                         ,(undefined4)gen_fl2bits(param_6));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005517f0 */
GEN_FRAME byte GEN_THISCALL F_005517f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5517f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(int *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 0x44) = 0;
  if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x0)) = 7;
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[3]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[5]);
    fVar2 = ((float10)GEN_TOD(fcos((float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x10)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[7]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 8) GEN_EDX_ARG,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005518b0 */
GEN_FRAME byte GEN_THISCALL F_005518b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5518b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x44) = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cc48)));
    (*(undefined4 *)(gen_frame + 0x30)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x30));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[4]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x0)) = 4;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(this_00 GEN_EDX_ARG,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005519a0 */
GEN_FRAME byte GEN_THISCALL F_005519a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5519a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(int *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 0x44) = 0;
  if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cc48)));
    (*(undefined4 *)(gen_frame + 0x30)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x0)) = 6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[5]);
    fVar2 = ((float10)GEN_TOD(fcos((float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x10)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[7]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 8) GEN_EDX_ARG,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551a90 */
GEN_FRAME byte GEN_THISCALL F_00551a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x551a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    bVar1 = F_00c975d0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_1,param_3,param_2);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551ae0 */
GEN_FRAME unsigned int GEN_THISCALL F_00551ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x551ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  if ((*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) && ((*(int *)&gen_a1) != 0)) {
    F_00c97130(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,(*(int *)&gen_a1));
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc)));
}

/* ref: FUN_00551b20 */
GEN_FRAME uint GEN_THISCALL F_00551b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x551b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00c97080(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_2,param_1);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551b70 */
GEN_FRAME uint GEN_THISCALL F_00551b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x551b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  ((byte *)(gen_frame + 0x4))[0xa4] = (char)uVar1;
  ((byte *)(gen_frame + 0x4))[0xa5] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x4))[0xa6] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0xa7] = (char)(uVar1 >> 0x18);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)) = param_2;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = ((char *)REFP(0x109cbe4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = ((char *)REFP(0x109cbec));
  ((byte *)(gen_frame + 0x4))[8] = 0;
  ((byte *)(gen_frame + 0x4))[9] = 0;
  ((byte *)(gen_frame + 0x4))[10] = 0;
  ((byte *)(gen_frame + 0x4))[0xb] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = ((char *)REFP(0x109cbf4));
  ((byte *)(gen_frame + 0x4))[0x10] = 0;
  ((byte *)(gen_frame + 0x4))[0x11] = 0;
  ((byte *)(gen_frame + 0x4))[0x12] = 0;
  ((byte *)(gen_frame + 0x4))[0x13] = 0;
  ((byte *)(gen_frame + 0x4))[0x14] = 0;
  ((byte *)(gen_frame + 0x4))[0x15] = 0;
  ((byte *)(gen_frame + 0x4))[0x16] = 0;
  ((byte *)(gen_frame + 0x4))[0x17] = 0;
  ((byte *)(gen_frame + 0x4))[0x18] = 0;
  ((byte *)(gen_frame + 0x4))[0x19] = 0;
  ((byte *)(gen_frame + 0x4))[0x1a] = 0;
  ((byte *)(gen_frame + 0x4))[0x1b] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)) = &REFG(undefined, 0x109cc04);
  if ((param_1 < 9) && (*(int *)(((byte *)(gen_frame + 0x4)) + param_1 * 4) != 0)) {
    F_00c472af(((byte *)(gen_frame + 0x4)) + 0x24,0x80,"%s/collision/list.pcb",*(int *)(((byte *)(gen_frame + 0x4)) + param_1 * 4));
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (*(undefined * PTR32 *)((int)this + 8) == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00c97080(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),((byte *)(gen_frame + 0x4)) + 0x24);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 164)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 164)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00551c70 */
GEN_FRAME uint GEN_THISCALL F_00551c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x551c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00c970b0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_5,param_1,param_2,param_3,param_4);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551cd0 */
GEN_FRAME uint GEN_THISCALL F_00551cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00c970f0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_4,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551d20 */
GEN_FRAME uint GEN_THISCALL F_00551d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00c97100(this_00 GEN_EDX_ARG,param_4,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar3;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551da0 */
GEN_FRAME uint GEN_THISCALL F_00551da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = *param_3;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00c97110(this_00 GEN_EDX_ARG,param_4,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551e10 */
GEN_FRAME uint GEN_THISCALL F_00551e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00c97120(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_4,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551e90 */
GEN_FRAME uint GEN_THISCALL F_00551e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 uVar2;
  
  if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)((int)this + 100)) {
    *param_1 = *(undefined4 *)((int)this + 0x58);
    *param_2 = *(undefined4 *)((int)this + 0x5c);
    *param_3 = *(undefined4 *)((int)this + 0x60);
    *param_4 = *(undefined4 *)((int)this + 100);
    return (uint)param_3;
  }
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  *param_1 = *(undefined4 *)(iVar1 + 0x90);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cdcc)));
  *param_2 = *(undefined4 *)(iVar1 + 0x94);
  *param_3 = *(undefined4 *)(iVar1 + 0x98);
  *param_4 = uVar2;
  return (uint)param_3;
}

/* ref: FUN_00551f10 */
GEN_FRAME byte GEN_THISCALL F_00551f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined * PTR32 * ppuVar7;
  byte bVar8;
  uint uVar9;
  float fVar10;
  float * pfVar11;
  float * pfVar12;
  int iVar13;
  undefined4 * puVar14;
  undefined4 * puVar15;
  byte * pbVar16;
  undefined2 * puVar17;
  uint uVar18;
  undefined * PTR32 * PTR32 * in_ecx;
  int iVar19;
  float10 fVar20;
  
  uVar9 = (*(uint *)&gen_args[3]);
  iVar19 = *(int *)((*(uint *)&gen_args[3]) + 4);
  (*(int *)(gen_frame + 0x174)) = iVar19;
  iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x184)) = *(float * PTR32 *)((*(uint *)&gen_args[3]) + 8);
  fVar10 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x34))) + 4))) + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x190)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(float *)(gen_frame + 0x194)) = fVar10;
  if (*(short *)(iVar5 + 0x2a) != 0) {
    if (*(char *)((int)gen_fl2bits(fVar10) + 0x18) == '\0') {
      (*(float *)(gen_frame + 0x180)) = -NAN;
      (*(uint *)(gen_frame + 0x188)) = iVar5 + (*(ushort *)(iVar5 + 0x28) + 8 + (uint)*(ushort *)(iVar5 + 0x2c) * 2) * 6;
      (*(uint *)(gen_frame + 0x178)) = (*(uint *)&gen_args[4]);
      F_00c90030((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[4]));
      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x184));
      pfVar11 = *(float * PTR32 *)((*(uint *)&gen_args[3]) + 0xc);
      uVar3 = *(undefined4 *)(*(uint *)&gen_args[3]);
      (*(float *)(gen_frame + 0x194)) = 0.0;
      ((float *)(gen_frame + 0x114))[5] = 0.0;
      ((float *)(gen_frame + 0x114))[6] = 0.0;
      ((float *)(gen_frame + 0x114))[7] = 0.0;
      switch((unsigned int)(uintptr_t)(uVar3)) {
      case 0: ;
        fVar10 = 0.0;
        if (*((short *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))) != 0) {
          pbVar16 = (byte *)((*(uint *)(gen_frame + 0x188)) + 1);
          do {
            bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x174)),(uint)(*(float * PTR32 *)(gen_frame + 0x184)),(*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-1] * 0xc,
                                 (*(uint *)(gen_frame + 0x178)) + (uint)*pbVar16 * 0xc,(*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[1] * 0xc,
                                 ((float *)(gen_frame + 0x114)) + 5,&(*(uint *)&gen_args[4]));
            if (((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)*pfVar11)) &&
               ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                !(gen_bits2f((*(uint *)&gen_args[4])) < *(float *)&REFG(undefined, 0x1088114)))) {
              (*(float *)(gen_frame + 0x180)) = fVar10;
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
            }
            fVar10 = gen_bits2f((int)gen_fl2bits(fVar10) + 1);
            pbVar16 = pbVar16 + 6;
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 1: ;
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(uint *)(gen_frame + 0x17c)) = *(uint *)((*(uint *)&gen_args[3]) + 4);
        (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          pbVar16 = (byte *)((*(uint *)(gen_frame + 0x188)) + 1);
          do {
            bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x17c)),pfVar12,(*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-1] * 0xc,
                                 (*(uint *)(gen_frame + 0x178)) + (uint)*pbVar16 * 0xc,(*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[1] * 0xc,
                                 ((float *)(gen_frame + 0x114)) + 5,&(*(uint *)&gen_args[4]));
            if (bVar8 != 0) {
              if (((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <=
                    (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                  (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[4])))) &&
                 ((fVar10 = ((float)GEN_TOF(((float10)pfVar12[2] * (float10)((float *)(gen_frame + 0x114))[7] +
                                   ((float10)((float *)(gen_frame + 0x114))[5] * (float10)*pfVar12 +
                                   (float10)pfVar12[1] * (float10)((float *)(gen_frame + 0x114))[6])))),
                  !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) < (float10)REFG(double, 0x109cdf8)) ||
                  (!((float10)(*(float *)(gen_frame + 0x194)) <= (float10)fVar10))))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
                (*(float *)(gen_frame + 0x180)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198)))));
                (*(float *)(gen_frame + 0x194)) = fVar10;
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x198)) + 1);
            pbVar16 = pbVar16 + 6;
            (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 2: ;
        fVar10 = *(float *)((*(uint *)&gen_args[3]) + 0x10);
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(uint *)(gen_frame + 0x17c)) = (*(uint *)&gen_args[1]);
        (*(float *)(gen_frame + 0x194)) = fVar10;
        (*(uint *)&gen_args[1]) = 0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          pbVar16 = (byte *)((*(uint *)(gen_frame + 0x188)) + 2);
          do {
            uVar9 = (*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-2] * 0xc;
            uVar18 = (*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-1] * 0xc;
            fVar10 = gen_bits2f((*(uint *)(gen_frame + 0x178)) + (uint)*pbVar16 * 0xc);
            (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
            bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x174)),(uint)(*(float * PTR32 *)(gen_frame + 0x184)),uVar9,uVar18,(uint)gen_fl2bits(fVar10),
                                 ((float *)(gen_frame + 0x114)) + 5,&(*(uint *)&gen_args[4]));
            if (((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)*pfVar11)) &&
               (((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                 !(gen_bits2f((*(uint *)&gen_args[4])) < *(float *)&REFG(undefined, 0x1088114)) &&
                (fVar20 = F_00551330((*(undefined * PTR32 *)(gen_frame + 0x198)),uVar18,uVar9,(uint)&(*(uint *)(gen_frame + 0x17c))),
                fVar20 <= (float10)(*(float *)(gen_frame + 0x194)))))) {
              (*(float *)(gen_frame + 0x180)) = gen_bits2f((*(uint *)&gen_args[1]));
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
            }
            (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
            pbVar16 = pbVar16 + 6;
          } while ((*(uint *)&gen_args[1]) < *((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 3: ;
        (*(uint *)(gen_frame + 0x17c)) = *(uint *)((*(uint *)&gen_args[3]) + 4);
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(float *)(gen_frame + 0x170)) = gen_bits2f((*(uint *)&gen_args[1]));
        (*(float *)(gen_frame + 0xfc)) = 0.0;
        (*(float *)(gen_frame + 0x100)) = 0.0;
        (*(float *)(gen_frame + 0x104)) = 0.0;
        (*(float *)(gen_frame + 0x16c)) = *(float *)((*(uint *)&gen_args[3]) + 0x10);
        (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          pbVar16 = (byte *)((*(uint *)(gen_frame + 0x188)) + 2);
          do {
            uVar9 = (*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-1] * 0xc;
            uVar18 = (*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-2] * 0xc;
            iVar19 = (*(uint *)(gen_frame + 0x178)) + (uint)*pbVar16 * 0xc;
            (*(uint *)(gen_frame + 0x188)) = iVar19;
            bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x17c)),(*(float * PTR32 *)(gen_frame + 0x184)),uVar18,uVar9,iVar19,&(*(float *)(gen_frame + 0xfc)),&(*(uint *)&gen_args[4]));
            if (bVar8 != 0) {
              if ((((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <=
                     (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                   (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[4])))) &&
                  ((fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x184))[2] * (float10)(*(float *)(gen_frame + 0x104)) +
                                    ((float10)(*(float *)(gen_frame + 0xfc)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x184)) +
                                    (float10)(*(float * PTR32 *)(gen_frame + 0x184))[1] * (float10)(*(float *)(gen_frame + 0x100)))))),
                   !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) < (float10)REFG(double, 0x109cdf8)) ||
                   (!((float10)(*(float *)(gen_frame + 0x194)) <= (float10)fVar10))))) &&
                 (fVar20 = F_00551330((*(uint *)(gen_frame + 0x188)),uVar9,uVar18,(uint)&(*(float *)(gen_frame + 0x170))),
                 fVar20 <= (float10)(*(float *)(gen_frame + 0x16c)))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
                (*(float *)(gen_frame + 0x180)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198)))));
                (*(float *)(gen_frame + 0x194)) = fVar10;
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x198)) + 1);
            pbVar16 = pbVar16 + 6;
            (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 4: ;
        (*(float *)(gen_frame + 0x16c)) = **(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(float *)(gen_frame + 0x170)) = (*(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14))[1];
        (*(uint *)&gen_args[1]) = 0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          puVar17 = (undefined2 *)((*(uint *)(gen_frame + 0x188)) + 4);
          uVar9 = (*(uint *)(gen_frame + 0x178));
          do {
            if ((((gen_bits2f((uint)CONCAT12(*(undefined1 *)((int)puVar17 - 1),*puVar17) &
                              (uint)gen_fl2bits((*(float *)(gen_frame + 0x16c)))) == (*(float *)(gen_frame + 0x170))) &&
                 (bVar8 = F_00550990((*(int *)(gen_frame + 0x174)),(uint)(*(float * PTR32 *)(gen_frame + 0x184)),
                                       uVar9 + (uint)*(byte *)(puVar17 - 2) * 0xc,
                                       uVar9 + (uint)*(byte *)((int)puVar17 - 3) * 0xc,
                                       uVar9 + (uint)*(byte *)(puVar17 - 1) * 0xc,&(*(uint *)&gen_args[4])),
                 bVar8 != 0)) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)*pfVar11)) &&
               ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                !(gen_bits2f((*(uint *)&gen_args[4])) < *(float *)&REFG(undefined, 0x1088114)))) {
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
              (*(float *)(gen_frame + 0x180)) = gen_bits2f((*(uint *)&gen_args[1]));
              uVar9 = (*(uint *)(gen_frame + 0x178));
            }
            (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
            puVar17 = puVar17 + 3;
          } while ((*(uint *)&gen_args[1]) < *((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 5: ;
        fVar10 = **(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
        fVar4 = (*(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14))[1];
        (*(uint *)(gen_frame + 0x17c)) = *(uint *)((*(uint *)&gen_args[3]) + 4);
        (*(float *)(gen_frame + 0x16c)) = fVar10;
        iVar19 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc);
        (*(float *)(gen_frame + 0x170)) = fVar4;
        fVar10 = 0.0;
        (*(float *)(gen_frame + 0x108)) = 0.0;
        (*(float *)(gen_frame + 0x10c)) = 0.0;
        (*(float *)(gen_frame + 0x110)) = 0.0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          puVar17 = (undefined2 *)((*(uint *)(gen_frame + 0x188)) + 4);
          do {
            if ((gen_bits2f((uint)CONCAT12(*(undefined1 *)((int)puVar17 - 1),*puVar17) &
                            (uint)gen_fl2bits((*(float *)(gen_frame + 0x16c)))) == (*(float *)(gen_frame + 0x170))) &&
               (bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x17c)),(*(float * PTR32 *)(gen_frame + 0x184)),
                                     (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 - 2) * 0xc,
                                     (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)((int)puVar17 - 3) * 0xc,
                                     (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 - 1) * 0xc,&(*(float *)(gen_frame + 0x108)),
                                     &(*(uint *)&gen_args[4])), bVar8 != 0)) {
              if (((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <=
                    (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                  (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[4])))) &&
                 ((fVar4 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x184))[2] * (float10)(*(float *)(gen_frame + 0x110)) +
                                  ((float10)(*(float *)(gen_frame + 0x108)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x184)) +
                                  (float10)(*(float * PTR32 *)(gen_frame + 0x184))[1] * (float10)(*(float *)(gen_frame + 0x10c)))))),
                  !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) < (float10)REFG(double, 0x109cdf8)) ||
                  (!((float10)(*(float *)(gen_frame + 0x194)) <= (float10)fVar4))))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
                (*(float *)(gen_frame + 0x180)) = fVar10;
                (*(float *)(gen_frame + 0x194)) = fVar4;
              }
            }
            fVar10 = gen_bits2f((int)gen_fl2bits(fVar10) + 1);
            puVar17 = puVar17 + 3;
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 6: ;
        fVar10 = *(float *)((*(uint *)&gen_args[3]) + 0x10);
        fVar4 = **(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
        fVar6 = (*(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14))[1];
        (*(float *)(gen_frame + 0x194)) = gen_bits2f((*(uint *)&gen_args[1]));
        (*(float *)(gen_frame + 0x16c)) = fVar4;
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(float *)(gen_frame + 0x170)) = fVar6;
        (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
        (*(uint *)&gen_args[1]) = 0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          puVar17 = (undefined2 *)((*(uint *)(gen_frame + 0x188)) + 4);
          do {
            if (gen_bits2f((uint)CONCAT12(*(undefined1 *)((int)puVar17 - 1),*puVar17) &
                           (uint)gen_fl2bits((*(float *)(gen_frame + 0x16c)))) == (*(float *)(gen_frame + 0x170))) {
              uVar9 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 - 2) * 0xc;
              uVar18 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)((int)puVar17 - 3) * 0xc;
              uVar2 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 - 1) * 0xc;
              (*(uint *)(gen_frame + 0x17c)) = uVar2;
              bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x174)),(uint)(*(float * PTR32 *)(gen_frame + 0x184)),uVar9,uVar18,uVar2,((float *)(gen_frame + 0x114)) + 5,&(*(uint *)&gen_args[4]))
              ;
              if ((((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)*pfVar11)) &&
                  ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                   !(gen_bits2f((*(uint *)&gen_args[4])) < *(float *)&REFG(undefined, 0x1088114)))) &&
                 (fVar20 = F_00551330((*(uint *)(gen_frame + 0x17c)),uVar18,uVar9,(uint)&(*(float *)(gen_frame + 0x194))),
                 fVar20 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198))))))) {
                (*(float *)(gen_frame + 0x180)) = gen_bits2f((*(uint *)&gen_args[1]));
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
              }
            }
            (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
            puVar17 = puVar17 + 3;
          } while ((*(uint *)&gen_args[1]) < *((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 7: ;
        uVar9 = *(uint *)((*(uint *)&gen_args[3]) + 4);
        (*(float *)(gen_frame + 0xf0)) = 0.0;
        (*(float *)(gen_frame + 0xf4)) = 0.0;
        (*(float *)(gen_frame + 0xf8)) = 0.0;
        fVar10 = *(float *)((*(uint *)&gen_args[3]) + 0x10);
        pfVar12 = *(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
        fVar4 = *pfVar12;
        (*(uint *)(gen_frame + 0x17c)) = uVar9;
        fVar6 = pfVar12[1];
        (*(uint *)(gen_frame + 0xdc)) = (*(uint *)&gen_args[1]);
        (*(float *)(gen_frame + 0x16c)) = fVar4;
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(float *)(gen_frame + 0x170)) = fVar6;
        ((float *)(gen_frame + 0x114))[0x14] = fVar10;
        (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          puVar17 = (undefined2 *)((*(uint *)(gen_frame + 0x188)) + 4);
          do {
            if (gen_bits2f((uint)CONCAT12(*(undefined1 *)((int)puVar17 - 1),*puVar17) &
                           (uint)gen_fl2bits((*(float *)(gen_frame + 0x16c)))) == (*(float *)(gen_frame + 0x170))) {
              uVar9 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 - 2) * 0xc;
              uVar18 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)((int)puVar17 - 3) * 0xc;
              iVar19 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 - 1) * 0xc;
              (*(uint *)(gen_frame + 0x188)) = iVar19;
              bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x17c)),(*(float * PTR32 *)(gen_frame + 0x184)),uVar9,uVar18,iVar19,&(*(float *)(gen_frame + 0xf0)),&(*(uint *)&gen_args[4]));
              if (bVar8 != 0) {
                if ((((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <=
                       (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                     (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[4])))) &&
                    ((fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x184))[2] * (float10)(*(float *)(gen_frame + 0xf8)) +
                                      ((float10)(*(float *)(gen_frame + 0xf0)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x184)) +
                                      (float10)(*(float * PTR32 *)(gen_frame + 0x184))[1] * (float10)(*(float *)(gen_frame + 0xf4)))))),
                     !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) < (float10)REFG(double, 0x109cdf8)) ||
                     (!((float10)(*(float *)(gen_frame + 0x194)) <= (float10)fVar10))))) &&
                   (fVar20 = F_00551330((*(uint *)(gen_frame + 0x188)),uVar18,uVar9,(uint)&(*(uint *)(gen_frame + 0xdc))),
                   fVar20 <= (float10)((float *)(gen_frame + 0x114))[0x14])) {
                  *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
                  (*(float *)(gen_frame + 0x180)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198)))));
                  (*(float *)(gen_frame + 0x194)) = fVar10;
                }
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x198)) + 1);
            puVar17 = puVar17 + 3;
            (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
      }
      bVar8 = F_00c901b0((*(undefined * PTR32 *)(gen_frame + 0x190)) GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x180))),(*(uint *)&gen_args[2]),&(*(uint *)(gen_frame + 0x178)),(*(int *)(gen_frame + 0x174)),
                           (*(float * PTR32 *)(gen_frame + 0x184)),*pfVar11);
      return bVar8;
    }
    pvVar1 = (undefined *)((int)gen_fl2bits(fVar10) + 0x24);
    (*(undefined * PTR32 *)(gen_frame + 0x198)) = pvVar1;
    if (*(int *)((int)gen_fl2bits(fVar10) + 0x2003c) == 0) {
      uVar9 = F_00a4b910(pvVar1 GEN_EDX_ARG,0x1b0);
      *(uint *)((int)gen_fl2bits(fVar10) + 0x2003c) = uVar9;
      *(undefined4 *)(uVar9 + 0x1a0) = *(undefined4 *)((int)gen_fl2bits(fVar10) + 0x20040);
    }
    iVar19 = *(int *)((int)gen_fl2bits(fVar10) + 0x2003c);
    if (*(int *)((int)gen_fl2bits(fVar10) + 0x2003c) == 0) {
      uVar9 = F_00a4b910(pvVar1 GEN_EDX_ARG,0x1b0);
      *(uint *)((int)gen_fl2bits(fVar10) + 0x2003c) = uVar9;
      *(undefined4 *)(uVar9 + 0x1a0) = *(undefined4 *)((int)gen_fl2bits(fVar10) + 0x20040);
    }
    fVar4 = (*(float *)(gen_frame + 0x194));
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x190));
    iVar5 = *(int *)((int)gen_fl2bits(fVar10) + 0x2003c);
    iVar13 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc);
    uVar9 = ((uint)*(ushort *)(iVar13 + 0x2a) + (uint)*(ushort *)(iVar13 + 0x2c) * 2 +
            (uint)*(ushort *)(iVar13 + 0x28)) * 6 + 0x3f & 0xfffffff0;
    (*(uint *)(gen_frame + 0x188)) = uVar9;
    puVar14 = (undefined4 *)REFG(undefined * PTR32, 0x13066c0);
    puVar15 = (undefined4 *)(iVar19 + 0x80);
    for (iVar13 = 0x14; iVar13 != 0; iVar13 = iVar13 - 1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    *(uint *)(iVar19 + 0xa4) = uVar9;
    *(undefined4 *)(iVar19 + 0xa0) = 0;
    *(undefined4 *)(iVar19 + 0xa8) = 0x60;
    *(undefined2 *)(iVar19 + 0x98) = 8;
    iVar13 = *(int *)(*(uint *)&gen_args[3]);
    *(int *)(iVar19 + 0xdc) = iVar13 >> 0x1f;
    *(int *)(iVar19 + 0xd8) = iVar13;
    puVar14 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[3]) + 4);
    *(undefined4 *)(iVar19 + 0xe0) = *puVar14;
    *(undefined4 *)(iVar19 + 0xe4) = puVar14[1];
    *(undefined4 *)(iVar19 + 0xe8) = puVar14[2];
    *(undefined4 *)(iVar19 + 0xec) = puVar14[3];
    puVar14 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[3]) + 8);
    *(undefined4 *)(iVar19 + 0xf0) = *puVar14;
    *(undefined4 *)(iVar19 + 0xf4) = puVar14[1];
    uVar3 = puVar14[2];
    *(int *)(iVar19 + 0x108) = iVar5;
    *(undefined4 *)(iVar19 + 0xf8) = uVar3;
    *(undefined4 *)(iVar19 + 0x10c) = 0;
    puVar14 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
    *(undefined4 *)(iVar19 + 0x100) = *puVar14;
    *(undefined4 *)(iVar19 + 0x104) = puVar14[1];
    *(undefined4 *)(iVar19 + 0x110) = *(undefined4 *)((*(uint *)&gen_args[3]) + 0x10);
    puVar14 = (undefined4 *)(*(uint *)&gen_args[1]);
    puVar15 = (undefined4 *)(iVar19 + 0x118);
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    *(undefined4 *)(iVar19 + 0x158) = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x194))) + 0x20044);
    *(undefined4 *)(iVar19 + 0x15c) = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x194))) + 0x20048);
    *(undefined4 *)(iVar19 + 0x160) = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x194))) + 0x2004c);
    F_00a19bd0((undefined4 *)(iVar19 + 0x80),iVar19 + 0xd0,uVar9,
                 *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc));
    *(undefined4 *)(iVar5 + 0x50) = 0;
    *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)((int)pvVar1 + 8);
    *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)((int)pvVar1 + 0xc);
    *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)((int)pvVar1 + 0xc);
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)((int)pvVar1 + 8);
    F_00556050((*(undefined * PTR32 *)(gen_frame + 0x198)) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar4));
    return 0;
  }
  (*(byte *)(gen_frame + 0x18f)) = 0;
  if (*(char *)((int)gen_fl2bits(fVar10) + 0x18) != '\0') {
    ((float *)(gen_frame + 0x114))[0xe] = 0.0;
    ((float *)(gen_frame + 0x114))[0xf] = 0.0;
    ((float *)(gen_frame + 0x114))[0x10] = 0.0;
    ((float *)(gen_frame + 0x114))[0x11] = 0.0;
    ((float *)(gen_frame + 0x114))[0x12] = 0.0;
    ((float *)(gen_frame + 0x114))[0x13] = 0.0;
    (*(undefined4 *)(gen_frame + 0xe8)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)(iVar19 + 0xc))));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe4)) = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
    uVar18 = 8;
    do {
      iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
      if (0 < *(int *)(iVar19 + 8)) {
        (*(int *)(gen_frame + 0xec)) = *(int *)(iVar19 + uVar18) + iVar19;
        (*(undefined4 *)(gen_frame + 0xe8)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
      }
      pfVar11 = (float *)F_00c90300(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) GEN_EDX_ARG);
      ((float *)(gen_frame + 0x114))[0xe] = *pfVar11;
      ((float *)(gen_frame + 0x114))[0xf] = pfVar11[1];
      ((float *)(gen_frame + 0x114))[0x10] = pfVar11[2];
      pfVar11 = (float *)F_00c90310(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) GEN_EDX_ARG);
      fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198)))));
      ((float *)(gen_frame + 0x114))[0x11] = *pfVar11;
      ((float *)(gen_frame + 0x114))[0x12] = pfVar11[1];
      ((float *)(gen_frame + 0x114))[0xe] = (float)((float10)((float *)(gen_frame + 0x114))[0xe] - fVar20);
      ((float *)(gen_frame + 0x114))[0x13] = pfVar11[2];
      ((float *)(gen_frame + 0x114))[0xf] = (float)((float10)((float *)(gen_frame + 0x114))[0xf] - fVar20);
      ((float *)(gen_frame + 0x114))[0x10] = (float)((float10)((float *)(gen_frame + 0x114))[0x10] - fVar20);
      ((float *)(gen_frame + 0x114))[0x11] = (float)((float10)*pfVar11 + fVar20);
      ((float *)(gen_frame + 0x114))[0x12] = (float)((float10)pfVar11[1] + fVar20);
      ((float *)(gen_frame + 0x114))[0x13] = (float)(fVar20 + (float10)pfVar11[2]);
      bVar8 = F_00c996f0((*(int *)(gen_frame + 0x174)),(*(float * PTR32 *)(gen_frame + 0x184)),((float *)(gen_frame + 0x114)) + 0xe,((float *)(gen_frame + 0x114)) + 0x14);
      if (bVar8 != 0) {
        pfVar11 = *(float * PTR32 *)(uVar9 + 0xc);
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
        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        fVar10 = *pfVar11;
        (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar10);
        if (((float10)((float *)(gen_frame + 0x114))[0x14] - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198))))) < (float10)*pfVar11) &&
           (bVar8 = F_00551f10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) GEN_EDX_ARG,(*(uint *)&gen_args[1]),(uint)&(*(undefined4 *)(gen_frame + 0xc)),uVar9,(*(uint *)&gen_args[4])), bVar8 != 0)) {
          fVar4 = **(float * PTR32 *)(uVar9 + 0xc);
          (*(float *)(gen_frame + 0x194)) = fVar4;
          if ((float10)fVar4 < (float10)fVar10) {
            F_00550bc0((undefined *)(*(uint *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
            (*(byte *)(gen_frame + 0x18f)) = 1;
            (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar4);
          }
        }
        **(uint * PTR32 *)(uVar9 + 0xc) = (*(uint *)&gen_args[3]);
      }
      uVar18 = uVar18 + 4;
    } while (uVar18 < 0x10);
    F_00c93040(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) GEN_EDX_ARG);
    return (*(byte *)(gen_frame + 0x18f));
  }
  ((float *)(gen_frame + 0x114))[8] = 0.0;
  ((float *)(gen_frame + 0x114))[9] = 0.0;
  ((float *)(gen_frame + 0x114))[10] = 0.0;
  ((float *)(gen_frame + 0x114))[0xb] = 0.0;
  ((float *)(gen_frame + 0x114))[0xc] = 0.0;
  ((float *)(gen_frame + 0x114))[0xd] = 0.0;
  fVar10 = *(float *)(iVar19 + 0xc);
  (*(float *)(gen_frame + 0x194)) = 0.0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[2] = (undefined * PTR32 *)0x0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[6] = (undefined * PTR32 *)0x0;
  pfVar11 = ((float *)(gen_frame + 0x114));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[5] = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  (*(float *)(gen_frame + 0x180)) = fVar10;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[4] = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x1;
  in_ecx = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58));
  ((float *)(gen_frame + 0x114))[0x14] = gen_bits2f(8 - (int)pfVar11);
  (*(uint *)(gen_frame + 0x188)) = 2;
  do {
    iVar19 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc);
    if (0 < *(int *)(iVar19 + 8)) {
      ppuVar7 = *(undefined * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 8);
      in_ecx[3] = ((undefined * PTR32 *)GEN_TOP((*(int *)((int)gen_fl2bits(((float *)(gen_frame + 0x114))[0x14]) + iVar19 + (int)pfVar11) + iVar19)));
      in_ecx[2] = ppuVar7;
    }
    pfVar12 = (float *)F_00c90300(in_ecx GEN_EDX_ARG);
    ((float *)(gen_frame + 0x114))[8] = *pfVar12;
    ((float *)(gen_frame + 0x114))[9] = pfVar12[1];
    ((float *)(gen_frame + 0x114))[10] = pfVar12[2];
    pfVar12 = (float *)F_00c90310(in_ecx GEN_EDX_ARG);
    fVar20 = (float10)(*(float *)(gen_frame + 0x180));
    ((float *)(gen_frame + 0x114))[0xb] = *pfVar12;
    ((float *)(gen_frame + 0x114))[0xc] = pfVar12[1];
    ((float *)(gen_frame + 0x114))[8] = (float)((float10)((float *)(gen_frame + 0x114))[8] - fVar20);
    ((float *)(gen_frame + 0x114))[0xd] = pfVar12[2];
    ((float *)(gen_frame + 0x114))[9] = (float)((float10)((float *)(gen_frame + 0x114))[9] - fVar20);
    ((float *)(gen_frame + 0x114))[10] = (float)((float10)((float *)(gen_frame + 0x114))[10] - fVar20);
    ((float *)(gen_frame + 0x114))[0xb] = (float)((float10)*pfVar12 + fVar20);
    ((float *)(gen_frame + 0x114))[0xc] = (float)((float10)pfVar12[1] + fVar20);
    ((float *)(gen_frame + 0x114))[0xd] = (float)(fVar20 + (float10)pfVar12[2]);
    bVar8 = F_00c996f0((*(int *)(gen_frame + 0x174)),(*(float * PTR32 *)(gen_frame + 0x184)),((float *)(gen_frame + 0x114)) + 8,pfVar11);
    if (bVar8 != 0) {
      (*(float *)(gen_frame + 0x194)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x194))) | (uint)(*(undefined * PTR32 *)(gen_frame + 0x198)));
    }
    in_ecx = in_ecx + 4;
    pfVar11 = pfVar11 + 1;
    iVar19 = (*(uint *)(gen_frame + 0x188)) - 1;
    (*(uint *)(gen_frame + 0x188)) = iVar19;
    (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x198))) << 1 | (uint)((int)(*(undefined * PTR32 *)(gen_frame + 0x198)) < 0));
  } while (iVar19 != 0);
  switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x194))))) {
  case 0: ;
    (*(int *)(gen_frame + 0x168)) = -1;
    break;
  case 1: ;
    (*(float *)(gen_frame + 0x16c)) = -NAN;
    goto LAB_00552d89;
  case 2: ;
    (*(int *)(gen_frame + 0x168)) = 1;
    (*(float *)(gen_frame + 0x16c)) = -NAN;
    break;
  case 3: ;
    if ((float10)((float *)(gen_frame + 0x114))[1] < (float10)((float *)(gen_frame + 0x114))[0]) {
      (*(int *)(gen_frame + 0x168)) = 1;
      (*(float *)(gen_frame + 0x16c)) = 0.0;
      break;
    }
    (*(float *)(gen_frame + 0x16c)) = 1.4013e-45;
LAB_00552d89: ;
    (*(int *)(gen_frame + 0x168)) = 0;
  }
  pfVar11 = *(float * PTR32 *)((*(uint *)&gen_args[3]) + 0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x0;
  ((float *)(gen_frame + 0x114))[2] = 0.0;
  ((float *)(gen_frame + 0x114))[3] = 0.0;
  ((float *)(gen_frame + 0x114))[4] = 0.0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(float *)(gen_frame + 0x9c)) = 0.0;
  (*(float *)(gen_frame + 0xa0)) = 0.0;
  (*(float *)(gen_frame + 0xa4)) = 0.0;
  (*(float *)(gen_frame + 0xa8)) = 0.0;
  (*(float *)(gen_frame + 0xac)) = 0.0;
  (*(float *)(gen_frame + 0xb0)) = 0.0;
  (*(float *)(gen_frame + 0xb4)) = 0.0;
  (*(float *)(gen_frame + 0xb8)) = 0.0;
  (*(float *)(gen_frame + 0xbc)) = 0.0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(float *)(gen_frame + 0x194)) = *pfVar11;
  uVar18 = 0;
  do {
    iVar19 = (&(*(int *)(gen_frame + 0x168)))[uVar18];
    if (iVar19 == -1) break;
    if (((float10)((float *)(gen_frame + 0x114))[(int)(iVar19)] - (float10)(*(float *)(gen_frame + 0x180)) < ((float10)GEN_TOD(**(float * PTR32 *)(uVar9 + 0xc)))) &&
       (bVar8 = F_00551f10(((undefined * PTR32 * PTR32 *)(gen_frame + 0x58)) + iVar19 * 4 GEN_EDX_ARG,(*(uint *)&gen_args[1]),(uint)&(*(undefined4 *)(gen_frame + 0x90)),uVar9,(*(uint *)&gen_args[4])),
       bVar8 != 0)) {
      if ((*(byte *)uVar9 & 1) == 0) {
        (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(**(float * PTR32 *)(uVar9 + 0xc));
        if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)(*(float *)(gen_frame + 0x194))) {
LAB_00552f9b: ;
          (*(float *)(gen_frame + 0x194)) = gen_bits2f((*(uint *)&gen_args[3]));
          F_00550bc0((undefined *)(*(uint *)&gen_args[2]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)));
          (*(byte *)(gen_frame + 0x18f)) = 1;
        }
      }
      else if (((float10)GEN_TOD(**(float * PTR32 *)(uVar9 + 0xc))) <=
               (float10)(*(float *)(gen_frame + 0x194)) + (float10)*(double *)&REFG(undefined, 0x109ce00)) {
        (*(float *)(gen_frame + 0x84)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0xa8)));
        (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0xac)));
        (*(float *)(gen_frame + 0x8c)) = (float)((float10)(*(float *)(gen_frame + 0xbc)) - (float10)(*(float *)(gen_frame + 0xb0)));
        (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0xa8)) - (float10)(*(float *)(gen_frame + 0x9c)));
        (*(float *)(gen_frame + 0x7c)) = (float)((float10)(*(float *)(gen_frame + 0xac)) - (float10)(*(float *)(gen_frame + 0xa0)));
        (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0xa4)));
        F_00550080(((float *)(gen_frame + 0x114)) + 2,(uint)&(*(float *)(gen_frame + 0x78)),(uint)&(*(float *)(gen_frame + 0x84)));
        F_00553ac0(((float *)(gen_frame + 0x114)) + 2 GEN_EDX_ARG);
        fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x184))[2] * (float10)((float *)(gen_frame + 0x114))[4] +
                        ((float10)((float *)(gen_frame + 0x114))[2] * (float10)*(*(float * PTR32 *)(gen_frame + 0x184)) +
                        (float10)(*(float * PTR32 *)(gen_frame + 0x184))[1] * (float10)((float *)(gen_frame + 0x114))[3]))));
        (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(**(float * PTR32 *)(uVar9 + 0xc));
        if ((!((float10)(*(float *)(gen_frame + 0x194)) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)REFG(double, 0x109cdf8))) ||
           (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198))))) <= (float10)fVar10))) {
          (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          goto LAB_00552f9b;
        }
      }
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 2);
  **(float * PTR32 *)(uVar9 + 0xc) = (*(float *)(gen_frame + 0x194));
  pfVar11 = &(*(float *)(gen_frame + 0x78));
  iVar19 = 1;
  do {
    pfVar11 = pfVar11 - 4;
    F_00c93040(pfVar11 GEN_EDX_ARG);
    iVar19 = iVar19 - 1;
  } while (-1 < iVar19);
  return (*(byte *)(gen_frame + 0x18f));
}

/* ref: FUN_00553020 */
GEN_FRAME byte GEN_THISCALL F_00553020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x553020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xc08)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  iVar3 = 0xff;
  puVar2 = ((undefined4 *)(gen_frame + 0x10));
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  bVar1 = F_00551f10(this GEN_EDX_FWD,param_1,param_2,param_3,(uint)((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00553090 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00553090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  fVar6 = *(float *)((int)this + 100);
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar6) {
    uVar3 = *(undefined4 *)((int)this + 0x58);
    uVar4 = *(undefined4 *)((int)this + 0x5c);
    uVar5 = *(undefined4 *)((int)this + 0x60);
  }
  else {
    iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    uVar3 = *(undefined4 *)(iVar1 + 0x90);
    uVar4 = *(undefined4 *)(iVar1 + 0x94);
    uVar5 = *(undefined4 *)(iVar1 + 0x98);
    fVar6 = REFG(float, 0x109cdcc);
  }
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  *(undefined4 *)(iVar1 + 0x18) = uVar4;
  *(undefined4 *)(iVar1 + 0x1c) = uVar5;
  *(float *)(iVar1 + 0x20) = fVar6;
  F_00c97620(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  bVar2 = F_00c97070(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  if (bVar2 == 0) {
    if (0 < *(int *)((int)this + 0x54)) {
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) - 1;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x54) = 1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return (uint)(gen_imp_SetEvent(*(HANDLE *)((int)this + 0x50)));
}

/* ref: FUN_00553140 */
GEN_FRAME unsigned int GEN_THISCALL F_00553140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 1) == '\0')) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x50));
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x553a60));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x553090));
    F_004a1280((undefined *)(REFG(int, 0x137104c) + 0x11b0) GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0xc)));
  }
  return;
}

/* ref: FUN_005531a0 */
GEN_FRAME unsigned int GEN_THISCALL F_005531a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5531a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 1) == '\0')) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x50));
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x553a60));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x553090));
    F_004a1280((undefined *)(REFG(int, 0x137104c) + 0x11b0) GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0xc)));
  }
  return;
}

/* ref: FUN_00553200 */
GEN_FRAME uint GEN_THISCALL F_00553200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined1 *)this = (undefined1)param_1;
  this_00 = (undefined *)F_00406b90(0x20050,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_005558b0(this_00 GEN_EDX_ARG);
  }
  *(uint *)((int)this + 4) = uVar1;
  F_00c97800(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,uVar1,(uint)(*(char *)this != '\0'));
  puVar2 = (undefined4 *)F_00406b90(0x28,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
    puVar2[2] = ((code *)REFP(0x553a90));
    puVar2[3] = this;
    puVar2[5] = 0;
    puVar2[4] = ((code *)REFP(0x5531a0));
    puVar2[6] = "CollisionUpdate";
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = "CollisionUpdate";
  }
  F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0) GEN_EDX_ARG,0x27,puVar2);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(gen_code32 *)((int)this + 0x30) = ((code *)REFP(0x553a80));
  *(undefined * PTR32 *)((int)this + 0x34) = this;
  *(gen_code32 *)((int)this + 0x38) = ((code *)REFP(0x550fa0));
  *(char * PTR32 *)((int)this + 0x40) = "BGCollisionModule::OnEndOfFrame";
  *(char * PTR32 *)((int)this + 0x4c) = "BGCollisionModule::OnEndOfFrame";
  uVar1 = F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0) GEN_EDX_ARG,0xf,(int)this + 0x28);
  return uVar1;
}

/* ref: FUN_005532e0 */
GEN_FRAME uint GEN_THISCALL F_005532e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5532e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)((int)this + 0x58) = param_1;
  *(int *)((int)this + 0x5c) = (int)param_1 >> 0x1f;
  return param_1;
}

/* ref: FUN_00553310 */
GEN_FRAME uint GEN_THISCALL F_00553310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x60) = *param_2;
  *(undefined4 *)(in_ecx + 100) = param_2[1];
  *(undefined4 *)(in_ecx + 0x68) = param_2[2];
  *(undefined4 *)(in_ecx + 0x6c) = param_2[3];
  return (uint)param_2;
}

/* ref: FUN_00553340 */
GEN_FRAME uint GEN_THISCALL F_00553340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x60);
  param_2[1] = *(undefined4 *)(in_ecx + 100);
  param_2[2] = *(undefined4 *)(in_ecx + 0x68);
  param_2[3] = *(undefined4 *)(in_ecx + 0x6c);
  return (uint)param_2;
}

/* ref: FUN_00553370 */
GEN_FRAME uint GEN_THISCALL F_00553370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00553390 */
GEN_FRAME uint GEN_THISCALL F_00553390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x70);
  param_2[1] = *(undefined4 *)(in_ecx + 0x74);
  param_2[2] = *(undefined4 *)(in_ecx + 0x78);
  return (uint)param_2;
}

/* ref: FUN_005533b0 */
GEN_FRAME uint GEN_THISCALL F_005533b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5533b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x80) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x84) = uVar1;
  return uVar1;
}

/* ref: FUN_005533e0 */
GEN_FRAME uint GEN_THISCALL F_005533e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5533e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x88) = param_2;
  *(undefined4 *)(in_ecx + 0x8c) = 0;
  return param_2;
}

/* ref: FUN_00553400 */
GEN_FRAME unsigned int GEN_THISCALL F_00553400(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x553400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x90) = param_2;
  return;
}

/* ref: FUN_00553430 */
GEN_FRAME unsigned int GEN_THISCALL F_00553430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x98);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00553460 */
GEN_FRAME uint GEN_THISCALL F_00553460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xd8) = *param_2;
  *(undefined4 *)(in_ecx + 0xdc) = param_2[1];
  *(undefined4 *)(in_ecx + 0xe0) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005534a0 */
GEN_FRAME uint GEN_THISCALL F_005534a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5534a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005534f0 */
GEN_FRAME uint GEN_THISCALL F_005534f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5534f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(uint *)((int)this + 8) = (uint)*(ushort *)(*param_1 + 0x2c);
  *(int *)((int)this + 4) = *param_1 + 0x30;
  return (uint)this;
}

/* ref: FUN_00553520 */
GEN_FRAME uint GEN_THISCALL F_00553520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(uint *)((int)this + 8)) {
    return *(int *)((int)this + 4) + param_1 * 0xc;
  }
  return *(int *)this + (param_1 - *(uint *)((int)this + 8)) * 0xc;
}

/* ref: FUN_00553550 */
GEN_FRAME unsigned int GEN_THISCALL F_00553550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  ushort * puVar11;
  float * pfVar12;
  uint uVar13;
  float10 fVar14;
  
  iVar10 = *(int *)this;
  fVar1 = *(float *)(iVar10 + 0x10);
  fVar2 = *(float *)(iVar10 + 0x14);
  fVar3 = *(float *)(iVar10 + 0x18);
  uVar13 = 0;
  puVar11 = ((ushort *)GEN_TOP((iVar10 + ((uint)*(ushort *)(iVar10 + 0x2c) * 3 + 0xc) * 4)));
  fVar4 = *(float *)(iVar10 + 0x1c);
  fVar14 = (float10)REFG(double, 0x109cab0);
  fVar5 = *(float *)(iVar10 + 0x20);
  fVar6 = *(float *)(iVar10 + 0x24);
  if (*(short *)(iVar10 + 0x28) != 0) {
    pfVar12 = (float *)(param_1 + 8);
    do {
      uVar7 = puVar11[1];
      uVar8 = puVar11[2];
      uVar9 = *puVar11;
      uVar13 = uVar13 + 1;
      puVar11 = puVar11 + 3;
      pfVar12[-2] = ((float)GEN_TOF(((float10)uVar9 *
                            (float10)((float)GEN_TOF((((float10)fVar4 - (float10)fVar1) / fVar14))) +
                           (float10)fVar1)));
      pfVar12[-1] = ((float)GEN_TOF(((float10)uVar7 *
                            (float10)((float)GEN_TOF((((float10)fVar5 - (float10)fVar2) / fVar14))) +
                           (float10)fVar2)));
      *pfVar12 = ((float)GEN_TOF(((float10)uVar8 *
                         (float10)((float)GEN_TOF((((float10)fVar6 - (float10)fVar3) / fVar14))) +
                        (float10)fVar3)));
      pfVar12 = pfVar12 + 3;
    } while (uVar13 < *(ushort *)(iVar10 + 0x28));
    return 0;
  }
  return 0;
}

/* ref: FUN_00553640 */
GEN_FRAME byte GEN_THISCALL F_00553640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0x553640u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  byte * pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  if (-1 < param_2) {
    iVar3 = *param_1;
    pbVar1 = ((byte *)GEN_TOP((iVar3 + ((uint)*(ushort *)(iVar3 + 0x28) + param_2 + 8 +
                              (uint)*(ushort *)(iVar3 + 0x2c) * 2) * 6)));
    fVar5 = (float10)param_7;
    *param_3 = (float)(fVar5 * (float10)*param_6);
    param_3[1] = (float)((float10)param_6[1] * fVar5);
    param_3[2] = (float)(fVar5 * (float10)param_6[2]);
    *param_3 = (float)((float10)*param_3 + (float10)*param_5);
    param_3[1] = (float)((float10)param_5[1] + (float10)param_3[1]);
    param_3[2] = (float)((float10)param_5[2] + (float10)param_3[2]);
    uVar4 = (uint)*pbVar1;
    if (uVar4 < (uint)param_4[2]) {
      iVar3 = param_4[1];
    }
    else {
      uVar4 = uVar4 - param_4[2];
      iVar3 = *param_4;
    }
    iVar2 = iVar3 + uVar4 * 0xc;
    param_3[3] = *(float *)(iVar3 + uVar4 * 0xc);
    param_3[4] = *(float *)(iVar2 + 4);
    param_3[5] = *(float *)(iVar2 + 8);
    uVar4 = (uint)pbVar1[1];
    if (uVar4 < (uint)param_4[2]) {
      iVar3 = param_4[1];
    }
    else {
      uVar4 = uVar4 - param_4[2];
      iVar3 = *param_4;
    }
    iVar2 = iVar3 + uVar4 * 0xc;
    param_3[6] = *(float *)(iVar3 + uVar4 * 0xc);
    param_3[7] = *(float *)(iVar2 + 4);
    param_3[8] = *(float *)(iVar2 + 8);
    uVar4 = (uint)pbVar1[2];
    if (uVar4 < (uint)param_4[2]) {
      iVar3 = param_4[1];
    }
    else {
      iVar3 = *param_4;
      uVar4 = uVar4 - param_4[2];
    }
    iVar2 = iVar3 + uVar4 * 0xc;
    param_3[9] = *(float *)(iVar3 + uVar4 * 0xc);
    param_3[10] = *(float *)(iVar2 + 4);
    param_3[0xb] = *(float *)(iVar2 + 8);
    param_3[0xf] = gen_bits2f((uint)CONCAT12(pbVar1[3],*(undefined2 *)(pbVar1 + 4)));
    param_3[0x10] = param_7;
    param_3[0x13] = 1.4013e-45;
    return 1;
  }
  param_3[0x13] = 0.0;
  return 0;
}

/* ref: FUN_00553770 */
GEN_FRAME byte GEN_THISCALL F_00553770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005537e0 */
GEN_FRAME uint GEN_THISCALL F_005537e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5537e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1a0) = param_2;
  return param_2;
}

/* ref: FUN_00553810 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00553810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x553810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return;
}

/* ref: FUN_00553840 */
GEN_NOFRAME uint GEN_THISCALL F_00553840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x553840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return *(uint *)((int)this + 0x20018);
}

/* ref: FUN_00553870 */
GEN_NOFRAME uint GEN_THISCALL F_00553870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x553870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return *(int *)((int)this + 0x20018) + 0x80;
}

/* ref: FUN_005538e0 */
GEN_FRAME uint F_005538e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5538e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_005538f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5538f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x2a)));
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00553900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x553900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x2c))) +
         (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x28)));
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf7 */
GEN_FRAME unsigned int GEN_THISCALL F_00553910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x553910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint local_8;
  
  iVar1 = *(int *)(this + 0xc);
  if (*(short *)(iVar1 + 0x2a) != 0) {
    local_8 = 0;
    if (*(short *)(iVar1 + 0x2c) != 0) {
      pfVar2 = (float *)(iVar1 + 0x30);
      pfVar3 = (float *)(param_2 + 8);
      do {
        local_8 = local_8 + 1;
        pfVar3[-2] = ((float)GEN_TOF((((float10)pfVar2[2] * (float10)param_1[8] +
                             ((float10)pfVar2[1] * (float10)param_1[4] +
                             (float10)*pfVar2 * (float10)*param_1)) + (float10)param_1[0xc])));
        pfVar3[-1] = ((float)GEN_TOF((((float10)pfVar2[2] * (float10)param_1[9] +
                             ((float10)pfVar2[1] * (float10)param_1[5] +
                             (float10)*pfVar2 * (float10)param_1[1])) + (float10)param_1[0xd])));
        *pfVar3 = ((float)GEN_TOF((((float10)param_1[10] * (float10)pfVar2[2] +
                          ((float10)param_1[2] * (float10)*pfVar2 +
                          (float10)pfVar2[1] * (float10)param_1[6])) + (float10)param_1[0xe])));
        pfVar2 = pfVar2 + 3;
        pfVar3 = pfVar3 + 3;
      } while (local_8 < *(ushort *)(iVar1 + 0x2c));
    }
    F_00c8fd40(this GEN_EDX_FWD,(uint)*(ushort *)(iVar1 + 0x2c),param_1,param_2);
  }
  return;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_005539d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5539d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  return iVar1 + (*(ushort *)(iVar1 + 0x28) + 8 + (uint)*(ushort *)(iVar1 + 0x2c) * 2) * 6;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf9 */
GEN_FRAME uint GEN_THISCALL F_005539f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5539f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc);
  *param_2 = *(undefined4 *)(uVar1 + 0x10);
  param_2[1] = *(undefined4 *)(uVar1 + 0x14);
  param_2[2] = *(undefined4 *)(uVar1 + 0x18);
  param_2[3] = *(undefined4 *)(uVar1 + 0x1c);
  param_2[4] = *(undefined4 *)(uVar1 + 0x20);
  param_2[5] = *(undefined4 *)(uVar1 + 0x24);
  return uVar1;
}

/* ref: FUN_00553a40 */
GEN_FRAME uint GEN_THISCALL F_00553a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00553a60 */
GEN_FRAME uint F_00553a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x553a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00553a80 */
GEN_FRAME uint F_00553a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x553a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
  return uVar1;
}

/* ref: FUN_00553a90 */
GEN_FRAME uint F_00553a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x553a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00553ab0 */
GEN_NOFRAME uint GEN_THISCALL F_00553ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x553ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00554520((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00553ac0 */
GEN_FRAME uint GEN_THISCALL F_00553ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x553ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)((int)this + 4);
  fVar2 = (float10)*(float *)this;
  fVar3 = (float10)*(float *)((int)this + 8);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 +
                                                               (fVar2 * fVar2 + fVar1 * fVar1))))))))));
  if ((float10)0 < fVar1) {
    *(float *)this = (float)((float10)*(float *)((int)(uintptr_t)this) * fVar1);
    *(float *)((int)this + 4) = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) * fVar1)));
    *(float *)((int)this + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)((int)this + 8))));
    return (uint)this;
  }
  if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
    REFG(float, 0x1379700) = 0;
    REFG(float, 0x1379704) = REFG(float, 0x1087f04);
    REFG(float, 0x1379708) = 0;
  }
  *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x1379700));
  *(undefined4 *)((int)this + 4) = GEN_FLT_TO(*(undefined4 *)((int)this + 4), REFG(float, 0x1379704));
  *(undefined4 *)((int)this + 8) = GEN_FLT_TO(*(undefined4 *)((int)this + 8), REFG(float, 0x1379708));
  return (uint)this;
}

/* ref: FUN_00553ba0 */
GEN_FRAME byte F_00553ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x553ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  uVar12 = (*(uint *)&gen_args[3]);
  uVar11 = (*(uint *)&gen_args[2]);
  uVar10 = (*(uint *)&gen_args[0]);
  fVar5 = *(float *)(*(uint *)&gen_args[3]);
  fVar1 = *(float *)((*(uint *)&gen_args[0]) + 0xc);
  fVar2 = *(float *)((*(uint *)&gen_args[2]) + 8);
  fVar3 = *(float *)(*(uint *)&gen_args[2]);
  (*(float *)(gen_frame + 0x4)) = fVar3;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x2c)) = fVar3;
  (*(float *)(gen_frame + 0xc)) = fVar3;
  if ((float10)fVar5 < (float10)fVar3) {
    (*(float *)(gen_frame + 0x4)) = fVar5;
  }
  fVar6 = *(float *)((*(uint *)&gen_args[3]) + 8);
  if ((float10)fVar6 < (float10)fVar2) {
    (*(float *)(gen_frame + 0x8)) = fVar6;
  }
  if ((float10)fVar3 < (float10)fVar5) {
    (*(float *)(gen_frame + 0xc)) = fVar5;
  }
  if ((float10)fVar2 < (float10)fVar6) {
    (*(float *)(gen_frame + 0x10)) = fVar6;
  }
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(*(*(float * PTR32 *)&gen_args[4]));
  if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)(*(float *)(gen_frame + 0x4))) {
    (*(float *)(gen_frame + 0x4)) = gen_bits2f((*(uint *)&gen_args[3]));
  }
  fVar2 = (*(float * PTR32 *)&gen_args[4])[2];
  (*(float *)(gen_frame + 0x48)) = fVar2;
  if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x8))) {
    (*(float *)(gen_frame + 0x8)) = fVar2;
  }
  if ((float10)(*(float *)(gen_frame + 0xc)) < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))) {
    (*(float *)(gen_frame + 0xc)) = gen_bits2f((*(uint *)&gen_args[3]));
  }
  if ((float10)(*(float *)(gen_frame + 0x10)) < (float10)fVar2) {
    (*(float *)(gen_frame + 0x10)) = fVar2;
  }
  fVar15 = (float10)fVar1;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - fVar15);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x8)) - fVar15);
  (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0xc)) + fVar15);
  (*(float *)(gen_frame + 0x10)) = (float)(fVar15 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar5);
  bVar14 = F_005507d0((*(uint *)&gen_args[0]),(uint)(*(float * PTR32 *)&gen_args[1]),(uint)&(*(float *)(gen_frame + 0x4)));
  if (bVar14 == 0) {
    return 0;
  }
  fVar15 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))));
  (*(float *)(gen_frame + 0x14)) = (float)(fVar15 - (float10)(*(float *)(gen_frame + 0x2c)));
  fVar2 = *(float *)(uVar12 + 4);
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(uVar11 + 4))));
  (*(uint *)&gen_args[2]) = *(uint *)(uVar12 + 8);
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) - (float10)*(float *)(uVar11 + 8))));
  (*(float *)(gen_frame + 0x8)) = (float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) - fVar15);
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x48)) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))));
  F_00550080((*(float * PTR32 *)&gen_args[5]),(uint)&(*(float *)(gen_frame + 0x14)),(uint)&(*(float *)(gen_frame + 0x8)));
  F_00553ac0((*(float * PTR32 *)&gen_args[5]) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x30)) = (*(float * PTR32 *)&gen_args[1])[1];
  (*(float *)(gen_frame + 0x3c)) = (*(float * PTR32 *)&gen_args[5])[1];
  (*(float *)(gen_frame + 0x34)) = *(*(float * PTR32 *)&gen_args[1]);
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(*(*(float * PTR32 *)&gen_args[5]));
  (*(float *)(gen_frame + 0x2c)) = (*(float * PTR32 *)&gen_args[1])[2];
  (*(float *)(gen_frame + 0x38)) = (*(float * PTR32 *)&gen_args[5])[2];
  fVar15 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[5])[1]));
  fVar16 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[5])[2]));
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(((float)GEN_TOF((fVar16 * ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[2])) +
                                     (fVar15 * ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[1])) +
                                     ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) * ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))))))));
  if (!(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)0)) {
    return 0;
  }
  fVar17 = (float10)fVar1;
  fVar2 = (float)(fVar17 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = (float)(fVar15 * fVar17);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar5 = (float)(fVar16 * fVar17);
  (*(float *)(gen_frame + 0x28)) = fVar5;
  (*(float *)(gen_frame + 0x48)) = *(float *)(*(uint *)&gen_args[0]);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)*(float *)(*(uint *)&gen_args[0]) - (float10)fVar2);
  (*(float *)(gen_frame + 0x44)) = *(float *)((*(uint *)&gen_args[0]) + 4);
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)((*(uint *)&gen_args[0]) + 4) - (float10)fVar3)));
  (*(float *)(gen_frame + 0x40)) = *(float *)((*(uint *)&gen_args[0]) + 8);
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(float *)((*(uint *)&gen_args[0]) + 8) - (float10)fVar5)));
  bVar14 = F_00550990(&(*(float *)(gen_frame + 0x14)),(uint)(*(float * PTR32 *)&gen_args[1]),uVar11,uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) &&
     ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[2]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(gen_bits2f((*(uint *)&gen_args[2])) < *(float *)&REFG(undefined, 0x1088114)))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
    return 1;
  }
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x48)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x40)) + (float10)(*(float *)(gen_frame + 0x28)));
  fVar15 = (float10)REFG(double, 0x1094890);
  (*(float *)(gen_frame + 0x8)) = (float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) * fVar15);
  (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) * fVar15);
  (*(float *)(gen_frame + 0x10)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x38)));
  bVar14 = F_00550990(&(*(float *)(gen_frame + 0x14)),(uint)&(*(float *)(gen_frame + 0x8)),uVar11,uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),&(*(uint *)&gen_args[2]));
  if (((bVar14 != 0) && (0.0 <= gen_bits2f((*(uint *)&gen_args[2])))) &&
     (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)fVar1 + (float10)fVar1)) {
    *(*(float * PTR32 *)&gen_args[6]) = 0.0;
    return 1;
  }
  fVar2 = *(float *)uVar11;
  fVar15 = (float10)(*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - fVar15);
  fVar16 = (float10)*(float *)((*(uint *)&gen_args[0]) + 4);
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar11 + 4) - fVar16)));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar17 = (float10)*(float *)((*(uint *)&gen_args[0]) + 8);
  fVar5 = ((float)GEN_TOF(((float10)*(float *)(uVar11 + 8) - fVar17)));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = *(float *)uVar12;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar6 - fVar15);
  fVar7 = ((float)GEN_TOF(((float10)*(float *)(uVar12 + 4) - fVar16)));
  (*(float *)(gen_frame + 0x24)) = fVar7;
  fVar8 = ((float)GEN_TOF(((float10)*(float *)(uVar12 + 8) - fVar17)));
  (*(float *)(gen_frame + 0x28)) = fVar8;
  fVar9 = *(*(float * PTR32 *)&gen_args[4]);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar9 - fVar15);
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - fVar16)));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[2])) - fVar17)));
  fVar18 = (float10)(float)((float10)fVar2 - fVar15);
  fVar19 = (float10)fVar3;
  fVar20 = (float10)fVar5;
  fVar2 = ((float)GEN_TOF((fVar20 * fVar20 + (fVar19 * fVar19 + fVar18 * fVar18))));
  fVar18 = (float10)(float)((float10)fVar6 - fVar15);
  fVar19 = (float10)fVar7;
  fVar20 = (float10)fVar8;
  fVar3 = ((float)GEN_TOF((fVar20 * fVar20 + (fVar19 * fVar19 + fVar18 * fVar18))));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar15 = (float10)(float)((float10)fVar9 - fVar15);
  fVar16 = (float10)((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - fVar16)));
  fVar17 = (float10)((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[2])) - fVar17)));
  fVar5 = ((float)GEN_TOF((fVar17 * fVar17 + (fVar16 * fVar16 + fVar15 * fVar15))));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar2);
  if ((float10)fVar2 < (float10)fVar3) {
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar3);
  }
  if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)fVar5) {
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar5);
  }
  fVar15 = (float10)fVar1;
  (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 0;
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(fVar15 + (float10)((float)GEN_TOF(SQRT(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))))))));
  fVar16 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))));
  (*(float *)(gen_frame + 0x20)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x34)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar16);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x2c)));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x48)) + (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x34))))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x44)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x30)) * fVar16))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) + (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x2c))))));
  (*(float *)(gen_frame + 0x48)) = (float)(fVar15 * fVar15);
  bVar14 = F_00c9abd0(uVar10,uVar11,uVar12,(float)(fVar15 * fVar15));
  if (((bVar14 != 0) || (bVar14 = F_00c9abd0(uVar10,uVar12,(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x48))), bVar14 != 0)) ||
     (bVar14 = F_00c9abd0(uVar10,(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x48))), bVar14 != 0)) {
    *(*(float * PTR32 *)&gen_args[6]) = 0.0;
    return 1;
  }
  bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),uVar11,uVar12,(*(float *)(gen_frame + 0x48)),(*(float * PTR32 *)&gen_args[6]));
  if (bVar14 == 0) {
    bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x48)),(*(float * PTR32 *)&gen_args[6]));
    if (bVar14 == 0) {
      bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),(uint)(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x48)),(*(float * PTR32 *)&gen_args[6]));
      if (bVar14 == 0) {
        *(*(float * PTR32 *)&gen_args[6]) = GEN_FLT_TO(*(*(float * PTR32 *)&gen_args[6]), REFG(float, 0x1090998));
      }
      else {
        (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1;
        *(*(float * PTR32 *)&gen_args[6]) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))) * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))))));
      }
      goto LAB_0055410a;
    }
  }
  else {
    bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x48)),&(*(uint *)&gen_args[2]));
    if ((bVar14 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
      *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
    }
  }
  bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),(uint)(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x48)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1;
  *(*(float * PTR32 *)&gen_args[6]) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))) * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))))));
LAB_0055410a: ;
  fVar1 = *(float *)(uVar11 + 4);
  uVar4 = *(undefined4 *)(uVar11 + 8);
  (*(float *)(gen_frame + 0x4)) = *(float *)uVar11;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar4);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x48));
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x4)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  fVar1 = *(float *)(uVar12 + 4);
  uVar4 = *(undefined4 *)(uVar12 + 8);
  (*(float *)(gen_frame + 0x4)) = *(float *)uVar12;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar4);
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x4)),&(*(uint *)&gen_args[2]));
  pfVar13 = (*(float * PTR32 *)&gen_args[6]);
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  fVar1 = (*(float * PTR32 *)&gen_args[4])[1];
  fVar2 = (*(float * PTR32 *)&gen_args[4])[2];
  (*(float *)(gen_frame + 0x4)) = *(*(float * PTR32 *)&gen_args[4]);
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = fVar2;
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x4)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)*pfVar13)) {
    *pfVar13 = gen_bits2f((*(uint *)&gen_args[2]));
  }
  return (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3));
}

/* ref: FUN_00554230 */
GEN_FRAME uint GEN_THISCALL F_00554230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x554230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_005542b0 */
GEN_NOFRAME uint GEN_THISCALL F_005542b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5542b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005542c0((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005542c0 */
GEN_FRAME uint GEN_THISCALL F_005542c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5542c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolderBase_InterfaceHolder_VNodeInterface_Mesh_RigidBody_BGCollision::vf0 */
GEN_FRAME uint GEN_THISCALL F_005542f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5542f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00554320 */
GEN_NOFRAME uint GEN_THISCALL F_00554320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x554320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return *(uint *)((int)this + 0x20018);
}

/* ref: FUN_00554350 */
GEN_NOFRAME uint GEN_THISCALL F_00554350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x554350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return *(int *)((int)this + 0x20018) + 0x80;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00554440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x554440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00554450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x554450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00554460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x554460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf6 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00554470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x554470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00554480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_00554490 */
GEN_NOFRAME uint GEN_THISCALL F_00554490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x554490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005544d0((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005544a0 */
GEN_NOFRAME uint GEN_THISCALL F_005544a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5544a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005544d0((undefined *)((int)this - 8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_005544d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5544d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00554500 */
GEN_FRAME uint GEN_THISCALL F_00554500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x554500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00554520 */
GEN_FRAME uint GEN_THISCALL F_00554520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x554520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c93040(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00554550 */
GEN_FRAME uint GEN_THISCALL F_00554550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a60));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00554570 */
GEN_FRAME uint GEN_THISCALL F_00554570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a90));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00554590 */
GEN_FRAME uint GEN_THISCALL F_00554590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a80));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf0 */
GEN_FRAME uint GEN_THISCALL F_005545d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5545d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c93040(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00554600 */
GEN_NOFRAME uint GEN_THISCALL F_00554600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x554600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005545d0((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00554610 */
GEN_FRAME uint GEN_THISCALL F_00554610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x554610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf10 */
GEN_FRAME uint GEN_THISCALL F_00554640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x554640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0xc);
  if (*(short *)(uVar2 + 0x2a) != 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD,this);
  }
  iVar1 = *(int *)(this + 0xc);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    (*(int *)(gen_frame + 0x18)) = *(int *)(iVar1 + 8) + iVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 8);
    uVar2 = F_00554640((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  }
  iVar1 = *(int *)(this + 0xc);
  if (0 < *(int *)(iVar1 + 8)) {
    (*(int *)(gen_frame + 0x18)) = *(int *)(iVar1 + 0xc) + iVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 8);
    uVar2 = F_00554640((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  }
  F_00c93040(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005546d0 */
GEN_FRAME uint GEN_THISCALL F_005546d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5546d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    param_1[3] = *(undefined4 *)((int)this + 8);
    param_1[2] = *(undefined4 *)((int)this + 4);
  }
  return (uint)param_1;
}

/* ref: FUN_00554700 */
GEN_FRAME unsigned int GEN_THISCALL F_00554700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  ushort uVar6;
  undefined4 uVar7;
  float fVar8;
  float * pfVar9;
  byte bVar10;
  undefined4 * puVar11;
  byte * pbVar12;
  byte * pbVar13;
  uint uVar14;
  byte * pbVar15;
  float * pfVar16;
  int iVar17;
  uint uVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0xd28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd2c);
  (*(float * PTR32 *)(gen_frame + 0xc4)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0xdc)) = this;
  (*(byte * PTR32 *)(gen_frame + 0x10c)) = param_1;
  (*(byte * PTR32 *)(gen_frame + 0xc8)) = param_1;
  iVar17 = 0xff;
  puVar11 = ((undefined4 *)(gen_frame + 0x130));
  do {
    puVar11[-2] = 0;
    puVar11[-1] = 0;
    *puVar11 = 0;
    puVar11 = puVar11 + 3;
    iVar17 = iVar17 - 1;
  } while (-1 < iVar17);
  uVar18 = (uint)*(ushort *)(param_1 + 0x2c);
  (*(byte * PTR32 *)(gen_frame + 0x118)) = param_1 + (*(ushort *)(param_1 + 0x28) + 8 + uVar18 * 2) * 6;
  (*(byte * PTR32 *)(gen_frame + 0xe0)) = ((byte *)(gen_frame + 0x128));
  (*(byte * PTR32 *)(gen_frame + 0x100)) = (byte *)0xffffffff;
  (*(uint *)(gen_frame + 0xe8)) = uVar18;
  (*(byte * PTR32 *)(gen_frame + 0xe4)) = param_1 + 0x30;
  F_00553550(&(*(byte * PTR32 *)(gen_frame + 0xc8)) GEN_EDX_FWD,((byte *)(gen_frame + 0x128)));
  uVar1 = *(undefined4 *)((int)this + 0x60);
  uVar7 = *(undefined4 *)((int)this + 0x58);
  uVar2 = *(undefined4 *)((int)this + 100);
  uVar3 = *(undefined4 *)((int)this + 0x68);
  uVar4 = *(undefined4 *)((int)this + 0x6c);
  (*(undefined4 *)(gen_frame + 0x78)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x94)) = uVar1;
  (*(float *)(gen_frame + 0xec)) = *(float *)((int)this + 0x70);
  (*(float *)(gen_frame + 0xf0)) = *(float *)((int)this + 0x74);
  (*(float *)(gen_frame + 0xf4)) = *(float *)((int)this + 0x78);
  (*(float *)(gen_frame + 0xcc)) = 0.0;
  (*(float *)(gen_frame + 0xd0)) = 0.0;
  (*(float *)(gen_frame + 0xd4)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x7c)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x80)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x84)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x98)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x9c)) = uVar3;
  (*(float *)(gen_frame + 0x110)) = REFG(float, 0x1090998);
  (*(byte * PTR32 *)(gen_frame + 0x108)) = (byte *)0x0;
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 0: ;
    (*(byte * PTR32 *)(gen_frame + 0x10c)) = (byte *)0x0;
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x124)) = (*(byte * PTR32 *)(gen_frame + 0x118)) + 1;
      do {
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[1];
        if (uVar14 < uVar18) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar15 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = pbVar15;
        uVar14 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x124));
        if (uVar14 < uVar18) {
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar13 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[-1];
        if (uVar14 < uVar18) {
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar12 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        bVar10 = F_00c9bf20(&(*(undefined4 *)(gen_frame + 0x94)),(uint)&(*(float *)(gen_frame + 0xec)),(uint)pbVar12,(uint)pbVar13,(uint)pbVar15,
                              &(*(float *)(gen_frame + 0xcc)),&(*(float *)(gen_frame + 0x120)));
        if (((bVar10 != 0) && ((float10)(*(float *)(gen_frame + 0x120)) <= (float10)(*(float *)(gen_frame + 0x110)))) &&
           ((!GEN_ISNAN((*(float *)(gen_frame + 0x120))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !((*(float *)(gen_frame + 0x120)) < *(float *)&REFG(undefined, 0x1088114)))) {
          (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x10c));
          (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x120));
        }
        (*(byte * PTR32 *)(gen_frame + 0x124)) = (*(byte * PTR32 *)(gen_frame + 0x124)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x10c)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x10c)) = pbVar15;
      } while (pbVar15 < (byte *)(uint)*(ushort *)(param_1 + 0x2a));
    }
    break;
  case 1: ;
    (*(byte * PTR32 *)(gen_frame + 0x10c)) = (byte *)0x0;
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x124)) = (*(byte * PTR32 *)(gen_frame + 0x118)) + 1;
      do {
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[1];
        if (uVar14 < uVar18) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar15 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = pbVar15;
        uVar14 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x124));
        if (uVar14 < uVar18) {
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar13 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[-1];
        if (uVar14 < uVar18) {
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar12 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        bVar10 = F_00553ba0((uint)&(*(undefined4 *)(gen_frame + 0x78)),&(*(float *)(gen_frame + 0xec)),(uint)pbVar12,(uint)pbVar13,pbVar15,
                              &(*(float *)(gen_frame + 0xcc)),&(*(float *)(gen_frame + 0x120)));
        if (bVar10 != 0) {
          if (((float10)(*(float *)(gen_frame + 0x120)) <= (float10)REFG(double, 0x1091858) + (float10)(*(float *)(gen_frame + 0x110))) &&
             (*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x120)))) {
            pbVar15 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xd4)) * (float10)(*(float *)(gen_frame + 0xf4)) +
                                     ((float10)(*(float *)(gen_frame + 0xd0)) * (float10)(*(float *)(gen_frame + 0xf0)) +
                                     (float10)(*(float *)(gen_frame + 0xcc)) * (float10)(*(float *)(gen_frame + 0xec)))))))));
            (*(byte * PTR32 *)(gen_frame + 0x118)) = pbVar15;
            if ((!((float10)(*(float *)(gen_frame + 0x110)) - (float10)(*(float *)(gen_frame + 0x120)) < (float10)*(double *)&REFG(undefined, 0x109cd58))) ||
               (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x108))))) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar15)))))) {
              (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x120));
              (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x10c));
              (*(byte * PTR32 *)(gen_frame + 0x108)) = pbVar15;
            }
          }
        }
        (*(byte * PTR32 *)(gen_frame + 0x124)) = (*(byte * PTR32 *)(gen_frame + 0x124)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x10c)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x10c)) = pbVar15;
      } while (pbVar15 < (byte *)(uint)*(ushort *)(param_1 + 0x2a));
    }
    break;
  case 2: ;
    pbVar15 = *(byte * PTR32 *)((int)this + 0x90);
    (*(byte * PTR32 *)(gen_frame + 0x11c)) = (byte *)((int)this + 0x98);
    (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar15;
    (*(byte * PTR32 *)(gen_frame + 0x104)) = (byte *)0x0;
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x118)) = (*(byte * PTR32 *)(gen_frame + 0x118)) + 2;
      do {
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x118))[-2];
        if (uVar14 < uVar18) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar15 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x118))[-1];
        (*(byte * PTR32 *)(gen_frame + 0x108)) = pbVar15;
        if (uVar14 < uVar18) {
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar13 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        (*(byte * PTR32 *)(gen_frame + 0x124)) = pbVar13;
        uVar14 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x118));
        if (uVar14 < uVar18) {
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar12 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        bVar10 = F_00c9bf20(&(*(undefined4 *)(gen_frame + 0x94)),(uint)&(*(float *)(gen_frame + 0xec)),(uint)pbVar15,(uint)pbVar13,(uint)pbVar12,
                              &(*(float *)(gen_frame + 0xcc)),&(*(float *)(gen_frame + 0x120)));
        if ((((bVar10 != 0) && ((float10)(*(float *)(gen_frame + 0x120)) <= (float10)(*(float *)(gen_frame + 0x110)))) &&
            ((!GEN_ISNAN((*(float *)(gen_frame + 0x120))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
             !((*(float *)(gen_frame + 0x120)) < *(float *)&REFG(undefined, 0x1088114)))) &&
           (fVar19 = F_00551030(pbVar12,(*(byte * PTR32 *)(gen_frame + 0x124)),(*(byte * PTR32 *)(gen_frame + 0x108)),(uint)&(*(byte * PTR32 *)(gen_frame + 0x11c))),
           fVar19 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x114))))))) {
          (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x104));
          (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x120));
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x10c)) + 0x2a);
        (*(byte * PTR32 *)(gen_frame + 0x118)) = (*(byte * PTR32 *)(gen_frame + 0x118)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x104)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x104)) = pbVar15;
      } while (pbVar15 < (byte *)(uint)uVar6);
    }
    break;
  case 3: ;
    (*(float *)(gen_frame + 0xac)) = 0.0;
    (*(float *)(gen_frame + 0xb0)) = 0.0;
    (*(float *)(gen_frame + 0xb4)) = 0.0;
    fVar5 = *(float *)((int)this + 0x90);
    (*(float *)(gen_frame + 0xfc)) = gen_bits2f((int)this + 0x98);
    (*(float *)(gen_frame + 0xf8)) = fVar5;
    (*(byte * PTR32 *)(gen_frame + 0x114)) = (byte *)0x0;
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x118)) + 2;
      do {
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-2];
        if (uVar14 < uVar18) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar15 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-1];
        (*(byte * PTR32 *)(gen_frame + 0x124)) = pbVar15;
        if (uVar14 < uVar18) {
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar13 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        (*(byte * PTR32 *)(gen_frame + 0x104)) = pbVar13;
        uVar14 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x11c));
        if (uVar14 < uVar18) {
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
        }
        else {
          pbVar12 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
        }
        bVar10 = F_00553ba0((uint)&(*(undefined4 *)(gen_frame + 0x78)),&(*(float *)(gen_frame + 0xec)),(uint)pbVar15,(uint)pbVar13,pbVar12,
                              &(*(float *)(gen_frame + 0xac)),&(*(float *)(gen_frame + 0x120)));
        if (bVar10 != 0) {
          if (((float10)(*(float *)(gen_frame + 0x120)) <= (float10)REFG(double, 0x1091858) + (float10)(*(float *)(gen_frame + 0x110))) &&
             (*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x120)))) {
            pbVar15 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb4)) * (float10)(*(float *)(gen_frame + 0xf4)) +
                                     ((float10)(*(float *)(gen_frame + 0xb0)) * (float10)(*(float *)(gen_frame + 0xf0)) +
                                     (float10)(*(float *)(gen_frame + 0xac)) * (float10)(*(float *)(gen_frame + 0xec)))))))));
            (*(byte * PTR32 *)(gen_frame + 0x118)) = pbVar15;
            if (((!((float10)(*(float *)(gen_frame + 0x110)) - (float10)(*(float *)(gen_frame + 0x120)) < (float10)*(double *)&REFG(undefined, 0x109cd58))) ||
                (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x108))))) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar15)))))) &&
               (fVar19 = F_00551030(pbVar12,(*(byte * PTR32 *)(gen_frame + 0x104)),(*(byte * PTR32 *)(gen_frame + 0x124)),(uint)&(*(float *)(gen_frame + 0xfc))),
               fVar19 <= (float10)(*(float *)(gen_frame + 0xf8)))) {
              (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x120));
              (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x114));
              (*(byte * PTR32 *)(gen_frame + 0x108)) = (*(byte * PTR32 *)(gen_frame + 0x118));
            }
          }
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x10c)) + 0x2a);
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x11c)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x114)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar15;
      } while (pbVar15 < (byte *)(uint)uVar6);
    }
    break;
  case 4: ;
    (*(float *)(gen_frame + 0xf8)) = *(float *)((int)this + 0x80);
    (*(float *)(gen_frame + 0xfc)) = *(float *)((int)this + 0x84);
    (*(byte * PTR32 *)(gen_frame + 0x11c)) = (byte *)0x0;
    if (*(short *)(param_1 + 0x2a) != 0) {
      pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x118)) + 4;
      do {
        if (gen_bits2f((uint)CONCAT12(pbVar15[-1],*(undefined2 *)pbVar15) &
                       (uint)gen_fl2bits((*(float *)(gen_frame + 0xf8)))) == (*(float *)(gen_frame + 0xfc))) {
          uVar14 = (uint)pbVar15[-2];
          if (uVar14 < uVar18) {
            (*(byte * PTR32 *)(gen_frame + 0x114)) = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            (*(byte * PTR32 *)(gen_frame + 0x114)) = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)pbVar15[-3];
          if (uVar14 < uVar18) {
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar13 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)pbVar15[-4];
          if (uVar14 < uVar18) {
            pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar12 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          bVar10 = F_00c9bf20(&(*(undefined4 *)(gen_frame + 0x94)),(uint)&(*(float *)(gen_frame + 0xec)),(uint)pbVar12,(uint)pbVar13,
                                (uint)(*(byte * PTR32 *)(gen_frame + 0x114)),&(*(float *)(gen_frame + 0xcc)),&(*(float *)(gen_frame + 0x120)));
          if (((bVar10 != 0) && ((float10)(*(float *)(gen_frame + 0x120)) <= (float10)(*(float *)(gen_frame + 0x110)))) &&
             ((!GEN_ISNAN((*(float *)(gen_frame + 0x120))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
              !((*(float *)(gen_frame + 0x120)) < *(float *)&REFG(undefined, 0x1088114)))) {
            (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x11c));
            (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x120));
          }
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x10c)) + 0x2a);
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x11c)) + 1;
        pbVar15 = pbVar15 + 6;
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = pbVar13;
      } while (pbVar13 < (byte *)(uint)uVar6);
    }
    break;
  case 5: ;
    fVar5 = *(float *)((int)this + 0x80);
    fVar8 = *(float *)((int)this + 0x84);
    (*(float *)(gen_frame + 0x88)) = 0.0;
    (*(float *)(gen_frame + 0x8c)) = 0.0;
    (*(float *)(gen_frame + 0x90)) = 0.0;
    (*(float *)(gen_frame + 0xf8)) = fVar5;
    (*(float *)(gen_frame + 0xfc)) = fVar8;
    (*(byte * PTR32 *)(gen_frame + 0x11c)) = (byte *)0x0;
    if (*(short *)(param_1 + 0x2a) != 0) {
      pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x118)) + 4;
      do {
        if (gen_bits2f((uint)CONCAT12(pbVar15[-1],*(undefined2 *)pbVar15) &
                       (uint)gen_fl2bits((*(float *)(gen_frame + 0xf8)))) == (*(float *)(gen_frame + 0xfc))) {
          uVar14 = (uint)pbVar15[-2];
          if (uVar14 < uVar18) {
            (*(byte * PTR32 *)(gen_frame + 0x114)) = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            (*(byte * PTR32 *)(gen_frame + 0x114)) = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)pbVar15[-3];
          if (uVar14 < uVar18) {
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar13 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)pbVar15[-4];
          if (uVar14 < uVar18) {
            pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar12 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          bVar10 = F_00553ba0((uint)&(*(undefined4 *)(gen_frame + 0x78)),&(*(float *)(gen_frame + 0xec)),(uint)pbVar12,(uint)pbVar13,(*(byte * PTR32 *)(gen_frame + 0x114)),
                                &(*(float *)(gen_frame + 0x88)),&(*(float *)(gen_frame + 0x120)));
          if (bVar10 != 0) {
            if (((float10)(*(float *)(gen_frame + 0x120)) <= (float10)REFG(double, 0x1091858) + (float10)(*(float *)(gen_frame + 0x110))) &&
               (*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x120)))) {
              pbVar13 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x90)) * (float10)(*(float *)(gen_frame + 0xf4)) +
                                       ((float10)(*(float *)(gen_frame + 0x8c)) * (float10)(*(float *)(gen_frame + 0xf0)) +
                                       (float10)(*(float *)(gen_frame + 0x88)) * (float10)(*(float *)(gen_frame + 0xec)))))))));
              (*(byte * PTR32 *)(gen_frame + 0x118)) = pbVar13;
              if ((!((float10)(*(float *)(gen_frame + 0x110)) - (float10)(*(float *)(gen_frame + 0x120)) < (float10)*(double *)&REFG(undefined, 0x109cd58)))
                 || (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x108))))) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar13)))))) {
                (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x120));
                (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x11c));
                (*(byte * PTR32 *)(gen_frame + 0x108)) = pbVar13;
              }
            }
          }
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x10c)) + 0x2a);
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x11c)) + 1;
        pbVar15 = pbVar15 + 6;
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = pbVar13;
      } while (pbVar13 < (byte *)(uint)uVar6);
    }
    break;
  case 6: ;
    fVar8 = *(float *)((int)this + 0x84);
    fVar5 = *(float *)((int)this + 0x90);
    (*(byte * PTR32 *)(gen_frame + 0x108)) = (byte *)((int)this + 0x98);
    (*(float *)(gen_frame + 0xd8)) = fVar5;
    (*(float *)(gen_frame + 0xf8)) = *(float *)((int)this + 0x80);
    (*(float *)(gen_frame + 0xfc)) = fVar8;
    (*(byte * PTR32 *)(gen_frame + 0x104)) = (byte *)0x0;
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x124)) = (*(byte * PTR32 *)(gen_frame + 0x118)) + 4;
      do {
        if (gen_bits2f((uint)CONCAT12((*(byte * PTR32 *)(gen_frame + 0x124))[-1],*(undefined2 *)(*(byte * PTR32 *)(gen_frame + 0x124))) &
                       (uint)gen_fl2bits((*(float *)(gen_frame + 0xf8)))) == (*(float *)(gen_frame + 0xfc))) {
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[-4];
          if (uVar14 < uVar18) {
            pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar15 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar15;
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[-3];
          if (uVar14 < uVar18) {
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar13 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[-2];
          (*(byte * PTR32 *)(gen_frame + 0x11c)) = pbVar13;
          if (uVar14 < uVar18) {
            pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar12 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          bVar10 = F_00c9bf20(&(*(undefined4 *)(gen_frame + 0x94)),(uint)&(*(float *)(gen_frame + 0xec)),(uint)pbVar15,(uint)pbVar13,
                                (uint)pbVar12,&(*(float *)(gen_frame + 0xcc)),&(*(float *)(gen_frame + 0x120)));
          if ((((bVar10 != 0) && ((float10)(*(float *)(gen_frame + 0x120)) <= (float10)(*(float *)(gen_frame + 0x110)))) &&
              ((!GEN_ISNAN((*(float *)(gen_frame + 0x120))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
               !((*(float *)(gen_frame + 0x120)) < *(float *)&REFG(undefined, 0x1088114)))) &&
             (fVar19 = F_00551030(pbVar12,(*(byte * PTR32 *)(gen_frame + 0x11c)),(*(byte * PTR32 *)(gen_frame + 0x114)),(uint)&(*(byte * PTR32 *)(gen_frame + 0x108))),
             fVar19 <= (float10)(*(float *)(gen_frame + 0xd8)))) {
            (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x104));
            (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x120));
          }
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x10c)) + 0x2a);
        (*(byte * PTR32 *)(gen_frame + 0x124)) = (*(byte * PTR32 *)(gen_frame + 0x124)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x104)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x104)) = pbVar15;
      } while (pbVar15 < (byte *)(uint)uVar6);
    }
    break;
  case 7: ;
    fVar5 = *(float *)((int)this + 0x84);
    (*(byte * PTR32 *)(gen_frame + 0x104)) = (byte *)((int)this + 0x98);
    fVar8 = *(float *)((int)this + 0x80);
    (*(float *)(gen_frame + 0xa0)) = 0.0;
    (*(float *)(gen_frame + 0xa4)) = 0.0;
    (*(float *)(gen_frame + 0xa8)) = 0.0;
    (*(float *)(gen_frame + 0xfc)) = *(float *)((int)this + 0x90);
    (*(float *)(gen_frame + 0xd8)) = fVar8;
    (*(float *)(gen_frame + 0xf8)) = fVar5;
    (*(byte * PTR32 *)(gen_frame + 0x114)) = (byte *)0x0;
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x124)) = (*(byte * PTR32 *)(gen_frame + 0x118)) + 4;
      do {
        if (gen_bits2f((uint)CONCAT12((*(byte * PTR32 *)(gen_frame + 0x124))[-1],*(undefined2 *)(*(byte * PTR32 *)(gen_frame + 0x124))) &
                       (uint)gen_fl2bits((*(float *)(gen_frame + 0xd8)))) == (*(float *)(gen_frame + 0xf8))) {
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[-4];
          if (uVar14 < uVar18) {
            pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar15 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          (*(byte * PTR32 *)(gen_frame + 0x11c)) = pbVar15;
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[-3];
          if (uVar14 < uVar18) {
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar13 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x124))[-2];
          if (uVar14 < uVar18) {
            pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xe4)) + uVar14 * 0xc;
          }
          else {
            pbVar12 = ((byte *)(gen_frame + 0x128)) + (uVar14 - uVar18) * 0xc;
          }
          bVar10 = F_00553ba0((uint)&(*(undefined4 *)(gen_frame + 0x78)),&(*(float *)(gen_frame + 0xec)),(uint)pbVar15,(uint)pbVar13,pbVar12,
                                &(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x120)));
          if (bVar10 != 0) {
            if (((float10)(*(float *)(gen_frame + 0x120)) <= (float10)REFG(double, 0x1091858) + (float10)(*(float *)(gen_frame + 0x110))) &&
               (*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x120)))) {
              pbVar15 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xa8)) * (float10)(*(float *)(gen_frame + 0xf4)) +
                                       ((float10)(*(float *)(gen_frame + 0xa4)) * (float10)(*(float *)(gen_frame + 0xf0)) +
                                       (float10)(*(float *)(gen_frame + 0xa0)) * (float10)(*(float *)(gen_frame + 0xec)))))))));
              (*(byte * PTR32 *)(gen_frame + 0x118)) = pbVar15;
              if (((!((float10)(*(float *)(gen_frame + 0x110)) - (float10)(*(float *)(gen_frame + 0x120)) < (float10)*(double *)&REFG(undefined, 0x109cd58)))
                  || (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x108))))) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar15)))))) &&
                 (fVar19 = F_00551030(pbVar12,pbVar13,(*(byte * PTR32 *)(gen_frame + 0x11c)),(uint)&(*(byte * PTR32 *)(gen_frame + 0x104))),
                 fVar19 <= (float10)(*(float *)(gen_frame + 0xfc)))) {
                (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x120));
                (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x114));
                (*(byte * PTR32 *)(gen_frame + 0x108)) = (*(byte * PTR32 *)(gen_frame + 0x118));
              }
            }
          }
        }
        (*(byte * PTR32 *)(gen_frame + 0x124)) = (*(byte * PTR32 *)(gen_frame + 0x124)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x114)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar15;
        this = (*(undefined * PTR32 *)(gen_frame + 0xdc));
      } while (pbVar15 < (byte *)(uint)*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x10c)) + 0x2a));
    }
  }
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0xc4));
  bVar10 = F_00553640(&(*(byte * PTR32 *)(gen_frame + 0xc8)) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x100)),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(byte * PTR32 *)(gen_frame + 0xe0)),&(*(undefined4 *)(gen_frame + 0x78)),&(*(float *)(gen_frame + 0xec)),(*(float *)(gen_frame + 0x110)));
  pfVar9[0x13] = gen_bits2f((uint)bVar10);
  if (gen_bits2f((uint)bVar10) == 0.0) {
    pfVar9[0x14] = 1.4013e-45;
    return (uint)(F_00c47745((*(uint *)(gen_frame + 0xd28)) ^ (uint)(uint)(gen_frame + 0xd2c) GEN_EDX_ARG));
  }
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + 0x98);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)((int)this + 0x9c);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0xa0);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)((int)this + 0xa4);
  (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)((int)this + 0xa8);
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)((int)this + 0xac);
  (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)((int)this + 0xb0);
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)((int)this + 0xb4);
  (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)((int)this + 0xb8);
  (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)((int)this + 0xbc);
  (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)((int)this + 0xc0);
  (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)((int)this + 0xc4);
  (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)((int)this + 200);
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)((int)this + 0xcc);
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)((int)this + 0xd0);
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)((int)this + 0xd4);
  F_00550450(&(*(undefined4 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xb8)),(uint)pfVar9);
  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb8)) - (float10)*(float *)((int)this + 0xd8))));
  (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xbc)) - (float10)*(float *)((int)this + 0xdc))));
  (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xc0)) - (float10)*(float *)((int)this + 0xe0))));
  pfVar16 = (float *)F_00550450(&(*(undefined4 *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),(uint)(pfVar9 + 3));
  pfVar9[3] = *pfVar16;
  pfVar9[4] = pfVar16[1];
  pfVar9[5] = pfVar16[2];
  pfVar16 = (float *)F_00550450(&(*(undefined4 *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),(uint)(pfVar9 + 6));
  pfVar9[6] = *pfVar16;
  pfVar9[7] = pfVar16[1];
  pfVar9[8] = pfVar16[2];
  pfVar16 = (float *)F_00550450(&(*(undefined4 *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),(uint)(pfVar9 + 9));
  pfVar9[9] = *pfVar16;
  pfVar9[10] = pfVar16[1];
  pfVar9[0xb] = pfVar16[2];
  *pfVar9 = (*(float *)(gen_frame + 0xb8));
  pfVar9[1] = (*(float *)(gen_frame + 0xbc));
  pfVar9[2] = (*(float *)(gen_frame + 0xc0));
  fVar5 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x74)) * (float10)(*(float *)(gen_frame + 0x74)) +
                 ((float10)(*(float *)(gen_frame + 0x6c)) * (float10)(*(float *)(gen_frame + 0x6c)) + (float10)(*(float *)(gen_frame + 0x70)) * (float10)(*(float *)(gen_frame + 0x70)))
                 )));
  (*(undefined * PTR32 *)(gen_frame + 0xdc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar5)));
  fVar5 = ((float)GEN_TOF(SQRT((float10)fVar5)));
  (*(undefined * PTR32 *)(gen_frame + 0xdc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar5)));
  pfVar9[0x10] = fVar5;
  pfVar9[0x14] = 1.4013e-45;
  return (uint)(F_00c47745((*(uint *)(gen_frame + 0xd28)) ^ (uint)(uint)(gen_frame + 0xd2c) GEN_EDX_ARG));
}

/* ref: FUN_005558b0 */
GEN_NOFRAME uint GEN_THISCALL F_005558b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5558b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109ccfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109ccec));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109ccd4));
  F_00509590((undefined *)((int)this + 0xc) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_00a4b9f0((undefined *)((int)this + 0x24) GEN_EDX_ARG,(int)this + 0x3c,0x20000,1);
  *(undefined4 *)((int)this + 0x2003c) = 0;
  *(undefined4 *)((int)this + 0x20040) = 0;
  *(undefined4 *)((int)this + 0x20044) = 0;
  *(undefined4 *)((int)this + 0x20048) = 0;
  *(undefined4 *)((int)this + 0x2004c) = 0;
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac);
  *(undefined * PTR32 *)((int)this + 0x1c) = this_00;
  uVar1 = F_00a1abd0(this_00 GEN_EDX_ARG);
  *(uint *)((int)this + 0x20) = uVar1;
  return (uint)this;
}

/* ref: FUN_00555960 */
GEN_FRAME uint GEN_THISCALL F_00555960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = 0;
  F_00c9f100(param_1 GEN_EDX_FWD,(int)this + 0x30);
  return (uint)this;
}

/* ref: FUN_005559e0 */
GEN_FRAME uint GEN_THISCALL F_005559e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5559e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: FUN_00555a00 */
GEN_FRAME uint GEN_THISCALL F_00555a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00555a20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00555a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00555a30 */
GEN_FRAME unsigned int GEN_THISCALL F_00555a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((param_1 != 0) && (REFG(char, 0x1379710) == '\0')) {
    REFG(char, 0x1379710) = '\x01';
  }
  return;
}

/* ref: FUN_00555a50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00555a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00555a60 */
GEN_NOFRAME unsigned int F_00555a60(void)
{
  GEN_ENTER(0x555a60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00555a70 */
GEN_FRAME uint GEN_THISCALL F_00555a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555a70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00555a90 */
GEN_FRAME uint GEN_THISCALL F_00555a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c49908((int)this + 0x14,0x50,param_1);
  return uVar1;
}

/* ref: FUN_00555ab0 */
GEN_FRAME uint GEN_THISCALL F_00555ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555ab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 100) = param_2;
  return param_2;
}

/* ref: FUN_00555ad0 */
GEN_FRAME uint GEN_THISCALL F_00555ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555ad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x68) = param_2;
  return param_2;
}

/* ref: FUN_00555b10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00555b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x555b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x2001c);
  while (iVar1 != 0) {
    F_00a4b9d0(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0x2001c));
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x2001c) + 0x1a0)));
    *(int *)((int)this + 0x2001c) = iVar1;
  }
  *(undefined4 *)((int)this + 0x20018) = 0;
  return;
}

/* ref: FUN_00555b60 */
GEN_NOFRAME uint GEN_THISCALL F_00555b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x555b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00555b80 */
GEN_FRAME unsigned int GEN_THISCALL F_00555b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20044) = *param_1;
  *(undefined4 *)((int)this + 0x20048) = param_1[1];
  *(undefined4 *)((int)this + 0x2004c) = param_1[2];
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00b1af80(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
  }
  F_00555b10((undefined *)((int)this + 0x24) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00555bc0 */
GEN_FRAME unsigned int GEN_THISCALL F_00555bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x555bc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  undefined4 * puVar2;
  
  if (*(int *)(param_2 + 0x4c) != 0) {
    fVar1 = *(float *)(param_2 + 0x40);
    puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x18);
    if ((float10)fVar1 < ((float10)GEN_TOD(gen_bits2f(puVar2[0x10])))) {
      puVar2[3] = *(undefined4 *)(param_2 + 0xc);
      puVar2[4] = *(undefined4 *)(param_2 + 0x10);
      puVar2[5] = *(undefined4 *)(param_2 + 0x14);
      puVar2[6] = *(undefined4 *)(param_2 + 0x18);
      puVar2[7] = *(undefined4 *)(param_2 + 0x1c);
      puVar2[8] = *(undefined4 *)(param_2 + 0x20);
      puVar2[9] = *(undefined4 *)(param_2 + 0x24);
      puVar2[10] = *(undefined4 *)(param_2 + 0x28);
      puVar2[0xb] = *(undefined4 *)(param_2 + 0x2c);
      *puVar2 = *(undefined4 *)param_2;
      puVar2[1] = *(undefined4 *)(param_2 + 4);
      puVar2[2] = *(undefined4 *)(param_2 + 8);
      puVar2[0x10] = (undefined4)gen_fl2bits(fVar1);
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x44))) = *(undefined4 *)(param_2 + 0x74);
      **(undefined1 * PTR32 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}

/* ref: FUN_00555c80 */
GEN_FRAME uint GEN_THISCALL F_00555c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x555c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00555ca0 */
GEN_FRAME byte GEN_THISCALL F_00555ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00555cf0 */
GEN_FRAME uint GEN_THISCALL F_00555cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00555d00 */
GEN_FRAME uint GEN_THISCALL F_00555d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00555d10 */
GEN_FRAME uint GEN_THISCALL F_00555d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00555d20 */
GEN_FRAME uint GEN_THISCALL F_00555d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00555d30 */
GEN_FRAME byte GEN_THISCALL F_00555d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555d30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00555d50 */
GEN_FRAME uint F_00555d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x555d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00555d70 */
GEN_NOFRAME uint GEN_THISCALL F_00555d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00556300((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00555d80 */
GEN_NOFRAME uint GEN_THISCALL F_00555d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00556300((undefined *)((int)this - 8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00555d90 */
GEN_NOFRAME uint GEN_THISCALL F_00555d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00556300((undefined *)((int)this - 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00555da0 */
GEN_FRAME uint GEN_THISCALL F_00555da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  F_00555960(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00555e10 */
GEN_FRAME unsigned int GEN_THISCALL F_00555e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x2001c);
  if (iVar1 != 0) {
    do {
      (*(code *)*param_1)(param_1[1],param_1 + 2,iVar1,0);
      iVar1 = *(int *)(iVar1 + 0x1a0);
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00555e50 */
GEN_FRAME unsigned int GEN_THISCALL F_00555e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x555e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
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
    F_00555960(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(param_1 + 0x74);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 4))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: FUN_00555ee0 */
GEN_FRAME uint GEN_THISCALL F_00555ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    *(int *)(uVar1 + 8) = param_1;
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00555f00 */
GEN_FRAME uint GEN_THISCALL F_00555f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00555f10 */
GEN_FRAME uint GEN_STDCALL F_00555f10(unsigned int gen_a0)
{
  GEN_ENTER(0x555f10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00555f60 */
GEN_FRAME uint GEN_THISCALL F_00555f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x555f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_00555f80 */
GEN_NOFRAME uint GEN_THISCALL F_00555f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x555f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  F_00a1ac10(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x20));
  F_00a4b900((int)this + 0x24 GEN_EDX_ARG);
  uVar1 = F_005095f0((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  return uVar1;
}

/* ref: FUN_00555fe0 */
GEN_FRAME unsigned int GEN_THISCALL F_00555fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x555fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(REFG(int, 0x137104c) + 0x25e0) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    while ((*(int *)(iVar2 + 0x10) != param_1 ||
           (piVar1 = *(int * PTR32 *)(iVar2 + 100), piVar1 == (int *)0x0))) {
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
      }
    }
    *(undefined4 *)(iVar2 + 100) = 0;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,iVar2);
  }
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_00556050 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00556050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar2 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar2;
    *(undefined4 *)(uVar2 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  iVar1 = *(int *)((int)this + 0x20018);
  if (iVar1 == 0) {
    uVar2 = F_00a4b910(this GEN_EDX_ARG,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar2;
    *(undefined4 *)(uVar2 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  F_00554700((undefined *)(iVar1 + 0x80) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20018) + 0x70))),
               *(int *)((int)this + 0x20018));
  *(undefined4 *)((int)this + 0x2001c) = *(undefined4 *)((int)this + 0x20018);
  *(undefined4 *)((int)this + 0x20018) = 0;
  return;
}

/* ref: FUN_005560f0 */
GEN_FRAME uint GEN_THISCALL F_005560f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5560f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x555bc0));
  return (uint)this;
}

/* ref: FUN_00556120 */
GEN_FRAME uint GEN_THISCALL F_00556120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x556120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0x14) = (int)this + 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x555e50));
  return (uint)this;
}

/* ref: FUN_00556150 */
GEN_FRAME unsigned int GEN_THISCALL F_00556150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x556150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00b1af80(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
  }
  iVar1 = *(int *)((int)this + 0x20040);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x8)) = &(*(gen_code32 *)(gen_frame + 0x4));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x555bc0));
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a0)) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x4)))((*(gen_code32 * PTR32 *)(gen_frame + 0x8)),&(*(gen_code32 *)(gen_frame + 0xc)),iVar1,0);
  }
  F_00555b10((undefined *)((int)this + 0x24) GEN_EDX_ARG);
  return;
}

/* ref: FUN_005561e0 */
GEN_FRAME unsigned int GEN_THISCALL F_005561e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5561e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00b1af80(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
  }
  iVar1 = *(int *)((int)this + 0x20040);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x8)) = &(*(gen_code32 *)(gen_frame + 0x4));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x555bc0));
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a0)) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x4)))((*(gen_code32 * PTR32 *)(gen_frame + 0x8)),&(*(gen_code32 *)(gen_frame + 0xc)),iVar1,0);
  }
  F_00555b10((undefined *)((int)this + 0x24) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00556270 */
GEN_FRAME unsigned int GEN_THISCALL F_00556270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x556270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00b1af80(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
  }
  iVar1 = *(int *)((int)this + 0x20040);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = ((undefined1 *)(gen_frame + 0x24));
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x8)) = &(*(gen_code32 *)(gen_frame + 0x4));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x555e50));
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a0)) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x4)))((*(gen_code32 * PTR32 *)(gen_frame + 0x8)),&(*(gen_code32 *)(gen_frame + 0xc)),iVar1,0);
  }
  F_00555b10((undefined *)((int)this + 0x24) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00556300 */
GEN_FRAME uint GEN_THISCALL F_00556300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  F_00a1ac10(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x20));
  F_00a4b900((int)this + 0x24 GEN_EDX_ARG);
  F_005095f0((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556370 */
GEN_FRAME uint GEN_THISCALL F_00556370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return (uint)this;
}

/* ref: FUN_005563c0 */
GEN_FRAME uint GEN_THISCALL F_005563c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5563c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 != 0) {
    if (*(uint *)this == param_1) {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))) = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  return param_1;
}

/* ref: FUN_00556410 */
GEN_FRAME uint GEN_THISCALL F_00556410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x556410u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  for (iVar1 = *in_ecx; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    if (iVar1 == param_3) {
      *param_2 = iVar1;
      return (uint)param_2;
    }
    if (iVar1 == 0) break;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: LinkList_VBGCollisionResourceHandle_Environment_A0x3663ed73_Collision_Component::vf0 */
GEN_FRAME uint GEN_THISCALL F_00556450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109cdc8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005564a0 */
GEN_FRAME uint GEN_THISCALL F_005564a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5564a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x553a90));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(char * PTR32 *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    *(char * PTR32 *)((int)this + 0x24) = param_3;
    return (uint)this;
  }
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  return (uint)this;
}

/* ref: FUN_005564f0 */
GEN_FRAME uint GEN_THISCALL F_005564f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5564f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x553a80));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(char * PTR32 *)((int)this + 0x18) = param_3;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    *(char * PTR32 *)((int)this + 0x24) = param_3;
    return (uint)param_3;
  }
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  return (uint)param_3;
}

/* ref: FUN_00556570 */
GEN_NOFRAME uint GEN_THISCALL F_00556570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x14;
}

/* ref: FUN_00556580 */
GEN_NOFRAME uint GEN_THISCALL F_00556580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x556580u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x5c))))
                    (*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00556590 */
GEN_NOFRAME uint GEN_THISCALL F_00556590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x68);
}

/* ref: FUN_005565a0 */
GEN_NOFRAME uint GEN_THISCALL F_005565a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5565a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00556830((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005565b0 */
GEN_NOFRAME byte GEN_THISCALL F_005565b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5565b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x88)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  return iVar1 == 2;
}

/* ref: FUN_005565d0 */
GEN_NOFRAME uint GEN_THISCALL F_005565d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5565d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x1c)));
}

/* ref: FUN_005565e0 */
GEN_NOFRAME byte GEN_THISCALL F_005565e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5565e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x8c)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  return 7 < iVar1;
}

/* ref: FUN_00556640 */
GEN_FRAME uint GEN_THISCALL F_00556640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x556640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  char * pcVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(char * PTR32 *)(gen_frame + 0x2c)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x30)) = param_2;
  puVar2 = (undefined4 *)F_00406b90(0x6c,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x109cdc8));
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x109cddc));
    puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x109cdd4));
    puVar2[4] = 0;
    puVar2[0x1a] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
  }
  puVar2[3] = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = puVar2;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(undefined4 * PTR32 *)((int)this + 0xc) = puVar2;
  pcVar6 = ((char *)(gen_frame + 0x34));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\\') {
      cVar1 = '/';
    }
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00c49908(puVar2 + 5,0x50,(*(char * PTR32 *)(gen_frame + 0x2c)));
  puVar2[0x19] = (*(int * PTR32 *)(gen_frame + 0x30));
  puVar2[0x1a] = param_3;
  if (this == &REFG(undefined, 0x4)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + 8;
  }
  ((int *)(gen_frame + 0x4))[0] = iVar3;
  ((int *)(gen_frame + 0x4))[2] = param_4;
  (*(undefined4 *)(gen_frame + 0x10)) = param_5;
  ((int *)(gen_frame + 0x4))[1] = 0;
  (*(int *)(gen_frame + 0x14)) = (-(uint)((char)param_6 != '\0') & 0xfffffffd) + 5;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x21)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar4 = F_00513dc0(((char *)(gen_frame + 0x34)),((int *)(gen_frame + 0x4)),0,0);
  puVar2[4] = uVar4;
  piVar5 = (int *)(uVar4 + 0x88);
  iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
  if ((iVar3 == 2) && ((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0)) {
    puVar2[0x19] = 0;
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 4))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,puVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
  return (uint)puVar2;
}

/* ref: FUN_005567b0 */
GEN_FRAME unsigned int GEN_THISCALL F_005567b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5567b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    while (puVar1 != param_1) {
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      puVar1 = (undefined4 *)puVar1[3];
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      F_0050c620(puVar1[4],0,0);
      if (*(undefined4 * PTR32 *)((int)this + 0xc) == puVar1) {
        *(undefined4 *)((int)this + 0xc) = puVar1[3];
      }
      if (puVar1[2] != 0) {
        *(undefined4 *)(puVar1[2] + 0xc) = puVar1[3];
      }
      if (puVar1[3] != 0) {
        *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
      }
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - 1;
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00556830 */
GEN_FRAME uint GEN_THISCALL F_00556830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109cddc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x109cdd4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x109cdc8));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x109bed4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556890 */
GEN_FRAME uint GEN_THISCALL F_00556890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return (uint)this;
}

/* ref: FUN_005568b0 */
GEN_FRAME uint GEN_THISCALL F_005568b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5568b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 6;
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00556970 */
GEN_FRAME uint GEN_THISCALL F_00556970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  *(undefined2 *)(in_ecx + 7) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005569d0 */
GEN_FRAME uint GEN_THISCALL F_005569d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5569d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  
  cVar1 = *(char *)((int)this + 0x1c);
  *(undefined1 *)((int)cVar1 + 0xcU + (int)this) = (undefined1)param_1;
  *(char *)((int)this + 0x1c) = *(char *)((int)this + 0x1c) + '\x01';
  *(undefined1 *)((int)this + 0x1d) = 2;
  return (int)cVar1;
}

/* ref: FUN_005569f0 */
GEN_FRAME uint GEN_THISCALL F_005569f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5569f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)((int)this + 0x1c);
  uVar1 = 0;
  if (0 < iVar2) {
    while (*(char *)((int)this + uVar1 + 0xc) != (char)param_1) {
      uVar1 = uVar1 + 1;
      if ((int)*(char *)((int)this + 0x1c) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != iVar2 - 1U) {
      uVar1 = F_00c46e20(uVar1 + 0xc + (int)this,uVar1 + 0xd + (int)this,(iVar2 - uVar1) - 1);
    }
    *(char *)((int)this + 0x1c) = *(char *)((int)this + 0x1c) - 1;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkArrayData::vf1 */
GEN_NOFRAME unsigned int F_00556a40(void)
{
  GEN_ENTER(0x556a40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Component::GUI2::AtkArrayData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00556a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556a80 */
GEN_FRAME float10 F_00556a80(float gen_a0)
{
  GEN_ENTER(0x556a80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(ABS((float10)param_1)));
}

/* ref: FUN_00556a90 */
GEN_FRAME uint GEN_THISCALL F_00556a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *(undefined2 *)(in_ecx + 7) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00556ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00556ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  uVar1 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x20));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return uVar1;
}

/* ref: FUN_00556af0 */
GEN_FRAME float10 F_00556af0(float gen_a0)
{
  GEN_ENTER(0x556af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar2;
  
  dVar2 = (GEN_X87MATH(((double)param_1),0xe));
  return (float10)(float)dVar2;
}

/* ref: FUN_00556b10 */
GEN_FRAME float10 F_00556b10(float gen_a0)
{
  GEN_ENTER(0x556b10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(ABS((float10)param_1)));
}

/* ref: FUN_00556b20 */
GEN_NOFRAME uint GEN_THISCALL F_00556b20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar4 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
  pvVar3 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar4);
  *(undefined * PTR32 *)((int)this + 0x20) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*(int *)((int)this + 4) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::NumberArrayData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00556b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  if (*(int *)(this + 0x20) != 0) {
    F_00406b30(*(int *)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556bc0 */
GEN_FRAME uint GEN_THISCALL F_00556bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *(undefined2 *)(in_ecx + 7) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00556bf0 */
GEN_NOFRAME uint GEN_THISCALL F_00556bf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
  uVar1 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 0x20));
    uVar1 = (uint)uVar3;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    if (0 < *(int *)((int)this + 4)) {
      iVar2 = 0;
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))) != 0) {
          F_00406b30(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))));
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 4));
    }
    uVar1 = 0;
    if (*(int *)((int)this + 0x24) != 0) {
      uVar3 = F_00406b30(*(int *)((int)this + 0x24));
      uVar1 = (uint)uVar3;
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return uVar1;
}

/* ref: FUN_00556c70 */
GEN_NOFRAME uint GEN_THISCALL F_00556c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
  pvVar3 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5);
  *(undefined * PTR32 *)((int)this + 0x20) = pvVar3;
  F_00c48350(pvVar3,0,*(int *)((int)this + 4) * 4);
  if (*(int *)((int)this + 0x24) != 0) {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + iVar4 * 4))) != 0) {
          F_00406b30(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar4 * 4))));
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar4 * 4))) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 4));
    }
    if (*(int *)((int)this + 0x24) != 0) {
      F_00406b30(*(int *)((int)this + 0x24));
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
  pvVar3 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5);
  *(undefined * PTR32 *)((int)this + 0x24) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*(int *)((int)this + 4) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::StringArrayData::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00556d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if ((*(int *)(this + 0x24) != 0) && (iVar1 = 0, 0 < *(int *)(this + 4))) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x24) + iVar1 * 4))) != 0) {
        F_00406b30(*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + iVar1 * 4))));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + iVar1 * 4))) = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + iVar1 * 4))) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 4));
  }
  return;
}

/* ref: Component::GUI2::StringArrayData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00556da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00556bf0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556dd0 */
GEN_FRAME uint GEN_THISCALL F_00556dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *(undefined2 *)(in_ecx + 7) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a0940));
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00556e00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00556e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0940));
  if (*(int *)((int)this + 0x20) != 0) {
    iVar1 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x20) + iVar1 * 4))) != 0) {
          F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar1 * 4))));
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar1 * 4))) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)this + 4));
    }
    if (*(int *)((int)this + 0x20) != 0) {
      F_00406b30(*(int *)((int)this + 0x20));
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return;
}

/* ref: FUN_00556e70 */
GEN_NOFRAME uint GEN_THISCALL F_00556e70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x20) != 0) {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x20) + iVar4 * 4))) != 0) {
          F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar4 * 4))));
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar4 * 4))) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 4));
    }
    if (*(int *)((int)this + 0x20) != 0) {
      F_00406b30(*(int *)((int)this + 0x20));
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
  pvVar3 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5);
  *(undefined * PTR32 *)((int)this + 0x20) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*(int *)((int)this + 4) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::ExtendArrayData::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00556f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x556f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if ((*(int *)(this + 0x20) != 0) && (iVar1 = 0, 0 < *(int *)(this + 4))) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x20) + iVar1 * 4))) != 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + iVar1 * 4))));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + iVar1 * 4))) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 4));
  }
  return;
}

/* ref: Component::GUI2::ExtendArrayData::vf0 */
GEN_FRAME uint GEN_THISCALL F_00556f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x556f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00556e00(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556fb0 */
GEN_FRAME uint GEN_THISCALL F_00556fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x556fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  *(short *)this = (short)param_1;
  *(short *)((int)this + 2) = (short)param_2;
  *(undefined2 *)((int)this + 4) = (undefined2)param_3;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x1c) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x20) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x24) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 4),0,uVar1,uVar3);
  *(uint *)((int)this + 0x28) = uVar1;
  iVar2 = 0;
  if (0 < *(short *)this) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)this);
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 2)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x14) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 2));
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 4)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_005571e0 */
GEN_FRAME ushort GEN_THISCALL F_005571e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5571e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  longlong lVar1;
  uint uVar2;
  undefined * _Dst;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    F_00406b30(*(int *)(param_2 + 0x20));
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  uVar3 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)(param_2 + 4) * 4;
  _Dst = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                              uVar3);
  *(undefined * PTR32 *)(param_2 + 0x20) = _Dst;
  F_00c48350(_Dst,0,*(int *)(param_2 + 4) * 4);
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) = param_2;
  return (ushort)param_1;
}

/* ref: FUN_00557250 */
GEN_FRAME uint GEN_THISCALL F_00557250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x557250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  F_00556c70(param_2 GEN_EDX_FWD);
  *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) = param_2;
  return param_1;
}

/* ref: FUN_00557270 */
GEN_FRAME uint GEN_THISCALL F_00557270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x557270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  F_00556e70(param_2 GEN_EDX_FWD);
  *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))) = param_2;
  return param_1;
}

/* ref: FUN_00557290 */
GEN_FRAME uint GEN_THISCALL F_00557290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_005572b0 */
GEN_FRAME uint GEN_THISCALL F_005572b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5572b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_005572d0 */
GEN_FRAME uint GEN_THISCALL F_005572d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5572d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x24) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x24) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_00557380 */
GEN_FRAME uint GEN_THISCALL F_00557380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x557380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) != 0) {
    piVar1 = (int *)*piVar1;
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = (undefined1)param_1;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *(undefined1 *)((int)piVar1 + 0x1d) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_005573b0 */
GEN_FRAME uint GEN_THISCALL F_005573b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5573b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4))) != 0) {
    piVar1 = (int *)*piVar1;
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = (undefined1)param_1;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *(undefined1 *)((int)piVar1 + 0x1d) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_005573e0 */
GEN_FRAME uint GEN_THISCALL F_005573e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5573e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4))) != 0) {
    piVar1 = (int *)*piVar1;
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = (undefined1)param_1;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *(undefined1 *)((int)piVar1 + 0x1d) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00557410 */
GEN_FRAME uint GEN_THISCALL F_00557410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x557410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) != 0) {
    puVar1 = (undefined4 *)F_005569f0((undefined *)*puVar1 GEN_EDX_FWD,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00557440 */
GEN_FRAME uint GEN_THISCALL F_00557440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4))) != 0) {
    puVar2 = (undefined4 *)F_005569f0((undefined *)*puVar2 GEN_EDX_FWD,param_1);
    if ((char)param_3 != '\0') {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4)));
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00557480 */
GEN_FRAME uint GEN_THISCALL F_00557480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4))) != 0) {
    puVar2 = (undefined4 *)F_005569f0((undefined *)*puVar2 GEN_EDX_FWD,param_1);
    if ((char)param_3 != '\0') {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4)));
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_005574c0 */
GEN_FRAME uint GEN_THISCALL F_005574c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5574c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)*(short *)((int)this + 2);
  while (iVar4 = iVar4 - 1, -1 < iVar4) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4 * 4)));
    if (iVar3 != 0) {
      bVar2 = *(byte *)(iVar3 + 0x1d);
      *(undefined1 *)(iVar3 + 0x1d) = 0;
      if ((bVar2 != 0) && (iVar5 = *(char *)(iVar3 + 0x1c) - 1, -1 < iVar5)) {
        do {
          pbVar1 = ((byte *)GEN_TOP(((uint)*(byte *)(iVar3 + 0xc + iVar5) + param_1)));
          *pbVar1 = *pbVar1 | ((bVar2 & 2) != 0) + 1U;
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
    }
  }
  iVar4 = (int)*(short *)this;
  while (iVar4 = iVar4 - 1, -1 < iVar4) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 4)));
    if (iVar3 != 0) {
      bVar2 = *(byte *)(iVar3 + 0x1d);
      *(undefined1 *)(iVar3 + 0x1d) = 0;
      if ((bVar2 != 0) && (iVar5 = *(char *)(iVar3 + 0x1c) - 1, -1 < iVar5)) {
        do {
          pbVar1 = ((byte *)GEN_TOP(((uint)*(byte *)(iVar3 + 0xc + iVar5) + param_1)));
          *pbVar1 = *pbVar1 | ((bVar2 & 2) != 0) + 1U;
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
    }
  }
  return 0;
}

/* ref: FUN_00557570 */
GEN_FRAME uint GEN_THISCALL F_00557570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_005575a0 */
GEN_FRAME uint GEN_THISCALL F_005575a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5575a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_005575d0 */
GEN_FRAME byte GEN_THISCALL F_005575d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5575d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x26c);
  return 1;
}

/* ref: FUN_00557620 */
GEN_NOFRAME uint GEN_THISCALL F_00557620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x557620u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (((char)in_ecx[1] == '\0') && (*in_ecx == 2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00557640 */
GEN_FRAME uint GEN_THISCALL F_00557640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 2) = 0;
  return (uint)this;
}

/* ref: FUN_00557670 */
GEN_FRAME uint GEN_THISCALL F_00557670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  *(uint *)(in_ecx + 0x14) = *(uint *)(in_ecx + 0x14) | 0x10000;
  uVar1 = *(uint *)(in_ecx + 0x14);
  if ((char)param_2 != '\0') {
    uVar1 = uVar1 | 0x200000;
    *(uint *)(in_ecx + 0x14) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_005576b0 */
GEN_FRAME uint GEN_THISCALL F_005576b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5576b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_ecx;
  if (*in_ecx == 0) {
    *in_ecx = param_2;
    return param_2;
  }
  do {
    uVar1 = *(uint *)(uVar2 + 0x10);
    if (uVar1 == 0) {
      *(uint *)(uVar2 + 0x10) = param_2;
      return uVar2;
    }
    uVar2 = uVar1;
  } while (uVar1 != 0);
  return 0;
}

/* ref: FUN_005576e0 */
GEN_FRAME uint GEN_THISCALL F_005576e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5576e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  do {
    uVar1 = uVar2;
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(uVar1 + 0x10);
  } while (*(uint *)(uVar1 + 0x10) != param_1);
  return uVar1;
}

/* ref: FUN_00557710 */
GEN_FRAME byte GEN_THISCALL F_00557710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) break;
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  return 1;
}

/* ref: FUN_00557740 */
GEN_FRAME uint GEN_THISCALL F_00557740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) break;
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  return *(uint *)(iVar1 + 0xc);
}

/* ref: FUN_00557790 */
GEN_FRAME uint GEN_THISCALL F_00557790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 uVar1;
  undefined * pvVar2;
  
  if ((char)param_1 != '\0') {
    uVar1 = *(undefined1 *)((int)this + 0x70);
    pvVar2 = F_00c48350(this,0,0x74);
    *(undefined1 *)((int)this + 0x70) = uVar1;
    return (uint)pvVar2;
  }
  pvVar2 = F_00c48350(this,0,0x74);
  return (uint)pvVar2;
}

/* ref: FUN_005577f0 */
GEN_FRAME uint GEN_THISCALL F_005577f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5577f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00557840 */
GEN_FRAME unsigned int GEN_THISCALL F_00557840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x557840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a0a50);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  fVar1 = ((float10)GEN_TOD(fcos(fVar1)));
  *(float *)&REFG(undefined, 0x1379968) = (float)fVar1;
  return 0;
}

/* ref: FUN_00557890 */
GEN_FRAME uint GEN_THISCALL F_00557890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x150 + *in_ecx;
}

/* ref: FUN_005578b0 */
GEN_FRAME uint GEN_THISCALL F_005578b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5578b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(ushort *)(in_ecx + 8) <= (ushort)param_2) {
    return 0;
  }
  return (uint)(ushort)param_2 * 0x74 + *(int *)(in_ecx + 4);
}

/* ref: FUN_00557970 */
GEN_FRAME uint GEN_STDCALL F_00557970(unsigned int gen_a0)
{
  GEN_ENTER(0x557970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((((0x1f < (byte)param_1) && ((byte)param_1 != 0x7f)) &&
      (((byte)param_1 < 0x20 || (0x7e < (byte)param_1)))) &&
     (((byte)param_1 < 0xa1 || (0xdf < (byte)param_1)))) {
    if ((((byte)param_1 < 0x81) || (0x9f < (byte)param_1)) && (0xf < (byte)((byte)param_1 + 0x20)))
    {
      return 0;
    }
    return 2;
  }
  return 1;
}

/* ref: FUN_005579c0 */
GEN_FRAME uint GEN_STDCALL F_005579c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5579c0u, gen_a0, gen_a1, 0u, 0u);
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0x60);
  if ((((*(byte *)(param_2 + 0x6e) & 4) != 0) && (*(byte *)(param_2 + 0x6f) <= (*(uint *)&gen_a0))) &&
     ((*(uint *)&gen_a0) < 0x100)) {
    return ((*(uint *)&gen_a0) - *(byte *)(param_2 + 0x6f)) * 0x10 + iVar1;
  }
  iVar4 = *(int *)(param_2 + 0x44);
  iVar5 = 0;
  if (iVar4 < 0) {
    return 0;
  }
  do {
    iVar3 = (iVar4 + iVar5) / 2;
    uVar2 = *(uint *)(iVar1 + iVar3 * 0x10);
    if ((*(uint *)&gen_a0) < uVar2) {
      iVar4 = iVar3 - 1;
    }
    else {
      if ((*(uint *)&gen_a0) <= uVar2) {
        return iVar3 * 0x10 + iVar1;
      }
      iVar5 = iVar3 + 1;
    }
  } while (iVar5 <= iVar4);
  return 0;
}

/* ref: FUN_00557a50 */
GEN_FRAME uint GEN_STDCALL F_00557a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  uVar2 = 0;
  if (*(uint *)(param_2 + 0x44) != 0) {
    do {
      if (*(short *)(uVar1 + 4) == (short)param_1) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 0x10;
    } while (uVar2 < *(uint *)(param_2 + 0x44));
  }
  return 0;
}

/* ref: FUN_00557a80 */
GEN_FRAME uint GEN_THISCALL F_00557a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  short * psVar3;
  short * psVar4;
  uint uVar5;
  
  psVar3 = (short *)0x0;
  if (*(int *)((int)this + 0x60) == 0) {
    return (uint)psVar3;
  }
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x60) + 0xc)));
  uVar5 = 0;
  psVar4 = psVar3;
  psVar2 = *((short * PTR32 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x10)));
  if (uVar1 != 0) {
    while (psVar4 = psVar2, *psVar4 != (short)param_1) {
      uVar5 = uVar5 + 1;
      psVar2 = psVar4 + 0x10;
      if (uVar1 <= uVar5) {
        return (uint)psVar3;
      }
    }
  }
  return (uint)psVar4;
}

/* ref: FUN_00557ac0 */
GEN_FRAME uint GEN_STDCALL F_00557ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  int local_8;
  
  param_3 = *(int *)(param_3 + 0x48);
  local_8 = 0;
  if (-1 < param_3) {
    do {
      iVar3 = (param_3 + local_8) / 2;
      puVar2 = (uint *)(iVar3 * 0x10 + param_4);
      uVar1 = *puVar2;
      if (uVar1 < param_1) {
LAB_00557b30: ;
        local_8 = iVar3 + 1;
      }
      else {
        if ((uVar1 <= param_1) && (puVar2[1] <= (*(uint *)&gen_a1))) {
          if (param_1 < uVar1) {
            return (uint)puVar2;
          }
          if ((param_1 <= uVar1) && ((*(uint *)&gen_a1) <= puVar2[1])) {
            return (uint)puVar2;
          }
          goto LAB_00557b30;
        }
        param_3 = iVar3 - 1;
      }
    } while (local_8 <= param_3);
  }
  return 0;
}

/* ref: FUN_00557b50 */
GEN_FRAME uint GEN_STDCALL F_00557b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_8;
  
  uVar7 = 0;
  local_8 = 0;
  if ((param_1 != 0) && ((*(uint *)&gen_a3) != 0)) {
    uVar3 = *(uint *)(param_3 + 0x48);
    uVar5 = (*(uint *)&gen_a3);
    if (uVar3 != 0) {
      do {
        uVar6 = (uint)*(ushort *)(uVar5 + 8);
        if (uVar6 == param_1) {
          uVar2 = *(ushort *)(uVar5 + 10);
          for (; ((uVar4 = uVar5, uVar2 != param_2 && (uVar4 = local_8, uVar7 < uVar3)) &&
                 (puVar1 = (ushort *)(uVar5 + 8), uVar6 == *puVar1)); uVar5 = uVar5 + 0x10) {
            uVar2 = *(ushort *)(uVar5 + 0x1a);
            uVar7 = uVar7 + 1;
            uVar6 = (uint)*puVar1;
          }
        }
        else {
          if (param_1 < uVar6) {
            return local_8;
          }
          uVar5 = uVar5 + 0x10;
          uVar4 = local_8;
        }
        local_8 = uVar4;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
    return local_8;
  }
  return 0;
}

/* ref: FUN_00557be0 */
GEN_FRAME uint GEN_THISCALL F_00557be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = F_005579c0(0xe38093,param_1);
  if (uVar1 == 0) {
    if (((*(byte *)(param_1 + 0x6e) & 4) == 0) || (0x2d < *(byte *)(param_1 + 0x6f))) {
      iVar3 = *(int *)(param_1 + 0x44);
      iVar4 = 0;
      if (-1 < iVar3) {
        do {
          iVar2 = (iVar3 + iVar4) / 2;
          uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x60) + iVar2 * 0x10)));
          if (uVar1 < 0x2e) {
            if (0x2c < uVar1) goto LAB_00557c60;
            iVar4 = iVar2 + 1;
          }
          else {
            iVar3 = iVar2 - 1;
          }
        } while (iVar4 <= iVar3);
      }
    }
    else {
      iVar2 = 0x2d - (uint)*(byte *)(param_1 + 0x6f);
LAB_00557c60: ;
      uVar1 = iVar2 * 0x10 + *(int *)(param_1 + 0x60);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = F_005579c0(0xe39080,param_1);
  }
  return uVar1;
}

/* ref: FUN_00557c70 */
GEN_FRAME ushort GEN_THISCALL F_00557c70(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x557c70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  float10 fVar4;
  float local_8;
  
  uVar3 = 0;
  local_8 = 0.0;
  uVar2 = 0;
  while( true ) {
    fVar1 = *(float *)(param_1 + (uint)uVar2 * 0xc + 4);
    fVar4 = (float10)fVar1;
    if ((float10)local_8 < fVar4) {
      uVar3 = uVar2;
      local_8 = fVar1;
    }
    fVar4 = (float10)((float)GEN_TOF(ABS((float10)(float)(fVar4 - (float10)param_2))));
    if ((!GEN_ISNAN((float10)REFG(float, 0x10a0a58)) && !GEN_ISNAN(fVar4)) && !((float10)REFG(float, 0x10a0a58) < fVar4)) break;
    uVar2 = uVar2 + 1;
    if (3 < uVar2) {
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00557cf0 */
GEN_FRAME unsigned int GEN_THISCALL F_00557cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0x13c) = param_3;
  *(undefined4 *)((int)this + 0xec) = param_1;
  *(undefined4 *)((int)this + 0xf0) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  F_00c48350((undefined4 *)((int)this + 100),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0x68) = uVar1;
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x80) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *(uint *)((int)this + 0x9c) = *(uint *)((int)this + 0x9c) | 0x10000;
  *(undefined4 *)((int)this + 0x84) = uVar2;
  *(undefined1 *)((int)this + 0xa6) = 0xff;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  F_00c48350((undefined4 *)((int)this + 0xa8),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0xac) = uVar1;
  *(undefined4 *)((int)this + 0xb8) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xc4) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 0x10000;
  *(undefined4 *)((int)this + 200) = uVar2;
  *(undefined4 *)((int)this + 0xc0) = uVar1;
  *(undefined1 *)((int)this + 0xea) = 0xff;
  puVar3 = (undefined4 *)((int)this + 0x30);
  iVar4 = 4;
  do {
    puVar3[-0xc] = 0;
    puVar3[-0xb] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  *(undefined1 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  return 0;
}

/* ref: FUN_00557e00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00557e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x557e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0xf0) = 0;
  F_00c48350((undefined4 *)((int)this + 100),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0x68) = uVar1;
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x80) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *(uint *)((int)this + 0x9c) = *(uint *)((int)this + 0x9c) | 0x10000;
  *(undefined4 *)((int)this + 0x84) = uVar2;
  *(undefined1 *)((int)this + 0xa6) = 0xff;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  F_00c48350((undefined4 *)((int)this + 0xa8),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0xac) = uVar1;
  *(undefined4 *)((int)this + 0xb8) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xc4) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 0x10000;
  *(undefined4 *)((int)this + 200) = uVar2;
  *(undefined1 *)((int)this + 0xea) = 0xff;
  *(undefined4 *)((int)this + 0xc0) = uVar1;
  puVar3 = (undefined4 *)((int)this + 8);
  iVar4 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = uVar1;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = uVar1;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  *(undefined1 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  return 0;
}

/* ref: FUN_00557f00 */
GEN_FRAME unsigned int GEN_THISCALL F_00557f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x557f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 100);
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00557f70 */
GEN_FRAME unsigned int GEN_THISCALL F_00557f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x557f70u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int * piVar1;
  int iVar2;
  short sVar3;
  
  if (param_3 != 0) {
    piVar1 = in_ecx + (uint)(ushort)param_2 * 3;
    *piVar1 = param_3;
    *(undefined1 *)(param_3 + 0x70) = (undefined1)param_8;
    piVar1[1] = (int)gen_fl2bits(param_4);
    piVar1[2] = (int)gen_fl2bits(param_7);
    in_ecx[(uint)(ushort)param_2 * 3 + 0xc] = param_5;
    if (param_5 != 0) {
      *(undefined1 *)(param_5 + 0x70) = (undefined1)param_8;
    }
    sVar3 = 0;
    piVar1[0xd] = (int)gen_fl2bits(param_6);
    piVar1[0xe] = (int)gen_fl2bits(param_7);
    iVar2 = 4;
    piVar1 = in_ecx;
    do {
      if (*piVar1 != 0) {
        sVar3 = sVar3 + 1;
      }
      piVar1 = piVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
    *(byte *)(in_ecx + 0x52) =
         *(byte *)(in_ecx + 0x52) ^ ((sVar3 != 0) * '\x02' ^ *(byte *)(in_ecx + 0x52)) & 2;
  }
  return;
}

/* ref: FUN_00558000 */
GEN_FRAME uint GEN_THISCALL F_00558000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x558000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  ushort uVar2;
  
  fVar1 = *(float *)((int)this + 0x74);
  if ((((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x144) - (float10)fVar1 )))))) <= (float10)REFG(float, 0x10905c4)) && ((char)param_1 != '\0')) && (*(uint *)((int)this + 0x140) != 0)) {
    return *(uint *)((int)this + 0x140);
  }
  uVar2 = F_00557c70(this GEN_EDX_FWD,fVar1);
  *(undefined4 *)(((int)(uint)(this)) + 0x140) = *(undefined4 *)(((int)(uint)(this)) + (uint)uVar2 * 0xc);
  if ((*(byte *)(((int)(uint)(this)) + 0x148) & 8) != 0) {
    *(undefined4 *)(((int)(uint)(this)) + 0x140) = *((undefined4 *)GEN_TOP((((int)(uint)(this)) + ((uint)uVar2 * 3 + 0xc) * 4)));
  }
  *(float *)(((int)(uint)(this)) + 0x144) = fVar1;
  return *(uint *)(((int)(uint)(this)) + 0x140);
}

/* ref: FUN_005580a0 */
GEN_FRAME float10 GEN_THISCALL F_005580a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5580a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00557c70(param_1 GEN_EDX_FWD,param_2);
  return (float10)*(float *)(((int)(uint)(param_1)) + 8 + (uint)uVar1 * 0xc);
}

/* ref: FUN_005580c0 */
GEN_FRAME uint GEN_THISCALL F_005580c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5580c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != 0) {
    *(uint *)(in_ecx + 0x60) = param_2;
  }
  return param_2;
}

/* ref: FUN_005580e0 */
GEN_FRAME float10 GEN_THISCALL F_005580e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5580e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  float10 fVar5;
  
  bVar2 = *(byte *)(param_1 + 0x148);
  if ((bVar2 & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x74);
    if ((!((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x144) - (float10)fVar1)))))) <= (float10)REFG(float, 0x10905c4))) || (iVar4 = *(int *)(param_1 + 0x140), iVar4 == 0)) {
      uVar3 = F_00557c70(param_1 GEN_EDX_FWD,fVar1);
      *(undefined4 *)(((int)(uint)(param_1)) + 0x140) = *(undefined4 *)(((int)(uint)(param_1)) + (uint)uVar3 * 0xc);
      if ((bVar2 & 8) != 0) {
        *(undefined4 *)(((int)(uint)(param_1)) + 0x140) = *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + ((uint)uVar3 * 3 + 0xc) * 4)));
      }
      *(float *)(((int)(uint)(param_1)) + 0x144) = fVar1;
      iVar4 = *(int *)(((int)(uint)(param_1)) + 0x140);
    }
    fVar5 = (float10)param_3;
    if (param_3 < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    return (float10)((float)GEN_TOF((fVar5 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 / (float10)*(float *)(iVar4 + 0x54)))) * (float10)*(int *)(iVar4 + 0x58)))))));
  }
  return (float10)0;
}

/* ref: FUN_005581b0 */
GEN_FRAME float10 GEN_THISCALL F_005581b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5581b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int extraout_ECX;
  float10 fVar5;
  
  bVar2 = *(byte *)(param_1 + 0x148);
  if ((bVar2 & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x74);
    if ((!((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x144) - (float10)fVar1)))))) <= (float10)REFG(float, 0x10905c4))) || (iVar4 = *(int *)(param_1 + 0x140), iVar4 == 0)) {
      uVar3 = F_00557c70(param_1 GEN_EDX_FWD,fVar1);
      extraout_ECX = ((int)(uint)(param_1));
      *(undefined4 *)(extraout_ECX + 0x140) = *(undefined4 *)(extraout_ECX + (uint)uVar3 * 0xc);
      if ((bVar2 & 8) != 0) {
        *(undefined4 *)(extraout_ECX + 0x140) = *((undefined4 *)GEN_TOP((extraout_ECX + ((uint)uVar3 * 3 + 0xc) * 4)));
      }
      iVar4 = *(int *)(extraout_ECX + 0x140);
      *(float *)(extraout_ECX + 0x144) = fVar1;
      param_1 = extraout_ECX;
    }
    fVar5 = (float10)param_2;
    param_2 = (float)*(byte *)(param_1 + 0xa5);
    if ((char)param_3 != '\0') {
      param_2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x7c) * (float10)*(byte *)(param_1 + 0xa5))));
    }
    return (float10)((float)GEN_TOF(((float10)param_2 - (float10)*(int *)(iVar4 + 0x58) * (float10)((float)GEN_TOF((fVar5 / (float10)*(float *)(iVar4 + 0x54)))))));
  }
  return (float10)0;
}

/* ref: FUN_00558290 */
GEN_FRAME uint GEN_STDCALL F_00558290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558290u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_0042e290(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
  return (uint)param_1;
}

/* ref: FUN_005582c0 */
GEN_FRAME uint GEN_THISCALL F_005582c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5582c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 < 0x1e) {
    uVar1 = (uint)(byte)param_1 * 8;
    *((undefined4 *)GEN_TOP((uVar1 + *(int *)((int)this + 0x28)))) = param_2;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 4 + uVar1))) = param_3;
  }
  return uVar1;
}

/* ref: FUN_005582f0 */
GEN_FRAME uint GEN_THISCALL F_005582f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5582f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  uVar2 = in_EAX & 0xffffff00;
  do {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + (uVar2 & 0xff) * 8))) == param_1) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 4 + (uVar2 & 0xff) * 8))) = param_2;
      return uVar2 & 0xff;
    }
    bVar1 = (char)uVar2 + 1;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  } while (bVar1 < 0x1e);
  return uVar2;
}

/* ref: FUN_00558330 */
GEN_FRAME uint GEN_THISCALL F_00558330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x558330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  do {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + (uint)bVar1 * 8))) == param_1) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + 4 + (uint)bVar1 * 8)));
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00558370 */
GEN_FRAME uint GEN_THISCALL F_00558370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0042e430(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_00a21e20(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xf0) + 0x1c))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_005583a0 */
GEN_FRAME uint GEN_STDCALL F_005583a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5583a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = *param_2;
  if (0x3f < (byte)(bVar1 + 0x80)) {
    if (bVar1 < 0x80) {
      return (uint)bVar1;
    }
    if (bVar1 < 0xe0) {
      *param_1 = 2;
      return (uint)CONCAT11(bVar1,param_2[1]);
    }
    if (bVar1 < 0xf0) {
      *param_1 = 3;
      return (uint)CONCAT21(CONCAT11(bVar1,param_2[1]),param_2[2]);
    }
    if (bVar1 < 0xf8) {
      *param_1 = 4;
      return CONCAT31(CONCAT21(CONCAT11(bVar1,param_2[1]),param_2[2]),param_2[3]);
    }
  }
  return 0;
}

/* ref: FUN_00558440 */
GEN_FRAME byte GEN_STDCALL F_00558440(unsigned int gen_a0)
{
  GEN_ENTER(0x558440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  
  bVar1 = 0;
  if (((param_1 - 0x30U < 10) || (param_1 == 0x25)) || (param_1 - 0x28U < 8)) {
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00558470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  pvVar1 = F_00c48350(this + 0xc0,0,0x80);
  return (uint)pvVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf3 */
GEN_FRAME uint GEN_THISCALL F_005584b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5584b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = param_2;
  if (*param_2 != '\x02') {
    if (*(uint *)(in_ecx + 0xb4) <= *(uint *)(in_ecx + 0xbc)) {
      *(int *)(in_ecx + 0xa8) = *(int *)(in_ecx + 0xa8) + 1;
    }
    pcVar1 = ((char *)GEN_TOP((*(uint *)(in_ecx + 0xbc) + 1)));
    *(char * PTR32 *)(in_ecx + 0xbc) = pcVar1;
  }
  return (uint)pcVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf2 */
GEN_FRAME float GEN_THISCALL F_005584e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5584e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float10 in_ST0 = 0;
  float10 fVar2;
  float10 extraout_ST1 = 0;
  
  fVar1 = *(float *)(this + 0x15c);
  *(float *)(this + 0x144) = fVar1;
  if (this[0x164] == (undefined1)0x0) {
    if ((float10)*(float *)(this + 0x140) < (float10)*(float *)(this + 0x158)) {
      *(float *)(this + 0x140) = *(float *)(this + 0x158);
    }
    fVar2 = F_005580e0(*(undefined4 *)(this + 8) GEN_EDX_FWD,*(float *)(this + 0x28),1);
    *(float *)(this + 0x144) = ((float)GEN_TOF((fVar2 + (float10)*(float *)(this + 0x144))));
    return (float)extraout_ST1;
  }
  if (*(uint *)(this + 0xb8) <= *(uint *)(this + 0xbc)) {
    fVar2 = (float10)*(float *)(this + 0x150);
    if ((float10)0 < fVar2) {
      *(float *)(this + 0x140) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x154) - (float10)*(float *)(this + 0x14c))));
      *(float *)(this + 0x144) = (float)((float10)fVar1 - fVar2);
      return (float)in_ST0;
    }
    *(float *)(this + 0x140) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0x158) - (float10)*(float *)(this + 0x14c))));
    *(float *)(this + 0x144) = (float)((float10)fVar1 - fVar2);
    return (float)in_ST0;
  }
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x158);
  return (float)in_ST0;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf3 */
GEN_FRAME uint GEN_THISCALL F_005585d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5585d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(this + 0xb4);
  if (uVar2 <= *(uint *)(this + 0xbc)) {
    if ((float10)*(float *)(this + 0x140) < (float10)*(float *)(this + 0x158)) {
      *(float *)(this + 0x140) = *(float *)(this + 0x158);
    }
    uVar4 = 0;
    *(undefined4 *)(this + 0x14c) = 0;
    fVar3 = F_005581b0(*(undefined4 *)(this + 8) GEN_EDX_FWD,*(float *)(this + 0x28),0);
    *(float *)(this + 0x150) = ((float)GEN_TOF((fVar3 + (float10)*(float *)(this + 0x148))));
    uVar1 = *(undefined4 *)(this + 0x158);
    *(undefined4 *)(this + 0x158) = uVar4;
    *(undefined4 *)(this + 0x154) = uVar1;
    *(float *)(this + 0x15c) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar3 + (float10)*(float *)(this + 0x148)))) +
                (float10)*(float *)(this + 0x15c))));
    uVar2 = extraout_EAX;
  }
  if (*param_1 != '\x02') {
    if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
      *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
    }
    uVar2 = *(uint *)(this + 0xbc) + 1;
    *(uint *)(this + 0xbc) = uVar2;
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf10 */
GEN_FRAME uint GEN_THISCALL F_00558690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x558690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 0x28))))(this + 0x140 GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x10) = param_1;
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_005586c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5586c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(this + 0x288);
  *(undefined4 *)(this + 0x284) = *(undefined4 *)(this + 0x28c);
  *(float *)(this + 0x298) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x24) / (float10)*((float *)GEN_TOP((*(int *)(this + 0xc) + 0x54))))));
  fVar1 = *((float *)GEN_TOP((*(int *)(this + 0xc) + 0x54)));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0x29c) = ((float)GEN_TOF(((float10)*(float *)(this + 0x28) / (float10)fVar1)));
  pvVar2 = F_00c48350(this + 0xc0,0,0x80);
  return (uint)pvVar2;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf2 */
GEN_NOFRAME unsigned int F_00558720(void)
{
  GEN_ENTER(0x558720u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf3 */
GEN_FRAME uint GEN_THISCALL F_00558730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x558730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  float10 fVar2;
  
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(this + 0x288);
  fVar2 = F_005580e0(*(undefined4 *)(this + 8) GEN_EDX_FWD,*(float *)(this + 0x28),1);
  *(float *)(this + 0x284) = ((float)GEN_TOF((fVar2 + (float10)*(float *)(this + 0x284))));
  fVar2 = F_005581b0(*(undefined4 *)(this + 8) GEN_EDX_ARG,*(float *)(this + 0x28),0);
  *(float *)(this + 0x284) = ((float)GEN_TOF((fVar2 + (float10)*(float *)(this + 0x284))));
  pcVar1 = param_1;
  if (*param_1 != '\x02') {
    if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
      *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
    }
    pcVar1 = ((char *)GEN_TOP((*(uint *)(this + 0xbc) + 1)));
    *(char * PTR32 *)(this + 0xbc) = pcVar1;
  }
  return (uint)pcVar1;
}

/* ref: FUN_005587b0 */
GEN_FRAME uint GEN_STDCALL F_005587b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5587b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *(undefined2 *)(param_1 + 0x10) = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0x12) = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x28) = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0x2a) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x40) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x42) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x58) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x5a) = (undefined2)param_3;
  return param_1;
}

/* ref: FUN_005587f0 */
GEN_FRAME uint GEN_STDCALL F_005587f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5587f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined2 *)(param_1 + 0x14) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x16) = (undefined2)param_8;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined2 *)(param_1 + 0x2c) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x2e) = (undefined2)param_8;
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined2 *)(param_1 + 0x44) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x46) = (undefined2)param_8;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined2 *)(param_1 + 0x5c) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x5e) = (undefined2)param_8;
  return param_1;
}

/* ref: FUN_00558840 */
GEN_FRAME unsigned int GEN_STDCALL F_00558840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x558840u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined2 *)(param_1 + 0x14) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x16) = (undefined2)param_8;
  *(undefined2 *)(param_1 + 0x1a) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x1c) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x1e) = (undefined2)param_6;
  *(undefined2 *)(param_1 + 0x18) = (undefined2)param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined2 *)(param_1 + 0x34) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x36) = (undefined2)param_8;
  *(undefined2 *)(param_1 + 0x38) = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x3a) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x3c) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x3e) = (undefined2)param_6;
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(undefined2 *)(param_1 + 0x54) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x56) = (undefined2)param_8;
  *(undefined2 *)(param_1 + 0x58) = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x5a) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x5c) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x5e) = (undefined2)param_6;
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined2 *)(param_1 + 0x74) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x76) = (undefined2)param_8;
  *(undefined2 *)(param_1 + 0x78) = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x7a) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x7c) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x7e) = (undefined2)param_6;
  return 0;
}

/* ref: FUN_00558900 */
GEN_FRAME uint GEN_STDCALL F_00558900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x558900u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  *(short *)(param_1 + 0x10) = (short)param_3 - (short)param_2;
  *(short *)(param_1 + 0x12) = (short)param_4 - (short)param_2;
  *(short *)(param_1 + 0x30) = (short)param_3 - (short)param_2;
  *(short *)(param_1 + 0x32) = (short)param_6 + (short)param_2;
  *(short *)(param_1 + 0x50) = (short)param_2 + (short)param_5;
  *(short *)(param_1 + 0x52) = (short)param_6 + (short)param_2;
  *(short *)(param_1 + 0x72) = (short)param_4 - (short)param_2;
  *(short *)(param_1 + 0x70) = (short)param_2 + (short)param_5;
  return param_1;
}

/* ref: FUN_00558950 */
GEN_FRAME unsigned int GEN_THISCALL F_00558950(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x558950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(in_ecx + 0x18) == 1) {
    *(float *)(in_ecx + 0x280) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0x280))));
    return;
  }
  *(float *)(in_ecx + 0x280) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x24) + (float10)*(float *)(in_ecx + 0x280))));
  return;
}

/* ref: FUN_00558980 */
GEN_NOFRAME uint GEN_THISCALL F_00558980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x2a0),0,0x100);
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  return (uint)pvVar1;
}

/* ref: FUN_005589b0 */
GEN_FRAME uint GEN_THISCALL F_005589b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5589b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  gen_size32 _Size;
  undefined * pvVar2;
  undefined * _Dst;
  int iVar3;
  int * piVar4;
  
  piVar4 = (int *)(param_1 * 0x40 + 0x2a0 + (int)this);
  iVar1 = (param_1 + 0x10) * 0x20 - (int)piVar4;
  iVar3 = 8;
  do {
    pvVar2 = *(undefined * PTR32 *)((int)this + iVar1 + (int)piVar4);
    if (pvVar2 != (undefined *)0x0) {
      _Dst = (undefined *)*piVar4;
      if (_Dst == (undefined *)0x0) {
        _Dst = (undefined *)piVar4[8];
        if (_Dst == (undefined *)0x0) goto LAB_005589ff;
        _Size = (int)((int)(uintptr_t)pvVar2) << 7;
      }
      else {
        _Size = (int)((int)(uintptr_t)pvVar2) * 0x60;
      }
      pvVar2 = F_00c48350(_Dst,0,_Size);
    }
LAB_005589ff: ;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 - 1;
    if (iVar3 == 0) {
      return (uint)pvVar2;
    }
  } while( true );
}

/* ref: FUN_00558a10 */
GEN_FRAME unsigned int GEN_STDCALL F_00558a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if ((param_1 != (undefined *)0x0) && ((*(int *)&gen_a1) != 0)) {
    F_00c48350(param_1,0,(*(int *)&gen_a1) << 7);
  }
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf3 */
GEN_FRAME uint GEN_THISCALL F_00558a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x558a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_005585d0(param_1 GEN_EDX_FWD,param_2);
  if (param_1[0x17c] != (undefined1)0x0) {
    param_1[0x17d] = (undefined1)0x1;
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0xbc);
    return uVar1;
  }
  if (((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x16c) + (float10)*(float *)(param_1 + 0x15c))))
       <= (float10)*(float *)(param_1 + 0x174)) &&
     ((float10)*(float *)(param_1 + 0x174) <
      (float10)*(float *)(param_1 + 0x148) +
      (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x16c) + (float10)*(float *)(param_1 + 0x15c)))))
     ) {
    param_1[0x17c] = (undefined1)0x1;
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00558ac0 */
GEN_FRAME byte GEN_THISCALL F_00558ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x17c) != '\0') &&
     ((float10)*(float *)(in_ecx + 0x170) <
      (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x168) + (float10)*(float *)(in_ecx + 0x158))))))
  {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFBase::vf4 */
GEN_FRAME uint GEN_THISCALL F_00558b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x558b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  *(undefined4 *)(in_ecx + 8) = 0;
  return param_2;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFBase::vf5 */
GEN_FRAME uint GEN_THISCALL F_00558b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558b20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00558b30 */
GEN_FRAME uint GEN_STDCALL F_00558b30(unsigned int gen_a0)
{
  GEN_ENTER(0x558b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (((byte)((byte)param_1 + 0x80) < 0x40) || ((byte)param_1 < 0x80)) {
    return 1;
  }
  if ((byte)param_1 < 0xe0) {
    return 2;
  }
  if ((byte)param_1 < 0xf0) {
    return 3;
  }
  return (-(uint)((byte)param_1 < 0xf8) & 3) + 1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFCount::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00558b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFCount::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00558b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558b90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(int *)(in_ecx + 0xc) = *(int *)(in_ecx + 0xc) + 1;
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf0 */
GEN_NOFRAME byte GEN_THISCALL F_00558ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558ba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) != 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00558bb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558bb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined2 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf2 */
GEN_FRAME uint GEN_THISCALL F_00558bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0xc) = param_1;
  *(undefined2 *)(this + 0x10) = (undefined2)param_2;
  return param_1;
}

/* ref: FUN_00558be0 */
GEN_FRAME uint GEN_THISCALL F_00558be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: Component::GUI2::AtkFontAnalyzerFunctorSelect::vf1 */
GEN_FRAME uint GEN_THISCALL F_00558c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xa4);
  if ((*(uint *)(this + 4) <= uVar1) && (uVar1 <= *(uint *)(this + 8))) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x100000;
    return uVar1;
  }
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffefffff;
  return uVar1;
}

/* ref: FUN_00558c30 */
GEN_FRAME uint GEN_THISCALL F_00558c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x558c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 0x970;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))))((int)this + 4,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x144) + 0x20))))((int)this + 0x144,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2ac) + 0x20))))((int)this + 0x2ac,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x654) + 0x20))))((int)this + 0x654,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7f8) + 0x20))))((int)this + 0x7f8,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7d4) + 0x10))))((int)this + 0x7d4,param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7e4) + 0x10))))((int)this + 0x7e4,param_1);
  return uVar2;
}

/* ref: FUN_00558cd0 */
GEN_FRAME uint GEN_THISCALL F_00558cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x558cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    *(undefined4 *)((int)this + 0x978) = param_2;
    *(undefined4 *)((int)this + 0x97c) = param_3;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2ac) + 0x28))))((int)this + 0x2ac,(int)this + 0x974);
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2ac) + 0x28))))((int)this + 0x2ac,(int)this + 0x970);
  return uVar1;
}

/* ref: FUN_00558d60 */
GEN_FRAME float10 F_00558d60(float gen_a0)
{
  GEN_ENTER(0x558d60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00558d80 */
GEN_FRAME float10 F_00558d80(float gen_a0)
{
  GEN_ENTER(0x558d80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_00558dc0 */
GEN_NOFRAME uint GEN_THISCALL F_00558dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)((int)this + 0xc5c) = 0;
  *(undefined4 *)((int)this + 0xc60) = 0;
  *(undefined4 *)((int)this + 0xc64) = 0;
  *(undefined2 *)((int)this + 0xc6a) = 0;
  *(undefined1 *)((int)this + 0xc6c) = 0;
  *(undefined2 *)((int)this + 0xc6d) = 1;
  do {
    uVar2 = uVar1 & 0xffff;
    uVar1 = uVar1 + 1;
    *(undefined4 *)((int)this + uVar2 * 4 + 4) = 0;
  } while (uVar1 < 7);
  *(undefined2 *)((int)this + 0xc68) = 0;
  *(undefined4 *)((int)this + 0xc58) = 0;
  return 0;
}

/* ref: FUN_00558e10 */
GEN_NOFRAME uint GEN_THISCALL F_00558e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(short *)(in_ecx + 0xc68) == 0) {
    return *(uint *)(in_ecx + 0xc58);
  }
  return *((uint *)GEN_TOP((in_ecx + 0x50 + *(short *)(in_ecx + 0xc68) * 0xc)));
}

/* ref: FUN_00558e30 */
GEN_NOFRAME uint GEN_THISCALL F_00558e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * in_EAX = 0;
  int iVar1;
  
  if (*(int *)((int)this + 0xc58) != 0) {
    in_EAX = (int *)0x0;
    iVar1 = 0;
    if (0 < *(short *)((int)this + 0xc68)) {
      in_EAX = (int *)((int)this + 0x5c);
      do {
        if (*in_EAX == *(int *)((int)this + 0xc58)) {
          *in_EAX = 0;
          in_EAX[-1] = 0;
        }
        iVar1 = iVar1 + 1;
        in_EAX = in_EAX + 3;
      } while (iVar1 < *(short *)((int)this + 0xc68));
    }
    *(undefined4 *)((int)this + 0xc58) = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00558e90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00558e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x22d2a) == '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf0))(this GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,0,0x2f);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,0,9);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,0);
      if (uVar1 != 0) {
        **(undefined4 * PTR32 *)(uVar1 + 0x20) = 0xfffffffe;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc4))(this GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf4))(this GEN_EDX_ARG,0);
    *(undefined1 *)((int)this + 0x22d2a) = 1;
  }
  return;
}

/* ref: FUN_00558f10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00558f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x558f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  code * pcVar3;
  
  if (*(char *)((int)this + 0x22d2a) != '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf0))(this GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,0);
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x34);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG,0);
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x40);
    }
    (*pcVar3)(this,0);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_ARG);
    if ((char)uVar1 == '\0') {
      iVar2 = 0;
      if (0 < *(short *)((int)this + 0x20de0)) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20dec) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)((int)this + 0x20de0));
      }
      iVar2 = 0;
      if (0 < *(short *)((int)this + 0x20de2)) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20df8) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)((int)this + 0x20de2));
      }
      iVar2 = 0;
      if (0 < *(short *)((int)this + 0x20de4)) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20e04) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)((int)this + 0x20de4));
      }
    }
    *(undefined1 *)((int)this + 0x22d2a) = 0;
  }
  return;
}

/* ref: FUN_00559010 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00559010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  
  if (*(char *)((int)this + 0x22d2b) == '\0') {
    *(undefined1 *)((int)this + 0x22d2b) = 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x130) + 0xc))))(*(int * PTR32 *)((int)this + 0x130) GEN_EDX_FWD);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xcc))(this GEN_EDX_ARG);
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x130) + 0x1b0)));
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

/* ref: FUN_00559050 */
GEN_FRAME uint GEN_THISCALL F_00559050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559050u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00559060 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00559060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Component::GUI2::AtkModule::vf1 */
GEN_FRAME uint GEN_THISCALL F_00559070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559070u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x24))))
                    (this + 0x2223c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00559090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559090u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x28))))
                    (this + 0x2223c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf3 */
GEN_FRAME uint GEN_THISCALL F_005590b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5590b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x40))))(this + 0x2223c GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    uVar1 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf4 */
GEN_FRAME byte GEN_THISCALL F_005590e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5590e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((*(char *)(in_ecx + 0x22d2b) != '\0') &&
     (((char)param_2 == '\0' || (*(char *)(in_ecx + 0x22d2c) != '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf5 */
GEN_FRAME byte GEN_THISCALL F_00559110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x559110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  code * pcVar2;
  undefined * pAVar3;
  uint uVar4;
  
  pAVar3 = this + 0x22cf0;
  do {
    AVar1 = *(undefined1 *)pAVar3;
    pAVar3 = pAVar3 + 1;
  } while (AVar1 != (undefined1)0x0);
  if (pAVar3 == this + 0x22cf1) {
    if ((char)param_2 != '\0') {
      return 1;
    }
    F_00c49908(this + 0x22cf0,0x10,param_1);
  }
  else if ((char)param_2 != '\0') {
    return 1;
  }
  F_00558e90(this GEN_EDX_ARG);
  pcVar2 = *(gen_code32 *)(*(int *)this + 0xd8);
  this[0x22be8] = (undefined1)0x1;
  uVar4 = (*pcVar2)(this,param_1,0,param_3);
  if ((char)uVar4 == '\0') {
    return 1;
  }
  this[0x22be8] = (undefined1)0x2;
  return 1;
}

/* ref: FUN_00559190 */
GEN_FRAME uint GEN_THISCALL F_00559190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  *(undefined1 *)((int)this + 0x22d29) = 1;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != param_1 + 1) {
      F_00c49908((int)this + 0x22cf0,0x10,param_1);
    }
  }
  iVar2 = *(int *)this;
  uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0xf0))(this);
  uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0xf8))(this,uVar4 & 0xff);
  return uVar4;
}

/* ref: FUN_00559200 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00559200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * _Dst;
  int iVar1;
  
  if ((*(char *)((int)this + 0x22d2a) != '\0') && (*(char *)((int)this + 0x22d2b) != '\0')) {
    _Dst = (undefined *)((int)this + 0x22bf0);
    F_00c48350(_Dst,0,0x100);
    F_005574c0((undefined *)((int)this + 0x20de0) GEN_EDX_ARG,_Dst,0x100);
    iVar1 = 0xff;
    do {
      if (*(byte *)((int)_Dst + iVar1) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x130) + 0x2c))))
                  (*(int * PTR32 *)((int)this + 0x130) GEN_EDX_ARG,iVar1,*(undefined4 *)((int)this + 0x20df0),
                   *(undefined4 *)((int)this + 0x20dfc),
                   (uint)(*(byte *)((int)_Dst + iVar1) >> 1 & 1));
      }
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: Component::GUI2::AtkModule::vf15 */
GEN_FRAME uint GEN_THISCALL F_00559280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x20dec) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: Component::GUI2::AtkModule::vf16 */
GEN_FRAME uint GEN_THISCALL F_005592b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5592b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x20df8) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: Component::GUI2::AtkModule::vf18 */
GEN_FRAME uint GEN_THISCALL F_005592e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5592e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x22224) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkModule::vf19 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005592f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5592f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Component::GUI2::AtkModule::vf24 */
GEN_FRAME uint GEN_THISCALL F_00559300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x559300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x30))))
                    (*(int * PTR32 *)(this + 0x130) GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf25 */
GEN_FRAME uint GEN_THISCALL F_00559330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x20))))(*(int * PTR32 *)(this + 0x130) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf43 */
GEN_FRAME uint GEN_THISCALL F_00559360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x24))))(*(int * PTR32 *)(this + 0x130) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00559380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559380u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x6c))))
                    (*(int * PTR32 *)(this + 0x130) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_00559390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559390u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x70))))
                    (*(int * PTR32 *)(this + 0x130) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: FUN_005593a0 */
GEN_FRAME uint GEN_THISCALL F_005593a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5593a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,param_1)));
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20e9c) + 0x54)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG)));
  uVar2 = F_00cb0950(this_00 GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: Component::GUI2::AtkModule::vf30 */
GEN_FRAME byte GEN_THISCALL F_005593e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5593e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22d2d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Component::GUI2::AtkModule::vf32 */
GEN_NOFRAME byte GEN_THISCALL F_005593f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5593f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xb8) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x21a)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf31 */
GEN_NOFRAME byte GEN_THISCALL F_00559410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x22d2e);
}

/* ref: Component::GUI2::AtkModule::vf33 */
GEN_NOFRAME byte GEN_THISCALL F_00559420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (((*(int *)(in_ecx + 0xb8) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x14))) + 0xcc))), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0xf9) & 0x20) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf36 */
GEN_FRAME uint GEN_THISCALL F_00559450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x20dc8) = param_1;
  *(undefined4 *)(this + 0x20dcc) = param_2;
  return param_1;
}

/* ref: FUN_00559470 */
GEN_NOFRAME uint GEN_THISCALL F_00559470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20ea0;
}

/* ref: FUN_00559480 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00559480(unsigned int gen_a0)
{
  GEN_ENTER(0x559480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00559490 */
GEN_NOFRAME byte GEN_THISCALL F_00559490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x20db2);
}

/* ref: FUN_005594a0 */
GEN_FRAME byte GEN_THISCALL F_005594a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5594a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20db3) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005594b0 */
GEN_NOFRAME byte GEN_THISCALL F_005594b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5594b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x20db3);
}

/* ref: FUN_005594c0 */
GEN_FRAME uint GEN_THISCALL F_005594c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5594c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 2) {
    return *(uint *)(in_ecx + 0x22d10);
  }
  return *(uint *)(in_ecx + 0x22d14);
}

/* ref: FUN_005594e0 */
GEN_NOFRAME byte GEN_THISCALL F_005594e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5594e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x14))) + 0x1b0))) >> 7;
}

/* ref: Component::GUI2::AtkModule::vf39 */
GEN_NOFRAME uint GEN_THISCALL F_00559520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x34)));
}

/* ref: Component::GUI2::AtkModule::vf40 */
GEN_NOFRAME uint GEN_THISCALL F_00559530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 8) + 0x18))))(this + 8 GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x34))))(this + 0x2223c GEN_EDX_ARG,2);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00559580 */
GEN_NOFRAME byte GEN_THISCALL F_00559580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_00c48350((undefined *)((int)this + 0x14),0,0x20000);
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x10),0,*(int *)((int)this + 0xc) * 4);
  *(undefined4 *)((int)this + 8) = 0;
  bVar1 = F_00a4b410(this GEN_EDX_ARG,0);
  return bVar1;
}

/* ref: FUN_005595d0 */
GEN_FRAME uint GEN_THISCALL F_005595d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5595d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  if (0x7fff < param_1) {
    return 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x14);
  if (piVar1 == (int *)0x0) {
    return 0xfffffffe;
  }
  F_00a4b450(this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)*piVar1)(piVar1 GEN_EDX_ARG,1);
  *(undefined4 *)((int)this + param_1 * 4 + 0x14) = 0;
  return 0;
}

/* ref: FUN_00559630 */
GEN_FRAME uint GEN_THISCALL F_00559630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x8000) {
    uVar1 = *(uint *)((int)this + param_1 * 4 + 0x14);
  }
  return uVar1;
}

/* ref: FUN_00559650 */
GEN_FRAME uint GEN_THISCALL F_00559650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(undefined4 *)(uVar1 + 0x74) = param_2;
  return uVar1;
}

/* ref: FUN_00559660 */
GEN_FRAME uint GEN_THISCALL F_00559660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(undefined4 *)(uVar1 + 0x70) = param_2;
  return uVar1;
}

/* ref: FUN_00559670 */
GEN_FRAME uint GEN_THISCALL F_00559670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(undefined4 *)(uVar1 + 0x78) = param_2;
  return uVar1;
}

/* ref: FUN_00559680 */
GEN_FRAME uint GEN_THISCALL F_00559680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  *(undefined4 *)(uVar1 + 0x94) = *param_1;
  *(undefined4 *)(uVar1 + 0x98) = param_1[1];
  *(undefined4 *)(uVar1 + 0x9c) = param_1[2];
  *(undefined4 *)(uVar1 + 0xa0) = param_1[3];
  return uVar1;
}

/* ref: FUN_005596b0 */
GEN_FRAME uint GEN_THISCALL F_005596b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5596b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(byte *)(uVar1 + 0xa4) = *(byte *)(uVar1 + 0xa4) ^ (*(byte *)(uVar1 + 0xa4) ^ (byte)param_2) & 1;
  return uVar1;
}

/* ref: FUN_005596d0 */
GEN_FRAME ushort GEN_STDCALL F_005596d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5596d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (0xfffe < param_1) {
    return 0;
  }
  return -(short)param_1 - 1;
}

/* ref: FUN_005596f0 */
GEN_FRAME uint GEN_STDCALL F_005596f0(float gen_a0)
{
  GEN_ENTER(0x5596f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  uint local_c;
  
  fVar1 = (float10)((float)GEN_TOF((((float10)1 - (float10)param_1) * (float10)REFG(double, 0x109cab0))));
  if (fVar1 <= (float10)0) {
    return 0;
  }
  if ((float10)REFG(double, 0x109cab0) <= fVar1) {
    return 0xffff;
  }
  local_c = (uint)(longlong)TRUNC(fVar1);
  return local_c;
}

/* ref: FUN_00559770 */
GEN_FRAME byte F_00559770(unsigned int gen_a0)
{
  GEN_ENTER(0x559770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00415150(param_1 GEN_EDX_ARG);
  REFG(undefined1, 0x137996c) = bVar1;
  return bVar1;
}

/* ref: FUN_005597f0 */
GEN_NOFRAME uint GEN_THISCALL F_005597f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5597f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined2 * puVar3;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  uVar2 = 0;
  puVar3 = (undefined2 *)((int)this + 0x54);
  do {
    *puVar3 = 0;
    *(undefined1 *)((int)this + uVar2 + 0x5a) = 100;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 3);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  uVar2 = 0;
  puVar3 = (undefined2 *)((int)this + 0x68);
  do {
    *puVar3 = 0;
    *(undefined1 *)((int)this + uVar2 + 0x6e) = 100;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 3);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x20) = REFG(undefined4, 0x131de4c);
  *(undefined4 *)((int)this + 0x24) = REFG(undefined4, 0x131de50);
  *(undefined4 *)((int)this + 0x28) = REFG(undefined4, 0x131de54);
  *(undefined4 *)((int)this + 0x2c) = REFG(undefined4, 0x131de58);
  *(undefined4 *)((int)this + 0x30) = REFG(undefined4, 0x131de5c);
  uVar1 = REFG(undefined4, 0x131de60);
  *(undefined4 *)((int)this + 0x7c) = 0;
  uVar2 = *(uint *)((int)this + 0x88) & 0xfffffff9 | 1;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(uint *)((int)this + 0x88) = uVar2;
  return uVar2;
}

/* ref: FUN_005598c0 */
GEN_FRAME unsigned int GEN_THISCALL F_005598c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5598c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  bool bVar1;
  
  if (((*(uint *)(param_1 + 0x88) & 1) == 0) &&
     ((bVar1 = GEN_ISNAN((float10)*(float *)(param_1 + 0x38)) || GEN_ISNAN((float10)param_2),
      bVar1 == (bVar1 || (float10)*(float *)(param_1 + 0x38) == (float10)param_2) ||
      (bVar1 = GEN_ISNAN((float10)*(float *)(param_1 + 0x3c)) || GEN_ISNAN((float10)param_3),
      bVar1 == (bVar1 || (float10)*(float *)(param_1 + 0x3c) == (float10)param_3))))) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
  *(float *)(param_1 + 0x38) = param_2;
  *(float *)(param_1 + 0x3c) = param_3;
  return;
}

/* ref: FUN_00559910 */
GEN_FRAME unsigned int GEN_THISCALL F_00559910(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x559910u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  bool bVar2;
  
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    fVar1 = *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x38) = param_2;
    bVar2 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)param_2);
    if (bVar2 == (bVar2 || (float10)fVar1 == (float10)param_2)) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      return;
    }
  }
  else {
    *(float *)(param_1 + 0x38) = param_2;
  }
  return;
}

/* ref: FUN_00559950 */
GEN_FRAME unsigned int GEN_THISCALL F_00559950(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x559950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  bool bVar2;
  
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    fVar1 = *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x3c) = param_2;
    bVar2 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)param_2);
    if (bVar2 == (bVar2 || (float10)fVar1 == (float10)param_2)) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      return;
    }
  }
  else {
    *(float *)(param_1 + 0x3c) = param_2;
  }
  return;
}

/* ref: FUN_005599e0 */
GEN_FRAME unsigned int GEN_THISCALL F_005599e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5599e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x4c) = param_2;
  return;
}

/* ref: FUN_00559a00 */
GEN_FRAME unsigned int GEN_THISCALL F_00559a00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x559a00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  float10 fVar2;
  
  if (((*(uint *)(in_ecx + 0x88) & 1) == 0) &&
     ((fVar1 = (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x74) -
                                                   (float10)param_2)))))), fVar2 = (float10)REFG(float, 0x10905c4)
      , (!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && !(fVar2 < fVar1) ||
      ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x78) - (float10)param_3))))))
       <= fVar2)))) {
    *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
  }
  *(float *)(in_ecx + 0x74) = param_2;
  *(float *)(in_ecx + 0x78) = param_3;
  return;
}

/* ref: FUN_00559a80 */
GEN_FRAME unsigned int GEN_THISCALL F_00559a80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x559a80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  if ((*(uint *)(in_ecx + 0x88) & 1) == 0) {
    fVar1 = *(float *)(in_ecx + 0x74);
    *(float *)(in_ecx + 0x74) = param_2;
    if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - (float10)param_2)))) <=
        (float10)REFG(float, 0x10905c4)) {
      *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
      return;
    }
  }
  else {
    *(float *)(in_ecx + 0x74) = param_2;
  }
  return;
}

/* ref: FUN_00559ae0 */
GEN_FRAME unsigned int GEN_THISCALL F_00559ae0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x559ae0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  if ((*(uint *)(in_ecx + 0x88) & 1) == 0) {
    fVar1 = *(float *)(in_ecx + 0x78);
    *(float *)(in_ecx + 0x78) = param_2;
    if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - (float10)param_2)))) <=
        (float10)REFG(float, 0x10905c4)) {
      *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
      return;
    }
  }
  else {
    *(float *)(in_ecx + 0x78) = param_2;
  }
  return;
}

/* ref: FUN_00559b70 */
GEN_NOFRAME uint GEN_THISCALL F_00559b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559b70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (in_ecx == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(ushort *)(in_ecx + 0x18);
    if (999 < *(ushort *)(in_ecx + 0x18)) {
      return 10000;
    }
  }
  return uVar1;
}

/* ref: FUN_00559b90 */
GEN_NOFRAME uint GEN_THISCALL F_00559b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559b90u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 2)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559ba0 */
GEN_NOFRAME uint GEN_THISCALL F_00559ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559ba0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 3)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bb0 */
GEN_NOFRAME uint GEN_THISCALL F_00559bb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559bb0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 4)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bc0 */
GEN_NOFRAME uint GEN_THISCALL F_00559bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559bc0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 5)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bf0 */
GEN_NOFRAME uint GEN_THISCALL F_00559bf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559bf0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 8)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559c00 */
GEN_NOFRAME uint GEN_THISCALL F_00559c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559c00u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(ushort *)(in_ecx + 0x18) < 1000)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559c20 */
GEN_NOFRAME uint GEN_THISCALL F_00559c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (999 < *(ushort *)(in_ecx + 0x18))) {
    return *(uint *)(in_ecx + 0x8c);
  }
  return 0;
}

/* ref: FUN_00559c40 */
GEN_NOFRAME ushort GEN_THISCALL F_00559c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  ushort in_AX = 0;
  
  if ((in_ecx != 0) && (in_AX = 0, *(int *)(in_ecx + 0x1c) != 0)) {
    return *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 0x22))) >> 0xf;
  }
  return in_AX & 0xff00;
}

/* ref: FUN_00559c60 */
GEN_FRAME uint GEN_THISCALL F_00559c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if ((this != (undefined *)0x0) && (in_EAX = *(uint *)((int)this + 0x1c), in_EAX != 0)) {
    *(ushort *)(in_EAX + 0x22) = *(ushort *)(in_EAX + 0x22) | 0x8000;
    *(undefined4 *)(in_EAX + 0x18) = param_1;
  }
  return in_EAX;
}

/* ref: FUN_00559cb0 */
GEN_NOFRAME uint GEN_THISCALL F_00559cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559cb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (*(int *)(in_ecx + 0x1c) != 0)) {
    return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 0x10)));
  }
  return 0;
}

/* ref: FUN_00559cd0 */
GEN_NOFRAME uint GEN_THISCALL F_00559cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (*(int *)(in_ecx + 0x1c) != 0)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 0x18)));
  }
  return 0;
}

/* ref: FUN_00559cf0 */
GEN_NOFRAME uint GEN_THISCALL F_00559cf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((in_ecx != 0) && (iVar1 = *(int *)(in_ecx + 0x1c), iVar1 != 0)) {
    return CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + 0x20));
  }
  return 0;
}

/* ref: FUN_00559d10 */
GEN_FRAME unsigned int GEN_THISCALL F_00559d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559d10u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (in_ecx != 0) {
    *param_2 = *(undefined4 *)(in_ecx + 0x38);
    *param_3 = *(undefined4 *)(in_ecx + 0x3c);
  }
  return;
}

/* ref: FUN_00559d30 */
GEN_FRAME unsigned int GEN_THISCALL F_00559d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  float fVar1;
  
  if (this != (undefined *)0x0) {
    fVar1 = *(float *)((int)this + 0x3c);
    *param_1 = (short)(int)*(float *)((int)this + 0x38);
    *param_2 = (short)(int)fVar1;
  }
  return;
}

/* ref: FUN_00559d60 */
GEN_NOFRAME float10 GEN_THISCALL F_00559d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x38);
  }
  return (float10)0;
}

/* ref: FUN_00559d70 */
GEN_NOFRAME ushort GEN_THISCALL F_00559d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (ushort)(int)*(float *)(in_ecx + 0x38);
  }
  return 0;
}

/* ref: FUN_00559d80 */
GEN_NOFRAME float10 GEN_THISCALL F_00559d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x3c);
  }
  return (float10)0;
}

/* ref: FUN_00559d90 */
GEN_NOFRAME ushort GEN_THISCALL F_00559d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x559d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (ushort)(int)*(float *)(in_ecx + 0x3c);
  }
  return 0;
}

/* ref: FUN_00559da0 */
GEN_FRAME uint GEN_THISCALL F_00559da0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x559da0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 uVar1;
  uint in_EAX = 0;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_1 == 0) {
    return in_EAX;
  }
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    fVar5 = (float10)param_2;
    fVar6 = (float10)*(float *)(param_1 + 0x38);
    bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
    bVar4 = bVar3 || fVar6 == fVar5;
    uVar2 = (undefined2)(in_EAX >> 0x10);
    uVar1 = (undefined1)in_EAX;
    in_EAX = CONCAT22(uVar2,CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),uVar1));
    if (bVar3 != bVar4) {
      fVar5 = (float10)param_3;
      fVar6 = (float10)*(float *)(param_1 + 0x3c);
      bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
      bVar4 = bVar3 || fVar6 == fVar5;
      in_EAX = CONCAT22(uVar2,CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),uVar1));
      if (bVar3 != bVar4) goto LAB_00559ddb;
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
LAB_00559ddb: ;
  *(float *)(param_1 + 0x38) = param_2;
  *(float *)(param_1 + 0x3c) = param_3;
  return in_EAX;
}

/* ref: FUN_00559e00 */
GEN_FRAME uint GEN_THISCALL F_00559e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559e00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  if (param_1 == 0) {
    return in_EAX;
  }
  uVar1 = (uint)(short)param_2;
  fVar6 = (float)(int)uVar1;
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    fVar4 = (float10)(int)uVar1;
    fVar5 = (float10)*(float *)(param_1 + 0x38);
    bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
    bVar3 = bVar2 || fVar5 == fVar4;
    uVar1 = CONCAT22((short)param_2 >> 0xf,
                     CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)param_2));
    if (bVar2 != bVar3) {
      fVar4 = (float10)(int)(short)param_3;
      fVar5 = (float10)*(float *)(param_1 + 0x3c);
      bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
      bVar3 = bVar2 || fVar5 == fVar4;
      uVar1 = CONCAT22((short)param_2 >> 0xf,
                       CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)param_2));
      if (bVar2 != bVar3) goto LAB_00559e5b;
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
LAB_00559e5b: ;
  *(float *)(param_1 + 0x38) = fVar6;
  *(float *)(param_1 + 0x3c) = (float)(int)(short)param_3;
  return uVar1;
}

/* ref: FUN_00559e70 */
GEN_FRAME unsigned int GEN_THISCALL F_00559e70(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x559e70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  
  if (param_1 != 0) {
    if (((*(uint *)(param_1 + 0x88) & 1) == 0) &&
       (bVar1 = GEN_ISNAN((float10)*(float *)(param_1 + 0x38)) || GEN_ISNAN((float10)param_2),
       bVar1 == (bVar1 || (float10)*(float *)(param_1 + 0x38) == (float10)param_2))) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
    }
    *(float *)(param_1 + 0x38) = param_2;
  }
  return;
}

/* ref: FUN_00559eb0 */
GEN_FRAME uint GEN_THISCALL F_00559eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559eb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (param_1 != 0) {
    in_EAX = (uint)(short)param_2;
    fVar5 = (float)(int)in_EAX;
    if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
      fVar3 = (float10)(int)in_EAX;
      fVar4 = (float10)*(float *)(param_1 + 0x38);
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)param_2 >> 0xf,
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)param_2));
      if (bVar1 == bVar2) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      }
    }
    *(float *)(param_1 + 0x38) = fVar5;
  }
  return in_EAX;
}

/* ref: FUN_00559f00 */
GEN_FRAME uint GEN_THISCALL F_00559f00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x559f00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
      fVar3 = (float10)param_2;
      fVar4 = (float10)*(float *)(param_1 + 0x3c);
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)in_EAX));
      if (bVar1 == bVar2) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      }
    }
    *(float *)(param_1 + 0x3c) = param_2;
  }
  return in_EAX;
}

/* ref: FUN_00559f40 */
GEN_FRAME uint GEN_THISCALL F_00559f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x559f40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (param_1 != 0) {
    in_EAX = (uint)(short)param_2;
    fVar5 = (float)(int)in_EAX;
    if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
      fVar3 = (float10)(int)in_EAX;
      fVar4 = (float10)*(float *)(param_1 + 0x3c);
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)param_2 >> 0xf,
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)param_2));
      if (bVar1 == bVar2) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      }
    }
    *(float *)(param_1 + 0x3c) = fVar5;
  }
  return in_EAX;
}

/* ref: FUN_00559f90 */
GEN_FRAME unsigned int GEN_THISCALL F_00559f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559f90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (in_ecx != 0) {
    *param_2 = *(undefined4 *)(in_ecx + 0x30);
    *param_3 = *(undefined4 *)(in_ecx + 0x34);
  }
  return;
}

/* ref: FUN_00559fb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00559fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  float fVar1;
  
  if (this != (undefined *)0x0) {
    fVar1 = *(float *)((int)this + 0x34);
    *param_1 = (short)(int)*(float *)((int)this + 0x30);
    *param_2 = (short)(int)fVar1;
  }
  return;
}

/* ref: FUN_00559fe0 */
GEN_FRAME unsigned int GEN_THISCALL F_00559fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559fe0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (in_ecx != 0) {
    *param_2 = *(undefined4 *)(in_ecx + 0x40);
    *param_3 = *(undefined4 *)(in_ecx + 0x44);
  }
  return;
}

/* ref: FUN_0055a000 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55a000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined2 *)((int)this + 0x7c);
    *param_2 = *(undefined2 *)((int)this + 0x7e);
  }
  return;
}

/* ref: FUN_0055a020 */
GEN_NOFRAME ushort GEN_THISCALL F_0055a020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(ushort *)(in_ecx + 0x7c);
  }
  return 0;
}

/* ref: FUN_0055a030 */
GEN_NOFRAME ushort GEN_THISCALL F_0055a030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(ushort *)(in_ecx + 0x7e);
  }
  return 0;
}

/* ref: FUN_0055a040 */
GEN_FRAME ushort GEN_THISCALL F_0055a040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55a040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort in_AX = 0;
  
  if (this != (undefined *)0x0) {
    *(ushort *)((int)this + 0x7c) = (ushort)param_1;
    *(undefined2 *)((int)this + 0x7e) = (undefined2)param_2;
    in_AX = (ushort)param_1;
  }
  return in_AX;
}

/* ref: FUN_0055a060 */
GEN_FRAME ushort GEN_THISCALL F_0055a060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *(ushort *)(in_ecx + 0x7c) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a080 */
GEN_FRAME ushort GEN_THISCALL F_0055a080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *(ushort *)(in_ecx + 0x7e) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a0a0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a0a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ ((param_2 & 0xff) << 0x17 ^ *(uint *)(in_ecx + 0x84)) & 0x800000
    ;
  }
  return;
}

/* ref: FUN_0055a0e0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a0e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return;
  }
  return;
}

/* ref: FUN_0055a120 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined4 *)(in_ecx + 0x50) = param_2;
  }
  return;
}

/* ref: FUN_0055a140 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55a140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined2 *)((int)this + 0x54);
    *param_2 = *(undefined2 *)((int)this + 0x56);
    *param_3 = *(undefined2 *)((int)this + 0x58);
  }
  return;
}

/* ref: FUN_0055a170 */
GEN_FRAME ushort GEN_THISCALL F_0055a170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55a170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort in_AX = 0;
  
  if (this != (undefined *)0x0) {
    *(undefined2 *)((int)this + 0x54) = (undefined2)param_1;
    *(undefined2 *)((int)this + 0x56) = (undefined2)param_2;
    *(ushort *)((int)this + 0x58) = (ushort)param_3;
    in_AX = (ushort)param_3;
  }
  return in_AX;
}

/* ref: FUN_0055a1a0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined1 *)((int)this + 0x5a);
    *param_2 = *(undefined1 *)((int)this + 0x5b);
    *param_3 = *(undefined1 *)((int)this + 0x5c);
  }
  return;
}

/* ref: FUN_0055a1d0 */
GEN_FRAME byte GEN_THISCALL F_0055a1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55a1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte in_AL = 0;
  
  if (this != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x5a) = (undefined1)param_1;
    *(undefined1 *)((int)this + 0x5b) = (undefined1)param_2;
    *(byte *)((int)this + 0x5c) = (byte)param_3;
    in_AL = (byte)param_3;
  }
  return in_AL;
}

/* ref: FUN_0055a1f0 */
GEN_NOFRAME byte GEN_THISCALL F_0055a1f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(byte *)(in_ecx + 0x53);
  }
  return 0;
}

/* ref: FUN_0055a200 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x53) = (undefined1)param_2;
  }
  return;
}

/* ref: FUN_0055a220 */
GEN_FRAME byte GEN_THISCALL F_0055a220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if ((this != (undefined *)0x0) && (*(int * PTR32 *)((int)this + 0x80) != (int *)0x0)) {
    for (iVar1 = **(int * PTR32 *)((int)this + 0x80); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
      if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0055a260 */
GEN_FRAME uint GEN_THISCALL F_0055a260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if ((this != (undefined *)0x0) && (*(int * PTR32 *)((int)this + 0x80) != (int *)0x0)) {
    for (iVar1 = **(int * PTR32 *)((int)this + 0x80); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
      if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) {
        return *(uint *)(iVar1 + 0xc);
      }
    }
  }
  return 0;
}

/* ref: FUN_0055a2a0 */
GEN_NOFRAME uint GEN_THISCALL F_0055a2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a2a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (uint)*(ushort *)(in_ecx + 0x84);
  }
  return 0;
}

/* ref: FUN_0055a2b0 */
GEN_FRAME ushort GEN_THISCALL F_0055a2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a2b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *(ushort *)(in_ecx + 0x84) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a2d0 */
GEN_NOFRAME uint GEN_THISCALL F_0055a2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a2d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((in_ecx != 0) && ((*(uint *)(in_ecx + 0x84) & 0x100000) != 0)) &&
     ((*(uint *)(in_ecx + 0x88) & 0x20000) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0055a300 */
GEN_FRAME byte GEN_THISCALL F_0055a300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte in_AL = 0;
  
  if (this != (undefined *)0x0) {
    *(uint *)((int)this + 0x84) =
         *(uint *)((int)this + 0x84) ^
         ((uint)(byte)param_1 << 0x14 ^ *(uint *)((int)this + 0x84)) & 0x100000;
    *(uint *)((int)this + 0x88) =
         *(uint *)((int)this + 0x88) ^
         ((uint)((byte)param_1 == 0) << 7 ^ *(uint *)((int)this + 0x88)) & 0x80;
    in_AL = (byte)param_1;
  }
  return in_AL;
}

/* ref: FUN_0055a350 */
GEN_NOFRAME uint GEN_THISCALL F_0055a350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x84) >> 0x15 & 1;
  }
  return 0;
}

/* ref: FUN_0055a370 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ ((param_2 & 0xff) << 0x15 ^ *(uint *)(in_ecx + 0x84)) & 0x200000
    ;
  }
  return;
}

/* ref: FUN_0055a3a0 */
GEN_NOFRAME byte GEN_THISCALL F_0055a3a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)((uint)*(undefined4 *)(in_ecx + 0x84) >> 0x19) & 1;
  }
  return 0;
}

/* ref: FUN_0055a3c0 */
GEN_FRAME uint GEN_THISCALL F_0055a3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (in_ecx != 0) {
    in_EAX = (param_2 << 0x19 ^ *(uint *)(in_ecx + 0x84)) & 0x2000000;
    *(uint *)(in_ecx + 0x84) = *(uint *)(in_ecx + 0x84) ^ in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_0055a3f0 */
GEN_NOFRAME uint GEN_THISCALL F_0055a3f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a3f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x84) >> 0x1a & 1;
  }
  return 0;
}

/* ref: FUN_0055a410 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ (param_2 << 0x1a ^ *(uint *)(in_ecx + 0x84)) & 0x4000000;
  }
  return;
}

/* ref: FUN_0055a440 */
GEN_NOFRAME byte GEN_THISCALL F_0055a440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)((uint)*(undefined4 *)(in_ecx + 0x84) >> 0x1b) & 1;
  }
  return 0;
}

/* ref: FUN_0055a460 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ (param_2 << 0x1b ^ *(uint *)(in_ecx + 0x84)) & 0x8000000;
  }
  return;
}

/* ref: FUN_0055a490 */
GEN_NOFRAME uint GEN_THISCALL F_0055a490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x84) >> 0x1d & 1;
  }
  return 0;
}

/* ref: FUN_0055a4b0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a4b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ (param_2 << 0x1d ^ *(uint *)(in_ecx + 0x84)) & 0x20000000;
  }
  return;
}

/* ref: FUN_0055a4e0 */
GEN_NOFRAME byte GEN_THISCALL F_0055a4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)*(undefined2 *)(in_ecx + 0x8a) & 1;
  }
  return 0;
}

/* ref: FUN_0055a500 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x10 ^ *(uint *)(in_ecx + 0x88)) & 0x10000;
  }
  return;
}

/* ref: FUN_0055a530 */
GEN_NOFRAME uint GEN_THISCALL F_0055a530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x88) >> 0x13 & 1;
  }
  return 0;
}

/* ref: FUN_0055a550 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x13 ^ *(uint *)(in_ecx + 0x88)) & 0x80000;
  }
  return;
}

/* ref: FUN_0055a580 */
GEN_NOFRAME uint GEN_THISCALL F_0055a580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x88) >> 0x15 & 1;
  }
  return 0;
}

/* ref: FUN_0055a5a0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a5a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x15 ^ *(uint *)(in_ecx + 0x88)) & 0x200000
    ;
  }
  return;
}

/* ref: FUN_0055a5f0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x16 ^ *(uint *)(in_ecx + 0x88)) & 0x400000
    ;
  }
  return;
}

/* ref: FUN_0055a620 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x14 ^ *(uint *)(in_ecx + 0x88)) & 0x100000
    ;
  }
  return;
}

/* ref: FUN_0055a650 */
GEN_NOFRAME byte GEN_THISCALL F_0055a650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)(*(uint *)(in_ecx + 0x88) >> 0x11) & 1;
  }
  return 0;
}

/* ref: FUN_0055a670 */
GEN_NOFRAME byte GEN_THISCALL F_0055a670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)(*(uint *)(in_ecx + 0x88) >> 0x12) & 1;
  }
  return 0;
}

/* ref: FUN_0055a690 */
GEN_NOFRAME uint GEN_THISCALL F_0055a690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x84) >> 0x1e & 1;
  }
  return 0;
}

/* ref: FUN_0055a6b0 */
GEN_FRAME uint GEN_THISCALL F_0055a6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (in_ecx != 0) {
    in_EAX = (param_2 << 0x1e ^ *(uint *)(in_ecx + 0x84)) & 0x40000000;
    *(uint *)(in_ecx + 0x84) = *(uint *)(in_ecx + 0x84) ^ in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_0055a6e0 */
GEN_FRAME float10 GEN_THISCALL F_0055a6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x4c);
  }
  return (float10)0.0;
}

/* ref: FUN_0055a710 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a710(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x55a710u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (in_ecx != 0) {
    *(float *)(in_ecx + 0x4c) = param_2;
  }
  return;
}

/* ref: FUN_0055a730 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55a730u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (in_ecx != 0) {
    *param_2 = *(undefined4 *)(in_ecx + 0x74);
    *param_3 = *(undefined4 *)(in_ecx + 0x78);
  }
  return;
}

/* ref: FUN_0055a750 */
GEN_NOFRAME float10 GEN_THISCALL F_0055a750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x74);
  }
  return (float10)0;
}

/* ref: FUN_0055a760 */
GEN_NOFRAME float10 GEN_THISCALL F_0055a760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x78);
  }
  return (float10)0;
}

/* ref: FUN_0055a770 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a770(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x55a770u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if (in_ecx != 0) {
    F_00559a00(in_ecx GEN_EDX_FWD,param_2,param_3);
  }
  return;
}

/* ref: FUN_0055a790 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a790(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x55a790u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (in_ecx != 0) {
    if ((*(uint *)(in_ecx + 0x88) & 1) == 0) {
      if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x74) - (float10)param_2
                                              )))))) <= (float10)REFG(float, 0x10905c4)) {
        *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
      }
    }
    *(float *)(in_ecx + 0x74) = param_2;
  }
  return;
}

/* ref: FUN_0055a7e0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a7e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x55a7e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (in_ecx != 0) {
    if ((*(uint *)(in_ecx + 0x88) & 1) == 0) {
      if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x78) - (float10)param_2
                                              )))))) <= (float10)REFG(float, 0x10905c4)) {
        *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
      }
    }
    *(float *)(in_ecx + 0x78) = param_2;
  }
  return;
}

/* ref: FUN_0055a830 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (this != (undefined *)0x0) {
    uVar2 = 0;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
    case 3: ;
    case 6: ;
      uVar2 = 0;
      break;
    case 1: ;
    case 4: ;
    case 7: ;
      uVar2 = (int)TRUNC((double)*(ushort *)((int)this + 0x7c) * REFG(double, 0x1088108)) & 0xffff;
      break;
    case 2: ;
    case 5: ;
    case 8: ;
      uVar2 = (uint)*(ushort *)((int)this + 0x7c);
    }
    uVar1 = 0;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
    case 1: ;
    case 2: ;
      uVar1 = 0;
      break;
    case 3: ;
    case 4: ;
    case 5: ;
      uVar1 = (int)TRUNC((double)*(ushort *)((int)this + 0x7e) * REFG(double, 0x1088108)) & 0xffff;
      break;
    case 6: ;
    case 7: ;
    case 8: ;
      uVar1 = (uint)*(ushort *)((int)this + 0x7e);
    }
    F_00559a00(this GEN_EDX_FWD,(float)uVar2,(float)uVar1);
  }
  return;
}

/* ref: FUN_0055a960 */
GEN_FRAME unsigned int GEN_THISCALL F_0055a960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55a960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((this != (undefined *)0x0) && ((*(int *)&gen_a1) != 0)) {
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((*(int *)&gen_a1) + 0x20);
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((*(int *)&gen_a1) + 0x24);
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((*(int *)&gen_a1) + 0x28);
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((*(int *)&gen_a1) + 0x2c);
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((*(int *)&gen_a1) + 0x30);
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((*(int *)&gen_a1) + 0x34);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((*(int *)&gen_a1) + 0x38);
    *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((*(int *)&gen_a1) + 0x3c);
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((*(int *)&gen_a1) + 0x40);
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((*(int *)&gen_a1) + 0x44);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((*(int *)&gen_a1) + 0x48);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((*(int *)&gen_a1) + 0x74);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((*(int *)&gen_a1) + 0x78);
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((*(int *)&gen_a1) + 0x4c);
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((*(int *)&gen_a1) + 0x50);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((*(int *)&gen_a1) + 0x54);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((*(int *)&gen_a1) + 0x58);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((*(int *)&gen_a1) + 0x5c);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((*(int *)&gen_a1) + 0x60);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)((*(int *)&gen_a1) + 100);
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((*(int *)&gen_a1) + 0x68);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((*(int *)&gen_a1) + 0x6c);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((*(int *)&gen_a1) + 0x70);
    *(undefined2 *)((int)this + 0x7c) = *(undefined2 *)((*(int *)&gen_a1) + 0x7c);
    *(undefined2 *)((int)this + 0x7e) = *(undefined2 *)((*(int *)&gen_a1) + 0x7e);
    *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((*(int *)&gen_a1) + 0x88);
  }
  return;
}

/* ref: FUN_0055aa20 */
GEN_FRAME uint GEN_THISCALL F_0055aa20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55aa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0042b740((undefined *)((int)this + 0x9c) GEN_EDX_FWD,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0055aa30 */
GEN_FRAME unsigned int GEN_THISCALL F_0055aa30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55aa30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined4 *)(in_ecx + 0x90) = param_2;
  }
  return;
}

/* ref: FUN_0055aa50 */
GEN_FRAME unsigned int GEN_THISCALL F_0055aa50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55aa50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (this != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x90) = (undefined1)param_1;
    *(undefined1 *)((int)this + 0x91) = (undefined1)param_2;
    *(undefined1 *)((int)this + 0x92) = (undefined1)param_3;
  }
  return;
}

/* ref: FUN_0055aa80 */
GEN_NOFRAME uint GEN_THISCALL F_0055aa80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55aa80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x90);
  }
  return 0;
}

/* ref: FUN_0055aa90 */
GEN_FRAME unsigned int GEN_THISCALL F_0055aa90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55aa90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xfc) =
         *(byte *)(in_ecx + 0xfc) ^ (*(byte *)(in_ecx + 0xfc) ^ (byte)param_2) & 0xf;
  }
  return;
}

/* ref: FUN_0055aab0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055aab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55aab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xfe) =
         *(byte *)(in_ecx + 0xfe) ^ (*(byte *)(in_ecx + 0xfe) ^ (byte)param_2) & 1;
  }
  return;
}

/* ref: FUN_0055aad0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055aad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55aad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined4 *)(in_ecx + 0x98) = param_2;
  }
  return;
}

/* ref: FUN_0055aaf0 */
GEN_NOFRAME uint GEN_THISCALL F_0055aaf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55aaf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx == 0) {
    return 0;
  }
  return *(uint *)(in_ecx + 0xf0);
}

/* ref: FUN_0055ab00 */
GEN_NOFRAME uint GEN_THISCALL F_0055ab00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55ab00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx == 0) {
    return 0;
  }
  return (uint)(*(byte *)(in_ecx + 0xfc) >> 4);
}

/* ref: FUN_0055ab20 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ab20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ab20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this != (undefined *)0x0) {
    *(byte *)((int)this + 0xfc) = *(byte *)((int)this + 0xfc) & 0xf | (char)param_1 << 4;
  }
  return;
}

/* ref: FUN_0055ab50 */
GEN_NOFRAME byte GEN_THISCALL F_0055ab50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55ab50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx == 0) {
    return 0;
  }
  return *(byte *)(in_ecx + 0xfd);
}

/* ref: FUN_0055ab60 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ab60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55ab60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  
  if (this != (undefined *)0x0) {
    cVar1 = *(char *)((int)this + 0xfd);
    *(char *)((int)this + 0xfd) = (char)param_1;
    if ((char)param_2 != '\0') {
      *(char *)((int)this + 0x116) = *(char *)((int)this + 0x116) + ((char)param_1 - cVar1);
    }
  }
  return;
}

/* ref: FUN_0055ab90 */
GEN_FRAME uint GEN_THISCALL F_0055ab90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ab90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint in_EAX = 0;
  
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x94) = param_2;
    in_EAX = param_2;
  }
  return in_EAX;
}

/* ref: FUN_0055abd0 */
GEN_FRAME byte GEN_THISCALL F_0055abd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55abd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte in_AL = 0;
  
  if (in_ecx != 0) {
    in_AL = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0xfe)) & 0x10;
    *(byte *)(in_ecx + 0xfe) = *(byte *)(in_ecx + 0xfe) ^ in_AL;
  }
  return in_AL;
}

/* ref: FUN_0055ac10 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ac10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ac10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xfe) =
         *(byte *)(in_ecx + 0xfe) ^ ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0xfe)) & 0x20;
  }
  return;
}

