#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf11 */
GEN_FRAME uint GEN_THISCALL F_00be4910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe4910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 CVar1;
  undefined4 * puVar2;
  int * piVar3;
  int in_ecx;
  double dVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint3 extraout_var = 0;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar8 = *param_2;
  uVar9 = param_2[1];
  fVar12 = gen_bits2f(param_2[2]);
  uVar7 = param_2[3];
  dVar4 = *(double *)(param_2 + 2);
  (*(uint *)(gen_frame + 0x1c)) = uVar9;
  (*(uint *)(gen_frame + 0x18)) = uVar8;
  uVar8 = (*(uint *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x20)) = fVar12;
  (*(uint *)(gen_frame + 0x24)) = uVar7;
  (*(bool *)(gen_frame + 0x7)) = true;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_FWD);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar8;
  case 2: ;
    piVar3 = *(int * PTR32 *)(this + 0x9c);
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG,2,&(*(uint *)(gen_frame + 0x18)));
    }
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG);
LAB_00be499c: ;
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar7 >> 8),1);
  default: ;
    piVar3 = *(int * PTR32 *)(this + 0x9c);
    (*(uint *)(gen_frame + 0x18)) = uVar8;
    if (piVar3 == (int *)0x0) goto LAB_00be499c;
    break;
  case 0xe: ;
    puVar2 = *(undefined4 * PTR32 *)(this + 0x9c);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,0);
      *(undefined4 *)(this + 0x9c) = 0;
    }
    uVar8 = 0;
    if (*(int *)(this + 0x148) != 0) {
      uVar8 = F_00b5c650(*(int *)(this + 0x148));
      *(undefined4 *)(this + 0x148) = 0;
    }
    *(undefined4 *)(this + 0x14c) = 0;
    this[0x154] = (undefined1)0x0;
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar8 >> 8),1);
  case 0xf: ;
    piVar3 = *(int * PTR32 *)(this + 0x9c);
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG,0xf,&(*(uint *)(gen_frame + 0x18)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x9c))))(*(undefined4 * PTR32 *)(this + 0x9c) GEN_EDX_ARG,0);
      *(undefined4 *)(this + 0x9c) = 0;
    }
    if (*(int *)(this + 0x148) != 0) {
      F_00b5c650(*(int *)(this + 0x148));
      *(undefined4 *)(this + 0x148) = 0;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG);
    *(undefined4 *)(this + 0x14c) = 0;
    this[0x154] = (undefined1)0x1;
    uVar8 = F_0054d950(this GEN_EDX_ARG);
    if (uVar8 != 0) {
      *(uint *)(uVar8 + 0xe0) = *(uint *)(uVar8 + 0xe0) | 0x10;
    }
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar8 >> 8),1);
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (byte)uVar8;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
  case 10: ;
  case 0xf: ;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_ARG);
    break;
  default: ;
    goto switchD_00be4aae_caseD_3;
  case 6: ;
  case 7: ;
    F_00bc2630(piVar3 GEN_EDX_ARG);
    break;
  case 0xb: ;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = gen_bits2f(uVar7);
    CVar1 = this[0x7c];
    (*(uint *)(gen_frame + 0x8)) = uVar8;
    gen_piece_set(&(*(uint *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)(uVar8 >> 8)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = (byte)CVar1 & (byte)(*(uint *)(gen_frame + 0x18)) & 1;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),(byte)CVar1 & (byte)(*(uint *)(gen_frame + 0x18))) & 0xffffff01;
    (*(uint *)(gen_frame + 0xc)) = uVar9;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 0)) = fVar12;
    (*(double *)(gen_frame + 0x10)) = dVar4;
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG,param_1,&(*(uint *)(gen_frame + 0x8)));
    (*(bool *)(gen_frame + 0x7)) = (char)uVar8 != '\0';
    uVar8 = F_00bd38a0(this GEN_EDX_ARG,param_1,(uint)&(*(uint *)(gen_frame + 0x18)));
    cVar6 = (char)uVar8;
    goto LAB_00be4cc1;
  case 0x10: ;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar12));
    break;
  case 0x11: ;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd0))(this GEN_EDX_ARG,*(undefined4 *)(this + 0x40));
    break;
  case 0x13: ;
    if (this[0xe] != (undefined1)0x0) goto LAB_00be499c;
    if (this[0xd] == (undefined1)0x0) {
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG,0x14,&REFG(undefined, 0x13056c0));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = *(float *)(this + 0x34);
      uVar9 = (uint)((char)uVar8 != '\0');
      (*(double *)(gen_frame + 0x10)) = (double)*(float *)(this + 0x34);
      uVar8 = F_0054d920(this GEN_EDX_ARG);
      fVar11 = F_00531220(uVar8 GEN_EDX_ARG);
      fVar12 = (float)((float10)(*(double *)(gen_frame + 0x10)) - fVar11);
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = fVar12;
      (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar12),(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 0)))));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x20)));
      uVar8 = F_0054d900(this GEN_EDX_ARG);
      in_ecx = *(int *)(uVar8 + 0x20);
      bVar5 = F_00bc3d90(in_ecx GEN_EDX_ARG,uVar9,0);
      if (bVar5 == 0) break;
      uVar7 = *(uint *)(in_ecx + 0x48 + uVar9 * 0x30);
      fVar11 = (float10)*(int *)(in_ecx + 0x48 + uVar9 * 0x30);
      if ((int)uVar7 < 0) {
        fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar8 = (*(uint *)(gen_frame + 0x18));
      if ((!GEN_ISNAN((float10)(*(float *)(gen_frame + 0x20))) && !GEN_ISNAN(fVar11)) && !((float10)(*(float *)(gen_frame + 0x20)) <= fVar11))
      goto LAB_00be499c;
    }
    else {
      (*(double *)(gen_frame + 0x10)) = (double)fVar12;
      fVar12 = F_00bd2390(this GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(double *)(gen_frame + 0x10)) - (float10)fVar12);
      uVar8 = (*(uint *)(gen_frame + 0x18));
    }
    goto switchD_00be4aae_caseD_3;
  case 0x16: ;
    if (this[0xd] != (undefined1)0x0) {
      F_00be3460(this GEN_EDX_ARG,fVar12);
      break;
    }
    bVar10 = (byte)(*(uint *)(gen_frame + 0x18)) != 0;
    if (bVar10) break;
    bVar5 = F_00be4730(this GEN_EDX_ARG,uVar9);
    goto joined_r0x00be4bbb;
  case 0x17: ;
  case 0x18: ;
    if (this[0xd] != (undefined1)0x0) {
      F_00be3460(this GEN_EDX_ARG,fVar12);
      break;
    }
    bVar5 = F_00be4730(this GEN_EDX_ARG,uVar9);
    goto joined_r0x00be4bbb;
  case 0x19: ;
    if (this[0xd] != (undefined1)0x0) {
      F_00be3460(this GEN_EDX_ARG,fVar12);
    }
    break;
  case 0x1b: ;
    if (this[0xd] == (undefined1)0x0) break;
switchD_00be4aae_caseD_3: ;
    (*(uint *)(gen_frame + 0x18)) = uVar8;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c) GEN_EDX_ARG,param_1,&(*(uint *)(gen_frame + 0x18)));
    cVar6 = (char)uVar8;
LAB_00be4cc1: ;
    if (cVar6 == '\0') {
LAB_00be4cc5: ;
      (*(bool *)(gen_frame + 0x7)) = false;
    }
    break;
  case 0x1d: ;
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe8))(this GEN_EDX_ARG,uVar9);
    bVar5 = (byte)uVar8;
joined_r0x00be4bbb: ;
    if (bVar5 == 0) break;
    goto LAB_00be4cc5;
  case 0x1e: ;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf0))(this GEN_EDX_ARG,uVar9);
  }
  uVar8 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 4: ;
  case 5: ;
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
    if ((char)uVar8 != '\0') {
      F_00bd41b0(this GEN_EDX_ARG);
      uVar8 = (uint)extraout_var << 8;
    }
    break;
  case 0x17: ;
  case 0x18: ;
    if (this[0xc] != (undefined1)0x0) {
      uVar8 = F_00be47e0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x1c)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return CONCAT31((int3)(uVar8 >> 8),(*(bool *)(gen_frame + 0x7)));
}

/* ref: Client::System::Scheduler::Clip::ChildTimelineClip::vf0 */
GEN_FRAME uint GEN_THISCALL F_00be4dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe4dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x9c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c314));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,0);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(int *)(this + 0x148) != 0) {
    F_00b5c650(*(int *)(this + 0x148));
    *(undefined4 *)(this + 0x148) = 0;
  }
  *(undefined4 *)(this + 0x14c) = 0;
  this[0x154] = (undefined1)0x0;
  F_00bd2e60(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be4f10 */
GEN_FRAME uint GEN_THISCALL F_00be4f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe4f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x48) = param_2;
  return param_2;
}

/* ref: FUN_00be4f60 */
GEN_NOFRAME uint GEN_THISCALL F_00be4f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe4f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c434));
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xffffffe3 | 1;
  *(undefined4 *)((int)this + 0xa0) = uVar1;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_00be4fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe4fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_FWD,3);
  return uVar1;
}

/* ref: FUN_00be4ff0 */
GEN_NOFRAME uint GEN_THISCALL F_00be4ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe4ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_00be5052;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    if (iVar2 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar2 = *(int *)((int)this + 0x6c);
      uVar3 = 0;
      if (iVar2 != 0) goto LAB_00be502d;
    }
    else {
LAB_00be502d: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar1;
      uVar3 = F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0x78);
    if (this_00 == (undefined *)0x0) goto LAB_00be5052;
  }
  uVar3 = F_00bc54d0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x88));
LAB_00be5052: ;
  *(undefined4 *)((int)this + 0x88) = 0;
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_00be5060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xf) != '\0';
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf41 */
GEN_FRAME float GEN_THISCALL F_00be5070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  uVar1 = F_00bd3040(this GEN_EDX_FWD);
  if ((uVar1 & 1) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x70);
    if (piVar3 == (int *)0x0) {
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar2 = *(int *)(this + 0x6c);
        if (iVar2 != 0) goto LAB_00be50a2;
      }
      else {
LAB_00be50a2: ;
        *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar2 + 4);
      }
      piVar3 = *(int * PTR32 *)(this + 0x70);
    }
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0xbc))(piVar3);
    fVar5 = (float10)(float)extraout_ST0;
    bVar4 = GEN_ISNAN(fVar5) || GEN_ISNAN((float10)0);
    if (bVar4 == (bVar4 || fVar5 == (float10)0)) goto LAB_00be50d2;
  }
  fVar5 = (float10)*(float *)(this + 0x38);
LAB_00be50d2: ;
  return (float)fVar5;
}

/* ref: FUN_00be50e0 */
GEN_FRAME float GEN_THISCALL F_00be50e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe50e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  uVar1 = F_00bd3040(this GEN_EDX_FWD);
  if ((uVar1 & 1) != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 == (int *)0x0) {
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar2 = *(int *)((int)this + 0x6c);
        if (iVar2 != 0) goto LAB_00be5112;
      }
      else {
LAB_00be5112: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
      }
      piVar3 = *(int * PTR32 *)((int)this + 0x70);
    }
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0xc0))(piVar3,*(undefined4 *)((int)this + 0x38));
    fVar5 = (float10)(float)extraout_ST0;
    bVar4 = GEN_ISNAN(fVar5) || GEN_ISNAN((float10)0);
    if (bVar4 == (bVar4 || fVar5 == (float10)0)) goto LAB_00be514d;
  }
  fVar5 = (float10)*(float *)((int)this + 0x38);
LAB_00be514d: ;
  return (float)fVar5;
}

/* ref: FUN_00be5160 */
GEN_NOFRAME float GEN_THISCALL F_00be5160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  
  if ((*(byte *)((int)this + 0x90) & 0x10) != 0) {
    return (float)(float10)0;
  }
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xac))(this);
  return (float)extraout_ST0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf25 */
GEN_NOFRAME unsigned int F_00be5180(void)
{
  GEN_ENTER(0xbe5180u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf26 */
GEN_NOFRAME uint GEN_THISCALL F_00be5190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0xc] != (undefined1)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_FWD,2);
    this[0xc] = (undefined1)0x0;
    this[0xd] = (undefined1)0x1;
    this[10] = (undefined1)0x0;
    this[0xb] = (undefined1)0x0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG,2);
  *(uint *)(this + 0x90) = *(uint *)(this + 0x90) & 0xfffffff7;
  this[0xa5] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf68 */
GEN_FRAME unsigned int GEN_THISCALL F_00be51e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe51e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x88) != 0) {
    F_00c1f460(*(int *)(in_ecx + 0x88) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00be5240 */
GEN_FRAME float GEN_THISCALL F_00be5240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  float10 extraout_ST0;
  float fVar3;
  
  iVar2 = *(int *)((int)this + 0x70);
  if (iVar2 != 0) goto LAB_00be527b;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00be5268;
  }
  else {
LAB_00be5268: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
  }
  iVar2 = *(int *)((int)this + 0x70);
  if (iVar2 == 0) {
    return (float)(float10)0;
  }
LAB_00be527b: ;
  if (*(char *)(iVar2 + 0x30) == '\0') {
    if (*(char *)(iVar2 + 0x80) == '\0') {
      fVar3 = *(float *)(iVar2 + 0x58);
    }
    else {
      fVar3 = *(float *)(iVar2 + 0x6c);
    }
    fVar1 = *(float *)((int)this + 0x34);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa8))(this);
    return ((float)GEN_TOF(((float10)(fVar3 - fVar1) - extraout_ST0)));
  }
  if (*(char *)((int)this + 0xd) == '\0') {
    return REFG(float, 0x1090708);
  }
  return *(float *)((int)this + 0x44);
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf57 */
GEN_FRAME unsigned int GEN_THISCALL F_00be52e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe52e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    return;
  }
  if ((((param_2 == 6) && ((*(byte *)(param_1 + 0x90) & 0x10) != 0)) &&
      (*(int *)(param_1 + 0x88) != 0)) && (*((int *)GEN_TOP((*(int *)(param_1 + 0x88) + 0x28))) != 1)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) goto LAB_00be5341;
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
    }
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 != 0) goto LAB_00be5338;
  }
  else {
LAB_00be5338: ;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)(param_1 + 0x70);
LAB_00be5341: ;
  if (*(char *)(iVar1 + 0x30) == '\0') {
    if (*(char *)(iVar1 + 0x80) == '\0') {
      param_2 = *(uint *)(iVar1 + 0x58);
    }
    else {
      param_2 = *(uint *)(iVar1 + 0x6c);
    }
  }
  else {
    fVar2 = (float10)*(int *)(iVar1 + 0x34);
    if (*(int *)(iVar1 + 0x34) < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    param_2 = (uint)gen_fl2bits((float)fVar2);
  }
  if ((float10)*(float *)(param_1 + 0x34) <= ((float10)GEN_TOD(gen_bits2f(param_2)))) {
    *(undefined4 *)(param_1 + 0x30) = 2;
  }
  return;
}

/* ref: FUN_00be5390 */
GEN_FRAME uint GEN_THISCALL F_00be5390(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbe5390u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)param_1 + 0x70);
  if (iVar1 != 0) goto LAB_00be53c2;
  iVar1 = *(int *)((int)param_1 + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)((int)param_1 + 4) != 0) {
      *(undefined4 *)((int)param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 4) + 4)));
    }
    iVar1 = *(int *)((int)param_1 + 0x6c);
    if (iVar1 != 0) goto LAB_00be53b9;
  }
  else {
LAB_00be53b9: ;
    *(undefined4 *)((int)param_1 + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)((int)param_1 + 0x70);
LAB_00be53c2: ;
  local_8 = 0;
  if (iVar1 != 0) {
    local_8 = *(undefined4 *)(iVar1 + 0x28);
  }
  F_00c1f1f0(*(undefined4 *)((int)param_1 + 0x88) GEN_EDX_FWD,param_2,local_8);
  uVar2 = F_00be4ff0(param_1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00be5410 */
GEN_FRAME uint GEN_THISCALL F_00be5410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  float10 extraout_ST0;
  float local_8;
  
  if (*(int *)((int)this + 0x88) != 0) {
    if ((*(byte *)((int)this + 0x90) & 0x10) == 0) {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xac))(this);
      local_8 = (float)extraout_ST0;
    }
    else {
      local_8 = 0.0;
    }
    F_00c1f3e0(*(undefined4 *)((int)this + 0x88) GEN_EDX_FWD,local_8);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x22))) = 1;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be5493;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00be547e;
  }
  else {
LAB_00be547e: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00be5493: ;
  uVar3 = F_00bc3f70(this_00 GEN_EDX_ARG,this);
  return uVar3;
}

/* ref: FUN_00be54a0 */
GEN_NOFRAME byte GEN_THISCALL F_00be54a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe54a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x88) != 0) && (*((char *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0x23))) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf37 */
GEN_FRAME unsigned int GEN_THISCALL F_00be54c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbe54c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(param_1 + 0xa0) = param_2;
  if ((*(int *)(param_1 + 0x88) != 0) && (*(char *)(param_1 + 0xc) != '\0')) {
    F_00c1f440(*(int *)(param_1 + 0x88) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00be5500 */
GEN_FRAME unsigned int GEN_THISCALL F_00be5500(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbe5500u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  F_00c1f3a0(*(undefined4 *)(param_1 + 0x88) GEN_EDX_FWD,param_2);
  return;
}

/* ref: FUN_00be5520 */
GEN_FRAME double GEN_THISCALL F_00be5520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  float10 extraout_ST0;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) goto LAB_00be556e;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00be5550;
    }
    else {
LAB_00be5550: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00be555d;
  }
  else {
LAB_00be555d: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_FWD);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 == (int *)0x0) {
    return (double)*(float *)((int)this + 0x9c);
  }
LAB_00be556e: ;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3);
  return (double)((float)GEN_TOF((extraout_ST0 * (float10)*(float *)((int)this + 0x9c))));
}

/* ref: FUN_00be55a0 */
GEN_NOFRAME uint GEN_THISCALL F_00be55a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe55a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int in_ecx;
  
  in_ecx = *(int *)((int)this + 0x6c);
  if (in_ecx == 0) {
    uVar1 = 0;
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *(uint *)((int)this + 0x6c) = uVar1;
    }
    in_ecx = *(int *)((int)this + 0x6c);
    if (in_ecx == 0) {
      return uVar1;
    }
  }
  this_00 = (undefined *)F_00beb690(in_ecx GEN_EDX_FWD);
  uVar1 = F_00bccc10(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x8c));
  *(uint *)((int)this + 0xb0) = uVar1;
  uVar1 = F_00bcd040(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x8c),(int)this + 0xa8,(int)this + 0xac);
  *(undefined1 *)((int)this + 0xa7) = 1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf63 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00be5600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe5600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x88);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x23) == '\0') {
      F_00c1f1f0(iVar1 GEN_EDX_FWD,(float)(float10)0,(undefined4)gen_fl2bits((float)(float10)0));
    }
    F_00be4ff0(this GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf12 */
GEN_FRAME unsigned int GEN_THISCALL F_00be5630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xbe5630u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
  *(int *)(param_1 + 0x8c) = iVar1 + param_2;
  F_00bd2f00(param_1 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_00be5670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbe5670u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
  *(int *)(param_1 + 0x8c) = iVar1 + param_2;
  F_00bd2fb0(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00be56a0 */
GEN_FRAME float GEN_THISCALL F_00be56a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe56a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  bool bVar5;
  double dVar6;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar4 != (int *)0x0) goto LAB_00be56d5;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00be56cc;
  }
  else {
LAB_00be56cc: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x70);
LAB_00be56d5: ;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x6c))(piVar4 GEN_EDX_FWD);
  if (uVar3 == 0) {
    dVar6 = F_00be5520(this GEN_EDX_ARG);
    return (float)dVar6;
  }
  fVar1 = *(float *)(uVar3 + 0x98);
  dVar6 = F_00be5520(this GEN_EDX_ARG);
  bVar5 = GEN_ISNAN((double)fVar1) || GEN_ISNAN(dVar6);
  if (bVar5 != (bVar5 || (double)fVar1 == dVar6)) {
    return (float)(float10)1;
  }
  fVar1 = *(float *)(uVar3 + 0x98);
  dVar6 = F_00be5520(this GEN_EDX_ARG);
  return (float)((float10)dVar6 / (float10)fVar1);
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf33 */
GEN_FRAME unsigned int GEN_THISCALL F_00be5740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe5740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * this_01;
  undefined4 uVar5;
  double dVar6;
  float fVar7;
  
  if ((*(int *)(this + 0x6c) == 0) && (*(int *)(this + 4) != 0)) {
    *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
  }
  this_00 = *(int * PTR32 *)(this + 0x70);
  if (this_00 == (int *)0x0) {
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar1 = *(int *)(this + 0x6c);
      if (iVar1 != 0) goto LAB_00be5780;
    }
    else {
LAB_00be5780: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    this_00 = *(int * PTR32 *)(this + 0x70);
  }
  iVar1 = *(int *)(this + 0x74);
  if (iVar1 == 0) {
    piVar2 = this_00;
    if (this_00 == (int *)0x0) {
      iVar1 = *(int *)(this + 0x6c);
      if (iVar1 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar1 = *(int *)(this + 0x6c);
        if (iVar1 != 0) goto LAB_00be57b2;
      }
      else {
LAB_00be57b2: ;
        *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
      }
      piVar2 = *(int * PTR32 *)(this + 0x70);
      if (piVar2 != (int *)0x0) goto LAB_00be57bf;
    }
    else {
LAB_00be57bf: ;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 100))(piVar2 GEN_EDX_FWD);
      *(uint *)(this + 0x74) = uVar3;
    }
    iVar1 = *(int *)(this + 0x74);
  }
  this_01 = *(undefined * PTR32 *)(this + 0x78);
  if (this_01 != (undefined *)0x0) goto LAB_00be580c;
  iVar4 = *(int *)(this + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 != 0) goto LAB_00be57f7;
  }
  else {
LAB_00be57f7: ;
    uVar5 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar5;
    F_00b595f0(uVar5);
  }
  this_01 = *(undefined * PTR32 *)(this + 0x78);
LAB_00be580c: ;
  piVar2 = *(int * PTR32 *)(this + 0xb4);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,this);
    *(undefined4 *)(this + 0xb4) = 0;
  }
  if (*(int *)(this + 0x88) != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,0xb);
  }
  uVar5 = *(undefined4 *)(this + 0x5c);
  if ((((byte)this[0x90] & 0x10) != 0) &&
     (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x74))(this_00 GEN_EDX_ARG), uVar3 == 0)) {
    uVar5 = 0;
  }
  uVar3 = F_00bc5440(this_01 GEN_EDX_ARG);
  *(uint *)(this + 0x88) = uVar3;
  *(undefined * PTR32 *)(uVar3 + 0x48) = this;
  if ((*(char * PTR32 *)(this + 0x8c) != (char *)0x0) && (**(char * PTR32 *)(this + 0x8c) != '\0')) {
    if (iVar1 == 0) {
      fVar7 = gen_bits2f(this_00[10]);
      uVar3 = 0xffffffff;
    }
    else {
      fVar7 = gen_bits2f(this_00[10]);
      uVar3 = F_00bcfbe0(iVar1 GEN_EDX_ARG);
    }
    F_00c1eeb0(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,uVar5,uVar3,fVar7);
    fVar7 = *(float *)(this + 0xa0);
    if (((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
         ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar7 == REFG(float, 0x1087f04))) ||
       ((uVar3 = F_00bd2420(this GEN_EDX_ARG), uVar3 != 0 &&
        (fVar7 = *(float *)(uVar3 + 0xc),
        (GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
        ((GEN_ISNAN(fVar7) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar7 == REFG(float, 0x1087f04)))))) {
      F_00c1f440(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,fVar7);
    }
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 4;
    uVar3 = F_00bc1e50(this_00 GEN_EDX_ARG,0);
    if ((char)uVar3 == '\0') {
      dVar6 = F_00be5520(this GEN_EDX_ARG);
      if (GEN_ISNAN(dVar6) == (GEN_ISNAN(dVar6) || dVar6 == 1.0)) {
        dVar6 = F_00be5520(this GEN_EDX_ARG);
        F_00c1f3a0(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,(float)dVar6);
      }
      this[0xa4] = (undefined1)0x0;
    }
    else {
      F_00c1f3a0(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,(float)(float10)0);
      this[0xa4] = (undefined1)0x1;
    }
    *(uint *)(this + 0x90) = *(uint *)(this + 0x90) & 0xfffffff7;
    this[0xa6] = (undefined1)0x1;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf36 */
GEN_FRAME unsigned int GEN_THISCALL F_00be5990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe5990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  double dVar1;
  
  if (((*(int *)(this + 0x88) != 0) && (this[0xc] != (undefined1)0x0)) &&
     (this[0xa4] == (undefined1)0x0)) {
    dVar1 = F_00be5520(this GEN_EDX_FWD);
    F_00c1f3a0(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,(float)dVar1);
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf35 */
GEN_FRAME unsigned int GEN_THISCALL F_00be59d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe59d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  double dVar1;
  
  if ((*(int *)((int)param_1 + 0x88) != 0) && (*(char *)((int)param_1 + 0xc) != '\0')) {
    if ((char)param_3 == '\0') {
      if (*(char *)((int)param_1 + 0xa4) != '\0') {
        dVar1 = F_00be5520(param_1 GEN_EDX_FWD);
        F_00c1f3a0(*(undefined4 *)((int)param_1 + 0x88) GEN_EDX_ARG,(float)dVar1);
        *(undefined1 *)((int)param_1 + 0xa4) = 0;
      }
    }
    else if (*(char *)((int)param_1 + 0xa4) == '\0') {
      F_00c1f3a0(*(int *)((int)param_1 + 0x88) GEN_EDX_ARG,(float)(float10)0);
      *(undefined1 *)((int)param_1 + 0xa4) = 1;
      return;
    }
  }
  return;
}

/* ref: FUN_00be5a40 */
GEN_NOFRAME uint GEN_THISCALL F_00be5a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xa7) == '\0') {
    F_00be55a0(this GEN_EDX_FWD);
  }
  return *(uint *)((int)this + 0xa8);
}

/* ref: FUN_00be5a60 */
GEN_NOFRAME uint GEN_THISCALL F_00be5a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xa7) == '\0') {
    F_00be55a0(this GEN_EDX_FWD);
  }
  return *(uint *)((int)this + 0xac);
}

/* ref: FUN_00be5a80 */
GEN_NOFRAME uint GEN_THISCALL F_00be5a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0xa7) == '\0') {
    F_00be55a0(this GEN_EDX_FWD);
  }
  return *(uint *)((int)this + 0xb0);
}

/* ref: FUN_00be5aa0 */
GEN_NOFRAME uint GEN_THISCALL F_00be5aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c434));
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x23) == '\0') {
      F_00c1f1f0(iVar1 GEN_EDX_FWD,(float)(float10)0,(undefined4)gen_fl2bits((float)(float10)0));
    }
    F_00be4ff0(this GEN_EDX_ARG);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xb4);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,this);
  }
  uVar3 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf48 */
GEN_FRAME uint GEN_THISCALL F_00be5af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe5af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x88);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x28) == 1)) {
    this[0xa6] = (undefined1)0x0;
    return uVar1;
  }
  if (((char)param_1 == '\0') || (uVar1 = param_1, ((byte)this[0x7c] & 1) == 0)) {
    uVar1 = F_00bd3200((undefined *)this GEN_EDX_FWD,param_1);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf21 */
GEN_FRAME uint GEN_THISCALL F_00be5b30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbe5b30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0_01;
  double dVar8;
  
  F_00bd1f30(param_1 GEN_EDX_FWD,param_2,param_3);
  param_1[0x24] = param_1[0x24] & 0xffffffef;
  fVar2 = 9.18327e-41;
  param_1[0x27] = (int)gen_fl2bits(param_4);
  *(ushort *)(param_1 + 0x1f) = *(ushort *)(param_1 + 0x1f) & 0xfffe;
  if ((char)param_6 != '\0') {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa8))(param_1); dVar8 = extraout_ST0;
    fVar6 = (float10)0;
    bVar4 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN(fVar6);
    bVar5 = bVar4 || extraout_ST0 == fVar6;
    uVar3 = (undefined2)((ulonglong)gen_d2bits(dVar8) >> 0x10);
    fVar2 = gen_bits2f(CONCAT22(uVar3,CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U |
                                               !(fVar6 <= extraout_ST0),
                                               (char)(ulonglong)gen_d2bits(dVar8))));
    if (bVar4 != bVar5) {
      bVar4 = GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
      bVar5 = bVar4 || param_3 == *(float *)&REFG(undefined, 0x1088114);
      fVar2 = gen_bits2f(CONCAT22(uVar3,CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U |
                                                 !(*(float *)&REFG(undefined, 0x1088114) <= param_3),
                                                 (char)(ulonglong)gen_d2bits(dVar8))));
      if (bVar4 == bVar5) {
        extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xac))(param_1); dVar8 = extraout_ST0_00;
        fVar6 = (float10)param_3;
        bVar4 = GEN_ISNAN(extraout_ST0_00) || GEN_ISNAN(fVar6);
        bVar5 = bVar4 || extraout_ST0_00 == fVar6;
        fVar2 = gen_bits2f(CONCAT22((short)((ulonglong)gen_d2bits(dVar8) >> 0x10),
                                    CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U |
                                             !(fVar6 <= extraout_ST0_00),
                                             (char)(ulonglong)gen_d2bits(dVar8))));
        if (bVar4 == bVar5) goto LAB_00be5c16;
      }
      if ((char)param_5 != '\0') {
        bVar4 = GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
        bVar5 = bVar4 || param_3 == *(float *)&REFG(undefined, 0x1088114);
        fVar2 = gen_bits2f(CONCAT22((short)((uint)gen_fl2bits(fVar2) >> 0x10),
                                    CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U |
                                             !(*(float *)&REFG(undefined, 0x1088114) <= param_3),
                                             (char)(uint)gen_fl2bits(fVar2))));
        if (bVar4 == bVar5) {
          if (*(char *)((int)param_1 + 0xa7) == '\0') {
            fVar2 = gen_bits2f(F_00be55a0(param_1 GEN_EDX_ARG));
          }
          fVar6 = (float10)param_1[0x2c];
          if (param_1[0x2c] < 0) {
            fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          fVar7 = (float10)param_3;
          bVar4 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7);
          bVar5 = bVar4 || fVar6 == fVar7;
          fVar2 = gen_bits2f(CONCAT22((short)((uint)gen_fl2bits(fVar2) >> 0x10),
                                      CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar7 <= fVar6),
                                               (char)(uint)gen_fl2bits(fVar2))));
          if (bVar4 == bVar5) goto LAB_00be5c16;
        }
      }
      param_1[0x24] = param_1[0x24] | 0x10;
      *(ushort *)(param_1 + 0x1f) = *(ushort *)(param_1 + 0x1f) | 1;
    }
  }
LAB_00be5c16: ;
  if ((char)param_1[10] != '\0') {
    fVar1 = gen_bits2f(param_1[0xd]);
    extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xa4))(param_1); fVar2 = extraout_ST0_01;
    if ((float10)*param_7 < (float10)(float)(extraout_ST0_01 + (float10)fVar1)) {
      *param_7 = (float)(extraout_ST0_01 + (float10)fVar1);
    }
  }
  return (uint)gen_fl2bits(fVar2);
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf23 */
GEN_FRAME uint GEN_THISCALL F_00be5d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    return uVar2;
  }
  if (*(int *)(this + 4) == 0) {
    return uVar2;
  }
  if (((byte)this[0x90] & 0x10) == 0) {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xac))(this);
    (*(float *)(gen_frame + 0x8)) = (float)extraout_ST0;
    fVar4 = (float10)(float)extraout_ST0;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN((float10)0);
    if (bVar3 == (bVar3 || fVar4 == (float10)0)) goto LAB_00be5e02;
  }
  if (this[0xa7] == (undefined1)0x0) {
    F_00be55a0(this GEN_EDX_ARG);
  }
  fVar4 = (float10)*(int *)(this + 0xb0);
  if (*(int *)(this + 0xb0) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x8)) = (float)fVar4;
LAB_00be5e02: ;
  uVar2 = *(uint *)(this + 0x88);
  if ((uVar2 == 0) || (*(int *)(uVar2 + 0x28) != 0)) {
    F_00c51c40((uint)(ulonglong)gen_d2bits((double)*(float *)(this + 0x44)),
                 (int)((ulonglong)gen_d2bits((double)*(float *)(this + 0x44)) >> 0x20),&(*(double *)(gen_frame + 0x0)));
    fVar4 = (float10)(*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x8)) = (float)(*(double *)(gen_frame + 0x0));
    fVar1 = (float)(fVar4 - (float10)(float)(*(double *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    if ((float10)fVar1 <= (float10)0) {
      return extraout_EAX;
    }
    return extraout_EAX;
  }
  if (this[0xa7] == (undefined1)0x0) {
    uVar2 = F_00be55a0(this GEN_EDX_ARG);
  }
  if (-1 < *(int *)(this + 0xb0)) {
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00be5e90 */
GEN_NOFRAME byte GEN_THISCALL F_00be5e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be5ecf;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00be5eba;
  }
  else {
LAB_00be5eba: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00be5ecf: ;
  if (*(char *)((int)this + 0xa7) == '\0') {
    F_00be55a0(this GEN_EDX_ARG);
  }
  bVar2 = F_00bc4bb0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x8c),*(undefined4 *)((int)this + 0xac));
  return bVar2;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_00be5f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe5f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  uint uVar1;
  undefined * this_00;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x10] == (undefined1)0x0) {
    return 0;
  }
  in_ecx = *(int *)(this + 0x88);
  if (in_ecx != 0) {
    if (((*(int *)(in_ecx + 0xc) != 0) || (*(int *)(in_ecx + 0x58) != 0)) &&
       ((*(char *)(in_ecx + 0x23) == '\0' || (uVar1 = F_00bc3ab0(in_ecx GEN_EDX_FWD), (char)uVar1 == '\0'))))
    {
      return 0;
    }
    uVar1 = *(uint *)(in_ecx + 0x1c);
    F_00be4ff0(this GEN_EDX_ARG);
    F_00bc38a0(this GEN_EDX_ARG);
    if (((uVar1 >> 1 & 1) != 0) && (this_00 = (undefined *)F_0054d920(this GEN_EDX_ARG), this_00 != (undefined *)0x0)) {
      F_00bc33b0(this_00 GEN_EDX_ARG,(uint)((byte)this[0x7c] & 1));
    }
  }
  this[0x11] = (undefined1)0x1;
  this[0x15] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
  }
  return 1;
}

/* ref: FUN_00be6290 */
GEN_FRAME uint GEN_THISCALL F_00be6290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe6290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  undefined * this_01;
  undefined1 * puVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = this;
  if (((*(byte *)((int)this + 0x7c) & 1) != 0) && (uVar4 = F_00bd3040(this GEN_EDX_FWD), (uVar4 & 0x400) != 0)
     ) {
    return uVar4;
  }
  iVar1 = *(int *)((int)this + 0x88);
  if ((((*(int *)(iVar1 + 0x50) == 1) || (*(int *)(iVar1 + 0x50) == 2)) &&
      (*(char *)(iVar1 + 0x21) == '\0')) && (*(char *)(iVar1 + 0x20) == '\0')) {
    if (*(int *)((int)this + 0x6c) == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      if (*(int *)((int)this + 0x6c) == 0) goto LAB_00be638a;
    }
    this_00 = (undefined *)F_00a0b580(this GEN_EDX_ARG);
    this_01 = (undefined *)F_0054d950(this GEN_EDX_ARG);
    if ((this_01 == (undefined *)0x0) || (*(int *)((int)this_01 + 0x244) != 0x4a)) {
      bVar3 = *((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x30)));
      uVar4 = F_00bc3c20(this_00 GEN_EDX_ARG);
      puVar5 = (undefined1 *)F_00a09fe0((uint)bVar3,uVar4);
      if ((*((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0x54))) == 0x10) &&
         (puVar5 == (undefined1 *)0xffffffff)) {
        puVar5 = &REFG(undefined, 0xa);
        goto LAB_00be632b;
      }
    }
    else {
      bVar3 = F_00bcfe30(this_01 GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x8)));
      puVar5 = (*(undefined1 * PTR32 *)(gen_frame + 0x8));
      if (bVar3 == 0) goto LAB_00be638a;
    }
    if (-1 < (int)puVar5) {
LAB_00be632b: ;
      F_00be5390(this GEN_EDX_ARG,(float)(int)puVar5);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,1);
      return uVar4;
    }
  }
LAB_00be638a: ;
  if ((*(byte *)((int)this + 0x90) & 1) != 0) {
    pcVar2 = *(gen_code32 *)(*(int *)this + 0xa0);
    *(undefined1 *)((int)this + 0xa5) = 1;
    uVar4 = (*pcVar2)(this,1);
    return uVar4;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,8);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,1);
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf34 */
GEN_FRAME byte GEN_THISCALL F_00be63d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe63d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  double dVar5;
  float local_8;
  
  if (*(int *)(this + 0x88) == 0) {
    return 0;
  }
  dVar5 = F_00be5520(this GEN_EDX_FWD);
  local_8 = (float)dVar5;
  bVar4 = GEN_ISNAN((float10)local_8) || GEN_ISNAN((float10)0);
  if (bVar4 != (bVar4 || (float10)local_8 == (float10)0)) {
    local_8 = REFG(float, 0x1087f04);
  }
  F_00c1f3a0(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,local_8);
  if (((*(int *)&gen_a1) != 6) && ((*(int *)&gen_a1) != 7)) {
    if ((((*(int *)&gen_a1) == 2) || ((*(int *)&gen_a1) == 3)) || ((*(int *)&gen_a1) == 5)) {
      uVar3 = 0;
      uVar2 = F_0054d950(this GEN_EDX_ARG);
      if (uVar2 != 0) {
        uVar3 = *(uint *)(uVar2 + 0x1d8);
      }
    }
    else {
      F_0054d900(this GEN_EDX_ARG);
      this_00 = (undefined *)F_00a0b580(this GEN_EDX_ARG);
      uVar3 = 0;
      if ((*(int *)&gen_a1) == 1) {
        bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x88) + 0x30)));
        uVar3 = F_00bc3c20(this_00 GEN_EDX_ARG);
        uVar3 = F_00a09fe0((uint)bVar1,uVar3);
      }
      else if ((*(int *)&gen_a1) == 9) {
        bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x88) + 0x30)));
        uVar3 = F_00bc3c20(this_00 GEN_EDX_ARG);
        uVar3 = F_00a09fe0((uint)bVar1,uVar3);
      }
    }
    uVar2 = F_0054d920(this GEN_EDX_ARG);
    F_00c1f1f0(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,(float)(int)uVar3,*(undefined4 *)(uVar2 + 0x28));
    F_00be4ff0(this GEN_EDX_ARG);
    return 1;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x54))) == 0x10) {
    F_00be6290(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00be6510 */
GEN_FRAME uint GEN_THISCALL F_00be6510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe6510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 extraout_ST0;
  double dVar2;
  float fVar3;
  
  uVar1 = *(uint *)((int)this + 0x88);
  if ((*(int *)(uVar1 + 0x28) != 0) &&
     (((*(int *)(uVar1 + 0x54) != 0x10 || (uVar1 = F_0054d950(this GEN_EDX_FWD), uVar1 == 0)) ||
      (*(int *)(uVar1 + 0x244) != 0x4a)))) {
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x88) + 0x22))) == '\0') {
      fVar3 = F_00bd2390(this GEN_EDX_ARG);
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this); dVar2 = extraout_ST0;
      if (!(extraout_ST0 <= (float10)fVar3)) {
        return (uint)(ulonglong)gen_d2bits(dVar2);
      }
    }
    uVar1 = F_00be6290(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf49 */
GEN_FRAME unsigned int GEN_THISCALL F_00be6580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  bool bVar6;
  undefined * pHVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((((((char)param_1 == '\0') && (this[0xd] == (undefined1)0x0)) &&
       (((byte)this[0x90] & 8) == 0)) &&
      ((uVar4 = F_0054d950(this GEN_EDX_FWD), uVar4 != 0 && (*(int *)(uVar4 + 0xdc) == 0)))) &&
     (((*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)F_00bcfbe0(uVar4 GEN_EDX_ARG), -1 < (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) &&
      (pvVar5 = (undefined *)F_00a0b580(this GEN_EDX_ARG), pvVar5 != (undefined *)0x0)))) {
    uVar1 = *(undefined4 *)(uVar4 + 0x1e0);
    pHVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    uVar4 = F_00be5a60(this GEN_EDX_ARG);
    bVar3 = F_00bc46a0(pvVar5 GEN_EDX_ARG,uVar1,uVar4,pHVar7);
    if (bVar3 != 0) {
      pvVar5 = (undefined *)F_0054d920(this GEN_EDX_ARG);
      F_00bc33b0(pvVar5 GEN_EDX_ARG,(uint)((byte)this[0x7c] & 1));
      *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 8;
    }
  }
  iVar2 = *(int *)(this + 0x88);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x23) != '\0')) {
    if ((((byte)this[0x90] & 8) == 0) && (this[0xa6] != (undefined1)0x0)) {
      pvVar5 = (undefined *)F_0054d920(this GEN_EDX_ARG);
      if (pvVar5 != (undefined *)0x0) {
        F_00bc33b0(pvVar5 GEN_EDX_ARG,(uint)((byte)this[0x7c] & 1));
      }
      *(uint *)(this + 0x90) = *(uint *)(this + 0x90) | 8;
    }
    bVar6 = GEN_ISNAN(*(float *)(iVar2 + 0x38)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    if ((bVar6 != (bVar6 || *(float *)(iVar2 + 0x38) == *(float *)&REFG(undefined, 0x1088114))) &&
       (F_00be4ff0(this GEN_EDX_ARG), this[0xa6] != (undefined1)0x0)) {
      F_00bc38a0(this GEN_EDX_ARG);
    }
  }
  if (this[0x10] == (undefined1)0x0) {
    if ((iVar2 != 0) && (this[0xa6] != (undefined1)0x0)) {
      F_00be6510(this GEN_EDX_ARG);
    }
    if (this[0xc] != (undefined1)0x0) {
      if (*(int *)(this + 0x88) != 0) {
        pvVar5 = (undefined *)F_0054d920(this GEN_EDX_ARG);
        uVar4 = F_00bc1e50(pvVar5 GEN_EDX_ARG,0);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),(char)uVar4)));
        F_00be59d0(this GEN_EDX_ARG,4,(uint)(*(undefined * PTR32 *)(gen_frame + 0x8)));
        F_00bd2200((undefined *)this GEN_EDX_ARG,param_1);
        return;
      }
      F_00bc38a0(this GEN_EDX_ARG);
    }
    F_00bd2200((undefined *)this GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::HavokAnimationClip::vf0 */
GEN_FRAME uint GEN_THISCALL F_00be6700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c434));
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x23) == '\0') {
      F_00c1f1f0(iVar1 GEN_EDX_FWD,(float)(float10)0,(undefined4)gen_fl2bits((float)(float10)0));
    }
    F_00be4ff0(this GEN_EDX_ARG);
  }
  piVar2 = *(int * PTR32 *)(this + 0xb4);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,this);
  }
  F_00bd2e60(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be6770 */
GEN_FRAME float10 F_00be6770(float gen_a0)
{
  GEN_ENTER(0xbe6770u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be6790 */
GEN_NOFRAME uint GEN_THISCALL F_00be6790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe6790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c5d4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::RootTranslateClip::vf33 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00be67c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe67c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00be67fa;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00be67e5;
  }
  else {
LAB_00be67e5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00be67fa: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bbaf90(this_00 GEN_EDX_ARG);
    if (uVar3 != 0) {
      F_00aa1a30(uVar3 GEN_EDX_ARG,(float)(float10)0);
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::RootTranslateClip::vf34 */
GEN_NOFRAME byte GEN_THISCALL F_00be6820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::RootTranslateClip::vf29 */
GEN_FRAME uint GEN_THISCALL F_00be6830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6830u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  this = *(undefined * PTR32 *)(param_1 + 0x78);
  fVar1 = *((float *)GEN_TOP((*(int *)(param_2 + 0x1c) + 0x10)));
  if (this == (undefined *)0x0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
      }
      iVar3 = *(int *)(param_1 + 0x6c);
      if (iVar3 != 0) goto LAB_00be6869;
    }
    else {
LAB_00be6869: ;
      uVar2 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      F_00b595f0(uVar2);
    }
    this = *(undefined * PTR32 *)(param_1 + 0x78);
    if (this != (undefined *)0x0) goto LAB_00be6882;
    piVar6 = (int *)0x0;
  }
  else {
LAB_00be6882: ;
    if (*(char *)((int)this + 0x12) == '\0') {
      piVar6 = *(int * PTR32 *)((int)this + 4);
    }
    else {
      piVar6 = (int *)0x0;
    }
  }
  if (this == (undefined *)0x0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
      }
      iVar3 = *(int *)(param_1 + 0x6c);
      if (iVar3 != 0) goto LAB_00be68b6;
    }
    else {
LAB_00be68b6: ;
      uVar2 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(param_1 + 0x78) = uVar2;
      F_00b595f0(uVar2);
    }
    this = *(undefined * PTR32 *)(param_1 + 0x78);
    if (this == (undefined *)0x0) {
      uVar4 = 0;
      goto LAB_00be68da;
    }
  }
  uVar4 = F_00bbaf90(this GEN_EDX_ARG);
LAB_00be68da: ;
  if (piVar6 != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x84))(piVar6 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar1));
    return uVar4;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = F_00aa1a50(uVar4 GEN_EDX_ARG,fVar1);
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::RootTranslateClip::vf0 */
GEN_FRAME uint GEN_THISCALL F_00be6910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c5d4));
  F_00bd2e60(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be6940 */
GEN_NOFRAME uint GEN_THISCALL F_00be6940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe6940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c6f4));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::TransformClip::vf33 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00be6970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Scheduler::Clip::TransformClip::vf34 */
GEN_NOFRAME byte GEN_THISCALL F_00be6980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::TransformClip::vf29 */
GEN_NOFRAME uint GEN_THISCALL F_00be6990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 != 0) goto LAB_00be69e7;
  iVar5 = *(int *)(this + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 != 0) goto LAB_00be69d2;
  }
  else {
LAB_00be69d2: ;
    uVar4 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar4;
    F_00b595f0(uVar4);
  }
  iVar5 = *(int *)(this + 0x78);
LAB_00be69e7: ;
  if (iVar5 == 0) {
    (*(int * PTR32 *)(gen_frame + 0x7c)) = (int *)0x0;
  }
  else if (*(char *)(iVar5 + 0x12) == '\0') {
    (*(int * PTR32 *)(gen_frame + 0x7c)) = *(int * PTR32 *)(iVar5 + 4);
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x7c)) = (int *)0x0;
  }
  uVar6 = *((uint *)GEN_TOP((*(int *)(this + 0x24) + 0x10)));
  iVar5 = *(int *)(param_1 + 0x1c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)0x0;
  (*(float * PTR32 *)(gen_frame + 0x74)) = (float *)0x0;
  (*(float * PTR32 *)(gen_frame + 0x70)) = (float *)0x0;
  (*(uint *)(gen_frame + 0x60)) = uVar6;
  if ((uVar6 & 1) != 0) {
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar5 + 8);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar5 + 0xc);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar5 + 0x10);
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = &(*(undefined4 *)(gen_frame + 0x30));
  }
  if ((uVar6 & 2) != 0) {
    fVar1 = *(float *)(iVar5 + 0x18);
    (*(float *)(gen_frame + 0x6c)) = fVar1;
    (*(float *)(gen_frame + 0x68)) = *(float *)(iVar5 + 0x1c);
    fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 0x14) * (float10)*(double *)&REFG(undefined, 0x110c810))));
    (*(float * PTR32 *)(gen_frame + 0x74)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar3 = (float)((float10)fVar3 * (float10)REFG(double, 0x1088108));
    (*(float * PTR32 *)(gen_frame + 0x74)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar7 = ((float10)GEN_TOD(fsin((float10)fVar3)));
    (*(float *)(gen_frame + 0x64)) = (float)fVar7;
    ((float *)(gen_frame + 0x50))[0] = (float)fVar7;
    ((float *)(gen_frame + 0x50))[1] = 0.0;
    ((float *)(gen_frame + 0x50))[2] = 0.0;
    fVar7 = ((float10)GEN_TOD(fcos((float10)fVar3)));
    (*(float *)(gen_frame + 0x64)) = (float)fVar7;
    ((float *)(gen_frame + 0x50))[3] = (float)fVar7;
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
      (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x110c810));
      F_0054d030(((float *)(gen_frame + 0x50)) GEN_EDX_ARG,(float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x110c810)));
    }
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x68))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN((*(float *)(gen_frame + 0x68))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || (*(float *)(gen_frame + 0x68)) == *(float *)&REFG(undefined, 0x1088114))) {
      (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x68)) * (float10)*(double *)&REFG(undefined, 0x110c810));
      F_0054d0f0(((float *)(gen_frame + 0x50)) GEN_EDX_ARG,(float)((float10)(*(float *)(gen_frame + 0x68)) * (float10)*(double *)&REFG(undefined, 0x110c810)));
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,((float *)(gen_frame + 0x50)));
    (*(float * PTR32 *)(gen_frame + 0x74)) = ((float *)(gen_frame + 0x50));
  }
  if (((*(uint *)(gen_frame + 0x60)) & 4) != 0) {
    fVar1 = *(float *)(iVar5 + 0x24);
    fVar3 = *(float *)(iVar5 + 0x28);
    fVar2 = *(float *)(iVar5 + 0x2c);
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(float *)(gen_frame + 0x44)) = fVar3;
    (*(float *)(gen_frame + 0x48)) = fVar2;
    if ((GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) ||
       ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10b9490))) !=
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10b9490))) || fVar1 == REFG(float, 0x10b9490)))) {
      (*(float *)(gen_frame + 0x40)) = REFG(float, 0x10947f8);
    }
    if ((GEN_ISNAN(fVar3) != (GEN_ISNAN(fVar3) || fVar3 == 0.0)) ||
       ((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x10b9490))) !=
        ((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x10b9490))) || fVar3 == REFG(float, 0x10b9490)))) {
      (*(float *)(gen_frame + 0x44)) = REFG(float, 0x10947f8);
    }
    if ((GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0)) ||
       ((GEN_ISNAN(fVar2) || GEN_ISNAN(REFG(float, 0x10b9490))) !=
        ((GEN_ISNAN(fVar2) || GEN_ISNAN(REFG(float, 0x10b9490))) || fVar2 == REFG(float, 0x10b9490)))) {
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x10947f8);
    }
    (*(float * PTR32 *)(gen_frame + 0x70)) = &(*(float *)(gen_frame + 0x40));
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x78)) != (undefined4 *)0x0) {
    if (((*(float * PTR32 *)(gen_frame + 0x70)) != (float *)0x0) && ((*(float * PTR32 *)(gen_frame + 0x74)) != (float *)0x0)) {
      F_004f7210(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x78)),(*(float * PTR32 *)(gen_frame + 0x74)),(*(float * PTR32 *)(gen_frame + 0x70)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      return uVar6;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 8))((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x78)));
  }
  if ((*(float * PTR32 *)(gen_frame + 0x74)) != (float *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,(*(float * PTR32 *)(gen_frame + 0x74)));
  }
  uVar6 = 0;
  if ((*(float * PTR32 *)(gen_frame + 0x70)) != (float *)0x0) {
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x7c)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,(*(float * PTR32 *)(gen_frame + 0x70)));
  }
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::TransformClip::vf0 */
GEN_FRAME uint GEN_THISCALL F_00be6c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c6f4));
  F_00bd2e60(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be6c60 */
GEN_NOFRAME uint GEN_THISCALL F_00be6c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe6c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c81c));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf63 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00be6c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x88);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x88) = 0;
    }
    *(undefined4 *)(this + 0x88) = 0;
  }
  return;
}

/* ref: FUN_00be6cc0 */
GEN_NOFRAME uint GEN_THISCALL F_00be6cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe6cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c81c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x88);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x88) = 0;
    }
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  uVar3 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00be6d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe6d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  if (*(int *)(this + 0x88) == 0) {
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x80,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_00696b10(pvVar1 GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)(this + 0x88) = pvVar1;
    F_00696b50(pvVar1 GEN_EDX_ARG);
    *((byte *)GEN_TOP((*(int *)(this + 0x88) + 100))) = *((byte *)GEN_TOP((*(int *)(this + 0x88) + 100))) & 0xfe;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x10))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG);
  if (*((char *)GEN_TOP((*(int *)(this + 0x88) + 0x65))) == '\x03') {
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_00be6db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x88);
  if (uVar1 != 0) {
    *(byte *)(uVar1 + 100) = *(byte *)(uVar1 + 100) | 1;
  }
  F_00c21a00();
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf34 */
GEN_NOFRAME byte GEN_THISCALL F_00be6dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * pbVar1;
  
  F_00c21a10();
  if (*(int *)(this + 0x88) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 0x88) + 100)));
    *pbVar1 = *pbVar1 & 0xfe;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG,1);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf29 */
GEN_NOFRAME uint GEN_THISCALL F_00be6e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe6e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined * this_00;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  undefined4 uVar10;
  float * pfVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(int *)(gen_frame + 0x6c)) = *(int *)(this + 0x24);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar5 = *((int *)GEN_TOP((*(int *)(param_1 + 0x18) + 8)));
  if (0 < iVar5) {
    (*(float *)(gen_frame + 0x5c)) = 0.0;
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1094880);
    (*(float *)(gen_frame + 0x54)) = 0.0;
    (*(float *)(gen_frame + 0x48)) = 0.0;
    (*(float *)(gen_frame + 0x40)) = 0.0;
    (*(float *)(gen_frame + 0x38)) = 0.0;
    pfVar11 = (float *)(iVar4 + 0x40);
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1094884);
    (*(float * PTR32 *)(gen_frame + 0x64)) = pfVar11;
    (*(int *)(gen_frame + 0x60)) = iVar5;
    do {
      fVar13 = (float10)0;
      pfVar8 = pfVar11;
      if (!(fVar13 < (float10)*pfVar11)) {
        pfVar8 = &(*(float *)(gen_frame + 0x5c));
      }
      if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(*pfVar8)) || (REFG(float, 0x1094880) < *pfVar8 || REFG(uint, 0x1094880) == *pfVar8)
         ) {
        pfVar8 = &(*(float *)(gen_frame + 0x58));
      }
      (*(float *)(gen_frame + 0x4c)) = *pfVar8;
      pfVar6 = pfVar11 - 4;
      if (!(fVar13 < (float10)pfVar11[-4])) {
        pfVar6 = &(*(float *)(gen_frame + 0x54));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar6)) || (REFG(float, 0x1087f04) < *pfVar6 || REFG(uint, 0x1087f04) == *pfVar6)
         ) {
        pfVar6 = &(*(float *)(gen_frame + 0x50));
      }
      fVar1 = *pfVar6;
      pfVar6 = pfVar11 - 3;
      fVar12 = (float10)*pfVar8;
      (*(float *)(gen_frame + 0x68)) = (float)(fVar12 * (float10)fVar1);
      if (!(fVar13 < (float10)pfVar11[-3])) {
        pfVar6 = &(*(float *)(gen_frame + 0x48));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar6)) || (REFG(float, 0x1087f04) < *pfVar6 || REFG(uint, 0x1087f04) == *pfVar6)
         ) {
        pfVar6 = &(*(float *)(gen_frame + 0x44));
      }
      pfVar8 = pfVar11 - 2;
      (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar6 * fVar12);
      if (!(fVar13 < (float10)pfVar11[-2])) {
        pfVar8 = &(*(float *)(gen_frame + 0x40));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar8)) || (REFG(float, 0x1087f04) < *pfVar8 || REFG(uint, 0x1087f04) == *pfVar8)
         ) {
        pfVar8 = &(*(float *)(gen_frame + 0x3c));
      }
      pfVar7 = pfVar11 - 1;
      (*(float *)(gen_frame + 0x2c)) = (float)(fVar12 * (float10)*pfVar8);
      if (!(fVar13 < (float10)pfVar11[-1])) {
        pfVar7 = &(*(float *)(gen_frame + 0x38));
      }
      if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar7)) || (REFG(float, 0x1087f04) < *pfVar7 || REFG(uint, 0x1087f04) == *pfVar7)
         ) {
        pfVar7 = &(*(float *)(gen_frame + 0x34));
      }
      fVar13 = (float10)(float)(fVar12 * (float10)fVar1);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar13 * fVar13);
      (*(float *)(gen_frame + 0x24)) = *pfVar7;
      fVar13 = (float10)(float)((float10)*pfVar6 * fVar12);
      (*(float *)(gen_frame + 0x1c)) = (float)(fVar13 * fVar13);
      fVar13 = (float10)(float)(fVar12 * (float10)*pfVar8);
      (*(float *)(gen_frame + 0x20)) = (float)(fVar13 * fVar13);
      (*(float * PTR32 *)(gen_frame + 0x64)) = pfVar11;
      F_004eeed0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,(uint)(pfVar11 + 0x24));
      iVar4 = *(int *)(this + 0x88);
      *(float *)(iVar4 + 0x30) = pfVar11[0x30];
      fVar1 = REFG(float, 0x1087f04);
      *(float *)(iVar4 + 0x34) = pfVar11[0x31];
      *(float *)(iVar4 + 0x38) = pfVar11[0x32];
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
      iVar4 = *(int *)(this + 0x88);
      *(undefined4 *)(iVar4 + 0x40) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)(iVar4 + 0x44) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)(iVar4 + 0x48) = (*(undefined4 *)(gen_frame + 0x8));
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
      *(undefined4 *)(iVar4 + 0x4c) = (*(undefined4 *)(gen_frame + 0xc));
      iVar4 = *(int *)(this + 0x88);
      *(float *)(iVar4 + 0x50) = fVar1;
      *(float *)(iVar4 + 0x54) = fVar1;
      *(float *)(iVar4 + 0x58) = fVar1;
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
      cVar3 = *(char *)((int)pfVar11 - 0x3b);
      uVar10 = 0;
      if (cVar3 == '\x03') {
        uVar10 = 1;
      }
      else if (cVar3 == '\x04') {
        uVar10 = 2;
      }
      else if (cVar3 == '\x05') {
        uVar10 = 3;
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 0xc))) = uVar10;
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70)));
      *(float *)(iVar4 + 0x14) = (*(float *)(gen_frame + 0x18));
      *(float *)(iVar4 + 0x18) = (*(float *)(gen_frame + 0x1c));
      *(float *)(iVar4 + 0x1c) = (*(float *)(gen_frame + 0x20));
      *(float *)(iVar4 + 0x20) = (*(float *)(gen_frame + 0x24));
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70)));
      pfVar8 = &(*(float *)(gen_frame + 0x68));
      *(float *)(iVar4 + 0x74) = pfVar11[2];
      fVar2 = *(float *)((*(int *)(gen_frame + 0x6c)) + 0x14);
      (*(float *)(gen_frame + 0x68)) = fVar2;
      if (!(REFG(double, 0x1094800) < (double)fVar2)) {
        pfVar8 = &(*(float *)(gen_frame + 0x28));
      }
      *(float *)(iVar4 + 0x50) = *pfVar8;
      *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) =
           (ushort)(*(char *)((*(int *)(gen_frame + 0x6c)) + 0x12) != '\0') * 4 |
           *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) & 0xfffb;
      *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) =
           (ushort)(*(char *)((*(int *)(gen_frame + 0x6c)) + 0x11) != '\0') << 3 |
           *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) & 0xfff7;
      *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) =
           (ushort)(*(char *)((*(int *)(gen_frame + 0x6c)) + 0x10) != '\0') |
           *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 8))) & 0xfffe;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))) + 0x58))) = 1;
      this_00 = *(undefined * PTR32 *)(this + 0x88);
      *((float *)GEN_TOP((*(int *)((int)this_00 + 0x70) + 0x70))) = fVar1;
      F_0068b3c0(this_00 GEN_EDX_ARG,1);
      pfVar11 = (*(float * PTR32 *)(gen_frame + 0x64)) + 100;
      iVar4 = (*(int *)(gen_frame + 0x60)) - 1;
      (*(int *)(gen_frame + 0x60)) = iVar4;
      (*(float * PTR32 *)(gen_frame + 0x64)) = pfVar11;
    } while (iVar4 != 0);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x10))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG);
  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x18))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG);
  return uVar9;
}

/* ref: Client::System::Scheduler::Clip::BGLightClip::vf0 */
GEN_FRAME uint GEN_THISCALL F_00be7130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c81c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x88);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x88) = 0;
    }
    *(undefined4 *)(this + 0x88) = 0;
  }
  F_00bd2e60(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be7190 */
GEN_FRAME byte GEN_THISCALL F_00be7190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7190u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0xa0) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_00be71c0 */
GEN_FRAME uint GEN_THISCALL F_00be71c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe71c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xb0) = param_2;
  return param_2;
}

/* ref: FUN_00be71d0 */
GEN_FRAME float10 F_00be71d0(float gen_a0)
{
  GEN_ENTER(0xbe71d0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00be71f0 */
GEN_NOFRAME uint GEN_THISCALL F_00be71f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe71f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c9bc));
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf26 */
GEN_NOFRAME unsigned int F_00be7230(void)
{
  GEN_ENTER(0xbe7230u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf7 */
GEN_FRAME uint GEN_THISCALL F_00be7240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe7240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 extraout_ST0;
  double dVar2;
  float fVar3;
  
  uVar1 = *(uint *)(this + 0x24);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x5c) == '\0')) {
LAB_00be7256: ;
    return uVar1 & 0xffffff00;
  }
  fVar3 = F_00bd2390(this GEN_EDX_FWD);
  if (!((float10)fVar3 < (float10)0)) {
    fVar3 = F_00bd2390(this GEN_EDX_ARG);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    uVar1 = (uint)(ulonglong)gen_d2bits(dVar2); dVar2 = extraout_ST0;
    if (!(extraout_ST0 <= (float10)fVar3)) goto LAB_00be7256;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,7);
  return uVar1;
}

/* ref: FUN_00be72a0 */
GEN_FRAME uint GEN_THISCALL F_00be72a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbe72a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = (undefined *)0x0;
  if ((param_1 == -1) && ((*(int *)&gen_a2) == -1)) {
    return 0;
  }
  uVar2 = F_0052ed20(REFG(void * PTR32, 0x1375b00) GEN_EDX_FWD,param_1,0,0);
  uVar3 = F_0052ed20(REFG(void * PTR32, 0x1375b00) GEN_EDX_ARG,(*(int *)&gen_a2),0,0);
  if ((uVar2 != 0) || (uVar3 != 0)) {
    this_00 = (undefined *)F_0052f4b0(REFG(void * PTR32, 0x1375b00) GEN_EDX_ARG);
    bVar1 = F_00b63030(this_00 GEN_EDX_ARG,0,uVar2,&REFG(float, 0x1302df0),param_3,uVar3,&REFG(float, 0x1302df0),param_4,param_5);
    if (bVar1 != 0) {
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x50) + 0xb0))) = this;
    }
  }
  return (uint)this_00;
}

/* ref: FUN_00be7340 */
GEN_NOFRAME uint GEN_THISCALL F_00be7340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe7340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x8c);
  iVar3 = 3;
  do {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = F_0052f4f0(REFG(void * PTR32, 0x1375b00) GEN_EDX_FWD,*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00be7380 */
GEN_NOFRAME uint GEN_THISCALL F_00be7380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe7380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110c9bc));
  piVar2 = (int *)((int)this + 0x8c);
  iVar3 = 3;
  do {
    if (*piVar2 != 0) {
      F_0052f4f0(REFG(void * PTR32, 0x1375b00) GEN_EDX_FWD,*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  uVar1 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf34 */
GEN_NOFRAME byte GEN_THISCALL F_00be73c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe73c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pCVar2;
  int iVar3;
  
  pCVar2 = this + 0x8c;
  iVar3 = 3;
  do {
    if (*(int *)pCVar2 != 0) {
      F_0052f4f0(REFG(void * PTR32, 0x1375b00) GEN_EDX_FWD,*(int *)pCVar2);
      *(int *)pCVar2 = 0;
    }
    pCVar2 = pCVar2 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  uVar1 = F_00bd3f80(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00bd3f80(this GEN_EDX_ARG);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_00be7410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe7410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = F_00bd3f80(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    uVar1 = F_00bd3f80(this GEN_EDX_ARG);
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x38);
    if (this_00 != (undefined *)0x0) {
      *(undefined1 *)((int)this_00 + 0x144) = 0;
      F_00beb300(this_00 GEN_EDX_ARG);
    }
    uVar1 = F_00be7340(this GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00be7440 */
GEN_FRAME uint GEN_THISCALL F_00be7440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe7440u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[3]) * 4 + 0x8c)));
  if (piVar3 != (int *)0x0) {
    if (((char)(*(uint *)&gen_args[4]) == '\x01') ||
       ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) & 1 << ((byte)(*(int *)&gen_args[3]) & 0x1f)) == 0)) {
      (*(uint *)&gen_args[4]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[4]), 1, 3),(char)(*(uint *)(piVar3[0x14] + 0xa0) >> 2)) & 0xffffff01;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_FWD);
      piVar3 = (int *)F_00c21d70((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),uVar2,(*(uint *)&gen_args[4]));
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) | 1 << ((byte)(*(int *)&gen_args[3]) & 0x1f);
    return (uint)piVar3;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x150))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x150))), REFG(float, 0x1087f04));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x154))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x158))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x160))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x164))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x168))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x170))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x174))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x178))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x184))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x188))) = 0;
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf33 */
GEN_FRAME uint GEN_THISCALL F_00be7530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  float * in_ecx;
  float fVar1;
  int iVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  F_00c219f0();
  F_00c22060(*(undefined4 *)(this + 0x20) GEN_EDX_ARG,(float)(float10)0);
  this[0x88] = (undefined1)0x1;
  this_00 = (undefined *)F_00bd3f80(this GEN_EDX_ARG);
  if (this_00 != (undefined *)0x0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    bVar3 = F_00b60790(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    while (bVar3 != 0) {
      if (((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x2c) == 1) && ((*(undefined * PTR32 *)(gen_frame + 0x4)) != this)) &&
         ((*(undefined * PTR32 *)(gen_frame + 0x4))[0xc] != (undefined1)0x0)) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0xec))((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,10);
      }
      bVar3 = F_00b60790(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    }
  }
  iVar2 = *(int *)(this + 0x24);
  if (((*(char *)(REFG(int, 0x1371290) + 0x310) == '\x01') &&
      (in_ecx = (float *)(REFG(int, 0x1371290) + 0x28c), in_ecx != (float *)0x0)) &&
     ((fVar1 = *in_ecx, GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0) &&
      (0.0 < *(float *)(REFG(int, 0x1371290) + 0x290))))) {
    F_004ada80(in_ecx GEN_EDX_ARG);
  }
  fVar1 = *(float *)(this + 0x34);
  if (GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    F_004ade20();
  }
  REFG(undefined1, 0x1301314) = 1;
  uVar4 = F_00c21b30(*(undefined * PTR32 *)(this + 0x20) GEN_EDX_ARG);
  *(undefined4 *)(this + 0xa0) = 0;
  if (*(int *)(this + 0x9c) == 0) {
    uVar4 = F_00be72a0(this GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x24),
                         *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x28),
                         (uint)(*(int *)(iVar2 + 0x2c) != 1) * 4 + 2);
    *(uint *)(this + 0x8c) = uVar4;
    uVar4 = F_00be72a0(this GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x48),*(undefined4 *)(iVar2 + 0x50),
                         *(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x54),2);
    *(uint *)(this + 0x90) = uVar4;
    uVar4 = F_00be72a0(this GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x3c),
                         *(undefined4 *)(iVar2 + 0x38),*(undefined4 *)(iVar2 + 0x40),2);
    *(uint *)(this + 0x94) = uVar4;
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
    if (*(int *)(this + 0x8c) != 0) {
      *(undefined4 *)(this + 0x9c) = 1;
    }
    if (*(int *)(this + 0x90) != 0) {
      *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) | 2;
    }
    if (uVar4 != 0) {
      *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) | 4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00be7710 */
GEN_NOFRAME uint GEN_THISCALL F_00be7710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  
  uVar7 = F_00bd3f80(this GEN_EDX_FWD);
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = F_00bd3f80(this GEN_EDX_ARG);
    uVar7 = *(uint *)(uVar8 + 0x38);
    if (uVar7 != 0) {
      uVar8 = F_00c21a20(param_1 GEN_EDX_ARG,2);
      if (uVar8 != 0) {
        (*(float *)(gen_frame + 0x0)) = *(float *)(uVar8 + 0x100);
        (*(float *)(gen_frame + 0x4)) = *(float *)(uVar8 + 0x104);
        (*(float *)(gen_frame + 0x8)) = *(float *)(uVar8 + 0x108);
        *(float *)(uVar7 + 0x40) = (*(float *)(gen_frame + 0x0));
        *(float *)(uVar7 + 0x44) = (*(float *)(gen_frame + 0x4));
        *(float *)(uVar7 + 0x48) = (*(float *)(gen_frame + 0x8));
        *(uint *)(uVar7 + 0x34) = *(uint *)(uVar7 + 0x34) | 2;
      }
      uVar8 = F_00c21a20(param_1 GEN_EDX_ARG,3);
      if (uVar8 != 0) {
        uVar1 = *(undefined4 *)(uVar8 + 0x104);
        uVar2 = *(undefined4 *)(uVar8 + 0x108);
        *(undefined4 *)(uVar7 + 0x70) = *(undefined4 *)(uVar8 + 0x100);
        *(undefined4 *)(uVar7 + 0x74) = uVar1;
        *(undefined4 *)(uVar7 + 0x78) = uVar2;
      }
      uVar8 = F_00c21a20(param_1 GEN_EDX_ARG,4);
      if (uVar8 != 0) {
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(uVar8 + 0x100) - (float10)(*(float *)(gen_frame + 0x0)))));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(uVar8 + 0x104) - (float10)(*(float *)(gen_frame + 0x4)))));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(uVar8 + 0x108) - (float10)(*(float *)(gen_frame + 0x8)))));
        F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
        *(float *)(uVar7 + 0x80) = (*(float *)(gen_frame + 0x10));
        *(float *)(uVar7 + 0x84) = (*(float *)(gen_frame + 0x14));
        *(float *)(uVar7 + 0x88) = (*(float *)(gen_frame + 0x18));
      }
      fVar3 = ((float)GEN_TOF((((float10)*(float *)((int)param_1 + 0x34) * (float10)*(double *)&REFG(undefined, 0x1080228))
                     / (float10)*(double *)&REFG(undefined, 0x1080220))));
      (*(float *)(gen_frame + 0x24)) = fVar3;
      *(float *)(uVar7 + 0xd4) = ((float)GEN_TOF(-(float10)fVar3));
      fVar3 = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x110cad8) / (float10)*(float *)((int)param_1 + 0x30))));
      (*(float *)(gen_frame + 0x24)) = fVar3;
      fVar9 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,5)));
      (*(float *)(gen_frame + 0x24)) = (float)fVar9;
      fVar9 = (float10)(float)fVar9;
      fVar3 = (float)(fVar9 + fVar9);
      (*(float *)(gen_frame + 0x2c)) = fVar3;
      fVar9 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
      if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar4 = (float)fVar9;
      (*(float *)(gen_frame + 0x24)) = fVar4;
      fVar9 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
      if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar5 = (float)fVar9;
      (*(float *)(gen_frame + 0x28)) = fVar5;
      if ((float10)fVar4 / (float10)fVar5 < (float10)*(double *)&REFG(undefined, 0x10968c8)) {
        fVar3 = (float)((float10)fVar3 * (float10)REFG(double, 0x1088108));
        (*(float *)(gen_frame + 0x2c)) = fVar3;
        fVar9 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,4)));
        (*(float *)(gen_frame + 0x2c)) = (float)fVar9;
        fVar3 = ((float)GEN_TOF((((float10)(float)fVar9 * (float10)*(double *)&REFG(undefined, 0x10968a8)) /
                       (float10)*(double *)&REFG(undefined, 0x109cac0))));
        (*(float *)(gen_frame + 0x2c)) = fVar3;
        fVar3 = ((float)GEN_TOF((((float10)fVar3 * (float10)fVar5) / (float10)fVar4)));
        (*(float *)(gen_frame + 0x24)) = fVar3;
        fVar9 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,5)));
        (*(float *)(gen_frame + 0x24)) = (float)fVar9;
        fVar9 = (float10)(float)fVar9;
        (*(float *)(gen_frame + 0x2c)) = (float)(fVar9 + fVar9);
      }
      *((float *)GEN_TOP((*(int *)(uVar7 + 0xd0) + 0xa4))) = (*(float *)(gen_frame + 0x2c));
      if ((*(uint *)(uVar7 + 0xd8) >> 1 & 1) == 0) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar7 + 0xd0) + 0xa8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*(int *)(uVar7 + 0xd0) + 0xa8))), REFG(float, 0x1096cd4));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(uVar7 + 0x10) + 0x10))))(uVar7 + 0x10 GEN_EDX_ARG);
      *(undefined1 *)(uVar7 + 0x144) = 1;
      uVar8 = uVar7;
    }
  }
  return uVar8;
}

/* ref: FUN_00be7940 */
GEN_FRAME byte GEN_THISCALL F_00be7940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe7940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined * this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int * piVar10;
  int * piVar11;
  undefined4 uVar12;
  int local_c;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x20);
  piVar10 = *(int * PTR32 *)((int)this_00 + 0x1c);
  iVar7 = *(int *)((int)this + 0x24);
  bVar4 = false;
  bVar2 = false;
  bVar3 = false;
  local_c = 0;
  piVar11 = piVar10;
  if (0 < *((int *)GEN_TOP((*(int *)((int)this_00 + 0x18) + 8)))) {
    do {
      piVar6 = (int *)0x0;
      if (*piVar11 != -1) {
        piVar6 = piVar10 + *piVar11 * 100;
      }
      cVar1 = (char)piVar11[1];
      if (cVar1 == '\x01') {
        if (!bVar4) {
          bVar4 = true;
          uVar9 = (uint)(*(int *)(iVar7 + 0x30) == 0);
          uVar12 = 0;
          goto LAB_00be79e9;
        }
      }
      else if (cVar1 == '\x02') {
        if (!bVar3) {
          bVar3 = true;
          uVar9 = (uint)(*(int *)(iVar7 + 0x44) == 0);
          uVar12 = 2;
          goto LAB_00be79e9;
        }
      }
      else if ((cVar1 == '\x03') && (!bVar2)) {
        bVar2 = true;
        uVar9 = (uint)(*(int *)(iVar7 + 0x58) == 0);
        uVar12 = 1;
LAB_00be79e9: ;
        F_00be7440(this GEN_EDX_FWD,piVar11,piVar6,uVar12,uVar9);
      }
      F_00c21cb0(this_00 GEN_EDX_ARG,local_c);
      local_c = local_c + 1;
      piVar11 = piVar11 + 100;
    } while (local_c < *((int *)GEN_TOP((*(int *)((int)this_00 + 0x18) + 8))));
  }
  F_00be7710(this GEN_EDX_ARG,this_00);
  iVar7 = *(int *)((int)this + 0x74);
  if (iVar7 == 0) {
    piVar10 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar10 == (int *)0x0) {
      iVar7 = *(int *)((int)this + 0x6c);
      if (iVar7 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar7 = *(int *)((int)this + 0x6c);
        if (iVar7 != 0) goto LAB_00be7a4d;
      }
      else {
LAB_00be7a4d: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar7 + 4);
      }
      piVar10 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar10 != (int *)0x0) goto LAB_00be7a5a;
    }
    else {
LAB_00be7a5a: ;
      uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 100))(piVar10 GEN_EDX_ARG);
      *(uint *)((int)this + 0x74) = uVar9;
    }
    iVar7 = *(int *)((int)this + 0x74);
    iVar8 = 0;
    if (iVar7 == 0) goto LAB_00be7a78;
  }
  iVar8 = 0;
  if (*(int *)(iVar7 + 0xdc) != 0) {
    iVar8 = *((int *)GEN_TOP((*(int *)(iVar7 + 0xdc) + 4)));
  }
LAB_00be7a78: ;
  iVar7 = *(int *)(iVar8 + 0x38);
  bVar5 = 0;
  if (iVar7 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x10) + 0x10))))(iVar7 + 0x10 GEN_EDX_ARG);
    bVar5 = 1;
    if (*(char *)((int)this + 0x88) == '\x01') {
      *(undefined1 *)((int)this + 0x88) = 0;
      *(undefined1 *)(REFG(int, 0x1370c1c) + 5) = 1;
    }
  }
  return bVar5;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf29 */
GEN_FRAME uint GEN_THISCALL F_00be7ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x9c) == 0) {
    uVar2 = F_00be7710(this GEN_EDX_FWD,param_1);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
    if (this[0x88] == (undefined1)0x1) {
      this[0x88] = (undefined1)0x0;
      *(undefined1 *)(REFG(int, 0x1370c1c) + 5) = 1;
      return uVar2;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(this + 0x8c) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x50))) + 0xac))) = uVar1;
    }
    uVar2 = *(uint *)(this + 0x90);
    if (uVar2 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x50) + 0xac))) = uVar1;
    }
    if (*(int *)(this + 0x94) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x94) + 0x50))) + 0xac))) = uVar1;
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf69 */
GEN_FRAME uint GEN_THISCALL F_00be7b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined * this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined * pCVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int * piVar10;
  int * piVar11;
  undefined4 uVar12;
  int local_c;
  
  iVar8 = 0;
  pCVar5 = this + 0x8c;
  do {
    if (*(int *)pCVar5 == param_1) break;
    iVar8 = iVar8 + 1;
    pCVar5 = pCVar5 + 4;
  } while (iVar8 < 3);
  pCVar5 = this + 0x98;
  *(uint *)pCVar5 = *(uint *)pCVar5 ^ 1 << ((byte)iVar8 & 0x1f);
  if ((*(uint *)pCVar5 != 0) && (*(uint *)(this + 0x98) != *(uint *)(this + 0x9c))) {
    return *(uint *)(this + 0x98);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x20);
  piVar10 = *(int * PTR32 *)((int)this_00 + 0x1c);
  iVar8 = *(int *)(this + 0x24);
  bVar4 = false;
  bVar2 = false;
  bVar3 = false;
  local_c = 0;
  piVar11 = piVar10;
  if (0 < *((int *)GEN_TOP((*(int *)((int)this_00 + 0x18) + 8)))) {
    do {
      piVar6 = (int *)0x0;
      if (*piVar11 != -1) {
        piVar6 = piVar10 + *piVar11 * 100;
      }
      cVar1 = (char)piVar11[1];
      if (cVar1 == '\x01') {
        if (!bVar4) {
          bVar4 = true;
          uVar9 = (uint)(*(int *)(iVar8 + 0x30) == 0);
          uVar12 = 0;
          goto LAB_00be7c20;
        }
      }
      else if (cVar1 == '\x02') {
        if (!bVar3) {
          bVar3 = true;
          uVar9 = (uint)(*(int *)(iVar8 + 0x44) == 0);
          uVar12 = 2;
          goto LAB_00be7c20;
        }
      }
      else if ((cVar1 == '\x03') && (!bVar2)) {
        bVar2 = true;
        uVar9 = (uint)(*(int *)(iVar8 + 0x58) == 0);
        uVar12 = 1;
LAB_00be7c20: ;
        F_00be7440(this GEN_EDX_FWD,piVar11,piVar6,uVar12,uVar9);
      }
      F_00c21cb0(this_00 GEN_EDX_ARG,local_c);
      local_c = local_c + 1;
      piVar11 = piVar11 + 100;
    } while (local_c < *((int *)GEN_TOP((*(int *)((int)this_00 + 0x18) + 8))));
  }
  F_00be7710(this GEN_EDX_ARG,this_00);
  iVar8 = *(int *)(this + 0x74);
  if (iVar8 == 0) {
    piVar10 = *(int * PTR32 *)(this + 0x70);
    if (piVar10 == (int *)0x0) {
      iVar8 = *(int *)(this + 0x6c);
      if (iVar8 == 0) {
        if (*(int *)(this + 4) != 0) {
          *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
        }
        iVar8 = *(int *)(this + 0x6c);
        if (iVar8 != 0) goto LAB_00be7c86;
      }
      else {
LAB_00be7c86: ;
        *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar8 + 4);
      }
      piVar10 = *(int * PTR32 *)(this + 0x70);
      if (piVar10 != (int *)0x0) goto LAB_00be7c93;
    }
    else {
LAB_00be7c93: ;
      uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 100))(piVar10 GEN_EDX_ARG);
      *(uint *)(this + 0x74) = uVar9;
    }
    iVar8 = *(int *)(this + 0x74);
    iVar7 = 0;
    if (iVar8 == 0) goto LAB_00be7cb1;
  }
  iVar7 = 0;
  if (*(int *)(iVar8 + 0xdc) != 0) {
    iVar7 = *((int *)GEN_TOP((*(int *)(iVar8 + 0xdc) + 4)));
  }
LAB_00be7cb1: ;
  iVar8 = *(int *)(iVar7 + 0x38);
  uVar9 = 0;
  if ((iVar8 != 0) &&
     (uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar8 + 0x10) + 0x10))))(iVar8 + 0x10 GEN_EDX_ARG),
     this[0x88] == (undefined1)0x1)) {
    this[0x88] = (undefined1)0x0;
    *(undefined1 *)(REFG(int, 0x1370c1c) + 5) = 1;
  }
  return uVar9;
}

/* ref: Client::System::Scheduler::Clip::CameraClip::vf0 */
GEN_FRAME uint GEN_THISCALL F_00be7cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe7cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00be7380(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be7d20 */
GEN_FRAME float10 F_00be7d20(float gen_a0)
{
  GEN_ENTER(0xbe7d20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Control::UIControl::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00be7d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbe7d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: FUN_00be7d50 */
GEN_FRAME uint GEN_STDCALL F_00be7d50(unsigned int gen_a0)
{
  GEN_ENTER(0xbe7d50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))(param_1 GEN_EDX_ARG);
    if (uVar1 != 0) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))(param_1 GEN_EDX_ARG)));
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
      return uVar1;
    }
  }
  return 0x110cb62;
}

/* ref: FUN_00be7d90 */
GEN_FRAME byte GEN_THISCALL F_00be7d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe7d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  if (REFG(void * PTR32, 0x1370c0c) == (undefined *)0x0) {
    return 0;
  }
  bVar2 = F_00410ab0(REFG(void * PTR32, 0x1370c0c) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x0)));
  if ((bVar2 == 0) ||
     (bVar2 = F_00410ac0(REFG(void * PTR32, 0x1370c0c) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x18))), bVar2 == 0))
  goto LAB_00be7f4b;
  iVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x14))) - (int)gen_fl2bits((*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(iVar3);
  fVar5 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0xc)) = (float)fVar5;
  fVar5 = (float10)(float)fVar5;
  fVar6 = (float10)(*(int *)(gen_frame + 0x8));
  if ((*(int *)(gen_frame + 0x8)) < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_2 = (float)(fVar5 / fVar6);
  iVar3 = (*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(iVar3);
  fVar6 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0xc)) = (float)fVar6;
  fVar6 = (float10)(float)fVar6;
  fVar7 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x0)));
  if ((int)gen_fl2bits((*(float *)(gen_frame + 0x0))) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_3 = (float)(fVar6 / fVar7);
  fVar7 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
  if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = *(float *)(REFG(int, 0x1370b90) + 0x90);
  (*(float *)(gen_frame + 0xc)) = (float)fVar7;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar8 = (float10)(int)gen_fl2bits(fVar1);
  if ((int)gen_fl2bits(fVar1) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x0)) = (float)fVar8;
  fVar9 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar10 = (float10)(float)fVar8;
  fVar8 = (float10)0;
  if ((*(float *)(gen_frame + 0x10)) == 0.0) {
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x14));
    fVar11 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x14)));
    if ((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) < 0) {
      fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar11 = fVar10 - fVar11;
    if ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar8)) && !(fVar11 <= fVar8)) goto LAB_00be7ebc;
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1090718);
  }
  else {
LAB_00be7ebc: ;
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
    fVar11 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x10)));
    if ((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) < 0) {
      fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar5 = (fVar11 + (fVar5 / fVar9) * (float10)*(double *)&REFG(undefined, 0x1090718)) / (fVar10 / fVar9);
  }
  *param_5 = (float)fVar5;
  fVar5 = (float10)(float)fVar7;
  if ((*(int *)(gen_frame + 0x4)) == 0) {
    fVar7 = (float10)(*(int *)(gen_frame + 0x18));
    if ((*(int *)(gen_frame + 0x18)) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if (!(fVar8 < fVar5 - fVar7)) {
      *(float *)param_4 = (float)*(double *)&REFG(undefined, 0x110cb68);
      goto LAB_00be7f4b;
    }
  }
  fVar7 = (float10)(*(int *)(gen_frame + 0x4));
  if ((*(int *)(gen_frame + 0x4)) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)param_4 =
       ((float)GEN_TOF(((fVar7 + (fVar6 / fVar9) * (float10)*(double *)&REFG(undefined, 0x110cb68)) / (fVar5 / fVar9))));
LAB_00be7f4b: ;
  fVar5 = (float10)*param_2;
  bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x1c)) || GEN_ISNAN(fVar5);
  if ((((bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x1c) == fVar5)) &&
       (bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x20)) || GEN_ISNAN((float10)*param_3),
       bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x20) == (float10)*param_3))) &&
      (bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x24)) || GEN_ISNAN((float10)*param_5),
      bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x24) == (float10)*param_5))) &&
     (bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x28)) || GEN_ISNAN((float10)*(float *)param_4),
     bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x28) == (float10)*(float *)param_4))) {
    return 0;
  }
  *(float *)(param_1 + 0x1c) = *param_2;
  *(float *)(param_1 + 0x20) = *param_3;
  *(float *)(param_1 + 0x24) = *param_5;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)param_4;
  return 1;
}

/* ref: FUN_00be7fc0 */
GEN_FRAME byte GEN_THISCALL F_00be7fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe7fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  float10 fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int local_1c;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar7 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
  if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  local_c = (float)fVar7;
  fVar7 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
  if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  local_10 = (float)fVar7;
  fVar7 = (float10)local_c;
  local_8 = 0.0;
  local_14 = 0.0;
  fVar8 = (float10)local_10;
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10968c8);
  if (fVar9 < fVar7 / fVar8) {
    local_c = (float)(fVar9 * fVar8);
    local_8 = ((float)GEN_TOF(((fVar7 - (float10)local_c) * (float10)REFG(double, 0x1088108))));
  }
  else {
    local_10 = (float)(fVar7 / fVar9);
    local_14 = ((float)GEN_TOF(((fVar8 - (float10)local_10) * (float10)REFG(double, 0x1088108))));
  }
  local_1c = (int)(longlong)TRUNC((float10)local_8);
  iVar2 = local_1c;
  local_1c = (int)(longlong)TRUNC((float10)local_14);
  iVar3 = local_1c;
  local_1c = (int)(longlong)TRUNC((float10)local_c + (float10)local_8);
  iVar4 = local_1c;
  iVar5 = local_1c - iVar2;
  local_1c = (int)(longlong)TRUNC((float10)local_14 + (float10)local_10);
  fVar9 = (float10)iVar5;
  if (iVar5 < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)param_2 = (float)((float10)(float)fVar9 / (float10)*(double *)&REFG(undefined, 0x10c5fd0));
  fVar10 = (float10)(local_1c - iVar3);
  if (local_1c - iVar3 < 0) {
    fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_3 = (float)((float10)(float)fVar10 / (float10)*(double *)&REFG(undefined, 0x110cb70));
  fVar11 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar1 = (float10)0;
  if (iVar2 == 0) {
    fVar12 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if ((!GEN_ISNAN(fVar7 - fVar12) && !GEN_ISNAN(fVar1)) && !(fVar7 - fVar12 <= fVar1)) goto LAB_00be814b;
    fVar7 = (float10)*(double *)&REFG(undefined, 0x1090718);
  }
  else {
LAB_00be814b: ;
    fVar12 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar7 = (fVar12 + ((float10)(float)fVar9 / fVar11) * (float10)*(double *)&REFG(undefined, 0x1090718)) /
            (fVar7 / fVar11);
  }
  *(float *)param_5 = (float)fVar7;
  if (iVar3 == 0) {
    fVar7 = (float10)local_1c;
    if (local_1c < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if (!(fVar1 < fVar8 - fVar7)) {
      fVar7 = (float10)*(double *)&REFG(undefined, 0x110cb68);
      goto LAB_00be81c6;
    }
  }
  fVar7 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar7 = (fVar7 + ((float10)(float)fVar10 / fVar11) * (float10)*(double *)&REFG(undefined, 0x110cb68)) /
          (fVar8 / fVar11);
LAB_00be81c6: ;
  fVar8 = (float10)(float)fVar7;
  *param_4 = (float)fVar7;
  fVar7 = (float10)*(float *)param_2;
  bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x1c)) || GEN_ISNAN(fVar7);
  if ((((bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x1c) == fVar7)) &&
       (bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x20)) || GEN_ISNAN((float10)*param_3),
       bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x20) == (float10)*param_3))) &&
      (bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x24)) || GEN_ISNAN((float10)*(float *)param_5),
      bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x24) == (float10)*(float *)param_5))) &&
     (bVar6 = GEN_ISNAN((float10)*(float *)(param_1 + 0x28)) || GEN_ISNAN(fVar8),
     bVar6 != (bVar6 || (float10)*(float *)(param_1 + 0x28) == fVar8))) {
    return 0;
  }
  *(float *)(param_1 + 0x1c) = *(float *)param_2;
  *(float *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)param_5;
  *(float *)(param_1 + 0x28) = *param_4;
  return 1;
}

/* ref: FUN_00be8250 */
GEN_FRAME uint GEN_THISCALL F_00be8250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbe8250u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte * pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  pbVar8 = (*(byte * PTR32 *)&gen_args[2]);
  uVar5 = 0;
  if (piVar1 != (int *)0x0) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = (*(uint *)&gen_args[1]);
    uVar5 = (*(uint *)&gen_args[1]);
    switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[1]))) {
    case 0: ;
      if (((*(byte * PTR32 *)&gen_args[2])[0x20] & 0xf) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x24)));
      }
      F_00be9e10((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)(iVar2 == 0));
      uVar6 = 0x39;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      pvVar3 = (undefined *)F_00763050(uVar5 GEN_EDX_ARG,uVar6);
      uVar5 = 0;
      if (pvVar3 != (undefined *)0x0) {
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
          uVar5 = F_007d0ef0(pvVar3 GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(undefined4 *)&gen_args[3]),pbVar8);
          return uVar5;
        }
        uVar5 = F_0086aef0(pvVar3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[3]),pbVar8,(*(undefined * PTR32 *)&gen_args[0]),0);
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
        return uVar5;
      }
      break;
    case 1: ;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x5c))
                          (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[3]),(*(byte * PTR32 *)&gen_args[2]));
        return uVar5;
      }
      uVar11 = 4;
      uVar10 = 0;
      uVar9 = 1;
      uVar7 = 0x44;
      uVar6 = (*(undefined4 *)&gen_args[3]);
      pvVar3 = (*(undefined * PTR32 *)&gen_args[0]);
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
      uVar5 = F_008668b0(pvVar4 GEN_EDX_ARG,uVar7,uVar6,pbVar8,pvVar3,uVar9,uVar10,uVar11);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar5;
      return uVar5;
    case 2: ;
      if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0)) {
        uVar11 = 0xb;
        uVar10 = 0;
        uVar9 = 2;
        uVar7 = 0x45;
        uVar6 = (*(undefined4 *)&gen_args[3]);
        pvVar3 = (*(undefined * PTR32 *)&gen_args[0]);
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar5 = F_008668b0(pvVar4 GEN_EDX_ARG,uVar7,uVar6,pbVar8,pvVar3,uVar9,uVar10,uVar11);
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar5;
        return uVar5;
      }
      break;
    case 3: ;
      if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0)) {
        uVar11 = 0xb;
        uVar10 = 0;
        uVar9 = 3;
        uVar7 = 0xc;
        uVar6 = (*(undefined4 *)&gen_args[3]);
        pvVar3 = (*(undefined * PTR32 *)&gen_args[0]);
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        uVar5 = F_008668b0(pvVar4 GEN_EDX_ARG,uVar7,uVar6,pbVar8,pvVar3,uVar9,uVar10,uVar11);
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = uVar5;
        return uVar5;
      }
      break;
    case 4: ;
      if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
      }
      iVar2 = *piVar1;
      uVar5 = F_004142d0(&(*(uint *)&gen_args[1]) GEN_EDX_ARG,0xffffffff);
      uVar5 = ((code *)*(gen_code32 *)(iVar2 + 0xf4))(piVar1,uVar6,1,0,uVar5);
      return uVar5;
    case 5: ;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1 GEN_EDX_ARG,0x1d6b5,1,1,0xffffffff);
      return uVar5;
    case 6: ;
      uVar11 = 4;
      uVar10 = 0;
      uVar9 = 6;
      uVar7 = 0xc;
      uVar6 = (*(undefined4 *)&gen_args[3]);
      pvVar3 = (*(undefined * PTR32 *)&gen_args[0]);
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
      uVar5 = F_008668b0(pvVar4 GEN_EDX_ARG,uVar7,uVar6,pbVar8,pvVar3,uVar9,uVar10,uVar11);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar5;
      return uVar5;
    case 7: ;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1 GEN_EDX_ARG,0x1d4cc,1,0,0xffffffff);
      return uVar5;
    case 8: ;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1 GEN_EDX_ARG,0x1d5d3,1,0,0xffffffff);
    }
  }
  return uVar5;
}

/* ref: FUN_00be84a0 */
GEN_FRAME uint GEN_THISCALL F_00be84a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe84a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  uint * this_01;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar5 = 0;
  uVar1 = *(int *)(param_1 + 0x14) + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  if (uVar1 != 0) {
    do {
      if (uVar5 == 0) {
        iVar2 = *(int *)(param_1 + 0xc) + param_1;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x10) + param_1;
        iVar2 = *(int *)(iVar2 - 4 + uVar5 * 4) + iVar2;
      }
      uVar3 = F_00b5cad0(REFG(void * PTR32, 0x14c4e90) GEN_EDX_FWD,iVar2);
      ((uint *)(gen_frame + 0xc))[(int)(uVar5)] = uVar3;
      uVar1 = 0;
      if (uVar3 == 0) goto LAB_00be85cd;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (*(uint *)(gen_frame + 0x24)));
  }
  uVar5 = F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = 0;
    ((undefined4 *)(gen_frame + 0x28))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    ((uint *)(gen_frame + 0x4c))[1] = 0;
    ((uint *)(gen_frame + 0x4c))[3] = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG,6);
    (*(uint *)(gen_frame + 0x3c)) = ((uint *)(gen_frame + 0xc))[0];
    (*(uint *)(gen_frame + 0x24)) = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) != 0) {
      puVar6 = &(*(undefined4 *)(gen_frame + 0x48));
      do {
        F_005a2710(puVar6 GEN_EDX_ARG,6);
        puVar6[1] = ((uint *)(gen_frame + 0xc))[(int)(uVar1 + 1)];
        uVar1 = uVar1 + 1;
        puVar6 = puVar6 + 2;
        this = (*(undefined * PTR32 *)(gen_frame + 0x20));
      } while (uVar1 < (*(uint *)(gen_frame + 0x24)));
    }
    iVar2 = *(int *)(param_1 + 0x14) + 4;
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar4 != (int *)0x0) {
      uVar11 = 4;
      uVar10 = 0;
      uVar9 = 6;
      puVar6 = ((undefined4 *)(gen_frame + 0x28));
      *(undefined4 *)((int)this + 0x30) = 6;
      uVar7 = 0xc;
      pvVar8 = this;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG)));
      uVar1 = F_008668b0(this_00 GEN_EDX_ARG,uVar7,iVar2,puVar6,pvVar8,uVar9,uVar10,uVar11);
      *(uint *)((int)this + 0x14) = uVar1;
    }
    *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) & 0xfffb;
    *(undefined1 *)((int)this + 0x2d) = 0;
    *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0x14);
    this_01 = &(*(uint *)(gen_frame + 0x68));
    iVar2 = 7;
    do {
      this_01 = this_01 - 2;
      uVar1 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
LAB_00be85cd: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00be85e0 */
GEN_FRAME uint GEN_THISCALL F_00be85e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe85e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  uint * this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float * pfVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  ((float *)(gen_frame + 0x14))[0] = 0.0;
  if (REFG(int, 0x1370c0c) == 0) {
    bVar1 = F_00be7fc0(this GEN_EDX_FWD,(uint)&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x10)),(uint)((float *)(gen_frame + 0x14)));
    uVar3 = CONCAT31(extraout_var_00,bVar1);
  }
  else {
    bVar1 = F_00be7d90(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x8)),(uint)&(*(float *)(gen_frame + 0x10)),((float *)(gen_frame + 0x14)));
    uVar3 = CONCAT31(extraout_var,bVar1);
  }
  if ((char)uVar3 != '\0') {
    ((float *)(gen_frame + 0x14))[1] = 0.0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x2c)) = (int)((double)(*(float *)(gen_frame + 0xc)) * *(double *)&REFG(undefined, 0x1088118));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x34)) = (int)((double)(*(float *)(gen_frame + 0x8)) * *(double *)&REFG(undefined, 0x1088118));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x3c)) = (int)((float *)(gen_frame + 0x14))[0];
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x44)) = (int)(*(float *)(gen_frame + 0x10));
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x30) = 1;
      if (*(int *)((int)this + 0xc) == 0) {
        uVar11 = 4;
        uVar10 = 0;
        uVar9 = 1;
        pfVar7 = ((float *)(gen_frame + 0x14)) + 1;
        uVar6 = 6;
        uVar5 = 0x44;
        pvVar8 = this;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG)));
        uVar3 = F_008668b0(this_00 GEN_EDX_ARG,uVar5,uVar6,pfVar7,pvVar8,uVar9,uVar10,uVar11);
        *(uint *)((int)this + 0xc) = uVar3;
      }
      else {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),6,((float *)(gen_frame + 0x14)) + 1);
      }
    }
    this_01 = &(*(uint *)(gen_frame + 0x48));
    iVar4 = 5;
    do {
      this_01 = this_01 - 2;
      uVar3 = F_005a2670(this_01 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00be8740 */
GEN_FRAME uint GEN_THISCALL F_00be8740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe8740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  uint * this_01;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1 GEN_EDX_ARG);
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,1);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x110cb60);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)((int)this + 0x30) = 1;
    if (*(int *)((int)this + 0xc) == 0) {
      uVar10 = 4;
      uVar9 = 0;
      uVar8 = 1;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
      uVar5 = 6;
      uVar4 = 0x44;
      pvVar7 = this;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_008668b0(this_00 GEN_EDX_ARG,uVar4,uVar5,puVar6,pvVar7,uVar8,uVar9,uVar10);
      *(uint *)((int)this + 0xc) = uVar2;
    }
    else {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),6,&(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  this_01 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 5;
  do {
    this_01 = this_01 - 2;
    uVar2 = F_005a2670(this_01 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00be8830 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00be8830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe8830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((*(byte *)((int)this + 0x34) & 1) != 0) {
    if (*(short *)((int)this + 0x1a) != 0) {
      *(short *)((int)this + 0x1a) = *(short *)((int)this + 0x1a) - 1;
      return;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if ((piVar2 != (int *)0x0) &&
       (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xbc))(piVar2 GEN_EDX_ARG), (char)uVar3 == '\0')) {
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2 GEN_EDX_ARG)));
      bVar1 = F_00a34970(pvVar4 GEN_EDX_ARG,2);
      if (((bVar1 != 0) || (bVar1 = F_00a34970(pvVar4 GEN_EDX_ARG,3), bVar1 != 0)) &&
         (((piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG), piVar2 != (int *)0x0 &&
           (*(undefined4 *)((int)this + 0x30) = 2, *(int *)((int)this + 4) == 0)) &&
          (*(int *)((int)this + 8) == 0)))) {
        uVar10 = 0xb;
        uVar9 = 0;
        uVar8 = 2;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0x45;
        pvVar4 = this;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG)));
        uVar3 = F_008668b0(this_00 GEN_EDX_ARG,uVar5,uVar6,uVar7,pvVar4,uVar8,uVar9,uVar10);
        *(uint *)((int)this + 4) = uVar3;
      }
    }
  }
  return;
}

/* ref: FUN_00be88e0 */
GEN_FRAME byte GEN_THISCALL F_00be88e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe88e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * this_00;
  uint uVar1;
  int * piVar2;
  undefined * this_01;
  undefined4 uVar3;
  int iVar4;
  byte * this_02;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8;
  
  if (*(int *)((int)this + 0x48) == 0) {
    return 0;
  }
  if (*(int * PTR32 *)((int)this + 0x38) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int * PTR32 *)((int)this + 0x38);
  }
  uVar1 = *(uint *)((int)this + 0x44) >> 2;
  if (*(uint *)(iVar4 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar4 + 8);
  }
  this_00 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar1 * 4))) +
                      (*(uint *)((int)this + 0x44) & 3) * 4)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (piVar2 != (int *)0x0) {
    if ((*this_00 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(this_00 + 4);
    }
    uVar6 = 0;
    uVar5 = 0;
    this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG)));
    uVar1 = F_00460270(this_01 GEN_EDX_ARG,uVar3,uVar5,uVar6);
    F_005a2710(this_00 GEN_EDX_ARG,6);
    *(uint *)(this_00 + 4) = uVar1;
  }
  F_00be8250(this GEN_EDX_ARG,0,this_00,8);
  this_02 = this_00 + 0x40;
  if (this_00[0x40] == 0) {
    *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) & 0xfff7;
  }
  else {
    *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) | 8;
  }
  local_8 = 7;
  do {
    this_02 = this_02 - 8;
    F_005a2670(this_02 GEN_EDX_ARG);
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  F_00406ad0(this_00);
  if (*(int *)((int)this + 0x48) != 0) {
    *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 1;
    if ((uint)(*(int *)((int)this + 0x40) * 4) <= *(uint *)((int)this + 0x44)) {
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    iVar4 = *(int *)((int)this + 0x48) - 1;
    *(int *)((int)this + 0x48) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  return 1;
}

/* ref: FUN_00be89e0 */
GEN_NOFRAME uint GEN_THISCALL F_00be89e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe89e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110cb7c));
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
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 9;
  *(undefined2 *)((int)this + 0x34) = 0;
  puVar1 = (undefined4 *)((int)this + 0x38);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x136);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) | 1;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Control::UIControl::vf1 */
GEN_FRAME uint GEN_THISCALL F_00be8a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe8a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  code * pcVar1;
  byte bVar2;
  undefined1 UVar3;
  int * piVar4;
  int * piVar5;
  undefined * pvVar6;
  uint uVar7;
  int iVar8;
  uint * this_00;
  undefined4 * puVar9;
  undefined * pUVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (piVar4 == (int *)0x0) {
LAB_00be8aae: ;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    switch((unsigned int)(uintptr_t)(param_4)) {
    case 0: ;
      if (*(int *)(this + 0x10) != 0) {
        bVar2 = F_00be88e0(this GEN_EDX_ARG);
        if ((bVar2 == 0) && (((byte)this[0x34] >> 1 & 1) != 0)) {
          *(ushort *)(this + 0x34) = *(ushort *)(this + 0x34) & 0xfffd;
          *(ushort *)(this + 0x34) = *(ushort *)(this + 0x34) | 4;
          if ((code *)*(gen_code32 *)(this + 0x50) != (code *)0x0) {
            ((code *)*(gen_code32 *)(this + 0x50))(*(undefined4 *)(this + 0x54));
          }
          if (((byte)this[0x34] >> 3 & 1) == 0) {
            piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xbc))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
            *(undefined4 *)(this + 0x10) = 0;
            break;
          }
        }
        goto LAB_00be8aae;
      }
      break;
    case 2: ;
      if (((*param_2 & 0xf) == 0) || (param_2[1] != 0xfffffffe)) {
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xbc))(piVar5 GEN_EDX_ARG,*(undefined4 *)(this + 4));
        *(undefined4 *)(this + 4) = 0;
        if (((*param_2 & 0xf) != 0) && (param_2[1] == 10)) {
          pcVar1 = *(gen_code32 *)(*piVar4 + 0x18);
          uVar14 = 0;
          uVar12 = 0;
          uVar11 = 0x119;
          ((undefined4 *)(gen_frame + 0x8))[0] = 0;
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined4 *)(gen_frame + 0x30)) = 0;
          pvVar6 = ((undefined *)GEN_TOP((*pcVar1)(piVar4)));
          uVar7 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar14);
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
          uVar14 = 0;
          uVar12 = 0;
          (*(uint *)(gen_frame + 0x1c)) = uVar7;
          uVar11 = 3;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
          uVar7 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar14);
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,6);
          uVar14 = 0;
          uVar12 = 0;
          (*(uint *)(gen_frame + 0x2c)) = uVar7;
          uVar11 = 4;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
          uVar7 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar14);
          F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,6);
          (*(uint *)(gen_frame + 0x34)) = uVar7;
          piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
          if (((piVar4 != (int *)0x0) && (*(undefined4 *)(this + 0x30) = 3, *(int *)(this + 4) == 0)
              ) && (*(int *)(this + 8) == 0)) {
            uVar15 = 0xb;
            uVar13 = 0;
            uVar14 = 3;
            puVar9 = ((undefined4 *)(gen_frame + 0x8));
            uVar12 = 6;
            uVar11 = 0xc;
            pUVar10 = this;
            pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG)));
            uVar7 = F_008668b0(pvVar6 GEN_EDX_ARG,uVar11,uVar12,puVar9,pUVar10,uVar14,uVar13,uVar15);
            *(uint *)(this + 8) = uVar7;
          }
          this_00 = &(*(uint *)(gen_frame + 0x38));
          iVar8 = 5;
          do {
            this_00 = this_00 - 2;
            F_005a2670(this_00 GEN_EDX_ARG);
            iVar8 = iVar8 - 1;
          } while (-1 < iVar8);
        }
        *(undefined2 *)(this + 0x1a) = 5;
      }
      break;
    case 3: ;
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xbc))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 8));
      *(undefined2 *)(this + 0x1a) = 5;
      *(undefined4 *)(this + 8) = 0;
      if (((*param_2 & 0xf) == 0) || (param_2[1] == 0)) {
        F_0052ef60(REFG(void * PTR32, 0x1375b00) GEN_EDX_ARG);
        *(ushort *)(this + 0x34) = *(ushort *)(this + 0x34) & 0xfffe;
      }
      break;
    case 6: ;
      if (((*param_2 & 0xf) != 0) && (param_2[1] == 0xffffffff)) goto LAB_00be8aae;
      if (((*param_2 & 0xf) == 0) || (param_2[1] != 0xfffffffe)) {
        *(ushort *)(this + 0x34) = *(ushort *)(this + 0x34) | 4;
        if ((*param_2 & 0xf) == 0) {
          UVar3 = (undefined1)0x0;
        }
        else {
          UVar3 = SUB41(param_2[1],0);
        }
        this[0x2d] = UVar3;
      }
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = 2;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00be8d20 */
GEN_FRAME unsigned int GEN_THISCALL F_00be8d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe8d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x1c)) = *(uint *)((int)this + 0x44);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)((int)this + 0x38);
  (*(int * PTR32 *)(gen_frame + 0x14)) = *(int * PTR32 *)((int)this + 0x38);
  while ((*(uint *)(gen_frame + 0x1c)) != *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xc)) {
    iVar2 = 0;
    if ((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0) {
      iVar2 = *(*(int * PTR32 *)(gen_frame + 0x14));
    }
    uVar5 = (*(uint *)(gen_frame + 0x1c)) >> 2;
    uVar6 = (*(uint *)(gen_frame + 0x1c)) & 3;
    (*(uint *)(gen_frame + 0x20)) = uVar5;
    (*(uint *)(gen_frame + 0x24)) = uVar6;
    uVar1 = uVar5;
    if (*(uint *)(iVar2 + 8) <= uVar5) {
      uVar1 = uVar5 - *(uint *)(iVar2 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + uVar6 * 4))) != 0) {
      if ((*(int * PTR32 *)(gen_frame + 0x14)) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(*(int * PTR32 *)(gen_frame + 0x14));
      }
      if (*(uint *)(iVar2 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(iVar2 + 8);
      }
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar5 * 4))) + uVar6 * 4)));
      if (iVar2 != 0) {
        this_00 = (undefined *)(iVar2 + 0x40);
        iVar7 = 7;
        do {
          this_00 = (undefined *)((int)this_00 - 8);
          F_005a2670(this_00 GEN_EDX_FWD);
          iVar7 = iVar7 - 1;
        } while (-1 < iVar7);
        F_00406ad0(iVar2);
      }
      if ((*(int * PTR32 *)(gen_frame + 0x14)) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(*(int * PTR32 *)(gen_frame + 0x14));
      }
      uVar1 = (*(uint *)(gen_frame + 0x20));
      if (*(uint *)(iVar2 + 8) <= (*(uint *)(gen_frame + 0x20))) {
        uVar1 = (*(uint *)(gen_frame + 0x20)) - *(uint *)(iVar2 + 8);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + (*(uint *)(gen_frame + 0x24)) * 4))) = 0;
    }
    piVar4 = (int *)0x0;
    if (((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x14)) != (undefined4 *)0x0)) {
      piVar4 = *(int * PTR32 *)*(*(int * PTR32 *)(gen_frame + 0x14));
    }
    piVar3 = (int *)0x0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      piVar3 = *(int * PTR32 *)*piVar4;
    }
    uVar9 = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar9 = *(undefined4 *)*piVar3;
    }
    uVar8 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar8 = *(undefined4 *)*piVar4;
    }
    F_00bea130((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((int * PTR32 *)(gen_frame + 0x8)),uVar8,0,(*(uint *)(gen_frame + 0x1c)),uVar9,0,(*(uint *)(gen_frame + 0x1c)) + 1);
    if (((*(int * PTR32 *)(gen_frame + 0x14)) != ((int * PTR32 *)(gen_frame + 0x8))[0]) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x8))[0])) != (undefined4 *)0x0)) {
      (*(int * PTR32 *)(gen_frame + 0x14)) = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x8))[0]));
    }
    (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x10));
  }
  return 0;
}

/* ref: FUN_00be8e90 */
GEN_FRAME byte GEN_THISCALL F_00be8e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe8e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint * this_00;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if (piVar1 != (int *)0x0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      if (*(int *)((int)this + 0x10) != 0) {
        F_00be8d20(this GEN_EDX_ARG);
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),1);
        *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) & 0xfffd;
        *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) & 0xfff7;
        *(undefined4 *)((int)this + 0x10) = 0;
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return 1;
      }
      break;
    case 1: ;
      if (*(int *)((int)this + 0xc) != 0) {
        if ((char)param_2 == '\0') {
          piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),1);
          *(undefined4 *)((int)this + 0xc) = 0;
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
          return 1;
        }
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,6);
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x110cb61);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x14)) = 1;
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),6,&(*(undefined4 *)(gen_frame + 0x8)));
        this_00 = &(*(uint *)(gen_frame + 0x38));
        iVar2 = 5;
        do {
          this_00 = this_00 - 2;
          F_005a2670(this_00 GEN_EDX_ARG);
          iVar2 = iVar2 - 1;
        } while (-1 < iVar2);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return 1;
      }
      break;
    case 2: ;
      if (*(int *)((int)this + 4) != 0) {
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 4),1);
        *(undefined4 *)((int)this + 4) = 0;
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return 1;
      }
      break;
    case 3: ;
      if (*(int *)((int)this + 8) != 0) {
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),1);
        *(undefined4 *)((int)this + 8) = 0;
      }
      break;
    case 4: ;
    case 5: ;
    case 7: ;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x100))(piVar1 GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return 1;
    case 6: ;
      if (*(int *)((int)this + 0x14) != 0) {
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),1);
        *(undefined4 *)((int)this + 0x14) = 0;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00be90c0 */
GEN_FRAME uint GEN_THISCALL F_00be90c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbe90c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  ushort * puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * this_00;
  int * piVar6;
  undefined * puVar7;
  undefined1 * this_01;
  int iVar8;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (param_2 == 0) goto LAB_00be92dd;
  if ((*(int *)((int)this + 0x10) != 0) && ((*(byte *)((int)this + 0x34) >> 1 & 1) != 0)) {
    this_00 = (undefined4 *)F_00406b90(0x44,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      *this_00 = 0;
      this_00[2] = 0;
      this_00[4] = 0;
      this_00[6] = 0;
      this_00[8] = 0;
      this_00[10] = 0;
      this_00[0xc] = 0;
      this_00[0xe] = 0;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this_00;
    F_005a2710(this_00 GEN_EDX_ARG,6);
    this_00[1] = param_2;
    if (param_3 != (int *)0x0) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x4c))(param_3 GEN_EDX_ARG);
      if (uVar5 != 0) {
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x4c))(param_3 GEN_EDX_ARG)));
        puVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG)));
        goto LAB_00be9167;
      }
    }
    puVar7 = &REFG(undefined, 0x110cb62);
LAB_00be9167: ;
    F_005a2710(this_00 + 2 GEN_EDX_ARG,6);
    this_00[3] = puVar7;
    F_005a2710(this_00 + 4 GEN_EDX_ARG,4);
    this_00[5] = 1;
    (*(uint *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 0xc);
    F_005a2710(this_00 + 6 GEN_EDX_ARG,4);
    this_00[7] = (*(uint *)(gen_frame + 0x10));
    (*(uint *)(gen_frame + 0x10)) = (uint)(*(char *)(param_1 + 0x14) == '\0');
    F_005a2710(this_00 + 8 GEN_EDX_ARG,4);
    this_00[9] = (*(uint *)(gen_frame + 0x10));
    F_005a2710(this_00 + 10 GEN_EDX_ARG,4);
    this_00[0xb] = 0x3d;
    *(bool *)(this_00 + 0x10) = *(char *)(param_1 + 0x16) != '\0';
    uVar5 = F_00bea520((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x38) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return uVar5;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,6);
  (*(int *)(gen_frame + 0x18)) = param_2;
  if (param_3 == (int *)0x0) {
LAB_00be9242: ;
    puVar7 = &REFG(undefined, 0x110cb62);
  }
  else {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x4c))(param_3 GEN_EDX_ARG);
    if (uVar5 == 0) goto LAB_00be9242;
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x4c))(param_3 GEN_EDX_ARG)));
    puVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG)));
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = puVar7;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,4);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  (*(undefined4 *)(gen_frame + 0x28)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x2c)) GEN_EDX_ARG,4);
  cVar2 = *(char *)(param_1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x30)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x38)) = (uint)(cVar2 == '\0');
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x3c)) GEN_EDX_ARG,4);
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x40)) = 0x3d;
  F_00be8250((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x14)),8);
  if (*(char *)(param_1 + 0x16) == '\0') {
    puVar1 = (ushort *)((int)pvVar4 + 0x34);
    *puVar1 = *puVar1 & 0xfff7;
  }
  else {
    puVar1 = (ushort *)((int)pvVar4 + 0x34);
    *puVar1 = *puVar1 | 8;
  }
  this_01 = ((undefined1 *)(gen_frame + 0x54));
  iVar8 = 7;
  do {
    this_01 = this_01 - 8;
    uVar5 = F_005a2670(this_01 GEN_EDX_ARG);
    iVar8 = iVar8 - 1;
  } while (-1 < iVar8);
LAB_00be92dd: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00be92f0 */
GEN_NOFRAME uint GEN_THISCALL F_00be92f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe92f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110cb7c));
  iVar1 = 0;
  do {
    F_00be8e90(this GEN_EDX_FWD,iVar1,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  F_00be9f20((undefined *)((int)this + 0x38) GEN_EDX_ARG);
  uVar2 = F_00429760(*(undefined4 *)((int)this + 0x38),8,0x136);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return (uint)uVar2;
}

/* ref: FUN_00be9340 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00be9340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe9340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) & 0xfffe;
  iVar2 = 0;
  do {
    F_00be8e90(this GEN_EDX_FWD,iVar2,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1 GEN_EDX_ARG);
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,0);
  F_00be8d20(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00be93e0 */
GEN_FRAME uint GEN_THISCALL F_00be93e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe93e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  this_00 = (undefined *)((int)this + 0x40);
  iVar1 = 7;
  do {
    this_00 = (undefined *)((int)this_00 - 8);
    F_005a2670(this_00 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00be9470 */
GEN_FRAME uint GEN_STDCALL F_00be9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9470u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x136);
  return uVar1;
}

/* ref: FUN_00be94f0 */
GEN_FRAME uint GEN_STDCALL F_00be94f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe94f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00be9530 */
GEN_FRAME uint GEN_STDCALL F_00be9530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x136);
  return uVar1;
}

/* ref: FUN_00be9560 */
GEN_FRAME uint GEN_STDCALL F_00be9560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00be9590 */
GEN_FRAME uint GEN_THISCALL F_00be9590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9590u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00be95c0 */
GEN_FRAME uint GEN_STDCALL F_00be95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe95c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x136);
  return uVar1;
}

/* ref: FUN_00be95f0 */
GEN_FRAME uint GEN_STDCALL F_00be95f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe95f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00be9630 */
GEN_FRAME uint GEN_THISCALL F_00be9630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9630u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00be9640 */
GEN_FRAME uint GEN_THISCALL F_00be9640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00be9660 */
GEN_FRAME uint GEN_THISCALL F_00be9660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9660u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00be96a0 */
GEN_FRAME uint GEN_STDCALL F_00be96a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe96a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00be96e0 */
GEN_FRAME unsigned int GEN_STDCALL F_00be96e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe96e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00be9710 */
GEN_FRAME uint F_00be9710(unsigned int gen_a0)
{
  GEN_ENTER(0xbe9710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00be9720 */
GEN_FRAME byte F_00be9720(void)
{
  GEN_ENTER(0xbe9720u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00be9730 */
GEN_FRAME byte F_00be9730(void)
{
  GEN_ENTER(0xbe9730u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00be9780 */
GEN_FRAME uint F_00be9780(unsigned int gen_a0)
{
  GEN_ENTER(0xbe9780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00be9790 */
GEN_FRAME uint GEN_STDCALL F_00be9790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00be97b0 */
GEN_FRAME uint F_00be97b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe97b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00be97c0 */
GEN_FRAME uint F_00be97c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe97c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00be97e0 */
GEN_FRAME uint GEN_THISCALL F_00be97e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe97e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 0x10)))) + *(int *)((int)this + 0x10)
  ;
}

/* ref: FUN_00be9810 */
GEN_FRAME uint GEN_THISCALL F_00be9810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00be9880 */
GEN_FRAME byte GEN_THISCALL F_00be9880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00be98b0 */
GEN_FRAME uint GEN_THISCALL F_00be98b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe98b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00be98d0 */
GEN_FRAME uint GEN_THISCALL F_00be98d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe98d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00be9920 */
GEN_FRAME uint F_00be9920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00be9960 */
GEN_FRAME unsigned int F_00be9960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00be99b0 */
GEN_FRAME uint F_00be99b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe99b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00be99d0 */
GEN_FRAME uint F_00be99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe99d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00be9a00 */
GEN_FRAME uint GEN_THISCALL F_00be9a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00be9a30 */
GEN_FRAME uint GEN_THISCALL F_00be9a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00be9a90 */
GEN_FRAME byte GEN_THISCALL F_00be9a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00be9af0 */
GEN_NOFRAME uint GEN_THISCALL F_00be9af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe9af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x136);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00be9b10 */
GEN_FRAME uint GEN_THISCALL F_00be9b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00be9b50 */
GEN_FRAME uint GEN_THISCALL F_00be9b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00be9b90 */
GEN_FRAME uint GEN_THISCALL F_00be9b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00be9bc0 */
GEN_FRAME uint GEN_THISCALL F_00be9bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe9bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00be9c10 */
GEN_FRAME uint GEN_THISCALL F_00be9c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00be9c50 */
GEN_FRAME uint F_00be9c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xbe9c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = param_7;
  uVar4 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    if (param_5 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar1 = uVar3 >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar5 + 8);
    }
    uVar4 = uVar4 - 1;
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar4 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar4 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar1 * 4))) + (uVar3 & 3) * 4)));
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar4;
      return (uint)param_1;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_00be9d00 */
GEN_FRAME uint F_00be9d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xbe9d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_10;
  for (uVar1 = param_4; uVar1 != param_7; uVar1 = uVar1 + 1) {
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    uVar3 = uVar1 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar5 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar5 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4)));
    uVar5 = uVar5 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar5;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_00be9db0 */
GEN_FRAME unsigned int F_00be9db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9db0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00be9de0 */
GEN_FRAME unsigned int F_00be9de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00be9e10 */
GEN_FRAME unsigned int GEN_THISCALL F_00be9e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9e10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) | 2;
    return;
  }
  *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) & 0xfffd;
  return;
}

/* ref: FUN_00be9e30 */
GEN_FRAME unsigned int GEN_THISCALL F_00be9e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9e30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) | 8;
    return;
  }
  *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) & 0xfff7;
  return;
}

/* ref: FUN_00be9e50 */
GEN_FRAME unsigned int GEN_THISCALL F_00be9e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9e50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) | 4;
    return;
  }
  *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) & 0xfffb;
  return;
}

/* ref: FUN_00be9eb0 */
GEN_FRAME uint GEN_THISCALL F_00be9eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00be9ed0 */
GEN_FRAME uint GEN_THISCALL F_00be9ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00be9f20 */
GEN_NOFRAME uint GEN_THISCALL F_00be9f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbe9f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x136);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x136);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00be9fa0 */
GEN_FRAME uint F_00be9fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbe9fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00be9c50(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00bea020 */
GEN_FRAME uint F_00bea020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbea020u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00be9d00(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00bea0a0 */
GEN_FRAME unsigned int F_00bea0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea0a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bea0d0 */
GEN_FRAME unsigned int F_00bea0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bea100 */
GEN_NOFRAME uint GEN_THISCALL F_00bea100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbea100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00be9f20(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x136);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00bea130 */
GEN_FRAME uint GEN_THISCALL F_00bea130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbea130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00be9fa0(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 - 1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_00bea020(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 - 1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_00bea2c0 */
GEN_FRAME unsigned int F_00bea2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea2c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bea2f0 */
GEN_FRAME unsigned int F_00bea2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bea320 */
GEN_FRAME uint GEN_THISCALL F_00bea320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbea320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)0x0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    piVar1 = *(int * PTR32 *)*param_2;
  }
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*piVar1;
  }
  uVar2 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_2;
  }
  F_00bea130(this GEN_EDX_FWD,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_00bea3a0 */
GEN_FRAME uint GEN_THISCALL F_00bea3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x136);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x136);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00bea520 */
GEN_FRAME uint GEN_THISCALL F_00bea520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00bea3a0(this GEN_EDX_FWD,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x136);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: Client::System::Scheduler::Control::UIControl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bea5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00be92f0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bea5d0 */
GEN_FRAME uint GEN_THISCALL F_00bea5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bea5f0 */
GEN_FRAME uint GEN_THISCALL F_00bea5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *(int *)(in_ecx + 0x10) + in_ecx;
}

/* ref: FUN_00bea610 */
GEN_FRAME float10 F_00bea610(float gen_a0)
{
  GEN_ENTER(0xbea610u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bea630 */
GEN_FRAME uint GEN_THISCALL F_00bea630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (((param_1 != 0x1a) || (*(char *)((int)this + 0xc) != '\0')) &&
     (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0)) {
    bVar1 = F_00bc23a0(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

/* ref: FUN_00bea660 */
GEN_FRAME byte GEN_THISCALL F_00bea660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint local_c;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x13: ;
  case 0x19: ;
  case 0x1b: ;
    if (*(char *)((int)this + 0xd) == '\0') {
      return 1;
    }
    break;
  case 0x15: ;
    *(undefined1 *)((int)this + 0x39) = 1;
    return 1;
  case 0x16: ;
    if (*(char *)((int)this + 0xc) == '\0') {
      return 1;
    }
    break;
  case 0x17: ;
    if (*(char *)((int)this + 0x39) == '\0') {
      return 1;
    }
    *(undefined1 *)((int)this + 0x39) = 0;
    if (*(char *)((int)this + 0xc) == '\0') {
      if (*(char *)((int)this + 0xd) == '\0') {
        return 1;
      }
      if (*(int *)((int)this + 0x24) == 0) {
        return 1;
      }
      F_00bea660(this GEN_EDX_FWD,0x19,param_2);
      return 1;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  bVar4 = 1;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,param_1,param_2);
    bVar4 = (byte)uVar3;
  }
  if ((((param_1 == 0x17) && (*(char *)((int)this + 0x10) == '\0')) &&
      (iVar2 = *(int *)((int)this + 0x24), iVar2 != 0)) &&
     (local_c = (uint)(longlong)TRUNC((float10)*(float *)(iVar2 + 0x68)),
     local_c <= *(uint *)(iVar2 + 0x34))) {
    F_00beaee0(this GEN_EDX_ARG,(float)(float10)0);
    bVar4 = 0;
  }
  return bVar4;
}

/* ref: FUN_00bea760 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bea760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbea760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x24) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x1c))))(*(int * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,9,&REFG(undefined, 0x13056c0));
  }
  return;
}

/* ref: FUN_00bea780 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bea780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbea780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return;
}

/* ref: FUN_00bea7c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bea7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbea7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  *(undefined1 *)((int)this + 0x3b) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    bVar1 = F_00bd1060(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_FWD);
    *(byte *)((int)this + 0x3b) = bVar1;
  }
  return;
}

/* ref: FUN_00bea7e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bea7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbea7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) && (*(char *)((int)this + 0x3b) != '\0')) {
    F_00bd0c40(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00bea810 */
GEN_FRAME unsigned int GEN_THISCALL F_00bea810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbea810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00bc3440(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,param_1,param_2,param_3);
    return;
  }
  return;
}

/* ref: FUN_00bea830 */
GEN_FRAME uint GEN_THISCALL F_00bea830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x24);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x138) =
         *(uint *)(uVar1 + 0x138) ^ (param_2 & 0xff ^ *(uint *)(uVar1 + 0x138)) & 1;
  }
  return uVar1;
}

/* ref: FUN_00bea860 */
GEN_FRAME unsigned int GEN_THISCALL F_00bea860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00bcfec0(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00bea890 */
GEN_NOFRAME byte F_00bea890(void)
{
  GEN_ENTER(0xbea890u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bea8a0 */
GEN_FRAME uint GEN_THISCALL F_00bea8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    bVar1 = F_00bc28c0(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,param_1,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00bea8c0 */
GEN_FRAME uint GEN_THISCALL F_00bea8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    bVar1 = F_00bc2920(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,param_1,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00bea8e0 */
GEN_NOFRAME uint GEN_THISCALL F_00bea8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbea8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)((int)this + 0x24) == 0) {
    this_00 = (undefined *)F_00406b90(0x260,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00bd0210(this_00 GEN_EDX_ARG,0);
    }
    *(uint *)((int)this + 0x24) = uVar1;
    *(undefined * PTR32 *)(uVar1 + 0xdc) = this;
  }
  uVar1 = *(uint *)((int)this + 0x24);
  if (*(char *)((int)this + 0x3a) != '\0') {
    *(undefined1 *)(uVar1 + 0x30) = 1;
    uVar1 = *(uint *)((int)this + 0x24);
  }
  return uVar1;
}

/* ref: FUN_00bea930 */
GEN_NOFRAME uint GEN_THISCALL F_00bea930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbea930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xdc))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x1c))))(*(int * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,3,&REFG(undefined, 0x13056c0));
    uVar2 = F_00bd0910(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00bea980 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bea980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbea980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0x28) != 0) && (*(int *)((int)this + 0x24) == 0)) {
    F_00bea8e0(this GEN_EDX_FWD);
    F_00bd1460(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x28),0,1,0xffffffff,0,1,0
                 ,0,0);
  }
  return;
}

/* ref: FUN_00bea9c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00bea9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x24) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x40))))(*(int * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00bea9f0 */
GEN_FRAME uint GEN_THISCALL F_00bea9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbea9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x24);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x138) =
         *(uint *)(uVar1 + 0x138) ^ ((param_2 & 0xff) * 2 ^ *(uint *)(uVar1 + 0x138)) & 2;
  }
  return uVar1;
}

/* ref: FUN_00beaa20 */
GEN_FRAME uint GEN_THISCALL F_00beaa20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbeaa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110cc1c));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  return (uint)this;
}

/* ref: FUN_00beaa70 */
GEN_NOFRAME uint GEN_THISCALL F_00beaa70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeaa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110cc1c));
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xdc))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x1c))))(*(int * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,3,&REFG(undefined, 0x13056c0));
    uVar2 = F_00bd0910(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::SceneConnectionBlock::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00beaad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeaad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x20) + 4))) != 3) {
    if (((*(int *)(this + 0x24) != 0) && (bVar1 = F_00bcfb80(*(int *)(this + 0x24) GEN_EDX_FWD), bVar1 != 0))
       && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 4))))(*(int * PTR32 *)(this + 0x24) GEN_EDX_ARG),
          (char)uVar2 != '\0')) {
      F_00b618f0(this GEN_EDX_ARG);
      return 1;
    }
    return 0;
  }
  *(undefined2 *)(this + 8) = 1;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  return 1;
}

/* ref: Client::System::Scheduler::Base::SceneConnectionBlock::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_00beab30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeab30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
  if (((char)uVar2 == '\0') || (*(int *)(this + 0x24) != 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
    this[0x11] = (undefined1)0x1;
    this[0x15] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      return 1;
    }
  }
  return bVar1;
}

/* ref: FUN_00beab70 */
GEN_NOFRAME byte GEN_THISCALL F_00beab70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeab70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00bcfad0(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,0);
  }
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
  *(undefined1 *)((int)this + 0x38) = 0;
  return 1;
}

/* ref: FUN_00beabc0 */
GEN_NOFRAME uint GEN_THISCALL F_00beabc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeabc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xdc))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x1c))))(*(int * PTR32 *)((int)this + 0x24) GEN_EDX_FWD,3,&REFG(undefined, 0x13056c0));
    uVar2 = F_00bd0910(*(undefined * PTR32 *)((int)this + 0x24) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00beac10 */
GEN_NOFRAME uint GEN_THISCALL F_00beac10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeac10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  if (*(char *)((int)this + 10) == '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xfffffffb;
    *(undefined4 *)((int)this + 10) = 0x1010000;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  F_00bead30(this GEN_EDX_ARG,*(float *)((int)this + 0x2c));
  uVar2 = F_00b61910(this GEN_EDX_ARG);
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x11) = 1;
  *(undefined1 *)((int)this + 0x15) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_00beac80 */
GEN_FRAME uint GEN_THISCALL F_00beac80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbeac80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_FWD);
    *((undefined2 *)GEN_TOP((*(int *)((int)param_1 + 0x24) + 10))) = 1;
  }
  if (*(undefined * PTR32 *)((int)param_1 + 0x24) != (undefined *)0x0) {
    F_00bc23a0(*(undefined * PTR32 *)((int)param_1 + 0x24) GEN_EDX_ARG,0x25);
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x14) = 0;
  *(undefined2 *)((int)param_1 + 10) = 1;
  *(float *)((int)param_1 + 0x2c) = param_2;
  *(undefined1 *)((int)param_1 + 0x38) = 1;
  uVar3 = F_00beac10(param_1 GEN_EDX_ARG);
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  if (*(undefined * PTR32 *)((int)param_1 + 0x24) != (undefined *)0x0) {
    bVar2 = F_00bd1060(*(undefined * PTR32 *)((int)param_1 + 0x24) GEN_EDX_ARG);
    uVar3 = CONCAT31(extraout_var,bVar2);
    *(byte *)((int)param_1 + 0x3b) = bVar2;
  }
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  return uVar3;
}

/* ref: FUN_00bead00 */
GEN_FRAME uint GEN_THISCALL F_00bead00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbead00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) == 3) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xe)));
    if (*(int *)(param_1 + 0x34) < (int)uVar1) {
      return uVar1;
    }
  }
  uVar1 = F_00beac80(param_1 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00bead30 */
GEN_FRAME uint GEN_THISCALL F_00bead30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbead30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x20);
  (*(char *)(gen_frame + 0x1b)) = '\0';
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[2])REFP(0x110cc10));
  (*(int *)(gen_frame + 0xc)) = param_1;
  iVar7 = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(iVar6 + 0x14)) {
    (*(uint *)(gen_frame + 0x10)) = 0;
    do {
      iVar6 = *(int *)(iVar6 + 0x10) + (*(uint *)(gen_frame + 0x10)) + iVar6;
      (*(int *)(gen_frame + 0x14)) = iVar6;
      bVar3 = F_00b5f770(REFG(void * PTR32, 0x14c4ea0) GEN_EDX_FWD,iVar6,&(*(char *)(gen_frame + 0x1b)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
      if ((bVar3 != 0) && ((*(char *)(gen_frame + 0x1b)) != '\0')) break;
      iVar6 = *(int *)(param_1 + 0x20);
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 0x10;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar6 + 0x14));
  }
  uVar5 = *(uint *)(param_1 + 4);
  iVar6 = 0;
  (*(uint *)(gen_frame + 0x10)) = uVar5;
  if (0 < *(int *)((*(int *)(gen_frame + 0x14)) + 0xc)) {
    do {
      piVar4 = (int *)F_00b60890((*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + iVar6 * 4 + *(int *)((*(int *)(gen_frame + 0x14)) + 8)))));
      uVar5 = 0;
      if ((piVar4 != (int *)0x0) &&
         ((uVar5 = piVar4[8], *(int *)(uVar5 + 4) != 3 ||
          (piVar4[0xd] = piVar4[0xd] + 1, (int)(uint)*(ushort *)(uVar5 + 0xe) <= piVar4[0xd])))) {
        piVar1 = (int *)piVar4[9];
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_ARG);
          *(undefined2 *)(piVar4[9] + 10) = 1;
        }
        if ((undefined *)piVar4[9] != (undefined *)0x0) {
          F_00bc23a0((undefined *)piVar4[9] GEN_EDX_ARG,0x25);
        }
        pcVar2 = *(gen_code32 *)(*piVar4 + 4);
        piVar4[3] = 0;
        *(undefined1 *)(piVar4 + 4) = 0;
        *(undefined2 *)((int)piVar4 + 0x12) = 0;
        *(undefined1 *)(piVar4 + 5) = 0;
        *(undefined2 *)((int)piVar4 + 10) = 1;
        piVar4[0xb] = (int)gen_fl2bits(param_2);
        *(undefined1 *)(piVar4 + 0xe) = 1;
        uVar5 = (*pcVar2)(piVar4);
        if ((char)uVar5 != '\0') {
          uVar5 = piVar4[9];
          if (uVar5 == 0) {
            F_00bead30((int)piVar4 GEN_EDX_ARG,GEN_TOF(gen_bits2f(piVar4[0xb])));
            *(undefined4 *)((int)piVar4 + 10) = 0x1000000;
            *(undefined2 *)((int)piVar4 + 0xe) = 0x101;
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined2 *)((int)piVar4 + 0x12) = 0;
            *(undefined1 *)(piVar4 + 5) = 0;
            if (piVar4[1] != 0) {
              *(undefined1 *)(piVar4[1] + 0x12) = 1;
              *(undefined1 *)(piVar4[1] + 0x13) = 1;
              *(undefined1 *)(piVar4[1] + 0x14) = 1;
            }
            uVar5 = piVar4[1];
            *(undefined1 *)(piVar4 + 0xe) = 0;
            *(undefined1 *)((int)piVar4 + 0x11) = 1;
            *(undefined1 *)((int)piVar4 + 0x15) = 0;
            if (uVar5 != 0) {
              *(undefined1 *)(uVar5 + 0x15) = 1;
            }
          }
          else {
            *(uint *)(uVar5 + 0x138) = *(uint *)(uVar5 + 0x138) & 0xfffffffb;
            *(undefined4 *)((int)piVar4 + 10) = 0x1010000;
          }
        }
        *(undefined1 *)((int)piVar4 + 0x3b) = 0;
        if ((undefined *)piVar4[9] != (undefined *)0x0) {
          bVar3 = F_00bd1060((undefined *)piVar4[9] GEN_EDX_ARG);
          uVar5 = CONCAT31(extraout_var,bVar3);
          *(byte *)((int)piVar4 + 0x3b) = bVar3;
        }
        *(undefined1 *)((int)piVar4 + 0x39) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((*(int *)(gen_frame + 0x14)) + 0xc));
  }
  return uVar5;
}

/* ref: FUN_00beaee0 */
GEN_FRAME uint GEN_THISCALL F_00beaee0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbeaee0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_FWD,0x1c,&REFG(undefined, 0x13056c0));
  }
  *(undefined4 *)(param_1 + 10) = 0x1000000;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x14))) = 1;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) == 1) {
    uVar2 = F_00b61380(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_ARG);
    return uVar2;
  }
  uVar2 = F_00bead30(param_1 GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: FUN_00beaf60 */
GEN_FRAME uint GEN_THISCALL F_00beaf60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbeaf60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float local_8;
  
  local_8 = gen_bits2f(param_1[0xb]);
  if (GEN_ISNAN(local_8) == (GEN_ISNAN(local_8) || local_8 == 0.0)) {
    param_1[0xb] = 0;
    param_2 = (float)((float10)param_2 - (float10)local_8);
  }
  iVar1 = param_1[9];
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x30) == '\0') {
      if (*(char *)(iVar1 + 0x80) == '\0') {
        local_8 = *(float *)(iVar1 + 0x58);
      }
      else {
        local_8 = *(float *)(iVar1 + 0x6c);
      }
    }
    else {
      fVar3 = (float10)*(int *)(iVar1 + 0x34);
      if (*(int *)(iVar1 + 0x34) < 0) {
        fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_8 = (float)fVar3;
    }
    F_00bd0e90(iVar1 GEN_EDX_FWD,param_2,1);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
  if (((((char)uVar2 == '\0') && (uVar2 = F_00beac10(param_1 GEN_EDX_ARG), (char)uVar2 != '\0')) &&
      (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG), (char)uVar2 != '\0')) &&
     (((char)param_1[3] != '\0' &&
      (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[9] + 0x10))((int *)param_1[9] GEN_EDX_ARG), (char)uVar2 != '\0'))))
  {
    fVar3 = F_00531220(param_1[9] GEN_EDX_ARG);
    param_2 = (float)(fVar3 - (float10)local_8);
    if ((float10)param_2 < (float10)0) {
      param_2 = 0.0;
    }
    uVar2 = F_00beaee0(param_1 GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_00beb050 */
GEN_FRAME uint GEN_THISCALL F_00beb050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xdc) = param_2;
  return param_2;
}

/* ref: FUN_00beb060 */
GEN_FRAME uint GEN_THISCALL F_00beb060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 & 0xff ^ *(uint *)(in_ecx + 0x138)) & 1;
  *(uint *)(in_ecx + 0x138) = *(uint *)(in_ecx + 0x138) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00beb0d0 */
GEN_FRAME uint GEN_THISCALL F_00beb0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::SceneConnectionBlock::vf0 */
GEN_FRAME uint GEN_THISCALL F_00beb110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110cc1c));
  if (*(int *)(this + 0x24) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xdc))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 0x1c))))(*(int * PTR32 *)(this + 0x24) GEN_EDX_FWD,3,&REFG(undefined, 0x13056c0));
    F_00bd0910(*(undefined * PTR32 *)(this + 0x24) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)(this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x24) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beb180 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beb180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x140) = 1;
  return;
}

/* ref: FUN_00beb190 */
GEN_NOFRAME uint GEN_THISCALL F_00beb190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xd0);
  *(undefined4 *)(uVar1 + 0xac) = *(undefined4 *)((int)this + 300);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xb0))) = *(undefined4 *)((int)this + 0x130);
  return uVar1;
}

/* ref: FUN_00beb1c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beb1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x140) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
    if (*(int *)((int)this + 0x140) == 1) {
      *(undefined4 *)((int)this + 0x140) = 2;
      F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00beb200 */
GEN_FRAME uint GEN_THISCALL F_00beb200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  int iVar2;
  uint uVar3;
  int * piVar4;
  float local_8;
  
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0x144) = 0;
  iVar2 = REFG(int, 0x1371298);
  iVar1 = *(int *)(REFG(int, 0x1371298) + 0x30);
  *(int *)((int)this + 0xe0) = iVar1;
  iVar1 = *(int *)(iVar2 + 0x34 + iVar1 * 4);
  F_00beb3b0((int)this + 0xf0,iVar1);
  *(float *)((int)this + 300) = GEN_FLT_TO(*(float *)((int)this + 300), REFG(float, 0x1094884));
  local_8 = *((float *)GEN_TOP((*(int *)(iVar1 + 0xc0) + 0xb0)));
  in_ecx = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if (in_ecx != 0) {
    uVar3 = F_005d5c50(in_ecx GEN_EDX_ARG);
    if (uVar3 != 0) {
      uVar3 = F_005d5c50(in_ecx GEN_EDX_ARG);
      local_8 = *(float *)(uVar3 + 0x58);
    }
  }
  piVar4 = (int *)((int)this + 0x10);
  F_0069be10(piVar4 GEN_EDX_ARG,iVar1 + 0x30,iVar1 + 0x60,iVar1 + 0x70,REFG(float, 0x1094884),local_8,GEN_TOF(*((float *)GEN_TOP((*(int *)(iVar1 + 0xc0) + 0xa4)))),GEN_TOF(*((float *)GEN_TOP((*(int *)(iVar1 + 0xc0) + 0xa8)))));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
  *(int * PTR32 *)(iVar2 + 0x38) = piVar4;
  return uVar3;
}

/* ref: FUN_00beb2e0 */
GEN_NOFRAME uint GEN_THISCALL F_00beb2e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110cc38));
  F_006906c0((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  F_00beb200(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00beb300 */
GEN_NOFRAME uint GEN_THISCALL F_00beb300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = REFG(void * PTR32, 0x1371298);
  F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_FWD,*(undefined4 *)((int)this + 0xe0));
  uVar2 = F_00beb480(*((undefined4 *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0xe0) * 4 + 0x34))),
                       (int)this + 0xf0);
  return uVar2;
}

/* ref: FUN_00beb340 */
GEN_NOFRAME uint GEN_THISCALL F_00beb340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110cc38));
  pvVar1 = REFG(void * PTR32, 0x1371298);
  F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_FWD,*(undefined4 *)((int)this + 0xe0));
  F_00beb480(*((undefined4 *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0xe0) * 4 + 0x34))),(int)this + 0xf0
              );
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))))((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  return uVar2;
}

/* ref: FUN_00beb3b0 */
GEN_FRAME byte GEN_STDCALL F_00beb3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  param_1[1] = *(undefined4 *)(param_2 + 0x34);
  param_1[2] = *(undefined4 *)(param_2 + 0x38);
  param_1[4] = *(undefined4 *)(param_2 + 0x60);
  param_1[5] = *(undefined4 *)(param_2 + 100);
  param_1[6] = *(undefined4 *)(param_2 + 0x68);
  param_1[8] = *(undefined4 *)(param_2 + 0x70);
  param_1[9] = *(undefined4 *)(param_2 + 0x74);
  param_1[10] = *(undefined4 *)(param_2 + 0x78);
  param_1[0xc] = *(undefined4 *)(param_2 + 0xc4);
  param_1[0xd] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0xc0) + 0xa4)));
  param_1[0xf] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0xc0) + 0xac)));
  param_1[0x10] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0xc0) + 0xb0)));
  param_1[0xe] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0xc0) + 0xa8)));
  *(byte *)(param_1 + 0x11) = *(byte *)(param_2 + 200) & 1;
  bVar1 = (byte)(*(uint *)(param_2 + 200) >> 1) & 1;
  *(byte *)((int)param_1 + 0x45) = bVar1;
  return bVar1;
}

/* ref: FUN_00beb450 */
GEN_FRAME uint GEN_THISCALL F_00beb450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 2 | *(uint *)((int)this + 200) & 0xfffffffd;
  *(uint *)((int)this + 200) = uVar1;
  return uVar1;
}

/* ref: FUN_00beb480 */
GEN_FRAME uint GEN_STDCALL F_00beb480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb480u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  param_1[0xc] = *param_2;
  param_1[0xd] = param_2[1];
  param_1[0xe] = param_2[2];
  param_1[9] = param_1[9] | 2;
  param_1[0x18] = param_2[4];
  param_1[0x19] = param_2[5];
  param_1[0x1a] = param_2[6];
  param_1[0x1c] = param_2[8];
  param_1[0x1d] = param_2[9];
  param_1[0x1e] = param_2[10];
  param_1[0x31] = param_2[0xc];
  *(int *)(param_1[0x30] + 0xa4) = param_2[0xd];
  *(int *)(param_1[0x30] + 0xac) = param_2[0xf];
  *(int *)(param_1[0x30] + 0xb0) = param_2[0x10];
  if (((uint)param_1[0x32] >> 1 & 1) == 0) {
    *(int *)(param_1[0x30] + 0xa8) = param_2[0xe];
  }
  param_1[0x32] = (uint)((char)param_2[0x11] != '\0') | param_1[0x32] & 0xfffffffeU;
  param_1[0x32] = (uint)(*(char *)((int)param_2 + 0x45) != '\0') * 2 | param_1[0x32] & 0xfffffffdU;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::Control::CameraControl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00beb560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110cc38));
  pvVar1 = REFG(void * PTR32, 0x1371298);
  F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_FWD,*(undefined4 *)(this + 0xe0));
  F_00beb480(*((undefined4 *)GEN_TOP(((int)pvVar1 + *(int *)(this + 0xe0) * 4 + 0x34))),this + 0xf0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))(this + 0x10 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beb5e0 */
GEN_FRAME float10 F_00beb5e0(float gen_a0)
{
  GEN_ENTER(0xbeb5e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00beb600 */
GEN_NOFRAME unsigned int F_00beb600(void)
{
  GEN_ENTER(0xbeb600u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00beb610 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beb610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x34) != 0) {
    if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD,*(int *)((int)this + 0x34));
    }
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  if (*(int *)((int)this + 0x30) != 0) {
    if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,*(int *)((int)this + 0x30));
    }
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined1 *)((int)this + 0x38) = 0xff;
  return;
}

/* ref: FUN_00beb650 */
GEN_NOFRAME uint GEN_THISCALL F_00beb650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (((*(char *)(in_ecx + 0x39) != '\0') && (iVar1 = *(int *)(in_ecx + 0x20), iVar1 != 0)) &&
     (*(char *)(iVar1 + 0x12) == '\0')) {
    return *(uint *)(iVar1 + 4);
  }
  return 0;
}

/* ref: FUN_00beb670 */
GEN_NOFRAME uint GEN_THISCALL F_00beb670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x39) != '\0') && (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0)) {
    uVar1 = F_00bbaf90(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00beb690 */
GEN_NOFRAME uint GEN_THISCALL F_00beb690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if ((*(char *)(in_ecx + 0x39) == '\0') || (uVar1 = *(uint *)(in_ecx + 0x20), uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00beb6b0 */
GEN_NOFRAME uint GEN_THISCALL F_00beb6b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x39) != '\0') && (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0)) {
    uVar1 = F_00bbafd0(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00beb6d0 */
GEN_NOFRAME uint GEN_THISCALL F_00beb6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0x30) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 4), piVar1 != (int *)0x0)
     ) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_FWD);
    if (*(int *)(uVar2 + 0xdc) == 0) {
      uVar2 = F_00c1ec00(*(undefined4 *)((int)this + 0x30) GEN_EDX_ARG);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00beb700 */
GEN_NOFRAME uint GEN_THISCALL F_00beb700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0x34) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 4), piVar1 != (int *)0x0)
     ) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_FWD);
    if (*(int *)(uVar2 + 0xdc) == 0) {
      uVar2 = F_00c1ec00(*(undefined4 *)((int)this + 0x34) GEN_EDX_ARG);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00beb730 */
GEN_NOFRAME byte GEN_THISCALL F_00beb730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x20) != 0) &&
     ((*(int *)((int)this + 0x24) == 0 || (*(int *)((int)this + 0x24) == 1)))) {
    return *((byte *)GEN_TOP((*(int *)((int)this + 0x20) + 0x11)));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  return (byte)uVar1;
}

/* ref: FUN_00beb760 */
GEN_NOFRAME uint GEN_THISCALL F_00beb760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) &&
     ((*(int *)((int)this + 0x24) == 0 || (*(int *)((int)this + 0x24) == 1)))) {
    uVar1 = F_00bbad30(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00beb790 */
GEN_NOFRAME uint GEN_THISCALL F_00beb790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x24) != 0) && (*(int *)((int)this + 0x24) != 1)) {
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x80))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00beb7b0 */
GEN_FRAME uint GEN_THISCALL F_00beb7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x24) != 0) && (*(int *)((int)this + 0x24) != 1)) {
    if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
      uVar1 = F_00bbad30(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
      return uVar1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x84))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00beb800 */
GEN_FRAME uint GEN_THISCALL F_00beb800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((*(int *)(in_ecx + 0x24) != 0) && (*(int *)(in_ecx + 0x24) != 1)) {
    return *(uint *)(in_ecx + 0x28);
  }
  return param_2;
}

/* ref: FUN_00beb840 */
GEN_FRAME uint GEN_THISCALL F_00beb840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x20);
  if (uVar1 == param_2) {
    uVar1 = 0;
    *(undefined4 *)(in_ecx + 0x20) = 0;
    *(undefined1 *)(in_ecx + 0x39) = 0;
  }
  return uVar1;
}

/* ref: FUN_00beb860 */
GEN_FRAME uint GEN_THISCALL F_00beb860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbeb860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x110ccc4));
  *(int *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x38) = 0x1ff;
  if (param_1 != 0) {
    F_00b595f0(param_1);
    return (uint)this;
  }
  *(undefined1 *)((int)this + 0x39) = 0;
  return (uint)this;
}

/* ref: FUN_00beb8d0 */
GEN_NOFRAME uint GEN_THISCALL F_00beb8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * this_00;
  uint in_EAX = 0;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  while (this_00 = puVar1, this_00 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)this_00[7];
    in_EAX = F_00c22560(this_00 GEN_EDX_FWD);
    if (*(char *)((int)this_00 + 0x16) == '\0') {
      in_EAX = ((GEN_TCODE *)*(gen_code32 *)*this_00)(this_00 GEN_EDX_ARG,1);
    }
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  return in_EAX;
}

/* ref: FUN_00beb910 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beb910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    if (*(int *)((int)this + 0x34) != 0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD,*(int *)((int)this + 0x34));
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    if (*(int *)((int)this + 0x30) != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
        F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,*(int *)((int)this + 0x30));
      }
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    *(undefined1 *)((int)this + 0x38) = 0xff;
    F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)this + 0x39) = 0;
  }
  return;
}

/* ref: FUN_00beb960 */
GEN_FRAME uint GEN_THISCALL F_00beb960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbeb960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    if (*(int *)((int)this + 0x34) != 0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD,*(int *)((int)this + 0x34));
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    if (*(int *)((int)this + 0x30) != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
        F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,*(int *)((int)this + 0x30));
      }
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    *(undefined1 *)((int)this + 0x38) = 0xff;
    F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)this + 0x39) = 0;
  }
  *(int *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_3;
  if (param_1 != 0) {
    *(undefined1 *)((int)this + 0x39) = 1;
    uVar1 = F_00b595f0(param_1);
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x39) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf1 */
GEN_FRAME byte GEN_THISCALL F_00beb9f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeb9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  byte bVar3;
  byte local_5;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar3 = 1;
  local_5 = 1;
  if (this[0x39] != (undefined1)0x0) {
    bVar3 = local_5;
    for (piVar2 = *(int * PTR32 *)(this + 0x2c); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD);
      local_5 = bVar3;
      if ((char)uVar1 == '\0') {
        local_5 = 0;
      }
      bVar3 = local_5;
    }
    piVar2 = *(int * PTR32 *)(this + 0x20);
    if ((piVar2 != (int *)0x0) &&
       ((uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG), (char)uVar1 == '\0' ||
        (((uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 100))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG),
          *(int *)(uVar1 + 0xdc) != 0 &&
          (piVar2 = (int *)F_00bbaf50(*(undefined * PTR32 *)(this + 0x20) GEN_EDX_ARG), piVar2 != (int *)0x0)) &&
         (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_ARG), (char)uVar1 == '\0')))))) {
      return 0;
    }
    if (bVar3 == 0) {
      return 0;
    }
  }
  *(undefined2 *)(this + 8) = 1;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  return bVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_00bebab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbebab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x39] != (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    for (piVar1 = *(int * PTR32 *)(this + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        this[0x12] = (undefined1)0x0;
        return 0;
      }
    }
  }
  *(undefined4 *)(this + 10) = 0x1000000;
  this[0xe] = (undefined1)0x1;
  this[0x12] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_00bebb10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbebb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xf] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x39] != (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    for (piVar1 = *(int * PTR32 *)(this + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        this[0x13] = (undefined1)0x0;
        return 0;
      }
    }
  }
  this[0xf] = (undefined1)0x1;
  this[0x13] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_00bebb70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbebb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x39] != (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    for (piVar1 = *(int * PTR32 *)(this + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        this[0x14] = (undefined1)0x0;
        return 0;
      }
    }
  }
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
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_00bebbf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbebbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x11] == (undefined1)0x0) {
    if (this[0x39] != (undefined1)0x0) {
      if (this[0x10] == (undefined1)0x0) {
        this[0x15] = (undefined1)0x0;
        return 0;
      }
      piVar1 = *(int * PTR32 *)(this + 0x2c);
      while( true ) {
        if (piVar1 == (int *)0x0) {
          this[0x11] = (undefined1)0x1;
          this[0x15] = (undefined1)0x0;
          if (*(int *)(this + 4) != 0) {
            *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
          }
          return 1;
        }
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') break;
        piVar1 = (int *)piVar1[7];
      }
      this[0x15] = (undefined1)0x0;
      return 0;
    }
    F_00b61970(this GEN_EDX_ARG);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf6 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bebc60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbebc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (this[0x39] != (undefined1)0x0) {
    for (iVar1 = *(int *)(this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if (*(char *)(iVar1 + 0x28) != '\0') {
        for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_FWD);
        }
      }
    }
  }
  return;
}

/* ref: FUN_00bebca0 */
GEN_FRAME byte GEN_THISCALL F_00bebca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbebca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  byte bVar4;
  
  if (*(char *)((int)this + 0x39) == '\0') {
    return 1;
  }
  bVar4 = 1;
  if (((*(int *)&gen_a1) != 0x12) && ((*(int *)&gen_a1) != 0x1a)) {
    if ((*(int *)&gen_a1) == 0x25) {
      for (this_00 = *(undefined * PTR32 *)((int)this + 0x2c); this_00 != (undefined *)0x0;
          this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
        F_00c227f0(this_00 GEN_EDX_FWD);
      }
    }
    for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if (*(char *)(iVar1 + 0x28) != '\0') {
        for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,(*(int *)&gen_a1));
          if ((char)uVar3 == '\0') {
            bVar4 = 0;
          }
        }
      }
    }
    return bVar4;
  }
  iVar1 = *(int *)((int)this + 0x2c);
  do {
    if (iVar1 == 0) {
      return 1;
    }
    if (*(char *)(iVar1 + 0x28) != '\0') {
      for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,(*(int *)&gen_a1));
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
  } while( true );
}

/* ref: FUN_00bebd70 */
GEN_FRAME uint GEN_THISCALL F_00bebd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbebd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(char *)(iVar1 + 0x12) == '\0') && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
    piVar2 = (int *)F_00b5feb0(*(undefined4 *)(param_1 + 4) GEN_EDX_FWD);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar5 = 0;
    if (0 < piVar2[1]) {
      piVar4 = (int *)(*piVar2 + (int)piVar2);
      do {
        if (*piVar4 == *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8)))) {
          iVar5 = 0;
          if (piVar4[2] < 1) {
            return 0;
          }
          piVar2 = (int *)(piVar4[1] + (int)piVar4);
          do {
            if (*(int *)(iVar1 + 0x74) == *piVar2) {
              uVar3 = F_00bc5360(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,piVar2);
              return uVar3;
            }
            iVar5 = iVar5 + 1;
            piVar2 = piVar2 + 3;
          } while (iVar5 < piVar4[2]);
          return 0;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 3;
      } while (iVar5 < piVar2[1]);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bebe20 */
GEN_FRAME unsigned int GEN_THISCALL F_00bebe20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbebe20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int iVar1;
  int * piVar2;
  
  if (*(char *)(param_1 + 0x39) != '\0') {
    for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if (*(char *)(iVar1 + 0x28) != '\0') {
        for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2 GEN_EDX_FWD);
        }
        for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x54))
                    (piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3),
                     (undefined4)gen_fl2bits(param_4),param_5,param_6,param_7,param_8);
        }
      }
    }
  }
  return;
}

/* ref: FUN_00bebeb0 */
GEN_FRAME uint GEN_THISCALL F_00bebeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbebeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x20);
  if ((char)param_1 == '\0') {
    if (*(char *)((int)this + 0x39) == '\0') goto LAB_00bebee2;
    if ((uVar3 != 0) && (((*(byte *)(uVar3 + 0x3fc) & 1) != 0 || (*(char *)(uVar3 + 0x12) != '\0')))
       ) {
      *(undefined1 *)((int)this + 0x39) = 0;
    }
  }
  if (*(char *)((int)this + 0x39) != '\0') {
    for (piVar1 = *(int * PTR32 *)((int)this + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      if ((char)piVar1[10] != '\0') {
        for (piVar2 = (int *)piVar1[9]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc4))(piVar2 GEN_EDX_FWD,param_1);
        }
      }
      if ((char)piVar1[4] == '\0') {
        if (*(char *)((int)piVar1 + 9) != '\0') {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
        }
        if ((((char)piVar1[2] != '\0') || ((char)piVar1[10] == '\0')) &&
           (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG), (char)uVar3 != '\0')) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
        }
      }
    }
    if (*(char *)((int)this + 0x10) != '\0') {
      return uVar3;
    }
    if (*(char *)((int)this + 9) != '\0') {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
    }
    if (*(char *)((int)this + 8) == '\0') {
      return uVar3;
    }
    if (*(char *)((int)this + 0x13) != '\0') {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
    }
    if (*(char *)((int)this + 0xf) == '\0') {
      return uVar3;
    }
    if (*(char *)((int)this + 0x14) == '\0') {
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    return uVar3;
  }
LAB_00bebee2: ;
  if (*(char *)((int)this + 0x11) != '\0') {
    return uVar3;
  }
  uVar3 = F_00b61970(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00bebfb0 */
GEN_FRAME byte GEN_THISCALL F_00bebfb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbebfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  int * piVar3;
  byte local_5;
  
  local_5 = 0;
  if (*(char *)((int)this + 0x39) == '\0') {
    return 0;
  }
  bVar2 = local_5;
  for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if ((*(char *)(iVar1 + 0x28) != '\0') &&
       (piVar3 = *(int * PTR32 *)(iVar1 + 0x24), piVar3 != (int *)0x0)) {
      bVar2 = 1;
      do {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3 GEN_EDX_FWD,param_1);
        piVar3 = (int *)piVar3[7];
      } while (piVar3 != (int *)0x0);
    }
  }
  return bVar2;
}

/* ref: FUN_00bec010 */
GEN_FRAME byte GEN_THISCALL F_00bec010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 0;
  if (*(char *)((int)this + 0x39) == '\0') {
    return 0;
  }
  for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if (*(char *)(iVar1 + 0x28) != '\0') {
      for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
        if ((piVar2[9] != 0) &&
           (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xec))(piVar2 GEN_EDX_FWD,param_1), (char)uVar3 != '\0')) {
          local_5 = 1;
        }
      }
    }
  }
  if (((param_1 == 1) || (param_1 == 3)) || (param_1 == 5)) {
    for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      *(undefined4 *)(iVar1 + 10) = 0x1000000;
      *(undefined2 *)(iVar1 + 0xe) = 0x101;
      *(undefined1 *)(iVar1 + 0x10) = 1;
      *(undefined2 *)(iVar1 + 0x12) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 0;
      if (*(int *)(iVar1 + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x12))) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x13))) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x14))) = 1;
      }
    }
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
  }
  return local_5;
}

/* ref: FUN_00bec120 */
GEN_FRAME byte GEN_THISCALL F_00bec120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  int * piVar2;
  undefined * this_00;
  
  piVar2 = param_2;
  if ((*(char *)((int)this + 0x39) != '\0') && (piVar2 = param_1, (undefined *)*param_1 != this)) {
    this_00 = (undefined *)*param_2;
    if (this_00 == (undefined *)0x0) {
      param_2[1] = 0;
      this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
    }
    if (this_00 != (undefined *)0x0) {
      do {
        bVar1 = F_00c22850(this_00 GEN_EDX_FWD,param_1,param_2 + 1);
        if (bVar1 != 0) {
          *param_2 = (int)this_00;
          return 1;
        }
        this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
      } while (this_00 != (undefined *)0x0);
    }
    *param_1 = (int)this;
    return 1;
  }
  *piVar2 = 0;
  return 0;
}

/* ref: FUN_00bec1a0 */
GEN_FRAME byte GEN_THISCALL F_00bec1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined * this_00;
  
  if (*(char *)((int)this + 0x39) == '\0') {
    *param_2 = 0;
    return 0;
  }
  this_00 = (undefined *)*param_2;
  if (this_00 == (undefined *)0x0) {
    param_2[1] = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
  }
  if (this_00 != (undefined *)0x0) {
    do {
      bVar1 = F_00c228b0(this_00 GEN_EDX_FWD,param_1,param_2 + 1);
      if (bVar1 != 0) {
        *param_2 = (int)this_00;
        return 1;
      }
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
    } while (this_00 != (undefined *)0x0);
  }
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00bec210 */
GEN_NOFRAME float GEN_THISCALL F_00bec210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbec210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  float fVar2;
  
  if (*(char *)((int)this + 0x39) != '\0') {
    for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if (*(char *)(iVar1 + 0x28) != '\0') {
        for (this_00 = *(undefined * PTR32 *)(iVar1 + 0x24); this_00 != (undefined *)0x0;
            this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
          if (*(int *)((int)this_00 + 0x2c) == 6) {
            fVar2 = F_00be5220(this_00 GEN_EDX_FWD);
            return fVar2;
          }
        }
      }
    }
  }
  return (float)(float10)0;
}

/* ref: FUN_00bec250 */
GEN_FRAME uint GEN_THISCALL F_00bec250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbec250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)this + 0x39) != '\0') {
    if ((*(int *)((int)this + 0x24) == 0) || (*(int *)((int)this + 0x24) == 1)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x84))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1);
    }
    else if (*(undefined * PTR32 *)((int)this + 0x20) == (undefined *)0x0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    }
    else {
      uVar1 = F_00bbad30(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
    }
    if ((uVar1 < 0x158) && (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])) != (undefined *)0x0)) {
      uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])) GEN_EDX_ARG);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00bec2c0 */
GEN_NOFRAME uint GEN_THISCALL F_00bec2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbec2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00beb8d0(this GEN_EDX_FWD);
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    if (*(int *)((int)this + 0x34) != 0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,*(int *)((int)this + 0x34));
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    if (*(int *)((int)this + 0x30) != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
        F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,*(int *)((int)this + 0x30));
      }
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    *(undefined1 *)((int)this + 0x38) = 0xff;
    uVar1 = F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)this + 0x39) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bec320 */
GEN_FRAME byte GEN_THISCALL F_00bec320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbec320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  char * pcVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((piVar1 == (int *)0x0) || (*(int *)((int)this + 0x20) == 0)) {
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_FWD)));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)this + 0x38) != -1) goto LAB_00bec3d2;
  if (*(int *)((int)this_00 + 0xdc) == 0) {
    *(undefined4 *)((int)this + 0x30) = 0;
    bVar3 = F_00bcfd80(this_00 GEN_EDX_ARG);
    *(byte *)((int)this + 0x38) = bVar3;
    if ((bVar3 != 0) && (uVar4 = F_00bcfda0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8))), uVar4 != 0)) {
      uVar4 = F_00bc52c0(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,
                           (uint)(*(char *)((int)this + 0x38) != '\x01'),uVar4,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      goto LAB_00bec3a9;
    }
  }
  else {
    uVar4 = F_00bebd70(this GEN_EDX_ARG,*(int *)((int)this_00 + 0xdc));
    *(undefined1 *)((int)this + 0x38) = 0;
LAB_00bec3a9: ;
    *(uint *)((int)this + 0x30) = uVar4;
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  pcVar2 = *(char * PTR32 *)((int)this_00 + 0xd8);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar4 = F_00bc52c0(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,3,pcVar2,0xffffffff);
    *(uint *)((int)this + 0x34) = uVar4;
  }
LAB_00bec3d2: ;
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    bVar3 = F_00c1ebd0(*(undefined * PTR32 *)((int)this + 0x30) GEN_EDX_ARG);
    if (bVar3 != 0) {
      return 1;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 4))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG);
    if ((char)uVar4 == '\0') {
      if ((*(uint *)((int)this_00 + 0x2c) >> 4 & 1) == 0) {
        return 0;
      }
      F_00c1eba0(*(undefined * PTR32 *)((int)this + 0x30) GEN_EDX_ARG);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x34) != (undefined *)0x0) {
    bVar3 = F_00c1ebd0(*(undefined * PTR32 *)((int)this + 0x34) GEN_EDX_ARG);
    if (bVar3 != 0) {
      return 1;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x34) + 4))))(*(int * PTR32 *)((int)this + 0x34) GEN_EDX_ARG);
    if ((char)uVar4 == '\0') {
      if ((*(uint *)((int)this_00 + 0x2c) >> 4 & 1) == 0) {
        return 0;
      }
      F_00c1eba0(*(undefined * PTR32 *)((int)this + 0x34) GEN_EDX_ARG);
    }
  }
  bVar3 = F_00bc4530(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
  return bVar3 != 0;
}

/* ref: FUN_00bec460 */
GEN_FRAME byte GEN_THISCALL F_00bec460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbec460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if (*(char *)(iVar1 + 0x28) != '\0') {
      for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xe0))(piVar2 GEN_EDX_FWD,param_1);
      }
    }
  }
  if ((*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) &&
     (uVar3 = F_00bbaea0(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,param_1), (char)uVar3 != '\0')) {
    F_00bec010(this GEN_EDX_ARG,5,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_00bec4e0 */
GEN_FRAME uint GEN_THISCALL F_00bec4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  if (param_1 == 0) {
    uVar3 = F_00406b90(0x2c,0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00c22530(uVar3 GEN_EDX_ARG);
    }
  }
  else {
    uVar3 = F_00c22530(param_1 GEN_EDX_ARG);
    *(undefined1 *)(uVar3 + 0x16) = 1;
  }
  *(undefined * PTR32 *)(uVar3 + 4) = this;
  *(undefined4 *)(uVar3 + 0x20) = param_2;
  piVar1 = (int *)(uVar3 + 0x18);
  iVar2 = *(int *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) == 0) {
    *piVar1 = 0;
    *(undefined4 *)(uVar3 + 0x1c) = 0;
    *(uint *)((int)this + 0x2c) = uVar3;
    return uVar3;
  }
  do {
    iVar4 = iVar2;
    iVar2 = *(int *)(iVar4 + 0x1c);
  } while (*(int *)(iVar4 + 0x1c) != 0);
  if (piVar1 != (int *)0x0) {
    *(uint *)(iVar4 + 0x1c) = uVar3;
    *piVar1 = iVar4;
    *(undefined4 *)(uVar3 + 0x1c) = 0;
    return uVar3;
  }
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar4;
  *(undefined4 *)(uVar3 + 0x1c) = 0;
  return uVar3;
}

/* ref: FUN_00bec580 */
GEN_FRAME uint GEN_THISCALL F_00bec580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbec580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = *(int *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) == 0) {
    *piVar4 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)((int)this + 0x2c) = param_1;
    return uVar2;
  }
  do {
    iVar3 = iVar1;
    iVar1 = *(int *)(iVar3 + 0x1c);
  } while (*(int *)(iVar3 + 0x1c) != 0);
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(int *)&REFG(undefined, 0x0) = iVar3;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return uVar2;
  }
  *(int *)(iVar3 + 0x1c) = param_1;
  *piVar4 = iVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return uVar2;
}

/* ref: FUN_00bec5f0 */
GEN_NOFRAME byte GEN_THISCALL F_00bec5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbec5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(char *)((int)this + 0x39) != '\0') &&
     (piVar1 = *(int * PTR32 *)((int)this + 0x20), piVar1 != (int *)0x0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    if ((char)uVar3 == '\0') {
      return 0;
    }
    bVar2 = F_00bec320(this GEN_EDX_ARG);
    return bVar2;
  }
  return 1;
}

/* ref: FUN_00bec620 */
GEN_FRAME byte GEN_THISCALL F_00bec620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte local_5;
  
  if (param_1 == 1) {
    if (*(char *)((int)this + 0x39) == '\0') {
      return 1;
    }
    piVar2 = *(int * PTR32 *)((int)this + 0x20);
    if (piVar2 != (int *)0x0) {
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_FWD);
      if ((char)uVar6 == '\0') {
        return 0;
      }
      bVar5 = F_00bec320(this GEN_EDX_ARG);
      if (bVar5 == 0) {
        return 0;
      }
    }
  }
  else if (param_1 == 0xe) {
    if (*(char *)((int)this + 0x39) == '\0') {
      return 1;
    }
    F_00beb610(this GEN_EDX_ARG);
    *(undefined4 *)((int)this + 10) = 0;
    *(undefined2 *)((int)this + 0xe) = 0;
    *(undefined1 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x12) = 0;
    *(undefined1 *)((int)this + 0x14) = 0;
  }
  else {
    if (param_1 == 0x23) {
      if (*(char *)((int)this + 0x39) == '\0') {
        return 1;
      }
      if (*(undefined * PTR32 *)((int)this + 0x20) == (undefined *)0x0) {
        return 1;
      }
      F_00bc5100(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
      return 1;
    }
    if (*(char *)((int)this + 0x39) == '\0') {
      return 1;
    }
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 9: ;
    if (*(int *)((int)this + 0x20) != 0) {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0x3fc)));
      *puVar1 = *puVar1 | 4;
    }
    break;
  case 10: ;
  case 0xb: ;
    *(undefined4 *)((int)this + 10) = 0;
    *(undefined2 *)((int)this + 0xe) = 0;
    *(undefined1 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x12) = 0;
    *(undefined1 *)((int)this + 0x14) = 0;
    break;
  case 0x13: ;
    if ((*(char *)((int)this + 0x39) == '\0') || (*(int *)((int)this + 0x20) == 0)) {
      return 1;
    }
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 100))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    bVar5 = F_00bc3d50(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,*(undefined4 *)(uVar6 + 0xd0));
    if (bVar5 == 0) {
      return 0;
    }
    F_00bc3e70(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x2c);
  local_5 = 1;
  do {
    if (piVar2 == (int *)0x0) {
      if (param_1 == 0xf) {
        F_00beb610(this GEN_EDX_ARG);
      }
      else if ((param_1 == 0x1e) &&
              (((iVar4 = *(int *)(param_2 + 4), iVar4 == 1 || (iVar4 == 3)) || (iVar4 == 5)))) {
        F_00bc38a0(this GEN_EDX_ARG);
        return local_5;
      }
      return local_5;
    }
    if (param_1 == 7) {
      if (((piVar2[8] != 0) && (*(int *)(piVar2[8] + 0xc) != 0)) &&
         (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 100))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG),
         *(int *)(uVar6 + 0xdc) == 0)) {
        F_00c227f0(piVar2 GEN_EDX_ARG);
      }
    }
    else if (param_1 - 10U < 2) {
      *(undefined4 *)((int)piVar2 + 10) = 0;
      *(undefined2 *)((int)piVar2 + 0xe) = 0;
      *(undefined1 *)(piVar2 + 4) = 0;
      *(undefined2 *)((int)piVar2 + 0x12) = 0;
      *(undefined1 *)(piVar2 + 5) = 0;
    }
    if ((char)piVar2[10] != '\0') {
      piVar3 = (int *)piVar2[9];
      if (param_1 == 0x1d) {
        if (piVar3 == (int *)0x0) goto LAB_00bec887;
        local_5 = 0;
      }
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[7]) {
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_ARG,param_1,param_2);
        if ((char)uVar6 == '\0') {
          local_5 = 0;
        }
      }
      if (param_1 == 0x10) {
        if ((char)piVar2[4] == '\0') {
          if (*(char *)((int)piVar2 + 9) != '\0') {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
          }
          if (((char)piVar2[2] != '\0') || ((char)piVar2[10] == '\0')) {
            if (*(char *)((int)piVar2 + 0x13) != '\0') {
              ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
            }
            if ((*(char *)((int)piVar2 + 0xf) != '\0') && ((char)piVar2[5] != '\0')) {
              ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
            }
          }
        }
      }
      else if ((param_1 == 0x1e) &&
              (((iVar4 = *(int *)(param_2 + 4), iVar4 == 1 || (iVar4 == 3)) || (iVar4 == 5)))) {
        *(undefined4 *)((int)piVar2 + 10) = 0x1000000;
        *(undefined2 *)((int)piVar2 + 0xe) = 0x101;
        *(undefined1 *)(piVar2 + 4) = 1;
        *(undefined2 *)((int)piVar2 + 0x12) = 0;
        *(undefined1 *)(piVar2 + 5) = 0;
        if (piVar2[1] != 0) {
          *(undefined1 *)(piVar2[1] + 0x12) = 1;
          *(undefined1 *)(piVar2[1] + 0x13) = 1;
          *(undefined1 *)(piVar2[1] + 0x14) = 1;
        }
      }
    }
LAB_00bec887: ;
    piVar2 = (int *)piVar2[7];
  } while( true );
}

/* ref: FUN_00bec970 */
GEN_FRAME uint GEN_THISCALL F_00bec970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbec970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00bec9d0 */
GEN_FRAME uint GEN_THISCALL F_00bec9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbec9d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bec9e0 */
GEN_FRAME uint GEN_THISCALL F_00bec9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbec9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bec9f0 */
GEN_FRAME uint GEN_THISCALL F_00bec9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbec9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) + param_1 * 0xc + (int)this;
}

/* ref: FUN_00beca10 */
GEN_FRAME uint GEN_THISCALL F_00beca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeca10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf0 */
GEN_FRAME uint GEN_THISCALL F_00beca40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeca40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beca70 */
GEN_FRAME uint GEN_THISCALL F_00beca70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeca70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this - 0x18;
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

/* ref: FUN_00becac0 */
GEN_FRAME uint GEN_THISCALL F_00becac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbecac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bf0d90(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110cce4));
  return (uint)this;
}

/* ref: FUN_00becaf0 */
GEN_FRAME uint GEN_THISCALL F_00becaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbecaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00bf0d90(this GEN_EDX_FWD,param_1 + 0x10);
  *(int *)((int)this + 0x80) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110cce4));
  *(undefined4 *)((int)this + 0x84) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_00becb40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbecb40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf42 */
GEN_NOFRAME uint GEN_THISCALL F_00becb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbecb50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_00becb60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbecb60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x84);
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00becb70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbecb70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x84);
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00becb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbecb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110cce4));
  F_00bf0db0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00becbc0 */
GEN_FRAME float10 F_00becbc0(float gen_a0)
{
  GEN_ENTER(0xbecbc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00becbe0 */
GEN_FRAME uint GEN_THISCALL F_00becbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbecbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110ce2c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf26 */
GEN_NOFRAME byte GEN_THISCALL F_00becc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbecc40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) == 0) {
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x68))))
                    (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return (byte)uVar1;
}

/* ref: FUN_00becc60 */
GEN_FRAME uint GEN_THISCALL F_00becc60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbecc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined * this_01;
  uint uVar4;
  int * piVar5;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x1375b00) + 0x28);
  if (this_00 != (undefined *)0x0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    bVar3 = F_00b60730(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    while (bVar3 != 0) {
      this_01 = (undefined *)F_00beb650((*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      if (((this_01 != (undefined *)0x0) && (iVar1 = *(int *)((int)this_01 + 0x50), iVar1 != 0)) &&
         ((*(undefined * PTR32 *)(iVar1 + 4) == this || (*(undefined * PTR32 *)(iVar1 + 8) == this)))) {
        F_00b63220(this_01 GEN_EDX_ARG);
      }
      bVar3 = F_00b60730(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    }
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  if (*(int *)((int)this + 0x88) == 1) {
    piVar5 = (int *)F_005f3350(8,*(undefined4 *)((int)this + 0x8c),0);
    uVar4 = 0;
    if (piVar5 != (int *)0x0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xe0))(piVar5 GEN_EDX_ARG,1);
    }
  }
  else {
    uVar4 = *(int *)((int)this + 0x88) - 2;
    if (uVar4 == 0) {
      piVar5 = (int *)F_00a1b710();
      uVar4 = 0;
      if (piVar5 != (int *)0x0) {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,1,0);
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
        return uVar4;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
  return uVar4;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf42 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00becd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbecd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00becd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbecd90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar2 = *(int * PTR32 *)(this + 0x80);
  if (piVar2 != (int *)0x0) {
    if (*(int *)(this + 0x88) == 8) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x34))
                        (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar1;
    }
    if (*(int *)(this + 0x88) != 9) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x34))
                        (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar1;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2 GEN_EDX_ARG)));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))
                        (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00becde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbecde0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf14 */
GEN_NOFRAME uint GEN_THISCALL F_00becdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbecdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_00bece00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_00bece10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf21 */
GEN_FRAME byte GEN_THISCALL F_00bece20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))
                      (piVar1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    return (byte)uVar2;
  }
  (*(undefined * PTR32 *)&gen_args[0])[0x68] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  return (byte)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_00bece50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x24))))
                      (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return (uint)(this + 0x20);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf36 */
GEN_FRAME uint GEN_THISCALL F_00bece70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint extraout_EAX = 0;
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x90))))
                      (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  F_00b61de0((undefined *)this GEN_EDX_ARG,param_1);
  return extraout_EAX;
}

/* ref: FUN_00becea0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00becea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbecea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110ce2c));
  F_00becc60(this GEN_EDX_FWD);
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00406ad0(*(int *)((int)this + 0x9c));
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00becee0 */
GEN_FRAME uint GEN_THISCALL F_00becee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbecee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x4c))))(*(int * PTR32 *)((int)this + 0x80) GEN_EDX_FWD)));
  if (this_00 != (int *)0x0) {
    iVar2 = this_00[0x3b];
    if ((param_1 != 0) && (iVar2 != 0)) {
      if (*(char *)(param_1 + 0x59) == '\0') {
        *(undefined1 *)(iVar2 + 0x66) = 0xff;
      }
      else {
        *(char *)(iVar2 + 0x66) = *(char *)(param_1 + 0x59) - 1;
      }
      if (*(char *)(param_1 + 0x59) == '\0') {
        *(undefined1 *)(iVar2 + 0x67) = 0xff;
      }
      else {
        *(char *)(iVar2 + 0x67) = *(char *)(param_1 + 0x5a) - 1;
      }
    }
    if (*(char *)((int)this + 0x96) != '\0') {
      F_00aaa5b0(this_00 GEN_EDX_ARG,1);
    }
    if (*(int *)((int)this + 0x88) == 2) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this_00[0x3b] + 0x128))((int *)this_00[0x3b] GEN_EDX_ARG);
      F_00b5f440(REFG(void * PTR32, 0x14c4ea0) GEN_EDX_ARG,0x10000003,uVar1 & 0xffff);
      iVar2 = this_00[0xb6f];
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x1c))(this_00 GEN_EDX_ARG);
      switch((unsigned int)(uintptr_t)((char)iVar2)) {
      case '\x01': ;
        iVar2 = ((char)uVar1 == '\0') + 1;
        break;
      case '\x02': ;
        iVar2 = ((char)uVar1 == '\0') + 2;
        break;
      case '\x03': ;
      case '\x04': ;
        iVar2 = 3;
        break;
      default: ;
        iVar2 = 0;
        break;
      case '\a': ;
      case '\b': ;
        iVar2 = 1;
        break;
      case '\t': ;
      case '\n': ;
        iVar2 = 4;
      }
      F_00b5f440(REFG(void * PTR32, 0x14c4ea0) GEN_EDX_ARG,0x10000014,iVar2);
    }
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_00bed020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed020u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((*(int *)(this + 0x80) + 0x71))))) {
    case 8: ;
    case 9: ;
    case 0xb: ;
    case 0x25: ;
    case 0x26: ;
    case 0x27: ;
    case 0x2e: ;
    case 0x49: ;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x34))))
                        (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                         param_7,param_8);
      return uVar1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_00bed0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)piVar1 + 0x71))) {
    case 8: ;
    case 9: ;
    case 0xb: ;
    case 0x25: ;
    case 0x26: ;
    case 0x2e: ;
    case 0x49: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))
                        (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf19 */
GEN_NOFRAME uint GEN_THISCALL F_00bed120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed120u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)piVar1 + 0x71))) {
    case 8: ;
    case 9: ;
    case 0xb: ;
    case 0x25: ;
    case 0x26: ;
    case 0x2e: ;
    case 0x49: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))
                        (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00bed1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbed1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  if (*(int *)(this + 0x80) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 8))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_FWD,param_1);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG)));
    if (this_00 != (undefined *)0x0) {
      F_00a9fae0(this_00 GEN_EDX_ARG);
    }
  }
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  return;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf30 */
GEN_FRAME uint GEN_THISCALL F_00bed1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbed1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(int *)(this + 0x80) == 0) {
    uVar2 = F_00b626d0((undefined *)this GEN_EDX_FWD,param_1);
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x78))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1);
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0xc))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG)));
    *(undefined4 *)(this + 0x20) = *puVar1;
    *(undefined4 *)(this + 0x24) = puVar1[1];
    *(undefined4 *)(this + 0x28) = puVar1[2];
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG)));
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00a9fae0(this_00 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00bed260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed260u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0xc))))
                      (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return (uint)(this + 0x20);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf4 */
GEN_FRAME uint GEN_THISCALL F_00bed280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbed280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,param_1);
  }
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  uVar2 = param_1[3];
  *(uint *)(this + 0x3c) = uVar2;
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00bed2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x14))))
                      (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return (uint)(this + 0x30);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00bed2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbed2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x80) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x18))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_FWD,param_1);
  }
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  return;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00bed320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed320u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x1c))))
                      (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return (uint)(this + 0x40);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf8 */
GEN_FRAME uint GEN_THISCALL F_00bed340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbed340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  if (*(int *)(this + 0x80) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x20))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_FWD,param_1);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG)));
    if (this_00 != (undefined *)0x0) {
      F_00a9fae0(this_00 GEN_EDX_ARG);
    }
  }
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  uVar1 = param_1[7];
  *(uint *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x40) = param_1[8];
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf34 */
GEN_FRAME unsigned int GEN_THISCALL F_00bed3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbed3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x80) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x88))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_FWD,param_1);
  }
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  return;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf35 */
GEN_FRAME uint GEN_THISCALL F_00bed400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbed400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x80) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x8c))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_FWD,param_1);
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0xc))))(*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG)));
    *(undefined4 *)(this + 0x20) = *puVar1;
    *(undefined4 *)(this + 0x24) = puVar1[1];
    *(undefined4 *)(this + 0x28) = puVar1[2];
    return (uint)puVar1;
  }
  uVar2 = F_00b61dd0((undefined *)this GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf10 */
GEN_FRAME uint GEN_THISCALL F_00bed460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbed460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  piVar1 = *(int * PTR32 *)(this + 0x80);
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  if (piVar1 == (int *)0x0) {
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD)));
  }
  else {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1 GEN_EDX_ARG);
    bVar2 = F_00b61df0(param_1,uVar3,param_2);
    if (bVar2 != 0) {
      return (uint)param_1;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG)));
  }
  *param_1 = *puVar4;
  param_1[1] = puVar4[1];
  param_1[2] = puVar4[2];
  param_1[4] = puVar4[4];
  param_1[5] = puVar4[5];
  param_1[6] = puVar4[6];
  param_1[7] = puVar4[7];
  param_1[8] = puVar4[8];
  param_1[9] = puVar4[9];
  param_1[10] = puVar4[10];
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf32 */
GEN_NOFRAME uint GEN_THISCALL F_00bed560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  byte bVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0x80);
  if (piVar2 != (int *)0x0) {
    bVar1 = *(byte *)((int)piVar2 + 0x71);
    in_EAX = bVar1 - 8;
    if (in_EAX < 0x42) {
      in_EAX = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xbed594) + (uint)bVar1)));
      switch((unsigned int)(uintptr_t)(bVar1)) {
      case 8: ;
      case 9: ;
      case 0xb: ;
      case 0x25: ;
      case 0x26: ;
      case 0x2e: ;
      case 0x49: ;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x80))
                          (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar3;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00bed5e0 */
GEN_FRAME uint GEN_THISCALL F_00bed5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbed5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  ushort uVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined * this_00;
  undefined4 * puVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  bVar9 = false;
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x84) = param_1[0xc];
    *(undefined4 *)((int)this + 0x88) = param_1[0xd];
    *(undefined4 *)((int)this + 0x90) = param_1[0x10];
    *(undefined1 *)((int)this + 0x96) = *(undefined1 *)((int)param_1 + 0x3a);
    bVar9 = *(char *)(param_1 + 0x11) != '\0';
    (*(uint *)(gen_frame + 0x14)) = (uint)*(byte *)(param_1 + 0xe);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x88))) {
  case 1: ;
    piVar4 = (int *)F_005f3350(8,*(undefined4 *)((int)this + 0x8c),0);
    if (piVar4 != (int *)0x0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x58,0,0);
      F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x58);
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x114))(piVar4 GEN_EDX_ARG);
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = uVar5;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
      F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xe0))(piVar4 GEN_EDX_ARG,0);
    }
    break;
  case 2: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x58,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x58);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
    F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
    piVar4 = (int *)F_00a1b710();
    if ((piVar4 == (int *)0x0) || (bVar9)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 8;
    }
    else {
      iVar6 = piVar4[0x20];
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = iVar6;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 0x25;
      if (iVar6 == 0) {
LAB_00bed824: ;
        (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG,1,0);
      }
    }
    goto LAB_00bed83e;
  case 3: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x58,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x58);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
    F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
    (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)((int)param_1 + 0x3b);
    (*(uint *)(gen_frame + 0x8)) = 0;
    do {
      piVar4 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)));
      if (piVar4 == (int *)0x0) {
        iVar6 = -0x20000000;
      }
      else {
        iVar6 = *piVar4;
      }
      if (((iVar6 != -0x20000000) &&
          (piVar4 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,iVar6), piVar4 != (int *)0x0)) &&
         (bVar3 = F_00a9f620(piVar4 GEN_EDX_ARG), bVar3 == 0)) {
        if ((*(uint *)(gen_frame + 0xc)) == 0) {
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x8)) & 0xff;
          if (!bVar9) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = piVar4[0x20];
            *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 0x49;
            *(undefined1 *)((int)this + 0x95) = 0;
            if ((*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] == 0) goto LAB_00bed824;
            ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG,1,0);
            goto LAB_00bed83e;
          }
          break;
        }
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x8)) < 8);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 8;
    *(bool *)((int)this + 0x95) = !bVar9;
LAB_00bed83e: ;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] == 0) {
      F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x10)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
    }
    break;
  case 4: ;
    if (*(int *)((int)this + 0x90) != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x58,0,0);
      F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x58);
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
      F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
    }
    break;
  case 5: ;
    if (*(int *)((int)this + 0x90) != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x98,0,0);
      F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x98);
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
      F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
    }
    break;
  case 8: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x250,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x250);
    puVar7 = param_1;
    puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar6 = param_1[0x15];
    F_00c49908((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x14,0x100,(int)param_1 + *(int *)(iVar6 + 0x30 + (int)param_1) + iVar6);
    F_00c49908((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x54,0x100,(int)param_1 + *(int *)((int)param_1 + iVar6 + 0x34) + iVar6);
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[2] = param_1[2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = 0x50;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xd] = 0x150;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xe] = *(undefined4 *)((int)param_1 + iVar6 + 0x38);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xf] = *(undefined4 *)((int)param_1 + iVar6 + 0x3c);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0x10] = *(undefined4 *)((int)param_1 + iVar6 + 0x40);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0x11] = *(undefined4 *)((int)param_1 + iVar6 + 0x44);
    break;
  case 9: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x154,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x154);
    puVar7 = param_1;
    puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    F_00c49908((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x15,0x100,
              (int)param_1 + *(int *)(param_1[0x15] + 0x30 + (int)param_1) + param_1[0x15]);
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[2] = param_1[2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = 0x54;
    break;
  case 10: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x70,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x70);
    puVar7 = param_1;
    puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 0x27;
    *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x15) = *(undefined2 *)((int)param_1 + 0x46);
    *(undefined2 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x56) = *(undefined2 *)(param_1 + 0x12);
    *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x16) = *(undefined2 *)((int)param_1 + 0x4a);
    *(undefined2 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x5a) = *(undefined2 *)(param_1 + 0x13);
  }
  cVar1 = *(char *)((int)param_1 + 0x5b);
  if ((cVar1 != '\0') && ((*(int *)((int)this + 0x88) == 2 || (*(int *)((int)this + 0x88) == 3)))) {
    bVar3 = (byte)(*(uint *)(gen_frame + 0x14));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = (ushort)(byte)(*(uint *)(gen_frame + 0x14));
    uVar2 = (ushort)(*(uint *)(gen_frame + 0x14));
    (*(uint *)(gen_frame + 0x14)) = (uint)(ushort)(*(uint *)(gen_frame + 0x14));
    if (cVar1 == '\0') {
      (*(uint *)(gen_frame + 0x14)) = (uint)uVar2;
    }
    else if (cVar1 == '\x01') {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = CONCAT11(2,bVar3);
      (*(uint *)(gen_frame + 0x14)) = (uint)(ushort)(*(uint *)(gen_frame + 0x14));
    }
    else if (cVar1 == '\x02') {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = CONCAT11(1,bVar3);
      (*(uint *)(gen_frame + 0x14)) = (uint)(ushort)(*(uint *)(gen_frame + 0x14));
    }
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) {
    piVar4 = (int *)F_00b61ff0((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,(*(uint *)(gen_frame + 0x14)));
    *(int * PTR32 *)((int)this + 0x80) = piVar4;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4 GEN_EDX_ARG);
    if ((char)uVar5 == '\0') {
      *(undefined4 * PTR32 *)((int)this + 0x98) = param_1;
      if (*(int *)((int)this + 0x9c) != 0) {
        F_00406ad0(*(int *)((int)this + 0x9c));
        *(undefined4 *)((int)this + 0x9c) = 0;
      }
      *(undefined4 * PTR32 *)((int)this + 0x9c) = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    }
    else {
      F_00becee0(this GEN_EDX_ARG,param_1);
      F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x10)));
    }
  }
  if (*(char *)((int)param_1 + 0x39) != '\0') {
    switch((unsigned int)(uintptr_t)(*(char *)((int)param_1 + 0x39))) {
    case '\x01': ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
      break;
    case '\x02': ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x19;
      break;
    default: ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x32;
      break;
    case '\x04': ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x4b;
      break;
    case '\x05': ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 100;
    }
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG)));
    if (piVar4 != (int *)0x0) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 200))(piVar4 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP((~-(uint)(uVar5 != 1) & (uint)piVar4)));
      if (this_00 != (undefined *)0x0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0xc0))))
                  (*(int * PTR32 *)((int)this + 0x80) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)1));
        F_0068e790(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
        F_00c48350(((undefined1 *)(gen_frame + 0x20)),0,0x48);
        F_00c46aa0(((undefined1 *)(gen_frame + 0x20)),(int)this_00 + 0x730,0x1a);
        (*(undefined1 *)(gen_frame + 0x23)) = (byte)(*(uint *)(gen_frame + 0x14));
        F_006a9a90(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),1);
      }
    }
  }
  iVar6 = REFG(int, 0x14c4e78);
  if ((*(int *)((int)this + 0x88) == 2) && (REFG(int, 0x14c4e78) != 0)) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x4c))))(*(int * PTR32 *)((int)this + 0x80) GEN_EDX_ARG);
    *(uint *)(iVar6 + 0x18) = uVar5;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x4c))))(*(int * PTR32 *)((int)this + 0x80) GEN_EDX_ARG);
    *(uint *)(iVar6 + 0x1c) = uVar5;
  }
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG);
  if (uVar5 != 0) {
    *(undefined2 *)(uVar5 + 0x72) = 3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_00bedc90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbedc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_FWD);
    if ((char)in_EAX == '\0') {
      bVar2 = F_00b61c40(*(undefined * PTR32 *)(this + 0x80) GEN_EDX_ARG);
      if (bVar2 == 0) {
        return CONCAT31(extraout_var,bVar2);
      }
      F_00becee0(this GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
      in_EAX = 0;
      if (*(int *)(this + 0x9c) != 0) {
        in_EAX = F_00406ad0(*(int *)(this + 0x9c));
        *(undefined4 *)(this + 0x9c) = 0;
      }
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

/* ref: FUN_00bedcf0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bedcf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbedcf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1 GEN_EDX_FWD);
  }
  if (*(char *)((int)this + 0x94) != '\0') {
    bVar2 = F_005e16a0();
    if (bVar2 != 0) {
      F_00bed5e0(this GEN_EDX_ARG,0);
      *(undefined1 *)((int)this + 0x94) = 0;
    }
  }
  return;
}

/* ref: FUN_00bedd30 */
GEN_FRAME uint GEN_THISCALL F_00bedd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbedd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x96) = *(undefined1 *)(param_1 + 0x3a);
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x88))) {
  case 1: ;
    if (*(int *)((int)this + 0x8c) != 0) {
      *(undefined1 *)((int)this + 0x94) = 1;
      return param_1;
    }
    break;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 8: ;
  case 9: ;
  case 10: ;
    uVar1 = F_00bed5e0(this GEN_EDX_FWD,param_1);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf27 */
GEN_NOFRAME uint GEN_THISCALL F_00beddb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeddb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 == 0) {
    iVar2 = *(int *)(this + 0x98);
  }
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),iVar2 + 0xc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(iVar2 + 0x30);
  if ((((*(int *)(this + 0x88) != *(int *)(iVar2 + 0x34)) ||
       (*(int *)(this + 0x8c) != *(int *)(iVar2 + 0x3c))) ||
      (uVar1 = *(uint *)(this + 0x90), uVar1 != *(uint *)(iVar2 + 0x40))) ||
     ((uint)(byte)this[0x96] != (int)*(char *)(iVar2 + 0x3a))) {
    F_00becc60(this GEN_EDX_ARG);
    uVar1 = F_00bedd30(this GEN_EDX_ARG,iVar2);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_00bede50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbede50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  
  bVar2 = F_00b61c40(this GEN_EDX_FWD);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x80);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1 GEN_EDX_ARG);
    }
    if (this[0x94] != (undefined1)0x0) {
      bVar2 = F_005e16a0();
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_00bed5e0(this GEN_EDX_ARG,0);
        this[0x94] = (undefined1)0x0;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00bedea0 */
GEN_FRAME byte GEN_THISCALL F_00bedea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbedea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x66) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bedeb0 */
GEN_FRAME byte GEN_THISCALL F_00bedeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbedeb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x67) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bedee0 */
GEN_FRAME byte GEN_THISCALL F_00bedee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbedee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x730 + in_ecx);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bedf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbedf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110ce2c));
  F_00becc60(this GEN_EDX_FWD);
  if (*(int *)(this + 0x9c) != 0) {
    F_00406ad0(*(int *)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = 0;
  }
  F_00b61c10(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bedf60 */
GEN_FRAME uint GEN_THISCALL F_00bedf60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbedf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined1 *)((int)this + 0x8a) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cedc));
  *(undefined2 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bedfa0 */
GEN_NOFRAME uint GEN_THISCALL F_00bedfa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbedfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x84) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x84),0,0);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bedff0 */
GEN_FRAME uint GEN_THISCALL F_00bedff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbedff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x14,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00c22e00(this_00 GEN_EDX_ARG,param_1,param_2);
    *(uint *)((int)this + 0x80) = uVar1;
    return uVar1;
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  return 0;
}

/* ref: FUN_00bee040 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cedc));
  if (*(int *)((int)this + 0x84) != 0) {
    F_0050c620(*(int *)((int)this + 0x84),0,0);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00bee090 */
GEN_FRAME unsigned int GEN_THISCALL F_00bee090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if ((*(int *)((int)this + 0x84) == 0) && (*(int *)((int)this + 0x80) == 0)) {
    F_004ff300(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,3);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x637462;
    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),param_1,0,0,0);
    *(uint *)((int)this + 0x84) = uVar1;
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_00bee0f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  
  piVar2 = *(int * PTR32 *)(this + 0x84);
  if (piVar2 != (int *)0x0) {
    piVar2 = piVar2 + 0x22;
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x84) + 0x8c)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if (iVar1 < 8) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x5c))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_FWD);
        this_00 = (undefined *)F_00406b90(0x14,0,0);
        if (this_00 != (undefined *)0x0) {
          uVar3 = F_00c22e00(this_00 GEN_EDX_ARG,uVar3,0);
          *(uint *)(this + 0x80) = uVar3;
          return uVar3;
        }
        piVar2 = (int *)0x0;
        *(undefined4 *)(this + 0x80) = 0;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf42 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf13 */
GEN_NOFRAME uint F_00bee180(void)
{
  GEN_ENTER(0xbee180u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf12 */
GEN_NOFRAME uint F_00bee190(void)
{
  GEN_ENTER(0xbee190u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bee1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cedc));
  if (*(int *)(this + 0x84) != 0) {
    F_0050c620(*(int *)(this + 0x84),0,0);
    *(undefined4 *)(this + 0x84) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x80) = 0;
  }
  F_00b61c10(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee210 */
GEN_FRAME uint GEN_THISCALL F_00bee210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cf8c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::KeepRange::vf42 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Scheduler::Instance::KeepRange::vf13 */
GEN_NOFRAME uint F_00bee280(void)
{
  GEN_ENTER(0xbee280u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::KeepRange::vf12 */
GEN_NOFRAME uint F_00bee290(void)
{
  GEN_ENTER(0xbee290u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::KeepRange::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bee2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cf8c));
  F_00b61c10(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee2d0 */
GEN_FRAME uint GEN_THISCALL F_00bee2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bf0d90(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_00bee300 */
GEN_FRAME uint GEN_THISCALL F_00bee300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00bf0d90(this GEN_EDX_FWD,param_1 + 0x10);
  *(int *)((int)this + 0x80) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_00bee330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf42 */
GEN_NOFRAME uint GEN_THISCALL F_00bee340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: FUN_00bee350 */
GEN_FRAME uint GEN_THISCALL F_00bee350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf21 */
GEN_FRAME uint GEN_THISCALL F_00bee360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bf0e10((undefined *)this GEN_EDX_FWD,param_1);
  if (*(undefined * PTR32 *)(this + 0x80) != (undefined *)0x0) {
    uVar1 = F_005f51d0(*(undefined * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_1,0);
  }
  return uVar1;
}

/* ref: FUN_00bee3c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  if (*(int *)((int)this + 0x80) != 0) {
    F_00a1b5a0((undefined4 *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  F_00bf0db0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00bee400 */
GEN_FRAME uint GEN_THISCALL F_00bee400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbee400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a1d100(0xffff,*(undefined4 *)((int)this + 0x74),param_2,param_1,
                       "Client.System.Scheduler.Instance.LayoutSharedGroupInstanceObject",1,0,10,0);
  *(uint *)((int)this + 0x80) = uVar1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_00bee450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00bee460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bee470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  if (*(int *)(this + 0x80) != 0) {
    F_00a1b5a0(this + 0x80);
    *(undefined4 *)(this + 0x80) = 0;
  }
  F_00bf0db0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee4c0 */
GEN_FRAME uint GEN_THISCALL F_00bee4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf42 */
GEN_FRAME uint GEN_THISCALL F_00bee4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1e3e0(param_1,"Client.System.Scheduler.Instance.LightObject",0);
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf43 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf44 */
GEN_FRAME uint GEN_THISCALL F_00bee560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf11 */
GEN_NOFRAME uint F_00bee570(void)
{
  GEN_ENTER(0xbee570u, 0u, 0u, 0u, 0u);
  return 0x110d16d;
}

/* ref: FUN_00bee580 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00bee5c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00bee5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bee5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee640 */
GEN_FRAME uint GEN_THISCALL F_00bee640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf42 */
GEN_FRAME uint GEN_THISCALL F_00bee670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1e4c0(param_1,"Client.System.Scheduler.Instance.VfxObject");
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf43 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee6a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf44 */
GEN_FRAME uint GEN_THISCALL F_00bee6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee6e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf11 */
GEN_NOFRAME uint F_00bee6f0(void)
{
  GEN_ENTER(0xbee6f0u, 0u, 0u, 0u, 0u);
  return 0x110d253;
}

/* ref: FUN_00bee700 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00bee740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00bee750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bee760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee7c0 */
GEN_FRAME uint GEN_THISCALL F_00bee7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf20 */
GEN_NOFRAME unsigned int F_00bee7f0(void)
{
  GEN_ENTER(0xbee7f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf42 */
GEN_FRAME uint GEN_THISCALL F_00bee800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1e520(param_1,"Client.System.Scheduler.Instance.BgObject",0);
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf43 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf44 */
GEN_FRAME uint GEN_THISCALL F_00bee870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf27 */
GEN_FRAME uint GEN_THISCALL F_00bee880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b62660((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00bee890 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bee890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_00bee8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  uint * puVar2;
  
  if (*(int *)(in_ecx + 0x80) == 0) {
    puVar2 = (uint *)&REFG(undefined, 0x110d33a);
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x80) + 0x70)));
    puVar2 = (uint *)(iVar1 + 0x3c);
    if (0xf < *(uint *)(iVar1 + 0x50)) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00bee8f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee8f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00bee900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbee900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bee910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee970 */
GEN_FRAME byte GEN_THISCALL F_00bee970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 6 ^ *(byte *)(in_ecx + 0x8f)) & 0x40;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00bee990 */
GEN_FRAME float10 F_00bee990(float gen_a0)
{
  GEN_ENTER(0xbee990u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bee9b0 */
GEN_FRAME uint GEN_THISCALL F_00bee9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbee9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bef000(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  *(undefined1 *)((int)this + 0xb0) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf47 */
GEN_NOFRAME uint F_00beea10(void)
{
  GEN_ENTER(0xbeea10u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a64110(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG);
  uVar3 = F_00ae0d90(&REFG(undefined, 0x14c0920) GEN_EDX_ARG);
  if ((int)uVar2 < (int)uVar3) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0xffffffff) {
    F_00a64860(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,0,uVar2);
    iVar1 = (&REFG(undefined4, 0x14a9a1c))[(int)(uVar2)];
    *(int *)(&REFG(undefined, 0x14c0928) + uVar2 * 4) = iVar1;
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) & 0xbf;
    }
  }
  return uVar2;
}

/* ref: FUN_00beea60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beea60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeea60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)((int)this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf36 */
GEN_FRAME byte GEN_THISCALL F_00beeaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeaa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xb0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf42 */
GEN_FRAME uint GEN_THISCALL F_00beeab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * this_00;
  
  F_00bef8a0(this GEN_EDX_FWD,param_1,0);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG)));
    uVar1 = 0;
    if (this_00 != (int *)0x0) {
      F_00aaa5b0(this_00 GEN_EDX_ARG,1);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x24))(this_00 GEN_EDX_ARG,8,0);
    }
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf25 */
GEN_NOFRAME byte GEN_THISCALL F_00beeb00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeeb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * this_00;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    bVar1 = F_00befb70((undefined *)this GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    this_00 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG)));
    if (this_00 != (int *)0x0) {
      F_00aaa5b0(this_00 GEN_EDX_ARG,1);
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x24))(this_00 GEN_EDX_ARG,8,0);
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf43 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beeb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeeb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)(this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*(undefined4 *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0xffffffff;
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf34 */
GEN_NOFRAME uint GEN_THISCALL F_00beeb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  *(float *)(this + 0x20) = *param_1;
  *(float *)(this + 0x24) = param_1[1];
  *(float *)(this + 0x28) = param_1[2];
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_FWD)));
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = this_00;
  uVar5 = 0;
  if (this_00 != (undefined *)0x0) {
    (*(undefined1 *)(gen_frame + 0x33)) = this[0xb0];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
    (*(float *)(gen_frame + 0x10)) = gen_bits2f(REFG(float, 0x110d434));
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d434)));
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d434)));
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined2 *)(gen_frame + 0x30)) = 0;
    (*(undefined1 *)(gen_frame + 0x32)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined1 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 1;
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d434)));
    (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110d434)));
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    pfVar4 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
    fVar1 = *param_1;
    (*(float *)(gen_frame + 0x58)) = fVar1;
    (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar1 - (float10)*pfVar4);
    fVar2 = param_1[2];
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar2 - (float10)pfVar4[2]);
    fVar6 = (float10)(float)((float10)fVar2 - (float10)pfVar4[2]);
    fVar7 = (float10)(float)((float10)fVar1 - (float10)*pfVar4);
    fVar3 = (float)(fVar7 * fVar7 + fVar6 * fVar6);
    (*(float *)(gen_frame + 0x54)) = fVar3;
    fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
    (*(float *)(gen_frame + 0x54)) = fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar3;
    uVar5 = F_00a9f7c0((*(undefined * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,fVar1,param_1[1],fVar2,*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0xb0),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)))
    ;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf35 */
GEN_NOFRAME uint GEN_THISCALL F_00beecb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00a1c7d0(&(*(undefined4 *)(gen_frame + 0x10)),0,0,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)));
  return uVar1;
}

/* ref: FUN_00beed40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beed40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeed40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  if (*(int *)((int)this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)((int)this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  }
  F_00bef590(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf45 */
GEN_NOFRAME uint GEN_THISCALL F_00beed90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeed90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x88);
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf46 */
GEN_FRAME uint GEN_THISCALL F_00beeda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x88) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf26 */
GEN_NOFRAME byte GEN_THISCALL F_00beedb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeedb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x90);
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf48 */
GEN_FRAME unsigned int GEN_THISCALL F_00beedc0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbeedc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x98) = param_2;
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf32 */
GEN_NOFRAME float10 GEN_THISCALL F_00beede0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeede0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x98);
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00beedf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeedf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  if (*(int *)(this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)(this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18) GEN_EDX_FWD,*(undefined4 *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0xffffffff;
  }
  F_00bef590(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beee50 */
GEN_FRAME uint GEN_THISCALL F_00beee50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeee50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf42 */
GEN_FRAME uint GEN_THISCALL F_00beee80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeee80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1e5a0(param_1,"Client.System.Scheduler.Instance.WeaponObject");
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf43 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beeeb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeeeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf44 */
GEN_FRAME uint GEN_THISCALL F_00beeef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf27 */
GEN_FRAME uint GEN_THISCALL F_00beef00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b62660((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf11 */
GEN_NOFRAME uint F_00beef10(void)
{
  GEN_ENTER(0xbeef10u, 0u, 0u, 0u, 0u);
  return 0x110d576;
}

/* ref: FUN_00beef20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00beef20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeef20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00beef60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeef60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00beef70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbeef70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_00beef80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbeef80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  F_00b61c10(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beefe0 */
GEN_FRAME float10 F_00beefe0(float gen_a0)
{
  GEN_ENTER(0xbeefe0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bef000 */
GEN_FRAME uint GEN_THISCALL F_00bef000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbef000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  F_00b61bd0(this GEN_EDX_FWD,param_1);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d6c4));
  *(undefined4 *)((int)this + 0x98) = uVar1;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00bef070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_FWD);
  if ((uVar1 != 0) && (this[0x90] != (undefined1)0x0)) {
    return *(uint *)(uVar1 + 0xec);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00bef0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbef0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf16 */
GEN_NOFRAME uint GEN_THISCALL F_00bef0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbef0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_00bef0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbef0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf47 */
GEN_NOFRAME uint F_00bef0d0(void)
{
  GEN_ENTER(0xbef0d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ae3f10(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,0xffffffff);
  return uVar1;
}

/* ref: FUN_00bef0e0 */
GEN_NOFRAME uint GEN_THISCALL F_00bef0e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x80);
  if (uVar1 != 0xffffffff) {
    uVar1 = F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,uVar1);
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
    *(undefined1 *)((int)this + 0x90) = 0;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf27 */
GEN_FRAME uint GEN_THISCALL F_00bef110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbef110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    iVar1 = *(int *)(this + 0x94);
  }
  uVar2 = F_00b62660((undefined *)this GEN_EDX_FWD,iVar1);
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf28 */
GEN_FRAME uint GEN_THISCALL F_00bef130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbef130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x94) = param_2;
  return param_2;
}

/* ref: FUN_00bef140 */
GEN_FRAME uint GEN_THISCALL F_00bef140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbef140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x84) = param_2;
  *(undefined1 *)(in_ecx + 0x90) = 1;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf11 */
GEN_NOFRAME uint F_00bef160(void)
{
  GEN_ENTER(0xbef160u, 0u, 0u, 0u, 0u);
  return 0x110d6b4;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf21 */
GEN_FRAME unsigned int GEN_THISCALL F_00bef170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbef170u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  
  (*(undefined * PTR32 *)&gen_args[0])[0x68] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  if (((*(undefined * PTR32 *)&gen_args[0])[0x90] != (undefined1)0x0) &&
     (piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD))), piVar1 != (int *)0x0)) {
    if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) != (undefined1)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,5,0);
      *(byte *)((int)piVar1 + 0x8f) = *(byte *)((int)piVar1 + 0x8f) | 0x10;
      return;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,5,0);
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf33 */
GEN_FRAME unsigned int GEN_THISCALL F_00bef1c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbef1c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_ecx;
  
  if ((char)param_1[0x24] != '\0') {
    in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))(param_1 GEN_EDX_FWD);
    if (in_ecx != 0) {
      F_00aa1a50(in_ecx GEN_EDX_ARG,param_2);
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_00bef1f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x80);
  if (uVar1 != 0xffffffff) {
    uVar1 = F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,uVar1);
    *(undefined4 *)(this + 0x80) = 0xffffffff;
    this[0x90] = (undefined1)0x0;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_00bef220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbef220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x84);
  if (uVar1 == 0xffffffff) {
    if (*(int *)(in_ecx + 0x80) != -1) {
      uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,*(int *)(in_ecx + 0x80));
      return uVar1;
    }
  }
  else if (uVar1 < 0x158) {
    return (&REFG(undefined4, 0x14a31f0))[(int)(uVar1)];
  }
  return 0;
}

