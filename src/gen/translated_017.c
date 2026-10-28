#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::Sound::MemoryHandleInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_004ed710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1097898));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004ed760 */
GEN_FRAME unsigned int GEN_THISCALL F_004ed760(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4ed760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb8) = param_2;
  return;
}

/* ref: Client::Sound::SoundData::vf1 */
GEN_FRAME byte GEN_THISCALL F_004ed780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ed780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 100);
  if (iVar1 == 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    F_00cbe1a0(this + 0x20 GEN_EDX_FWD,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    iVar1 = *(int *)(this + 0x18);
    if (iVar1 == 0) {
      return 1;
    }
    if (0 < *(int *)(iVar1 + 0xac)) {
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) - 1;
    }
    if (*(int *)(iVar1 + 0xac) != 0) {
      return 1;
    }
    bVar2 = F_00d2d530(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xa8))),0);
    if (bVar2 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xa8))) = 0;
      return 1;
    }
LAB_004ed82b: ;
    *((int *)GEN_TOP((*(int *)(this + 0x18) + 0xac))) = *((int *)GEN_TOP((*(int *)(this + 0x18) + 0xac))) + 1;
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    bVar2 = F_00cbc040(this + 0x20 GEN_EDX_ARG);
    if (bVar2 != 0) {
      return 0;
    }
    F_004ebcc0(*(undefined * PTR32 *)(REFG(int, 0x1375a64) + 0xcc) GEN_EDX_ARG,*(undefined4 *)(this + 0x70));
    *(undefined4 *)(this + 0x70) = 0;
    return 1;
  }
  if ((-1 < *(int *)(this + 0x54)) && (*(int *)(this + 0x50) != 0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x50) + 4)));
    if (iVar1 != 0) {
      F_00d2eaf0(iVar1,*(int *)(this + 0x54));
    }
    *(undefined4 *)(this + 0x54) = 0xffffffff;
  }
  if ((-1 < *(int *)(this + 0x58)) && (iVar1 = *(int *)(this + 0x18), iVar1 != 0)) {
    if (0 < *(int *)(iVar1 + 0xac)) {
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) - 1;
    }
    if (*(int *)(iVar1 + 0xac) == 0) {
      bVar2 = F_00d2d530(*(undefined4 *)(this + 0x58),0);
      if (bVar2 == 0) goto LAB_004ed82b;
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xa8))) = 0;
    }
    *(undefined4 *)(this + 0x58) = 0xffffffff;
  }
  if (*(int *)(this + 0x5c) == 0) {
    return 1;
  }
  F_00406b30(*(int *)(this + 0x5c));
  *(undefined4 *)(this + 0x5c) = 0;
  return 1;
}

/* ref: Client::Sound::SoundData::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_004ed8d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4ed8d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(float *)(gen_frame + 0xc)) = param_3;
  (*(float *)(gen_frame + 0x10)) = param_4;
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  if (*(int *)(param_1 + 100) == 0) {
    F_00cbc630((undefined *)(param_1 + 0x20) GEN_EDX_FWD,0);
    F_00cbc4e0((undefined *)(param_1 + 0x20) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return;
}

/* ref: Client::Sound::SoundData::vf17 */
GEN_FRAME unsigned int GEN_THISCALL F_004ed940(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4ed940u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(float *)(gen_frame + 0xc)) = param_3;
  (*(float *)(gen_frame + 0x10)) = param_4;
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
  if (*(int *)(param_1 + 100) == 0) {
    F_00cbc630((undefined *)(param_1 + 0x20) GEN_EDX_FWD,0);
    F_00cbc550((undefined *)(param_1 + 0x20) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return;
}

/* ref: Client::Sound::SoundData::vf18 */
GEN_FRAME uint GEN_THISCALL F_004ed9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ed9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x1375a64);
  if ((((*(char *)(REFG(undefined4, 0x1375a64) + 0x1d) == '\0') &&
       (puVar1 = *(ushort * PTR32 *)(this + 0x5c), puVar1 != (ushort *)0x0)) && (param_1 != (ushort *)0x0))
     && (((param_2 == 0 || (uVar2 = param_2, *param_1 == param_2)) &&
         (uVar2 = (uint)*puVar1, *puVar1 == *param_1)))) {
    uVar3 = F_00c46aa0(puVar1,param_1,uVar2);
    uVar2 = (uint)uVar3;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x58);
  }
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf29 */
GEN_FRAME uint GEN_THISCALL F_004eda00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4eda00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1375a64);
  *(float *)(REFG(undefined4, 0x1375a64) + 0xb8) = param_2;
  return uVar1;
}

/* ref: FUN_004eda50 */
GEN_FRAME uint GEN_THISCALL F_004eda50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eda50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004eda70 */
GEN_FRAME uint GEN_THISCALL F_004eda70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eda70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004edac0 */
GEN_FRAME unsigned int GEN_THISCALL F_004edac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4edac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    *(int *)this = *(int *)this - 1;
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
    if (uVar1 != 0) {
      F_00406b30(uVar1);
    }
    if (*(int * PTR32 *)((int)this + 4) == param_1) {
      *(int *)((int)this + 4) = param_1[3];
    }
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 0xc) = param_1[3];
    }
    if (param_1[3] != 0) {
      *(int *)(param_1[3] + 8) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - 1;
    ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1);
  }
  return;
}

/* ref: Client::Sound::SoundData::vf39 */
GEN_FRAME unsigned int GEN_THISCALL F_004edb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4edb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004edac0(*(undefined * PTR32 *)(REFG(int, 0x1375a64) + 0xe0) GEN_EDX_FWD,param_1);
  return;
}

/* ref: Client::Sound::SoundData::vf42 */
GEN_FRAME uint GEN_THISCALL F_004edb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4edb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float * pfVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (this[0x6c] == (undefined1)0x0) {
    piVar1 = param_1 + 0x23;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar2 < 8) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))(param_1 GEN_EDX_FWD);
      uVar5 = param_1[0x2a];
      if (uVar5 == 0) {
        uVar5 = F_00d2d340(uVar4,0);
        param_1[0x2a] = uVar5;
      }
      param_1[0x2b] = param_1[0x2b] + 1;
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x20))(this);
      (*(float *)(gen_frame + 0x20)) = (float)extraout_ST0;
      iVar2 = *(int *)this;
      uVar9 = 1;
      uVar7 = 0;
      uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0x94))(this);
      uVar5 = F_00d2d700(((undefined1 *)(gen_frame + 0xc)),uVar5,uVar4,uVar7,uVar9);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar2 + 0xc))(this,uVar5)));
      F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      bVar3 = F_00cbc040(this_00 GEN_EDX_ARG);
      if (bVar3 != 0) {
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x84))(this GEN_EDX_ARG);
        if ((char)uVar5 != '\0') {
          uVar9 = 0;
          uVar7 = 0;
          fVar6 = (*(float *)(gen_frame + 0x20));
          fVar8 = *(float *)&REFG(undefined, 0x1097254);
          uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG);
          F_00cbdfe0(this_00 GEN_EDX_ARG,uVar5,fVar6,fVar8,gen_bits2f((unsigned int)(uVar7)),uVar9);
        }
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG);
        F_00cbc630(this_00 GEN_EDX_ARG,(uint)((char)uVar5 == '\0'));
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG);
        if ((char)uVar5 != '\0') {
          extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
          (*(float *)(gen_frame + 0x20)) = (float)extraout_ST0_00;
          extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x30))(this);
          (*(float *)(gen_frame + 0x1c)) = (float)extraout_ST0_01;
          extraout_ST0_02 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x34))(this);
          (*(float *)(gen_frame + 0x24)) = (float)extraout_ST0_02;
          (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x20));
          (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0x1c));
          (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
          (*(float *)(gen_frame + 0x30)) = (float)extraout_ST0_02;
          F_00cbc4e0(this_00 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)));
        }
        (*(float *)(gen_frame + 0x24)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
        pfVar10 = &(*(float *)(gen_frame + 0x24));
        extraout_ST0_03 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x38))(this);
        F_00cbdeb0(this_00 GEN_EDX_ARG,(float)extraout_ST0_03,(uint)pfVar10);
      }
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xac))(this GEN_EDX_ARG);
    }
  }
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,0);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: LinkList_VHandle_MemoryManager_Sound_Client_V1234::vf0 */
GEN_FRAME uint GEN_THISCALL F_004edd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4edd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10978bc));
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

/* ref: FUN_004edd90 */
GEN_FRAME uint GEN_THISCALL F_004edd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4edd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[1] = (*(undefined * PTR32 (*)[1])REFP(0x10978bc));
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x10978cc));
  in_ecx[1] = (*(undefined * PTR32 (*)[1])REFP(0x10978c4));
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Sound::MemoryManager::Handle::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004eddc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4eddc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Client::Sound::MemoryManager::Handle::vf2 */
GEN_NOFRAME uint F_004eddd0(void)
{
  GEN_ENTER(0x4eddd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Sound::MemoryManager::Handle::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004edde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4edde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::Sound::MemoryManager::Handle::vf4 */
GEN_NOFRAME uint F_004eddf0(void)
{
  GEN_ENTER(0x4eddf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Sound::MemoryManager::Handle::vf5 */
GEN_FRAME uint GEN_THISCALL F_004ede00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ede00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xa0))(param_1);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xa8))(param_1,uVar2);
  return uVar2;
}

/* ref: Client::Sound::MemoryManager::Handle::vf6 */
GEN_NOFRAME unsigned int F_004ede30(void)
{
  GEN_ENTER(0x4ede30u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Sound::MemoryManager::Handle::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_004ede40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4ede40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_004ede50 */
GEN_NOFRAME uint GEN_THISCALL F_004ede50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ede50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004edf50((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004edec0 */
GEN_FRAME uint GEN_THISCALL F_004edec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4edec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00(param_1,0,uVar1,uVar4);
  if (uVar1 != 0) {
    *(int *)this = *(int *)this + 1;
    uVar4 = 0;
    uVar2 = F_004042b0();
    puVar3 = (undefined4 *)F_00406bd0(0x14,0,uVar2,uVar4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x10978bc));
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x10978cc));
      puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x10978c4));
      puVar3[4] = uVar1;
    }
    puVar3[3] = *(undefined4 *)((int)this + 4);
    if (*(int *)((int)this + 4) != 0) {
      *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = puVar3;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
    return (uint)puVar3;
  }
  return 0;
}

/* ref: Client::Sound::MemoryManager::Handle::vf0 */
GEN_FRAME uint GEN_THISCALL F_004edf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4edf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10978cc));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10978c4));
  if (*(int *)(this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0xc))) = *(undefined4 *)(this + 0xc);
  }
  if (*(int *)(this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8))) = *(undefined4 *)(this + 8);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10978bc));
  if (*(int *)(this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0xc))) = *(undefined4 *)(this + 0xc);
  }
  if (*(int *)(this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8))) = *(undefined4 *)(this + 8);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1097898));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Sound::SoundData::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_004edfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4edfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 0) {
    if ((*(int *)(this + 100) == 2) && (*(int *)(this + 0x70) != 0)) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x70) + 4))))
                        (*(int * PTR32 *)(this + 0x70) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                         param_7,param_8);
      return uVar3;
    }
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)(iVar1 + 0x3c);
    if (0xf < *(uint *)(iVar1 + 0x50)) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: Client::Sound::SoundData::vf38 */
GEN_FRAME uint GEN_THISCALL F_004ee000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004edec0(*(undefined * PTR32 *)(REFG(int, 0x1375a64) + 0xe0) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_004ee020 */
GEN_NOFRAME uint GEN_THISCALL F_004ee020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ee020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00cbbdb0((int)this + 0x20 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1097338));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_004ee060 */
GEN_NOFRAME uint GEN_THISCALL F_004ee060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004ee130((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf0 */
GEN_FRAME uint GEN_THISCALL F_004ee070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pSVar1;
  undefined * pSVar2;
  int iVar4;
  undefined * pSVar3;
  
  if ((param_1 & 2) == 0) {
    F_00cbbdb0(this + 0x20 GEN_EDX_FWD);
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[1])REFP(0x1097338));
    if (*(int *)(this + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 8))) = *(undefined4 *)(this + 8);
    }
    if (*(int *)(this + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 4))) = *(undefined4 *)(this + 4);
    }
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  pSVar1 = this - 4;
  iVar4 = *(int *)pSVar1 - 1;
  if (-1 < iVar4) {
    pSVar3 = this + *(int *)((int)(uintptr_t)pSVar1) * 0x74 + 4;
    do {
      pSVar2 = pSVar3 - 0x74;
      F_00cbbdb0(pSVar3 - 0x58 GEN_EDX_ARG);
      *(undefined * PTR32 * PTR32 *)(pSVar3 - 0x78) =
           (*(undefined * PTR32 (*)[1])REFP(0x1097338));
      if (*(int *)pSVar2 != 0) {
        *(int *)(*(int *)pSVar2 + 8) = *(int *)(pSVar3 - 0x70);
      }
      if (*(int *)(pSVar3 - 0x70) != 0) {
        *((int *)GEN_TOP((*(int *)(pSVar3 - 0x70) + 4))) = *(int *)pSVar2;
      }
      iVar4 = iVar4 - 1;
      *(int *)pSVar2 = 0;
      *(int *)(pSVar3 - 0x70) = 0;
      pSVar3 = pSVar2;
    } while (-1 < iVar4);
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(pSVar1);
  }
  return (uint)pSVar1;
}

/* ref: Client::Sound::SoundManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_004ee130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109790c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10978f0));
  F_004eae80(this GEN_EDX_FWD,0);
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x1a0));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x188));
  F_004cf880(this + 4 GEN_EDX_ARG);
  F_005095f0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004ee190 */
GEN_FRAME uint F_004ee190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee190u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[4];
  fVar4 = *param_3;
  fVar5 = param_3[0xc];
  param_1[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)param_3[5] + (float10)param_3[1] * (float10)fVar2)
                      + (float10)param_3[0xd])));
  *param_1 = ((float)GEN_TOF(((float10)fVar5 +
                    ((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3))));
  return (uint)param_1;
}

/* ref: FUN_004ee1e0 */
GEN_FRAME uint F_004ee1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee1e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[4];
  fVar4 = *param_3;
  fVar5 = param_3[0xc];
  param_1[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)param_3[5] + (float10)param_3[1] * (float10)fVar2)
                      + (float10)param_3[0xd])));
  *param_1 = ((float)GEN_TOF(((float10)fVar5 +
                    ((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3))));
  return (uint)param_1;
}

/* ref: FUN_004ee230 */
GEN_FRAME uint F_004ee230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee230u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)*(float *)param_2;
  fVar5 = (float10)*(float *)(param_2 + 4);
  fVar1 = param_3[4];
  fVar2 = *param_3;
  fVar3 = param_3[0xc];
  fVar6 = (float10)((float)GEN_TOF(((float10)1 /
                          ((fVar4 * (float10)param_3[3] + fVar5 * (float10)param_3[7]) +
                          (float10)param_3[0xf]))));
  param_1[1] = ((float)GEN_TOF((fVar6 * ((float10)param_3[0xd] +
                               ((float10)param_3[1] * fVar4 + (float10)param_3[5] * fVar5)))));
  *param_1 = ((float)GEN_TOF((fVar6 * ((fVar4 * (float10)fVar2 + (float10)fVar1 * fVar5) + (float10)fVar3))));
  return (uint)param_1;
}

/* ref: FUN_004ee2b0 */
GEN_FRAME uint F_004ee2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee2b0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[4];
  fVar4 = *param_3;
  param_1[1] = (float)((float10)fVar1 * (float10)param_3[5] + (float10)param_3[1] * (float10)fVar2);
  *param_1 = (float)((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3);
  return (uint)param_1;
}

/* ref: FUN_004ee300 */
GEN_FRAME uint F_004ee300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee300u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[4];
  fVar4 = *param_3;
  param_1[1] = (float)((float10)fVar1 * (float10)param_3[5] + (float10)param_3[1] * (float10)fVar2);
  *param_1 = (float)((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3);
  return (uint)param_1;
}

/* ref: FUN_004ee350 */
GEN_FRAME uint F_004ee350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee350u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  param_1[1] = ((float)GEN_TOF((((float10)fVar2 * (float10)param_3[1] + (float10)fVar1 * (float10)param_3[5])
                      + (float10)param_3[0xd])));
  *param_1 = ((float)GEN_TOF((((float10)fVar2 * (float10)*param_3 + (float10)param_3[4] * (float10)fVar1) +
                    (float10)param_3[0xc])));
  return (uint)param_1;
}

/* ref: FUN_004ee3a0 */
GEN_FRAME uint F_004ee3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee3a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  param_1[1] = ((float)GEN_TOF((((float10)fVar2 * (float10)param_3[1] + (float10)fVar1 * (float10)param_3[5])
                      + (float10)param_3[0xd])));
  *param_1 = ((float)GEN_TOF((((float10)fVar2 * (float10)*param_3 + (float10)param_3[4] * (float10)fVar1) +
                    (float10)param_3[0xc])));
  return (uint)param_1;
}

/* ref: FUN_004ee3f0 */
GEN_FRAME uint F_004ee3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee3f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_004ee230(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee410 */
GEN_FRAME uint F_004ee410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee410u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  param_1[1] = (float)((float10)fVar2 * (float10)param_3[1] + (float10)fVar1 * (float10)param_3[5]);
  *param_1 = (float)((float10)fVar2 * (float10)*param_3 + (float10)param_3[4] * (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_004ee460 */
GEN_FRAME uint F_004ee460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee460u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  param_1[1] = (float)((float10)fVar2 * (float10)param_3[1] + (float10)fVar1 * (float10)param_3[5]);
  *param_1 = (float)((float10)fVar2 * (float10)*param_3 + (float10)param_3[4] * (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_004ee4b0 */
GEN_FRAME unsigned int GEN_THISCALL F_004ee4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee4b0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = in_ecx[1];
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 0x30);
  in_ecx[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)*(float *)(param_2 + 0x14) +
                      (float10)*(float *)(param_2 + 4) * (float10)*in_ecx) +
                     (float10)*(float *)(param_2 + 0x34))));
  *in_ecx = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar2 + (float10)*in_ecx * (float10)fVar3) +
                   (float10)fVar4)));
  return 0;
}

/* ref: FUN_004ee500 */
GEN_FRAME unsigned int GEN_THISCALL F_004ee500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee500u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = in_ecx[1];
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 0x30);
  in_ecx[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)*(float *)(param_2 + 0x14) +
                      (float10)*(float *)(param_2 + 4) * (float10)*in_ecx) +
                     (float10)*(float *)(param_2 + 0x34))));
  *in_ecx = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar2 + (float10)*in_ecx * (float10)fVar3) +
                   (float10)fVar4)));
  return 0;
}

/* ref: FUN_004ee550 */
GEN_FRAME unsigned int GEN_THISCALL F_004ee550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee550u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)*param_1;
  fVar5 = (float10)param_1[1];
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 0x30);
  fVar6 = (float10)((float)GEN_TOF(((float10)1 /
                          ((fVar4 * (float10)*(float *)(param_2 + 0xc) +
                           fVar5 * (float10)*(float *)(param_2 + 0x1c)) +
                          (float10)*(float *)(param_2 + 0x3c)))));
  param_1[1] = ((float)GEN_TOF((fVar6 * ((float10)*(float *)(param_2 + 0x34) +
                               ((float10)*(float *)(param_2 + 4) * fVar4 +
                               (float10)*(float *)(param_2 + 0x14) * fVar5)))));
  *param_1 = ((float)GEN_TOF((fVar6 * (((float10)fVar2 * fVar4 + (float10)fVar1 * fVar5) + (float10)fVar3))));
  return 0;
}

/* ref: FUN_004ee5d0 */
GEN_FRAME unsigned int GEN_THISCALL F_004ee5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee5d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)param_2;
  in_ecx[1] = ((float)GEN_TOF(((float10)fVar1 * (float10)*(float *)(param_2 + 0x14) +
                     (float10)*(float *)(param_2 + 4) * (float10)*in_ecx)));
  *in_ecx = (float)((float10)fVar1 * (float10)fVar2 + (float10)*in_ecx * (float10)fVar3);
  return 0;
}

/* ref: FUN_004ee620 */
GEN_FRAME unsigned int GEN_THISCALL F_004ee620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee620u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)param_2;
  in_ecx[1] = ((float)GEN_TOF(((float10)fVar1 * (float10)*(float *)(param_2 + 0x14) +
                     (float10)*(float *)(param_2 + 4) * (float10)*in_ecx)));
  *in_ecx = (float)((float10)fVar1 * (float10)fVar2 + (float10)*in_ecx * (float10)fVar3);
  return 0;
}

/* ref: FUN_004ee670 */
GEN_FRAME uint F_004ee670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee670u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)*(float *)(param_2 + 4);
  fVar10 = (float10)*(float *)param_2;
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 0x18);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  *param_1 = ((float)GEN_TOF((((fVar10 * (float10)*(float *)param_3 +
                      fVar9 * (float10)*(float *)(param_3 + 0x10)) +
                     fVar11 * (float10)*(float *)(param_3 + 0x20)) +
                    (float10)*(float *)(param_3 + 0x30))));
  param_1[2] = ((float)GEN_TOF((((fVar10 * (float10)fVar5 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11
                       ) + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar1 * fVar10)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_004ee700 */
GEN_FRAME uint F_004ee700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee700u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)*(float *)(param_2 + 4);
  fVar10 = (float10)*(float *)param_2;
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 0x18);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  *param_1 = ((float)GEN_TOF((((fVar10 * (float10)*(float *)param_3 +
                      fVar9 * (float10)*(float *)(param_3 + 0x10)) +
                     fVar11 * (float10)*(float *)(param_3 + 0x20)) +
                    (float10)*(float *)(param_3 + 0x30))));
  param_1[2] = ((float)GEN_TOF((((fVar10 * (float10)fVar5 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11
                       ) + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar1 * fVar10)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_004ee790 */
GEN_FRAME uint F_004ee790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee790u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar9 = (float10)*(float *)param_2;
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar12 = (float10)((float)GEN_TOF(((float10)1 /
                           (((fVar9 * (float10)*(float *)(param_3 + 0xc) +
                             fVar10 * (float10)*(float *)(param_3 + 0x1c)) +
                            fVar11 * (float10)*(float *)(param_3 + 0x2c)) +
                           (float10)*(float *)(param_3 + 0x3c)))));
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 0x18);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  *param_1 = ((float)GEN_TOF((fVar12 * (((float10)*(float *)(param_3 + 0x20) * fVar11 +
                               (fVar9 * (float10)*(float *)param_3 +
                               (float10)*(float *)(param_3 + 0x10) * fVar10)) +
                              (float10)*(float *)(param_3 + 0x30)))));
  param_1[2] = ((float)GEN_TOF((fVar12 * ((float10)fVar8 +
                                (fVar11 * (float10)fVar7 +
                                ((float10)fVar5 * fVar9 + (float10)fVar6 * fVar10))))));
  param_1[1] = ((float)GEN_TOF(((((float10)fVar3 * fVar11 +
                        ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar9)) + (float10)fVar4) *
                      fVar12)));
  return (uint)param_1;
}

/* ref: FUN_004ee850 */
GEN_FRAME uint F_004ee850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee850u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)*(float *)(param_2 + 4);
  fVar8 = (float10)*(float *)param_2;
  fVar9 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = *(float *)(param_3 + 0x18);
  fVar6 = *(float *)(param_3 + 0x28);
  *param_1 = ((float)GEN_TOF(((fVar8 * (float10)*(float *)param_3 +
                     fVar7 * (float10)*(float *)(param_3 + 0x10)) +
                    fVar9 * (float10)*(float *)(param_3 + 0x20))));
  param_1[2] = ((float)GEN_TOF(((fVar8 * (float10)fVar4 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar7 + (float10)fVar1 * fVar8))));
  return (uint)param_1;
}

/* ref: FUN_004ee8e0 */
GEN_FRAME uint F_004ee8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee8e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)*(float *)(param_2 + 4);
  fVar8 = (float10)*(float *)param_2;
  fVar9 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = *(float *)(param_3 + 0x18);
  fVar6 = *(float *)(param_3 + 0x28);
  *param_1 = ((float)GEN_TOF(((fVar8 * (float10)*(float *)param_3 +
                     fVar7 * (float10)*(float *)(param_3 + 0x10)) +
                    fVar9 * (float10)*(float *)(param_3 + 0x20))));
  param_1[2] = ((float)GEN_TOF(((fVar8 * (float10)fVar4 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar7 + (float10)fVar1 * fVar8))));
  return (uint)param_1;
}

/* ref: FUN_004ee970 */
GEN_FRAME uint F_004ee970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee970u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee670(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee990 */
GEN_FRAME uint F_004ee990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee990u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee700(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee9b0 */
GEN_FRAME uint F_004ee9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee9b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee790(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee9d0 */
GEN_FRAME uint F_004ee9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee9d0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee850(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee9f0 */
GEN_FRAME uint F_004ee9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee9f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee8e0(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004eea10 */
GEN_FRAME uint GEN_THISCALL F_004eea10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eea10u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)param_1[1];
  fVar10 = (float10)*param_1;
  fVar11 = (float10)param_1[2];
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x34);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  *param_1 = ((float)GEN_TOF((((fVar9 * (float10)*(float *)(param_2 + 0x10) +
                      fVar10 * (float10)*(float *)param_2) +
                     fVar11 * (float10)*(float *)(param_2 + 0x20)) +
                    (float10)*(float *)(param_2 + 0x30))));
  param_1[2] = ((float)GEN_TOF(((((float10)fVar5 * fVar10 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11
                       ) + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar1 * fVar10)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_004eeaa0 */
GEN_FRAME unsigned int GEN_THISCALL F_004eeaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eeaa0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)param_1[1];
  fVar10 = (float10)*param_1;
  fVar11 = (float10)param_1[2];
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x34);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  *param_1 = ((float)GEN_TOF((((fVar9 * (float10)*(float *)(param_2 + 0x10) +
                      fVar10 * (float10)*(float *)param_2) +
                     fVar11 * (float10)*(float *)(param_2 + 0x20)) +
                    (float10)*(float *)(param_2 + 0x30))));
  param_1[2] = ((float)GEN_TOF(((((float10)fVar5 * fVar10 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11
                       ) + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar1 * fVar10)
                       ) + (float10)fVar4)));
  return 0;
}

/* ref: FUN_004eeb30 */
GEN_FRAME byte GEN_THISCALL F_004eeb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eeb30u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar9 = (float10)*param_1;
  fVar10 = (float10)param_1[1];
  fVar11 = (float10)param_1[2];
  fVar12 = (float10)((float)GEN_TOF(((float10)1 /
                           (((fVar9 * (float10)*(float *)(param_2 + 0xc) +
                             fVar10 * (float10)*(float *)(param_2 + 0x1c)) +
                            fVar11 * (float10)*(float *)(param_2 + 0x2c)) +
                           (float10)*(float *)(param_2 + 0x3c)))));
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x34);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  *param_1 = ((float)GEN_TOF((fVar12 * (((float10)*(float *)(param_2 + 0x20) * fVar11 +
                               (fVar9 * (float10)*(float *)param_2 +
                               (float10)*(float *)(param_2 + 0x10) * fVar10)) +
                              (float10)*(float *)(param_2 + 0x30)))));
  param_1[2] = ((float)GEN_TOF((fVar12 * ((float10)fVar8 +
                                (fVar11 * (float10)fVar7 +
                                ((float10)fVar5 * fVar9 + (float10)fVar6 * fVar10))))));
  param_1[1] = ((float)GEN_TOF(((((float10)fVar3 * fVar11 +
                        ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar9)) + (float10)fVar4) *
                      fVar12)));
  return (byte)param_1;
}

/* ref: FUN_004eebf0 */
GEN_FRAME uint GEN_THISCALL F_004eebf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eebf0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)param_1[1];
  fVar8 = (float10)*param_1;
  fVar9 = (float10)param_1[2];
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 0x28);
  *param_1 = ((float)GEN_TOF(((fVar7 * (float10)*(float *)(param_2 + 0x10) +
                     fVar8 * (float10)*(float *)param_2) +
                    fVar9 * (float10)*(float *)(param_2 + 0x20))));
  param_1[2] = ((float)GEN_TOF((((float10)fVar4 * fVar8 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar7 + (float10)fVar1 * fVar8))));
  return (uint)param_1;
}

/* ref: FUN_004eec80 */
GEN_FRAME uint GEN_THISCALL F_004eec80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eec80u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)param_1[1];
  fVar8 = (float10)*param_1;
  fVar9 = (float10)param_1[2];
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 0x28);
  *param_1 = ((float)GEN_TOF(((fVar7 * (float10)*(float *)(param_2 + 0x10) +
                     fVar8 * (float10)*(float *)param_2) +
                    fVar9 * (float10)*(float *)(param_2 + 0x20))));
  param_1[2] = ((float)GEN_TOF((((float10)fVar4 * fVar8 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar7 + (float10)fVar1 * fVar8))));
  return (uint)param_1;
}

/* ref: FUN_004eed10 */
GEN_FRAME uint F_004eed10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4eed10u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  fVar1 = *(float *)(param_3 + 0x10);
  fVar13 = (float10)*(float *)(param_2 + 4);
  fVar14 = (float10)*(float *)param_2;
  fVar2 = *(float *)param_3;
  fVar3 = *(float *)(param_3 + 0x20);
  fVar15 = (float10)*(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 0x30);
  fVar16 = (float10)*(float *)(param_2 + 0xc);
  fVar5 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 0x18);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  fVar9 = *(float *)(param_3 + 0xc);
  fVar10 = *(float *)(param_3 + 0x1c);
  fVar11 = *(float *)(param_3 + 0x2c);
  fVar12 = *(float *)(param_3 + 0x3c);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x34) * fVar16 +
                      ((float10)*(float *)(param_3 + 0x24) * fVar15 +
                      ((float10)*(float *)(param_3 + 0x14) * fVar13 +
                      (float10)*(float *)(param_3 + 4) * fVar14)))));
  *param_1 = ((float)GEN_TOF((((fVar14 * (float10)fVar2 + fVar13 * (float10)fVar1) + fVar15 * (float10)fVar3)
                    + fVar16 * (float10)fVar4)));
  param_1[3] = ((float)GEN_TOF((fVar16 * (float10)fVar12 +
                      (((float10)fVar9 * fVar14 + (float10)fVar10 * fVar13) +
                      (float10)fVar11 * fVar15))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar8 * fVar16 +
                      ((float10)fVar7 * fVar15 + ((float10)fVar6 * fVar13 + (float10)fVar5 * fVar14)
                      ))));
  return (uint)param_1;
}

/* ref: FUN_004eede0 */
GEN_FRAME uint F_004eede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4eede0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004eed10(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004eee00 */
GEN_FRAME unsigned int GEN_THISCALL F_004eee00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eee00u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar13 = (float10)param_1[1];
  fVar14 = (float10)*param_1;
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 0x20);
  fVar15 = (float10)param_1[2];
  fVar4 = *(float *)(param_2 + 0x30);
  fVar16 = (float10)param_1[3];
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  fVar9 = *(float *)(param_2 + 0xc);
  fVar10 = *(float *)(param_2 + 0x1c);
  fVar11 = *(float *)(param_2 + 0x2c);
  fVar12 = *(float *)(param_2 + 0x3c);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0x34) * fVar16 +
                      ((float10)*(float *)(param_2 + 0x24) * fVar15 +
                      ((float10)*(float *)(param_2 + 0x14) * fVar13 +
                      (float10)*(float *)(param_2 + 4) * fVar14)))));
  *param_1 = ((float)GEN_TOF((((fVar14 * (float10)fVar2 + fVar13 * (float10)fVar1) + fVar15 * (float10)fVar3)
                    + fVar16 * (float10)fVar4)));
  param_1[3] = ((float)GEN_TOF((fVar16 * (float10)fVar12 +
                      (((float10)fVar9 * fVar14 + (float10)fVar10 * fVar13) +
                      (float10)fVar11 * fVar15))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar8 * fVar16 +
                      ((float10)fVar7 * fVar15 + ((float10)fVar6 * fVar13 + (float10)fVar5 * fVar14)
                      ))));
  return 0;
}

/* ref: FUN_004eeed0 */
GEN_FRAME uint GEN_THISCALL F_004eeed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4eeed0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined1 uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  uVar5 = param_2;
  fVar7 = (float10)*(float *)(param_2 + 0x14);
  fVar8 = (float10)*(float *)(param_2 + 0x28);
  fVar9 = (float10)*(float *)param_2;
  fVar1 = ((float)GEN_TOF(((fVar7 - fVar8) - fVar9)));
  fVar2 = ((float)GEN_TOF(((fVar8 - fVar9) - fVar7)));
  fVar3 = ((float)GEN_TOF(((fVar9 + fVar7) + fVar8)));
  fVar4 = ((float)GEN_TOF(((fVar9 - fVar7) - fVar8)));
  fVar7 = (float10)fVar4;
  fVar8 = (float10)fVar1;
  param_2 = (uint)gen_fl2bits(fVar4);
  if (fVar7 < fVar8) {
    param_2 = (uint)gen_fl2bits(fVar1);
  }
  uVar6 = (!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && !(fVar8 <= fVar7);
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar2) {
    uVar6 = 2;
    param_2 = (uint)gen_fl2bits(fVar2);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar3) {
    uVar6 = 3;
    param_2 = (uint)gen_fl2bits(fVar3);
  }
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)(float)(((float10)GEN_TOD(gen_bits2f(param_2))) +
                                                       (float10)REFG(double, 0x1088130))))) *
                 (float10)REFG(double, 0x1088108))));
  fVar2 = (float)((float10)*(double *)&REFG(undefined, 0x1094878) / (float10)fVar1);
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    *param_1 = fVar1;
    fVar7 = (float10)fVar2;
    param_1[1] = ((float)GEN_TOF((fVar7 * ((float10)*(float *)(uVar5 + 0x10) + (float10)*(float *)(uVar5 + 4)
                                 ))));
    param_1[2] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x20) + (float10)*(float *)(uVar5 + 8)) *
                        fVar7)));
    param_1[3] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x18) - (float10)*(float *)(uVar5 + 0x24)) *
                        fVar7)));
    return (uint)param_1;
  case 1: ;
    fVar3 = *(float *)(uVar5 + 0x10);
    fVar4 = *(float *)(uVar5 + 4);
    param_1[1] = fVar1;
    fVar7 = (float10)fVar2;
    *param_1 = ((float)GEN_TOF((fVar7 * ((float10)fVar3 + (float10)fVar4))));
    param_1[2] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x24) + (float10)*(float *)(uVar5 + 0x18)) *
                        fVar7)));
    param_1[3] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x20) - (float10)*(float *)(uVar5 + 8)) *
                        fVar7)));
    return (uint)param_1;
  case 2: ;
    fVar7 = (float10)fVar2;
    *param_1 = ((float)GEN_TOF((fVar7 * ((float10)*(float *)(uVar5 + 0x20) + (float10)*(float *)(uVar5 + 8)))))
    ;
    fVar2 = *(float *)(uVar5 + 0x24);
    fVar3 = *(float *)(uVar5 + 0x18);
    param_1[2] = fVar1;
    param_1[1] = ((float)GEN_TOF((((float10)fVar2 + (float10)fVar3) * fVar7)));
    param_1[3] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 4) - (float10)*(float *)(uVar5 + 0x10)) *
                        fVar7)));
    return (uint)param_1;
  case 3: ;
    fVar7 = (float10)fVar2;
    *param_1 = ((float)GEN_TOF((fVar7 * ((float10)*(float *)(uVar5 + 0x18) -
                               (float10)*(float *)(uVar5 + 0x24)))));
    param_1[1] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x20) - (float10)*(float *)(uVar5 + 8)) *
                        fVar7)));
    fVar2 = *(float *)(uVar5 + 4);
    fVar3 = *(float *)(uVar5 + 0x10);
    param_1[3] = fVar1;
    param_1[2] = ((float)GEN_TOF((((float10)fVar2 - (float10)fVar3) * fVar7)));
  }
  return (uint)param_1;
}

/* ref: FUN_004ef0c0 */
GEN_FRAME uint GEN_THISCALL F_004ef0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ef0c0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = *(float *)param_2;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4)));
  fVar3 = (float10)1;
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar4)));
  *param_1 = ((float)GEN_TOF(((fVar3 - fVar5 * (float10)*(float *)(param_2 + 4)) -
                    fVar6 * (float10)*(float *)(param_2 + 8))));
  fVar4 = (float10)(float)((float10)fVar1 * fVar4);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * fVar6 +
                      fVar4 * (float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar4 -
                      (float10)*(float *)(param_2 + 0xc) * fVar5)));
  param_1[4] = ((float)GEN_TOF(((float10)*(float *)param_2 * fVar5 -
                      (float10)*(float *)(param_2 + 0xc) * fVar6)));
  param_1[5] = ((float)GEN_TOF(((fVar3 - (float10)*(float *)param_2 * fVar4) -
                      (float10)*(float *)(param_2 + 8) * fVar6)));
  param_1[6] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * fVar4 +
                      (float10)*(float *)(param_2 + 8) * fVar5)));
  param_1[8] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * fVar5 +
                      (float10)*(float *)(param_2 + 8) * fVar4)));
  param_1[9] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar5 -
                      (float10)*(float *)(param_2 + 0xc) * fVar4)));
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[10] = ((float)GEN_TOF(((fVar3 - (float10)fVar1 * fVar4) - (float10)fVar2 * fVar5)));
  return (uint)param_1;
}

/* ref: FUN_004ef1c0 */
GEN_FRAME uint GEN_THISCALL F_004ef1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4ef1c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar3 = (float10)(float)fVar3;
  fVar6 = (float10)1 - fVar3;
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar4 = (float10)(float)((float10)*(float *)param_2 * fVar6);
  *param_1 = (float)(fVar3 + fVar4 * (float10)*(float *)param_2);
  fVar5 = (float10)(float)fVar5;
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4 +
                      fVar5 * (float10)*(float *)(param_2 + 8))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar4 -
                      (float10)*(float *)(param_2 + 4) * fVar5)));
  fVar4 = (float10)(float)((float10)fVar1 * fVar6);
  param_1[4] = ((float)GEN_TOF((fVar4 * (float10)*(float *)param_2 - (float10)*(float *)(param_2 + 8) * fVar5
                      )));
  param_1[5] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4 + fVar3)));
  param_1[6] = ((float)GEN_TOF(((float10)*(float *)param_2 * fVar5 + (float10)*(float *)(param_2 + 8) * fVar4
                      )));
  fVar4 = (float10)(float)((float10)fVar2 * fVar6);
  param_1[8] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar5 + fVar4 * (float10)*(float *)param_2
                      )));
  param_1[9] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4 - (float10)*(float *)param_2 * fVar5
                      )));
  fVar1 = *(float *)(param_2 + 8);
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[10] = (float)(fVar4 * (float10)fVar1 + fVar3);
  return (uint)param_1;
}

/* ref: FUN_004ef2d0 */
GEN_FRAME float10 GEN_THISCALL F_004ef2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ef2d0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  return (float10)((float)GEN_TOF(((((float10)in_ecx[10] * (float10)in_ecx[5] -
                           (float10)in_ecx[9] * (float10)in_ecx[6]) * (float10)*in_ecx -
                          (float10)in_ecx[4] *
                          ((float10)in_ecx[1] * (float10)in_ecx[10] -
                          (float10)in_ecx[2] * (float10)in_ecx[9])) +
                         (float10)in_ecx[8] *
                         ((float10)in_ecx[1] * (float10)in_ecx[6] -
                         (float10)in_ecx[2] * (float10)in_ecx[5]))));
}

/* ref: FUN_004ef350 */
GEN_FRAME uint F_004ef350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ef350u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar20 = (float10)fVar2;
  fVar21 = (float10)*(float *)(param_3 + 4);
  fVar22 = (float10)*(float *)(param_3 + 0x14);
  fVar23 = (float10)fVar1;
  fVar24 = (float10)*(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x28);
  fVar25 = (float10)*(float *)(param_3 + 8);
  fVar26 = (float10)*(float *)(param_3 + 0x18);
  fVar5 = *(float *)(param_2 + 0x14);
  fVar6 = *(float *)(param_3 + 0x10);
  fVar7 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_3 + 0x20);
  fVar11 = *(float *)(param_2 + 0x24);
  fVar12 = *(float *)(param_2 + 0x20);
  fVar13 = *(float *)(param_2 + 0x28);
  fVar14 = *(float *)(param_2 + 0x34);
  fVar15 = *(float *)(param_2 + 0x30);
  fVar16 = *(float *)(param_2 + 0x38);
  fVar17 = *(float *)(param_3 + 0x30);
  fVar27 = (float10)fVar15;
  fVar28 = (float10)fVar14;
  fVar29 = (float10)fVar16;
  fVar18 = *(float *)(param_3 + 0x34);
  fVar19 = *(float *)(param_3 + 0x38);
  param_1[1] = ((float)GEN_TOF(((fVar21 * fVar20 + fVar23 * fVar22) + fVar24 * (float10)fVar3)));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar25 * fVar20 + fVar26 * fVar23))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                      ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  param_1[5] = ((float)GEN_TOF(((float10)fVar9 * fVar24 + ((float10)fVar5 * fVar22 + (float10)fVar7 * fVar21)
                      )));
  param_1[6] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                      ((float10)fVar5 * fVar26 + (float10)fVar7 * fVar25))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                      ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  param_1[9] = ((float)GEN_TOF(((float10)fVar13 * fVar24 +
                      ((float10)fVar11 * fVar22 + (float10)fVar12 * fVar21))));
  param_1[10] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                       ((float10)fVar11 * fVar26 + (float10)fVar12 * fVar25))));
  param_1[0xc] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar10 +
                         ((float10)fVar14 * (float10)fVar6 + (float10)fVar15 * (float10)fVar8)) +
                        (float10)fVar17)));
  param_1[0xd] = ((float)GEN_TOF(((float10)fVar18 + ((fVar27 * fVar21 + fVar28 * fVar22) + fVar29 * fVar24))));
  *param_1 = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar3 +
                    ((float10)fVar6 * (float10)fVar1 + (float10)fVar8 * (float10)fVar2))));
  param_1[0xe] = ((float)GEN_TOF(((fVar29 * (float10)fVar4 + (fVar27 * fVar25 + fVar28 * fVar26)) +
                        (float10)fVar19)));
  return (uint)param_1;
}

/* ref: FUN_004ef5a0 */
GEN_FRAME unsigned int F_004ef5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ef5a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar5 = (float10)*(float *)param_3;
  fVar6 = (float10)fVar2;
  fVar7 = (float10)*(float *)(param_3 + 0x10);
  fVar8 = (float10)fVar1;
  fVar9 = (float10)*(float *)(param_3 + 0x20);
  *(float *)param_1 = ((float)GEN_TOF(((fVar6 * fVar5 + fVar8 * fVar7) + fVar9 * (float10)fVar3)));
  fVar4 = *(float *)(param_3 + 0x24);
  fVar10 = (float10)*(float *)(param_3 + 4);
  fVar11 = (float10)*(float *)(param_3 + 0x14);
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar10 * fVar6 + fVar11 * fVar8))));
  fVar1 = *(float *)(param_3 + 0x18);
  fVar1 = *(float *)(param_3 + 8);
  fVar1 = *(float *)(param_3 + 0x28);
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar3 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar2))));
  fVar1 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0x10) =
       ((float)GEN_TOF(((float10)fVar1 * fVar9 + ((float10)fVar1 * fVar7 + (float10)fVar1 * fVar5))));
  *(float *)(param_1 + 0x14) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar4 + ((float10)fVar1 * fVar11 + (float10)fVar1 * fVar10)
              )));
  *(float *)(param_1 + 0x18) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar1))));
  fVar1 = *(float *)(param_2 + 0x24);
  fVar1 = *(float *)(param_2 + 0x20);
  fVar1 = *(float *)(param_2 + 0x28);
  *(float *)(param_1 + 0x20) =
       ((float)GEN_TOF(((float10)fVar1 * fVar9 + ((float10)fVar1 * fVar7 + (float10)fVar1 * fVar5))));
  *(float *)(param_1 + 0x24) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar4 + ((float10)fVar1 * fVar11 + (float10)fVar1 * fVar10)
              )));
  *(float *)(param_1 + 0x28) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar1))));
  fVar5 = (float10)*(float *)(param_2 + 0x30);
  fVar5 = (float10)*(float *)(param_2 + 0x34);
  fVar5 = (float10)*(float *)(param_2 + 0x38);
  *(float *)(param_1 + 0x30) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x30) +
              ((fVar5 * fVar5 + fVar5 * fVar7) + fVar5 * fVar9))));
  *(float *)(param_1 + 0x34) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x34) +
              (fVar5 * (float10)fVar4 + (fVar5 * fVar10 + fVar5 * fVar11)))));
  *(float *)(param_1 + 0x38) =
       ((float)GEN_TOF(((fVar5 * (float10)fVar1 + ((float10)fVar1 * fVar5 + (float10)fVar1 * fVar5)) +
              (float10)*(float *)(param_3 + 0x38))));
  return 0;
}

/* ref: FUN_004ef780 */
GEN_FRAME uint F_004ef780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ef780u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float * pfVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  fVar13 = F_004ef2d0(param_2 GEN_EDX_ARG);
  fVar13 = (float10)(float)((float10)1 / fVar13);
  if (((float10)REFG(double, 0x10909a8) <= fVar13) && (fVar13 <= (float10)REFG(double, 0x10909a0))) {
    fVar1 = ((float *)(uint)(param_2))[1];
    fVar2 = ((float *)(uint)(param_2))[2];
    fVar14 = (float10)fVar1;
    fVar15 = ((float10)GEN_TOD(((float *)(uint)(param_2))[10]));
    fVar16 = ((float10)GEN_TOD(((float *)(uint)(param_2))[9]));
    fVar3 = ((float *)(uint)(param_2))[6];
    fVar4 = ((float *)(uint)(param_2))[5];
    fVar18 = (float10)fVar3 * fVar14 - (float10)fVar4 * (float10)fVar2;
    fVar5 = ((float *)(uint)(param_2))[4];
    fVar17 = ((float10)GEN_TOD(((float *)(uint)(param_2))[8]));
    fVar6 = *((float *)(uint)(param_2));
    fVar19 = (float10)fVar6 * (float10)fVar4 - (float10)fVar5 * fVar14;
    fVar7 = ((float *)(uint)(param_2))[0xe];
    fVar8 = ((float *)(uint)(param_2))[0xd];
    fVar9 = ((float *)(uint)(param_2))[0xc];
    *param_1 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar15 - fVar16 * (float10)fVar3) * fVar13))) ;
    param_1[1] = ((float)GEN_TOF((-(float10)(float)(fVar15 * fVar14 - fVar16 * (float10)fVar2) * fVar13)));
    param_1[2] = (float)((float10)(float)fVar18 * fVar13);
    param_1[4] = ((float)GEN_TOF((-(float10)(float)((float10)fVar5 * fVar15 - fVar17 * (float10)fVar3) * fVar13)));
    param_1[5] = ((float)GEN_TOF(((float10)(float)((float10)fVar6 * fVar15 - fVar17 * (float10)fVar2) * fVar13)));
    param_1[6] = ((float)GEN_TOF((-(float10)(float)((float10)fVar6 * (float10)fVar3 - (float10)fVar5 * (float10)fVar2) * fVar13)));
    param_1[8] = ((float)GEN_TOF(((float10)(float)((float10)fVar5 * fVar16 - fVar17 * (float10)fVar4) * fVar13)));
    param_1[9] = ((float)GEN_TOF((-(float10)(float)((float10)fVar6 * fVar16 - fVar17 * fVar14) * fVar13)));
    param_1[10] = (float)((float10)(float)fVar19 * fVar13);
    param_1[0xc] = ((float)GEN_TOF((-(float10)((float)GEN_TOF((((float10)fVar8 * fVar17 - (float10)fVar9 * fVar16) * (float10)fVar3 + (((float10)fVar7 * fVar16 - (float10)fVar8 * fVar15) * (float10)fVar5 + (float10)fVar4 * ((float10)fVar9 * fVar15 - (float10)fVar7 * fVar17))))) * fVar13)));
    param_1[0xd] = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)fVar9 * (float10)fVar1 - (float10)fVar8 * (float10)fVar6) * fVar15 + (((float10)fVar7 * (float10)fVar6 - (float10)fVar2 * (float10)fVar9) * fVar16 + ((float10)fVar8 * (float10)fVar2 - (float10)fVar7 * (float10)fVar1) * fVar17)))) * fVar13)));
    param_1[0xe] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar7 * (float10)(double)fVar19 + ((float10)fVar9 * (float10)(double)fVar18 + ((float10)(double)((float10)fVar5 * (float10)fVar2) - (float10)(double)((float10)fVar6 * (float10)fVar3)) * (float10)fVar8)))) * fVar13)));
    return (uint)param_1;
  }
  pfVar11 = (float *)&REFG(float, 0x1302d00);
  pfVar12 = param_1;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_004ef9d0 */
GEN_FRAME unsigned int GEN_THISCALL F_004ef9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ef9d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar16 = (float10)*in_ecx;
  fVar17 = (float10)*(float *)(param_2 + 4);
  fVar18 = (float10)fVar1;
  fVar19 = (float10)*(float *)(param_2 + 0x14);
  fVar20 = (float10)*(float *)(param_2 + 0x24);
  fVar3 = *(float *)(param_2 + 0x28);
  fVar21 = (float10)*(float *)(param_2 + 8);
  fVar22 = (float10)*(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x10);
  fVar5 = in_ecx[5];
  fVar6 = in_ecx[4];
  fVar7 = *(float *)param_2;
  fVar8 = *(float *)(param_2 + 0x20);
  fVar9 = in_ecx[6];
  fVar10 = in_ecx[9];
  fVar11 = in_ecx[8];
  fVar12 = in_ecx[10];
  fVar13 = *(float *)(param_2 + 0x30);
  fVar23 = (float10)in_ecx[0xc];
  fVar24 = (float10)in_ecx[0xd];
  fVar25 = (float10)in_ecx[0xe];
  fVar14 = *(float *)(param_2 + 0x34);
  fVar15 = *(float *)(param_2 + 0x38);
  in_ecx[1] = ((float)GEN_TOF(((fVar17 * fVar16 + fVar19 * fVar18) + fVar20 * (float10)fVar2)));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar2 + (fVar21 * fVar16 + fVar22 * fVar18))));
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar8 +
                     ((float10)fVar5 * (float10)fVar4 + (float10)fVar7 * (float10)fVar6))));
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar9 * fVar20 + ((float10)fVar5 * fVar19 + (float10)fVar6 * fVar17))))
  ;
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar3 +
                     ((float10)fVar5 * fVar22 + (float10)fVar6 * fVar21))));
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar8 +
                     ((float10)fVar10 * (float10)fVar4 + (float10)fVar11 * (float10)fVar7))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar12 * fVar20 +
                     ((float10)fVar10 * fVar19 + (float10)fVar11 * fVar17))));
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar3 +
                      ((float10)fVar10 * fVar22 + (float10)fVar11 * fVar21))));
  in_ecx[0xc] = ((float)GEN_TOF((((float10)in_ecx[0xe] * (float10)fVar8 +
                        ((float10)in_ecx[0xd] * (float10)fVar4 +
                        (float10)in_ecx[0xc] * (float10)fVar7)) + (float10)fVar13)));
  in_ecx[0xd] = ((float)GEN_TOF(((float10)fVar14 + ((fVar23 * fVar17 + fVar24 * fVar19) + fVar25 * fVar20))));
  *in_ecx = ((float)GEN_TOF(((float10)fVar8 * (float10)fVar2 +
                   ((float10)fVar4 * (float10)fVar1 + (float10)fVar7 * (float10)*in_ecx))));
  in_ecx[0xe] = ((float)GEN_TOF(((fVar25 * (float10)fVar3 + (fVar23 * fVar21 + fVar24 * fVar22)) +
                       (float10)fVar15)));
  return 0;
}

/* ref: FUN_004efc20 */
GEN_FRAME unsigned int GEN_THISCALL F_004efc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4efc20u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar17 = (float10)fVar2;
  fVar18 = (float10)in_ecx[1];
  fVar19 = (float10)in_ecx[5];
  fVar20 = (float10)fVar1;
  fVar21 = (float10)in_ecx[9];
  fVar4 = in_ecx[10];
  fVar22 = (float10)in_ecx[2];
  fVar23 = (float10)in_ecx[6];
  fVar5 = *(float *)(param_2 + 0x14);
  fVar6 = in_ecx[4];
  fVar7 = *(float *)(param_2 + 0x10);
  fVar8 = *in_ecx;
  fVar9 = *(float *)(param_2 + 0x18);
  fVar10 = in_ecx[8];
  fVar11 = *(float *)(param_2 + 0x24);
  fVar12 = *(float *)(param_2 + 0x20);
  fVar13 = *(float *)(param_2 + 0x28);
  fVar14 = *(float *)(param_2 + 0x34);
  fVar15 = *(float *)(param_2 + 0x30);
  fVar16 = *(float *)(param_2 + 0x38);
  fVar24 = (float10)fVar15;
  fVar25 = (float10)fVar14;
  fVar26 = (float10)fVar16;
  in_ecx[1] = ((float)GEN_TOF(((fVar18 * fVar17 + fVar20 * fVar19) + fVar21 * (float10)fVar3)));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar22 * fVar17 + fVar23 * fVar20))));
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                     ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar9 * fVar21 + ((float10)fVar5 * fVar19 + (float10)fVar7 * fVar18))))
  ;
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                     ((float10)fVar5 * fVar23 + (float10)fVar7 * fVar22))));
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                     ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar13 * fVar21 +
                     ((float10)fVar11 * fVar19 + (float10)fVar12 * fVar18))));
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                      ((float10)fVar11 * fVar23 + (float10)fVar12 * fVar22))));
  in_ecx[0xc] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar10 +
                        ((float10)fVar14 * (float10)fVar6 + (float10)fVar15 * (float10)fVar8)) +
                       (float10)in_ecx[0xc])));
  in_ecx[0xd] = ((float)GEN_TOF(((float10)in_ecx[0xd] +
                       ((fVar24 * fVar18 + fVar25 * fVar19) + fVar26 * fVar21))));
  in_ecx[0xe] = ((float)GEN_TOF(((fVar26 * (float10)fVar4 + (fVar24 * fVar22 + fVar25 * fVar23)) +
                       (float10)in_ecx[0xe])));
  *in_ecx = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar3 +
                   ((float10)fVar6 * (float10)fVar1 + (float10)fVar8 * (float10)fVar2))));
  return 0;
}

/* ref: FUN_004efe70 */
GEN_FRAME uint GEN_THISCALL F_004efe70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4efe70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  double dVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar13 = (float10)*(float *)param_2;
  fVar14 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar15 = (float10)*(float *)(param_2 + 4);
  fVar16 = (float10)*(float *)(param_2 + 8);
  fVar17 = (float10)(float)(fVar15 * fVar14);
  fVar25 = (float10)(float)(fVar16 * fVar14) * fVar16;
  fVar1 = *(float *)(param_2 + 0xc);
  dVar12 = ((double)GEN_TOD(((float10)(float)(fVar16 * fVar14) * (float10)fVar1)));
  fVar14 = (float10)(float)(fVar13 * fVar14);
  fVar26 = (float10)1 - fVar14 * fVar13;
  fVar2 = (float)(fVar26 - fVar17 * fVar15);
  fVar3 = in_ecx[1];
  fVar4 = in_ecx[2];
  fVar18 = (float10)*in_ecx;
  fVar19 = (float10)(float)(fVar14 * fVar15 + (float10)dVar12);
  fVar20 = (float10)fVar3;
  fVar26 = (float10)(float)(fVar26 - fVar25);
  fVar21 = (float10)(float)(fVar17 * fVar16 - (float10)fVar1 * fVar14);
  fVar22 = (float10)((float)GEN_TOF(((float10)(double)(fVar16 * fVar14) - (float10)fVar1 * fVar17)));
  fVar23 = (float10)(float)((float10)fVar1 * fVar14 + fVar17 * fVar16);
  fVar5 = in_ecx[5];
  fVar6 = in_ecx[4];
  fVar7 = in_ecx[6];
  fVar8 = in_ecx[9];
  fVar9 = in_ecx[8];
  fVar10 = in_ecx[10];
  in_ecx[1] = ((float)GEN_TOF(((fVar19 * fVar18 + fVar26 * fVar20) + fVar21 * (float10)fVar4)));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar2 + (fVar22 * fVar18 + fVar23 * fVar20))));
  fVar11 = in_ecx[0xe];
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar7 * fVar21 + ((float10)fVar5 * fVar26 + (float10)fVar6 * fVar19))))
  ;
  fVar18 = (float10)in_ecx[0xc];
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar7 * (float10)fVar2 +
                     ((float10)fVar5 * fVar23 + (float10)fVar6 * fVar22))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar10 * fVar21 + ((float10)fVar8 * fVar26 + (float10)fVar9 * fVar19)
                     )));
  fVar20 = (float10)in_ecx[0xd];
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar2 +
                      ((float10)fVar8 * fVar23 + (float10)fVar9 * fVar22))));
  fVar24 = (float10)fVar11;
  fVar15 = (float10)((float)GEN_TOF((((float10)1 - fVar17 * fVar15) - fVar25)));
  fVar13 = (float10)(float)(fVar13 * fVar17 - (float10)dVar12);
  fVar14 = (float10)((float)GEN_TOF(((float10)(double)((float10)fVar1 * fVar17) +
                           (float10)(double)(fVar16 * fVar14))));
  *in_ecx = ((float)GEN_TOF(((fVar15 * (float10)*in_ecx + fVar13 * (float10)fVar3) + fVar14 * (float10)fVar4)))
  ;
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar7 * fVar14 + ((float10)fVar5 * fVar13 + (float10)fVar6 * fVar15))))
  ;
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar10 * fVar14 + ((float10)fVar8 * fVar13 + (float10)fVar9 * fVar15)
                     )));
  in_ecx[0xd] = ((float)GEN_TOF(((fVar18 * fVar19 + fVar20 * fVar26) + fVar24 * fVar21)));
  in_ecx[0xe] = ((float)GEN_TOF(((fVar18 * fVar22 + fVar20 * fVar23) + (float10)fVar2 * fVar24)));
  in_ecx[0xc] = ((float)GEN_TOF(((fVar20 * fVar13 + fVar18 * fVar15) + (float10)fVar11 * fVar14)));
  return (uint)in_ecx;
}

/* ref: FUN_004f0120 */
GEN_FRAME uint GEN_THISCALL F_004f0120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4f0120u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
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
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar17 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar12 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar12 = (float10)(float)fVar12;
  fVar26 = (float10)1 - fVar12;
  fVar13 = (float10)*(float *)param_2;
  fVar14 = (float10)*(float *)(param_2 + 4);
  fVar1 = (float)(fVar14 * fVar26);
  fVar15 = (float10)*(float *)(param_2 + 8);
  fVar16 = (float10)(float)(fVar13 * fVar26);
  fVar17 = (float10)(float)fVar17;
  fVar26 = (float10)(float)(fVar15 * fVar26);
  fVar2 = (float)(fVar26 * fVar15 + fVar12);
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar18 = (float10)*param_1;
  fVar19 = (float10)((float)GEN_TOF((fVar14 * fVar16 + (float10)(double)(fVar17 * fVar15))));
  fVar20 = (float10)fVar3;
  fVar21 = (float10)(float)(fVar14 * (float10)fVar1 + fVar12);
  fVar22 = (float10)(float)(fVar26 * fVar14 - fVar17 * fVar13);
  fVar23 = (float10)(float)(fVar15 * fVar16 - fVar14 * fVar17);
  fVar24 = (float10)(float)(fVar15 * (float10)fVar1 + fVar17 * fVar13);
  fVar5 = param_1[5];
  fVar6 = param_1[4];
  fVar7 = param_1[6];
  fVar8 = param_1[9];
  fVar9 = param_1[8];
  fVar10 = param_1[10];
  param_1[1] = ((float)GEN_TOF(((fVar19 * fVar18 + fVar21 * fVar20) + fVar22 * (float10)fVar4)));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar2 + (fVar23 * fVar18 + fVar24 * fVar20))));
  param_1[5] = ((float)GEN_TOF(((float10)fVar7 * fVar22 + ((float10)fVar5 * fVar21 + (float10)fVar6 * fVar19)
                      )));
  param_1[6] = ((float)GEN_TOF(((float10)fVar7 * (float10)fVar2 +
                      ((float10)fVar5 * fVar24 + (float10)fVar6 * fVar23))));
  fVar11 = param_1[0xe];
  fVar18 = (float10)param_1[0xc];
  fVar20 = (float10)param_1[0xd];
  fVar25 = (float10)fVar11;
  fVar12 = (float10)(float)(fVar12 + fVar16 * fVar13);
  fVar15 = (float10)((float)GEN_TOF((fVar13 * (float10)fVar1 - (float10)(double)(fVar17 * fVar15))));
  fVar17 = (float10)(float)(fVar26 * fVar13 + fVar14 * fVar17);
  *param_1 = ((float)GEN_TOF(((fVar12 * (float10)*param_1 + fVar15 * (float10)fVar3) +
                    fVar17 * (float10)fVar4)));
  param_1[4] = ((float)GEN_TOF(((float10)fVar7 * fVar17 + ((float10)fVar5 * fVar15 + (float10)fVar6 * fVar12)
                      )));
  param_1[9] = ((float)GEN_TOF(((float10)fVar10 * fVar22 +
                      ((float10)fVar8 * fVar21 + (float10)fVar9 * fVar19))));
  param_1[10] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar2 +
                       ((float10)fVar8 * fVar24 + (float10)fVar9 * fVar23))));
  param_1[0xd] = ((float)GEN_TOF(((fVar18 * fVar19 + fVar20 * fVar21) + fVar25 * fVar22)));
  param_1[0xe] = ((float)GEN_TOF(((fVar18 * fVar23 + fVar20 * fVar24) + (float10)fVar2 * fVar25)));
  param_1[8] = ((float)GEN_TOF(((float10)fVar10 * fVar17 +
                      ((float10)fVar8 * fVar15 + (float10)fVar9 * fVar12))));
  param_1[0xc] = ((float)GEN_TOF(((fVar20 * fVar15 + fVar18 * fVar12) + (float10)fVar11 * fVar17)));
  return (uint)param_1;
}

/* ref: FUN_004f03f0 */
GEN_FRAME float * GEN_THISCALL F_004f03f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f03f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  fVar9 = F_004ef2d0(in_ecx GEN_EDX_FWD);
  fVar1 = ((float *)(uint)(in_ecx))[6];
  fVar2 = ((float *)(uint)(in_ecx))[5];
  fVar3 = ((float *)(uint)(in_ecx))[2];
  fVar10 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[1]));
  fVar11 = (float10)fVar3;
  fVar16 = fVar10 * (float10)fVar1 - fVar11 * (float10)fVar2;
  fVar4 = *((float *)(uint)(in_ecx));
  fVar12 = (float10)fVar4;
  fVar13 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[10]));
  fVar14 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[8]));
  fVar5 = ((float *)(uint)(in_ecx))[4];
  fVar18 = (float10)fVar5 * fVar11;
  fVar15 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[9]));
  fVar17 = (float10)fVar2 * fVar12 - (float10)fVar5 * fVar10;
  fVar6 = ((float *)(uint)(in_ecx))[0xe];
  fVar7 = ((float *)(uint)(in_ecx))[0xd];
  fVar8 = ((float *)(uint)(in_ecx))[0xc];
  fVar9 = (float10)(float)((float10)1 / fVar9);
  *((float *)(uint)(in_ecx)) = ((float)GEN_TOF((fVar9 * (float10)(float)(fVar13 * (float10)fVar2 - (float10)fVar1 * fVar15))));
  ((float *)(uint)(in_ecx))[1] = ((float)GEN_TOF((-(float10)(float)(fVar13 * fVar10 - (float10)fVar3 * fVar15) * fVar9)));
  ((float *)(uint)(in_ecx))[2] = (float)((float10)(float)fVar16 * fVar9);
  ((float *)(uint)(in_ecx))[4] = ((float)GEN_TOF((-(float10)(float)((float10)fVar5 * fVar13 - fVar14 * (float10)fVar1) * fVar9)));
  ((float *)(uint)(in_ecx))[5] = ((float)GEN_TOF(((float10)(float)(fVar13 * fVar12 - fVar14 * fVar11) * fVar9)));
  ((float *)(uint)(in_ecx))[6] = ((float)GEN_TOF((-(float10)(float)(fVar12 * (float10)fVar1 - fVar18) * fVar9)));
  ((float *)(uint)(in_ecx))[8] = ((float)GEN_TOF(((float10)(float)(fVar15 * (float10)fVar5 - fVar14 * (float10)fVar2) * fVar9)));
  ((float *)(uint)(in_ecx))[9] = ((float)GEN_TOF((-(float10)(float)(fVar15 * fVar12 - fVar14 * fVar10) * fVar9)));
  ((float *)(uint)(in_ecx))[10] = (float)((float10)(float)fVar17 * fVar9);
  ((float *)(uint)(in_ecx))[0xc] = ((float)GEN_TOF((-(float10)((float)GEN_TOF((((float10)fVar7 * fVar14 - (float10)fVar8 * fVar15) * (float10)fVar1 + (((float10)fVar6 * fVar15 - (float10)fVar7 * fVar13) * (float10)fVar5 + (float10)fVar2 * ((float10)fVar8 * fVar13 - fVar14 * (float10)fVar6) )))) * fVar9)));
  ((float *)(uint)(in_ecx))[0xd] = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)fVar8 * fVar10 - (float10)fVar7 * (float10)fVar4) * fVar13 + (((float10)fVar6 * (float10)fVar4 - (float10)fVar3 * (float10)fVar8 ) * fVar15 + fVar14 * ((float10)fVar7 * (float10)fVar3 - (float10)fVar6 * fVar10 ))))) * fVar9)));
  ((float *)(uint)(in_ecx))[0xe] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar6 * (float10)(double)fVar17 + ((float10)fVar8 * (float10)(double)fVar16 + ((float10)(double)fVar18 - (float10)(double)(fVar12 * (float10)fVar1)) * (float10)fVar7)))) * fVar9)));
  return ((float *)(uint)(in_ecx));
}

/* ref: FUN_004f0610 */
GEN_FRAME unsigned int GEN_THISCALL F_004f0610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f0610u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = *(float *)param_2;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4)));
  fVar3 = (float10)1;
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar4)));
  *param_1 = ((float)GEN_TOF(((fVar3 - fVar5 * (float10)*(float *)(param_2 + 4)) -
                    fVar6 * (float10)*(float *)(param_2 + 8))));
  fVar4 = (float10)(float)((float10)fVar1 * fVar4);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * fVar6 +
                      fVar4 * (float10)*(float *)(param_2 + 4))));
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 0xc);
  param_1[3] = 0.0;
  param_1[2] = (float)((float10)fVar1 * fVar4 - (float10)fVar2 * fVar5);
  param_1[4] = ((float)GEN_TOF(((float10)*(float *)param_2 * fVar5 -
                      (float10)*(float *)(param_2 + 0xc) * fVar6)));
  param_1[5] = ((float)GEN_TOF(((fVar3 - (float10)*(float *)param_2 * fVar4) -
                      (float10)*(float *)(param_2 + 8) * fVar6)));
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 0xc);
  param_1[7] = 0.0;
  param_1[6] = (float)((float10)fVar2 * fVar4 + (float10)fVar1 * fVar5);
  param_1[8] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * fVar5 +
                      (float10)*(float *)(param_2 + 8) * fVar4)));
  param_1[9] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar5 -
                      (float10)*(float *)(param_2 + 0xc) * fVar4)));
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = GEN_FLT_TO(param_1[0xf], REFG(float, 0x1087f04));
  param_1[10] = ((float)GEN_TOF(((fVar3 - (float10)fVar1 * fVar4) - (float10)fVar2 * fVar5)));
  return 0;
}

/* ref: FUN_004f0720 */
GEN_FRAME uint GEN_THISCALL F_004f0720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4f0720u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar5 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar5 = (float10)(float)fVar5;
  fVar8 = (float10)1 - fVar5;
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar6 = (float10)(float)((float10)*(float *)param_2 * fVar8);
  *param_1 = (float)(fVar5 + fVar6 * (float10)*(float *)param_2);
  fVar7 = (float10)(float)fVar7;
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar6 +
                      fVar7 * (float10)*(float *)(param_2 + 8))));
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_2 + 4);
  param_1[3] = 0.0;
  param_1[2] = (float)((float10)fVar3 * fVar6 - (float10)fVar4 * fVar7);
  fVar6 = (float10)(float)((float10)fVar1 * fVar8);
  param_1[4] = ((float)GEN_TOF((fVar6 * (float10)*(float *)param_2 - (float10)*(float *)(param_2 + 8) * fVar7
                      )));
  param_1[5] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar6 + fVar5)));
  fVar1 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  param_1[7] = 0.0;
  param_1[6] = (float)((float10)fVar1 * fVar7 + (float10)fVar3 * fVar6);
  fVar6 = (float10)(float)((float10)fVar2 * fVar8);
  param_1[8] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar7 + fVar6 * (float10)*(float *)param_2
                      )));
  param_1[9] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar6 - (float10)*(float *)param_2 * fVar7
                      )));
  fVar1 = *(float *)(param_2 + 8);
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = GEN_FLT_TO(param_1[0xf], REFG(float, 0x1087f04));
  param_1[10] = (float)(fVar6 * (float10)fVar1 + fVar5);
  return (uint)param_1;
}

/* ref: FUN_004f0840 */
GEN_FRAME unsigned int GEN_THISCALL F_004f0840(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x4f0840u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  fVar2 = (float10)1;
  in_ecx[3] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[6] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[0xb] = 0.0;
  in_ecx[0xf] = GEN_FLT_TO(in_ecx[0xf], REFG(float, 0x1087f04));
  fVar1 = ((float)GEN_TOF((fVar2 / ((float10)param_5 - (float10)param_4))));
  in_ecx[10] = fVar1;
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1092098);
  *in_ecx = ((float)GEN_TOF(((float10)(float)(fVar2 / (float10)param_2) * fVar3)));
  in_ecx[5] = ((float)GEN_TOF(((float10)(float)(fVar2 / (float10)param_3) * fVar3)));
  in_ecx[0xc] = (float)((float10)param_6 * fVar3);
  in_ecx[0xd] = (float)((float10)param_7 * fVar3);
  in_ecx[0xe] = (float)(-(float10)param_4 * (float10)fVar1);
  return 0;
}

/* ref: FUN_004f08f0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f08f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x4f08f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  fVar3 = (float10)1;
  in_ecx[3] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[6] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[0xb] = 0.0;
  in_ecx[0xf] = GEN_FLT_TO(in_ecx[0xf], REFG(float, 0x1087f04));
  fVar1 = ((float)GEN_TOF((fVar3 / ((float10)param_7 - (float10)param_6))));
  in_ecx[10] = fVar1;
  fVar2 = ((float)GEN_TOF((fVar3 / ((float10)param_4 - (float10)param_5))));
  fVar3 = (float10)((float)GEN_TOF((fVar3 / ((float10)param_3 - (float10)param_2))));
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1092098);
  *in_ecx = (float)(fVar3 * fVar4);
  in_ecx[5] = (float)((float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x10944c0));
  in_ecx[0xc] = ((float)GEN_TOF(((float10)param_8 * fVar4 - ((float10)param_2 + (float10)param_3) * fVar3)));
  in_ecx[0xd] = ((float)GEN_TOF((fVar4 * (float10)param_9 +
                       (float10)fVar2 * ((float10)param_4 + (float10)param_5))));
  in_ecx[0xe] = (float)(-(float10)param_6 * (float10)fVar1);
  return 0;
}

/* ref: FUN_004f09d0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f09d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x4f09d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float fVar1;
  float10 fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  fVar2 = (float10)1;
  in_ecx[3] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[6] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  fVar1 = ((float)GEN_TOF((fVar2 / ((float10)param_5 - (float10)param_4))));
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1092098);
  *in_ecx = ((float)GEN_TOF(((float10)(float)(fVar2 / (float10)param_2) * fVar4)));
  in_ecx[5] = ((float)GEN_TOF(((float10)(float)(fVar2 / (float10)param_3) * fVar4)));
  fVar5 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
  in_ecx[0xb] = 0.0;
  fVar3 = REFG(float, 0x1087f04);
  in_ecx[10] = fVar5;
  in_ecx[0xf] = fVar3;
  in_ecx[0xc] = (float)((float10)param_6 * fVar4);
  in_ecx[0xd] = (float)((float10)param_7 * fVar4);
  in_ecx[0xe] = (float)(-(float10)param_4 * (float10)fVar1);
  return 0;
}

/* ref: FUN_004f0a80 */
GEN_FRAME unsigned int GEN_THISCALL F_004f0a80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x4f0a80u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  fVar4 = (float10)1;
  in_ecx[3] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[6] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  fVar1 = ((float)GEN_TOF((fVar4 / ((float10)param_7 - (float10)param_6))));
  fVar2 = ((float)GEN_TOF((fVar4 / ((float10)param_4 - (float10)param_5))));
  fVar4 = (float10)((float)GEN_TOF((fVar4 / ((float10)param_3 - (float10)param_2))));
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  *in_ecx = (float)(fVar4 * fVar5);
  in_ecx[5] = (float)((float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x10944c0));
  fVar6 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
  in_ecx[0xb] = 0.0;
  fVar3 = REFG(float, 0x1087f04);
  in_ecx[10] = fVar6;
  in_ecx[0xf] = fVar3;
  in_ecx[0xc] = ((float)GEN_TOF(((float10)param_8 * fVar5 - ((float10)param_2 + (float10)param_3) * fVar4)));
  in_ecx[0xd] = ((float)GEN_TOF((fVar5 * (float10)param_9 +
                       (float10)fVar2 * ((float10)param_4 + (float10)param_5))));
  in_ecx[0xe] = (float)(-(float10)param_6 * (float10)fVar1);
  return 0;
}

/* ref: FUN_004f0b60 */
GEN_FRAME uint GEN_THISCALL F_004f0b60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4f0b60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  float fVar3;
  float10 fVar4;
  
  fVar1 = ((float)GEN_TOF(((float10)param_5 / ((float10)param_5 - (float10)param_4))));
  fVar4 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)),4)));
  param_1[10] = fVar1;
  fVar3 = REFG(float, 0x1087f04);
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[0xb] = fVar3;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xf] = 0.0;
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)1 / (float10)(float)fVar4) / (float10)param_3)));
  param_1[5] = (float)((float10)1 / (float10)(float)fVar4);
  param_1[0xe] = (float)(-(float10)param_4 * (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_004f0c10 */
GEN_FRAME uint GEN_THISCALL F_004f0c10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4f0c10u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  float10 fVar3;
  
  fVar1 = ((float)GEN_TOF(((float10)param_5 / ((float10)param_5 - (float10)param_4))));
  fVar3 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)),4)));
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)1 / (float10)(float)fVar3) / (float10)param_3)));
  param_1[5] = (float)((float10)1 / (float10)(float)fVar3);
  param_1[10] = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
  param_1[0xb] = GEN_FLT_TO(param_1[0xb], REFG(float, 0x1090708));
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = (float)(-(float10)param_4 * (float10)fVar1);
  param_1[0xf] = 0.0;
  return (uint)param_1;
}

/* ref: FUN_004f0cc0 */
GEN_FRAME float10 GEN_THISCALL F_004f0cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f0cc0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  fVar5 = (float10)in_ecx[10];
  fVar6 = (float10)in_ecx[0xf];
  fVar1 = in_ecx[9];
  fVar7 = (float10)in_ecx[0xb];
  fVar8 = (float10)in_ecx[0xe];
  fVar2 = in_ecx[1];
  fVar12 = fVar6 * fVar5 - fVar8 * fVar7;
  fVar9 = (float10)in_ecx[7];
  dVar4 = (double)(fVar9 * fVar8);
  fVar3 = in_ecx[6];
  fVar13 = (float10)fVar3 * fVar7 - fVar5 * fVar9;
  fVar9 = (float10)in_ecx[3];
  fVar14 = fVar9 * fVar8 + (float10)in_ecx[2] * fVar6;
  fVar8 = (float10)in_ecx[2];
  fVar7 = fVar8 * fVar7;
  fVar10 = (float10)in_ecx[0xd];
  fVar11 = (float10)in_ecx[5];
  fVar8 = (float10)(double)(fVar8 * (float10)in_ecx[7] - (float10)fVar3 * fVar9);
  return (float10)((float)GEN_TOF(((((((float10)(double)((float10)fVar3 * fVar6) - (float10)dVar4) *
                             (float10)fVar2 - fVar11 * fVar14) + (float10)in_ecx[0xd] * fVar8) *
                           (float10)in_ecx[8] +
                          ((float10)*in_ecx *
                           (fVar10 * fVar13 +
                           ((float10)in_ecx[5] * fVar12 -
                           ((float10)(double)((float10)fVar3 * fVar6) + (float10)dVar4) *
                           (float10)fVar1)) -
                          (float10)in_ecx[4] *
                          ((fVar7 - fVar9 * fVar5) * fVar10 +
                          ((float10)fVar2 * fVar12 - (float10)fVar1 * fVar14)))) -
                         (float10)in_ecx[0xc] *
                         (fVar8 * (float10)fVar1 +
                         ((float10)fVar2 * fVar13 - (fVar9 * fVar5 + fVar7) * fVar11)))));
}

/* ref: FUN_004f0e10 */
GEN_FRAME uint F_004f0e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f0e10u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_3 + 0x24);
  fVar3 = *(float *)(param_3 + 0x34);
  fVar4 = *(float *)(param_2 + 0xc);
  fVar28 = (float10)*(float *)param_2;
  fVar29 = (float10)*(float *)(param_3 + 4);
  fVar30 = (float10)*(float *)(param_3 + 0x14);
  fVar31 = (float10)*(float *)(param_2 + 4);
  fVar32 = (float10)*(float *)(param_2 + 8);
  fVar5 = *(float *)(param_3 + 0x18);
  fVar6 = *(float *)(param_3 + 8);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  fVar9 = *(float *)(param_3 + 0x1c);
  fVar10 = *(float *)(param_3 + 0xc);
  fVar11 = *(float *)(param_3 + 0x2c);
  fVar12 = *(float *)(param_3 + 0x3c);
  fVar13 = *(float *)(param_3 + 0x10);
  fVar14 = *(float *)(param_2 + 0x10);
  fVar15 = *(float *)param_3;
  fVar16 = *(float *)(param_2 + 0x18);
  fVar17 = *(float *)(param_3 + 0x20);
  fVar18 = *(float *)(param_3 + 0x30);
  fVar19 = *(float *)(param_2 + 0x1c);
  fVar20 = *(float *)(param_2 + 0x24);
  fVar21 = *(float *)(param_2 + 0x20);
  fVar22 = *(float *)(param_2 + 0x28);
  fVar23 = *(float *)(param_2 + 0x2c);
  fVar24 = *(float *)(param_2 + 0x34);
  fVar25 = *(float *)(param_2 + 0x30);
  fVar26 = *(float *)(param_2 + 0x38);
  fVar27 = *(float *)(param_2 + 0x3c);
  fVar33 = (float10)fVar25;
  fVar34 = (float10)fVar24;
  param_1[1] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 +
                      (fVar32 * (float10)fVar2 + (fVar29 * fVar28 + fVar31 * fVar30)))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar8 * (float10)fVar4 +
                      ((float10)fVar7 * fVar32 + ((float10)fVar5 * fVar31 + (float10)fVar6 * fVar28)
                      ))));
  param_1[3] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar4 +
                      ((float10)fVar11 * fVar32 +
                      ((float10)fVar9 * fVar31 + (float10)fVar10 * fVar28)))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar18 +
                      ((float10)fVar17 * (float10)fVar16 +
                      ((float10)fVar13 * (float10)fVar1 + (float10)fVar15 * (float10)fVar14)))));
  param_1[5] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar3 +
                      ((float10)fVar16 * (float10)fVar2 +
                      ((float10)fVar1 * fVar30 + (float10)fVar14 * fVar29)))));
  param_1[6] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar8 +
                      ((float10)fVar16 * (float10)fVar7 +
                      ((float10)fVar1 * (float10)fVar5 + (float10)fVar14 * (float10)fVar6)))));
  param_1[7] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar12 +
                      ((float10)fVar16 * (float10)fVar11 +
                      ((float10)fVar1 * (float10)fVar9 + (float10)fVar14 * (float10)fVar10)))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar18 +
                      ((float10)fVar22 * (float10)fVar17 +
                      ((float10)fVar20 * (float10)fVar13 + (float10)fVar21 * (float10)fVar15)))));
  param_1[9] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar3 +
                      ((float10)fVar22 * (float10)fVar2 +
                      ((float10)fVar20 * fVar30 + (float10)fVar21 * fVar29)))));
  param_1[10] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar8 +
                       ((float10)fVar22 * (float10)fVar7 +
                       ((float10)fVar20 * (float10)fVar5 + (float10)fVar21 * (float10)fVar6)))));
  param_1[0xb] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar12 +
                        ((float10)fVar22 * (float10)fVar11 +
                        ((float10)fVar20 * (float10)fVar9 + (float10)fVar21 * (float10)fVar10)))));
  param_1[0xc] = ((float)GEN_TOF(((float10)fVar27 * (float10)fVar18 +
                        ((float10)fVar26 * (float10)fVar17 +
                        ((float10)fVar24 * (float10)fVar13 + (float10)fVar25 * (float10)fVar15)))));
  param_1[0xd] = ((float)GEN_TOF(((float10)fVar27 * (float10)fVar3 +
                        ((float10)fVar26 * (float10)fVar2 + (fVar33 * fVar29 + fVar34 * fVar30)))));
  param_1[0xe] = ((float)GEN_TOF(((float10)fVar27 * (float10)fVar8 +
                        ((float10)fVar26 * (float10)fVar7 +
                        (fVar34 * (float10)fVar5 + fVar33 * (float10)fVar6)))));
  param_1[0xf] = ((float)GEN_TOF(((float10)fVar27 * (float10)fVar12 +
                        ((float10)fVar26 * (float10)fVar11 +
                        ((float10)fVar10 * fVar33 + (float10)fVar9 * fVar34)))));
  *param_1 = ((float)GEN_TOF(((float10)fVar18 * (float10)fVar4 +
                    (fVar32 * (float10)fVar17 +
                    ((float10)fVar13 * fVar31 + (float10)fVar15 * fVar28)))));
  return (uint)param_1;
}

/* ref: FUN_004f11a0 */
GEN_FRAME uint F_004f11a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f11a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  
  fVar1 = *(float *)(param_3 + 0x24);
  fVar24 = (float10)*(float *)param_2;
  fVar25 = (float10)*(float *)(param_3 + 4);
  fVar26 = (float10)*(float *)(param_3 + 0x14);
  fVar27 = (float10)*(float *)(param_2 + 4);
  fVar28 = (float10)*(float *)(param_2 + 8);
  fVar2 = *(float *)(param_3 + 0x18);
  fVar3 = *(float *)(param_3 + 8);
  fVar4 = *(float *)(param_3 + 0x28);
  fVar5 = *(float *)(param_3 + 0x1c);
  fVar6 = *(float *)(param_3 + 0xc);
  fVar7 = *(float *)(param_3 + 0x2c);
  fVar8 = *(float *)(param_2 + 0x14);
  fVar9 = *(float *)(param_3 + 0x10);
  fVar10 = *(float *)(param_2 + 0x10);
  fVar11 = *(float *)param_3;
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)(param_3 + 0x20);
  fVar14 = *(float *)(param_2 + 0x24);
  fVar15 = *(float *)(param_2 + 0x20);
  fVar16 = *(float *)(param_2 + 0x28);
  fVar17 = *(float *)(param_2 + 0x34);
  fVar18 = *(float *)(param_2 + 0x30);
  fVar19 = *(float *)(param_2 + 0x38);
  fVar20 = *(float *)(param_3 + 0x30);
  fVar29 = (float10)fVar18;
  fVar30 = (float10)fVar17;
  fVar21 = *(float *)(param_3 + 0x34);
  fVar22 = *(float *)(param_3 + 0x38);
  fVar23 = *(float *)(param_3 + 0x3c);
  param_1[1] = ((float)GEN_TOF((fVar28 * (float10)fVar1 + (fVar25 * fVar24 + fVar27 * fVar26))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * fVar28 + ((float10)fVar2 * fVar27 + (float10)fVar3 * fVar24)
                      )));
  param_1[3] = ((float)GEN_TOF(((float10)fVar7 * fVar28 + ((float10)fVar5 * fVar27 + (float10)fVar6 * fVar24)
                      )));
  param_1[4] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar12 +
                      ((float10)fVar9 * (float10)fVar8 + (float10)fVar11 * (float10)fVar10))));
  param_1[5] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar1 +
                      ((float10)fVar8 * fVar26 + (float10)fVar10 * fVar25))));
  param_1[6] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar4 +
                      ((float10)fVar8 * (float10)fVar2 + (float10)fVar10 * (float10)fVar3))));
  param_1[7] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar7 +
                      ((float10)fVar8 * (float10)fVar5 + (float10)fVar10 * (float10)fVar6))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar13 +
                      ((float10)fVar14 * (float10)fVar9 + (float10)fVar15 * (float10)fVar11))));
  param_1[9] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar1 +
                      ((float10)fVar14 * fVar26 + (float10)fVar15 * fVar25))));
  param_1[10] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar4 +
                       ((float10)fVar14 * (float10)fVar2 + (float10)fVar15 * (float10)fVar3))));
  *param_1 = ((float)GEN_TOF((((float10)fVar11 * fVar24 + (float10)fVar9 * fVar27) + (float10)fVar13 * fVar28
                    )));
  param_1[0xb] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar7 +
                        ((float10)fVar14 * (float10)fVar5 + (float10)fVar15 * (float10)fVar6))));
  param_1[0xc] = ((float)GEN_TOF((((float10)fVar19 * (float10)fVar13 +
                         ((float10)fVar17 * (float10)fVar9 + (float10)fVar18 * (float10)fVar11)) +
                        (float10)fVar20)));
  param_1[0xd] = ((float)GEN_TOF(((float10)fVar21 +
                        ((float10)fVar19 * (float10)fVar1 + (fVar29 * fVar25 + fVar30 * fVar26)))));
  param_1[0xe] = ((float)GEN_TOF((((float10)fVar19 * (float10)fVar4 +
                         (fVar30 * (float10)fVar2 + fVar29 * (float10)fVar3)) + (float10)fVar22)));
  param_1[0xf] = ((float)GEN_TOF(((float10)fVar23 +
                        ((float10)fVar19 * (float10)fVar7 +
                        ((float10)fVar6 * fVar29 + (float10)fVar5 * fVar30)))));
  return (uint)param_1;
}

/* ref: FUN_004f1490 */
GEN_FRAME unsigned int F_004f1490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f1490u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar1 = *(float *)(param_3 + 0x20);
  fVar2 = *(float *)(param_3 + 0x30);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar7 = (float10)*(float *)param_3;
  fVar8 = (float10)*(float *)param_2;
  fVar9 = (float10)*(float *)(param_3 + 0x10);
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_2 + 8);
  *(float *)param_1 =
       ((float)GEN_TOF(((float10)fVar3 * (float10)fVar2 +
              (fVar11 * (float10)fVar1 + (fVar8 * fVar7 + fVar10 * fVar9)))));
  fVar4 = *(float *)(param_3 + 0x14);
  fVar5 = *(float *)(param_3 + 0x24);
  fVar6 = *(float *)(param_3 + 0x34);
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)fVar6 * (float10)fVar3 +
              ((float10)fVar5 * fVar11 +
              ((float10)fVar4 * fVar10 + (float10)*(float *)(param_3 + 4) * fVar8)))));
  fVar1 = *(float *)(param_3 + 0x18);
  fVar1 = *(float *)(param_3 + 8);
  fVar1 = *(float *)(param_3 + 0x28);
  fVar1 = *(float *)(param_3 + 0x38);
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar3 +
              ((float10)fVar1 * fVar11 + ((float10)fVar1 * fVar10 + (float10)fVar1 * fVar8)))));
  fVar1 = *(float *)(param_3 + 0x1c);
  fVar1 = *(float *)(param_3 + 0xc);
  fVar1 = *(float *)(param_3 + 0x2c);
  fVar1 = *(float *)(param_3 + 0x3c);
  *(float *)(param_1 + 0xc) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar3 +
              (((float10)fVar1 * fVar8 + (float10)fVar1 * fVar10) + (float10)fVar1 * fVar11))));
  fVar1 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x18);
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar7 = (float10)fVar1;
  fVar7 = (float10)fVar2;
  *(float *)(param_1 + 0x10) =
       ((float)GEN_TOF(((((float10)fVar1 * fVar9 + (float10)fVar1 * fVar7) + fVar7 * (float10)fVar1) +
              fVar7 * (float10)fVar1)));
  fVar7 = (float10)*(float *)(param_3 + 4);
  *(float *)(param_1 + 0x14) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar6 +
              ((float10)fVar1 * (float10)fVar5 +
              ((float10)fVar1 * (float10)fVar4 + fVar7 * (float10)fVar1)))));
  *(float *)(param_1 + 0x18) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar1)))));
  *(float *)(param_1 + 0x1c) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar1)))));
  fVar1 = *(float *)(param_2 + 0x24);
  fVar1 = *(float *)(param_2 + 0x20);
  fVar1 = *(float *)(param_2 + 0x28);
  fVar1 = *(float *)(param_2 + 0x2c);
  *(float *)(param_1 + 0x20) =
       ((float)GEN_TOF(((float10)fVar1 * fVar7 +
              ((float10)fVar1 * fVar7 + ((float10)fVar1 * fVar9 + (float10)fVar1 * fVar7)))));
  *(float *)(param_1 + 0x24) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar6 +
              ((float10)fVar1 * (float10)fVar5 +
              ((float10)fVar1 * (float10)fVar4 + (float10)fVar1 * fVar7)))));
  *(float *)(param_1 + 0x28) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar1)))));
  *(float *)(param_1 + 0x2c) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar1)))));
  fVar7 = (float10)*(float *)(param_2 + 0x30);
  fVar7 = (float10)*(float *)(param_2 + 0x34);
  fVar7 = (float10)*(float *)(param_2 + 0x38);
  fVar7 = (float10)*(float *)(param_2 + 0x3c);
  *(float *)(param_1 + 0x30) =
       ((float)GEN_TOF((((fVar7 * fVar7 + fVar7 * fVar9) + fVar7 * fVar7) + fVar7 * fVar7)));
  *(float *)(param_1 + 0x34) =
       ((float)GEN_TOF((fVar7 * (float10)fVar6 +
              (fVar7 * (float10)fVar5 + (fVar7 * (float10)fVar4 + fVar7 * fVar7)))));
  *(float *)(param_1 + 0x38) =
       ((float)GEN_TOF((fVar7 * (float10)fVar1 +
              (fVar7 * (float10)fVar1 + (fVar7 * (float10)fVar1 + fVar7 * (float10)fVar1)))));
  *(float *)(param_1 + 0x3c) =
       ((float)GEN_TOF(((((float10)fVar1 * fVar7 + (float10)fVar1 * fVar7) + (float10)fVar1 * fVar7) +
              (float10)fVar1 * fVar7)));
  return 0;
}

/* ref: FUN_004f1790 */
GEN_FRAME unsigned int F_004f1790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f1790u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar1 = *(float *)(param_3 + 0x20);
  fVar7 = (float10)*(float *)param_3;
  fVar8 = (float10)*(float *)param_2;
  fVar9 = (float10)*(float *)(param_3 + 0x10);
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_2 + 8);
  *(float *)param_1 = ((float)GEN_TOF((fVar11 * (float10)fVar1 + (fVar8 * fVar7 + fVar10 * fVar9))));
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 0x24);
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)fVar4 * fVar11 + ((float10)fVar2 * fVar10 + (float10)fVar3 * fVar8))));
  fVar5 = *(float *)(param_3 + 0x18);
  fVar6 = *(float *)(param_3 + 8);
  fVar1 = *(float *)(param_3 + 0x28);
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)fVar1 * fVar11 + ((float10)fVar5 * fVar10 + (float10)fVar6 * fVar8))));
  fVar7 = (float10)*(float *)(param_3 + 0xc);
  fVar7 = (float10)*(float *)(param_3 + 0x1c);
  fVar7 = (float10)*(float *)(param_3 + 0x2c);
  *(float *)(param_1 + 0xc) = ((float)GEN_TOF(((fVar7 * fVar8 + fVar7 * fVar10) + fVar7 * fVar11)));
  fVar1 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0x10) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 + ((float10)fVar1 * fVar9 + (float10)fVar1 * fVar7))));
  *(float *)(param_1 + 0x14) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar4 +
              ((float10)fVar1 * (float10)fVar2 + (float10)fVar1 * (float10)fVar3))));
  *(float *)(param_1 + 0x18) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar5 + (float10)fVar1 * (float10)fVar6))));
  *(float *)(param_1 + 0x1c) =
       ((float)GEN_TOF(((float10)fVar1 * fVar7 + ((float10)fVar1 * fVar7 + (float10)fVar1 * fVar7))));
  fVar1 = *(float *)(param_2 + 0x24);
  fVar1 = *(float *)(param_2 + 0x20);
  fVar1 = *(float *)(param_2 + 0x28);
  *(float *)(param_1 + 0x20) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 + ((float10)fVar1 * fVar9 + (float10)fVar1 * fVar7))));
  *(float *)(param_1 + 0x24) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar4 +
              ((float10)fVar1 * (float10)fVar2 + (float10)fVar1 * (float10)fVar3))));
  *(float *)(param_1 + 0x28) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar5 + (float10)fVar1 * (float10)fVar6))));
  *(float *)(param_1 + 0x2c) =
       ((float)GEN_TOF(((float10)fVar1 * fVar7 + ((float10)fVar1 * fVar7 + (float10)fVar1 * fVar7))));
  fVar1 = *(float *)(param_2 + 0x38);
  fVar7 = (float10)*(float *)(param_2 + 0x30);
  fVar7 = (float10)*(float *)(param_2 + 0x34);
  *(float *)(param_1 + 0x30) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x30) +
              ((float10)fVar1 * (float10)fVar1 + (fVar7 * fVar7 + fVar7 * fVar9)))));
  *(float *)(param_1 + 0x34) =
       ((float)GEN_TOF((((float10)fVar1 * (float10)fVar4 + (fVar7 * (float10)fVar2 + fVar7 * (float10)fVar3))
              + (float10)*(float *)(param_3 + 0x34))));
  *(float *)(param_1 + 0x38) =
       ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (fVar7 * (float10)fVar5 + fVar7 * (float10)fVar6))
              + (float10)*(float *)(param_3 + 0x38))));
  *(float *)(param_1 + 0x3c) =
       ((float)GEN_TOF(((fVar7 * (float10)fVar1 + (fVar7 * fVar7 + fVar7 * fVar7)) +
              (float10)*(float *)(param_3 + 0x3c))));
  return 0;
}

/* ref: FUN_004f19e0 */
GEN_FRAME uint F_004f19e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f19e0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  float10 fVar35;
  float10 fVar36;
  float10 fVar37;
  float10 fVar38;
  float10 fVar39;
  float10 fVar40;
  float10 fVar41;
  float10 fVar42;
  float10 fVar43;
  float10 fVar44;
  float10 fVar45;
  float10 fVar46;
  float10 fVar47;
  
  fVar32 = F_004f0cc0(param_2 GEN_EDX_ARG);
  fVar1 = ((float *)(uint)(param_2))[9];
  fVar2 = ((float *)(uint)(param_2))[0xe];
  fVar3 = ((float *)(uint)(param_2))[2];
  fVar33 = ((float10)GEN_TOD(((float *)(uint)(param_2))[3]));
  fVar34 = (float10)fVar3;
  fVar35 = ((float10)GEN_TOD(((float *)(uint)(param_2))[0xf]));
  fVar42 = (float10)fVar2 * fVar33 - fVar35 * fVar34;
  fVar4 = ((float *)(uint)(param_2))[1];
  fVar5 = ((float *)(uint)(param_2))[0xd];
  fVar6 = ((float *)(uint)(param_2))[10];
  fVar47 = (float10)fVar5 * fVar34 - (float10)fVar4 * (float10)fVar2;
  fVar36 = ((float10)GEN_TOD(((float *)(uint)(param_2))[0xb]));
  fVar7 = ((float *)(uint)(param_2))[6];
  fVar37 = ((float10)GEN_TOD(((float *)(uint)(param_2))[7]));
  fVar43 = fVar37 * fVar34 - (float10)fVar7 * fVar33;
  fVar8 = ((float *)(uint)(param_2))[5];
  dVar24 = (double)((float10)fVar7 * fVar36 - (float10)fVar6 * fVar37);
  dVar25 = (double)((float10)fVar1 * fVar37);
  fVar9 = ((float *)(uint)(param_2))[0xc];
  fVar10 = ((float *)(uint)(param_2))[8];
  fVar38 = (float10)fVar9;
  dVar26 = (double)(fVar38 * fVar36 - (float10)fVar10 * fVar35);
  dVar27 = (double)((float10)fVar2 * (float10)fVar10);
  dVar28 = (double)((float10)fVar6 * fVar35 - fVar36 * (float10)fVar2);
  fVar11 = ((float *)(uint)(param_2))[4];
  fVar39 = ((float10)GEN_TOD(*((float *)(uint)(param_2))));
  fVar45 = fVar39 * fVar35 - fVar33 * fVar38;
  dVar29 = (double)((float10)fVar11 * fVar33 - fVar39 * fVar37);
  dVar30 = (double)((float10)fVar10 * fVar37 - (float10)fVar11 * fVar36);
  dVar31 = (double)((float10)fVar5 * fVar36);
  fVar44 = (float10)fVar5 * (float10)fVar10 - (float10)fVar9 * (float10)fVar1;
  fVar40 = (float10)fVar8;
  fVar46 = (float10)fVar1 * (float10)fVar2 - (float10)fVar6 * (float10)fVar5;
  fVar12 = ((float *)(uint)(param_2))[0xc];
  fVar13 = ((float *)(uint)(param_2))[1];
  fVar14 = ((float *)(uint)(param_2))[0xd];
  fVar15 = ((float *)(uint)(param_2))[10];
  fVar16 = ((float *)(uint)(param_2))[9];
  fVar17 = ((float *)(uint)(param_2))[6];
  fVar18 = ((float *)(uint)(param_2))[5];
  fVar19 = ((float *)(uint)(param_2))[2];
  fVar20 = ((float *)(uint)(param_2))[4];
  fVar21 = ((float *)(uint)(param_2))[0xe];
  fVar22 = ((float *)(uint)(param_2))[8];
  fVar23 = ((float *)(uint)(param_2))[9];
  fVar41 = (float10)fVar15;
  fVar32 = (float10)(float)((float10)1 / fVar32);
  *param_1 = ((float)GEN_TOF((fVar32 * (float10)((float)GEN_TOF((fVar37 * (float10)(double)fVar46 + (fVar40 * (float10)dVar28 + ((float10)dVar31 - (float10)(double)((float10)fVar1 * fVar35)) * (float10)fVar7)))))));
  param_1[1] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((((float10)fVar4 * fVar35 - (float10)(double)((float10)fVar5 * fVar33)) * (float10)fVar6 + (float10)fVar1 * fVar42) + fVar36 * fVar47))) * fVar32)));
  param_1[2] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((((float10)(double)((float10)fVar8 * fVar33) - (float10)(double)(fVar37 * (float10)fVar4)) * (float10)fVar2 + (float10)fVar5 * fVar43) + fVar35 * ((float10)fVar7 * (float10)fVar4 - (float10)fVar8 * fVar34)))) * fVar32)));
  param_1[3] = ((float)GEN_TOF((-(float10)((float)GEN_TOF((((float10)fVar8 * (float10)fVar6 - (float10)fVar7 * (float10)fVar1) * fVar33 + ((float10)fVar4 * (float10)dVar24 + (float10)fVar3 * ((float10)dVar25 - (float10)fVar8 * fVar36) )))) * fVar32)));
  param_1[4] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar11 * (float10)dVar28 + ((float10)fVar7 * (float10)dVar26 + ((float10)dVar27 - (float10)(double)(fVar38 * (float10)fVar6)) * fVar37)))) * fVar32)));
  param_1[5] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)fVar10 * (float10)(double)fVar42 + (((float10)(fVar9 * fVar3) - fVar39 * (float10)fVar2) * fVar36 + (float10)fVar6 * fVar45)))) * fVar32)));
  param_1[6] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar9 * (float10)(double)fVar43 + ((float10)fVar2 * (float10)dVar29 + (fVar39 * (float10)fVar7 - (float10)fVar11 * (float10)fVar3) * fVar35)))) * fVar32)));
  param_1[7] = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar39 * (float10)dVar24 + ((float10)fVar3 * (float10)dVar30 + ((float10)fVar11 * (float10)fVar6 - (float10)fVar10 * (float10)fVar7) * fVar33)))) * fVar32)));
  param_1[8] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)fVar8 * (float10)dVar26 + (((float10)(double)((float10)fVar1 * fVar35) - (float10)dVar31) * (float10)fVar11 + fVar37 * fVar44)))) * fVar32)));
  param_1[9] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar1 * (float10)(double)fVar45 + (((float10)(double)((float10)fVar5 * fVar33) - (float10)(double)((float10)fVar4 * fVar35)) * (float10)fVar10 + ((float10)fVar9 * (float10)fVar4 - fVar39 * (float10)fVar5) * fVar36)))) * fVar32)));
  param_1[10] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)dVar29 * (float10)fVar5 + (((float10)(double)(fVar37 * (float10)fVar4) - (float10)(double)((float10)fVar8 * fVar33)) * (float10)fVar9 + (fVar40 * fVar39 - (float10)fVar11 * (float10)fVar4) * fVar35)))) * fVar32)));
  param_1[0xb] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar4 * (float10)dVar30 + (((float10)(double)((float10)fVar8 * fVar36) - (float10)dVar25) * fVar39 + ((float10)fVar11 * (float10)fVar1 - (float10)fVar10 * fVar40) * fVar33)))) * fVar32)));
  param_1[0xc] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)(double)fVar44 * (float10)fVar7 + (((float10)(double)(fVar38 * (float10)fVar6) - (float10)dVar27) * fVar40 + (float10)fVar11 * fVar46)))) * fVar32)));
  param_1[0xd] = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)fVar10 * (float10)(double)fVar47 + ((float10)(double)(fVar39 * (float10)fVar2) - (float10)(fVar9 * fVar3)) * (float10)fVar16) + ((float10)fVar13 * (float10)fVar12 - (float10)fVar14 * fVar39) * (float10)fVar15))) * fVar32)));
  param_1[0xe] = ((float)GEN_TOF((-(float10)((float)GEN_TOF((((float10)fVar18 * fVar39 - (float10)fVar20 * (float10)fVar13) * (float10)fVar21 + (((float10)fVar20 * (float10)fVar19 - fVar39 * (float10)fVar17) * (float10)fVar14 + (float10)fVar12 * ((float10)fVar17 * (float10)fVar13 - (float10)fVar19 * (float10)fVar18))))) * fVar32)));
  param_1[0xf] = ((float)GEN_TOF((fVar32 * (float10)((float)GEN_TOF((((float10)fVar23 * (float10)fVar20 - (float10)fVar22 * (float10)fVar18) * (float10)fVar19 + (((float10)fVar22 * (float10)fVar17 - fVar41 * (float10)fVar20) * (float10)fVar13 + ((float10)fVar18 * fVar41 - (float10)fVar23 * (float10)fVar17) * fVar39)))))));
  return (uint)param_1;
}

/* ref: FUN_004f1f30 */
GEN_FRAME unsigned int GEN_THISCALL F_004f1f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f1f30u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x24);
  fVar3 = *(float *)(param_2 + 0x34);
  fVar4 = in_ecx[3];
  fVar26 = (float10)*in_ecx;
  fVar27 = (float10)*(float *)(param_2 + 4);
  fVar28 = (float10)in_ecx[1];
  fVar29 = (float10)*(float *)(param_2 + 0x14);
  fVar30 = (float10)in_ecx[2];
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 8);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  fVar9 = *(float *)(param_2 + 0x1c);
  fVar10 = *(float *)(param_2 + 0xc);
  fVar11 = *(float *)(param_2 + 0x2c);
  fVar12 = *(float *)(param_2 + 0x3c);
  fVar13 = in_ecx[5];
  fVar14 = in_ecx[4];
  fVar15 = *(float *)param_2;
  fVar16 = *(float *)(param_2 + 0x20);
  fVar17 = in_ecx[6];
  fVar18 = *(float *)(param_2 + 0x30);
  fVar19 = in_ecx[7];
  fVar20 = in_ecx[9];
  fVar21 = in_ecx[8];
  fVar22 = in_ecx[10];
  fVar23 = in_ecx[0xb];
  fVar24 = in_ecx[0xe];
  fVar25 = in_ecx[0xf];
  fVar31 = (float10)in_ecx[0xc];
  fVar32 = (float10)in_ecx[0xd];
  in_ecx[1] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 +
                     (fVar30 * (float10)fVar2 + (fVar27 * fVar26 + fVar29 * fVar28)))));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar8 * (float10)fVar4 +
                     ((float10)fVar7 * fVar30 + ((float10)fVar5 * fVar28 + (float10)fVar6 * fVar26))
                     )));
  in_ecx[3] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar4 +
                     ((float10)fVar11 * fVar30 +
                     ((float10)fVar9 * fVar28 + (float10)fVar10 * fVar26)))));
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar18 +
                     ((float10)fVar17 * (float10)fVar16 +
                     ((float10)fVar13 * (float10)fVar1 + (float10)fVar15 * (float10)fVar14)))));
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar3 +
                     ((float10)fVar17 * (float10)fVar2 +
                     ((float10)fVar13 * fVar29 + (float10)fVar14 * fVar27)))));
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar8 +
                     ((float10)fVar17 * (float10)fVar7 +
                     ((float10)fVar13 * (float10)fVar5 + (float10)fVar14 * (float10)fVar6)))));
  in_ecx[7] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar12 +
                     ((float10)fVar17 * (float10)fVar11 +
                     ((float10)fVar13 * (float10)fVar9 + (float10)fVar14 * (float10)fVar10)))));
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar18 +
                     ((float10)fVar22 * (float10)fVar16 +
                     ((float10)fVar20 * (float10)fVar1 + (float10)fVar21 * (float10)fVar15)))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar3 +
                     ((float10)fVar22 * (float10)fVar2 +
                     ((float10)fVar20 * fVar29 + (float10)fVar21 * fVar27)))));
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar8 +
                      ((float10)fVar22 * (float10)fVar7 +
                      ((float10)fVar20 * (float10)fVar5 + (float10)fVar21 * (float10)fVar6)))));
  in_ecx[0xb] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar12 +
                       ((float10)fVar22 * (float10)fVar11 +
                       ((float10)fVar20 * (float10)fVar9 + (float10)fVar21 * (float10)fVar10)))));
  in_ecx[0xc] = ((float)GEN_TOF(((float10)fVar25 * (float10)fVar18 +
                       ((float10)fVar24 * (float10)fVar16 +
                       ((float10)in_ecx[0xd] * (float10)fVar1 +
                       (float10)in_ecx[0xc] * (float10)fVar15)))));
  in_ecx[0xd] = ((float)GEN_TOF(((float10)fVar25 * (float10)fVar3 +
                       ((float10)fVar24 * (float10)fVar2 + (fVar31 * fVar27 + fVar32 * fVar29)))));
  in_ecx[0xe] = ((float)GEN_TOF(((float10)fVar25 * (float10)fVar8 +
                       ((float10)fVar24 * (float10)fVar7 +
                       (fVar32 * (float10)fVar5 + fVar31 * (float10)fVar6)))));
  in_ecx[0xf] = ((float)GEN_TOF(((float10)fVar25 * (float10)fVar12 +
                       ((float10)fVar24 * (float10)fVar11 +
                       ((float10)fVar10 * fVar31 + (float10)fVar9 * fVar32)))));
  *in_ecx = ((float)GEN_TOF(((float10)fVar18 * (float10)fVar4 +
                   (fVar30 * (float10)fVar16 + (fVar28 * (float10)fVar1 + (float10)fVar15 * fVar26))
                   )));
  return 0;
}

/* ref: FUN_004f22c0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f22c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f22c0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = in_ecx[9];
  fVar3 = in_ecx[0xd];
  fVar4 = *(float *)(param_2 + 0xc);
  fVar28 = (float10)*(float *)param_2;
  fVar29 = (float10)in_ecx[1];
  fVar30 = (float10)in_ecx[5];
  fVar31 = (float10)*(float *)(param_2 + 4);
  fVar32 = (float10)*(float *)(param_2 + 8);
  fVar5 = in_ecx[6];
  fVar6 = in_ecx[2];
  fVar7 = in_ecx[10];
  fVar8 = in_ecx[0xe];
  fVar9 = in_ecx[7];
  fVar10 = in_ecx[3];
  fVar11 = in_ecx[0xb];
  fVar12 = in_ecx[0xf];
  fVar13 = in_ecx[4];
  fVar14 = *(float *)(param_2 + 0x10);
  fVar15 = *in_ecx;
  fVar16 = *(float *)(param_2 + 0x18);
  fVar17 = in_ecx[8];
  fVar18 = in_ecx[0xc];
  fVar19 = *(float *)(param_2 + 0x1c);
  fVar20 = *(float *)(param_2 + 0x24);
  fVar21 = *(float *)(param_2 + 0x20);
  fVar22 = *(float *)(param_2 + 0x28);
  fVar23 = *(float *)(param_2 + 0x2c);
  fVar24 = *(float *)(param_2 + 0x34);
  fVar25 = *(float *)(param_2 + 0x30);
  fVar26 = *(float *)(param_2 + 0x38);
  fVar27 = *(float *)(param_2 + 0x3c);
  fVar33 = (float10)fVar25;
  fVar34 = (float10)fVar24;
  in_ecx[1] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 +
                     (fVar32 * (float10)fVar2 + (fVar29 * fVar28 + fVar31 * fVar30)))));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar8 * (float10)fVar4 +
                     ((float10)fVar7 * fVar32 + ((float10)fVar5 * fVar31 + (float10)fVar6 * fVar28))
                     )));
  in_ecx[3] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar4 +
                     ((float10)fVar11 * fVar32 +
                     ((float10)fVar9 * fVar31 + (float10)fVar10 * fVar28)))));
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar18 +
                     ((float10)fVar17 * (float10)fVar16 +
                     ((float10)fVar13 * (float10)fVar1 + (float10)fVar15 * (float10)fVar14)))));
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar3 +
                     ((float10)fVar16 * (float10)fVar2 +
                     ((float10)fVar1 * fVar30 + (float10)fVar14 * fVar29)))));
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar8 +
                     ((float10)fVar16 * (float10)fVar7 +
                     ((float10)fVar1 * (float10)fVar5 + (float10)fVar14 * (float10)fVar6)))));
  in_ecx[7] = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar12 +
                     ((float10)fVar16 * (float10)fVar11 +
                     ((float10)fVar1 * (float10)fVar9 + (float10)fVar14 * (float10)fVar10)))));
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar18 +
                     ((float10)fVar22 * (float10)fVar17 +
                     ((float10)fVar20 * (float10)fVar13 + (float10)fVar21 * (float10)fVar15)))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar3 +
                     ((float10)fVar22 * (float10)fVar2 +
                     ((float10)fVar20 * fVar30 + (float10)fVar21 * fVar29)))));
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar8 +
                      ((float10)fVar22 * (float10)fVar7 +
                      ((float10)fVar20 * (float10)fVar5 + (float10)fVar21 * (float10)fVar6)))));
  in_ecx[0xb] = ((float)GEN_TOF(((float10)fVar23 * (float10)fVar12 +
                       ((float10)fVar22 * (float10)fVar11 +
                       ((float10)fVar20 * (float10)fVar9 + (float10)fVar21 * (float10)fVar10)))));
  in_ecx[0xc] = ((float)GEN_TOF(((float10)fVar27 * (float10)fVar18 +
                       ((float10)fVar26 * (float10)fVar17 +
                       ((float10)fVar24 * (float10)fVar13 + (float10)fVar25 * (float10)fVar15)))));
  in_ecx[0xd] = ((float)GEN_TOF(((float10)fVar27 * (float10)fVar3 +
                       ((float10)fVar26 * (float10)fVar2 + (fVar33 * fVar29 + fVar34 * fVar30)))));
  in_ecx[0xe] = ((float)GEN_TOF(((float10)fVar27 * (float10)fVar8 +
                       ((float10)fVar26 * (float10)fVar7 +
                       (fVar34 * (float10)fVar5 + fVar33 * (float10)fVar6)))));
  in_ecx[0xf] = ((float)GEN_TOF(((float10)fVar27 * (float10)fVar12 +
                       ((float10)fVar26 * (float10)fVar11 +
                       ((float10)fVar10 * fVar33 + (float10)fVar9 * fVar34)))));
  *in_ecx = ((float)GEN_TOF(((float10)fVar18 * (float10)fVar4 +
                   (fVar32 * (float10)fVar17 + ((float10)fVar13 * fVar31 + (float10)fVar15 * fVar28)
                   ))));
  return 0;
}

/* ref: FUN_004f2650 */
GEN_FRAME unsigned int GEN_THISCALL F_004f2650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f2650u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar1 = in_ecx[9];
  fVar20 = (float10)*(float *)param_2;
  fVar21 = (float10)in_ecx[1];
  fVar22 = (float10)in_ecx[5];
  fVar23 = (float10)*(float *)(param_2 + 4);
  fVar24 = (float10)*(float *)(param_2 + 8);
  fVar2 = in_ecx[6];
  fVar3 = in_ecx[2];
  fVar4 = in_ecx[10];
  fVar5 = in_ecx[7];
  fVar6 = in_ecx[3];
  fVar7 = in_ecx[0xb];
  fVar8 = *(float *)(param_2 + 0x14);
  fVar9 = in_ecx[4];
  fVar10 = *(float *)(param_2 + 0x10);
  fVar11 = *in_ecx;
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = in_ecx[8];
  fVar14 = *(float *)(param_2 + 0x24);
  fVar15 = *(float *)(param_2 + 0x20);
  fVar16 = *(float *)(param_2 + 0x28);
  fVar17 = *(float *)(param_2 + 0x34);
  fVar18 = *(float *)(param_2 + 0x30);
  fVar19 = *(float *)(param_2 + 0x38);
  in_ecx[1] = ((float)GEN_TOF((fVar24 * (float10)fVar1 + (fVar21 * fVar20 + fVar23 * fVar22))));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar4 * fVar24 + ((float10)fVar2 * fVar23 + (float10)fVar3 * fVar20))))
  ;
  in_ecx[3] = ((float)GEN_TOF(((float10)fVar7 * fVar24 + ((float10)fVar5 * fVar23 + (float10)fVar6 * fVar20))))
  ;
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar12 +
                     ((float10)fVar9 * (float10)fVar8 + (float10)fVar11 * (float10)fVar10))));
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar1 +
                     ((float10)fVar8 * fVar22 + (float10)fVar10 * fVar21))));
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar4 +
                     ((float10)fVar8 * (float10)fVar2 + (float10)fVar10 * (float10)fVar3))));
  fVar25 = (float10)fVar18;
  in_ecx[7] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar7 +
                     ((float10)fVar8 * (float10)fVar5 + (float10)fVar10 * (float10)fVar6))));
  fVar26 = (float10)fVar17;
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar13 +
                     ((float10)fVar14 * (float10)fVar9 + (float10)fVar15 * (float10)fVar11))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar1 +
                     ((float10)fVar14 * fVar22 + (float10)fVar15 * fVar21))));
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar4 +
                      ((float10)fVar14 * (float10)fVar2 + (float10)fVar15 * (float10)fVar3))));
  in_ecx[0xb] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar7 +
                       ((float10)fVar14 * (float10)fVar5 + (float10)fVar15 * (float10)fVar6))));
  in_ecx[0xc] = ((float)GEN_TOF((((float10)fVar19 * (float10)fVar13 +
                        ((float10)fVar17 * (float10)fVar9 + (float10)fVar18 * (float10)fVar11)) +
                       (float10)in_ecx[0xc])));
  in_ecx[0xd] = ((float)GEN_TOF(((float10)in_ecx[0xd] +
                       ((float10)fVar19 * (float10)fVar1 + (fVar25 * fVar21 + fVar26 * fVar22)))));
  *in_ecx = ((float)GEN_TOF((((float10)fVar11 * fVar20 + (float10)fVar9 * fVar23) + (float10)fVar13 * fVar24)))
  ;
  in_ecx[0xe] = ((float)GEN_TOF((((float10)fVar19 * (float10)fVar4 +
                        (fVar26 * (float10)fVar2 + fVar25 * (float10)fVar3)) + (float10)in_ecx[0xe])))
  ;
  in_ecx[0xf] = ((float)GEN_TOF(((float10)in_ecx[0xf] +
                       ((float10)fVar19 * (float10)fVar7 +
                       ((float10)fVar6 * fVar25 + (float10)fVar5 * fVar26)))));
  return 0;
}

/* ref: FUN_004f2940 */
GEN_FRAME unsigned int GEN_THISCALL F_004f2940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f2940u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  double dVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar13 = (float10)*(float *)param_2;
  fVar14 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar15 = (float10)*(float *)(param_2 + 4);
  fVar16 = (float10)*(float *)(param_2 + 8);
  fVar17 = (float10)(float)(fVar15 * fVar14);
  fVar25 = (float10)(float)(fVar16 * fVar14) * fVar16;
  fVar1 = *(float *)(param_2 + 0xc);
  dVar12 = ((double)GEN_TOD(((float10)(float)(fVar16 * fVar14) * (float10)fVar1)));
  fVar14 = (float10)(float)(fVar13 * fVar14);
  fVar26 = (float10)1 - fVar14 * fVar13;
  fVar2 = (float)(fVar26 - fVar17 * fVar15);
  fVar3 = in_ecx[1];
  fVar4 = in_ecx[2];
  fVar18 = (float10)*in_ecx;
  fVar19 = (float10)(float)(fVar14 * fVar15 + (float10)dVar12);
  fVar20 = (float10)fVar3;
  fVar26 = (float10)(float)(fVar26 - fVar25);
  fVar21 = (float10)(float)(fVar17 * fVar16 - (float10)fVar1 * fVar14);
  fVar22 = (float10)((float)GEN_TOF(((float10)(double)(fVar16 * fVar14) - (float10)fVar1 * fVar17)));
  fVar23 = (float10)(float)((float10)fVar1 * fVar14 + fVar17 * fVar16);
  fVar5 = in_ecx[5];
  fVar6 = in_ecx[4];
  fVar7 = in_ecx[6];
  fVar8 = in_ecx[9];
  fVar9 = in_ecx[8];
  fVar10 = in_ecx[10];
  in_ecx[1] = ((float)GEN_TOF(((fVar19 * fVar18 + fVar26 * fVar20) + fVar21 * (float10)fVar4)));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar2 + (fVar22 * fVar18 + fVar23 * fVar20))));
  fVar11 = in_ecx[0xe];
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar7 * fVar21 + ((float10)fVar5 * fVar26 + (float10)fVar6 * fVar19))))
  ;
  fVar18 = (float10)in_ecx[0xc];
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar7 * (float10)fVar2 +
                     ((float10)fVar5 * fVar23 + (float10)fVar6 * fVar22))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar10 * fVar21 + ((float10)fVar8 * fVar26 + (float10)fVar9 * fVar19)
                     )));
  fVar20 = (float10)in_ecx[0xd];
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar2 +
                      ((float10)fVar8 * fVar23 + (float10)fVar9 * fVar22))));
  fVar24 = (float10)fVar11;
  fVar15 = (float10)((float)GEN_TOF((((float10)1 - fVar17 * fVar15) - fVar25)));
  fVar13 = (float10)(float)(fVar13 * fVar17 - (float10)dVar12);
  fVar14 = (float10)((float)GEN_TOF(((float10)(double)((float10)fVar1 * fVar17) +
                           (float10)(double)(fVar16 * fVar14))));
  *in_ecx = ((float)GEN_TOF(((fVar15 * (float10)*in_ecx + fVar13 * (float10)fVar3) + fVar14 * (float10)fVar4)))
  ;
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar7 * fVar14 + ((float10)fVar5 * fVar13 + (float10)fVar6 * fVar15))))
  ;
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar10 * fVar14 + ((float10)fVar8 * fVar13 + (float10)fVar9 * fVar15)
                     )));
  in_ecx[0xd] = ((float)GEN_TOF(((fVar18 * fVar19 + fVar20 * fVar26) + fVar24 * fVar21)));
  in_ecx[0xe] = ((float)GEN_TOF(((fVar18 * fVar22 + fVar20 * fVar23) + (float10)fVar2 * fVar24)));
  in_ecx[0xc] = ((float)GEN_TOF(((fVar20 * fVar13 + fVar18 * fVar15) + (float10)fVar11 * fVar14)));
  return 0;
}

/* ref: FUN_004f2bf0 */
GEN_FRAME uint GEN_THISCALL F_004f2bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4f2bf0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
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
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar17 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar12 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar12 = (float10)(float)fVar12;
  fVar26 = (float10)1 - fVar12;
  fVar13 = (float10)*(float *)param_2;
  fVar14 = (float10)*(float *)(param_2 + 4);
  fVar1 = (float)(fVar14 * fVar26);
  fVar15 = (float10)*(float *)(param_2 + 8);
  fVar16 = (float10)(float)(fVar13 * fVar26);
  fVar17 = (float10)(float)fVar17;
  fVar26 = (float10)(float)(fVar15 * fVar26);
  fVar2 = (float)(fVar26 * fVar15 + fVar12);
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar18 = (float10)*param_1;
  fVar19 = (float10)((float)GEN_TOF((fVar14 * fVar16 + (float10)(double)(fVar17 * fVar15))));
  fVar20 = (float10)fVar3;
  fVar21 = (float10)(float)(fVar14 * (float10)fVar1 + fVar12);
  fVar22 = (float10)(float)(fVar26 * fVar14 - fVar17 * fVar13);
  fVar23 = (float10)(float)(fVar15 * fVar16 - fVar14 * fVar17);
  fVar24 = (float10)(float)(fVar15 * (float10)fVar1 + fVar17 * fVar13);
  fVar5 = param_1[5];
  fVar6 = param_1[4];
  fVar7 = param_1[6];
  fVar8 = param_1[9];
  fVar9 = param_1[8];
  fVar10 = param_1[10];
  param_1[1] = ((float)GEN_TOF(((fVar19 * fVar18 + fVar21 * fVar20) + fVar22 * (float10)fVar4)));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar2 + (fVar23 * fVar18 + fVar24 * fVar20))));
  param_1[5] = ((float)GEN_TOF(((float10)fVar7 * fVar22 + ((float10)fVar5 * fVar21 + (float10)fVar6 * fVar19)
                      )));
  param_1[6] = ((float)GEN_TOF(((float10)fVar7 * (float10)fVar2 +
                      ((float10)fVar5 * fVar24 + (float10)fVar6 * fVar23))));
  fVar11 = param_1[0xe];
  fVar18 = (float10)param_1[0xc];
  fVar20 = (float10)param_1[0xd];
  fVar25 = (float10)fVar11;
  fVar12 = (float10)(float)(fVar12 + fVar16 * fVar13);
  fVar15 = (float10)((float)GEN_TOF((fVar13 * (float10)fVar1 - (float10)(double)(fVar17 * fVar15))));
  fVar17 = (float10)(float)(fVar26 * fVar13 + fVar14 * fVar17);
  *param_1 = ((float)GEN_TOF(((fVar12 * (float10)*param_1 + fVar15 * (float10)fVar3) +
                    fVar17 * (float10)fVar4)));
  param_1[4] = ((float)GEN_TOF(((float10)fVar7 * fVar17 + ((float10)fVar5 * fVar15 + (float10)fVar6 * fVar12)
                      )));
  param_1[9] = ((float)GEN_TOF(((float10)fVar10 * fVar22 +
                      ((float10)fVar8 * fVar21 + (float10)fVar9 * fVar19))));
  param_1[10] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar2 +
                       ((float10)fVar8 * fVar24 + (float10)fVar9 * fVar23))));
  param_1[0xd] = ((float)GEN_TOF(((fVar18 * fVar19 + fVar20 * fVar21) + fVar25 * fVar22)));
  param_1[0xe] = ((float)GEN_TOF(((fVar18 * fVar23 + fVar20 * fVar24) + (float10)fVar2 * fVar25)));
  param_1[8] = ((float)GEN_TOF(((float10)fVar10 * fVar17 +
                      ((float10)fVar8 * fVar15 + (float10)fVar9 * fVar12))));
  param_1[0xc] = ((float)GEN_TOF(((fVar20 * fVar15 + fVar18 * fVar12) + (float10)fVar11 * fVar17)));
  return (uint)param_1;
}

/* ref: FUN_004f2ec0 */
GEN_FRAME uint GEN_THISCALL F_004f2ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f2ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  float10 fVar35;
  float10 fVar36;
  float10 fVar37;
  float10 fVar38;
  float10 fVar39;
  float10 fVar40;
  float10 fVar41;
  
  fVar26 = F_004f0cc0(in_ecx GEN_EDX_FWD);
  fVar1 = ((float *)(uint)(in_ecx))[0xd];
  fVar27 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[2]));
  fVar28 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[7]));
  fVar29 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[3]));
  fVar30 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[6]));
  dVar12 = (double)(fVar28 * fVar27 - fVar30 * fVar29);
  fVar31 = ((float10)GEN_TOD(((float *)(uint)(in_ecx))[5]));
  fVar2 = ((float *)(uint)(in_ecx))[1];
  dVar13 = (double)((float10)fVar2 * fVar28);
  fVar3 = ((float *)(uint)(in_ecx))[0xe];
  dVar14 = (double)((float10)fVar2 * fVar30 - fVar31 * fVar27);
  fVar4 = ((float *)(uint)(in_ecx))[0xf];
  fVar5 = ((float *)(uint)(in_ecx))[0xb];
  fVar6 = ((float *)(uint)(in_ecx))[10];
  dVar15 = (double)((float10)fVar5 * fVar30 - (float10)fVar6 * fVar28);
  fVar7 = ((float *)(uint)(in_ecx))[9];
  dVar16 = (double)((float10)fVar7 * fVar28);
  dVar17 = (double)((float10)fVar6 * fVar31 - fVar30 * (float10)fVar7);
  fVar8 = *((float *)(uint)(in_ecx));
  fVar9 = ((float *)(uint)(in_ecx))[0xc];
  dVar18 = (double)((float10)fVar8 * (float10)fVar4 - (float10)fVar9 * fVar29);
  dVar19 = (double)((float10)fVar3 * (float10)fVar8);
  dVar20 = (double)((float10)fVar3 * fVar29 - (float10)fVar4 * fVar27);
  fVar10 = ((float *)(uint)(in_ecx))[8];
  dVar21 = (double)((float10)fVar8 * fVar30);
  fVar11 = ((float *)(uint)(in_ecx))[4];
  fVar34 = (float10)fVar11 * fVar29 - fVar28 * (float10)fVar8;
  fVar35 = (float10)fVar10 * fVar28 - (float10)fVar11 * (float10)fVar5;
  dVar22 = (double)((float10)fVar1 * (float10)fVar5);
  dVar23 = (double)((float10)fVar1 * (float10)fVar10 - (float10)fVar9 * (float10)fVar7);
  dVar24 = (double)((float10)fVar9 * (float10)fVar5 - (float10)fVar10 * (float10)fVar4);
  dVar25 = (double)((float10)fVar2 * (float10)fVar4);
  fVar36 = (float10)fVar2 * (float10)fVar9 - (float10)fVar8 * (float10)fVar1;
  fVar37 = (float10)fVar8 * fVar31 - (float10)fVar11 * (float10)fVar2;
  fVar38 = (float10)fVar11 * (float10)fVar7 - (float10)fVar10 * fVar31;
  fVar32 = (float10)fVar3;
  fVar40 = fVar32 * (float10)fVar7 - (float10)fVar6 * (float10)fVar1;
  fVar39 = (float10)fVar1 * fVar27 - fVar32 * (float10)fVar2;
  fVar33 = (float10)fVar6;
  fVar41 = fVar33 * (float10)fVar4 - (float10)fVar5 * fVar32;
  fVar26 = (float10)(float)((float10)1 / fVar26);
  *((float *)(uint)(in_ecx)) = ((float)GEN_TOF((fVar26 * (float10)((float)GEN_TOF((fVar28 * (float10)(double)fVar40 + (fVar31 * fVar41 + ((float10)dVar22 - (float10)(fVar7 * fVar4)) * fVar30)))))));
  ((float *)(uint)(in_ecx))[1] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar5 * (float10)(double)fVar39 + ((float10)fVar7 * (float10)dVar20 + ((float10)dVar25 - (float10)(double)((float10)fVar1 * fVar29)) * fVar33)))) * fVar26)));
  ((float *)(uint)(in_ecx))[2] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)fVar4 * (float10)dVar14 + ((float10)fVar1 * (float10)dVar12 + ((float10)(double)(fVar31 * fVar29) - (float10)dVar13) * (float10)fVar3)))) * fVar26)));
  ((float *)(uint)(in_ecx))[3] = ((float)GEN_TOF((-(float10)((float)GEN_TOF((fVar29 * (float10)dVar17 + ((float10)fVar2 * (float10)dVar15 + ((float10)dVar16 - (float10)(double)((float10)fVar5 * fVar31)) * fVar27)))) * fVar26)));
  ((float *)(uint)(in_ecx))[4] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((fVar30 * (float10)dVar24 + ((float10)(double)((float10)fVar10 * fVar32) - (float10)(fVar9 * fVar6)) * fVar28) + (float10)fVar11 * fVar41))) * fVar26)));
  ((float *)(uint)(in_ecx))[5] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)fVar10 * (float10)dVar20 + ((float10)fVar6 * (float10)dVar18 + ((float10)(double)((float10)fVar9 * fVar27) - (float10)dVar19) * (float10)fVar5)))) * fVar26)));
  ((float *)(uint)(in_ecx))[6] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar9 * (float10)dVar12 + (((float10)dVar21 - (float10)(double)((float10)fVar11 * fVar27)) * (float10)fVar4 + (float10)fVar3 * fVar34)))) * fVar26)));
  ((float *)(uint)(in_ecx))[7] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)fVar8 * (float10)dVar15 + (((float10)(fVar11 * fVar6) - (float10)fVar10 * fVar30) * fVar29 + fVar27 * fVar35)))) * fVar26)));
  ((float *)(uint)(in_ecx))[8] = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar31 * (float10)dVar24 + (fVar28 * (float10)dVar23 + ((float10)(fVar7 * fVar4) - (float10)dVar22) * (float10)fVar11)))) * fVar26)));
  ((float *)(uint)(in_ecx))[9] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar7 * (float10)dVar18 + (((float10)(double)((float10)fVar1 * fVar29) - (float10)dVar25) * (float10)fVar10 + (float10)fVar5 * fVar36)))) * fVar26)));
  ((float *)(uint)(in_ecx))[10] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)fVar1 * (float10)(double)fVar34 + (((float10)dVar13 - (float10)(double)(fVar31 * fVar29)) * (float10)fVar9 + (float10)fVar4 * fVar37)))) * fVar26)));
  ((float *)(uint)(in_ecx))[0xb] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar2 * (float10)(double)fVar35 + (fVar29 * fVar38 + ((float10)(double)((float10)fVar5 * fVar31) - (float10)dVar16) * (float10)fVar8)))) * fVar26)));
  ((float *)(uint)(in_ecx))[0xc] = ((float)GEN_TOF((-(float10)((float)GEN_TOF((fVar30 * (float10)dVar23 + (((float10)(fVar9 * fVar6) - (float10)fVar10 * fVar32) * fVar31 + (float10)fVar11 * fVar40)))) * fVar26)));
  ((float *)(uint)(in_ecx))[0xd] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(double)fVar36 * fVar33 + (((float10)dVar19 - (float10)(double)((float10)fVar9 * fVar27)) * (float10)fVar7 + (float10)fVar10 * fVar39)))) * fVar26)));
  ((float *)(uint)(in_ecx))[0xe] = ((float)GEN_TOF((-(float10)((float)GEN_TOF((fVar32 * (float10)(double)fVar37 + ((float10)fVar9 * (float10)dVar14 + ((float10)(double)((float10)fVar11 * fVar27) - (float10)dVar21) * (float10)fVar1)))) * fVar26)));
  ((float *)(uint)(in_ecx))[0xf] = ((float)GEN_TOF((fVar26 * (float10)((float)GEN_TOF((fVar27 * (float10)(double)fVar38 + ((float10)fVar8 * (float10)dVar17 + ((float10)(double)((float10)fVar10 * fVar30) - (float10)(fVar11 * fVar6)) * (float10)fVar2)))))));
  return (uint)((float *)(uint)(in_ecx));
}

/* ref: FUN_004f33d0 */
GEN_FRAME unsigned int F_004f33d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f33d0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar1 = *(float *)(param_2 + 8);
  fVar7 = (float10)*(float *)param_3;
  fVar8 = (float10)*(float *)param_2;
  fVar9 = (float10)*(float *)(param_3 + 0x10);
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_3 + 0x20);
  *(float *)param_1 = ((float)GEN_TOF(((fVar8 * fVar7 + fVar10 * fVar9) + fVar11 * (float10)fVar1)));
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x10);
  fVar4 = *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)fVar4 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar3 * fVar7))));
  fVar5 = *(float *)(param_2 + 0x24);
  fVar6 = *(float *)(param_2 + 0x20);
  fVar1 = *(float *)(param_2 + 0x28);
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)fVar1 * fVar11 + ((float10)fVar5 * fVar9 + (float10)fVar6 * fVar7))));
  fVar1 = *(float *)(param_2 + 0x38);
  *(float *)(param_1 + 0xc) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x30) +
              (((float10)*(float *)(param_2 + 0x30) * fVar7 +
               (float10)*(float *)(param_2 + 0x34) * fVar9) + (float10)fVar1 * fVar11))));
  fVar7 = (float10)*(float *)(param_3 + 4);
  fVar7 = (float10)*(float *)(param_3 + 0x14);
  fVar7 = (float10)*(float *)(param_3 + 0x24);
  *(float *)(param_1 + 0x10) = ((float)GEN_TOF((fVar7 * (float10)fVar1 + (fVar7 * fVar10 + fVar7 * fVar8))));
  *(float *)(param_1 + 0x14) =
       ((float)GEN_TOF((fVar7 * (float10)fVar4 + (fVar7 * (float10)fVar2 + fVar7 * (float10)fVar3))));
  *(float *)(param_1 + 0x18) =
       ((float)GEN_TOF((fVar7 * (float10)fVar1 + (fVar7 * (float10)fVar5 + fVar7 * (float10)fVar6))));
  fVar7 = (float10)*(float *)(param_2 + 0x30);
  fVar7 = (float10)*(float *)(param_2 + 0x34);
  *(float *)(param_1 + 0x1c) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x34) +
              ((fVar7 * fVar7 + fVar7 * fVar7) + (float10)fVar1 * fVar7))));
  fVar7 = (float10)*(float *)(param_3 + 8);
  fVar7 = (float10)*(float *)(param_3 + 0x18);
  fVar7 = (float10)*(float *)(param_3 + 0x28);
  *(float *)(param_1 + 0x20) = ((float)GEN_TOF((fVar7 * (float10)fVar1 + (fVar7 * fVar8 + fVar7 * fVar10))));
  *(float *)(param_1 + 0x24) =
       ((float)GEN_TOF((fVar7 * (float10)fVar4 + (fVar7 * (float10)fVar2 + fVar7 * (float10)fVar3))));
  *(float *)(param_1 + 0x28) =
       ((float)GEN_TOF((fVar7 * (float10)fVar1 + (fVar7 * (float10)fVar5 + fVar7 * (float10)fVar6))));
  *(float *)(param_1 + 0x2c) =
       ((float)GEN_TOF(((fVar7 * (float10)fVar1 + (fVar7 * fVar7 + fVar7 * fVar7)) +
              (float10)*(float *)(param_3 + 0x38))));
  return 0;
}

/* ref: FUN_004f35b0 */
GEN_FRAME unsigned int F_004f35b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f35b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar1 = *(float *)(param_2 + 0x20);
  fVar7 = (float10)*(float *)param_3;
  fVar8 = (float10)*(float *)param_2;
  fVar9 = (float10)*(float *)(param_3 + 0x10);
  fVar10 = (float10)*(float *)(param_2 + 0x10);
  fVar11 = (float10)*(float *)(param_3 + 0x20);
  *(float *)param_1 = ((float)GEN_TOF((fVar11 * (float10)fVar1 + (fVar8 * fVar7 + fVar10 * fVar9))));
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 0x24);
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)fVar4 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar3 * fVar7))));
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 8);
  fVar1 = *(float *)(param_2 + 0x28);
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)fVar1 * fVar11 + ((float10)fVar5 * fVar9 + (float10)fVar6 * fVar7))));
  fVar1 = *(float *)(param_2 + 0x2c);
  *(float *)(param_1 + 0xc) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x30) +
              (((float10)*(float *)(param_2 + 0xc) * fVar7 +
               (float10)*(float *)(param_2 + 0x1c) * fVar9) + (float10)fVar1 * fVar11))));
  fVar7 = (float10)*(float *)(param_3 + 4);
  fVar7 = (float10)*(float *)(param_3 + 0x14);
  fVar7 = (float10)*(float *)(param_3 + 0x24);
  *(float *)(param_1 + 0x10) = ((float)GEN_TOF((fVar7 * (float10)fVar1 + (fVar7 * fVar10 + fVar7 * fVar8))));
  *(float *)(param_1 + 0x14) =
       ((float)GEN_TOF((fVar7 * (float10)fVar4 + (fVar7 * (float10)fVar2 + fVar7 * (float10)fVar3))));
  *(float *)(param_1 + 0x18) =
       ((float)GEN_TOF((fVar7 * (float10)fVar1 + (fVar7 * (float10)fVar5 + fVar7 * (float10)fVar6))));
  fVar7 = (float10)*(float *)(param_2 + 0xc);
  fVar7 = (float10)*(float *)(param_2 + 0x1c);
  *(float *)(param_1 + 0x1c) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x34) +
              ((fVar7 * fVar7 + fVar7 * fVar7) + (float10)fVar1 * fVar7))));
  fVar7 = (float10)*(float *)(param_3 + 8);
  fVar7 = (float10)*(float *)(param_3 + 0x18);
  fVar7 = (float10)*(float *)(param_3 + 0x28);
  *(float *)(param_1 + 0x20) = ((float)GEN_TOF((fVar7 * (float10)fVar1 + (fVar7 * fVar8 + fVar7 * fVar10))));
  *(float *)(param_1 + 0x24) =
       ((float)GEN_TOF((fVar7 * (float10)fVar4 + (fVar7 * (float10)fVar2 + fVar7 * (float10)fVar3))));
  *(float *)(param_1 + 0x28) =
       ((float)GEN_TOF((fVar7 * (float10)fVar1 + (fVar7 * (float10)fVar5 + fVar7 * (float10)fVar6))));
  *(float *)(param_1 + 0x2c) =
       ((float)GEN_TOF(((fVar7 * (float10)fVar1 + (fVar7 * fVar7 + fVar7 * fVar7)) +
              (float10)*(float *)(param_3 + 0x38))));
  return 0;
}

/* ref: FUN_004f3790 */
GEN_FRAME unsigned int GEN_THISCALL F_004f3790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3790u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar17 = (float10)*in_ecx;
  fVar18 = (float10)in_ecx[1];
  fVar19 = (float10)in_ecx[2];
  fVar4 = *(float *)(param_2 + 0x18);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x28);
  fVar7 = *(float *)(param_2 + 0x1c);
  fVar8 = *(float *)(param_2 + 0xc);
  fVar9 = *(float *)(param_2 + 0x2c);
  fVar10 = *(float *)(param_2 + 0x10);
  fVar11 = *(float *)param_2;
  fVar12 = *(float *)(param_2 + 0x20);
  fVar13 = in_ecx[6];
  fVar20 = (float10)in_ecx[4];
  fVar21 = (float10)in_ecx[5];
  fVar22 = (float10)fVar8;
  fVar23 = (float10)fVar7;
  fVar14 = in_ecx[9];
  fVar15 = in_ecx[8];
  fVar16 = in_ecx[10];
  in_ecx[1] = ((float)GEN_TOF((fVar19 * (float10)fVar3 + (fVar18 * (float10)fVar1 + fVar17 * (float10)fVar2))))
  ;
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar6 * fVar19 + ((float10)fVar4 * fVar18 + (float10)fVar5 * fVar17))))
  ;
  in_ecx[3] = ((float)GEN_TOF((((float10)fVar9 * fVar19 + ((float10)fVar7 * fVar18 + (float10)fVar8 * fVar17)
                      ) + (float10)in_ecx[3])));
  *in_ecx = ((float)GEN_TOF((fVar19 * (float10)fVar12 + (fVar18 * (float10)fVar10 + (float10)fVar11 * fVar17)
                   )));
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar12 +
                     (fVar21 * (float10)fVar10 + fVar20 * (float10)fVar11))));
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar3 +
                     (fVar21 * (float10)fVar1 + fVar20 * (float10)fVar2))));
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar6 +
                     (fVar21 * (float10)fVar4 + fVar20 * (float10)fVar5))));
  in_ecx[7] = ((float)GEN_TOF(((float10)in_ecx[7] +
                     ((float10)fVar13 * (float10)fVar9 + (fVar22 * fVar20 + fVar23 * fVar21)))));
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar12 +
                     ((float10)fVar14 * (float10)fVar10 + (float10)fVar15 * (float10)fVar11))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar3 +
                     ((float10)fVar14 * (float10)fVar1 + (float10)fVar15 * (float10)fVar2))));
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar16 * (float10)fVar6 +
                      ((float10)fVar14 * (float10)fVar4 + (float10)fVar15 * (float10)fVar5))));
  in_ecx[0xb] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar9 +
                        (fVar23 * (float10)fVar14 + (float10)fVar15 * fVar22)) +
                       (float10)in_ecx[0xb])));
  return 0;
}

/* ref: FUN_004f39d0 */
GEN_FRAME byte GEN_THISCALL F_004f39d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f39d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x84) = param_1;
  iVar1 = (int)this + 4;
  iVar2 = 0x10;
  do {
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  iVar1 = (int)this + 0x8c;
  *(int *)iVar1 = iVar1;
  *(int *)((int)this + 0x90) = iVar1;
  return 1;
}

/* ref: Client::Graphics::AllocatorPool::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_004f3a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3a10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Client::Graphics::AllocatorPool::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_004f3a20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3a20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa0);
}

/* ref: Client::Graphics::AllocatorPool::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_004f3a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3a30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa4);
}

/* ref: Client::Graphics::AllocatorPool::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_004f3a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3a40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa8);
}

/* ref: FUN_004f3a50 */
GEN_FRAME uint GEN_STDCALL F_004f3a50(unsigned int gen_a0)
{
  GEN_ENTER(0x4f3a50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  *param_1 = (int)param_1;
  param_1[1] = (int)param_1;
  return (uint)param_1;
}

/* ref: FUN_004f3a70 */
GEN_FRAME uint GEN_STDCALL F_004f3a70(unsigned int gen_a0)
{
  GEN_ENTER(0x4f3a70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  *param_1 = (int)param_1;
  param_1[1] = (int)param_1;
  return (uint)param_1;
}

/* ref: FUN_004f3a90 */
GEN_FRAME byte GEN_THISCALL F_004f3a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x84) + 8))))(*(int * PTR32 *)((int)this + 0x84) GEN_EDX_FWD,0x4000,0x400);
  if (uVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 8) = uVar1;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x10;
  *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 0x4000;
  return 1;
}

/* ref: FUN_004f3ae0 */
GEN_FRAME uint GEN_THISCALL F_004f3ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x84) + 0x10))))
                    (*(int * PTR32 *)((int)this + 0x84) GEN_EDX_ARG,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) - 0x4000;
  return uVar1;
}

/* ref: FUN_004f3b20 */
GEN_FRAME byte GEN_THISCALL F_004f3b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f3b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  iVar3 = 0x18;
  pvVar1 = this;
  do {
    pvVar2 = (undefined *)((int)pvVar1 + 8);
    *(undefined * PTR32 *)pvVar2 = pvVar2;
    *(undefined * PTR32 *)((int)pvVar1 + 0xc) = pvVar2;
    iVar3 = iVar3 - 1;
    pvVar1 = pvVar2;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xec) = param_3;
  *(undefined4 *)((int)this + 0xe8) = param_2;
  return 1;
}

/* ref: Client::Graphics::AllocatorHeap::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004f3b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar1 = *(int * PTR32 *)(this + 0xcc);
  if (piVar1 != (int *)0x0) {
    piVar4 = piVar1;
    for (iVar5 = *(int *)(this + 0xd4); iVar5 != 0; iVar5 = iVar5 - 1) {
      if (piVar4[2] != 0) {
        iVar2 = *piVar4;
        do {
          iVar2 = *(int *)(iVar2 + 0xc);
        } while (iVar2 != *piVar4);
      }
      piVar4 = piVar4 + 4;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x10))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,piVar1);
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  return uVar3;
}

/* ref: FUN_004f3bf0 */
GEN_FRAME uint GEN_THISCALL F_004f3bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) - param_1[2];
  param_1[2] = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,*param_1);
  *param_1 = 0;
  return uVar1;
}

/* ref: Client::Graphics::AllocatorHeap::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_004f3c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xd8);
}

/* ref: Client::Graphics::AllocatorHeap::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_004f3c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xdc);
}

/* ref: Client::Graphics::AllocatorHeap::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_004f3c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xe0);
}

/* ref: Client::Graphics::AllocatorHeap::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_004f3c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xe4);
}

/* ref: Client::Graphics::AllocatorHeap::vf9 */
GEN_FRAME uint GEN_THISCALL F_004f3c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(param_1 - 0x10);
}

/* ref: FUN_004f3c70 */
GEN_FRAME byte GEN_THISCALL F_004f3c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f3c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  
  F_004f3b20((undefined *)((int)this + 4) GEN_EDX_FWD,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 400) = ((undefined4)(uint)((undefined *)((int)this + 4)));
  iVar1 = (int)this + 0x110;
  iVar2 = 0x10;
  do {
    *(int *)iVar1 = iVar1;
    *(int *)(iVar1 + 4) = iVar1;
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  iVar1 = (int)this + 0x198;
  *(int *)((int)this + 0x19c) = iVar1;
  *(int *)iVar1 = iVar1;
  return 1;
}

/* ref: Client::Graphics::AllocatorHybrid::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004f3cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f3cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 4))))(this + 0x10c GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))
                    (this + 4 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorHybrid::vf4 */
GEN_FRAME uint GEN_THISCALL F_004f3ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f3ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 0x10))))
                    (this + 0x10c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorHybrid::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_004f3d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f3d00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x14))))
                    (this + 4 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorHybrid::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_004f3d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 0x18))))(this + 0x10c GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 0x14))))(this + 0x10c GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x18))))(this + 4 GEN_EDX_ARG);
  return uVar3 - (uVar2 - uVar1);
}

/* ref: Client::Graphics::AllocatorHybrid::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_004f3d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f3d50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x1c))))
                    (this + 4 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorHybrid::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_004f3d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1d0);
}

/* ref: Client::Graphics::AllocatorHybrid::vf9 */
GEN_FRAME uint GEN_THISCALL F_004f3d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f3d70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 0x24))))
                    (this + 0x10c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorHybrid::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_004f3d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f3d90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 0x14))))
                    (this + 0x10c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorHybrid::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_004f3db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f3db0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 0x18))))
                    (this + 0x10c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_004f3dd0 */
GEN_FRAME byte GEN_THISCALL F_004f3dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f3dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1 != 0;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf1 */
GEN_NOFRAME unsigned int F_004f3df0(void)
{
  GEN_ENTER(0x4f3df0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf2 */
GEN_FRAME uint GEN_THISCALL F_004f3e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f3e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xc))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_004f3e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f3e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf4 */
GEN_FRAME uint GEN_THISCALL F_004f3e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf5 */
GEN_NOFRAME uint F_004f3e50(void)
{
  GEN_ENTER(0x4f3e50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf6 */
GEN_NOFRAME uint F_004f3e60(void)
{
  GEN_ENTER(0x4f3e60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf7 */
GEN_NOFRAME uint F_004f3e70(void)
{
  GEN_ENTER(0x4f3e70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf8 */
GEN_NOFRAME uint F_004f3e80(void)
{
  GEN_ENTER(0x4f3e80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_004f3e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::AllocatorVRAM::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f3ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*(int *)(this + 0xd4) != 0) {
    iVar2 = *(int *)(this + 0xcc);
    do {
      iVar2 = *(int *)(iVar2 + 0xc);
    } while (iVar2 != *(int *)(this + 0xcc));
  }
  piVar1 = *(int * PTR32 *)(this + 4);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0xcc));
    *(undefined4 *)(this + 0xcc) = 0;
  }
  *(undefined4 *)(this + 0xd0) = 0;
  return;
}

/* ref: Client::Graphics::AllocatorVRAM::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_004f3f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3f00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xd0);
}

/* ref: Client::Graphics::AllocatorVRAM::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_004f3f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xd4);
}

/* ref: Client::Graphics::AllocatorVRAM::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_004f3f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3f20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xd8);
}

/* ref: Client::Graphics::AllocatorVRAM::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_004f3f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3f30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xdc);
}

/* ref: Client::Graphics::AllocatorVRAM::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_004f3f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::AllocatorManager::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f3f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f3f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pAVar4;
  
  pAVar4 = this + 0x34;
  iVar3 = 0xc;
  do {
    this = this + 4;
    piVar1 = *(int * PTR32 *)this;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
      puVar2 = *(undefined4 * PTR32 *)this;
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
        *(int *)this = 0;
      }
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)pAVar4 + 4))(pAVar4 GEN_EDX_ARG);
    pAVar4 = pAVar4 + 0xc;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_004f3fc0 */
GEN_FRAME uint F_004f3fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4f3fc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_004f3fe0 */
GEN_FRAME uint F_004f3fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f3fe0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ~((*(int *)&gen_args[0]) - 1U) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_004f4000 */
GEN_FRAME uint F_004f4000(unsigned int gen_a0)
{
  GEN_ENTER(0x4f4000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (param_1 == 0) {
    uVar1 = 0x20;
  }
  return uVar1;
}

/* ref: Client::Graphics::ReferencedClassBase::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_004f4040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f4040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = (uint *)(in_ecx + 4);
  uVar1 = _InterlockedExchangeAdd((volatile long *)(puVar2), (long)(1));
  return uVar1;
}

/* ref: Client::Graphics::ReferencedClassBase::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_004f4050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f4050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pRVar1;
  uint uVar2;
  
  pRVar1 = this + 4;
  LOCK();
  uVar2 = *(uint *)pRVar1;
  *(uint *)pRVar1 = *(uint *)pRVar1 - 1;
  UNLOCK();
  if (uVar2 == 1) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
    uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar2;
}

/* ref: FUN_004f4080 */
GEN_NOFRAME uint F_004f4080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f4080u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x10)) = *param_3 ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x14)) = param_3[1] ^ REFG(uint, 0x10920d0);
  uVar1 = param_3[2];
  (*(uint *)(gen_frame + 0x1c)) = param_3[3];
  (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
  (*(uint *)(gen_frame + 0x18)) = uVar1 ^ REFG(uint, 0x10920d0);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_004f6eb0(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  F_004f6d80(param_1,(uint)&(*(uint *)(gen_frame + 0x10)),(uint)param_3);
  return param_1;
}

/* ref: FUN_004f4130 */
GEN_NOFRAME uint F_004f4130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f4130u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x10)) = *param_3 ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x14)) = param_3[1] ^ REFG(uint, 0x10920d0);
  uVar1 = param_3[2];
  (*(uint *)(gen_frame + 0x1c)) = param_3[3];
  (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
  (*(uint *)(gen_frame + 0x18)) = uVar1 ^ REFG(uint, 0x10920d0);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_004f6eb0(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  F_004f6d80(param_1,(uint)&(*(uint *)(gen_frame + 0x10)),(uint)param_3);
  return param_1;
}

/* ref: FUN_004f41e0 */
GEN_NOFRAME uint GEN_THISCALL F_004f41e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f41e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x10)) = *param_2 ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x14)) = param_2[1] ^ REFG(uint, 0x10920d0);
  uVar1 = param_2[2];
  (*(uint *)(gen_frame + 0x1c)) = param_2[3];
  (*(undefined4 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined4 *)(gen_frame + 0x4)) = in_ecx[1];
  (*(undefined4 *)(gen_frame + 0x8)) = in_ecx[2];
  (*(uint *)(gen_frame + 0x18)) = uVar1 ^ REFG(uint, 0x10920d0);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_004f6eb0(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_FWD,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  F_004f6d80(in_ecx,(uint)&(*(uint *)(gen_frame + 0x10)),(uint)param_2);
  return (uint)in_ecx;
}

/* ref: FUN_004f4290 */
GEN_NOFRAME undefined * GEN_THISCALL F_004f4290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f4290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)param_2[2] - (float10)param_1[2]);
  F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_FWD);
  (*(float *)(gen_frame + 0x2c)) = param_3[1];
  (*(float *)(gen_frame + 0x28)) = param_3[2];
  fVar5 = (float10)param_3[1];
  fVar6 = (float10)param_3[2];
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x18)) * fVar5 - (float10)(*(float *)(gen_frame + 0x14)) * fVar6);
  (*(float *)(gen_frame + 0x28)) = *param_3;
  fVar7 = (float10)*param_3;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * fVar6 - fVar7 * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * fVar5);
  F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar5 = (float10)(*(float *)(gen_frame + 0x8));
  fVar6 = (float10)(*(float *)(gen_frame + 0x14));
  fVar7 = (float10)(*(float *)(gen_frame + 0x18));
  fVar8 = (float10)(*(float *)(gen_frame + 0x4));
  fVar1 = (float)(fVar6 * fVar5 - fVar8 * fVar7);
  fVar9 = (float10)(*(float *)(gen_frame + 0x10));
  fVar2 = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x0)) - fVar9 * fVar5);
  fVar3 = (float)(fVar8 * fVar9 - fVar6 * (float10)(*(float *)(gen_frame + 0x0)));
  *(float *)this = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x14) = fVar2;
  *(float *)((int)this + 4) = fVar1;
  *(float *)((int)this + 0x24) = fVar3;
  *(float *)((int)this + 8) = (*(float *)(gen_frame + 0x10));
  *(float *)((int)this + 0x10) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x18) = (*(float *)(gen_frame + 0x14));
  *(float *)((int)this + 0x20) = (*(float *)(gen_frame + 0x8));
  *(float *)((int)this + 0x28) = (*(float *)(gen_frame + 0x18));
  fVar4 = ((float)GEN_TOF((((float10)*param_1 * (float10)(*(float *)(gen_frame + 0x0)) + (float10)param_1[1] * fVar8) +
                 (float10)param_1[2] * fVar5)));
  (*(float *)(gen_frame + 0x28)) = fVar4;
  *(float *)((int)this + 0x30) = ((float)GEN_TOF(-(float10)fVar4));
  fVar1 = ((float)GEN_TOF(((float10)param_1[2] * (float10)fVar3 +
                 ((float10)*param_1 * (float10)fVar1 + (float10)param_1[1] * (float10)fVar2))));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  *(float *)((int)this + 0x34) = ((float)GEN_TOF(-(float10)fVar1));
  fVar1 = ((float)GEN_TOF((fVar7 * (float10)param_1[2] +
                 (fVar6 * (float10)param_1[1] + (float10)*param_1 * fVar9))));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  *(float *)((int)this + 0x38) = ((float)GEN_TOF(-(float10)fVar1));
  return this;
}

/* ref: FUN_004f4430 */
GEN_NOFRAME uint GEN_THISCALL F_004f4430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f4430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_1 - (float10)*param_2);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)param_1[1] - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)param_1[2] - (float10)param_2[2]);
  F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_FWD);
  (*(float *)(gen_frame + 0x2c)) = param_3[1];
  (*(float *)(gen_frame + 0x28)) = param_3[2];
  fVar5 = (float10)param_3[1];
  fVar6 = (float10)param_3[2];
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x18)) * fVar5 - (float10)(*(float *)(gen_frame + 0x14)) * fVar6);
  (*(float *)(gen_frame + 0x28)) = *param_3;
  fVar7 = (float10)*param_3;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * fVar6 - fVar7 * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * fVar5);
  F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar5 = (float10)(*(float *)(gen_frame + 0x8));
  fVar6 = (float10)(*(float *)(gen_frame + 0x14));
  fVar7 = (float10)(*(float *)(gen_frame + 0x18));
  fVar8 = (float10)(*(float *)(gen_frame + 0x4));
  fVar1 = (float)(fVar6 * fVar5 - fVar8 * fVar7);
  fVar9 = (float10)(*(float *)(gen_frame + 0x10));
  fVar2 = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x0)) - fVar9 * fVar5);
  fVar3 = (float)(fVar8 * fVar9 - fVar6 * (float10)(*(float *)(gen_frame + 0x0)));
  *(float *)this = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x14) = fVar2;
  *(float *)((int)this + 4) = fVar1;
  *(float *)((int)this + 0x24) = fVar3;
  *(float *)((int)this + 8) = (*(float *)(gen_frame + 0x10));
  *(float *)((int)this + 0x10) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x18) = (*(float *)(gen_frame + 0x14));
  *(float *)((int)this + 0x20) = (*(float *)(gen_frame + 0x8));
  *(float *)((int)this + 0x28) = (*(float *)(gen_frame + 0x18));
  fVar4 = ((float)GEN_TOF((((float10)*param_1 * (float10)(*(float *)(gen_frame + 0x0)) + (float10)param_1[1] * fVar8) +
                 (float10)param_1[2] * fVar5)));
  (*(float *)(gen_frame + 0x28)) = fVar4;
  *(float *)((int)this + 0x30) = ((float)GEN_TOF(-(float10)fVar4));
  fVar1 = ((float)GEN_TOF(((float10)param_1[2] * (float10)fVar3 +
                 ((float10)*param_1 * (float10)fVar1 + (float10)param_1[1] * (float10)fVar2))));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  *(float *)((int)this + 0x34) = ((float)GEN_TOF(-(float10)fVar1));
  fVar1 = ((float)GEN_TOF((fVar7 * (float10)param_1[2] +
                 (fVar6 * (float10)param_1[1] + (float10)*param_1 * fVar9))));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  *(float *)((int)this + 0x38) = ((float)GEN_TOF(-(float10)fVar1));
  return (uint)this;
}

/* ref: FUN_004f45d0 */
GEN_FRAME uint F_004f45d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f45d0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_004ef780(param_1,param_2);
  return param_1;
}

/* ref: FUN_004f4970 */
GEN_FRAME uint F_004f4970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f4970u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_004f19e0(param_1,param_2);
  return param_1;
}

/* ref: FUN_004f4990 */
GEN_NOFRAME uint GEN_THISCALL F_004f4990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f4990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  float fVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  
  uVar3 = 0;
  local_30 = REFG(float, 0x1090998);
  local_2c = REFG(float, 0x1090998);
  local_28 = REFG(float, 0x1090998);
  local_40 = REFG(float, 0x1097b10);
  local_3c = REFG(float, 0x1097b10);
  local_38 = REFG(float, 0x1097b10);
  pfVar2 = param_1;
  fVar5 = REFG(float, 0x1090998);
  fVar6 = REFG(float, 0x1097b10);
  fVar7 = REFG(float, 0x1097b10);
  fVar8 = REFG(float, 0x1090998);
  fVar9 = REFG(float, 0x1097b10);
  fVar10 = REFG(float, 0x1090998);
  if (3 < (int)param_2) {
    iVar4 = (param_2 - 4 >> 2) + 1;
    uVar3 = iVar4 * 4;
    do {
      fVar1 = *pfVar2;
      if ((float10)fVar1 < (float10)local_30) {
        fVar10 = fVar1;
        local_30 = fVar1;
      }
      if ((float10)local_40 < (float10)fVar1) {
        fVar9 = fVar1;
        local_40 = fVar1;
      }
      fVar1 = pfVar2[1];
      if ((float10)fVar1 < (float10)local_2c) {
        fVar8 = fVar1;
        local_2c = fVar1;
      }
      if ((float10)local_3c < (float10)fVar1) {
        fVar7 = fVar1;
        local_3c = fVar1;
      }
      fVar1 = pfVar2[2];
      if ((float10)fVar1 < (float10)local_28) {
        fVar5 = fVar1;
        local_28 = fVar1;
      }
      if ((float10)local_38 < (float10)fVar1) {
        fVar6 = fVar1;
        local_38 = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3);
      if ((float10)fVar1 < (float10)local_30) {
        fVar10 = fVar1;
        local_30 = fVar1;
      }
      if ((float10)local_40 < (float10)fVar1) {
        fVar9 = fVar1;
        local_40 = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3 + 4);
      if ((float10)fVar1 < (float10)local_2c) {
        fVar8 = fVar1;
        local_2c = fVar1;
      }
      if ((float10)local_3c < (float10)fVar1) {
        fVar7 = fVar1;
        local_3c = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3 + 8);
      if ((float10)fVar1 < (float10)local_28) {
        fVar5 = fVar1;
        local_28 = fVar1;
      }
      if ((float10)local_38 < (float10)fVar1) {
        fVar6 = fVar1;
        local_38 = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3 * 2);
      if ((float10)fVar1 < (float10)local_30) {
        fVar10 = fVar1;
        local_30 = fVar1;
      }
      if ((float10)local_40 < (float10)fVar1) {
        fVar9 = fVar1;
        local_40 = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3 * 2 + 4);
      if ((float10)fVar1 < (float10)local_2c) {
        fVar8 = fVar1;
        local_2c = fVar1;
      }
      if ((float10)local_3c < (float10)fVar1) {
        fVar7 = fVar1;
        local_3c = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3 * 2 + 8);
      if ((float10)fVar1 < (float10)local_28) {
        fVar5 = fVar1;
        local_28 = fVar1;
      }
      if ((float10)local_38 < (float10)fVar1) {
        fVar6 = fVar1;
        local_38 = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3 * 3);
      if ((float10)fVar1 < (float10)local_30) {
        fVar10 = fVar1;
        local_30 = fVar1;
      }
      if ((float10)local_40 < (float10)fVar1) {
        fVar9 = fVar1;
        local_40 = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3 * 3 + 4);
      if ((float10)fVar1 < (float10)local_2c) {
        fVar8 = fVar1;
        local_2c = fVar1;
      }
      if ((float10)local_3c < (float10)fVar1) {
        fVar7 = fVar1;
        local_3c = fVar1;
      }
      fVar1 = *(float *)((int)pfVar2 + param_3 * 3 + 8);
      if ((float10)fVar1 < (float10)local_28) {
        fVar5 = fVar1;
        local_28 = fVar1;
      }
      if ((float10)local_38 < (float10)fVar1) {
        fVar6 = fVar1;
        local_38 = fVar1;
      }
      pfVar2 = pfVar2 + param_3;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if (uVar3 < param_2) {
    pfVar2 = pfVar2 + 2;
    iVar4 = param_2 - uVar3;
    do {
      fVar1 = pfVar2[-2];
      if ((float10)fVar1 < (float10)local_30) {
        fVar10 = fVar1;
        local_30 = fVar1;
      }
      if ((float10)local_40 < (float10)fVar1) {
        fVar9 = fVar1;
        local_40 = fVar1;
      }
      fVar1 = pfVar2[-1];
      if ((float10)fVar1 < (float10)local_2c) {
        fVar8 = fVar1;
        local_2c = fVar1;
      }
      if ((float10)local_3c < (float10)fVar1) {
        fVar7 = fVar1;
        local_3c = fVar1;
      }
      fVar1 = *pfVar2;
      if ((float10)fVar1 < (float10)local_28) {
        fVar5 = fVar1;
        local_28 = fVar1;
      }
      if ((float10)local_38 < (float10)fVar1) {
        fVar6 = fVar1;
        local_38 = fVar1;
      }
      pfVar2 = (float *)((int)pfVar2 + param_3);
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(float *)this = fVar10;
  *(float *)((int)this + 4) = fVar8;
  *(float *)((int)this + 8) = fVar5;
  *(float *)((int)this + 0x10) = fVar9;
  *(float *)((int)this + 0x14) = fVar7;
  *(float *)((int)this + 0x18) = fVar6;
  return (uint)this;
}

/* ref: FUN_004f4d40 */
GEN_NOFRAME uint GEN_THISCALL F_004f4d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f4d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  fVar1 = *(float *)((int)this + 0x30);
  fVar2 = *param_2;
  uVar8 = 0;
  fVar3 = param_2[1];
  fVar4 = *(float *)((int)this + 0x34);
  fVar5 = param_2[2];
  fVar6 = *(float *)((int)this + 0x38);
  *param_1 = fVar1;
  param_1[1] = *(float *)((int)this + 0x34);
  param_1[2] = *(float *)((int)this + 0x38);
  do {
    fVar9 = (float10)*(float *)((int)this + uVar8 * 0x10 + 4);
    fVar10 = (float10)*(float *)((int)this + uVar8 * 0x10);
    fVar11 = (float10)*(float *)((int)this + uVar8 * 0x10 + 8);
    fVar7 = *(float *)((int)this + uVar8 * 4 + 0x40);
    fVar12 = (float10)fVar7;
    fVar13 = (float10)((float)GEN_TOF((fVar11 * (float10)(float)((float10)fVar5 - (float10)fVar6) +
                             (fVar10 * (float10)(float)((float10)fVar2 - (float10)fVar1) +
                             fVar9 * (float10)(float)((float10)fVar3 - (float10)fVar4)))));
    if (fVar12 < fVar13) {
      fVar13 = (float10)fVar7;
    }
    fVar7 = ((float)GEN_TOF(-fVar12));
    if (fVar13 < (float10)fVar7) {
      fVar13 = (float10)fVar7;
    }
    uVar8 = uVar8 + 1;
    *param_1 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)(fVar13 * fVar10))));
    param_1[1] = ((float)GEN_TOF(((float10)param_1[1] + (float10)(float)(fVar13 * fVar9))));
    param_1[2] = ((float)GEN_TOF(((float10)param_1[2] + (float10)(float)(fVar11 * fVar13))));
  } while (uVar8 < 3);
  return (uint)param_1;
}

/* ref: FUN_004f4e90 */
GEN_NOFRAME float10 GEN_THISCALL F_004f4e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f4e90u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_14;
  
  local_14 = 0.0;
  fVar1 = (float10)(float)((float10)*param_2 - (float10)in_ecx[0xc]);
  fVar2 = (float10)(float)((float10)param_2[1] - (float10)in_ecx[0xd]);
  fVar3 = (float10)(float)((float10)param_2[2] - (float10)in_ecx[0xe]);
  fVar4 = (float10)in_ecx[0x10];
  fVar5 = (float10)((float)GEN_TOF(((fVar1 * (float10)*in_ecx + fVar2 * (float10)in_ecx[1]) +
                          fVar3 * (float10)in_ecx[2])));
  if (fVar4 < fVar5) {
    local_14 = (float)(fVar5 - fVar4);
  }
  if (fVar5 < -fVar4) {
    local_14 = (float)(fVar5 + fVar4);
  }
  fVar4 = (float10)local_14;
  local_14 = 0.0;
  fVar5 = (float10)in_ecx[0x11];
  fVar6 = (float10)((float)GEN_TOF(((float10)in_ecx[6] * fVar3 +
                          ((float10)in_ecx[5] * fVar2 + (float10)in_ecx[4] * fVar1))));
  if (fVar5 < fVar6) {
    local_14 = (float)(fVar6 - fVar5);
  }
  if (fVar6 < -fVar5) {
    local_14 = (float)(fVar6 + fVar5);
  }
  fVar5 = (float10)local_14;
  local_14 = 0.0;
  fVar6 = (float10)in_ecx[0x12];
  fVar1 = (float10)((float)GEN_TOF((fVar3 * (float10)in_ecx[10] +
                          ((float10)in_ecx[8] * fVar1 + (float10)in_ecx[9] * fVar2))));
  if (fVar6 < fVar1) {
    local_14 = (float)(fVar1 - fVar6);
  }
  if (fVar1 < -fVar6) {
    local_14 = (float)(fVar1 + fVar6);
  }
  return (float10)((float)GEN_TOF(((float10)local_14 * (float10)local_14 +
                         (float10)((float)GEN_TOF((fVar5 * fVar5 +
                                         (float10)(float)(fVar4 * fVar4 +
                                                         (float10)*(double *)&REFG(undefined, 0x108bec8))))))));
}

/* ref: FUN_004f5010 */
GEN_FRAME unsigned int GEN_THISCALL F_004f5010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  float10 fVar5;
  
  pfVar3 = this;
  pfVar4 = ((float *)(gen_frame + 0x8));
  for (iVar2 = 9; fVar1 = ((float *)(gen_frame + 0x8))[2], iVar2 != 0; iVar2 = iVar2 - 1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  ((float *)(gen_frame + 0x8))[2] = (float)((float10)((float *)(gen_frame + 0x8))[1] * (float10)REFG(double, 0x1094890));
  ((float *)(gen_frame + 0x8))[1] = fVar1;
  F_004f72b0(((float *)(gen_frame + 0x8)) GEN_EDX_FWD,REFG(float, 0x1302c00));
  fVar5 = (float10)((float *)(gen_frame + 0x8))[2];
  ((float *)(gen_frame + 0x8))[2] = ((float *)(gen_frame + 0x8))[1];
  ((float *)(gen_frame + 0x8))[1] = (float)(fVar5 * (float10)REFG(double, 0x1094890));
  F_004f72b0(((float *)(gen_frame + 0x8)) GEN_EDX_ARG,*param_1);
  fVar5 = (float10)((float *)(gen_frame + 0x8))[1];
  ((float *)(gen_frame + 0x8))[1] = ((float *)(gen_frame + 0x8))[2];
  ((float *)(gen_frame + 0x8))[2] = (float)(fVar5 * (float10)REFG(double, 0x1094890));
  F_004f72b0(((float *)(gen_frame + 0x8)) GEN_EDX_ARG,GEN_TOF(gen_bits2f((uint)gen_fl2bits(REFG(float, 0x1302c00)) ^ REFG(uint, 0x10920d0))));
  ((float *)(gen_frame + 0x8))[2] = (float)((float10)((float *)(gen_frame + 0x8))[2] * (float10)REFG(double, 0x1094890));
  ((float *)(gen_frame + 0x8))[1] = (float)((float10)REFG(double, 0x1094890) * (float10)((float *)(gen_frame + 0x8))[1]);
  F_004f72b0(((float *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1[1]);
  fVar5 = (float10)((float *)(gen_frame + 0x8))[1];
  ((float *)(gen_frame + 0x8))[1] = ((float *)(gen_frame + 0x8))[2];
  ((float *)(gen_frame + 0x8))[2] = (float)(fVar5 * (float10)REFG(double, 0x1094890));
  F_004f72b0(((float *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1[2]);
  pfVar3 = ((float *)(gen_frame + 0x8));
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 - 1) {
    *(float *)this = *pfVar3;
    pfVar3 = pfVar3 + 1;
    this = (float *)((int)this + 4);
  }
  return;
}

/* ref: Client::Graphics::AllocatorPool::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_004f5180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f5180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * pAVar3;
  int iVar4;
  
  iVar4 = 0x10;
  pAVar3 = this;
  do {
    pAVar3 = pAVar3 + 8;
    piVar2 = *(int * PTR32 *)pAVar3;
    if ((int *)piVar2[1] != piVar2) {
      piVar1 = (int *)*piVar2;
      do {
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != piVar1);
    }
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  piVar1 = *(int * PTR32 *)(this + 0x84);
  if (piVar1 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0x88))));
    *(undefined4 *)(this + 0x84) = 0;
  }
  return (uint)piVar2;
}

/* ref: Client::Graphics::AllocatorPool::vf3 */
GEN_FRAME uint GEN_THISCALL F_004f51d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f51d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1);
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0xac);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG,param_2,param_3);
  if (uVar1 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (param_1 != 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,param_1);
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    F_00c46aa0(uVar1,param_1,uVar2);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,param_1);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorPool::vf9 */
GEN_FRAME uint GEN_THISCALL F_004f5280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((((*(uint *)&gen_a1) & 0xfffffc00) + 0x1c)));
  if (((uVar2 < *(uint *)(this + 0x98)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 8 + uVar2 * 0x18))), iVar1 != 0)) &&
     ((*(uint *)&gen_a1) - iVar1 < 0x4000)) {
    return *((uint *)GEN_TOP((((*(uint *)&gen_a1) & 0xfffffc00) + 8)));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x24))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_FWD,(*(uint *)&gen_a1));
  return uVar2;
}

/* ref: FUN_004f52e0 */
GEN_FRAME uint GEN_THISCALL F_004f52e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f52e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1 + 5;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    *(int *)(*param_1 + 4) = param_1[1];
    *(int *)param_1[1] = *param_1;
    *param_1 = (int)param_1;
    param_1[1] = (int)param_1;
  }
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    uVar2 = param_1[4];
    *(undefined4 *)(uVar2 + 8) = 0;
    *(int *)(uVar2 + 0x1c) = ((int)param_1 - *(int *)((int)this + 0x88)) / 0x18;
    param_1[4] = param_1[4] + 0x400;
    return uVar2;
  }
  param_1[3] = *(int *)(uVar2 + 4);
  return uVar2;
}

/* ref: FUN_004f5350 */
GEN_FRAME uint GEN_THISCALL F_004f5350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x88) + *(int *)(param_1 + 0x1c) * 0x18)));
  *(uint *)(param_1 + 4) = puVar1[3];
  puVar1[3] = param_1;
  uVar2 = param_1;
  if (puVar1[5] == 0) {
    uVar2 = **(uint * PTR32 *)((int)this + 0x8c);
    puVar1[1] = (uint)*(uint * PTR32 *)((int)this + 0x8c);
    *puVar1 = uVar2;
    *(uint * PTR32 *)(uVar2 + 4) = puVar1;
    *(uint * PTR32 *)puVar1[1] = puVar1;
  }
  puVar1[5] = puVar1[5] + 1;
  if (puVar1[5] == 0x10) {
    *(uint *)(*puVar1 + 4) = puVar1[1];
    *(uint *)puVar1[1] = *puVar1;
    *puVar1 = (uint)puVar1;
    puVar1[1] = (uint)puVar1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x84) + 0x10))))
                      (*(int * PTR32 *)((int)this + 0x84) GEN_EDX_ARG,puVar1[2]);
    puVar1[2] = 0;
    *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) - 0x4000;
    puVar1[1] = *(uint *)((int)this + 0x94);
    *(uint * PTR32 *)((int)this + 0x94) = puVar1;
  }
  return uVar2;
}

/* ref: FUN_004f53f0 */
GEN_FRAME uint GEN_THISCALL F_004f53f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f53f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x8c);
  if ((int *)piVar4[1] == piVar4) {
    if (*(int *)((int)this + 0x94) == 0) {
      uVar3 = *(uint *)((int)this + 0x98);
      if (uVar3 == 0) {
        local_8 = 0x10;
      }
      else {
        local_8 = uVar3 * 2;
      }
      iVar1 = local_8 * 0x18;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x84) + 0xc))))
                        (*(int * PTR32 *)((int)this + 0x84) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x88),iVar1,0x10);
      if (uVar2 == 0) {
        return 0;
      }
      if (uVar3 < local_8 - 1U) {
        iVar5 = uVar2 + (uVar3 * 3 + 3) * 8;
        iVar6 = (local_8 - 1U) - uVar3;
        do {
          *(undefined4 *)(iVar5 - 0xc) = 0;
          *(int *)(iVar5 - 0x14) = iVar5;
          iVar5 = iVar5 + 0x18;
          iVar6 = iVar6 - 1;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(iVar1 - 0xc + uVar2) = 0;
      *(undefined4 *)(iVar1 - 0x14 + uVar2) = 0;
      *(uint *)((int)this + 0x94) = uVar2 + uVar3 * 0x18;
      *(uint *)((int)this + 0x88) = uVar2;
      *(int *)((int)this + 0x98) = local_8;
    }
    piVar4 = *(int * PTR32 *)((int)this + 0x94);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x84) + 8))))
                      (*(int * PTR32 *)((int)this + 0x84) GEN_EDX_ARG,0x4000,0x400);
    if (uVar3 == 0) {
      return 0;
    }
    piVar4[2] = uVar3;
    piVar4[4] = uVar3;
    piVar4[3] = 0;
    piVar4[5] = 0x10;
    *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 0x4000;
    *(int *)((int)this + 0x94) = piVar4[1];
    iVar1 = *(int *)((int)this + 0x90);
    *piVar4 = iVar1;
    piVar4[1] = *(int *)(iVar1 + 4);
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  return (uint)piVar4;
}

/* ref: FUN_004f5520 */
GEN_NOFRAME uint GEN_THISCALL F_004f5520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f5520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pvVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097ae8));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xf0));
  iVar3 = 0x18;
  pvVar1 = this;
  do {
    pvVar2 = (undefined *)((int)pvVar1 + 8);
    *(undefined * PTR32 *)pvVar2 = pvVar2;
    *(undefined * PTR32 *)((int)pvVar1 + 0xc) = pvVar2;
    iVar3 = iVar3 - 1;
    pvVar1 = pvVar2;
  } while (iVar3 != 0);
  return (uint)this;
}

/* ref: Client::Graphics::AllocatorHeap::vf3 */
GEN_FRAME uint GEN_THISCALL F_004f5590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f5590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0xf0);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,param_1);
  }
  else {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG,param_2,param_3);
    if (uVar1 != 0) {
      if (param_1 != 0) {
        uVar2 = param_2;
        if (*(uint *)(param_1 - 0x10) <= param_2) {
          uVar2 = *(uint *)(param_1 - 0x10);
        }
        F_00c46aa0(uVar1,param_1,uVar2);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,param_1);
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_004f5620 */
GEN_FRAME byte GEN_THISCALL F_004f5620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5620u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  uVar1 = (*(int * PTR32 *)&gen_args[1])[5];
  if (0x7f < uVar1) {
    iVar4 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 - 1) {
      }
    }
    if (uVar1 == 0) {
      iVar4 = -1;
    }
    iVar4 = iVar4 - 7;
    ((int *)(gen_frame + 0x4))[1] = 0x17;
    ((int *)(gen_frame + 0x4))[0] = 0;
    (*(int * PTR32 *)&gen_args[1]) = (int *)iVar4;
    if (iVar4 < 0x17) {
      piVar5 = (int *)&(*(int * PTR32 *)&gen_args[1]);
      if (iVar4 < 1) {
        piVar5 = ((int *)(gen_frame + 0x4));
      }
    }
    else {
      piVar5 = ((int *)(gen_frame + 0x4)) + 1;
    }
    iVar2 = *piVar5;
    iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 8 + 8;
    *piVar3 = iVar4;
    piVar3[1] = *(int *)(iVar4 + 4);
    **(undefined4 * PTR32 *)(iVar4 + 4) = piVar3;
    *(int * PTR32 *)(iVar4 + 4) = piVar3;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) | 1 << ((byte)iVar2 & 0x1f);
    return 1;
  }
  *(*(int * PTR32 *)&gen_args[1]) = (int)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1])[1] = (int)(*(int * PTR32 *)&gen_args[1]);
  return 0;
}

/* ref: FUN_004f56b0 */
GEN_FRAME uint GEN_THISCALL F_004f56b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f56b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])))) {
    (((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))[1] = (*(int * PTR32 *)&gen_args[1])[1];
    *((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1])) = *(*(int * PTR32 *)&gen_args[1]);
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(int * PTR32 *)&gen_args[1]);
    (*(int * PTR32 *)&gen_args[1])[1] = (int)(*(int * PTR32 *)&gen_args[1]);
    uVar1 = (*(int * PTR32 *)&gen_args[1])[5];
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 - 1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = -1;
    }
    iVar2 = iVar2 - 7;
    ((int *)(gen_frame + 0x4))[1] = 0x17;
    ((int *)(gen_frame + 0x4))[0] = 0;
    (*(int * PTR32 *)&gen_args[1]) = (int *)iVar2;
    if (iVar2 < 0x17) {
      piVar3 = (int *)&(*(int * PTR32 *)&gen_args[1]);
      if (iVar2 < 1) {
        piVar3 = ((int *)(gen_frame + 0x4));
      }
    }
    else {
      piVar3 = ((int *)(gen_frame + 0x4)) + 1;
    }
    piVar4 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + *piVar3 * 8 + 8)));
    if ((int *)piVar4[1] == piVar4) {
      piVar4 = ((int *)GEN_TOP(~(1 << ((byte)*piVar3 & 0x1f))));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) & (uint)piVar4;
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_004f5730 */
GEN_FRAME uint GEN_THISCALL F_004f5730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((int)0x80000000) >> (0x1eU - (char)*param_1 & 0x1f) & *(uint *)((int)this + 200);
  iVar2 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
    }
  }
  if (uVar1 == 0) {
    iVar2 = 0x20;
  }
  *param_1 = iVar2;
  if (iVar2 == 0x20) {
    return 0;
  }
  return (int)this + iVar2 * 8 + 8;
}

/* ref: FUN_004f5780 */
GEN_FRAME byte GEN_THISCALL F_004f5780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) * 0x10 + *(int *)((int)this + 0xcc))));
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) - puVar1[2];
  puVar1[2] = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,*puVar1);
  *puVar1 = 0;
  puVar1[1] = *(undefined4 *)((int)this + 0xd0);
  *(undefined4 * PTR32 *)((int)this + 0xd0) = puVar1;
  return 1;
}

/* ref: FUN_004f57d0 */
GEN_FRAME byte GEN_THISCALL F_004f57d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f57d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xd8) == 0) {
    uVar2 = *(uint *)((int)this + 0xe8);
  }
  else {
    uVar2 = *(uint *)((int)this + 0xec);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,uVar2,0x10);
  if (uVar1 == 0) {
    return 0;
  }
  *(uint *)(uVar1 + 0x10) = uVar2 - 0x20;
  *(uint *)(uVar1 + 0x14) = uVar2 - 0x20;
  *(uint *)uVar1 = uVar1;
  *(uint *)(uVar1 + 4) = uVar1;
  *(uint *)(uVar1 + 8) = uVar1;
  *(uint *)(uVar1 + 0xc) = uVar1;
  *(int *)(uVar1 + 0x18) = (int)param_1 - *(int *)((int)this + 0xcc) >> 4;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  F_004f5620(this GEN_EDX_ARG,uVar1);
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + param_1[2];
  return 1;
}

/* ref: FUN_004f5850 */
GEN_NOFRAME uint GEN_THISCALL F_004f5850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f5850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x1097b18));
  F_004f5520((undefined *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[10])REFP(0x1097abc));
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1b8));
  *(undefined4 *)((int)this + 0x1d0) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::AllocatorHybrid::vf2 */
GEN_FRAME uint GEN_THISCALL F_004f58c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f58c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  _InterlockedExchangeAdd((volatile long *)(((int *)(this + 0x1d0))), (long)(1));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 8))))
                    (this + 0x10c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::AllocatorHybrid::vf3 */
GEN_FRAME uint GEN_THISCALL F_004f58f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f58f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_2 != 0) {
    _InterlockedExchangeAdd((volatile long *)(((int *)(this + 0x1d0))), (long)(1));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10c) + 0xc))))(this + 0x10c GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_004f59b0 */
GEN_FRAME uint F_004f59b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4f59b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x1c)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG,param_1);
  }
  return uVar2;
}

/* ref: FUN_004f59d0 */
GEN_FRAME byte GEN_THISCALL F_004f59d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f59d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  uVar1 = (*(int * PTR32 *)&gen_args[1])[5];
  if (0x7f < uVar1) {
    iVar4 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 - 1) {
      }
    }
    if (uVar1 == 0) {
      iVar4 = -1;
    }
    iVar4 = iVar4 - 7;
    ((int *)(gen_frame + 0x4))[1] = 0x17;
    ((int *)(gen_frame + 0x4))[0] = 0;
    (*(int * PTR32 *)&gen_args[1]) = (int *)iVar4;
    if (iVar4 < 0x17) {
      piVar5 = (int *)&(*(int * PTR32 *)&gen_args[1]);
      if (iVar4 < 1) {
        piVar5 = ((int *)(gen_frame + 0x4));
      }
    }
    else {
      piVar5 = ((int *)(gen_frame + 0x4)) + 1;
    }
    iVar2 = *piVar5;
    iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 8 + 8;
    *piVar3 = iVar4;
    piVar3[1] = *(int *)(iVar4 + 4);
    **(undefined4 * PTR32 *)(iVar4 + 4) = piVar3;
    *(int * PTR32 *)(iVar4 + 4) = piVar3;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) | 1 << ((byte)iVar2 & 0x1f);
    return 1;
  }
  *(*(int * PTR32 *)&gen_args[1]) = (int)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1])[1] = (int)(*(int * PTR32 *)&gen_args[1]);
  return 0;
}

/* ref: FUN_004f5a60 */
GEN_FRAME uint GEN_THISCALL F_004f5a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5a60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])))) {
    (((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))[1] = (*(int * PTR32 *)&gen_args[1])[1];
    *((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1])) = *(*(int * PTR32 *)&gen_args[1]);
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(int * PTR32 *)&gen_args[1]);
    (*(int * PTR32 *)&gen_args[1])[1] = (int)(*(int * PTR32 *)&gen_args[1]);
    uVar1 = (*(int * PTR32 *)&gen_args[1])[5];
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 - 1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = -1;
    }
    iVar2 = iVar2 - 7;
    ((int *)(gen_frame + 0x4))[1] = 0x17;
    ((int *)(gen_frame + 0x4))[0] = 0;
    (*(int * PTR32 *)&gen_args[1]) = (int *)iVar2;
    if (iVar2 < 0x17) {
      piVar3 = (int *)&(*(int * PTR32 *)&gen_args[1]);
      if (iVar2 < 1) {
        piVar3 = ((int *)(gen_frame + 0x4));
      }
    }
    else {
      piVar3 = ((int *)(gen_frame + 0x4)) + 1;
    }
    piVar4 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + *piVar3 * 8 + 8)));
    if ((int *)piVar4[1] == piVar4) {
      piVar4 = ((int *)GEN_TOP(~(1 << ((byte)*piVar3 & 0x1f))));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) & (uint)piVar4;
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_004f5ae0 */
GEN_FRAME uint GEN_THISCALL F_004f5ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((int)0x80000000) >> (0x1eU - (char)*param_1 & 0x1f) & *(uint *)((int)this + 200);
  iVar2 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
    }
  }
  if (uVar1 == 0) {
    iVar2 = 0x20;
  }
  *param_1 = iVar2;
  if (iVar2 == 0x20) {
    return 0;
  }
  return (int)this + iVar2 * 8 + 8;
}

/* ref: FUN_004f5b30 */
GEN_NOFRAME uint GEN_THISCALL F_004f5b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f5b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1097bac));
  puVar1 = (undefined4 *)((int)this + 0x34);
  iVar2 = 0xb;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[10])REFP(0x1097b4c));
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
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
  return (uint)this;
}

/* ref: FUN_004f5b80 */
GEN_FRAME byte GEN_THISCALL F_004f5b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f5b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar3 = F_00406500();
  ((uint *)(gen_frame + 0x4))[0] = uVar3;
  uVar3 = F_00406500();
  ((uint *)(gen_frame + 0x4))[1] = uVar3;
  uVar3 = F_00406500();
  ((uint *)(gen_frame + 0x4))[2] = uVar3;
  uVar3 = F_00406500();
  ((uint *)(gen_frame + 0x4))[3] = uVar3;
  uVar3 = F_00406500();
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  uVar3 = F_00404250();
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  uVar3 = F_00406500();
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  uVar3 = F_00406500();
  (*(uint *)(gen_frame + 0x20)) = uVar3;
  uVar3 = F_00406500();
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)((int)this + 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)((int)this + 0x3c);
  (*(int *)(gen_frame + 0x34)) = 0;
  uVar3 = 0;
  do {
    uVar1 = *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1302bd0) + (*(int *)(gen_frame + 0x34)))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x38))[-1] = *(undefined4 *)((int)((uint *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x34)));
    *(*(undefined4 * PTR32 *)(gen_frame + 0x38)) = uVar1;
    puVar4 = (undefined4 *)F_00406b90(0x1d4,0,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = (*(undefined * PTR32 (*)[12])REFP(0x1097b18));
      F_004f5520(puVar4 + 1 GEN_EDX_ARG);
      puVar4[0x43] = (*(undefined * PTR32 (*)[10])REFP(0x1097abc));
      puVar4[100] = 0;
      puVar4[0x65] = 0;
      puVar4[0x68] = 0;
      puVar4[0x69] = 0;
      puVar4[0x6a] = 0;
      puVar4[0x6b] = 0;
      puVar4[0x6c] = 0;
      puVar4[0x6d] = 0;
      gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar4 + 0x6e));
      puVar4[0x74] = 0;
    }
    uVar1 = *(undefined4 *)((int)&REFG(undefined4, 0x1302b8c) + uVar3);
    uVar2 = *(undefined4 *)((int)&REFG(undefined4, 0x1302b88) + uVar3);
    (*(undefined4 *)(gen_frame + 0x28)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar2;
    puVar4[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x38)) - 2;
    puVar5 = puVar4 + 3;
    iVar6 = 0x18;
    do {
      *puVar5 = puVar5;
      puVar5[1] = puVar5;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    puVar4[0x3b] = uVar2;
    puVar4[0x33] = 0;
    puVar4[0x34] = 0;
    puVar4[0x35] = 0;
    puVar4[0x36] = 0;
    puVar4[0x37] = 0;
    puVar4[0x38] = 0;
    puVar4[0x3c] = uVar1;
    puVar4[100] = puVar4 + 1;
    puVar5 = puVar4 + 0x44;
    iVar6 = 0x10;
    do {
      *puVar5 = puVar5;
      puVar5[1] = puVar5;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
    (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 3;
    (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 4;
    puVar5 = puVar4 + 0x66;
    *puVar5 = puVar5;
    puVar4[0x67] = puVar5;
    *(*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar4;
    uVar3 = uVar3 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)(gen_frame + 0x30)) + 1;
  } while (uVar3 < 0x48);
  return 1;
}

/* ref: FUN_004f5e90 */
GEN_NOFRAME uint GEN_THISCALL F_004f5e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f5e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  float * pfVar6;
  
  pfVar5 = this;
  if (!((float10)*param_2 < (float10)*(float *)this)) {
    pfVar5 = param_2;
  }
  fVar2 = param_2[1];
  fVar1 = *pfVar5;
  fVar3 = *(float *)((int)this + 4);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  pfVar5 = param_2;
  if ((float10)fVar2 < (float10)fVar3) {
    pfVar5 = this;
  }
  fVar2 = pfVar5[1];
  fVar3 = param_2[2];
  fVar4 = *(float *)((int)this + 8);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  pfVar5 = param_2;
  if ((float10)fVar3 < (float10)fVar4) {
    pfVar5 = this;
  }
  fVar4 = *(float *)((int)this + 0x10);
  fVar3 = pfVar5[2];
  ((float *)(gen_frame + 0x8))[0] = fVar3;
  pfVar5 = (float *)((int)this + 0x10);
  if (!((float10)fVar4 < (float10)fVar1)) {
    pfVar5 = &(*(float *)(gen_frame + 0x0));
  }
  *param_1 = *pfVar5;
  pfVar5 = (float *)((int)this + 0x14);
  if (!((float10)*pfVar5 < (float10)fVar2)) {
    pfVar5 = &(*(float *)(gen_frame + 0x4));
  }
  pfVar6 = (float *)((int)this + 0x18);
  param_1[1] = *pfVar5;
  if (!((float10)*pfVar6 < (float10)fVar3)) {
    pfVar6 = ((float *)(gen_frame + 0x8));
  }
  param_1[2] = *pfVar6;
  return (uint)param_1;
}

/* ref: Client::Graphics::AllocatorPool::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_004f5f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f5f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 0xac);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    piVar2 = (int *)((uint)param_1 & 0xfffffc00);
    if (((*(uint *)(this + 0x98) <= (uint)piVar2[7]) ||
        (iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 8 + piVar2[7] * 0x18))), iVar1 == 0)) ||
       (0x3fff < (uint)((int)param_1 - iVar1))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x10))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_ARG,param_1);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return;
    }
    *param_1 = piVar2[5];
    piVar2[5] = (int)param_1;
    if (piVar2[3] == 0) {
      iVar1 = *((int *)GEN_TOP((this + (piVar2[2] - 1U & 0xfffffff8) + 8)));
      *piVar2 = iVar1;
      piVar2[1] = *(int *)(iVar1 + 4);
      *(int * PTR32 *)(iVar1 + 4) = piVar2;
      *(int * PTR32 *)piVar2[1] = piVar2;
    }
    piVar2[3] = piVar2[3] + 1;
    *(int *)(this + 0xa0) = *(int *)(this + 0xa0) - piVar2[2];
    if (piVar2[3] == piVar2[4]) {
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)piVar2[1] = *piVar2;
      *piVar2 = (int)piVar2;
      piVar2[1] = (int)piVar2;
      F_004f5350(this GEN_EDX_ARG,piVar2);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

/* ref: FUN_004f6030 */
GEN_FRAME uint GEN_THISCALL F_004f6030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = F_004f53f0(this GEN_EDX_FWD);
  if (uVar2 == 0) {
    return 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 8 + 4);
  piVar3 = (int *)F_004f52e0(this GEN_EDX_ARG,uVar2);
  uVar2 = param_1 * 8 + 8;
  if (piVar3[2] != uVar2) {
    iVar4 = (int)(0x3e0 / (ulonglong)uVar2);
    piVar3[2] = uVar2;
    piVar3[5] = 0;
    piVar3[4] = iVar4;
    piVar3[3] = iVar4;
    piVar3[6] = (int)piVar3 + (0x400 - iVar4 * uVar2);
  }
  *piVar3 = (int)puVar1;
  piVar3[1] = (int)puVar1;
  *puVar1 = piVar3;
  puVar1[1] = piVar3;
  return (uint)piVar3;
}

/* ref: Client::Graphics::AllocatorHeap::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_004f60a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f60a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  byte bVar3;
  
  if (param_1 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 0xf0);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    uVar1 = *(uint *)(param_1 - 8);
    if (((*(uint *)(this + 0xd4) <= uVar1) ||
        (iVar2 = *(int *)(this + 0xcc), *(int *)(iVar2 + uVar1 * 0x10) == 0)) ||
       (*(uint *)(iVar2 + 8 + uVar1 * 0x10) <= (uint)(param_1 - *(int *)(iVar2 + uVar1 * 0x10)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x10))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,param_1);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return;
    }
    iVar2 = *(int *)(param_1 - 0x18);
    F_004f56b0(this GEN_EDX_ARG,param_1 - 0x20);
    F_004f56b0(this GEN_EDX_ARG,iVar2);
    *(int *)(this + 0xdc) =
         *(int *)(this + 0xdc) + (*(int *)(param_1 - 0xc) - *(int *)(param_1 - 0x10));
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + *(int *)(param_1 - 0x10) + 0x20;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(int *)(param_1 - 0x10) + 0x20;
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 - 0x14);
    *((int *)GEN_TOP((*(int *)(param_1 - 0x14) + 8))) = iVar2;
    bVar3 = F_004f5620(this GEN_EDX_ARG,iVar2);
    if (((bVar3 != 0) && (*(int *)(iVar2 + 0x10) == *(int *)(iVar2 + 0x14))) &&
       (*(int *)(iVar2 + 8) == iVar2)) {
      F_004f56b0(this GEN_EDX_ARG,iVar2);
      F_004f5780(this GEN_EDX_ARG,iVar2);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

/* ref: FUN_004f6190 */
GEN_FRAME byte GEN_THISCALL F_004f6190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f6190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  uint local_8;
  
  if (*(int *)((int)this + 0xd0) == 0) {
    uVar1 = *(uint *)((int)this + 0xd4);
    if (uVar1 == 0) {
      local_8 = 0x10;
    }
    else {
      local_8 = uVar1 * 2;
    }
    iVar3 = local_8 * 0x10;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,iVar3,0x10);
    if (uVar4 == 0) {
      return 0;
    }
    if (*(int *)((int)this + 0xcc) != 0) {
      uVar5 = local_8;
      if (uVar1 <= local_8) {
        uVar5 = uVar1;
      }
      F_00c46aa0(uVar4,*(int *)((int)this + 0xcc),uVar5 << 4);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc));
    }
    if (uVar1 < local_8 - 1) {
      piVar6 = (int *)(uVar4 + 4 + uVar1 * 0x10);
      iVar7 = (local_8 - 1) - uVar1;
      do {
        *piVar6 = (int)(piVar6 + 3);
        piVar6[1] = 0;
        piVar6 = piVar6 + 4;
        iVar7 = iVar7 - 1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(iVar3 - 0xc + uVar4) = 0;
    *(undefined4 *)(iVar3 - 8 + uVar4) = 0;
    *(uint *)((int)this + 0xd0) = uVar1 * 0x10 + uVar4;
    *(uint *)((int)this + 0xcc) = uVar4;
    *(uint *)((int)this + 0xd4) = local_8;
  }
  iVar3 = *(int *)((int)this + 0xd0);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(iVar3 + 4);
  bVar2 = F_004f57d0(this GEN_EDX_ARG,iVar3);
  if (bVar2 == 0) {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)((int)this + 0xd0);
    *(int *)((int)this + 0xd0) = iVar3;
    return 0;
  }
  return 1;
}

/* ref: FUN_004f62a0 */
GEN_FRAME byte GEN_THISCALL F_004f62a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f62a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  int iVar6;
  int * piVar7;
  
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int *)&gen_args[1]);
  iVar6 = 0x18;
  pvVar2 = (*(undefined * PTR32 *)&gen_args[0]);
  do {
    pvVar4 = (undefined *)((int)pvVar2 + 8);
    *(undefined * PTR32 *)pvVar4 = pvVar4;
    *(undefined * PTR32 *)((int)pvVar2 + 0xc) = pvVar4;
    iVar6 = iVar6 - 1;
    pvVar2 = pvVar4;
  } while (iVar6 != 0);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = 0;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,0x20,8)));
  uVar3 = (*(uint *)&gen_args[3]);
  piVar5[2] = (int)piVar5;
  piVar5[3] = (int)piVar5;
  piVar5[4] = (*(uint *)&gen_args[3]);
  piVar5[5] = (*(uint *)&gen_args[3]);
  piVar5[6] = (*(int *)&gen_args[2]);
  piVar5[7] = (int)(*(undefined * PTR32 *)&gen_args[0]);
  if ((*(uint *)&gen_args[3]) < 0x80) {
    *piVar5 = (int)piVar5;
    piVar5[1] = (int)piVar5;
  }
  else {
    iVar6 = 0x1f;
    if ((*(uint *)&gen_args[3]) != 0) {
      for (; (*(uint *)&gen_args[3]) >> iVar6 == 0; iVar6 = iVar6 - 1) {
      }
    }
    if ((*(uint *)&gen_args[3]) == 0) {
      iVar6 = -1;
    }
    iVar6 = iVar6 - 7;
    (*(uint *)&gen_args[3]) = 0x17;
    (*(int *)&gen_args[2]) = 0;
    (*(int *)&gen_args[1]) = iVar6;
    if (iVar6 < 0x17) {
      piVar7 = &(*(int *)&gen_args[1]);
      if (iVar6 < 1) {
        piVar7 = &(*(int *)&gen_args[2]);
      }
    }
    else {
      piVar7 = (int *)&(*(uint *)&gen_args[3]);
    }
    iVar1 = *piVar7;
    iVar6 = (int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 8 + 8;
    *piVar5 = iVar6;
    piVar5[1] = *(int *)(iVar6 + 4);
    **(undefined4 * PTR32 *)(iVar6 + 4) = piVar5;
    *(int * PTR32 *)(iVar6 + 4) = piVar5;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) | 1 << ((byte)iVar1 & 0x1f);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = uVar3;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = piVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc))) = 0;
  return 1;
}

/* ref: Client::Graphics::AllocatorVRAM::vf10 */
GEN_FRAME uint GEN_THISCALL F_004f6380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f6380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  undefined * PTR32 * ppAVar3;
  uint uVar4;
  undefined * pAVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined * pAVar8;
  uint uVar9;
  
  uVar9 = param_1;
  if (param_1 < param_2) {
    uVar9 = param_2;
  }
  uVar9 = uVar9 + 7 & 0xfffffff8;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)(this + 0xe0);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xe0));
  iVar2 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 - 1) {
    }
  }
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  if (uVar9 == 0) {
    iVar2 = -1;
  }
  iVar2 = iVar2 - 7;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x17;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = iVar2;
  if (iVar2 < 0x17) {
    ppAVar3 = (undefined * PTR32 *)(((byte *)(gen_frame + 0x8)) + 4);
    if (iVar2 < 1) {
      ppAVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x18));
    }
  }
  else {
    ppAVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  pAVar8 = *ppAVar3;
  pAVar5 = this + (int)((int)(uintptr_t)pAVar8) * 8 + 8;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar8;
  if (*(undefined * PTR32 *)(pAVar5 + 4) == pAVar5) {
    ((byte *)(gen_frame + 0x8))[0] = 0;
    ((byte *)(gen_frame + 0x8))[1] = 0;
    ((byte *)(gen_frame + 0x8))[2] = 0;
    ((byte *)(gen_frame + 0x8))[3] = 0;
    uVar4 = ((int)0x80000000) >> (0x1eU - (char)pAVar8 & 0x1f) & *(uint *)(this + 200);
    pAVar5 = (undefined *)0x0;
    if (uVar4 != 0) {
      for (; (uVar4 >> (int)pAVar5 & 1) == 0; pAVar5 = pAVar5 + 1) {
      }
    }
    if (uVar4 == 0) {
      pAVar5 = (undefined *)0x20;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar5;
    if ((pAVar5 == (undefined *)0x20) ||
       (pAVar5 = this + (int)((int)(uintptr_t)pAVar5) * 8 + 8, pAVar5 == (undefined *)0x0)) {
LAB_004f658a: ;
      ((byte *)(gen_frame + 0x8))[0] = 0;
      ((byte *)(gen_frame + 0x8))[1] = 0;
      ((byte *)(gen_frame + 0x8))[2] = 0;
      ((byte *)(gen_frame + 0x8))[3] = 0;
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
      return 0;
    }
  }
  pAVar8 = *(undefined * PTR32 *)(pAVar5 + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pAVar5;
  iVar2 = *(int *)(pAVar8 + 0x18) + *(int *)(pAVar8 + 0x10);
  uVar4 = ~(param_2 - 1);
  ((byte *)(gen_frame + 0x8))[4] = (char)uVar4;
  ((byte *)(gen_frame + 0x8))[5] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x8))[6] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x8))[7] = (char)(uVar4 >> 0x18);
  if ((iVar2 - uVar9 & uVar4) < (uint)(iVar2 - *(int *)(pAVar8 + 0x14))) {
    do {
      pAVar8 = *(undefined * PTR32 *)(pAVar8 + 4);
      if (pAVar8 == (*(undefined * PTR32 *)(gen_frame + 0x10))) {
        ((byte *)(gen_frame + 0x8))[0] = 0;
        ((byte *)(gen_frame + 0x8))[1] = 0;
        ((byte *)(gen_frame + 0x8))[2] = 0;
        ((byte *)(gen_frame + 0x8))[3] = 0;
        uVar6 = ((int)0x80000000) >> (0x1eU - (char)(*(undefined * PTR32 *)(gen_frame + 0x18)) & 0x1f) & *(uint *)(this + 200);
        pAVar5 = (undefined *)0x0;
        if (uVar6 != 0) {
          for (; (uVar6 >> (int)pAVar5 & 1) == 0; pAVar5 = pAVar5 + 1) {
          }
        }
        if (uVar6 == 0) {
          pAVar5 = (undefined *)0x20;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar5;
        if ((pAVar5 == (undefined *)0x20) ||
           (pAVar5 = this + (int)((int)(uintptr_t)pAVar5) * 8 + 8, pAVar5 == (undefined *)0x0)) goto LAB_004f658a;
        pAVar8 = *(undefined * PTR32 *)(pAVar5 + 4);
        (*(undefined * PTR32 *)(gen_frame + 0x10)) = pAVar5;
      }
      iVar2 = *(int *)(pAVar8 + 0x18) + *(int *)(pAVar8 + 0x10);
    } while ((iVar2 - uVar9 & uVar4) < (uint)(iVar2 - *(int *)(pAVar8 + 0x14)));
  }
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  iVar2 = iVar2 - ((iVar2 - *(int *)(pAVar8 + 0x14)) - 1 + param_2 & uVar4);
  F_004f5a60(this GEN_EDX_ARG,pAVar8);
  *(int *)(pAVar8 + 0x10) = *(int *)(pAVar8 + 0x10) - iVar2;
  *(int *)(pAVar8 + 0x14) = *(int *)(pAVar8 + 0x14) - iVar2;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,0x20,8);
  *(undefined * PTR32 *)(uVar4 + 8) = pAVar8;
  *(undefined4 *)(uVar4 + 0xc) = *(undefined4 *)(pAVar8 + 0xc);
  *((uint *)GEN_TOP((*(int *)(pAVar8 + 0xc) + 8))) = uVar4;
  *(uint *)(pAVar8 + 0xc) = uVar4;
  *(int *)(uVar4 + 0x10) = iVar2;
  *(uint *)(uVar4 + 0x14) = iVar2 - uVar9;
  *(int *)(uVar4 + 0x18) = *(int *)(pAVar8 + 0x18) + *(int *)(pAVar8 + 0x10);
  *(undefined * PTR32 *)(uVar4 + 0x1c) = this;
  F_004f59d0(this GEN_EDX_ARG,pAVar8);
  F_004f59d0(this GEN_EDX_ARG,uVar4);
  *(uint *)(this + 0xd4) = *(int *)(this + 0xd4) + uVar9;
  pAVar5 = this + 0xd4;
  if (*(uint *)(this + 0xd4) < *(uint *)(this + 0xd8)) {
    pAVar5 = this + 0xd8;
  }
  uVar1 = *(undefined4 *)pAVar5;
  *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
  *(undefined4 *)(this + 0xd8) = uVar1;
  puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,8,8)));
  *puVar7 = *(undefined4 *)(uVar4 + 0x18);
  puVar7[1] = uVar4;
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
  return (uint)puVar7;
}

/* ref: Client::Graphics::AllocatorVRAM::vf11 */
GEN_FRAME unsigned int GEN_THISCALL F_004f65a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f65a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xe0));
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(iVar1 + 8);
    F_004f5a60(this GEN_EDX_ARG,iVar1);
    F_004f5a60(this GEN_EDX_ARG,iVar2);
    *(int *)(this + 0xd4) =
         *(int *)(this + 0xd4) + (*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10));
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + *(int *)(iVar1 + 0x10);
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(int *)(iVar1 + 0x10);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *((int *)GEN_TOP((*(int *)(iVar1 + 0xc) + 8))) = iVar2;
    F_004f59d0(this GEN_EDX_ARG,iVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x10))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,iVar1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x10))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xe0));
  }
  return;
}

/* ref: Client::Graphics::AllocatorPool::vf2 */
GEN_FRAME uint GEN_THISCALL F_004f6630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f6630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  undefined * pAVar4;
  uint uVar5;
  int * piVar6;
  
  uVar2 = param_1;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < param_2) {
    uVar2 = param_2;
  }
  uVar5 = uVar2 - 1 >> 3;
  if (0xf < uVar5) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 8))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_FWD,uVar2,param_2);
    return uVar2;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0xac);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *(int * PTR32 *)(this + uVar5 * 8 + 8);
  if ((int *)piVar3[1] == piVar3) {
    piVar3 = (int *)F_004f6030(this GEN_EDX_ARG,uVar5);
    if (piVar3 == (int *)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
  }
  piVar6 = piVar3 + 3;
  *piVar6 = *piVar6 - 1;
  if (*piVar6 == 0) {
    *(int *)(*piVar3 + 4) = piVar3[1];
    *(int *)piVar3[1] = *piVar3;
    *piVar3 = (int)piVar3;
    piVar3[1] = (int)piVar3;
  }
  piVar6 = (int *)piVar3[5];
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)piVar3[6];
    piVar3[6] = piVar3[2] + (int)piVar6;
  }
  else {
    piVar3[5] = *piVar6;
  }
  *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + piVar3[2];
  pAVar4 = this + 0xa0;
  if (*(uint *)(this + 0xa0) < *(uint *)(this + 0xa4)) {
    pAVar4 = this + 0xa4;
  }
  uVar1 = *(undefined4 *)pAVar4;
  *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
  *(undefined4 *)(this + 0xa4) = uVar1;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (uint)piVar6;
}

/* ref: FUN_004f6720 */
GEN_FRAME uint GEN_THISCALL F_004f6720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = F_004f6190(this GEN_EDX_FWD);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = (int)this + *param_1 * 8 + 8;
  if (*(uint *)(uVar2 + 4) == uVar2) {
    uVar2 = ((int)0x80000000) >> (0x1eU - (char)*param_1 & 0x1f) & *(uint *)((int)this + 200);
    iVar3 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    if (uVar2 == 0) {
      iVar3 = 0x20;
    }
    *param_1 = iVar3;
    if (iVar3 == 0x20) {
      return 0;
    }
    uVar2 = (int)this + iVar3 * 8 + 8;
  }
  return uVar2;
}

/* ref: Client::Graphics::AllocatorHeap::vf2 */
GEN_FRAME uint GEN_THISCALL F_004f6790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f6790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pAVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined * PTR32 * ppAVar5;
  uint uVar6;
  undefined * pAVar7;
  uint uVar8;
  int iVar9;
  undefined * pAVar10;
  
  uVar6 = param_1;
  if (param_1 < param_2) {
    uVar6 = param_2;
  }
  uVar8 = uVar6 + 7 & 0xfffffff8;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)(this + 0xf0);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xf0));
  uVar6 = uVar8 + 0x20;
  iVar4 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 - 1) {
    }
  }
  if (uVar6 == 0) {
    iVar4 = -1;
  }
  pAVar7 = (undefined *)(iVar4 - 7);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x17;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pAVar7;
  if ((int)pAVar7 < 0x17) {
    ppAVar5 = &(*(undefined * PTR32 *)(gen_frame + 0xc));
    if ((int)pAVar7 < 1) {
      ppAVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x18));
    }
  }
  else {
    ppAVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  pAVar1 = *ppAVar5;
  pAVar7 = this + (int)((int)(uintptr_t)pAVar1) * 8 + 8;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar1;
  if (*(undefined * PTR32 *)(pAVar7 + 4) == pAVar7) {
    uVar6 = ((int)0x80000000) >> (0x1eU - (char)pAVar1 & 0x1f) & *(uint *)(this + 200);
    pAVar7 = (undefined *)0x0;
    if (uVar6 != 0) {
      for (; (uVar6 >> (int)pAVar7 & 1) == 0; pAVar7 = pAVar7 + 1) {
      }
    }
    if (uVar6 == 0) {
      pAVar7 = (undefined *)0x20;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar7;
    if ((pAVar7 == (undefined *)0x20) ||
       (pAVar7 = this + (int)((int)(uintptr_t)pAVar7) * 8 + 8, pAVar7 == (undefined *)0x0)) {
      uVar6 = *(uint *)(this + 0xec);
      if (*(int *)(this + 0xd8) == 0) {
        uVar6 = *(uint *)(this + 0xe8);
      }
      if (uVar6 < uVar8 + 0x200) {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,uVar8,0x10);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
        return uVar6;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar1;
      pAVar7 = (undefined *)F_004f6720(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x18)));
      if (pAVar7 == (undefined *)0x0) {
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
        return 0;
      }
    }
  }
  pAVar10 = *(undefined * PTR32 *)(pAVar7 + 4);
  iVar4 = *(int *)(pAVar10 + 0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pAVar7;
  pAVar7 = pAVar10 + iVar4 + 0x20;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(~(param_2 - 1)));
  if (((int)pAVar7 - uVar8 & ~(param_2 - 1)) - 0x20 < (uint)((int)pAVar7 - *(int *)(pAVar10 + 0x14))
     ) {
    do {
      pAVar10 = *(undefined * PTR32 *)(pAVar10 + 4);
      if (pAVar10 == (*(undefined * PTR32 *)(gen_frame + 0x10))) {
        uVar6 = ((int)0x80000000) >> (0x1eU - (char)(*(undefined * PTR32 *)(gen_frame + 0x18)) & 0x1f) & *(uint *)(this + 200);
        pAVar7 = (undefined *)0x0;
        if (uVar6 != 0) {
          for (; (uVar6 >> (int)pAVar7 & 1) == 0; pAVar7 = pAVar7 + 1) {
          }
        }
        if (uVar6 == 0) {
          pAVar7 = (undefined *)0x20;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar7;
        if ((pAVar7 == (undefined *)0x20) ||
           (pAVar7 = this + (int)((int)(uintptr_t)pAVar7) * 8 + 8, pAVar7 == (undefined *)0x0)) {
          uVar6 = *(uint *)(this + 0xec);
          if (*(int *)(this + 0xd8) == 0) {
            uVar6 = *(uint *)(this + 0xe8);
          }
          if (uVar6 < uVar8 + 0x200) {
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,uVar8,0x10);
            gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
            return uVar6;
          }
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar1;
          bVar3 = F_004f6190(this GEN_EDX_ARG);
          if (bVar3 == 0) {
LAB_004f6a99: ;
            gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
            return 0;
          }
          pAVar7 = this + (int)((int)(uintptr_t)pAVar1) * 8 + 8;
          if (*(undefined * PTR32 *)(pAVar7 + 4) == pAVar7) {
            uVar6 = ((int)0x80000000) >> (0x1eU - (char)pAVar1 & 0x1f) & *(uint *)(this + 200);
            pAVar7 = (undefined *)0x0;
            if (uVar6 != 0) {
              for (; (uVar6 >> (int)pAVar7 & 1) == 0; pAVar7 = pAVar7 + 1) {
              }
            }
            if (uVar6 == 0) {
              pAVar7 = (undefined *)0x20;
            }
            (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar7;
            if (pAVar7 == (undefined *)0x20) {
              pAVar7 = (undefined *)0x0;
            }
            else {
              pAVar7 = this + (int)((int)(uintptr_t)pAVar7) * 8 + 8;
            }
          }
          if (pAVar7 == (undefined *)0x0) goto LAB_004f6a99;
        }
        pAVar10 = *(undefined * PTR32 *)(pAVar7 + 4);
        (*(undefined * PTR32 *)(gen_frame + 0x10)) = pAVar7;
      }
      pAVar7 = pAVar10 + *(int *)(pAVar10 + 0x10) + 0x20;
    } while (((int)pAVar7 - uVar8 & (uint)(*(undefined * PTR32 *)(gen_frame + 0xc))) - 0x20 <
             (uint)((int)pAVar7 - *(int *)(pAVar10 + 0x14)));
  }
  uVar6 = (uint)(pAVar7 + param_2 + (0x1f - *(int *)(pAVar10 + 0x14))) & (uint)(*(undefined * PTR32 *)(gen_frame + 0xc));
  iVar4 = (int)pAVar7 - uVar6;
  F_004f56b0(this GEN_EDX_ARG,pAVar10);
  iVar9 = uVar6 - 0x20;
  *(int *)(pAVar10 + 0x10) = *(int *)(pAVar10 + 0x10) + (-0x20 - iVar4);
  *(int *)(pAVar10 + 0x14) = *(int *)(pAVar10 + 0x14) + (-0x20 - iVar4);
  *(undefined * PTR32 *)(uVar6 - 0x18) = pAVar10;
  *(undefined4 *)(uVar6 - 0x14) = *(undefined4 *)(pAVar10 + 0xc);
  *((int *)GEN_TOP((*(int *)(pAVar10 + 0xc) + 8))) = iVar9;
  *(int *)(pAVar10 + 0xc) = iVar9;
  *(int *)(uVar6 - 0x10) = iVar4;
  *(uint *)(uVar6 - 0xc) = iVar4 - uVar8;
  *(undefined4 *)(uVar6 - 8) = *(undefined4 *)(pAVar10 + 0x18);
  F_004f5620(this GEN_EDX_ARG,pAVar10);
  F_004f5620(this GEN_EDX_ARG,iVar9);
  *(uint *)(this + 0xdc) = *(int *)(this + 0xdc) + uVar8;
  pAVar7 = this + 0xdc;
  if (*(uint *)(this + 0xdc) < *(uint *)(this + 0xe0)) {
    pAVar7 = this + 0xe0;
  }
  uVar2 = *(undefined4 *)pAVar7;
  *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + 1;
  *(undefined4 *)(this + 0xe0) = uVar2;
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
  return uVar6;
}

/* ref: Client::Graphics::IAllocator::vf0 */
GEN_FRAME uint GEN_THISCALL F_004f6b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004f6b30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f6b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f6b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097abc));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  return 0;
}

/* ref: Client::Graphics::AllocatorPool::vf0 */
GEN_FRAME uint GEN_THISCALL F_004f6b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097abc));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0xac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004f6b90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f6b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f6b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097ae8));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xf0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  return 0;
}

/* ref: Client::Graphics::AllocatorHeap::vf0 */
GEN_FRAME uint GEN_THISCALL F_004f6bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097ae8));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0xf0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004f6c10 */
GEN_FRAME uint GEN_THISCALL F_004f6c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((param_1 & 0xfffffc00) + 0x1c)));
  if ((uVar2 < *(uint *)((int)this + 0x98)) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 8 + uVar2 * 0x18))), uVar2 = 0, iVar1 != 0)) {
    return (uint)(param_1 - iVar1 < 0x4000);
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_004f6c50 */
GEN_FRAME uint GEN_THISCALL F_004f6c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6c50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 8 + param_2 * 8);
}

/* ref: FUN_004f6c60 */
GEN_FRAME uint GEN_THISCALL F_004f6c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6c60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_004f6c90 */
GEN_FRAME uint GEN_THISCALL F_004f6c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 - 8);
  if (uVar1 < *(uint *)((int)this + 0xd4)) {
    uVar1 = uVar1 * 0x10;
    if (*((int *)GEN_TOP((uVar1 + *(int *)((int)this + 0xcc)))) != 0) {
      return (uint)((uint)(param_1 - *((int *)GEN_TOP((uVar1 + *(int *)((int)this + 0xcc))))) <
                   *((uint *)GEN_TOP((uVar1 + 8 + *(int *)((int)this + 0xcc)))));
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_004f6cd0 */
GEN_FRAME uint GEN_THISCALL F_004f6cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 8 + param_2 * 8;
}

/* ref: FUN_004f6ce0 */
GEN_FRAME uint GEN_THISCALL F_004f6ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 8 + param_2 * 8;
}

/* ref: FUN_004f6cf0 */
GEN_FRAME uint GEN_THISCALL F_004f6cf0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x4f6cf0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_004f6d10 */
GEN_FRAME uint GEN_THISCALL F_004f6d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_004f6d20 */
GEN_FRAME uint GEN_THISCALL F_004f6d20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4f6d20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_004f6d50 */
GEN_FRAME uint GEN_THISCALL F_004f6d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4f6d50u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_004f6d80 */
GEN_FRAME uint F_004f6d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f6d80u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_3 + 8);
  fVar4 = (float10)*(float *)param_3;
  fVar5 = (float10)*(float *)(param_2 + 0xc);
  fVar6 = (float10)*(float *)param_2;
  fVar7 = (float10)*(float *)(param_3 + 0xc);
  fVar8 = (float10)*(float *)(param_3 + 4);
  *param_1 = ((float)GEN_TOF(((fVar8 * (float10)fVar1 + (fVar5 * fVar4 + fVar7 * fVar6)) -
                    (float10)fVar3 * (float10)fVar2)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar6 + ((float10)fVar2 * fVar7 + fVar8 * fVar5)) -
                      (float10)fVar1 * fVar4)));
  param_1[2] = ((float)GEN_TOF((((float10)fVar2 * fVar4 + ((float10)fVar1 * fVar7 + (float10)fVar3 * fVar5))
                      - fVar8 * fVar6)));
  param_1[3] = ((float)GEN_TOF((((fVar5 * fVar7 - fVar6 * fVar4) - fVar8 * (float10)fVar2) -
                      (float10)fVar3 * (float10)fVar1)));
  return (uint)param_1;
}

/* ref: FUN_004f6e70 */
GEN_FRAME uint F_004f6e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6e70u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  *param_1 = *param_2 ^ REFG(uint, 0x10920d0);
  param_1[1] = param_2[1] ^ uVar1;
  param_1[2] = param_2[2] ^ uVar1;
  param_1[3] = param_2[3];
  return (uint)param_1;
}

/* ref: FUN_004f6eb0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f6eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f6eb0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar3 = in_ecx[1];
  fVar4 = (float10)*in_ecx;
  fVar5 = (float10)*(float *)(param_2 + 0xc);
  fVar6 = (float10)*(float *)param_2;
  fVar7 = (float10)in_ecx[3];
  fVar8 = (float10)in_ecx[2];
  *in_ecx = ((float)GEN_TOF(((fVar8 * (float10)fVar1 + (fVar5 * fVar4 + fVar7 * fVar6)) -
                   (float10)fVar3 * (float10)fVar2)));
  in_ecx[1] = ((float)GEN_TOF((((float10)fVar2 * fVar4 + ((float10)fVar1 * fVar7 + (float10)fVar3 * fVar5)) -
                     fVar8 * fVar6)));
  in_ecx[2] = ((float)GEN_TOF((((float10)fVar3 * fVar6 + ((float10)fVar2 * fVar7 + fVar8 * fVar5)) -
                     (float10)fVar1 * fVar4)));
  in_ecx[3] = ((float)GEN_TOF((((fVar5 * fVar7 - fVar6 * fVar4) - (float10)fVar3 * (float10)fVar1) -
                     fVar8 * (float10)fVar2)));
  return 0;
}

/* ref: FUN_004f6fa0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f6fa0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9, float gen_a10, float gen_a11, float gen_a12)
{
  GEN_ENTER(0x4f6fa0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  float param_11 = (float)gen_a10;
  float param_12 = (float)gen_a11;
  float param_13 = (float)gen_a12;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[4] = param_5;
  in_ecx[5] = param_6;
  in_ecx[6] = param_7;
  in_ecx[8] = param_8;
  in_ecx[9] = param_9;
  in_ecx[10] = param_10;
  in_ecx[0xc] = param_11;
  in_ecx[0xd] = param_12;
  in_ecx[0xe] = param_13;
  return 0;
}

/* ref: FUN_004f7030 */
GEN_FRAME unsigned int GEN_THISCALL F_004f7030(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9, float gen_a10, float gen_a11, float gen_a12, float gen_a13, float gen_a14, float gen_a15, float gen_a16)
{
  GEN_ENTER(0x4f7030u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  float param_11 = (float)gen_a10;
  float param_12 = (float)gen_a11;
  float param_13 = (float)gen_a12;
  float param_14 = (float)gen_a13;
  float param_15 = (float)gen_a14;
  float param_16 = (float)gen_a15;
  float param_17 = (float)gen_a16;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  in_ecx[4] = param_6;
  in_ecx[5] = param_7;
  in_ecx[6] = param_8;
  in_ecx[7] = param_9;
  in_ecx[8] = param_10;
  in_ecx[9] = param_11;
  in_ecx[10] = param_12;
  in_ecx[0xb] = param_13;
  in_ecx[0xc] = param_14;
  in_ecx[0xd] = param_15;
  in_ecx[0xe] = param_16;
  in_ecx[0xf] = param_17;
  return 0;
}

/* ref: FUN_004f70e0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f70e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9, float gen_a10, float gen_a11, float gen_a12)
{
  GEN_ENTER(0x4f70e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  float param_11 = (float)gen_a10;
  float param_12 = (float)gen_a11;
  float param_13 = (float)gen_a12;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  in_ecx[4] = param_6;
  in_ecx[5] = param_7;
  in_ecx[6] = param_8;
  in_ecx[7] = param_9;
  in_ecx[8] = param_10;
  in_ecx[9] = param_11;
  in_ecx[10] = param_12;
  in_ecx[0xb] = param_13;
  return 0;
}

/* ref: FUN_004f7160 */
GEN_FRAME unsigned int GEN_THISCALL F_004f7160(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9, float gen_a10, float gen_a11, float gen_a12, float gen_a13, float gen_a14, float gen_a15, float gen_a16)
{
  GEN_ENTER(0x4f7160u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  float param_11 = (float)gen_a10;
  float param_12 = (float)gen_a11;
  float param_13 = (float)gen_a12;
  float param_14 = (float)gen_a13;
  float param_15 = (float)gen_a14;
  float param_16 = (float)gen_a15;
  float param_17 = (float)gen_a16;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  in_ecx[4] = param_6;
  in_ecx[5] = param_7;
  in_ecx[6] = param_8;
  in_ecx[7] = param_9;
  in_ecx[8] = param_10;
  in_ecx[9] = param_11;
  in_ecx[10] = param_12;
  in_ecx[0xb] = param_13;
  in_ecx[0xc] = param_14;
  in_ecx[0xd] = param_15;
  in_ecx[0xe] = param_16;
  in_ecx[0xf] = param_17;
  return 0;
}

/* ref: FUN_004f7210 */
GEN_FRAME unsigned int GEN_THISCALL F_004f7210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f7210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(undefined4 *)((int)this + 0x18) = param_2[2];
  *(undefined4 *)((int)this + 0x1c) = param_2[3];
  *(undefined4 *)((int)this + 0x20) = *param_3;
  *(undefined4 *)((int)this + 0x24) = param_3[1];
  *(undefined4 *)((int)this + 0x28) = param_3[2];
  return 0;
}

/* ref: FUN_004f7280 */
GEN_FRAME unsigned int GEN_THISCALL F_004f7280(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4f7280u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  fVar1 = *(float *)(in_ecx + 4);
  *(float *)(in_ecx + 4) = ((float)GEN_TOF((-(float10)param_2 * (float10)*(float *)(in_ecx + 8))));
  *(float *)(in_ecx + 8) = (float)((float10)param_2 * (float10)fVar1);
  return;
}

/* ref: FUN_004f72b0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f72b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x4f72b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar1 = *(float *)(param_1 + 4);
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)(float)fVar2 * (float10)fVar1 +
              (float10)(float)fVar3 * (float10)*(float *)(param_1 + 0xc))));
  *(float *)(param_1 + 0xc) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc) * (float10)(float)fVar2 -
              (float10)fVar1 * (float10)(float)fVar3)));
  return 0;
}

/* ref: Singleton_VAllocatorManager_Graphics_Client_Graphics_Client::vf0 */
GEN_FRAME uint GEN_THISCALL F_004f7340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f7340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1097a88));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004f7370 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f7370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f7370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x1097b18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[10])REFP(0x1097abc));
  gen_imp_DeleteCriticalSection((int)this + 0x1b8);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10c) = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[10])REFP(0x1097ae8));
  gen_imp_DeleteCriticalSection((int)this + 0xf4);
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  return 0;
}

/* ref: Client::Graphics::AllocatorHybrid::vf0 */
GEN_FRAME uint GEN_THISCALL F_004f73c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f73c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x1097b18));
  *(undefined * PTR32 * PTR32 *)(this + 0x10c) = (*(undefined * PTR32 (*)[10])REFP(0x1097abc));
  gen_imp_DeleteCriticalSection(this + 0x1b8);
  *(undefined * PTR32 * PTR32 *)(this + 0x10c) = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[10])REFP(0x1097ae8));
  gen_imp_DeleteCriticalSection(this + 0xf4);
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::AllocatorLowLevel::vf0 */
GEN_FRAME uint GEN_THISCALL F_004f7430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f7430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004f7460 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f7460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f7460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x1097b78));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  return 0;
}

/* ref: Client::Graphics::AllocatorVRAM::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_004f7480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f7480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::AllocatorVRAM::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_004f7490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f7490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::AllocatorVRAM::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f74a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f74a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::AllocatorVRAM::vf0 */
GEN_FRAME uint GEN_THISCALL F_004f74b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f74b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x1097b78));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0xe0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::AllocatorManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_004f7520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f7520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pAVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1097bac));
  pAVar1 = this + 0xc4;
  iVar2 = 0xb;
  do {
    pAVar1 = pAVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pAVar1 = (*(undefined * PTR32 (*)[10])REFP(0x1097a90));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1097a88));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004f7570 */
GEN_FRAME uint F_004f7570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f7570u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = param_2;
  if (!((float10)*param_2 < (float10)*param_3)) {
    pfVar1 = param_3;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if ((float10)param_2[1] < (float10)*pfVar1) {
    pfVar1 = param_2 + 1;
  }
  pfVar2 = param_3 + 2;
  param_1[1] = *pfVar1;
  if ((float10)param_2[2] < (float10)*pfVar2) {
    pfVar2 = param_2 + 2;
  }
  param_1[2] = *pfVar2;
  return (uint)param_1;
}

/* ref: FUN_004f75d0 */
GEN_FRAME uint F_004f75d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f75d0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = param_2;
  if (!((float10)*param_3 < (float10)*param_2)) {
    pfVar1 = param_3;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if ((float10)*pfVar1 < (float10)param_2[1]) {
    pfVar1 = param_2 + 1;
  }
  pfVar2 = param_3 + 2;
  param_1[1] = *pfVar1;
  if ((float10)*pfVar2 < (float10)param_2[2]) {
    pfVar2 = param_2 + 2;
  }
  param_1[2] = *pfVar2;
  return (uint)param_1;
}

/* ref: FUN_004f7630 */
GEN_FRAME uint F_004f7630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f7630u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = param_2;
  if (!((float10)*param_2 < (float10)*param_3)) {
    pfVar1 = param_3;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if ((float10)param_2[1] < (float10)*pfVar1) {
    pfVar1 = param_2 + 1;
  }
  pfVar2 = param_3 + 2;
  param_1[1] = *pfVar1;
  if ((float10)param_2[2] < (float10)*pfVar2) {
    pfVar2 = param_2 + 2;
  }
  param_1[2] = *pfVar2;
  return (uint)param_1;
}

/* ref: FUN_004f7690 */
GEN_FRAME uint F_004f7690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f7690u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float * pfVar2;
  
  pfVar1 = param_2;
  if (!((float10)*param_3 < (float10)*param_2)) {
    pfVar1 = param_3;
  }
  *param_1 = *pfVar1;
  pfVar1 = param_3 + 1;
  if ((float10)*pfVar1 < (float10)param_2[1]) {
    pfVar1 = param_2 + 1;
  }
  pfVar2 = param_3 + 2;
  param_1[1] = *pfVar1;
  if ((float10)*pfVar2 < (float10)param_2[2]) {
    pfVar2 = param_2 + 2;
  }
  param_1[2] = *pfVar2;
  return (uint)param_1;
}

/* ref: FUN_004f7750 */
GEN_FRAME uint GEN_THISCALL F_004f7750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f7750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4a8e0((wchar_t *)((int)this + 0x38),0x104,param_1);
  return uVar1;
}

/* ref: FUN_004f7770 */
GEN_FRAME int GEN_THISCALL F_004f7770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f7770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = *(char * PTR32 *)((int)this + param_1 * 4 + 8);
  iVar1 = 0;
  iVar3 = 0x200;
  do {
    if (*pcVar2 == '\0') {
      iVar1 = iVar1 + 1;
    }
    if (pcVar2[0x20] == '\0') {
      iVar1 = iVar1 + 1;
    }
    if (pcVar2[0x40] == '\0') {
      iVar1 = iVar1 + 1;
    }
    if (pcVar2[0x60] == '\0') {
      iVar1 = iVar1 + 1;
    }
    pcVar2 = pcVar2 + 0x80;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return iVar1;
}

/* ref: FUN_004f77b0 */
GEN_FRAME uint GEN_THISCALL F_004f77b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f77b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  LPVOID nNumberOfBytesToRead;
  BOOL BVar1;
  DWORD DVar2;
  LPVOID lpBuffer;
  LPVOID pvVar3;
  uint uVar4;
  bool bVar5;
  
  lpBuffer = (*(LPVOID *)&gen_args[1]);
  pvVar3 = (*(LPVOID *)&gen_args[2]);
  uVar4 = (*(uint *)&gen_args[3]);
  do {
    if ((1 < uVar4) || (nNumberOfBytesToRead = pvVar3, uVar4 != 0)) {
      nNumberOfBytesToRead = (LPVOID)0xffffff00;
    }
    BVar1 = gen_imp_ReadFile(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),lpBuffer,(DWORD)nNumberOfBytesToRead,
                     (LPDWORD)&(*(LPVOID *)&gen_args[1]),(GEN_LPANY)0x0);
    if (BVar1 == 0) {
      DVar2 = gen_imp_GetLastError();
      F_00429940(6,1,DVar2,0xffffffff);
      return 0xfffffff6;
    }
    if ((*(LPVOID *)&gen_args[1]) == (LPVOID)0x0) {
      return 1;
    }
    lpBuffer = (LPVOID)((int)lpBuffer + (int)(*(LPVOID *)&gen_args[1]));
    bVar5 = pvVar3 < (*(LPVOID *)&gen_args[1]);
    pvVar3 = (LPVOID)((int)pvVar3 - (int)(*(LPVOID *)&gen_args[1]));
    uVar4 = uVar4 - bVar5;
  } while (pvVar3 != (LPVOID)0x0 || uVar4 != 0);
  return 1;
}

/* ref: FUN_004f7840 */
GEN_FRAME uint GEN_THISCALL F_004f7840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f7840u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  LPCVOID nNumberOfBytesToWrite;
  BOOL BVar1;
  LPCVOID lpBuffer;
  LPCVOID pvVar2;
  uint uVar3;
  bool bVar4;
  
  lpBuffer = (*(LPCVOID *)&gen_args[1]);
  pvVar2 = (*(LPCVOID *)&gen_args[2]);
  uVar3 = (*(uint *)&gen_args[3]);
  while( true ) {
    if ((1 < uVar3) || (nNumberOfBytesToWrite = pvVar2, uVar3 != 0)) {
      nNumberOfBytesToWrite = (LPCVOID)0xffffff00;
    }
    BVar1 = gen_imp_WriteFile(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),lpBuffer,(DWORD)nNumberOfBytesToWrite,
                      (LPDWORD)&(*(LPCVOID *)&gen_args[1]),(GEN_LPANY)0x0);
    if (BVar1 == 0) break;
    lpBuffer = (LPCVOID)((int)lpBuffer + (int)(*(LPCVOID *)&gen_args[1]));
    bVar4 = pvVar2 < (*(LPCVOID *)&gen_args[1]);
    pvVar2 = (LPCVOID)((int)pvVar2 - (int)(*(LPCVOID *)&gen_args[1]));
    uVar3 = uVar3 - bVar4;
    if (pvVar2 == (LPCVOID)0x0 && uVar3 == 0) {
      return 1;
    }
  }
  return 0xfffffff6;
}

/* ref: FUN_004f78b0 */
GEN_FRAME uint GEN_THISCALL F_004f78b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4f78b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  BOOL BVar1;
  
  BVar1 = gen_imp_SetFilePointerEx(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(dword *)&gen_args[1]),(*(dword *)&gen_args[2]),(GEN_LPANY)&(*(dword *)&gen_args[1]),
                           (*(DWORD *)&gen_args[3]));
  if (BVar1 != 0) {
    if ((*(dword * PTR32 *)&gen_args[4]) != (dword *)0x0) {
      *(*(dword * PTR32 *)&gen_args[4]) = (*(dword *)&gen_args[1]);
      (*(dword * PTR32 *)&gen_args[4])[1] = (*(dword *)&gen_args[2]);
    }
    return 1;
  }
  return 0xfffffff6;
}

/* ref: FUN_004f7900 */
GEN_FRAME ulonglong GEN_THISCALL F_004f7900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f7900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(DWORD *)((int)this + 8);
  uVar2 = *(int *)((int)this + 0xc);
  if (uVar1 == 0 && uVar2 == 0) {
    (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart = 0;
    (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = 0;
    gen_imp_GetFileSizeEx(*(HANDLE *)((int)this + 0x10),&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
    *(DWORD *)((int)this + 8) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
    *(LONG *)((int)this + 0xc) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
    uVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
    uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  }
  return CONCAT44(uVar2,uVar1);
}

/* ref: FUN_004f7940 */
GEN_FRAME uint GEN_THISCALL F_004f7940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4f7940u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HANDLE hFile;
  int iVar1;
  BOOL BVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar2;
  
  iVar6 = (*(int * PTR32 *)&gen_args[2])[1];
  iVar1 = *(*(int * PTR32 *)&gen_args[2]);
  if (iVar1 == 0 && iVar6 == 0) {
    uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    uVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    if (uVar2 == 0 && uVar5 == 0) {
      hFile = *((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
      (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart = 0;
      (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = 0;
      gen_imp_GetFileSizeEx(hFile,&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
      *((DWORD *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
      *((LONG *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
      uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
      uVar5 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
    }
    iVar1 = uVar2 - (*(uint *)&gen_args[3]);
    iVar6 = (uVar5 - (*(dword *)&gen_args[4])) - (uint)((uint)uVar2 < (*(uint *)&gen_args[3]));
    *(*(int * PTR32 *)&gen_args[2]) = iVar1;
    (*(int * PTR32 *)&gen_args[2])[1] = iVar6;
    if (iVar1 == 0 && iVar6 == 0) {
      return 1;
    }
  }
  if (((*(uint *)&gen_args[3]) != 0 || (*(dword *)&gen_args[4]) != 0) || ((char)(*(undefined4 *)&gen_args[5]) != '\0')) {
    BVar3 = gen_imp_SetFilePointerEx(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(uint *)&gen_args[3]),(*(dword *)&gen_args[4]),(GEN_LPANY)&(*(uint *)&gen_args[3]),
                             0);
    uVar4 = (-(uint)(BVar3 != 0) & 0xb) - 10;
    if (uVar4 != 1) {
      return uVar4;
    }
  }
  uVar4 = F_004f77b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),iVar1,iVar6);
  return uVar4;
}

/* ref: FUN_004f7a00 */
GEN_FRAME uint GEN_THISCALL F_004f7a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4f7a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HANDLE hFile;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(*(int * PTR32 *)&gen_args[2]);
  uVar2 = (*(int * PTR32 *)&gen_args[2])[1];
  if (iVar6 == 0 && uVar2 == 0) {
    uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    uVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    if (uVar2 == 0 && uVar1 == 0) {
      hFile = *((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
      (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart = 0;
      (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = 0;
      gen_imp_GetFileSizeEx(hFile,&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
      *((DWORD *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
      *((LONG *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
      uVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
      uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
    }
    iVar6 = uVar2 - (*(uint *)&gen_args[6]);
    uVar2 = (uVar1 - (*(dword *)&gen_args[7])) - (uint)((uint)uVar2 < (*(uint *)&gen_args[6]));
    (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = uVar2;
    *(*(int * PTR32 *)&gen_args[2]) = iVar6;
    (*(int * PTR32 *)&gen_args[2])[1] = uVar2;
    if (iVar6 == 0 && uVar2 == 0) {
      return 1;
    }
  }
  else {
    (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = uVar2;
  }
  uVar3 = (*(uint *)&gen_args[4]);
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = uVar2;
  if ((*(uint *)&gen_args[4]) == 0) {
    uVar3 = F_00406500();
  }
  uVar3 = F_00406c00(iVar6,0,uVar3,(*(undefined4 *)&gen_args[5]));
  *(*(uint * PTR32 *)&gen_args[1]) = uVar3;
  if (((*(uint *)&gen_args[6]) != 0 || (*(dword *)&gen_args[7]) != 0) || ((char)(*(undefined4 *)&gen_args[8]) != '\0')) {
    BVar4 = gen_imp_SetFilePointerEx(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(uint *)&gen_args[6]),(*(dword *)&gen_args[7]),(GEN_LPANY)&(*(uint *)&gen_args[6]),
                             0);
    uVar5 = (-(uint)(BVar4 != 0) & 0xb) - 10;
    uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
    if (uVar5 != 1) goto LAB_004f7add;
  }
  uVar5 = F_004f77b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(*(uint * PTR32 *)&gen_args[1]),iVar6,uVar2);
LAB_004f7add: ;
  if ((uVar3 != 0) && (uVar5 != 1)) {
    F_00406ad0(uVar3);
    *(*(uint * PTR32 *)&gen_args[1]) = 0;
  }
  return uVar5;
}

/* ref: FUN_004f7b10 */
GEN_FRAME uint GEN_THISCALL F_004f7b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4f7b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  BOOL BVar1;
  uint uVar2;
  
  if (((*(dword *)&gen_args[4]) != 0 || (*(dword *)&gen_args[5]) != 0) || ((char)(*(undefined4 *)&gen_args[6]) != '\0')) {
    BVar1 = gen_imp_SetFilePointerEx(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(dword *)&gen_args[4]),(*(dword *)&gen_args[5]),(GEN_LPANY)&(*(dword *)&gen_args[4]),
                             0);
    if (BVar1 == 0) {
      return 0xfffffff6;
    }
  }
  uVar2 = F_004f7840((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return uVar2;
}

/* ref: FUN_004f7b60 */
GEN_FRAME uint F_004f7b60(unsigned int gen_a0)
{
  GEN_ENTER(0x4f7b60u, gen_a0, 0u, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar1 = F_00c4dba1(param_1,(undefined *)((byte *)(gen_frame + 0x0)));
  if (iVar1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 0;
  }
  (*(undefined1 *)((char *)&uVar2 + 0)) = ((byte *)(gen_frame + 0x0))[0x18];
  (*(undefined1 *)((char *)&uVar2 + 1)) = ((byte *)(gen_frame + 0x0))[0x19];
  (*(undefined1 *)((char *)&uVar2 + 2)) = ((byte *)(gen_frame + 0x0))[0x1a];
  (*(undefined1 *)((char *)&uVar2 + 3)) = ((byte *)(gen_frame + 0x0))[0x1b];
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004f7bb0 */
GEN_FRAME uint GEN_STDCALL F_004f7bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f7bb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int eVar1;
  uint uVar2;
  
  uVar2 = 1;
  eVar1 = F_00c4ece4((int *)&(*(wchar_t * PTR32 *)&gen_args[0]),(*(wchar_t * PTR32 *)&gen_args[0]),0x8001,0x10,0x80);
  if (eVar1 != 0) {
    return 0xfffffff6;
  }
  eVar1 = F_00c4e308((*(wchar_t * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  if (eVar1 != 0) {
    uVar2 = 0xfffffff6;
  }
  F_00c4e08e((int)(*(wchar_t * PTR32 *)&gen_args[0]));
  return uVar2;
}

/* ref: FUN_004f7c20 */
GEN_FRAME byte F_004f7c20(unsigned int gen_a0)
{
  GEN_ENTER(0x4f7c20u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_GetFileAttributesW(param_1);
  if (DVar1 == 0xffffffff) {
    return 0;
  }
  return ~((byte)(DVar1 >> 4) & 0xf) & 1;
}

/* ref: FUN_004f7c40 */
GEN_FRAME byte F_004f7c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f7c40u, gen_a0, gen_a1, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  DWORD DVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  DVar2 = gen_imp_GetFileAttributesW(param_1);
  pbVar1 = param_2;
  if ((DVar2 != 0xffffffff) && ((DVar2 & 0x10) == 0)) {
    iVar3 = F_00c4dba1(param_1,(undefined *)((byte *)(gen_frame + 0x0)));
    if (iVar3 != 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return 1;
    }
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24));
    *(undefined4 *)(param_2 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 1;
  }
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_004f7ce0 */
GEN_FRAME unsigned int GEN_STDCALL F_004f7ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x4f7ce0u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
                    
                    
  return (uint)(gen_imp_GetFileAttributesW(param_1));
}

/* ref: FUN_004f7cf0 */
GEN_FRAME uint GEN_STDCALL F_004f7cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x4f7cf0u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_GetFileAttributesW(param_1);
  return DVar1 & 1;
}

/* ref: FUN_004f7d10 */
GEN_FRAME uint GEN_STDCALL F_004f7d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f7d10u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  wchar_t wVar1;
  bool bVar2;
  int eVar3;
  uint uVar4;
  BOOL BVar5;
  DWORD DVar6;
  wchar_t * pwVar7;
  wchar_t * pwVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  uVar9 = 1;
  eVar3 = F_00c4a8e0(&(*(wchar_t *)(gen_frame + 0x10)),0x104,param_1);
  if (eVar3 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
    return 0xfffffff6;
  }
  pwVar8 = param_1;
  do {
    wVar1 = *pwVar8;
    pwVar8 = pwVar8 + 1;
  } while (wVar1 != L'\0');
  uVar4 = (int)pwVar8 - (int)(param_1 + 1) >> 1;
  bVar2 = false;
  pwVar8 = &(*(wchar_t *)(gen_frame + 0x10));
  if ((1 < uVar4) && ((*(short *)(gen_frame + 0x12)) == 0x3a)) {
    pwVar8 = ((wchar_t *)(gen_frame + 0x14));
    uVar4 = uVar4 - 2;
  }
  pwVar7 = pwVar8;
  if ((uVar4 != 0) &&
     ((((*pwVar8 == L'\\' || (*pwVar8 == L'/')) && (pwVar7 = pwVar8 + 1, uVar4 != 1)) &&
      ((*pwVar7 == L'\\' || (*pwVar7 == L'/')))))) {
    pwVar7 = pwVar8 + 2;
    bVar2 = true;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  pwVar8 = (wchar_t *)0x0;
  wVar1 = *pwVar7;
  while (wVar1 != L'\0') {
    if ((wVar1 == L'\\') || (wVar1 == L'/')) {
      if (bVar2) {
        bVar2 = false;
      }
      else {
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
        pwVar8 = pwVar7;
      }
    }
    wVar1 = pwVar7[1];
    pwVar7 = pwVar7 + 1;
  }
  if (((char)param_2 != '\0') && (pwVar8 != (wchar_t *)0x0)) {
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) - 1;
    *pwVar8 = L'\0';
  }
  BVar5 = gen_imp_CreateDirectoryW(&(*(wchar_t *)(gen_frame + 0x10)),0);
  if ((BVar5 == 0) && (DVar6 = gen_imp_GetLastError(), DVar6 != 0xb7)) {
    if ((pwVar8 != (wchar_t *)0x0) && (iVar10 = 0, 0 < (*(int *)(gen_frame + 0xc)))) {
      do {
        wVar1 = *pwVar8;
        while ((wVar1 != L'\\' && (*pwVar8 != L'/'))) {
          pwVar8 = pwVar8 - 1;
          wVar1 = *pwVar8;
        }
        *pwVar8 = L'\0';
        iVar10 = iVar10 + 1;
        BVar5 = gen_imp_CreateDirectoryW(&(*(wchar_t *)(gen_frame + 0x10)),0);
        if (BVar5 != 0) {
          if (iVar10 != 0) {
            do {
              iVar10 = iVar10 - 1;
              wVar1 = *pwVar8;
              while (wVar1 != L'\0') {
                pwVar8 = pwVar8 + 1;
                wVar1 = *pwVar8;
              }
              *pwVar8 = *((wchar_t *)GEN_TOP((((int)param_1 - (int)&(*(wchar_t *)(gen_frame + 0x10))) + (int)pwVar8)));
              BVar5 = gen_imp_CreateDirectoryW(&(*(wchar_t *)(gen_frame + 0x10)),(GEN_LPANY)0x0);
              if (BVar5 == 0) {
                F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
                return 0xfffffff6;
              }
            } while (iVar10 != 0);
          }
          F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
          return 1;
        }
      } while (iVar10 < (*(int *)(gen_frame + 0xc)));
    }
    uVar9 = 0xfffffff6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c) GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_004f7f00 */
GEN_NOFRAME uint GEN_STDCALL F_004f7f00(unsigned int gen_a0)
{
  GEN_ENTER(0x4f7f00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_GetLastError();
  switch((unsigned int)(uintptr_t)(DVar1)) {
  case 2: ;
  case 3: ;
    return 0xffffffff;
  default: ;
    return 0xfffffff6;
  case 5: ;
    return 5;
  case 0x12: ;
    return 3;
  case 0x27: ;
    return 0xfffffffe;
  }
}

/* ref: FUN_004f7f80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f7f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f7f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    F_004cf020(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x28);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return;
}

/* ref: FUN_004f7fe0 */
GEN_FRAME byte GEN_THISCALL F_004f7fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f7fe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((int *)GEN_TOP((*(int *)(in_ecx + 0xd4) + param_2 * 4))) != 0;
}

/* ref: FUN_004f8010 */
GEN_NOFRAME unsigned int F_004f8010(void)
{
  GEN_ENTER(0x4f8010u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_004f8040 */
GEN_FRAME unsigned int GEN_THISCALL F_004f8040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 1) {
    if (*(char *)((int)this + 8) == '\0') goto LAB_004f8083;
    iVar1 = 2;
  }
  if ((*(char *)((int)this + 9) != '\0') && (*(int *)((int)this + 0xc) != 0)) {
    F_00406ad0(*(undefined4 *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 9) = 0;
  }
LAB_004f8083: ;
  *(int *)((int)this + 4) = iVar1;
  return;
}

/* ref: FUN_004f80a0 */
GEN_FRAME uint GEN_THISCALL F_004f80a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f80a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b49690(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)(param_1 + 0x40) * 4 + 0x18))) GEN_EDX_FWD,
                       *(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  return uVar1;
}

/* ref: FUN_004f80c0 */
GEN_FRAME uint GEN_STDCALL F_004f80c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4f80c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_004f80e0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f80e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f80e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + param_1 * 0x810 + 0xcd0)) {
    puVar1 = (undefined4 *)((int)this + param_1 * 0x810 + 0x4d0);
    do {
      F_00406b30(*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)((int)this + param_1 * 0x810 + 0xcd0));
    *(undefined4 *)((int)this + param_1 * 0x810 + 0xcd0) = 0;
    *(undefined4 *)((int)this + param_1 * 0x810 + 0xcd4) = 0;
    return;
  }
  *(undefined4 *)((int)this + param_1 * 0x810 + 0xcd0) = 0;
  *(undefined4 *)((int)this + param_1 * 0x810 + 0xcd4) = 0;
  return;
}

/* ref: FUN_004f8140 */
GEN_FRAME unsigned int GEN_THISCALL F_004f8140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00b1af80(*(undefined * PTR32 *)(param_1 * 0x810 + 0xcd8 + (int)this) GEN_EDX_FWD);
  F_004f80e0(this GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_004f8170 */
GEN_FRAME uint GEN_THISCALL F_004f8170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f8170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  ulonglong uVar5;
  int local_8;
  
  piVar3 = (int *)((int)this + 0xcd0);
  local_8 = 2;
  do {
    piVar2 = piVar3 - 0x200;
    uVar1 = F_00b1af80((undefined *)piVar3[2] GEN_EDX_FWD);
    iVar4 = 0;
    if (0 < *piVar3) {
      do {
        uVar5 = F_00406b30(*piVar2);
        uVar1 = (uint)uVar5;
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < *piVar3);
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3 = piVar3 + 0x204;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return uVar1;
}

/* ref: FUN_004f81e0 */
GEN_FRAME uint GEN_THISCALL F_004f81e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4f81e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00a1a510(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_FWD,
                       *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) * 0x810 + 0xcd8 + (int)this))),
                       param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_004f8220 */
GEN_NOFRAME uint GEN_THISCALL F_004f8220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f8220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x38));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  return uVar1;
}

/* ref: FUN_004f8250 */
GEN_NOFRAME uint GEN_THISCALL F_004f8250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f8250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 1;
  if ((*(int *)((int)this + 0x20) == 2) &&
     (((uVar1 = *(uint *)((int)this + 0x44), uVar1 != 0 ||
       (*(int *)((int)this + 0x28) != *(int *)((int)this + 0x30))) ||
      (*(int *)((int)this + 0x2c) != *(int *)((int)this + 0x34))))) {
    uVar2 = F_004f7bb0((int)this + 0x54,*(uint *)((int)this + 0x30) - uVar1,
                         *(int *)((int)this + 0x34) - (uint)(*(uint *)((int)this + 0x30) < uVar1));
    if (uVar2 == 1) {
      uVar2 = *(uint *)((int)this + 0x44);
      iVar4 = *(uint *)((int)this + 0x30) - *(uint *)((int)this + 0x44);
      *(undefined4 *)((int)this + 0x44) = 0;
      iVar3 = *(int *)((int)this + 0x34) - (uint)(*(uint *)((int)this + 0x30) < uVar2);
      *(int *)((int)this + 0x28) = iVar4;
      *(int *)((int)this + 0x2c) = iVar3;
      *(int *)((int)this + 0x30) = iVar4;
      *(int *)((int)this + 0x34) = iVar3;
      return 1;
    }
    *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  }
  return uVar2;
}

/* ref: FUN_004f82c0 */
GEN_FRAME uint GEN_THISCALL F_004f82c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4f82c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = *param_4;
  if ((int)(iVar1 + 1U) < param_3) {
    *(undefined1 *)*param_1 = (undefined1)param_2;
    *param_1 = *param_1 + 1;
    *param_4 = *param_4 + 1;
    return (uint)param_1;
  }
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  return iVar1 + 1U;
}

/* ref: FUN_004f82f0 */
GEN_FRAME uint GEN_THISCALL F_004f82f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f82f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)((int)this + 0x44);
  if (uVar4 < param_2) {
    uVar5 = *(uint *)((int)this + 0x28) - *(uint *)((int)this + 0x30);
    uVar2 = (uint)(*(uint *)((int)this + 0x28) < *(uint *)((int)this + 0x30));
    uVar3 = *(int *)((int)this + 0x2c) - *(int *)((int)this + 0x34);
    if ((uVar3 == uVar2) && (uVar5 < param_2)) {
      return 10;
    }
    uVar6 = (*(int *)((int)this + 0x3c) - *(int *)((int)this + 0x40)) - uVar4;
    if ((((uVar3 != uVar2) || (uVar6 < uVar5)) && (*(int *)((int)this + 0x40) != 0)) &&
       ((uVar6 < 0x100 || (uVar6 < param_2)))) {
      uVar6 = *(uint *)((int)this + 0x48);
      if (uVar6 + uVar4 != 0) {
        if (0xf < uVar6) {
          uVar6 = 0x10;
        }
        *(uint *)((int)this + 0x48) = uVar6;
        F_00c46e20(*(int *)((int)this + 0x38),
                   (*(int *)((int)this + 0x38) - uVar6) + *(int *)((int)this + 0x40),uVar4 + uVar6);
      }
      uVar4 = *(uint *)((int)this + 0x44);
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x48);
      uVar6 = (*(int *)((int)this + 0x3c) - *(int *)((int)this + 0x48)) - uVar4;
    }
    if ((uVar3 == uVar2) && (uVar5 <= uVar6)) {
      uVar4 = F_004f77b0(this GEN_EDX_ARG,*(int *)((int)this + 0x38) + uVar4 + *(int *)((int)this + 0x40),
                           uVar5,0);
      if (uVar4 != 1) {
LAB_004f83bf: ;
        *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
        return uVar4;
      }
      puVar1 = (uint *)((int)this + 0x30);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + (uint)CARRY4(uVar4,uVar5);
      *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + uVar5;
    }
    else {
      uVar4 = F_004f77b0(this GEN_EDX_ARG,*(int *)((int)this + 0x38) + uVar4 + *(int *)((int)this + 0x40),
                           uVar6,0);
      if (uVar4 != 1) goto LAB_004f83bf;
      puVar1 = (uint *)((int)this + 0x30);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar6;
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + (uint)CARRY4(uVar4,uVar6);
      *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + uVar6;
    }
  }
  *param_1 = *(int *)((int)this + 0x38) + *(int *)((int)this + 0x40);
  *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + param_2;
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + param_2;
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) - param_2;
  return 1;
}

/* ref: FUN_004f8430 */
GEN_NOFRAME uint GEN_THISCALL F_004f8430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f8430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)((int)this + 0x4c);
  if (iVar2 == 0) {
    return 1;
  }
  uVar4 = F_004f7840(this GEN_EDX_FWD,(*(int *)((int)this + 0x40) + *(int *)((int)this + 0x38)) - iVar2,iVar2,
                       0);
  if (uVar4 == 1) {
    uVar3 = *(uint *)((int)this + 0x4c);
    puVar1 = (uint *)((int)this + 0x30);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + (uint)CARRY4(uVar4,uVar3);
    return 1;
  }
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  return uVar4;
}

/* ref: FUN_004f8480 */
GEN_FRAME uint GEN_THISCALL F_004f8480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f8480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004f77b0(this GEN_EDX_FWD,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_004f84a0 */
GEN_FRAME uint GEN_THISCALL F_004f84a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f84a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004f7840(this GEN_EDX_FWD,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_004f84e0 */
GEN_FRAME uint GEN_THISCALL F_004f84e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f84e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4a8e0((wchar_t *)((int)this + 0x38),0x104,param_1);
  return uVar1;
}

/* ref: FUN_004f8500 */
GEN_FRAME uint GEN_THISCALL F_004f8500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f8500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1097d40));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 4))), (long)(0));
  puVar5 = (undefined4 *)((int)this + 0x24);
  iVar6 = 7;
  REFG(void * PTR32, 0x1375ae4) = this;
  do {
    puVar1 = (undefined1 *)F_00406bb0(0x10000,0,0);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      iVar4 = 0x7ff;
      puVar3 = (undefined4 *)(puVar1 + 0x18);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 8;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
    }
    puVar5[-7] = puVar1;
    *puVar5 = puVar1;
    iVar4 = 0x7ff;
    do {
      puVar2 = puVar1;
      iVar4 = iVar4 - 1;
      puVar1 = puVar2 + 0x20;
      *puVar2 = 0;
      *(undefined1 * PTR32 *)(puVar2 + 0x18) = puVar1;
    } while (iVar4 != 0);
    *puVar1 = 0;
    *(undefined4 *)(puVar2 + 0x38) = 0;
    puVar5[7] = puVar1;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  return (uint)this;
}

/* ref: FUN_004f85e0 */
GEN_FRAME uint GEN_THISCALL F_004f85e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f85e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return ((*param_1 << 6) >> 6) * 0x20 + *((int *)GEN_TOP(((int)this + (*param_1 >> 0x1c) * 4 + 8)));
}

/* ref: FUN_004f8600 */
GEN_FRAME uint GEN_THISCALL F_004f8600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = ((undefined *)GEN_TOP((((*param_1 << 6) >> 6) * 0x20 +
                    *((int *)GEN_TOP(((int)this + (*param_1 >> 0x1c) * 4 + 8))))));
  piVar1 = (int *)((int)this + 4);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  uVar3 = *(uint *)((int)this_00 + 4);
  if ((uVar3 == 1) && (*(char *)((int)this_00 + 8) != '\0')) {
    uVar3 = 2;
    F_004f8040(this_00 GEN_EDX_FWD,2);
    *(undefined4 *)((int)this_00 + 0xc) = 0;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    *(undefined4 *)((int)this_00 + 0x14) = 0;
  }
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  return uVar3;
}

/* ref: FUN_004f8670 */
GEN_FRAME uint GEN_THISCALL F_004f8670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  
  iVar2 = *param_1;
  iVar3 = *((int *)GEN_TOP(((int)this + (iVar2 >> 0x1c) * 4 + 8)));
  puVar4 = (uint *)((int)this + 4);
  do {
    uVar1 = _InterlockedExchange((volatile long *)(puVar4), (long)(1));
  } while (uVar1 != 0);
  *((undefined1 *)GEN_TOP((((iVar2 << 6) >> 6) * 0x20 + iVar3 + 8))) = 1;
  uVar1 = _InterlockedExchange((volatile long *)(puVar4), (long)(0));
  return uVar1;
}

/* ref: FUN_004f86b0 */
GEN_FRAME byte GEN_THISCALL F_004f86b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f86b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *param_1;
  iVar4 = *((int *)GEN_TOP(((int)this + (iVar3 >> 0x1c) * 4 + 8)));
  piVar5 = (int *)((int)this + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar5), (long)(1));
  } while (iVar1 != 0);
  bVar2 = *((byte *)GEN_TOP((((iVar3 << 6) >> 6) * 0x20 + iVar4 + 9)));
  _InterlockedExchange((volatile long *)(piVar5), (long)(0));
  return bVar2;
}

/* ref: FUN_004f86f0 */
GEN_FRAME byte GEN_THISCALL F_004f86f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f86f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *param_1;
  iVar4 = *((int *)GEN_TOP(((int)this + (iVar3 >> 0x1c) * 4 + 8)));
  piVar5 = (int *)((int)this + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar5), (long)(1));
  } while (iVar1 != 0);
  bVar2 = *((byte *)GEN_TOP((((iVar3 << 6) >> 6) * 0x20 + iVar4 + 10)));
  _InterlockedExchange((volatile long *)(piVar5), (long)(0));
  return bVar2;
}

/* ref: FUN_004f8730 */
GEN_FRAME uint GEN_THISCALL F_004f8730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  iVar2 = *param_1;
  iVar3 = *((int *)GEN_TOP(((int)this + (iVar2 >> 0x1c) * 4 + 8)));
  piVar5 = (int *)((int)this + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar5), (long)(1));
  } while (iVar1 != 0);
  uVar4 = *((uint *)GEN_TOP((((iVar2 << 6) >> 6) * 0x20 + iVar3 + 0xc)));
  _InterlockedExchange((volatile long *)(piVar5), (long)(0));
  return uVar4;
}

/* ref: FUN_004f8770 */
GEN_FRAME uint GEN_THISCALL F_004f8770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  iVar2 = *param_1;
  iVar3 = *((int *)GEN_TOP(((int)this + (iVar2 >> 0x1c) * 4 + 8)));
  piVar5 = (int *)((int)this + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar5), (long)(1));
  } while (iVar1 != 0);
  uVar4 = *((uint *)GEN_TOP((((iVar2 << 6) >> 6) * 0x20 + iVar3 + 0x10)));
  _InterlockedExchange((volatile long *)(piVar5), (long)(0));
  return uVar4;
}

/* ref: FUN_004f87b0 */
GEN_FRAME uint GEN_THISCALL F_004f87b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f87b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + 4);
  do {
    iVar3 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar3 != 0);
  iVar3 = param_2;
  if (param_2 == 1) {
    uVar2 = 1;
    if (*(char *)(param_1 + 8) == '\0') goto LAB_004f880e;
    iVar3 = 2;
  }
  uVar2 = CONCAT31((int3)((uint)param_2 >> 8),*(char *)(param_1 + 9));
  if ((*(char *)(param_1 + 9) != '\0') && (*(int *)(param_1 + 0xc) != 0)) {
    F_00406ad0(*(undefined4 *)(param_1 + 0xc));
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
  }
LAB_004f880e: ;
  *(int *)(param_1 + 4) = iVar3;
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  return uVar2;
}

/* ref: FUN_004f8820 */
GEN_FRAME byte GEN_THISCALL F_004f8820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  int * piVar3;
  
  piVar3 = (int *)((int)this + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar3), (long)(1));
  } while (iVar1 != 0);
  bVar2 = *(byte *)(param_1 + 8);
  _InterlockedExchange((volatile long *)(piVar3), (long)(0));
  return bVar2;
}

/* ref: FUN_004f8850 */
GEN_FRAME unsigned int GEN_THISCALL F_004f8850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 9) = 1;
  return (uint)(_InterlockedExchange((volatile long *)(piVar1), (long)(0)));
}

/* ref: FUN_004f8880 */
GEN_FRAME unsigned int GEN_THISCALL F_004f8880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 10) = 1;
  return (uint)(_InterlockedExchange((volatile long *)(piVar1), (long)(0)));
}

/* ref: FUN_004f88b0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f88b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4f88b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return (uint)(_InterlockedExchange((volatile long *)(piVar1), (long)(0)));
}

/* ref: FUN_004f88e0 */
GEN_NOFRAME uint GEN_THISCALL F_004f88e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f88e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1097d48));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[5] = 0;
  *(undefined2 *)(in_ecx + 6) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004f8900 */
GEN_FRAME uint GEN_THISCALL F_004f8900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f8900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCWSTR param_1 = (LPCWSTR)gen_a1;
  int param_2 = (int)gen_a2;
  HANDLE pvVar1;
  DWORD DVar2;
  uint uVar3;
  LPCWSTR dwCreationDisposition;
  LPCWSTR dwDesiredAccess;
  LPCWSTR dwShareMode;
  DWORD local_8;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_2 == 0) {
    dwShareMode = (LPCWSTR)0x1;
    dwDesiredAccess = (LPCWSTR)0x80000000;
    dwCreationDisposition = (LPCWSTR)0x3;
    local_8 = 0x8000001;
  }
  else if (param_2 == 1) {
    dwShareMode = (LPCWSTR)0x1;
    dwDesiredAccess = (LPCWSTR)0x40000000;
    dwCreationDisposition = (LPCWSTR)0x2;
    local_8 = 0x88000020;
  }
  else {
    dwCreationDisposition = param_1;
    dwDesiredAccess = param_1;
    dwShareMode = param_1;
    if (param_2 == 2) {
      dwDesiredAccess = (LPCWSTR)0xc0000000;
      dwShareMode = (LPCWSTR)0x1;
      dwCreationDisposition = (LPCWSTR)&REFG(undefined, 0x4);
      local_8 = 0x88000020;
    }
  }
  pvVar1 = gen_imp_CreateFileW(param_1,(DWORD)dwDesiredAccess,(DWORD)dwShareMode,(GEN_LPANY)0x0,
                       (DWORD)dwCreationDisposition,local_8,(HANDLE)0x0);
  *(HANDLE *)((int)this + 0x10) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    if (((param_2 == 1) || (param_2 == 2)) && (DVar2 = gen_imp_GetLastError(), DVar2 == 3)) {
      uVar3 = F_004f7d10(param_1,1);
      if (uVar3 != 1) {
        return uVar3;
      }
      pvVar1 = gen_imp_CreateFileW(param_1,(DWORD)dwDesiredAccess,(DWORD)dwShareMode,
                           (GEN_LPANY)0x0,(DWORD)dwCreationDisposition,local_8,
                           (HANDLE)0x0);
      *(HANDLE *)((int)this + 0x10) = pvVar1;
      if (pvVar1 != (HANDLE)0xffffffff) goto LAB_004f89d7;
    }
    DVar2 = gen_imp_GetLastError();
    switch((unsigned int)(uintptr_t)(DVar2)) {
    case 2: ;
    case 3: ;
      return 0xffffffff;
    default: ;
      return 0xfffffff6;
    case 5: ;
      return 5;
    case 0x12: ;
      return 3;
    case 0x27: ;
      return 0xfffffffe;
    }
  }
LAB_004f89d7: ;
  *(undefined1 *)((int)this + 0x18) = 1;
  return 1;
}

/* ref: FUN_004f8a90 */
GEN_FRAME uint GEN_THISCALL F_004f8a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4f8a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = gen_imp_SetFilePointerEx(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),0,0,&(*(undefined4 *)(gen_frame + 0x4)),1);
  if (BVar1 == 0) {
    return 0xfffffff6;
  }
  BVar1 = gen_imp_SetFilePointerEx(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)&gen_args[4]),0);
  uVar2 = (-(uint)(BVar1 != 0) & 0xb) - 10;
  if (((uVar2 == 1) && (uVar2 = F_004f77b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3])), uVar2 == 1)) &&
     (BVar1 = gen_imp_SetFilePointerEx(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),0,0), BVar1 == 0)
     ) {
    return 0xfffffff6;
  }
  return uVar2;
}

/* ref: FUN_004f8b30 */
GEN_NOFRAME uint GEN_THISCALL F_004f8b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f8b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  BOOL BVar1;
  
  BVar1 = gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x10));
  if (BVar1 != 0) {
    *(undefined1 *)((int)this + 0x18) = 0;
    return 1;
  }
  return 0xfffffff6;
}

/* ref: FUN_004f8b60 */
GEN_FRAME uint GEN_STDCALL F_004f8b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f8b60u, gen_a0, gen_a1, gen_a2, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  LPCWSTR param_2 = (LPCWSTR)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = gen_imp_CopyFileW(param_1,param_2,(uint)((char)param_3 == '\0'));
  if (BVar1 == 0) {
    DVar2 = gen_imp_GetLastError();
    switch((unsigned int)(uintptr_t)(DVar2)) {
    case 2: ;
    case 3: ;
      return 0xffffffff;
    default: ;
      return 0xfffffff6;
    case 5: ;
      return 5;
    case 0x12: ;
      return 3;
    case 0x27: ;
      return 0xfffffffe;
    }
  }
  return 1;
}

/* ref: FUN_004f8c20 */
GEN_FRAME uint GEN_STDCALL F_004f8c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8c20u, gen_a0, gen_a1, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  LPCWSTR param_2 = (LPCWSTR)gen_a1;
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = gen_imp_MoveFileW(param_1,param_2);
  if (BVar1 == 0) {
    DVar2 = gen_imp_GetLastError();
    switch((unsigned int)(uintptr_t)(DVar2)) {
    case 2: ;
    case 3: ;
      return 0xffffffff;
    default: ;
      return 0xfffffff6;
    case 5: ;
      return 5;
    case 0x12: ;
      return 3;
    case 0x27: ;
      return 0xfffffffe;
    }
  }
  return 1;
}

/* ref: FUN_004f8cd0 */
GEN_FRAME uint GEN_STDCALL F_004f8cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004f8c20(param_1,param_2);
  return uVar1;
}

/* ref: FUN_004f8ce0 */
GEN_FRAME uint GEN_STDCALL F_004f8ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8ce0u, gen_a0, gen_a1, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  DWORD param_2 = (DWORD)gen_a1;
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = gen_imp_SetFileAttributesW(param_1,param_2);
  if (BVar1 == 0) {
    DVar2 = gen_imp_GetLastError();
    switch((unsigned int)(uintptr_t)(DVar2)) {
    case 2: ;
    case 3: ;
      return 0xffffffff;
    default: ;
      return 0xfffffff6;
    case 5: ;
      return 5;
    case 0x12: ;
      return 3;
    case 0x27: ;
      return 0xfffffffe;
    }
  }
  return 1;
}

/* ref: FUN_004f8d90 */
GEN_FRAME uint GEN_STDCALL F_004f8d90(unsigned int gen_a0)
{
  GEN_ENTER(0x4f8d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_004f8ce0(param_1,0x80);
  return uVar1;
}

/* ref: FUN_004f8db0 */
GEN_FRAME uint GEN_THISCALL F_004f8db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f8db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  DWORD DVar2;
  
  iVar1 = gen_imp_FindNextFileW(*(HANDLE *)((int)this + 0x10),*(undefined * PTR32 *)((int)this + 0x14));
  while( true ) {
    if (iVar1 == 0) {
      DVar2 = gen_imp_GetLastError();
      switch((unsigned int)(uintptr_t)(DVar2)) {
      case 2: ;
      case 3: ;
        return 0xffffffff;
      default: ;
        return 0xfffffff6;
      case 5: ;
        return 5;
      case 0x12: ;
        return 3;
      case 0x27: ;
        return 0xfffffffe;
      }
    }
    *param_2 = **(byte * PTR32 *)((int)this + 0x14) >> 4 & 1;
    iVar1 = *(int *)((int)this + 0x14);
    *param_1 = (short *)(iVar1 + 0x2c);
    if ((*(short *)(iVar1 + 0x2c) != 0x2e) ||
       ((*(short *)(iVar1 + 0x2e) != 0 &&
        ((*(short *)(iVar1 + 0x2e) != 0x2e || (*(short *)(iVar1 + 0x30) != 0)))))) break;
    iVar1 = gen_imp_FindNextFileW(*(HANDLE *)((int)this + 0x10),*(undefined * PTR32 *)((int)this + 0x14));
  }
  return 1;
}

/* ref: FUN_004f8eb0 */
GEN_NOFRAME uint GEN_THISCALL F_004f8eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f8eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  BOOL BVar1;
  
  if (*(char *)((int)this + 0x19) != '\0') {
    if (*(int *)((int)this + 0x14) != 0) {
      F_00406ad0(*(int *)((int)this + 0x14));
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    BVar1 = gen_imp_FindClose(*(HANDLE *)((int)this + 0x10));
    if (BVar1 == 0) {
      return 0xfffffff6;
    }
    *(undefined1 *)((int)this + 0x19) = 0;
  }
  return 1;
}

/* ref: FUN_004f8ef0 */
GEN_NOFRAME uint GEN_THISCALL F_004f8ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f8ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1097d50));
  if (REFG(undefined4 * PTR32, 0x1375ae4) != (undefined4 *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375ae4))))(REFG(undefined4 * PTR32, 0x1375ae4) GEN_EDX_FWD,1);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
  }
  if (*(int *)((int)this + 0x30) != 0) {
    F_00406b30(*(int *)((int)this + 0x30));
  }
  REFG(undefined4, 0x1375ae8) = 0;
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0xcc));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 200));
  uVar2 = F_004a05c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004f8f60 */
GEN_FRAME uint GEN_THISCALL F_004f8f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f8f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)((int)this + 0xbc);
  do {
    iVar4 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar4 != 0);
  iVar5 = 0;
  iVar4 = 7;
  puVar3 = (uint *)((int)this + 0x34);
  do {
    uVar2 = *puVar3;
    iVar4 = iVar4 - 1;
    if (uVar2 != 0) {
      *param_1 = iVar5;
      _InterlockedExchange((volatile long *)(piVar1), (long)(0));
      return uVar2;
    }
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar4 != 0);
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  *param_1 = 0;
  return 0;
}

/* ref: FUN_004f8fc0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f8fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f8fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)((int)this + 0xbc);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  iVar3 = param_2;
  for (iVar2 = *(int *)((int)this + param_1 * 0xc + 0x34);
      (iVar3 != 0 && (iVar3 = iVar3 - 1, iVar2 != 0)); iVar2 = *(int *)(iVar2 + 0x3c)) {
  }
  return (uint)(_InterlockedExchange((volatile long *)(piVar1), (long)(0)));
}

/* ref: FUN_004f9010 */
GEN_FRAME uint GEN_THISCALL F_004f9010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f9010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 0x38);
  iVar3 = *(int *)(param_2 + 0x3c);
  if (iVar2 == 0) {
    *(int *)((int)this + param_1 * 0xc + 0x34) = iVar3;
  }
  else {
    *(int *)(iVar2 + 0x3c) = iVar3;
  }
  if (iVar3 == 0) {
    *(int *)((int)this + param_1 * 0xc + 0x38) = iVar2;
    iVar2 = param_1 * 3 + 0xf;
    piVar1 = (int *)((int)this + iVar2 * 4);
    *piVar1 = *piVar1 - 1;
    return (uint)(undefined *)((int)this + iVar2 * 4);
  }
  *(int *)(iVar3 + 0x38) = iVar2;
  iVar2 = param_1 * 3 + 0xf;
  piVar1 = (int *)((int)this + iVar2 * 4);
  *piVar1 = *piVar1 - 1;
  return (uint)(undefined *)((int)this + iVar2 * 4);
}

/* ref: FUN_004f9060 */
GEN_FRAME uint GEN_THISCALL F_004f9060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f9060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + param_1 * 0xc + 0x34);
  if (iVar2 == 0) {
    *(int *)((int)this + param_1 * 0xc + 0x38) = param_2;
  }
  else {
    *(int *)(iVar2 + 0x38) = param_2;
  }
  *(int *)(param_2 + 0x3c) = iVar2;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(int *)((int)this + param_1 * 0xc + 0x34) = param_2;
  iVar2 = param_1 * 3 + 0xf;
  piVar1 = (int *)((int)this + iVar2 * 4);
  *piVar1 = *piVar1 + 1;
  return (uint)(undefined *)((int)this + iVar2 * 4);
}

/* ref: FUN_004f90a0 */
GEN_FRAME uint GEN_THISCALL F_004f90a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f90a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + param_1 * 0xc + 0x38);
  if (iVar2 == 0) {
    *(int *)((int)this + param_1 * 0xc + 0x34) = param_2;
  }
  else {
    *(int *)(iVar2 + 0x3c) = param_2;
  }
  *(int *)(param_2 + 0x38) = iVar2;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(int *)((int)this + param_1 * 0xc + 0x38) = param_2;
  iVar2 = param_1 * 3 + 0xf;
  piVar1 = (int *)((int)this + iVar2 * 4);
  *piVar1 = *piVar1 + 1;
  return (uint)(undefined *)((int)this + iVar2 * 4);
}

/* ref: FUN_004f90e0 */
GEN_FRAME uint GEN_THISCALL F_004f90e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f90e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  uint * puVar3;
  int local_8;
  
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1097d60));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcd0) = 0;
  *(undefined4 *)((int)this + 0xcd4) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined4 *)((int)this + 0x14e0) = 0;
  *(undefined4 *)((int)this + 0x14e4) = 0;
  *(undefined4 *)((int)this + 0xcdc) = 0;
  uVar1 = REFG(undefined4, 0x1375ae8);
  puVar3 = (uint *)((int)this + 0x18);
  local_8 = 0x14;
  do {
    this_00 = (undefined *)F_00406b90(0xaa0,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00b49f00(this_00 GEN_EDX_ARG,uVar1);
    }
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined4 *)((int)this + 0xcdc) = 1;
  return (uint)this;
}

/* ref: FUN_004f91a0 */
GEN_FRAME unsigned int GEN_THISCALL F_004f91a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f91a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1097d60));
  puVar2 = (undefined4 *)((int)this + 0x18);
  iVar1 = 0x14;
  do {
    this_00 = (undefined *)*puVar2;
    if (this_00 != (undefined *)0x0) {
      F_00b49a20(this_00 GEN_EDX_FWD);
      F_00406ad0(this_00);
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  F_004cf880(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_004f91f0 */
GEN_FRAME uint GEN_THISCALL F_004f91f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f91f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  int local_8;
  
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(REFG(int, 0x137104c) + 0x11ac);
  puVar2 = (uint *)((int)this + 0xcd8);
  local_8 = 2;
  do {
    this_00 = *(undefined * PTR32 *)((int)this + 0xbc);
    uVar1 = F_00a1abd0(this_00 GEN_EDX_FWD);
    while (uVar1 == 0) {
      F_004cee60(0);
      uVar1 = F_00a1abd0(this_00 GEN_EDX_ARG);
    }
    *puVar2 = uVar1;
    puVar2 = puVar2 + 0x204;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar1 = F_009fa070(0);
  return uVar1;
}

/* ref: Client::System::File::FileThread::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_004f9270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f9270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  this[0x14] = (undefined1)0x1;
  return (uint)(gen_imp_ReleaseSemaphore(*(HANDLE *)(REFG(int, 0x1375ae8) + 200),1,(LPLONG)0x0));
}

/* ref: FUN_004f9290 */
GEN_FRAME uint GEN_THISCALL F_004f9290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f9290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (0x1ff < *((int *)GEN_TOP((*(int *)((int)this + 0xc4) * 0x810 + 0xcd0 + (int)this)))) {
    F_004f8170(this GEN_EDX_FWD);
  }
  uVar2 = F_00404290();
  uVar3 = F_00406c00(param_1,0,uVar2,0x80);
  if (uVar3 == 0) {
    F_004f8170(this GEN_EDX_ARG);
    while( true ) {
      uVar3 = F_00406c00(param_1,0,uVar2,0x80);
      if (uVar3 != 0) break;
      F_00429940(0,1,(-(uint)(param_1 < 0x400000) & 0xfffffffe) + 3,0xffffffff);
      F_004cee60(5000);
    }
  }
  iVar4 = *(int *)((int)this + 0xc4) * 0x810;
  *((uint *)GEN_TOP(((int)this + *(int *)((int)this + iVar4 + 0xcd0) * 4 + iVar4 + 0x4d0))) = uVar3;
  piVar1 = (int *)((int)this + iVar4 + 0xcd0);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)((int)this + iVar4 + 0xcd4);
  *piVar1 = *piVar1 + param_1;
  return uVar3;
}

/* ref: FUN_004f9350 */
GEN_FRAME uint GEN_THISCALL F_004f9350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f9350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  *(undefined4 *)((int)this + 0x3c) = param_1;
  uVar1 = F_00406bb0(param_1,0,0x80);
  *(uint *)((int)this + 0x38) = uVar1;
  return uVar1;
}

/* ref: FUN_004f93a0 */
GEN_FRAME uint GEN_THISCALL F_004f93a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f93a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  int eVar5;
  BOOL BVar6;
  ulonglong uVar7;
  
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  *(undefined4 *)((int)this + 0x3c) = 0x10000;
  uVar1 = F_00406bb0(0x10000,0,0x80);
  *(uint *)((int)this + 0x38) = uVar1;
  if (uVar1 == 0) {
    return 0xfffffff6;
  }
  *(undefined4 *)((int)this + 0x20) = param_2;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    uVar2 = 1;
    break;
  default: ;
    uVar2 = 0;
    break;
  case 3: ;
  case 4: ;
    uVar2 = 2;
  }
  uVar1 = F_004f8900(this GEN_EDX_ARG,param_1,uVar2);
  if (uVar1 == 1) goto LAB_004f94f7;
  if (*(int *)((int)this + 0x20) == 2) {
    *(undefined4 *)((int)this + 0x20) = 1;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    pvVar3 = gen_imp_CreateFileW(param_1,0x40000000,1,0,2,0x88000020,0);
    *(HANDLE *)((int)this + 0x10) = pvVar3;
    if (pvVar3 == (HANDLE)0xffffffff) {
      DVar4 = gen_imp_GetLastError();
      if (DVar4 == 3) {
        uVar1 = F_004f7d10(param_1,1);
        if (uVar1 != 1) goto LAB_004f94ee;
        pvVar3 = gen_imp_CreateFileW(param_1,0x40000000,1,0,2,0x88000020,0);
        *(HANDLE *)((int)this + 0x10) = pvVar3;
        if (pvVar3 != (HANDLE)0xffffffff) {
          *(undefined1 *)((int)this + 0x18) = 1;
          goto LAB_004f94f7;
        }
      }
      DVar4 = gen_imp_GetLastError();
      switch((unsigned int)(uintptr_t)(DVar4)) {
      case 2: ;
      case 3: ;
        uVar1 = 0xffffffff;
        break;
      default: ;
        uVar1 = 0xfffffff6;
        break;
      case 5: ;
        uVar1 = 5;
        break;
      case 0x12: ;
        uVar1 = 3;
        break;
      case 0x27: ;
        uVar1 = 0xfffffffe;
      }
    }
    else {
      *(undefined1 *)((int)this + 0x18) = 1;
      uVar1 = 1;
    }
  }
LAB_004f94ee: ;
  if (uVar1 != 1) {
    return uVar1;
  }
LAB_004f94f7: ;
  uVar1 = 1;
  if ((*(int *)((int)this + 0x20) == 2) &&
     (eVar5 = F_00c4a8e0((wchar_t *)((int)this + 0x54),0x104,param_1), eVar5 != 0)) {
    return 0xfffffff6;
  }
  if (*(int *)((int)this + 0x20) == 1) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  else {
    uVar7 = F_004f7900(this GEN_EDX_ARG);
    *(ulonglong *)((int)this + 0x28) = uVar7;
    if (*(int *)((int)this + 0x20) == 4) {
      *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x2c);
      *(dword *)((int)this + 0x30) = (dword)uVar7;
      BVar6 = gen_imp_SetFilePointerEx(*(HANDLE *)((int)this + 0x10),(dword)uVar7,
                               *(dword *)((int)this + 0x34),&(*(LARGE_INTEGER *)(gen_frame + 0x4)),0);
      uVar1 = (-(uint)(BVar6 != 0) & 0xb) - 10;
    }
    else {
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined4 *)((int)this + 0x34) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  return uVar1;
}

/* ref: FUN_004f95f0 */
GEN_NOFRAME uint GEN_THISCALL F_004f95f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f95f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    iVar2 = *(int *)((int)this + 0x4c);
    if (iVar2 != 0) {
      uVar4 = F_004f7840(this GEN_EDX_FWD,(*(int *)((int)this + 0x40) + *(int *)((int)this + 0x38)) - iVar2,
                           iVar2,0);
      if (uVar4 == 1) {
        uVar3 = *(uint *)((int)this + 0x4c);
        puVar1 = (uint *)((int)this + 0x30);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 + uVar3;
        *(undefined4 *)((int)this + 0x4c) = 0;
        *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + (uint)CARRY4(uVar4,uVar3);
      }
      else {
        *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
      }
    }
    BVar5 = gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x10));
    if (BVar5 != 0) {
      *(undefined1 *)((int)this + 0x18) = 0;
    }
  }
  F_004f8250(this GEN_EDX_ARG);
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  return *(uint *)((int)this + 0x50);
}

/* ref: FUN_004f9660 */
GEN_FRAME uint GEN_THISCALL F_004f9660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f9660u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  dword liDistanceToMoveLow;
  BOOL BVar5;
  dword liDistanceToMoveHigh;
  
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
  if (iVar2 != 0) {
    uVar4 = F_004f7840((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)))) - iVar2,
                         iVar2,0);
    if (uVar4 == 1) {
      uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
      puVar1 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar3;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + (uint)CARRY4(uVar4,uVar3);
    }
    else {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
    }
  }
  liDistanceToMoveLow = (*(dword *)&gen_args[1]);
  liDistanceToMoveHigh = (*(dword *)&gen_args[2]);
  if (((int)(*(dword *)&gen_args[2]) < 1) && ((int)(*(dword *)&gen_args[2]) < 0)) {
    liDistanceToMoveLow = -(*(dword *)&gen_args[1]);
    liDistanceToMoveHigh = -((*(dword *)&gen_args[2]) + ((*(dword *)&gen_args[1]) != 0));
    if (liDistanceToMoveLow <= *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)))) {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + liDistanceToMoveLow;
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + (*(dword *)&gen_args[1]);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) + (*(dword *)&gen_args[1]);
    }
  }
  BVar5 = gen_imp_SetFilePointerEx(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),liDistanceToMoveLow,liDistanceToMoveHigh,
                           (GEN_LPANY)&(*(dword *)&gen_args[1]),(*(DWORD *)&gen_args[3]));
  if (BVar5 != 0) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
    return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
  return 0;
}

/* ref: FUN_004f9700 */
GEN_FRAME byte GEN_THISCALL F_004f9700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f9700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_004f82f0(this GEN_EDX_FWD,&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),1);
  if (uVar1 != 1) {
    return 0;
  }
  *param_1 = *(*(undefined1 * PTR32 *)(gen_frame + 0x8));
  return 1;
}

/* ref: FUN_004f9730 */
GEN_FRAME byte GEN_THISCALL F_004f9730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f9730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined2 * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_004f82f0(this GEN_EDX_FWD,&(*(undefined2 * PTR32 *)(gen_frame + 0x8)),2);
  if (uVar1 != 1) {
    return 0;
  }
  *param_1 = *(*(undefined2 * PTR32 *)(gen_frame + 0x8));
  return 1;
}

/* ref: FUN_004f9760 */
GEN_FRAME byte GEN_THISCALL F_004f9760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f9760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_004f82f0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),4);
  if (uVar1 != 1) {
    return 0;
  }
  *param_1 = *(*(undefined4 * PTR32 *)(gen_frame + 0x8));
  return 1;
}

/* ref: FUN_004f9790 */
GEN_FRAME byte GEN_THISCALL F_004f9790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f9790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_004f82f0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),8);
  if (uVar1 != 1) {
    return 0;
  }
  *param_1 = *(*(undefined4 * PTR32 *)(gen_frame + 0x8));
  param_1[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x8))[1];
  return 1;
}

/* ref: FUN_004f97d0 */
GEN_FRAME byte GEN_THISCALL F_004f97d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f97d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  BOOL BVar7;
  byte * pbVar8;
  
  pbVar5 = (*(byte * PTR32 *)&gen_args[3]);
  (*(byte *)(gen_frame + 0xb)) = 1;
  pbVar8 = (*(byte * PTR32 *)&gen_args[3]);
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  pbVar8[2] = 0;
  pbVar8[3] = 0;
  uVar6 = F_004f82f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(byte * PTR32 *)&gen_args[3]),1);
  pbVar8 = (*(byte * PTR32 *)&gen_args[1]);
  do {
    if (uVar6 == 10) {
LAB_004f99f9: ;
      (*(byte *)(gen_frame + 0xb)) = 0;
LAB_004f99fd: ;
      *pbVar8 = 0;
      return (*(byte *)(gen_frame + 0xb));
    }
    bVar2 = *(*(byte * PTR32 *)&gen_args[3]);
    if (bVar2 == 0xd) {
      uVar6 = F_004f82f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[3]),1);
      if (uVar6 != 10) {
        if (*(*(byte * PTR32 *)&gen_args[3]) != 10) {
          F_004f9660((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0xffffffff,0xffffffff,1);
          *pbVar8 = 0;
          return (*(byte *)(gen_frame + 0xb));
        }
        goto LAB_004f99fd;
      }
      goto LAB_004f99f9;
    }
    if ((bVar2 == 10) || (bVar2 == 0x1a)) goto LAB_004f99fd;
    if (bVar2 == 0xef) {
      uVar6 = F_004f82f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[3]),1);
      if (uVar6 == 10) {
        if (*(int *)pbVar5 + 1 < (*(int *)&gen_args[2])) {
          *pbVar8 = 0xef;
          *(int *)pbVar5 = *(int *)pbVar5 + 1;
          (*(byte *)(gen_frame + 0xb)) = 0;
          pbVar8[1] = 0;
          return 0;
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
        (*(byte *)(gen_frame + 0xb)) = 0;
        *pbVar8 = 0;
        return 0;
      }
      if (*(*(byte * PTR32 *)&gen_args[3]) != 0xbb) {
        iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
        if (iVar3 != 0) {
          uVar6 = F_004f7840((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)))) -
                                    iVar3,iVar3,0);
          if (uVar6 == 1) {
            uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
            puVar1 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
            uVar6 = *puVar1;
            *puVar1 = *puVar1 + uVar4;
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + (uint)CARRY4(uVar6,uVar4);
          }
          else {
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
          }
        }
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) != 0) {
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 1;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) - 1;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) - 1;
        }
        BVar7 = gen_imp_SetFilePointerEx(*((HANDLE *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),1,0,&(*(LARGE_INTEGER *)(gen_frame + 0x0)),1);
        if (BVar7 == 0) {
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
        }
        else {
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
        }
        goto LAB_004f98ee;
      }
      uVar6 = F_004f82f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[3]),1);
      if (uVar6 == 10) {
        if (*(int *)pbVar5 + 1 < (*(int *)&gen_args[2])) {
          *pbVar8 = 0xef;
          pbVar8 = pbVar8 + 1;
          *(int *)pbVar5 = *(int *)pbVar5 + 1;
        }
        else {
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
        }
        if (*(int *)pbVar5 + 1 < (*(int *)&gen_args[2])) {
          *pbVar8 = 0xbb;
          *(int *)pbVar5 = *(int *)pbVar5 + 1;
          (*(byte *)(gen_frame + 0xb)) = 0;
          pbVar8[1] = 0;
          return 0;
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
        (*(byte *)(gen_frame + 0xb)) = 0;
        *pbVar8 = 0;
        return 0;
      }
      if (*(*(byte * PTR32 *)&gen_args[3]) != 0xbf) {
        F_004f9660((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0xfffffffe,0xffffffff,1);
        goto LAB_004f98ee;
      }
    }
    else {
LAB_004f98ee: ;
      if (*(int *)pbVar5 + 1 < (*(int *)&gen_args[2])) {
        *pbVar8 = bVar2;
        pbVar8 = pbVar8 + 1;
        *(int *)pbVar5 = *(int *)pbVar5 + 1;
      }
      else {
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
      }
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0x20) == 0) {
          uVar6 = F_004f82f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[3]),1);
          if (uVar6 == 10) goto LAB_004f99f9;
          if (*(int *)pbVar5 + 1 < (*(int *)&gen_args[2])) {
            *pbVar8 = *(*(byte * PTR32 *)&gen_args[3]);
            pbVar8 = pbVar8 + 1;
            *(int *)pbVar5 = *(int *)pbVar5 + 1;
          }
          else {
LAB_004f99db: ;
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
          }
        }
        else if ((bVar2 & 0x10) == 0) {
          uVar6 = F_004f82f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[3]),2);
          if (uVar6 == 10) goto LAB_004f99f9;
          if (*(int *)pbVar5 + 1 < (*(int *)&gen_args[2])) {
            *pbVar8 = *(*(byte * PTR32 *)&gen_args[3]);
            pbVar8 = pbVar8 + 1;
            *(int *)pbVar5 = *(int *)pbVar5 + 1;
          }
          else {
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
          }
          if ((*(int *)&gen_args[2]) <= *(int *)pbVar5 + 1) goto LAB_004f99db;
          *pbVar8 = (*(byte * PTR32 *)&gen_args[3])[1];
          pbVar8 = pbVar8 + 1;
          *(int *)pbVar5 = *(int *)pbVar5 + 1;
        }
        else if ((bVar2 & 8) == 0) {
          uVar6 = F_004f82f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[3]),3);
          if (uVar6 == 10) goto LAB_004f99f9;
          if (*(int *)pbVar5 + 1 < (*(int *)&gen_args[2])) {
            *pbVar8 = *(*(byte * PTR32 *)&gen_args[3]);
            pbVar8 = pbVar8 + 1;
            *(int *)pbVar5 = *(int *)pbVar5 + 1;
          }
          else {
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
          }
          if (*(int *)pbVar5 + 1 < (*(int *)&gen_args[2])) {
            *pbVar8 = (*(byte * PTR32 *)&gen_args[3])[1];
            pbVar8 = pbVar8 + 1;
            *(int *)pbVar5 = *(int *)pbVar5 + 1;
          }
          else {
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
          }
          if ((*(int *)&gen_args[2]) <= *(int *)pbVar5 + 1) goto LAB_004f99db;
          *pbVar8 = (*(byte * PTR32 *)&gen_args[3])[2];
          pbVar8 = pbVar8 + 1;
          *(int *)pbVar5 = *(int *)pbVar5 + 1;
        }
        else {
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 1;
        }
      }
    }
    uVar6 = F_004f82f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(byte * PTR32 *)&gen_args[3]),1);
  } while( true );
}

/* ref: FUN_004f9ae0 */
GEN_FRAME uint GEN_THISCALL F_004f9ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f9ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((uint)(*(int *)((int)this + 0x3c) - *(int *)((int)this + 0x40)) < param_2) {
    iVar2 = *(int *)((int)this + 0x4c);
    if (iVar2 != 0) {
      uVar4 = F_004f7840(this GEN_EDX_FWD,(*(int *)((int)this + 0x38) - iVar2) + *(int *)((int)this + 0x40),
                           iVar2,0);
      if (uVar4 != 1) {
        *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
        return uVar4;
      }
      uVar3 = *(uint *)((int)this + 0x4c);
      puVar1 = (uint *)((int)this + 0x30);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar3;
      *(undefined4 *)((int)this + 0x4c) = 0;
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + (uint)CARRY4(uVar4,uVar3);
    }
    uVar4 = *(uint *)((int)this + 0x48);
    if (*(int *)((int)this + 0x44) + uVar4 != 0) {
      if (0xf < uVar4) {
        uVar4 = 0x10;
      }
      *(uint *)((int)this + 0x48) = uVar4;
      F_00c46e20(*(int *)((int)this + 0x38),
                 (*(int *)((int)this + 0x38) - uVar4) + *(int *)((int)this + 0x40),
                 *(int *)((int)this + 0x44) + uVar4);
    }
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x48);
  }
  *param_1 = *(int *)((int)this + 0x38) + *(int *)((int)this + 0x40);
  uVar4 = *(uint *)((int)this + 0x44);
  *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + param_2;
  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + param_2;
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + param_2;
  if (uVar4 != 0) {
    if (uVar4 < param_2) {
      *(undefined4 *)((int)this + 0x44) = 0;
      return 1;
    }
    *(uint *)((int)this + 0x44) = uVar4 - param_2;
  }
  return 1;
}

/* ref: FUN_004f9bb0 */
GEN_NOFRAME uint GEN_THISCALL F_004f9bb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f9bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  *(undefined2 *)(in_ecx + 0xe) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004f9c50 */
GEN_NOFRAME uint GEN_THISCALL F_004f9c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f9c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = ((undefined *)GEN_TOP((((*(int *)((int)(uintptr_t)this) << 6) >> 6) * 0x20 +
                    *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (*(int *)((int)(uintptr_t)this) >> 0x1c) * 4))))));
  piVar1 = (int *)(REFG(int, 0x1375ae4) + 4);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  uVar3 = *(uint *)((int)this_00 + 4);
  if ((uVar3 == 1) && (*(char *)((int)this_00 + 8) != '\0')) {
    uVar3 = 2;
    F_004f8040(this_00 GEN_EDX_FWD,2);
    *(undefined4 *)((int)this_00 + 0xc) = 0;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    *(undefined4 *)((int)this_00 + 0x14) = 0;
  }
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  return uVar3;
}

/* ref: FUN_004f9cb0 */
GEN_NOFRAME uint GEN_THISCALL F_004f9cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f9cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  
  iVar2 = *(int *)this;
  iVar3 = *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (iVar2 >> 0x1c) * 4)));
  puVar4 = (uint *)(REFG(int, 0x1375ae4) + 4);
  do {
    uVar1 = _InterlockedExchange((volatile long *)(puVar4), (long)(1));
  } while (uVar1 != 0);
  *((undefined1 *)GEN_TOP((((iVar2 << 6) >> 6) * 0x20 + iVar3 + 8))) = 1;
  uVar1 = _InterlockedExchange((volatile long *)(puVar4), (long)(0));
  return uVar1;
}

/* ref: FUN_004f9d70 */
GEN_NOFRAME uint GEN_THISCALL F_004f9d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f9d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  iVar3 = *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (iVar2 >> 0x1c) * 4)));
  piVar5 = (int *)(REFG(int, 0x1375ae4) + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar5), (long)(1));
  } while (iVar1 != 0);
  uVar4 = *((uint *)GEN_TOP((((iVar2 << 6) >> 6) * 0x20 + iVar3 + 0xc)));
  _InterlockedExchange((volatile long *)(piVar5), (long)(0));
  return uVar4;
}

/* ref: FUN_004f9db0 */
GEN_NOFRAME ulonglong GEN_THISCALL F_004f9db0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f9db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  iVar3 = *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (iVar2 >> 0x1c) * 4)));
  piVar5 = (int *)(REFG(int, 0x1375ae4) + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar5), (long)(1));
  } while (iVar1 != 0);
  uVar4 = *((ulonglong *)GEN_TOP((((iVar2 << 6) >> 6) * 0x20 + iVar3 + 0x10)));
  _InterlockedExchange((volatile long *)(piVar5), (long)(0));
  return uVar4;
}

/* ref: FUN_004f9df0 */
GEN_FRAME uint GEN_THISCALL F_004f9df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f9df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  undefined1 * puVar3;
  
  if (*(int *)((int)this + param_2 * 4 + 0x24) == 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  piVar1 = (int *)((int)this + 4);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  puVar3 = *(undefined1 * PTR32 *)((int)this + param_2 * 4 + 0x24);
  iVar2 = *(int *)(puVar3 + 0x18);
  *(int *)((int)this + param_2 * 4 + 0x24) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + param_2 * 4 + 0x40) = 0;
  }
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  *(undefined4 *)(puVar3 + 0x18) = 0;
  *puVar3 = 1;
  *param_1 = ((int)puVar3 - *(int *)((int)this + param_2 * 4 + 8) | 0x8000001fU) >> 5 |
             param_2 << 0x1c;
  return (uint)param_1;
}

/* ref: FUN_004f9e70 */
GEN_FRAME unsigned int GEN_THISCALL F_004f9e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4f9e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  undefined1 * puVar3;
  int iVar4;
  
  iVar4 = *param_1 >> 0x1c;
  puVar3 = ((undefined1 *)GEN_TOP((((*param_1 << 6) >> 6) * 0x20 + *(int *)((int)this + iVar4 * 4 + 8))));
  piVar1 = (int *)((int)this + 4);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 0x18) = 0;
  iVar2 = *(int *)((int)this + iVar4 * 4 + 0x40);
  if (iVar2 == 0) {
    *(undefined1 * PTR32 *)((int)this + iVar4 * 4 + 0x24) = puVar3;
  }
  else {
    *(undefined1 * PTR32 *)(iVar2 + 0x18) = puVar3;
  }
  *(undefined1 * PTR32 *)((int)this + iVar4 * 4 + 0x40) = puVar3;
  return (uint)(_InterlockedExchange((volatile long *)(piVar1), (long)(0)));
}

/* ref: FUN_004f9ed0 */
GEN_NOFRAME uint GEN_THISCALL F_004f9ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4f9ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1097d48));
  if (*(char *)((int)this + 0x18) != '\0') {
    in_EAX = gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x10));
    if (in_EAX != 0) {
      *(undefined1 *)((int)this + 0x18) = 0;
    }
  }
  if (*(char *)((int)this + 0x19) != '\0') {
    if (*(int *)((int)this + 0x14) != 0) {
      F_00406ad0(*(int *)((int)this + 0x14));
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    in_EAX = gen_imp_FindClose(*(HANDLE *)((int)this + 0x10));
    if (in_EAX != 0) {
      *(undefined1 *)((int)this + 0x19) = 0;
    }
  }
  return in_EAX;
}

/* ref: FUN_004f9f30 */
GEN_FRAME uint GEN_THISCALL F_004f9f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4f9f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCWSTR param_1 = (LPCWSTR)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 1;
  BVar1 = gen_imp_DeleteFileW(param_1);
  if ((BVar1 == 0) && (uVar4 = 0xfffffff6, (char)param_2 != '\0')) {
    DVar2 = gen_imp_GetFileAttributesW(param_1);
    if ((DVar2 & 1) != 0) {
      uVar3 = F_004f8ce0(param_1,0x80);
      if (uVar3 == 1) {
        BVar1 = gen_imp_DeleteFileW(param_1);
        if (BVar1 != 0) {
          return 1;
        }
        uVar4 = F_004f7f00(param_1);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_004f9fa0 */
GEN_FRAME uint GEN_THISCALL F_004f9fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4f9fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  undefined * lpFindFileData;
  HANDLE pvVar2;
  uint uVar3;
  DWORD DVar4;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x0)),0x104,param_1);
  F_00c4b8d3(((wchar_t *)(gen_frame + 0x0)),0x104,L"/*.*");
  lpFindFileData = (undefined *)F_00406b90(0x250,0,0);
  *(undefined * PTR32 *)((int)this + 0x14) = lpFindFileData;
  pvVar2 = gen_imp_FindFirstFileW(((wchar_t *)(gen_frame + 0x0)),lpFindFileData);
  *(HANDLE *)((int)this + 0x10) = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffff) {
    F_00406ad0(*(undefined4 *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    DVar4 = gen_imp_GetLastError();
    switch((unsigned int)(uintptr_t)(DVar4)) {
    case 2: ;
    case 3: ;
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
      return 0xffffffff;
    default: ;
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
      return 0xfffffff6;
    case 5: ;
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
      return 5;
    case 0x12: ;
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
      return 3;
    case 0x27: ;
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
      return 0xfffffffe;
    }
  }
  *(undefined1 *)((int)this + 0x19) = 1;
  *param_3 = **(byte * PTR32 *)((int)this + 0x14) >> 4 & 1;
  iVar1 = *(int *)((int)this + 0x14);
  *param_2 = (short *)(iVar1 + 0x2c);
  if ((*(short *)(iVar1 + 0x2c) == 0x2e) &&
     ((*(short *)(iVar1 + 0x2e) == 0 ||
      ((*(short *)(iVar1 + 0x2e) == 0x2e && (*(short *)(iVar1 + 0x30) == 0)))))) {
    uVar3 = F_004f8db0(this GEN_EDX_ARG,param_2,param_3);
    F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
    return uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004fa160 */
GEN_NOFRAME uint GEN_THISCALL F_004fa160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fa160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00406b90(0x14ec,0,0);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = (undefined *)F_004f90e0(pvVar1 GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)((int)this + 0x28) = pvVar1;
  uVar2 = F_004cf9e0(pvVar1 GEN_EDX_ARG,0,0,0x10000,"FFXIV_FileThread");
  return uVar2;
}

/* ref: FUN_004fa1a0 */
GEN_FRAME byte GEN_THISCALL F_004fa1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fa1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  piVar1 = (int *)((int)this + 0xbc);
  do {
    iVar4 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar4 != 0);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xac);
  if (puVar2 == (undefined4 *)0x0) {
    _InterlockedExchange((volatile long *)(piVar1), (long)(0));
    return 0;
  }
  iVar4 = puVar2[0xe];
  iVar3 = puVar2[0xf];
  if (iVar4 == 0) {
    *(int *)((int)this + 0xac) = iVar3;
  }
  else {
    *(int *)(iVar4 + 0x3c) = iVar3;
  }
  if (iVar3 == 0) {
    *(int *)((int)this + 0xb0) = iVar4;
  }
  else {
    *(int *)(iVar3 + 0x38) = iVar4;
  }
  *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) - 1;
  puVar5 = param_1;
  puVar6 = puVar2;
  for (iVar4 = 0x92; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((char)param_3 == '\0') {
    iVar4 = *(int *)((int)this + param_2 * 0xc + 0x38);
    if (iVar4 == 0) {
      *(undefined4 * PTR32 *)((int)this + param_2 * 0xc + 0x34) = puVar2;
    }
    else {
      *(undefined4 * PTR32 *)(iVar4 + 0x3c) = puVar2;
    }
    puVar2[0xe] = iVar4;
    puVar2[0xf] = 0;
    *(undefined4 * PTR32 *)((int)this + param_2 * 0xc + 0x38) = puVar2;
  }
  else {
    iVar4 = *(int *)((int)this + param_2 * 0xc + 0x34);
    if (iVar4 == 0) {
      *(undefined4 * PTR32 *)((int)this + param_2 * 0xc + 0x38) = puVar2;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(undefined4 * PTR32 *)((int)this + param_2 * 0xc + 0x34) = puVar2;
    }
    else {
      *(undefined4 * PTR32 *)(iVar4 + 0x38) = puVar2;
      puVar2[0xe] = 0;
      puVar2[0xf] = iVar4;
      *(undefined4 * PTR32 *)((int)this + param_2 * 0xc + 0x34) = puVar2;
    }
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (param_2 * 3 + 0xf) * 4)));
  *piVar1 = *piVar1 + 1;
  if (param_2 == 3) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0xcc));
  }
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xbc))), (long)(0));
  gen_imp_ReleaseSemaphore(*(HANDLE *)((int)this + 200),1,(LPLONG)0x0);
  return 1;
}

/* ref: FUN_004fa2a0 */
GEN_FRAME uint GEN_THISCALL F_004fa2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fa2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  piVar1 = (int *)((int)this + 0xbc);
  do {
    iVar5 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar5 != 0);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0xac);
  if (puVar3 == (undefined4 *)0x0) {
    _InterlockedExchange((volatile long *)(piVar1), (long)(0));
    return (uint)puVar3;
  }
  iVar5 = puVar3[0xe];
  iVar4 = puVar3[0xf];
  if (iVar5 == 0) {
    *(int *)((int)this + 0xac) = iVar4;
  }
  else {
    *(int *)(iVar5 + 0x3c) = iVar4;
  }
  if (iVar4 == 0) {
    *(int *)((int)this + 0xb0) = iVar5;
  }
  else {
    *(int *)(iVar4 + 0x38) = iVar5;
  }
  *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) - 1;
  puVar6 = param_1;
  puVar7 = puVar3;
  for (iVar5 = 0x92; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar5 = *(int *)((int)this + param_2 * 0xc + 0x34);
  if (iVar5 == 0) {
    *(undefined4 * PTR32 *)((int)this + param_2 * 0xc + 0x38) = puVar3;
  }
  else {
    *(undefined4 * PTR32 *)(iVar5 + 0x38) = puVar3;
  }
  piVar2 = ((int *)GEN_TOP(((int)this + (param_2 * 3 + 0xf) * 4)));
  puVar3[0xe] = 0;
  puVar3[0xf] = iVar5;
  *piVar2 = *piVar2 + 1;
  *(undefined4 * PTR32 *)((int)this + param_2 * 0xc + 0x34) = puVar3;
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  return (uint)puVar3;
}

/* ref: FUN_004fa350 */
GEN_FRAME uint GEN_THISCALL F_004fa350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4fa350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  do {
    iVar4 = _InterlockedExchange((volatile long *)(((int *)((int)this + 0xbc))), (long)(1));
  } while (iVar4 != 0);
  iVar4 = param_2;
  if (param_2 == 0) {
    iVar4 = *(int *)((int)this + param_1 * 0xc + 0x34);
  }
  iVar2 = *(int *)(iVar4 + 0x38);
  iVar3 = *(int *)(iVar4 + 0x3c);
  if (iVar2 == 0) {
    *(int *)((int)this + param_1 * 0xc + 0x34) = iVar3;
  }
  else {
    *(int *)(iVar2 + 0x3c) = iVar3;
  }
  if (iVar3 == 0) {
    *(int *)((int)this + param_1 * 0xc + 0x38) = iVar2;
  }
  else {
    *(int *)(iVar3 + 0x38) = iVar2;
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (param_1 * 3 + 0xf) * 4)));
  *piVar1 = *piVar1 - 1;
  if ((char)param_4 == '\0') {
    iVar2 = *(int *)((int)this + param_3 * 0xc + 0x38);
    if (iVar2 == 0) {
      *(int *)((int)this + param_3 * 0xc + 0x34) = iVar4;
    }
    else {
      *(int *)(iVar2 + 0x3c) = iVar4;
    }
    *(int *)(iVar4 + 0x38) = iVar2;
    *(undefined4 *)(iVar4 + 0x3c) = 0;
    *(int *)((int)this + param_3 * 0xc + 0x38) = iVar4;
  }
  else {
    iVar2 = *(int *)((int)this + param_3 * 0xc + 0x34);
    if (iVar2 == 0) {
      *(int *)((int)this + param_3 * 0xc + 0x38) = iVar4;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      *(int *)((int)this + param_3 * 0xc + 0x34) = iVar4;
    }
    else {
      *(int *)(iVar2 + 0x38) = iVar4;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(int *)(iVar4 + 0x3c) = iVar2;
      *(int *)((int)this + param_3 * 0xc + 0x34) = iVar4;
    }
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (param_3 * 3 + 0xf) * 4)));
  *piVar1 = *piVar1 + 1;
  puVar5 = (undefined4 *)((int)this + 0xbc);
  _InterlockedExchange((volatile long *)(puVar5), (long)(0));
  if (param_3 < 7) {
    puVar5 = ((undefined4 *)GEN_TOP(gen_imp_ReleaseSemaphore(*(HANDLE *)((int)this + 200),1,(LPLONG)0x0)));
  }
  return (uint)puVar5;
}

/* ref: FUN_004fa430 */
GEN_FRAME uint GEN_STDCALL F_004fa430(unsigned int gen_a0)
{
  GEN_ENTER(0x4fa430u, gen_a0, 0u, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar1 = F_00c4dba1(param_1,(undefined *)((byte *)(gen_frame + 0x0)));
  if (iVar1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 0;
  }
  (*(undefined1 *)((char *)&uVar2 + 0)) = ((byte *)(gen_frame + 0x0))[0x18];
  (*(undefined1 *)((char *)&uVar2 + 1)) = ((byte *)(gen_frame + 0x0))[0x19];
  (*(undefined1 *)((char *)&uVar2 + 2)) = ((byte *)(gen_frame + 0x0))[0x1a];
  (*(undefined1 *)((char *)&uVar2 + 3)) = ((byte *)(gen_frame + 0x0))[0x1b];
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004fa480 */
GEN_FRAME byte GEN_STDCALL F_004fa480(unsigned int gen_a0)
{
  GEN_ENTER(0x4fa480u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_GetFileAttributesW(param_1);
  if (DVar1 == 0xffffffff) {
    return 0;
  }
  return ~((byte)(DVar1 >> 4) & 0xf) & 1;
}

/* ref: FUN_004fa4b0 */
GEN_FRAME byte GEN_STDCALL F_004fa4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4fa4b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  int iVar1;
  char cVar2;
  undefined * this;
  dword dVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  dword liDistanceToMoveLow;
  BOOL BVar8;
  int * piVar9;
  uint uVar10;
  ulonglong uVar11;
  
  (*(uint *)(gen_frame + 0x238)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x23c);
  iVar6 = ((param_1[8] << 6) >> 6) * 0x20 +
          *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1375ae4) + (param_1[8] >> 0x1c) * 4 + 8)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = REFG(void * PTR32, 0x1375ae4);
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x20)) = iVar6;
  piVar9 = ((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1375ae4) + 4)));
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar9), (long)(1));
  } while (iVar1 != 0);
  cVar2 = *(char *)(iVar6 + 8);
  _InterlockedExchange((volatile long *)(piVar9), (long)(0));
  uVar10 = 1;
  if (cVar2 == '\0') {
    uVar4 = *(ulonglong *)(param_1 + 2);
    this = (undefined *)param_1[9];
    cVar2 = *(char *)((int)this + 0x18);
    iVar6 = param_1[3];
    uVar11 = *(ulonglong *)(param_1 + 2);
    (*(int *)(gen_frame + 0x28)) = param_1[1];
    dVar3 = param_1[5];
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = (int)uVar4;
    liDistanceToMoveLow = param_1[4];
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 4)) = iVar6;
    (*(dword *)(gen_frame + 0x8)) = liDistanceToMoveLow;
    (*(dword *)(gen_frame + 0xc)) = dVar3;
    (*(char *)(gen_frame + 0x2f)) = '\0';
    (*(ulonglong *)(gen_frame + 0x10)) = uVar11;
    if (cVar2 == '\0') {
      iVar6 = *param_1;
      if (iVar6 == 2) {
        (*(undefined4 *)(gen_frame + 0x18)) = 1;
      }
      else if (iVar6 == 3) {
        (*(undefined4 *)(gen_frame + 0x18)) = 2;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
      }
      if (iVar6 == 0) {
        F_00c4a8e0(((wchar_t *)(gen_frame + 0x30)),0x104,(wchar_t *)(param_1 + 0x10));
        uVar10 = F_004ff6a0(((wchar_t *)(gen_frame + 0x30)),param_1[0xd]);
        if (uVar10 == 0) {
          uVar10 = F_00b4c840(((wchar_t *)(gen_frame + 0x30)));
          (*(uint *)(gen_frame + 0x1c)) = uVar10;
          if (uVar10 != 0) {
            F_004ff6b0(((wchar_t *)(gen_frame + 0x30)),uVar10,param_1[0xd]);
          }
        }
        else {
          bVar5 = F_004ff640();
          if (bVar5 == 0) {
            uVar7 = F_004f7b60(((wchar_t *)(gen_frame + 0x30)));
          }
          else {
            uVar7 = *(uint *)(uVar10 + 0x10);
            if (uVar7 == 0) {
              uVar7 = F_004f7b60(((wchar_t *)(gen_frame + 0x30)));
              *(uint *)(uVar10 + 0x10) = uVar7;
            }
          }
          (*(uint *)(gen_frame + 0x1c)) = uVar7;
        }
        uVar10 = F_004f8900(this GEN_EDX_ARG,((wchar_t *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x18)));
        *(uint *)((int)this + 8) = (*(uint *)(gen_frame + 0x1c));
        *(undefined4 *)((int)this + 0xc) = 0;
      }
      else {
        uVar10 = F_004f8900(this GEN_EDX_ARG,param_1 + 0x10,(*(undefined4 *)(gen_frame + 0x18)));
      }
      liDistanceToMoveLow = (*(dword *)(gen_frame + 0x8));
      if (uVar10 == 1) {
        (*(char *)(gen_frame + 0x2f)) = '\x01';
      }
    }
    do {
      iVar6 = _InterlockedExchange((volatile long *)(((int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4))), (long)(1));
    } while (iVar6 != 0);
    cVar2 = *(char *)((*(int *)(gen_frame + 0x20)) + 8);
    (*(char *)(gen_frame + 0x2e)) = cVar2;
    _InterlockedExchange((volatile long *)(((undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4))), (long)(0));
    if ((cVar2 == '\0') && (uVar10 == 1)) {
      switch((unsigned int)(uintptr_t)(*param_1)) {
      case 0: ;
        uVar10 = F_00514260((undefined *)param_1[0xd] GEN_EDX_ARG,param_1,(uint)((*(char *)(gen_frame + 0x2f)) == '\0'));
        break;
      case 1: ;
        if ((*(int *)(gen_frame + 0x28)) == 0) {
          uVar10 = F_004f7a00(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x28)),&(*(ulonglong *)(gen_frame + 0x10)),param_1[0xb],param_1[0xc],param_1[10],
                                liDistanceToMoveLow,(*(dword *)(gen_frame + 0xc)),(uint)((*(char *)(gen_frame + 0x2f)) == '\0'));
          if (uVar10 == 1) {
            F_004f8850((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x20)));
          }
        }
        else {
          uVar10 = F_004f7940(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)),&(*(ulonglong *)(gen_frame + 0x10)),liDistanceToMoveLow,(*(dword *)(gen_frame + 0xc)),
                                (uint)((*(char *)(gen_frame + 0x2f)) == '\0'));
        }
        break;
      case 2: ;
      case 3: ;
        uVar10 = F_004f7b10(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)),(int)(*(ulonglong *)(gen_frame + 0x10)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 4)),liDistanceToMoveLow,
                              (*(dword *)(gen_frame + 0xc)),(uint)((*(char *)(gen_frame + 0x2f)) == '\0'));
        break;
      case 4: ;
        BVar8 = gen_imp_SetFilePointerEx(*(HANDLE *)((int)this + 0x10),liDistanceToMoveLow,(*(dword *)(gen_frame + 0xc)),
                                 &(*(LARGE_INTEGER *)(gen_frame + 0x0)),0);
        uVar10 = (-(uint)(BVar8 != 0) & 0xb) - 10;
        break;
      case 5: ;
        uVar11 = F_004f7900(this GEN_EDX_ARG);
        (*(ulonglong *)(gen_frame + 0x10)) = uVar11;
        (*(int *)(gen_frame + 0x28)) = 0;
      }
    }
    if (((*(char *)(gen_frame + 0x2f)) != '\0') && (BVar8 = gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x10)), BVar8 != 0)) {
      *(undefined1 *)((int)this + 0x18) = 0;
    }
    do {
      piVar9 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4);
      iVar6 = _InterlockedExchange((volatile long *)(piVar9), (long)(1));
    } while (iVar6 != 0);
    cVar2 = *(char *)((*(int *)(gen_frame + 0x20)) + 8);
    _InterlockedExchange((volatile long *)(piVar9), (long)(0));
    iVar6 = (*(int *)(gen_frame + 0x20));
    if (cVar2 == '\0') goto LAB_004fa854;
  }
  uVar10 = 2;
  iVar6 = (*(int *)(gen_frame + 0x20));
LAB_004fa854: ;
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar9), (long)(1));
  } while (iVar1 != 0);
  *(int *)(iVar6 + 0xc) = (*(int *)(gen_frame + 0x28));
  *(int *)(iVar6 + 0x10) = (int)(*(ulonglong *)(gen_frame + 0x10));
  *(int *)(iVar6 + 0x14) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 4));
  _InterlockedExchange((volatile long *)(piVar9), (long)(0));
  F_004f87b0((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,iVar6,uVar10);
  if (*param_1 == 0) {
    F_00501af0((undefined *)param_1[0xd] GEN_EDX_ARG,param_1,uVar10,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004fa8d0 */
GEN_FRAME byte GEN_STDCALL F_004fa8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4fa8d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  ushort uVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  bool bVar5;
  
  this = *(undefined * PTR32 *)(param_1 + 4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = (*(undefined * PTR32 (*)[1])REFP(0x1097d48));
  ((byte *)(gen_frame + 0x4))[8] = 0;
  ((byte *)(gen_frame + 0x4))[9] = 0;
  ((byte *)(gen_frame + 0x4))[10] = 0;
  ((byte *)(gen_frame + 0x4))[0xb] = 0;
  ((byte *)(gen_frame + 0x4))[0xc] = 0;
  ((byte *)(gen_frame + 0x4))[0xd] = 0;
  ((byte *)(gen_frame + 0x4))[0xe] = 0;
  ((byte *)(gen_frame + 0x4))[0xf] = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(ushort *)(gen_frame + 0x1c)) = 0;
  iVar4 = 0;
  uVar2 = F_004f9fa0(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1 + 0x40,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x28)));
  uVar1 = (*(ushort *)(gen_frame + 0x1c));
  while ((*(ushort *)(gen_frame + 0x1c)) = uVar1, uVar2 == 1) {
    F_00b4cc40(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
    iVar4 = iVar4 + 1;
    uVar2 = F_004f8db0(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x28)));
    uVar1 = (*(ushort *)(gen_frame + 0x1c));
  }
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 1)) = (char)(uVar1 >> 8);
  bVar5 = (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 1)) != '\0';
  if (bVar5) {
    if ((*(int *)(gen_frame + 0x18)) != 0) {
      F_00406ad0((*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
    }
    BVar3 = gen_imp_FindClose((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)));
    uVar1 = (*(ushort *)(gen_frame + 0x1c));
    if (BVar3 != 0) {
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 1)) = 0;
      (*(ushort *)(gen_frame + 0x1c)) = uVar1 & 0xff;
    }
  }
  F_004f87b0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,
               ((*(int *)(param_1 + 0x20) << 6) >> 6) * 0x20 +
               *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1375ae4) + (*(int *)(param_1 + 0x20) >> 0x1c) * 4 + 8))),
               (uint)(iVar4 != 0) * 2 - 1);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = (*(undefined * PTR32 (*)[1])REFP(0x1097d48));
  if (((char)(*(ushort *)(gen_frame + 0x1c)) != '\0') &&
     (BVar3 = gen_imp_CloseHandle((HANDLE)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16))), uVar1 = (*(ushort *)(gen_frame + 0x1c)), BVar3 != 0)) {
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 0)) = 0;
    (*(ushort *)(gen_frame + 0x1c)) = uVar1 & 0xff00;
  }
  if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 1)) != '\0') {
    if ((*(int *)(gen_frame + 0x18)) != 0) {
      F_00406ad0((*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
    }
    gen_imp_FindClose((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)));
  }
  return 1;
}

/* ref: FUN_004faa20 */
GEN_NOFRAME uint GEN_THISCALL F_004faa20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4faa20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1097d7c));
  uVar1 = F_004f95f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1097d48));
  if (*(char *)((int)this + 0x18) != '\0') {
    uVar1 = gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x10));
    if (uVar1 != 0) {
      *(undefined1 *)((int)this + 0x18) = 0;
    }
  }
  if (*(char *)((int)this + 0x19) != '\0') {
    if (*(int *)((int)this + 0x14) != 0) {
      F_00406ad0(*(int *)((int)this + 0x14));
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    uVar1 = gen_imp_FindClose(*(HANDLE *)((int)this + 0x10));
    if (uVar1 != 0) {
      *(undefined1 *)((int)this + 0x19) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_004faa80 */
GEN_FRAME uint GEN_THISCALL F_004faa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4faa80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  F_00429f90(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  F_0042a020(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_004f93a0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_004faaf0 */
GEN_FRAME uint GEN_THISCALL F_004faaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4faaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  char * pcVar5;
  BOOL BVar6;
  HANDLE pvVar7;
  DWORD DVar8;
  uint uVar9;
  
  if (*(int *)((int)this + 0x20) != 2) goto LAB_004fac95;
  uVar4 = F_004f82f0(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),param_2);
  if (uVar4 == 1) {
    if (param_2 == 0) {
      return 1;
    }
    pcVar5 = (char *)(param_1 + param_2);
    uVar4 = param_2;
    while( true ) {
      uVar9 = uVar4;
      pcVar3 = pcVar5 + ((*(int *)(gen_frame + 0x8)) - param_1) - 1;
      pcVar5 = pcVar5 - 1;
      uVar4 = uVar9 - 1;
      if (*pcVar3 != *pcVar5) break;
      if (uVar4 == 0) {
        return uVar9;
      }
    }
  }
  else if (uVar4 != 10) {
    return uVar4;
  }
  BVar6 = gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x10));
  if (BVar6 == 0) goto LAB_004fab95;
  uVar9 = param_2 + *(uint *)((int)this + 0x44);
  *(undefined1 *)((int)this + 0x18) = 0;
  puVar1 = (uint *)((int)this + 0x30);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 - uVar9;
  *(int *)((int)this + 0x34) =
       (*(int *)((int)this + 0x34) - (uint)CARRY4(param_2,*(uint *)((int)this + 0x44))) -
       (uint)(uVar4 < uVar9);
  *(undefined4 *)((int)this + 0x44) = 0;
  uVar4 = F_004f8250(this GEN_EDX_ARG);
  if (uVar4 != 1) {
    *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
    return uVar4;
  }
  iVar2 = (int)this + 0x54;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 1;
  pvVar7 = gen_imp_CreateFileW(iVar2,0xc0000000,1,0,4,0x88000020,0);
  *(HANDLE *)((int)this + 0x10) = pvVar7;
  if (pvVar7 == (HANDLE)0xffffffff) {
    DVar8 = gen_imp_GetLastError();
    if (DVar8 == 3) {
      uVar4 = F_004f7d10(iVar2,1);
      if (uVar4 != 1) goto LAB_004fac4c;
      pvVar7 = gen_imp_CreateFileW(iVar2,0xc0000000,1,0,4,0x88000020,0);
      *(HANDLE *)((int)this + 0x10) = pvVar7;
      if (pvVar7 != (HANDLE)0xffffffff) goto LAB_004fac58;
    }
    DVar8 = gen_imp_GetLastError();
    switch((unsigned int)(uintptr_t)(DVar8)) {
    case 2: ;
    case 3: ;
      uVar4 = 0xffffffff;
      break;
    default: ;
      uVar4 = 0xfffffff6;
      break;
    case 5: ;
      uVar4 = 5;
      break;
    case 0x12: ;
      uVar4 = 3;
      break;
    case 0x27: ;
      uVar4 = 0xfffffffe;
    }
    if (uVar4 != 1) {
LAB_004fac4c: ;
      *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
      return uVar4;
    }
  }
  else {
LAB_004fac58: ;
    *(undefined1 *)((int)this + 0x18) = 1;
  }
  BVar6 = gen_imp_SetFilePointerEx(*(HANDLE *)((int)this + 0x10),*(dword *)((int)this + 0x30),
                           *(dword *)((int)this + 0x34),&(*(LARGE_INTEGER *)(gen_frame + 0x0)),0);
  if (BVar6 == 0) {
LAB_004fab95: ;
    *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
    return 0xfffffff6;
  }
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
LAB_004fac95: ;
  uVar4 = F_004f9ae0(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)),param_2);
  if (uVar4 == 1) {
    F_00c46aa0((*(int *)(gen_frame + 0x8)),param_1,param_2);
    return 1;
  }
  return uVar4;
}

/* ref: FUN_004fad10 */
GEN_FRAME uint GEN_THISCALL F_004fad10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fad10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[2]));
  uVar1 = *puVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = uVar1;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = uVar1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_004fad40 */
GEN_FRAME uint GEN_THISCALL F_004fad40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fad40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 * puVar5;
  int iVar6;
  
  iVar4 = REFG(int, 0x1375ae4);
  iVar6 = *(int *)((int)(uintptr_t)this) >> 0x1c;
  puVar5 = ((undefined1 *)GEN_TOP((((*(int *)((int)(uintptr_t)this) << 6) >> 6) * 0x20 + *(int *)(REFG(int, 0x1375ae4) + 8 + iVar6 * 4))));
  puVar1 = (uint *)(REFG(int, 0x1375ae4) + 4);
  do {
    uVar2 = _InterlockedExchange((volatile long *)(puVar1), (long)(1));
  } while (uVar2 != 0);
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 0x18) = 0;
  iVar3 = *(int *)(iVar4 + 0x40 + iVar6 * 4);
  if (iVar3 == 0) {
    *(undefined1 * PTR32 *)(iVar4 + 0x24 + iVar6 * 4) = puVar5;
  }
  else {
    *(undefined1 * PTR32 *)(iVar3 + 0x18) = puVar5;
  }
  *(undefined1 * PTR32 *)(iVar4 + 0x40 + iVar6 * 4) = puVar5;
  uVar2 = _InterlockedExchange((volatile long *)(puVar1), (long)(0));
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_004fadb0 */
GEN_FRAME uint GEN_THISCALL F_004fadb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fadb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x450];
  wchar_t wVar1;
  bool bVar2;
  int eVar3;
  wchar_t * pwVar4;
  uint uVar5;
  BOOL BVar6;
  DWORD DVar7;
  wchar_t * pwVar8;
  wchar_t * pwVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x448)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44c);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  uVar10 = 1;
  eVar3 = F_00c4a8e0(&(*(wchar_t *)(gen_frame + 0x38)),0x104,param_1);
  if (eVar3 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x448)) ^ (uint)(uint)(gen_frame + 0x44c) GEN_EDX_ARG);
    return 0xfffffff6;
  }
  pwVar4 = param_1;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  uVar5 = (int)pwVar4 - (int)(param_1 + 1) >> 1;
  bVar2 = false;
  pwVar4 = &(*(wchar_t *)(gen_frame + 0x38));
  if ((1 < uVar5) && ((*(short *)(gen_frame + 0x3a)) == 0x3a)) {
    pwVar4 = ((wchar_t *)(gen_frame + 0x3c));
    uVar5 = uVar5 - 2;
  }
  pwVar8 = pwVar4;
  if (((uVar5 != 0) &&
      (((*pwVar4 == L'\\' || (*pwVar4 == L'/')) && (pwVar8 = pwVar4 + 1, uVar5 != 1)))) &&
     ((*pwVar8 == L'\\' || (*pwVar8 == L'/')))) {
    pwVar8 = pwVar4 + 2;
    bVar2 = true;
  }
  wVar1 = *pwVar8;
  pwVar4 = (wchar_t *)0x0;
  while (wVar1 != L'\0') {
    if (((wVar1 == L'\\') || (pwVar9 = pwVar4, wVar1 == L'/')) && (pwVar9 = pwVar8, bVar2)) {
      bVar2 = false;
      pwVar9 = pwVar4;
    }
    wVar1 = pwVar8[1];
    pwVar4 = pwVar9;
    pwVar8 = pwVar8 + 1;
  }
  if (((char)param_2 != '\0') && (pwVar4 != (wchar_t *)0x0)) {
    *pwVar4 = L'\0';
  }
  BVar6 = gen_imp_RemoveDirectoryW(&(*(wchar_t *)(gen_frame + 0x38)));
  if ((BVar6 == 0) && (DVar7 = gen_imp_GetLastError(), DVar7 != 3)) {
    if (DVar7 == 0x91) {
      uVar10 = F_004f9fa0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(wchar_t *)(gen_frame + 0x38)),&(*(wchar_t * PTR32 *)(gen_frame + 0x2c)),&(*(char *)(gen_frame + 0x37)));
      while ((uVar10 != 3 && (-1 < (int)uVar10))) {
        if (uVar10 != 1) {
          F_004f8eb0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x448)) ^ (uint)(uint)(gen_frame + 0x44c) GEN_EDX_ARG);
          return uVar10;
        }
        F_00c4a8e0(((wchar_t *)(gen_frame + 0x240)),0x104,&(*(wchar_t *)(gen_frame + 0x38)));
        F_00c4b8d3(((wchar_t *)(gen_frame + 0x240)),0x104,L"/");
        F_00c4b8d3(((wchar_t *)(gen_frame + 0x240)),0x104,(*(wchar_t * PTR32 *)(gen_frame + 0x2c)));
        if ((*(char *)(gen_frame + 0x37)) == '\0') {
          BVar6 = gen_imp_DeleteFileW(((wchar_t *)(gen_frame + 0x240)));
          if ((((BVar6 == 0) && (DVar7 = gen_imp_GetFileAttributesW(((wchar_t *)(gen_frame + 0x240))), (DVar7 & 1) != 0)) &&
              (uVar10 = F_004f8ce0(((wchar_t *)(gen_frame + 0x240)),0x80), uVar10 == 1)) &&
             (BVar6 = gen_imp_DeleteFileW(((wchar_t *)(gen_frame + 0x240))), BVar6 == 0)) {
            F_004f7f00(((wchar_t *)(gen_frame + 0x240)));
          }
        }
        else {
          ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1097d48));
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined2 *)(gen_frame + 0x24)) = 0;
          F_004fadb0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((wchar_t *)(gen_frame + 0x240)),0);
          F_004f9ed0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        }
        uVar10 = F_004f8db0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(wchar_t * PTR32 *)(gen_frame + 0x2c)),&(*(char *)(gen_frame + 0x37)));
      }
      F_004f8eb0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      BVar6 = gen_imp_RemoveDirectoryW(&(*(wchar_t *)(gen_frame + 0x38)));
      if (BVar6 != 0) {
        F_00c47745((*(uint *)(gen_frame + 0x448)) ^ (uint)(uint)(gen_frame + 0x44c) GEN_EDX_ARG);
        return 1;
      }
    }
    uVar10 = 0xfffffff6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x448)) ^ (uint)(uint)(gen_frame + 0x44c) GEN_EDX_ARG);
  return uVar10;
}

/* ref: FUN_004fb0a0 */
GEN_FRAME uint GEN_THISCALL F_004fb0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fb0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  F_004a0050(this GEN_EDX_FWD,"file manager");
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1097d50));
  *(undefined4 *)((int)this + 0xb8) = 0;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xbc))), (long)(0));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xc0))), (long)(0));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xc4))), (long)(0));
  pvVar1 = gen_imp_CreateSemaphoreA((GEN_LPANY)0x0,0,0x201,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 200) = pvVar1;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0xcc) = pvVar1;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xd0))), (long)(0));
  puVar2 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1097d48));
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 6) = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x2c) = puVar2;
  uVar3 = F_00406bb0(0x49000,0,0);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    local_8 = 0x1ff;
    puVar2 = (undefined4 *)(uVar3 + 8);
    do {
      puVar2[-2] = 1;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[9] = "System.File.Unknown";
      puVar2[10] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      F_00c48350(puVar2 + 0xe,0,0x208);
      puVar2 = puVar2 + 0x92;
      local_8 = local_8 - 1;
    } while (-1 < local_8);
  }
  *(uint *)((int)this + 0x30) = uVar3;
  puVar2 = (undefined4 *)((int)this + 0x34);
  iVar5 = 0xb;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  iVar7 = 0x1ff;
  iVar5 = *(int *)((int)this + 0x30);
  iVar6 = 0;
  do {
    iVar4 = iVar5;
    iVar7 = iVar7 - 1;
    iVar5 = iVar4 + 0x248;
    *(int *)(iVar4 + 0x38) = iVar6;
    *(int *)(iVar4 + 0x3c) = iVar5;
    iVar6 = iVar4;
  } while (iVar7 != 0);
  *(undefined4 *)(iVar4 + 0x284) = 0;
  *(int *)(iVar4 + 0x280) = iVar4;
  *(int *)((int)this + 0xb0) = iVar5;
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0xb4) = 0x200;
  return (uint)this;
}

/* ref: FUN_004fb230 */
GEN_NOFRAME uint F_004fb230(void)
{
  GEN_ENTER(0x4fb230u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  if (REFG(undefined4, 0x1375ae8) == 0) {
    pvVar1 = (undefined *)F_00406b90(0x5c,0,0);
    if (pvVar1 != (undefined *)0x0) {
      F_004f8500(pvVar1 GEN_EDX_ARG);
    }
    pvVar1 = (undefined *)F_00406b90(0xe0,0,0);
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x1375ae8) = 0;
    }
    else {
      REFG(undefined4, 0x1375ae8) = F_004fb0a0(pvVar1 GEN_EDX_ARG);
    }
    F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0) GEN_EDX_ARG,10,REFG(undefined4, 0x1375ae8));
  }
  return REFG(undefined4, 0x1375ae8);
}

/* ref: FUN_004fb290 */
GEN_FRAME byte GEN_THISCALL F_004fb290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fb290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0xd0);
  iVar2 = _InterlockedCompareExchange((volatile long *)(piVar1), (long)(1), (long)(0));
  if (iVar2 == 0) {
    F_00c48350(((int * PTR32 *)(gen_frame + 0x44)),0,0x208);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x30)) = "System.File.Unknown";
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_00c48350(((int * PTR32 *)(gen_frame + 0x44)),0,0x208);
    (*(undefined4 *)(gen_frame + 0x4)) = 0xc;
    ((int * PTR32 *)(gen_frame + 0x44))[0] = piVar1;
    F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),6,0);
  }
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  return iVar2 == 2;
}

/* ref: FUN_004fb380 */
GEN_FRAME byte GEN_THISCALL F_004fb380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4fb380u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  bool bVar2;
  uint * this_00;
  undefined4 uVar3;
  byte bVar4;
  uint * puVar5;
  
  uVar3 = (*(undefined4 *)&gen_args[3]);
  this_00 = (*(uint * PTR32 *)&gen_args[2]);
  bVar2 = false;
  if ((*(*(uint * PTR32 *)&gen_args[2]) & 0xc000000) == 0) {
    puVar5 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_FWD,&(*(uint * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    uVar1 = *puVar5;
    *(uint *)((*(int *)&gen_args[1]) + 0x20) = uVar1;
    *this_00 = uVar1;
    if ((uVar1 & 0xc000000) == 0) {
      return 0;
    }
    bVar2 = true;
  }
  bVar4 = F_004fa1a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)&gen_args[1]),uVar3,(*(undefined4 *)&gen_args[4]));
  if (bVar4 == 0) {
    if (bVar2) {
      F_004fad40(this_00 GEN_EDX_ARG);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_004fb400 */
GEN_FRAME unsigned int GEN_THISCALL F_004fb400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fb400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if ((*param_2 == 0xb) && ((char)param_2[0x3b] != '\0')) {
    if (param_2[0x3a] != 0) {
      F_00406b30(param_2[0x3a]);
      param_2[0x3a] = 0;
    }
    *(undefined1 *)(param_2 + 0x3b) = 0;
  }
  F_004fa350(this GEN_EDX_ARG,param_1,param_2,10,0);
  if (param_1 == 3) {
    gen_imp_SetEvent(*(HANDLE *)((int)this + 0xcc));
  }
  return;
}

/* ref: FUN_004fb470 */
GEN_FRAME byte GEN_THISCALL F_004fb470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fb470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x44)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x30)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x44)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x44)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = 9;
  F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),5,0);
  return 1;
}

/* ref: FUN_004fb540 */
GEN_FRAME byte GEN_THISCALL F_004fb540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4fb540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x134)) = param_2;
  (*(undefined4 *)(gen_frame + 0x130)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 10;
  (*(undefined4 *)(gen_frame + 0x138)) = param_4;
  (*(undefined4 *)(gen_frame + 0x13c)) = param_5;
  F_00c49908(((undefined1 *)(gen_frame + 0x40)),0xf0,param_3);
  bVar1 = F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),5,0);
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_004fb660 */
GEN_FRAME uint GEN_THISCALL F_004fb660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fb660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  *param_2 = 0;
  iVar1 = param_2[0xd];
  param_2[9] = *(undefined4 *)((int)this + 0x2c);
  F_0042e170(((undefined1 *)(gen_frame + 0x214)) GEN_EDX_FWD,param_1);
  F_0042a3a0(((wchar_t *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x214)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x214)) GEN_EDX_ARG);
  piVar2 = (int *)(iVar1 + 0x3c);
  if (0xf < *(uint *)(iVar1 + 0x50)) {
    piVar2 = (int *)*piVar2;
  }
  F_0042a2a0(((wchar_t *)(gen_frame + 0xc)) GEN_EDX_ARG,piVar2);
  uVar3 = F_00c4a8e0((wchar_t *)(param_2 + 0x10),0x104,((wchar_t *)(gen_frame + 0xc)));
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_004fb700 */
GEN_FRAME uint GEN_THISCALL F_004fb700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fb700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  undefined3 extraout_var = 0;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c48350(((undefined1 *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x50)),0,0x208);
  (*(int *)(gen_frame + 0x18)) = param_2[6];
  (*(int *)(gen_frame + 0x20)) = param_2[5];
  (*(int * PTR32 *)(gen_frame + 0x44)) = param_2;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x40))(param_2 GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x3c)) = (char *)uVar3;
  if ((*(byte *)(param_2 + 0x16) & 4) == 0) {
    if (*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xd4) + (param_2[1] & 0xffffU) * 4))) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = 0xb;
    }
  }
  else {
    puVar5 = &(*(undefined4 *)(gen_frame + 0x10));
    uVar3 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
    F_004fb660((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar3,puVar5);
    F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  }
  iVar1 = param_2[0xb];
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_1 & 0xc000000) == 0) {
    puVar4 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),iVar1);
    uVar3 = *puVar4;
    (*(uint *)(gen_frame + 0x30)) = uVar3;
    *param_1 = uVar3;
    if ((uVar3 & 0xc000000) == 0) goto LAB_004fb880;
    (*(char *)(gen_frame + 0xf)) = '\x01';
  }
  bVar2 = F_004fa1a0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),iVar1,0);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((bVar2 == 0) && ((*(char *)(gen_frame + 0xf)) != '\0')) {
    uVar3 = F_004fad40(param_1 GEN_EDX_ARG);
  }
LAB_004fb880: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_004fb8a0 */
GEN_FRAME uint GEN_THISCALL F_004fb8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4fb8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  uint uVar1;
  undefined * this_00;
  byte bVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *param_1 = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x50)),0x104,param_2);
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_5;
  (*(undefined4 *)(gen_frame + 0x20)) = param_6;
  (*(undefined4 *)(gen_frame + 0x24)) = param_7;
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x2c);
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_1 & 0xc000000) == 0) {
    puVar3 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_8);
    uVar1 = *puVar3;
    (*(uint *)(gen_frame + 0x30)) = uVar1;
    *param_1 = uVar1;
    if ((uVar1 & 0xc000000) == 0) goto LAB_004fba05;
    (*(char *)(gen_frame + 0xf)) = '\x01';
  }
  bVar2 = F_004fa1a0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),param_8,0);
  if ((bVar2 == 0) && ((*(char *)(gen_frame + 0xf)) != '\0')) {
    F_004fad40(param_1 GEN_EDX_ARG);
  }
LAB_004fba05: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_004fba20 */
GEN_FRAME uint GEN_THISCALL F_004fba20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4fba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  uint uVar1;
  undefined * this_00;
  byte bVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *param_1 = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x50)),0x104,param_2);
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(char * PTR32 *)(gen_frame + 0x3c)) = (char *)param_3;
  (*(undefined4 *)(gen_frame + 0x38)) = param_5;
  (*(undefined4 *)(gen_frame + 0x18)) = param_6;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_7;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_8;
  (*(undefined4 *)(gen_frame + 0x24)) = param_9;
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x2c);
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_1 & 0xc000000) == 0) {
    puVar3 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_10);
    uVar1 = *puVar3;
    (*(uint *)(gen_frame + 0x30)) = uVar1;
    *param_1 = uVar1;
    if ((uVar1 & 0xc000000) == 0) goto LAB_004fbb94;
    (*(char *)(gen_frame + 0xf)) = '\x01';
  }
  bVar2 = F_004fa1a0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),param_10,0);
  if ((bVar2 == 0) && ((*(char *)(gen_frame + 0xf)) != '\0')) {
    F_004fad40(param_1 GEN_EDX_ARG);
  }
LAB_004fbb94: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_004fbbb0 */
GEN_FRAME uint GEN_THISCALL F_004fbbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4fbbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  uint uVar1;
  byte bVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = param_2;
  *param_1 = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x50)),0x104,(*(wchar_t * PTR32 *)(gen_frame + 0x8)));
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_5;
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x2c);
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_1 & 0xc000000) == 0) {
    puVar3 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,&(*(wchar_t * PTR32 *)(gen_frame + 0x8)),param_6);
    uVar1 = *puVar3;
    (*(uint *)(gen_frame + 0x30)) = uVar1;
    *param_1 = uVar1;
    if ((uVar1 & 0xc000000) == 0) goto LAB_004fbd05;
    (*(char *)(gen_frame + 0xf)) = '\x01';
  }
  bVar2 = F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),param_6,0);
  if ((bVar2 == 0) && ((*(char *)(gen_frame + 0xf)) != '\0')) {
    F_004fad40(param_1 GEN_EDX_ARG);
  }
LAB_004fbd05: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_004fbd20 */
GEN_FRAME uint GEN_THISCALL F_004fbd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4fbd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  uint uVar1;
  byte bVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = param_2;
  *param_1 = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 3;
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x50)),0x104,(*(wchar_t * PTR32 *)(gen_frame + 0x8)));
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_5;
  (*(undefined4 *)(gen_frame + 0x20)) = param_6;
  (*(undefined4 *)(gen_frame + 0x24)) = param_7;
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x2c);
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_1 & 0xc000000) == 0) {
    puVar3 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,&(*(wchar_t * PTR32 *)(gen_frame + 0x8)),5);
    uVar1 = *puVar3;
    (*(uint *)(gen_frame + 0x30)) = uVar1;
    *param_1 = uVar1;
    if ((uVar1 & 0xc000000) == 0) goto LAB_004fbe83;
    (*(char *)(gen_frame + 0xf)) = '\x01';
  }
  bVar2 = F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),5,0);
  if ((bVar2 == 0) && ((*(char *)(gen_frame + 0xf)) != '\0')) {
    F_004fad40(param_1 GEN_EDX_ARG);
  }
LAB_004fbe83: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_004fbea0 */
GEN_FRAME uint GEN_THISCALL F_004fbea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4fbea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  uint uVar1;
  byte bVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = param_2;
  *param_1 = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x50)),0x104,(*(wchar_t * PTR32 *)(gen_frame + 0x8)));
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x2c);
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_1 & 0xc000000) == 0) {
    puVar3 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,&(*(wchar_t * PTR32 *)(gen_frame + 0x8)),5);
    uVar1 = *puVar3;
    (*(uint *)(gen_frame + 0x30)) = uVar1;
    *param_1 = uVar1;
    if ((uVar1 & 0xc000000) == 0) goto LAB_004fbfe8;
    (*(char *)(gen_frame + 0xf)) = '\x01';
  }
  bVar2 = F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),5,0);
  if ((bVar2 == 0) && ((*(char *)(gen_frame + 0xf)) != '\0')) {
    F_004fad40(param_1 GEN_EDX_ARG);
  }
LAB_004fbfe8: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_004fc000 */
GEN_FRAME uint GEN_THISCALL F_004fc000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fc000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  uint uVar1;
  byte bVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = param_2;
  *param_1 = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(((wchar_t *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 5;
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x50)),0x104,(*(wchar_t * PTR32 *)(gen_frame + 0x8)));
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x2c);
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*param_1 & 0xc000000) == 0) {
    puVar3 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,&(*(wchar_t * PTR32 *)(gen_frame + 0x8)),param_3);
    uVar1 = *puVar3;
    (*(uint *)(gen_frame + 0x30)) = uVar1;
    *param_1 = uVar1;
    if ((uVar1 & 0xc000000) == 0) goto LAB_004fc13a;
    (*(char *)(gen_frame + 0xf)) = '\x01';
  }
  bVar2 = F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),param_3,0);
  if ((bVar2 == 0) && ((*(char *)(gen_frame + 0xf)) != '\0')) {
    F_004fad40(param_1 GEN_EDX_ARG);
  }
LAB_004fc13a: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_004fc150 */
GEN_FRAME byte GEN_THISCALL F_004fc150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fc150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  int * piVar1;
  int iVar2;
  int * piVar3;
  bool bVar4;
  byte bVar5;
  
  bVar4 = false;
  piVar1 = (int *)((int)this + 0xbc);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x7c);
  do {
    if (piVar3 == (int *)0x0) {
LAB_004fc195: ;
      LOCK();
      bVar5 = (byte)*piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (!bVar4) {
        F_00c48350(((undefined1 *)(gen_frame + 0x44)),0,0x208);
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x30)) = "System.File.Unknown";
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        F_00c48350(((undefined1 *)(gen_frame + 0x44)),0,0x208);
        (*(undefined4 *)(gen_frame + 0x4)) = 6;
        bVar5 = F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),6,0);
      }
      return bVar5;
    }
    if (*piVar3 == 6) {
      bVar4 = true;
      goto LAB_004fc195;
    }
    piVar3 = (int *)piVar3[0xf];
  } while( true );
}

/* ref: FUN_004fc250 */
GEN_FRAME uint GEN_THISCALL F_004fc250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4fc250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_004fb8a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7,3);
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0xcc),0xffffffff);
  return param_1;
}

/* ref: FUN_004fc2a0 */
GEN_FRAME uint GEN_THISCALL F_004fc2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4fc2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  F_004fba20(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,3);
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0xcc),0xffffffff);
  return param_1;
}

/* ref: FUN_004fc2f0 */
GEN_FRAME uint GEN_THISCALL F_004fc2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fc2f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint * puVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  iVar6 = (*(uint *)&gen_args[2]);
  F_00c4a8e0((wchar_t *)((*(uint *)&gen_args[2]) + 0x40),0x104,((wchar_t *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 0xe))));
  *(undefined4 *)(iVar6 + 0x24) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
  puVar4 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,&(*(uint *)&gen_args[2]),5);
  (*(uint *)&gen_args[2]) = *puVar4;
  *(uint *)(iVar6 + 0x20) = (*(uint *)&gen_args[2]);
  if ((((*(uint *)&gen_args[2]) & 0xc000000) != 0) && (bVar3 = F_004fa1a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar6,5,0), bVar3 == 0)) {
    F_004fad40(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
  }
  (*(undefined4 * PTR32 *)&gen_args[1])[0xb] = (*(uint *)&gen_args[2]);
  (*(undefined4 * PTR32 *)&gen_args[1])[0xc] = 0;
  puVar5 = (undefined4 *)F_00406b90(0x240,0,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *(undefined2 *)(puVar5 + 0xe) = 0;
  }
  puVar7 = (*(undefined4 * PTR32 *)&gen_args[1]);
  puVar8 = puVar5;
  for (iVar6 = 0x90; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar4 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0)));
  do {
    uVar1 = _InterlockedExchange((volatile long *)(puVar4), (long)(1));
  } while (uVar1 != 0);
  iVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8)));
  if (iVar6 == 0) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = puVar5;
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x30);
    while (iVar2 != 0) {
      iVar6 = *(int *)(iVar6 + 0x30);
      iVar2 = *(int *)(iVar6 + 0x30);
    }
    *(undefined4 * PTR32 *)(iVar6 + 0x30) = puVar5;
  }
  uVar1 = _InterlockedExchange((volatile long *)(puVar4), (long)(0));
  return uVar1;
}

/* ref: FUN_004fc400 */
GEN_FRAME uint GEN_THISCALL F_004fc400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fc400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  int iVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  iVar1 = param_1[6];
  (*(undefined4 *)(gen_frame + 0x0)) = 1;
  if (iVar1 == 0) {
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x2c)) = (char *)param_1[8];
    (*(undefined4 *)(gen_frame + 0x28)) = param_1[9];
    (*(undefined4 *)(gen_frame + 0x30)) = param_1[10];
  }
  else {
    (*(int *)(gen_frame + 0x4)) = iVar1;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x8)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x10)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x14)) = param_1[3];
  uVar2 = F_004fc2f0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004fc510 */
GEN_FRAME uint GEN_THISCALL F_004fc510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fc510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  undefined4 uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  uVar1 = *param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1[6];
  (*(undefined4 *)(gen_frame + 0xc)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x0)) = 2;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  uVar2 = F_004fc2f0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004fc5f0 */
GEN_FRAME uint GEN_THISCALL F_004fc5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fc5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x4)) = param_1[6];
  uVar1 = param_1[2];
  (*(undefined4 *)(gen_frame + 0x8)) = *param_1;
  uVar2 = param_1[3];
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  uVar3 = F_004fc2f0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_004fc6d0 */
GEN_FRAME uint GEN_THISCALL F_004fc6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fc6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  undefined4 uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x40)),0,0x208);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  (*(undefined4 *)(gen_frame + 0x0)) = 7;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  uVar2 = F_004fc2f0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004fc7b0 */
GEN_FRAME uint GEN_THISCALL F_004fc7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fc7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint * puVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x50)),0,0x208);
  ((uint *)(gen_frame + 0xc))[2] = 0;
  ((uint *)(gen_frame + 0xc))[3] = 0;
  ((uint *)(gen_frame + 0xc))[4] = 0;
  ((uint *)(gen_frame + 0xc))[5] = 0;
  ((uint *)(gen_frame + 0xc))[6] = 0;
  ((uint *)(gen_frame + 0xc))[7] = 0;
  ((uint *)(gen_frame + 0xc))[8] = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x50)),0,0x208);
  uVar2 = param_2[1];
  (*(undefined4 *)(gen_frame + 0x50)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x58)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x54)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x5c)) = param_2[3];
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x2c);
  ((uint *)(gen_frame + 0xc))[1] = 8;
  puVar6 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),param_3);
  uVar3 = *puVar6;
  ((uint *)(gen_frame + 0xc))[9] = uVar3;
  ((uint *)(gen_frame + 0xc))[0] = uVar3;
  if (((uVar3 & 0xc000000) != 0) && (bVar5 = F_004fa1a0(this GEN_EDX_ARG,((uint *)(gen_frame + 0xc)) + 1,param_3,0), bVar5 == 0)
     ) {
    F_004fad40(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  param_1[0xb] = ((uint *)(gen_frame + 0xc))[0];
  param_1[0xc] = 0;
  puVar7 = (undefined4 *)F_00406b90(0x240,0,0);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    *(undefined1 *)(puVar7 + 7) = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    *(undefined2 *)(puVar7 + 0xe) = 0;
  }
  puVar9 = param_1;
  puVar10 = puVar7;
  for (iVar8 = 0x90; iVar8 != 0; iVar8 = iVar8 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  piVar1 = (int *)((int)this + 0xc0);
  do {
    iVar8 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar8 != 0);
  iVar8 = *(int *)((int)this + 0xb8);
  if (iVar8 == 0) {
    *(undefined4 * PTR32 *)((int)this + 0xb8) = puVar7;
  }
  else {
    iVar4 = *(int *)(iVar8 + 0x30);
    while (iVar4 != 0) {
      iVar8 = *(int *)(iVar8 + 0x30);
      iVar4 = *(int *)(iVar8 + 0x30);
    }
    *(undefined4 * PTR32 *)(iVar8 + 0x30) = puVar7;
  }
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return (uint)puVar7;
}

/* ref: FUN_004fc990 */
GEN_FRAME uint GEN_STDCALL F_004fc990(unsigned int gen_a0)
{
  GEN_ENTER(0x4fc990u, gen_a0, 0u, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar1 = F_00c4dba1(param_1,(undefined *)((byte *)(gen_frame + 0x0)));
  if (iVar1 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 0;
  }
  (*(undefined1 *)((char *)&uVar2 + 0)) = ((byte *)(gen_frame + 0x0))[0x18];
  (*(undefined1 *)((char *)&uVar2 + 1)) = ((byte *)(gen_frame + 0x0))[0x19];
  (*(undefined1 *)((char *)&uVar2 + 2)) = ((byte *)(gen_frame + 0x0))[0x1a];
  (*(undefined1 *)((char *)&uVar2 + 3)) = ((byte *)(gen_frame + 0x0))[0x1b];
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004fc9e0 */
GEN_FRAME byte GEN_STDCALL F_004fc9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4fc9e0u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_GetFileAttributesW(param_1);
  if (DVar1 == 0xffffffff) {
    return 0;
  }
  return ~((byte)(DVar1 >> 4) & 0xf) & 1;
}

/* ref: FUN_004fca10 */
GEN_FRAME uint GEN_THISCALL F_004fca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fca10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2f0];
  int iVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint * this_01;
  byte bVar3;
  uint * puVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x2e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2ec);
  iVar1 = *(int *)(param_1 + 0x130);
  uVar2 = *(undefined4 *)(param_1 + 0x134);
  this_00 = *(undefined * PTR32 *)((int)this + iVar1 * 4 + 0x18);
  (*(undefined4 *)(gen_frame + 0x260)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x254)) = REFG(void * PTR32, 0x1375ae8);
  bVar3 = F_00b48f50(this_00 GEN_EDX_FWD,uVar2);
  if (bVar3 == 0) {
    F_00b49690(this_00 GEN_EDX_ARG,iVar1,(*(undefined4 *)(gen_frame + 0x260)));
  }
  F_00b4a040(this_00 GEN_EDX_ARG,param_1 + 0x40,&(*(int *)(gen_frame + 0x258)),&(*(int *)(gen_frame + 0x25c)));
  F_004f8a90(*(undefined * PTR32 *)((int)this_00 + (*(int *)(gen_frame + 0x25c)) * 4 + 0xa70) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x268)),0x80,0,(*(int *)(gen_frame + 0x258)) << 7,0);
  F_00c48350(((undefined1 *)(gen_frame + 0x4c)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x38)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x4c)),0,0x208);
  this_01 = *(uint * PTR32 *)(param_1 + 0x138);
  (*(int *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x284)) + 0x80;
  uVar2 = *(undefined4 *)((int)this_00 + (*(int *)(gen_frame + 0x25c)) * 4 + 0xa70);
  uVar5 = *this_01;
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x258)) << 7;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
  (*(char *)(gen_frame + 0x267)) = '\0';
  if ((uVar5 & 0xc000000) == 0) {
    puVar4 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x260)),5);
    uVar5 = *puVar4;
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
    *this_01 = uVar5;
    if ((uVar5 & 0xc000000) == 0) goto LAB_004fcbbf;
    (*(char *)(gen_frame + 0x267)) = '\x01';
  }
  bVar3 = F_004fa1a0((*(undefined * PTR32 *)(gen_frame + 0x254)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),5,0);
  uVar5 = CONCAT31(extraout_var,bVar3);
  if ((bVar3 == 0) && ((*(char *)(gen_frame + 0x267)) != '\0')) {
    uVar5 = F_004fad40(this_01 GEN_EDX_ARG);
  }
LAB_004fcbbf: ;
  F_00c47745((*(uint *)(gen_frame + 0x2e8)) ^ (uint)(uint)(gen_frame + 0x2ec) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_004fcbe0 */
GEN_FRAME byte GEN_THISCALL F_004fcbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fcbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  char cVar2;
  undefined * pvVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 * puVar7;
  code * pcVar8;
  int * piVar9;
  dword dVar10;
  undefined4 * puVar11;
  int * this_00;
  uint uVar12;
  uint uVar13;
  dword liDistanceToMoveLow;
  bool bVar14;
  
  iVar6 = ((*(int *)(param_1 + 0x20) << 6) >> 6) * 0x20 +
          *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (*(int *)(param_1 + 0x20) >> 0x1c) * 4)));
  this_00 = *(int * PTR32 *)(param_1 + 0x34);
  piVar9 = (int *)(REFG(int, 0x1375ae4) + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  (*(int *)(gen_frame + 0x28)) = iVar6;
  (*(int * PTR32 *)(gen_frame + 0x24)) = this_00;
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar9;
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar9), (long)(1));
  } while (iVar1 != 0);
  cVar2 = *(char *)(iVar6 + 8);
  _InterlockedExchange((volatile long *)(piVar9), (long)(0));
  if (cVar2 == '\0') {
    uVar12 = (uint)this_00[1] >> 0x10;
    uVar13 = this_00[1] & 0xffff;
    pvVar3 = *(undefined * PTR32 *)((int)this + uVar13 * 4 + 0x18);
    (*(uint *)(gen_frame + 0x30)) = uVar12;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = REFG(void * PTR32, 0x1375ae8);
    *(undefined * PTR32 *)(param_1 + 0x44) = pvVar3;
    bVar5 = F_00b48f50(pvVar3 GEN_EDX_FWD,uVar12);
    if (bVar5 == 0) {
      F_00b49690(pvVar3 GEN_EDX_ARG,uVar13,(*(uint *)(gen_frame + 0x30)));
    }
    piVar9 = this_00 + 0xf;
    if (0xf < (uint)this_00[0x14]) {
      piVar9 = (int *)*piVar9;
    }
    bVar5 = F_00b4a040(pvVar3 GEN_EDX_ARG,piVar9,&(*(uint *)(gen_frame + 0x2c)),&(*(int *)(gen_frame + 0x38)));
    if (bVar5 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (*(uint *)(gen_frame + 0x2c)) >> 0x19;
      *(int *)(param_1 + 0xd8) = (*(int *)(gen_frame + 0x38));
      *(undefined * PTR32 *)(param_1 + 0xdc) = (*(undefined * PTR32 *)(gen_frame + 0x34));
      uVar13 = (*(uint *)(gen_frame + 0x2c)) * 0x80;
      bVar5 = F_004ff600();
      if (bVar5 == 0) {
        F_004f8a90(*(undefined * PTR32 *)((int)pvVar3 + (*(int *)(gen_frame + 0x38)) * 4 + 0xa70) GEN_EDX_ARG,param_1 + 0x48,0x80,0,uVar13,
                     uVar12);
        liDistanceToMoveLow = uVar13 + 0x80;
        (*(dword *)(gen_frame + 0x18)) = uVar12 + (0xffffff7f < uVar13);
        (*(dword *)(gen_frame + 0x14)) = liDistanceToMoveLow;
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0xe0) = 0;
        *(undefined4 *)(param_1 + 0xe4) = 0;
        if (*(int *)(param_1 + 0x48) == 0x80) {
          *(undefined1 *)(param_1 + 0xec) = 0;
          *(undefined4 * PTR32 *)(param_1 + 0xe8) = (undefined4 *)(param_1 + 0x48);
        }
        else {
          *(undefined1 *)(param_1 + 0xec) = 1;
          puVar7 = (undefined4 *)F_00406bb0(*(int *)(param_1 + 0x48),0,0);
          dVar10 = (*(dword *)(gen_frame + 0x14));
          *(undefined4 * PTR32 *)(param_1 + 0xe8) = puVar7;
          puVar11 = (undefined4 *)(param_1 + 0x48);
          for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 - 1) {
            *puVar7 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar12 = *(int *)(param_1 + 0x48) - 0x80;
          F_004f8a90(*(undefined * PTR32 *)((int)pvVar3 + (*(int *)(gen_frame + 0x38)) * 4 + 0xa70) GEN_EDX_ARG,*(int *)(param_1 + 0xe8) + 0x80
                       ,uVar12,0,(*(dword *)(gen_frame + 0x14)),(*(dword *)(gen_frame + 0x18)));
          liDistanceToMoveLow = dVar10 + uVar12;
          (*(dword *)(gen_frame + 0x18)) = (*(dword *)(gen_frame + 0x18)) + CARRY4(dVar10,uVar12);
          (*(dword *)(gen_frame + 0x14)) = liDistanceToMoveLow;
        }
      }
      else {
        (*(uint *)(gen_frame + 0x30)) = (int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xccU;
        F_004f8a90(*(undefined * PTR32 *)((int)pvVar3 + (*(int *)(gen_frame + 0x38)) * 4 + 0xa70) GEN_EDX_ARG,(int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xccU,0x400,0,
                     uVar13,uVar12);
        F_00c46aa0(param_1 + 0x48,(*(uint *)(gen_frame + 0x30)),0x80);
        liDistanceToMoveLow = uVar13 + 0x80;
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x50);
        uVar4 = *(uint *)(param_1 + 0x48);
        dVar10 = uVar12 + (0xffffff7f < uVar13);
        (*(dword *)(gen_frame + 0x18)) = dVar10;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        *(undefined4 *)(param_1 + 0xe4) = 0;
        if (uVar4 == 0x80) {
          *(undefined1 *)(param_1 + 0xec) = 0;
          *(uint * PTR32 *)(param_1 + 0xe8) = (uint *)(param_1 + 0x48);
        }
        else {
          *(undefined1 *)(param_1 + 0xec) = 1;
          if (uVar4 < 0x401) {
            uVar12 = F_00406bb0(uVar4,0,0);
            *(uint *)(param_1 + 0xe8) = uVar12;
            F_00c46aa0(uVar12,param_1 + 0x48,0x80);
            (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x48);
            (*(int *)(gen_frame + 0x10)) = 0;
            F_00c46aa0(*(undefined4 *)(param_1 + 0xe8),(*(uint *)(gen_frame + 0x30)),*(uint *)(param_1 + 0x48));
            bVar14 = CARRY4(liDistanceToMoveLow,(*(uint *)(gen_frame + 0xc)) - 0x80);
            liDistanceToMoveLow = liDistanceToMoveLow + ((*(uint *)(gen_frame + 0xc)) - 0x80);
            (*(dword *)(gen_frame + 0x18)) = dVar10 + (*(int *)(gen_frame + 0x10)) - 1 + (uint)(0x7f < (*(uint *)(gen_frame + 0xc))) + (uint)bVar14;
          }
          else {
            uVar12 = F_00406bb0(uVar4,0,0);
            *(uint *)(param_1 + 0xe8) = uVar12;
            F_00c46aa0(uVar12,param_1 + 0x48,0x80);
            uVar12 = *(int *)(param_1 + 0x48) - 0x80;
            (*(uint *)(gen_frame + 0xc)) = uVar12;
            (*(int *)(gen_frame + 0x10)) = 0;
            F_004f8a90(*(undefined * PTR32 *)((int)pvVar3 + (*(int *)(gen_frame + 0x38)) * 4 + 0xa70) GEN_EDX_ARG,
                         *(int *)(param_1 + 0xe8) + 0x80,uVar12,0,liDistanceToMoveLow,dVar10);
            bVar14 = CARRY4(liDistanceToMoveLow,(*(uint *)(gen_frame + 0xc)));
            liDistanceToMoveLow = liDistanceToMoveLow + (*(uint *)(gen_frame + 0xc));
            (*(dword *)(gen_frame + 0x18)) = dVar10 + (*(int *)(gen_frame + 0x10)) + (uint)bVar14;
          }
        }
      }
      *(uint *)(param_1 + 0xd0) = (*(uint *)(gen_frame + 0x2c)) * 0x80 + *(uint *)(param_1 + 0x48);
      *(uint *)(param_1 + 0xd4) =
           ((*(uint *)(gen_frame + 0x2c)) >> 0x19) + (uint)CARRY4((*(uint *)(gen_frame + 0x2c)) * 0x80,*(uint *)(param_1 + 0x48));
      do {
        iVar6 = _InterlockedExchange((volatile long *)((*(int * PTR32 *)(gen_frame + 0x20))), (long)(1));
      } while (iVar6 != 0);
      cVar2 = *(char *)((*(int *)(gen_frame + 0x28)) + 8);
      _InterlockedExchange((volatile long *)((*(int * PTR32 *)(gen_frame + 0x20))), (long)(0));
      if (cVar2 == '\0') {
        gen_imp_SetFilePointerEx(*((HANDLE *)GEN_TOP((*(int *)((int)pvVar3 + (*(int *)(gen_frame + 0x38)) * 4 + 0xa70) + 0x10))),
                         liDistanceToMoveLow,(*(dword *)(gen_frame + 0x18)),&(*(LARGE_INTEGER *)(gen_frame + 0x4)),0);
        this_00 = (*(int * PTR32 *)(gen_frame + 0x24));
        uVar12 = F_00514260((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,param_1,0);
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x34));
        if (uVar12 == 0x20) {
          if ((char)param_3 == '\0') {
            F_004fa350((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,param_2,0,*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xc4) + 7,0);
            piVar9 = (int *)((int)pvVar3 + 0xc0);
            *piVar9 = *piVar9 + 1;
            bVar5 = F_004fe720(this_00 GEN_EDX_ARG,param_1);
            if (bVar5 != 0) {
              uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this_00[0xe] + 8))((int *)this_00[0xe] GEN_EDX_ARG);
              piVar9 = (int *)((int)pvVar3 + 200);
              *piVar9 = *piVar9 + uVar12;
            }
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)this_00[0x21]);
            LOCK();
            this_00[0x23] = 5;
            UNLOCK();
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)this_00[0x21]);
            return 0;
          }
          F_004f8140((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xc4));
          uVar12 = 1;
          bVar5 = F_004fe720(this_00 GEN_EDX_ARG,param_1);
          if (bVar5 != 0) {
            *(undefined4 *)(param_1 + 0xe0) = 0;
            *(undefined4 *)(param_1 + 0xe4) = 0;
            piVar9 = this_00 + 0x24;
            iVar6 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
            if (iVar6 != 2) {
              iVar6 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
              if (iVar6 == 1) {
                pcVar8 = *(gen_code32 *)(*this_00 + 0x88);
              }
              else {
                pcVar8 = *(gen_code32 *)(*this_00 + 0x80);
              }
              uVar12 = (*pcVar8)(this_00,param_1,0);
            }
          }
        }
      }
      else {
        uVar12 = 2;
        this_00 = (*(int * PTR32 *)(gen_frame + 0x24));
      }
    }
  }
  else {
    uVar12 = 2;
  }
  F_00501af0(this_00 GEN_EDX_ARG,param_1,uVar12,0);
  return 1;
}

/* ref: FUN_004fd040 */
GEN_FRAME unsigned int GEN_THISCALL F_004fd040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fd040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  code * pcVar10;
  int iVar11;
  int * piVar12;
  int local_18;
  int * local_10;
  int * local_8;
  
  iVar6 = REFG(int, 0x1375ae8);
  piVar12 = (int *)((int)this + 0xcd0);
  local_8 = (int *)(REFG(int, 0x1375ae8) + 0x88);
  local_18 = 0;
  do {
    if ((uint)(piVar12[1] + *(int *)((int)this + 200)) < 0x400001) {
      if ((piVar12[-0x201] != 0) && (bVar7 = F_00b1aed0((undefined *)piVar12[2] GEN_EDX_FWD), bVar7 != 0))
      goto LAB_004fd0a8;
    }
    else {
      F_00b1af80((undefined *)piVar12[2] GEN_EDX_ARG);
LAB_004fd0a8: ;
      iVar11 = 0;
      if (0 < *piVar12) {
        local_10 = piVar12 - 0x200;
        do {
          F_00406b30(*local_10);
          local_10 = local_10 + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *piVar12);
      }
      *piVar12 = 0;
      piVar12[1] = 0;
      *(int *)((int)this + 0xc4) = local_18;
      uVar8 = local_18 + 1U & 0x80000001;
      piVar12[-0x201] = 0;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      *(undefined4 *)(uVar8 * 0x810 + 0x4cc + (int)this) = 1;
      while( true ) {
        do {
          piVar1 = (int *)(iVar6 + 0xbc);
          iVar11 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
        } while (iVar11 != 0);
        piVar3 = (int *)*local_8;
        _InterlockedExchange((volatile long *)(piVar1), (long)(0));
        if (piVar3 == (int *)0x0) break;
        piVar1 = (int *)piVar3[0xd];
        uVar8 = 1;
        if (((*piVar3 == 0xb) && (1 < (uint)piVar3[0x13])) &&
           (uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1 GEN_EDX_ARG), uVar9 == 1)) {
          piVar3[0x38] = 0;
          piVar3[0x39] = 0;
          piVar2 = piVar1 + 0x24;
          iVar11 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
          if (iVar11 != 2) {
            iVar11 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
            if (iVar11 == 1) {
              pcVar10 = *(gen_code32 *)(*piVar1 + 0x88);
            }
            else {
              pcVar10 = *(gen_code32 *)(*piVar1 + 0x80);
            }
            uVar8 = (*pcVar10)(piVar1,piVar3,0);
          }
          uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar1[0xe] + 8))((int *)piVar1[0xe] GEN_EDX_ARG);
          *(int *)((int)this + 200) = *(int *)((int)this + 200) - uVar9;
        }
        F_00501af0(piVar1 GEN_EDX_ARG,piVar3,uVar8,1);
        do {
          iVar11 = _InterlockedExchange((volatile long *)(((int *)(iVar6 + 0xbc))), (long)(1));
        } while (iVar11 != 0);
        iVar11 = *local_8;
        iVar4 = *(int *)(iVar11 + 0x38);
        iVar5 = *(int *)(iVar11 + 0x3c);
        if (iVar4 == 0) {
          *local_8 = iVar5;
        }
        else {
          *(int *)(iVar4 + 0x3c) = iVar5;
        }
        if (iVar5 == 0) {
          local_8[1] = iVar4;
        }
        else {
          *(int *)(iVar5 + 0x38) = iVar4;
        }
        local_8[2] = local_8[2] - 1;
        iVar4 = *(int *)(iVar6 + 0xa4);
        if (iVar4 == 0) {
          *(int *)(iVar6 + 0xa0) = iVar11;
        }
        else {
          *(int *)(iVar4 + 0x3c) = iVar11;
        }
        *(int *)(iVar11 + 0x38) = iVar4;
        *(undefined4 *)(iVar11 + 0x3c) = 0;
        *(int *)(iVar6 + 0xa8) = *(int *)(iVar6 + 0xa8) + 1;
        *(int *)(iVar6 + 0xa4) = iVar11;
        _InterlockedExchange((volatile long *)(((undefined4 *)(iVar6 + 0xbc))), (long)(0));
      }
    }
    local_8 = local_8 + 3;
    local_18 = local_18 + 1;
    piVar12 = piVar12 + 0x204;
    if (1 < local_18) {
      while( true ) {
        do {
          iVar11 = _InterlockedExchange((volatile long *)(((int *)(iVar6 + 0xbc))), (long)(1));
        } while (iVar11 != 0);
        piVar12 = *(int * PTR32 *)(iVar6 + 0xa0);
        _InterlockedExchange((volatile long *)(((undefined4 *)(iVar6 + 0xbc))), (long)(0));
        if (piVar12 == (int *)0x0) break;
        F_00501af0((undefined *)piVar12[0xd] GEN_EDX_ARG,piVar12,*(undefined4 *)(piVar12[0xd] + 0x34),2);
        if ((*piVar12 == 0xb) && ((char)piVar12[0x3b] != '\0')) {
          if (piVar12[0x3a] != 0) {
            F_00406b30(piVar12[0x3a]);
            piVar12[0x3a] = 0;
          }
          *(undefined1 *)(piVar12 + 0x3b) = 0;
        }
        do {
          iVar11 = _InterlockedExchange((volatile long *)(((int *)(iVar6 + 0xbc))), (long)(1));
        } while (iVar11 != 0);
        iVar11 = piVar12[0xe];
        iVar4 = piVar12[0xf];
        if (iVar11 == 0) {
          *(int *)(iVar6 + 0xa0) = iVar4;
        }
        else {
          *(int *)(iVar11 + 0x3c) = iVar4;
        }
        if (iVar4 == 0) {
          *(int *)(iVar6 + 0xa4) = iVar11;
        }
        else {
          *(int *)(iVar4 + 0x38) = iVar11;
        }
        iVar11 = *(int *)(iVar6 + 0xb0);
        *(int *)(iVar6 + 0xa8) = *(int *)(iVar6 + 0xa8) - 1;
        if (iVar11 == 0) {
          *(int * PTR32 *)(iVar6 + 0xac) = piVar12;
        }
        else {
          *(int * PTR32 *)(iVar11 + 0x3c) = piVar12;
        }
        piVar12[0xe] = iVar11;
        piVar12[0xf] = 0;
        *(int *)(iVar6 + 0xb4) = *(int *)(iVar6 + 0xb4) + 1;
        *(int * PTR32 *)(iVar6 + 0xb0) = piVar12;
        _InterlockedExchange((volatile long *)(((undefined4 *)(iVar6 + 0xbc))), (long)(0));
        *(int *)((int)this + 0xc0) = *(int *)((int)this + 0xc0) - 1;
      }
      return 0;
    }
  } while( true );
}

/* ref: FUN_004fd360 */
GEN_FRAME uint GEN_THISCALL F_004fd360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fd360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = 0xa0d;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)this) >> 0x10),0xa0d)));
  F_004faaf0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),2);
  return (uint)this;
}

/* ref: FUN_004fd390 */
GEN_FRAME uint GEN_THISCALL F_004fd390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fd390u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_004faaf0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),1);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004fd3b0 */
GEN_FRAME uint GEN_THISCALL F_004fd3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fd3b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_004faaf0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),1);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004fd3d0 */
GEN_FRAME uint GEN_THISCALL F_004fd3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fd3d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_004faaf0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),2);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004fd3f0 */
GEN_FRAME uint GEN_THISCALL F_004fd3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fd3f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_004faaf0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),2);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004fd410 */
GEN_FRAME uint GEN_THISCALL F_004fd410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fd410u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_004faaf0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),4);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004fd430 */
GEN_FRAME uint GEN_THISCALL F_004fd430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fd430u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  F_004faaf0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),8);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004fd450 */
GEN_FRAME uint GEN_THISCALL F_004fd450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fd450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar2 - (int)(param_1 + 1) != 0) {
    F_004faaf0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  }
  return (uint)this;
}

/* ref: FUN_004fd480 */
GEN_FRAME uint GEN_THISCALL F_004fd480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fd480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short sVar1;
  short * psVar2;
  int iVar3;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  iVar3 = (int)psVar2 - (int)(param_1 + 1) >> 1;
  if (iVar3 != 0) {
    F_004faaf0(this GEN_EDX_FWD,param_1,iVar3 * 2);
  }
  return (uint)this;
}

/* ref: FUN_004fd4c0 */
GEN_FRAME uint F_004fd4c0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x4fd4c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  iVar1 = F_00c475c9(((char *)(gen_frame + 0x8)),0x200,param_2,((undefined *)&gen_args[2]));
  uVar2 = F_004faaf0(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),iVar1);
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004fd520 */
GEN_NOFRAME uint GEN_THISCALL F_004fd520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fd520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int * piVar6;
  
  iVar2 = *(int *)((int)this + 0x2c);
  iVar3 = *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (iVar2 >> 0x1c) * 4)));
  piVar6 = (int *)(REFG(int, 0x1375ae4) + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar6), (long)(1));
  } while (iVar1 != 0);
  uVar4 = *((undefined4 *)GEN_TOP((((iVar2 << 6) >> 6) * 0x20 + iVar3 + 0xc)));
  _InterlockedExchange((volatile long *)(piVar6), (long)(0));
  if (*(char *)((int)this + 0x1c) != '\0') {
    F_00406ad0(uVar4);
  }
  uVar5 = F_004fad40((undefined *)((int)this + 0x2c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_004fd570 */
GEN_FRAME uint GEN_THISCALL F_004fd570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4fd570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  F_004fb8a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_004fd5a0 */
GEN_FRAME uint GEN_THISCALL F_004fd5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4fd5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  F_004fba20(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
              );
  return param_1;
}

/* ref: FUN_004fd5e0 */
GEN_FRAME uint GEN_THISCALL F_004fd5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4fd5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_004fbbb0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_004fd610 */
GEN_FRAME uint GEN_THISCALL F_004fd610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4fd610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  F_004fbd20(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_004fd640 */
GEN_FRAME uint GEN_THISCALL F_004fd640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4fd640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_004fb8a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7,3);
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0xcc),0xffffffff);
  return param_1;
}

/* ref: FUN_004fd690 */
GEN_FRAME uint GEN_THISCALL F_004fd690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4fd690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  F_004fba20(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,3);
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0xcc),0xffffffff);
  return param_1;
}

/* ref: FUN_004fd6e0 */
GEN_FRAME byte GEN_THISCALL F_004fd6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fd6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  int iVar2;
  int * piVar3;
  
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 9: ;
    F_00b49690(*(undefined * PTR32 *)((int)this + param_1[0x10] * 4 + 0x18) GEN_EDX_FWD,param_1[0x10],param_1[0x11]);
    return 1;
  case 10: ;
    F_004fca10(this GEN_EDX_ARG,param_1);
    return 1;
  case 0xb: ;
    bVar1 = F_004fcbe0(this GEN_EDX_ARG,param_1,param_2,param_3);
    return bVar1;
  case 0xc: ;
    piVar3 = (int *)((int)this + 0xcd8);
    iVar2 = 2;
    do {
      if (*piVar3 != 0) {
        F_00a1ac10(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_ARG,*piVar3);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 0x204;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
    _InterlockedExchange((volatile long *)(((undefined4 *)param_1[0x10])), (long)(2));
  }
  return 1;
}

/* ref: FUN_004fd790 */
GEN_FRAME byte GEN_THISCALL F_004fd790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fd790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  ulonglong uVar6;
  
  this_00 = ((undefined *)GEN_TOP((((*(int *)((int)this + 0x2c) << 6) >> 6) * 0x20 +
                    *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (*(int *)((int)this + 0x2c) >> 0x1c) * 4))))));
  piVar4 = (int *)(REFG(int, 0x1375ae4) + 4);
  do {
    iVar5 = _InterlockedExchange((volatile long *)(piVar4), (long)(1));
  } while (iVar5 != 0);
  iVar5 = *(int *)((int)this_00 + 4);
  if ((iVar5 == 1) && (*(char *)((int)this_00 + 8) != '\0')) {
    iVar5 = 2;
    F_004f8040(this_00 GEN_EDX_FWD,2);
    *(undefined4 *)((int)this_00 + 0xc) = 0;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    *(undefined4 *)((int)this_00 + 0x14) = 0;
  }
  _InterlockedExchange((volatile long *)(piVar4), (long)(0));
  if (iVar5 == 0) {
    return 0;
  }
  gen_piece_set(&(*(int *)(gen_frame + 0x4)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)piVar4) >> 8)));
  if (iVar5 == -1) {
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  }
  else {
    (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
    if (iVar5 == 1) {
      (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),1);
      goto LAB_004fd827;
    }
  }
  (*(int *)(gen_frame + 0x4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3) << 8;
LAB_004fd827: ;
  iVar5 = *(int *)((int)this + 0x2c);
  iVar2 = *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (iVar5 >> 0x1c) * 4)));
  piVar4 = (int *)(REFG(int, 0x1375ae4) + 4);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar4), (long)(1));
  } while (iVar1 != 0);
  uVar3 = *((undefined4 *)GEN_TOP((((iVar5 << 6) >> 6) * 0x20 + iVar2 + 0xc)));
  _InterlockedExchange((volatile long *)(piVar4), (long)(0));
  if (*(int *)((int)this + 0x34) != 0) {
    uVar6 = F_004f9db0((undefined *)((int)this + 0x2c) GEN_EDX_ARG);
    ((code *)*(gen_code32 *)((int)this + 0x34))
              (*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14),(int)this + 0x38,
               uVar3,(int)uVar6,(int)(uVar6 >> 0x20),(*(int *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x8)));
  }
  F_004fd520(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_004fd8a0 */
GEN_FRAME byte GEN_THISCALL F_004fd8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fd8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  undefined * this_00;
  byte bVar4;
  
  do {
    iVar1 = _InterlockedExchange((volatile long *)(((int *)((int)this + 0xc0))), (long)(1));
  } while (iVar1 != 0);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0xb8);
  this_00 = (undefined *)0x0;
  while (pvVar3 = this_00, this_00 = pvVar2, this_00 != (undefined *)0x0) {
    pvVar2 = *(undefined * PTR32 *)((int)this_00 + 0x30);
    bVar4 = F_004fd790(this_00 GEN_EDX_FWD);
    if (bVar4 != 0) {
      if (pvVar3 == (undefined *)0x0) {
        *(undefined * PTR32 *)((int)this + 0xb8) = pvVar2;
        F_00406ad0(this_00);
        this_00 = pvVar3;
      }
      else {
        *(undefined * PTR32 *)((int)pvVar3 + 0x30) = pvVar2;
        F_00406ad0(this_00);
        this_00 = pvVar3;
      }
    }
  }
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xc0))), (long)(0));
  bVar4 = F_004fc150(this GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_004fd930 */
GEN_FRAME byte GEN_THISCALL F_004fd930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fd930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (8 < *param_1) {
    bVar1 = F_004fd6e0(this GEN_EDX_FWD,param_1,param_2,param_3);
    return bVar1;
  }
  bVar1 = F_004fa4b0(param_1);
  return bVar1;
}

/* ref: FUN_004fd960 */
GEN_FRAME uint GEN_THISCALL F_004fd960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fd960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  uint uVar8;
  int * piVar9;
  int iVar10;
  
  F_004fd8a0(this GEN_EDX_FWD);
  piVar9 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar9 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
    F_004cf020(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG);
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x28);
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
    }
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  do {
    iVar1 = _InterlockedExchange((volatile long *)(((int *)((int)this + 0xc0))), (long)(1));
  } while (iVar1 != 0);
  iVar1 = *(int *)((int)this + 0xb8);
  while (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x30);
    iVar5 = *(int *)(iVar1 + 0x2c);
    iVar10 = *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (iVar5 >> 0x1c) * 4)));
    piVar9 = (int *)(REFG(int, 0x1375ae4) + 4);
    do {
      iVar2 = _InterlockedExchange((volatile long *)(piVar9), (long)(1));
    } while (iVar2 != 0);
    uVar6 = *((undefined4 *)GEN_TOP((((iVar5 << 6) >> 6) * 0x20 + iVar10 + 0xc)));
    _InterlockedExchange((volatile long *)(piVar9), (long)(0));
    if (*(char *)(iVar1 + 0x1c) != '\0') {
      F_00406ad0(uVar6);
    }
    iVar5 = REFG(int, 0x1375ae4);
    iVar10 = *(int *)(iVar1 + 0x2c) >> 0x1c;
    puVar7 = ((undefined1 *)GEN_TOP((((*(int *)(iVar1 + 0x2c) << 6) >> 6) * 0x20 + *(int *)(REFG(int, 0x1375ae4) + 8 + iVar10 * 4))))
    ;
    piVar9 = (int *)(REFG(int, 0x1375ae4) + 4);
    do {
      iVar2 = _InterlockedExchange((volatile long *)(piVar9), (long)(1));
    } while (iVar2 != 0);
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 0x18) = 0;
    iVar2 = *(int *)(iVar5 + 0x40 + iVar10 * 4);
    if (iVar2 == 0) {
      *(undefined1 * PTR32 *)(iVar5 + 0x24 + iVar10 * 4) = puVar7;
    }
    else {
      *(undefined1 * PTR32 *)(iVar2 + 0x18) = puVar7;
    }
    *(undefined1 * PTR32 *)(iVar5 + 0x40 + iVar10 * 4) = puVar7;
    _InterlockedExchange((volatile long *)(piVar9), (long)(0));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    F_00406ad0(iVar1);
    iVar1 = iVar4;
  }
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0xc0))), (long)(0));
  uVar8 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar8;
}

/* ref: FUN_004fda90 */
GEN_FRAME unsigned int GEN_THISCALL F_004fda90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fda90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  uint * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  (*(uint * PTR32 *)(gen_frame + 0x8)) = param_1;
  F_00c48350(((undefined1 *)(gen_frame + 0x50)),0,0x208);
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x3c)) = "System.File.Unknown";
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x50)),0,0x208);
  (*(int *)(gen_frame + 0x18)) = param_2[6];
  (*(int *)(gen_frame + 0x20)) = param_2[5];
  (*(int * PTR32 *)(gen_frame + 0x44)) = param_2;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x40))(param_2 GEN_EDX_ARG);
  (*(char * PTR32 *)(gen_frame + 0x3c)) = (char *)uVar2;
  if ((*(byte *)(param_2 + 0x16) & 4) == 0) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0xd4) + (param_2[1] & 0xffffU) * 4))) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = 0xb;
    }
  }
  else {
    puVar6 = &(*(undefined4 *)(gen_frame + 0x10));
    uVar2 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
    F_004fb660(this GEN_EDX_ARG,uVar2,puVar6);
    F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  }
  puVar3 = (*(uint * PTR32 *)(gen_frame + 0x8));
  if ((char)param_3 != '\0') {
    puVar3 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),5);
    (*(uint *)(gen_frame + 0x30)) = *puVar3;
    *(*(uint * PTR32 *)(gen_frame + 0x8)) = *puVar3;
    piVar4 = (int *)F_004fa2a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),5);
    if (*piVar4 < 9) {
      bVar1 = F_004fa4b0(piVar4);
    }
    else {
      bVar1 = F_004fd6e0(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,piVar4,5,1);
    }
    if (bVar1 != 0) {
      F_004fb400(this GEN_EDX_ARG,5,piVar4);
      F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
      return;
    }
    goto LAB_004fdc92;
  }
  (*(char *)(gen_frame + 0xf)) = '\0';
  if ((*(*(uint * PTR32 *)(gen_frame + 0x8)) & 0xc000000) == 0) {
    puVar5 = (uint *)F_004f9df0(REFG(void * PTR32, 0x1375ae4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),3);
    uVar2 = *puVar5;
    (*(uint *)(gen_frame + 0x30)) = uVar2;
    *puVar3 = uVar2;
    if ((uVar2 & 0xc000000) != 0) {
      (*(char *)(gen_frame + 0xf)) = '\x01';
      goto LAB_004fdc5f;
    }
  }
  else {
LAB_004fdc5f: ;
    bVar1 = F_004fa1a0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),3,0);
    if ((bVar1 == 0) && ((*(char *)(gen_frame + 0xf)) != '\0')) {
      F_004fad40(puVar3 GEN_EDX_ARG);
    }
  }
  gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0xcc),0xffffffff);
LAB_004fdc92: ;
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return;
}

/* ref: Client::System::File::FileManager::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_004fdcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fdcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_004fd8a0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: Client::System::File::FileThread::vf5 */
GEN_FRAME uint GEN_THISCALL F_004fdcc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fdcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  byte bVar2;
  DWORD DVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int iVar8;
  undefined4 local_10;
  
  F_004f91f0(this GEN_EDX_FWD);
  this_00 = REFG(void * PTR32, 0x1375ae8);
  DVar3 = gen_imp_GetCurrentThreadId();
  *(DWORD *)(this + 0xb8) = DVar3;
  while( true ) {
    while (F_004cee80(), *(int *)(this + 0xc0) != 0) {
      F_004fd040(this GEN_EDX_ARG);
      if (this[0x14] != (undefined1)0x0) goto LAB_004fe05f;
      do {
        iVar6 = _InterlockedExchange((volatile long *)(((int *)((int)this_00 + 0xbc))), (long)(1));
      } while (iVar6 != 0);
      iVar8 = 0;
      iVar6 = 7;
      piVar4 = (int *)((int)this_00 + 0x34);
      do {
        piVar7 = (int *)*piVar4;
        iVar6 = iVar6 - 1;
        if (piVar7 != (int *)0x0) {
          _InterlockedExchange((volatile long *)(((undefined4 *)((int)this_00 + 0xbc))), (long)(0));
          gen_imp_WaitForSingleObject(*(HANDLE *)((int)this_00 + 200),0xffffffff);
          goto LAB_004fdddc;
        }
        iVar8 = iVar8 + 1;
        piVar4 = piVar4 + 3;
      } while (iVar6 != 0);
      _InterlockedExchange((volatile long *)(((undefined4 *)((int)this_00 + 0xbc))), (long)(0));
      F_004cee80();
    }
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this_00 + 200),0xffffffff);
    if (this[0x14] != (undefined1)0x0) break;
    do {
      iVar6 = _InterlockedExchange((volatile long *)(((int *)((int)this_00 + 0xbc))), (long)(1));
    } while (iVar6 != 0);
    iVar8 = 0;
    iVar6 = 7;
    piVar4 = (int *)((int)this_00 + 0x34);
    do {
      piVar7 = (int *)*piVar4;
      iVar6 = iVar6 - 1;
      if (piVar7 != (int *)0x0) {
        _InterlockedExchange((volatile long *)(((undefined4 *)((int)this_00 + 0xbc))), (long)(0));
        goto LAB_004fdddc;
      }
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar6 != 0);
    _InterlockedExchange((volatile long *)(((undefined4 *)((int)this_00 + 0xbc))), (long)(0));
    iVar8 = 0;
LAB_004fdddc: ;
    iVar6 = *piVar7;
    if (iVar6 == 6) {
      F_009f15d0(5);
      F_009f0540(0);
      if ((*piVar7 == 0xb) && ((char)piVar7[0x3b] != '\0')) {
        if (piVar7[0x3a] != 0) {
          F_00406b30(piVar7[0x3a]);
          piVar7[0x3a] = 0;
        }
        *(undefined1 *)(piVar7 + 0x3b) = 0;
      }
      do {
        iVar6 = _InterlockedExchange((volatile long *)(((int *)((int)this_00 + 0xbc))), (long)(1));
      } while (iVar6 != 0);
      iVar6 = piVar7[0xe];
      iVar1 = piVar7[0xf];
      if (iVar6 == 0) {
        *(int *)((int)this_00 + iVar8 * 0xc + 0x34) = iVar1;
      }
      else {
        *(int *)(iVar6 + 0x3c) = iVar1;
      }
      if (iVar1 == 0) {
        *(int *)((int)this_00 + iVar8 * 0xc + 0x38) = iVar6;
      }
      else {
        *(int *)(iVar1 + 0x38) = iVar6;
      }
      piVar4 = ((int *)GEN_TOP(((int)this_00 + (iVar8 * 3 + 0xf) * 4)));
      *piVar4 = *piVar4 - 1;
      iVar6 = *(int *)((int)this_00 + 0xb0);
      if (iVar6 == 0) {
        *(int * PTR32 *)((int)this_00 + 0xac) = piVar7;
      }
      else {
        *(int * PTR32 *)(iVar6 + 0x3c) = piVar7;
      }
      piVar7[0xe] = iVar6;
      piVar7[0xf] = 0;
      *(int *)((int)this_00 + 0xb4) = *(int *)((int)this_00 + 0xb4) + 1;
      *(int * PTR32 *)((int)this_00 + 0xb0) = piVar7;
      _InterlockedExchange((volatile long *)(((undefined4 *)((int)this_00 + 0xbc))), (long)(0));
      if (iVar8 == 3) {
        gen_imp_SetEvent(*(HANDLE *)((int)this_00 + 0xcc));
      }
    }
    else if (iVar6 == 7) {
      bVar2 = F_004fa8d0(piVar7);
      if (bVar2 != 0) {
        if ((*piVar7 == 0xb) && ((char)piVar7[0x3b] != '\0')) {
          if (piVar7[0x3a] != 0) {
            F_00406b30(piVar7[0x3a]);
            piVar7[0x3a] = 0;
          }
          *(undefined1 *)(piVar7 + 0x3b) = 0;
        }
        F_004fa350(this_00 GEN_EDX_ARG,iVar8,piVar7,10,0);
        if (iVar8 == 3) {
          gen_imp_SetEvent(*(HANDLE *)((int)this_00 + 0xcc));
        }
      }
    }
    else if (iVar6 == 8) {
      (*(code *)piVar7[0x10])(piVar7[0x11],piVar7 + 0x12,piVar7);
      iVar6 = ((piVar7[8] << 6) >> 6) * 0x20 + *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (piVar7[8] >> 0x1c) * 4)));
      piVar4 = (int *)(REFG(int, 0x1375ae4) + 4);
      do {
        iVar1 = _InterlockedExchange((volatile long *)(piVar4), (long)(1));
      } while (iVar1 != 0);
      local_10 = 1;
      if (((*(char *)(iVar6 + 8) != '\0') && (local_10 = 2, *(char *)(iVar6 + 9) != '\0')) &&
         (*(int *)(iVar6 + 0xc) != 0)) {
        F_00406ad0(*(undefined4 *)(iVar6 + 0xc));
        *(undefined4 *)(iVar6 + 0xc) = 0;
        *(undefined1 *)(iVar6 + 9) = 0;
      }
      *(undefined4 *)(iVar6 + 4) = local_10;
      _InterlockedExchange((volatile long *)(piVar4), (long)(0));
      if ((*piVar7 == 0xb) && ((char)piVar7[0x3b] != '\0')) {
        if (piVar7[0x3a] != 0) {
          F_00406b30(piVar7[0x3a]);
          piVar7[0x3a] = 0;
        }
        *(undefined1 *)(piVar7 + 0x3b) = 0;
      }
      F_004fa350(this_00 GEN_EDX_ARG,iVar8,piVar7,10,0);
      if (iVar8 == 3) {
        gen_imp_SetEvent(*(HANDLE *)((int)this_00 + 0xcc));
      }
    }
    else {
      if (iVar6 < 9) {
        bVar2 = F_004fa4b0(piVar7);
      }
      else {
        bVar2 = F_004fd6e0(this GEN_EDX_ARG,piVar7,iVar8,(uint)(iVar8 == 3));
      }
      if (bVar2 != 0) {
        F_004fb400(this_00 GEN_EDX_ARG,iVar8,piVar7);
      }
    }
  }
LAB_004fe05f: ;
  uVar5 = F_009f1600(0);
  return uVar5;
}

/* ref: FUN_004fe0f0 */
GEN_FRAME uint GEN_THISCALL F_004fe0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fe0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_004fe100 */
GEN_FRAME uint GEN_THISCALL F_004fe100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fe100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_004fe1f0 */
GEN_FRAME uint GEN_THISCALL F_004fe1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fe1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(uint *)((int)this + 0x14) = param_3;
  return param_3;
}

/* ref: FUN_004fe230 */
GEN_FRAME uint GEN_THISCALL F_004fe230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fe230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_004fe250 */
GEN_FRAME byte GEN_STDCALL F_004fe250(unsigned int gen_a0)
{
  GEN_ENTER(0x4fe250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return 8 < param_1;
}

/* ref: FUN_004fe280 */
GEN_FRAME uint GEN_THISCALL F_004fe280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4fe280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x804) * 4 + 4))) = param_1;
  *(int *)((int)this + 0x804) = *(int *)((int)this + 0x804) + 1;
  *(int *)((int)this + 0x808) = *(int *)((int)this + 0x808) + param_2;
  return param_2;
}

/* ref: FUN_004fe2c0 */
GEN_FRAME unsigned int GEN_THISCALL F_004fe2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fe2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LONG param_1 = (LONG)gen_a1;
  return (uint)(gen_imp_ReleaseSemaphore(*(HANDLE *)this,param_1,(LPLONG)0x0));
}

/* ref: FUN_004fe300 */
GEN_FRAME uint GEN_THISCALL F_004fe300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fe300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b49a20(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004fe330 */
GEN_FRAME uint GEN_THISCALL F_004fe330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fe330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1);
  return uVar1;
}

/* ref: FUN_004fe380 */
GEN_FRAME uint GEN_THISCALL F_004fe380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4fe380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  uVar1 = (param_1 & 0x3ffffff | param_2 << 0x1c) ^ (param_3 & 3) << 0x1a;
  *(uint *)this = uVar1;
  return uVar1;
}

/* ref: FUN_004fe3e0 */
GEN_FRAME unsigned int GEN_THISCALL F_004fe3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fe3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != (undefined *)0x0) {
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *(undefined4 *)((int)this + 0xc) = param_1[3];
  }
  return;
}

/* ref: FUN_004fe410 */
GEN_FRAME uint GEN_THISCALL F_004fe410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4fe410u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

