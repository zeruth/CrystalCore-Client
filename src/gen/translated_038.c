#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_005f0810 */
GEN_NOFRAME uint GEN_THISCALL F_005f0810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f0810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a59c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[5])REFP(0x10a59a8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[1])REFP(0x10a5864));
  iVar1 = *(int *)((int)this + 0x8c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x94) - iVar1 >> 2) * 4,0x385);
  }
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  iVar1 = *(int *)((int)this + 0x78);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x80) - iVar1 >> 2) * 4,0x385);
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar2 = F_005095f0((undefined *)((int)this + 0x30) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return uVar2;
}

/* ref: FUN_005f08c0 */
GEN_NOFRAME uint GEN_THISCALL F_005f08c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f08c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xa4);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_005ef690(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4))) GEN_EDX_FWD,0x41,iVar1,0,1);
    return uVar2;
  }
  uVar2 = F_005ef690((undefined *)0x0 GEN_EDX_ARG,0x41,iVar1,0,1);
  return uVar2;
}

/* ref: FUN_005f08f0 */
GEN_FRAME uint GEN_THISCALL F_005f08f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f08f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), uVar3 = 0, iVar1 != 0)) {
    puVar2 = (undefined4 *)F_004296a0(0x14,0,900);
    *puVar2 = *(undefined4 *)(iVar1 + 0x1a0);
    puVar2[1] = *(undefined4 *)(iVar1 + 0x1a0);
    puVar2[2] = *(undefined4 *)(iVar1 + 0x1a0);
    *(undefined2 *)(puVar2 + 4) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[3] = this;
    }
    uVar3 = F_00618430((undefined *)(iVar1 + 0x19c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  }
  return uVar3;
}

/* ref: FUN_005f0960 */
GEN_FRAME uint GEN_THISCALL F_005f0960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f0960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), uVar2 = 0, iVar1 != 0)) {
    this_00 = (undefined *)(iVar1 + 0x19c);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    F_006105d0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar2 = F_00616e70(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar2;
}

/* ref: FUN_005f09d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f09d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f09d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) != 0) {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 != *(int *)((int)this + 8)) {
    F_00c46e20(iVar3,*(int *)((int)this + 8),0);
    *(int *)((int)this + 8) = iVar3;
  }
  return;
}

/* ref: FUN_005f0a50 */
GEN_NOFRAME byte GEN_THISCALL F_005f0a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f0a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined * this_00;
  uint uVar5;
  undefined4 * puVar6;
  double dVar7;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  piVar1 = *(int * PTR32 *)((int)this + 0x4c);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 4) != 0) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 8)));
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 4), iVar2 == 0)) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *(undefined * PTR32 *)(iVar2 + 0x44);
      }
      (*(double *)(gen_frame + 0x38)) = (double)*(float *)((int)this + 0x18);
      dVar7 = F_005ee0f0(this_00 GEN_EDX_FWD,9);
      if ((!GEN_ISNAN((*(double *)(gen_frame + 0x38))) && !GEN_ISNAN(dVar7)) && !((*(double *)(gen_frame + 0x38)) <= dVar7)) goto LAB_005f0a81;
    }
    iVar2 = piVar1[0x18];
    bVar4 = 0;
    if (iVar2 == 1) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1 GEN_EDX_ARG);
      F_0054fa20(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG,uVar5);
      F_005feb80(((undefined1 *)(gen_frame + 0x110)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd0)),&REFG(float, 0x1302c60));
      bVar4 = F_0060d1b0(((undefined1 *)(gen_frame + 0x110)));
    }
    else if (iVar2 == 2) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x104))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)));
      bVar4 = F_0060d300(&(*(undefined4 *)(gen_frame + 0x40)));
    }
    else if (iVar2 == 3) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1 GEN_EDX_ARG);
      F_00607160(((undefined1 *)(gen_frame + 0x130)) GEN_EDX_ARG,uVar5);
      (*(undefined4 *)(gen_frame + 0x150)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
      (*(undefined4 *)(gen_frame + 0x154)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
      (*(undefined4 *)(gen_frame + 0x158)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 0xf4))))(*(int * PTR32 *)((int)this + 0x4c) GEN_EDX_ARG)));
      (*(undefined4 *)(gen_frame + 0x24)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      uVar5 = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(uint *)(gen_frame + 0x44)) = uVar5 ^ REFG(uint, 0x10920d0);
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x38)) + 4)) = *puVar6;
      uVar3 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x38)) + 0));
      F_0054fa20(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
      F_004ee670(&(*(undefined4 *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined1 *)(gen_frame + 0x90)));
      F_0054fa20(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x130)));
      F_004ee670(&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(undefined4 *)(gen_frame + 0x40)),(uint)((undefined1 *)(gen_frame + 0x50)));
      (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x20));
      (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x24));
      (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x28));
      (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x38)) + 4));
      (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x40));
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x44));
      (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x48));
      bVar4 = F_0060d3e0(&(*(undefined4 *)(gen_frame + 0x0)));
      F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170) GEN_EDX_ARG);
      return bVar4;
    }
    F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170) GEN_EDX_ARG);
    return bVar4;
  }
LAB_005f0a81: ;
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_005f0cd0 */
GEN_NOFRAME uint GEN_THISCALL F_005f0cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f0cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  float * pfVar6;
  undefined * this_00;
  float10 fVar7;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(uint *)(gen_frame + 0x9c)) = uVar4;
  if (*(int *)((int)this + 0xc) == 8) {
    uVar4 = *(uint *)((int)this + 4);
    if (*(int *)(uVar4 + 0xa4) != 0) {
      if (*(int *)(uVar4 + 8) == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar4 + 8) + 4)));
      }
      uVar5 = F_005ef690(this_00 GEN_EDX_FWD,0x41,*(int *)(uVar4 + 0xa4),0,1);
      uVar4 = 0;
      if (uVar5 != 0) {
        if (*(int *)((int)this + 0x20) == 1) {
          F_005d89f0(uVar5 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),*(float *)((int)this + 0x24),
                       (uint)*(byte *)((int)this + 0x1d));
        }
        else if (*(int *)((int)this + 0x20) == 2) {
          F_005d89f0(uVar5 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),*(float *)((int)this + 0x24),
                       (uint)*(byte *)((int)this + 0x1d));
          F_005d9480(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x48)));
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          fVar1 = (float)((float10)(*(float *)(gen_frame + 0x48)) * (float10)REFG(double, 0x1088108));
          (*(float *)(gen_frame + 0x48)) = fVar1;
          fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          (*(float *)(gen_frame + 0x4c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x14)) = (float)fVar7;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          (*(float *)(gen_frame + 0x4c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x1c)) = (float)fVar7;
        }
        else {
          fVar1 = *(float *)((int)this + 0x54);
          uVar2 = *(undefined4 *)((int)this + 0x58);
          (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x50);
          (*(float *)(gen_frame + 0x14)) = fVar1;
          (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
          (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x5c);
        }
        fVar1 = *(float *)((int)this + 0xc0);
        (*(float *)(gen_frame + 0x30)) = REFG(undefined4, 0x1302cf0);
        (*(float *)(gen_frame + 0x3c)) = REFG(undefined4, 0x1302cfc);
        (*(float *)(gen_frame + 0x34)) = gen_bits2f(REFG(undefined4, 0x1302cf4));
        (*(float *)(gen_frame + 0x38)) = REFG(undefined4, 0x1302cf8);
        if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
          fVar1 = *(float *)((int)this + 0xbc);
          (*(float *)(gen_frame + 0x30)) = 0.0;
          (*(float *)(gen_frame + 0x4c)) = fVar1;
          (*(float *)(gen_frame + 0x34)) = 0.0;
          fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
          (*(float *)(gen_frame + 0x48)) = fVar1;
          fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          (*(float *)(gen_frame + 0x4c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x38)) = (float)fVar7;
          fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          (*(float *)(gen_frame + 0x4c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x3c)) = (float)fVar7;
        }
        pfVar6 = (float *)F_004f6d80(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x30)),(uint)&(*(undefined4 *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x30)) = *pfVar6;
        (*(float *)(gen_frame + 0x34)) = pfVar6[1];
        (*(float *)(gen_frame + 0x38)) = pfVar6[2];
        (*(float *)(gen_frame + 0x3c)) = pfVar6[3];
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xf0))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
        (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xac);
        (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x9c);
        (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
        F_004ef0c0(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x10)));
        F_004eea10(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x50)));
        F_005d8960(uVar5 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),*(float *)((int)this + 0x24),(uint)*(byte *)((int)this + 0x1d))
        ;
        piVar3 = *(int * PTR32 *)((int)this + 4);
        (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x0)));
        (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x4)));
        (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) + (float10)(*(float *)(gen_frame + 0x8)));
        (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x0)));
        (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x4)));
        (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x28)) + (float10)(*(float *)(gen_frame + 0x8)));
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_005f0f60 */
GEN_FRAME byte GEN_THISCALL F_005f0f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f0f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (param_1 == (ushort *)0x0) {
    *(uint *)((int)this + 8) = (uint)(ushort)param_2;
    *(ushort *)((int)this + 0x10) = (ushort)param_2;
    return (byte)(ushort)param_2;
  }
  *(uint *)((int)this + 8) = (uint)*param_1;
  *(ushort *)((int)this + 0x10) = (ushort)param_2;
  F_005eda50(this GEN_EDX_FWD,(uint)((char)param_1[8] != '\0'));
  bVar1 = ((*(char *)((int)param_1 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)this + 0x16)) & 2;
  *(byte *)((int)this + 0x16) = *(byte *)((int)this + 0x16) ^ bVar1;
  *(ushort *)((int)this + 0x12) = param_1[0xc];
  *(ushort *)((int)this + 0x14) = param_1[0xd];
  return bVar1;
}

/* ref: FUN_005f0fd0 */
GEN_FRAME byte GEN_THISCALL F_005f0fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f0fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[1]) + 0x14);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    F_00616230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x8)));
    bVar2 = F_005ef520(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,iVar1);
    pvVar3 = (undefined *)(uint)bVar2;
  }
  return (byte)pvVar3;
}

/* ref: FUN_005f1020 */
GEN_FRAME uint GEN_THISCALL F_005f1020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((char *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 4) + 0x54))) == '\0') {
    F_005ef520(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,*param_1);
    F_005f04c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x4c))) GEN_EDX_ARG,*param_1,0);
  }
  piVar1 = (int *)*param_1;
  if (*(int *)((int)this + 8) == 0xffff) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,0);
  }
  else {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    puVar2 = (undefined4 *)*param_1;
    if (puVar2[7] == -1) {
      if (puVar2 == (undefined4 *)0x0) {
        return uVar3;
      }
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *param_1 = 0;
      return uVar3;
    }
  }
  *param_1 = 0;
  return uVar3;
}

/* ref: FUN_005f1090 */
GEN_FRAME byte GEN_THISCALL F_005f1090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1090u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    (*(undefined4 *)&gen_args[1]) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    F_005f1020((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]));
    F_00616230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),pvVar1);
    return 1;
  }
  return 0;
}

/* ref: FUN_005f10f0 */
GEN_FRAME uint GEN_THISCALL F_005f10f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f10f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    if ((*(int *)&gen_args[2]) != -1) {
      if (*(char *)(uVar1 + 0x11) == '\x06') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x78) + (*(int *)&gen_args[2]) * 4))) + 0x10)));
      }
      if (*(char *)(uVar1 + 0x11) == '\a') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0xa0) + (*(int *)&gen_args[2]) * 4))) + 0x10)));
      }
    }
  }
  return uVar1;
}

/* ref: FUN_005f1150 */
GEN_FRAME uint GEN_THISCALL F_005f1150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f1150u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    if ((*(int *)&gen_args[2]) != -1) {
      if (*(char *)(uVar1 + 0x11) == '\x06') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x78) + (*(int *)&gen_args[2]) * 4))) + 0x10)));
      }
      if (*(char *)(uVar1 + 0x11) == '\a') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0xa0) + (*(int *)&gen_args[2]) * 4))) + 0x10)));
      }
    }
  }
  return uVar1;
}

/* ref: FUN_005f11c0 */
GEN_NOFRAME byte GEN_THISCALL F_005f11c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5f11c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined4 uVar1;
  float10 fVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  (*(undefined4 *)(gen_frame + 0x7c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x74)) = param_3;
  (*(undefined4 *)(gen_frame + 0x70)) = param_4;
  iVar3 = param_5;
  if (param_5 == 0) {
    if (*(int *)((int)this + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)((int)this + 0x3c);
    F_00614a80((undefined *)(iVar3 + 0x15c) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x6c)),&(*(undefined4 *)(gen_frame + 0x78)));
    if ((*(int *)(gen_frame + 0x6c)) == *(int *)(iVar3 + 0x160)) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(gen_frame + 0x6c)) + 0x20;
    }
  }
  fVar2 = (float10)0;
  uVar1 = *(undefined4 *)(iVar3 + 0x44);
  (*(float *)(gen_frame + 0x100)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)(iVar3 + 0x40);
  (*(float *)(gen_frame + 0x104)) = (float)fVar2;
  (*(float *)(gen_frame + 0x108)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0;
  (*(undefined4 *)(gen_frame + 0xf0)) = 0;
  (*(undefined4 *)(gen_frame + 0xf4)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xf8)) = *(undefined4 *)(iVar3 + 0x48);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0xd0)) GEN_EDX_ARG,iVar3 + 0x30);
  (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x20) + (float10)(*(float *)(gen_frame + 0x100)))));
  (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x24) + (float10)(*(float *)(gen_frame + 0x104)))));
  (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x28) + (float10)(*(float *)(gen_frame + 0x108)))));
  F_005fec10(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xd0)),iVar3 + 0x50);
  F_005fe8d0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x80)));
  (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0xc0));
  (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0xc4));
  (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0xc8));
  F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x70)));
  F_00a1f090(param_1,(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf58 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f1360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x30) != 0) {
    iVar1 = *(int *)(this + 0x30);
    *(undefined4 *)(iVar1 + 0x30) = *param_1;
    *(undefined4 *)(iVar1 + 0x34) = param_1[1];
    *(undefined4 *)(iVar1 + 0x38) = param_1[2];
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    piVar2 = *(int * PTR32 *)(this + 0x30);
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      if (((byte)this[0x29] & 4) == 0) {
        bVar5 = ((byte)this[0x28] & 0xf) == 0;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = bVar5;
        (*(int *)(gen_frame + 0x5c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3),bVar5);
      }
      else {
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = 0;
        (*(int *)(gen_frame + 0x5c)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3) << 8;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_FWD,(*(int *)(gen_frame + 0x5c)));
    }
  }
  if (*(int *)(this + 0x34) != 0) {
    iVar1 = *(int *)(this + 0x3c);
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    if (iVar1 == 0) {
      piVar2 = *(int * PTR32 *)(this + 0x34);
      (*(undefined4 *)(gen_frame + 0x50)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x54)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x58)) = param_1[2];
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG)));
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar4[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar4[5];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[6];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar4[7];
      (*(undefined4 *)(gen_frame + 0x20)) = puVar4[8];
      (*(undefined4 *)(gen_frame + 0x24)) = puVar4[9];
      (*(undefined4 *)(gen_frame + 0x28)) = puVar4[10];
      (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
      bVar3 = F_005f11c0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x44)),&(*(undefined4 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x0)),0);
      if (bVar3 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x20))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x2c))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x44)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x34))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x38)));
        return;
      }
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf60 */
GEN_NOFRAME uint GEN_THISCALL F_005f1520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(this + 0x30);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x40) = *param_1;
    *(undefined4 *)(iVar1 + 0x44) = param_1[1];
    *(undefined4 *)(iVar1 + 0x48) = param_1[2];
    uVar2 = param_1[3];
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
    piVar4 = *(int * PTR32 *)(this + 0x30);
    if (*(char *)((int)piVar4 + 0x65) == '\x03') {
      if (((byte)this[0x29] & 4) == 0) {
        bVar7 = ((byte)this[0x28] & 0xf) == 0;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x6c)) + 0)) = bVar7;
        (*(int *)(gen_frame + 0x6c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x6c)), 1, 3),bVar7);
      }
      else {
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x6c)) + 0)) = 0;
        (*(int *)(gen_frame + 0x6c)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x6c)), 1, 3) << 8;
      }
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_FWD,(*(int *)(gen_frame + 0x6c)))));
    }
  }
  if (*(int *)(this + 0x34) != 0) {
    iVar1 = *(int *)(this + 0x3c);
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    if (iVar1 == 0) {
      F_00a1e0f0(&(*(undefined4 *)(gen_frame + 0x30)),param_1);
      piVar4 = *(int * PTR32 *)(this + 0x34);
      (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x64)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined4 *)(gen_frame + 0x38));
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x2c))(piVar4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)))));
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG)));
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar5[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[5];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar5[6];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar5[7];
      (*(undefined4 *)(gen_frame + 0x20)) = puVar5[8];
      (*(undefined4 *)(gen_frame + 0x24)) = puVar5[9];
      (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_1[3];
      (*(undefined4 *)(gen_frame + 0x28)) = puVar5[10];
      bVar3 = F_005f11c0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0x0)),0);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if (bVar3 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x20))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x2c))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x34))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x48)));
        return uVar6;
      }
    }
  }
  return (uint)piVar4;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf62 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f16e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f16e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x30) != 0) {
    iVar1 = *(int *)(this + 0x30);
    *(undefined4 *)(iVar1 + 0x50) = *param_1;
    *(undefined4 *)(iVar1 + 0x54) = param_1[1];
    *(undefined4 *)(iVar1 + 0x58) = param_1[2];
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    piVar2 = *(int * PTR32 *)(this + 0x30);
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      if (((byte)this[0x29] & 4) == 0) {
        bVar5 = ((byte)this[0x28] & 0xf) == 0;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = bVar5;
        (*(int *)(gen_frame + 0x5c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3),bVar5);
      }
      else {
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = 0;
        (*(int *)(gen_frame + 0x5c)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3) << 8;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_FWD,(*(int *)(gen_frame + 0x5c)));
    }
  }
  if (*(int *)(this + 0x34) != 0) {
    iVar1 = *(int *)(this + 0x3c);
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    if (iVar1 == 0) {
      piVar2 = *(int * PTR32 *)(this + 0x34);
      (*(undefined4 *)(gen_frame + 0x50)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x54)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x58)) = param_1[2];
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG)));
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar4[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar4[5];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[6];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar4[7];
      (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x28)) = param_1[2];
      bVar3 = F_005f11c0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x44)),&(*(undefined4 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x0)),0);
      if (bVar3 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x20))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x44)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x2c))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x38)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x34))))(*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)));
        return;
      }
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf64 */
GEN_FRAME uint GEN_THISCALL F_005f1880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1880u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  byte bVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x30) = *(*(undefined4 * PTR32 *)&gen_args[1]);
    *(undefined4 *)(iVar1 + 0x34) = (*(undefined4 * PTR32 *)&gen_args[1])[1];
    *(undefined4 *)(iVar1 + 0x38) = (*(undefined4 * PTR32 *)&gen_args[1])[2];
    *(undefined4 *)(iVar1 + 0x40) = (*(undefined4 * PTR32 *)&gen_args[1])[4];
    *(undefined4 *)(iVar1 + 0x44) = (*(undefined4 * PTR32 *)&gen_args[1])[5];
    *(undefined4 *)(iVar1 + 0x48) = (*(undefined4 * PTR32 *)&gen_args[1])[6];
    *(undefined4 *)(iVar1 + 0x4c) = (*(undefined4 * PTR32 *)&gen_args[1])[7];
    *(undefined4 *)(iVar1 + 0x50) = (*(undefined4 * PTR32 *)&gen_args[1])[8];
    *(undefined4 *)(iVar1 + 0x54) = (*(undefined4 * PTR32 *)&gen_args[1])[9];
    *(undefined4 *)(iVar1 + 0x58) = (*(undefined4 * PTR32 *)&gen_args[1])[10];
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    piVar4 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    if (*(char *)((int)piVar4 + 0x65) == '\x03') {
      if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x29] & 4) == 0) {
        (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3),((byte)(*(undefined * PTR32 *)&gen_args[0])[0x28] & 0xf) == 0)));
      }
      else {
        (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((uint)GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3) << 8)));
      }
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[1]))));
    }
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) != 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    if (iVar1 == 0) {
      F_00a1f090(&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)),puVar2);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14)));
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x34))))
                                (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)))));
    }
    else {
      bVar3 = F_005f11c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)),puVar2,0);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if (bVar3 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x14)));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
        return uVar5;
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_005f1a10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f1a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f1a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 0x30);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    if (*(int *)((int)this + 8) == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    piVar2 = (int *)F_005ef690(this_00 GEN_EDX_FWD,0x2f,*(int *)((int)this + 0x34),0,1);
    if (piVar2 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG);
      *((uint *)GEN_TOP((*(int *)((int)this + 0x30) + 0x80))) = uVar3;
      return;
    }
  }
  *(undefined4 *)(iVar1 + 0x80) = 0;
  return;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f1a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int iVar2;
  undefined * this_00;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  double dVar8;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  bVar3 = *(char *)(param_1 + 0x41) != '\0';
  (*(bool *)(gen_frame + 0x3d)) = (bool)((byte)this[0x8c] >> 1 & 1) != bVar3;
  (*(bool *)(gen_frame + 0x3f)) = bVar3;
  if ((*(int *)(this + 8) == 0) || (iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar2 == 0)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *(undefined * PTR32 *)(iVar2 + 0x44);
  }
  fVar7 = *(float *)(param_1 + 0x50);
  if (((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
       ((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar7 == *(float *)&REFG(undefined, 0x1088114))) &&
     (fVar7 = *(float *)&REFG(undefined, 0x10a2760), !bVar3)) {
    dVar8 = F_005ee0f0(this_00 GEN_EDX_ARG,4);
    fVar7 = (float)dVar8;
    (*(float *)(gen_frame + 0x38)) = fVar7;
  }
  *(float *)(this + 0x7c) = fVar7;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  iVar2 = (int)((((float10)*(float *)(param_1 + 0x44) + fVar4) * fVar5) / fVar6);
  if (iVar2 < 0x10000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xffff;
  }
  *(short *)(this + 0x74) = (short)iVar2;
  iVar2 = (int)((((float10)*(float *)(param_1 + 0x48) + fVar4) * fVar5) / fVar6);
  if (iVar2 < 0x10000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xffff;
  }
  *(short *)(this + 0x76) = (short)iVar2;
  iVar2 = (int)((((float10)*(float *)(param_1 + 0x4c) + fVar4) * fVar5) / fVar6);
  if (iVar2 < 0x10000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xffff;
  }
  *(short *)(this + 0x78) = (short)iVar2;
  iVar2 = (int)((fVar5 * ((float10)*(float *)(param_1 + 0x50) + fVar4)) / fVar6);
  if (iVar2 < 0x10000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xffff;
  }
  *(short *)(this + 0x7a) = (short)iVar2;
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x54);
  this[0x8c] = (undefined1)(((*(bool *)(gen_frame + 0x3f)) * '\x02' ^ (byte)this[0x8c]) & 2 ^ (byte)this[0x8c]);
  this[0x88] = *(undefined *)(param_1 + 0x3c);
  this[0x89] = *(undefined *)(param_1 + 0x3d);
  this[0x8a] = *(undefined *)(param_1 + 0x3e);
  this[0x8b] = *(undefined *)(param_1 + 0x3f);
  if ((*(bool *)(gen_frame + 0x3d)) != false) {
    (*(float *)(gen_frame + 0x38)) = *(float *)this;
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)((int)gen_fl2bits(*(float *)this) + 0xfc))(this GEN_EDX_ARG);
    ((code *)*(gen_code32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + 0x48))(this,uVar1);
  }
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((iVar2 = *(int *)(this + 8), iVar2 == 0 ||
      (((*(int *)(iVar2 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(iVar2 + 4) + 0x50))) != '\0')) &&
       ((iVar2 == 0 || ((*(byte *)(iVar2 + 0x16) & 1) != 0)))))))) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xcc))(this GEN_EDX_ARG);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x38)) + 0)) = 1;
    (*(float *)(gen_frame + 0x38)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x38)), 1, 3),1));
    if ((char)uVar1 != '\0') goto LAB_005f1c8b;
  }
  fVar7 = (*(float *)(gen_frame + 0x38));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x38)) + 0)) = 0;
  (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)gen_fl2bits(fVar7) & 0xffffff00);
LAB_005f1c8b: ;
  bVar3 = *(char *)(param_1 + 0x40) != '\0';
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = bVar3;
  (*(undefined4 *)(gen_frame + 0x34)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x34)), 1, 3),bVar3);
  this[0x2b] = (undefined1)((byte)this[0x2b] ^ (bVar3 << 4 ^ (byte)this[0x2b]) & 0x10);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe0))(this GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x38))));
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x34)));
  F_005de400(this GEN_EDX_ARG,*(uint *)(this + 0x30));
  return;
}

/* ref: FUN_005f1ce0 */
GEN_NOFRAME uint GEN_THISCALL F_005f1ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f1ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00509590((undefined *)((int)this + 0x30) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a5884));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[5])REFP(0x10a586c));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x40), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x44) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x44), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x48) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x48), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x60) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x60), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 100) = GEN_FLT_TO(*(undefined4 *)((int)this + 100), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x68) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x68), REFG(float, 0x1302e18));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x76) = 0;
  *(undefined2 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) & 0xc0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xfffffcff;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x84) = uVar1;
  *(undefined2 *)((int)this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined * PTR32 *)((int)this + 0x9c) = this;
  return (uint)this;
}

/* ref: FUN_005f1e60 */
GEN_FRAME uint GEN_THISCALL F_005f1e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1e60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  bVar1 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  if ((((bVar1 != 0) || (bVar2 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG), bVar2 != 0)) || (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0))
     || ((iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar5 == 0 ||
         (*(int *)(iVar5 + 0x20) < 0x3c)))) {
    bVar2 = F_005e0e90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar4 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      piVar3 = (int *)F_004e8110(REFG(void * PTR32, 0x1375a64) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),
                                   *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))),
                                   (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))));
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = piVar3;
      uVar4 = 0;
      if (piVar3 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
        uVar4 = F_005e0f90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      }
      if (bVar1 != 0) {
        bVar1 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        uVar4 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 == 0) {
          uVar4 = 0;
          if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) &&
              (uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), uVar4 != 0)) &&
             (0x3b < *(int *)(uVar4 + 0x20))) {
            if (uVar4 != 0) {
              uVar4 = F_005ee020(*(undefined * PTR32 *)(uVar4 + 0x44) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))));
              return uVar4;
            }
            uVar4 = F_005ee020((undefined *)0x0 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))));
          }
        }
      }
    }
    return uVar4;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x44);
  }
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))));
  F_00614c10((undefined *)(iVar5 + 0x30) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *(undefined * PTR32 *)(iVar5 + 0x34)) {
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  uVar4 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  *(int *)(uVar4 + 0x14) = *(int *)(uVar4 + 0x14) + 1;
  *(undefined1 *)(uVar4 + 0x12) = 1;
  return uVar4;
}

/* ref: FUN_005f1f80 */
GEN_FRAME byte GEN_THISCALL F_005f1f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1f80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  iVar5 = 0;
  (*(byte *)(gen_frame + 0x3a)) = bVar3;
  if ((((bVar3 == 0) && (bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG), bVar3 == 0)) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0))
     && ((iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar2 != 0 &&
         (0x3b < *(int *)(iVar2 + 0x20))))) {
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x44);
    }
    (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))))));
    F_00614c10((undefined *)(iVar5 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x34)),&(*(char * PTR32 *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x34)) != *(int *)(iVar5 + 0x34)) {
      iVar5 = *(int *)((*(int *)(gen_frame + 0x34)) + 0x10);
      piVar1 = (int *)(iVar5 + 0x14);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(iVar5 + 0x12) = 1;
    }
    return 0;
  }
  (*(byte *)(gen_frame + 0x3b)) = 1;
  switch((unsigned int)(uintptr_t)(*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))))) {
  case '\b': ;
  case '\t': ;
  case '\v': ;
  case '\f': ;
switchD_005f2005_caseD_0: ;
    bVar3 = F_005e0f00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    (*(byte *)(gen_frame + 0x3b)) = bVar3;
    if (bVar3 == 0) goto LAB_005f2088;
    break;
  default: ;
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) == '\r') goto switchD_005f2005_caseD_0;
    if (*(*(char * PTR32 *)&gen_args[1]) == '\0') {
      return 0;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) == 0) {
      ((int *)(gen_frame + 0xc))[0] = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30;
      ((int *)(gen_frame + 0xc))[1] = 0;
      ((int *)(gen_frame + 0xc))[3] = 0;
      ((int *)(gen_frame + 0xc))[2] = 0;
      ((int *)(gen_frame + 0xc))[4] = 5;
      (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
      (*(undefined2 *)(gen_frame + 0x2d)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
      (*(undefined4 *)(gen_frame + 0x24)) = 5000;
      (*(undefined1 *)(gen_frame + 0x28)) = 0;
      uVar4 = F_00513dc0((*(char * PTR32 *)&gen_args[1]),((int *)(gen_frame + 0xc)),0,0);
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) | 0x10;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = uVar4;
    }
    else if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) & 0x10) == 0) goto switchD_005f2005_caseD_0;
  }
  F_005e0f90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
LAB_005f2088: ;
  if ((((*(byte *)(gen_frame + 0x3a)) != 0) && (bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG), bVar3 == 0)) &&
     ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0 &&
      ((iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar2 != 0 && (0x3b < *(int *)(iVar2 + 0x20))
       ))))) {
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x44);
    }
    (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))))));
    F_00614c10((undefined *)(iVar5 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x34)),&(*(char * PTR32 *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x34)) != *(int *)(iVar5 + 0x34)) {
      iVar5 = *(int *)((*(int *)(gen_frame + 0x34)) + 0x10);
      piVar1 = (int *)(iVar5 + 0x14);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(iVar5 + 0x12) = 1;
    }
  }
  return (*(byte *)(gen_frame + 0x3b));
}

/* ref: FUN_005f2100 */
GEN_FRAME uint GEN_THISCALL F_005f2100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  F_005ee3d0(this GEN_EDX_FWD,1);
  uVar1 = F_005ebe80(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_005f2120 */
GEN_FRAME byte GEN_THISCALL F_005f2120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  
  uVar5 = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
  puVar3 = (undefined4 *)*puVar2;
  while( true ) {
    if (puVar3 == puVar2) {
      return 0;
    }
    puVar7 = ((undefined4 *)GEN_TOP(((undefined4 *)puVar3[6])[1]));
    cVar1 = *(char *)((int)puVar7 + 0x11);
    puVar4 = (undefined4 *)puVar3[6];
    while (cVar1 == '\0') {
      if ((uint)puVar7[3] < uVar5) {
        puVar6 = (undefined4 *)puVar7[2];
        puVar7 = puVar4;
      }
      else {
        puVar6 = (undefined4 *)*puVar7;
      }
      puVar4 = puVar7;
      puVar7 = puVar6;
      cVar1 = *(char *)((int)puVar6 + 0x11);
    }
    puVar7 = (undefined4 *)puVar3[6];
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar4;
    if ((puVar4 == puVar7) || (uVar5 < (uint)puVar4[3])) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar7;
      ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    }
    else {
      ppuVar8 = &(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    if (*ppuVar8 != puVar7) break;
    if (*(char *)((int)puVar3 + 0x25) == '\0') {
      puVar7 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar7 + 0x25) == '\0') {
        cVar1 = *(char *)((int)*puVar7 + 0x25);
        puVar3 = puVar7;
        puVar7 = (undefined4 *)*puVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar7 + 0x25);
          puVar3 = puVar7;
          puVar7 = (undefined4 *)*puVar7;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x25);
        puVar4 = (undefined4 *)puVar3[1];
        puVar7 = puVar3;
        while ((puVar3 = puVar4, cVar1 == '\0' && (puVar7 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x25);
          puVar4 = (undefined4 *)puVar3[1];
          puVar7 = puVar3;
        }
      }
    }
  }
  F_00616510(puVar3 + 5 GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[1]),*ppuVar8);
  F_005ee510((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar5);
  return 1;
}

/* ref: FUN_005f2200 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x14);
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 4)));
  piVar5 = *(int * PTR32 *)(param_1 + 4);
  while ((piVar5 != piVar2 && (local_8 != 0))) {
    if (*(char *)((int)piVar5 + 0x15) == '\0') {
      piVar7 = (int *)*piVar5;
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        cVar1 = *(char *)(piVar7[2] + 0x15);
        piVar6 = (int *)piVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(piVar6[2] + 0x15);
          piVar7 = piVar6;
          piVar6 = (int *)piVar6[2];
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0x15);
        piVar6 = (int *)piVar5[1];
        piVar7 = piVar5;
        while ((piVar4 = piVar6, cVar1 == '\0' && (piVar7 == (int *)*piVar4))) {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar6 = (int *)piVar4[1];
          piVar7 = piVar4;
        }
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7 = piVar4;
        }
      }
    }
    else {
      piVar7 = (int *)piVar5[2];
    }
    piVar7 = (int *)piVar7[4];
    if ((piVar7 != (int *)0x0) && ((*(byte *)(piVar7 + 8) & 2) != 0)) {
      uVar3 = piVar7[9];
      if ((uVar3 & 1) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x70))(piVar7 GEN_EDX_FWD);
      }
      if ((uVar3 & 2) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x80))(piVar7 GEN_EDX_ARG);
      }
      local_8 = local_8 - 1;
    }
    if (*(char *)((int)piVar5 + 0x15) == '\0') {
      piVar7 = (int *)*piVar5;
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        cVar1 = *(char *)(piVar7[2] + 0x15);
        piVar6 = (int *)piVar7[2];
        while (piVar5 = piVar7, cVar1 == '\0') {
          cVar1 = *(char *)(piVar6[2] + 0x15);
          piVar7 = piVar6;
          piVar6 = (int *)piVar6[2];
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0x15);
        piVar7 = (int *)piVar5[1];
        while ((piVar6 = piVar7, cVar1 == '\0' && (piVar5 == (int *)*piVar6))) {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar7 = (int *)piVar6[1];
          piVar5 = piVar6;
        }
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          piVar5 = piVar6;
        }
      }
    }
    else {
      piVar5 = (int *)piVar5[2];
    }
  }
  return 0;
}

/* ref: FUN_005f2320 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f2320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f2320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    F_005ee840(this GEN_EDX_FWD,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x18));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return;
}

/* ref: FUN_005f2350 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005eed10(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2);
    return;
  }
  return;
}

/* ref: FUN_005f2370 */
GEN_FRAME uint GEN_THISCALL F_005f2370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ee8f0(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005f2380 */
GEN_FRAME uint GEN_THISCALL F_005f2380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2380u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int * piVar3;
  char * pcVar4;
  byte bVar5;
  char * pcVar6;
  uint uVar7;
  char * pcVar8;
  undefined3 extraout_var = 0;
  char * pcVar9;
  
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  F_00619550((undefined *)(iVar2 + 0x13c) GEN_EDX_FWD,&(*(char * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  pcVar6 = (*(char * PTR32 *)(gen_frame + 0x8));
  if ((*(char * PTR32 *)(gen_frame + 0x8)) != *(char * PTR32 *)(iVar2 + 0x140)) {
    pcVar6 = (char *)0x0;
    if (*(int *)((*(char * PTR32 *)(gen_frame + 0x8)) + 0x10) != 0) {
      pcVar6 = *((char * PTR32 *)GEN_TOP((*(int *)((*(char * PTR32 *)(gen_frame + 0x8)) + 0x10) + 4)));
      pcVar9 = *(char * PTR32 *)pcVar6;
      (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar6;
      if (pcVar9 != pcVar6) {
        do {
          piVar3 = *(int * PTR32 *)(pcVar9 + 0x18);
          F_005eea10((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar3);
          if (*(char *)((int)piVar3 + 0x11) == '\x06') {
            F_005eea90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar3);
          }
          pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3 GEN_EDX_ARG)));
          if ((char)pcVar6 != '\0') {
            uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3 GEN_EDX_ARG);
            pcVar6 = (char *)0x0;
            if (((uVar7 != 0) &&
                (pcVar8 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3 GEN_EDX_ARG))), pcVar6 = pcVar8,
                pcVar8 != (char *)0x0)) && (*pcVar8 != '\0')) {
              bVar5 = F_005e9bb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pcVar8);
              pcVar6 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
              if (bVar5 != 0) {
                (*(uint *)&gen_args[1]) = F_00513dc0(pcVar8,0,0,0);
                pcVar6 = (char *)F_00619c50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
              }
            }
          }
          if (pcVar9[0x21] == '\0') {
            pcVar8 = *(char * PTR32 *)(pcVar9 + 8);
            if (pcVar8[0x21] == '\0') {
              cVar1 = (*(char * PTR32 *)pcVar8)[0x21];
              pcVar6 = *(char * PTR32 *)pcVar8;
              while (pcVar9 = pcVar8, cVar1 == '\0') {
                cVar1 = (*(char * PTR32 *)pcVar6)[0x21];
                pcVar8 = pcVar6;
                pcVar6 = *(char * PTR32 *)pcVar6;
              }
            }
            else {
              cVar1 = (*(char * PTR32 *)(pcVar9 + 4))[0x21];
              pcVar4 = *(char * PTR32 *)(pcVar9 + 4);
              pcVar8 = pcVar9;
              while ((pcVar6 = pcVar4, pcVar9 = pcVar6, cVar1 == '\0' &&
                     (pcVar8 == *(char * PTR32 *)(pcVar6 + 8)))) {
                cVar1 = (*(char * PTR32 *)(pcVar6 + 4))[0x21];
                pcVar4 = *(char * PTR32 *)(pcVar6 + 4);
                pcVar8 = pcVar6;
              }
            }
          }
        } while (pcVar9 != (*(char * PTR32 *)(gen_frame + 0x8)));
      }
    }
  }
  return (uint)pcVar6;
}

/* ref: FUN_005f24b0 */
GEN_FRAME uint GEN_THISCALL F_005f24b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f24b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005ef690(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_005f24e0 */
GEN_FRAME uint GEN_THISCALL F_005f24e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f24e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) && (*(int *)(param_2 + 0x40) == 0x3000)) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,*(undefined4 *)(param_2 + 0x38),
                         *(undefined4 *)(param_2 + 0x3c),1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005f2520 */
GEN_FRAME byte GEN_THISCALL F_005f2520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f2520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,0x34,param_1,param_2,1);
    if (uVar1 != 0) {
      F_005dbf70(uVar1 GEN_EDX_ARG,param_3,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f2560 */
GEN_FRAME byte GEN_THISCALL F_005f2560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,0x34,param_1,param_2,1);
    if (uVar1 != 0) {
      *(undefined1 *)(uVar1 + 0x48) = 3;
      if ((*(uint *)(uVar1 + 0x30) & 0xc0000000) != 0) {
        F_00b5b440(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint *)(uVar1 + 0x30),0);
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f25c0 */
GEN_FRAME byte GEN_THISCALL F_005f25c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f25c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    this_00 = (undefined *)F_005ef690(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,6,param_1,0,1);
    if (this_00 != (undefined *)0x0) {
      F_005dbaf0(this_00 GEN_EDX_ARG,param_2,param_3,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f2600 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efa60(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2);
    return;
  }
  return;
}

/* ref: FUN_005f2620 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efb00(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2);
    return;
  }
  return;
}

/* ref: FUN_005f2640 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efbe0(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2);
    return;
  }
  return;
}

/* ref: FUN_005f2660 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efcc0(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2);
    return;
  }
  return;
}

/* ref: FUN_005f2680 */
GEN_FRAME byte GEN_THISCALL F_005f2680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f2680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    this_00 = (undefined *)F_005ef690(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,6,param_1,0,1);
    if (this_00 != (undefined *)0x0) {
      F_005e34a0(this_00 GEN_EDX_ARG,param_2,param_3,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f26c0 */
GEN_FRAME unsigned int GEN_THISCALL F_005f26c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f26c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efde0(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2,param_3);
    return;
  }
  return;
}

/* ref: Client::LayoutEngine::LayoutManager::vf4 */
GEN_FRAME uint GEN_THISCALL F_005f26e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f26e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)(this + 0x100);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)puVar3[4] + 0x10))((int *)puVar3[4] GEN_EDX_FWD,param_1);
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar6 = F_005ef3c0(this GEN_EDX_ARG,param_1,0);
  return uVar6;
}

/* ref: FUN_005f2770 */
GEN_FRAME uint GEN_THISCALL F_005f2770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(char *)((int)this + 0x53) = (char)param_1;
  if (((char)param_1 == '\0') &&
     (this_00 = *(undefined * PTR32 *)((int)this + 0x44), *(int *)((int)this_00 + 0x10) == 0)) {
    *(undefined4 *)((int)this_00 + 0x10) = 1;
    F_005ee3d0(this_00 GEN_EDX_FWD,1);
    F_005ebe80(this_00 GEN_EDX_ARG);
  }
  uVar1 = ((char)param_1 != '\0') + 5;
  *(uint *)((int)this + 0xa4) = uVar1;
  return uVar1;
}

/* ref: FUN_005f27c0 */
GEN_FRAME uint GEN_THISCALL F_005f27c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f27c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x60) = *param_1;
  *(undefined4 *)((int)this + 100) = param_1[1];
  *(undefined4 *)((int)this + 0x68) = param_1[2];
  if (*(char *)((int)this + 0x52) == '\0') {
    *(undefined4 *)((int)this + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x10)));
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x44);
  *(undefined1 *)((int)this + 0x52) = 1;
  *(undefined4 *)((int)this_00 + 0x10) = 0;
  F_005ee3d0(this_00 GEN_EDX_FWD,1);
  uVar1 = F_005ebe80(this_00 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_005f2810 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f2810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f2810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if (*(char *)((int)this + 0x52) != '\0') {
    this_00 = *(undefined * PTR32 *)((int)this + 0x44);
    *(undefined1 *)((int)this + 0x52) = 0;
    *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)this + 0x5c);
    F_005ee3d0(this_00 GEN_EDX_FWD,1);
    F_005ebe80(this_00 GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_005f2840 */
GEN_FRAME uint GEN_THISCALL F_005f2840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  if (*param_1 == 2) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
    *(undefined4 *)((int)pvVar1 + 0x10) = 4;
    F_005ee3d0(pvVar1 GEN_EDX_FWD,1);
    F_005ebe80(pvVar1 GEN_EDX_ARG);
    piVar3 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,param_1[1],0,0);
    *(int * PTR32 *)((int)this + 0x90) = piVar3;
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
      uVar2 = F_005f27c0(this GEN_EDX_ARG,uVar2);
    }
    return uVar2;
  }
  if (*param_1 != 3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
    *(undefined4 *)((int)pvVar1 + 0x10) = 2;
    F_005ee3d0(pvVar1 GEN_EDX_ARG,1);
    uVar2 = F_005ebe80(pvVar1 GEN_EDX_ARG);
    return uVar2;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
  *(undefined4 *)((int)pvVar1 + 0x10) = 5;
  F_005ee3d0(pvVar1 GEN_EDX_ARG,1);
  F_005ebe80(pvVar1 GEN_EDX_ARG);
  *(int *)((int)this + 0x70) = param_1[2];
  *(int *)((int)this + 0x74) = param_1[3];
  *(int *)((int)this + 0x78) = param_1[4];
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x78);
  if (*(char *)((int)this + 0x52) == '\0') {
    *(undefined4 *)((int)this + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x10)));
  }
  *(undefined1 *)((int)this + 0x52) = 1;
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
  *(undefined4 *)((int)pvVar1 + 0x10) = 0;
  F_005ee3d0(pvVar1 GEN_EDX_ARG,1);
  uVar2 = F_005ebe80(pvVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005f2940 */
GEN_FRAME uint GEN_THISCALL F_005f2940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char * pcVar4;
  undefined4 * puVar5;
  byte bVar6;
  int iVar7;
  
  uVar3 = F_006155c0((undefined *)((int)this + 0x17c) GEN_EDX_FWD);
  iVar7 = 0;
  if (0 < param_1[1]) {
    do {
      pcVar4 = (char *)(*param_1 + iVar7 * 8 + (int)param_1);
      bVar6 = *pcVar4 != '\0' | ((byte *)(gen_frame + 0xc))[8] & 0xfc;
      uVar1 = *(undefined2 *)(pcVar4 + 2);
      ((byte *)(gen_frame + 0xc))[8] = bVar6;
      uVar2 = *(undefined4 *)(pcVar4 + 4);
      ((byte *)(gen_frame + 0xc))[9] = pcVar4[1];
      ((byte *)(gen_frame + 0xc))[10] = (byte)uVar1;
      ((byte *)(gen_frame + 0xc))[0xb] = SUB21(uVar1,1);
      ((byte *)(gen_frame + 0xc))[10] = (byte)uVar1;
      ((byte *)(gen_frame + 0xc))[0xb] = SUB21(uVar1,1);
      puVar5 = (undefined4 *)F_004296a0(0x1c,0,900);
      *puVar5 = *(undefined4 *)((int)this + 0x180);
      puVar5[1] = *(undefined4 *)((int)this + 0x180);
      puVar5[2] = *(undefined4 *)((int)this + 0x180);
      *(undefined2 *)(puVar5 + 6) = 0;
      if (puVar5 + 3 != (undefined4 *)0x0) {
        puVar5[3] = uVar2;
        puVar5[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
        puVar5[5] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12));
      }
      uVar3 = F_00618350((undefined *)((int)this + 0x17c) GEN_EDX_ARG,((byte *)(gen_frame + 0xc)),puVar5,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1[1]);
  }
  return uVar3;
}

/* ref: FUN_005f2a00 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  byte bVar5;
  int * PTR32 * ppiVar6;
  int * piVar7;
  undefined4 * puVar8;
  undefined4 * PTR32 * ppuVar9;
  undefined4 * puVar10;
  int * piVar11;
  int * piVar12;
  int iVar13;
  char * pcVar14;
  bool bVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(int *)(gen_frame + 0x28)) = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      pcVar14 = ((char *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x28)) * 8 + *(int *)(param_1 + 0x10))));
      uVar2 = *(uint *)(pcVar14 + 4);
      bVar15 = *pcVar14 != '\0';
      bVar5 = pcVar14[1];
      (*(uint *)(gen_frame + 0x34)) = uVar2;
      piVar11 = ((int *)GEN_TOP((*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140))[1]));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = bVar15;
      (*(undefined4 *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x2c)), 1, 3),bVar15);
      cVar1 = *(char *)((int)piVar11 + 0x15);
      piVar12 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140);
      while (cVar1 == '\0') {
        if (*(byte *)(piVar11 + 3) < bVar5) {
          piVar7 = (int *)piVar11[2];
          piVar11 = piVar12;
        }
        else {
          piVar7 = (int *)*piVar11;
        }
        piVar12 = piVar11;
        piVar11 = piVar7;
        cVar1 = *(char *)((int)piVar7 + 0x15);
      }
      piVar11 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140);
      (*(int * PTR32 *)(gen_frame + 0x38)) = piVar12;
      if ((piVar12 == piVar11) || (bVar5 < *(byte *)(piVar12 + 3))) {
        (*(int * PTR32 *)(gen_frame + 0x24)) = piVar11;
        ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x24));
      }
      else {
        ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x38));
      }
      if (*ppiVar6 == *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140)) {
        (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
      }
      else {
        iVar13 = (*ppiVar6)[4];
        piVar11 = *(int * PTR32 *)(iVar13 + 4);
        piVar12 = (int *)piVar11[1];
        cVar1 = *(char *)((int)piVar12 + 0x21);
        while (cVar1 == '\0') {
          if ((uVar2 < (uint)piVar12[5]) || (uVar2 <= (uint)piVar12[5])) {
            piVar7 = (int *)*piVar12;
          }
          else {
            piVar7 = (int *)piVar12[2];
            piVar12 = piVar11;
          }
          piVar11 = piVar12;
          piVar12 = piVar7;
          cVar1 = *(char *)((int)piVar7 + 0x21);
        }
        piVar12 = *(int * PTR32 *)(iVar13 + 4);
        (*(int * PTR32 *)(gen_frame + 0x38)) = piVar11;
        if (((piVar11 == piVar12) || (uVar2 < (uint)piVar11[5])) ||
           ((uVar2 == piVar11[5] && (piVar11[4] != 0)))) {
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar12;
          ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x20));
        }
        else {
          ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x38));
        }
        if (*ppiVar6 == piVar12) {
          (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
        }
        else {
          (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP((*ppiVar6)[6]));
        }
      }
      puVar10 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180))[1]));
      cVar1 = *(char *)((int)puVar10 + 0x19);
      puVar3 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
      while (cVar1 == '\0') {
        if ((uint)puVar10[3] < uVar2) {
          puVar8 = (undefined4 *)puVar10[2];
          puVar10 = puVar3;
        }
        else {
          puVar8 = (undefined4 *)*puVar10;
        }
        puVar3 = puVar10;
        puVar10 = puVar8;
        cVar1 = *(char *)((int)puVar8 + 0x19);
      }
      puVar10 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar3;
      if ((puVar3 == puVar10) || (uVar2 < (uint)puVar3[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar10;
        ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      }
      else {
        ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
      puVar10 = *ppuVar9;
      if (puVar10 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180)) {
        bVar5 = bVar15 * '\x02' | (byte)(*(uint *)(gen_frame + 0x10)) & 0xfd;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = bVar5 | 1;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = pcVar14[1];
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = *(undefined2 *)(pcVar14 + 2);
        (*(uint *)(gen_frame + 0x10)) = CONCAT22(*(undefined2 *)(pcVar14 + 2),CONCAT11(pcVar14[1],bVar5)) | 1;
        puVar10 = (undefined4 *)F_004296a0(0x1c,0,900);
        *puVar10 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
        puVar10[1] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
        puVar10[2] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
        *(undefined2 *)(puVar10 + 6) = 0;
        if (puVar10 + 3 != (uint *)0x0) {
          puVar10[3] = (*(uint *)(gen_frame + 0x34));
          puVar10[4] = (*(uint *)(gen_frame + 0x10));
          puVar10[5] = (*(undefined4 *)(gen_frame + 0x14));
        }
        F_00618350((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x17c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),puVar10,0);
      }
      else {
        *(byte *)(puVar10 + 4) = bVar15 * '\x02' | *(byte *)(puVar10 + 4) & 0xfd;
      }
      uVar4 = (*(undefined4 *)(gen_frame + 0x2c));
      if ((*(int * PTR32 *)(gen_frame + 0x38)) != (int *)0x0) {
        *(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0x2b) = *(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0x2b) & 0xbf | bVar15 << 6;
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0xe0))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)));
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 200))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar4);
      }
      iVar13 = (*(int *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar13;
    } while (iVar13 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

/* ref: FUN_005f2c40 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f2c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint * puVar2;
  uint * puVar3;
  code * pcVar4;
  uint * puVar5;
  uint * puVar6;
  int * piVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  if (*(int *)((int)this + 0x184) != 0) {
    puVar2 = *(uint * PTR32 *)((int)this + 0x180);
    puVar3 = (uint *)*puVar2;
    while (puVar3 != puVar2) {
      if (((puVar3[4] & 1) != 0) &&
         (piVar7 = (int *)F_005ef690(this GEN_EDX_FWD,(uint)*(byte *)((int)puVar3 + 0x11),puVar3[3],0,1),
         piVar7 != (int *)0x0)) {
        iVar10 = *piVar7;
        pcVar4 = *(gen_code32 *)(iVar10 + 0xcc);
        *(byte *)((int)piVar7 + 0x2b) = *(byte *)((int)piVar7 + 0x2b) | 0x40;
        uVar8 = (*pcVar4)(piVar7);
        ((code *)*(gen_code32 *)(iVar10 + 0xe0))(piVar7,uVar8 & 0xff);
        iVar10 = *piVar7;
        uVar8 = ((code *)*(gen_code32 *)(iVar10 + 0xcc))(piVar7);
        ((code *)*(gen_code32 *)(iVar10 + 200))(piVar7,uVar8 & 0xff);
      }
      if (*(char *)((int)puVar3 + 0x19) == '\0') {
        puVar5 = (uint *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x19) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x19);
          puVar3 = puVar5;
          puVar5 = (uint *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x19);
            puVar3 = puVar5;
            puVar5 = (uint *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x19);
          puVar6 = (uint *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (uint *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x19);
            puVar6 = (uint *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
    bVar9 = 0;
    (*(uint *)(gen_frame + 0x4)) = (uint)puVar2 & 0xffffff00;
    iVar10 = -5;
    do {
      switch((unsigned int)(uintptr_t)(iVar10)) {
      case 0: ;
      case 3: ;
      case 4: ;
      case 7: ;
      case 9: ;
      case 0xb: ;
      case 0x23: ;
      case 0x24: ;
      case 0x26: ;
      case 0x27: ;
      case 0x28: ;
      case 0x2c: ;
      case 0x2e: ;
      case 0x35: ;
      case 0x36: ;
      case 0x3d: ;
      case 0x3e: ;
      case 0x3f: ;
      case 0x40: ;
      case 0x41: ;
      case 0x42: ;
      case 0x43: ;
        F_005eed10(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)),1);
      }
      bVar9 = bVar9 + 1;
      iVar10 = iVar10 + 1;
      (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),bVar9);
    } while (bVar9 < 0x4b);
  }
  return;
}

/* ref: FUN_005f2da0 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  byte bVar7;
  int iVar8;
  
  if (*(int *)((int)this + 0x184) != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x180);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      piVar6 = (int *)F_005ef690(this GEN_EDX_FWD,(uint)*(byte *)((int)puVar3 + 0x11),puVar3[3],0,1);
      if (piVar6 != (int *)0x0) {
        *(byte *)((int)piVar6 + 0x2b) =
             *(byte *)((int)piVar6 + 0x2b) ^
             ((char)param_1 << 6 ^ *(byte *)((int)piVar6 + 0x2b)) & 0x40;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xe0))(piVar6 GEN_EDX_ARG,param_1);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 200))(piVar6 GEN_EDX_ARG,param_1);
      }
      if (*(char *)((int)puVar3 + 0x19) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x19) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x19);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x19);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x19);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x19);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
    bVar7 = 0;
    (*(uint *)(gen_frame + 0x8)) = (uint)this & 0xffffff00;
    iVar8 = -5;
    do {
      switch((unsigned int)(uintptr_t)(iVar8)) {
      case 0: ;
      case 3: ;
      case 4: ;
      case 7: ;
      case 9: ;
      case 0xb: ;
      case 0x23: ;
      case 0x24: ;
      case 0x26: ;
      case 0x27: ;
      case 0x28: ;
      case 0x2c: ;
      case 0x2e: ;
      case 0x35: ;
      case 0x36: ;
      case 0x3d: ;
      case 0x3e: ;
      case 0x3f: ;
      case 0x40: ;
      case 0x41: ;
      case 0x42: ;
      case 0x43: ;
        F_005eed10(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),param_1);
      }
      bVar7 = bVar7 + 1;
      iVar8 = iVar8 + 1;
      (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar7);
    } while (bVar7 < 0x4b);
  }
  return;
}

/* ref: FUN_005f2f00 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_005ec700(this GEN_EDX_FWD,param_1);
  F_005eede0(this GEN_EDX_ARG,param_1,param_2);
  return;
}

/* ref: FUN_005f2f30 */
GEN_FRAME uint GEN_THISCALL F_005f2f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f2f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffff;
  piVar1 = (int *)F_00619470((undefined *)((int)this + 0x10c) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  if (*piVar1 != *(int *)((int)this + 0x110)) {
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_005f2f70 */
GEN_FRAME unsigned int GEN_THISCALL F_005f2f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP((*(int *)(param_1 + 0xc) + param_1)));
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < piVar5[1]) {
    param_1 = 0;
    do {
      uVar1 = *(undefined4 *)(*piVar5 + param_1 + 0x10 + (int)piVar5);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(*piVar5 + param_1 + 4 + (int)piVar5);
      puVar2 = (undefined4 *)F_00406b90(8,0,0);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = uVar1;
        *puVar2 = (*(undefined4 *)(gen_frame + 0x18));
      }
      puVar3 = (undefined4 *)F_004296a0(0x18,0,900);
      *puVar3 = *(undefined4 *)((int)this + 0x170);
      puVar3[1] = *(undefined4 *)((int)this + 0x170);
      puVar3[2] = *(undefined4 *)((int)this + 0x170);
      *(undefined2 *)(puVar3 + 5) = 0;
      if (puVar3 + 3 != (undefined4 *)0x0) {
        puVar3[3] = (*(undefined4 *)(gen_frame + 0x18));
        puVar3[4] = puVar2;
      }
      F_00618270((undefined *)((int)this + 0x16c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),puVar3,0);
      param_1 = param_1 + 0x18;
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
    } while (iVar4 < piVar5[1]);
  }
  return 0;
}

/* ref: FUN_005f3030 */
GEN_FRAME byte GEN_THISCALL F_005f3030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f3030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = 0;
  if (*(int *)((int)this + 0x1ac) != 0) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (7 < iVar1) {
      if (*(int *)((int)this + 0x1ac) != 0) {
        F_0050c620(*(int *)((int)this + 0x1ac),0,0);
        *(undefined4 *)((int)this + 0x1ac) = 0;
      }
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0xa0)));
    for (iVar1 = *(int *)(iVar2 + 8); iVar1 != 0; iVar1 = iVar1 - 1) {
      iVar6 = *(int *)(iVar2 + 4) + iVar5;
      uVar7 = 0;
      uVar4 = F_00a1b6b0(iVar6 + 4 + iVar2);
      uVar4 = F_005ef690(this GEN_EDX_ARG,1,*(undefined4 *)(iVar6 + iVar2),uVar4,uVar7);
      if ((uVar4 != 0) && (*(int *)(uVar4 + 0x30) != 0)) {
        F_0060b6a0(*(int *)(uVar4 + 0x30) GEN_EDX_ARG,*(float *)(iVar6 + 8 + iVar2));
      }
      iVar5 = iVar5 + 0xc;
    }
  }
  return 1;
}

/* ref: FUN_005f30f0 */
GEN_FRAME byte GEN_THISCALL F_005f30f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f30f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 uVar10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x1b0) != 0) {
    piVar7 = ((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
    if (7 < iVar1) {
      if (*(int *)((int)this + 0x1b0) != 0) {
        F_0050c620(*(int *)((int)this + 0x1b0),0,0);
        *(undefined4 *)((int)this + 0x1b0) = 0;
      }
      return 0;
    }
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0xa0)));
    local_c = *(int *)(iVar1 + 8);
    if (local_c != 0) {
      local_8 = 0;
      do {
        uVar10 = 0;
        puVar9 = ((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + local_8 + iVar1)));
        uVar8 = F_00a1b6b0(puVar9 + 1);
        uVar8 = F_005ef690(this GEN_EDX_ARG,3,*puVar9,uVar8,uVar10);
        if (uVar8 != 0) {
          uVar10 = puVar9[5];
          uVar2 = puVar9[6];
          uVar3 = puVar9[7];
          uVar4 = puVar9[3];
          uVar5 = puVar9[4];
          if (*(int *)(uVar8 + 0x30) != 0) {
            iVar6 = *((int *)GEN_TOP((*(int *)(uVar8 + 0x30) + 0x70)));
            *(undefined4 *)(iVar6 + 0x30) = puVar9[2];
            *(undefined4 *)(iVar6 + 0x34) = uVar4;
            *(undefined4 *)(iVar6 + 0x38) = uVar5;
            *(undefined4 *)(iVar6 + 0x40) = uVar10;
            *(undefined4 *)(iVar6 + 0x44) = uVar2;
            *(undefined4 *)(iVar6 + 0x48) = uVar3;
          }
        }
        local_8 = local_8 + 0x20;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
  }
  return 1;
}

/* ref: FUN_005f31f0 */
GEN_FRAME uint GEN_THISCALL F_005f31f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f31f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619470(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110)))) {
    uVar1 = F_005f10f0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005f3240 */
GEN_NOFRAME unsigned int F_005f3240(void)
{
  GEN_ENTER(0x5f3240u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x1c)));
  puVar1 = ((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x1c)));
  if (iVar2 != 0) {
    F_005ee840(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x18));
    *puVar1 = 0;
  }
  return;
}

/* ref: FUN_005f3270 */
GEN_FRAME uint F_005f3270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f3270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) GEN_EDX_ARG,param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_005f32a0 */
GEN_FRAME uint F_005f32a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f32a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) != (undefined *)0x0) && (*(int *)(param_2 + 0x40) == 0x3000)) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) GEN_EDX_ARG,param_1,*(undefined4 *)(param_2 + 0x38),
                         *(undefined4 *)(param_2 + 0x3c),1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005f32e0 */
GEN_FRAME uint F_005f32e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f32e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(REFG(undefined4, 0x1379cb0) + 0x14) != (undefined *)0x0) {
    uVar1 = F_005f2840(*(undefined * PTR32 *)(REFG(undefined4, 0x1379cb0) + 0x14) GEN_EDX_ARG,param_1);
    F_004ff5f0(REFG(undefined4, 0x1375aec) GEN_EDX_ARG);
    return uVar1;
  }
  return REFG(undefined4, 0x1379cb0);
}

/* ref: FUN_005f3310 */
GEN_FRAME unsigned int F_005f3310(unsigned int gen_a0)
{
  GEN_ENTER(0x5f3310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) != (undefined *)0x0) {
    F_005f2a00(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_005f3330 */
GEN_NOFRAME unsigned int F_005f3330(void)
{
  GEN_ENTER(0x5f3330u, 0u, 0u, 0u, 0u);
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) != (undefined *)0x0) {
    F_005f2c40(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_005f3350 */
GEN_FRAME uint F_005f3350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f3350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) GEN_EDX_ARG,param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_005f3380 */
GEN_FRAME uint GEN_THISCALL F_005f3380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f3380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  bool bVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
  piVar7 = param_1;
  if (0 < param_1[1]) {
    do {
      iVar1 = *param_1 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x44))) * 8;
      iVar8 = (int)param_1 + *(int *)(iVar1 + (int)param_1) + iVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 5;
      (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
      (*(undefined4 *)(gen_frame + 0x24)) = 5000;
      (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
      (*(undefined2 *)(gen_frame + 0x2c)) = 0;
      (*(undefined1 *)(gen_frame + 0x2e)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(uint *)(gen_frame + 0x40)) = 0;
      F_004ff3e0(&(*(uint *)(gen_frame + 0x40)),iVar8);
      if (((*(uint *)(gen_frame + 0x40)) == 0x746578) || ((*(uint *)(gen_frame + 0x40)) == 0x6d74726c)) {
        (*(undefined1 *)(gen_frame + 0x2e)) = 1;
      }
      uVar5 = F_00513dc0(iVar8,&(*(undefined4 *)(gen_frame + 0xc)),0,0);
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
      uVar2 = *(undefined1 *)((int)param_1 + iVar1 + 4);
      uVar3 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 4);
      (*(uint *)(gen_frame + 0x40)) = uVar5;
      (*(undefined1 *)(gen_frame + 0x4b)) = uVar2;
      switch((unsigned int)(uintptr_t)(uVar3)) {
      default: ;
switchD_005f342d_caseD_2: ;
        (*(undefined1 *)(gen_frame + 0x4b)) = 0xff;
        break;
      case 3: ;
        bVar9 = *(short *)(uVar5 + 4) == 4;
LAB_005f3449: ;
        if (bVar9) goto switchD_005f342d_caseD_2;
        break;
      case 4: ;
        if (*(short *)(uVar5 + 4) == 4) {
          bVar9 = *(int *)(uVar5 + 8) == 0x746578;
          goto LAB_005f3449;
        }
        break;
      case 5: ;
        break;
      }
      puVar6 = (undefined4 *)F_004296a0(0x18,0,900);
      *puVar6 = *(undefined4 *)((int)pvVar4 + 0x10);
      puVar6[1] = *(undefined4 *)((int)pvVar4 + 0x10);
      puVar6[2] = *(undefined4 *)((int)pvVar4 + 0x10);
      *(undefined2 *)(puVar6 + 5) = 0;
      if (puVar6 + 3 != (uint *)0x0) {
        puVar6[3] = (*(uint *)(gen_frame + 0x40));
        *(undefined1 *)(puVar6 + 4) = (*(undefined1 *)(gen_frame + 0x4b));
      }
      F_00618510((undefined *)((int)pvVar4 + 0xc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),puVar6,0);
      piVar7 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x44)) + 1);
      (*(int * PTR32 *)(gen_frame + 0x44)) = piVar7;
    } while ((int)piVar7 < param_1[1]);
  }
  return (uint)piVar7;
}

/* ref: FUN_005f34c0 */
GEN_FRAME uint F_005f34c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f34c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) GEN_EDX_ARG,param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_005f34f0 */
GEN_FRAME uint F_005f34f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f34f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) != (undefined *)0x0) && (*(int *)(param_2 + 0x40) == 0x3000)) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) GEN_EDX_ARG,param_1,*(undefined4 *)(param_2 + 0x38),
                         *(undefined4 *)(param_2 + 0x3c),1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005f3530 */
GEN_FRAME uint F_005f3530(unsigned int gen_a0)
{
  GEN_ENTER(0x5f3530u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3] GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4) GEN_EDX_ARG,7);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  this = (undefined *)F_00406b90(0xc0,0,0);
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_005f1ce0(this GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005f35e0 */
GEN_FRAME uint GEN_THISCALL F_005f35e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f35e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  
  if ((*(int *)((int)this + 8) != 0) && (uVar10 = 0, *(int *)((int)this + 0x10) != 0)) {
    iVar8 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar10 * 4)));
      if ((iVar2 != 0) &&
         (piVar5 = (int *)F_005ef690(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,0x2f,iVar2,0,1),
         piVar5 != (int *)0x0)) {
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5 GEN_EDX_ARG);
        pvVar7 = *(undefined * PTR32 *)((int)this + 8);
        *(uint *)(iVar8 + 0x100 + (int)pvVar7) = uVar6;
        F_0068b4a0(pvVar7 GEN_EDX_ARG,uVar6);
      }
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 0xa0;
    } while (uVar10 < *(uint *)((int)this + 0x10));
  }
  iVar8 = *(int *)((int)this + 4);
  ((undefined1 *)(gen_frame + 0x8))[0] = 0xd;
  F_00619550((undefined *)(iVar8 + 0x13c) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x4));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != *(int * PTR32 *)(iVar8 + 0x140)) {
    piVar5 = (int *)0x0;
    if ((*(int * PTR32 *)(gen_frame + 0x4))[4] != 0) {
      piVar5 = *(int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x4))[4] + 4);
      piVar9 = (int *)*piVar5;
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
      if (piVar9 != piVar5) {
        do {
          iVar8 = piVar9[6];
          iVar2 = *(int *)(iVar8 + 0x30);
          if (iVar2 != 0) {
            if (*(int *)(iVar8 + 0x34) != 0) {
              if (*(int *)(iVar8 + 8) == 0) {
                pvVar7 = (undefined *)0x0;
              }
              else {
                pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar8 + 8) + 4)));
              }
              piVar5 = (int *)F_005ef690(pvVar7 GEN_EDX_ARG,0x2f,*(int *)(iVar8 + 0x34),0,1);
              if (piVar5 != (int *)0x0) {
                piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5 GEN_EDX_ARG)));
                *((int * PTR32 *)GEN_TOP((*(int *)(iVar8 + 0x30) + 0x80))) = piVar5;
                goto LAB_005f36d3;
              }
            }
            piVar5 = (int *)0x0;
            *(undefined4 *)(iVar2 + 0x80) = 0;
          }
LAB_005f36d3: ;
          if (*(char *)((int)piVar9 + 0x21) == '\0') {
            piVar5 = (int *)piVar9[2];
            if (*(char *)((int)piVar5 + 0x21) == '\0') {
              cVar1 = *(char *)(*piVar5 + 0x21);
              piVar9 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar5 + 0x21);
                piVar9 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar1 = *(char *)(piVar9[1] + 0x21);
              piVar4 = (int *)piVar9[1];
              piVar3 = piVar9;
              while ((piVar5 = piVar4, piVar9 = piVar5, cVar1 == '\0' &&
                     (piVar3 == (int *)piVar5[2]))) {
                cVar1 = *(char *)(piVar5[1] + 0x21);
                piVar4 = (int *)piVar5[1];
                piVar3 = piVar5;
              }
            }
          }
        } while (piVar9 != (*(int * PTR32 *)(gen_frame + 0x4)));
      }
    }
  }
  REFG(undefined1, 0x1301314) = 1;
  return (uint)piVar5;
}

/* ref: FUN_005f3730 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f3730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f3730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0x10) == 0) || (*((char *)GEN_TOP((*(int *)((int)this + 4) + 0x55))) != '\0')) {
    return;
  }
  if (REFG(int, 0x1375554) != 0) {
    F_004b6160(REFG(int, 0x1375554) GEN_EDX_FWD,(uint)*(byte *)(REFG(int, 0x1371290) + 0x22),*(float *)(REFG(int, 0x1371290) + 0xc),
                 (uint)REFG(undefined1, 0x1301314));
    REFG(undefined1, 0x1301314) = 0;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    F_005ea8d0(this GEN_EDX_ARG);
    return;
  }
  F_005f0650(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_005f3790 */
GEN_NOFRAME uint GEN_THISCALL F_005f3790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f3790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00509590((undefined *)((int)this + 0x30) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a59c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[5])REFP(0x10a59a8));
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x40), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x44) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x44), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x48) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x48), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x60) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x60), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 100) = GEN_FLT_TO(*(undefined4 *)((int)this + 100), REFG(float, 0x1302e14));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e18)));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[1])REFP(0x10a5864));
  *(undefined4 *)((int)this + 0x68) = uVar1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfff00000;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffc0;
  *(byte *)((int)this + 0xb4) = *(byte *)((int)this + 0xb4) & 0xfc;
  *(uint *)((int)this + 0xb8) = *(uint *)((int)this + 0xb8) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(byte *)((int)this + 0xac) = *(byte *)((int)this + 0xac) & 0xfb | 3;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xc5) = 0;
  *(undefined4 *)((int)this + 0xc9) = 0;
  *(undefined4 *)((int)this + 0xcd) = 0;
  *(undefined4 *)((int)this + 0xd1) = 0;
  *(undefined * PTR32 *)((int)this + 0x74) = this;
  return (uint)this;
}

/* ref: FUN_005f3940 */
GEN_FRAME byte GEN_THISCALL F_005f3940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f3940u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this;
  code * pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  if ((*(int * PTR32 *)&gen_args[0])[0x1e] == (*(int * PTR32 *)&gen_args[0])[0x1f]) {
    *((undefined1 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x36))) = 2;
    *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x37))) =
         ((byte)(*(uint *)&gen_args[2]) & 1) * '\x02' | *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x37))) & 0xfc | (byte)(*(undefined4 *)&gen_args[1]) & 1;
    return 1;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xd0)));
  (*(byte *)(gen_frame + 0xb)) = 0;
  (*(int * PTR32 *)&gen_args[0])[0x2c] = (*(int * PTR32 *)&gen_args[0])[0x2c] ^ (((byte)(*(undefined4 *)&gen_args[1]) == 0) + 1 ^ (*(int * PTR32 *)&gen_args[0])[0x2c]) & 7;
  (*pcVar1)((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  if ((byte)(*(uint *)&gen_args[2]) == '\0') {
    *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x2b))) =
         *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x2b))) ^ ((byte)(*(undefined4 *)&gen_args[1]) << 3 ^ *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x2b)))) & 8;
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(REFG(float, 0x1087f04));
    if ((byte)(*(undefined4 *)&gen_args[1]) == 0) {
      (*(uint *)&gen_args[2]) = 0;
    }
    F_005e38e0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
    if (((*(int * PTR32 *)&gen_args[0])[2] != 0) && (iVar2 = *((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[2] + 4))), iVar2 != 0)) {
      this = (undefined *)(iVar2 + 0x19c);
      (*(uint *)&gen_args[2]) = (uint)(*(int * PTR32 *)&gen_args[0]);
      F_006105d0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[2]));
      F_00616e70(this GEN_EDX_ARG,&(*(uint *)&gen_args[2]),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
      (*(byte *)(gen_frame + 0xb)) = 1;
      return 1;
    }
  }
  else {
    if ((byte)(*(undefined4 *)&gen_args[1]) == 0) {
      *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x2d))) = *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x2d))) & 0xfe;
      bVar3 = *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xc3)));
    }
    else {
      *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x2d))) = *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x2d))) | 1;
      bVar3 = *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xc2)));
    }
    if (bVar3 != 0) {
      uVar4 = F_005dc030((*(int * PTR32 *)&gen_args[0]) + 0x22 GEN_EDX_ARG,
                           (uint)bVar3 <<
                           (('\x04' - ((*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 10))) >> 4) + 1)) * '\b' & 0x1f) |
                           (*(int * PTR32 *)&gen_args[0])[6]);
      if (uVar4 != 0) {
        F_005dbf70(uVar4 GEN_EDX_ARG,0xffffffff,0);
        (*(byte *)(gen_frame + 0xb)) = 1;
      }
      F_005f0960((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      return (*(byte *)(gen_frame + 0xb));
    }
    (*(int * PTR32 *)&gen_args[0])[0x2f] = 0;
    F_005f08f0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(REFG(float, 0x1087f04));
    if ((byte)(*(undefined4 *)&gen_args[1]) != 0) {
      (*(uint *)&gen_args[2]) = 0;
    }
    F_005e38e0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
  }
  (*(byte *)(gen_frame + 0xb)) = 1;
  return 1;
}

/* ref: FUN_005f3b00 */
GEN_FRAME uint GEN_THISCALL F_005f3b00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f3b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((*(byte *)((int)this + 0x20) & 1) == 0) &&
       (bVar2 = *(byte *)((int)this + 0x28) & 0xf, bVar2 != 9)) && (bVar2 != 8)) &&
     ((*(int *)((int)this + 8) != 0 &&
      (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4))), this_00 != (undefined *)0x0)))) {
    uVar3 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        F_005ef520(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar4 * 4))));
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  F_005f09d0((undefined *)((int)this + 0x88) GEN_EDX_ARG);
  uVar3 = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    uVar3 = F_00b5bab0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,*(int *)((int)this + 0x3c));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3c);
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Group::SGMovePathActionController::vf9 */
GEN_FRAME uint GEN_THISCALL F_005f3bb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5f3bb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if ((*(int *)((int)param_1 + 0xc) == 8) || (*(int *)((int)param_1 + 0xc) == 9)) {
    F_005e3e30(param_1 GEN_EDX_FWD,param_2);
  }
  F_005eb760(param_1 GEN_EDX_ARG,param_2);
  uVar1 = F_005f0cd0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_005f3bf0 */
GEN_FRAME uint GEN_THISCALL F_005f3bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f3bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  code * pcVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  
  puVar7 = *(undefined4 * PTR32 *)((int)this + 0x20);
  if ((char)param_1 != '\0') {
    puVar8 = (undefined4 *)*puVar7;
    if (puVar8 != puVar7) {
      do {
        puVar7 = (undefined4 *)puVar8[4];
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar7;
        if (*(char *)((int)puVar7 + 0x11) == (char)param_1) {
          F_005f1020(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
          puVar7 = (undefined4 *)F_00616230((undefined *)((int)this + 0x1c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar8);
          puVar8 = (undefined4 *)*puVar7;
        }
        if (*(char *)((int)puVar8 + 0x15) == '\0') {
          puVar3 = (undefined4 *)puVar8[2];
          if (*(char *)((int)puVar3 + 0x15) == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x15);
            puVar7 = (undefined4 *)*puVar3;
            while (puVar8 = puVar3, cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar7 + 0x15);
              puVar3 = puVar7;
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar8[1] + 0x15);
            puVar4 = (undefined4 *)puVar8[1];
            puVar3 = puVar8;
            while ((puVar7 = puVar4, puVar8 = puVar7, cVar1 == '\0' &&
                   (puVar3 == (undefined4 *)puVar7[2]))) {
              cVar1 = *(char *)((int)puVar7[1] + 0x15);
              puVar4 = (undefined4 *)puVar7[1];
              puVar3 = puVar7;
            }
          }
        }
      } while (puVar8 != *(undefined4 * PTR32 *)((int)this + 0x20));
    }
    return (uint)puVar7;
  }
  puVar8 = (undefined4 *)*puVar7;
  do {
    if (puVar8 == puVar7) {
      uVar6 = F_00616490((undefined *)((int)this + 0x1c) GEN_EDX_ARG);
      return uVar6;
    }
    piVar2 = (int *)puVar8[4];
    if (*((char *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 4) + 0x54))) == '\0') {
      F_005ef520(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,piVar2);
      F_005f04c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x4c))) GEN_EDX_ARG,piVar2,0);
    }
    if (*(int *)((int)this + 8) == 0xffff) {
      pcVar5 = *(gen_code32 *)(*piVar2 + 0x14);
      uVar9 = 0;
override_prt_5f3c5c_4169d910: ;
      (*pcVar5)(piVar2,uVar9);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
      if (piVar2[7] == -1) {
        pcVar5 = *(gen_code32 *)*piVar2;
        uVar9 = 1;
        goto override_prt_5f3c5c_4169d910;
      }
    }
    if (*(char *)((int)puVar8 + 0x15) == '\0') {
      puVar3 = (undefined4 *)puVar8[2];
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x15);
        puVar8 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x15);
          puVar8 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar8[1] + 0x15);
        puVar4 = (undefined4 *)puVar8[1];
        puVar3 = puVar8;
        while ((puVar8 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar8[2]))) {
          cVar1 = *(char *)((int)puVar8[1] + 0x15);
          puVar4 = (undefined4 *)puVar8[1];
          puVar3 = puVar8;
        }
      }
    }
  } while( true );
}

/* ref: FUN_005f3d40 */
GEN_FRAME uint GEN_THISCALL F_005f3d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f3d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xfc);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  iVar4 = param_1;
  uVar3 = (*pcVar1)(this);
  F_005f11c0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar3,iVar4);
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0);
  uVar3 = *(int *)(param_1 + 0x10) - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    uVar3 = F_00551cd0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
    break;
  case 1: ;
    uVar3 = F_00551da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
    break;
  case 2: ;
    uVar3 = F_00551d20(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
    break;
  case 3: ;
    uVar3 = F_00551e10(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
    break;
  default: ;
    goto switchD_005f3db0_default;
  }
  *(uint *)((int)this + 0x34) = uVar3;
switchD_005f3db0_default: ;
  piVar2 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))
                      (piVar2 GEN_EDX_ARG,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f3e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f3e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
  if (uVar3 != 0) {
    F_00a1fa60(this + 0x10,uVar3,param_1);
  }
  iVar1 = *(int *)(this + 0x34);
  iVar2 = *(int *)(param_1 + 0x34);
  *(int *)(this + 0x34) = iVar2;
  if (iVar1 != iVar2) {
    F_005f1a10(this GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf1 */
GEN_FRAME uint GEN_THISCALL F_005f3ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f3ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  this[0x90] = (undefined1)0x0;
  if (*(int *)(this + 0x88) != 0) {
    F_005e9920(this GEN_EDX_FWD);
    if (*(int *)(this + 0x88) != 0) {
      F_00406b30(*(int *)(this + 0x88));
      *(undefined4 *)(this + 0x88) = 0;
    }
    if (*(int *)(this + 0xa0) != *(int *)(this + 0xa4)) {
      F_005f07a0(this + 0x98 GEN_EDX_ARG);
    }
  }
  F_005ed050((undefined *)this GEN_EDX_ARG,param_1,param_2);
  uVar1 = F_006039f0(this + 0x70 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x14));
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf27 */
GEN_FRAME unsigned int GEN_THISCALL F_005f3f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f3f40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x20] & 2) != 0) {
    F_005f1f80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(*(undefined4 * PTR32 *)&gen_args[2]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x2b] & 0x40) == 0) {
      (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((uint)(*(undefined4 * PTR32 *)&gen_args[2]) & 0xffffff00)));
    }
    else {
      iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
      if (((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) ||
         (*((char *)GEN_TOP((*(int *)(iVar1 + 4) + 0x50))) != '\0')) {
        if ((iVar1 == 0) ||
           ((*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((uint)GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[2]), 1, 3) << 8))), (*(byte *)(iVar1 + 0x16) & 1) != 0))
        {
          (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[2]), 1, 3),1)));
        }
      }
      else {
        (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((uint)GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[2]), 1, 3) << 8)));
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[2]));
  }
  return;
}

/* ref: FUN_005f3fc0 */
GEN_FRAME uint GEN_THISCALL F_005f3fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5f3fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xe0);
  *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) | 4;
  (*pcVar1)(this,1);
  piVar2 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))
                      (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  uVar3 = F_005f1e60(this GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: FUN_005f4000 */
GEN_FRAME uint GEN_THISCALL F_005f4000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xe0);
  *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) | 4;
  (*pcVar1)(this,1);
  piVar2 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar2 == (int *)0x0) {
    uVar3 = F_005f1e60(this GEN_EDX_FWD,param_1);
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2 GEN_EDX_ARG,500);
    piVar2 = (int *)F_004e8110(REFG(void * PTR32, 0x1375a64) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x3c),
                                 *(undefined4 *)((int)this + 0x88),(int)*(short *)((int)this + 0x8c)
                                );
    *(int * PTR32 *)((int)this + 0x34) = piVar2;
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG,param_1);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_005f4070 */
GEN_FRAME uint GEN_THISCALL F_005f4070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f4070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = (*(int *)&gen_args[1]);
  iVar2 = *(int *)((*(int *)&gen_args[1]) + 8);
  if (iVar2 == 0) {
    iVar2 = *(int *)(REFG(int, 0x1379cb0) + 0x10);
    (*(int *)&gen_args[1]) = 0xffff;
    piVar1 = (int *)F_00619470((undefined *)(iVar2 + 0x10c) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x28)),&(*(int *)&gen_args[1]));
    if (*piVar1 == *(int *)(iVar2 + 0x110)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar1 + 0x10);
    }
  }
  ((int *)(gen_frame + 0x4))[0] = iVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)&gen_args[3]);
  ((int *)(gen_frame + 0x4))[1] = 0;
  (*(undefined1 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x20)) = 0xff00;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar3 = F_005ed050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((int *)(gen_frame + 0x4)),0);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 1;
  return uVar3;
}

/* ref: FUN_005f4100 */
GEN_FRAME byte GEN_THISCALL F_005f4100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f4100u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  int iVar1;
  byte bVar2;
  
  F_006192f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) GEN_EDX_FWD,&(*(int *)&gen_args[2]),(*(int *)&gen_args[2]));
  iVar1 = (*(int *)&gen_args[2]);
  if ((*(int *)&gen_args[2]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)))) {
    bVar2 = F_005f2120((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    return bVar2;
  }
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0x14);
  F_00616770(this_00 GEN_EDX_ARG,&(*(int *)&gen_args[2]),&(*(undefined4 *)&gen_args[1]));
  if ((*(int *)&gen_args[2]) == *(int *)(iVar1 + 0x18)) {
    bVar2 = F_005f2120((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    return bVar2;
  }
  F_00616510(this_00 GEN_EDX_ARG,&(*(int *)&gen_args[2]),(*(int *)&gen_args[2]));
  F_005ee510((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  return 1;
}

/* ref: FUN_005f4180 */
GEN_NOFRAME byte GEN_THISCALL F_005f4180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f4180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  short sVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  uint uVar11;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_FWD,((float *)(gen_frame + 0x0)));
  uVar11 = (uint)*(ushort *)((int)this + 100);
  bVar4 = 0;
  (*(uint *)(gen_frame + 0x48)) = uVar11;
  for (uVar5 = uVar11; 1 < uVar5; uVar5 = uVar5 >> 1) {
    bVar4 = bVar4 + 1;
  }
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x4c)) + 2)) = gen_x87_cw;
  (*(ushort *)(gen_frame + 0x22)) = (short)(int)(*(float *)(gen_frame + 0x8)) >> (bVar4 & 0x1f);
  (*(uint *)(gen_frame + 0x40)) = gen_x87_cw | 0xc00;
  (*(short *)(gen_frame + 0x20)) = (short)(int)((float *)(gen_frame + 0x0))[0] >> (bVar4 & 0x1f);
  (*(longlong *)(gen_frame + 0x18)) = (longlong)TRUNC((float10)(*(float *)(gen_frame + 0xc)));
  lVar3 = (*(longlong *)(gen_frame + 0x18));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = (uint)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0xc)));
  uVar5 = ((((uint)(*(longlong *)(gen_frame + 0x18)) + uVar11) * 2 - 2) / uVar11 & 0xff) >> 1;
  (*(uint *)(gen_frame + 0x40)) = -uVar5;
  (*(uint *)(gen_frame + 0x44)) = uVar5;
  (*(int *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x40));
  (*(longlong *)(gen_frame + 0x18)) = lVar3;
  if (-uVar5 != uVar5 && SBORROW4((*(uint *)(gen_frame + 0x40)),uVar5) == (int)(uVar5 * -2) < 0) {
    return 1;
  }
  do {
    (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x3c));
    if ((*(int *)(gen_frame + 0x3c)) <= (int)uVar5) {
      (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x40)) + (*(ushort *)(gen_frame + 0x22)) & 0xffff;
      do {
        lVar3 = (*(longlong *)(gen_frame + 0x18));
        sVar2 = (short)(*(int *)(gen_frame + 0x4c)) + (*(short *)(gen_frame + 0x20));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = 0;
        for (uVar5 = uVar11; 1 < uVar5; uVar5 = uVar5 >> 1) {
        }
        (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = sVar2;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 4)) = SUB84(lVar3,4);
        (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 2)) = (undefined2)(*(uint *)(gen_frame + 0x38));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = CONCAT22((undefined2)(*(uint *)(gen_frame + 0x38)),sVar2);
        puVar9 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x8c))[1]));
        cVar1 = *(char *)((int)puVar9 + 0x25);
        puVar10 = *(undefined4 * PTR32 *)((int)this + 0x8c);
        while (cVar1 == '\0') {
          if ((uint)puVar9[3] < (uint)(*(longlong *)(gen_frame + 0x18))) {
            puVar6 = (undefined4 *)puVar9[2];
            puVar9 = puVar10;
          }
          else {
            puVar6 = (undefined4 *)*puVar9;
          }
          puVar10 = puVar9;
          puVar9 = puVar6;
          cVar1 = *(char *)((int)puVar6 + 0x25);
        }
        puVar9 = *(undefined4 * PTR32 *)((int)this + 0x8c);
        (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar10;
        if ((puVar10 == puVar9) || ((uint)(*(longlong *)(gen_frame + 0x18)) < (uint)puVar10[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar9;
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x30));
        }
        else {
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x34));
        }
        puVar9 = *ppuVar8;
        if (puVar9 == *(undefined4 * PTR32 *)((int)this + 0x8c)) {
          bVar4 = F_005f2120(this GEN_EDX_ARG,param_1);
LAB_005f42d6: ;
          if (bVar4 == 0) {
            return 0;
          }
        }
        else {
          puVar10 = ((undefined4 *)GEN_TOP(((undefined4 *)puVar9[6])[1]));
          cVar1 = *(char *)((int)puVar10 + 0x11);
          puVar6 = (undefined4 *)puVar9[6];
          while (cVar1 == '\0') {
            if ((int *)puVar10[3] < param_1) {
              puVar7 = (undefined4 *)puVar10[2];
              puVar10 = puVar6;
            }
            else {
              puVar7 = (undefined4 *)*puVar10;
            }
            puVar6 = puVar10;
            puVar10 = puVar7;
            cVar1 = *(char *)((int)puVar7 + 0x11);
          }
          puVar10 = (undefined4 *)puVar9[6];
          (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar6;
          if ((puVar6 == puVar10) || (param_1 < (int *)puVar6[3])) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar10;
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
          }
          else {
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x34));
          }
          if (*ppuVar8 == puVar10) {
            bVar4 = F_005f2120(this GEN_EDX_ARG,param_1);
            uVar11 = (*(uint *)(gen_frame + 0x48));
            goto LAB_005f42d6;
          }
          F_00616510(puVar9 + 5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)),*ppuVar8);
          F_005ee510(this GEN_EDX_ARG,param_1);
          uVar11 = (*(uint *)(gen_frame + 0x48));
        }
        (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 1;
        uVar5 = (*(uint *)(gen_frame + 0x44));
      } while ((*(int *)(gen_frame + 0x4c)) <= (int)(*(uint *)(gen_frame + 0x44)));
    }
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) + 1;
    if ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x40))) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_005f43a0 */
GEN_FRAME uint GEN_THISCALL F_005f43a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f43a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5ad8));
  F_00617260((undefined *)((int)this + 0x178) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x17c),
               *(undefined4 * PTR32 *)((int)this + 0x17c));
  F_00429760(*(undefined4 *)((int)this + 0x17c),0x14,900);
  F_006171c0((undefined *)((int)this + 0x3c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x40),
               *(undefined4 * PTR32 *)((int)this + 0x40));
  F_00429760(*(undefined4 *)((int)this + 0x40),0x28,900);
  F_006171c0((undefined *)((int)this + 0x2c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x30),0x28,900);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  return (uint)uVar1;
}

/* ref: FUN_005f4440 */
GEN_FRAME uint GEN_THISCALL F_005f4440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = *param_1;
    *(undefined4 *)(iVar1 + 100) = param_1[1];
    *(undefined4 *)(iVar1 + 0x68) = param_1[2];
    if (*(char *)(iVar1 + 0x52) == '\0') {
      *(undefined4 *)(iVar1 + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x44) + 0x10)));
    }
    this_00 = *(undefined * PTR32 *)(iVar1 + 0x44);
    *(undefined1 *)(iVar1 + 0x52) = 1;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    F_005ee3d0(this_00 GEN_EDX_FWD,1);
    uVar2 = F_005ebe80(this_00 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_005f44a0 */
GEN_FRAME uint GEN_THISCALL F_005f44a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f44a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005ee8f0(this GEN_EDX_FWD,param_2,param_3);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x60) = *param_1;
    *(undefined4 *)(uVar1 + 100) = param_1[1];
    *(undefined4 *)(uVar1 + 0x68) = param_1[2];
    if (*(char *)(uVar1 + 0x52) == '\0') {
      *(undefined4 *)(uVar1 + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x44) + 0x10)));
    }
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x44);
    *(undefined1 *)(uVar1 + 0x52) = 1;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    F_005ee3d0(this_00 GEN_EDX_ARG,1);
    uVar2 = F_005ebe80(this_00 GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_005f4500 */
GEN_FRAME unsigned int GEN_THISCALL F_005f4500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  if (this_00 != (undefined *)0x0) {
    F_005ec700(this_00 GEN_EDX_FWD,param_1);
    F_005eede0(this_00 GEN_EDX_ARG,param_1,0);
  }
  return;
}

/* ref: FUN_005f4530 */
GEN_FRAME unsigned int GEN_THISCALL F_005f4530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 * puVar4;
  undefined4 * puVar5;
  byte bVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  if ((*(int *)((int)this + 0x14) != 0) && (bVar6 = F_004ff640(), bVar6 != 0)) {
    F_005f2380(this GEN_EDX_ARG,1);
    F_005f2380(this GEN_EDX_ARG,4);
    F_005f2380(this GEN_EDX_ARG,0xd);
    F_005f2380(this GEN_EDX_ARG,7);
    F_005f2380(this GEN_EDX_ARG,6);
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x4c)));
    if (iVar2 != 0) {
      puVar8 = *(undefined4 * PTR32 *)(iVar2 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)*puVar8;
      while ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != puVar8) {
        F_005ee980(this GEN_EDX_ARG,*(undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[4]);
        F_00601220(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
      }
    }
    if ((char)param_1 != '\0') {
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x100)));
      puVar3 = (undefined4 *)*puVar8;
      while (puVar3 != puVar8) {
        uVar7 = 0;
        this_00 = *(undefined * PTR32 *)(puVar3[4] + 0x10);
        if (this_00 != (undefined *)0x0) {
          (*(int *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          ((int *)(gen_frame + 0x10))[0] = 0;
          F_006aa1a0(this_00 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)));
          if ((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8)) >> 2 != 0) {
            do {
              F_005ee980(this GEN_EDX_ARG,*(undefined4 *)((*(int *)(gen_frame + 0x8)) + uVar7 * 4));
              uVar7 = uVar7 + 1;
            } while (uVar7 < (uint)((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8)) >> 2));
          }
          if ((*(int *)(gen_frame + 0x8)) != 0) {
            F_00429760((*(int *)(gen_frame + 0x8)),(((int *)(gen_frame + 0x10))[0] - (*(int *)(gen_frame + 0x8)) >> 2) * 4,0xd4);
          }
          (*(int *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          ((int *)(gen_frame + 0x10))[0] = 0;
        }
        if (*(char *)((int)puVar3 + 0x15) == '\0') {
          puVar4 = (undefined4 *)puVar3[2];
          if (*(char *)((int)puVar4 + 0x15) == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x15);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar4 + 0x15);
              puVar3 = puVar4;
              puVar4 = (undefined4 *)*puVar4;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
            while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
              cVar1 = *(char *)((int)puVar3[1] + 0x15);
              puVar5 = (undefined4 *)puVar3[1];
              puVar4 = puVar3;
            }
          }
        }
      }
      puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0xc4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar8;
      param_1 = 0;
      uVar7 = F_00500f10(puVar8 GEN_EDX_ARG);
      if (uVar7 != 0) {
        do {
          uVar7 = F_00500f20(puVar8 GEN_EDX_ARG,param_1);
          bVar6 = F_005e9bb0(this GEN_EDX_ARG,uVar7);
          if (bVar6 != 0) {
            uVar7 = F_00513dc0(uVar7,0,0,0);
            puVar8 = (undefined4 *)F_004296a0(0x14,0,900);
            *puVar8 = *(undefined4 *)((int)this + 0x17c);
            puVar8[1] = *(undefined4 *)((int)this + 0x17c);
            puVar8[2] = *(undefined4 *)((int)this + 0x17c);
            *(undefined2 *)(puVar8 + 4) = 0;
            if (puVar8 + 3 != (uint *)0x0) {
              puVar8[3] = uVar7;
            }
            F_00617d20((undefined *)((int)this + 0x178) GEN_EDX_ARG,((int *)(gen_frame + 0x10)),puVar8,0);
            puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
          }
          param_1 = param_1 + 1;
          uVar7 = F_00500f10(puVar8 GEN_EDX_ARG);
        } while (param_1 < uVar7);
      }
      F_005ee980(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x1ac))));
      F_005ee980(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x1b0))));
    }
  }
  return;
}

/* ref: FUN_005f4770 */
GEN_FRAME uint GEN_THISCALL F_005f4770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f4770u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  if (iVar1 == 0) {
    return 0;
  }
  (*(uint *)&gen_args[1]) = (uint)(ushort)(*(uint *)&gen_args[1]);
  F_00619470((undefined *)(iVar1 + 0x10c) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x110)) {
    iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    (*(uint *)&gen_args[1]) = (*(int *)&gen_args[2]);
    F_00619760((undefined *)(iVar1 + 0x1c) GEN_EDX_ARG,&(*(int *)&gen_args[2]),&(*(uint *)&gen_args[1]));
    if ((*(int *)&gen_args[2]) != *(int *)(iVar1 + 0x20)) {
      return *(uint *)((*(int *)&gen_args[2]) + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_005f47f0 */
GEN_FRAME uint GEN_THISCALL F_005f47f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f47f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  ushort uVar2;
  undefined * this_00;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  cVar1 = *(char *)(param_1 + 1);
  uVar2 = *(ushort *)(param_1 + 2);
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = cVar1;
  (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),cVar1);
  uVar4 = F_00a1b490(param_1);
  if (uVar2 != 0) {
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
    uVar5 = 0;
    F_00619470((undefined *)((int)this_00 + 0x10c) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
    if ((*(int *)(gen_frame + 0x4)) != *(int *)((int)this_00 + 0x110)) {
      uVar5 = F_005f10f0(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10) GEN_EDX_ARG,uVar3,uVar4);
    }
    return uVar5;
  }
  if ((cVar1 != '\0') && (cVar1 != '\x0f')) {
    uVar4 = F_005ef690(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x4)),uVar3,0,1);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_005f48a0 */
GEN_FRAME unsigned int GEN_THISCALL F_005f48a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f48a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x4c);
  if ((*(int *)((int)this_00 + 0x10) != 0) && (*((char *)GEN_TOP((*(int *)((int)this_00 + 4) + 0x55))) == '\0')
     ) {
    if (REFG(int, 0x1375554) != 0) {
      F_004b6160(REFG(int, 0x1375554) GEN_EDX_FWD,(uint)*(byte *)(REFG(int, 0x1371290) + 0x22),*(float *)(REFG(int, 0x1371290) + 0xc),
                   (uint)REFG(undefined1, 0x1301314));
      REFG(undefined1, 0x1301314) = 0;
    }
    if (*(char *)((int)this_00 + 0x18) == '\0') {
      F_005f0650(this_00 GEN_EDX_ARG);
    }
    else {
      F_005ea8d0(this_00 GEN_EDX_ARG);
    }
  }
  F_005d9500(this GEN_EDX_ARG,param_1);
  F_005ecd20(this GEN_EDX_ARG,param_1);
  *(undefined4 *)((int)this + 0xbc) = *param_1;
  *(uint *)((int)this + 0xc0) = *(int *)((int)this + 0xc0) - 1U & 1;
  return;
}

/* ref: FUN_005f4930 */
GEN_FRAME unsigned int GEN_THISCALL F_005f4930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f4930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint local_8;
  
  F_005f3030(this GEN_EDX_FWD);
  F_005f30f0(this GEN_EDX_ARG);
  F_005ef480(this GEN_EDX_ARG);
  F_005f35e0(*(undefined * PTR32 *)((int)this + 0x48) GEN_EDX_ARG);
  *(undefined1 *)(REFG(int, 0x1371280) + 0x4f) = 1;
  F_00625960();
  iVar1 = *(int *)((int)this + 0x44);
  uVar2 = *(int *)((int)this + 400) - *(int *)((int)this + 0x18c) >> 2;
  if (uVar2 != 0) {
    local_8 = 0;
    do {
      F_005dc3a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + local_8 * 4))) GEN_EDX_ARG,
                   (undefined4 *)(iVar1 + 0x20));
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(iVar1 + 0x28);
  }
  F_005ef8e0(this GEN_EDX_ARG);
  F_00ae12b0(&REFG(undefined, 0x14c0878) GEN_EDX_ARG);
  F_00b7a320(&REFG(undefined, 0x14c5798) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x10) = 7;
  return;
}

/* ref: FUN_005f4a00 */
GEN_FRAME uint F_005f4a00(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4a00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this;
  uint uVar2;
  
  iVar1 = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = *param_1;
    *(undefined4 *)(iVar1 + 100) = param_1[1];
    *(undefined4 *)(iVar1 + 0x68) = param_1[2];
    if (*(char *)(iVar1 + 0x52) == '\0') {
      *(undefined4 *)(iVar1 + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x44) + 0x10)));
    }
    this = *(undefined * PTR32 *)(iVar1 + 0x44);
    *(undefined1 *)(iVar1 + 0x52) = 1;
    *(undefined4 *)((int)this + 0x10) = 0;
    F_005ee3d0(this GEN_EDX_ARG,1);
    uVar2 = F_005ebe80(this GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_005f4a60 */
GEN_FRAME uint GEN_THISCALL F_005f4a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f4a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5af4));
  F_00617830((undefined *)((int)this + 0xc) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x10),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_005f4aa0 */
GEN_FRAME uint GEN_THISCALL F_005f4aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return param_1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 < 0x1f400000) && (*(uint *)(param_1 + 0x14) < 0x1f400000)) ||
     ((uVar1 < 0x1f400000 && (*(uint *)(param_1 + 0x14) < 0x32000000)))) {
    *(undefined4 *)((int)this + 4) = 4;
  }
  else if ((uVar1 < 0x32000000) && (*(uint *)(param_1 + 0x14) < 0x32000000)) {
    *(undefined4 *)((int)this + 4) = 3;
  }
  else {
    if ((0x3e7fffff < uVar1) || (0x3e7fffff < *(uint *)(param_1 + 0x14))) {
      *(undefined4 *)((int)this + 4) = 1;
      return param_1;
    }
    *(undefined4 *)((int)this + 4) = 2;
  }
  uVar1 = F_005f3380(this GEN_EDX_FWD,param_1);
  F_004ff5f0(REFG(undefined4, 0x1375aec) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 8) = 1;
  return uVar1;
}

/* ref: FUN_005f4b50 */
GEN_FRAME uint GEN_THISCALL F_005f4b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f4b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int * piVar5;
  uint in_EAX = 0;
  int * piVar6;
  ulonglong uVar7;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    piVar6 = (int *)*piVar2;
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
    if (piVar6 != piVar2) {
      do {
        F_0050c620(piVar6[3],0,0);
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          piVar2 = (int *)piVar6[2];
          if (*(char *)((int)piVar2 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x15);
              piVar6 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar5 = (int *)piVar6[1];
            piVar2 = piVar6;
            while ((piVar6 = piVar5, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x15);
              piVar5 = (int *)piVar6[1];
              piVar2 = piVar6;
            }
          }
        }
      } while (piVar6 != (*(int * PTR32 *)(gen_frame + 0x18)));
    }
    F_00615a40((undefined1 *)((int)this + 0xc) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)F_004296a0(0x18,0,900);
    *(*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 5) = 1;
    *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x15) = 1;
    if ((undefined1 *)((int)this + 0xc) != ((undefined1 *)(gen_frame + 0x8))) {
      puVar3 = *(undefined4 * PTR32 *)((int)this + 0x10);
      *(undefined4 * PTR32 *)((int)this + 0x10) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
      uVar4 = *(undefined4 *)((int)this + 0x14);
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar3;
      *(undefined4 *)((int)this + 0x14) = (*(undefined4 *)(gen_frame + 0x10));
      (*(undefined4 *)(gen_frame + 0x10)) = uVar4;
    }
    F_00617830(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x18)),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x18,900);
    in_EAX = (uint)uVar7;
  }
  return in_EAX;
}

/* ref: FUN_005f4c70 */
GEN_FRAME uint F_005f4c70(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4c70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this;
  uint uVar2;
  
  iVar1 = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = *param_1;
    *(undefined4 *)(iVar1 + 100) = param_1[1];
    *(undefined4 *)(iVar1 + 0x68) = param_1[2];
    if (*(char *)(iVar1 + 0x52) == '\0') {
      *(undefined4 *)(iVar1 + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x44) + 0x10)));
    }
    this = *(undefined * PTR32 *)(iVar1 + 0x44);
    *(undefined1 *)(iVar1 + 0x52) = 1;
    *(undefined4 *)((int)this + 0x10) = 0;
    F_005ee3d0(this GEN_EDX_ARG,1);
    uVar2 = F_005ebe80(this GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_005f4cd0 */
GEN_FRAME uint F_005f4cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4cd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined * this;
  
  iVar1 = param_1[1];
  if (param_1[3] == 0) {
    iVar2 = *param_1;
    if ((((iVar2 == 0) || (*(short *)(iVar2 + 0x12) == 0)) && (param_1[6] == 2)) &&
       ((char)param_1[2] != '\0')) {
      piVar3 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar2 + 4) GEN_EDX_ARG,6);
    }
    else {
      this = (undefined *)F_00406b90(0xf0,0,0);
      if (this == (undefined *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)F_005f3790(this GEN_EDX_ARG);
      }
    }
  }
  else {
    piVar3 = (int *)F_00a1b570(param_1[3] GEN_EDX_ARG);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG,param_1,*(int *)(iVar1 + 0x30) + iVar1);
  return (uint)piVar3;
}

/* ref: FUN_005f4d50 */
GEN_FRAME uint GEN_THISCALL F_005f4d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f4d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0060f280(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  F_00617300(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xa0,0x385);
  return (uint)uVar1;
}

/* ref: FUN_005f4db0 */
GEN_NOFRAME uint GEN_THISCALL F_005f4db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  char * pcVar9;
  uint uVar10;
  undefined4 * puVar11;
  int iVar12;
  
  (*(uint *)(gen_frame + 0x18c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x190);
  uVar1 = param_1[0xf];
  uVar2 = param_1[0x10];
  uVar3 = param_1[0x11];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  (*(undefined4 *)(gen_frame + 0x8)) = param_1[1];
  uVar8 = param_1[2];
  (*(undefined4 *)(gen_frame + 0xc)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 1;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar8;
  (*(undefined4 *)(gen_frame + 0x50)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x54)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x58)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x60)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x64)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x68)) = uVar3;
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x20)),param_1 + 3);
  F_005da4e0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x80)),0x100);
  pcVar9 = ((char *)(gen_frame + 0x80));
  do {
    cVar7 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar7 != '\0');
  F_0040b1a0(&(*(int *)(gen_frame + 0x78)) GEN_EDX_ARG,((char *)(gen_frame + 0x80)),(int)pcVar9 - (int)(((char *)(gen_frame + 0x80)) + 1));
  uVar10 = F_00408810(&(*(int *)(gen_frame + 0x78)) GEN_EDX_ARG);
  F_004087f0(&(*(int *)(gen_frame + 0x78)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x4)) = uVar10;
  F_00619280(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x7c)),&(*(uint *)(gen_frame + 0x4)));
  if ((*(int *)(gen_frame + 0x7c)) == *(int *)((int)this + 4)) {
    (*(uint *)(gen_frame + 0x100)) = uVar10;
    F_005da450(((undefined1 *)(gen_frame + 0x110)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    puVar11 = (undefined4 *)F_004296a0(0xa0,0,0x385);
    *puVar11 = *(undefined4 *)((int)this + 4);
    puVar11[1] = *(undefined4 *)((int)this + 4);
    puVar11[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar11 + 0x24) = 0;
    if (puVar11 + 4 != (uint *)0x0) {
      puVar11[4] = (*(uint *)(gen_frame + 0x100));
      F_005da450(puVar11 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x110)));
    }
    F_00617e00(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x78)),puVar11,0);
    iVar12 = (*(int *)(gen_frame + 0x78));
  }
  else {
    *(int *)((*(int *)(gen_frame + 0x7c)) + 0x20) = *(int *)((*(int *)(gen_frame + 0x7c)) + 0x20) + 1;
    iVar12 = (*(int *)(gen_frame + 0x7c));
  }
  uVar10 = *(uint *)(iVar12 + 0x10);
  F_00c47745((*(uint *)(gen_frame + 0x18c)) ^ (uint)(uint)(gen_frame + 0x190) GEN_EDX_ARG);
  return uVar10;
}

/* ref: FUN_005f4f80 */
GEN_FRAME uint GEN_THISCALL F_005f4f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f4f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5afc));
  F_005f03f0(this GEN_EDX_FWD);
  F_006178d0((undefined *)((int)this + 8) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xc),
               *(undefined4 * PTR32 *)((int)this + 0xc));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0xc),0x18,900);
  return (uint)uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf38 */
GEN_FRAME unsigned int GEN_THISCALL F_005f4fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5f4fc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x9c);
  cVar3 = (char)param_2;
  if ((piVar1 != (int *)0x0) && (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_FWD), (char)uVar2 == '\0')
     ) {
    if (cVar3 == '\0') {
      if (((byte)*(undefined4 *)((int)param_1 + 0xb0) & 0x38) == 0x10) {
        return;
      }
    }
    else if (((byte)*(undefined4 *)((int)param_1 + 0xb0) & 0x38) == 8) {
      return;
    }
    F_005dbaf0(param_1 GEN_EDX_ARG,param_2,1,1);
    *(byte *)((int)param_1 + 0x2b) =
         *(byte *)((int)param_1 + 0x2b) ^ (cVar3 << 5 ^ *(byte *)((int)param_1 + 0x2b)) & 0x20;
    return;
  }
  if ((*(char *)((int)param_1 + 0xc2) != '\0') && (*(char *)((int)param_1 + 0xc3) != '\0')) {
    if (cVar3 == '\0') {
      if (((byte)*(undefined4 *)((int)param_1 + 0xb0) & 7) == 2) {
        return;
      }
    }
    else if (((byte)*(undefined4 *)((int)param_1 + 0xb0) & 7) == 1) {
      return;
    }
    F_005f3940(param_1 GEN_EDX_ARG,param_2,1,1);
    *(byte *)((int)param_1 + 0x2b) =
         *(byte *)((int)param_1 + 0x2b) ^ (cVar3 << 5 ^ *(byte *)((int)param_1 + 0x2b)) & 0x20;
    return;
  }
  *(byte *)((int)param_1 + 0x2b) =
       *(byte *)((int)param_1 + 0x2b) ^
       (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        (!(param_3 < *(float *)&REFG(undefined, 0x1088114)) && param_3 != *(float *)&REFG(undefined, 0x1088114))) << 5 ^
       *(byte *)((int)param_1 + 0x2b)) & 0x20;
  uVar2 = 0;
  uVar4 = *(int *)((int)param_1 + 0x7c) - *(int *)((int)param_1 + 0x78) >> 2;
  if (uVar4 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x78) + uVar2 * 4))) + 0x10)));
      if (*(char *)((int)piVar1 + 0x11) == '\x01') {
        if ((*(byte *)((int)piVar1 + 0x2b) & 6) != 0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
        }
      }
      else if ((*(byte *)((int)piVar1 + 0x2b) & 2) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  return;
}

/* ref: FUN_005f5110 */
GEN_FRAME unsigned int GEN_THISCALL F_005f5110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)((int)this + 8) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4)));
  }
  if ((*(int *)((int)this + 0x9c) != 0) && (pvVar3 != (undefined *)0x0)) {
    F_005eccb0(pvVar3 GEN_EDX_FWD,*(int *)((int)this + 0x9c));
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x9c);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  F_005f3b00(this GEN_EDX_ARG);
  if (((((*(byte *)((int)this + 0x20) & 1) == 0) &&
       (bVar2 = *(byte *)((int)this + 0x28) & 0xf, bVar2 != 9)) && (bVar2 != 8)) &&
     (((*(int *)((int)this + 8) != 0 &&
       (pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4))), pvVar3 != (undefined *)0x0)) &&
      (uVar4 = *(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2, uVar4 != 0)))) {
    do {
      F_005ef520(pvVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + uVar5 * 4))) + 0x10))));
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  F_005f07a0((undefined *)((int)this + 0x70) GEN_EDX_ARG);
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffff0;
  return;
}

/* ref: FUN_005f51d0 */
GEN_FRAME uint GEN_THISCALL F_005f51d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f51d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if ((*(char *)((int)this + 0xc2) != '\0') && (*(char *)((int)this + 0xc3) != '\0')) {
    bVar1 = F_005f3940(this GEN_EDX_FWD,param_1,1,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_005f3940(this GEN_EDX_ARG,param_1,param_2,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_005f5210 */
GEN_FRAME unsigned int GEN_THISCALL F_005f5210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  int iVar3;
  int * piVar4;
  int local_10;
  
  piVar4 = (int *)((int)this + 0x5c);
  iVar3 = 4;
  do {
    if (*piVar4 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar4 + 0x90))((int *)*piVar4 GEN_EDX_FWD,0);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
  if (pvVar2 != (undefined *)0x0) {
    fVar1 = *(float *)((int)this + 0x30);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    local_10 = (int)(longlong)TRUNC((float10)fVar1);
    piVar4 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    if (piVar4 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4 GEN_EDX_ARG,(uint)(local_10 * 1000) / 0x1e);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2 GEN_EDX_ARG);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x54) GEN_EDX_ARG,0);
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x58);
  if (pvVar2 != (undefined *)0x0) {
    piVar4 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar4 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4 GEN_EDX_ARG,500);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2 GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_005f52e0 */
GEN_FRAME unsigned int GEN_THISCALL F_005f52e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f52e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  int local_10;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    local_10 = (int)(longlong)TRUNC((float10)*(float *)((int)this + 0x30));
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_FWD,(uint)(local_10 * 1000) / 0x1e);
  }
  if (*(undefined * PTR32 *)((int)this + 0x58) != (undefined *)0x0) {
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,0);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x54);
  if (this_00 != (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this_00 + 0x34);
    *(byte *)((int)this_00 + 0x94) = *(byte *)((int)this_00 + 0x94) & 0xfb;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1 GEN_EDX_ARG,500);
      *(undefined4 *)((int)this_00 + 0x34) = 0;
      F_005e1000(this_00 GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_005f5370 */
GEN_NOFRAME uint GEN_THISCALL F_005f5370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  *(undefined4 *)((int)this + 0x1c) = 3;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_005dc670(this GEN_EDX_FWD,1);
  piVar3 = (int *)((int)this + 0x5c);
  iVar2 = 4;
  do {
    if (*piVar3 != 0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar3 + 0x90))((int *)*piVar3 GEN_EDX_ARG,1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    uVar1 = F_005f4000(*(undefined * PTR32 *)((int)this + 0x50) GEN_EDX_ARG,500);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x54);
  if (this_00 != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)((int)this_00 + 0x34);
    *(byte *)((int)this_00 + 0x94) = *(byte *)((int)this_00 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3 GEN_EDX_ARG,500);
      *(undefined4 *)((int)this_00 + 0x34) = 0;
      uVar1 = F_005e1000(this_00 GEN_EDX_ARG);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_005f5400 */
GEN_FRAME uint GEN_THISCALL F_005f5400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  int * piVar3;
  code * pcVar4;
  uint uVar5;
  int local_10;
  
  if (*(undefined * PTR32 *)((int)this + 0x44) == (undefined *)0x0) {
    if ((*(int *)((int)this + 0x4c) == 0) && (*(undefined * PTR32 *)((int)this + 0x48) != (undefined *)0x0)) {
      local_10 = (int)(longlong)TRUNC((float10)*(float *)((int)this + 0x28));
      uVar5 = F_005f4000(*(undefined * PTR32 *)((int)this + 0x48) GEN_EDX_FWD,(uint)(local_10 * 1000) / 0x1e);
      goto LAB_005f54b8;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = F_005f4000(*(undefined * PTR32 *)((int)this + 0x44) GEN_EDX_ARG,0);
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x48);
  if (pvVar2 != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3 GEN_EDX_ARG,0);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      uVar5 = F_005e1000(pvVar2 GEN_EDX_ARG);
    }
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x4c);
  if (pvVar2 != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3 GEN_EDX_ARG,0);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      uVar5 = F_005e1000(pvVar2 GEN_EDX_ARG);
    }
  }
LAB_005f54b8: ;
  piVar3 = *(int * PTR32 *)((int)this + 0x3c);
  if (piVar3 != (int *)0x0) {
    fVar1 = *(float *)((int)this + 0x28);
    pcVar4 = *(gen_code32 *)(*piVar3 + 0xe0);
    *(byte *)(piVar3 + 0x23) = *(byte *)(piVar3 + 0x23) | 1;
    uVar5 = (*pcVar4)(piVar3,1);
    if (piVar3[0xc] != 0) {
      F_0068b7c0(piVar3[0xc] GEN_EDX_ARG,(float)(float10)1);
      uVar5 = F_00699cb0(piVar3[0xc] GEN_EDX_ARG,fVar1);
    }
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar3 != (int *)0x0) {
    fVar1 = *(float *)((int)this + 0x28);
    pcVar4 = *(gen_code32 *)(*piVar3 + 0xe0);
    *(byte *)(piVar3 + 0x23) = *(byte *)(piVar3 + 0x23) | 1;
    uVar5 = (*pcVar4)(piVar3,1);
    if (piVar3[0xc] != 0) {
      F_0068b7c0(piVar3[0xc] GEN_EDX_ARG,(float)(float10)1);
      uVar5 = F_00699cb0(piVar3[0xc] GEN_EDX_ARG,fVar1);
    }
  }
  return uVar5;
}

/* ref: FUN_005f5550 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f5550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
  if (pvVar1 == (undefined *)0x0) {
    if ((*(int *)((int)this + 0x4c) == 0) && (*(int *)((int)this + 0x48) != 0)) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x48) + 0xc0))))(*(int * PTR32 *)((int)this + 0x48) GEN_EDX_FWD);
      if ((char)uVar4 == '\0') {
        F_005f4000(*(undefined * PTR32 *)((int)this + 0x48) GEN_EDX_ARG,0);
      }
      goto LAB_005f55e8;
    }
  }
  else {
    piVar2 = *(int * PTR32 *)((int)pvVar1 + 0x34);
    *(byte *)((int)pvVar1 + 0x94) = *(byte *)((int)pvVar1 + 0x94) & 0xfb;
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2 GEN_EDX_ARG,500);
      *(undefined4 *)((int)pvVar1 + 0x34) = 0;
      F_005e1000(pvVar1 GEN_EDX_ARG);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x48) != (undefined *)0x0) {
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x48) GEN_EDX_ARG,0);
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x4c);
  if (pvVar1 != (undefined *)0x0) {
    piVar2 = *(int * PTR32 *)((int)pvVar1 + 0x34);
    *(byte *)((int)pvVar1 + 0x94) = *(byte *)((int)pvVar1 + 0x94) & 0xfb;
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2 GEN_EDX_ARG,0);
      *(undefined4 *)((int)pvVar1 + 0x34) = 0;
      F_005e1000(pvVar1 GEN_EDX_ARG);
    }
  }
LAB_005f55e8: ;
  if ((*(int *)((int)this + 0x3c) != 0) &&
     (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0xc0))))(*(int * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG),
     (char)uVar4 == '\0')) {
    piVar2 = *(int * PTR32 *)((int)this + 0x3c);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0xe0);
    *(byte *)(piVar2 + 0x23) = *(byte *)(piVar2 + 0x23) | 1;
    (*pcVar3)(piVar2,1);
    if (piVar2[0xc] != 0) {
      F_0068b7c0(piVar2[0xc] GEN_EDX_ARG,(float)(float10)1);
      F_00699cb0(piVar2[0xc] GEN_EDX_ARG,(float)(float10)0);
    }
  }
  if ((*(int *)((int)this + 0x40) != 0) &&
     (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0xc0))))(*(int * PTR32 *)((int)this + 0x40) GEN_EDX_ARG),
     (char)uVar4 == '\0')) {
    piVar2 = *(int * PTR32 *)((int)this + 0x40);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0xe0);
    *(byte *)(piVar2 + 0x23) = *(byte *)(piVar2 + 0x23) | 1;
    (*pcVar3)(piVar2,1);
    if (piVar2[0xc] != 0) {
      F_0068b7c0(piVar2[0xc] GEN_EDX_ARG,(float)(float10)1);
      F_00699cb0(piVar2[0xc] GEN_EDX_ARG,(float)(float10)0);
    }
  }
  return;
}

/* ref: FUN_005f5690 */
GEN_FRAME unsigned int GEN_THISCALL F_005f5690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  int local_10;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x44);
  if (pvVar2 == (undefined *)0x0) {
    if ((*(int *)((int)this + 0x4c) == 0) &&
       (pvVar2 = *(undefined * PTR32 *)((int)this + 0x48), pvVar2 != (undefined *)0x0)) {
      fVar1 = *(float *)((int)this + 0x28);
      *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
      local_10 = (int)(longlong)TRUNC((float10)fVar1);
      piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
      if (piVar3 == (int *)0x0) {
        return;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3 GEN_EDX_FWD,(uint)(local_10 * 1000) / 0x1e);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2 GEN_EDX_ARG);
      return;
    }
  }
  else {
    piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3 GEN_EDX_ARG,500);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2 GEN_EDX_ARG);
    }
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x48);
  if (pvVar2 != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3 GEN_EDX_ARG,500);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2 GEN_EDX_ARG);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x4c) != (undefined *)0x0) {
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x4c) GEN_EDX_ARG,0);
  }
  iVar4 = *(int *)((int)this + 0x3c);
  if (iVar4 != 0) {
    if ((*(int *)(iVar4 + 0x30) != 0) && ((*(byte *)(iVar4 + 0x8c) & 1) != 0)) {
      F_0068b730(*(int *)(iVar4 + 0x30) GEN_EDX_ARG,*(float *)((int)this + 0x28));
    }
    *(byte *)(iVar4 + 0x8c) = *(byte *)(iVar4 + 0x8c) & 0xfe;
  }
  iVar4 = *(int *)((int)this + 0x40);
  if (iVar4 != 0) {
    if ((*(int *)(iVar4 + 0x30) != 0) && ((*(byte *)(iVar4 + 0x8c) & 1) != 0)) {
      F_0068b730(*(int *)(iVar4 + 0x30) GEN_EDX_ARG,*(float *)((int)this + 0x28));
    }
    *(byte *)(iVar4 + 0x8c) = *(byte *)(iVar4 + 0x8c) & 0xfe;
  }
  return;
}

/* ref: FUN_005f57d0 */
GEN_FRAME uint GEN_THISCALL F_005f57d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f57d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5b04));
  F_00617970((undefined *)((int)this + 0x1c) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x20),
               *(undefined4 * PTR32 *)((int)this + 0x20));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x20),0x18,0x385);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  return (uint)uVar1;
}

/* ref: Client::LayoutEngine::Layer::LayerManager::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_005f5810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_005f3bf0(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf56 */
GEN_FRAME uint GEN_THISCALL F_005f5820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f5820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 << 3 ^ (byte)this[0x2b]) & 8);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x11c))(this GEN_EDX_FWD);
  if (uVar3 != 0xffffffff) {
    F_00a5f030(*(undefined * PTR32 *)(this + 0x30) GEN_EDX_ARG,4,param_1,0);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x11c))(this GEN_EDX_ARG);
    if ((uVar3 != 0xffffffff) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), iVar1 != 0)) {
      if ((*(char *)(iVar1 + 0xc2) != '\0') && (*(char *)(iVar1 + 0xc3) != '\0')) {
        bVar2 = F_005f3940(iVar1 GEN_EDX_ARG,param_1,1,0);
        return CONCAT31(extraout_var,bVar2);
      }
      bVar2 = F_005f3940(iVar1 GEN_EDX_ARG,param_1,0,0);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf56 */
GEN_FRAME uint GEN_THISCALL F_005f58b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f58b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = (*(undefined4 *)&gen_args[1]);
  (*(undefined * PTR32 *)&gen_args[0])[0x2b] = (undefined1)
               ((byte)(*(undefined * PTR32 *)&gen_args[0])[0x2b] ^ ((char)(*(undefined4 *)&gen_args[1]) << 3 ^ (byte)(*(undefined * PTR32 *)&gen_args[0])[0x2b]) & 8);
  uVar4 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (uVar4 != 0xffffffff) {
    (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(*(undefined * PTR32 *)&gen_args[0])[0x11]);
    this_00 = (undefined *)F_00a1b870((*(undefined4 *)&gen_args[1]),uVar4);
    uVar4 = 0;
    if (this_00 != (undefined *)0x0) {
      F_00a5f030(this_00 GEN_EDX_ARG,4,uVar2,0);
      uVar4 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
      if (uVar4 != 0xffffffff) {
        (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(*(undefined * PTR32 *)&gen_args[0])[0x11]);
        uVar4 = F_00a1b870((*(undefined4 *)&gen_args[1]),uVar4);
        if (((uVar4 != 0) && (*(int *)(uVar4 + 0x7c) == 0)) &&
           (iVar1 = *(int *)(uVar4 + 0xf0), iVar1 != 0)) {
          if ((*(char *)(iVar1 + 0xc2) != '\0') && (*(char *)(iVar1 + 0xc3) != '\0')) {
            bVar3 = F_005f3940(iVar1 GEN_EDX_ARG,uVar2,1,0);
            return CONCAT31(extraout_var,bVar3);
          }
          bVar3 = F_005f3940(iVar1 GEN_EDX_ARG,uVar2,0,0);
          uVar4 = CONCAT31(extraout_var_00,bVar3);
        }
      }
    }
  }
  return uVar4;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf31 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f5960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)(this + 0x34) == 0) && (((byte)this[0x20] & 2) != 0)) {
    if (*(int *)(this + 0x3c) == 0) {
      if (*(int *)(this + 0x38) != 0) {
        if (*(int *)(this + 8) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
        }
        uVar2 = F_00507260((undefined *)(iVar1 + 0x14c) GEN_EDX_FWD,this + 0x38);
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        F_005ddd80(this GEN_EDX_ARG,uVar3,uVar2);
      }
    }
    else {
      if (*(int *)(this + 8) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
      }
      (*(int *)(gen_frame + 0x3c)) = *(int *)(this + 0x3c);
      F_00614a80((undefined *)(iVar1 + 0x15c) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x3c)));
      if ((*(int *)(gen_frame + 0x38)) == *(int *)(iVar1 + 0x160)) {
        F_005f3d40(this GEN_EDX_ARG,0);
      }
      else {
        F_005f3d40(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x38)) + 0x20);
      }
    }
    if (*(int *)(this + 0x34) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x1c))))
                (*(int * PTR32 *)(this + 0x34) GEN_EDX_ARG,*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44));
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x90))(this GEN_EDX_ARG,(uint)((byte)this[0x2b] >> 3 & 1));
    }
  }
  return;
}

/* ref: FUN_005f5a60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f5a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a5b24));
  iVar1 = *(int *)((int)this + 0x7c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x84) - iVar1) / 0xc) * 0xc,0x385);
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_005f5ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5f5ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x7c) != *(int *)(this + 0x80)) {
    *(int *)(this + 0x80) = *(int *)(this + 0x7c);
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf39 */
GEN_FRAME unsigned int GEN_THISCALL F_005f5b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5f5b10u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  int local_c;
  
  if ((char)param_2 != '\0') {
    local_c = (int)(longlong)TRUNC((float10)param_3);
    F_005f4000(param_1 GEN_EDX_FWD,(uint)(local_c * 1000) / 0x1e);
    return;
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x34);
  *(byte *)((int)param_1 + 0x94) = *(byte *)((int)param_1 + 0x94) & 0xfb;
  if (piVar1 != (int *)0x0) {
    local_c = (int)(longlong)TRUNC((float10)param_3);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1 GEN_EDX_ARG,(uint)(local_c * 1000) / 0x1e);
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    F_005e1000(param_1 GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf50 */
GEN_FRAME uint GEN_THISCALL F_005f5bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f5bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 SVar1;
  int * piVar2;
  undefined4 in_EAX = 0;
  undefined3 uVar4;
  uint uVar3;
  
  SVar1 = this[0x94];
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,SVar1);
  if (((byte)SVar1 >> 2 & 1) != (byte)param_1) {
    if ((byte)param_1 == 0) {
      piVar2 = *(int * PTR32 *)(this + 0x34);
      uVar3 = CONCAT31(uVar4,SVar1) & 0xfffffffb;
      this[0x94] = SUB41(uVar3,0);
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2 GEN_EDX_FWD,0);
        *(undefined4 *)(this + 0x34) = 0;
        uVar3 = F_005e1000(this GEN_EDX_ARG);
      }
    }
    else {
      this[0x94] = (undefined1)((byte)SVar1 | 4);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe0))(this GEN_EDX_ARG,1);
      piVar2 = *(int * PTR32 *)(this + 0x34);
      if (piVar2 == (int *)0x0) {
        uVar3 = F_005f1e60(this GEN_EDX_ARG,0);
      }
      else {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG,0);
      }
    }
  }
  this[0x94] = (undefined1)
               ((byte)this[0x94] ^ ((byte)param_1 * '\x04' ^ (byte)this[0x94]) & 4);
  return uVar3;
}

/* ref: FUN_005f5c50 */
GEN_FRAME uint GEN_THISCALL F_005f5c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c38));
  F_00617470((undefined *)((int)this + 0x30) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x34),
               *(undefined4 * PTR32 *)((int)this + 0x34));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x34),0x18,900);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  return (uint)uVar1;
}

/* ref: FUN_005f5c90 */
GEN_FRAME byte GEN_THISCALL F_005f5c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f5c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    bVar2 = F_005f4180(this GEN_EDX_ARG,param_1,param_2);
    return bVar2;
  }
  uVar1 = *(ushort *)((int)this + 100);
  uVar3 = (uint)uVar1;
  sVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(ushort *)(gen_frame + 0x8)) = uVar1;
  (*(short *)(gen_frame + 0xa)) = 0;
  if (1 < uVar3) {
    do {
      uVar3 = uVar3 >> 1;
      sVar4 = sVar4 + 1;
    } while (1 < uVar3);
    (*(short *)(gen_frame + 0xa)) = sVar4;
  }
  sVar5 = (short)(int)*param_2 >> ((byte)(*(short *)(gen_frame + 0xa)) & 0x1f);
  sVar4 = (short)(int)param_2[2] >> ((byte)(*(short *)(gen_frame + 0xa)) & 0x1f);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = sVar5;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = sVar4;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT22(sVar4,sVar5);
  bVar2 = F_005f4100(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x4)));
  return bVar2;
}

/* ref: FUN_005f5d20 */
GEN_NOFRAME uint GEN_THISCALL F_005f5d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x5f5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int *)(gen_frame + 0x2c)) = param_1;
  F_006192f0((undefined *)(param_1 + 0x88) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x28)),param_3);
  piVar7 = (*(int * PTR32 *)(gen_frame + 0x28));
  if ((*(int * PTR32 *)(gen_frame + 0x28)) != *(int * PTR32 *)(param_1 + 0x8c)) {
    piVar7 = (int *)(*(int * PTR32 *)(gen_frame + 0x28))[6];
    piVar8 = (int *)*piVar7;
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar7;
    if (piVar8 != piVar7) {
      do {
        piVar2 = (int *)piVar8[3];
        if (piVar2 != (int *)0x0) {
          uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2 GEN_EDX_ARG);
          if ((char)uVar5 != '\0') {
            bVar4 = F_005ec0b0(param_2,piVar2);
            piVar7 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
            if (bVar4 != 0) goto LAB_005f5e24;
          }
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
          bVar4 = F_005d8fa0(piVar2,((undefined1 *)(gen_frame + 0x0)),param_4,param_5,&(*(int * PTR32 *)(gen_frame + 0x28)));
          piVar7 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar4)));
          if (bVar4 != 0) {
            (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x28));
            puVar6 = (undefined4 *)F_004296a0(0x18,0,0x385);
            *puVar6 = *(undefined4 *)((int)param_2 + 4);
            puVar6[1] = *(undefined4 *)((int)param_2 + 4);
            puVar6[2] = *(undefined4 *)((int)param_2 + 4);
            *(undefined2 *)(puVar6 + 5) = 0;
            if (puVar6 + 3 != (undefined4 *)0x0) {
              puVar6[3] = (*(int * PTR32 *)(gen_frame + 0x1c));
              puVar6[4] = piVar2;
            }
            piVar7 = (int *)F_00618a20(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),puVar6,0);
            *(byte *)(piVar2 + 8) = *(byte *)(piVar2 + 8) | 2;
          }
        }
LAB_005f5e24: ;
        if (*(char *)((int)piVar8 + 0x11) == '\0') {
          piVar7 = (int *)piVar8[2];
          if (*(char *)((int)piVar7 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar7 + 0x11);
            piVar8 = piVar7;
            piVar7 = (int *)*piVar7;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar7 + 0x11);
              piVar8 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x11);
            piVar3 = (int *)piVar8[1];
            piVar2 = piVar8;
            while ((piVar7 = piVar3, piVar8 = piVar7, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))
                  ) {
              cVar1 = *(char *)(piVar7[1] + 0x11);
              piVar3 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar8 != (*(int * PTR32 *)(gen_frame + 0x24)));
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_005f5e80 */
GEN_NOFRAME uint GEN_THISCALL F_005f5e80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f5e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5ad8));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0x100;
  *(undefined1 *)((int)this + 0x26) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_004296a0(0x28,0,900);
  *(uint *)((int)this + 0x30) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 4))) = *(int *)((int)this + 0x30);
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 8))) = *(int *)((int)this + 0x30);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x44) = 0;
  uVar1 = F_004296a0(0x28,0,900);
  *(uint *)((int)this + 0x40) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x40) + 4))) = *(int *)((int)this + 0x40);
  *((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) = *(int *)((int)this + 0x40);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x180) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 0x17c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x17c) + 4))) = *(int *)((int)this + 0x17c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x17c) + 8))) = *(int *)((int)this + 0x17c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x17c) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x17c) + 0x11))) = 1;
  puVar3 = (undefined4 *)((int)this + 0x4c);
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar3 = 0xbf800000;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_005f5f70 */
GEN_NOFRAME unsigned int F_005f5f70(void)
{
  GEN_ENTER(0x5f5f70u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  this = (undefined *)F_00406b90(0x188,0,0);
  if (this == (undefined *)0x0) {
    REFG(int * PTR32, 0x1379cb0) = (int *)0x0;
  }
  else {
    REFG(int * PTR32, 0x1379cb0) = (int *)F_005f5e80(this GEN_EDX_ARG);
  }
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379cb0) + 4))))(REFG(int * PTR32, 0x1379cb0) GEN_EDX_ARG));
}

/* ref: FUN_005f5fa0 */
GEN_FRAME unsigned int F_005f5fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if ((*(char *)(REFG(int, 0x137104c) + 8) == '\0') && (REFG(int, 0x1379cb0) != 0)) {
    F_005f48a0(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10) GEN_EDX_ARG,param_1);
    puVar2 = *(undefined4 * PTR32 *)(REFG(int, 0x1379cb0) + 0x30);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      F_005f48a0((undefined *)puVar3[6] GEN_EDX_ARG,param_1);
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x21);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x21);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
  }
  return;
}

/* ref: FUN_005f6030 */
GEN_FRAME uint GEN_THISCALL F_005f6030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f6030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c54));
  F_00616e70((undefined *)((int)this + 0x19c) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1a0),
               *(undefined4 * PTR32 *)((int)this + 0x1a0));
  F_00429760(*(undefined4 *)((int)this + 0x1a0),0x14,900);
  iVar2 = *(int *)((int)this + 0x18c);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x194) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  F_00617790((undefined *)((int)this + 0x17c) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x180),
               *(undefined4 * PTR32 *)((int)this + 0x180));
  F_00429760(*(undefined4 *)((int)this + 0x180),0x1c,900);
  F_006176f0((undefined *)((int)this + 0x16c) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x170),
               *(undefined4 * PTR32 *)((int)this + 0x170));
  F_00429760(*(undefined4 *)((int)this + 0x170),0x18,900);
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x160) + 4)));
  cVar1 = *(char *)((int)piVar3 + 0x91);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
  while ((*(int * PTR32 *)(gen_frame + 0x8)) = piVar3, cVar1 == '\0') {
    F_0060f280((undefined *)((int)this + 0x15c) GEN_EDX_ARG,piVar3[2]);
    piVar3 = (int *)*piVar3;
    F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),0xa0,0x385);
    cVar1 = *(char *)((int)piVar3 + 0x91);
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x160) + 4))) = *(int *)((int)this + 0x160);
  *(undefined4 *)*(undefined4 *)((int)this + 0x160) = *(undefined4 *)((int)this + 0x160);
  *((int *)GEN_TOP((*(int *)((int)this + 0x160) + 8))) = *(int *)((int)this + 0x160);
  *(undefined4 *)((int)this + 0x164) = 0;
  F_00617300((undefined *)((int)this + 0x15c) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x160),
               *(undefined4 * PTR32 *)((int)this + 0x160));
  F_00429760(*(undefined4 *)((int)this + 0x160),0xa0,0x385);
  F_00509b60((undefined *)((int)this + 0x14c) GEN_EDX_ARG);
  F_00617650((undefined *)((int)this + 0x13c) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x140),
               *(undefined4 * PTR32 *)((int)this + 0x140));
  F_00429760(*(undefined4 *)((int)this + 0x140),0x18,0x385);
  iVar2 = *(int *)((int)this + 300);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x134) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  iVar2 = *(int *)((int)this + 0x11c);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x124) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  F_006175b0((undefined *)((int)this + 0x10c) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x110),
               *(undefined4 * PTR32 *)((int)this + 0x110));
  F_00429760(*(undefined4 *)((int)this + 0x110),0x18,900);
  F_00617510((undefined *)((int)this + 0xfc) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x100),
               *(undefined4 * PTR32 *)((int)this + 0x100));
  F_00429760(*(undefined4 *)((int)this + 0x100),0x18,900);
  iVar2 = *(int *)((int)this + 0xec);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0xf4) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  iVar2 = *(int *)((int)this + 0xdc);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0xe4) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  uVar4 = F_00509440((undefined *)((int)this + 0xc4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  return uVar4;
}

/* ref: FUN_005f6340 */
GEN_FRAME uint GEN_THISCALL F_005f6340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f6340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  byte bVar2;
  uint * puVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  byte * pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint * puVar9;
  ushort * puVar10;
  byte * pbVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)0x0;
  if (*(int *)((int)this + 0x18) == 0) {
    puVar3 = (uint *)0x0;
    if (*(int *)((int)this + 0x1c) != 0) {
      (*(int *)(gen_frame + 0x4)) = *(int *)((int)this + 0x1c);
      F_006154e0((undefined *)((int)this + 0x16c) GEN_EDX_FWD,&(*(uint * PTR32 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)));
      puVar3 = (*(uint * PTR32 *)(gen_frame + 0x8));
      if ((*(uint * PTR32 *)(gen_frame + 0x8)) == *(uint * PTR32 *)((int)this + 0x170)) {
        (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)0x0;
      }
      else {
        (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)(*(uint * PTR32 *)(gen_frame + 0x8))[4];
      }
    }
  }
  else {
    puVar3 = (uint *)F_005eca50(this GEN_EDX_ARG,*(int *)((int)this + 0x18));
    (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar7 = (*(int *)(gen_frame + 0x4));
      iVar4 = *(int *)(param_1 + 8) + param_1;
      puVar10 = ((ushort *)GEN_TOP((*(int *)(iVar4 + (*(int *)(gen_frame + 0x4)) * 4) + iVar4)));
      puVar3 = (uint *)F_005d93f0((*(uint * PTR32 *)(gen_frame + 0x14)),puVar10);
      if (((char)puVar3 != '\0') && ((*(uint * PTR32 *)(gen_frame + 0x8)) = (uint *)0x0, 0 < *(int *)(puVar10 + 6))) {
        do {
          puVar3 = ((uint *)GEN_TOP((*(int *)(puVar10 + 4) + (int)puVar10)));
          iVar7 = *(int *)(puVar3[(int)(*(uint * PTR32 *)(gen_frame + 0x8))] + (int)puVar3);
          pbVar11 = (byte *)(puVar3[(int)(*(uint * PTR32 *)(gen_frame + 0x8))] + (int)puVar3);
          if ((iVar7 == 1) || (iVar7 == 6)) {
            bVar2 = F_005ec610((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)*pbVar11,(uint)*puVar10,*(undefined4 *)(pbVar11 + 4)
                                 ,&(*(char *)(gen_frame + 0x1b)),&(*(undefined1 *)(gen_frame + 0x1a)));
            pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0xc));
            puVar3 = ((uint *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
            if ((*(char *)(gen_frame + 0x1b)) != '\0') {
              pbVar5 = (byte *)0x0;
              if ((iVar7 == 1) || (iVar7 == 6)) {
                pbVar5 = pbVar11 + *(int *)(pbVar11 + 0x30);
              }
              uVar6 = F_00513dc0(pbVar5,(int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x94,0,0);
              (*(uint *)(gen_frame + 0x10)) = uVar6;
              puVar3 = *(uint * PTR32 *)((int)pvVar1 + 0xf0);
              if (&(*(uint *)(gen_frame + 0x10)) < puVar3) {
                puVar9 = *(uint * PTR32 *)((int)pvVar1 + 0xec);
                if (&(*(uint *)(gen_frame + 0x10)) < puVar9) goto LAB_005f64c2;
                if (puVar3 == *(uint * PTR32 *)((int)pvVar1 + 0xf4)) {
                  iVar7 = (int)puVar3 - (int)((int)(uintptr_t)puVar9) >> 2;
                  if (iVar7 == -1) goto LAB_005f654c;
                  uVar8 = iVar7 + 1;
                  uVar6 = (int)*(uint * PTR32 *)((int)pvVar1 + 0xf4) - (int)((int)(uintptr_t)puVar9) >> 2;
                  if (uVar6 < uVar8) {
                    if (-(uVar6 >> 1) - 1 < uVar6) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = uVar6 + (uVar6 >> 1);
                    }
                    if (uVar6 < uVar8) {
                      uVar6 = uVar8;
                    }
                    F_0061ab40((undefined *)((int)pvVar1 + 0xec) GEN_EDX_ARG,uVar6);
                  }
                }
                puVar3 = *(uint * PTR32 *)((int)pvVar1 + 0xf0);
                if (puVar3 != (uint *)0x0) {
                  *puVar3 = *((uint *)GEN_TOP((*(int *)((int)pvVar1 + 0xec) +
                                     ((int)&(*(uint *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)puVar9) >> 2) * 4)));
                }
              }
              else {
LAB_005f64c2: ;
                if (puVar3 == *(uint * PTR32 *)((int)pvVar1 + 0xf4)) {
                  iVar7 = (int)puVar3 - *(int *)((int)pvVar1 + 0xec) >> 2;
                  if (iVar7 == -1) {
LAB_005f654c: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  uVar8 = iVar7 + 1;
                  uVar6 = (int)*(uint * PTR32 *)((int)pvVar1 + 0xf4) - *(int *)((int)pvVar1 + 0xec) >> 2;
                  if (uVar6 < uVar8) {
                    if (-(uVar6 >> 1) - 1 < uVar6) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = uVar6 + (uVar6 >> 1);
                    }
                    if (uVar6 < uVar8) {
                      uVar6 = uVar8;
                    }
                    F_0061ab40((undefined *)((int)pvVar1 + 0xec) GEN_EDX_ARG,uVar6);
                  }
                }
                puVar3 = *(uint * PTR32 *)((int)pvVar1 + 0xf0);
                if (puVar3 != (uint *)0x0) {
                  *puVar3 = (*(uint *)(gen_frame + 0x10));
                }
              }
              *(int *)((int)pvVar1 + 0xf0) = *(int *)((int)pvVar1 + 0xf0) + 4;
            }
          }
          puVar9 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x8)) + 1);
          (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar9;
          iVar7 = (*(int *)(gen_frame + 0x4));
        } while ((int)puVar9 < *(int *)(puVar10 + 6));
      }
      (*(int *)(gen_frame + 0x4)) = iVar7 + 1;
    } while (iVar7 + 1 < *(int *)(param_1 + 0xc));
  }
  return (uint)puVar3;
}

/* ref: FUN_005f6560 */
GEN_FRAME byte GEN_THISCALL F_005f6560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f6560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  uVar1 = F_005ef690(this GEN_EDX_FWD,6,param_1,0,1);
  if (uVar1 == 0) {
    return 0;
  }
  if ((*(char *)(uVar1 + 0xc2) != '\0') && (*(char *)(uVar1 + 0xc3) != '\0')) {
    F_005f3940(uVar1 GEN_EDX_ARG,param_2,1,0);
    return 1;
  }
  F_005f3940(uVar1 GEN_EDX_ARG,param_2,param_3,0);
  return 1;
}

/* ref: FUN_005f65c0 */
GEN_FRAME uint GEN_THISCALL F_005f65c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f65c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  byte bVar6;
  int * piVar7;
  undefined3 extraout_var = 0;
  int * piVar8;
  uint uVar9;
  int iVar10;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  uVar4 = (*(uint *)&gen_args[3]);
  uVar3 = (*(uint *)&gen_args[2]);
  piVar7 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    piVar7 = *(int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x8))[4] + 4);
    piVar8 = (int *)*piVar7;
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar7;
    if (piVar8 != piVar7) {
      do {
        piVar7 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)piVar7) >> 8),(char)(*(undefined4 *)&gen_args[1]))));
        if ((char)(*(undefined4 *)&gen_args[1]) == '\x06') {
          iVar10 = piVar8[6];
          uVar9 = uVar4;
          if ((*(char *)(iVar10 + 0xc2) != '\0') && (*(char *)(iVar10 + 0xc3) != '\0')) {
            uVar9 = 1;
          }
          bVar6 = F_005f3940(iVar10 GEN_EDX_ARG,uVar3,uVar9,0);
          piVar7 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
        }
        else if ((char)(*(undefined4 *)&gen_args[1]) == '\x10') {
          piVar7 = (int *)piVar8[6];
          *(byte *)((int)piVar7 + 0x2b) =
               *(byte *)((int)piVar7 + 0x2b) ^
               ((char)uVar3 << 3 ^ *(byte *)((int)piVar7 + 0x2b)) & 8;
          iVar10 = piVar7[0xe];
          if (iVar10 != -1) {
            (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),*(undefined1 *)((int)piVar7 + 0x11));
            uVar9 = (*(uint *)&gen_args[2]);
LAB_005f6646: ;
            piVar7 = (int *)F_00a1b870(uVar9,iVar10);
            if ((piVar7 != (int *)0x0) && (piVar7[0x3c] != 0)) {
              piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xbc))(piVar7 GEN_EDX_ARG,uVar3,uVar4)));
            }
          }
        }
        else if ((char)(*(undefined4 *)&gen_args[1]) == '-') {
          piVar7 = (int *)piVar8[6];
          iVar10 = piVar7[0xe];
          *(byte *)((int)piVar7 + 0x2b) =
               *(byte *)((int)piVar7 + 0x2b) ^
               ((char)uVar3 << 3 ^ *(byte *)((int)piVar7 + 0x2b)) & 8;
          if (iVar10 != -1) {
            (*(uint *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[3]), 1, 3),*(undefined1 *)((int)piVar7 + 0x11));
            uVar9 = (*(uint *)&gen_args[3]);
            goto LAB_005f6646;
          }
        }
        if (*(char *)((int)piVar8 + 0x21) == '\0') {
          piVar2 = (int *)piVar8[2];
          if (*(char *)((int)piVar2 + 0x21) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar7 = (int *)*piVar2;
            while (piVar8 = piVar2, cVar1 == '\0') {
              cVar1 = *(char *)(*piVar7 + 0x21);
              piVar2 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x21);
            piVar5 = (int *)piVar8[1];
            piVar2 = piVar8;
            while ((piVar7 = piVar5, piVar8 = piVar7, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))
                  ) {
              cVar1 = *(char *)(piVar7[1] + 0x21);
              piVar5 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar8 != (*(int * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_005f6710 */
GEN_FRAME uint F_005f6710(unsigned int gen_a0)
{
  GEN_ENTER(0x5f6710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  undefined * this;
  
  if (REFG(int, 0x1379cb0) == 0) {
    this = (undefined *)0x0;
  }
  else {
    this = *(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x20);
  }
  F_005f4b50(this GEN_EDX_ARG);
  if (REFG(int, 0x1379cb0) != 0) {
    uVar1 = F_005f4aa0(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x20) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  uVar1 = F_005f4aa0((undefined *)0x0 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_005f6750 */
GEN_FRAME uint F_005f6750(unsigned int gen_a0)
{
  GEN_ENTER(0x5f6750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = REFG(undefined4, 0x1379cb0);
    *(undefined1 *)(REFG(undefined4, 0x1379cb0) + 0x24) = 1;
    return uVar1;
  }
  if (*(int *)(REFG(undefined4, 0x1379cb0) + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(REFG(undefined4, 0x1379cb0) + 0x14) + 0x90))) = 0;
  }
  if (REFG(undefined4, 0x1379cb0) != 0) {
    uVar1 = F_005f4b50(*(undefined * PTR32 *)(REFG(undefined4, 0x1379cb0) + 0x20) GEN_EDX_ARG);
    *(undefined1 *)(REFG(undefined4, 0x1379cb0) + 0x24) = 0;
    return uVar1;
  }
  uVar1 = F_005f4b50((undefined *)0x0 GEN_EDX_ARG);
  *(undefined1 *)(REFG(undefined4, 0x1379cb0) + 0x24) = 0;
  return uVar1;
}

/* ref: FUN_005f6850 */
GEN_FRAME uint GEN_THISCALL F_005f6850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f6850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5afc));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0xc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = *(int *)((int)this + 0xc);
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(int *)((int)this + 0xc);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x15))) = 1;
  *(undefined1 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_005f68b0 */
GEN_FRAME uint GEN_THISCALL F_005f68b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f68b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0061ce70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf2 */
GEN_FRAME uint GEN_THISCALL F_005f68d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f68d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) {
    this_00 = (undefined *)(iVar1 + 0x19c);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    F_006105d0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00616e70(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  }
  if (*(int *)(this + 0xa0) != 0) {
    F_00406b30(*(int *)(this + 0xa0));
    *(undefined4 *)(this + 0xa0) = 0;
  }
  this[0xc0] = (undefined1)0x0;
  F_005f5110(this GEN_EDX_ARG);
  if (*(int *)(this + 0x34) != 0) {
    F_0050c620(*(int *)(this + 0x34),0,0);
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_00507740((undefined *)(iVar1 + 0x14c) GEN_EDX_ARG,this + 0x38);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005f69a0 */
GEN_FRAME uint GEN_THISCALL F_005f69a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f69a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0061cd90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_005f69c0 */
GEN_FRAME uint GEN_THISCALL F_005f69c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f69c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005f5370(this GEN_EDX_FWD);
  uVar1 = F_005ed860(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf8 */
GEN_FRAME byte GEN_THISCALL F_005f69e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f69e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 1;
LAB_005f6a70: ;
      F_005f5370(this GEN_EDX_ARG);
      return 1;
    }
  }
  else if (param_1 == 2) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 2;
      if ((char)param_2 != '\0') {
        *(undefined4 *)(this + 0x1c) = 3;
        *(undefined4 *)(this + 0x10) = 0;
        return 1;
      }
      F_005eb230(this GEN_EDX_ARG);
      return 1;
    }
  }
  else if (param_1 == 3) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 3;
      if ((char)param_2 != '\0') {
        *(undefined4 *)(this + 0x1c) = 1;
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x30);
        return 1;
      }
      goto LAB_005f6a70;
    }
  }
  return 0;
}

/* ref: FUN_005f6a90 */
GEN_FRAME unsigned int GEN_THISCALL F_005f6a90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5f6a90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int * piVar2;
  uint uVar3;
  
  if ((float10)*(float *)((int)param_1 + 0x10) < (float10)*(float *)((int)param_1 + 0x30)) {
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      F_005f5210(param_1 GEN_EDX_FWD);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    fVar1 = ((float)GEN_TOF(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070) +
                   (float10)*(float *)((int)param_1 + 0x10))));
    *(float *)((int)param_1 + 0x10) = fVar1;
    if ((float10)*(float *)((int)param_1 + 0x30) < (float10)fVar1) {
      *(float *)((int)param_1 + 0x10) = *(float *)((int)param_1 + 0x30);
    }
    F_005dc670(param_1 GEN_EDX_ARG,0);
    return;
  }
  if (*(int *)((int)param_1 + 0x1c) != 1) {
    F_005eb230(param_1 GEN_EDX_ARG);
  }
  piVar2 = *(int * PTR32 *)((int)param_1 + 0x54);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc4))(piVar2 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x54) + 0xc0))))(*(int * PTR32 *)((int)param_1 + 0x54) GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        F_005e98e0(*(undefined * PTR32 *)((int)param_1 + 0x54) GEN_EDX_ARG,0);
      }
    }
  }
  return;
}

/* ref: FUN_005f6b40 */
GEN_FRAME unsigned int GEN_THISCALL F_005f6b40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5f6b40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int * piVar2;
  uint uVar3;
  
  if ((!GEN_ISNAN(*(float *)((int)param_1 + 0x10)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((int)param_1 + 0x10) <= *(float *)&REFG(undefined, 0x1088114))) {
    if (*(int *)((int)param_1 + 0x1c) != 2) {
      F_005f52e0(param_1 GEN_EDX_FWD);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 2;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x10) -
                   (float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070))));
    *(float *)((int)param_1 + 0x10) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *(undefined4 *)((int)param_1 + 0x10) = 0;
    }
    F_005dc670(param_1 GEN_EDX_ARG,1);
    return;
  }
  if (*(int *)((int)param_1 + 0x1c) != 3) {
    F_005f5370(param_1 GEN_EDX_ARG);
  }
  piVar2 = *(int * PTR32 *)((int)param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc4))(piVar2 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x58) + 0xc0))))(*(int * PTR32 *)((int)param_1 + 0x58) GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        F_005e98e0(*(undefined * PTR32 *)((int)param_1 + 0x58) GEN_EDX_ARG,0);
      }
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf8 */
GEN_FRAME byte GEN_THISCALL F_005f6be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f6be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 4) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 4;
      if ((char)param_2 != '\0') {
        *(undefined4 *)(this + 0x1c) = 3;
        *(undefined4 *)(this + 0x10) = 0;
        F_005eb390(this GEN_EDX_ARG);
        return 1;
      }
      *(undefined4 *)(this + 0x1c) = 1;
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x28);
      F_005f5550(this GEN_EDX_ARG);
      F_005dcf40(this GEN_EDX_ARG);
      return 1;
    }
  }
  else if (param_1 == 5) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 5;
      if ((char)param_2 != '\0') {
        *(undefined4 *)(this + 0x1c) = 1;
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x28);
        F_005f5550(this GEN_EDX_ARG);
        return 1;
      }
      *(undefined4 *)(this + 0x1c) = 3;
      *(undefined4 *)(this + 0x10) = 0;
      F_005eb390(this GEN_EDX_ARG);
      F_005dcf40(this GEN_EDX_ARG);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f6cb0 */
GEN_FRAME uint GEN_THISCALL F_005f6cb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5f6cb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  float fVar3;
  float local_8;
  
  local_8 = REFG(float, 0x1087f04);
  if ((float10)*(float *)((int)param_1 + 0x10) < (float10)*(float *)((int)param_1 + 0x28)) {
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      F_005f5400(param_1 GEN_EDX_FWD);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    fVar3 = ((float)GEN_TOF(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070) +
                   (float10)*(float *)((int)param_1 + 0x10))));
    *(float *)((int)param_1 + 0x10) = fVar3;
    fVar2 = (float10)*(float *)((int)param_1 + 0x28);
    if (fVar2 < (float10)fVar3) {
      *(float *)((int)param_1 + 0x10) = *(float *)((int)param_1 + 0x28);
    }
    local_8 = ((float)GEN_TOF((((float10)1 / fVar2) * (float10)*(float *)((int)param_1 + 0x10))));
  }
  else {
    if (*(int *)((int)param_1 + 0x1c) != 1) {
      F_005f5550(param_1 GEN_EDX_ARG);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 1;
  }
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070)) *
                                   ((float10)*(float *)&REFG(undefined, 0x131f3dc) /
                                   (float10)*(float *)((int)param_1 + 0x24))) * (float10)local_8))) *
                 (float10)*(float *)((int)param_1 + 0x14))));
  if (*(char *)((int)param_1 + 0x34) == '\0') {
    fVar3 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ REFG(uint, 0x10920d0));
  }
  *(float *)((int)param_1 + 0x30) = fVar3;
  uVar1 = F_005dcd90(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_005f6d80 */
GEN_FRAME uint GEN_THISCALL F_005f6d80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5f6d80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  float10 fVar2;
  uint uVar3;
  float fVar4;
  
  if ((!GEN_ISNAN(*(float *)((int)param_1 + 0x10)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((int)param_1 + 0x10) <= *(float *)&REFG(undefined, 0x1088114))) {
    if (*(int *)((int)param_1 + 0x1c) != 2) {
      F_005f5690(param_1 GEN_EDX_FWD);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 2;
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088070);
    fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x10) - (float10)param_2 * fVar2)));
    *(float *)((int)param_1 + 0x10) = fVar4;
    if ((float10)fVar4 < (float10)0) {
      *(undefined4 *)((int)param_1 + 0x10) = 0;
    }
    fVar4 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((((float10)*(float *)&REFG(undefined, 0x131f3dc) /
                                      (float10)*(float *)((int)param_1 + 0x24)) *
                                     ((float10)param_2 * fVar2)) *
                                    (float10)((float)GEN_TOF((((float10)1 /
                                                     (float10)*(float *)((int)param_1 + 0x28)) *
                                                    (float10)*(float *)((int)param_1 + 0x10))))))) *
                   (float10)*(float *)((int)param_1 + 0x14))));
    if (*(char *)((int)param_1 + 0x34) == '\0') {
      fVar4 = gen_bits2f((uint)gen_fl2bits(fVar4) ^ REFG(uint, 0x10920d0));
    }
    *(float *)((int)param_1 + 0x30) = fVar4;
    uVar3 = F_005dcd90(param_1 GEN_EDX_ARG);
    return uVar3;
  }
  if (*(int *)((int)param_1 + 0x1c) != 3) {
    F_005eb390(param_1 GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x4c);
  *(undefined4 *)((int)param_1 + 0x1c) = 3;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc4))(piVar1 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x4c) + 0xc0))))(*(int * PTR32 *)((int)param_1 + 0x4c) GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        F_005e98e0(*(undefined * PTR32 *)((int)param_1 + 0x4c) GEN_EDX_ARG,0);
      }
    }
  }
  uVar3 = F_005dcd90(param_1 GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_005f6e80 */
GEN_FRAME uint GEN_THISCALL F_005f6e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(ushort *)((int)this + 0x18) = *(ushort *)((int)this + 0x18) & 0xc000;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5b04));
  *(byte *)((int)this + 0x16) = *(byte *)((int)this + 0x16) & 0xfd | 1;
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar1 = F_004296a0(0x18,0,0x385);
  *(uint *)((int)this + 0x20) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 4))) = *(int *)((int)this + 0x20);
  *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 8))) = *(int *)((int)this + 0x20);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_005f6f00 */
GEN_NOFRAME uint GEN_THISCALL F_005f6f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f6f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005df720(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a5b24));
  *(undefined4 *)((int)this + 0x70) = 1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_005f6f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f6f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(this + 0x7c) != *(int *)(this + 0x80)) {
    *(int *)(this + 0x80) = *(int *)(this + 0x7c);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = 0;
  *(int *)(this + 0x74) = iVar2;
  if (0 < iVar2) {
    (*(int *)(gen_frame + 0x3c)) = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x34) + (*(int *)(gen_frame + 0x3c));
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar2 + 0x34 + param_1);
      (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar2 + 0x38 + param_1);
      (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar2 + 0x3c + param_1);
      F_0061cf20(this + 0x7c GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x30)));
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x74));
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
  *(float *)(this + 0x78) =
       ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0x20) * (float10)*(float *)(param_1 + 0x3c))));
  return uVar1;
}

/* ref: FUN_005f7060 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f7060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f7060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int * piVar13;
  int iVar14;
  undefined4 * this_00;
  undefined4 * puVar15;
  
  iVar14 = *(int *)((int)this + 8);
  if (iVar14 == 0) {
    iVar14 = *(int *)(REFG(int, 0x1379cb0) + 0x10);
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0xffff;
    piVar13 = (int *)F_00619470((undefined *)(iVar14 + 0x10c) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    if (*piVar13 == *(int *)(iVar14 + 0x110)) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(*piVar13 + 0x10);
    }
  }
  (*(undefined2 *)(gen_frame + 0x2)) = *(undefined2 *)(iVar14 + 8);
  uVar7 = *(undefined4 *)((int)this + 0x14);
  (*(ushort *)(gen_frame + 0x0)) = ((ushort)*(byte *)((int)this + 0x11) << 6 | (ushort)param_2 & 0x3f) * 4 | 2;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar7;
  this_00 = (undefined4 *)F_00406b90(0x80,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_005db190(this_00 GEN_EDX_ARG);
    *this_00 = (*(undefined * PTR32 (*)[68])REFP(0x10a550c));
    this_00[0x1c] = 0;
  }
  F_005f4070(this_00 GEN_EDX_ARG,this,&(*(ushort *)(gen_frame + 0x0)),param_1);
  puVar15 = (undefined4 *)F_00406b90(0x50,0,0);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    puVar15[4] = this_00;
    *puVar15 = (*(undefined * PTR32 (*)[1])REFP(0x10a2bac));
    puVar15[8] = GEN_FLT_TO(puVar15[8], REFG(float, 0x1302df0));
    puVar15[9] = GEN_FLT_TO(puVar15[9], REFG(float, 0x1302df4));
    puVar15[10] = GEN_FLT_TO(puVar15[10], REFG(float, 0x1302df8));
    puVar15[0xc] = REFG(undefined4, 0x1302e00);
    puVar15[0xd] = REFG(undefined4, 0x1302e04);
    puVar15[0xe] = REFG(undefined4, 0x1302e08);
    puVar15[0xf] = REFG(undefined4, 0x1302e0c);
    puVar15[0x10] = GEN_FLT_TO(puVar15[0x10], REFG(float, 0x1302e10));
    puVar15[0x11] = GEN_FLT_TO(puVar15[0x11], REFG(float, 0x1302e14));
    puVar15[0x12] = GEN_FLT_TO(puVar15[0x12], REFG(float, 0x1302e18));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar15;
  F_0061ce70((undefined *)((int)this + 0xa0) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  uVar12 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e18)));
  uVar11 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e14)));
  uVar10 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e10)));
  uVar9 = REFG(undefined4, 0x1302e0c);
  uVar8 = REFG(undefined4, 0x1302e08);
  uVar7 = REFG(undefined4, 0x1302e04);
  fVar1 = *param_1;
  fVar2 = *(float *)((int)this + 0x40);
  fVar3 = param_1[1];
  fVar4 = *(float *)((int)this + 0x44);
  fVar5 = param_1[2];
  fVar6 = *(float *)((int)this + 0x48);
  puVar15[0xc] = REFG(undefined4, 0x1302e00);
  puVar15[0xd] = uVar7;
  puVar15[0xe] = uVar8;
  puVar15[8] = (undefined4)gen_fl2bits((float)((float10)fVar1 - (float10)fVar2));
  puVar15[0xf] = uVar9;
  puVar15[9] = (undefined4)gen_fl2bits((float)((float10)fVar3 - (float10)fVar4));
  puVar15[10] = (undefined4)gen_fl2bits((float)((float10)fVar5 - (float10)fVar6));
  puVar15[0x10] = uVar10;
  puVar15[0x11] = uVar11;
  puVar15[0x12] = uVar12;
  return 0;
}

/* ref: FUN_005f7260 */
GEN_FRAME uint GEN_THISCALL F_005f7260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f7260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c38));
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x20), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x24) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x24), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x28) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x28), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0x34) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x34) + 4))) = *(int *)((int)this + 0x34);
  *((int *)GEN_TOP((*(int *)((int)this + 0x34) + 8))) = *(int *)((int)this + 0x34);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_005f72f0 */
GEN_FRAME byte GEN_THISCALL F_005f72f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f72f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 uVar1;
  undefined * pvVar2;
  byte bVar3;
  
  pvVar2 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  if (bVar3 == 0) {
    uVar1 = *(undefined1 *)((int)pvVar2 + 0x11);
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(CONCAT13(uVar1,GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[1]), 0, 3))));
    F_00614c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
      bVar3 = F_005f5c90(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG,pvVar2,(*(undefined4 *)&gen_args[2]));
      return bVar3;
    }
  }
  return 0;
}

/* ref: FUN_005f7350 */
GEN_FRAME unsigned int GEN_THISCALL F_005f7350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5f7350u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  short * param_6 = (short *)(uintptr_t)gen_a5;
  byte * param_7 = (byte *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  
  fVar1 = param_3[2];
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = param_1;
  *param_6 = (short)(int)*param_3 >> ((byte)param_6[3] & 0x1f);
  param_6[1] = (short)(int)fVar1 >> ((byte)param_6[3] & 0x1f);
  if (!(param_4 <= 0.0)) {
    iVar12 = *(int *)(param_1 + 0x18);
    uVar6 = gen_x87_cw | 0xc00;
    ((byte *)(gen_frame + 0x8))[0xc] = (char)uVar6;
    ((byte *)(gen_frame + 0x8))[0xd] = (char)(uVar6 >> 8);
    ((byte *)(gen_frame + 0x8))[0xe] = (char)(uVar6 >> 0x10);
    ((byte *)(gen_frame + 0x8))[0xf] = (char)(uVar6 >> 0x18);
    lVar2 = (longlong)TRUNC((float10)param_4);
    ((byte *)(gen_frame + 0x8))[0] = (char)lVar2;
    ((byte *)(gen_frame + 0x8))[1] = (char)((ulonglong)lVar2 >> 8);
    ((byte *)(gen_frame + 0x8))[2] = (char)((ulonglong)lVar2 >> 0x10);
    ((byte *)(gen_frame + 0x8))[3] = (char)((ulonglong)lVar2 >> 0x18);
    ((byte *)(gen_frame + 0x8))[4] = (char)((ulonglong)lVar2 >> 0x20);
    ((byte *)(gen_frame + 0x8))[5] = (char)((ulonglong)lVar2 >> 0x28);
    ((byte *)(gen_frame + 0x8))[6] = (char)((ulonglong)lVar2 >> 0x30);
    ((byte *)(gen_frame + 0x8))[7] = (char)((ulonglong)lVar2 >> 0x38);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (undefined4)lVar2;
    bVar4 = (byte)(((iVar12 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + param_5) * 2 - 2) / param_5);
    uVar6 = (uint)(bVar4 >> 1);
    iVar10 = -uVar6;
    *param_7 = bVar4 | 1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = iVar10;
    iVar12 = iVar10;
    if (-uVar6 == uVar6 || SBORROW4(iVar10,uVar6) != (int)(uVar6 * -2) < 0) {
      do {
        if (iVar12 <= (int)uVar6) {
          uVar13 = (ushort)param_5;
          ((byte *)(gen_frame + 0x8))[4] = (char)uVar13;
          ((byte *)(gen_frame + 0x8))[5] = (char)(uVar13 >> 8);
          (*(undefined8 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (ulonglong)uVar13 << 0x20;
          iVar11 = iVar12;
          do {
            uVar3 = (*(undefined8 *)((char *)((byte *)(gen_frame + 0x8)) + 0));
            sVar8 = param_6[1] + (short)iVar10;
            sVar5 = *param_6 + (short)iVar11;
            sVar9 = 0;
            ((byte *)(gen_frame + 0x8))[0] = 0;
            ((byte *)(gen_frame + 0x8))[1] = 0;
            ((byte *)(gen_frame + 0x8))[2] = 0;
            ((byte *)(gen_frame + 0x8))[3] = 0;
            ((byte *)(gen_frame + 0x8))[6] = 0;
            ((byte *)(gen_frame + 0x8))[7] = 0;
            (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = SUB84(uVar3,4) & 0xffff;
            uVar7 = param_5;
            if (1 < param_5) {
              do {
                uVar7 = uVar7 >> 1;
                sVar9 = sVar9 + 1;
              } while (1 < uVar7);
              (*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 6)) = sVar9;
              (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = (undefined4)(CONCAT26(sVar9,(int6)uVar3) >> 0x20);
            }
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 2)) = sVar8;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = sVar5;
            F_005f5d20((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) GEN_EDX_FWD,param_2,((byte *)(gen_frame + 0x8)),param_3,param_4);
            iVar11 = iVar11 + 1;
            iVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
          } while (iVar11 <= (int)uVar6);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 <= (int)uVar6);
    }
  }
  return 0;
}

/* ref: FUN_005f7470 */
GEN_FRAME byte GEN_THISCALL F_005f7470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f7470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) == (undefined *)0x0) {
    return 0;
  }
  bVar1 = F_005f6560(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_005f7490 */
GEN_FRAME unsigned int GEN_THISCALL F_005f7490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f7490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005f65c0(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1,param_2,param_3);
    return;
  }
  return;
}

/* ref: FUN_005f74b0 */
GEN_FRAME uint GEN_THISCALL F_005f74b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f74b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c54));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0x101;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x56) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 1;
  *(undefined4 *)((int)this + 0x60) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x60), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 100) = GEN_FLT_TO(*(undefined4 *)((int)this + 100), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x68) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x68), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x70) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x70), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x74) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x74), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x78) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x78), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x80) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x80), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x84) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x84), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x88) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x88), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 5;
  *(undefined1 *)((int)this + 0xa8) = 0xff;
  *(undefined4 *)((int)this + 0xac) = 5000;
  *(undefined4 *)((int)this + 0xb0) = 0x10100;
  *(undefined2 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0xb6) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  F_005077a0((int)this + 0xc4 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0x100) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x100) + 4))) = *(int *)((int)this + 0x100);
  *((int *)GEN_TOP((*(int *)((int)this + 0x100) + 8))) = *(int *)((int)this + 0x100);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x100) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x100) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x114) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0x110) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x110) + 4))) = *(int *)((int)this + 0x110);
  *((int *)GEN_TOP((*(int *)((int)this + 0x110) + 8))) = *(int *)((int)this + 0x110);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x110) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x110) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  uVar1 = F_004296a0(0x18,0,0x385);
  *(uint *)((int)this + 0x140) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x140) + 4))) = *(int *)((int)this + 0x140);
  *((int *)GEN_TOP((*(int *)((int)this + 0x140) + 8))) = *(int *)((int)this + 0x140);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x140) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x140) + 0x15))) = 1;
  F_0050b680((undefined *)((int)this + 0x14c) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x164) = 0;
  uVar1 = F_004296a0(0xa0,0,0x385);
  *(uint *)((int)this + 0x160) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x160) + 4))) = *(int *)((int)this + 0x160);
  *((int *)GEN_TOP((*(int *)((int)this + 0x160) + 8))) = *(int *)((int)this + 0x160);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x160) + 0x90))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x160) + 0x91))) = 1;
  *(undefined4 *)((int)this + 0x174) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0x170) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x170) + 4))) = *(int *)((int)this + 0x170);
  *((int *)GEN_TOP((*(int *)((int)this + 0x170) + 8))) = *(int *)((int)this + 0x170);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x170) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x170) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x184) = 0;
  uVar1 = F_004296a0(0x1c,0,900);
  *(uint *)((int)this + 0x180) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 4))) = *(int *)((int)this + 0x180);
  *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 8))) = *(int *)((int)this + 0x180);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x19))) = 1;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 0x1a0) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1a0) + 4))) = *(int *)((int)this + 0x1a0);
  *((int *)GEN_TOP((*(int *)((int)this + 0x1a0) + 8))) = *(int *)((int)this + 0x1a0);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  F_00c48350((undefined *)((int)this + 0x1b4),0,900);
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined4 *)((int)this + 0x544) = 0;
  this_00 = (undefined *)F_00406b90(0x40,0,0);
  if (this_00 == (undefined *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)F_005f7260(this_00 GEN_EDX_ARG,this);
  }
  *(int * PTR32 *)((int)this + 0x44) = piVar2;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  puVar3 = (undefined4 *)F_00406b90(0x1c,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10a5afc));
    puVar3[1] = this;
    puVar3[4] = 0;
    uVar1 = F_004296a0(0x18,0,900);
    puVar3[3] = uVar1;
    *(uint *)uVar1 = uVar1;
    *(undefined4 *)(puVar3[3] + 4) = puVar3[3];
    *(undefined4 *)(puVar3[3] + 8) = puVar3[3];
    *(undefined1 *)(puVar3[3] + 0x14) = 1;
    *(undefined1 *)(puVar3[3] + 0x15) = 1;
    *(undefined1 *)(puVar3 + 6) = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x4c) = puVar3;
  puVar3 = (undefined4 *)F_00406b90(0x14,0,0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = this;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10a2ba4));
    *(undefined4 * PTR32 *)((int)this + 0x48) = puVar3;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  return (uint)this;
}

/* ref: FUN_005f7940 */
GEN_FRAME uint GEN_THISCALL F_005f7940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f7940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(char *)((int)this + 0x56) != '\0') && (*(int *)((int)this + 0x58) != 0)) {
    uVar5 = 0;
    uVar3 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
    if (uVar3 != 0) {
      do {
        uVar4 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar5 * 4))));
        uVar4 = F_005d9950((uint)*(byte *)((int)this + 0x56),0,*(undefined4 *)((int)this + 0x58),
                             uVar4);
        if (uVar4 != 0) {
          uVar1 = *(undefined4 *)(uVar4 + 0x10);
          uVar2 = *(undefined4 *)(uVar4 + 0x14);
          *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(uVar4 + 0xc);
          *(undefined4 *)((int)this + 100) = uVar1;
          *(undefined4 *)((int)this + 0x68) = uVar2;
          if (*(char *)((int)this + 0x52) == '\0') {
            *(undefined4 *)((int)this + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x10)));
          }
          this_00 = *(undefined * PTR32 *)((int)this + 0x44);
          *(undefined1 *)((int)this + 0x52) = 1;
          *(undefined4 *)((int)this_00 + 0x10) = 0;
          F_005ee3d0(this_00 GEN_EDX_ARG,1);
          F_005ebe80(this_00 GEN_EDX_ARG);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
  }
  uVar4 = 0;
  uVar5 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
  uVar3 = 0;
  if (uVar5 != 0) {
    do {
      uVar3 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar4 * 4))));
      uVar3 = F_005f6340(this GEN_EDX_ARG,uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  *(undefined4 *)((int)this + 0x10) = 4;
  return uVar3;
}

/* ref: FUN_005f7a50 */
GEN_FRAME uint GEN_THISCALL F_005f7a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f7a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  
  ((int *)(gen_frame + 0x4))[1] = 0xffff;
  uVar1 = F_00619470((undefined *)((int)this + 0x10c) GEN_EDX_FWD,((int *)(gen_frame + 0x4)),((int *)(gen_frame + 0x4)) + 1);
  if (((int *)(gen_frame + 0x4))[0] == *(int *)((int)this + 0x110)) {
    this_00 = (undefined *)F_00406b90(0x2c,0,0);
    if (this_00 == (undefined *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)F_005f6e80(this_00 GEN_EDX_ARG,this);
    }
    puVar3 = (undefined4 *)F_004296a0(0x18,0,900);
    *puVar3 = *(undefined4 *)((int)this + 0x110);
    puVar3[1] = *(undefined4 *)((int)this + 0x110);
    puVar3[2] = *(undefined4 *)((int)this + 0x110);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      *(undefined2 *)(puVar3 + 3) = 0xffff;
      puVar3[4] = piVar2;
    }
    F_006180b0((undefined *)((int)this + 0x10c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_005f7b00 */
GEN_FRAME byte GEN_THISCALL F_005f7b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f7b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 * puVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  (*(undefined1 *)(gen_frame + 0xb)) = uVar1;
  F_00619550((undefined *)((int)this + 0x13c) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int *)(gen_frame + 0x4)) == *(int *)((int)this + 0x140)) {
    this_00 = (undefined *)F_00406b90(0x10,0,0);
    if (this_00 == (undefined *)0x0) {
      this_00 = (undefined *)0x0;
    }
    else {
      *(undefined4 *)((int)this_00 + 8) = 0;
      uVar4 = F_004296a0(0x28,0,0x385);
      *(uint *)((int)this_00 + 4) = uVar4;
      *(uint *)uVar4 = uVar4;
      *((int *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))) = *(int *)((int)this_00 + 4);
      *((int *)GEN_TOP((*(int *)((int)this_00 + 4) + 8))) = *(int *)((int)this_00 + 4);
      *((undefined1 *)GEN_TOP((*(int *)((int)this_00 + 4) + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this_00 + 4) + 0x21))) = 1;
    }
    puVar5 = (undefined4 *)F_004296a0(0x18,0,0x385);
    *puVar5 = *(undefined4 *)((int)this + 0x140);
    puVar5[1] = *(undefined4 *)((int)this + 0x140);
    puVar5[2] = *(undefined4 *)((int)this + 0x140);
    *(undefined2 *)(puVar5 + 5) = 0;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar5 + 3) = uVar1;
      puVar5[4] = this_00;
    }
    F_00618190((undefined *)((int)this + 0x13c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar5,0);
  }
  else {
    this_00 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar5 = (undefined4 *)F_004296a0(0x28,0,0x385);
  *puVar5 = *(undefined4 *)((int)this_00 + 4);
  puVar5[1] = *(undefined4 *)((int)this_00 + 4);
  puVar5[2] = *(undefined4 *)((int)this_00 + 4);
  *(undefined2 *)(puVar5 + 8) = 0;
  if (puVar5 + 4 != (undefined4 *)0x0) {
    puVar5[4] = uVar3;
    puVar5[5] = uVar2;
    puVar5[6] = param_1;
  }
  F_006186d0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar5,0);
  return 1;
}

/* ref: FUN_005f7c40 */
GEN_FRAME uint GEN_THISCALL F_005f7c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f7c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0061d520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_005f7c60 */
GEN_FRAME uint GEN_THISCALL F_005f7c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f7c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  ushort * puVar4;
  int local_8;
  
  iVar3 = 0;
  puVar4 = (ushort *)((int)this + 0x1ca);
  local_8 = 0x4a;
  do {
    uVar1 = (uint)*puVar4;
    if (*puVar4 == 0) goto LAB_005f7e2d;
    switch((unsigned int)(uintptr_t)(iVar3)) {
    case 0: ;
      uVar1 = F_0060c450(uVar1);
      *(uint *)(puVar4 - 5) = uVar1;
      piVar2 = (int *)F_00603eb0((uint)*puVar4);
      *(int * PTR32 *)((int)this + 0x540) = piVar2;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
      *(uint *)((int)this + 0x538) = uVar1;
    default: ;
      goto switchD_005f7c9c_caseD_1;
    case 2: ;
      uVar1 = F_00603f40(uVar1);
      *(uint *)(puVar4 - 5) = uVar1;
      piVar2 = (int *)F_00604040((uint)*puVar4);
      *(int * PTR32 *)((int)this + 0x544) = piVar2;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
      *(uint *)((int)this + 0x53c) = uVar1;
      goto switchD_005f7c9c_caseD_1;
    case 3: ;
      uVar1 = F_0060c630(uVar1);
      break;
    case 4: ;
      uVar1 = F_00604350(uVar1);
      break;
    case 5: ;
    case 0xe: ;
      uVar1 = F_0061c320(uVar1);
      break;
    case 6: ;
      uVar1 = F_0061afa0(uVar1);
      break;
    case 7: ;
      uVar1 = F_0060c530(uVar1);
      break;
    case 8: ;
      uVar1 = F_0060c5b0(uVar1);
      break;
    case 0xb: ;
      uVar1 = F_0060c7d0(uVar1);
      break;
    case 0xc: ;
      uVar1 = F_00604190(uVar1);
      break;
    case 0xd: ;
      uVar1 = F_0060c8d0(uVar1);
      break;
    case 0xf: ;
      uVar1 = F_0060c850(uVar1);
      break;
    case 0x26: ;
      uVar1 = F_006040b0(uVar1);
      break;
    case 0x27: ;
      uVar1 = F_0061d660(uVar1);
      break;
    case 0x28: ;
      uVar1 = F_0060c9d0(uVar1);
      break;
    case 0x2a: ;
      uVar1 = F_0060cb00(uVar1);
      break;
    case 0x2b: ;
      uVar1 = F_0060cbc0(uVar1);
      break;
    case 0x2c: ;
      uVar1 = F_0060c950(uVar1);
      break;
    case 0x2e: ;
      uVar1 = F_00604270(uVar1);
      break;
    case 0x30: ;
      uVar1 = F_0060cc40(uVar1);
      break;
    case 0x32: ;
      uVar1 = F_006043d0(uVar1);
      break;
    case 0x38: ;
      uVar1 = F_0060cd50(uVar1);
      break;
    case 0x39: ;
      uVar1 = F_0060ce00(uVar1);
      break;
    case 0x3a: ;
      uVar1 = F_0060ccc0(uVar1);
      break;
    case 0x40: ;
      uVar1 = F_0060d030(uVar1);
      break;
    case 0x41: ;
      uVar1 = F_0060d0b0(uVar1);
      break;
    case 0x42: ;
      uVar1 = F_0060ce80(uVar1);
      break;
    case 0x43: ;
      uVar1 = F_00604450(uVar1);
      break;
    case 0x44: ;
      uVar1 = F_006044d0(uVar1);
      break;
    case 0x45: ;
      uVar1 = F_0060cf30(uVar1);
      break;
    case 0x46: ;
      uVar1 = F_0060ca80(uVar1);
      break;
    case 0x47: ;
      uVar1 = F_0060cfb0(uVar1);
    }
    *(uint *)(puVar4 - 5) = uVar1;
switchD_005f7c9c_caseD_1: ;
    piVar2 = *(int * PTR32 *)(puVar4 - 5);
    if (piVar2 != (int *)0x0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
      *(uint *)(puVar4 - 3) = uVar1;
    }
LAB_005f7e2d: ;
    puVar4 = puVar4 + 6;
    iVar3 = iVar3 + 1;
    local_8 = local_8 - 1;
    if (local_8 == 0) {
      return uVar1;
    }
  } while( true );
}

/* ref: FUN_005f7f10 */
GEN_FRAME uint F_005f7f10(unsigned int gen_a0)
{
  GEN_ENTER(0x5f7f10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3] GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4) GEN_EDX_ARG,0x28);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  this = (undefined *)F_00406b90(0x90,0,0);
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_005f6f00(this GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005f7fc0 */
GEN_FRAME byte GEN_THISCALL F_005f7fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f7fc0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_004ff470(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,(*(uint * PTR32 *)&gen_args[2]),0,0);
  F_00615e50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x4)) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
    puVar1 = (uint *)F_00406b90(0x18,0,0);
    if (puVar1 == (uint *)0x0) {
      (*(uint * PTR32 *)&gen_args[2]) = (uint *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar2 = F_00513dc0((*(uint * PTR32 *)&gen_args[2]),0,0,0);
      *puVar1 = uVar2;
      (*(uint * PTR32 *)&gen_args[2]) = puVar1;
    }
    puVar3 = (undefined4 *)F_004296a0(0x18,0,900);
    *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined4 *)(gen_frame + 0x8));
      puVar3[4] = (*(uint * PTR32 *)&gen_args[2]);
    }
    F_006185f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 1;
  }
  else {
    (*(uint * PTR32 *)&gen_args[2]) = *(uint * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  }
  F_0061d590((*(uint * PTR32 *)&gen_args[2]) + 1 GEN_EDX_ARG,&(*(int *)&gen_args[1]));
  *(byte *)((*(int *)&gen_args[1]) + 0x2b) = *(byte *)((*(int *)&gen_args[1]) + 0x2b) | 1;
  return 1;
}

/* ref: FUN_005f80b0 */
GEN_FRAME byte GEN_THISCALL F_005f80b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f80b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  char * pcVar4;
  undefined * this_00;
  uint in_ecx;
  undefined4 * PTR32 * PTR32 * pppuVar5;
  
  ppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar2 & 0xffffff00);
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_1,(int)pcVar4 - (int)(param_1 + 1));
  F_004e5a40(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,"/bgplate/terrain.tera",0x15);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x1b0,0x10)));
  if (this_00 == (undefined *)0x0) {
    in_ecx = 0;
  }
  else {
    in_ecx = F_006946f0(this_00 GEN_EDX_ARG);
  }
  *(uint *)((int)this + 0x10) = in_ecx;
  bVar3 = F_00694790(in_ecx GEN_EDX_ARG);
  if (bVar3 != 0) {
    F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10));
    F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10));
    F_00690620(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    F_004ff300(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
    pppuVar5 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      pppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    F_00694870(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),pppuVar5,
                 (*((char *)GEN_TOP((*(int *)((int)this + 4) + 0x53))) != '\0') + 5,param_2);
    if (0xf < (*(uint *)(gen_frame + 0x20))) {
      F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
    }
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_005f81f0 */
GEN_FRAME uint GEN_THISCALL F_005f81f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f81f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  char * pcVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar4;
  uint uVar5;
  ulonglong uVar6;
  
  pppppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  iVar2 = REFG(int, 0x137104c);
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar4 & 0xffffff00);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_1,(int)pcVar3 - (int)(param_1 + 1));
  F_004e5a40(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,"/collision/list.pcb",0x13);
  pppppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
    pppppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  uVar5 = F_00551b20(*(undefined * PTR32 *)(iVar2 + 0x25e0) GEN_EDX_ARG,pppppppuVar4,1);
  *(uint *)((int)this + 0x14) = uVar5;
  uVar5 = (*(uint *)(gen_frame + 0x20));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    uVar6 = F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
    uVar5 = (uint)uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_005f82b0 */
GEN_FRAME unsigned int GEN_THISCALL F_005f82b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f82b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  bool bVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0xa4) != 0) {
    if (*(int *)((int)this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    if (((*(char *)(iVar2 + 0x55) == '\0') && (*param_1 != 0)) && (*param_1 != 2)) {
      bVar5 = false;
      if (*(int *)((int)this + 0x9c) == 0) {
        pvVar3 = (undefined *)F_00406b90(0xd0,0,0);
        if (pvVar3 == (undefined *)0x0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = (undefined *)F_005dd040(pvVar3 GEN_EDX_ARG,this);
        }
        *(undefined * PTR32 *)((int)this + 0x9c) = pvVar3;
        if ((*(int *)((int)this + 8) != 0) &&
           (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), iVar2 != 0)) {
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar3;
          F_0061d520((undefined *)(iVar2 + 0x18c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
        }
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
        F_00607a80(pvVar3 GEN_EDX_ARG,uVar4);
        bVar5 = (char)param_1[1] != '\0';
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x9c);
      if (((piVar1 != (int *)0x0) &&
          (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG), (char)uVar4 != '\0')) &&
         (F_005eb510(*(undefined4 *)((int)this + 0x9c) GEN_EDX_ARG,(uint)param_1), bVar5)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x20))))(*(int * PTR32 *)((int)this + 0x9c) GEN_EDX_ARG,8,0);
      }
    }
  }
  return;
}

/* ref: FUN_005f83b0 */
GEN_FRAME uint GEN_THISCALL F_005f83b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f83b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  uint * puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  
  *(byte *)((int)this + 0xac) = *(byte *)((int)this + 0xac) & 0xfb;
  piVar6 = param_1;
  if ((param_1[1] != 0) && ((*(byte *)((int)this + 0x20) & 1) == 0)) {
    uVar5 = F_00b61cc0(this);
    *(uint *)((int)this + 0x3c) = uVar5;
    piVar6 = (int *)0x0;
    if (uVar5 != 0) {
      uVar5 = *(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2;
      uVar8 = 0;
      if (uVar5 != 0) {
        do {
          F_00b7cce0(*(undefined * PTR32 *)((int)this + 0x3c) GEN_EDX_ARG,
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + uVar8 * 4))) + 0x10))));
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
      iVar7 = *(int *)((int)this + 8);
      if (iVar7 == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = *(undefined * PTR32 *)(iVar7 + 4);
      }
      (*(int *)(gen_frame + 0x18)) = iVar7;
      if (iVar7 == 0) {
        pvVar1 = *(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10);
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar1;
        (*(int *)(gen_frame + 0x18)) = 0xffff;
        piVar6 = (int *)F_00619470((undefined *)((int)pvVar1 + 0x10c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x18)));
        if (*piVar6 == *(int *)((int)pvVar1 + 0x110)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*piVar6 + 0x10);
        }
        (*(int *)(gen_frame + 0x18)) = iVar7;
      }
      iVar7 = param_1[1];
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x14);
      (*(int *)(gen_frame + 0x8)) = iVar7;
      F_0061ba50((undefined *)((int)this + 0x8c) GEN_EDX_ARG,iVar7);
      piVar6 = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
      if (0 < iVar7) {
        (*(int *)(gen_frame + 0x1c)) = 0;
        do {
          piVar6 = (int *)(*param_1 + (*(int *)(gen_frame + 0x1c)) + (int)param_1);
          if (*((char *)GEN_TOP(((int)piVar6 + *(int *)(*param_1 + (*(int *)(gen_frame + 0x1c)) + 0x10 + (int)param_1)))) == '\0')
          {
            *(byte *)((int)this + 0xac) = *(byte *)((int)this + 0xac) | 4;
          }
          cVar3 = (*(byte *)((int)this + 0x28) >> 4) + 1;
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = cVar3;
          (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),cVar3);
          uVar5 = F_005f0030((*(int *)(gen_frame + 0x18)),this,(*(undefined4 *)(gen_frame + 0x10)),
                               *piVar6 << (('\x04' - cVar3) * '\b' & 0x1fU) |
                               *(uint *)((int)this + 0x18),(*(undefined4 *)(gen_frame + 0x14)),(*(int * PTR32 *)(gen_frame + 0x20)),piVar6,
                               *(undefined4 *)((int)this + 0x3c));
          *(byte *)(uVar5 + 0x20) =
               *(byte *)(uVar5 + 0x20) ^ (*(byte *)(uVar5 + 0x20) ^ *(byte *)((int)this + 0x20)) & 1
          ;
          puVar2 = *(uint * PTR32 *)((int)this + 0x90);
          (*(uint *)(gen_frame + 0x28)) = uVar5;
          if ((&(*(uint *)(gen_frame + 0x28)) < puVar2) && (*(uint * PTR32 *)((int)this + 0x8c) <= &(*(uint *)(gen_frame + 0x28)))) {
            (*(int *)(gen_frame + 0xc)) = (int)&(*(uint *)(gen_frame + 0x28)) - (int)*(uint * PTR32 *)((int)this + 0x8c) >> 2;
            if (puVar2 == *(uint * PTR32 *)((int)this + 0x94)) {
              F_0061bef0((undefined *)((int)this + 0x8c) GEN_EDX_ARG,1);
            }
            if (*(undefined4 * PTR32 *)((int)this + 0x90) != (undefined4 *)0x0) {
              **(undefined4 * PTR32 *)((int)this + 0x90) =
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + (*(int *)(gen_frame + 0xc)) * 4)));
            }
          }
          else {
            if (puVar2 == *(uint * PTR32 *)((int)this + 0x94)) {
              F_0061bef0((undefined *)((int)this + 0x8c) GEN_EDX_ARG,1);
            }
            if (*(uint * PTR32 *)((int)this + 0x90) != (uint *)0x0) {
              **(uint * PTR32 *)((int)this + 0x90) = uVar5;
            }
          }
          *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + 4;
          bVar4 = F_005d6770(this GEN_EDX_ARG);
          if (bVar4 != 0) {
            F_005f7b00((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar5);
          }
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 0x2c;
          piVar6 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x20)) + 1);
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar6;
        } while ((int)piVar6 < (*(int *)(gen_frame + 0x8)));
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_005f85c0 */
GEN_FRAME uint GEN_THISCALL F_005f85c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f85c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  int * piVar4;
  char * pcVar5;
  char * pcVar6;
  char * pcVar7;
  int iVar8;
  
  pcVar5 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(char * PTR32 *)&gen_args[1]) + 0x28))) + (int)(*(char * PTR32 *)&gen_args[1]))));
  pcVar6 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(char * PTR32 *)&gen_args[1]) + 0x24))) + (int)(*(char * PTR32 *)&gen_args[1]))));
  pcVar7 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(char * PTR32 *)&gen_args[1]) + 0x1c))) + (int)(*(char * PTR32 *)&gen_args[1]))));
  uVar2 = (uint)*pcVar6;
  iVar8 = (int)*pcVar5 + uVar2 + (int)*pcVar7;
  if ((iVar8 != 0) &&
     (((piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))), (*(char * PTR32 *)&gen_args[1]) = pcVar6, piVar3 == (int *)0x0 ||
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_FWD), (char)uVar2 == '\0')) && (iVar8 == 1)))) {
    if (*pcVar7 != '\0') {
      this_00 = (undefined *)F_00406b90(0xb4,0,0);
      if (this_00 == (undefined *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)F_005dc450(this_00 GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,pcVar7);
      iVar8 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) << 0x14) >> 0x18;
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) = piVar3;
      if (iVar8 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3 GEN_EDX_ARG,iVar8,0);
      }
    }
    if (*(*(char * PTR32 *)&gen_args[1]) != '\0') {
      piVar4 = (int *)F_00406b90(0x80,0,0);
      iVar8 = (int)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      piVar3 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[1] = (int)(*(undefined * PTR32 *)&gen_args[0]);
        piVar4[4] = 0;
        piVar4[5] = iVar8;
        piVar4[6] = 0;
        *piVar4 = (int)(*(undefined * PTR32 (*)[10])REFP(0x10a2be0));
        piVar3 = piVar4;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG,(*(char * PTR32 *)&gen_args[1]));
      iVar8 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) << 0xc) >> 0x18;
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) = piVar3;
      if (iVar8 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3 GEN_EDX_ARG,iVar8,0);
      }
    }
    if (*pcVar5 != '\0') {
      piVar4 = (int *)F_00406b90(0x78,0,0);
      iVar8 = (int)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      piVar3 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[1] = (int)(*(undefined * PTR32 *)&gen_args[0]);
        piVar4[4] = 0;
        piVar4[5] = iVar8;
        piVar4[6] = 0;
        *piVar4 = (int)(*(undefined * PTR32 (*)[10])REFP(0x10a2c0c));
        piVar3 = piVar4;
      }
      F_005e3c50(piVar3 GEN_EDX_ARG,pcVar5);
      bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac)));
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) = piVar3;
      if ((bVar1 & 1) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3 GEN_EDX_ARG,(byte)~bVar1 & 1 | 6,(uint)(bVar1 >> 1 & 1));
      }
    }
    uVar2 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4)));
      uVar2 = 0;
      if (iVar8 != 0) {
        (*(char * PTR32 *)&gen_args[1]) = *((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)));
        uVar2 = F_0061d520((undefined *)(iVar8 + 0x18c) GEN_EDX_ARG,&(*(char * PTR32 *)&gen_args[1]));
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005f87a0 */
GEN_FRAME unsigned int GEN_THISCALL F_005f87a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5f87a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  
  if (*(int *)((int)param_1 + 0x1c) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = F_005f0a50(param_1 GEN_EDX_FWD);
  }
  if (*(int *)((int)param_1 + 0x24) - 3U < 2) {
    if ((*(int *)((int)param_1 + 0x1c) != 0) || (bVar1 != 0)) {
      if (*(int *)((int)param_1 + 0x1c) != 2) goto LAB_005f87d8;
      if (bVar1 == 0) goto LAB_005f87ef;
    }
    *(undefined1 *)((int)param_1 + 0x2c) = 1;
  }
LAB_005f87d8: ;
  if (bVar1 != 0) {
    F_005f6a90(param_1 GEN_EDX_ARG,param_2);
    return;
  }
LAB_005f87ef: ;
  F_005f6b40(param_1 GEN_EDX_ARG,param_2);
  return;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf9 */
GEN_FRAME uint GEN_THISCALL F_005f8810(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5f8810u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    uVar1 = F_005f6cb0(param_1 GEN_EDX_FWD,param_2);
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - 5;
    if (uVar1 == 0) {
      uVar1 = F_005f6d80(param_1 GEN_EDX_ARG,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_005f8840 */
GEN_FRAME byte GEN_THISCALL F_005f8840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f8840u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  iVar1 = (*(int *)&gen_args[1]);
  (*(int *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[1]) + 0x14);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    puVar3 = (undefined4 *)F_004296a0(0x18,0,0x385);
    *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(int *)&gen_args[1]);
      puVar3[4] = iVar1;
    }
    F_006187f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar3,0);
    bVar2 = F_005f7b00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,iVar1);
    uVar4 = (uint)bVar2;
  }
  return (byte)uVar4;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_005f88d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f88d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10) GEN_EDX_ARG,this,(*(uint *)(gen_frame + 0x14)));
      }
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_005f8970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f8970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10) GEN_EDX_ARG,this,(*(uint *)(gen_frame + 0x14)));
      }
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_005f8a00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005f8a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f8a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0x38) != 0) || (*(int *)((int)this + 0x3c) != 0)) {
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
    if ((*(int *)((int)this + 8) != 0) &&
       ((iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), iVar3 != 0 &&
        (iVar3 = *(int *)(iVar3 + 0x44), iVar3 != 0)))) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      bVar1 = F_005d9c60(this GEN_EDX_ARG);
      if (bVar1 == 0) {
        (*(undefined1 *)(gen_frame + 0x1f)) = *(undefined1 *)((int)this + 0x11);
        F_00614c10((undefined *)(iVar3 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
        if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar3 + 0x34)) {
          F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10) GEN_EDX_ARG,this,(*(uint *)(gen_frame + 0x14)));
        }
      }
    }
    if (*(int *)((int)this + 0x38) != 0) {
      if (*(int *)((int)this + 8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
      }
      F_00507740((undefined *)(iVar3 + 0x14c) GEN_EDX_ARG,(int)this + 0x38);
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    if (*(uint *)((int)this + 0x3c) != 0) {
      if (*(int *)((int)this + 8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
      }
      (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0x3c);
      F_00619280((undefined *)(iVar3 + 0x15c) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x14)));
      if (((*(int *)(gen_frame + 0x18)) != *(int *)(iVar3 + 0x160)) &&
         (*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) = *(int *)((*(int *)(gen_frame + 0x18)) + 0x20) - 1, *(int *)((*(int *)(gen_frame + 0x18)) + 0x20) < 1)
         ) {
        F_00614760((undefined *)(iVar3 + 0x15c) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x18)));
      }
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_005f8b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f8b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if ((((((byte)this[0x8c] & 4) != 0) && (*(int *)(this + 8) != 0)) &&
      (iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar2 != 0)) &&
     (this_00 = *(undefined * PTR32 *)(iVar2 + 0x44), this_00 != (undefined *)0x0)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    F_005f72f0(this_00 GEN_EDX_ARG,this,uVar1);
    this[0x8c] = (undefined1)((byte)this[0x8c] & 0xfb);
  }
  if (*(int *)(this + 0x70) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_00507740((undefined *)(iVar2 + 0x14c) GEN_EDX_ARG,this + 0x70);
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf2 */
GEN_FRAME uint GEN_THISCALL F_005f8bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f8bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe4))(this GEN_EDX_FWD);
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0xb)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
      if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10) GEN_EDX_ARG,this,uVar3);
      }
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf2 */
GEN_FRAME uint GEN_THISCALL F_005f8c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f8c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe4))(this GEN_EDX_FWD);
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0xb)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
      if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10) GEN_EDX_ARG,this,uVar3);
      }
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_005f8ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f8ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(this + 0xa0) != *(int *)(this + 0xa4)) {
    F_005f07a0(this + 0x98 GEN_EDX_FWD);
  }
  if (((*(int *)(this + 8) != 0) && (iVar4 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar4 != 0)) &&
     (iVar4 = *(int *)(iVar4 + 0x44), iVar4 != 0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar4 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar4 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10) GEN_EDX_ARG,this,(*(uint *)(gen_frame + 0x14)));
      }
    }
  }
  if (*(int *)(this + 0x38) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_00507740((undefined *)(iVar4 + 0x14c) GEN_EDX_ARG,this + 0x38);
  }
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if (piVar1 == (int *)0x0) {
    if (((byte)this[0x94] & 0x10) == 0) goto LAB_005f8d89;
    this[0x94] = (undefined1)((byte)this[0x94] & 0xef);
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1 GEN_EDX_ARG,500);
    *(undefined4 *)(this + 0x34) = 0;
  }
  F_005e1000(this GEN_EDX_ARG);
LAB_005f8d89: ;
  if (*(int *)(this + 0x3c) != 0) {
    F_0050c620(*(int *)(this + 0x3c),0,0);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  if (*(int *)(this + 0x88) != 0) {
    F_00406b30(*(int *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_005f8de0 */
GEN_NOFRAME uint GEN_THISCALL F_005f8de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f8de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302df0)));
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302e00);
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302df4)));
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302e0c);
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302df8)));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e10)));
  uVar2 = (int)*(char *)((int)this + 0x90) - 3;
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e14)));
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302e04);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302e08);
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e18)));
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 2: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_FWD,2);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 2);
    return uVar2;
  case 3: ;
    uVar3 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x144)));
    (*(uint *)(gen_frame + 0x38)) = *(int *)((int)this + 0x88);
    (*(uint *)(gen_frame + 0x34)) = uVar3;
    uVar2 = F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,uVar3);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x38)) + 0x28);
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
        F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
        uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
        puVar4 = puVar4 + 4;
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
      } while ((int)uVar2 < (int)(*(uint *)(gen_frame + 0x34)));
      return uVar2;
    }
    break;
  case 4: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 4);
    return uVar2;
  case 5: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 4);
    return uVar2;
  case 6: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 4);
    return uVar2;
  case 8: ;
    uVar3 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x131)));
    (*(uint *)(gen_frame + 0x34)) = *(int *)((int)this + 0x88);
    (*(uint *)(gen_frame + 0x38)) = uVar3;
    uVar2 = F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,uVar3);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x34)) + 0x28);
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
        F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
        uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
        puVar4 = puVar4 + 4;
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
      } while ((int)uVar2 < (int)(*(uint *)(gen_frame + 0x38)));
      return uVar2;
    }
    break;
  case 9: ;
    uVar3 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x229)));
    (*(uint *)(gen_frame + 0x34)) = *(int *)((int)this + 0x88);
    (*(uint *)(gen_frame + 0x38)) = uVar3;
    uVar2 = F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,uVar3);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x34)) + 0x28);
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
        F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
        uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
        puVar4 = puVar4 + 4;
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
      } while ((int)uVar2 < (int)(*(uint *)(gen_frame + 0x38)));
      return uVar2;
    }
    break;
  case 10: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,2);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 2);
    break;
  case 0xb: ;
    uVar3 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x4e)));
    (*(uint *)(gen_frame + 0x34)) = *(int *)((int)this + 0x88);
    (*(uint *)(gen_frame + 0x38)) = uVar3;
    uVar2 = F_0061bcf0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,uVar3);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x34)) + 0x68);
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
        F_005f7060(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
        uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
        puVar4 = puVar4 + 4;
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
      } while ((int)uVar2 < (int)(*(uint *)(gen_frame + 0x38)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_005f9280 */
GEN_FRAME unsigned int GEN_THISCALL F_005f9280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x5f9280u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  
  pvVar2 = (*(undefined * PTR32 *)&gen_args[1]);
  F_00614b20((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  uVar1 = *(ushort *)((*(int *)&gen_args[0]) + 100);
  uVar3 = (uint)uVar1;
  sVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(ushort *)(gen_frame + 0x8)) = uVar1;
  (*(short *)(gen_frame + 0xa)) = 0;
  uVar4 = uVar3;
  if (1 < uVar3) {
    do {
      uVar4 = uVar4 >> 1;
      sVar5 = sVar5 + 1;
    } while (1 < uVar4);
    (*(short *)(gen_frame + 0xa)) = sVar5;
  }
  (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(((uint)(*(undefined * PTR32 *)&gen_args[1]) & 0xffffff)));
  F_005f7350((*(int *)&gen_args[0]) GEN_EDX_ARG,pvVar2,(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),uVar3,&(*(undefined4 *)(gen_frame + 0x4)),(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3);
  return;
}

/* ref: FUN_005f92f0 */
GEN_NOFRAME uint GEN_THISCALL F_005f92f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f92f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  undefined4 uVar2;
  uint uVar3;
  
  pvVar1 = (undefined *)((int)this + 0x78);
  this_00 = (undefined *)((int)this + 0x68);
  if (this_00 != pvVar1) {
    uVar2 = *(undefined4 *)((int)this + 0x6c);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x7c);
    *(undefined4 *)((int)this + 0x7c) = uVar2;
    uVar2 = *(undefined4 *)((int)this + 0x70);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x80) = uVar2;
  }
  F_00614b20(this_00 GEN_EDX_FWD);
  F_005ec120(pvVar1,0);
  F_005f7350(this GEN_EDX_ARG,this_00,(int)this + 0x40,*(float *)((int)this + 0x24),
               (uint)*(ushort *)((int)this + 100),(int)this + 0x60,(int)this + 0x11);
  F_005ec2e0(pvVar1);
  F_005ec240(this_00);
  if (*(int *)((int)this + 0x14) != 0) {
    F_005f2200(this GEN_EDX_ARG,pvVar1);
    F_005ec240(this_00);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  F_005ec1b0(this GEN_EDX_ARG,pvVar1);
  uVar3 = F_005ec1b0(this GEN_EDX_ARG,this_00);
  return uVar3;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_005f9390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f9390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  this_00 = (undefined *)F_00406b90(0x550,0,0);
  if (this_00 == (undefined *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)F_005f74b0(this_00 GEN_EDX_ARG,this);
  }
  *(int * PTR32 *)(this + 0x10) = piVar2;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
  puVar3 = (undefined4 *)F_00406b90(0x1c,0,0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10a5af4));
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    uVar4 = F_004296a0(0x18,0,900);
    puVar3[4] = uVar4;
    *(uint *)uVar4 = uVar4;
    *(undefined4 *)(puVar3[4] + 4) = puVar3[4];
    iVar1 = puVar3[4];
    *(int *)(iVar1 + 8) = iVar1;
    *(undefined1 *)(puVar3[4] + 0x14) = 1;
    *(undefined1 *)(puVar3[4] + 0x15) = 1;
    *(undefined4 * PTR32 *)(this + 0x20) = puVar3;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  *(undefined4 *)(this + 0x20) = 0;
  return 0;
}

/* ref: FUN_005f9420 */
GEN_FRAME uint GEN_THISCALL F_005f9420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5f9420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * PTR32 * ppvVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)param_1 >> 0x1f);
  pvVar1 = (undefined *)F_0060aeb0((undefined *)((int)this + 0x2c) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)));
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x30);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  if (pvVar1 != pvVar3) {
    if ((*(undefined * PTR32 *)((int)pvVar1 + 0x14) <= (*(undefined * PTR32 *)(gen_frame + 0x4))) &&
       (((*(undefined * PTR32 *)(gen_frame + 0x4)) != *(undefined * PTR32 *)((int)pvVar1 + 0x14) || (*(uint *)((int)pvVar1 + 0x10) <= param_1))))
    {
      ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_005f946b;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar3;
  ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x4));
LAB_005f946b: ;
  if (*ppvVar2 == *(undefined * PTR32 *)((int)this + 0x30)) {
    pvVar3 = (undefined *)F_00406b90(0x550,0,0);
    if (pvVar3 == (undefined *)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    }
    else {
      pvVar3 = (undefined *)F_005f74b0(pvVar3 GEN_EDX_ARG,this);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar3;
    }
    F_005d5b90((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    puVar4 = (undefined4 *)F_004296a0(0x28,0,900);
    *puVar4 = *(undefined4 *)((int)this + 0x30);
    puVar4[1] = *(undefined4 *)((int)this + 0x30);
    puVar4[2] = *(undefined4 *)((int)this + 0x30);
    *(undefined2 *)(puVar4 + 8) = 0;
    if (puVar4 + 4 != (undefined4 *)0x0) {
      puVar4[4] = param_4;
      puVar4[5] = param_1;
      puVar4[6] = (*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    F_00617c00((undefined *)((int)this + 0x2c) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),puVar4,0);
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  return *(uint *)((int)*ppvVar2 + 0x18);
}

/* ref: FUN_005f9530 */
GEN_FRAME uint GEN_THISCALL F_005f9530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5f9530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,"bg/%s.lvb",param_2);
  F_004ff470(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0,0);
  F_00625940();
  uVar3 = (*(uint *)(gen_frame + 0x0));
  iVar1 = *(int *)((int)this + 0x14);
  if ((iVar1 == 0) ||
     ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = 1, (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),1), *(uint *)(iVar1 + 8) != uVar3))
  {
    uVar2 = (*(uint *)(gen_frame + 0x0));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x0)) = uVar2 & 0xffffff00;
  }
  *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) & 0xfffffffe;
  F_005f4530(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
  F_00510e20(1);
  F_00510e20(2);
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 8) == uVar3) && (*(int *)(iVar1 + 0x18) == param_3)) {
      F_005ee840(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 8))),
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x18))));
      iVar1 = *(int *)((int)this + 0x1c);
      *(int *)((int)this + 0x14) = iVar1;
      *(undefined4 *)((int)this + 0x1c) = 0;
      uVar3 = *(uint *)(iVar1 + 8);
      this_00 = *(undefined * PTR32 *)(iVar1 + 0x44);
      *(undefined1 *)(iVar1 + 0x53) = 0;
      if (*(int *)((int)this_00 + 0x10) == 0) {
        *(undefined4 *)((int)this_00 + 0x10) = 1;
        F_005ee3d0(this_00 GEN_EDX_ARG,1);
        F_005ebe80(this_00 GEN_EDX_ARG);
      }
      *(undefined4 *)(iVar1 + 0xa4) = 5;
      goto LAB_005f967f;
    }
    F_005ee840(this GEN_EDX_ARG,*(uint *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x18));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  F_005ec400(this GEN_EDX_ARG,0);
  uVar2 = F_005f9420(this GEN_EDX_ARG,uVar3,((undefined1 *)(gen_frame + 0x4)),param_2,param_3,param_4,param_1,param_5);
  *(uint *)((int)this + 0x14) = uVar2;
  F_005d9190(param_2);
LAB_005f967f: ;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_005f96a0 */
GEN_FRAME uint GEN_THISCALL F_005f96a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5f96a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  if (*(int *)((int)this + 0x14) == 0) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_FWD);
    return 0xffffffff;
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x18))) != param_5) {
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x18) == param_5) goto LAB_005f96ed;
      F_005ee840(this GEN_EDX_ARG,*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0x18));
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,"bg/%s.lvb",param_2);
    F_004ff470(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0,0);
    uVar2 = F_005f9420(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)),param_2,param_5,0,param_1,param_6);
    *(uint *)((int)this + 0x1c) = uVar2;
    *(undefined1 *)(uVar2 + 0x53) = 1;
    *(undefined4 *)(uVar2 + 0xa4) = 6;
    iVar1 = *(int *)((int)this + 0x1c);
    *(undefined4 *)(iVar1 + 0x58) = param_4;
    *(undefined1 *)(iVar1 + 0x56) = (undefined1)param_3;
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return (*(uint *)(gen_frame + 0x0));
  }
LAB_005f96ed: ;
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return 0xffffffff;
}

/* ref: FUN_005f97a0 */
GEN_FRAME uint GEN_THISCALL F_005f97a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f97a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_00c472af(((undefined1 *)(gen_frame + 0x24)),0x104,"bg/%s.lvb",param_1);
  F_004ff470(&(*(uint *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)),0,0);
  uVar1 = (*(uint *)(gen_frame + 0x20));
  (*(uint *)(gen_frame + 0x1c)) = (int)(*(uint *)(gen_frame + 0x20)) >> 0x1f;
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x20));
  uVar2 = F_0060aeb0((undefined *)((int)this + 0x3c) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
  uVar4 = *(uint *)((int)this + 0x40);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if (uVar2 != uVar4) {
    if ((*(uint *)(uVar2 + 0x14) <= (*(uint *)(gen_frame + 0x1c))) &&
       (((*(uint *)(gen_frame + 0x1c)) != *(uint *)(uVar2 + 0x14) || (*(uint *)(uVar2 + 0x10) <= uVar1)))) {
      puVar3 = &(*(uint *)(gen_frame + 0x14));
      goto LAB_005f9846;
    }
  }
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  puVar3 = &(*(uint *)(gen_frame + 0x1c));
LAB_005f9846: ;
  if (*puVar3 == *(uint *)((int)this + 0x40)) {
    this_00 = (undefined *)F_00406b90(0x550,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_005f74b0(this_00 GEN_EDX_ARG,this);
    }
    *(uint *)(uVar4 + 8) = (*(uint *)(gen_frame + 0x20));
    *(undefined4 *)(uVar4 + 0x14) = 5;
    *(undefined4 *)(uVar4 + 0x18) = 0;
    *(undefined4 *)(uVar4 + 0x1c) = 0;
    uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x24)),uVar4 + 0x94,0,0);
    *(uint *)(uVar4 + 0xd8) = uVar2;
    F_0050b6c0((undefined *)(uVar4 + 0xc4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)));
    *(undefined4 *)(uVar4 + 0x10) = 1;
    *(undefined1 *)(uVar4 + 0x53) = 1;
    *(undefined4 *)(uVar4 + 0xa4) = 6;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar1;
    (*(uint *)(gen_frame + 0xc)) = uVar4;
    F_0061ad00((undefined *)((int)this + 0x3c) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c) GEN_EDX_ARG);
  return (*(uint *)(gen_frame + 0x20));
}

/* ref: Client::LayoutEngine::LayoutManager::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_005f9920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f9920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(this + 8) = 0xffff;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar1 = F_005f7a50(this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x10) = 7;
  return uVar1;
}

/* ref: FUN_005f9950 */
GEN_FRAME uint GEN_THISCALL F_005f9950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f9950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x140);
  puVar3 = (undefined4 *)*puVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  while (puVar3 != puVar2) {
    this_00 = (undefined *)puVar3[4];
    if (this_00 != (undefined *)0x0) {
      F_00619b00(this_00 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)this_00 + 4),
                   *(undefined4 * PTR32 *)((int)this_00 + 4));
      F_00429760(*(undefined4 *)((int)this_00 + 4),0x28,0x385);
      F_00406ad0(this_00);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar6 = F_006153b0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x13c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_005f9a00 */
GEN_NOFRAME uint GEN_THISCALL F_005f9a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5f9a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(REFG(undefined4, 0x1379cb0) + 0x26) == '\0') {
    return REFG(undefined4, 0x1379cb0);
  }
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
  if (uVar3 != 0) {
    do {
      uVar1 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar2 * 4))));
      F_005ecdd0(this GEN_EDX_ARG,uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  uVar2 = F_005f7c60(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005f9a60 */
GEN_FRAME uint GEN_THISCALL F_005f9a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f9a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x1379cb0);
  if (*(char *)(REFG(undefined4, 0x1379cb0) + 0x26) != '\0') {
    iVar2 = param_1[1];
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        F_005ecdd0(this GEN_EDX_FWD,*param_1 + iVar3 + (int)param_1);
        iVar3 = iVar3 + 0x10;
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
    }
    uVar1 = F_005f7c60(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_005f9ab0 */
GEN_FRAME uint F_005f9ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5f9ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_005f9530(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,2,param_1,param_2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_005f9ae0 */
GEN_FRAME uint F_005f9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5f9ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_005f96a0(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,2,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_005f9b10 */
GEN_FRAME uint F_005f9b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f9b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  
  F_005f9530(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,3,param_1,param_2,param_3,0);
  uVar1 = param_4;
  if ((param_4 != 0) && (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x14))) != (undefined *)0x0)) {
    uVar1 = F_005f2940(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x14))) GEN_EDX_ARG,param_4);
  }
  return uVar1;
}

/* ref: FUN_005f9b50 */
GEN_FRAME uint F_005f9b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f9b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_005f96a0(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,3,param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_005f9b80 */
GEN_FRAME uint F_005f9b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f9b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_005f9530(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_005f9bb0 */
GEN_FRAME uint F_005f9bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f9bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_005f97a0(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_005f9bd0 */
GEN_FRAME uint GEN_THISCALL F_005f9bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5f9bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  iVar1 = (int)this + 0x18;
  *(undefined4 *)((int)this + 0x11c) = 1;
  *(undefined4 *)((int)this + 8) = param_1;
  F_00c49908(iVar1,0x104,param_2);
  bVar2 = F_005f80b0(this GEN_EDX_ARG,iVar1,param_3);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    *(undefined4 *)((int)this + 0x11c) = 5;
    return uVar3;
  }
  if ((char)param_4 == '\0') {
    uVar3 = F_005f81f0(this GEN_EDX_ARG,iVar1);
  }
  *(undefined4 *)((int)this + 0x11c) = 2;
  return uVar3;
}

/* ref: Client::LayoutEngine::Terrain::TerrainManager::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_005f9c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f9c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (((*(int *)(this + 0x11c) == 2) && (4 < *((int *)GEN_TOP((*(int *)(this + 4) + 0x10))))) &&
     ((*(int *)(this + 0x10) == 0 || (*((char *)GEN_TOP((*(int *)(this + 0x10) + 0x65))) == '\x03')))) {
    if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x18))) != *(int *)(this + 4)) {
      F_005d5b00(REFG(void * PTR32, 0x1379cb0) GEN_EDX_FWD);
    }
    piVar1 = *(int * PTR32 *)(this + 0x10);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG);
    }
    if (*(int *)(this + 0x14) == 0) {
      F_005f81f0(this GEN_EDX_ARG,this + 0x18);
    }
    *(undefined4 *)(this + 0x11c) = 3;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,0);
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_005f9cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5f9cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  bool bVar7;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
  if (uVar3 != 0) {
    F_00a1fa60(this + 0x10,uVar3,param_1);
  }
  this[0xb4] = (undefined1)
               ((byte)this[0xb4] ^
               ((*(char *)(param_1 + 0x46) != '\0') * '\x02' ^ (byte)this[0xb4]) & 2);
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 == 1) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfffff01f | 0x10;
  }
  else if (iVar6 == 2) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfffff02f | 0x20;
  }
  else if (iVar6 == 3) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfffff03f | 0x30;
  }
  if (*(int *)(param_1 + 0x40) == 1) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfff04fff | 0x4000;
  }
  else if (*(int *)(param_1 + 0x40) == 2) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfff05fff | 0x5000;
  }
  this[0xac] = (undefined1)
               ((byte)this[0xac] ^ (*(char *)(param_1 + 0x44) != '\0' ^ (byte)this[0xac]) & 1);
  this[0xac] = (undefined1)
               (((*(char *)(param_1 + 0x45) != '\0') * '\x02' ^ (byte)this[0xac]) & 2 ^
               (byte)this[0xac]);
  piVar2 = *(int * PTR32 *)(this + 0x9c);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x20))))
                (*(int * PTR32 *)(this + 0x9c) GEN_EDX_ARG,(*(int *)(this + 0xa8) << 0x14) >> 0x18,0);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x14))))(*(int * PTR32 *)(this + 0x9c) GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x20))))
                (*(int * PTR32 *)(this + 0x9c) GEN_EDX_ARG,(*(int *)(this + 0xa8) << 0xc) >> 0x18,0);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x18))))(*(int * PTR32 *)(this + 0x9c) GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x20))))
                (*(int * PTR32 *)(this + 0x9c) GEN_EDX_ARG,(byte)~(byte)this[0xac] & 1 | 6,
                 (uint)((byte)this[0xac] >> 1 & 1));
    }
  }
  pbVar4 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x30) + param_1)));
  (*(byte * PTR32 *)(gen_frame + 0x3c)) = pbVar4;
  if ((*(int *)(this + 0x78) == *(int *)(this + 0x7c)) && (*(int *)(this + 0x34) == 0)) {
    F_005e2b50(this GEN_EDX_ARG,pbVar4);
  }
  else {
    if (*(int *)(this + 8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    pbVar5 = (byte *)F_00507260((undefined *)(iVar6 + 0x14c) GEN_EDX_ARG,this + 0x38);
    pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x3c));
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005f9ef1: ;
        iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005f9ef6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005f9ef1;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_005f9ef6: ;
    if (iVar6 != 0) {
      F_005f5110(this GEN_EDX_ARG);
      if (*(int *)(this + 0x34) != 0) {
        F_0050c620(*(int *)(this + 0x34),0,0);
        *(undefined4 *)(this + 0x34) = 0;
      }
      F_005e2b50(this GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x3c)));
    }
  }
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0x48);
  F_005f82b0(this GEN_EDX_ARG,*(int *)(param_1 + 0x4c) + param_1);
  uVar3 = F_005db2a0(this GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf9 */
GEN_FRAME unsigned int GEN_THISCALL F_005f9f60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5f9f60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 1) {
    F_005f87a0(param_1 GEN_EDX_FWD,param_2);
  }
  else {
    if (iVar1 == 2) {
      F_005f6a90(param_1 GEN_EDX_ARG,param_2);
      return;
    }
    if (iVar1 == 3) {
      F_005f6b40(param_1 GEN_EDX_ARG,param_2);
      return;
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_005f9fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5f9fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_005f8a00(this GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_005f9fc0 */
GEN_FRAME uint GEN_THISCALL F_005f9fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f9fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  
  fVar1 = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (*param_2 == '\0') {
    (*(undefined2 *)(gen_frame + 0x1e)) = 0;
    (*(undefined2 *)(gen_frame + 0x18)) = 0x70;
    (*(undefined1 *)(gen_frame + 0x1a)) = 8;
    *(undefined1 *)((int)this + 0x90) = 8;
    (*(undefined1 *)(gen_frame + 0x1b)) = 0;
    (*(undefined1 *)(gen_frame + 0x1c)) = 4;
    (*(undefined1 *)(gen_frame + 0x1d)) = 0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x78)) = fVar1;
    (*(float *)(gen_frame + 0x7c)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x84)) + 0)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x84)) + 2)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    *(undefined2 *)((int)this + 0x8c) = 0x70;
    uVar3 = F_00406bb0(0x70,0,0);
    *(uint *)((int)this + 0x88) = uVar3;
    fVar1 = *(float *)((int)this + 0x48);
    fVar4 = (float10)REFG(double, 0x10944b8);
    fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) - fVar4)));
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = fVar2;
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x50)) = fVar1;
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x60)) = fVar1;
    (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x68)) = fVar2;
    (*(float *)(gen_frame + 0x70)) = fVar1;
    (*(float *)(gen_frame + 0x74)) = REFG(float, 0x1087f04);
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) + fVar4)));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) + fVar4)));
    (*(float *)(gen_frame + 0x48)) = fVar2;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    (*(float *)(gen_frame + 0x58)) = fVar2;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) - fVar4)));
    (*(float *)(gen_frame + 0x5c)) = fVar1;
    (*(float *)(gen_frame + 0x6c)) = fVar1;
    F_00c46aa0(uVar3,&(*(undefined2 *)(gen_frame + 0x18)),(int)*(short *)((int)this + 0x8c));
    F_005f1f80(this GEN_EDX_ARG,param_2);
    F_005f8de0(this GEN_EDX_ARG);
  }
  else {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x74)) + 1)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)(uint)gen_fl2bits(REFG(float, 0x1087f04));
    (*(undefined1 *)(gen_frame + 0x1a)) = (undefined1)((uint)gen_fl2bits(REFG(float, 0x1087f04)) >> 0x10);
    (*(undefined1 *)(gen_frame + 0x1b)) = (undefined1)((uint)gen_fl2bits(REFG(float, 0x1087f04)) >> 0x18);
    (*(undefined1 *)(gen_frame + 0x1c)) = (undefined1)(uint)gen_fl2bits(REFG(float, 0x1087f04));
    (*(undefined1 *)(gen_frame + 0x1d)) = (undefined1)((uint)gen_fl2bits(REFG(float, 0x1087f04)) >> 8);
    (*(undefined2 *)(gen_frame + 0x1e)) = (undefined2)((uint)gen_fl2bits(REFG(float, 0x1087f04)) >> 0x10);
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x1030080;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    (*(float *)(gen_frame + 0x2c)) = 0.0;
    (*(float *)(gen_frame + 0x30)) = 0.0;
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1094880);
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x10a0d00);
    (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1094880);
    (*(float *)(gen_frame + 0x44)) = 0.0;
    (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x58)) = 0.0;
    (*(float *)(gen_frame + 0x5c)) = 0.0;
    (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x64)) = 0.0;
    (*(float *)(gen_frame + 0x68)) = 0.0;
    (*(float *)(gen_frame + 0x6c)) = 0.0;
    (*(float *)(gen_frame + 0x70)) = 0.0;
    (*(float *)(gen_frame + 0x78)) = 0.0;
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x74)) + 0)) = 0;
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x7c)) + 0)) = 0;
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x7c)) + 2)) = 0;
    (*(float *)(gen_frame + 0x7c)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x74)) + 2)) = 0;
    (*(float *)(gen_frame + 0x74)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    *(undefined1 *)((int)this + 0x90) = 3;
    *(undefined2 *)((int)this + 0x8c) = 0x80;
    uVar3 = F_00406bb0(0x80,0,0);
    *(uint *)((int)this + 0x88) = uVar3;
    F_00c46aa0(uVar3,&(*(undefined4 *)(gen_frame + 0x8)),(int)*(short *)((int)this + 0x8c));
    fVar1 = REFG(float, 0x1094880);
    *(float *)((int)this + 0x60) = GEN_FLT_TO(*(float *)((int)this + 0x60), REFG(float, 0x1094880));
    *(float *)((int)this + 100) = fVar1;
    *(float *)((int)this + 0x68) = GEN_FLT_TO(*(float *)((int)this + 0x68), REFG(float, 0x10a0d00));
    F_005f1f80(this GEN_EDX_ARG,param_2);
  }
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar3 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_005fa2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fa2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pSVar1;
  undefined1 SVar2;
  code * pcVar3;
  byte bVar4;
  int iVar5;
  undefined4 * puVar6;
  uint uVar7;
  byte * pbVar8;
  byte * pbVar9;
  bool bVar10;
  
  this[0x94] = (undefined1)((byte)this[0x94] | 0x20);
  iVar5 = *(int *)(param_1 + 0x30);
  (*(byte * PTR32 *)(gen_frame + 0x38)) = (byte *)(int)(char)this[0x90];
  (*(byte * PTR32 *)(gen_frame + 0x3c)) = ((byte *)GEN_TOP((*(int *)(param_1 + 0x34) + param_1)));
  F_005e0dc0(this GEN_EDX_FWD,iVar5 + param_1);
  if ((*(byte * PTR32 *)(gen_frame + 0x38)) == (byte *)(int)(char)this[0x90]) {
    bVar4 = F_005e0cb0(this GEN_EDX_ARG);
    if (bVar4 != 0) goto LAB_005fa2fd;
  }
  else {
LAB_005fa2fd: ;
    if (*(int *)(this + 0xa0) != *(int *)(this + 0xa4)) {
      F_005f07a0(this + 0x98 GEN_EDX_ARG);
    }
  }
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  F_005e8540(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  if (*(int *)(this + 0xa0) == *(int *)(this + 0xa4)) {
    F_005f8de0(this GEN_EDX_ARG);
  }
  pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x3c));
  if (((byte)this[0x94] & 8) == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    pbVar9 = (*(byte * PTR32 *)(gen_frame + 0x3c));
    if (*(*(byte * PTR32 *)(gen_frame + 0x3c)) != 0) {
      if (*(int *)(this + 8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
      }
      puVar6 = (undefined4 *)F_00509330((undefined *)(iVar5 + 0x14c) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x3c)));
      *(undefined4 *)(this + 0x38) = *puVar6;
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x6c);
    (*(byte * PTR32 *)(gen_frame + 0x38)) = pbVar9;
    uVar7 = (*pcVar3)(this,this + 0x40,&(*(byte * PTR32 *)(gen_frame + 0x38)));
    this[0x94] = (undefined1)((byte)this[0x94] & 0xdf);
    return uVar7;
  }
  if ((*(byte * PTR32 *)(gen_frame + 0x38)) == (byte *)(int)(char)this[0x90]) {
    pbVar8 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG)));
    do {
      bVar4 = *pbVar8;
      bVar10 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_005fa3e1: ;
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005fa3e6;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar8[1];
      bVar10 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_005fa3e1;
      pbVar8 = pbVar8 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar5 = 0;
LAB_005fa3e6: ;
    uVar7 = 0;
    if (iVar5 == 0) goto LAB_005fa479;
  }
  pSVar1 = this + 0x38;
  if (*(int *)(this + 0x38) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_00507740((undefined *)(iVar5 + 0x14c) GEN_EDX_ARG,pSVar1);
    *(undefined4 *)pSVar1 = 0;
  }
  if (*(*(byte * PTR32 *)(gen_frame + 0x3c)) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    puVar6 = (undefined4 *)F_00509330((undefined *)(iVar5 + 0x14c) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x3c)));
    *(undefined4 *)pSVar1 = *puVar6;
  }
  SVar2 = this[0x90];
  (*(int *)(gen_frame + 0x34)) = (int)(char)SVar2;
  this[0x90] = (*(undefined1 *)((char *)&(*(byte * PTR32 *)(gen_frame + 0x38)) + 0));
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  pcVar3 = *(gen_code32 *)(*(int *)this + 0x6c);
  this[0x90] = (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0));
  (*(byte * PTR32 *)(gen_frame + 0x30)) = (*(byte * PTR32 *)(gen_frame + 0x3c));
  uVar7 = (*pcVar3)(this,this + 0x40,&(*(byte * PTR32 *)(gen_frame + 0x30)));
LAB_005fa479: ;
  this[0x94] = (undefined1)((byte)this[0x94] & 0xdf);
  return uVar7;
}

/* ref: FUN_005fa490 */
GEN_FRAME unsigned int GEN_THISCALL F_005fa490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x5fa490u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(int *)(gen_frame + 0x8)) = (*(int *)&gen_args[0]);
  F_00614c10((undefined *)((*(int *)&gen_args[0]) + 0x30) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[2]));
  if ((*(int *)(gen_frame + 0x8)) != *(int *)((*(int *)&gen_args[0]) + 0x34)) {
    F_005f9280(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(float *)&gen_args[4]));
  }
  return;
}

/* ref: FUN_005fa4d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fa4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fa4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  if (*(char *)((int)this + 0x12) != '\0') {
    F_005f92f0(this GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x12) = 0;
  }
  return;
}

/* ref: Client::LayoutEngine::LayoutManager::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fa4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fa4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  this[0x54] = (undefined1)0x1;
  F_006155c0(this + 0x17c GEN_EDX_FWD);
  iVar1 = *(int *)(this + 0x18c);
  if (iVar1 != *(int *)(this + 400)) {
    F_00c46e20(iVar1,*(int *)(this + 400),0);
    *(int *)(this + 400) = iVar1;
  }
  F_006159e0(this + 0x19c GEN_EDX_ARG);
  F_005f9950(this GEN_EDX_ARG);
  F_005ef260(this + 300);
  F_005ef260(this + 0x11c);
  F_005ec9c0(this GEN_EDX_ARG);
  F_005ef2d0(this GEN_EDX_ARG,0);
  F_005eefd0(this GEN_EDX_ARG,0xffffffff);
  iVar1 = *(int *)(this + 0x48);
  if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371290) + 4))) == *(int *)(iVar1 + 8)) {
    F_004bae60(REFG(void * PTR32, 0x1371290) GEN_EDX_ARG,0);
  }
  if (*(undefined * PTR32 *)(iVar1 + 8) != (undefined *)0x0) {
    F_0068fa50(*(undefined * PTR32 *)(iVar1 + 8) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(iVar1 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      F_00406b30(*(int *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
  }
  F_005eeeb0(this GEN_EDX_ARG);
  if (*(int *)(this + 0xd8) != 0) {
    F_0050c620(*(int *)(this + 0xd8),0,0);
    *(undefined4 *)(this + 0xd8) = 0;
  }
  F_005eef40(this GEN_EDX_ARG);
  if (*(int *)(this + 0x1ac) != 0) {
    F_0050c620(*(int *)(this + 0x1ac),0,0);
    *(undefined4 *)(this + 0x1ac) = 0;
  }
  if (*(int *)(this + 0x1b0) != 0) {
    F_0050c620(*(int *)(this + 0x1b0),0,0);
    *(undefined4 *)(this + 0x1b0) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x44) + 8))))(*(int * PTR32 *)(this + 0x44) GEN_EDX_ARG);
  puVar2 = *(undefined4 * PTR32 *)(this + 0x44);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x44) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x4c);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x4c) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x48);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x48) = 0;
  }
  F_005d9550(this GEN_EDX_ARG);
  *(undefined4 *)(this + 0x10) = 8;
  return;
}

/* ref: FUN_005fa680 */
GEN_FRAME uint GEN_THISCALL F_005fa680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fa680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = F_00a1b270(param_1);
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    F_00619400((undefined *)((int)this + 0xfc) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x18)));
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    if ((*(undefined * PTR32 *)(gen_frame + 0x10)) == *(undefined * PTR32 *)((int)this + 0x100)) {
      pvVar2 = (undefined *)F_00406b90(0x120,0,0);
      if (pvVar2 == (undefined *)0x0) {
        pvVar2 = (undefined *)0x0;
      }
      else {
        pvVar2 = (undefined *)F_005dac00(pvVar2 GEN_EDX_ARG,this);
      }
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar2;
      F_0061adc0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)));
      pvVar2 = (undefined *)F_005f9bd0(pvVar2 GEN_EDX_ARG,uVar1,param_1,param_2,(uint)*(byte *)((int)this + 0x53));
    }
    return (uint)pvVar2;
  }
  uVar1 = F_005eefd0(this GEN_EDX_ARG,0xffffffff);
  return uVar1;
}

/* ref: Client::LayoutEngine::Streaming::StreamingManager::vf3 */
GEN_FRAME uint GEN_THISCALL F_005fa740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fa740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  int * piVar9;
  double dVar10;
  
  F_005ee3d0(this GEN_EDX_FWD,0);
  if (*((char *)GEN_TOP((*(int *)(this + 4) + 0x53))) == '\0') {
    dVar10 = F_005ee0f0(this GEN_EDX_ARG,1);
    iVar4 = *(int *)(REFG(int, 0x137104c) + 0x25e0);
    uVar1 = *(undefined4 *)(this + 0x24);
    uVar2 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(iVar4 + 0x5c) = uVar1;
    *(float *)(iVar4 + 100) = (float)dVar10;
    *(undefined4 *)(iVar4 + 0x60) = uVar2;
  }
  piVar5 = *(int * PTR32 *)(this + 0x34);
  piVar9 = (int *)*piVar5;
  piVar8 = piVar5;
  if (piVar9 != piVar5) {
    do {
      this_00 = (undefined *)piVar9[4];
      piVar8 = (int *)F_005d8ee0(this_00 GEN_EDX_ARG,this + 0x20);
      *(undefined1 *)((int)this_00 + 0x1c) = 0;
      if (*(char *)((int)this_00 + 0x12) != '\0') {
        piVar8 = (int *)F_005f92f0(this_00 GEN_EDX_ARG);
        *(undefined1 *)((int)this_00 + 0x12) = 0;
      }
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar6 = (int *)piVar9[2];
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          cVar3 = *(char *)(*piVar6 + 0x15);
          piVar8 = (int *)*piVar6;
          while (piVar9 = piVar6, cVar3 == '\0') {
            cVar3 = *(char *)(*piVar8 + 0x15);
            piVar6 = piVar8;
            piVar8 = (int *)*piVar8;
          }
        }
        else {
          cVar3 = *(char *)(piVar9[1] + 0x15);
          piVar7 = (int *)piVar9[1];
          piVar6 = piVar9;
          while ((piVar8 = piVar7, piVar9 = piVar8, cVar3 == '\0' && (piVar6 == (int *)piVar8[2])))
          {
            cVar3 = *(char *)(piVar8[1] + 0x15);
            piVar7 = (int *)piVar8[1];
            piVar6 = piVar8;
          }
        }
      }
    } while (piVar9 != piVar5);
  }
  return (uint)piVar8;
}

/* ref: FUN_005fa820 */
GEN_FRAME uint GEN_THISCALL F_005fa820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fa820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  undefined * this_00;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  F_005ee3d0(this GEN_EDX_FWD,1);
  piVar2 = *(int * PTR32 *)((int)this + 0x34);
  piVar6 = (int *)*piVar2;
  piVar5 = piVar2;
  if (piVar6 != piVar2) {
    do {
      this_00 = (undefined *)piVar6[4];
      *(undefined1 *)((int)this_00 + 0x12) = 1;
      piVar5 = (int *)F_005d8ee0(this_00 GEN_EDX_ARG,(int)this + 0x20);
      *(undefined1 *)((int)this_00 + 0x1c) = 0;
      if (*(char *)((int)this_00 + 0x12) != '\0') {
        piVar5 = (int *)F_005f92f0(this_00 GEN_EDX_ARG);
        *(undefined1 *)((int)this_00 + 0x12) = 0;
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = (int *)*piVar3;
          while (piVar6 = piVar3, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar3 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar5 = piVar4, piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar5[2])))
          {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar6 != piVar2);
  }
  return (uint)piVar5;
}

/* ref: FUN_005fa8b0 */
GEN_FRAME uint GEN_THISCALL F_005fa8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fa8b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_005ee3d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,1);
  F_00614c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    this_00 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    *(undefined1 *)((int)this_00 + 0x12) = 1;
    pvVar1 = (undefined *)F_005d8ee0(this_00 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20);
    *(undefined1 *)((int)this_00 + 0x1c) = 0;
    if (*(char *)((int)this_00 + 0x12) != '\0') {
      pvVar1 = (undefined *)F_005f92f0(this_00 GEN_EDX_ARG);
      *(undefined1 *)((int)this_00 + 0x12) = 0;
    }
  }
  return (uint)pvVar1;
}

/* ref: FUN_005fa910 */
GEN_NOFRAME uint GEN_THISCALL F_005fa910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fa910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  F_00425030(0);
  *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) | 1;
  F_005e2870(*(undefined * PTR32 *)((int)this + 0x48) GEN_EDX_ARG);
  if (*(char *)((int)this + 0x52) != '\0') {
    this_00 = *(undefined * PTR32 *)((int)this + 0x44);
    *(undefined1 *)((int)this + 0x52) = 0;
    *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)this + 0x5c);
    F_005ee3d0(this_00 GEN_EDX_ARG,1);
    F_005ebe80(this_00 GEN_EDX_ARG);
  }
  uVar1 = F_005fa820(*(undefined * PTR32 *)((int)this + 0x44) GEN_EDX_ARG);
  F_004ff5f0(REFG(undefined4, 0x1375aec) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x10) = 6;
  return uVar1;
}

/* ref: FUN_005fa980 */
GEN_FRAME uint F_005fa980(unsigned int gen_a0)
{
  GEN_ENTER(0x5fa980u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(REFG(int, 0x1379cb0) + 0x14) != 0) {
    this = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379cb0) + 0x14) + 0x44)));
    ((undefined1 *)(gen_frame + 0x8))[0] = (undefined1)param_1;
    F_005ee3d0(this GEN_EDX_ARG,1);
    F_00614c10((undefined *)((int)this + 0x30) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
    uVar1 = (*(uint *)(gen_frame + 0x4));
    if ((*(uint *)(gen_frame + 0x4)) != *(uint *)((int)this + 0x34)) {
      this_00 = *(undefined * PTR32 *)((*(uint *)(gen_frame + 0x4)) + 0x10);
      *(undefined1 *)((int)this_00 + 0x12) = 1;
      uVar1 = F_005d8ee0(this_00 GEN_EDX_ARG,(int)this + 0x20);
      *(undefined1 *)((int)this_00 + 0x1c) = 0;
      if (*(char *)((int)this_00 + 0x12) != '\0') {
        uVar1 = F_005f92f0(this_00 GEN_EDX_ARG);
        *(undefined1 *)((int)this_00 + 0x12) = 0;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_005fa9f0 */
GEN_NOFRAME uint GEN_THISCALL F_005fa9f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fa9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00614b20((undefined *)((int)this + 0x68) GEN_EDX_FWD);
  F_00614b20((undefined *)((int)this + 0x78) GEN_EDX_ARG);
  F_0061dc60((undefined *)((int)this + 0x88) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 4))) = *(int *)((int)this + 0x8c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x8c);
  uVar1 = *(uint *)((int)this + 0x8c);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 0x90) = 0;
  return uVar1;
}

/* ref: FUN_005faa40 */
GEN_FRAME byte GEN_THISCALL F_005faa40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5faa40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  (*(int *)(gen_frame + 0x38)) = (*(int *)&gen_args[0]);
  F_006192f0((undefined *)((*(int *)&gen_args[0]) + 0x88) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),(*(undefined4 * PTR32 *)&gen_args[2]));
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((*(undefined4 * PTR32 *)&gen_args[2]) == *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0x8c)) {
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    puVar4 = (undefined4 *)F_004296a0(0x14,0,900);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar4;
    *puVar4 = puVar4;
    puVar4[1] = puVar4;
    puVar4[2] = puVar4;
    *(undefined1 *)(puVar4 + 4) = 1;
    *(undefined1 *)((int)puVar4 + 0x11) = 1;
    uVar1 = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x8)) = *puVar5;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    puVar4 = (undefined4 *)F_004296a0(0x14,0,900);
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar4;
    *puVar4 = puVar4;
    puVar4[1] = puVar4;
    puVar4[2] = puVar4;
    *(undefined1 *)(puVar4 + 4) = 1;
    *(undefined1 *)((int)puVar4 + 0x11) = 1;
    F_00617b50(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    puVar4 = (undefined4 *)F_004296a0(0x28,0,900);
    *puVar4 = *(undefined4 *)((*(int *)&gen_args[0]) + 0x8c);
    puVar4[1] = *(undefined4 *)((*(int *)&gen_args[0]) + 0x8c);
    puVar4[2] = *(undefined4 *)((*(int *)&gen_args[0]) + 0x8c);
    *(undefined2 *)(puVar4 + 9) = 0;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      F_0061d8f0(puVar4 + 3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
    }
    F_0061df50((undefined *)((*(int *)&gen_args[0]) + 0x88) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x30)),puVar4,0);
    F_00619bb0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x14)),(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x14)),0x14,900);
    F_00619bb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x24)),(*(undefined4 * PTR32 *)(gen_frame + 0x24)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x24)),0x14,900);
    if ((*(byte *)(gen_frame + 0x34)) == 0) {
      return 0;
    }
    puVar5 = (undefined4 *)F_004296a0(0x14,0,900);
    *puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x30))[6];
    puVar5[1] = (*(undefined4 * PTR32 *)(gen_frame + 0x30))[6];
    puVar5[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x30))[6];
    *(undefined2 *)(puVar5 + 4) = 0;
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
    if (puVar5 + 3 != (uint *)0x0) {
      puVar5[3] = (*(uint *)&gen_args[1]);
    }
  }
  else {
    puVar5 = (undefined4 *)F_004296a0(0x14,0,900);
    *puVar5 = puVar4[6];
    puVar5[1] = puVar4[6];
    puVar5[2] = puVar4[6];
    *(undefined2 *)(puVar5 + 4) = 0;
    if (puVar5 + 3 != (uint *)0x0) {
      puVar5[3] = (*(uint *)&gen_args[1]);
    }
  }
  uVar2 = (*(uint *)&gen_args[1]);
  F_006188d0(puVar4 + 5 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x30)),puVar5,0);
  (*(uint *)&gen_args[1]) = *(uint *)((*(int *)(gen_frame + 0x38)) + 0x24);
  bVar3 = F_005d8fa0(uVar2,(*(undefined4 *)&gen_args[3]),(*(int *)(gen_frame + 0x38)) + 0x40,GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))),&(*(uint *)&gen_args[1]));
  *(byte *)(uVar2 + 0x20) =
       (bVar3 & 1 | *(byte *)(uVar2 + 0x20) & 2) * '\x02' | *(byte *)(uVar2 + 0x20) & 0xf9;
  return (*(byte *)(gen_frame + 0x34));
}

/* ref: FUN_005fac50 */
GEN_NOFRAME byte GEN_THISCALL F_005fac50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fac50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_FWD,((float *)(gen_frame + 0x0)));
  uVar1 = *(ushort *)((int)this + 100);
  bVar4 = 0;
  uVar7 = (uint)uVar1;
  for (uVar5 = uVar7; 1 < uVar5; uVar5 = uVar5 >> 1) {
    bVar4 = bVar4 + 1;
  }
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 2)) = gen_x87_cw;
  (*(ushort *)(gen_frame + 0x1a)) = (short)(int)(*(float *)(gen_frame + 0x8)) >> (bVar4 & 0x1f);
  (*(uint *)(gen_frame + 0x38)) = gen_x87_cw | 0xc00;
  (*(short *)(gen_frame + 0x18)) = (short)(int)((float *)(gen_frame + 0x0))[0] >> (bVar4 & 0x1f);
  (*(longlong *)(gen_frame + 0x20)) = (longlong)TRUNC((float10)(*(float *)(gen_frame + 0xc)));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 0)) = (int)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0xc)));
  uVar5 = ((((int)(*(longlong *)(gen_frame + 0x20)) + uVar7) * 2 - 2) / uVar7 & 0xff) >> 1;
  (*(uint *)(gen_frame + 0x38)) = -uVar5;
  (*(uint *)(gen_frame + 0x3c)) = uVar5;
  (*(int *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x38));
  iVar9 = (*(uint *)(gen_frame + 0x38));
  if (-uVar5 == uVar5 || SBORROW4((*(uint *)(gen_frame + 0x38)),uVar5) != (int)(uVar5 * -2) < 0) {
    do {
      if (iVar9 <= (int)uVar5) {
        (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 4)) = uVar1;
        (*(longlong *)(gen_frame + 0x20)) = (ulonglong)uVar1 << 0x20;
        (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x38)) + (*(ushort *)(gen_frame + 0x1a)) & 0xffff;
        iVar8 = iVar9;
        do {
          lVar3 = (*(longlong *)(gen_frame + 0x20));
          sVar2 = (short)iVar8 + (*(short *)(gen_frame + 0x18));
          sVar6 = 0;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 0)) = 0;
          (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 6)) = 0;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 4)) = (uint)((ulonglong)lVar3 >> 0x20) & 0xffff;
          uVar5 = uVar7;
          if (1 < uVar7) {
            do {
              uVar5 = uVar5 >> 1;
              sVar6 = sVar6 + 1;
            } while (1 < uVar5);
            (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 6)) = sVar6;
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 4)) = (uint)(CONCAT26(sVar6,(int6)lVar3) >> 0x20);
          }
          (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 0)) = sVar2;
          (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 2)) = (undefined2)(*(uint *)(gen_frame + 0x34));
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x20)) + 0)) = CONCAT22((undefined2)(*(uint *)(gen_frame + 0x34)),sVar2);
          bVar4 = F_005faa40((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,(uint)param_1,&(*(longlong *)(gen_frame + 0x20)),((float *)(gen_frame + 0x0)));
          if (bVar4 == 0) {
            return 0;
          }
          iVar8 = iVar8 + 1;
          uVar5 = (*(uint *)(gen_frame + 0x3c));
          iVar9 = (*(int *)(gen_frame + 0x2c));
        } while (iVar8 <= (int)(*(uint *)(gen_frame + 0x3c)));
      }
      (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x38)) <= (int)uVar5);
  }
  return 1;
}

/* ref: Client::LayoutEngine::Streaming::StreamingManager::vf2 */
GEN_FRAME uint GEN_THISCALL F_005fad90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fad90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)(this + 0x34);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[4];
    F_00614b20(puVar4 + 0x1a GEN_EDX_FWD);
    F_00614b20(puVar4 + 0x1e GEN_EDX_ARG);
    F_0061dc60(puVar4 + 0x22 GEN_EDX_ARG,*(undefined4 *)(puVar4[0x23] + 4));
    *(undefined4 *)(puVar4[0x23] + 4) = puVar4[0x23];
    *(undefined4 *)puVar4[0x23] = puVar4[0x23];
    *(undefined4 *)(puVar4[0x23] + 8) = puVar4[0x23];
    puVar4[0x24] = 0;
    if (puVar4 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar6 = F_00614bb0(this + 0x30 GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_005fae70 */
GEN_FRAME uint GEN_THISCALL F_005fae70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fae70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  short sVar4;
  short sVar5;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    bVar2 = F_005fac50(this GEN_EDX_ARG,param_1,param_2);
    return CONCAT31(extraout_var,bVar2);
  }
  uVar1 = *(ushort *)((int)this + 100);
  uVar3 = (uint)uVar1;
  sVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(ushort *)(gen_frame + 0x8)) = uVar1;
  (*(short *)(gen_frame + 0xa)) = 0;
  if (1 < uVar3) {
    do {
      uVar3 = uVar3 >> 1;
      sVar4 = sVar4 + 1;
    } while (1 < uVar3);
    (*(short *)(gen_frame + 0xa)) = sVar4;
  }
  sVar4 = (short)(int)*param_2 >> ((byte)(*(short *)(gen_frame + 0xa)) & 0x1f);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = sVar4;
  sVar5 = (short)(int)param_2[2] >> ((byte)(*(short *)(gen_frame + 0xa)) & 0x1f);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = sVar5;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT22(sVar5,sVar4);
  bVar2 = F_005faa40(this GEN_EDX_ARG,(uint)param_1,&(*(undefined4 *)(gen_frame + 0x4)),param_2);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: FUN_005faf00 */
GEN_FRAME uint GEN_THISCALL F_005faf00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5faf00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 uVar1;
  undefined * pvVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined * pvVar4;
  
  pvVar2 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  pvVar4 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  if (bVar3 == 0) {
    uVar1 = *(undefined1 *)((int)pvVar2 + 0x11);
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(CONCAT13(uVar1,GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[1]), 0, 3))));
    F_00614c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3);
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
      uVar5 = F_005fae70(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG,pvVar2,(*(undefined4 *)&gen_args[2]));
      return uVar5;
    }
  }
  return (uint)pvVar4 & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf1 */
GEN_FRAME uint GEN_THISCALL F_005faf60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5faf60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 CVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  
  uVar4 = (*(uint *)&gen_args[1]);
  F_005ed050((undefined *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  F_006035f0((*(undefined * PTR32 *)&gen_args[0]) + 0x34 GEN_EDX_ARG,*(uint *)(uVar4 + 0x14));
  uVar2 = *(undefined4 *)(uVar4 + 0x14);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) || (iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x44);
  }
  bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    CVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x11];
    (*(undefined4 *)&gen_args[2]) = CONCAT13(CVar1,(undefined3)(*(undefined4 *)&gen_args[2]));
    F_00614c10((undefined *)(iVar5 + 0x30) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar5 + 0x34)) {
      uVar4 = F_005fae70(*(undefined * PTR32 *)((*(uint *)&gen_args[1]) + 0x10) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
  }
  return uVar4;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_005fafe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fafe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10) GEN_EDX_ARG,this,(*(uint *)(gen_frame + 0x14)));
      }
    }
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(uint *)(gen_frame + 0x14)) != *(uint *)(iVar1 + 0x34)) {
        F_005fae70(*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x14)) + 0x10) GEN_EDX_ARG,this,param_1);
      }
    }
  }
  F_006035f0(this + 0x34 GEN_EDX_ARG,param_1);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf1 */
GEN_FRAME uint GEN_THISCALL F_005fb0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fb0c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 GVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  
  uVar4 = (*(uint *)&gen_args[1]);
  F_005ed050((undefined *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  F_006039f0((*(undefined * PTR32 *)&gen_args[0]) + 0x3c GEN_EDX_ARG,*(undefined4 *)(uVar4 + 0x14));
  uVar2 = *(undefined4 *)(uVar4 + 0x14);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) || (iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x44);
  }
  bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    GVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x11];
    (*(undefined4 *)&gen_args[2]) = CONCAT13(GVar1,(undefined3)(*(undefined4 *)&gen_args[2]));
    F_00614c10((undefined *)(iVar5 + 0x30) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar5 + 0x34)) {
      uVar4 = F_005fae70(*(undefined * PTR32 *)((*(uint *)&gen_args[1]) + 0x10) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
  }
  return uVar4;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_005fb140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10) GEN_EDX_ARG,this,(*(uint *)(gen_frame + 0x14)));
      }
    }
    bVar2 = F_005d9c60(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(uint *)(gen_frame + 0x14)) != *(uint *)(iVar1 + 0x34)) {
        F_005fae70(*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x14)) + 0x10) GEN_EDX_ARG,this,param_1);
      }
    }
  }
  F_006039f0(this + 0x3c GEN_EDX_ARG,param_1);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_005fb220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD);
  if ((((char)uVar2 != '\0') &&
      (((*(int *)(this + 0x38) != 0 || (*(int *)(this + 0x3c) != 0)) && (*(int *)(this + 8) != 0))))
     && ((iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0 &&
         (this_00 = *(undefined * PTR32 *)(iVar1 + 0x44), this_00 != (undefined *)0x0)))) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_005f72f0(this_00 GEN_EDX_ARG,this,uVar2);
    F_005faf00(this_00 GEN_EDX_ARG,this,param_1);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_005fb2b0 */
GEN_FRAME uint GEN_THISCALL F_005fb2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fb2b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  char * pcVar6;
  int iVar7;
  
  iVar2 = (*(int *)&gen_args[2]);
  uVar4 = *(uint *)((*(int *)&gen_args[2]) + 0x38);
  if (uVar4 != 0) {
    pcVar6 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x34) + (*(int *)&gen_args[2]))));
    if ((uVar4 != 1) || (*pcVar6 != '\0')) {
      iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
      if (iVar7 == 0) {
        (*(int *)(gen_frame + 0x8)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x8)) = *(int *)(iVar7 + 4);
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) & 0xfffffffe | 2;
      if ((iVar7 == 0) || (*(int *)(iVar7 + 4) == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = *((int *)GEN_TOP((*(int *)(iVar7 + 4) + 0x44)));
      }
      bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
      if (bVar3 == 0) {
        uVar1 = *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11)));
        (*(int *)&gen_args[2]) = CONCAT13(uVar1,(undefined3)(*(int *)&gen_args[2]));
        F_00614c10((undefined *)(iVar7 + 0x30) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),(int)&(*(int *)&gen_args[2]) + 3);
        if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar7 + 0x34)) {
          F_005fae70(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
        }
      }
      if (*(int *)(iVar2 + 0x38) == 1) {
        puVar5 = (undefined4 *)F_00509330((undefined *)((*(int *)(gen_frame + 0x8)) + 0x14c) GEN_EDX_ARG,pcVar6);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *puVar5;
      }
      else if (*(int *)(iVar2 + 0x38) == 2) {
        uVar4 = F_005f4db0((undefined *)((*(int *)(gen_frame + 0x8)) + 0x15c) GEN_EDX_ARG,*(int *)(iVar2 + 0x44) + iVar2);
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = uVar4;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        return uVar4;
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    }
  }
  return uVar4;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_005fb3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD);
  if (((((char)uVar3 != '\0') && (*(int *)(this + 8) != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x44), (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar2, pvVar2 != (undefined *)0x0)) {
    if (((byte)this[0x8c] & 4) != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_005f72f0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,this,uVar3);
      this[0x8c] = (undefined1)((byte)this[0x8c] & 0xfb);
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      F_005faf00((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,this,param_1);
      this[0x8c] = (undefined1)((byte)this[0x8c] | 4);
    }
  }
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  *(undefined4 *)(this + 0x50) = param_1[4];
  *(undefined4 *)(this + 0x54) = param_1[5];
  *(undefined4 *)(this + 0x58) = param_1[6];
  *(undefined4 *)(this + 0x5c) = param_1[7];
  *(undefined4 *)(this + 0x60) = param_1[8];
  *(undefined4 *)(this + 100) = param_1[9];
  *(undefined4 *)(this + 0x68) = param_1[10];
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf1 */
GEN_FRAME uint GEN_THISCALL F_005fb490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fb490u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 LVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  
  uVar4 = (*(uint *)&gen_args[1]);
  F_005ed050((undefined *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 4;
  uVar2 = *(undefined4 *)(uVar4 + 0x14);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) || (iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x44);
  }
  bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    LVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x11];
    (*(undefined4 *)&gen_args[2]) = CONCAT13(LVar1,(undefined3)(*(undefined4 *)&gen_args[2]));
    F_00614c10((undefined *)(iVar5 + 0x30) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar5 + 0x34)) {
      uVar4 = F_005fae70(*(undefined * PTR32 *)((*(uint *)&gen_args[1]) + 0x10) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
  }
  return uVar4;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf18 */
GEN_FRAME uint GEN_THISCALL F_005fb500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD);
  if (((((char)uVar2 != '\0') && (*(int *)(this + 8) != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (this_00 = *(undefined * PTR32 *)(iVar1 + 0x44), this_00 != (undefined *)0x0)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe4))(this GEN_EDX_ARG);
    F_005f72f0(this_00 GEN_EDX_ARG,this,uVar2);
    F_005faf00(this_00 GEN_EDX_ARG,this,param_1);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf1 */
GEN_FRAME uint GEN_THISCALL F_005fb560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fb560u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 CVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  
  uVar4 = (*(uint *)&gen_args[1]);
  F_005ed050((undefined *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 3;
  uVar2 = *(undefined4 *)(uVar4 + 0x14);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) || (iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x44);
  }
  bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    CVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x11];
    (*(undefined4 *)&gen_args[2]) = CONCAT13(CVar1,(undefined3)(*(undefined4 *)&gen_args[2]));
    F_00614c10((undefined *)(iVar5 + 0x30) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar5 + 0x34)) {
      uVar4 = F_005fae70(*(undefined * PTR32 *)((*(uint *)&gen_args[1]) + 0x10) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
  }
  return uVar4;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf18 */
GEN_FRAME uint GEN_THISCALL F_005fb5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD);
  if (((((char)uVar2 != '\0') && (*(int *)(this + 8) != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (this_00 = *(undefined * PTR32 *)(iVar1 + 0x44), this_00 != (undefined *)0x0)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe4))(this GEN_EDX_ARG);
    F_005f72f0(this_00 GEN_EDX_ARG,this,uVar2);
    F_005faf00(this_00 GEN_EDX_ARG,this,param_1);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_005fb630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD);
  if (((((char)uVar2 != '\0') && (*(int *)(this + 8) != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (this_00 = *(undefined * PTR32 *)(iVar1 + 0x44), this_00 != (undefined *)0x0)) {
    if (((byte)this[0x94] & 8) != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_005f72f0(this_00 GEN_EDX_ARG,this,uVar2);
    }
    F_005faf00(this_00 GEN_EDX_ARG,this,param_1);
  }
  uVar2 = F_006039f0(this + 0x70 GEN_EDX_ARG,param_1);
  this[0x94] = (undefined1)((byte)this[0x94] | 8);
  return uVar2;
}

/* ref: FUN_005fb6c0 */
GEN_FRAME uint GEN_THISCALL F_005fb6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fb6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5c70));
  F_0061e0d0((undefined *)((int)this + 0x88) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x8c),
               *(undefined4 * PTR32 *)((int)this + 0x8c));
  F_00429760(*(undefined4 *)((int)this + 0x8c),0x28,900);
  F_006173d0((undefined *)((int)this + 0x78) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x7c),
               *(undefined4 * PTR32 *)((int)this + 0x7c));
  F_00429760(*(undefined4 *)((int)this + 0x7c),0x18,0x385);
  F_006173d0((undefined *)((int)this + 0x68) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6c),
               *(undefined4 * PTR32 *)((int)this + 0x6c));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x6c),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_005fb750 */
GEN_FRAME uint F_005fb750(unsigned int gen_a0)
{
  GEN_ENTER(0x5fb750u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * this;
  undefined * this_00;
  uint uVar4;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    this = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4) GEN_EDX_ARG,1);
  }
  else {
    this_00 = (undefined *)F_00406b90(0x48,0,0);
    if (this_00 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_005ddbd0(this_00 GEN_EDX_ARG);
    }
  }
  ((GEN_TCODE *)*(gen_code32 *)(*this + 4))(this GEN_EDX_ARG,piVar3,*(int *)(iVar2 + 0x30) + iVar2);
  F_005fb2b0(this GEN_EDX_ARG,piVar3[5],iVar2);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *this;
    uVar4 = F_00a1d0c0((undefined *)piVar3[3] GEN_EDX_ARG);
    ((code *)*(gen_code32 *)(iVar1 + 100))(this,uVar4);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(int *)(iVar2 + 0x30) + iVar2)));
  ((GEN_TCODE *)*(gen_code32 *)(*this + 0x6c))(this GEN_EDX_ARG,piVar3[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf4 */
GEN_NOFRAME byte GEN_THISCALL F_005fb810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  int * piVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined * this_00;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = F_00a1fa60(this + 0x10,uVar5,param_1);
  }
  uVar6 = CONCAT31((int3)(uVar6 >> 8),(*(char *)(param_1 + 0x48) != '\0') << 4 ^ (byte)this[0x2b]) &
          0xffffff10;
  this[0x2b] = (undefined1)((byte)this[0x2b] ^ (byte)uVar6);
  uVar6 = CONCAT31((int3)(uVar6 >> 8),this[0x2b]);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar6 = *(uint *)(this + 8), uVar6 == 0 ||
      (((*(int *)(uVar6 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(uVar6 + 4) + 0x50))) != '\0')) &&
       ((uVar6 == 0 || ((*(byte *)(uVar6 + 0x16) & 1) != 0)))))))) {
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xcc))(this GEN_EDX_ARG);
    if ((char)uVar6 != '\0') {
      uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
      goto LAB_005fb8bd;
    }
  }
  uVar6 = uVar6 & 0xffffff00;
LAB_005fb8bd: ;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe0))(this GEN_EDX_ARG,uVar6);
  bVar4 = F_005eba10(this GEN_EDX_ARG,param_1);
  if (bVar4 != 0) {
    F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
    F_005f8a00(this GEN_EDX_ARG);
    F_005fb2b0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1);
  }
  piVar2 = *(int * PTR32 *)(this + 0x34);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = uVar3;
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x40),uVar3);
  }
  if (*(char *)(param_1 + 0x49) != '\x02') {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 0x30) + 0x95)));
    *pbVar1 = *pbVar1 ^ (*(char *)(param_1 + 0x49) == '\x01' ^
                        *((byte *)GEN_TOP((*(int *)(this + 0x30) + 0x95)))) & 1;
  }
  if (*(char *)(param_1 + 0x4a) != '\x02') {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 0x30) + 0x95)));
    *pbVar1 = *pbVar1 ^ ((*(char *)(param_1 + 0x4a) == '\x01') * '\x02' ^
                        *((byte *)GEN_TOP((*(int *)(this + 0x30) + 0x95)))) & 2;
  }
  F_006a3820(*(undefined4 *)(this + 0x30) GEN_EDX_ARG,(int)*(float *)(param_1 + 0x4c) & 0xffff);
  if (*(int *)(this + 8) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  if (*(int *)((int)this_00 + 0x10) == 7) {
    bVar4 = F_005e9d30(this_00 GEN_EDX_ARG,this);
    this_00 = (undefined *)(uint)bVar4;
  }
  return (byte)this_00;
}

/* ref: FUN_005fb9a0 */
GEN_NOFRAME uint GEN_THISCALL F_005fb9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fb9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5c70));
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x12) = 1;
  *(undefined4 *)((int)this + 0x40) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x40), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x44) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x44), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x48) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x48), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x50) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x50), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x54) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x54), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x58) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x58), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0x10;
  uVar2 = 0x10;
  sVar1 = 0;
  do {
    uVar2 = uVar2 >> 1;
    sVar1 = sVar1 + 1;
  } while (1 < uVar2);
  *(short *)((int)this + 0x66) = sVar1;
  *(undefined4 *)((int)this + 0x70) = 0;
  uVar2 = F_004296a0(0x18,0,0x385);
  *(uint *)((int)this + 0x6c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c) + 4))) = *(int *)((int)this + 0x6c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c) + 8))) = *(int *)((int)this + 0x6c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar2 = F_004296a0(0x18,0,0x385);
  *(uint *)((int)this + 0x7c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + 4))) = *(int *)((int)this + 0x7c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + 8))) = *(int *)((int)this + 0x7c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x90) = 0;
  uVar2 = F_004296a0(0x28,0,900);
  *(uint *)((int)this + 0x8c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 4))) = *(int *)((int)this + 0x8c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) = *(int *)((int)this + 0x8c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x25))) = 1;
  return (uint)this;
}

/* ref: FUN_005fbb00 */
GEN_FRAME uint F_005fbb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fbb00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = 0;
  uVar1 = 0;
  do {
    if ((param_1 & 0xff) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      puVar4 = &REFG(undefined4, 0x10a2810) + iVar3 * 10;
      goto LAB_005fbb28;
    }
    uVar1 = uVar1 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar1 < 0x208);
  puVar4 = &REFG(undefined4, 0x10a2810);
LAB_005fbb28: ;
  if (puVar4[1] != 0) {
    pvVar2 = (undefined *)F_00406b90(0xa0,0,0);
    if (pvVar2 != (undefined *)0x0) {
      pvVar2 = (undefined *)F_005fb9a0(pvVar2 GEN_EDX_ARG);
      F_005e9a10(pvVar2 GEN_EDX_ARG,param_1,param_2);
      return (uint)pvVar2;
    }
    F_005e9a10((undefined *)0x0 GEN_EDX_ARG,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_005fbb80 */
GEN_NOFRAME uint F_005fbb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5fbb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  ushort uVar2;
  int * piVar3;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(param_2 + 4);
  (*(byte *)(gen_frame + 0x6f)) = *param_2;
  iVar4 = (*(int *)&gen_a6);
  if ((((((*(int *)&gen_a6) != 4) && ((*(int *)&gen_a6) != 5)) && ((*(int *)&gen_a6) != 6)) && (((*(int *)&gen_a6) != 7 && ((*(int *)&gen_a6) != 8))))
     && (((*(int *)&gen_a6) != 9 && (((*(int *)&gen_a6) != 10 && (iVar4 = 0, param_5 != 0)))))) {
    iVar4 = 1;
  }
  if (param_6 == (undefined4 *)0x0) {
    F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 0xc);
  }
  else {
    uVar1 = param_6[4];
    (*(undefined4 *)(gen_frame + 0x0)) = *param_6;
    (*(undefined4 *)(gen_frame + 0x4)) = param_6[1];
    (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_6[2];
    (*(undefined4 *)(gen_frame + 0x14)) = param_6[5];
    (*(undefined4 *)(gen_frame + 0x20)) = param_6[8];
    (*(undefined4 *)(gen_frame + 0x18)) = param_6[6];
    (*(undefined4 *)(gen_frame + 0x24)) = param_6[9];
    (*(undefined4 *)(gen_frame + 0x1c)) = param_6[7];
    (*(undefined4 *)(gen_frame + 0x28)) = param_6[10];
  }
  uVar2 = 0xffff;
  if ((byte)param_9 != 0xff) {
    uVar2 = (ushort)(byte)param_9;
  }
  (*(ushort *)(gen_frame + 0x60)) = ((ushort)(*(byte *)(gen_frame + 0x6f)) << 6 | uVar2 & 0x3f) * 4 | 2;
  (*(undefined2 *)(gen_frame + 0x62)) = *(undefined2 *)(param_1 + 8);
  (*(int *)(gen_frame + 0x3c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x64)) = (*(undefined4 *)(gen_frame + 0x68));
  (*(undefined1 *)(gen_frame + 0x44)) = (undefined1)param_3;
  (*(undefined4 *)(gen_frame + 0x48)) = param_4;
  (*(ushort * PTR32 *)(gen_frame + 0x4c)) = &(*(ushort *)(gen_frame + 0x60));
  (*(byte * PTR32 *)(gen_frame + 0x40)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined1 *)(gen_frame + 0x58)) = (undefined1)param_8;
  piVar3 = (int *)0x0;
  (*(int *)(gen_frame + 0x54)) = iVar4;
  (*(byte *)(gen_frame + 0x59)) = (byte)param_9;
  (*(int *)(gen_frame + 0x5c)) = param_5;
  switch((unsigned int)(uintptr_t)((*(byte *)(gen_frame + 0x6f)))) {
  case 1: ;
    piVar3 = (int *)F_005fb750(&(*(int *)(gen_frame + 0x3c)));
    break;
  default: ;
    goto switchD_005fbcd1_caseD_2;
  case 3: ;
    piVar3 = (int *)F_005d9ec0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 4: ;
    piVar3 = (int *)F_005e1b40(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 5: ;
    piVar3 = (int *)F_005da190(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 6: ;
    if (iVar4 == 0) {
      (*(int *)(gen_frame + 0x54)) = 2;
    }
    goto LAB_005fbea7;
  case 7: ;
    piVar3 = (int *)F_005f3530(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 8: ;
    piVar3 = (int *)F_005e19c0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 9: ;
    piVar3 = (int *)F_005e1a80(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0xc: ;
    (*(int *)(gen_frame + 0x54)) = 4;
    piVar3 = (int *)F_005e1bf0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0xd: ;
    piVar3 = (int *)F_005da030(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0xe: ;
    (*(int *)(gen_frame + 0x54)) = 7;
    piVar3 = (int *)F_005e1d70(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0xf: ;
    (*(int *)(gen_frame + 0x54)) = 10;
LAB_005fbea7: ;
    piVar3 = (int *)F_005f4cd0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x10: ;
    (*(int *)(gen_frame + 0x54)) = 5;
    piVar3 = (int *)F_005e1cb0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x27: ;
    piVar3 = (int *)F_005d9f70(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x28: ;
    piVar3 = (int *)F_005f7f10(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x29: ;
    piVar3 = (int *)F_005e1ef0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x2b: ;
    piVar3 = (int *)F_005e2050(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x2c: ;
    piVar3 = (int *)F_005e2100(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x2d: ;
    (*(int *)(gen_frame + 0x54)) = 6;
    piVar3 = (int *)F_005e1e30(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x2f: ;
    piVar3 = (int *)F_005da0e0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x31: ;
    piVar3 = (int *)F_005e21b0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x33: ;
    piVar3 = (int *)F_005da240(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x39: ;
    piVar3 = (int *)F_005e2320(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x3a: ;
    piVar3 = (int *)F_005e23d0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x3b: ;
    piVar3 = (int *)F_005e2260(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x41: ;
    piVar3 = (int *)F_005e2690(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x42: ;
    piVar3 = (int *)F_005e2740(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x43: ;
    piVar3 = (int *)F_005e2480(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x44: ;
    piVar3 = (int *)F_005da2f0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x45: ;
    piVar3 = (int *)F_005da3a0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x46: ;
    piVar3 = (int *)F_005e2530(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x47: ;
    piVar3 = (int *)F_005e1fa0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x48: ;
    piVar3 = (int *)F_005e25e0(&(*(int *)(gen_frame + 0x3c)));
  }
  if (piVar3 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG,param_2);
  }
switchD_005fbcd1_caseD_2: ;
  return (uint)piVar3;
}

/* ref: FUN_005fbfa0 */
GEN_NOFRAME byte GEN_THISCALL F_005fbfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fbfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  undefined3 extraout_var = 0;
  undefined * this_00;
  int iVar8;
  int iVar9;
  int iVar10;
  int * piVar11;
  
  if ((((byte)param_2 < 5) && (param_1[1] == 1)) &&
     (iVar10 = *param_1, *(int *)((int)param_1 + iVar10 + 0xc) == 1)) {
    iVar8 = *(int *)((int)param_1 + iVar10 + 8);
    iVar10 = (int)param_1 + *(int *)((int)param_1 + iVar8 + iVar10) + iVar8 + iVar10;
    (*(int *)(gen_frame + 0xb4)) = iVar10;
    (*(int * PTR32 *)(gen_frame + 0xc0)) = *(int * PTR32 *)(iVar10 + 0xc);
    if (*(int * PTR32 *)(iVar10 + 0xc) != (int *)0x0) {
      uVar6 = *(uint *)((int)this + 8);
      if (uVar6 == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)0x0;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0xc8)) = *(undefined * PTR32 *)(uVar6 + 4);
      }
      (*(uint *)(gen_frame + 0xac)) = uVar6;
      if (uVar6 == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0xc8)) = *(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10);
        uVar6 = F_005f2f30(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10) GEN_EDX_FWD);
        (*(uint *)(gen_frame + 0xac)) = uVar6;
      }
      (*(int *)(gen_frame + 0xa4)) = *(int *)((int)this + 0x14);
      F_0061bcf0((undefined *)((int)this + 0x78) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0xc0)));
      (*(int *)(gen_frame + 0xc4)) = 0;
      if (0 < (int)(*(int * PTR32 *)(gen_frame + 0xc0))) {
        (*(int *)(gen_frame + 0xb0)) = (4 - (param_2 & 0xff)) * 8;
        do {
          iVar10 = *(int *)(iVar10 + 8) + iVar10;
          piVar11 = ((int *)GEN_TOP((*(int *)(iVar10 + (*(int *)(gen_frame + 0xc4)) * 4) + iVar10)));
          (*(int * PTR32 *)(gen_frame + 0xcc)) = ((int *)GEN_TOP((piVar11[1] << ((byte)(*(int *)(gen_frame + 0xb0)) & 0x1f) | *(uint *)((int)this + 0x18))));
          (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar11 + 3;
          F_00a1e7d0(&(*(undefined4 *)(gen_frame + 0x70)),piVar11 + 3);
          if (*piVar11 == 7) {
            (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x70));
            (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x74));
            (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x78));
            (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x80));
            (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
            (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x84));
            (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x88));
            (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x8c));
            (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
            (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
            F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)),uVar6);
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
            fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 0x20) * (float10)(*(float *)(gen_frame + 0x90)))));
            (*(float *)(gen_frame + 0x60)) = fVar1;
            fVar2 = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 0x24) * (float10)(*(float *)(gen_frame + 0x94)))));
            (*(float *)(gen_frame + 0x64)) = fVar2;
            fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 0x28) * (float10)(*(float *)(gen_frame + 0x98)))));
            (*(float *)(gen_frame + 0x68)) = fVar3;
            (*(float *)(gen_frame + 0x20)) = fVar1;
            (*(float *)(gen_frame + 0x24)) = fVar2;
            (*(float *)(gen_frame + 0x28)) = fVar3;
          }
          else {
            uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
            F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x70)),uVar6);
          }
          F_00a1ea10((*(int * PTR32 *)(gen_frame + 0xbc)),((undefined1 *)(gen_frame + 0x0)));
          uVar6 = piVar11[1];
          piVar11[1] = (*(int *)(gen_frame + 0xa4));
          bVar5 = *(byte *)((int)this + 0x28);
          (*(uint *)(gen_frame + 0xb8)) = uVar6;
          piVar7 = (int *)F_005fbb80((*(uint *)(gen_frame + 0xac)),piVar11,0,0,(*(int * PTR32 *)(gen_frame + 0xcc)),((undefined1 *)(gen_frame + 0x0)),bVar5 & 0xf,param_2,
                                       (*(int *)(gen_frame + 0xc4)));
          *(byte *)(piVar7 + 8) =
               *(byte *)(piVar7 + 8) ^ (*(byte *)(piVar7 + 8) ^ *(byte *)((int)this + 0x20)) & 1;
          (*(int * PTR32 *)(gen_frame + 0xcc)) = piVar7;
          bVar5 = F_005d9b60(this GEN_EDX_ARG);
          uVar6 = CONCAT31(extraout_var,bVar5);
          if ((bVar5 == 0) ||
             (uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xcc))(piVar7 GEN_EDX_ARG), piVar7 = (*(int * PTR32 *)(gen_frame + 0xcc)), (char)uVar6 == '\0')
             ) {
            uVar6 = uVar6 & 0xffffff00;
          }
          else {
            uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
          }
          ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xe0))(piVar7 GEN_EDX_ARG,uVar6);
          F_005eab80(this GEN_EDX_ARG,(uint)(*(int * PTR32 *)(gen_frame + 0xcc)));
          if ((*(int *)((int)this + 0xa4) != 0) && (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0xcc)) + 0x11) == '\x06')) {
            (*(int * PTR32 *)(gen_frame + 0xcc))[0x29] = *(int *)((int)this + 0xa4);
          }
          piVar11[1] = (*(uint *)(gen_frame + 0xb8));
          F_00a1ea10((*(int * PTR32 *)(gen_frame + 0xbc)),&(*(undefined4 *)(gen_frame + 0x70)));
          this_00 = (undefined *)F_00406b90(0x50,0,0);
          if (this_00 == (undefined *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = F_005db070(this_00 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0xcc)));
          }
          *(undefined4 *)(uVar6 + 0x20) = (*(undefined4 *)(gen_frame + 0x70));
          *(undefined4 *)(uVar6 + 0x24) = (*(undefined4 *)(gen_frame + 0x74));
          *(undefined4 *)(uVar6 + 0x28) = (*(undefined4 *)(gen_frame + 0x78));
          *(undefined4 *)(uVar6 + 0x30) = (*(undefined4 *)(gen_frame + 0x80));
          *(undefined4 *)(uVar6 + 0x34) = (*(undefined4 *)(gen_frame + 0x84));
          *(undefined4 *)(uVar6 + 0x38) = (*(undefined4 *)(gen_frame + 0x88));
          *(undefined4 *)(uVar6 + 0x3c) = (*(undefined4 *)(gen_frame + 0x8c));
          *(float *)(uVar6 + 0x40) = (*(float *)(gen_frame + 0x90));
          *(float *)(uVar6 + 0x44) = (*(float *)(gen_frame + 0x94));
          *(float *)(uVar6 + 0x48) = (*(float *)(gen_frame + 0x98));
          (*(uint *)(gen_frame + 0xb8)) = uVar6;
          F_0061ce70((undefined *)((int)this + 0x78) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xb8)));
          bVar5 = F_005d6770(this GEN_EDX_ARG);
          if (bVar5 != 0) {
            F_005f7b00((*(undefined * PTR32 *)(gen_frame + 0xc8)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0xcc)));
          }
          iVar8 = (*(int *)(gen_frame + 0xc4)) + 1;
          (*(int *)(gen_frame + 0xc4)) = iVar8;
          iVar10 = (*(int *)(gen_frame + 0xb4));
        } while (iVar8 < (int)(*(int * PTR32 *)(gen_frame + 0xc0)));
      }
      (*(int *)(gen_frame + 0xc4)) = 0;
      if (0 < *(int *)(iVar10 + 0x30)) {
        iVar8 = (4 - (param_2 & 0xff)) * 8;
        (*(int *)(gen_frame + 0xb0)) = iVar8;
        (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)0x0;
        do {
          iVar9 = iVar10 + *(int *)(iVar10 + 0x2c);
          (*(int * PTR32 *)(gen_frame + 0xbc)) = (int *)0x0;
          uVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + iVar10 + *(int *)(iVar10 + 0x2c) + 4))) <<
                  ((byte)iVar8 & 0x1f) | *(uint *)((int)this + 0x18);
          (*(uint *)(gen_frame + 0xb8)) = uVar6;
          piVar11 = ((int *)GEN_TOP((*(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2)));
          if (piVar11 != (int *)0x0) {
            (*(int * PTR32 *)(gen_frame + 0xc0)) = *(int * PTR32 *)((int)this + 0x78);
            do {
              iVar4 = *(int *)(*(*(int * PTR32 *)(gen_frame + 0xc0)) + 0x10);
              iVar10 = (*(int *)(gen_frame + 0xb4));
              if (*(uint *)(iVar4 + 0x18) == uVar6) {
                *(byte *)(iVar4 + 0x2b) =
                     *(byte *)(iVar4 + 0x2b) ^
                     ((*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + iVar9 + 8) != '\0') * '\x02' ^
                     *(byte *)(iVar4 + 0x2b)) & 2;
                *(byte *)(iVar4 + 0x2b) =
                     ((*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + iVar9 + 9) != '\0') * '\x04' ^
                     *(byte *)(iVar4 + 0x2b)) & 4 ^ *(byte *)(iVar4 + 0x2b);
                break;
              }
              (*(int * PTR32 *)(gen_frame + 0xc0)) = (*(int * PTR32 *)(gen_frame + 0xc0)) + 1;
              piVar7 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xbc)) + 1);
              (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar7;
            } while (piVar7 < piVar11);
          }
          (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + 0xc);
          iVar9 = (*(int *)(gen_frame + 0xc4)) + 1;
          (*(int *)(gen_frame + 0xc4)) = iVar9;
        } while (iVar9 < *(int *)(iVar10 + 0x30));
      }
      if (*(int *)((int)this + 0xa0) != 0) {
        F_00406b30(*(int *)((int)this + 0xa0));
        *(undefined4 *)((int)this + 0xa0) = 0;
      }
      *(undefined1 *)((int)this + 0xc0) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005fc400 */
GEN_FRAME unsigned int GEN_THISCALL F_005fc400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fc400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  byte * pbVar9;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar4 = *(int *)(param_1 + 8) + param_1;
      pbVar9 = ((byte *)GEN_TOP((*(int *)(iVar4 + (*(int *)(gen_frame + 0x14)) * 4) + iVar4)));
      F_005ec610(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,(uint)*pbVar9,(uint)*(ushort *)((int)this + 8),
                   *(undefined4 *)(pbVar9 + 4),&(*(char *)(gen_frame + 0x1b)),&(*(undefined1 *)(gen_frame + 0x1a)));
      if ((*(char *)(gen_frame + 0x1b)) != '\0') {
        puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x20))[1]));
        cVar1 = *(char *)((int)puVar5 + 0x15);
        puVar6 = *(undefined4 * PTR32 *)((int)this + 0x20);
        while (cVar1 == '\0') {
          if ((uint)puVar5[3] < *(uint *)(pbVar9 + 4)) {
            puVar7 = (undefined4 *)puVar5[2];
            puVar5 = puVar6;
          }
          else {
            puVar7 = (undefined4 *)*puVar5;
          }
          puVar6 = puVar5;
          puVar5 = puVar7;
          cVar1 = *(char *)((int)puVar7 + 0x15);
        }
        puVar5 = *(undefined4 * PTR32 *)((int)this + 0x20);
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar6;
        if ((puVar6 == puVar5) || (*(uint *)(pbVar9 + 4) < (uint)puVar6[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar5;
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        else {
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
        }
        if (*ppuVar8 == *(undefined4 * PTR32 *)((int)this + 0x20)) {
          puVar5 = (undefined4 *)F_005fbb80(this,pbVar9,1,0,0,0,0,0,0xff);
          uVar2 = *(undefined4 *)(pbVar9 + 4);
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar5;
          puVar5 = (undefined4 *)F_004296a0(0x18,0,0x385);
          *puVar5 = *(undefined4 *)((int)this + 0x20);
          puVar5[1] = *(undefined4 *)((int)this + 0x20);
          puVar5[2] = *(undefined4 *)((int)this + 0x20);
          *(undefined2 *)(puVar5 + 5) = 0;
          if (puVar5 + 3 != (undefined4 *)0x0) {
            puVar5[3] = uVar2;
            puVar5[4] = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
          }
          F_006187f0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar5,0);
          F_005f7b00(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
        }
      }
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
    do {
      puVar5 = *(undefined4 * PTR32 *)((int)this + 0x20);
      iVar4 = *(int *)(param_1 + 0x24) + param_1;
      if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
        puVar6 = (undefined4 *)puVar5[1];
        do {
          if ((uint)puVar6[3] < *(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 4)) {
            puVar7 = (undefined4 *)puVar6[2];
          }
          else {
            puVar7 = (undefined4 *)*puVar6;
            puVar5 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((int)puVar7 + 0x15) == '\0');
      }
      puVar6 = *(undefined4 * PTR32 *)((int)this + 0x20);
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar5;
      if ((puVar5 == puVar6) || (*(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 4) < (uint)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      else {
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      if (*ppuVar8 != *(undefined4 * PTR32 *)((int)this + 0x20)) {
        F_005f7fc0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x4c))) GEN_EDX_ARG,(*ppuVar8)[4],
                     (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + *(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 8) + iVar4);
      }
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
    do {
      puVar5 = *(undefined4 * PTR32 *)((int)this + 0x20);
      iVar4 = param_1 + *(int *)(param_1 + 0x2c);
      if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
        puVar6 = (undefined4 *)puVar5[1];
        do {
          if ((uint)puVar6[3] < *(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 4)) {
            puVar7 = (undefined4 *)puVar6[2];
          }
          else {
            puVar7 = (undefined4 *)*puVar6;
            puVar5 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((int)puVar7 + 0x15) == '\0');
      }
      puVar6 = *(undefined4 * PTR32 *)((int)this + 0x20);
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
      if ((puVar5 == puVar6) || (*(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 4) < (uint)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar6;
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      else {
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      if (*ppuVar8 != *(undefined4 * PTR32 *)((int)this + 0x20)) {
        iVar3 = (*ppuVar8)[4];
        *(byte *)(iVar3 + 0x2b) =
             *(byte *)(iVar3 + 0x2b) ^
             ((*(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 8) != '\0') * '\x02' ^ *(byte *)(iVar3 + 0x2b)) & 2
        ;
        *(byte *)(iVar3 + 0x2b) =
             ((*(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 9) != '\0') * '\x04' ^ *(byte *)(iVar3 + 0x2b)) & 4
             ^ *(byte *)(iVar3 + 0x2b);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3;
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  return;
}

/* ref: FUN_005fc660 */
GEN_FRAME uint GEN_THISCALL F_005fc660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fc660u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((*(int *)&gen_args[1]) + 4);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_FWD,&(*(int *)&gen_args[1]),(undefined4 *)((*(int *)&gen_args[1]) + 4));
  if ((*(int *)&gen_args[1]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar2 = F_005fbb80((*(undefined * PTR32 *)&gen_args[0]),iVar1,0,(*(undefined4 *)&gen_args[2]),0,0,0,0,0xff);
    (*(undefined4 *)(gen_frame + 0x4)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    puVar3 = (undefined4 *)F_004296a0(0x18,0,0x385);
    *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined4 *)(gen_frame + 0x4));
      puVar3[4] = uVar2;
    }
    F_006187f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),puVar3,0);
    F_005f7b00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Streaming::StreamingManager::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_005fc720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fc720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  F_005ee3d0(this GEN_EDX_FWD,1);
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  ((byte *)(gen_frame + 0x0))[8] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = uVar1 & 0xffffff00;
  do {
    uVar3 = F_005fbb00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),this + 0x20);
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)F_004296a0(0x18,0,900);
      *puVar4 = *(undefined4 *)(this + 0x34);
      puVar4[1] = *(undefined4 *)(this + 0x34);
      puVar4[2] = *(undefined4 *)(this + 0x34);
      *(undefined2 *)(puVar4 + 5) = 0;
      if ((byte *)(puVar4 + 3) != (byte *)0x0) {
        *(byte *)(puVar4 + 3) = ((byte *)(gen_frame + 0x0))[8];
        puVar4[4] = uVar3;
      }
      F_00617ef0(this + 0x30 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),puVar4,0);
    }
    bVar2 = ((byte *)(gen_frame + 0x0))[8] + 1;
    ((byte *)(gen_frame + 0x0))[8] = bVar2;
  } while (bVar2 < 0x4b);
  return 0;
}

/* ref: FUN_005fc7b0 */
GEN_FRAME uint GEN_THISCALL F_005fc7b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fc7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined1 * puVar5;
  
  uVar3 = F_005d9890(*(undefined4 *)((int)this + 0x34));
  if (uVar3 == 0) {
    return 0;
  }
  puVar5 = ((undefined1 *)GEN_TOP((*(int *)(uVar3 + 0x20) + uVar3)));
  if (puVar5 != (undefined1 *)0x0) {
    *(undefined1 *)((int)this + 0xc1) = *puVar5;
    *(undefined1 *)((int)this + 0xc2) = puVar5[1];
    *(undefined1 *)((int)this + 0xc3) = puVar5[2];
    uVar4 = 0;
    do {
      *(undefined1 *)((int)this + uVar4 + 0xc5) = puVar5[uVar4 + 5];
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
  }
  (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),(*(byte *)((int)this + 0x28) >> 4) + 1);
  bVar2 = F_005fbfa0(this GEN_EDX_ARG,uVar3,(*(uint *)(gen_frame + 0x8)));
  if (bVar2 == 0) {
    *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffff4 | 4;
    return CONCAT31(extraout_var,bVar2);
  }
  F_005dad10((undefined *)((int)this + 0x70) GEN_EDX_ARG);
  if (((*(int *)((int)this + 8) == 0) || (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), iVar1 == 0)
      ) || (*(char *)(iVar1 + 0x55) == '\0')) {
    F_005f83b0(this GEN_EDX_ARG,*(int *)(uVar3 + 0x10) + uVar3);
    F_005f85c0(this GEN_EDX_ARG,uVar3);
  }
  uVar3 = (int)*(char *)((int)this + 0xd8) - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),*(byte *)((int)this + 0xdc) >> 1) & 0xffffff01;
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),*(byte *)((int)this + 0xdc)) & 0xffffff01;
    bVar2 = F_005dbaf0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x8)),0);
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    break;
  case 1: ;
    uVar3 = F_005f51d0(this GEN_EDX_ARG,(uint)(*(byte *)((int)this + 0xdc) & 1),
                         (uint)(*(byte *)((int)this + 0xdc) >> 1 & 1));
    break;
  case 2: ;
    bVar2 = F_005e34a0(this GEN_EDX_ARG,(uint)*(byte *)((int)this + 0xe1),*(undefined4 *)((int)this + 0xe8),0)
    ;
    uVar3 = CONCAT31(extraout_var_01,bVar2);
    break;
  case 3: ;
    bVar2 = F_005e3670(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xe4),(int)*(char *)((int)this + 0xe0),
                         *(undefined4 *)((int)this + 0xe8));
    uVar3 = CONCAT31(extraout_var_02,bVar2);
    break;
  default: ;
    goto switchD_005fc872_default;
  }
  if ((char)uVar3 != '\0') {
switchD_005fc872_default: ;
    *(undefined1 *)((int)this + 0xd8) = 0;
  }
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffff2 | 2;
  return uVar3;
}

/* ref: FUN_005fc950 */
GEN_FRAME uint GEN_THISCALL F_005fc950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fc950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x78) & 0xffffff0f;
  if ((char)uVar3 == '\x01') {
    piVar2 = (int *)(param_1 + 0x8c);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (7 < iVar1) {
      *(uint *)((int)this + 0x78) = *(uint *)((int)this + 0x78) & 0xfffffff3 | 3;
      return (uint)piVar2;
    }
    uVar3 = F_005fc7b0((undefined *)((int)this - 0x30) GEN_EDX_FWD);
  }
  return uVar3;
}

/* ref: FUN_005fc990 */
GEN_FRAME unsigned int GEN_THISCALL F_005fc990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fc990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(uint *)((int)this + 8) = (uint)*param_1;
  *(undefined2 *)((int)this + 0x10) = *param_2;
  F_005eda50(this GEN_EDX_FWD,(uint)((char)param_1[8] != '\0'));
  *(byte *)((int)this + 0x16) =
       *(byte *)((int)this + 0x16) ^
       ((*(char *)((int)param_1 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)this + 0x16)) & 2;
  *(ushort *)((int)this + 0x12) = param_1[0xc];
  *(ushort *)((int)this + 0x14) = param_1[0xd];
  F_005fc400(this GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_005fc9f0 */
GEN_FRAME unsigned int GEN_THISCALL F_005fc9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fc9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  int iVar5;
  ushort * puVar6;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      puVar6 = ((ushort *)GEN_TOP(((int)param_1 +
               *((int *)GEN_TOP(((int)param_1 + (*(int *)(gen_frame + 0x14)) * 4 + *(int *)(param_1 + 4)))) + *(int *)(param_1 + 4))))
      ;
      if (puVar6[0xc] != 0) {
        *(undefined1 *)((int)this + 0x30) = 1;
        if ((*(ushort *)((int)this + 0x32) != 0) || (*(short *)((int)this + 0x36) != 0)) {
          if ((((*(ushort *)((int)this + 0x32) == puVar6[0xc]) &&
               (*(ushort *)((int)this + 0x34) == puVar6[0xd])) ||
              ((*(ushort *)((int)this + 0x36) == puVar6[0xc] &&
               (*(ushort *)((int)this + 0x38) == puVar6[0xd])))) &&
             (bVar2 = F_005ecac0(this GEN_EDX_FWD,*(undefined4 *)puVar6), bVar2 == 0)) {
            pvVar3 = (undefined *)F_00406b90(0x2c,0,0);
            if (pvVar3 == (undefined *)0x0) {
              pvVar3 = (undefined *)0x0;
            }
            else {
              pvVar3 = (undefined *)F_005f6e80(pvVar3 GEN_EDX_ARG,this);
            }
            *(uint *)((int)pvVar3 + 8) = (uint)*puVar6;
            *(undefined2 *)((int)pvVar3 + 0x10) = *param_1;
            uVar1 = puVar6[8];
            (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar3;
            F_005eda50(pvVar3 GEN_EDX_ARG,(uint)((char)uVar1 != '\0'));
            *(byte *)((int)pvVar3 + 0x16) =
                 *(byte *)((int)pvVar3 + 0x16) ^
                 ((*(char *)((int)puVar6 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)pvVar3 + 0x16))
                 & 2;
            *(ushort *)((int)pvVar3 + 0x12) = puVar6[0xc];
            *(ushort *)((int)pvVar3 + 0x14) = puVar6[0xd];
            F_005fc400(pvVar3 GEN_EDX_ARG,puVar6);
            if ((char)param_2 == '\0') {
              (*(ushort *)(gen_frame + 0xc)) = *puVar6;
              puVar4 = (undefined4 *)F_004296a0(0x18,0,900);
              *puVar4 = *(undefined4 *)((int)this + 0x110);
              puVar4[1] = *(undefined4 *)((int)this + 0x110);
              puVar4[2] = *(undefined4 *)((int)this + 0x110);
              *(undefined2 *)(puVar4 + 5) = 0;
              if ((ushort *)(puVar4 + 3) != (ushort *)0x0) {
                *(ushort *)(puVar4 + 3) = (*(ushort *)(gen_frame + 0xc));
                puVar4[4] = pvVar3;
              }
              F_006180b0((undefined *)((int)this + 0x10c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar4,0);
            }
            else {
              F_0061d4b0((undefined *)((int)this + 300) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x18)));
            }
          }
        }
      }
      iVar5 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar5;
    } while (iVar5 < *(int *)(param_1 + 6));
  }
  return;
}

/* ref: FUN_005fcb80 */
GEN_FRAME unsigned int GEN_THISCALL F_005fcb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fcb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  ushort uVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  int iVar9;
  ushort * puVar10;
  
  iVar9 = *(int *)((int)this + 0x18);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (iVar9 == 0) {
    if (*(int *)((int)this + 0x1c) != 0) {
      (*(int *)(gen_frame + 0x14)) = *(int *)((int)this + 0x1c);
      F_006154e0((undefined *)((int)this + 0x16c) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x14)));
      if ((*(uint *)(gen_frame + 0x18)) == *(uint *)((int)this + 0x170)) {
        (*(uint *)(gen_frame + 0x18)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x18)) = *(uint *)((*(uint *)(gen_frame + 0x18)) + 0x10);
      }
    }
  }
  else {
    uVar4 = F_005eca50(this GEN_EDX_ARG,iVar9);
    (*(uint *)(gen_frame + 0x18)) = uVar4;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      puVar10 = ((ushort *)GEN_TOP(((int)param_1 +
                *((int *)GEN_TOP(((int)param_1 + (*(int *)(gen_frame + 0x14)) * 4 + *(int *)(param_1 + 4)))) + *(int *)(param_1 + 4)
                )));
      uVar4 = F_005d93f0((*(uint *)(gen_frame + 0x18)),puVar10);
      if ((char)uVar4 != '\0') {
        puVar8 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x110))[1]));
        uVar2 = *puVar10;
        cVar1 = *(char *)((int)puVar8 + 0x15);
        puVar3 = *(undefined4 * PTR32 *)((int)this + 0x110);
        while (cVar1 == '\0') {
          if (*(ushort *)(puVar8 + 3) < uVar2) {
            puVar5 = (undefined4 *)puVar8[2];
            puVar8 = puVar3;
          }
          else {
            puVar5 = (undefined4 *)*puVar8;
          }
          puVar3 = puVar8;
          puVar8 = puVar5;
          cVar1 = *(char *)((int)puVar5 + 0x15);
        }
        puVar8 = *(undefined4 * PTR32 *)((int)this + 0x110);
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar3;
        if ((puVar3 == puVar8) || (uVar2 < *(ushort *)(puVar3 + 3))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar8;
          ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        else {
          ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
        }
        if (*ppuVar6 == *(undefined4 * PTR32 *)((int)this + 0x110)) {
          pvVar7 = (undefined *)F_00406b90(0x2c,0,0);
          if (pvVar7 == (undefined *)0x0) {
            pvVar7 = (undefined *)0x0;
          }
          else {
            pvVar7 = (undefined *)F_005f6e80(pvVar7 GEN_EDX_ARG,this);
          }
          *(uint *)((int)pvVar7 + 8) = (uint)*puVar10;
          *(undefined2 *)((int)pvVar7 + 0x10) = *param_1;
          F_005eda50(pvVar7 GEN_EDX_ARG,(uint)((char)puVar10[8] != '\0'));
          *(byte *)((int)pvVar7 + 0x16) =
               *(byte *)((int)pvVar7 + 0x16) ^
               ((*(char *)((int)puVar10 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)pvVar7 + 0x16)) &
               2;
          *(ushort *)((int)pvVar7 + 0x12) = puVar10[0xc];
          *(ushort *)((int)pvVar7 + 0x14) = puVar10[0xd];
          F_005fc400(pvVar7 GEN_EDX_ARG,puVar10);
          uVar2 = *puVar10;
          puVar8 = (undefined4 *)F_004296a0(0x18,0,900);
          *puVar8 = *(undefined4 *)((int)this + 0x110);
          puVar8[1] = *(undefined4 *)((int)this + 0x110);
          puVar8[2] = *(undefined4 *)((int)this + 0x110);
          *(undefined2 *)(puVar8 + 5) = 0;
          if ((ushort *)(puVar8 + 3) != (ushort *)0x0) {
            *(ushort *)(puVar8 + 3) = uVar2;
            puVar8[4] = pvVar7;
          }
          F_006180b0((undefined *)((int)this + 0x10c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar8,0);
          this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        }
      }
      iVar9 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar9;
    } while (iVar9 < *(int *)(param_1 + 6));
  }
  F_005fc9f0(this GEN_EDX_ARG,param_1,0);
  return;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf1 */
GEN_FRAME uint GEN_THISCALL F_005fcd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fcd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar2 = *(int *)(this + 0x78);
  iVar1 = *(int *)(this + 0x7c);
  if (iVar2 != iVar1) {
    F_005f5110(this GEN_EDX_FWD);
  }
  F_005ed050((undefined *)this GEN_EDX_ARG,param_1,param_2);
  if (*(int *)(this + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  puVar4 = (undefined4 *)F_00509330((undefined *)(iVar3 + 0x14c) GEN_EDX_ARG,param_2);
  *(undefined4 *)(this + 0x38) = *puVar4;
  if (iVar2 != iVar1) {
    puVar4 = (undefined4 *)F_005fc7b0(this GEN_EDX_ARG);
  }
  return (uint)puVar4;
}

/* ref: FUN_005fcda0 */
GEN_FRAME uint GEN_THISCALL F_005fcda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fcda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(int *)((int)this + 0x78) != *(int *)((int)this + 0x7c);
  if (bVar4) {
    F_005f5110(this GEN_EDX_FWD);
  }
  F_005ed050(this GEN_EDX_ARG,param_1,param_2);
  if (*(int *)((int)this + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
  }
  puVar2 = (undefined4 *)F_00509330((undefined *)(iVar1 + 0x14c) GEN_EDX_ARG,param_2);
  *(undefined4 *)((int)this + 0x38) = *puVar2;
  if (bVar4) {
    F_005fc7b0(this GEN_EDX_ARG);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe0))(this GEN_EDX_ARG,param_3);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x14));
  uVar3 = F_005e2b50(this GEN_EDX_ARG,param_2);
  return uVar3;
}

/* ref: FUN_005fce30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fce30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fce30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  F_005f9a00(this GEN_EDX_FWD);
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
  if (uVar2 != 0) {
    do {
      uVar1 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar3 * 4))));
      F_005fcb80(this GEN_EDX_ARG,uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(int *)((int)this + 0xd8) != 0) {
    F_0050c620(*(int *)((int)this + 0xd8),0,0);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  F_005eef40(this GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x10) = 5;
  return;
}

/* ref: FUN_005fceb0 */
GEN_FRAME unsigned int GEN_THISCALL F_005fceb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fceb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = param_1;
  if (*(char *)(REFG(int, 0x1379cb0) + 0x26) != '\0') {
    param_1 = (int *)param_1[1];
    if (0 < (int)param_1) {
      iVar2 = 0;
      do {
        F_005ecdd0(this GEN_EDX_FWD,*piVar1 + iVar2 + (int)piVar1);
        iVar2 = iVar2 + 0x10;
        param_1 = (int *)((int)param_1 - 1);
      } while (param_1 != (int *)0x0);
    }
    F_005f7c60(this GEN_EDX_ARG);
  }
  param_1 = (int *)piVar1[1];
  if (0 < (int)param_1) {
    iVar2 = 0;
    do {
      F_005fcb80(this GEN_EDX_ARG,*piVar1 + iVar2 + (int)piVar1);
      iVar2 = iVar2 + 0x10;
      param_1 = (int *)((int)param_1 - 1);
    } while (param_1 != (int *)0x0);
  }
  return;
}

/* ref: FUN_005fcf20 */
GEN_FRAME unsigned int GEN_THISCALL F_005fcf20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fcf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  undefined2 uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint * puVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int * piVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  
  fVar13 = (float10)*(double *)&REFG(undefined, 0x1088070);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)param_1 + 0x2c))) {
  case 1: ;
    piVar11 = *(int * PTR32 *)((int)param_1 + 0x110);
    piVar3 = (int *)*piVar11;
    (*(uint *)(gen_frame + 0x18)) = (uint)piVar3;
    if (piVar3 != piVar11) {
      do {
        uVar12 = (*(uint *)(gen_frame + 0x18));
        fVar8 = *(float *)((*(uint *)(gen_frame + 0x18)) + 0x10);
        sVar1 = *(short *)((int)gen_fl2bits(fVar8) + 0x12);
        (*(float *)(gen_frame + 0x14)) = fVar8;
        if (((sVar1 == 0) ||
            ((*(short *)((int)param_1 + 0x32) == sVar1 &&
             (*(short *)((int)param_1 + 0x34) == *(short *)((int)gen_fl2bits(fVar8) + 0x14))))) ||
           ((*(short *)((int)param_1 + 0x36) == sVar1 &&
            (*(short *)((int)param_1 + 0x38) == *(short *)((int)gen_fl2bits(fVar8) + 0x14))))) {
          F_00602450(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_FWD);
        }
        else {
          F_0061d4b0((undefined *)((int)param_1 + 0x11c) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)));
          puVar7 = (uint *)F_00615050((undefined *)((int)param_1 + 0x10c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),uVar12);
          uVar12 = *puVar7;
          (*(uint *)(gen_frame + 0x18)) = uVar12;
          if (uVar12 == *(uint *)((int)param_1 + 0x110)) break;
        }
      } while ((*(uint *)(gen_frame + 0x18)) != *(uint *)((int)param_1 + 0x110));
    }
    if (*(int *)((int)param_1 + 0xdc) == *(int *)((int)param_1 + 0xe0)) {
      uVar10 = 1;
      uVar12 = F_00500f10((int)param_1 + 0xc4 GEN_EDX_ARG);
      if (1 < uVar12) {
        do {
          uVar12 = F_00500f20((int)param_1 + 0xc4 GEN_EDX_ARG,uVar10);
          fVar8 = gen_bits2f(F_00513dc0(uVar12,0,0,0));
          (*(float *)(gen_frame + 0x14)) = fVar8;
          F_0061ce00((undefined *)((int)param_1 + 0xdc) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)));
          uVar10 = uVar10 + 1;
          uVar12 = F_00500f10((int)param_1 + 0xc4 GEN_EDX_ARG);
        } while (uVar10 < uVar12);
      }
    }
    *(undefined4 *)((int)param_1 + 0x2c) = 2;
    break;
  case 2: ;
    bVar6 = F_005d9330(param_1 GEN_EDX_ARG);
    if (bVar6 != 0) {
      uVar10 = 0;
      uVar12 = *(int *)((int)param_1 + 0xe0) - *(int *)((int)param_1 + 0xdc) >> 2;
      if (uVar12 != 0) {
        do {
          uVar9 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0xdc) + uVar10 * 4))));
          F_005fc9f0(param_1 GEN_EDX_ARG,uVar9,1);
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      if (*(int *)((int)param_1 + 0xd8) != 0) {
        F_0050c620(*(int *)((int)param_1 + 0xd8),0,0);
        *(undefined4 *)((int)param_1 + 0xd8) = 0;
      }
      F_005eef40(param_1 GEN_EDX_ARG);
      F_005ef180((int)param_1 + 300,(float)(float10)0);
      F_005ebe80(*(undefined * PTR32 *)((int)param_1 + 0x44) GEN_EDX_ARG);
      *(undefined4 *)((int)param_1 + 0x2c) = 3;
    }
    break;
  case 3: ;
    bVar6 = F_005ecb30((int)param_1 + 300);
    if (bVar6 != 0) {
      piVar11 = (int *)(REFG(int, 0x1375aec) + 0xc70);
      iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar11), 0);
      if (iVar4 == 0) {
        *(undefined4 *)((int)param_1 + 0x2c) = 4;
      }
    }
    break;
  case 4: ;
    fVar8 = ((float)GEN_TOF(((float10)*(float *)param_2 * fVar13 + (float10)*(float *)((int)param_1 + 0x3c))));
    (*(float *)(gen_frame + 0x14)) = fVar8;
    *(float *)((int)param_1 + 0x3c) = fVar8;
    if ((float10)fVar8 < fVar13) {
      fVar8 = (float)((float10)fVar8 / fVar13);
      (*(float *)(gen_frame + 0x14)) = fVar8;
      F_005ef180((int)param_1 + 300,fVar8);
    }
    else {
      piVar11 = (int *)((int)param_1 + 300);
      F_005ef180(piVar11,(float)(float10)1);
      iVar4 = *(int *)((int)param_1 + 0x130);
      iVar5 = *piVar11;
      (*(uint *)(gen_frame + 0x18)) = 0;
      uVar12 = iVar4 - iVar5 >> 2;
      if (uVar12 != 0) {
        do {
          fVar8 = *(float *)(*piVar11 + (*(uint *)(gen_frame + 0x18)) * 4);
          uVar2 = *(undefined2 *)((int)gen_fl2bits(fVar8) + 8);
          (*(float *)(gen_frame + 0x14)) = fVar8;
          ((undefined2 *)(gen_frame + 0x10))[0] = uVar2;
          F_0061ae80((undefined *)((int)param_1 + 0x10c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),((undefined2 *)(gen_frame + 0x10)));
          uVar10 = (*(uint *)(gen_frame + 0x18)) + 1;
          (*(uint *)(gen_frame + 0x18)) = uVar10;
        } while (uVar10 < uVar12);
      }
      iVar4 = *(int *)((int)param_1 + 0x130);
      iVar5 = *piVar11;
      if (iVar5 != iVar4) {
        (*(float *)(gen_frame + 0x14)) = 0.0;
        F_00c46e20(iVar5,iVar4,0);
        *(int *)((int)param_1 + 0x130) = (int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + iVar5;
      }
      *(undefined4 *)((int)param_1 + 0x2c) = 5;
    }
  }
  if (*(int *)((int)param_1 + 0x11c) != *(int *)((int)param_1 + 0x120)) {
    fVar13 = (float10)*(double *)&REFG(undefined, 0x1088070);
    fVar8 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x40) + (float10)*(float *)param_2 * fVar13)));
    fVar14 = (float10)fVar8;
    *(float *)((int)param_1 + 0x40) = fVar8;
    if (fVar14 < fVar13) {
      F_005ef180((int)param_1 + 0x11c,(float)((float10)1 - fVar14 / fVar13));
      return;
    }
    F_005ef260((int)param_1 + 0x11c);
  }
  return;
}

/* ref: FUN_005fd260 */
GEN_FRAME unsigned int GEN_THISCALL F_005fd260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fd260u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  
  pcVar5 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 8) + (*(int *)&gen_args[1]))));
  if ((char)(*(uint *)&gen_args[2]) != '\0') {
    F_005da920(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) GEN_EDX_FWD,(*(int *)&gen_args[1]));
    if (pcVar5[*(int *)(pcVar5 + 0x14)] != '\0') {
      uVar3 = F_00513dc0(pcVar5 + *(int *)(pcVar5 + 0x14),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94,0,0);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) = uVar3;
    }
    if (pcVar5[*(int *)(pcVar5 + 0x34)] != '\0') {
      uVar3 = F_00513dc0(pcVar5 + *(int *)(pcVar5 + 0x34),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94,0,0);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = uVar3;
    }
    F_005f2f70((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)&gen_args[1]));
    if (pcVar5[*(int *)(pcVar5 + 4)] != '\0') {
      F_005fa680((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,pcVar5 + *(int *)(pcVar5 + 4),(uint)(pcVar5[3] != '\0'));
    }
    if (*pcVar5 != '\0') {
      (*(int *)&gen_args[3]) = 0;
      if (*(int *)((*(int *)&gen_args[1]) + 0x18) < 1) {
        return;
      }
      this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc)));
      do {
        iVar4 = *(int *)((*(int *)&gen_args[1]) + 0x14) + (*(int *)&gen_args[1]);
        iVar4 = *(int *)(iVar4 + (*(int *)&gen_args[3]) * 4) + iVar4;
        (*(uint *)&gen_args[2]) = F_00513dc0(iVar4,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94,0,0);
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0)));
        if (&(*(uint *)&gen_args[2]) < puVar1) {
          puVar2 = (undefined4 *)*this_00;
          if (&(*(uint *)&gen_args[2]) < puVar2) goto LAB_005fd381;
          if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)))) {
            F_0061bf60(this_00 GEN_EDX_ARG,1);
          }
          if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) != (undefined4 *)0x0) {
            **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) =
                 *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint *)&gen_args[2]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
          }
        }
        else {
LAB_005fd381: ;
          if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)))) {
            F_0061bf60(this_00 GEN_EDX_ARG,1);
          }
          if (*((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) != (uint *)0x0) {
            **((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) = (*(uint *)&gen_args[2]);
          }
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) + 4;
        F_0050b6c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) GEN_EDX_ARG,iVar4);
        (*(int *)&gen_args[3]) = (*(int *)&gen_args[3]) + 1;
        if (*(int *)((*(int *)&gen_args[1]) + 0x18) <= (*(int *)&gen_args[3])) {
          return;
        }
      } while( true );
    }
  }
  if ((char)(*(int *)&gen_args[3]) != '\0') {
    F_005fceb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)&gen_args[1]));
  }
  return;
}

/* ref: FUN_005fd3e0 */
GEN_FRAME unsigned int GEN_THISCALL F_005fd3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5fd3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined1 *)((int)this + 0x55) = (undefined1)param_5;
  *(undefined4 *)((int)this + 0x1c) = param_4;
  *(undefined4 *)((int)this + 0x14) = 6;
  *(undefined4 *)((int)this + 8) = param_1;
  F_005fd260(this GEN_EDX_FWD,param_2,1,1);
  *(undefined4 *)((int)this + 0x10) = 5;
  return;
}

/* ref: FUN_005fd420 */
GEN_NOFRAME byte GEN_THISCALL F_005fd420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fd420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_005d9890(*(undefined4 *)((int)this + 0xd8));
  if (uVar2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 9;
    return 0;
  }
  iVar1 = *(int *)(uVar2 + 8);
  F_005fd260(this GEN_EDX_ARG,uVar2,1,1);
  if (*(char *)(iVar1 + uVar2) != '\0') {
    *(undefined4 *)((int)this + 0x10) = 2;
    return 1;
  }
  if (*(int *)((int)this + 0xd8) != 0) {
    F_0050c620(*(int *)((int)this + 0xd8),0,0);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 5;
  return 1;
}

/* ref: FUN_005fd490 */
GEN_NOFRAME byte GEN_THISCALL F_005fd490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_005d9890(*(undefined4 *)((int)this + 0xd8));
  if (uVar1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 9;
    return 0;
  }
  pcVar2 = ((char *)GEN_TOP((*(int *)(uVar1 + 8) + uVar1)));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar2;
  if ((char)param_1 != '\0') {
    F_005fd260(this GEN_EDX_ARG,uVar1,1,0);
    if (*(*(char * PTR32 *)(gen_frame + 0x1c)) != '\0') {
      *(undefined4 *)((int)this + 0x10) = 3;
      return 1;
    }
    if ((*(char *)((int)this + 0x56) != '\0') && (*(int *)((int)this + 0x58) != 0)) {
      uVar1 = F_005e1540(CONCAT31((int3)((uint)((int)(uintptr_t)(*(char * PTR32 *)(gen_frame + 0x1c))) >> 8),*(char *)((int)this + 0x56)),0,
                           *(int *)((int)this + 0x58),uVar1);
      if (uVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(uVar1 + 0xc);
        (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar1 + 0x10);
        (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar1 + 0x14);
        F_005f27c0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
    *(undefined4 *)((int)this + 0x10) = 4;
    return 1;
  }
  if (*pcVar2 != '\0') {
    F_005fce30(this GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x10) = 5;
    return 1;
  }
  F_005fceb0(this GEN_EDX_ARG,uVar1);
  if (*(int *)((int)this + 0xd8) != 0) {
    F_0050c620(*(int *)((int)this + 0xd8),0,0);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 5;
  return 1;
}

/* ref: FUN_005fd5d0 */
GEN_FRAME byte GEN_THISCALL F_005fd5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  int * piVar3;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x10))) {
  case 1: ;
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0xd8) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (iVar1 != 2) {
      return 1;
    }
    if (*(char *)((int)this + 0x53) == '\0') {
      F_005fd420(this GEN_EDX_FWD);
      return 0;
    }
    F_005fd490(this GEN_EDX_ARG,1);
    return 0;
  case 2: ;
    bVar2 = F_005d9330(this GEN_EDX_ARG);
    if (bVar2 != 0) {
      F_005fce30(((undefined *)(uint)(this)) GEN_EDX_ARG);
      return 0;
    }
    break;
  case 3: ;
    bVar2 = F_005d9330(this GEN_EDX_ARG);
    if (bVar2 != 0) {
      F_005f7940(((undefined *)(uint)(this)) GEN_EDX_ARG);
      return 0;
    }
    break;
  case 4: ;
    if (*(char *)((int)this + 0x53) == '\0') {
      F_005fd490(this GEN_EDX_ARG,0);
      return 0;
    }
    break;
  case 5: ;
    bVar2 = F_005ec820(this GEN_EDX_ARG);
    if (bVar2 != 0) {
      F_005fa910(this GEN_EDX_ARG);
      return 0;
    }
    break;
  case 6: ;
    bVar2 = F_005ec8a0(this GEN_EDX_ARG);
    if ((bVar2 != 0) && (bVar2 = F_005d92a0(this GEN_EDX_ARG), bVar2 != 0)) {
      piVar3 = (int *)(REFG(int, 0x1375aec) + 0xc70);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
      if (iVar1 == 0) {
        F_005f4930(this GEN_EDX_ARG);
        goto switchD_005fd5e6_caseD_6;
      }
    }
    F_005ebe80(*(undefined * PTR32 *)((int)this + 0x44) GEN_EDX_ARG);
    F_004ff5f0(REFG(int, 0x1375aec) GEN_EDX_ARG);
  case 7: ;
switchD_005fd5e6_caseD_6: ;
    if ((*(char *)((int)this + 0x52) != '\0') && (bVar2 = F_00550ff0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0) GEN_EDX_ARG), bVar2 == 0)) {
      piVar3 = (int *)(REFG(int, 0x1375aec) + 0xc70);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
      if (iVar1 == 0) {
        F_005f2810(this GEN_EDX_ARG);
        *(undefined1 *)(REFG(int, 0x1371280) + 0x4f) = 1;
        F_004ff5f0(REFG(int, 0x1375aec) GEN_EDX_ARG);
      }
    }
    F_005fcf20(this GEN_EDX_ARG,param_1);
  }
  return 0;
}

/* ref: Client::LayoutEngine::LayoutManager::vf3 */
GEN_FRAME uint GEN_THISCALL F_005fd760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_005fd5d0(this GEN_EDX_FWD,param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_005ec950(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x44) + 0xc))))(*(int * PTR32 *)(this + 0x44) GEN_EDX_ARG,param_1);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      F_005ecc00(this GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,0);
    }
  }
  return uVar2;
}

/* ref: FUN_005fd7e0 */
GEN_FRAME uint GEN_STDCALL F_005fd7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_005fd870 */
GEN_FRAME uint F_005fd870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd870u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_005fd890 */
GEN_FRAME uint GEN_THISCALL F_005fd890(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fd890u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (short)(int)param_2 >> ((byte)param_1[3] & 0x1f);
  param_1[1] = (short)(int)param_3 >> ((byte)param_1[3] & 0x1f);
  return (uint)param_1;
}

/* ref: FUN_005fd8c0 */
GEN_FRAME uint GEN_THISCALL F_005fd8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  byte bVar2;
  
  fVar1 = param_1[2];
  bVar2 = (byte)*(undefined2 *)((int)this + 6);
  *(short *)this = (short)(int)*param_1 >> (bVar2 & 0x1f);
  *(short *)((int)this + 2) = (short)(int)fVar1 >> (bVar2 & 0x1f);
  return (uint)this;
}

/* ref: FUN_005fd970 */
GEN_FRAME byte GEN_THISCALL F_005fd970(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5fd970u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte in_AL = 0;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x24)) || GEN_ISNAN((float10)param_2);
  if (bVar1 == (bVar1 || (float10)*(float *)(in_ecx + 0x24) == (float10)param_2)) {
    *(float *)(in_ecx + 0x24) = param_2;
    *(undefined1 *)(in_ecx + 0x12) = 1;
  }
  return in_AL;
}

/* ref: FUN_005fd9a0 */
GEN_FRAME uint GEN_THISCALL F_005fd9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined1 *)((int)this + 0x1c);
  return (int)this + 0x68;
}

/* ref: FUN_005fd9e0 */
GEN_FRAME uint GEN_THISCALL F_005fd9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fd9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_005fda50 */
GEN_FRAME byte GEN_THISCALL F_005fda50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fda50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0x56) = (byte)param_1;
  *(undefined4 *)((int)this + 0x58) = param_2;
  return (byte)param_1;
}

/* ref: FUN_005fdab0 */
GEN_FRAME uint GEN_THISCALL F_005fdab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_005fdaf0 */
GEN_FRAME uint GEN_STDCALL F_005fdaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_005fdb10 */
GEN_FRAME uint GEN_THISCALL F_005fdb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00509330((undefined *)((int)this + 0x14c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005fdb20 */
GEN_FRAME byte GEN_THISCALL F_005fdb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00507740((undefined *)((int)this + 0x14c) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_005fdb30 */
GEN_FRAME uint GEN_THISCALL F_005fdb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00507260((undefined *)((int)this + 0x14c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005fdb50 */
GEN_FRAME uint GEN_THISCALL F_005fdb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdb50u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(int *)(in_ecx + 0x20) = *(int *)(in_ecx + 0x20) + 1;
  if ((char)param_2 != '\0') {
    *(int *)(in_ecx + 0x24) = *(int *)(in_ecx + 0x24) + 1;
  }
  if ((char)param_3 != '\0') {
    *(int *)(in_ecx + 0x28) = *(int *)(in_ecx + 0x28) + 1;
  }
  return 1;
}

/* ref: FUN_005fdb80 */
GEN_FRAME uint GEN_THISCALL F_005fdb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdb80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(int *)(in_ecx + 0x20) = *(int *)(in_ecx + 0x20) - 1;
  if ((char)param_2 != '\0') {
    *(int *)(in_ecx + 0x24) = *(int *)(in_ecx + 0x24) - 1;
  }
  if ((char)param_3 != '\0') {
    *(int *)(in_ecx + 0x28) = *(int *)(in_ecx + 0x28) - 1;
  }
  return 0xffffffff;
}

/* ref: FUN_005fdba0 */
GEN_FRAME uint GEN_THISCALL F_005fdba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x5fdba0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 8) = (undefined1)param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_8;
  *(undefined1 *)((int)this + 0x1d) = (undefined1)param_9;
  *(undefined4 *)((int)this + 0x20) = param_10;
  return (uint)this;
}

/* ref: FUN_005fdc10 */
GEN_FRAME uint GEN_THISCALL F_005fdc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdc10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_005fdc20 */
GEN_FRAME byte GEN_THISCALL F_005fdc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x20) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdcb0 */
GEN_FRAME byte GEN_THISCALL F_005fdcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdcb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x28) ^ (byte)param_2) & 0xf;
  *(byte *)(in_ecx + 0x28) = *(byte *)(in_ecx + 0x28) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd10 */
GEN_FRAME byte GEN_THISCALL F_005fdd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x20)) & 2;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd40 */
GEN_FRAME byte GEN_THISCALL F_005fdd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x20)) & 4;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd70 */
GEN_FRAME uint GEN_THISCALL F_005fdd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x24) ^ param_2) & 3;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005fdd90 */
GEN_FRAME byte GEN_THISCALL F_005fdd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x2b) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fddc0 */
GEN_FRAME byte GEN_THISCALL F_005fddc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fddc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2b)) & 2;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fddf0 */
GEN_FRAME byte GEN_THISCALL F_005fddf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fddf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x2b)) & 4;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fde10 */
GEN_FRAME unsigned int GEN_THISCALL F_005fde10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fde10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF((((float10)*(float *)this + (float10)*(float *)((int)this + 0xc)) * fVar1)));
  param_1[1] = ((float)GEN_TOF((((float10)*(float *)((int)this + 4) + (float10)*(float *)((int)this + 0x10))
                      * fVar1)));
  param_1[2] = ((float)GEN_TOF((((float10)*(float *)((int)this + 8) + (float10)*(float *)((int)this + 0x14))
                      * fVar1)));
  *param_2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) - (float10)*param_1)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) - (float10)param_1[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) - (float10)param_1[2])));
  return 0;
}

/* ref: FUN_005fde70 */
GEN_FRAME uint GEN_THISCALL F_005fde70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fde70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_005fde90 */
GEN_FRAME unsigned int GEN_THISCALL F_005fde90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5fde90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  *(float *)(in_ecx + 0x60) = param_4;
  *(float *)(in_ecx + 100) = param_5;
  return;
}

/* ref: FUN_005fdef0 */
GEN_FRAME uint GEN_THISCALL F_005fdef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_005fdf10 */
GEN_FRAME uint GEN_THISCALL F_005fdf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdf10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_005fdf50 */
GEN_FRAME unsigned int GEN_THISCALL F_005fdf50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5fdf50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14) = param_2;
  return;
}

/* ref: FUN_005fdf80 */
GEN_FRAME uint GEN_THISCALL F_005fdf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdf80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa4) = param_2;
  return param_2;
}

/* ref: FUN_005fdfd0 */
GEN_FRAME uint GEN_THISCALL F_005fdfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_1 & 0x3fffffff | param_2 << 0x1e;
  *(uint *)this = uVar1;
  return uVar1;
}

/* ref: FUN_005fdff0 */
GEN_FRAME uint GEN_THISCALL F_005fdff0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5fdff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return in_ecx;
}

/* ref: FUN_005fe0a0 */
GEN_FRAME uint GEN_THISCALL F_005fe0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 8) = (uint)(ushort)param_2;
  return (uint)(ushort)param_2;
}

/* ref: FUN_005fe0b0 */
GEN_FRAME ushort GEN_THISCALL F_005fe0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005fe0d0 */
GEN_FRAME byte GEN_THISCALL F_005fe0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x16)) & 2;
  *(byte *)(in_ecx + 0x16) = *(byte *)(in_ecx + 0x16) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fe0f0 */
GEN_FRAME uint GEN_THISCALL F_005fe0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_005fe130 */
GEN_FRAME uint GEN_THISCALL F_005fe130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x38) = *param_1;
  *(undefined4 *)((int)this + 0x3c) = param_1[1];
  *(undefined4 *)((int)this + 0x40) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x44) = uVar1;
  return uVar1;
}

/* ref: FUN_005fe170 */
GEN_FRAME uint GEN_THISCALL F_005fe170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x74) ^ param_2) & 0xf;
  *(uint *)(in_ecx + 0x74) = *(uint *)(in_ecx + 0x74) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005fe1a0 */
GEN_FRAME uint GEN_THISCALL F_005fe1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_005fe1b0 */
GEN_FRAME uint GEN_THISCALL F_005fe1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf60 */
GEN_FRAME unsigned int GEN_THISCALL F_005fe1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00a1e160(this + 0x3c,param_1);
  return;
}

/* ref: FUN_005fe260 */
GEN_FRAME uint GEN_THISCALL F_005fe260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_005fe280 */
GEN_FRAME uint F_005fe280(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe280u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 + (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] + fVar1);
  param_1[2] = (float)(fVar1 + (float10)param_2[2]);
  return (uint)param_1;
}

/* ref: FUN_005fe2b0 */
GEN_FRAME uint F_005fe2b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe2b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)((float10)*param_2 - fVar1);
  param_1[1] = (float)((float10)param_2[1] - fVar1);
  param_1[2] = (float)((float10)param_2[2] - fVar1);
  return (uint)param_1;
}

/* ref: FUN_005fe2e0 */
GEN_FRAME uint F_005fe2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe2e0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  fVar1 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)*(float *)(param_2 + 8) +
                          (fVar1 * fVar1 +
                          (float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_2 + 4)))));
  if (fVar1 <= (float10)REFG(float, 0x10905c4)) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return (uint)param_1;
  }
  fVar1 = (float10)(float)((float10)1 / (float10)((float)GEN_TOF(SQRT(fVar1))));
  *param_1 = (float)(fVar1 * (float10)*(float *)param_2);
  param_1[1] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  return (uint)param_1;
}

/* ref: FUN_005fe370 */
GEN_FRAME uint F_005fe370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe370u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  return (uint)param_1;
}

/* ref: FUN_005fe3a0 */
GEN_FRAME uint F_005fe3a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe3a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  return (uint)param_1;
}

/* ref: FUN_005fe3d0 */
GEN_NOFRAME uint F_005fe3d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe3d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = (float)(fVar3 + (float10)*param_2);
  param_1[1] = (float)((float10)fVar1 + fVar3);
  param_1[2] = (float)(fVar3 + (float10)fVar2);
  return (uint)param_1;
}

/* ref: FUN_005fe430 */
GEN_NOFRAME uint F_005fe430(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe430u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = (float)((float10)*param_2 - fVar3);
  param_1[1] = (float)((float10)fVar1 - fVar3);
  param_1[2] = (float)((float10)fVar2 - fVar3);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf5 */
GEN_FRAME uint GEN_THISCALL F_005fe490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf8 */
GEN_NOFRAME uint F_005fe4a0(void)
{
  GEN_ENTER(0x5fe4a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf10 */
GEN_NOFRAME byte F_005fe4b0(void)
{
  GEN_ENTER(0x5fe4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf11 */
GEN_NOFRAME byte F_005fe4c0(void)
{
  GEN_ENTER(0x5fe4c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf12 */
GEN_NOFRAME byte GEN_THISCALL F_005fe4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fe4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf21 */
GEN_NOFRAME uint GEN_THISCALL F_005fe4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fe4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_FWD);
  return (uint)(uVar1 != 0);
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf29 */
GEN_NOFRAME byte F_005fe4f0(void)
{
  GEN_ENTER(0x5fe4f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf30 */
GEN_NOFRAME uint F_005fe500(void)
{
  GEN_ENTER(0x5fe500u, 0u, 0u, 0u, 0u);
  return 0x107fc63;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf37 */
GEN_NOFRAME byte GEN_THISCALL F_005fe510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fe510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 5 & 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf38 */
GEN_FRAME unsigned int GEN_THISCALL F_005fe520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe520u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  bVar1 = *(byte *)((int)param_1 + 0x2b);
  if ((bVar1 & 2) != 0) {
    *(byte *)((int)param_1 + 0x2b) =
         (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          (!(param_3 < *(float *)&REFG(undefined, 0x1088114)) && param_3 != *(float *)&REFG(undefined, 0x1088114))) << 5 ^ bVar1
         ) & 0x20 ^ bVar1;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xd8))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_3));
  }
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fe560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fe570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf41 */
GEN_NOFRAME unsigned int F_005fe580(void)
{
  GEN_ENTER(0x5fe580u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf42 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fe590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf43 */
GEN_FRAME uint GEN_THISCALL F_005fe5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = REFG(undefined4, 0x1302e54);
  param_1[1] = REFG(undefined4, 0x1302e58);
  param_1[2] = REFG(undefined4, 0x1302e5c);
  param_1[3] = REFG(undefined4, 0x1302e60);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf44 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fe5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf45 */
GEN_NOFRAME unsigned int F_005fe5e0(void)
{
  GEN_ENTER(0x5fe5e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf46 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fe5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf51 */
GEN_NOFRAME byte GEN_THISCALL F_005fe600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fe600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 4 & 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf52 */
GEN_FRAME byte GEN_THISCALL F_005fe610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x2b)) & 0x10;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf53 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fe630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf55 */
GEN_NOFRAME byte GEN_THISCALL F_005fe640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fe640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 3 & 1;
}

/* ref: FUN_005fe650 */
GEN_FRAME uint GEN_THISCALL F_005fe650(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5fe650u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *param_1 = 0;
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  param_1[1] = (undefined4)gen_fl2bits((float)fVar1);
  param_1[2] = 0;
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  param_1[3] = (undefined4)gen_fl2bits((float)fVar2);
  return (uint)param_1;
}

/* ref: FUN_005fe6a0 */
GEN_FRAME uint GEN_THISCALL F_005fe6a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5fe6a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *param_1 = 0;
  param_1[1] = 0;
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  param_1[2] = (undefined4)gen_fl2bits((float)fVar1);
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  param_1[3] = (undefined4)gen_fl2bits((float)fVar2);
  return (uint)param_1;
}

/* ref: FUN_005fe6f0 */
GEN_FRAME uint F_005fe6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe6f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004f6d80(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_005fe710 */
GEN_FRAME uint GEN_THISCALL F_005fe710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x1087f04));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = uVar1;
  in_ecx[0xc] = *param_2;
  in_ecx[0xd] = param_2[1];
  in_ecx[0xe] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_005fe770 */
GEN_FRAME uint GEN_THISCALL F_005fe770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe770u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(float *)param_2 =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[2] * (float10)param_1[2] +
                                   ((float10)*param_1 * (float10)*param_1 +
                                   (float10)param_1[1] * (float10)param_1[1])))))));
  *(float *)(param_2 + 4) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[6] * (float10)param_1[6] +
                                   ((float10)param_1[4] * (float10)param_1[4] +
                                   (float10)param_1[5] * (float10)param_1[5])))))));
  *(float *)(param_2 + 8) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[10] * (float10)param_1[10] +
                                   ((float10)param_1[8] * (float10)param_1[8] +
                                   (float10)param_1[9] * (float10)param_1[9])))))));
  return param_2;
}

/* ref: FUN_005fe810 */
GEN_FRAME uint F_005fe810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe810u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_005fe2e0(param_1,param_2);
  F_005fe2e0(param_1 + 0x10,param_2 + 0x10);
  F_005fe2e0(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

/* ref: FUN_005fe860 */
GEN_FRAME uint F_005fe860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe860u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_005fe2e0(param_1,param_2);
  F_005fe2e0(param_1 + 0x10,param_2 + 0x10);
  F_005fe2e0(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

/* ref: FUN_005fe8b0 */
GEN_NOFRAME uint GEN_THISCALL F_005fe8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5fe8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0046f390(this GEN_EDX_FWD);
  F_0046f390((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  F_0046f390((undefined *)((int)this + 0x20) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_005fe8d0 */
GEN_NOFRAME uint GEN_THISCALL F_005fe8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  undefined4 * puVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  *(float *)this = param_1[0xc];
  *(float *)((int)this + 4) = param_1[0xd];
  *(float *)((int)this + 8) = param_1[0xe];
  puVar2 = (undefined4 *)F_005fe770(param_1 GEN_EDX_FWD,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x20) = *puVar2;
  *(undefined4 *)((int)this + 0x24) = puVar2[1];
  *(undefined4 *)((int)this + 0x28) = puVar2[2];
  fVar4 = (float10)1;
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x20))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar3 = (float10)fVar1;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar3 * (float10)*param_1);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)param_1[1] * fVar3);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar3 * (float10)param_1[2]);
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x24))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar3 = (float10)fVar1;
  (*(float *)(gen_frame + 0x30)) = (float)(fVar3 * (float10)param_1[4]);
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_1[5] * fVar3);
  (*(float *)(gen_frame + 0x38)) = (float)(fVar3 * (float10)param_1[6]);
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x28))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar4 = (float10)fVar1;
  (*(float *)(gen_frame + 0x40)) = (float)(fVar4 * (float10)param_1[8]);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)param_1[9] * fVar4);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar4 * (float10)param_1[10]);
  F_004eeed0((int)this + 0x10 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_005fe9c0 */
GEN_FRAME uint GEN_THISCALL F_005fe9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fe9e0 */
GEN_FRAME uint GEN_THISCALL F_005fe9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fea00 */
GEN_FRAME uint GEN_THISCALL F_005fea00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fea00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)in_ecx;
}

/* ref: FUN_005fea30 */
GEN_FRAME uint GEN_THISCALL F_005fea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fea30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)in_ecx;
}

/* ref: FUN_005fea60 */
GEN_FRAME uint GEN_THISCALL F_005fea60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fea60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fea80 */
GEN_FRAME uint GEN_THISCALL F_005fea80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fea80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005feaa0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005feaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5feaa0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = in_ecx[5];
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[6];
  fVar4 = in_ecx[2];
  fVar5 = (float10)REFG(double, 0x1088108);
  *param_2 = ((float)GEN_TOF(((float10)(float)((float10)in_ecx[4] + (float10)*in_ecx) * fVar5)));
  param_2[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) * fVar5)));
  param_2[2] = ((float)GEN_TOF((fVar5 * (float10)(float)((float10)fVar3 + (float10)fVar4))));
  return 0;
}

/* ref: FUN_005feb80 */
GEN_NOFRAME uint GEN_THISCALL F_005feb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5feb80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  
  pfVar1 = (float *)F_005fe770(param_1 GEN_EDX_FWD,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)*pfVar1 * (float10)*param_2);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar1[1] * (float10)param_2[1]);
  *(float *)((int)this + 0x48) = (float)((float10)pfVar1[2] * (float10)param_2[2]);
  F_005fe2e0(this,param_1);
  F_005fe2e0((int)this + 0x10,param_1 + 0x10);
  F_005fe2e0((int)this + 0x20,param_1 + 0x20);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return (uint)this;
}

/* ref: FUN_005fec10 */
GEN_NOFRAME uint GEN_THISCALL F_005fec10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fec10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float * pfVar8;
  float10 fVar9;
  
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar1 = *param_2;
  fVar2 = param_2[4];
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)fVar2);
  fVar3 = param_2[5];
  fVar4 = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar3 + (float10)fVar4);
  fVar5 = param_2[2];
  fVar6 = param_2[6];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 + (float10)fVar6);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar9 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)this = uVar7;
  *(undefined4 *)((int)this + 0x14) = uVar7;
  *(undefined4 *)((int)this + 0x28) = uVar7;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) * fVar9)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  *(float *)((int)this + 0x30) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 + (float10)fVar4) * fVar9)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  *(float *)((int)this + 0x34) = fVar1;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar5 + (float10)fVar6))));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  *(float *)((int)this + 0x38) = fVar1;
  F_004ef9d0(this GEN_EDX_FWD,param_1);
  fVar1 = param_2[4];
  fVar2 = *param_2;
  (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_2[5] - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2[6] - (float10)param_2[2]);
  fVar9 = (float10)REFG(double, 0x1088108);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2) * fVar9)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)((float10)param_2[5] - (float10)param_2[1]) * fVar9)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)param_2[6] - (float10)param_2[2]))));
  pfVar8 = (float *)F_005fe770(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)*pfVar8);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar8[1] * (float10)(*(float *)(gen_frame + 0x14)));
  *(float *)((int)this + 0x48) = (float)((float10)pfVar8[2] * (float10)(*(float *)(gen_frame + 0x18)));
  F_0046f390(this GEN_EDX_ARG);
  F_0046f390((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  F_0046f390((undefined *)((int)this + 0x20) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_005fed50 */
GEN_NOFRAME uint GEN_THISCALL F_005fed50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fed50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  
  pfVar1 = (float *)F_005fe770(param_1 GEN_EDX_FWD,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)*pfVar1 * (float10)*param_2);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar1[1] * (float10)param_2[1]);
  *(float *)((int)this + 0x48) = (float)((float10)pfVar1[2] * (float10)param_2[2]);
  F_005fe2e0(this,param_1);
  F_005fe2e0((int)this + 0x10,param_1 + 0x10);
  F_005fe2e0((int)this + 0x20,param_1 + 0x20);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return (uint)this;
}

/* ref: FUN_005fede0 */
GEN_NOFRAME uint GEN_THISCALL F_005fede0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fede0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float * pfVar8;
  float10 fVar9;
  
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar1 = *param_2;
  fVar2 = param_2[4];
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)fVar2);
  fVar3 = param_2[5];
  fVar4 = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar3 + (float10)fVar4);
  fVar5 = param_2[2];
  fVar6 = param_2[6];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 + (float10)fVar6);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar9 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)this = uVar7;
  *(undefined4 *)((int)this + 0x14) = uVar7;
  *(undefined4 *)((int)this + 0x28) = uVar7;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) * fVar9)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  *(float *)((int)this + 0x30) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 + (float10)fVar4) * fVar9)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  *(float *)((int)this + 0x34) = fVar1;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar5 + (float10)fVar6))));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  *(float *)((int)this + 0x38) = fVar1;
  F_004ef9d0(this GEN_EDX_FWD,param_1);
  fVar1 = param_2[4];
  fVar2 = *param_2;
  (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_2[5] - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2[6] - (float10)param_2[2]);
  fVar9 = (float10)REFG(double, 0x1088108);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2) * fVar9)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)((float10)param_2[5] - (float10)param_2[1]) * fVar9)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)param_2[6] - (float10)param_2[2]))));
  pfVar8 = (float *)F_005fe770(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)*pfVar8);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar8[1] * (float10)(*(float *)(gen_frame + 0x14)));
  *(float *)((int)this + 0x48) = (float)((float10)pfVar8[2] * (float10)(*(float *)(gen_frame + 0x18)));
  F_0046f390(this GEN_EDX_ARG);
  F_0046f390((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  F_0046f390((undefined *)((int)this + 0x20) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_005fef20 */
GEN_FRAME uint GEN_THISCALL F_005fef20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fef20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005ff040 */
GEN_FRAME uint GEN_THISCALL F_005ff040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5ff040u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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

/* ref: FUN_005ff0f0 */
GEN_NOFRAME undefined * GEN_THISCALL F_005ff0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar1 = (float)((float10)*param_1 - (float10)*(float *)this);
  fVar2 = ((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)((int)this + 4))));
  fVar3 = ((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)((int)this + 8))));
  fVar6 = (float10)fVar2;
  fVar7 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  fVar9 = (float10)param_1[3];
  fVar10 = (float10)((float)GEN_TOF((fVar9 - (float10)*(float *)((int)this + 0xc))));
  fVar6 = (float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
  if (fVar6 <= fVar10 * fVar10) {
    if ((float10)*(float *)((int)this + 0xc) < fVar9) {
      *(float *)this = *param_1;
      *(float *)((int)this + 4) = param_1[1];
      *(float *)((int)this + 8) = param_1[2];
      *(float *)((int)this + 0xc) = param_1[3];
      return this;
    }
  }
  else {
    fVar4 = *(float *)((int)this + 0xc);
    fVar6 = (float10)((float)GEN_TOF(SQRT(fVar6)));
    fVar5 = ((float)GEN_TOF((((float10)param_1[3] + (fVar6 + (float10)fVar4)) * (float10)REFG(double, 0x1088108))));
    *(float *)((int)this + 0xc) = fVar5;
    if ((float10)REFG(float, 0x10905c4) < fVar6) {
      fVar6 = (float10)((float)GEN_TOF((((float10)fVar5 - (float10)fVar4) / fVar6)));
      *(float *)this = ((float)GEN_TOF(((float10)*(float *)this + (float10)(float)(fVar6 * (float10)fVar1))));
      *(float *)((int)this + 4) =
           ((float)GEN_TOF(((float10)*(float *)((int)this + 4) + (float10)(float)((float10)fVar2 * fVar6))));
      *(float *)((int)this + 8) =
           ((float)GEN_TOF(((float10)*(float *)((int)this + 8) + (float10)(float)(fVar6 * (float10)fVar3))));
      return this;
    }
  }
  return this;
}

/* ref: FUN_005ff260 */
GEN_FRAME uint GEN_THISCALL F_005ff260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x5ff260u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_4);
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)in_ecx;
}

/* ref: FUN_005ff410 */
GEN_NOFRAME byte GEN_THISCALL F_005ff410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_004f45d0(((undefined1 *)(gen_frame + 0x40)),param_1);
  F_004ee970(((float *)(gen_frame + 0x10)),this,((undefined1 *)(gen_frame + 0x40)));
  F_004ee9d0(((float *)(gen_frame + 0x0)),(int)this + 0x10,((undefined1 *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x30)) = 0.0;
  fVar6 = (float10)0.0;
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090998);
  fVar7 = (float10)REFG(float, 0x1090998);
  pfVar5 = (float *)(param_1 + 0x40);
  uVar4 = 0;
  do {
    (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x0)) + uVar4);
    fVar8 = (float10)*(float *)((int)((float *)(gen_frame + 0x0)) + uVar4);
    fVar1 = ((float)GEN_TOF(ABS(fVar8)));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    if ((float10)fVar1 <= (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x10)) + uVar4);
      (*(float *)(gen_frame + 0x38)) = *pfVar5;
      fVar8 = (float10)*(float *)((int)((float *)(gen_frame + 0x10)) + uVar4);
      fVar9 = (float10)*pfVar5;
      fVar10 = -fVar9;
      if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar8)) && !(fVar10 <= fVar8)) || (fVar9 < fVar8)) {
        bVar3 = 0;
        goto LAB_005ff585;
      }
    }
    else {
      fVar1 = (float)((float10)1 / fVar8);
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      (*(float *)(gen_frame + 0x38)) = *pfVar5;
      (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x10)) + uVar4);
      fVar8 = (float10)*pfVar5;
      fVar9 = (float10)*(float *)((int)((float *)(gen_frame + 0x10)) + uVar4);
      fVar10 = (float10)fVar1;
      fVar1 = ((float)GEN_TOF((fVar10 * (-fVar8 - fVar9))));
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar2 = ((float)GEN_TOF((fVar10 * (fVar8 - fVar9))));
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        (*(float *)(gen_frame + 0x38)) = fVar2;
      }
      if (fVar6 < (float10)(*(float *)(gen_frame + 0x38))) {
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x38));
        fVar6 = (float10)(*(float *)(gen_frame + 0x38));
      }
      if ((float10)(*(float *)(gen_frame + 0x3c)) < fVar7) {
        (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x3c));
        fVar7 = (float10)(*(float *)(gen_frame + 0x3c));
      }
      if ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar7)) && !(fVar6 <= fVar7)) {
        bVar3 = 0;
        goto LAB_005ff585;
      }
    }
    uVar4 = uVar4 + 4;
    pfVar5 = pfVar5 + 1;
    if (0xb < uVar4) {
      bVar3 = 1;
LAB_005ff585: ;
      F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90) GEN_EDX_ARG);
      return bVar3;
    }
  } while( true );
}

/* ref: FUN_005ff5c0 */
GEN_NOFRAME uint GEN_THISCALL F_005ff5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff5c0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)(float)((float10)in_ecx[1] - (float10)param_2[1]);
  fVar3 = (float10)(float)((float10)*in_ecx - (float10)*param_2);
  fVar4 = (float10)(float)((float10)in_ecx[2] - (float10)param_2[2]);
  fVar1 = ((float)GEN_TOF(((fVar2 * (float10)in_ecx[5] + fVar3 * (float10)in_ecx[4]) +
                 fVar4 * (float10)in_ecx[6])));
  fVar2 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2)))) -
                          (float10)param_2[3] * (float10)param_2[3])));
  if (((float10)0 < fVar2) &&
     ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114)))) {
    return (uint)param_2 & 0xffffff00;
  }
  if ((float10)0 <= (float10)fVar1 * (float10)fVar1 - fVar2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005ff690 */
GEN_NOFRAME byte GEN_THISCALL F_005ff690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
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
  
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10a2b98);
  fVar10 = (float10)*(float *)this;
  fVar11 = (float10)*(float *)((int)this + 4);
  fVar12 = (float10)*(float *)((int)this + 8);
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar10 + (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) *
                                                            fVar9)))))) - fVar10)));
  fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) *
                                                            fVar9)))))) - fVar11)));
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)((float)GEN_TOF((fVar9 * (float10)*(float *)((int)this +
                                                                                        0x18))))))) -
                 fVar12)));
  fVar4 = (float)((float10)param_1[6] - (float10)param_1[2]);
  fVar9 = (float10)(float)(fVar11 - (float10)param_1[1]);
  fVar11 = (float10)(float)((float10)param_1[5] - (float10)param_1[1]);
  fVar10 = (float10)(float)(fVar10 - (float10)*param_1);
  fVar13 = (float10)(float)((float10)param_1[4] - (float10)*param_1);
  fVar12 = (float10)(float)(fVar12 - (float10)param_1[2]);
  fVar5 = ((float)GEN_TOF((fVar12 * (float10)fVar4 + (fVar11 * fVar9 + fVar13 * fVar10))));
  fVar6 = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 +
                 (fVar13 * (float10)fVar1 + fVar11 * (float10)fVar2))));
  fVar4 = ((float)GEN_TOF(((fVar13 * fVar13 + fVar11 * fVar11) + (float10)fVar4 * (float10)fVar4)));
  fVar11 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar1 * (float10)fVar1 + fVar11 * fVar11))));
  fVar1 = ((float)GEN_TOF((fVar12 * (float10)fVar3 + (fVar10 * (float10)fVar1 + fVar11 * fVar9))));
  fVar11 = (float10)fVar6;
  fVar13 = (float10)fVar4;
  fVar3 = (float)(fVar13 * (float10)fVar2 - fVar11 * fVar11);
  fVar7 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar10 * fVar10 + fVar9 * fVar9) + fVar12 * fVar12))) -
                 (float10)(float)((float10)param_1[3] * (float10)param_1[3]))));
  fVar9 = (float10)fVar5;
  fVar8 = (float)((float10)fVar7 * fVar13 - fVar9 * fVar9);
  if (((!(fVar5 < 0.0)) || (!(fVar11 + fVar9 < (float10)0))) &&
     ((!(fVar13 < fVar9) || (!(fVar13 < fVar11 + fVar9))))) {
    fVar10 = (float10)fVar3;
    if ((double)((float)GEN_TOF(ABS(fVar10))) < *(double *)&REFG(undefined, 0x109ce00)) {
      if (!GEN_ISNAN(fVar8) && !(0.0 <= fVar8)) {
        return 1;
      }
    }
    else {
      fVar9 = (float10)(float)((float10)fVar1 * fVar13 - fVar11 * fVar9);
      fVar10 = (float10)(float)(fVar9 * fVar9 - (float10)fVar8 * fVar10);
      if ((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar10)) && !((float10)0 <= fVar10)) {
        return 0;
      }
      fVar3 = ((float)GEN_TOF((((float10)((float)GEN_TOF(-fVar9)) - (float10)((float)GEN_TOF(SQRT(fVar10)))) / (float10)fVar3)));
      fVar9 = (float10)fVar3;
      if ((!(fVar9 < (float10)0)) && (!(REFG(float, 0x1087f04) < fVar3))) {
        fVar10 = (float10)fVar6;
        fVar11 = (float10)fVar5;
        fVar12 = fVar11 + fVar10 * fVar9;
        fVar9 = (float10)0;
        if (fVar12 < fVar9) {
          if (((!GEN_ISNAN(fVar6) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar6 <= *(float *)&REFG(undefined, 0x1088114))
              ) && ((((float10)fVar1 + (float10)fVar1) +
                    (float10)(float)(-fVar11 / fVar10) * (float10)fVar2) *
                    (float10)(float)(-fVar11 / fVar10) + (float10)fVar7 <= fVar9)) {
            return 1;
          }
        }
        else {
          fVar13 = (float10)fVar4;
          if (!(fVar13 < fVar12)) {
            return 1;
          }
          if (!(fVar6 < 0.0)) {
            return 0;
          }
          fVar12 = (float10)((float)GEN_TOF(((fVar13 - fVar11) / fVar10)));
          if ((((float10)fVar7 + fVar13) - (float10)*(double *)&REFG(undefined, 0x1092098) * fVar11) +
              fVar12 * (fVar12 * (float10)fVar2 +
                       ((float10)fVar1 - fVar10) * (float10)*(double *)&REFG(undefined, 0x1092098)) <= fVar9) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ffa50 */
GEN_FRAME uint GEN_THISCALL F_005ffa50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffa50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_005ffa80 */
GEN_FRAME uint F_005ffa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffa80u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = ((float)GEN_TOF(SQRT((float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(SQRT((float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF(SQRT((float10)*(float *)(param_2 + 8))));
  param_1[3] = *(float *)(param_2 + 0xc);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf4 */
GEN_NOFRAME byte F_005ffb10(void)
{
  GEN_ENTER(0x5ffb10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf5 */
GEN_NOFRAME byte F_005ffb20(void)
{
  GEN_ENTER(0x5ffb20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf6 */
GEN_NOFRAME byte F_005ffb30(void)
{
  GEN_ENTER(0x5ffb30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf7 */
GEN_NOFRAME byte F_005ffb40(void)
{
  GEN_ENTER(0x5ffb40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf3 */
GEN_NOFRAME uint F_005ffb50(void)
{
  GEN_ENTER(0x5ffb50u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf5 */
GEN_NOFRAME byte F_005ffb60(void)
{
  GEN_ENTER(0x5ffb60u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf3 */
GEN_NOFRAME uint F_005ffb70(void)
{
  GEN_ENTER(0x5ffb70u, 0u, 0u, 0u, 0u);
  return 0x78;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf6 */
GEN_NOFRAME byte F_005ffb80(void)
{
  GEN_ENTER(0x5ffb80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf6 */
GEN_NOFRAME uint F_005ffb90(void)
{
  GEN_ENTER(0x5ffb90u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_005ffba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf23 */
GEN_NOFRAME uint GEN_THISCALL F_005ffbb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffbb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf6 */
GEN_NOFRAME uint F_005ffbc0(void)
{
  GEN_ENTER(0x5ffbc0u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_005ffbd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffbd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf23 */
GEN_NOFRAME uint GEN_THISCALL F_005ffbe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffbe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf6 */
GEN_NOFRAME uint F_005ffbf0(void)
{
  GEN_ENTER(0x5ffbf0u, 0u, 0u, 0u, 0u);
  return 0x48;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_005ffc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf23 */
GEN_NOFRAME uint GEN_THISCALL F_005ffc10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffc10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf43 */
GEN_FRAME uint GEN_THISCALL F_005ffc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)(this + 0x38);
  param_1[1] = *(undefined4 *)(this + 0x3c);
  param_1[2] = *(undefined4 *)(this + 0x40);
  param_1[3] = *(undefined4 *)(this + 0x44);
  return (uint)param_1;
}

/* ref: FUN_005ffc50 */
GEN_FRAME uint F_005ffc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffc50u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *param_1 = (float)((float10)*param_2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_2[1]);
  param_1[2] = (float)((float10)param_2[2] * (float10)param_2[2]);
  param_1[3] = param_2[3];
  return (uint)param_1;
}

/* ref: FUN_005ffc80 */
GEN_NOFRAME uint F_005ffc80(void)
{
  GEN_ENTER(0x5ffc80u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: FUN_005ffc90 */
GEN_NOFRAME uint GEN_THISCALL F_005ffc90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffc90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_005ffca0 */
GEN_NOFRAME uint GEN_THISCALL F_005ffca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf6 */
GEN_NOFRAME uint F_005ffcb0(void)
{
  GEN_ENTER(0x5ffcb0u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf24 */
GEN_NOFRAME uint GEN_THISCALL F_005ffcc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf23 */
GEN_NOFRAME uint GEN_THISCALL F_005ffcd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_005ffce0 */
GEN_FRAME uint GEN_THISCALL F_005ffce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  return (uint)this;
}

/* ref: FUN_005ffd20 */
GEN_FRAME uint GEN_THISCALL F_005ffd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005ffd50 */
GEN_FRAME byte GEN_THISCALL F_005ffd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffd50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx != param_2;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf21 */
GEN_NOFRAME byte F_005ffd80(void)
{
  GEN_ENTER(0x5ffd80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf22 */
GEN_NOFRAME byte F_005ffd90(void)
{
  GEN_ENTER(0x5ffd90u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf24 */
GEN_NOFRAME uint F_005ffda0(void)
{
  GEN_ENTER(0x5ffda0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf23 */
GEN_NOFRAME uint F_005ffdb0(void)
{
  GEN_ENTER(0x5ffdb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf25 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005ffdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ffdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf63 */
GEN_NOFRAME uint GEN_THISCALL F_005ffdd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffdd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf6 */
GEN_NOFRAME uint F_005ffde0(void)
{
  GEN_ENTER(0x5ffde0u, 0u, 0u, 0u, 0u);
  return 0x90;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf15 */
GEN_FRAME uint GEN_THISCALL F_005ffdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xec))(this GEN_EDX_FWD)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf21 */
GEN_NOFRAME byte F_005ffe20(void)
{
  GEN_ENTER(0x5ffe20u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf22 */
GEN_NOFRAME byte F_005ffe30(void)
{
  GEN_ENTER(0x5ffe30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf24 */
GEN_NOFRAME uint F_005ffe40(void)
{
  GEN_ENTER(0x5ffe40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf23 */
GEN_NOFRAME uint F_005ffe50(void)
{
  GEN_ENTER(0x5ffe50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf25 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005ffe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ffe60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf68 */
GEN_NOFRAME float F_005ffe70(void)
{
  GEN_ENTER(0x5ffe70u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1088068);
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf57 */
GEN_NOFRAME uint GEN_THISCALL F_005ffe80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffe80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)&REFG(undefined, 0x1379d00) = *(undefined4 *)(in_ecx + 0x30);
  *(undefined4 *)&REFG(undefined, 0x1379d04) = *(undefined4 *)(in_ecx + 0x34);
  *(undefined4 *)&REFG(undefined, 0x1379d08) = *(undefined4 *)(in_ecx + 0x38);
  return 0x1379d00;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf59 */
GEN_NOFRAME uint GEN_THISCALL F_005ffeb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a1e180(0x1379d10,*(float *)(this + 0x3c));
  return 0x1379d10;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf61 */
GEN_NOFRAME uint GEN_THISCALL F_005ffed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ffed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x110))(this);
  *(float *)&REFG(undefined, 0x1379d28) = (float)extraout_ST0;
  *(float *)&REFG(undefined, 0x1379d24) = *(float *)&REFG(undefined, 0x1379d28);
  *(float *)&REFG(undefined, 0x1379d20) = *(float *)&REFG(undefined, 0x1379d28);
  return 0x1379d20;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf62 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005fff00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5fff00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

