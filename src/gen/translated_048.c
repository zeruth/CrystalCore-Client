#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf5 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0067b0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67b0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  char cVar6;
  uint uVar7;
  undefined * pPVar8;
  int * piVar9;
  uint local_8;
  
  piVar9 = *(int * PTR32 *)(this + 0x1c);
  piVar1 = *(int * PTR32 *)(this + 0x18);
  if (piVar9 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xc))))(piVar9 GEN_EDX_FWD);
  }
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x42] = (undefined1)0x0;
  uVar7 = 0;
  pPVar8 = this + 0x18;
  do {
    if (*(int *)pPVar8 == 0) break;
    cVar6 = (char)uVar7;
    uVar7 = uVar7 + 1;
    pPVar8 = pPVar8 + 4;
    this[0x42] = (undefined1)(cVar6 + '\x01');
  } while (uVar7 < 4);
  iVar2 = *(int *)(this + 0x5c);
  iVar3 = *(int *)(this + 0x10);
  local_8 = 0;
  if (*(int *)(this + 0x58) != 0) {
    do {
      if (local_8 == 0) {
        piVar9 = *(int * PTR32 *)(this + 0x14);
      }
      else {
        piVar9 = *((int * PTR32 *)GEN_TOP((this + (local_8 - 1 & 1) * 4 + 0x50)));
      }
      iVar4 = *(int *)(this + 0x5c);
      if (piVar9 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 8))))(piVar9 GEN_EDX_ARG);
      }
      iVar4 = iVar4 * 0xc;
      if (*((int *)GEN_TOP((iVar4 + 4 + *(int *)(this + 0x10)))) != 0) {
        piVar5 = *((int * PTR32 *)GEN_TOP((iVar4 + 4 + *(int *)(this + 0x10))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
      }
      *((int * PTR32 *)GEN_TOP((iVar4 + 4 + *(int *)(this + 0x10)))) = piVar9;
      *((uint *)GEN_TOP((iVar4 + 8 + *(int *)(this + 0x10)))) = *((uint *)GEN_TOP((iVar3 + 8 + iVar2 * 0xc))) & 0xfffffff;
      if (local_8 == *(int *)(this + 0x58) - 1U) {
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
        }
        piVar9 = *(int * PTR32 *)(this + 0x18);
        if (piVar9 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xc))))(piVar9 GEN_EDX_ARG);
        }
        *(int * PTR32 *)(this + 0x18) = piVar1;
        this[0x42] = (undefined1)0x0;
        uVar7 = 0;
        pPVar8 = this + 0x18;
        do {
          if (*(int *)pPVar8 == 0) break;
          cVar6 = (char)uVar7;
          uVar7 = uVar7 + 1;
          pPVar8 = pPVar8 + 4;
          this[0x42] = (undefined1)(cVar6 + '\x01');
        } while (uVar7 < 4);
      }
      else {
        piVar9 = *((int * PTR32 *)GEN_TOP((this + (local_8 & 1) * 4 + 0x50)));
        if (piVar9 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 8))))(piVar9 GEN_EDX_ARG);
        }
        piVar5 = *(int * PTR32 *)(this + 0x18);
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
        }
        *(int * PTR32 *)(this + 0x18) = piVar9;
        this[0x42] = (undefined1)0x0;
        uVar7 = 0;
        pPVar8 = this + 0x18;
        do {
          if (*(int *)pPVar8 == 0) break;
          cVar6 = (char)uVar7;
          uVar7 = uVar7 + 1;
          pPVar8 = pPVar8 + 4;
          this[0x42] = (undefined1)(cVar6 + '\x01');
        } while (uVar7 < 4);
      }
      F_0067acb0((undefined *)this GEN_EDX_ARG);
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(this + 0x58));
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf5 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0067b260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67b260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined * pPVar5;
  int iVar6;
  float10 fVar7;
  
  iVar6 = *((int *)GEN_TOP((*(int *)(this + 0x10) + 4)));
  fVar7 = (float10)*((int *)GEN_TOP((iVar6 + 0x18)));
  if (*((int *)GEN_TOP((iVar6 + 0x18))) < 0) {
    fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1094808);
  pfVar4 = &(*(float *)(gen_frame + 0x20));
  fVar1 = (float)(fVar7 * (float10)*(double *)&REFG(undefined, 0x10ac178));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  if (!(*(double *)&REFG(undefined, 0x1094878) < (double)fVar1)) {
    pfVar4 = &(*(float *)(gen_frame + 0x24));
  }
  fVar1 = *pfVar4;
  fVar7 = (float10)*((int *)GEN_TOP((iVar6 + 0x1c)));
  if (*((int *)GEN_TOP((iVar6 + 0x1c))) < 0) {
    fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  pfVar4 = &(*(float *)(gen_frame + 0x20));
  fVar2 = (float)(fVar7 * (float10)*(double *)&REFG(undefined, 0x10ac178));
  (*(float *)(gen_frame + 0x24)) = fVar2;
  if (!(*(double *)&REFG(undefined, 0x1094878) < (double)fVar2)) {
    pfVar4 = &(*(float *)(gen_frame + 0x24));
  }
  fVar2 = *pfVar4;
  iVar6 = *(int *)(this + 8);
  fVar3 = gen_bits2f(*((int *)GEN_TOP((iVar6 + 0x24))) << 4);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(uint *)(gen_frame + 0x0)) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x4)) = (uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0);
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(uint *)(gen_frame + 0xc)) = (uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x10)) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  (*(float *)(gen_frame + 0x20)) = 4.48416e-44;
  pfVar4 = &(*(float *)(gen_frame + 0x20));
  if ((uint)gen_fl2bits(fVar3) < 0x21) {
    pfVar4 = &(*(float *)(gen_frame + 0x24));
  }
  F_00c46aa0(iVar6 + 0x28,&(*(uint *)(gen_frame + 0x0)),(undefined4)gen_fl2bits(*pfVar4));
  F_0067acb0((undefined *)this GEN_EDX_ARG);
  pPVar5 = this + 0x60;
  iVar6 = 3;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pPVar5 + 0x14))))(pPVar5 GEN_EDX_ARG);
    pPVar5 = pPVar5 + 0x50;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf3 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_0067b380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67b380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xa4, 12, 4);
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  undefined * pPVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0));
  bVar1 = true;
  pPVar5 = this + 0x58;
  iVar7 = 3;
  do {
    if (bVar1) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pPVar5 + 0xc))))(pPVar5 GEN_EDX_FWD);
      if ((char)uVar3 == '\0') goto LAB_0067b3b7;
      bVar1 = true;
    }
    else {
LAB_0067b3b7: ;
      bVar1 = false;
    }
    pPVar5 = pPVar5 + 0x50;
    iVar7 = iVar7 - 1;
    if (iVar7 == 0) {
      bVar2 = 0;
      if (bVar1) {
        bVar2 = F_0067aa50((undefined *)this GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x53)) = bVar2;
        if (bVar2 != 0) {
          ((undefined4 *)(gen_frame + 0x0))[0] = 0;
          ((undefined4 *)(gen_frame + 0x0))[1] = 0;
          ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x10adb80));
          ((undefined4 *)(gen_frame + 0x0))[3] = 0;
          ((undefined4 *)(gen_frame + 0x0))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[4], REFG(float, 0x10adb7c));
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
          (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
          (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
          (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
          (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
          (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
          (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb80)));
          (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
          (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb7c)));
          puVar6 = ((undefined4 *)(gen_frame + 0x0));
          puVar8 = ((undefined4 *)(gen_frame + 0x54));
          for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 - 1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          iVar7 = *(int *)(this + 0x60);
          uVar3 = *((int *)GEN_TOP((iVar7 + 0x24))) << 4;
          (*(uint *)(gen_frame + 0x4c)) = uVar3;
          (*(uint *)(gen_frame + 0x48)) = 0x48;
          puVar4 = &(*(uint *)(gen_frame + 0x48));
          if (uVar3 < 0x49) {
            puVar4 = &(*(uint *)(gen_frame + 0x4c));
          }
          F_00c46aa0(iVar7 + 0x28,((undefined4 *)(gen_frame + 0x54)),*puVar4);
          iVar7 = *(int *)(this + 0xb0);
          ((undefined4 *)(gen_frame + 0x54))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[2], REFG(float, 0x10adbb8));
          ((undefined4 *)(gen_frame + 0x54))[4] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[4], REFG(float, 0x10adbb4));
          ((undefined4 *)(gen_frame + 0x54))[6] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[6], REFG(float, 0x10adbb0));
          ((undefined4 *)(gen_frame + 0x54))[8] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[8], REFG(float, 0x10adbac));
          uVar3 = *((int *)GEN_TOP((iVar7 + 0x24))) << 4;
          ((undefined4 *)(gen_frame + 0x54))[10] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[10], REFG(float, 0x10adba8));
          (*(uint *)(gen_frame + 0x48)) = uVar3;
          ((undefined4 *)(gen_frame + 0x54))[0] = 0;
          ((undefined4 *)(gen_frame + 0x54))[1] = 0;
          ((undefined4 *)(gen_frame + 0x54))[3] = 0;
          ((undefined4 *)(gen_frame + 0x54))[5] = 0;
          ((undefined4 *)(gen_frame + 0x54))[7] = 0;
          ((undefined4 *)(gen_frame + 0x54))[9] = 0;
          ((undefined4 *)(gen_frame + 0x54))[0xb] = 0;
          ((undefined4 *)(gen_frame + 0x54))[0xc] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[0xc], REFG(float, 0x10adba4));
          ((undefined4 *)(gen_frame + 0x54))[0xd] = 0;
          (*(uint *)(gen_frame + 0x4c)) = 0x38;
          puVar4 = &(*(uint *)(gen_frame + 0x4c));
          if (uVar3 < 0x39) {
            puVar4 = &(*(uint *)(gen_frame + 0x48));
          }
          F_00c46aa0(iVar7 + 0x28,((undefined4 *)(gen_frame + 0x54)),*puVar4);
          iVar7 = *(int *)(this + 0x100);
          ((undefined4 *)(gen_frame + 0x54))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[3], REFG(float, 0x10adbb8));
          ((undefined4 *)(gen_frame + 0x54))[5] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[5], REFG(float, 0x10adbb4));
          ((undefined4 *)(gen_frame + 0x54))[7] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[7], REFG(float, 0x10adbb0));
          uVar3 = *((int *)GEN_TOP((iVar7 + 0x24))) << 4;
          ((undefined4 *)(gen_frame + 0x54))[0] = 0;
          ((undefined4 *)(gen_frame + 0x54))[1] = 0;
          ((undefined4 *)(gen_frame + 0x54))[2] = 0;
          ((undefined4 *)(gen_frame + 0x54))[4] = 0;
          ((undefined4 *)(gen_frame + 0x54))[6] = 0;
          ((undefined4 *)(gen_frame + 0x54))[8] = 0;
          ((undefined4 *)(gen_frame + 0x54))[9] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[9], REFG(float, 0x10adbac));
          ((undefined4 *)(gen_frame + 0x54))[10] = 0;
          ((undefined4 *)(gen_frame + 0x54))[0xc] = 0;
          (*(uint *)(gen_frame + 0x48)) = uVar3;
          ((undefined4 *)(gen_frame + 0x54))[0xb] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[0xb], REFG(float, 0x10adba8));
          ((undefined4 *)(gen_frame + 0x54))[0xd] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x54))[0xd], REFG(float, 0x10adba4));
          (*(uint *)(gen_frame + 0x4c)) = 0x38;
          puVar4 = &(*(uint *)(gen_frame + 0x4c));
          if (uVar3 < 0x39) {
            puVar4 = &(*(uint *)(gen_frame + 0x48));
          }
          F_00c46aa0(iVar7 + 0x28,((undefined4 *)(gen_frame + 0x54)),*puVar4);
          *(undefined2 *)(this + 0x90) = 0xffff;
          *(undefined2 *)(this + 0x92) = 0xffff;
          *(undefined2 *)(this + 0x94) = 0xffff;
          *(undefined2 *)(this + 0x96) = 0xffff;
          this[0xa0] = (undefined1)((byte)this[0xa0] | 1);
          *(undefined4 *)(this + 0x8c) = 0;
          *(undefined2 *)(this + 0xe0) = 0xffff;
          *(undefined2 *)(this + 0xe2) = 0xffff;
          *(undefined2 *)(this + 0xe4) = 0xffff;
          *(undefined2 *)(this + 0xe6) = 0xffff;
          this[0xf0] = (undefined1)((byte)this[0xf0] | 1);
          *(undefined4 *)(this + 0xdc) = 0;
          *(undefined2 *)(this + 0x130) = 0xffff;
          *(undefined2 *)(this + 0x132) = 0xffff;
          bVar2 = (*(byte *)(gen_frame + 0x53));
        }
      }
      return bVar2;
    }
  } while( true );
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf5 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0067b690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67b690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x194, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 PVar8;
  short sVar9;
  undefined * pvVar10;
  int * piVar11;
  char cVar13;
  byte bVar14;
  uint uVar15;
  uint * puVar16;
  int iVar17;
  undefined4 * puVar18;
  float * pfVar19;
  uint * PTR32 * ppuVar20;
  char cVar21;
  int iVar22;
  uint * puVar23;
  uint * puVar24;
  float * pfVar25;
  int iVar26;
  int * piVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x190));
  uVar15 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar15 == '\0') {
    return uVar15;
  }
  iVar22 = *(int *)(this + 0x14);
  if (iVar22 == 0) {
    return uVar15;
  }
  iVar26 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  pvVar10 = *((undefined * PTR32 *)GEN_TOP((iVar26 + 0x1a8)));
  (*(int *)(gen_frame + 0x34)) = iVar26;
  sVar9 = *(short *)(this + 0x38);
  (*(undefined * PTR32 *)(gen_frame + 0x84)) = pvVar10;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = REFG(void * PTR32, 0x148809c);
  ((float *)(gen_frame + 0x10))[0] = 0.0;
  ((float *)(gen_frame + 0x10))[1] = 0.0;
  ((float *)(gen_frame + 0x10))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x10))[2], REFG(float, 0x1087f04));
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0x0))[0] = 0.0;
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  ((float *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[2], REFG(float, 0x1087f04));
  (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
  if ((sVar9 == 0) && (*(short *)(this + 0x3a) == 0)) {
    cVar21 = '\0';
  }
  else {
    cVar21 = '\x01';
  }
  (*(bool *)(gen_frame + 0xc7)) = (bool)cVar21;
  if ((*(short *)(this + 0x3c) == 0) && (*(short *)(this + 0x3e) == 0)) {
    cVar13 = '\0';
  }
  else {
    cVar13 = '\x01';
  }
  (*(char *)(gen_frame + 0xbf)) = cVar13;
  if (cVar21 == '\0') {
    if (cVar13 == '\0') goto LAB_0067b8dd;
LAB_0067b7d0: ;
    iVar26 = *((int *)GEN_TOP((*(int *)(this + 0x18) + 0x18)));
    iVar22 = *((int *)GEN_TOP((*(int *)(this + 0x18) + 0x1c)));
    (*(int *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = iVar22;
    sVar9 = *(short *)(this + 0x3e);
    iVar22 = iVar22 + sVar9;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = iVar22;
    iVar26 = iVar26 + *(short *)(this + 0x3c);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) = iVar26;
    (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44(iVar22,iVar26));
    (*(int *)(gen_frame + 0x40)) = -(int)*(short *)(this + 0x3c);
    (*(int *)(gen_frame + 0x44)) = -(int)sVar9;
    F_004d4bb0(pvVar10 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x40)));
    puVar16 = ((uint *)GEN_TOP(F_004d4a30(&(*(uint * PTR32 *)(gen_frame + 0xac)) GEN_EDX_ARG,3,1,0,1,(float)(float10)0,(float)(float10)0)));
    *((uint *)GEN_TOP(((int)pvVar10 + 0x3c))) = *puVar16 & 0x7fffffff;
    iVar22 = *(int *)(this + 0x18) + 0x18;
  }
  else {
    iVar26 = *((int *)GEN_TOP((iVar22 + 0x18)));
    iVar22 = *((int *)GEN_TOP((iVar22 + 0x1c)));
    (*(int *)(gen_frame + 0x54)) = 0;
    sVar9 = *(short *)(this + 0x38);
    (*(int *)(gen_frame + 0x50)) = 0;
    (*(int *)(gen_frame + 0x54)) = -(int)*(short *)(this + 0x3a);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x58)) + 4)) = iVar22;
    iVar22 = iVar22 + *(short *)(this + 0x3a);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x58)) + 4)) = iVar22;
    iVar26 = iVar26 + sVar9;
    (*(int *)(gen_frame + 0x50)) = -(int)sVar9;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x58)) + 0)) = iVar26;
    (*(double *)(gen_frame + 0x58)) = gen_bits2d(CONCAT44(iVar22,iVar26));
    if (cVar13 != '\0') goto LAB_0067b7d0;
    puVar16 = ((uint *)GEN_TOP(F_004d4a30(&(*(uint * PTR32 *)(gen_frame + 0xac)) GEN_EDX_ARG,3,1,0,0,(float)(float10)0,(float)(float10)0)));
    *((uint *)GEN_TOP(((int)pvVar10 + 0x3c))) = *puVar16 & 0x7fffffff;
    iVar22 = 0;
  }
  if ((*(bool *)(gen_frame + 0xc7)) == false) {
    iVar26 = 0;
  }
  else {
    iVar26 = *(int *)(this + 0x14) + 0x18;
  }
  F_00675340((uint)((float *)(gen_frame + 0x10)),iVar26,-(uint)((*(bool *)(gen_frame + 0xc7)) != false) & (uint)&(*(int *)(gen_frame + 0x50)),iVar22,
               -(uint)((*(char *)(gen_frame + 0xbf)) != '\0') & (uint)&(*(int *)(gen_frame + 0x40)));
LAB_0067b8dd: ;
  fVar1 = REFG(float, 0x1087f04);
  puVar23 = ((uint *)GEN_TOP(0x0));
  puVar16 = ((uint *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP((*(int *)(this + 4) + 0x9c))) != 0) {
    *((int *)GEN_TOP(((int)pvVar10 + 0x44))) = *((int *)GEN_TOP((*(int *)(this + 4) + 0x9c)));
    uVar15 = REFG(undefined4, 0x14882b0);
    *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x60))) = 0;
    if ((uVar15 & 1) == 0) {
      uVar15 = uVar15 | 1;
      *(float *)&REFG(undefined, 0x14882a0) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882a0), REFG(float, 0x10addb8));
      *(float *)&REFG(undefined, 0x14882a4) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882a4), REFG(float, 0x10addb8));
      *(float *)&REFG(undefined, 0x14882a8) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882a8), REFG(float, 0x10addb8));
      *(float *)&REFG(undefined, 0x14882ac) = 0.0;
      REFG(undefined4, 0x14882b0) = uVar15;
    }
    if ((uVar15 & 2) == 0) {
      uVar15 = uVar15 | 2;
      *(float *)&REFG(undefined, 0x1488254) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488254), REFG(float, 0x10abe50));
      *(float *)&REFG(undefined, 0x1488220) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488220), REFG(float, 0x1088068));
      *(float *)&REFG(undefined, 0x1488224) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488224), REFG(float, 0x1088068));
      *(float *)&REFG(undefined, 0x1488228) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488228), REFG(float, 0x1088068));
      *(float *)&REFG(undefined, 0x148822c) = 0.0;
      *(float *)&REFG(undefined, 0x1488230) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488230), REFG(float, 0x1088068));
      *(float *)&REFG(undefined, 0x1488234) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488234), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x1488238) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488238), REFG(float, 0x10ac1a8));
      *(float *)&REFG(undefined, 0x148823c) = 0.0;
      *(float *)&REFG(undefined, 0x1488240) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488240), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x1488244) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488244), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x1488248) = fVar1;
      *(float *)&REFG(undefined, 0x148824c) = 0.0;
      *(float *)&REFG(undefined, 0x1488250) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488250), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x1488258) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488258), REFG(float, 0x10944e8));
      *(float *)&REFG(undefined, 0x148825c) = 0.0;
      *(float *)&REFG(undefined, 0x1488260) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488260), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x1488264) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488264), REFG(float, 0x10ac1a8));
      *(float *)&REFG(undefined, 0x1488268) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488268), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x148826c) = 0.0;
      *(float *)&REFG(undefined, 0x1488270) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488270), REFG(float, 0x10ac1a8));
      *(float *)&REFG(undefined, 0x1488274) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488274), REFG(float, 0x10ac1a8));
      *(float *)&REFG(undefined, 0x1488278) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488278), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x148827c) = 0.0;
      *(float *)&REFG(undefined, 0x1488280) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488280), REFG(float, 0x10944e8));
      *(float *)&REFG(undefined, 0x1488284) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488284), REFG(float, 0x1088068));
      *(float *)&REFG(undefined, 0x1488288) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488288), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x148828c) = 0.0;
      *(float *)&REFG(undefined, 0x1488290) = fVar1;
      *(float *)&REFG(undefined, 0x1488294) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488294), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x1488298) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1488298), REFG(float, 0x10a0da0));
      *(float *)&REFG(undefined, 0x148829c) = 0.0;
      REFG(undefined4, 0x14882b0) = uVar15;
    }
    if ((uVar15 & 4) == 0) {
      REFG(undefined4, 0x14882b0) = uVar15 | 4;
    }
    fVar28 = (float10)REFG(double, 0x1088108);
    iVar22 = 3;
    dVar4 = GEN_X87((double)((float10)*(float *)&REFG(undefined, 0x14882a0) * fVar28));
    (*(double *)(gen_frame + 0x90)) = dVar4;
    dVar5 = GEN_X87((double)((float10)*(float *)&REFG(undefined, 0x14882a4) * fVar28));
    (*(double *)(gen_frame + 0x98)) = dVar5;
    dVar6 = GEN_X87((double)((float10)*(float *)&REFG(undefined, 0x14882a8) * fVar28));
    (*(double *)(gen_frame + 0xa0)) = dVar6;
    dVar7 = GEN_X87((double)((float10)*(float *)&REFG(undefined, 0x14882ac) * fVar28));
    (*(double *)(gen_frame + 0x88)) = dVar7;
    pfVar19 = (float *)&REFG(undefined4, 0x14880a8);
    do {
      puVar23 = ((uint *)GEN_TOP(((int)puVar23 + 1)));
      (*(uint * PTR32 *)(gen_frame + 0xac)) = puVar23;
      fVar29 = (float10)(int)puVar23;
      if ((int)puVar23 < 0) {
        fVar29 = GEN_X87(fVar29 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar29 / (float10)*(double *)&REFG(undefined, 0x10944e0)))));
      fVar29 = GEN_X87((float10)(float)(fVar29 / (float10)*(double *)&REFG(undefined, 0x10944e0)));
      fVar1 = (float)((float10)1 - fVar29);
      (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      (*(uint * PTR32 *)(gen_frame + 0xc8)) = ((uint *)(uintptr_t)gen_fl2bits((float)(fVar1)));
      fVar30 = GEN_X87((float10)*(float *)&REFG(undefined, 0x14882a0) * fVar29);
      fVar31 = (float10)fVar1;
      pfVar19[-2] = (float)(fVar31 * (float10)*(float *)&REFG(undefined, 0x1488220) + fVar30);
      fVar32 = GEN_X87((float10)*(float *)&REFG(undefined, 0x14882a4) * fVar29);
      pfVar19[-1] = (float)((float10)*(float *)&REFG(undefined, 0x1488224) * fVar31 + fVar32);
      fVar33 = GEN_X87((float10)*(float *)&REFG(undefined, 0x14882a8) * fVar29);
      *pfVar19 = (float)((float10)*(float *)&REFG(undefined, 0x1488228) * fVar31 + fVar33);
      fVar29 = GEN_X87((float10)*(float *)&REFG(undefined, 0x14882ac) * fVar29);
      pfVar19[1] = (float)((float10)*(float *)&REFG(undefined, 0x148822c) * (float10)fVar1 + fVar29);
      pfVar19[-2] = (float)((float10)pfVar19[-2] * fVar28 + (float10)dVar4);
      pfVar19[-1] = (float)((float10)pfVar19[-1] * fVar28 + (float10)dVar5);
      *pfVar19 = (float)((float10)*pfVar19 * fVar28 + (float10)dVar6);
      pfVar19[1] = (float)((float10)pfVar19[1] * fVar28 + (float10)dVar7);
      pfVar19[2] = (float)((float10)fVar1 * (float10)*(float *)&REFG(undefined, 0x1488230) + fVar30);
      pfVar19[3] = (float)((float10)*(float *)&REFG(undefined, 0x1488234) * (float10)fVar1 + fVar32);
      pfVar19[4] = (float)((float10)*(float *)&REFG(undefined, 0x1488238) * (float10)fVar1 + fVar33);
      pfVar19[5] = (float)((float10)*(float *)&REFG(undefined, 0x148823c) * (float10)fVar1 + fVar29);
      pfVar19[2] = (float)((float10)pfVar19[2] * fVar28 + (float10)dVar4);
      pfVar19[3] = (float)((float10)pfVar19[3] * fVar28 + (float10)dVar5);
      pfVar19[4] = (float)((float10)pfVar19[4] * fVar28 + (float10)dVar6);
      pfVar19[5] = (float)((float10)pfVar19[5] * fVar28 + (float10)dVar7);
      pfVar19[6] = (float)((float10)fVar1 * (float10)*(float *)&REFG(undefined, 0x1488240) + fVar30);
      pfVar19[7] = (float)((float10)*(float *)&REFG(undefined, 0x1488244) * (float10)fVar1 + fVar32);
      pfVar19[8] = (float)((float10)*(float *)&REFG(undefined, 0x1488248) * (float10)fVar1 + fVar33);
      pfVar19[9] = (float)((float10)*(float *)&REFG(undefined, 0x148824c) * (float10)fVar1 + fVar29);
      pfVar19[6] = (float)((float10)pfVar19[6] * fVar28 + (float10)dVar4);
      pfVar19[7] = (float)((float10)pfVar19[7] * fVar28 + (float10)dVar5);
      pfVar19[8] = (float)((float10)pfVar19[8] * fVar28 + (float10)dVar6);
      pfVar19[9] = (float)((float10)pfVar19[9] * fVar28 + (float10)dVar7);
      pfVar19[10] = (float)((float10)fVar1 * (float10)*(float *)&REFG(undefined, 0x1488250) + fVar30);
      pfVar19[0xb] = (float)((float10)*(float *)&REFG(undefined, 0x1488254) * (float10)fVar1 + fVar32);
      pfVar19[0xc] = (float)((float10)*(float *)&REFG(undefined, 0x1488258) * (float10)fVar1 + fVar33);
      pfVar19[0xd] = (float)((float10)*(float *)&REFG(undefined, 0x148825c) * (float10)fVar1 + fVar29);
      pfVar19[10] = (float)((float10)pfVar19[10] * fVar28 + (float10)dVar4);
      pfVar19[0xb] = (float)((float10)pfVar19[0xb] * fVar28 + (float10)dVar5);
      pfVar19[0xc] = (float)((float10)pfVar19[0xc] * fVar28 + (float10)dVar6);
      pfVar19[0xd] = (float)((float10)pfVar19[0xd] * fVar28 + (float10)dVar7);
      pfVar19[0xe] = (float)((float10)fVar1 * (float10)*(float *)&REFG(undefined, 0x1488260) + fVar30);
      pfVar19[0xf] = (float)((float10)*(float *)&REFG(undefined, 0x1488264) * (float10)fVar1 + fVar32);
      pfVar19[0x10] = (float)((float10)*(float *)&REFG(undefined, 0x1488268) * (float10)fVar1 + fVar33);
      pfVar19[0x11] = (float)((float10)*(float *)&REFG(undefined, 0x148826c) * (float10)fVar1 + fVar29);
      pfVar19[0xe] = (float)((float10)pfVar19[0xe] * fVar28 + (float10)dVar4);
      pfVar19[0xf] = (float)((float10)pfVar19[0xf] * fVar28 + (float10)dVar5);
      pfVar19[0x10] = (float)((float10)pfVar19[0x10] * fVar28 + (float10)dVar6);
      pfVar19[0x11] = (float)((float10)pfVar19[0x11] * fVar28 + (float10)dVar7);
      pfVar19[0x12] = (float)((float10)fVar1 * (float10)*(float *)&REFG(undefined, 0x1488270) + fVar30);
      pfVar19[0x13] = (float)((float10)*(float *)&REFG(undefined, 0x1488274) * (float10)fVar1 + fVar32);
      pfVar19[0x14] = (float)((float10)*(float *)&REFG(undefined, 0x1488278) * (float10)fVar1 + fVar33);
      pfVar19[0x15] = (float)((float10)*(float *)&REFG(undefined, 0x148827c) * (float10)fVar1 + fVar29);
      pfVar19[0x12] = (float)((float10)pfVar19[0x12] * fVar28 + (float10)dVar4);
      pfVar19[0x13] = (float)((float10)pfVar19[0x13] * fVar28 + (float10)dVar5);
      pfVar19[0x14] = (float)((float10)pfVar19[0x14] * fVar28 + (float10)dVar6);
      pfVar19[0x15] = (float)((float10)pfVar19[0x15] * fVar28 + (float10)dVar7);
      pfVar19[0x16] = (float)((float10)fVar1 * (float10)*(float *)&REFG(undefined, 0x1488280) + fVar30);
      pfVar19[0x17] = (float)((float10)*(float *)&REFG(undefined, 0x1488284) * (float10)fVar1 + fVar32);
      pfVar19[0x18] = (float)((float10)*(float *)&REFG(undefined, 0x1488288) * (float10)fVar1 + fVar33);
      pfVar19[0x19] = (float)((float10)*(float *)&REFG(undefined, 0x148828c) * (float10)fVar1 + fVar29);
      pfVar19[0x16] = (float)((float10)pfVar19[0x16] * fVar28 + (float10)dVar4);
      pfVar19[0x17] = (float)((float10)pfVar19[0x17] * fVar28 + (float10)dVar5);
      iVar22 = iVar22 - 1;
      pfVar19[0x18] = (float)((float10)pfVar19[0x18] * fVar28 + (float10)dVar6);
      pfVar19[0x19] = (float)((float10)pfVar19[0x19] * fVar28 + (float10)dVar7);
      fVar31 = (float10)fVar1;
      pfVar19[0x1a] = (float)(fVar31 * (float10)*(float *)&REFG(undefined, 0x1488290) + fVar30);
      pfVar19[0x1b] = (float)((float10)*(float *)&REFG(undefined, 0x1488294) * fVar31 + fVar32);
      pfVar19[0x1c] = (float)((float10)*(float *)&REFG(undefined, 0x1488298) * fVar31 + fVar33);
      pfVar19[0x1d] = (float)(fVar31 * (float10)*(float *)&REFG(undefined, 0x148829c) + fVar29);
      pfVar19[0x1a] = (float)((float10)pfVar19[0x1a] * fVar28 + (float10)dVar4);
      pfVar19[0x1b] = (float)((float10)pfVar19[0x1b] * fVar28 + (float10)dVar5);
      pfVar19[0x1c] = (float)((float10)pfVar19[0x1c] * fVar28 + (float10)dVar6);
      pfVar19[0x1d] = (float)((float10)pfVar19[0x1d] * fVar28 + (float10)dVar7);
      pfVar19 = pfVar19 + 0x20;
    } while (iVar22 != 0);
    iVar22 = *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x18)));
    fVar1 = *(float *)(this + 100);
    iVar26 = *(int *)(this + 0x18);
    (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    iVar17 = *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x1c)));
    fVar28 = (float10)*((int *)GEN_TOP((iVar26 + 0x18)));
    (*(float *)(gen_frame + 0x64)) = 0.0;
    piVar27 = ((int *)GEN_TOP((int)*(short *)(this + 0x3a)));
    (*(float *)(gen_frame + 0x68)) = 0.0;
    sVar9 = *(short *)(this + 0x38);
    (*(int * PTR32 *)(gen_frame + 0xb4)) = piVar27;
    iVar22 = iVar22 + sVar9 * 2;
    (*(float *)(gen_frame + 0x68)) = gen_bits2f(-(int)piVar27);
    iVar17 = iVar17 + (int)((int)(uintptr_t)piVar27) * 2;
    (*(int * PTR32 *)(gen_frame + 0x60)) = ((int *)GEN_TOP((iVar26 + 0x18)));
    if (*((int *)GEN_TOP((iVar26 + 0x18))) < 0) {
      fVar28 = GEN_X87(fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar29 = (float10)fVar1;
    (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)GEN_TOP(iVar22));
    puVar16 = *((uint * PTR32 *)GEN_TOP((iVar26 + 0x1c)));
    (*(uint * PTR32 *)(gen_frame + 0xac)) = puVar16;
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((fVar29 * fVar28) / (float10)iVar22)));
    fVar28 = (float10)(int)puVar16;
    if ((int)puVar16 < 0) {
      fVar28 = GEN_X87(fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)GEN_TOP(iVar17));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((fVar28 * fVar29) / (float10)iVar17)));
    fVar28 = ((float10)GEN_TOD(GEN_X87MATH((float10)*(double *)&REFG(undefined, 0x10addb0),5)));
    (*(int * PTR32 *)(gen_frame + 0xb8)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar28)));
    puVar23 = *(uint * PTR32 *)(this + 0x60);
    fVar1 = *(float *)(this + 0x6c);
    (*(float *)(gen_frame + 0x38)) = (float)fVar28;
    (*(uint * PTR32 *)(gen_frame + 0xac)) = puVar23;
    fVar28 = (float10)(int)puVar23;
    (*(float *)(gen_frame + 0x24)) = fVar1;
    if ((int)puVar23 < 0) {
      fVar28 = GEN_X87(fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(uint * PTR32 *)(gen_frame + 0xa8)) = ((uint *)GEN_TOP(0x0));
    (*(float *)((char *)&(*(double *)(gen_frame + 0xa0)) + 4)) = (float)((float10)1 / fVar28);
    (*(double *)(gen_frame + 0xa0)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((float)((float10)1 / fVar28)),
                                   (int)(ulonglong)gen_d2bits(dVar6)));
    puVar16 = ((uint *)GEN_TOP(0x0));
    if (puVar23 != ((uint *)GEN_TOP(0x0))) {
      (*(uint * PTR32 *)(gen_frame + 0xac)) = ((uint *)GEN_TOP(0x40));
      do {
        fVar28 = (float10)(int)(*(uint * PTR32 *)(gen_frame + 0xa8));
        (*(int * PTR32 *)(gen_frame + 0xb8)) = *(int * PTR32 *)(this + 0x14);
        if ((int)(*(uint * PTR32 *)(gen_frame + 0xa8)) < 0) {
          fVar28 = GEN_X87(fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = puVar23;
        fVar29 = (float10)(int)puVar23;
        if ((int)puVar23 < 0) {
          fVar29 = GEN_X87(fVar29 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        piVar27 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar28 * (float10)*(float *)&REFG(undefined, 0x1322388)) / fVar29 +
                                (float10)(*(float *)(gen_frame + 0x24))))))));
        (*(int * PTR32 *)(gen_frame + 0xb4)) = piVar27;
        fVar28 = ((float10)GEN_TOD(fsin((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar27))))));
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = ((uint *)(uintptr_t)gen_fl2bits((float)((float)fVar28)));
        (*(float *)(gen_frame + 0x7c)) = (float)((float10)(float)fVar28 * (float10)(*(float *)(gen_frame + 0x28)));
        fVar28 = ((float10)GEN_TOD(fcos((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar27))))));
        (*(uint * PTR32 *)(gen_frame + 0xc0)) = ((uint *)(uintptr_t)gen_fl2bits((float)((float)fVar28)));
        (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x38));
        (*(uint * PTR32 *)(gen_frame + 0xc8)) = ((uint *)GEN_TOP(0x0));
        (*(float *)(gen_frame + 0x80)) = (float)((float10)(float)fVar28 * (float10)(*(float *)(gen_frame + 0x3c)));
        do {
          pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x84));
          (*(bool *)(gen_frame + 0xc7)) = (*(uint * PTR32 *)(gen_frame + 0xc8)) == ((uint *)GEN_TOP(0x2));
          if ((*(uint * PTR32 *)(gen_frame + 0xc8)) == ((uint *)GEN_TOP(0x2))) {
            (*(int * PTR32 *)(gen_frame + 0xb4)) = *(int * PTR32 *)(this + 0x18);
          }
          else {
            (*(int * PTR32 *)(gen_frame + 0xb4)) = *((int * PTR32 *)GEN_TOP((this + ((uint)(*(uint * PTR32 *)(gen_frame + 0xc8)) & 1) * 4 + 0x50)));
          }
          F_004daa40((*(undefined * PTR32 *)(gen_frame + 0x84)) GEN_EDX_ARG,1,&(*(int * PTR32 *)(gen_frame + 0xb4)),0,0,0);
          if ((((byte)this[0x48] & 1) == 0) || ((*(uint * PTR32 *)(gen_frame + 0xa8)) != ((uint *)GEN_TOP(0x0)))) {
            if (((*(uint * PTR32 *)(gen_frame + 0xa8)) == ((uint *)GEN_TOP(0x0))) || ((*(bool *)(gen_frame + 0xc7)) == false)) goto LAB_0067c19f;
            uVar15 = (*(uint *)(gen_frame + 0x20)) & 0xff080111 | 0x7080111;
            (*(uint *)(gen_frame + 0x20)) = uVar15;
          }
          else {
            if (((*(bool *)(gen_frame + 0xc7)) != false) &&
               (puVar18 = ((undefined4 *)GEN_TOP(F_004d4760(pvVar10 GEN_EDX_ARG,0x28))), fVar1 = REFG(float, 0x1087f04),
               puVar18 != ((undefined4 *)GEN_TOP(0x0)))) {
              *puVar18 = 3;
              puVar18[1] = 1;
              puVar18[2] = 0;
              puVar18[3] = (undefined4)gen_fl2bits(fVar1);
              puVar18[4] = 0;
              puVar18[5] = 0;
              F_004d4810(pvVar10 GEN_EDX_ARG,puVar18);
            }
LAB_0067c19f: ;
            uVar15 = (*(uint *)(gen_frame + 0x2c)) & 0xff808010 | 0x7808010;
            (*(uint *)(gen_frame + 0x2c)) = uVar15;
          }
          *((uint *)GEN_TOP(((int)pvVar10 + 0x38))) = uVar15 & 0x7ffffff;
          fVar1 = *(float *)(this + 0x68);
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = (*(uint * PTR32 *)(gen_frame + 0xc8));
          fVar28 = (float10)(int)(*(uint * PTR32 *)(gen_frame + 0xc8));
          (*(uint *)(gen_frame + 0x74)) = 0;
          (*(float *)((char *)&(*(double *)(gen_frame + 0x88)) + 4)) = fVar1;
          (*(double *)(gen_frame + 0x88)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x88)) + 0))));
          if ((int)(*(uint * PTR32 *)(gen_frame + 0xc8)) < 0) {
            fVar28 = GEN_X87(fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110));
          }
          dVar4 = GEN_X87(((double)GEN_TOD(((fVar28 + (float10)REFG(double, 0x1088130)) * (float10)REFG(double, 0x1088108)))));
          (*(double *)(gen_frame + 0x48)) = dVar4;
          dVar5 = (double)*(*(int * PTR32 *)(gen_frame + 0x60));
          if (*(*(int * PTR32 *)(gen_frame + 0x60)) < 0) {
            dVar5 = GEN_X87(dVar5 + (double)*(float *)&REFG(undefined, 0x1088110));
          }
          dVar5 = GEN_X87(dVar5 * *(double *)&REFG(undefined, 0x1094818));
          pfVar19 = ((float *)(gen_frame + 0xcc)) + 2;
          (*(double *)(gen_frame + 0x58)) = dVar5;
          pfVar25 = (float *)(&REFG(undefined, 0x14881a8) + (int)((int)(*(uint * PTR32 *)(gen_frame + 0xc8)) * -0x80));
          do {
            fVar28 = (float10)(int)(*(uint *)(gen_frame + 0x74));
            if ((int)(*(uint *)(gen_frame + 0x74)) < 0) {
              fVar28 = GEN_X87(fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            puVar16 = ((uint *)(uintptr_t)gen_fl2bits((float)((float)fVar28)));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = puVar16;
            (*(float *)(gen_frame + 0xb0)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16))) * (float10)(*(float *)(gen_frame + 0x78)));
            fVar28 = ((float10)GEN_TOD(pow((float10)fVar1,
                                           (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16))) *
                                                           (float10)(*(float *)(gen_frame + 0x78))))));
            (*(float *)(gen_frame + 0xb0)) = (float)fVar28;
            fVar2 = (float)((float10)(float)fVar28 * (float10)dVar4);
            (*(float *)(gen_frame + 0xb0)) = fVar2;
            if ((*(bool *)(gen_frame + 0xc7)) != false) {
              (*(float *)(gen_frame + 0xb0)) = ((float)GEN_TOF(((float10)fVar2 * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0xa0)) + 4)))));
            }
            fVar28 = (float10)(*(float *)(gen_frame + 0xb0));
            pfVar19[-2] = (float)(fVar28 * (float10)pfVar25[-2]);
            pfVar19[-1] = (float)((float10)pfVar25[-1] * fVar28);
            *pfVar19 = (float)(fVar28 * (float10)*pfVar25);
            pfVar19[1] = (float)(fVar28 * (float10)pfVar25[1]);
            puVar23 = ((uint *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16))) * (float10)(*(float *)(gen_frame + 0x7c))))));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = puVar23;
            ((float *)(gen_frame + 0x14c))[(int)((*(uint *)(gen_frame + 0x74)) * 2)] = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar23)));
            puVar16 = ((uint *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x80)) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16)))))));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = puVar16;
            ((float *)(gen_frame + 0x14c))[(int)((*(uint *)(gen_frame + 0x74)) * 2 + 1)] = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16)));
            (*(uint * PTR32 *)(gen_frame + 0xc0)) = ((uint *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar23)))))))));
            dVar6 = (double)((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar23))))));
            if ((GEN_ISNAN(dVar6) || GEN_ISNAN(dVar5)) || dVar6 < dVar5) {
              iVar22 = (*(int * PTR32 *)(gen_frame + 0x60))[1];
              (*(uint * PTR32 *)(gen_frame + 0xc0)) = ((uint *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16)))))))));
              fVar28 = (float10)(*(int * PTR32 *)(gen_frame + 0x60))[1];
              if (iVar22 < 0) {
                fVar28 = GEN_X87(fVar28 + (float10)*(float *)&REFG(undefined, 0x1088110));
              }
              if (fVar28 * (float10)*(double *)&REFG(undefined, 0x1094818) <=
                  (float10)((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16))))))) goto LAB_0067c3b1;
            }
            else {
LAB_0067c3b1: ;
              fVar2 = pfVar19[-2];
              fVar28 = (float10)0;
              ((float *)(gen_frame + 0x14c))[(int)((*(uint *)(gen_frame + 0x74)) * 2)] = 0.0;
              ((float *)(gen_frame + 0x14c))[(int)((*(uint *)(gen_frame + 0x74)) * 2 + 1)] = 0.0;
              pfVar19[-2] = (float)((float10)fVar2 * fVar28);
              pfVar19[-1] = (float)((float10)pfVar19[-1] * fVar28);
              *pfVar19 = (float)((float10)*pfVar19 * fVar28);
              pfVar19[1] = (float)(fVar28 * (float10)pfVar19[1]);
            }
            uVar15 = (*(uint *)(gen_frame + 0x74)) + 1;
            pfVar25 = pfVar25 + 4;
            pfVar19 = pfVar19 + 4;
            (*(uint *)(gen_frame + 0x74)) = uVar15;
          } while (uVar15 < 8);
          pfVar19 = ((float *)(gen_frame + 0x10));
          if ((*(uint * PTR32 *)(gen_frame + 0xc8)) != ((uint *)GEN_TOP(0x0))) {
            pfVar19 = ((float *)(gen_frame + 0x0));
          }
          fVar1 = *pfVar19;
          fVar2 = pfVar19[1];
          (*(float *)((char *)&(*(double *)(gen_frame + 0x98)) + 4)) = fVar1;
          (*(double *)(gen_frame + 0x98)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 0))));
          (*(float *)((char *)&(*(double *)(gen_frame + 0x90)) + 4)) = fVar2;
          (*(double *)(gen_frame + 0x90)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x90)) + 0))));
          (*(float *)(gen_frame + 0x6c)) = fVar1;
          (*(float *)(gen_frame + 0x70)) = fVar2;
          (*(float *)(gen_frame + 0x64)) = (float)((float10)pfVar19[2] - (float10)fVar1);
          fVar3 = pfVar19[3];
          iVar22 = *(int *)(this + 8);
          *((float *)GEN_TOP((iVar22 + 0x10))) = (float)((float10)pfVar19[2] - (float10)fVar1);
          (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar3 - (float10)fVar2);
          *((float *)GEN_TOP((iVar22 + 0x14))) = (float)((float10)fVar3 - (float10)fVar2);
          *((float *)GEN_TOP((iVar22 + 0x18))) = fVar1;
          *((float *)GEN_TOP((iVar22 + 0x1c))) = fVar2;
          iVar22 = *(int *)(this + 8);
          puVar16 = ((uint *)GEN_TOP((*((int *)GEN_TOP((iVar22 + 0x24))) << 4)));
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = puVar16;
          ppuVar20 = &(*(uint * PTR32 *)(gen_frame + 0xac));
          if (puVar16 < ((uint *)GEN_TOP(0x41))) {
            ppuVar20 = &(*(uint * PTR32 *)(gen_frame + 0xc0));
          }
          F_00c46aa0(iVar22 + 0x28,((float *)(gen_frame + 0x14c)),*ppuVar20);
          iVar22 = *(int *)(this + 0x58);
          piVar27 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar22 * 8)));
          if (piVar27 == ((int *)GEN_TOP(0x0))) {
LAB_0067c4db: ;
            uVar15 = F_004dcd60(0x80,2,0xb);
            *((uint *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar22 * 8))) = uVar15;
          }
          else if ((uint)piVar27[3] < 0x80) {
            if (piVar27 != ((int *)GEN_TOP(0x0))) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar27 + 0xc))))(piVar27 GEN_EDX_ARG);
              *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar22 * 8))) = 0;
            }
            goto LAB_0067c4db;
          }
          uVar15 = F_004d9920(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar22 * 8))) GEN_EDX_ARG,0,0x80,2);
          if (uVar15 != 0) {
            F_00c46aa0(uVar15,((float *)(gen_frame + 0xcc)),0x80);
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar22 * 8))) + 0x24))) = 0;
          }
          piVar27 = (*(int * PTR32 *)(gen_frame + 0xb8));
          iVar22 = *(int *)(this + 0x5c);
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = ((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + iVar22 * 0xc)));
          if ((*(int * PTR32 *)(gen_frame + 0xb8)) != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xb8)) + 8))))((*(int * PTR32 *)(gen_frame + 0xb8)) GEN_EDX_ARG);
          }
          iVar22 = iVar22 * 0xc;
          if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar22))) != 0) {
            piVar11 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar22)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0xc))))(piVar11 GEN_EDX_ARG);
          }
          *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar22))) = piVar27;
          *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + iVar22))) = *(*(uint * PTR32 *)(gen_frame + 0xc0)) & 0xfffffff;
          uVar15 = 0;
          if (this[0x40] != (undefined1)0x0) {
            do {
              piVar27 = ((int *)GEN_TOP((*(int *)(this + 0xc) + uVar15 * 8)));
              iVar22 = piVar27[1];
              if (iVar22 != 0) {
                *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + *piVar27 * 4 + 0xa8))) = iVar22;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < (byte)this[0x40]);
          }
          iVar22 = 0;
          (*(uint * PTR32 *)(gen_frame + 0xc0)) = ((uint *)GEN_TOP(0x0));
          if (this[0x41] != (undefined1)0x0) {
            do {
              iVar26 = *((int *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar22)));
              piVar27 = ((int *)GEN_TOP((*(int *)(this + 0x10) + iVar22)));
              if (iVar26 != 0) {
                *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + *piVar27 * 8 + 0x2a8))) = iVar26;
                *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + *piVar27 * 8 + 0x2ac))) = piVar27[2] & 0xfffffff;
              }
              PVar8 = this[0x41];
              puVar16 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0xc0)) + 1)));
              iVar22 = iVar22 + 0xc;
              (*(uint * PTR32 *)(gen_frame + 0xc0)) = puVar16;
            } while (puVar16 < ((uint *)GEN_TOP((uint)(byte)PVar8)));
          }
          pvVar10 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0x1a8)));
          F_00678f50((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,this);
          iVar22 = REFG(int, 0x1370b90);
          uVar15 = *((int *)GEN_TOP(((int)pvVar10 + 0x18))) + 0x50;
          if (uVar15 < 0x8001) {
            puVar18 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar10 + 0xc))) + *((int *)GEN_TOP(((int)pvVar10 + 0x18))))));
            *((uint *)GEN_TOP(((int)pvVar10 + 0x18))) = uVar15;
LAB_0067c688: ;
            if (puVar18 != ((undefined4 *)GEN_TOP(0x0))) {
              *puVar18 = 4;
              puVar18[1] = 6;
              puVar18[2] = 0;
              puVar18[3] = 4;
              bVar14 = F_004dc830(pvVar10 GEN_EDX_ARG,puVar18 + 4);
              if (bVar14 != 0) {
                F_004d4810(pvVar10 GEN_EDX_ARG,puVar18);
              }
            }
          }
          else {
            piVar27 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xc0)));
            iVar26 = _InterlockedExchangeAdd((volatile long *)(piVar27), (long)(0x8000));
            if (*((uint *)GEN_TOP((iVar22 + 0xb8))) < (uint)(*((int *)GEN_TOP((iVar22 + 0xc4))) * 3 + *piVar27)) {
              _InterlockedExchangeAdd((volatile long *)(piVar27), (long)(-0x8000));
            }
            else {
              puVar18 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar22 + 0xbc))) + iVar26)));
              if (puVar18 != ((undefined4 *)GEN_TOP(0x0))) {
                *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar10 + 0xc))) = puVar18;
                *((undefined4 *)GEN_TOP(((int)pvVar10 + 0x18))) = 0x50;
                goto LAB_0067c688;
              }
            }
          }
          fVar28 = (float10)REFG(double, 0x10ac068);
          puVar16 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0xc8)) + 1)));
          (*(int * PTR32 *)(gen_frame + 0xb8)) = (*(int * PTR32 *)(gen_frame + 0xb4));
          (*(uint * PTR32 *)(gen_frame + 0xc8)) = puVar16;
          (*(float *)(gen_frame + 0x7c)) = (float)((float10)(*(float *)(gen_frame + 0x7c)) * fVar28);
          (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0x80)) * fVar28);
          (*(float *)(gen_frame + 0x78)) = (float)(fVar28 * (float10)(*(float *)(gen_frame + 0x78)));
        } while (puVar16 < ((uint *)GEN_TOP(0x3)));
        puVar23 = *(uint * PTR32 *)(this + 0x60);
        puVar24 = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0xa8)) + 1)));
        (*(uint * PTR32 *)(gen_frame + 0xa8)) = puVar24;
        puVar16 = puVar23;
      } while (puVar24 < puVar23);
    }
  }
  return (uint)puVar16;
}

/* ref: FUN_0067c740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067c740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67c740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  float fVar1;
  ushort uVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  ushort * puVar9;
  undefined * this_00;
  float10 fVar10;
  float10 fVar11;
  
  uVar6 = (*((int *)GEN_TOP(((int)this + 0x5c))) + 1U) % 3;
  *((uint *)GEN_TOP(((int)this + 0x5c))) = uVar6;
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + uVar6 * 4 + 0x50)));
  fVar8 = *((float *)GEN_TOP(((int)this_00 + 0x18)));
  fVar7 = gen_bits2f((int)gen_fl2bits(fVar8) - 1);
  (*(float *)(gen_frame + 0x10)) = fVar7;
  fVar10 = (float10)(int)gen_fl2bits(fVar7);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this_00;
  (*(float *)(gen_frame + 0x30)) = fVar8;
  if ((int)gen_fl2bits(fVar7) < 0) {
    fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x28)) = (float)fVar10;
  pfVar3 = ((float *)GEN_TOP(((int)this + 0x78)));
  fVar11 = (float10)1;
  (*(float *)(gen_frame + 0x24)) = (float)(fVar11 / (float10)(float)fVar10);
  if (!((float10)*((float *)GEN_TOP(((int)this + 0x78))) < (float10)*((float *)GEN_TOP(((int)this + 0x7c))))) {
    pfVar3 = ((float *)GEN_TOP(((int)this + 0x7c)));
  }
  fVar7 = *pfVar3;
  (*(float *)(gen_frame + 0x38)) = fVar7;
  (*(float *)(gen_frame + 0x3c)) = fVar7;
  fVar1 = *((float *)GEN_TOP(((int)this + 0x80)));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  if (REFG(float, 0x1094778) <= fVar1) {
    pfVar3 = &(*(float *)(gen_frame + 0x3c));
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x74))) / (float10)fVar1 +
                   (float10)*((float *)GEN_TOP(((int)this + 0x78))))));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    if (!((float10)fVar1 < (float10)fVar7)) {
      pfVar3 = &(*(float *)(gen_frame + 0x34));
    }
    (*(float *)(gen_frame + 0x3c)) = *pfVar3;
  }
  fVar1 = *((float *)GEN_TOP(((int)this + 0x84)));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  if (REFG(float, 0x1094778) <= fVar1) {
    pfVar3 = &(*(float *)(gen_frame + 0x3c));
    fVar1 = ((float)GEN_TOF((fVar11 / (float10)fVar1 + (float10)*((float *)GEN_TOP(((int)this + 0x7c))))));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    if (!((float10)fVar1 < (float10)(*(float *)(gen_frame + 0x3c)))) {
      pfVar3 = &(*(float *)(gen_frame + 0x34));
    }
    (*(float *)(gen_frame + 0x3c)) = *pfVar3;
  }
  pfVar3 = ((float *)GEN_TOP(((int)this + 0x90)));
  if ((float10)(*(float *)(gen_frame + 0x3c)) < (float10)*pfVar3) {
    pfVar3 = &(*(float *)(gen_frame + 0x3c));
  }
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
  pfVar3 = &(*(float *)(gen_frame + 0x2c));
  fVar7 = (float)((float10)fVar1 - (float10)fVar7);
  (*(float *)(gen_frame + 0x34)) = fVar7;
  if (!((float10)fVar7 < fVar11)) {
    pfVar3 = &(*(float *)(gen_frame + 0x34));
  }
  (*(float *)(gen_frame + 0x2c)) = *pfVar3;
  F_004d6dd0(this_00 GEN_EDX_FWD,0,((byte *)(gen_frame + 0x0)),2);
  uVar6 = 0;
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) != 0) {
    fVar7 = 0.0;
    if (fVar8 != 0.0) {
      fVar10 = (float10)(*(float *)(gen_frame + 0x24));
      (*(float *)(gen_frame + 0x20)) = 0.0;
      (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x18)) = 0.0;
      puVar9 = ((ushort *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))));
      do {
        (*(float *)(gen_frame + 0x24)) = fVar7;
        fVar11 = (float10)(int)gen_fl2bits(fVar7);
        if ((int)gen_fl2bits(fVar7) < 0) {
          fVar11 = GEN_X87(fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        pfVar3 = &(*(float *)(gen_frame + 0x34));
        fVar1 = ((float)GEN_TOF(((fVar11 * fVar10) * (float10)(*(float *)(gen_frame + 0x2c)) + (float10)(*(float *)(gen_frame + 0x38)))));
        (*(float *)(gen_frame + 0x24)) = fVar1;
        fVar11 = (float10)fVar1;
        fVar1 = ((float)GEN_TOF((fVar11 - (float10)*((float *)GEN_TOP(((int)this + 0x7c))))));
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        fVar5 = ((float)GEN_TOF((fVar11 - (float10)*((float *)GEN_TOP(((int)this + 0x78))))));
        (*(float *)(gen_frame + 0x24)) = fVar5;
        fVar5 = ((float)GEN_TOF(((float10)fVar5 * (float10)*((float *)GEN_TOP(((int)this + 0x80))))));
        (*(float *)(gen_frame + 0x34)) = fVar5;
        if (!((float10)fVar5 < (float10)*((float *)GEN_TOP(((int)this + 0x74))))) {
          pfVar3 = ((float *)GEN_TOP(((int)this + 0x74)));
        }
        if (!(0.0 < *pfVar3)) {
          pfVar3 = &(*(float *)(gen_frame + 0x20));
        }
        fVar5 = *pfVar3;
        pfVar3 = &(*(float *)(gen_frame + 0x34));
        fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x84))) * (float10)fVar1)));
        (*(float *)(gen_frame + 0x34)) = fVar1;
        if (!((float10)fVar1 < (float10)1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x1c));
        }
        if (!(0.0 < *pfVar3)) {
          pfVar3 = &(*(float *)(gen_frame + 0x18));
        }
        fVar1 = *pfVar3;
        (*(float *)(gen_frame + 0x14)) = fVar5;
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        fVar11 = (float10)fVar1;
        fVar1 = (float)(fVar11 * fVar11);
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        uVar2 = 0;
        if (fVar5 != 0.0) {
          fVar4 = gen_bits2f(((uint)gen_fl2bits(fVar5) >> 0x17 & 0xff) - 0x70);
          (*(float *)(gen_frame + 0x24)) = fVar4;
          if ((int)gen_fl2bits(fVar4) < 0) {
            uVar2 = 0;
          }
          else {
            (*(float *)(gen_frame + 0x34)) = 4.34403e-44;
            pfVar3 = &(*(float *)(gen_frame + 0x24));
            if (0x1e < (int)gen_fl2bits(fVar4)) {
              pfVar3 = &(*(float *)(gen_frame + 0x34));
            }
            uVar2 = (ushort)((uint)gen_fl2bits(fVar5) >> 0x10) & 0x8000 |
                    (ushort)((uint)gen_fl2bits(fVar5) >> 0xd) & 0x3ff |
                    (ushort)((int)gen_fl2bits(*pfVar3) << 10);
            fVar8 = (*(float *)(gen_frame + 0x30));
          }
        }
        (*(float *)(gen_frame + 0x10)) = fVar1;
        *puVar9 = uVar2;
        uVar2 = 0;
        if (fVar1 != 0.0) {
          fVar5 = gen_bits2f(((uint)gen_fl2bits(fVar1) >> 0x17 & 0xff) - 0x70);
          (*(float *)(gen_frame + 0x24)) = fVar5;
          if ((int)gen_fl2bits(fVar5) < 0) {
            uVar2 = 0;
          }
          else {
            (*(float *)(gen_frame + 0x34)) = 4.34403e-44;
            pfVar3 = &(*(float *)(gen_frame + 0x24));
            if (0x1e < (int)gen_fl2bits(fVar5)) {
              pfVar3 = &(*(float *)(gen_frame + 0x34));
            }
            uVar2 = (ushort)((uint)gen_fl2bits(fVar1) >> 0x10) & 0x8000 |
                    (ushort)((uint)gen_fl2bits(fVar1) >> 0xd) & 0x3ff |
                    (ushort)((int)gen_fl2bits(*pfVar3) << 10);
            fVar8 = (*(float *)(gen_frame + 0x30));
          }
        }
        puVar9[1] = uVar2;
        fVar7 = gen_bits2f((int)gen_fl2bits(fVar7) + 1);
        puVar9 = puVar9 + 2;
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc));
      } while ((uint)gen_fl2bits(fVar7) < (uint)gen_fl2bits(fVar8));
    }
    uVar6 = F_004d6e60(this_00 GEN_EDX_ARG,0);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar8)));
    fVar10 = (float10)(int)gen_fl2bits(fVar8);
    if ((int)gen_fl2bits(fVar8) < 0) {
      fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
    fVar10 = (float10)(float)fVar10;
    fVar11 = GEN_X87(fVar10 * (float10)(*(float *)(gen_frame + 0x2c)));
    *((float *)GEN_TOP(((int)this + 0x94))) =
         ((float)GEN_TOF(((float10)REFG(double, 0x1088108) / fVar10 - ((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x38))) / fVar11)));
    *((float *)GEN_TOP(((int)this + 0x98))) = (float)((float10)(*(float *)(gen_frame + 0x28)) / fVar11);
  }
  return uVar6;
}

/* ref: FUN_0067ca70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067ca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67ca70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  uint * puVar6;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP(((int)this + 0x74)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
  (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)this + 0x94)));
  (*(undefined4 *)(gen_frame + 0x2c)) = *((undefined4 *)GEN_TOP(((int)this + 0x98)));
  F_006793b0(this GEN_EDX_FWD,uVar1,&(*(undefined4 *)(gen_frame + 0x0)),0x30);
  (*(uint *)(gen_frame + 0x34)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x30)) = 0x1ff;
  puVar6 = &(*(uint *)(gen_frame + 0x34));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar6 = &(*(uint *)(gen_frame + 0x30));
  }
  uVar2 = *puVar6;
  (*(uint *)(gen_frame + 0x34)) = uVar2;
  (*(uint *)(gen_frame + 0x30)) = 0xfffffe00;
  puVar6 = &(*(uint *)(gen_frame + 0x30));
  if (-0x201 < (int)uVar2) {
    puVar6 = &(*(uint *)(gen_frame + 0x34));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x5c))) * 4 + 0x50)));
  iVar4 = *((int *)GEN_TOP(((int)this + 100)));
  (*(uint *)(gen_frame + 0x30)) = (*puVar6 & 0x3ff) << 10 | 0x26a;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
  }
  iVar4 = iVar4 * 0xc;
  if (*((int *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP(((int)this + 0x10)))))) != 0) {
    piVar5 = *((int * PTR32 *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP(((int)this + 0x10))))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP(((int)this + 0x10)))))) = piVar3;
  *((uint *)GEN_TOP((iVar4 + 8 + *((int *)GEN_TOP(((int)this + 0x10)))))) = (*(uint *)(gen_frame + 0x30)) & 0xfffffff;
  return (*(uint *)(gen_frame + 0x30)) & 0xfffffff;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0067cba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67cba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0067ca70(this GEN_EDX_FWD);
  uVar1 = F_0067acb0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0067cbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067cbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67cbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  float fVar1;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  float fVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 0x6c)));
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x5c))) * 4 + 0x50)));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar8 = gen_bits2f(piVar2[6]);
  (*(float *)(gen_frame + 0xc)) = fVar8;
  fVar10 = (float10)(int)gen_fl2bits(fVar8);
  if ((int)gen_fl2bits(fVar8) < 0) {
    fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar8 = gen_bits2f((int)gen_fl2bits(fVar8) - 1);
  (*(float *)(gen_frame + 0x10)) = (float)fVar10;
  (*(float *)(gen_frame + 0xc)) = fVar8;
  fVar11 = (float10)(int)gen_fl2bits(fVar8);
  if ((int)gen_fl2bits(fVar8) < 0) {
    fVar11 = GEN_X87(fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0xc)) = (float)fVar11;
  fVar8 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x78))) / (float10)fVar1)));
  (*(float *)(gen_frame + 0x14)) = fVar8;
  fVar12 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar8,2)));
  (*(float *)(gen_frame + 0x14)) = (float)fVar12;
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
  fVar10 = (float10)(float)fVar10;
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)(float)fVar11 / (fVar10 * (float10)(float)fVar12))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(double, 0x1088108) / fVar10);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)1 / (float10)fVar1);
  F_006793b0(this GEN_EDX_FWD,uVar3,&(*(float *)(gen_frame + 0x0)),0xc);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
  (*(float *)(gen_frame + 0xc)) = 7.16064e-43;
  pfVar9 = &(*(float *)(gen_frame + 0x18));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    pfVar9 = &(*(float *)(gen_frame + 0xc));
  }
  fVar1 = *pfVar9;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = -NAN;
  pfVar9 = &(*(float *)(gen_frame + 0xc));
  if (-0x201 < (int)gen_fl2bits(fVar1)) {
    pfVar9 = &(*(float *)(gen_frame + 0x18));
  }
  iVar4 = *piVar2;
  iVar5 = *((int *)GEN_TOP(((int)this + 100)));
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(((uint)gen_fl2bits(*pfVar9) & 0x3ff) << 10 | 0x26a);
  ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 8))))(piVar2);
  iVar5 = iVar5 * 0xc;
  if (*((int *)GEN_TOP((iVar5 + 4 + *((int *)GEN_TOP(((int)this + 0x10)))))) != 0) {
    piVar6 = *((int * PTR32 *)GEN_TOP((iVar5 + 4 + *((int *)GEN_TOP(((int)this + 0x10))))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP((iVar5 + 4 + *((int *)GEN_TOP(((int)this + 0x10)))))) = piVar2;
  *((uint *)GEN_TOP((iVar5 + 8 + *((int *)GEN_TOP(((int)this + 0x10)))))) = (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))) & 0xfffffff;
  return (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))) & 0xfffffff;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0067cce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67cce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0067cbb0(this GEN_EDX_FWD);
  uVar1 = F_0067acb0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0067ccf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67ccf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_0067aa50((undefined *)this GEN_EDX_FWD);
  if (bVar1 != 0) {
    this[0x90] = (undefined1)0x0;
  }
  return bVar1;
}

/* ref: FUN_0067cd10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067cd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67cd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined2 * puVar4;
  uint uVar5;
  float10 fVar6;
  double dVar7;
  
  bVar2 = F_00678040(this GEN_EDX_FWD);
  if (bVar2 != 0) {
    F_004d58e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,0,0x32,0);
    uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),1);
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
    if (uVar3 != 0) {
      this_00 = ((undefined *)GEN_TOP(F_004dcc90(800,4,0xb)));
      *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = this_00;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_004d68c0(this_00 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this_00 + 0x18))),2);
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            dVar7 = F_004a4fe0();
            fVar1 = (float)((float10)dVar7 * (float10)*(double *)&REFG(undefined, 0x10944e0) -
                           (float10)REFG(double, 0x1088130));
            (*(float *)(gen_frame + 0x8)) = fVar1;
            fVar6 = (float10)fVar1;
            if ((float10)1 < fVar6) {
              (*(float *)(gen_frame + 0x8)) = (float)(fVar6 * fVar6);
            }
            dVar7 = F_004a4fe0();
            puVar4 = ((undefined2 *)GEN_TOP(F_004d4590(((undefined1 *)(gen_frame + 0xe)),GEN_ARGF(gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))) ^ REFG(uint, 0x10920d0))))));
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = *puVar4;
            (*(undefined4 *)(gen_frame + 0x4)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)),*puVar4);
            puVar4 = ((undefined2 *)GEN_TOP(F_004d4590(((undefined1 *)(gen_frame + 0xc)),(float)dVar7)));
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = *puVar4;
            (*(undefined4 *)(gen_frame + 0x4)) = CONCAT22(*puVar4,(undefined2)(*(undefined4 *)(gen_frame + 0x4)));
            *((undefined4 *)GEN_TOP((uVar3 + uVar5 * 4))) = (*(undefined4 *)(gen_frame + 0x4));
            uVar5 = uVar5 + 1;
          } while (uVar5 < 200);
          F_004d6970(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
          uVar3 = F_004dcd60(0x30,2,0xb);
          *((uint *)GEN_TOP(((int)this + 0x14))) = uVar3;
          uVar3 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))) GEN_EDX_ARG,((char *)REFP(0x10ac838)));
          *((uint *)GEN_TOP(((int)this + 0x20))) = uVar3;
          uVar3 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))) GEN_EDX_ARG,((char *)REFP(0x10ac848)));
          *((uint *)GEN_TOP(((int)this + 0x24))) = uVar3;
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_0067ce60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067ce60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67ce60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined * this_00;
  int iVar8;
  undefined4 * puVar9;
  float * pfVar10;
  uint uVar11;
  float10 fVar12;
  
  iVar7 = *((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar7 + 0x1a8)));
  uVar11 = (int)this + 0x1c;
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    F_004daa40(this_00 GEN_EDX_FWD,1,uVar11,0,0,0);
    uVar11 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x98)));
    if ((uVar11 != 0) && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x9c))) != 0)) {
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = 0;
      *((uint *)GEN_TOP(((int)this_00 + 0x40))) = uVar11;
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x44))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x9c)));
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x60))) = 0;
      puVar9 = ((undefined4 *)GEN_TOP(F_004d9920(*((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,0,2)));
      uVar11 = 0;
      if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
        uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
        uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
        *puVar9 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        fVar4 = *((float *)GEN_TOP(((int)this + 0x30)));
        uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
        (*(float *)(gen_frame + 0x4)) = fVar4;
        fVar12 = (float10)fVar4;
        fVar4 = ((float)GEN_TOF((fVar12 * (float10)*((float *)GEN_TOP(((int)this + 0x3c))))));
        (*(float *)(gen_frame + 0x4)) = fVar4;
        fVar5 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x40))) * fVar12)));
        (*(float *)(gen_frame + 0x0)) = fVar5;
        fVar6 = *((float *)GEN_TOP(((int)this + 0x38)));
        puVar9[7] = uVar1;
        puVar9[4] = (undefined4)gen_fl2bits((float)(fVar12 * (float10)fVar6));
        puVar9[5] = (undefined4)gen_fl2bits(fVar4);
        puVar9[6] = (undefined4)gen_fl2bits(fVar5);
        uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
        uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
        uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
        puVar9[8] = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
        puVar9[9] = uVar1;
        puVar9[10] = uVar2;
        puVar9[0xb] = uVar3;
        uVar11 = *((uint *)GEN_TOP(((int)this + 0x14)));
        *((undefined4 *)GEN_TOP((uVar11 + 0x24))) = 0;
        *((undefined4 *)GEN_TOP(((int)this_00 + *((int *)GEN_TOP(((int)this + 0x20))) * 4 + 0xa8))) =
             *((undefined4 *)GEN_TOP(((int)this + 0x14)));
        if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
          (*(float *)(gen_frame + 0x4)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
          (*(float *)(gen_frame + 0x0)) = 7.16064e-43;
          pfVar10 = &(*(float *)(gen_frame + 0x4));
          if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
            pfVar10 = &(*(float *)(gen_frame + 0x0));
          }
          fVar4 = *pfVar10;
          (*(float *)(gen_frame + 0x4)) = fVar4;
          (*(float *)(gen_frame + 0x0)) = -NAN;
          pfVar10 = &(*(float *)(gen_frame + 0x0));
          if (-0x201 < (int)gen_fl2bits(fVar4)) {
            pfVar10 = &(*(float *)(gen_frame + 0x4));
          }
          *((uint *)GEN_TOP(((int)this_00 + *((int *)GEN_TOP(((int)this + 0x24))) * 8 + 0x2ac))) =
               ((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25;
          *((undefined4 *)GEN_TOP(((int)this_00 + *((int *)GEN_TOP(((int)this + 0x24))) * 8 + 0x2a8))) =
               *((undefined4 *)GEN_TOP(((int)this + 0x18)));
          *((undefined4 *)GEN_TOP(((int)this_00 + 0x4c))) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
          uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
          *((uint *)GEN_TOP(((int)this_00 + 0x6c))) = *((uint *)GEN_TOP(((int)this_00 + 0x6c))) & 0x800000ff;
          *((undefined4 *)GEN_TOP(((int)this_00 + 0x68))) = uVar1;
          *((undefined1 *)GEN_TOP(((int)this_00 + 0x6c))) = 4;
          *((uint *)GEN_TOP(((int)this_00 + 0x6c))) = *((uint *)GEN_TOP(((int)this_00 + 0x6c))) & 0x7fffffff;
          *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 0x1a8))) + 0x3c))) = REFG(undefined4, 0x1302370) & 0x7fffffff;
          uVar11 = REFG(undefined4, 0x130236c);
          iVar8 = *((int *)GEN_TOP((iVar7 + 0x1a8)));
          *((uint *)GEN_TOP((iVar8 + 0x58))) = REFG(undefined4, 0x1302368) & 0xfe000000;
          *((uint *)GEN_TOP((iVar8 + 0x5c))) = uVar11 & 0xfffffffc;
          *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 0x1a8))) + 0x50))) = REFG(undefined4, 0x130235c) & 0x1f;
          *((undefined4 *)GEN_TOP(((int)this_00 + 0x38))) = 0x7080111;
          uVar11 = F_0066c5a0(this_00 GEN_EDX_ARG,1,0,200);
        }
      }
    }
  }
  return uVar11;
}

/* ref: FUN_0067d0a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067d0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67d0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    return 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  bVar1 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,1);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10ac8a0));
    uVar2 = F_00688330(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x0)),1);
    if (uVar2 != 0) {
      bVar1 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      if (bVar1 != 0) {
        this_00 = ((undefined *)GEN_TOP(((int)this + 0x30)));
        bVar1 = F_0067a050(this_00 GEN_EDX_ARG,1);
        if (bVar1 != 0) {
          (*(undefined4 *)(gen_frame + 0x0)) = 0;
          (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10ac8c4));
          uVar2 = F_00688330(this_00 GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x0)),1);
          if (uVar2 != 0) {
            bVar1 = F_00677f90(this_00 GEN_EDX_ARG);
            return bVar1 != 0;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0067d150 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_0067d150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67d150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10ad430));
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x10ad450));
  uVar1 = F_0067a7a0((int)this + 0x1508);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  do {
    uVar1 = F_00688330(((undefined *)GEN_TOP(((int)this + 0x2f4))) GEN_EDX_ARG,uVar3,puVar2,0);
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (uVar3 < 3);
  *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) & 0xff7dffff;
  *((uint *)GEN_TOP((REFG(int, 0x137127c) + 0x11e44))) = *((uint *)GEN_TOP((REFG(int, 0x137127c) + 0x11e44))) & 0xfffffff7;
  return 1;
}

/* ref: FUN_0067d1f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0067d1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67d1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = 1;
  do {
    if ((uVar3 != 8) && (uVar3 == 0xd)) {
      *((undefined1 *)GEN_TOP((REFG(int, 0x13759f8) + 0x288))) = 0;
    }
    iVar1 = uVar3 + 1;
    uVar4 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    *((uint *)GEN_TOP(((int)this + 0x1514))) =
         ~uVar6 & *((uint *)GEN_TOP(((int)this + 0x1514))) | 0 << GEN_SHC((byte)uVar3, (unsigned int)(uintptr_t)uVar3);
    if ((iVar1 != 8) && (iVar1 == 0xd)) {
      *((undefined1 *)GEN_TOP((REFG(int, 0x13759f8) + 0x288))) = 0;
    }
    iVar2 = uVar3 + 2;
    uVar5 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    *((uint *)GEN_TOP(((int)this + 0x1514))) =
         ~uVar4 & *((uint *)GEN_TOP(((int)this + 0x1514))) | 0 << GEN_SHC((byte)iVar1, (unsigned int)(uintptr_t)iVar1);
    if ((iVar2 != 8) && (iVar2 == 0xd)) {
      *((undefined1 *)GEN_TOP((REFG(int, 0x13759f8) + 0x288))) = 0;
    }
    uVar3 = uVar3 + 3;
    uVar6 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    *((uint *)GEN_TOP(((int)this + 0x1514))) =
         ~uVar5 & *((uint *)GEN_TOP(((int)this + 0x1514))) | 0 << GEN_SHC((byte)iVar2, (unsigned int)(uintptr_t)iVar2);
  } while (uVar3 < 0x12);
  return (uint)this;
}

/* ref: FUN_0067d2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067d2b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x67d2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  int * piVar7;
  bool bVar8;
  
  uVar3 = 0;
  if (*((byte *)GEN_TOP((in_ecx + 0x40))) != 0) {
    piVar7 = *((int * PTR32 *)GEN_TOP((in_ecx + 0xc)));
    do {
      iVar5 = *piVar7;
      if (iVar5 != -1) {
        iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x1c))) + 0x2c)));
        pbVar6 = ((byte *)GEN_TOP((iVar2 + iVar5 * 0x1c)));
        pbVar4 = param_2;
        if (0xf < *((uint *)GEN_TOP((iVar2 + 0x14 + iVar5 * 0x1c)))) {
          pbVar6 = *(byte * PTR32 *)pbVar6;
        }
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0067d310: ;
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0067d315;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0067d310;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0067d315: ;
        if (iVar5 == 0) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      piVar7 = piVar7 + 2;
    } while (uVar3 < *((byte *)GEN_TOP((in_ecx + 0x40))));
  }
  return 0xffffffff;
}

/* ref: FUN_0067d330 */
GEN_OWN GEN_FRAME ulonglong GEN_THISCALL F_0067d330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x67d330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * in_EDX = 0;
  int * piVar6;
  bool bVar7;
  
  uVar3 = 0;
  if (*((byte *)GEN_TOP(((int)this + 0x41))) != 0) {
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    do {
      iVar5 = *piVar6;
      if (iVar5 != -1) {
        iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x20))) + 0x2c)));
        in_EDX = ((byte *)GEN_TOP((iVar2 + iVar5 * 0x1c)));
        pbVar4 = param_1;
        if (0xf < *((uint *)GEN_TOP((iVar2 + 0x14 + iVar5 * 0x1c)))) {
          in_EDX = *(byte * PTR32 *)in_EDX;
        }
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *in_EDX;
          if (bVar1 != *in_EDX) {
LAB_0067d390: ;
            iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0067d395;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < in_EDX[1];
          if (bVar1 != in_EDX[1]) goto LAB_0067d390;
          pbVar4 = pbVar4 + 2;
          in_EDX = in_EDX + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_0067d395: ;
        if (iVar5 == 0) goto LAB_0067d3a4;
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 3;
    } while (uVar3 < *((byte *)GEN_TOP(((int)this + 0x41))));
  }
  uVar3 = 0xffffffff;
LAB_0067d3a4: ;
  return CONCAT44(in_EDX,uVar3);
}

/* ref: FUN_0067d3b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067d3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x67d3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_0067d2b0(this GEN_EDX_FWD,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = F_006793b0(this GEN_EDX_ARG,uVar1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_0067d3e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067d3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x67d3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = F_0067d330(this GEN_EDX_FWD,param_1);
  uVar3 = (uint)uVar4;
  if (-1 < (int)uVar3) {
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_ARG);
    }
    iVar2 = uVar3 * 0xc;
    if (*((int *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x10)))))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x10))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    }
    *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x10)))))) = param_2;
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x10)));
    *((uint *)GEN_TOP((iVar2 + 8 + uVar3))) = *param_3 & 0xfffffff;
  }
  return uVar3;
}

/* ref: FUN_0067d450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067d450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x67d450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = F_0067d330(this GEN_EDX_FWD,param_1);
  uVar3 = (uint)uVar4;
  if (-1 < (int)uVar3) {
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 8))))(param_2 GEN_EDX_ARG);
    }
    iVar2 = uVar3 * 0xc;
    if (*((int *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x10)))))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x10))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    }
    *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x10)))))) = param_2;
    uVar3 = *param_3;
    *((uint *)GEN_TOP((iVar2 + 8 + *((int *)GEN_TOP(((int)this + 0x10)))))) = uVar3 & 0xfffffff;
    *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_2;
    return uVar3 & 0xfffffff;
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return uVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0067d4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67d4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = F_0067aa50((undefined *)this GEN_EDX_FWD);
  if (bVar1 != 0) {
    *(undefined4 *)(this + 0x58) = 1;
    uVar2 = F_0067d330(this GEN_EDX_ARG,((char *)REFP(0x10ac5d0)));
    *(int *)(this + 0x5c) = (int)uVar2;
  }
  return bVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf3 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_0067d500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67d500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  undefined1 PVar1;
  int * piVar2;
  char cVar3;
  double dVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  int * PTR32 * ppiVar9;
  undefined * pPVar10;
  undefined * pPVar11;
  undefined4 * puVar12;
  int iVar13;
  undefined4 * puVar14;
  ulonglong uVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  bVar5 = true;
  pPVar11 = this + 0x60;
  iVar13 = 3;
  do {
    if ((bVar5) && (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pPVar11 + 0xc))))(pPVar11 GEN_EDX_FWD), (char)uVar7 != '\0')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    pPVar11 = pPVar11 + 0x50;
    iVar13 = iVar13 - 1;
  } while (iVar13 != 0);
  bVar6 = 0;
  if (bVar5) {
    bVar6 = F_0067aa50((undefined *)this GEN_EDX_ARG);
    (*(byte *)(gen_frame + 0x3b)) = bVar6;
    if (bVar6 != 0) {
      piVar8 = *(int * PTR32 *)(this + 0x5c);
      (*(bool *)(gen_frame + 0x43)) = (*((byte *)GEN_TOP((REFG(int, 0x137128c) + 0x1508))) & 0x18) != 0;
      if (piVar8 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG);
      }
      piVar2 = *(int * PTR32 *)(this + 0x18);
      pPVar11 = this + 0x18;
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      }
      *(int * PTR32 *)pPVar11 = piVar8;
      this[0x42] = (undefined1)0x0;
      uVar7 = 0;
      do {
        if (*(int *)pPVar11 == 0) break;
        cVar3 = (char)uVar7;
        uVar7 = uVar7 + 1;
        pPVar11 = pPVar11 + 4;
        this[0x42] = (undefined1)(cVar3 + '\x01');
      } while (uVar7 < 4);
      PVar1 = this[0x48];
      dVar4 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      bVar6 = (*(bool *)(gen_frame + 0x43)) & 1;
      ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x1099848));
      ((undefined4 *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[1], REFG(float, 0x1099848));
      ((undefined4 *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[2], REFG(float, 0x1094808));
      ((undefined4 *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[3], REFG(float, 0x1099848));
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
      (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
      (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
      (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
      (*(bool *)(gen_frame + 0x43)) = (bool)bVar6;
      this[0x48] = (undefined1)((byte)PVar1 & 0xfe | bVar6);
      *(undefined4 *)(this + 0x34) = 0;
      puVar12 = ((undefined4 *)(gen_frame + 0x0));
      puVar14 = ((undefined4 *)(gen_frame + 0x44));
      for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 - 1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP((int)dVar4));
      (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(0x1ff));
      (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0xfffffe00));
      (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP(0x20));
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = this + 0x58;
      pPVar11 = this + 0x70;
      (*(int *)(gen_frame + 0x30)) = 3;
      do {
        (*(int * PTR32 *)(gen_frame + 0x3c)) = (*(int * PTR32 *)(gen_frame + 0x2c));
        ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x3c));
        if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x2c))) {
          ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x24));
        }
        piVar8 = *ppiVar9;
        (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar8;
        ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x20));
        if (-0x201 < (int)piVar8) {
          ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x3c));
        }
        piVar8 = *ppiVar9;
        (*(int * PTR32 *)(gen_frame + 0x3c)) = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x34)) + 4);
        uVar15 = F_0067d330(pPVar11 - 0x10 GEN_EDX_ARG,((char *)REFP(0x10ac684)));
        if (-1 < (int)uVar15) {
          if ((*(int * PTR32 *)(gen_frame + 0x3c)) != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 8))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
          }
          iVar13 = (int)uVar15 * 0xc;
          if (*((int *)GEN_TOP((*(int *)pPVar11 + 4 + iVar13))) != 0) {
            piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)pPVar11 + 4 + iVar13)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
          }
          *((int * PTR32 *)GEN_TOP((*(int *)pPVar11 + 4 + iVar13))) = (*(int * PTR32 *)(gen_frame + 0x3c));
          *((uint *)GEN_TOP((*(int *)pPVar11 + 8 + iVar13))) = ((uint)piVar8 & 0x3ff) << 10 | 0x265;
        }
        piVar8 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x34));
        if (piVar8 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG);
        }
        piVar2 = *(int * PTR32 *)(pPVar11 + 8);
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
        }
        *(int * PTR32 *)(pPVar11 + 8) = piVar8;
        pPVar11[0x32] = (undefined1)0x0;
        uVar7 = 0;
        pPVar10 = pPVar11 + 8;
        do {
          if (*(int *)pPVar10 == 0) break;
          cVar3 = (char)uVar7;
          uVar7 = uVar7 + 1;
          pPVar10 = pPVar10 + 4;
          pPVar11[0x32] = (undefined1)(cVar3 + '\x01');
        } while (uVar7 < 4);
        *(int *)(pPVar11 + 0x24) = 0;
        pPVar11[0x38] = (undefined1)((byte)pPVar11[0x38] & 0xfe | (*(bool *)(gen_frame + 0x43)));
        iVar13 = *(int *)(pPVar11 - 8);
        piVar8 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar13 + 0x24))) << 4)));
        (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar8;
        ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x28));
        if (piVar8 < ((int *)GEN_TOP(0x21))) {
          ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x3c));
        }
        F_00c46aa0(iVar13 + 0x28,((undefined4 *)(gen_frame + 0x44)),*ppiVar9);
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) - 4;
        pPVar11 = pPVar11 + 0x50;
        iVar13 = (*(int *)(gen_frame + 0x30)) - 1;
        (*(int *)(gen_frame + 0x30)) = iVar13;
        bVar6 = (*(byte *)(gen_frame + 0x3b));
      } while (iVar13 != 0);
    }
  }
  return bVar6;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0067d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67d780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 0xc))))(this + 0x80 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    F_0067aa50((undefined *)this GEN_EDX_ARG);
    uVar2 = F_0067d330(this GEN_EDX_ARG,((char *)REFP(0x10ac6b4)));
    this[0xd0] = SUB81(uVar2,0);
    this[0xd1] = (undefined1)0x1;
    if ((*((byte *)GEN_TOP((REFG(int, 0x137128c) + 0x1508))) & 0x18) != 0) {
      this[200] = (undefined1)((byte)this[200] | 1);
      *(undefined4 *)(this + 0xb4) = 0;
    }
  }
  return (byte)this[0x48] >> 3 & 1;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067d7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67d7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  float * pfVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  undefined4 uVar5;
  char cVar7;
  float fVar8;
  undefined1 PVar9;
  uint uVar10;
  int iVar11;
  int * PTR32 * ppiVar12;
  undefined * pPVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  ulonglong uVar17;
  
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(int, 0x137128c) + 0x1518);
  if (this[0xd1] == (undefined1)0x0) {
    piVar3 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) *
                           (float10)*((float *)GEN_TOP((REFG(int, 0x137128c) + 0x1644)))))))));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
    piVar3 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar3))) * (float10)*(double *)&REFG(undefined, 0x1088070)))));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
    fVar14 = ((float10)GEN_TOD(pow((float10)*(double *)&REFG(undefined, 0x10ab998),(float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar3))))));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
    fVar14 = GEN_X87((float10)1 - (float10)(float)fVar14);
  }
  else {
    fVar14 = (float10)1;
  }
  (*(float *)(gen_frame + 0x18)) = (float)fVar14;
  (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((REFG(int, 0x137128c) + 0x164c)));
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(*((undefined4 *)GEN_TOP((REFG(int, 0x137128c) + 0x1650))));
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f(*((undefined4 *)GEN_TOP((REFG(int, 0x137128c) + 0x1648))));
  uVar10 = F_0067d2b0(this GEN_EDX_FWD,((char *)REFP(0x10ac6c0)));
  if (-1 < (int)uVar10) {
    F_006793b0(this GEN_EDX_ARG,uVar10,&(*(float *)(gen_frame + 0x10)),0x10);
  }
  piVar3 = ((int *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)));
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP(0x1ff));
  ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x2c));
  if (0x1fe < (int)piVar3) {
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x28));
  }
  piVar3 = *ppiVar12;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP(0xfffffe00));
  ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x28));
  if (-0x201 < (int)piVar3) {
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x2c));
  }
  piVar3 = *(int * PTR32 *)(this + 0x60);
  PVar9 = this[0xd0];
  piVar4 = *ppiVar12;
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar3;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
  }
  iVar11 = (uint)(byte)PVar9 * 0xc;
  if (*((int *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x10)))) != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x10))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x10)))) = (*(int * PTR32 *)(gen_frame + 0x28));
  *((uint *)GEN_TOP((iVar11 + 8 + *(int *)(this + 0x10)))) = ((uint)piVar4 & 0x3ff) << 10 | 0x25;
  piVar3 = *(int * PTR32 *)(this + 0x5c);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
  }
  piVar4 = *(int * PTR32 *)(this + 0x18);
  pPVar13 = this + 0x18;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
  }
  *(int * PTR32 *)pPVar13 = piVar3;
  this[0x42] = (undefined1)0x0;
  uVar10 = 0;
  do {
    if (*(int *)pPVar13 == 0) break;
    cVar7 = (char)uVar10;
    uVar10 = uVar10 + 1;
    pPVar13 = pPVar13 + 4;
    this[0x42] = (undefined1)(cVar7 + '\x01');
  } while (uVar10 < 4);
  F_0067acb0((undefined *)this GEN_EDX_ARG);
  fVar8 = (*(float *)(gen_frame + 0x24));
  pfVar1 = ((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x24))) + 0x13c)));
  puVar2 = ((undefined4 *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x24))) + 0x144)));
  (*(float *)(gen_frame + 0x24)) = *pfVar1;
  fVar14 = (float10)*pfVar1;
  iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + 0x18)));
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)gen_fl2bits(fVar8) + 0x140)));
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(iVar11);
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)1 / fVar14);
  fVar15 = (float10)iVar11;
  if (iVar11 < 0) {
    fVar15 = GEN_X87(fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x24)) = (float)fVar15;
  iVar11 = iVar11 - 1;
  fVar15 = (float10)(float)fVar15;
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(iVar11);
  fVar16 = GEN_X87((float10)REFG(double, 0x1088108) / fVar15);
  (*(float *)(gen_frame + 0x10)) = (float)fVar16;
  (*(float *)(gen_frame + 0x14)) = (float)((float10)1 - fVar16);
  fVar16 = (float10)iVar11;
  if (iVar11 < 0) {
    fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x24)) = (float)fVar16;
  fVar16 = (float10)(float)fVar16;
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((fVar15 * fVar14) / fVar16)));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((fVar14 * (float10)REFG(double, 0x1088108)) / fVar16)));
  uVar10 = F_0067d2b0(this + 0x80 GEN_EDX_ARG,((char *)REFP(0x10ac6d0)));
  if (-1 < (int)uVar10) {
    F_006793b0(this + 0x80 GEN_EDX_ARG,uVar10,&(*(undefined4 *)(gen_frame + 0x0)),0x20);
  }
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x20));
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (*(int * PTR32 *)(gen_frame + 0x20));
  (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0x1ff));
  ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x2c));
  if (0x1fe < (int)piVar3) {
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x20));
  }
  piVar3 = *ppiVar12;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0xfffffe00));
  ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x20));
  if (-0x201 < (int)piVar3) {
    ppiVar12 = &(*(int * PTR32 *)(gen_frame + 0x2c));
  }
  (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP((((uint)*ppiVar12 & 0x3ff) << 10 | 0x25)));
  (*(int * PTR32 *)(gen_frame + 0x2c)) = *(int * PTR32 *)(this + 0x5c);
  uVar17 = F_0067d330(this + 0x80 GEN_EDX_ARG,((char *)REFP(0x10ac6e0)));
  if (-1 < (int)uVar17) {
    if ((*(int * PTR32 *)(gen_frame + 0x2c)) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x2c)) + 8))))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
    }
    iVar11 = (int)uVar17 * 0xc;
    if (*((int *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x90)))) != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x90))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
    }
    *((int * PTR32 *)GEN_TOP((iVar11 + 4 + *(int *)(this + 0x90)))) = (*(int * PTR32 *)(gen_frame + 0x2c));
    *((uint *)GEN_TOP((iVar11 + 8 + *(int *)(this + 0x90)))) = (uint)(*(int * PTR32 *)(gen_frame + 0x20)) & 0xfffffff;
  }
  piVar3 = *(int * PTR32 *)(this + 0x7c);
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar3;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
  }
  piVar3 = *(int * PTR32 *)(this + 0x98);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(this + 0x98) = (*(int * PTR32 *)(gen_frame + 0x20));
  this[0xc2] = (undefined1)0x0;
  uVar10 = 0;
  pPVar13 = this + 0x98;
  do {
    if (*(int *)pPVar13 == 0) break;
    cVar7 = (char)uVar10;
    uVar10 = uVar10 + 1;
    pPVar13 = pPVar13 + 4;
    this[0xc2] = (undefined1)(cVar7 + '\x01');
  } while (uVar10 < 4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 0x14))))(this + 0x80 GEN_EDX_ARG);
  uVar5 = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(this + 0x5c) = uVar5;
  PVar9 = this[0xd1];
  if (PVar9 != (undefined1)0x0) {
    PVar9 = (undefined1)((char)PVar9 - 1);
    this[0xd1] = PVar9;
  }
  return (byte)PVar9;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf5 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0067db80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67db80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pPVar8;
  undefined * this_00;
  int iVar9;
  
  piVar1 = *(int * PTR32 *)(this + 0x18);
  F_0067acb0((undefined *)this GEN_EDX_FWD);
  uVar6 = (uint)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = uVar6;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar7 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)uVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar6 = *puVar7;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar7 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x8));
  }
  (*(uint *)(gen_frame + 0x0)) = (*puVar7 & 0x3ff) << 10 | 0x265;
  this_00 = this + 0x58;
  F_0067d450(this_00 GEN_EDX_ARG,"sInput",piVar1,&(*(uint *)(gen_frame + 0x0)));
  piVar2 = *(int * PTR32 *)(this + 0x50);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  piVar3 = *(int * PTR32 *)(this + 0x70);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(this + 0x70) = piVar2;
  this[0x9a] = (undefined1)0x0;
  uVar6 = 0;
  pPVar8 = this + 0x70;
  do {
    if (*(int *)pPVar8 == 0) break;
    cVar5 = (char)uVar6;
    uVar6 = uVar6 + 1;
    pPVar8 = pPVar8 + 4;
    this[0x9a] = (undefined1)(cVar5 + '\x01');
  } while (uVar6 < 4);
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x4));
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar7 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(uint *)(gen_frame + 0x4))) {
    puVar7 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar6 = *puVar7;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar7 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x8));
  }
  (*(uint *)(gen_frame + 0x0)) = (*puVar7 & 0x3ff) << 10 | 0x265;
  F_0067d450(this + 0xa8 GEN_EDX_ARG,"sInput",*(undefined4 *)(this + 0x50),&(*(uint *)(gen_frame + 0x0)));
  piVar2 = *(int * PTR32 *)(this + 0x54);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  piVar3 = *(int * PTR32 *)(this + 0xc0);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  }
  pPVar8 = this + 0xc0;
  *(int * PTR32 *)pPVar8 = piVar2;
  this[0xea] = (undefined1)0x0;
  uVar6 = 0;
  do {
    if (*(int *)pPVar8 == 0) break;
    cVar5 = (char)uVar6;
    uVar6 = uVar6 + 1;
    pPVar8 = pPVar8 + 4;
    this[0xea] = (undefined1)(cVar5 + '\x01');
  } while (uVar6 < 4);
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x4));
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar7 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(uint *)(gen_frame + 0x4))) {
    puVar7 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar6 = *puVar7;
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar7 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)uVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar4 = *(undefined4 *)(this + 0x54);
  (*(uint *)(gen_frame + 0x0)) = (*puVar7 & 0x3ff) << 10 | 0x265;
  F_0067d450(this + 0xf8 GEN_EDX_ARG,"sInput",uVar4,&(*(uint *)(gen_frame + 0x0)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  piVar2 = *(int * PTR32 *)(this + 0x110);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(this + 0x110) = piVar1;
  this[0x13a] = (undefined1)0x0;
  uVar6 = 0;
  pPVar8 = this + 0x110;
  do {
    if (*(int *)pPVar8 == 0) break;
    cVar5 = (char)uVar6;
    uVar6 = uVar6 + 1;
    pPVar8 = pPVar8 + 4;
    this[0x13a] = (undefined1)(cVar5 + '\x01');
  } while (uVar6 < 4);
  iVar9 = 3;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0x14))))(this_00 GEN_EDX_ARG);
    this_00 = this_00 + 0x50;
    iVar9 = iVar9 - 1;
  } while (iVar9 != 0);
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0067ddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67ddc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  bVar2 = F_0067aa50((undefined *)this GEN_EDX_FWD);
  if (bVar2 != 0) {
    uVar3 = F_0067d2b0(this GEN_EDX_ARG,((char *)REFP(0x10ac780)));
    *(uint *)(this + 0x58) = uVar3;
    uVar4 = F_0067d330(this GEN_EDX_ARG,((char *)REFP(0x10ac790)));
    *(int *)(this + 0x5c) = (int)uVar4;
    if (((int)uVar3 < 0) || ((int)uVar4 < 0)) {
      return 0;
    }
    *(undefined4 *)(this + 100) = GEN_FLT_TO(*(undefined4 *)(this + 100), REFG(float, 0x1087f04));
    *(undefined4 *)(this + 0x68) = GEN_FLT_TO(*(undefined4 *)(this + 0x68), REFG(float, 0x10add84));
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10addbc)));
    *(undefined4 *)(this + 0x60) = 4;
    *(undefined4 *)(this + 0x6c) = uVar1;
    *(undefined2 *)(this + 0x3e) = 0xffff;
    *(undefined2 *)(this + 0x3c) = 0xffff;
    *(undefined2 *)(this + 0x38) = 0xffff;
  }
  return bVar2;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0067de50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67de50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  bVar1 = F_0067aa50((undefined *)this GEN_EDX_FWD);
  if (bVar1 != 0) {
    uVar3 = F_0067d330(this GEN_EDX_ARG,&REFG(undefined, 0x10ac798));
    *(int *)(this + 100) = (int)uVar3;
    uVar2 = F_0067d2b0(this GEN_EDX_ARG,((char *)REFP(0x10ac7a0)));
    *(uint *)(this + 0x60) = uVar2;
    if (((int)uVar3 < 0) && ((int)uVar2 < 0)) {
      return 0;
    }
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x7c) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  return bVar1;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0067dee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67dee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  bVar3 = F_0067aa50((undefined *)this GEN_EDX_FWD);
  if (bVar3 != 0) {
    uVar5 = F_0067d330(this GEN_EDX_ARG,((char *)REFP(0x10ac7ac)));
    *(int *)(this + 100) = (int)uVar5;
    uVar4 = F_0067d2b0(this GEN_EDX_ARG,((char *)REFP(0x10ac7b4)));
    *(uint *)(this + 0x60) = uVar4;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if (((int)uVar5 < 0) && ((int)uVar4 < 0)) {
      return 0;
    }
    *(undefined4 *)(this + 0x68) = GEN_FLT_TO(*(undefined4 *)(this + 0x68), REFG(float, 0x1094880));
    *(undefined4 *)(this + 0x70) = uVar2;
    *(undefined4 *)(this + 0x74) = GEN_FLT_TO(*(undefined4 *)(this + 0x74), REFG(float, 0x10916ec));
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094724)));
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x6c) = uVar1;
    *(undefined4 *)(this + 0x78) = uVar2;
    *(undefined4 *)(this + 0x7c) = uVar1;
    *(undefined4 *)(this + 0x80) = uVar1;
    *(undefined4 *)(this + 0x84) = uVar1;
  }
  return bVar3;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0067df80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67df80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x2b0, 0);
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined * pPVar6;
  
  (*(uint *)(gen_frame + 0x29c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2a0);
  iVar4 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
  ((undefined4 *)(gen_frame + 0x250))[0] = *((undefined4 *)GEN_TOP((iVar4 + 0x10)));
  ((undefined4 *)(gen_frame + 0x250))[1] = *((undefined4 *)GEN_TOP((iVar4 + 0x14)));
  ((undefined4 *)(gen_frame + 0x250))[2] = *((undefined4 *)GEN_TOP((iVar4 + 0x18)));
  ((undefined4 *)(gen_frame + 0x250))[3] = 0;
  ((undefined4 *)(gen_frame + 0x250))[4] = *((undefined4 *)GEN_TOP((iVar4 + 0x20)));
  (*(undefined4 *)(gen_frame + 0x264)) = *((undefined4 *)GEN_TOP((iVar4 + 0x24)));
  (*(undefined4 *)(gen_frame + 0x26c)) = 0;
  (*(undefined4 *)(gen_frame + 0x268)) = *((undefined4 *)GEN_TOP((iVar4 + 0x28)));
  (*(undefined4 *)(gen_frame + 0x270)) = *((undefined4 *)GEN_TOP((iVar4 + 0x30)));
  (*(undefined4 *)(gen_frame + 0x274)) = *((undefined4 *)GEN_TOP((iVar4 + 0x34)));
  (*(undefined4 *)(gen_frame + 0x27c)) = 0;
  (*(undefined4 *)(gen_frame + 0x278)) = *((undefined4 *)GEN_TOP((iVar4 + 0x38)));
  (*(undefined4 *)(gen_frame + 0x280)) = *((undefined4 *)GEN_TOP((iVar4 + 0x40)));
  (*(undefined4 *)(gen_frame + 0x284)) = *((undefined4 *)GEN_TOP((iVar4 + 0x44)));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 *)(gen_frame + 0x288)) = *((undefined4 *)GEN_TOP((iVar4 + 0x48)));
  (*(undefined4 *)(gen_frame + 0x28c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar1 = ((undefined4 *)GEN_TOP((iVar4 + 0x50)));
  puVar5 = ((undefined4 *)(gen_frame + 0x1d0));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_004f4970(((undefined4 *)(gen_frame + 0x210)),((undefined4 *)(gen_frame + 0x250)))));
  puVar5 = ((undefined4 *)(gen_frame + 0x110));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_004f4970(((undefined4 *)(gen_frame + 0x210)),((undefined4 *)(gen_frame + 0x1d0)))));
  puVar5 = ((undefined4 *)(gen_frame + 0x190));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x4c))[0x90] == (undefined1)0x0) {
    ((undefined4 *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[0], REFG(float, 0x1087f04));
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    ((undefined4 *)(gen_frame + 0x0))[3] = 0;
    ((undefined4 *)(gen_frame + 0x0))[4] = 0;
    ((undefined4 *)(gen_frame + 0x0))[5] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x0))[5], REFG(float, 0x1087f04));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  }
  else {
    puVar1 = ((undefined4 *)GEN_TOP(F_004f0e10(((undefined1 *)(gen_frame + 0x50)),(uint)((undefined4 *)(gen_frame + 0x190)),(uint)((undefined4 *)(gen_frame + 0x110)))));
    puVar5 = ((undefined4 *)(gen_frame + 0x150));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = ((undefined4 *)GEN_TOP(F_004f0e10(((undefined1 *)(gen_frame + 0x90)),(uint)((undefined4 *)(gen_frame + 0x150)),(uint)((*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x50))));
    puVar5 = ((undefined4 *)(gen_frame + 0x210));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = ((undefined4 *)GEN_TOP(F_004f0e10(((undefined1 *)(gen_frame + 0xd0)),(uint)((undefined4 *)(gen_frame + 0x210)),(uint)((undefined4 *)(gen_frame + 0x1d0)))));
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
  uVar2 = F_0067d2b0((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,((char *)REFP(0x10ac7cc)));
  if (-1 < (int)uVar2) {
    F_006793b0(this_00 GEN_EDX_ARG,uVar2,((undefined4 *)(gen_frame + 0x0)),0x40);
  }
  F_0067acb0((undefined *)this_00 GEN_EDX_ARG);
  puVar1 = ((undefined4 *)(gen_frame + 0x250));
  pPVar6 = (undefined *)(this_00 + 0x50);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *(undefined4 *)pPVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    pPVar6 = pPVar6 + 4;
  }
  *(undefined *)((*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x90) = (undefined1)0x1;
  return (uint)(undefined *)(*(undefined * PTR32 *)(gen_frame + 0x4c));
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf3 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067e230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67e230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int * PTR32 * ppiVar8;
  int * piVar9;
  ulonglong uVar10;
  
  bVar7 = 0;
  if ((*(int *)(this + 0x50) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x50) + 0xfc))) != 0)) {
    bVar7 = F_0067aa50((undefined *)this GEN_EDX_FWD);
    (*(byte *)(gen_frame + 0xf)) = bVar7;
    if (bVar7 != 0) {
      piVar1 = ((int *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x1ff));
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x8));
      if (0x1fe < (int)piVar1) {
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x4));
      }
      piVar1 = *ppiVar8;
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0xfffffe00));
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x4));
      if (-0x201 < (int)piVar1) {
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x8));
      }
      piVar1 = *ppiVar8;
      (*(int * PTR32 *)(gen_frame + 0x8)) = *((int * PTR32 *)GEN_TOP((REFG(int, 0x137128c) + 0x14a8)));
      uVar10 = F_0067d330(this GEN_EDX_ARG,&REFG(undefined, 0x10ac7fc));
      if (-1 < (int)uVar10) {
        if ((*(int * PTR32 *)(gen_frame + 0x8)) != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        }
        iVar2 = (int)uVar10 * 0xc;
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
        if (*((int *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10)))) != 0) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10))));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xc))))(piVar9 GEN_EDX_ARG);
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
        }
        *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10)))) = piVar9;
        *((uint *)GEN_TOP((iVar2 + 8 + *(int *)(this + 0x10)))) = ((uint)piVar1 & 0x3ff) << 10 | 0x265;
      }
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x0));
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x0));
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x1ff));
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x8));
      if (0x1fe < (int)piVar1) {
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x0));
      }
      piVar1 = *ppiVar8;
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0xfffffe00));
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x0));
      if (-0x201 < (int)piVar1) {
        ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x8));
      }
      piVar1 = *ppiVar8;
      (*(int * PTR32 *)(gen_frame + 0x8)) = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x50) + 0xfc)));
      uVar10 = F_0067d330(this GEN_EDX_ARG,((char *)REFP(0x10ac804)));
      if (-1 < (int)uVar10) {
        if ((*(int * PTR32 *)(gen_frame + 0x8)) != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        }
        iVar2 = (int)uVar10 * 0xc;
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
        if (*((int *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10)))) != 0) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10))));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xc))))(piVar9 GEN_EDX_ARG);
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
        }
        *((int * PTR32 *)GEN_TOP((iVar2 + 4 + *(int *)(this + 0x10)))) = piVar9;
        *((uint *)GEN_TOP((iVar2 + 8 + *(int *)(this + 0x10)))) = ((uint)piVar1 & 0x3ff) << 10 | 0x26a;
      }
      uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
      uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x20))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x20))), REFG(float, 0x1087f04));
      *(undefined4 *)(this + 0x2c) = 0xd;
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cb08)));
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
      iVar2 = *(int *)(this + 8);
      *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = uVar5;
      *((undefined4 *)GEN_TOP((iVar2 + 0x14))) = uVar6;
      *((undefined4 *)GEN_TOP((iVar2 + 0x18))) = uVar4;
      *((undefined4 *)GEN_TOP((iVar2 + 0x1c))) = uVar3;
      bVar7 = (*(byte *)(gen_frame + 0xf));
    }
  }
  return bVar7;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0067e430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67e430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc8, 8);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar7;
  undefined * this_00;
  uint uVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  iVar7 = REFG(int, 0x137128c);
  iVar5 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
  (*(float *)(gen_frame + 0x98)) = *((float *)GEN_TOP((REFG(int, 0x137128c) + 0x1610)));
  (*(undefined * PTR32 *)(gen_frame + 0x94)) = this;
  (*(float *)(gen_frame + 0x9c)) = *((float *)GEN_TOP((REFG(int, 0x137128c) + 0x1614)));
  (*(float *)(gen_frame + 0xa0)) = *((float *)GEN_TOP((REFG(int, 0x137128c) + 0x1618)));
  F_0046f390(&(*(float *)(gen_frame + 0x98)) GEN_EDX_FWD);
  uVar8 = F_004eebf0(&(*(float *)(gen_frame + 0x98)) GEN_EDX_ARG,iVar5 + 0x10);
  if (!GEN_ISNAN((*(float *)(gen_frame + 0xa0))) && !(0.0 <= (*(float *)(gen_frame + 0xa0)))) {
    F_004eeb30(&(*(float *)(gen_frame + 0x98)) GEN_EDX_ARG,iVar5 + 0x50);
    fVar10 = (float10)REFG(double, 0x1088108);
    pfVar9 = *(float * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x94)) + 8);
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x98)) * fVar10 + fVar10);
    (*(float *)(gen_frame + 0x98)) = fVar1;
    fVar2 = (float)(fVar10 - (float10)(*(float *)(gen_frame + 0x9c)) * fVar10);
    (*(float *)(gen_frame + 0x9c)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 0x161c))) / (float10)*((float *)GEN_TOP((iVar5 + 0xa4))))));
    (*(float *)(gen_frame + 0x84)) = fVar3;
    fVar11 = (float10)fVar3;
    fVar3 = ((float)GEN_TOF((fVar11 / (float10)*((float *)GEN_TOP((iVar5 + 0xa8))))));
    (*(float *)(gen_frame + 0x80)) = fVar3;
    fVar12 = (float10)fVar1;
    fVar13 = (float10)fVar3;
    fVar1 = (float)(fVar12 - fVar13);
    (*(float *)(gen_frame + 0x6c)) = fVar1;
    fVar14 = (float10)fVar2;
    (*(float *)(gen_frame + 0x5c)) = fVar1;
    fVar2 = (float)(fVar14 - fVar11);
    (*(float *)(gen_frame + 0x70)) = fVar2;
    (*(float *)(gen_frame + 0x60)) = fVar2;
    fVar3 = (float)(fVar13 + fVar12);
    (*(float *)(gen_frame + 0x74)) = fVar3;
    fVar4 = (float)(fVar14 + fVar11);
    (*(float *)(gen_frame + 0x78)) = fVar4;
    fVar3 = (float)((float10)fVar3 - (float10)fVar1);
    (*(float *)(gen_frame + 0x54)) = fVar3;
    *pfVar9 = fVar3;
    fVar3 = (float)((float10)fVar4 - (float10)fVar2);
    (*(float *)(gen_frame + 0x58)) = fVar3;
    pfVar9[1] = fVar3;
    pfVar9[2] = fVar1;
    pfVar9[3] = fVar2;
    fVar12 = (float10)*(double *)&REFG(undefined, 0x1092098);
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 0x1620))) * fVar12)));
    (*(float *)(gen_frame + 0x88)) = fVar1;
    fVar11 = (float10)1;
    fVar1 = (float)((float10)fVar1 - fVar11);
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    (*(float *)(gen_frame + 0x90)) = fVar1;
    (*(float *)(gen_frame + 0x8c)) = (float)(fVar11 - (float10)fVar1);
    fVar13 = GEN_X87((float10)(float)(fVar11 - (float10)fVar1));
    fVar1 = *((float *)GEN_TOP((iVar7 + 0x1628)));
    (*(float *)(gen_frame + 0xb4)) = 0.0;
    pfVar9 = &(*(float *)(gen_frame + 0xb4));
    fVar1 = ((float)GEN_TOF((fVar11 / ((fVar11 - fVar13) * (float10)fVar1 + (float10)REFG(double, 0x1094438)) - fVar11)));
    (*(float *)(gen_frame + 0x7c)) = fVar1;
    (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF((fVar11 - fVar11 / ((float10)REFG(double, 0x1094438) + (float10)fVar1))));
    fVar1 = (float)(fVar10 - fVar13);
    (*(float *)(gen_frame + 0xb0)) = fVar1;
    if (!((float10)fVar1 < (float10)0)) {
      pfVar9 = &(*(float *)(gen_frame + 0xb0));
    }
    fVar1 = *pfVar9;
    (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar1 * fVar12);
    fVar11 = ((float10)GEN_TOD(pow((float10)(float)((float10)fVar1 * fVar12),fVar12)));
    (*(float *)(gen_frame + 0xb4)) = (float)fVar11;
    (*(float *)(gen_frame + 0x50)) = (float)fVar11;
    fVar11 = F_004a3ed0(iVar7 + 0x1630U);
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x94));
    (*(float *)(gen_frame + 0x64)) = (float)fVar11;
    fVar1 = *((float *)GEN_TOP((iVar7 + 0x1640)));
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)1 /
                   (((float10)*((float *)GEN_TOP((iVar7 + 0x1668))) + (float10)*((float *)GEN_TOP((iVar7 + 0x1664)))) *
                    (float10)fVar1 + (float10)1))));
    (*(float *)(gen_frame + 0xa8)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 0x1624))) * (float10)*(float *)&REFG(undefined, 0x132238c))));
    (*(float *)(gen_frame + 0xb0)) = fVar3;
    fVar10 = ((float10)GEN_TOD(fcos((float10)fVar3)));
    (*(float *)(gen_frame + 0xac)) = (float)fVar10;
    (*(float *)(gen_frame + 0x0)) = (float)fVar10;
    fVar10 = ((float10)GEN_TOD(fsin((float10)fVar3)));
    (*(float *)(gen_frame + 0xac)) = (float)fVar10;
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(-(float10)(float)fVar10));
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 0x1620))) * (float10)*(float *)&REFG(undefined, 0x132238c))));
    (*(float *)(gen_frame + 0xb0)) = fVar3;
    fVar10 = ((float10)GEN_TOD(fsin((float10)fVar3)));
    (*(float *)(gen_frame + 0xac)) = (float)fVar10;
    (*(float *)(gen_frame + 0x8)) = (float)fVar10;
    fVar10 = ((float10)GEN_TOD(fcos((float10)fVar3)));
    (*(float *)(gen_frame + 0xac)) = (float)fVar10;
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x7c));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(-(float10)(float)fVar10));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x68));
    fVar11 = GEN_X87((float10)(float)fVar11 * (float10)(*(float *)(gen_frame + 0x90)));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    fVar10 = (float10)(*(float *)(gen_frame + 0x8c));
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x88));
    fVar12 = (float10)fVar2;
    (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF((fVar12 * (fVar10 * (float10)*((float *)GEN_TOP((iVar7 + 0x1630U))) + fVar11))));
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 0x1634))) * fVar10 + fVar11) * fVar12)));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((fVar12 * ((float10)*((float *)GEN_TOP((iVar7 + 0x1638))) * fVar10 + fVar11))));
    (*(undefined4 *)(gen_frame + 0x3c)) = *((undefined4 *)GEN_TOP((iVar7 + 0x163c)));
    (*(float *)(gen_frame + 0xa8)) = *((float *)GEN_TOP((iVar7 + 0x162c)));
    fVar11 = (float10)*((float *)GEN_TOP((iVar7 + 0x162c)));
    (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x80));
    fVar10 = (float10)(*(float *)(gen_frame + 0x50));
    (*(uint *)(gen_frame + 0x44)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x84))) ^ REFG(uint, 0x10920d0);
    (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x98));
    (*(float *)(gen_frame + 0x30)) = (float)(fVar10 * fVar11);
    (*(float *)(gen_frame + 0x4c)) = (*(float *)(gen_frame + 0x9c));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((fVar11 * (float10)REFG(double, 0x1088108)) * fVar10)));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((fVar11 * (float10)*(double *)&REFG(undefined, 0x108bec8)) * fVar10)));
    uVar8 = F_0067d2b0((*(undefined * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG,((char *)REFP(0x10ac80c)));
    if (-1 < (int)uVar8) {
      F_006793b0(this_00 GEN_EDX_ARG,uVar8,&(*(float *)(gen_frame + 0x0)),0x50);
    }
    uVar8 = F_0067acb0((undefined *)this_00 GEN_EDX_ARG);
  }
  return uVar8;
}

/* ref: FUN_0067e7d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0067e7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x67e7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xf4, 12);
  uint * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int * piVar5;
  float * pfVar6;
  byte bVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  uint uVar12;
  float10 fVar13;
  
  (*(uint *)(gen_frame + 0xe0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe4);
  (*(float * PTR32 *)(gen_frame + 0x48)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  puVar8 = ((undefined4 *)GEN_TOP(F_004f11a0(((undefined1 *)(gen_frame + 0x54)),*((int *)GEN_TOP((REFG(int, 0x137127c) + 0x6554))) + 0x10,
                        *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x6554))) + 0x50)));
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x48));
  puVar11 = ((undefined4 *)(gen_frame + 0x94));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  (*(float * PTR32 *)(gen_frame + 0x48)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x48)) + 0xc)));
  (*(uint *)(gen_frame + 0x44)) = 0;
  (*(uint *)(gen_frame + 0x4c)) = 1;
  do {
    uVar12 = (*(uint *)(gen_frame + 0x44)) >> 5;
    if ((*((uint *)GEN_TOP(((int)pfVar6 + uVar12 * 4 + 0x1004))) & (*(uint *)(gen_frame + 0x4c))) != 0) {
      (*(float *)(gen_frame + 0x24)) = (*(float * PTR32 *)(gen_frame + 0x48))[-2];
      (*(float *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x48))[-1];
      (*(float *)(gen_frame + 0x2c)) = *(*(float * PTR32 *)(gen_frame + 0x48));
      F_004eeb30(&(*(float *)(gen_frame + 0x24)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x94)));
      if (((*((uint *)GEN_TOP(((int)pfVar6 +
                     (uVar12 + (uint)*((byte *)GEN_TOP(((int)pfVar6 + 0x1084))) * 4) * 4 + 0x1014))) & (*(uint *)(gen_frame + 0x4c)))
           == 0) ||
         (bVar7 = F_00687780(*((undefined * PTR32 *)GEN_TOP(((int)pfVar6 +
                                         ((uint)*((byte *)GEN_TOP(((int)pfVar6 + 0x1084))) * 0x80 + (*(uint *)(gen_frame + 0x44))) *
                                         4 + 0x604))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x20)),4), bVar7 == 0)) {
LAB_0067e976: ;
        puVar1 = ((uint *)GEN_TOP(((int)pfVar6 + uVar12 * 4 + 0x1064)));
        *puVar1 = *puVar1 & ~(*(uint *)(gen_frame + 0x4c));
      }
      else {
        fVar13 = (float10)(*(int *)(gen_frame + 0x20));
        if ((*(int *)(gen_frame + 0x20)) < 0) {
          fVar13 = GEN_X87(fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar13 / (float10)*(double *)&REFG(undefined, 0x1088100)))));
        fVar13 = GEN_X87((float10)(float)(fVar13 / (float10)*(double *)&REFG(undefined, 0x1088100)));
        if (fVar13 * fVar13 < (float10)(*(float *)(gen_frame + 0x2c))) {
          puVar1 = ((uint *)GEN_TOP(((int)pfVar6 + uVar12 * 4 + 0x1074)));
          *puVar1 = *puVar1 | (*(uint *)(gen_frame + 0x4c));
        }
        else {
          puVar1 = ((uint *)GEN_TOP(((int)pfVar6 + uVar12 * 4 + 0x1074)));
          *puVar1 = *puVar1 & ~(*(uint *)(gen_frame + 0x4c));
        }
        if (bVar7 == 0) goto LAB_0067e976;
        puVar1 = ((uint *)GEN_TOP(((int)pfVar6 + uVar12 * 4 + 0x1064)));
        *puVar1 = *puVar1 | (*(uint *)(gen_frame + 0x4c));
      }
      if ((*(undefined * PTR32 *)(gen_frame + 0x3c)) != ((undefined *)GEN_TOP(0x0))) {
        fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24)))));
        (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        if ((float10)fVar2 <= (float10)1) {
          fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x28)))));
          (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar2)));
          if ((float10)fVar2 <= (float10)1) {
            fVar13 = (float10)REFG(double, 0x1088108);
            piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 4)));
            (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
            (*(undefined4 *)(gen_frame + 0x4)) = 0;
            (*(undefined4 *)(gen_frame + 0x8)) = 0;
            fVar2 = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar13 + fVar13);
            (*(float *)(gen_frame + 0x24)) = fVar2;
            (*(undefined4 *)(gen_frame + 0xc)) = 0;
            fVar3 = (float)(fVar13 - (float10)(*(float *)(gen_frame + 0x28)) * fVar13);
            (*(float *)(gen_frame + 0x28)) = fVar3;
            iVar10 = *((int *)GEN_TOP((*piVar5 + 8)));
            fVar4 = (float)((float10)fVar2 - (float10)fVar2);
            (*(float *)(gen_frame + 0x10)) = fVar4;
            *((float *)GEN_TOP((iVar10 + 0x10))) = fVar4;
            fVar4 = (float)((float10)fVar3 - (float10)fVar3);
            (*(float *)(gen_frame + 0x14)) = fVar4;
            *((float *)GEN_TOP((iVar10 + 0x14))) = fVar4;
            (*(float *)(gen_frame + 0x18)) = fVar2;
            *((float *)GEN_TOP((iVar10 + 0x18))) = fVar2;
            (*(float *)(gen_frame + 0x1c)) = fVar3;
            *((float *)GEN_TOP((iVar10 + 0x1c))) = fVar3;
            (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 4)))));
            uVar9 = F_0067d2b0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 4))))) GEN_EDX_ARG,((char *)REFP(0x10ac894)));
            if (-1 < (int)uVar9) {
              F_006793b0((*(undefined * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,uVar9,&(*(undefined4 *)(gen_frame + 0x0)),0x10);
            }
            (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)pfVar6 +
                                ((uint)*((byte *)GEN_TOP(((int)pfVar6 + 0x1084))) * 0x80 + (*(uint *)(gen_frame + 0x44))) * 4 +
                                0x604)))));
            puVar8 = ((undefined4 *)GEN_TOP(F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,0xc)));
            if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
              *puVar8 = 0xc;
              puVar8[1] = (*(undefined * PTR32 *)(gen_frame + 0x50));
              puVar8[2] = 2;
              F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,puVar8);
            }
            F_0067a0f0((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
            (*(undefined * PTR32 *)(gen_frame + 0x50)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)pfVar6 +
                                         ((uint)*((byte *)GEN_TOP(((int)pfVar6 + 0x1084))) * 0x80 + (*(uint *)(gen_frame + 0x44))) *
                                         4 + 0x604))))));
            puVar8 = ((undefined4 *)GEN_TOP(F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,0xc)));
            if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
              *puVar8 = 0xc;
              puVar8[1] = (*(undefined * PTR32 *)(gen_frame + 0x50));
              puVar8[2] = 1;
              F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,puVar8);
            }
            puVar1 = ((uint *)GEN_TOP(((int)pfVar6 +
                             uVar12 * 4 + (uint)*((byte *)GEN_TOP(((int)pfVar6 + 0x1084))) * 0x10 + 0x1014)));
            *puVar1 = *puVar1 | (*(uint *)(gen_frame + 0x4c));
            goto LAB_0067eb8f;
          }
        }
      }
      puVar1 = ((uint *)GEN_TOP(((int)pfVar6 +
                       uVar12 * 4 + (uint)*((byte *)GEN_TOP(((int)pfVar6 + 0x1084))) * 0x10 + 0x1014)));
      *puVar1 = *puVar1 & ~(*(uint *)(gen_frame + 0x4c));
    }
LAB_0067eb8f: ;
    uVar12 = (*(uint *)(gen_frame + 0x44)) + 1;
    (*(float * PTR32 *)(gen_frame + 0x48)) = (*(float * PTR32 *)(gen_frame + 0x48)) + 3;
    (*(uint *)(gen_frame + 0x44)) = uVar12;
    (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x4c)) < 0);
    if (0x7f < uVar12) {
      uVar12 = *((byte *)GEN_TOP(((int)pfVar6 + 0x1084))) + 1;
      *((char *)GEN_TOP(((int)pfVar6 + 0x1084))) = (char)((ulonglong)uVar12 % 5);
      return uVar12 / 5;
    }
  } while( true );
}

/* ref: FUN_0067ebf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067ebf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x67ebf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  float * pfVar9;
  undefined4 uVar10;
  undefined * this;
  double dVar11;
  uint uVar12;
  uint * puVar13;
  int * piVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_28;
  float local_24;
  
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  uVar3 = *((uint *)GEN_TOP((uVar2 + 8)));
  uVar4 = *((uint *)GEN_TOP((uVar2 + 8)));
  uVar5 = *((uint *)GEN_TOP((uVar2 + 8)));
  uVar6 = *((uint *)GEN_TOP((uVar2 + 8)));
  F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x14))))) GEN_EDX_FWD,"sInput",(*(uint *)&gen_args[0]),param_1 + 0x88);
  iVar7 = **((int * PTR32 *)GEN_TOP((param_1 + 0x14)));
  piVar8 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  if (piVar8 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG);
  }
  piVar14 = *((int * PTR32 *)GEN_TOP((iVar7 + 0x18)));
  if (piVar14 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 0xc))))(piVar14 GEN_EDX_ARG);
  }
  piVar14 = ((int *)GEN_TOP((iVar7 + 0x18)));
  *piVar14 = (int)piVar8;
  *((undefined1 *)GEN_TOP((iVar7 + 0x42))) = 0;
  uVar12 = 0;
  do {
    if (*piVar14 == 0) break;
    *((char *)GEN_TOP((iVar7 + 0x42))) = (char)uVar12 + '\x01';
    uVar12 = uVar12 + 1;
    piVar14 = piVar14 + 1;
  } while (uVar12 < 4);
  iVar7 = **((int * PTR32 *)GEN_TOP((param_1 + 0x14)));
  bVar1 = *((byte *)GEN_TOP((iVar7 + 0x48)));
  *((undefined4 *)GEN_TOP((iVar7 + 0x34))) = 0;
  *((byte *)GEN_TOP((iVar7 + 0x48))) = *((byte *)GEN_TOP((iVar7 + 0x48))) ^ (bVar1 ^ (byte)(*(uint *)&gen_args[1])) & 1;
  (*(uint *)&gen_args[1]) = **((uint * PTR32 *)GEN_TOP((param_1 + 0x14)));
  uVar12 = F_0067d2b0((*(uint *)&gen_args[1]) GEN_EDX_ARG,((char *)REFP(0x10ac8ec)));
  if (-1 < (int)uVar12) {
    F_006793b0(((undefined *)GEN_TOP((*(uint *)&gen_args[1]))) GEN_EDX_ARG,uVar12,param_1 + 0x50,0x10);
  }
  (*(uint *)&gen_args[1]) = **((uint * PTR32 *)GEN_TOP((param_1 + 0x14)));
  uVar12 = F_0067d2b0((*(uint *)&gen_args[1]) GEN_EDX_ARG,((char *)REFP(0x10ac8f4)));
  if (-1 < (int)uVar12) {
    F_006793b0(((undefined *)GEN_TOP((*(uint *)&gen_args[1]))) GEN_EDX_ARG,uVar12,param_1 + 0x60,0x10);
  }
  (*(uint *)&gen_args[1]) = **((uint * PTR32 *)GEN_TOP((param_1 + 0x14)));
  uVar12 = F_0067d2b0((*(uint *)&gen_args[1]) GEN_EDX_ARG,((char *)REFP(0x10ac8fc)));
  if (-1 < (int)uVar12) {
    F_006793b0(((undefined *)GEN_TOP((*(uint *)&gen_args[1]))) GEN_EDX_ARG,uVar12,param_1 + 0x70,8);
  }
  iVar7 = *((int *)GEN_TOP((param_1 + 0xc)));
  fVar15 = (float10)*((int *)GEN_TOP((iVar7 + 0x18)));
  if (*((int *)GEN_TOP((iVar7 + 0x18))) < 0) {
    fVar15 = GEN_X87(fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar16 = (float10)*((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x18)));
  if (*((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x18))) < 0) {
    fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar16 = GEN_X87((float10)*((float *)GEN_TOP((param_1 + 0x80))) * fVar16);
  fVar15 = (float10)(float)fVar15;
  fVar19 = ((float)GEN_TOF(((fVar15 - fVar16) / fVar15)));
  fVar17 = (float10)*((int *)GEN_TOP((iVar7 + 0x1c)));
  if (*((int *)GEN_TOP((iVar7 + 0x1c))) < 0) {
    fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar18 = (float10)*((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x1c)));
  if (*((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x1c))) < 0) {
    fVar18 = GEN_X87(fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar18 = GEN_X87(fVar18 * (float10)*((float *)GEN_TOP((param_1 + 0x80))));
  fVar17 = (float10)(float)fVar17;
  fVar21 = ((float)GEN_TOF(((fVar17 - fVar18) / fVar17)));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(fVar16 / fVar15));
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)(fVar18 / fVar17));
  local_28 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x78))) + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))))));
  local_24 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x7c))) + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0])))))));
  if (*((char *)GEN_TOP((param_1 + 0x84))) == '\0') {
LAB_0067ee25: ;
    fVar20 = *((float *)GEN_TOP((param_1 + 0x78)));
    if (*((char *)GEN_TOP((param_1 + 0x85))) != '\0') {
LAB_0067ee33: ;
      local_28 = REFG(float, 0x1087f04);
      fVar20 = fVar19;
    }
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x85))) != '\0') {
      fVar19 = 0.0;
      goto LAB_0067ee33;
    }
    if (*((char *)GEN_TOP((param_1 + 0x84))) == '\0') goto LAB_0067ee25;
    fVar20 = 0.0;
    local_28 = gen_bits2f((*(uint *)&gen_args[1]));
  }
  if (*((char *)GEN_TOP((param_1 + 0x86))) == '\0') {
LAB_0067ee68: ;
    fVar19 = *((float *)GEN_TOP((param_1 + 0x7c)));
    if (*((char *)GEN_TOP((param_1 + 0x87))) == '\0') goto LAB_0067ee80;
  }
  else {
    if (*((char *)GEN_TOP((param_1 + 0x87))) == '\0') {
      if (*((char *)GEN_TOP((param_1 + 0x86))) != '\0') {
        fVar19 = 0.0;
        local_24 = gen_bits2f((*(uint *)&gen_args[0]));
        goto LAB_0067ee80;
      }
      goto LAB_0067ee68;
    }
    fVar21 = 0.0;
  }
  local_24 = REFG(float, 0x1087f04);
  fVar19 = fVar21;
LAB_0067ee80: ;
  pfVar9 = *((float * PTR32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x14))) + 8)));
  *pfVar9 = (float)((float10)local_28 - (float10)fVar20);
  pfVar9[1] = (float)((float10)local_24 - (float10)fVar19);
  pfVar9[2] = fVar20;
  pfVar9[3] = fVar19;
  F_0067a0f0(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
  dVar11 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  *((undefined4 *)GEN_TOP((uVar2 + 8))) = 0xf7ffffff;
  (*(uint *)&gen_args[1]) = (int)dVar11;
  (*(uint *)&gen_args[0]) = 0x1ff;
  puVar13 = &(*(uint *)&gen_args[1]);
  if (0x1fe < (int)dVar11) {
    puVar13 = &(*(uint *)&gen_args[0]);
  }
  uVar12 = *puVar13;
  (*(uint *)&gen_args[1]) = uVar12;
  (*(uint *)&gen_args[0]) = 0xfffffe00;
  puVar13 = &(*(uint *)&gen_args[0]);
  if (-0x201 < (int)uVar12) {
    puVar13 = &(*(uint *)&gen_args[1]);
  }
  uVar10 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  (*(uint *)&gen_args[1]) = (*puVar13 & 0x3ff) << 10 | 0x25;
  this = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x34)))));
  F_0067d450(this GEN_EDX_ARG,"sInput",uVar10,&(*(uint *)&gen_args[1]));
  fVar19 = REFG(float, 0x1087f04);
  *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x34))) + 0x30))) = 0x7a80541;
  *((float *)GEN_TOP((param_1 + 0x48))) = fVar19;
  F_0067a0f0(((undefined *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG);
  *((uint *)GEN_TOP((uVar2 + 8))) =
       ((uVar5 >> 0x17 & 0xf | (uVar3 >> 0x1b) << 4) << 4 | uVar4 >> 0x13 & 0xf) << 0x13 |
       uVar6 & 0x7ffff;
  return uVar2;
}

/* ref: FUN_0067efb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0067efb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67efb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char * pcVar1;
  undefined4 uVar2;
  char * pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  char * PTR32 * ppcVar7;
  
  bVar5 = F_0067a050(this GEN_EDX_FWD,1);
  if (bVar5 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10ac90c));
    uVar6 = F_00688330(this GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x0)),1);
    if (uVar6 != 0) {
      bVar5 = F_00677f90(this GEN_EDX_ARG);
      iVar4 = REFG(int, 0x1371288);
      if (bVar5 != 0) {
        pcVar3 = ((char *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x1ff));
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0xfffffe00));
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x1371288) + 0x14)));
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) GEN_EDX_ARG,((char *)REFP(0x10ac930)),uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x1ff));
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0xfffffe00));
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 0x18)));
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) GEN_EDX_ARG,((char *)REFP(0x10ac938)),uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x1ff));
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0xfffffe00));
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 0x28)));
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) GEN_EDX_ARG,((char *)REFP(0x10ac940)),uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x1ff));
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar3 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0xfffffe00));
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *((undefined4 *)GEN_TOP((iVar4 + 0x2c)));
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) GEN_EDX_ARG,((char *)REFP(0x10ac948)),uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) GEN_EDX_ARG,0,
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x2c))) + 0x34))));
        *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))) = 0x7080541;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0067f1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0067f1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67f1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  float fVar1;
  char cVar2;
  undefined * this_00;
  float10 fVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  
  cVar2 = *((char *)GEN_TOP(((int)this + 0x2d)));
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x2f))) == '\0')) {
    (*(float *)(gen_frame + 0x0)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x30))) == '\0')) {
    (*(float *)(gen_frame + 0x4)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x31))) == '\0')) {
    (*(float *)(gen_frame + 0x10)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x32))) == '\0')) {
    (*(float *)(gen_frame + 0x14)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x33))) == '\0')) {
    (*(float *)(gen_frame + 0x18)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x34))) == '\0')) {
    (*(float *)(gen_frame + 0x1c)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  }
  cVar2 = *((char *)GEN_TOP(((int)this + 0x2e)));
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x2f))) == '\0')) {
    (*(float *)(gen_frame + 0x20)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x30))) == '\0')) {
    (*(float *)(gen_frame + 0x24)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
  }
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x31))) == '\0')) {
    (*(float *)(gen_frame + 0x30)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x32))) == '\0')) {
    (*(float *)(gen_frame + 0x34)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x33))) == '\0')) {
    (*(float *)(gen_frame + 0x38)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*((char *)GEN_TOP(((int)this + 0x34))) == '\0')) {
    (*(float *)(gen_frame + 0x3c)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
  }
  fVar6 = *((float *)GEN_TOP(((int)this + 0x24)));
  (*(float *)(gen_frame + 0x50)) = fVar6;
  fVar7 = (float10)(int)gen_fl2bits(fVar6);
  if ((int)gen_fl2bits(fVar6) < 0) {
    fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x54)) = (float)fVar7;
  (*(float *)(gen_frame + 0x50)) = 0.0;
  pfVar4 = &(*(float *)(gen_frame + 0x50));
  fVar8 = (float10)0;
  if (!((float10)(float)fVar7 < fVar8)) {
    pfVar4 = &(*(float *)(gen_frame + 0x54));
  }
  fVar1 = *pfVar4;
  fVar6 = gen_bits2f(*((int *)GEN_TOP(((int)this + 0x28))) - (int)gen_fl2bits(fVar6));
  (*(float *)(gen_frame + 0x50)) = fVar6;
  fVar7 = (float10)(int)gen_fl2bits(fVar6);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  if ((int)gen_fl2bits(fVar6) < 0) {
    fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x54)) = (float)fVar7;
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  pfVar4 = &(*(float *)(gen_frame + 0x50));
  fVar3 = (float10)1;
  if (!((float10)(float)fVar7 < fVar3)) {
    pfVar4 = &(*(float *)(gen_frame + 0x54));
  }
  (*(float *)(gen_frame + 0x44)) = (float)(fVar3 / (float10)*pfVar4);
  if (*((char *)GEN_TOP(((int)this + 0x2c))) != '\0') {
    fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) - 1);
    (*(float *)(gen_frame + 0x50)) = fVar6;
    fVar7 = (float10)(int)gen_fl2bits(fVar6);
    if ((int)gen_fl2bits(fVar6) < 0) {
      fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(float *)(gen_frame + 0x54)) = (float)fVar7;
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
    pfVar4 = &(*(float *)(gen_frame + 0x50));
    if (!((float10)(float)fVar7 < fVar3)) {
      pfVar4 = &(*(float *)(gen_frame + 0x54));
    }
    fVar8 = GEN_X87(fVar3 / (float10)*pfVar4);
  }
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x48)) = (float)fVar8;
  this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))));
  (*(undefined4 *)(gen_frame + 0x4c)) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  uVar5 = F_0067d2b0(this_00 GEN_EDX_FWD,((char *)REFP(0x10ac950)));
  if (-1 < (int)uVar5) {
    F_006793b0(this_00 GEN_EDX_ARG,uVar5,&(*(float *)(gen_frame + 0x0)),0x50);
  }
  uVar5 = F_0067a0f0(this GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_0067f3e0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_0067f3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67f3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  byte bVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  char * PTR32 * ppcVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  F_0067a800(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1510))) = 0xffffffff;
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x1510)));
  uVar4 = 0;
  uVar2 = 1;
  do {
    bVar1 = (byte)uVar4;
    uVar4 = uVar4 + 1;
    uVar5 = 0 << GEN_SHC(bVar1, bVar1) | ~uVar2 & uVar5;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while (uVar4 < 0x1b);
  *((uint *)GEN_TOP(((int)this + 0x1510))) = uVar5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/Default.shcd";
  uVar5 = F_00688330(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
  if (uVar5 != 0) {
    pcVar3 = "shader/posteffect/Default.shcd";
    if (*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x44))) != 0x8086) {
      pcVar3 = "shader/posteffect/AlphaTest.shcd";
    }
    (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    uVar5 = F_00688330(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
    if (uVar5 != 0) {
      pcVar3 = ((char *)REFP(0x10ac9c0));
      if ((*((byte *)GEN_TOP(((int)this + 0x1508))) & 4) == 0) {
        pcVar3 = ((char *)REFP(0x10ac9f4));
      }
      (*(undefined4 *)(gen_frame + 0x8)) = 4;
      (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3;
      uVar5 = F_00688330(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
      if (uVar5 != 0) {
        pcVar3 = ((char *)REFP(0x10aca24));
        if ((*((byte *)GEN_TOP(((int)this + 0x1508))) & 4) == 0) {
          pcVar3 = ((char *)REFP(0x10aca4c));
        }
        (*(char * PTR32 *)(gen_frame + 0x40)) = pcVar3;
        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x48)) = "shader/posteffect/Default.shcd";
        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x50)) = "shader/posteffect/Default.shcd";
        uVar5 = 0;
        (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)&(*(undefined4 *)(gen_frame + 0x3c));
        do {
          uVar2 = F_00688330(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG,uVar5,(*(char * PTR32 *)(gen_frame + 0xc)),0);
          if (uVar2 == 0) {
            return 0;
          }
          (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0xc)) + 8)));
          uVar5 = uVar5 + 1;
        } while (uVar5 < 3);
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x10acab0));
        uVar5 = F_00688330(((undefined *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
        if (uVar5 != 0) {
          ((char * PTR32 *)(gen_frame + 0x24))[2] = ((char *)GEN_TOP(0x0));
          ((char * PTR32 *)(gen_frame + 0x24))[3] = "shader/posteffect/DownScale2x2_Linear.shcd";
          (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x0));
          (*(char * PTR32 *)(gen_frame + 0x38)) = "shader/posteffect/DownScale2x2_Linear.shcd";
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          (*(char * PTR32 *)(gen_frame + 0x40)) = "shader/posteffect/DownScale2x2_Linear.shcd";
          (*(undefined4 *)(gen_frame + 0x44)) = 3;
          (*(char * PTR32 *)(gen_frame + 0x48)) = ((char *)REFP(0x10acb54));
          (*(undefined4 *)(gen_frame + 0x4c)) = 0;
          (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)REFP(0x10acb80));
          uVar5 = 0;
          do {
            if (uVar5 == 3) {
              uVar2 = F_00687d40(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x44)),0);
            }
            else if (uVar5 == 4) {
              uVar2 = F_00687e00(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x4c)),0);
            }
            else {
              uVar2 = F_00688330(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,uVar5,((char * PTR32 *)(gen_frame + 0x24)) + uVar5 * 2 + 2,0);
            }
            if (uVar2 == 0) {
              return 0;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 5);
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x10acba0));
          uVar5 = F_00688330(((undefined *)GEN_TOP(((int)this + 0xd4))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
          if (uVar5 != 0) {
            (*(undefined4 *)(gen_frame + 0x8)) = 0;
            (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x10acbc4));
            uVar5 = F_00688330(((undefined *)GEN_TOP(((int)this + 0xf4))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
            if (uVar5 != 0) {
              (*(undefined4 *)(gen_frame + 0x8)) = 0;
              (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/Default.shcd";
              uVar5 = F_00688330(((undefined *)GEN_TOP(((int)this + 0x114))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
              if (uVar5 != 0) {
                pvVar6 = ((undefined *)GEN_TOP(((int)this + 0x134)));
                ((char * PTR32 *)(gen_frame + 0x24))[2] = ((char *)GEN_TOP(0x0));
                ((char * PTR32 *)(gen_frame + 0x24))[3] = ((char *)REFP(0x10acc08));
                (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x8));
                (*(char * PTR32 *)(gen_frame + 0x38)) = ((char *)REFP(0x10acc30));
                (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x40)) = "shader/posteffect/DownScale2x2_Linear.shcd";
                (*(undefined4 *)(gen_frame + 0x44)) = 7;
                (*(char * PTR32 *)(gen_frame + 0x48)) = ((char *)REFP(0x10acc88));
                (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)REFP(0x10acca8));
                uVar5 = 0;
                do {
                  if (uVar5 == 2) {
                    uVar2 = F_00687f00(pvVar6 GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0x3c)),0);
                  }
                  else if (uVar5 == 3) {
                    uVar2 = F_00687fc0(pvVar6 GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x44)),0);
                  }
                  else {
                    uVar2 = F_00688330(pvVar6 GEN_EDX_ARG,uVar5,((char * PTR32 *)(gen_frame + 0x24)) + uVar5 * 2 + 2,0);
                  }
                  if (uVar2 == 0) {
                    return 0;
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < 5);
                (*(undefined4 *)(gen_frame + 0x0)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10acccc));
                (*(undefined4 *)(gen_frame + 0x8)) = 0;
                (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/Default.shcd";
                uVar5 = 0;
                puVar7 = &(*(undefined4 *)(gen_frame + 0x0));
                do {
                  uVar2 = F_00688330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x154))) GEN_EDX_ARG,uVar5,puVar7,0);
                  if (uVar2 == 0) {
                    return 0;
                  }
                  uVar5 = uVar5 + 1;
                  puVar7 = puVar7 + 2;
                } while (uVar5 < 2);
                (*(undefined4 *)(gen_frame + 0x44)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x48)) = ((char *)REFP(0x10acd14));
                (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)REFP(0x10acd34));
                (*(char * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x174)));
                uVar5 = 0;
                puVar7 = &(*(undefined4 *)(gen_frame + 0x44));
                do {
                  uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar5,puVar7,0);
                  if (uVar2 == 0) {
                    return 0;
                  }
                  uVar5 = uVar5 + 1;
                  puVar7 = puVar7 + 2;
                } while (uVar5 < 2);
                (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x0));
                (*(char * PTR32 *)(gen_frame + 0x38)) = ((char *)REFP(0x10acd50));
                (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x40)) = ((char *)REFP(0x10acd70));
                (*(undefined4 *)(gen_frame + 0x44)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x48)) = ((char *)REFP(0x10acd8c));
                (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x50)) = "shader/posteffect/Default.shcd";
                uVar5 = 0;
                ppcVar8 = ((char * PTR32 *)(gen_frame + 0x24)) + 4;
                do {
                  uVar2 = F_00688330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x194))) GEN_EDX_ARG,uVar5,ppcVar8,0);
                  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
                  if (uVar2 == 0) {
                    return 0;
                  }
                  uVar5 = uVar5 + 1;
                  ppcVar8 = ppcVar8 + 2;
                } while (uVar5 < 4);
                (*(undefined4 *)(gen_frame + 0x8)) = 0;
                (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x10acdc8));
                uVar5 = F_00688090(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x1b4))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
                if (uVar5 != 0) {
                  (*(undefined4 *)(gen_frame + 0x8)) = 3;
                  (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x10acde4));
                  uVar5 = F_00688330(((undefined *)GEN_TOP(((int)pvVar6 + 0x1d4))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
                  if (uVar5 != 0) {
                    (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x0));
                    (*(char * PTR32 *)(gen_frame + 0x38)) = "shader/posteffect/Default.shcd";
                    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                    (*(char * PTR32 *)(gen_frame + 0x40)) = ((char *)REFP(0x10ace28));
                    (*(undefined4 *)(gen_frame + 0x44)) = 0;
                    (*(char * PTR32 *)(gen_frame + 0x48)) = "shader/posteffect/Default.shcd";
                    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                    (*(char * PTR32 *)(gen_frame + 0x50)) = "shader/posteffect/Default.shcd";
                    uVar5 = 0;
                    ppcVar8 = ((char * PTR32 *)(gen_frame + 0x24)) + 4;
                    do {
                      uVar2 = F_00688330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 500))) GEN_EDX_ARG,uVar5,ppcVar8,0);
                      if (uVar2 == 0) {
                        return 0;
                      }
                      uVar5 = uVar5 + 1;
                      ppcVar8 = ppcVar8 + 2;
                    } while (uVar5 < 4);
                    pcVar3 = ((char *)REFP(0x10ace84));
                    if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x1508))) & 4) == 0) {
                      pcVar3 = ((char *)REFP(0x10acea4));
                    }
                    (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3;
                    (*(undefined4 *)(gen_frame + 0x8)) = 0;
                    uVar5 = F_00688520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x214))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
                    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
                    if (uVar5 != 0) {
                      ((char * PTR32 *)(gen_frame + 0x14))[0] = ((char *)GEN_TOP(0x0));
                      ((char * PTR32 *)(gen_frame + 0x14))[1] = ((char *)REFP(0x10acec0));
                      ((char * PTR32 *)(gen_frame + 0x14))[2] = ((char *)GEN_TOP(0x0));
                      ((char * PTR32 *)(gen_frame + 0x14))[3] = "shader/posteffect/DownScale2x2_Linear.shcd";
                      ((char * PTR32 *)(gen_frame + 0x24))[0] = ((char *)GEN_TOP(0x0));
                      ((char * PTR32 *)(gen_frame + 0x24))[1] = "shader/posteffect/DownScale2x2_Linear.shcd";
                      ((char * PTR32 *)(gen_frame + 0x24))[2] = ((char *)GEN_TOP(0x3));
                      ((char * PTR32 *)(gen_frame + 0x24))[3] = ((char *)REFP(0x10acf44));
                      (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x3));
                      (*(char * PTR32 *)(gen_frame + 0x38)) = ((char *)REFP(0x10acf74));
                      (*(undefined4 *)(gen_frame + 0x3c)) = 0xf;
                      (*(char * PTR32 *)(gen_frame + 0x40)) = ((char *)REFP(0x10acfa0));
                      (*(undefined4 *)(gen_frame + 0x44)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x48)) = ((char *)REFP(0x10acfd0));
                      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)REFP(0x10acffc));
                      uVar5 = 0;
                      do {
                        if (uVar5 == 0) {
                          uVar2 = F_00688160(((undefined *)GEN_TOP(((int)pvVar6 + 0x234))) GEN_EDX_ARG,0,((char * PTR32 *)(gen_frame + 0x14)),0);
                        }
                        else {
                          uVar2 = F_00688330(((undefined *)GEN_TOP(((int)pvVar6 + 0x234))) GEN_EDX_ARG,uVar5,
                                               ((char * PTR32 *)(gen_frame + 0x14)) + uVar5 * 2,0);
                        }
                        if (uVar2 == 0) {
                          return 0;
                        }
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 8);
                      pcVar3 = ((char *)REFP(0x10ad028));
                      if ((*((byte *)GEN_TOP(((int)pvVar6 + 0x1508))) & 4) == 0) {
                        pcVar3 = ((char *)REFP(0x10ad054));
                      }
                      ((char * PTR32 *)(gen_frame + 0x24))[0] = ((char *)GEN_TOP(0x0));
                      ((char * PTR32 *)(gen_frame + 0x24))[1] = pcVar3;
                      ((char * PTR32 *)(gen_frame + 0x24))[2] = ((char *)GEN_TOP(0x0));
                      ((char * PTR32 *)(gen_frame + 0x24))[3] = ((char *)REFP(0x10ad07c));
                      (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x0));
                      (*(char * PTR32 *)(gen_frame + 0x38)) = "shader/posteffect/CameraMotionBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x40)) = "shader/posteffect/CameraMotionBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x44)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x48)) = "shader/posteffect/CameraMotionBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)REFP(0x10ad118));
                      uVar5 = 0;
                      do {
                        if (uVar5 == 0) {
                          uVar2 = F_00688240(((undefined *)GEN_TOP(((int)pvVar6 + 0x254))) GEN_EDX_ARG,0,((char * PTR32 *)(gen_frame + 0x24)),0);
                        }
                        else {
                          uVar2 = F_00688330(((undefined *)GEN_TOP(((int)pvVar6 + 0x254))) GEN_EDX_ARG,uVar5,
                                               ((char * PTR32 *)(gen_frame + 0x24)) + uVar5 * 2,0);
                        }
                        if (uVar2 == 0) {
                          return 0;
                        }
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 6);
                      ((char * PTR32 *)(gen_frame + 0x24))[2] = ((char *)GEN_TOP(0x0));
                      ((char * PTR32 *)(gen_frame + 0x24))[3] = "shader/posteffect/Default.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x0));
                      (*(char * PTR32 *)(gen_frame + 0x38)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x40)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x44)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x48)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)REFP(0x10ad1d4));
                      (*(char * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x274)));
                      uVar5 = 0;
                      ppcVar8 = ((char * PTR32 *)(gen_frame + 0x24));
                      do {
                        ppcVar8 = ((char * PTR32 *)GEN_TOP(((int)ppcVar8 + 8)));
                        uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar5,ppcVar8,0);
                        if (uVar2 == 0) {
                          return 0;
                        }
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 5);
                      ((char * PTR32 *)(gen_frame + 0x24))[0] = ((char *)GEN_TOP(0x0));
                      ((char * PTR32 *)(gen_frame + 0x24))[1] = ((char *)REFP(0x10ad1f8));
                      ((char * PTR32 *)(gen_frame + 0x24))[2] = ((char *)GEN_TOP(0x0));
                      ((char * PTR32 *)(gen_frame + 0x24))[3] = "shader/posteffect/RadialBlur.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x0));
                      (*(char * PTR32 *)(gen_frame + 0x38)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x40)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x44)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x48)) = ((char *)REFP(0x10ad280));
                      (*(undefined4 *)(gen_frame + 0x4c)) = 0xf;
                      (*(char * PTR32 *)(gen_frame + 0x50)) = ((char *)REFP(0x10ad2a4));
                      uVar5 = 0;
                      ppcVar8 = ((char * PTR32 *)(gen_frame + 0x24));
                      do {
                        uVar2 = F_00688330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x294))) GEN_EDX_ARG,uVar5,ppcVar8,0);
                        if (uVar2 == 0) {
                          return 0;
                        }
                        uVar5 = uVar5 + 1;
                        ppcVar8 = ppcVar8 + 2;
                      } while (uVar5 < 6);
                      (*(undefined4 *)(gen_frame + 0x8)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x10ad2d0));
                      uVar5 = F_00688330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x2b4))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
                      if (uVar5 != 0) {
                        (*(undefined4 *)(gen_frame + 0x44)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x48)) = ((char *)REFP(0x10ad2f4));
                        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x50)) = "shader/posteffect/AlphaTest.shcd";
                        uVar5 = 0;
                        puVar7 = &(*(undefined4 *)(gen_frame + 0x44));
                        do {
                          uVar2 = F_00688330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x2d4))) GEN_EDX_ARG,uVar5,puVar7,0);
                          if (uVar2 == 0) {
                            return 0;
                          }
                          uVar5 = uVar5 + 1;
                          puVar7 = puVar7 + 2;
                        } while (uVar5 < 2);
                        (*(undefined4 *)(gen_frame + 0x44)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x48)) = "shader/posteffect/Default.shcd";
                        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x50)) = "shader/posteffect/Default.shcd";
                        (*(char * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x314)));
                        uVar5 = 0;
                        puVar7 = &(*(undefined4 *)(gen_frame + 0x44));
                        do {
                          uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar5,puVar7,0);
                          if (uVar2 == 0) {
                            return 0;
                          }
                          uVar5 = uVar5 + 1;
                          puVar7 = puVar7 + 2;
                        } while (uVar5 < 2);
                        (*(char * PTR32 *)(gen_frame + 0x34)) = ((char *)GEN_TOP(0x0));
                        (*(char * PTR32 *)(gen_frame + 0x38)) = ((char *)REFP(0x10ad37c));
                        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x40)) = "shader/posteffect/QueryWeight.shcd";
                        (*(undefined4 *)(gen_frame + 0x44)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x48)) = "shader/posteffect/QueryWeight.shcd";
                        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x50)) = "shader/posteffect/QueryWeight.shcd";
                        uVar5 = 0;
                        ppcVar8 = ((char * PTR32 *)(gen_frame + 0x24)) + 4;
                        do {
                          uVar2 = F_00688330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x334))) GEN_EDX_ARG,uVar5,ppcVar8,0);
                          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
                          if (uVar2 == 0) {
                            return 0;
                          }
                          uVar5 = uVar5 + 1;
                          ppcVar8 = ppcVar8 + 2;
                        } while (uVar5 < 4);
                        (*(undefined4 *)(gen_frame + 0x8)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0xc)) = "shader/posteffect/QueryWeight.shcd";
                        uVar5 = F_00688330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x354))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x8)),0);
                        if (uVar5 != 0) {
                          bVar1 = F_0067d150(pvVar6 GEN_EDX_ARG);
                          return bVar1 != 0;
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
  return 0;
}

/* ref: FUN_0067fb80 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0067fb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x67fb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x138, 8, 4);
  byte * pbVar1;
  undefined * pvVar2;
  float fVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  int * piVar6;
  int * piVar7;
  double dVar8;
  byte bVar9;
  float * pfVar10;
  float fVar11;
  undefined3 extraout_var = 0;
  uint * puVar12;
  undefined3 extraout_var_00 = 0;
  int iVar13;
  int iVar14;
  float * pfVar15;
  undefined4 uVar16;
  uint uVar17;
  float10 fVar18;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x130)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x134));
  (*(int *)(gen_frame + 0x84)) = REFG(int, 0x1371288);
  fVar11 = 0.0;
  if (REFG(int, 0x1371288) != 0) {
    if (((*((byte *)GEN_TOP(((int)this + 0x1510))) & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD), bVar9 != 0)) {
      dVar8 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      (*(float *)(gen_frame + 0xa8)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1488)))
                  );
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 1;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 1 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG), bVar9 != 0)) {
      dVar8 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *((undefined4 *)GEN_TOP(((int)this + 0x146c)));
      (*(float *)(gen_frame + 0xa8)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      pvVar2 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x38)))));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2 GEN_EDX_ARG,"sInput",*((undefined4 *)GEN_TOP(((int)this + 0x146c))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x38))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1458)))
                  );
      *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x38))) + 0x30))) = 0x7080541;
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 2;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 2 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG), bVar9 != 0)) {
      fVar11 = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x58))))) GEN_EDX_ARG,"sDepth",uVar16,((float *)(gen_frame + 0xac)));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x146c)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x58))))) GEN_EDX_ARG,((char *)REFP(0x10ad594)),uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x58))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14c0)))
                  );
      ((float *)(gen_frame + 0x88))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[0], REFG(float, 0x1099848));
      ((float *)(gen_frame + 0x88))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[1], REFG(float, 0x1099848));
      ((float *)(gen_frame + 0x88))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[2], REFG(float, 0x1094808));
      ((float *)(gen_frame + 0x88))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[3], REFG(float, 0x1099848));
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1099848);
      (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x1094808);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1094808);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1094808);
      pfVar10 = ((float *)(gen_frame + 0xac));
      pfVar15 = ((float *)(gen_frame + 0x88));
      for (iVar13 = 8; pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 4))), iVar13 != 0; iVar13 = iVar13 - 1) {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x58))))) GEN_EDX_ARG,((float *)(gen_frame + 0xac)) + 1,4);
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 4;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 3 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG), bVar9 != 0)) {
      fVar11 = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x14c0)));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x78)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG,"sDepthNormalZ",uVar16,((float *)(gen_frame + 0xac)));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1468)));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x78)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG,"sDepth",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x78))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1494)))
                  );
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + 4)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(pvVar2 GEN_EDX_ARG,"sInput",*((undefined4 *)GEN_TOP(((int)this + 0x14a8))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1494))))
      ;
      *((undefined1 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + 4))) + 0x30))) = REFP(0x00a00101);
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      iVar13 = *((int *)GEN_TOP(((int)this + 0x78)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((iVar13 + 8))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1494))))
      ;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + 8))) + 0x30))) = 0xa88101;
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 8;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 4 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG), bVar9 != 0)) {
      dVar8 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      (*(float *)(gen_frame + 0xa8)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x98))))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x98))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1488)))
                  );
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x10;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 5 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG), bVar9 != 0)) {
      dVar8 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      fVar11 = gen_bits2f((int)dVar8);
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      pvVar2 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xb8)))));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2 GEN_EDX_ARG,"sInput",*((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xb8))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x148c)))
                  );
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x148c)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 4))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14a0))))
      ;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x14a0)));
      iVar13 = *((int *)GEN_TOP(((int)this + 0xb8)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((iVar13 + 8))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14ac))))
      ;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 0xc)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2 GEN_EDX_ARG,"sInput",*((undefined4 *)GEN_TOP(((int)this + 0x14ac))),((float *)(gen_frame + 0xac)));
      iVar13 = *((int *)GEN_TOP(((int)this + 0xb8)));
      uVar16 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar13 + 0xc))) + 0x50)));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((iVar13 + 0x10))) GEN_EDX_ARG,"sToneMap",uVar16,((float *)(gen_frame + 0xac)));
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x20;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 6 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0xd4))) GEN_EDX_ARG), bVar9 != 0)) {
      dVar8 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      (*(int * PTR32 *)(gen_frame + 0x80)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 0x10))) + 0x7c)));
      fVar11 = gen_bits2f((int)dVar8);
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xd8)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d450(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xd8)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG,"sToneMap",(*(int * PTR32 *)(gen_frame + 0x80)),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xd8))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1488)))
                  );
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x40;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 7 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0xf4))) GEN_EDX_ARG), bVar9 != 0)) {
      dVar8 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      *((undefined4 *)GEN_TOP(((int)this + 0x100))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      (*(float *)(gen_frame + 0xa8)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xf8))))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xf8))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1460)))
                  );
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x80;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 8 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x114))) GEN_EDX_ARG), bVar9 != 0)) {
      dVar8 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      *((undefined4 *)GEN_TOP(((int)this + 0x120))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      (*(float *)(gen_frame + 0xa8)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      pvVar2 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x118)))));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2 GEN_EDX_ARG,"sInput",*((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x118))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1498))));
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x100;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 9 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x134))) GEN_EDX_ARG), bVar9 != 0)) {
      dVar8 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      *((undefined4 *)GEN_TOP(((int)this + 0x140))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      fVar11 = gen_bits2f((int)dVar8);
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1498)));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x138)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1494)));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x138)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG,"sGeometry",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x138))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x149c))));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 4)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2 GEN_EDX_ARG,"sInput",*((undefined4 *)GEN_TOP(((int)this + 0x149c))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14a8)))
                  );
      iVar13 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 4)));
      pbVar1 = ((byte *)GEN_TOP((iVar13 + 0x48)));
      *pbVar1 = *pbVar1 | 1;
      *((undefined4 *)GEN_TOP((iVar13 + 0x34))) = 0;
      iVar13 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 4)));
      *((undefined2 *)GEN_TOP((iVar13 + 0x3c))) = 0xffff;
      *((undefined2 *)GEN_TOP((iVar13 + 0x3e))) = 0xffff;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x14a8)));
      iVar13 = *((int *)GEN_TOP(((int)this + 0x138)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x26a);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((iVar13 + 8))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14b4)))
                  );
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 0xc)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x26a);
      F_0067d450(pvVar2 GEN_EDX_ARG,"sInput",*((undefined4 *)GEN_TOP(((int)this + 0x14a8))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 0xc))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a4))));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x14b4)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 0x10))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x14a4)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 0x10))) GEN_EDX_ARG,"sMerge1",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 0x10))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))));
      ((float *)(gen_frame + 0x38))[0] = 0.0;
      ((float *)(gen_frame + 0x38))[1] = 0.0;
      ((float *)(gen_frame + 0x38))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x38))[2], REFG(float, 0x10adb80));
      ((float *)(gen_frame + 0x38))[3] = 0.0;
      ((float *)(gen_frame + 0x38))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x38))[4], REFG(float, 0x10adb7c));
      (*(float *)(gen_frame + 0x4c)) = 0.0;
      (*(float *)(gen_frame + 0x50)) = 0.0;
      (*(float *)(gen_frame + 0x54)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x58)) = 0.0;
      (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x70)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x74)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x78)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x10adb7c);
      pfVar10 = ((float *)(gen_frame + 0xac));
      pfVar15 = ((float *)(gen_frame + 0x38));
      for (iVar13 = 0x12; pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 4))), iVar13 != 0; iVar13 = iVar13 - 1)
      {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 4))) GEN_EDX_ARG,((float *)(gen_frame + 0xac)) + 1,9);
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x200;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 10 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x154))) GEN_EDX_ARG), bVar9 != 0)) {
      if ((*((uint *)GEN_TOP(((int)this + 0x1508))) & 0x400) == 0) {
        uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x149c)));
      }
      else {
        uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x148c)));
      }
      (*(float *)(gen_frame + 0xa8)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      ((float *)(gen_frame + 0xac))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xa8));
      if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
        pfVar10 = ((float *)(gen_frame + 0xac));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      ((float *)(gen_frame + 0xac))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xac));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xa8));
      }
      uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x14a8)));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x158)));
      ((float *)(gen_frame + 0xac))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG,"sInput",uVar5,((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x158))))) GEN_EDX_ARG,0,uVar16);
      *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x158))) + 0x30))) = 0x7080111;
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 4))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1458)))
                  );
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 4))) + 0x30))) = 0x7080111;
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x400;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0xb & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x174))) GEN_EDX_ARG), bVar9 != 0)) {
      *((undefined4 *)GEN_TOP(((int)this + 0x180))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x178))))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x178))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x178))) + 4))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x178))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1458)))
                  );
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x800;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0xc & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x194))) GEN_EDX_ARG), bVar9 != 0)) {
      uVar16 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x198)));
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1090708);
      F_006775f0(uVar16 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x98)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x198))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))));
      uVar16 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 4)));
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1090708);
      F_006775f0(uVar16 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x98)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14a8)))
                  );
      uVar16 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 8)));
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1090708);
      F_006775f0(uVar16 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x98)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14a8)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0xc))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0xc))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))));
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0xc))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1464)))
                  );
      *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0xc))) + 8))) + 0x20))) = GEN_FLT_TO(*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0xc))) + 8))) + 0x20))), REFG(float, 0x1087f04));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x198))) + 0xc))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x1000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0xd & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x1b4))) GEN_EDX_ARG), bVar9 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1b8))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))));
      F_00676250(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1b8))))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1464))))
      ;
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x2000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0xe & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x1d4))) GEN_EDX_ARG), bVar9 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,0,0,2,9,(float)(float10)0,0,0,0);
      iVar13 = (*(int *)(gen_frame + 0x84));
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1d8))))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x84)) + 0x58))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1d8))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((iVar13 + 0x8c))));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1d8)));
      ((float *)(gen_frame + 0x88))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[0], REFG(float, 0x1090708));
      ((float *)(gen_frame + 0x88))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[1], REFG(float, 0x109cab8));
      ((float *)(gen_frame + 0x88))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[2], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0x88))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[3], REFG(float, 0x1088068));
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1087f04);
      pfVar10 = ((float *)(gen_frame + 0xac));
      pfVar15 = ((float *)(gen_frame + 0x88));
      for (iVar13 = 8; pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 4))), iVar13 != 0; iVar13 = iVar13 - 1) {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG,((float *)(gen_frame + 0xac)) + 1,4);
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x4000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0xf & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 500))) GEN_EDX_ARG), bVar9 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1f8))))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x145c))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1f8))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))));
      *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f8))) + 0x30))) = 0x7808511;
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 4))) GEN_EDX_ARG,&REFG(undefined, 0x10ad690),
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14a4)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 8))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x145c))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1458)))
                  );
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1464))));
      *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 8))) + 8))) + 0x20))) = GEN_FLT_TO(*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 8))) + 8))) + 0x20))), REFG(float, 0x1087f04));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 8))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 8))) + 0x30))) = 0x7800511;
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 0xc))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a4))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 0xc))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))));
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 0xc))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1464)))
                  );
      *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 0xc))) + 8))) + 0x20))) = GEN_FLT_TO(*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 0xc))) + 8))) + 0x20))), REFG(float, 0x1087f04));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 0xc))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 0xc))) + 0x30))) = 0x7080111;
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x8000;
    }
    if (((*((byte *)GEN_TOP(((int)this + 0x1512))) & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x214))) GEN_EDX_ARG), bVar9 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x218))))) GEN_EDX_ARG,"sDepth",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1464))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x218))))) GEN_EDX_ARG,&REFG(undefined, 0x10ad6b0),
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x218))))) GEN_EDX_ARG,"sGeometry",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1494))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x218))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))));
      *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x218))) + 0x30))) = 0x7800541;
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x10000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x11 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x234))) GEN_EDX_ARG), bVar9 != 0)) {
      *((undefined4 *)GEN_TOP(((int)this + 0x240))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x238))))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x238))))) GEN_EDX_ARG,"sGeometry",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1494))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x238))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 4))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x148c)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 8))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x148c))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14a0)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0xc))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0xc))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x149c))));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0xc))) GEN_EDX_ARG,1,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a0))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x10))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a0))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x10))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x14))) GEN_EDX_ARG,"sNear",
                   *((undefined4 *)GEN_TOP(((int)this + 0x149c))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x14))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a4))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x18))) GEN_EDX_ARG,&REFG(undefined, 0x10ad700),
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x18))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x18))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))));
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x18))) + 0x30))) = 0x7080011;
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x1c))) GEN_EDX_ARG,"sNear",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a4))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x1c))) GEN_EDX_ARG,&REFG(undefined, 0x10ad718),
                   *((undefined4 *)GEN_TOP(((int)this + 0x14a8))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x1c))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x1c))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))));
      fVar3 = REFG(float, 0x1099848);
      fVar11 = REFG(float, 0x1094808);
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x1c))) + 0x30))) = 0x7080011;
      ((float *)(gen_frame + 0x88))[0] = fVar3;
      ((float *)(gen_frame + 0x88))[1] = fVar3;
      ((float *)(gen_frame + 0x88))[2] = fVar11;
      ((float *)(gen_frame + 0x88))[3] = fVar3;
      (*(float *)(gen_frame + 0x98)) = fVar3;
      (*(float *)(gen_frame + 0x9c)) = fVar11;
      (*(float *)(gen_frame + 0xa0)) = fVar11;
      (*(float *)(gen_frame + 0xa4)) = fVar11;
      pfVar10 = ((float *)(gen_frame + 0xac));
      pfVar15 = ((float *)(gen_frame + 0x88));
      for (iVar13 = 8; pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 4))), iVar13 != 0; iVar13 = iVar13 - 1) {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0xc))) GEN_EDX_ARG,((float *)(gen_frame + 0xac)) + 1,4);
      iVar13 = *((int *)GEN_TOP(((int)this + 0x238)));
      ((float *)(gen_frame + 0x88))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[0], REFG(float, 0x109cab8));
      ((float *)(gen_frame + 0x88))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[1], REFG(float, 0x109cab8));
      ((float *)(gen_frame + 0x88))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[2], REFG(float, 0x1088068));
      ((float *)(gen_frame + 0x88))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x88))[3], REFG(float, 0x109cab8));
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1088068);
      pfVar10 = ((float *)(gen_frame + 0xac));
      pfVar15 = ((float *)(gen_frame + 0x88));
      for (iVar14 = 8; pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 4))), iVar14 != 0; iVar14 = iVar14 - 1) {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((iVar13 + 0x10))) GEN_EDX_ARG,((float *)(gen_frame + 0xac)) + 1,4);
      F_00675e70(((float *)(gen_frame + 0xac)) + 1);
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x14))) GEN_EDX_ARG,((float *)(gen_frame + 0xac)) + 1,0x10);
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x20000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x12 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x254))) GEN_EDX_ARG), bVar9 != 0)) {
      *((undefined4 *)GEN_TOP(((int)this + 0x260))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 600))))) GEN_EDX_ARG,"sDepth",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1464))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 600))))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14b8))))
      ;
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 4))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 4))) GEN_EDX_ARG,"sVelocity",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14b8))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x148c))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 8))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x148c))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 8))) GEN_EDX_ARG,"sVelocity",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14b8))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1490))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0xc))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1490))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0xc))) GEN_EDX_ARG,"sVelocity",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14b8))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0xc))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x148c)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0x10))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x148c))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0x10))) GEN_EDX_ARG,"sVelocity",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14b8))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0x10))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1490))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0x14))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0x14))) GEN_EDX_ARG,((char *)REFP(0x10ad788)),
                   *((undefined4 *)GEN_TOP(((int)this + 0x1490))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 600))) + 0x14))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))));
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x40000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x13 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x274))) GEN_EDX_ARG), bVar9 != 0)) {
      *((undefined4 *)GEN_TOP(((int)this + 0x280))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x278))))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x278))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x148c))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 4))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x148c))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1490)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 8))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1490))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x148c)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 0xc))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x148c))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 0xc))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1490))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 0x10))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 0x10))) GEN_EDX_ARG,"sMerge1",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1490))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x278))) + 0x10))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1488))));
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x80000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x14 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x294))) GEN_EDX_ARG), bVar9 != 0)) {
      if ((*((uint *)GEN_TOP(((int)this + 0x1508))) >> 10 & 1) == 0) {
        (*(float *)(gen_frame + 0x9c)) = *((float *)GEN_TOP(((int)this + 0x149c)));
        uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x14a0)));
        (*(float *)(gen_frame + 0xa4)) = *((float *)GEN_TOP(((int)this + 0x14a4)));
      }
      else {
        (*(float *)(gen_frame + 0x9c)) = *((float *)GEN_TOP(((int)this + 0x148c)));
        uVar16 = *((undefined4 *)GEN_TOP(((int)this + 0x1490)));
        (*(float *)(gen_frame + 0xa4)) = *((float *)GEN_TOP(((int)this + 0x1498)));
      }
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x298))))) GEN_EDX_ARG,"sGeometry",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1494))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x298))))) GEN_EDX_ARG,0,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x9c)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 4))) GEN_EDX_ARG,"sInput",
                   (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x9c))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 4))) GEN_EDX_ARG,0,uVar16);
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 8))) GEN_EDX_ARG,"sInput",uVar16,((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 8))) GEN_EDX_ARG,0,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa4))))
      ;
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0xc))) GEN_EDX_ARG,"sInput",
                   (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa4))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0xc))) GEN_EDX_ARG,0,uVar16);
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0x10))) GEN_EDX_ARG,"sMerge1",uVar16,((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0x10))) GEN_EDX_ARG,((char *)REFP(0x10ad7ec)),
                   (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa4))),((float *)(gen_frame + 0xac)));
      fVar11 = (*(float *)(gen_frame + 0x9c));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0x10))) GEN_EDX_ARG,0,
                   (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x9c))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,2,2,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0x14))) GEN_EDX_ARG,"sInput",
                   (undefined4)gen_fl2bits(fVar11),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0x14))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1478))));
      if ((*((byte *)GEN_TOP(((int)this + 0x1508))) & 0x18) != 0) {
        iVar13 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0x14)));
        pbVar1 = ((byte *)GEN_TOP((iVar13 + 0x48)));
        *pbVar1 = *pbVar1 | 1;
        *((undefined4 *)GEN_TOP((iVar13 + 0x34))) = 0;
      }
      ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[1], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x0))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[2], REFG(float, 0x10ac274));
      ((float *)(gen_frame + 0x0))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[3], REFG(float, 0x10adb78));
      (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x20)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x28)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x30)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x34)) = REFG(float, 0x10ac274);
      ((float *)(gen_frame + 0x38))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x38))[0], REFG(float, 0x10adb74));
      ((float *)(gen_frame + 0x38))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x38))[1], REFG(float, 0x10ac274));
      ((float *)(gen_frame + 0x38))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x38))[2], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x38))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x38))[3], REFG(float, 0x10ac160));
      ((float *)(gen_frame + 0x38))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x38))[4], REFG(float, 0x10ac274));
      (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x50)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x54)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x58)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x70)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x74)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x78)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x10adb74);
      pfVar10 = ((float *)(gen_frame + 0xac));
      pfVar15 = ((float *)(gen_frame + 0x0));
      for (iVar13 = 0x20; pfVar10 = ((float *)GEN_TOP(((int)pfVar10 + 4))), iVar13 != 0; iVar13 = iVar13 - 1)
      {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x298))) + 0x14))) GEN_EDX_ARG,((float *)(gen_frame + 0xac)) + 1,0x10);
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x100000;
      F_006879b0(((undefined *)GEN_TOP(((int)this + 0x374))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1478))));
      F_006879e0(((undefined *)GEN_TOP(((int)this + 0x374))) GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x9c))));
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x15 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_ARG), bVar9 != 0)) {
      *((undefined4 *)GEN_TOP(((int)this + 0x2c0))) = *((undefined4 *)GEN_TOP(((int)this + 0x1458)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2b8))))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x1458))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2b8))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x1460))));
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x200000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x16 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x2d4))) GEN_EDX_ARG), bVar9 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2d8))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x149c))));
      uVar16 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2d8)));
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1090708);
      F_006775f0(uVar16 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x98)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2d8))) + 4))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((int)this + 0x149c))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2d8))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1460)))
                  );
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2d8))) + 4))) + 0x30))) = 0x7a80541;
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x400000;
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x17 & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x2f4))) GEN_EDX_ARG), bVar9 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2f8))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14b8))));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x2f8))))) GEN_EDX_ARG,1,
                   *((undefined4 *)GEN_TOP(((int)this + 0x14bc))));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,2,2,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + 4))) GEN_EDX_ARG,"sDepthNormalZ",
                   *((undefined4 *)GEN_TOP(((int)this + 0x14c0))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x14b8)))
                  );
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + 4))) GEN_EDX_ARG,1,*((undefined4 *)GEN_TOP(((int)this + 0x14bc)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + 8))) GEN_EDX_ARG,((char *)REFP(0x10ad81c)),
                   *((undefined4 *)GEN_TOP(((int)this + 0x14b8))),((float *)(gen_frame + 0xac)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + 8))) GEN_EDX_ARG,((char *)REFP(0x10ad82c)),
                   *((undefined4 *)GEN_TOP(((int)this + 0x14bc))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x1498)))
                  );
      ((float *)(gen_frame + 0xac))[1] = 0.0;
      ((float *)(gen_frame + 0xac))[2] = GEN_FLT_TO(((float *)(gen_frame + 0xac))[2], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0xac))[3] = GEN_FLT_TO(((float *)(gen_frame + 0xac))[3], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0xac))[4] = GEN_FLT_TO(((float *)(gen_frame + 0xac))[4], REFG(float, 0x1087f04));
      (*(float *)(gen_frame + 0xc0)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0xc4)) = 0;
      (*(undefined4 *)(gen_frame + 0xc8)) = 0;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + 4))) GEN_EDX_ARG,((float *)(gen_frame + 0xac)) + 1,4);
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x800000;
    }
    if (((*((byte *)GEN_TOP(((int)this + 0x1513))) & 1) == 0) &&
       (bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x314))) GEN_EDX_ARG), bVar9 != 0)) {
      if ((*((byte *)GEN_TOP(((int)this + 0x1508))) & 0x18) != 0) {
        iVar13 = **((int * PTR32 *)GEN_TOP(((int)this + 0x318)));
        pbVar1 = ((byte *)GEN_TOP((iVar13 + 0x48)));
        *pbVar1 = *pbVar1 | 1;
        *((undefined4 *)GEN_TOP((iVar13 + 0x34))) = 0;
      }
      fVar18 = (float10)*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x147c))) + 0x18)));
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x147c))) + 0x18))) < 0) {
        fVar18 = GEN_X87(fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(float *)(gen_frame + 0xa8)) = (float)((float10)1 / fVar18);
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x318))))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x84)) + 0x58))),((float *)(gen_frame + 0xac)));
      F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x318))))) GEN_EDX_ARG,0,
                   *((undefined4 *)GEN_TOP(((int)this + 0x147c))));
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x318)));
      (*(float *)(gen_frame + 0x9c)) = 0.0;
      (*(float *)(gen_frame + 0x98)) = (float)((float10)*(double *)&REFG(undefined, 0x108bec8) * (float10)(*(float *)(gen_frame + 0xa8)));
      (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0xa8));
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1087f04);
      F_00677590(*puVar4 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x98)));
      F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x318))) + 4))) GEN_EDX_ARG,"sInput",
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 0x10))) + 0x60))),((float *)(gen_frame + 0xac)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x318))) + 4))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP(((int)this + 0x147c)))
                  );
      (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0xa8));
      (*(float *)(gen_frame + 0x9c)) = 0.0;
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa0)) = (float)((float10)(*(float *)(gen_frame + 0xa8)) + (float10)(*(float *)(gen_frame + 0xa8)));
      F_00677590(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x318))) + 4))) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x98)));
      *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x1000000;
    }
    fVar11 = gen_bits2f(*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x19);
    if (((uint)gen_fl2bits(fVar11) & 1) == 0) {
      bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x334))) GEN_EDX_ARG);
      fVar11 = gen_bits2f(CONCAT31(extraout_var,bVar9));
      if (bVar9 != 0) {
        F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
        iVar13 = (*(int *)(gen_frame + 0x84));
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x338))) + 4))) GEN_EDX_ARG,"sInput",
                     *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x84)) + 0x58))),((float *)(gen_frame + 0xac)));
        F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x338))) + 8))) GEN_EDX_ARG,"sInput",
                     *((undefined4 *)GEN_TOP((iVar13 + 0x58))),((float *)(gen_frame + 0xac)));
        F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x338))) + 0xc))) GEN_EDX_ARG,"sInput",
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 0x10))) + 0x60))),((float *)(gen_frame + 0xac)));
        uVar17 = 0;
        (*(float *)(gen_frame + 0xa8)) = 1.4013e-45;
        do {
          F_006761f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x338))) + uVar17 * 4))) GEN_EDX_ARG,0,
                       *((undefined4 *)GEN_TOP(((int)this + 0x1480))));
          ((float *)(gen_frame + 0xac))[0] = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x338))) + uVar17 * 4)));
          piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1484)));
          (*(int * PTR32 *)(gen_frame + 0x80)) = piVar6;
          if (piVar6 != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
          }
          piVar6 = *((int * PTR32 *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0xac))[0]) + 0x28)));
          if (piVar6 != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
          }
          *((int * PTR32 *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0xac))[0]) + 0x28))) = (*(int * PTR32 *)(gen_frame + 0x80));
          puVar12 = &REFG(undefined4, 0x1302350);
          if ((*((byte *)GEN_TOP(((int)this + 0x1508))) & 0x40) == 0) {
            puVar12 = &REFG(undefined4, 0x1302358);
          }
          *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x338))) + uVar17 * 4))) + 0x30))) =
               *puVar12 & 0x7ffffff;
          fVar11 = REFG(float, 0x1088068);
          if (uVar17 == 0) {
            *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x338))) + 0x2c))) = 0x1f;
          }
          else {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x338))) + uVar17 * 4))) + 0x2c))) = 0x11;
            uVar16 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x338))) + uVar17 * 4)));
            (*(float *)(gen_frame + 0x98)) = fVar11;
            (*(float *)(gen_frame + 0x9c)) = fVar11;
            (*(float *)(gen_frame + 0xa0)) = fVar11;
            (*(float *)(gen_frame + 0xa4)) = fVar11;
            F_006775f0(uVar16 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x98)));
            *((uint *)GEN_TOP(((int)this + 0x350))) =
                 ~(uint)gen_fl2bits((*(float *)(gen_frame + 0xa8))) & *((uint *)GEN_TOP(((int)this + 0x350))) |
                 0 << ((byte)uVar17 & 0x1f);
          }
          uVar17 = uVar17 + 1;
          fVar11 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xa8))) << 1 |
                              (uint)((int)gen_fl2bits((*(float *)(gen_frame + 0xa8))) < 0));
          (*(float *)(gen_frame + 0xa8)) = fVar11;
        } while (uVar17 < 4);
        *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x2000000;
      }
    }
    if ((*((uint *)GEN_TOP(((int)this + 0x1510))) >> 0x1a & 1) == 0) {
      bVar9 = F_00677f90(((undefined *)GEN_TOP(((int)this + 0x354))) GEN_EDX_ARG);
      fVar11 = gen_bits2f(CONCAT31(extraout_var_00,bVar9));
      if (bVar9 != 0) {
        F_004d4af0(((float *)(gen_frame + 0xac)) GEN_EDX_ARG,1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x358))))) GEN_EDX_ARG,"sInput",
                     *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x84)) + 0x58))),((float *)(gen_frame + 0xac)));
        F_006761f0(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x358))))) GEN_EDX_ARG,0,
                     *((undefined4 *)GEN_TOP(((int)this + 0x1480))));
        piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1484)));
        ((float *)(gen_frame + 0xac))[0] = **((float * PTR32 *)GEN_TOP(((int)this + 0x358)));
        if (piVar6 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
        }
        piVar7 = *((int * PTR32 *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0xac))[0]) + 0x28)));
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG);
        }
        *((int * PTR32 *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0xac))[0]) + 0x28))) = piVar6;
        *((uint *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x358))) + 0x30))) = REFG(undefined4, 0x1302358) & 0x7ffffff;
        fVar11 = **((float * PTR32 *)GEN_TOP(((int)this + 0x358)));
        *((undefined4 *)GEN_TOP(((int)gen_fl2bits(fVar11) + 0x2c))) = 0x11;
        *((uint *)GEN_TOP(((int)this + 0x1510))) = *((uint *)GEN_TOP(((int)this + 0x1510))) | 0x4000000;
      }
    }
    fVar3 = REFG(float, 0x137127c);
    if (*((int *)GEN_TOP(((int)this + 0x1510))) == -1) {
      *((uint *)GEN_TOP(((int)gen_fl2bits(REFG(float, 0x137127c)) + 0x11e44U))) =
           *((uint *)GEN_TOP(((int)gen_fl2bits(REFG(float, 0x137127c)) + 0x11e44U))) | 8;
      fVar11 = fVar3;
    }
  }
  return (uint)gen_fl2bits(fVar11);
}

/* ref: FUN_00682f10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00682f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x682f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x1c, 4);
  undefined4 uVar1;
  undefined * pvVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  int * PTR32 * ppiVar7;
  int * piVar8;
  int * piVar9;
  int * piVar10;
  int iVar11;
  
  iVar11 = REFG(int, 0x1371288);
  if (*((int *)GEN_TOP(((int)this + 0x1510))) == -1) {
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
    *((undefined4 *)GEN_TOP((REFG(int, 0x1371288) + 0x16c))) = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP((iVar11 + 300))) = piVar6;
    (*(int *)(gen_frame + 0x4)) = iVar11;
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 2 & 1) != 0) {
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x194))) GEN_EDX_FWD,piVar6);
    }
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 3 & 1) != 0) {
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x1b4))) GEN_EDX_ARG,piVar6);
    }
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 10 & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0x114))) GEN_EDX_ARG,piVar6);
    }
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 4 & 1) != 0) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 8)));
      if (piVar6 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
      }
      piVar8 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x8))[6]));
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
      if (piVar8 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
      }
      piVar8 = piVar9 + 6;
      *piVar8 = (int)piVar6;
      *((undefined1 *)GEN_TOP(((int)piVar9 + 0x42))) = 0;
      uVar5 = 0;
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar8;
      do {
        if (*piVar8 == 0) break;
        *((char *)GEN_TOP(((int)piVar9 + 0x42))) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + 1;
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar8;
      } while (uVar5 < 4);
      (*(int * PTR32 *)(gen_frame + 0x8)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1f8))) + 0xc)));
      if (piVar6 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
      }
      piVar8 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x8))[6]));
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
      if (piVar8 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x8));
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9 + 6;
      *(*(int * PTR32 *)(gen_frame + 0x8)) = (int)piVar6;
      *((undefined1 *)GEN_TOP(((int)piVar9 + 0x42))) = 0;
      uVar5 = 0;
      do {
        if (*(*(int * PTR32 *)(gen_frame + 0x8)) == 0) break;
        *((char *)GEN_TOP(((int)piVar9 + 0x42))) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      } while (uVar5 < 4);
    }
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP((iVar11 + 0x130))) = piVar6;
    *((undefined4 *)GEN_TOP((iVar11 + 0x170))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP((iVar11 + 0x134))) = piVar6;
    *((undefined4 *)GEN_TOP((iVar11 + 0x174))) = uVar1;
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 6 & 1) != 0) {
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x214))) GEN_EDX_ARG,piVar6);
    }
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP((iVar11 + 0x138))) = piVar6;
    *((undefined4 *)GEN_TOP((iVar11 + 0x178))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP((iVar11 + 0x13c))) = piVar6;
    *((undefined4 *)GEN_TOP((iVar11 + 0x17c))) = uVar1;
    F_006765a0(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG,piVar6);
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 7 & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0x234))) GEN_EDX_ARG,piVar6);
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
      if (piVar6 == piVar8) {
        piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x238)))));
      if (piVar8 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 8))))(piVar8 GEN_EDX_ARG);
      }
      piVar9 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x8))[6]));
      piVar10 = (*(int * PTR32 *)(gen_frame + 0x8));
      if (piVar9 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xc))))(piVar9 GEN_EDX_ARG);
        piVar10 = (*(int * PTR32 *)(gen_frame + 0x8));
      }
      piVar9 = piVar10 + 6;
      *piVar9 = (int)piVar8;
      *((undefined1 *)GEN_TOP(((int)piVar10 + 0x42))) = 0;
      uVar5 = 0;
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9;
      do {
        if (*piVar9 == 0) break;
        *((char *)GEN_TOP(((int)piVar10 + 0x42))) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        piVar9 = piVar9 + 1;
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar9;
      } while (uVar5 < 4);
      piVar9 = ((int *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x1ff));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      if (0x1fe < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0xfffffe00));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 4))) GEN_EDX_ARG,"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0x8)));
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0xc));
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x1ff));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0xc))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0xfffffe00));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(pvVar2 GEN_EDX_ARG,"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0x8)));
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0xc));
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x1ff));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0xc))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0xfffffe00));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x18)));
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x25)));
      F_0067d450(pvVar2 GEN_EDX_ARG,"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0x8)));
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x1ff));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0xc))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0xfffffe00));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x8));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x25)));
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x238))) + 0x1c))) GEN_EDX_ARG,"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0x8)));
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x234))) GEN_EDX_ARG,piVar6);
      iVar11 = (*(int *)(gen_frame + 0x4));
    }
    piVar8 = piVar6;
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 8 & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0x254))) GEN_EDX_ARG,piVar6);
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
      if (piVar6 == piVar8) {
        piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
      }
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x254))) GEN_EDX_ARG,piVar8);
    }
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP((iVar11 + 0x140))) = piVar8;
    *((undefined4 *)GEN_TOP((iVar11 + 0x180))) = uVar1;
    piVar6 = piVar8;
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 9 & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0x274))) GEN_EDX_ARG,piVar8);
      piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
      if (piVar8 == piVar6) {
        piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
      }
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x274))) GEN_EDX_ARG,piVar6);
    }
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 0xd & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0xb4))) GEN_EDX_ARG,piVar6);
    }
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP((iVar11 + 0x144))) = piVar6;
    *((undefined4 *)GEN_TOP((iVar11 + 0x184))) = uVar1;
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 10 & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0x134))) GEN_EDX_ARG,piVar6);
    }
    if (((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 10 & 1) != 0) ||
       ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 0xb & 1) != 0)) {
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x154))) GEN_EDX_ARG,piVar6);
    }
    *((undefined4 *)GEN_TOP((iVar11 + 0x188))) = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP((iVar11 + 0x148))) = piVar6;
    piVar8 = piVar6;
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 0xd & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0xd4))) GEN_EDX_ARG,piVar6);
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
      if (piVar6 == piVar8) {
        piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
      }
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0xd4))) GEN_EDX_ARG,piVar8);
    }
    piVar6 = piVar8;
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 0xe & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,piVar8);
      piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
      if (piVar8 == piVar6) {
        piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
      }
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x94))) GEN_EDX_ARG,piVar6);
    }
    piVar8 = piVar6;
    if ((*((uint *)GEN_TOP(((int)this + 0x1514))) >> 0xf & 1) != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_ARG,piVar6);
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
      if (piVar6 == piVar8) {
        piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
      }
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_ARG,piVar8);
    }
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x1514))) >> 1;
    (*(byte *)(gen_frame + 0x17)) = (byte)(*((uint *)GEN_TOP(((int)this + 0x1514))) >> 0x11) & 1;
    piVar6 = ((int *)GEN_TOP(((-(uint)((uVar5 & 1) != 0) & 0xb) * 0x20 + 0x14 + (int)this)));
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
    F_006765a0(piVar6 GEN_EDX_ARG,piVar8);
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1458)));
    if ((uVar5 & 1) == 0) {
      if (piVar8 == piVar6) {
        piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
      }
    }
    else {
      if (piVar8 == piVar6) {
        piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1488)));
      }
      iVar11 = *((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x8))[1]));
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
      if (piVar6 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((iVar11 + 0x18)));
      if (piVar6 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      }
      piVar6 = ((int *)GEN_TOP((iVar11 + 0x18)));
      *piVar6 = (int)(*(int * PTR32 *)(gen_frame + 0x10));
      *((undefined1 *)GEN_TOP((iVar11 + 0x42))) = 0;
      uVar5 = 0;
      do {
        if (*piVar6 == 0) break;
        cVar3 = (char)uVar5;
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
        *((char *)GEN_TOP((iVar11 + 0x42))) = cVar3 + '\x01';
      } while (uVar5 < 4);
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x1ff));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x0));
      }
      piVar6 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar6;
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0xfffffe00));
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x0));
      if (-0x201 < (int)piVar6) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(*((undefined * PTR32 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x8))[1] + 4))) GEN_EDX_ARG,"sInput",(*(int * PTR32 *)(gen_frame + 0x10)),&(*(int * PTR32 *)(gen_frame + 0x0)));
      piVar6 = piVar8;
    }
    bVar4 = (*(byte *)(gen_frame + 0x17));
    if ((*(byte *)(gen_frame + 0x17)) == 0) {
      piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1460)));
    }
    F_006765f0((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,piVar6);
    F_006765f0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,piVar6);
    if ((*((byte *)GEN_TOP(((int)this + 0x1516))) & 1) != 0) {
      F_006765f0(((undefined *)GEN_TOP(((int)this + 0x2d4))) GEN_EDX_ARG,piVar6);
    }
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1464)));
    *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0x14c))) = piVar6;
    *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0x18c))) = uVar1;
    if (bVar4 != 0) {
      F_006765a0(((undefined *)GEN_TOP(((int)this + 0xf4))) GEN_EDX_ARG,piVar6);
    }
  }
  return;
}

/* ref: FUN_006835d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006835d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6835d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xf8, 8);
  uint * puVar1;
  float fVar2;
  int * piVar3;
  float fVar4;
  char cVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  double dVar10;
  undefined1 auVar11 [4];
  undefined1 uVar12;
  uint uVar13;
  undefined4 * puVar14;
  int * PTR32 * ppiVar15;
  int iVar16;
  int * piVar17;
  byte bVar18;
  uint uVar19;
  undefined4 * puVar20;
  float10 fVar21;
  ulonglong uVar22;
  
  (*(uint *)(gen_frame + 0xe4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe8);
  pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  puVar1 = ((uint *)GEN_TOP(((int)pvVar6 + 8)));
  *puVar1 = *puVar1 | 0x7ffffff;
  uVar13 = *((uint *)GEN_TOP(((int)this + 0x1514))) >> 0xd;
  bVar18 = *((byte *)GEN_TOP((REFG(int, 0x137127c) + 0x6540))) & 1;
  *(undefined4 *)((undefined1 *)(gen_frame + 0x2c)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar6;
  (*(byte *)(gen_frame + 0x42)) = bVar18;
  (*(byte *)(gen_frame + 0x43)) = (byte)uVar13 & 1;
  if ((bVar18 == 0) || ((*(char *)(gen_frame + 0x36)) = '\x01', *((byte *)GEN_TOP(((int)this + 0x173c))) < 5)) {
    (*(char *)(gen_frame + 0x36)) = '\0';
  }
  if (bVar18 == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x173c))) = 0;
  }
  else if (*((byte *)GEN_TOP(((int)this + 0x173c))) < 5) {
    *((byte *)GEN_TOP(((int)this + 0x173c))) = *((byte *)GEN_TOP(((int)this + 0x173c))) + 1;
  }
  if (((uVar13 & 1) == 0) || ((*(char *)(gen_frame + 0x37)) = '\x01', *((byte *)GEN_TOP(((int)this + 0x173d))) < 5)) {
    (*(char *)(gen_frame + 0x37)) = '\0';
  }
  if ((uVar13 & 1) == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x173d))) = 0;
  }
  else if (*((byte *)GEN_TOP(((int)this + 0x173d))) < 5) {
    *((byte *)GEN_TOP(((int)this + 0x173d))) = *((byte *)GEN_TOP(((int)this + 0x173d))) + 1;
  }
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  if ((bVar18 != 0) && (iVar16 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x6554))), iVar16 != 0)) {
    puVar14 = ((undefined4 *)GEN_TOP(F_004f11a0(((undefined1 *)(gen_frame + 0x48)),iVar16 + 0x10,iVar16 + 0x50)));
    piVar17 = *((int * PTR32 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x172c)));
    fVar2 = *((float *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x1730)));
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x1734)));
    puVar20 = ((undefined4 *)(gen_frame + 0x88));
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
      *puVar20 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar20 = puVar20 + 1;
    }
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar3;
    F_004eeb30(&(*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x88)));
    fVar21 = (float10)REFG(double, 0x1088108);
    (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) * fVar21 + fVar21))));
    (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))) * fVar21))));
  }
  { unsigned int gen_ac = (unsigned int)((*(unsigned int *)((undefined1 *)(gen_frame + 0x2c)))); memcpy(auVar11, &gen_ac, 4); }
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 0)) = 0xff;
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 1)) = 0xff;
  (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 2)),0xffff)));
  *((undefined4 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x1738))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x1738))), REFG(float, 0x1087f04));
  if ((*((byte *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x1508))) & 0x20) == 0) {
    if (((*(byte *)(gen_frame + 0x42)) != 0) || ((*(byte *)(gen_frame + 0x43)) != 0)) {
      uVar8 = *((undefined4 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x147c)));
      puVar14 = ((undefined4 *)GEN_TOP(F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,8)));
      if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar14 = 10;
        puVar14[1] = uVar8;
        F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar14);
      }
    }
    uVar13 = F_004d6dd0(*((undefined * PTR32 *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x147c))) GEN_EDX_ARG,0,&(*(float *)(gen_frame + 0xd8)),1);
    if (uVar13 != 0) {
      if ((*(char *)(gen_frame + 0x36)) != '\0') {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 0)) = 1;
        (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x3c)), 1, 3),1)));
        if (!((float10)*(*(float * PTR32 *)(gen_frame + 0xe0)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 0)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x3c)), 1, 3) << 8)));
        }
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 1)) = 1;
        (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 0)) = CONCAT11(1,(byte)(*(int * PTR32 *)(gen_frame + 0x3c)));
        if (!((float10)(*(float * PTR32 *)(gen_frame + 0xe0))[1] < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 1)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 2)),(ushort)(byte)(*(int * PTR32 *)(gen_frame + 0x3c)))));
        }
      }
      if ((*(char *)(gen_frame + 0x37)) != '\0') {
        *((float *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x1738))) = (*(float * PTR32 *)(gen_frame + 0xe0))[4];
      }
      F_004d6e60(*((undefined * PTR32 *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x147c))) GEN_EDX_ARG,0);
    }
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(0x0));
    do {
      uVar22 = (*(ulonglong *)(gen_frame + 0x0));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 0)) = ((int *)GEN_TOP(0x0));
      (*(ulonglong *)(gen_frame + 0x0)) = uVar22 & 0xffffffff00000000;
      iVar16 = *((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + ((int)(*(int * PTR32 *)(gen_frame + 0x44)) + REFG(undefined4, 0x14882b4) * 3) * 4 + 0x14cc)));
      if (*((int *)GEN_TOP((iVar16 + 0x1c))) == 0) {
        uVar12 = 0;
        piVar17 = (*(int * PTR32 *)(gen_frame + 0x44));
      }
      else {
        uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar16 + 0x1c))) + 0x1c))))
                           (*((int * PTR32 *)GEN_TOP((iVar16 + 0x1c))) GEN_EDX_ARG,&(*(ulonglong *)(gen_frame + 0x0)),4,0);
        piVar17 = (*(int * PTR32 *)(gen_frame + 0x44));
        if (uVar13 == 0) {
          if (*((int *)GEN_TOP((iVar16 + 0x18))) == 3) {
            (*(ulonglong *)(gen_frame + 0x0)) = ((*(ulonglong *)(gen_frame + 0x0)) * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
          }
          uVar12 = 1;
        }
        else {
          uVar12 = 0;
        }
      }
      *((undefined1 *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x30)) + (int)piVar17))) = uVar12;
      if (((int *)GEN_TOP((uint)(*(ulonglong *)(gen_frame + 0x0)))) < ((int *)GEN_TOP(0x101))) {
        (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(0xff));
        ppiVar15 = (int * PTR32 *)&(*(ulonglong *)(gen_frame + 0x0));
        if (((int *)GEN_TOP(0xfe)) < ((int *)GEN_TOP((uint)(*(ulonglong *)(gen_frame + 0x0))))) {
          ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x38));
        }
        fVar21 = GEN_X87((float10)(int)*ppiVar15);
        if ((int)*ppiVar15 < 0) {
          fVar21 = GEN_X87(fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 / (float10)*(double *)&REFG(undefined, 0x1088100)))));
        fVar21 = GEN_X87((float10)(float)(fVar21 / (float10)*(double *)&REFG(undefined, 0x1088100)));
        (&(*(float *)(gen_frame + 0xd8)))[(int)piVar17] = (float)(fVar21 * fVar21);
      }
      else {
        *((undefined1 *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x30)) + (int)piVar17))) = 0;
      }
      (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(((int)piVar17 + 1U)));
    } while (((int *)GEN_TOP(((int)piVar17 + 1U))) < ((int *)GEN_TOP(0x3)));
    if ((*(char *)(gen_frame + 0x36)) != '\0') {
      if ((byte)(*(int *)(gen_frame + 0x30)) != '\0') {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 0)) = 1;
        (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x3c)), 1, 3),1)));
        if (!((float10)(*(float *)(gen_frame + 0xd8)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 0)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x3c)), 1, 3) << 8)));
        }
      }
      if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x30)) + 1)) != '\0') {
        if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xdc))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10)))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 1)) = 1;
          (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 0)) = CONCAT11(1,(byte)(*(int * PTR32 *)(gen_frame + 0x3c)));
        }
        else {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 1)) = 0;
          (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 0)) = (ushort)(byte)(*(int * PTR32 *)(gen_frame + 0x3c));
        }
      }
    }
    if (((*(char *)(gen_frame + 0x37)) != '\0') && ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) != '\0')) {
      *((float *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x1738))) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xe0))))) * (float10)REFG(double, 0x10944b8));
    }
  }
  *((byte *)GEN_TOP((REFG(int, 0x1371290) + 0x2a))) = (byte)(*(int * PTR32 *)(gen_frame + 0x3c));
  *((undefined1 *)GEN_TOP((REFG(int, 0x1371290) + 0x2b))) = (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x3c)) + 1));
  if ((*((byte *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x1508))) & 0x20) == 0) {
    uVar13 = *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x330)));
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))));
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    (*(int * PTR32 *)(gen_frame + 0xdc)) = (*(int * PTR32 *)(gen_frame + 0x8));
    fVar4 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))));
    (*(float *)(gen_frame + 0xd8)) = fVar4;
    (*(float * PTR32 *)(gen_frame + 0xe0)) = (float *)(*(int * PTR32 *)(gen_frame + 0xc));
    dVar10 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
    *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x330))) =
         (uint)((*(byte *)(gen_frame + 0x43)) != 0) * 2 | (uint)((*(byte *)(gen_frame + 0x42)) != 0) | uVar13 & 0xfffffffc;
    iVar16 = *((int *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x318))) + 8)));
    *((float *)GEN_TOP((iVar16 + 0x10))) = fVar2;
    *((float *)GEN_TOP((iVar16 + 0x14))) = fVar4;
    *((int * PTR32 *)GEN_TOP((iVar16 + 0x18))) = (*(int * PTR32 *)(gen_frame + 0x8));
    *((int * PTR32 *)GEN_TOP((iVar16 + 0x1c))) = (*(int * PTR32 *)(gen_frame + 0xc));
    (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP((int)dVar10));
    (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(0x1ff));
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x44));
    if (0x1fe < (int)dVar10) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x24));
    }
    piVar17 = *ppiVar15;
    (*(int * PTR32 *)(gen_frame + 0x44)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP(0xfffffe00));
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x24));
    if (-0x201 < (int)piVar17) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x44));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP((((uint)*ppiVar15 & 0x3ff) << 10 | 0x25)));
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x318))) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x44)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0xb8))) + 0x10))) + 0x60)));
    uVar22 = F_0067d330(pvVar6 GEN_EDX_ARG,"sInput");
    (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)GEN_TOP((uint)uVar22));
    if (-1 < (int)((int *)GEN_TOP((uint)uVar22))) {
      if ((*(int * PTR32 *)(gen_frame + 0x44)) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + 8))))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      }
      iVar16 = *((int *)GEN_TOP(((int)pvVar6 + 0x10)));
      piVar17 = ((int *)GEN_TOP(((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x24))) * 0xc)));
      iVar7 = *((int *)GEN_TOP((iVar16 + 4 + (int)piVar17)));
      (*(int * PTR32 *)(gen_frame + 0x38)) = piVar17;
      if (iVar7 != 0) {
        piVar17 = *((int * PTR32 *)GEN_TOP((iVar16 + 4 + (int)piVar17)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar17 + 0xc))))(piVar17 GEN_EDX_ARG);
      }
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar6 + 0x10))) + 4 + (int)(*(int * PTR32 *)(gen_frame + 0x38))))) = (*(int * PTR32 *)(gen_frame + 0x44));
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar6 + 0x10))) + 8 + (int)(*(int * PTR32 *)(gen_frame + 0x38))))) = (uint)(*(undefined * PTR32 *)(gen_frame + 0x28)) & 0xfffffff;
    }
    *((undefined4 *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x32c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x32c))), REFG(float, 0x1087f04));
    F_0067a0f0(((undefined *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x314))) GEN_EDX_ARG);
  }
  else {
    pvVar6 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x338)))));
    uVar13 = F_0067d2b0(pvVar6 GEN_EDX_ARG,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6 GEN_EDX_ARG,uVar13,&REFG(undefined, 0x1322808),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x338))) + 4)));
    uVar13 = F_0067d2b0(pvVar6 GEN_EDX_ARG,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6 GEN_EDX_ARG,uVar13,&REFG(undefined, 0x13227f8),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x338))) + 8)));
    uVar13 = F_0067d2b0(pvVar6 GEN_EDX_ARG,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6 GEN_EDX_ARG,uVar13,&REFG(undefined, 0x13227e8),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x338))) + 0xc)));
    uVar13 = F_0067d2b0(pvVar6 GEN_EDX_ARG,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6 GEN_EDX_ARG,uVar13,&REFG(undefined, 0x13227d8),0x10);
    }
    iVar16 = *((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x338)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 0)) = (*(int * PTR32 *)(gen_frame + 0x8));
    iVar16 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar16 + 4))) + 8)));
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))));
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    *((float *)GEN_TOP((iVar16 + 0x10))) = fVar2;
    (*(int * PTR32 *)(gen_frame + 0xdc)) = (*(int * PTR32 *)(gen_frame + 0x8));
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))));
    (*(float *)(gen_frame + 0xd8)) = fVar2;
    *((float *)GEN_TOP((iVar16 + 0x14))) = fVar2;
    *((int * PTR32 *)GEN_TOP((iVar16 + 0x18))) = (*(int * PTR32 *)(gen_frame + 0x8));
    (*(float * PTR32 *)(gen_frame + 0xe0)) = (float *)(*(int * PTR32 *)(gen_frame + 0xc));
    (*(float *)(gen_frame + 0xd4)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))));
    *((int * PTR32 *)GEN_TOP((iVar16 + 0x1c))) = (*(int * PTR32 *)(gen_frame + 0xc));
    iVar16 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x338))) + 8))) + 8)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)) = (*(int * PTR32 *)(gen_frame + 0xc));
    (*(ulonglong *)(gen_frame + 0x0)) = CONCAT44((*(int * PTR32 *)(gen_frame + 0xc)),(*(int * PTR32 *)(gen_frame + 0x8)));
    *((float *)GEN_TOP((iVar16 + 0x10))) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x8))))));
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))));
    dVar10 = GEN_X87(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
    *((float *)GEN_TOP((iVar16 + 0x14))) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc))))));
    *((int * PTR32 *)GEN_TOP((iVar16 + 0x18))) = (*(int * PTR32 *)(gen_frame + 0x8));
    *((int * PTR32 *)GEN_TOP((iVar16 + 0x1c))) = (*(int * PTR32 *)(gen_frame + 0xc));
    (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP((int)dVar10));
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(0x1ff));
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x44));
    if (0x1fe < (int)dVar10) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x38));
    }
    piVar17 = *ppiVar15;
    (*(int * PTR32 *)(gen_frame + 0x44)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(0xfffffe00));
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x38));
    if (-0x201 < (int)piVar17) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x44));
    }
    (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP((((uint)*ppiVar15 & 0x3ff) << 10 | 0x25)));
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x338))) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x44)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0xb8))) + 0x10))) + 0x60)));
    uVar22 = F_0067d330(pvVar6 GEN_EDX_ARG,"sInput");
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP((uint)uVar22));
    if (-1 < (int)((int *)GEN_TOP((uint)uVar22))) {
      if ((*(int * PTR32 *)(gen_frame + 0x44)) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + 8))))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      }
      iVar16 = *((int *)GEN_TOP(((int)pvVar6 + 0x10)));
      iVar9 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x38))) * 0xc;
      iVar7 = *((int *)GEN_TOP((iVar16 + 4 + iVar9)));
      (*(int *)(gen_frame + 0x30)) = iVar9;
      if (iVar7 != 0) {
        piVar17 = *((int * PTR32 *)GEN_TOP((iVar16 + 4 + iVar9)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar17 + 0xc))))(piVar17 GEN_EDX_ARG);
      }
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar6 + 0x10))) + 4 + (*(int *)(gen_frame + 0x30))))) = (*(int * PTR32 *)(gen_frame + 0x44));
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar6 + 0x10))) + 8 + (*(int *)(gen_frame + 0x30))))) = (uint)(*(int * PTR32 *)(gen_frame + 0x3c)) & 0xfffffff;
    }
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    *((undefined4 *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x34c))) = *((undefined4 *)GEN_TOP((REFG(int, 0x13759f8) + 0x268)));
    if ((*((byte *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x1508))) & 0x18) != 0) {
      F_004daa40((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1,(int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x1480,*((undefined4 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x1484))),0,0);
      puVar14 = ((undefined4 *)GEN_TOP(F_004d4760(pvVar6 GEN_EDX_ARG,0x28)));
      uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar14 = 3;
        puVar14[2] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[1] = 2;
        puVar14[3] = uVar8;
        F_004d4810(pvVar6 GEN_EDX_ARG,puVar14);
      }
      *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x350))) = *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x350))) | 1;
    }
    F_0067a0f0(((undefined *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x334))) GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x350))) = *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x350))) & 0xfffffffe;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = (*(byte *)(gen_frame + 0x42));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x30)) + 1)) = (*(byte *)(gen_frame + 0x42));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = (*(byte *)(gen_frame + 0x43));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x30)) + 3)) = (*(byte *)(gen_frame + 0x43));
    (*(int *)(gen_frame + 0x30)) = CONCAT13((*(byte *)(gen_frame + 0x43)),CONCAT12((*(byte *)(gen_frame + 0x43)),CONCAT11((*(byte *)(gen_frame + 0x42)),(*(byte *)(gen_frame + 0x42)))));
    (*(int * PTR32 *)(gen_frame + 0x3c)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(0x1));
    (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)(((undefined1 *)(gen_frame + 0x2c)) + 3);
    do {
      cVar5 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x3c)) + 1 + (int)(*(int * PTR32 *)(gen_frame + 0x24)))));
      (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x3c)) + 1)));
      if (cVar5 != '\0') {
        uVar8 = *((undefined4 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + ((int)(*(int * PTR32 *)(gen_frame + 0x3c)) + REFG(undefined4, 0x14882b4) * 3) * 4 + 0x14cc)));
        puVar14 = ((undefined4 *)GEN_TOP(F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,0xc)));
        if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar14 = 0xc;
          puVar14[1] = uVar8;
          puVar14[2] = 2;
          F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar14);
        }
        uVar13 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x44))) << 1 | (uint)((int)(*(int * PTR32 *)(gen_frame + 0x44)) < 0);
        uVar19 = ~uVar13;
        *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x350))) = uVar19 & *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x350))) | uVar13;
        F_0067a0f0(((undefined *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x334))) GEN_EDX_ARG);
        iVar16 = REFG(undefined4, 0x14882b4) * 3;
        *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x350))) =
             uVar19 & *((uint *)GEN_TOP(((int)(*(unsigned int *)auVar11) + 0x350))) | 0 << GEN_SHC((byte)(*(int * PTR32 *)(gen_frame + 0x38)), (byte)(*(int * PTR32 *)(gen_frame + 0x38)));
        uVar8 = *((undefined4 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + ((int)(*(int * PTR32 *)(gen_frame + 0x3c)) + iVar16) * 4 + 0x14cc)));
        puVar14 = ((undefined4 *)GEN_TOP(F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,0xc)));
        if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar14 = 0xc;
          puVar14[1] = uVar8;
          puVar14[2] = 1;
          F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar14);
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x3c)) = (*(int * PTR32 *)(gen_frame + 0x38));
      (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x44))) << 1 | (uint)((int)(*(int * PTR32 *)(gen_frame + 0x44)) < 0))));
    } while ((*(int * PTR32 *)(gen_frame + 0x38)) < ((int *)GEN_TOP(0x3)));
    REFG(undefined4, 0x14882b4) = (REFG(undefined4, 0x14882b4) + 1) % 5;
  }
  if ((*(byte *)(gen_frame + 0x42)) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = (int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x354;
  }
  uVar13 = F_0067e7d0(((undefined *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x2c))) + 0x3d0))) GEN_EDX_ARG,iVar16);
  return uVar13;
}

/* ref: FUN_00684040 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00684040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x684040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x18, 8);
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint * PTR32 * ppuVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  
  uVar5 = *((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x8c)));
  (*(uint * PTR32 *)(gen_frame + 0xc)) = ((uint *)GEN_TOP(0x4));
  (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)GEN_TOP(0x1));
  (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)GEN_TOP(uVar5));
  if (uVar5 < 4) {
    ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0x8));
    if (uVar5 < 2) {
      ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0x4));
    }
  }
  else {
    ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0xc));
  }
  *((uint *)GEN_TOP(((int)this + 0x1508))) =
       *((uint *)GEN_TOP(((int)this + 0x1508))) ^
       ((int)*ppuVar4 * 8 - 8U ^ *((uint *)GEN_TOP(((int)this + 0x1508)))) & 0x18;
  uVar5 = ((*((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x34))) >> 1 & 0xff) * 4 ^ *((uint *)GEN_TOP(((int)this + 0x1508)))) & 4 ^
          *((uint *)GEN_TOP(((int)this + 0x1508)));
  *((uint *)GEN_TOP(((int)this + 0x1508))) = uVar5;
  *((uint *)GEN_TOP(((int)this + 0x1508))) =
       ((uint)(*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x44))) == 0x8086) << 6 ^ uVar5) & 0x40 ^ uVar5;
  uVar5 = F_00678da0(&(*(undefined1 *)(gen_frame + 0x13)));
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar5;
  iVar2 = REFG(int, 0x1371288);
  if (uVar5 == 0) {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371288) + 0x1c)));
  *((int * PTR32 *)GEN_TOP(((int)this + 0x1458))) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x30)));
    *((int * PTR32 *)GEN_TOP(((int)this + 0x145c))) = piVar1;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x2c))) + 0x34)));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x1460))) = piVar1;
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
        piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x20)));
        *((int * PTR32 *)GEN_TOP(((int)this + 0x1464))) = piVar1;
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
          piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x34)));
          *((int * PTR32 *)GEN_TOP(((int)this + 0x1468))) = piVar1;
          if (piVar1 != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
            piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x10)));
            *((int * PTR32 *)GEN_TOP(((int)this + 0x146c))) = piVar1;
            if (piVar1 != ((int *)GEN_TOP(0x0))) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
              piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x40)));
              *((int * PTR32 *)GEN_TOP(((int)this + 0x1470))) = piVar1;
              if (piVar1 != ((int *)GEN_TOP(0x0))) {
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                (*(undefined4 *)(gen_frame + 0x0)) = 1;
                (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)GEN_TOP(0x1));
                uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x2460,0x100000,0xb);
                *((uint *)GEN_TOP(((int)this + 0x1478))) = uVar5;
                if (uVar5 != 0) {
                  (*(undefined4 *)(gen_frame + 0x0)) = 4;
                  (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)GEN_TOP(0x1));
                  uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x2470,0x8100010,0xb);
                  *((uint *)GEN_TOP(((int)this + 0x147c))) = uVar5;
                  if (uVar5 != 0) {
                    uVar5 = *((uint *)GEN_TOP(((int)this + 0x1508)));
                    (*(undefined4 *)(gen_frame + 0x0)) = 0x100;
                    (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)GEN_TOP(0x1));
                    uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,
                                         (-(uint)((uVar5 & 0x40) != 0) & 0xffffc350) + 0x5100,
                                         0x100000,0xb);
                    *((uint *)GEN_TOP(((int)this + 0x1480))) = uVar5;
                    if (uVar5 != 0) {
                      (*(undefined4 *)(gen_frame + 0x0)) = 0x100;
                      (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)GEN_TOP(0x1));
                      uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x0)),1,0x4140,0x200000,0xb);
                      *((uint *)GEN_TOP(((int)this + 0x1484))) = uVar5;
                      if (uVar5 != 0) {
                        piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x90)));
                        *((int * PTR32 *)GEN_TOP(((int)this + 0x1488))) = piVar1;
                        if (piVar1 != ((int *)GEN_TOP(0x0))) {
                          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                          piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x94)));
                          *((int * PTR32 *)GEN_TOP(((int)this + 0x148c))) = piVar1;
                          if (piVar1 != ((int *)GEN_TOP(0x0))) {
                            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                            piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x98)));
                            *((int * PTR32 *)GEN_TOP(((int)this + 0x1490))) = piVar1;
                            if (piVar1 != ((int *)GEN_TOP(0x0))) {
                              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                              piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x9c)));
                              *((int * PTR32 *)GEN_TOP(((int)this + 0x1494))) = piVar1;
                              if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xa0)));
                                *((int * PTR32 *)GEN_TOP(((int)this + 0x1498))) = piVar1;
                                if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                  piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xa4)));
                                  *((int * PTR32 *)GEN_TOP(((int)this + 0x149c))) = piVar1;
                                  if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                    piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xa8)));
                                    *((int * PTR32 *)GEN_TOP(((int)this + 0x14a0))) = piVar1;
                                    if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                      piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xac)));
                                      *((int * PTR32 *)GEN_TOP(((int)this + 0x14a4))) = piVar1;
                                      if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                        piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xb0)));
                                        *((int * PTR32 *)GEN_TOP(((int)this + 0x14a8))) = piVar1;
                                        if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                          piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xb4)));
                                          *((int * PTR32 *)GEN_TOP(((int)this + 0x14ac))) = piVar1;
                                          if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                            piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xb8)));
                                            *((int * PTR32 *)GEN_TOP(((int)this + 0x14b0))) = piVar1;
                                            if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                              piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xbc)));
                                              *((int * PTR32 *)GEN_TOP(((int)this + 0x14b4))) = piVar1;
                                              if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                                piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xc0)));
                                                *((int * PTR32 *)GEN_TOP(((int)this + 0x14b8))) = piVar1;
                                                if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                                  piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0xc4)));
                                                  *((int * PTR32 *)GEN_TOP(((int)this + 0x14bc))) = piVar1;
                                                  if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                                    piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 200)));
                                                    *((int * PTR32 *)GEN_TOP(((int)this + 0x14c0))) = piVar1;
                                                    if (piVar1 != ((int *)GEN_TOP(0x0))) {
                                                      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
                                                      (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)GEN_TOP(0x0));
                                                      (*(uint * PTR32 *)(gen_frame + 0xc)) = ((uint *)GEN_TOP(((int)this + 0x14cc)));
                                                      do {
                                                        uVar5 = 0;
                                                        puVar7 = (*(uint * PTR32 *)(gen_frame + 0xc));
                                                        do {
                                                          uVar6 = F_004dcde0(2,0xb);
                                                          *puVar7 = uVar6;
                                                          if (uVar6 == 0) {
                                                            return 0;
                                                          }
                                                          uVar5 = uVar5 + 1;
                                                          puVar7 = puVar7 + 1;
                                                        } while (uVar5 < 3);
                                                        (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)(gen_frame + 0xc)) + 3;
                                                        uVar5 = (int)(*(uint * PTR32 *)(gen_frame + 0x8)) + 1;
                                                        (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)GEN_TOP(uVar5));
                                                      } while (uVar5 < 5);
                                                      bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x14
                                                                                   ))) GEN_EDX_ARG,1);
                                                      if ((((((((bVar3 != 0) &&
                                                               (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)
                                                  this + 0x34))) GEN_EDX_ARG,1), bVar3 != 0)) &&
                                                  (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,1
                                                                       ), bVar3 != 0)) &&
                                                  (((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x74)))
                                                                           GEN_EDX_ARG,3), bVar3 != 0 &&
                                                    (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x94)))
                                                                           GEN_EDX_ARG,1), bVar3 != 0)) &&
                                                   ((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0xb4)))
                                                                           GEN_EDX_ARG,5), bVar3 != 0 &&
                                                    ((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0xd4
                                                                                   ))) GEN_EDX_ARG,1), bVar3 != 0
                                                     && (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                      0xf4))) GEN_EDX_ARG,1),
                                                        bVar3 != 0)))))))) &&
                                                  (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x114))) GEN_EDX_ARG,
                                                                        1), bVar3 != 0)) &&
                                                  (((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x134
                                                                                  ))) GEN_EDX_ARG,5), bVar3 != 0
                                                    && (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                     0x154))) GEN_EDX_ARG,2),
                                                       bVar3 != 0)) &&
                                                   (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x174)))
                                                                          GEN_EDX_ARG,2), bVar3 != 0)))) &&
                                                  (((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x194
                                                                                  ))) GEN_EDX_ARG,4), bVar3 != 0
                                                    && (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                     0x1b4))) GEN_EDX_ARG,1),
                                                       bVar3 != 0)) &&
                                                   ((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x1d4
                                                                                  ))) GEN_EDX_ARG,1), bVar3 != 0
                                                    && ((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                      500))) GEN_EDX_ARG,4),
                                                        bVar3 != 0 &&
                                                        (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                      0x214))) GEN_EDX_ARG,1),
                                                        bVar3 != 0)))))))) &&
                                                  (((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x234
                                                                                  ))) GEN_EDX_ARG,8), bVar3 != 0
                                                    && (((((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this
                                                                                         + 0x254))) GEN_EDX_ARG,6)
                                                           , bVar3 != 0 &&
                                                           (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this
                                                                                         + 0x274))) GEN_EDX_ARG,5)
                                                           , bVar3 != 0)) &&
                                                          (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                        0x294))) GEN_EDX_ARG,6),
                                                          bVar3 != 0)) &&
                                                         ((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                        0x2b4))) GEN_EDX_ARG,1),
                                                          bVar3 != 0 &&
                                                          (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                        0x2d4))) GEN_EDX_ARG,2),
                                                          bVar3 != 0)))) &&
                                                        ((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                       0x2f4))) GEN_EDX_ARG,3),
                                                         bVar3 != 0 &&
                                                         ((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                        0x314))) GEN_EDX_ARG,2),
                                                          bVar3 != 0 &&
                                                          (bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this +
                                                                                        0x334))) GEN_EDX_ARG,4),
                                                          bVar3 != 0)))))))) &&
                                                   ((bVar3 = F_0067a050(((undefined *)GEN_TOP(((int)this + 0x354
                                                                                  ))) GEN_EDX_ARG,1), bVar3 != 0
                                                    && (((bVar3 = F_0067f3e0(this GEN_EDX_ARG), bVar3 != 0 &&
                                                         (bVar3 = F_0067cd10(((undefined *)GEN_TOP(((int)this +
                                                                                       0x374))) GEN_EDX_ARG),
                                                         bVar3 != 0)) &&
                                                        (bVar3 = F_0067a1d0(((undefined *)GEN_TOP(((int)this +
                                                                                      0x3d0))) GEN_EDX_ARG),
                                                        bVar3 != 0)))))))) {
                                                    F_0067d1f0(this GEN_EDX_ARG);
                                                    F_006782b0(this GEN_EDX_ARG);
                                                    *((undefined4 *)GEN_TOP(((int)this + 0x1738))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x1738))), REFG(float, 0x1087f04));
                                                    *((undefined2 *)GEN_TOP(((int)this + 0x173c))) = 0;
                                                    return 1;
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
  return 0;
}

/* ref: FUN_006846f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006846f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6846f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x460, 0);
  byte * pbVar1;
  undefined4 uVar2;
  float fVar3;
  int * piVar4;
  float fVar5;
  ushort uVar6;
  int * piVar7;
  int iVar8;
  undefined4 uVar9;
  int * piVar10;
  int * in_ecx;
  bool bVar11;
  undefined4 * puVar12;
  uint uVar13;
  int * piVar14;
  int * PTR32 * ppiVar15;
  int * piVar16;
  int * PTR32 * ppiVar17;
  int iVar18;
  uint uVar19;
  undefined * pvVar20;
  undefined * pvVar21;
  undefined4 * puVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  
  (*(uint *)(gen_frame + 0x44c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x450);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x1510))) != -1) {
    return REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x450);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  piVar16 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP((REFG(int, 0x1371288) + 0xec)));
  (*(int * PTR32 *)(gen_frame + 0x74)) = piVar16;
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar16 + 0x14;
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar16 + 4;
  puVar12 = ((undefined4 *)GEN_TOP(F_004f11a0(((undefined4 *)(gen_frame + 0x2e0)),(uint)(piVar16 + 4),(uint)(piVar16 + 0x14))));
  pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  piVar16 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar22 = ((undefined4 *)(gen_frame + 0x2a0));
  for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 - 1) {
    *puVar22 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar22 = puVar22 + 1;
  }
  (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x74))[0x2b]));
  piVar14 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x74))[0x2c]));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar14;
  fVar23 = ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x74))[0x2b])));
  fVar26 = (float10)1;
  (*(float *)(gen_frame + 0x14)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x74))[0x29]);
  (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x74))[0x2a]));
  (*(float *)(gen_frame + 0x70)) = *((float *)GEN_TOP((REFG(int, 0x13759f8) + 0x268)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) & 0xfdbfffff | 0x5bfffff;
  (*(int * PTR32 *)(gen_frame + 0x80)) = piVar16;
  (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / fVar23))));
  fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)));
  fVar3 = ((float)GEN_TOF(((fVar23 - fVar24) / (fVar24 * fVar23))));
  (*(int * PTR32 *)(gen_frame + 0x4c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar26 / (fVar26 - (float10)0)))))));
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
  fVar25 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)));
  (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar25 * (float10)(float)(fVar26 / fVar23)))))));
  (*(int * PTR32 *)(gen_frame + 0x4c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar26 + ((fVar25 * (float10)0) * (fVar24 - fVar23)) / fVar24) *
                            (float10)fVar3))))));
  piVar14 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x137127c) + 0x10350)));
  piVar7 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1d8)))));
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
  (*(int * PTR32 *)(gen_frame + 0x84)) = piVar14;
  (*(int * PTR32 *)(gen_frame + 0x88)) = piVar16;
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar7;
  (*(float *)(gen_frame + 0x8c)) = (float)((float10)REFG(double, 0x1088108) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) * (float10)REFG(double, 0x1088108));
  uVar13 = F_0067d2b0(piVar7 GEN_EDX_ARG,((char *)REFP(0x10ad894)));
  if (-1 < (int)uVar13) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
  }
  F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x1d4))) GEN_EDX_ARG);
  pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) & 0xfe180000 | 0x6180000;
  piVar16 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x58)))));
  (*(int * PTR32 *)(gen_frame + 0x80)) = (*(int * PTR32 *)(gen_frame + 0x48));
  (*(int * PTR32 *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x4c));
  (*(int * PTR32 *)(gen_frame + 0x88)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1530)));
  (*(float *)(gen_frame + 0x8c)) = 0.0;
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
  uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,((char *)REFP(0x10ad8a8)));
  if (-1 < (int)uVar13) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar13,(*(int * PTR32 *)(gen_frame + 0x38)),0x40);
  }
  piVar16 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x58)))));
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
  uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cViewDepthFactor");
  if (-1 < (int)uVar13) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
  }
  F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x54))) GEN_EDX_ARG);
  if ((*((byte *)GEN_TOP(((int)pvVar21 + 0x1514))) & 1) == 0) {
    (*(int * PTR32 *)(gen_frame + 0x98)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1498)));
    F_004daa40(pvVar20 GEN_EDX_ARG,1,&(*(int * PTR32 *)(gen_frame + 0x98)),0,0,0);
    puVar12 = ((undefined4 *)GEN_TOP(F_004d4760(pvVar20 GEN_EDX_ARG,0x28)));
    piVar16 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if (puVar12 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar12 = 3;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[1] = 1;
      puVar12[2] = 0xff000000;
      puVar12[3] = piVar16;
      F_004d4810(pvVar20 GEN_EDX_ARG,puVar12);
    }
  }
  else {
    piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1468)));
    iVar18 = *((int *)GEN_TOP(((int)pvVar21 + 0x1498)));
    iVar8 = piVar16[6];
    piVar14 = ((int *)GEN_TOP((iVar18 + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x78)) = piVar16;
    if ((iVar8 == *piVar14) && (piVar16[7] == *((int *)GEN_TOP((iVar18 + 0x1c))))) {
      *((uint *)GEN_TOP(((int)pvVar21 + 0x310))) = *((uint *)GEN_TOP(((int)pvVar21 + 0x310))) | 1;
      piVar16 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x2f8)))));
      (*(bool *)(gen_frame + 0x97)) = true;
      (*(int * PTR32 *)(gen_frame + 0x80)) = ((int *)GEN_TOP(0x0));
      (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)GEN_TOP(0x0));
      (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)GEN_TOP(0x0));
      (*(float *)(gen_frame + 0x8c)) = 0.0;
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
      uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cClearColor");
      if (-1 < (int)uVar13) {
        F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x7c)) = ((undefined *)GEN_TOP(*((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 4)))));
      if ((*(int * PTR32 *)(gen_frame + 0x78)) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x78)) + 8))))((*(int * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG);
      }
      piVar16 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x28)));
      if (piVar16 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar16 + 0xc))))(piVar16 GEN_EDX_ARG);
      }
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x28))) = (*(int * PTR32 *)(gen_frame + 0x78));
      iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 4)));
      pbVar1 = ((byte *)GEN_TOP((iVar18 + 0x48)));
      *pbVar1 = *pbVar1 | 6;
      *((undefined1 *)GEN_TOP((iVar18 + 0x43))) = 0x80;
      (*(undefined * PTR32 *)(gen_frame + 0x7c)) = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 8)));
      if ((*(int * PTR32 *)(gen_frame + 0x78)) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x78)) + 8))))((*(int * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG);
      }
      piVar16 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x28)));
      if (piVar16 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar16 + 0xc))))(piVar16 GEN_EDX_ARG);
      }
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x28))) = (*(int * PTR32 *)(gen_frame + 0x78));
      iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 8)));
      *((byte *)GEN_TOP((iVar18 + 0x48))) = *((byte *)GEN_TOP((iVar18 + 0x48))) & 0xfb | 2;
      *((undefined1 *)GEN_TOP((iVar18 + 0x43))) = 0x80;
      iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 8)));
      pbVar1 = ((byte *)GEN_TOP((iVar18 + 0x48)));
      *pbVar1 = *pbVar1 | 1;
      *((undefined4 *)GEN_TOP((iVar18 + 0x34))) = 0xff000000;
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar21 + 0x310))) = *((uint *)GEN_TOP(((int)pvVar21 + 0x310))) & 0xfffffffe;
      piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 4)));
      piVar14 = ((int *)GEN_TOP(piVar16[10]));
      (*(bool *)(gen_frame + 0x97)) = false;
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
      if (piVar14 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 0xc))))(piVar14 GEN_EDX_ARG);
        piVar16 = (*(int * PTR32 *)(gen_frame + 0x98));
      }
      piVar16[10] = 0;
      iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 4)));
      pbVar1 = ((byte *)GEN_TOP((iVar18 + 0x48)));
      *pbVar1 = *pbVar1 & 0xf9;
      *((undefined1 *)GEN_TOP((iVar18 + 0x43))) = 0x80;
      piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 8)));
      piVar14 = ((int *)GEN_TOP(piVar16[10]));
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
      if (piVar14 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 0xc))))(piVar14 GEN_EDX_ARG);
        piVar16 = (*(int * PTR32 *)(gen_frame + 0x98));
      }
      piVar16[10] = 0;
      iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 8)));
      pbVar1 = ((byte *)GEN_TOP((iVar18 + 0x48)));
      *pbVar1 = *pbVar1 & 0xf9;
      *((undefined1 *)GEN_TOP((iVar18 + 0x43))) = 0x80;
      iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 8)));
      pbVar1 = ((byte *)GEN_TOP((iVar18 + 0x48)));
      *pbVar1 = *pbVar1 & 0xfe;
      *((undefined4 *)GEN_TOP((iVar18 + 0x34))) = 0;
    }
    fVar26 = (float10)*(*(int * PTR32 *)(gen_frame + 0x6c));
    if (*(*(int * PTR32 *)(gen_frame + 0x6c)) < 0) {
      fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar23 = (float10)1;
    iVar18 = (*(int * PTR32 *)(gen_frame + 0x6c))[1];
    (*(int * PTR32 *)(gen_frame + 0x410)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar26))));
    fVar26 = (float10)(*(int * PTR32 *)(gen_frame + 0x6c))[1];
    if (iVar18 < 0) {
      fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    ppiVar17 = ((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1520)));
    (*(int * PTR32 *)(gen_frame + 0x418)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1518)));
    (*(undefined * PTR32 *)(gen_frame + 0x41c)) = *((undefined * PTR32 *)GEN_TOP(((int)pvVar21 + 0x151c)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094778)));
    (*(int * PTR32 *)(gen_frame + 0x414)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar26))));
    if ((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))) < REFG(double, 0x1094438)) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
    }
    piVar16 = *ppiVar17;
    ppiVar17 = ((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1524)));
    (*(int * PTR32 *)(gen_frame + 0x420)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))));
    if ((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))) < REFG(double, 0x1094438)) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
    }
    piVar16 = *ppiVar17;
    ppiVar17 = ((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1528)));
    (*(int * PTR32 *)(gen_frame + 0x424)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))));
    if ((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))) < REFG(double, 0x1094438)) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
    }
    (*(int * PTR32 *)(gen_frame + 0x428)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17)))))));
    if ((*(bool *)(gen_frame + 0x97)) == false) {
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c)))));
    }
    else {
      fVar26 = GEN_X87((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x152c))) * (float10)*(double *)&REFG(undefined, 0x10addd8));
    }
    (*(int * PTR32 *)(gen_frame + 0x42c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x430)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x434)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1530)));
    (*(int * PTR32 *)(gen_frame + 0x438)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1534)));
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)pvVar21 + 0x1538))))));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cHDAOParam");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x410)),0x30);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 8)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cViewDepthFactor");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x48)),8);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2f8))) + 8)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cHDAOParam");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x410)),0x30);
    }
    *((float *)GEN_TOP(((int)pvVar21 + 0x30c))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x2f4))) GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)pvVar20 + 8))) = *((uint *)GEN_TOP(((int)pvVar20 + 8))) & 0xffb80000 | 0x380000;
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 2 & 1) != 0) {
    piVar14 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x14c4)));
    piVar7 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x14c8)));
    piVar16 = ((int *)GEN_TOP(((int)pvVar21 + 0x194)));
    iVar18 = 0;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x78)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar7;
    if ((piVar14 != ((int *)GEN_TOP(0x0))) && (iVar18 = 1, piVar7 != ((int *)GEN_TOP(0x0)))) {
      iVar18 = 2;
    }
    if ((float)REFG(float, 0x1087f04) <= *((float *)GEN_TOP(((int)pvVar21 + 0x1560)))) {
      iVar18 = 0;
    }
    *((uint *)GEN_TOP(((int)pvVar21 + 0x1b0))) =
         (uint)(iVar18 == 0) | *((uint *)GEN_TOP(((int)pvVar21 + 0x1b0))) & 0xfffffffe;
    *((uint *)GEN_TOP(((int)pvVar21 + 0x1b0))) =
         (uint)(iVar18 == 1) * 2 | *((uint *)GEN_TOP(((int)pvVar21 + 0x1b0))) & 0xfffffffd;
    *((uint *)GEN_TOP(((int)pvVar21 + 0x1b0))) =
         (uint)(iVar18 == 2) * 4 | *((uint *)GEN_TOP(((int)pvVar21 + 0x1b0))) & 0xfffffffb;
    pvVar20 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x198))) + iVar18 * 4)));
    (*(undefined * PTR32 *)(gen_frame + 0x7c)) = pvVar20;
    if (iVar18 == 0) {
      fVar26 = GEN_X87((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x1560))) * (float10)(*(float *)(gen_frame + 0x70)));
      (*(float *)(gen_frame + 0x8c)) = 0.0;
      (*(int * PTR32 *)(gen_frame + 0x80)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x1554))) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x1558))) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar26 * (float10)*((float *)GEN_TOP(((int)pvVar21 + 0x155c)))))))));
      uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cClearColor");
      if (-1 < (int)uVar13) {
        F_006793b0((*(undefined * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
      }
    }
    else {
      puVar12 = ((undefined4 *)GEN_TOP(F_004f4970(((undefined4 *)(gen_frame + 0x2e0)),((undefined4 *)(gen_frame + 0x2a0)))));
      pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x7c));
      puVar22 = ((undefined4 *)(gen_frame + 0x360));
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 - 1) {
        *puVar22 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar22 = puVar22 + 1;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x78)) == ((int *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x64)) = ((int *)GEN_TOP(0x1));
        (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x1));
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x64));
      }
      else {
        ppiVar17 = (int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x78)) + 6);
      }
      piVar16 = *ppiVar17;
      piVar14 = ppiVar17[1];
      if ((*(int * PTR32 *)(gen_frame + 0x98)) == ((int *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x64)) = ((int *)GEN_TOP(0x1));
        (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x1));
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x64));
      }
      else {
        ppiVar17 = (int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x98)) + 6);
      }
      piVar7 = *ppiVar17;
      (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
      piVar4 = ppiVar17[1];
      if ((*(int * PTR32 *)(gen_frame + 0x78)) == ((int *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0x1));
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x78))[8]));
      }
      if ((*(int * PTR32 *)(gen_frame + 0x98)) == ((int *)GEN_TOP(0x0))) {
        (*(int * PTR32 *)(gen_frame + 0x6c)) = ((int *)GEN_TOP(0x1));
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x6c)) = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x98))[8]));
      }
      (*(int *)(gen_frame + 0x3a0)) = (*(int * PTR32 *)(gen_frame + 0x74))[0x24];
      (*(int *)(gen_frame + 0x3a4)) = (*(int * PTR32 *)(gen_frame + 0x74))[0x25];
      (*(int *)(gen_frame + 0x3a8)) = (*(int * PTR32 *)(gen_frame + 0x74))[0x26];
      (*(int * PTR32 *)(gen_frame + 0x3b0)) = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1584)));
      (*(undefined4 *)(gen_frame + 0x3ac)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x3b4)) = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1588)));
      piVar10 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x158c)));
      (*(int * PTR32 *)(gen_frame + 0x3bc)) = ((int *)GEN_TOP(0x0));
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar14;
      fVar26 = (float10)(int)piVar14;
      (*(int * PTR32 *)(gen_frame + 0x3b8)) = piVar10;
      (*(float *)(gen_frame + 0x3c0)) = REFG(float, 0x1088068);
      if ((int)piVar14 < 0) {
        fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
      fVar26 = (float10)(float)fVar26;
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar4;
      (*(float *)(gen_frame + 0x3c8)) = REFG(float, 0x1088068);
      fVar23 = (float10)REFG(double, 0x1088108);
      (*(float *)(gen_frame + 0x3c4)) = ((float)GEN_TOF(((fVar26 - fVar23) / fVar26)));
      fVar24 = (float10)(int)piVar4;
      if ((int)piVar4 < 0) {
        fVar24 = GEN_X87(fVar24 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar24)));
      fVar24 = (float10)(float)fVar24;
      (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(((int)piVar16 - 1)));
      (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)GEN_TOP(0x1));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x74));
      (*(float *)(gen_frame + 0x3cc)) = ((float)GEN_TOF(((fVar24 - fVar23) / fVar24)));
      if (0 < (int)piVar16 - 1) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
      }
      piVar10 = *ppiVar17;
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar16;
      fVar25 = (float10)(int)piVar16;
      if ((int)piVar16 < 0) {
        fVar25 = GEN_X87(fVar25 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)GEN_TOP(((int)piVar14 - 1)));
      (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x1));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x3d0)) = ((float)GEN_TOF((((float10)(int)((int)(uintptr_t)piVar10) * fVar23) / fVar25)));
      if (0 < (int)piVar14 - 1) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x74));
      }
      piVar16 = *ppiVar17;
      (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)GEN_TOP(((int)piVar7 - 1)));
      (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x1));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
      (*(undefined * PTR32 *)(gen_frame + 0x3d4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)(int)((int)(uintptr_t)piVar16) * (float10)REFG(double, 0x1094890)) / fVar26))))));
      if (0 < (int)piVar7 - 1) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x74));
      }
      piVar16 = *ppiVar17;
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar7;
      fVar26 = (float10)(int)piVar7;
      if ((int)piVar7 < 0) {
        fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)GEN_TOP(((int)piVar4 - 1)));
      (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x1));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x3d8)) = ((float)GEN_TOF((((float10)(int)((int)(uintptr_t)piVar16) * fVar23) / fVar26)));
      if (0 < (int)piVar4 - 1) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x74));
      }
      (*(float *)(gen_frame + 0x3dc)) = ((float)GEN_TOF((((float10)(int)*ppiVar17 * (float10)REFG(double, 0x1094890)) / fVar24)));
      piVar16 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1544)));
      (*(int * PTR32 *)(gen_frame + 0x74)) = piVar16;
      fVar26 = (float10)(int)(*(int * PTR32 *)(gen_frame + 0x20));
      if ((int)(*(int * PTR32 *)(gen_frame + 0x20)) < 0) {
        fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar6 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1548)));
      (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
      (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP((uint)uVar6));
      fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
      fVar26 = (float10)(float)fVar26;
      (*(float *)(gen_frame + 0x3e0)) = ((float)GEN_TOF((fVar23 / fVar26 + (fVar24 * (float10)(int)(uint)uVar6) / fVar26)));
      fVar26 = (float10)(int)(*(int * PTR32 *)(gen_frame + 0x6c));
      if ((int)(*(int * PTR32 *)(gen_frame + 0x6c)) < 0) {
        fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar6 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x154a)));
      (*(int * PTR32 *)(gen_frame + 0x6c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
      (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP((uint)uVar6));
      (*(undefined4 *)(gen_frame + 0x3fc)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1560)));
      fVar26 = (float10)(float)fVar26;
      (*(float *)(gen_frame + 0x3e4)) = ((float)GEN_TOF((((float10)(int)(uint)uVar6 * fVar24) / fVar26 + fVar23 / fVar26)));
      fVar26 = (float10)(*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0x3e8)) = ((float)GEN_TOF((fVar26 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x154c))))));
      (*(float *)(gen_frame + 0x3ec)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1550))) * fVar26)));
      (*(float *)(gen_frame + 0x3f0)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1554))) * fVar26)));
      (*(float *)(gen_frame + 0x3f4)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1558))) * fVar26)));
      (*(float *)(gen_frame + 0x3f8)) = ((float)GEN_TOF((fVar26 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x155c))))));
      uVar13 = F_0067d2b0((*(undefined * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,&REFG(undefined, 0x10ad908));
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar21 GEN_EDX_ARG,uVar13,((undefined4 *)(gen_frame + 0x360)),0x40);
      }
      uVar13 = F_0067d2b0(pvVar21 GEN_EDX_ARG,((char *)REFP(0x10ad910)));
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar21 GEN_EDX_ARG,uVar13,&(*(int *)(gen_frame + 0x3a0)),0x60);
      }
      uVar13 = F_004d4af0(&(*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,2,2,0,9,(float)(float10)0,0,0,0);
      F_0067d3e0(pvVar21 GEN_EDX_ARG,&REFG(undefined, 0x10ad91c),(*(int * PTR32 *)(gen_frame + 0x78)),uVar13);
      uVar13 = F_004d4af0(&(*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,2,2,0,9,(float)(float10)0,0,0,0);
      F_0067d3e0(pvVar21 GEN_EDX_ARG,((char *)REFP(0x10ad924)),(*(int * PTR32 *)(gen_frame + 0x98)),uVar13);
      pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      piVar16 = (*(int * PTR32 *)(gen_frame + 0x9c));
    }
    piVar16[6] = (int)gen_fl2bits((*(float *)(gen_frame + 0x70)));
    F_0067a0f0(piVar16 GEN_EDX_ARG);
    pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  *((uint *)GEN_TOP(((int)pvVar20 + 8))) = *((uint *)GEN_TOP(((int)pvVar20 + 8))) & 0xfff80002 | 2;
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 3 & 1) != 0) {
    *((float *)GEN_TOP(((int)pvVar21 + 0x1cc))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x1b4))) GEN_EDX_ARG);
  }
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 10 & 1) != 0) {
    *((float *)GEN_TOP(((int)pvVar21 + 300))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x114))) GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)pvVar20 + 8))) = *((uint *)GEN_TOP(((int)pvVar20 + 8))) & 0xfffc0000 | 0x40000;
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 4 & 1) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x80)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x15f0)));
    (*(int * PTR32 *)(gen_frame + 0x84)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x15f4)));
    (*(int * PTR32 *)(gen_frame + 0x88)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x15f8)));
    F_0046f390(&(*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG);
    F_004eebf0(&(*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)(*(int * PTR32 *)(gen_frame + 0x38)));
    if (((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 5 & 1) == 0) || (!(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x88))))) < 0.0))) {
      (*(bool *)(gen_frame + 0x97)) = false;
    }
    else {
      (*(bool *)(gen_frame + 0x97)) = true;
      F_004eeb30(&(*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)(*(int * PTR32 *)(gen_frame + 0x24)));
      fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x1608)));
      (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0x0));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
      piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar3 / (float10)(*(float *)(gen_frame + 0x14))))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
      fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
      fVar27 = (float10)REFG(double, 0x1088108);
      piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar27 - (float10)*(double *)&REFG(undefined, 0x10947d0) * fVar23))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x80)))));
      fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
      piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar24 * fVar26 + fVar27))));
      (*(int * PTR32 *)(gen_frame + 0x74)) = piVar16;
      fVar25 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x84)))));
      pvVar20 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar27 - fVar25 * fVar24))));
      (*(undefined * PTR32 *)(gen_frame + 0x7c)) = pvVar20;
      piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar25 * fVar25 + fVar26 * fVar26))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
      fVar27 = GEN_X87(fVar27 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)GEN_TOP(0x0));
      fVar26 = (float10)1;
      piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar27 + fVar26) * fVar23))))));
      (*(int * PTR32 *)(gen_frame + 0x78)) = piVar14;
      piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 - fVar27))));
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar7;
      piVar4 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x15f4))) +
                             (float10)*((float *)GEN_TOP(((int)pvVar21 + 0x15f4)))))))));
      (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar4;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))) < (float10)0)) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
      }
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x6c));
      if (!(((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4))) < (float)REFG(float, 0x1087f04))) {
        ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x68));
      }
      if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar15))))) {
        ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x20));
      }
      fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x160c)));
      (*(int * PTR32 *)(gen_frame + 0x414)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(int * PTR32 *)(gen_frame + 0x418)) = piVar16;
      piVar16 = *ppiVar17;
      (*(undefined * PTR32 *)(gen_frame + 0x41c)) = pvVar20;
      piVar7 = *ppiVar15;
      piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x1f8))) + 4)));
      (*(int * PTR32 *)(gen_frame + 0x420)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094870)));
      piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)fVar3 * (float10)(*(float *)(gen_frame + 0x70))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))) *
                              (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7)))))))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
      fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x1560)));
      (*(int * PTR32 *)(gen_frame + 0x424)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094808)));
      (*(int * PTR32 *)(gen_frame + 0x410)) = (*(int * PTR32 *)(gen_frame + 0x18));
      (*(int * PTR32 *)(gen_frame + 0x428)) = piVar14;
      (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)GEN_TOP(0x0));
      (*(int * PTR32 *)(gen_frame + 0x42c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 - (float10)fVar3 * (float10)fVar3))));
      fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x15fc)));
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar4;
      (*(int * PTR32 *)(gen_frame + 0x430)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 * (float10)fVar3))));
      (*(int * PTR32 *)(gen_frame + 0x434)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x1600))) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar26 * (float10)*((float *)GEN_TOP(((int)pvVar21 + 0x1604)))))))));
      uVar13 = F_0067d2b0(piVar4 GEN_EDX_ARG,((char *)REFP(0x10ad92c)));
      if (-1 < (int)uVar13) {
        F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x410)),0x30);
      }
    }
    *((uint *)GEN_TOP(((int)pvVar21 + 0x210))) =
         *((uint *)GEN_TOP(((int)pvVar21 + 0x210))) & 0xfffffffd | (uint)((*(bool *)(gen_frame + 0x97)) != false) * 2;
    *((uint *)GEN_TOP(((int)pvVar21 + 0x210))) =
         (uint)((*(bool *)(gen_frame + 0x97)) != false) * 8 | *((uint *)GEN_TOP(((int)pvVar21 + 0x210))) & 0xfffffff7;
    *((float *)GEN_TOP(((int)pvVar21 + 0x20c))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 500))) GEN_EDX_ARG);
    pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  *((uint *)GEN_TOP(((int)pvVar20 + 8))) = *((uint *)GEN_TOP(((int)pvVar20 + 8))) & 0xffcfffff | 0x4fffff;
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 6 & 1) != 0) {
    fVar26 = (float10)(*(float *)(gen_frame + 0x70));
    iVar18 = **((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x218)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1570)));
    piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar26 * (float10)*((float *)GEN_TOP(((int)pvVar21 + 0x1568)))))))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x156c))) * fVar26))))));
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar14;
    fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x1564)));
    *((undefined4 *)GEN_TOP((iVar18 + 0x74))) = uVar2;
    *((float *)GEN_TOP((iVar18 + 0x68))) = (float)(fVar26 * (float10)fVar3);
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x6c))) = piVar16;
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x70))) = piVar14;
    *((undefined4 *)GEN_TOP((iVar18 + 0x78))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1578)));
    *((undefined4 *)GEN_TOP((iVar18 + 0x7c))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1580)));
    *((undefined4 *)GEN_TOP((iVar18 + 0x80))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1574)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x157c)));
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x88))) = (*(int * PTR32 *)(gen_frame + 0x48));
    *((undefined4 *)GEN_TOP((iVar18 + 0x84))) = uVar2;
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x8c))) = (*(int * PTR32 *)(gen_frame + 0x4c));
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x90))) = (*(int * PTR32 *)(gen_frame + 0x3c));
    F_0067c740(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x218))))) GEN_EDX_ARG);
    *((float *)GEN_TOP(((int)pvVar21 + 0x22c))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x214))) GEN_EDX_ARG);
  }
  fVar26 = (float10)*(float *)&REFG(undefined, 0x1322834);
  *((uint *)GEN_TOP(((int)pvVar20 + 8))) = *((uint *)GEN_TOP(((int)pvVar20 + 8))) & 0xffdfffff | 0x5fffff;
  (*(float *)(gen_frame + 0x8c)) = (float)(fVar26 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c))))));
  piVar16 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x78)))));
  (*(int * PTR32 *)(gen_frame + 0x80)) = (*(int * PTR32 *)(gen_frame + 0x48));
  (*(int * PTR32 *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x4c));
  (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
  uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cViewDepthFactor");
  if (-1 < (int)uVar13) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
  }
  *((float *)GEN_TOP(((int)pvVar21 + 0x8c))) = (*(float *)(gen_frame + 0x70));
  F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x74))) GEN_EDX_ARG);
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 7 & 1) != 0) {
    fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x16c8)));
    bVar11 = (!GEN_ISNAN(fVar3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
             (!(fVar3 < *(float *)&REFG(undefined, 0x1088114)) && fVar3 != *(float *)&REFG(undefined, 0x1088114));
    uVar13 = *((uint *)GEN_TOP(((int)pvVar21 + 0x250)));
    uVar19 = (uint)((GEN_ISNAN(fVar3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                   (fVar3 < *(float *)&REFG(undefined, 0x1088114) || fVar3 == *(float *)&REFG(undefined, 0x1088114)));
    (*(bool *)(gen_frame + 0x97)) = bVar11;
    *((uint *)GEN_TOP(((int)pvVar21 + 0x250))) = uVar13 & 0xfffffffd | uVar19 * 2;
    *((uint *)GEN_TOP(((int)pvVar21 + 0x250))) = uVar13 & 0xfffffff9 | uVar19 * 2 | uVar19 * 4;
    piVar16 = ((int *)GEN_TOP((uint)bVar11));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    *((uint *)GEN_TOP(((int)pvVar21 + 0x250))) =
         (int)((int)(uintptr_t)piVar16) * 8 | *((uint *)GEN_TOP(((int)pvVar21 + 0x250))) & 0xfffffff7;
    *((uint *)GEN_TOP(((int)pvVar21 + 0x250))) =
         uVar19 << 6 | (int)((int)(uintptr_t)piVar16) << 5 | *((uint *)GEN_TOP(((int)pvVar21 + 0x250))) & 0xffffff1f |
         (int)((int)(uintptr_t)piVar16) << 7;
    iVar18 = **((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x238)));
    *((undefined4 *)GEN_TOP((iVar18 + 0x68))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16bc)));
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x6c))) = (*(int * PTR32 *)(gen_frame + 0x30));
    *((undefined4 *)GEN_TOP((iVar18 + 0x70))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16c0)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16c4)));
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x78))) = (*(int * PTR32 *)(gen_frame + 0x3c));
    *((undefined4 *)GEN_TOP((iVar18 + 0x74))) = uVar2;
    *((undefined4 *)GEN_TOP((iVar18 + 0x7c))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16c8)));
    *((undefined4 *)GEN_TOP((iVar18 + 0x80))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16cc)));
    *((undefined4 *)GEN_TOP((iVar18 + 0x84))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16d0)));
    F_00679b80(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x238))))) GEN_EDX_ARG);
    *((float *)GEN_TOP(((int)pvVar21 + 0x24c))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x234))) GEN_EDX_ARG);
    pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 8 & 1) != 0) {
    piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x16ac)));
    piVar14 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x16b0)));
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)));
    piVar14 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 600))) + 8)));
    fVar23 = GEN_X87((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) / fVar26);
    (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar26))));
    (*(int * PTR32 *)(gen_frame + 0x98)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
    uVar13 = F_0067d2b0(piVar14 GEN_EDX_ARG,"cBlurLength");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x9c)),4);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 600))) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cBlurLength");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x98)),4);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 600))) + 0x10)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cBlurLength");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x6c)),4);
    }
    piVar16 = ((int *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar21 + 600))) + 0x50)));
    piVar14 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x38)) - (int)piVar16)));
    uVar13 = 0x40;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    do {
      if (*((int *)GEN_TOP(((int)piVar16 + (int)piVar14))) != *piVar16) {
        piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x16b4)));
        goto LAB_00685aa0;
      }
      uVar13 = uVar13 - 4;
      piVar16 = piVar16 + 1;
    } while (3 < uVar13);
    piVar16 = ((int *)GEN_TOP(0x0));
LAB_00685aa0: ;
    piVar14 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 600))) + 0x14)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    uVar13 = F_0067d2b0(piVar14 GEN_EDX_ARG,((char *)REFP(0x10ad970)));
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x98)),4);
    }
    *((float *)GEN_TOP(((int)pvVar21 + 0x26c))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x254))) GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)pvVar20 + 8))) = *((uint *)GEN_TOP(((int)pvVar20 + 8))) & 0xffe7ffff | 0x600000;
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 9 & 1) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x7c)) = ((undefined *)GEN_TOP(((int)pvVar21 + 0x274)));
    if (*((int *)GEN_TOP(((int)pvVar21 + 0x167c))) == 1) {
      (*(int * PTR32 *)(gen_frame + 0x78)) = ((int *)GEN_TOP(0x0));
      if ((*(uint *)&REFG(undefined, 0x14882d0) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14882d0) = *(uint *)&REFG(undefined, 0x14882d0) | 1;
      }
      puVar12 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined4 *)(gen_frame + 0x2e0)),(*(int * PTR32 *)(gen_frame + 0x38)))));
      puVar22 = ((undefined4 *)(gen_frame + 0x360));
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 - 1) {
        *puVar22 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar22 = puVar22 + 1;
      }
      piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x390)) - (float10)*(float *)&REFG(undefined, 0x14882c0)))));
      (*(int * PTR32 *)(gen_frame + 0x40)) = piVar16;
      piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x394)) - (float10)*(float *)&REFG(undefined, 0x14882c4)))));
      (*(int * PTR32 *)(gen_frame + 0x44)) = piVar14;
      (*(int * PTR32 *)(gen_frame + 0x80)) = piVar16;
      piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x398)) - (float10)*(float *)&REFG(undefined, 0x14882c8)))));
      (*(int * PTR32 *)(gen_frame + 0x48)) = piVar7;
      (*(int * PTR32 *)(gen_frame + 0x84)) = piVar14;
      (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
      fVar3 = ((float)GEN_TOF(((float10)1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(int * PTR32 *)&REFG(undefined, 0x14882cc)))))));
      (*(int * PTR32 *)(gen_frame + 0x4c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
      (*(float *)(gen_frame + 0x8c)) = fVar3;
      piVar4 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                             ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))) +
                             ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) +
                             (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)))))))))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar4;
      piVar4 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4))))))))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar4;
      (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar4;
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4)));
      if ((float10)REFG(float, 0x10addd0) <= fVar26) {
        (*(int * PTR32 *)(gen_frame + 0x80)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) / fVar26))));
        (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) / fVar26))));
        (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))) / fVar26))));
        (*(float *)(gen_frame + 0x8c)) = (float)((float10)fVar3 / fVar26);
        F_004be0e0(&(*(int * PTR32 *)(gen_frame + 0x320)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x38)));
        F_004eee00(&(*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)&(*(int * PTR32 *)(gen_frame + 0x320)));
        fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x88)))));
        (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS(fVar26))))));
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x30))))) <= (float10)((float)GEN_TOF(ABS(fVar26))))) goto LAB_00685f28;
        (*(bool *)(gen_frame + 0x97)) = true;
        if (!(*(float *)&REFG(undefined, 0x1088114) <= ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x88))))))) {
          (*(bool *)(gen_frame + 0x97)) = false;
        }
        (*(bool *)(gen_frame + 0x97)) = (!GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x88)))))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                    !(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x88))))) < *(float *)&REFG(undefined, 0x1088114));
        (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(-(float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c))))) / fVar26))));
        fVar23 = GEN_X87((float10)(float)(-(float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c))))) / fVar26));
        (*(int * PTR32 *)(gen_frame + 0x80)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x80)))))))));
        (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x84)))))))));
        (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 * fVar26))));
        (*(float *)(gen_frame + 0x8c)) = (float)(float10)1;
        F_004eee00(&(*(int * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)(*(int * PTR32 *)(gen_frame + 0x24)));
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
        piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8c))))))));
        (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
        fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x80)))));
        fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
        (*(int * PTR32 *)(gen_frame + 0x80)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar24))));
        fVar25 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x84)))));
        (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar25 / fVar24))));
        (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x88))))) / fVar24))));
        (*(float *)(gen_frame + 0x8c)) = (float)((float10)(*(float *)(gen_frame + 0x8c)) / fVar24);
        fVar26 = (float10)REFG(double, 0x1088108);
        piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(float)(fVar23 / fVar24) * fVar26 + fVar26))))));
        (*(int * PTR32 *)(gen_frame + 0x80)) = piVar16;
        piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar26 - (float10)(float)(fVar25 / fVar24) * fVar26))))));
        (*(int * PTR32 *)(gen_frame + 0x84)) = piVar14;
        piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) - fVar26) * fVar26))))));
        (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
        piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))))));
        (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
        (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)GEN_TOP(0x0));
        piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))));
        (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) < (float10)0)) {
          ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
        }
        piVar16 = *ppiVar17;
        (*(int * PTR32 *)(gen_frame + 0x30)) = piVar16;
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
        piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) - fVar26) * fVar26))))));
        (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
        piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)))))))));
        (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
        (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)GEN_TOP(0x0));
        piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)))))));
        (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) < (float10)0)) {
          ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
        }
        fVar3 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))));
        (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
        if ((*(bool *)(gen_frame + 0x97)) == false) {
          (*(int * PTR32 *)(gen_frame + 0x98)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090708)));
        }
        else {
          (*(int * PTR32 *)(gen_frame + 0x98)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        }
        fVar5 = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1684)));
        (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090708)));
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x78));
        piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((((float10)fVar5 * (float10)REFG(double, 0x10944b8)) *
                                  (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x98)))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x6c)))))) *
                                (float10)fVar3))))));
        (*(int * PTR32 *)(gen_frame + 0x78)) = piVar16;
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) < (float10)1)) {
          ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
        }
        if (!((float)REFG(float, 0x1090708) < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))))) {
          ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
        }
        (*(int * PTR32 *)(gen_frame + 0x78)) = *ppiVar17;
      }
      else {
LAB_00685f28: ;
        fVar26 = (float10)REFG(double, 0x1088108);
      }
      pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x7c));
      *(float *)&REFG(undefined, 0x14882c0) = (*(float *)(gen_frame + 0x390));
      *(float *)&REFG(undefined, 0x14882c4) = (*(float *)(gen_frame + 0x394));
      *(float *)&REFG(undefined, 0x14882c8) = (*(float *)(gen_frame + 0x398));
      *(int * PTR32 *)&REFG(undefined, 0x14882cc) = GEN_FLT_TO(*(int * PTR32 *)&REFG(undefined, 0x14882cc), REFG(float, 0x1087f04));
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1688))))));
      piVar16 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1680)));
      fVar23 = (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1688)));
      pvVar21 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 4))) + 4)));
      fVar24 = GEN_X87((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x78))))) / fVar23);
      (*(int * PTR32 *)(gen_frame + 0x48)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x64)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x438)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x40)) = (*(int * PTR32 *)(gen_frame + 0x80));
      (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x84));
      (*(int * PTR32 *)(gen_frame + 0x5c)) = (*(int * PTR32 *)(gen_frame + 0x80));
      (*(int * PTR32 *)(gen_frame + 0x60)) = (*(int * PTR32 *)(gen_frame + 0x84));
      (*(int * PTR32 *)(gen_frame + 0x430)) = (*(int * PTR32 *)(gen_frame + 0x80));
      (*(int * PTR32 *)(gen_frame + 0x434)) = (*(int * PTR32 *)(gen_frame + 0x84));
      (*(int * PTR32 *)(gen_frame + 0x43c)) = (*(int * PTR32 *)(gen_frame + 0x78));
      (*(int * PTR32 *)(gen_frame + 0x4c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar24 / fVar23))));
      (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar24)));
      uVar13 = F_0067d2b0(pvVar21 GEN_EDX_ARG,"cRadialBlurParam");
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar21 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x40)),0x10);
        fVar26 = (float10)REFG(double, 0x1088108);
      }
      pvVar21 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar20 + 4))) + 8)));
      uVar13 = F_0067d2b0(pvVar21 GEN_EDX_ARG,"cRadialBlurParam");
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar21 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x5c)),0x10);
        fVar26 = (float10)REFG(double, 0x1088108);
      }
      pvVar21 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar20 + 4))) + 0xc)));
      uVar13 = F_0067d2b0(pvVar21 GEN_EDX_ARG,"cRadialBlurParam");
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar21 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
        fVar26 = (float10)REFG(double, 0x1088108);
      }
      (*(int * PTR32 *)(gen_frame + 0x420)) = ((int *)GEN_TOP(0x0));
      (*(int * PTR32 *)(gen_frame + 0x424)) = ((int *)GEN_TOP(0x0));
      piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x78))))) * fVar26))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x430)) = (*(int * PTR32 *)(gen_frame + 0x80));
      (*(int * PTR32 *)(gen_frame + 0x428)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x42c)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x434)) = (*(int * PTR32 *)(gen_frame + 0x84));
      fVar3 = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1690)));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8)));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
      if (!((double)fVar3 < REFG(double, 0x1091858))) {
        ppiVar17 = ((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1690)));
      }
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar20 + 4))) + 0x10)));
      (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x168c))))));
      (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17)))))));
      uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cDonutMergeParam");
      pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x420)),0x20);
        pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      }
    }
    else {
      piVar4 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1684)));
      piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1694)));
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar4;
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x278))) + 4)));
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)pvVar21 + 0x1688))))));
      piVar14 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1698)));
      piVar7 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1680)));
      fVar26 = (float10)*((float *)GEN_TOP(((int)pvVar21 + 0x1688)));
      (*(int * PTR32 *)(gen_frame + 0x430)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x80)) = piVar16;
      fVar23 = GEN_X87((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4))) / fVar26);
      (*(int * PTR32 *)(gen_frame + 0x40)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x434)) = piVar14;
      (*(int * PTR32 *)(gen_frame + 0x438)) = piVar7;
      (*(int * PTR32 *)(gen_frame + 0x84)) = piVar14;
      (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
      (*(int * PTR32 *)(gen_frame + 0x44)) = piVar14;
      (*(int * PTR32 *)(gen_frame + 0x48)) = piVar7;
      (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar4;
      (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar26))));
      (*(float *)(gen_frame + 0x8c)) = (float)fVar23;
      uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cRadialBlurParam");
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
      }
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 4))) + 8)));
      uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cRadialBlurParam");
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
      }
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 4))) + 0xc)));
      uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cRadialBlurParam");
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x40)),0x10);
      }
      fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x169c)));
      fVar26 = (float10)REFG(double, 0x1088108);
      (*(int * PTR32 *)(gen_frame + 0x430)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1694)));
      (*(int * PTR32 *)(gen_frame + 0x434)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1698)));
      (*(int * PTR32 *)(gen_frame + 0x420)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar3 * fVar26))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8)));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
      (*(int * PTR32 *)(gen_frame + 0x424)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x16a0))) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x428)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x16a4))) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x42c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x16a8))) * fVar26))))));
      if (!((double)*((float *)GEN_TOP(((int)pvVar21 + 0x1690))) < REFG(double, 0x1091858))) {
        ppiVar17 = ((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1690)));
      }
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 4))) + 0x10)));
      (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)pvVar21 + 0x168c))))));
      (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17)))))));
      uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cDonutMergeParam");
      if (-1 < (int)uVar13) {
        F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x420)),0x20);
      }
    }
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x18))) = GEN_FLT_TO(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x18))), REFG(float, 0x1087f04));
    F_0067a0f0((*(undefined * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
    pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 0xd & 1) != 0) {
    *((float *)GEN_TOP(((int)pvVar21 + 0xcc))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0xb4))) GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)pvVar20 + 8))) = *((uint *)GEN_TOP(((int)pvVar20 + 8))) & 0xffefffff | 0x680000;
  (*(char *)(gen_frame + 0x37)) = '\0';
  (*(bool *)(gen_frame + 0x97)) = false;
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 10 & 1) != 0) {
    piVar16 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x138)))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,((char *)REFP(0x10ada20)));
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&REFG(undefined, 0x1322824),0x10);
    }
    fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x1664)));
    fVar5 = *((float *)GEN_TOP(((int)pvVar21 + 0x1668)));
    uVar13 = *((uint *)GEN_TOP(((int)pvVar21 + 0x150)));
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
    *((uint *)GEN_TOP(((int)pvVar21 + 0x150))) = (uint)(0.0 < fVar3) * 4 | uVar13 & 0xfffffffb;
    *((uint *)GEN_TOP(((int)pvVar21 + 0x150))) =
         (uint)(0.0 < fVar5) * 8 | *((uint *)GEN_TOP(((int)pvVar21 + 0x150))) & 0xfffffff7;
    piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x166c)));
    iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x138))) + 0xc)));
    piVar14 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1670)));
    uVar9 = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1678)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1674)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
    *((undefined4 *)GEN_TOP((iVar18 + 0x60))) = uVar9;
    piVar7 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
    if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))))) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
    }
    *((int * PTR32 *)GEN_TOP((iVar18 + 100))) = *ppiVar17;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(0x0));
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
    if (!(((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) < ((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))))) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
    }
    if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))))) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
    }
    piVar16 = *ppiVar17;
    *((undefined4 *)GEN_TOP((iVar18 + 0x6c))) = uVar2;
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x68))) = piVar16;
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x138))) + 0x10)));
    (*(int * PTR32 *)(gen_frame + 0x84)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1664)));
    (*(int * PTR32 *)(gen_frame + 0x88)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1668)));
    (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1322820);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cMergeWeight");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x84)),0xc);
    }
    *((float *)GEN_TOP(((int)pvVar21 + 0x14c))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x134))) GEN_EDX_ARG);
    (*(char *)(gen_frame + 0x37)) = '\x01';
  }
  (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(((int)pvVar21 + 0x1584)));
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)pvVar21 + 0x1588)));
  (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP(((int)pvVar21 + 0x158c)));
  F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004eebf0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)(*(int * PTR32 *)(gen_frame + 0x38)));
  if (((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 0xb & 1) != 0) &&
     (!GEN_ISNAN((*(float *)(gen_frame + 0x8))) && !(0.0 <= (*(float *)(gen_frame + 0x8))))) {
    F_004eeb30(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)(*(int * PTR32 *)(gen_frame + 0x24)));
    fVar26 = (float10)REFG(double, 0x1088108);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
    piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x0)) * fVar26 + fVar26))));
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar16;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 - (float10)(*(float *)(gen_frame + 0x4)) * fVar26))));
    (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar14;
    if (!((float10)1 < (float10)*((float *)GEN_TOP(((int)pvVar21 + 0x15c0))))) {
      ppiVar17 = ((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x15c0)));
    }
    iVar18 = *((int *)GEN_TOP(((int)pvVar21 + 0x15b4)));
    piVar7 = *ppiVar17;
    (*(int * PTR32 *)(gen_frame + 0x3b0)) = (*(int * PTR32 *)(gen_frame + 0x18));
    (*(int * PTR32 *)(gen_frame + 0x3b4)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(int * PTR32 *)(gen_frame + 0x3b8)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x3bc)) = piVar14;
    fVar3 = ((float)GEN_TOF((((float10)1 - (float10)*(float *)&REFG(undefined, 0x132281c)) +
                   (float10)*(float *)&REFG(undefined, 0x132281c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))))));
    (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar5 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x15b0))) / (float10)(*(float *)(gen_frame + 0x14)))));
    (*(undefined * PTR32 *)(gen_frame + 0x7c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar5)));
    piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x15ac))) / (float10)(*(float *)(gen_frame + 0x14))))))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar7;
    fVar23 = (float10)fVar3;
    piVar4 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 * fVar23))));
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar4;
    fVar23 = (float10)fVar5;
    pvVar20 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)REFG(double, 0x1094890) / (fVar23 * fVar23)))))));
    (*(undefined * PTR32 *)(gen_frame + 0x7c)) = pvVar20;
    fVar23 = (float10)*((int *)GEN_TOP(((int)pvVar21 + 0x15b4)));
    if (iVar18 < 0) {
      fVar23 = GEN_X87(fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x15b8)));
    piVar10 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x298)))));
    (*(float *)(gen_frame + 0x3c0)) = (float)(fVar23 * fVar26);
    (*(float *)(gen_frame + 0x3c4)) = fVar3;
    (*(float *)(gen_frame + 0x3c8)) = *((float *)GEN_TOP(((int)pvVar21 + 0x15bc)));
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4)));
    (*(float *)(gen_frame + 0x3cc)) = *((float *)GEN_TOP(((int)pvVar21 + 0x15c0)));
    (*(undefined * PTR32 *)(gen_frame + 0x3d4)) = pvVar20;
    (*(float *)(gen_frame + 0x3d0)) = (float)(fVar26 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar20))));
    (*(float *)(gen_frame + 0x3e0)) = *((float *)GEN_TOP(((int)pvVar21 + 0x159c)));
    (*(float *)(gen_frame + 0x3e4)) = *((float *)GEN_TOP(((int)pvVar21 + 0x15a0)));
    (*(float *)(gen_frame + 0x3e8)) = *((float *)GEN_TOP(((int)pvVar21 + 0x15a4)));
    (*(float *)(gen_frame + 0x3ec)) = *((float *)GEN_TOP(((int)pvVar21 + 0x15a8)));
    (*(float *)(gen_frame + 0x3f0)) = *((float *)GEN_TOP(((int)pvVar21 + 0x1590)));
    (*(float *)(gen_frame + 0x3f4)) = *((float *)GEN_TOP(((int)pvVar21 + 0x1594)));
    (*(float *)(gen_frame + 0x3f8)) = *((float *)GEN_TOP(((int)pvVar21 + 0x1598)));
    (*(undefined4 *)(gen_frame + 0x3fc)) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x15c4)));
    (*(float *)(gen_frame + 0x3d8)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar20))) / fVar26);
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar10;
    (*(float *)(gen_frame + 0x3dc)) = ((float)GEN_TOF(((float10)REFG(double, 0x1094890) / (fVar26 * fVar26))));
    uVar13 = F_0067d2b0(piVar10 GEN_EDX_ARG,((char *)REFP(0x10ada44)));
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x3b0)),0x50);
      piVar16 = (*(int * PTR32 *)(gen_frame + 0x38));
      piVar14 = (*(int * PTR32 *)(gen_frame + 0x3c));
    }
    piVar7 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x298)))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x15c8)));
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar7;
    uVar13 = F_0067d2b0(piVar7 GEN_EDX_ARG,((char *)REFP(0x10ada50)));
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x9c)),4);
      piVar16 = (*(int * PTR32 *)(gen_frame + 0x38));
      piVar14 = (*(int * PTR32 *)(gen_frame + 0x3c));
    }
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x15d0)));
    piVar7 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x15cc)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar4;
    piVar10 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x15d4)));
    in_ecx = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x298))) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar10;
    (*(int * PTR32 *)(gen_frame + 0x438)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar10)));
    (*(int * PTR32 *)(gen_frame + 0x48)) = piVar7;
    fVar23 = GEN_X87((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4))) / fVar26);
    (*(int * PTR32 *)(gen_frame + 0x430)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x434)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x80)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x84)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x40)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x44)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar4;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = in_ecx;
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar26))));
    (*(float *)(gen_frame + 0x8c)) = (float)fVar23;
    uVar13 = F_0067d2b0(in_ecx GEN_EDX_ARG,"cRadialBlurParam");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x298))) + 8)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cRadialBlurParam");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x298))) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cRadialBlurParam");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x40)),0x10);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x298))) + 0x10)));
    (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cMergeWeight");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x48)),8);
    }
    iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x298))) + 0x14))) + 8)));
    fVar3 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP(((int)pvVar21 + 0x15ac))) * (float10)REFG(double, 0x1088108)) /
                   (float10)(*(float *)(gen_frame + 0x14)))));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar26 = (float10)fVar3;
    (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18)))))))));
    fVar23 = GEN_X87((float10)(float)(fVar26 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18)))))));
    piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x38))))) - fVar23))));
    (*(int * PTR32 *)(gen_frame + 0x80)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x48)) = piVar16;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c))))) - fVar26))));
    (*(int * PTR32 *)(gen_frame + 0x84)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar14;
    piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x38))))) + fVar23))));
    (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
    fVar3 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c))))) + fVar26);
    (*(float *)(gen_frame + 0x8c)) = fVar3;
    piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))));
    (*(int * PTR32 *)(gen_frame + 0x40)) = piVar7;
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x10))) = piVar7;
    piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar3 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)))))));
    (*(int * PTR32 *)(gen_frame + 0x44)) = piVar7;
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x14))) = piVar7;
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x18))) = piVar16;
    *((int * PTR32 *)GEN_TOP((iVar18 + 0x1c))) = piVar14;
    *((float *)GEN_TOP(((int)pvVar21 + 0x2ac))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x294))) GEN_EDX_ARG);
    (*(bool *)(gen_frame + 0x97)) = true;
  }
  if (((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 0xc & 1) != 0) && ((*(bool *)(gen_frame + 0x97)) != false)) {
    *((float *)GEN_TOP(((int)pvVar21 + 0x39c))) = (*(float *)(gen_frame + 0x0));
    *((float *)GEN_TOP(((int)pvVar21 + 0x3a0))) = (*(float *)(gen_frame + 0x4));
    piVar16 = ((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x1c)) * *(*(int * PTR32 *)(gen_frame + 0x1c)) + (*(int * PTR32 *)(gen_frame + 0x1c))[1] * (*(int * PTR32 *)(gen_frame + 0x1c))[1])));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    fVar26 = (float10)(int)piVar16;
    if ((int)piVar16 < 0) {
      fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT(fVar26)))))));
    *((float *)GEN_TOP(((int)pvVar21 + 0x3a8))) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT(fVar26)))) * (float10)*((float *)GEN_TOP(((int)pvVar21 + 0x15d8))))));
    piVar16 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    piVar14 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094870)));
    if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1508))) & 0x400) != 0) {
      piVar14 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10928e4)));
    }
    fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x3a8)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
    *((float *)GEN_TOP(((int)pvVar21 + 0x3a8))) = (float)((float10)fVar3 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))));
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x3a4))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x15dc)));
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x3c8))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x15e0)));
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x3ac))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1590)));
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x3b0))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1594)));
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x3bc))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x15e4)));
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x3b4))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1598)));
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x3c0))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x15e8)));
    *((float *)GEN_TOP(((int)pvVar21 + 0x3cc))) =
         ((float)GEN_TOF(((float10)1 - (float10)*((float *)GEN_TOP(((int)pvVar21 + 0x1588))))));
    *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x3b8))) = piVar16;
    *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x3c4))) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x15ec)));
    F_0067ce60(((undefined *)GEN_TOP(((int)pvVar21 + 0x374))) GEN_EDX_ARG);
  }
  piVar16 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if ((*(char *)(gen_frame + 0x37)) == '\0') {
    if ((*(bool *)(gen_frame + 0x97)) == false) goto LAB_00686cb6;
    piVar16 = ((int *)GEN_TOP(0x0));
  }
  pvVar20 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x158)))));
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
  uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cMergeWeight");
  if (-1 < (int)uVar13) {
    F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x98)),4);
  }
  if ((*(bool *)(gen_frame + 0x97)) == false) {
    piVar16 = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)(gen_frame + 0x98)) & 0xff808010 | 0x7808010)));
  }
  else {
    piVar16 = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)(gen_frame + 0x98)) & 0xff080111 | 0x7080111)));
  }
  iVar18 = **((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x158)));
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
  *((uint *)GEN_TOP((iVar18 + 0x30))) = (uint)piVar16 & 0x7ffffff;
  *((float *)GEN_TOP(((int)pvVar21 + 0x16c))) = (*(float *)(gen_frame + 0x70));
  F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x154))) GEN_EDX_ARG);
LAB_00686cb6: ;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) & 0xfff7ffff | 0x700000;
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 0xd & 1) != 0) {
    piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1654)));
    iVar18 = *((int *)GEN_TOP(((int)pvVar21 + 0xb8)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar18 + 0x10))) + 0x7c))) + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x420)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x165c)));
    (*(int * PTR32 *)(gen_frame + 0x424)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1658)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x42c)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x428)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / fVar26))));
    fVar23 = (float10)(int)piVar16;
    if ((int)piVar16 < 0) {
      fVar23 = GEN_X87(fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
    piVar16 = ((int *)GEN_TOP(((int)piVar16 - 1)));
    fVar23 = (float10)(float)fVar23;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    fVar24 = GEN_X87((float10)REFG(double, 0x1088108) / fVar23);
    (*(int * PTR32 *)(gen_frame + 0x430)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar24)));
    (*(int * PTR32 *)(gen_frame + 0x434)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - fVar24))));
    fVar24 = (float10)(int)piVar16;
    if ((int)piVar16 < 0) {
      fVar24 = GEN_X87(fVar24 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar24)));
    pvVar20 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0xd8)))));
    fVar24 = (float10)(float)fVar24;
    (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar23 * fVar26) / fVar24))))));
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar26 * (float10)REFG(double, 0x1088108)) / fVar24))))));
    uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cToneMapParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x420)),0x20);
    }
    *((float *)GEN_TOP(((int)pvVar21 + 0xec))) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0xd4))) GEN_EDX_ARG);
  }
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 0xe & 1) != 0) {
    *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0xac))) = GEN_FLT_TO(*((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0xac))), REFG(float, 0x1087f04));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x94))) GEN_EDX_ARG);
  }
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 0xf & 1) != 0) {
    fVar3 = *((float *)GEN_TOP(((int)pvVar21 + 0x16d4)));
    (*(int * PTR32 *)(gen_frame + 0x68)) = ((int *)GEN_TOP(((int)pvVar21 + 0x2b4)));
    F_00676e60(((undefined1 *)(gen_frame + 0x260)),fVar3);
    piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x16d8)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    if (0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))) {
      fVar26 = GEN_X87((float10)1 -
               (float10)1 / ((float10)*(double *)&REFG(undefined, 0x10adc48) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))));
    }
    else {
      fVar26 = -(float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
    }
    fVar23 = (float10)1;
    piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x16dc)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
    fVar26 = (float10)(float)fVar26;
    (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar16;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(double *)&REFG(undefined, 0x10addc8) * fVar26))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x400)) = piVar14;
    piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 * (float10)*(double *)&REFG(undefined, 0x10a1918)))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x404)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x408)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x410)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x418)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x420)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x424)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x414)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x428)) = piVar14;
    piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 * (float10)0))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x430)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x434)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x438)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x400)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) + fVar23))));
    (*(int * PTR32 *)(gen_frame + 0x414)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) + fVar23))));
    (*(int * PTR32 *)(gen_frame + 0x428)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) + fVar23))));
    piVar14 = piVar16;
    if (!(((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) < 0.0)) {
      piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((uint)piVar16 ^ REFG(uint, 0x10920d0)))));
    }
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
    (*(undefined4 *)(gen_frame + 0x344)) = 0;
    (*(undefined4 *)(gen_frame + 0x340)) = 0;
    (*(undefined4 *)(gen_frame + 0x338)) = 0;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) + fVar23))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    (*(undefined4 *)(gen_frame + 0x330)) = 0;
    (*(undefined4 *)(gen_frame + 0x328)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x348)) = piVar14;
    (*(undefined4 *)(gen_frame + 0x324)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x334)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x320)) = piVar14;
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) < (float10)0)) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x6c));
    }
    piVar16 = *ppiVar17;
    (*(int * PTR32 *)(gen_frame + 0x358)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x354)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x350)) = piVar16;
    F_006770a0(((undefined1 *)(gen_frame + 0x220)),GEN_ARGF(*((float *)GEN_TOP(((int)pvVar21 + 0x16e0)))));
    ((undefined4 *)(gen_frame + 0x360))[0] = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16e4)));
    ((undefined4 *)(gen_frame + 0x360))[1] = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16f4)));
    ((undefined4 *)(gen_frame + 0x360))[2] = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1704)));
    (*(undefined4 *)(gen_frame + 0x370)) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16e8)));
    (*(undefined4 *)(gen_frame + 0x374)) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16f8)));
    (*(undefined4 *)(gen_frame + 0x378)) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1708)));
    (*(undefined4 *)(gen_frame + 0x380)) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16ec)));
    (*(undefined4 *)(gen_frame + 0x384)) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x16fc)));
    (*(undefined4 *)(gen_frame + 0x388)) = *((undefined4 *)GEN_TOP(((int)pvVar21 + 0x170c)));
    (*(float *)(gen_frame + 0x390)) = *((float *)GEN_TOP(((int)pvVar21 + 0x16f0)));
    (*(float *)(gen_frame + 0x394)) = *((float *)GEN_TOP(((int)pvVar21 + 0x1700)));
    (*(float *)(gen_frame + 0x398)) = *((float *)GEN_TOP(((int)pvVar21 + 0x1710)));
    puVar12 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0xa0)),(uint)((undefined1 *)(gen_frame + 0x260)),(uint)&(*(int * PTR32 *)(gen_frame + 0x400)))));
    puVar22 = ((undefined4 *)(gen_frame + 0x1a0));
    for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 - 1) {
      *puVar22 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar12 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x120)),(uint)((undefined4 *)(gen_frame + 0x1a0)),(uint)&(*(int * PTR32 *)(gen_frame + 0x320)))));
    puVar22 = ((undefined4 *)(gen_frame + 0x1e0));
    for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 - 1) {
      *puVar22 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar12 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0xe0)),(uint)((undefined4 *)(gen_frame + 0x1e0)),(uint)((undefined1 *)(gen_frame + 0x220)))));
    puVar22 = ((undefined4 *)(gen_frame + 0x160));
    for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 - 1) {
      *puVar22 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar12 = ((undefined4 *)GEN_TOP(F_004ef350(&(*(float *)(gen_frame + 0x3c0)),(uint)((undefined4 *)(gen_frame + 0x160)),(uint)((undefined4 *)(gen_frame + 0x360)))));
    piVar16 = (*(int * PTR32 *)(gen_frame + 0x68));
    puVar22 = ((undefined4 *)(gen_frame + 0x2e0));
    for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 - 1) {
      *puVar22 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar22 = puVar22 + 1;
    }
    pvVar21 = *((undefined * PTR32 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x68))[1]));
    uVar13 = F_0067d2b0(pvVar21 GEN_EDX_ARG,((char *)REFP(0x10adacc)));
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar21 GEN_EDX_ARG,uVar13,((undefined4 *)(gen_frame + 0x2e0)),0x40);
    }
    piVar16[6] = (int)REFG(float, 0x1087f04);
    F_0067a0f0(piVar16 GEN_EDX_ARG);
    pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  }
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 1 & 1) == 0) {
    pvVar20 = ((undefined *)GEN_TOP(((int)pvVar21 + 0x14)));
  }
  else {
    fVar26 = (float10)*(*(int * PTR32 *)(gen_frame + 0x1c));
    if (*(*(int * PTR32 *)(gen_frame + 0x1c)) < 0) {
      fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    iVar18 = (*(int * PTR32 *)(gen_frame + 0x1c))[1];
    (*(int * PTR32 *)(gen_frame + 0x430)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / fVar26))));
    fVar26 = (float10)(*(int * PTR32 *)(gen_frame + 0x1c))[1];
    if (iVar18 < 0) {
      fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    pvVar20 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x178))) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x438)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x153c)));
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP(((int)pvVar21 + 0x1540))))));
    (*(int * PTR32 *)(gen_frame + 0x434)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / fVar26))));
    uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,((char *)REFP(0x10adad4)));
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
    }
    pvVar20 = ((undefined *)GEN_TOP(((int)pvVar21 + 0x174)));
  }
  *((int * PTR32 *)GEN_TOP(((int)pvVar20 + 0x18))) = GEN_FLT_TO(*((int * PTR32 *)GEN_TOP(((int)pvVar20 + 0x18))), REFG(float, 0x1087f04));
  F_0067a0f0(pvVar20 GEN_EDX_ARG);
  piVar16 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x38)))));
  (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10addc0)));
  (*(int * PTR32 *)(gen_frame + 0x68)) = piVar16;
  uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cAlphaThreshold");
  if (-1 < (int)uVar13) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x9c)),4);
  }
  *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x4c))) = GEN_FLT_TO(*((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x4c))), REFG(float, 0x1087f04));
  uVar13 = F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x34))) GEN_EDX_ARG);
  if ((*((byte *)GEN_TOP(((int)pvVar21 + 0x1516))) & 1) != 0) {
    piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1714)));
    iVar18 = *(*(int * PTR32 *)(gen_frame + 0x1c));
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar16;
    fVar26 = (float10)*(*(int * PTR32 *)(gen_frame + 0x1c));
    if (iVar18 < 0) {
      fVar26 = GEN_X87(fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    piVar14 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x1c))[1]));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    fVar23 = (float10)(int)piVar14;
    if ((int)piVar14 < 0) {
      fVar23 = GEN_X87(fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / fVar23))));
    fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
    piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar24 + ((float10)1 - fVar24) * (float10)(float)(fVar26 / fVar23)))))));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) + (float10)1))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))))))))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    piVar7 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0x2d8)))));
    (*(int * PTR32 *)(gen_frame + 0x428)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1718)));
    (*(int * PTR32 *)(gen_frame + 0x42c)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x171c)));
    (*(int * PTR32 *)(gen_frame + 0x430)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1720)));
    (*(int * PTR32 *)(gen_frame + 0x434)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1724)));
    (*(int * PTR32 *)(gen_frame + 0x438)) = *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x1728)));
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8)));
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)))))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x420)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))));
    (*(int * PTR32 *)(gen_frame + 0x424)) = piVar14;
    uVar13 = F_0067d2b0(piVar7 GEN_EDX_ARG,((char *)REFP(0x10adaf0)));
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x420)),0x20);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar21 + 0x2d8))) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar13 = F_0067d2b0(piVar16 GEN_EDX_ARG,"cAlphaThreshold");
    if (-1 < (int)uVar13) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x68)),4);
    }
    *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x2ec))) = GEN_FLT_TO(*((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x2ec))), REFG(float, 0x1087f04));
    uVar13 = F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0x2d4))) GEN_EDX_ARG);
  }
  if (REFG(char, 0x1322818) != '\0') {
    uVar13 = F_006835d0(pvVar21 GEN_EDX_ARG);
  }
  if ((*((uint *)GEN_TOP(((int)pvVar21 + 0x1514))) >> 0x11 & 1) != 0) {
    uVar13 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8)));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) = 0xffffffff;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)GEN_TOP((uVar13 >> 0x1b)));
    puVar12 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar21 + 0xf8)));
    (*(int * PTR32 *)(gen_frame + 0x430)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x434)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)GEN_TOP(0x0));
    pvVar20 = ((undefined *)GEN_TOP(*puVar12));
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)pvVar21 + 0x1660)))));
    uVar13 = F_0067d2b0(pvVar20 GEN_EDX_ARG,"cToneMapParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar20 GEN_EDX_ARG,uVar13,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
    }
    *((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x10c))) = GEN_FLT_TO(*((int * PTR32 *)GEN_TOP(((int)pvVar21 + 0x10c))), REFG(float, 0x1087f04));
    F_0067a0f0(((undefined *)GEN_TOP(((int)pvVar21 + 0xf4))) GEN_EDX_ARG);
    uVar13 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x9c))) << 0x1b;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8))) & 0x7ffffff | uVar13;
  }
  return uVar13;
}

/* ref: FUN_006874c0 */
GEN_OWN GEN_NOFRAME unsigned int F_006874c0(void)
{
  GEN_ENTER(0x6874c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_006874e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006874e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6874e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00687b60((int)this - 0x50 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_006874f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006874f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6874f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00687520 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00687520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x687520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xc))) *
                                      (float10)*((float *)GEN_TOP(((int)this + 0xc))) +
                                     ((float10)*((float *)GEN_TOP(((int)this + 8))) *
                                      (float10)*((float *)GEN_TOP(((int)this + 8))) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*((float *)GEN_TOP(((int)this + 4))) *
                                     (float10)*((float *)GEN_TOP(((int)this + 4))))))))))));
}

/* ref: FUN_00687560 */
GEN_OWN GEN_FRAME uint F_00687560(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x687560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  param_1[3] = (float)((float10)param_2[3] - (float10)param_3[3]);
  return (uint)param_1;
}

/* ref: FUN_00687590 */
GEN_OWN GEN_NOFRAME uint F_00687590(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x687590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = param_2[3];
  fVar6 = param_3[3];
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 - (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 - (float10)fVar4);
  param_1[3] = (float)((float10)fVar5 - (float10)fVar6);
  return (uint)param_1;
}

/* ref: FUN_00687600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687600(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x687600u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[0xc] = (undefined4)gen_fl2bits(param_2);
  in_ecx[0xd] = (undefined4)gen_fl2bits(param_3);
  *in_ecx = uVar1;
  in_ecx[5] = uVar1;
  in_ecx[10] = uVar1;
  in_ecx[0xe] = (undefined4)gen_fl2bits(param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00687660 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00687660(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x687660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[4] = (float)((float10)in_ecx[4] * fVar1);
  in_ecx[5] = (float)(fVar1 * (float10)in_ecx[5]);
  in_ecx[6] = (float)((float10)in_ecx[6] * fVar1);
  in_ecx[8] = (float)(fVar1 * (float10)in_ecx[8]);
  in_ecx[9] = (float)((float10)in_ecx[9] * fVar1);
  in_ecx[10] = (float)(fVar1 * (float10)in_ecx[10]);
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] * fVar1);
  in_ecx[0xd] = (float)(fVar1 * (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)(fVar1 * (float10)in_ecx[0xe]);
  return 0;
}

/* ref: FUN_006876d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006876d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x6876d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[4] = (float)((float10)in_ecx[4] / fVar1);
  in_ecx[5] = (float)((float10)in_ecx[5] / fVar1);
  in_ecx[6] = (float)((float10)in_ecx[6] / fVar1);
  in_ecx[8] = (float)((float10)in_ecx[8] / fVar1);
  in_ecx[9] = (float)((float10)in_ecx[9] / fVar1);
  in_ecx[10] = (float)((float10)in_ecx[10] / fVar1);
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] / fVar1);
  in_ecx[0xd] = (float)((float10)in_ecx[0xd] / fVar1);
  in_ecx[0xe] = (float)((float10)in_ecx[0xe] / fVar1);
  return 0;
}

/* ref: FUN_00687740 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00687740(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x687740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  F_00687660(in_ecx GEN_EDX_FWD,param_2);
  return;
}

/* ref: FUN_00687760 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00687760(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x687760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  F_006876d0(in_ecx GEN_EDX_FWD,param_2);
  return;
}

/* ref: FUN_00687780 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00687780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ulonglong * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x687780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x1c))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_1,param_2,0);
  if (uVar1 != 0) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 3) {
    *param_1 = (*param_1 * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
  }
  return 1;
}

/* ref: FUN_006877f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006877f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6877f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 4) {
    return *((uint *)GEN_TOP((in_ecx + 0xa4 + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00687810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 3) {
    return *((uint *)GEN_TOP((in_ecx + 0xb4 + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00687830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 200 + param_2 * 4)));
}

/* ref: FUN_00687850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x687850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x110))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x150))) = param_3;
  return param_1;
}

/* ref: FUN_00687870 */
GEN_OWN GEN_FRAME uint F_00687870(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x687870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (param_1 - 1) * 0x10 + 0x38;
}

/* ref: FUN_006878c0 */
GEN_OWN GEN_FRAME uint F_006878c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6878c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x10ac578) + param_1 * 4);
}

/* ref: FUN_006878e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006878e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6878e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00687940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x687940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = (int)(char)this[0x44];
  if ((((iVar1 != -1) && (*((int *)GEN_TOP((REFG(int, 0x148809c) + 8 + iVar1 * 4))) != 0)) &&
      (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x148809c) + 8 + iVar1 * 4))) + 0x98))) != 0)) &&
     (((((byte)this[0x48] & 8) != 0 && (this[0x42] != (undefined1)0x0)) &&
      (*(int *)(this + 0x18) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00687980 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + param_2 * 4)));
}

/* ref: FUN_00687990 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00687990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x687990u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return;
}

/* ref: FUN_006879b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006879b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6879b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x18))) = param_1;
  return;
}

/* ref: FUN_006879e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006879e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6879e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  return;
}

/* ref: FUN_00687a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687a30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x687a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *((undefined1 *)GEN_TOP(((param_2 & 1) + 0x2a + param_1))) = param_3;
  return param_2 & 1;
}

/* ref: Singleton_VPostEffectManager_PostEffect_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687a60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10adc40));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00687a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687a90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x14)));
  }
  return *((uint *)GEN_TOP((in_ecx + 0x50 + (param_2 - 1U & 1) * 4)));
}

/* ref: FUN_00687ab0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00687ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x687ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x81))) = 1;
  return 1;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00687ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x687ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = (int)(char)this[0x44];
  if ((((iVar1 != -1) && (*((int *)GEN_TOP((REFG(int, 0x148809c) + 8 + iVar1 * 4))) != 0)) &&
      (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x148809c) + 8 + iVar1 * 4))) + 0x98))) != 0)) &&
     (((byte)this[0x48] & 8) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687b00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687b30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
  param_1[0x14] = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
  param_1[0x20] = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  F_004d6680(param_1 + 0x14 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687be0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687c10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687c40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectChain::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687c70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10adc28));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectLensFlare::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10adc30));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectRoofQuery::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687ce0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x687ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00687d20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00687d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x687d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006884f0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00687d30 */
GEN_OWN GEN_NOFRAME unsigned int F_00687d30(void)
{
  GEN_ENTER(0x687d30u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00687d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x687d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x150,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677890(this_00 GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: FUN_00687e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x687e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0xd4,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00677380(puVar2 GEN_EDX_ARG);
    F_004d6630(puVar2 + 0x14 GEN_EDX_ARG);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
    puVar2[0x14] = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
    F_00677380(puVar2 + 0x20 GEN_EDX_ARG);
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: FUN_00687f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x687f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x148,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677bb0(this_00 GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: FUN_00687fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00687fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x687fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x70,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00677380(puVar2 GEN_EDX_ARG);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adce8));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: FUN_00688090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x688090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x54,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00677380(puVar2 GEN_EDX_ARG);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add3c));
    puVar2[0x14] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: FUN_00688160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x688160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x88,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00677380(puVar2 GEN_EDX_ARG);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add04));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: FUN_00688240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x688240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00677380(puVar2 GEN_EDX_ARG);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add20));
  }
  *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: FUN_00688310 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00688310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x688310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined2 *)GEN_TOP((in_ecx + 0x1738))) = 0;
  *((uint *)GEN_TOP((in_ecx + 0x34c))) = *((uint *)GEN_TOP((in_ecx + 0x34c))) | 1;
  return 1;
}

/* ref: FUN_00688330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x688330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x50,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677380(this_00 GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: Client::Graphics::PostEffect::PostEffectSystem::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006883f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6883f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  REFG(undefined4, 0x148809c) = 0;
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688420(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x688420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adcb0));
  puVar1 = param_1 + 0x54;
  iVar2 = 2;
  do {
    puVar1 = puVar1 - 0x14;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  } while (-1 < iVar2);
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x688470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adccc));
  puVar1 = param_1 + 0x52;
  iVar2 = 2;
  do {
    puVar1 = puVar1 - 0x14;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  } while (-1 < iVar2);
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006884c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6884c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::PostEffect::PostEffectManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006884f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6884f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00678260(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00688520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x688520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x9c,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    F_00677380(puVar2 GEN_EDX_ARG);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add90));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4))) = 0;
    }
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x1c))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_1 * 4)));
}

/* ref: FUN_00688600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_FWD,8)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 10;
    puVar1[1] = param_1;
    uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00688630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_FWD,0xc)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0xc;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00688660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x688660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00688330(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00688670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x2c)));
  puVar2 = ((undefined4 *)GEN_TOP((iVar1 + param_1 * 0x1c)));
  if (0xf < *((uint *)GEN_TOP((iVar1 + 0x14 + param_1 * 0x1c)))) {
    puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
  }
  return (uint)puVar2;
}

/* ref: FUN_006886a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006886a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6886a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x2c)));
  puVar2 = ((undefined4 *)GEN_TOP((iVar1 + param_1 * 0x1c)));
  if (0xf < *((uint *)GEN_TOP((iVar1 + 0x14 + param_1 * 0x1c)))) {
    puVar2 = ((undefined4 *)GEN_TOP(*puVar2));
  }
  return (uint)puVar2;
}

/* ref: FUN_006886d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006886d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6886d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  if ((iVar1 != 0) && (*((undefined * PTR32 *)GEN_TOP((iVar1 + 0x20))) == this)) {
    *((uint *)GEN_TOP((iVar1 + 0x20))) =
         -(uint)(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) != this) & (uint)*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  }
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP((uVar2 + 0x1c))) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = this;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = this;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Scene::Object::vf4 */
GEN_OWN GEN_NOFRAME unsigned int F_00688710(void)
{
  GEN_ENTER(0x688710u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::Object::vf5 */
GEN_OWN GEN_NOFRAME unsigned int F_00688720(void)
{
  GEN_ENTER(0x688720u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::World::vf2 */
GEN_OWN GEN_NOFRAME uint F_00688730(void)
{
  GEN_ENTER(0x688730u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688740 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00688740(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x688740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00688760 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00688760(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x688760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x14))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Camera::vf2 */
GEN_OWN GEN_NOFRAME uint F_00688780(void)
{
  GEN_ENTER(0x688780u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688790 */
GEN_OWN GEN_NOFRAME byte F_00688790(void)
{
  GEN_ENTER(0x688790u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006887a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6887a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006887b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6887b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf19 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006887d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x6887d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf20 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006887f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6887f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf30 */
GEN_OWN GEN_NOFRAME uint F_00688800(void)
{
  GEN_ENTER(0x688800u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf31 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00688810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00688870 */
GEN_OWN GEN_FRAME float10 F_00688870(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x688870u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00688890 */
GEN_OWN GEN_FRAME float10 F_00688890(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x688890u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1)))));
}

/* ref: Client::Graphics::Scene::CharacterUtility::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00688910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x688910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa8);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xa8) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xa4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0xa4) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x98) = 0;
  }
  return;
}

/* ref: FUN_00688990 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00688990(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x688990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ushort uVar1;
  
  *param_1 = REFG(undefined4, 0x10f04d4);
  param_1[1] = REFG(undefined4, 0x10f04d8);
  param_1[2] = REFG(undefined4, 0x10f04dc);
  uVar1 = *((ushort *)GEN_TOP((param_2 + 4)));
  if ((4 < uVar1) && ((uVar1 < 9 || (uVar1 == 10)))) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
  }
  return (uint)param_1;
}

/* ref: FUN_006889d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006889d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x6889d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28)));
    break;
  case 2: ;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c)));
    break;
  case 3: ;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30)));
    break;
  case 4: ;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)));
    break;
  default: ;
    goto switchD_006889dc_default;
  }
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00503570(this_00 GEN_EDX_FWD,param_1,param_3);
    return uVar1;
  }
switchD_006889dc_default: ;
  return 0xffff;
}

/* ref: FUN_00688a30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00688a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b51e00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_00688a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00b51c10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00b51c10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00b51c10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688ad0 */
GEN_OWN GEN_FRAME uint F_00688ad0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x688ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = 4;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return 0;
  case 2: ;
    return 2;
  case 3: ;
    return 1;
  case 4: ;
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf2 */
GEN_OWN GEN_NOFRAME uint F_00688b20(void)
{
  GEN_ENTER(0x688b20u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: CPane::GetBorders */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0x120);
  param_1[1] = *(undefined4 *)(this + 0x124);
  uVar1 = *(undefined4 *)(this + 300);
  param_1[2] = *(undefined4 *)(this + 0x128);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf13 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00688b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xa0, 0);
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  if ((*(undefined * PTR32 *)(this + 0x78) == ((undefined *)GEN_TOP(0x0))) || (*(ushort *)(this + 0x11c) == 0xffff)) {
    puVar3 = &REFG(float, 0x1302d00);
  }
  else {
    uVar1 = F_0064ce50(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0x11c));
    uVar2 = F_00623320(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x11c));
    F_004ef350(((undefined4 *)(gen_frame + 0x40)),uVar2,uVar1);
    puVar3 = ((undefined4 *)(gen_frame + 0x40));
  }
  F_005fec10(param_1 GEN_EDX_ARG,puVar3,this + 0x140);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)(this + 0x78) == ((undefined *)GEN_TOP(0x0))) {
    puVar2 = &REFG(float, 0x1302d00);
    puVar3 = param_1;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return (uint)param_1;
  }
  F_006558a0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,param_1,param_2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00688c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar1 = F_00623360(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf23 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)(this + 0x270) = *param_1;
  *(undefined4 *)(this + 0x274) = param_1[1];
  *(undefined4 *)(this + 0x278) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x27c) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)(this + 0x280) = *param_1;
  *(undefined4 *)(this + 0x284) = param_1[1];
  *(undefined4 *)(this + 0x288) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x28c) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00688cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x688cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x280;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf26 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00688ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x688ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x298))) = param_2;
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf27 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00688d00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x688d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x298)));
}

/* ref: Client::Graphics::Scene::CharacterBase::vf28 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x688d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x29c))) = param_2;
  return param_2;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00688d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x688d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x29c)));
}

/* ref: Client::Graphics::Scene::CharacterBase::vf51 */
GEN_OWN GEN_NOFRAME uint F_00688d30(void)
{
  GEN_ENTER(0x688d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688d50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00688d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x688d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061eec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,1);
  }
  F_009f54d0(((undefined *)GEN_TOP(((int)this + 0x4a0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x414))),1,0);
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x414))) != 0) {
    uVar1 = F_0050c620(*((int *)GEN_TOP(((int)this + 0x414))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x414))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00688da0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00688da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x688da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if (*((int *)GEN_TOP(((int)this + 0x78))) != 0) {
    F_00b825e0(((undefined *)GEN_TOP(((int)this + 0x700))) GEN_EDX_FWD,param_3,param_1,param_2);
    F_0063a2f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,param_1,param_2,param_3);
  }
  return;
}

/* ref: FUN_00688de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x78))) == 0) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x140))))(this GEN_EDX_FWD);
  uVar3 = 0;
  if (uVar2 != 0) {
    this_00 = ((undefined *)GEN_TOP(((int)this + 0x418)));
    do {
      bVar1 = F_009f30c0(this_00 GEN_EDX_ARG,param_1);
      if (bVar1 != 0) {
        uVar2 = F_009f55b0(((undefined *)GEN_TOP((uVar3 * 0x88 + 0x418 + (int)this))) GEN_EDX_ARG,param_1);
        return uVar2;
      }
      uVar3 = uVar3 + 1;
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x88)));
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00688e60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00688e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0064d630(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_2,param_1);
  }
  return;
}

/* ref: FUN_00688e80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00688e80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x688e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x78))) != 0) {
    uVar1 = F_006233a0(*((int *)GEN_TOP((in_ecx + 0x78))) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00688e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0061efe0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00688eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_006233d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00688ed0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00688ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f000(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00688ef0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_00688ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    fVar1 = F_006233b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1);
    return (double)fVar1;
  }
  return 0.0;
}

/* ref: FUN_00688f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688f10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x688f10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP((param_1 + 0x78))) != 0) {
    in_EAX = F_0061efc0(*((int *)GEN_TOP((param_1 + 0x78))) GEN_EDX_FWD,param_2,param_3);
  }
  return in_EAX;
}

/* ref: FUN_00688f30 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00688f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x688f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  float10 fVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x78))) != 0) {
    fVar1 = F_00623400(*((int *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1);
    return (float)fVar1;
  }
  return (float)(float10)0;
}

/* ref: FUN_00688f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f100(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00688fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f0b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00688ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00688ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x688ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f150(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00689040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f1a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00689090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f1f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2);
    return (uint)param_1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_006890d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006890d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6890d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f230(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2);
    return (uint)param_1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00689110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f020(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = (undefined4)REFG(float, 0x1375ad0);
  param_1[1] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  param_1[2] = (undefined4)REFG(float, 0x1375ad8);
  param_1[3] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  return (uint)param_1;
}

/* ref: FUN_00689160 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00689160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061f270(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1,param_2,param_3);
    return;
  }
  return;
}

/* ref: FUN_00689180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0061f070(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_006891a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006891a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6891a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x78))) != 0) {
    uVar1 = F_0061f090(*((int *)GEN_TOP((in_ecx + 0x78))) GEN_EDX_FWD,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006891c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006891c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6891c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x80)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x74)));
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + uVar3 * 4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        in_EAX = F_009bc310(this_00 GEN_EDX_FWD,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return in_EAX;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf63 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00689200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf64 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00689210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf87 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00689220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0x1e;
  if (*(int *)(this + 0x2d8) != 0) {
    uVar2 = F_0061f4f0(*(int *)(this + 0x2d8) GEN_EDX_FWD);
    local_8 = uVar2 + 0x1a;
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar1 = *(int *)(this + 0x7c);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + uVar3 * 4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_006583e0(this_00 GEN_EDX_ARG,local_8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

/* ref: FUN_00689270 */
GEN_OWN GEN_NOFRAME float F_00689270(void)
{
  GEN_ENTER(0x689270u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x10b2a34);
}

/* ref: FUN_00689280 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00689280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x160))) != ((undefined *)GEN_TOP(0x0))) {
    F_0061e400(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x160))) GEN_EDX_FWD);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x160)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x160))) = 0;
    }
  }
  return;
}

/* ref: FUN_006892b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006892b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6892b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint in_ecx;
  undefined * this_00;
  
  in_ecx = F_00406b90(8,0,0);
  if (in_ecx == 0) {
    this_00 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this_00 = ((undefined *)GEN_TOP(F_006207f0(in_ecx GEN_EDX_ARG)));
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x164))) = this_00;
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar1 = F_00632400(this_00 GEN_EDX_ARG);
  return bVar1 != 0;
}

/* ref: FUN_006892f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006892f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6892f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x164))) != ((undefined *)GEN_TOP(0x0))) {
    F_00620800(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x164))) GEN_EDX_FWD);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x164)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
    }
  }
  return;
}

/* ref: FUN_00689350 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00689350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4))) != ((undefined *)GEN_TOP(0x0))) {
    F_00b84960(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4))) GEN_EDX_FWD);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
    }
  }
  return;
}

/* ref: FUN_00689380 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00689380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x80)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x74)));
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *((int *)GEN_TOP((iVar1 + uVar4 * 4)));
      if (iVar3 != 0) {
        F_009bc1e0(iVar3 GEN_EDX_FWD,(undefined1)param_1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf83 */
GEN_OWN GEN_NOFRAME uint F_006893c0(void)
{
  GEN_ENTER(0x6893c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf84 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006893d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6893d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf88 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006893e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6893e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf89 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006893f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6893f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00689400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00689410 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00689410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x689410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = param_2;
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf32 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00689420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf33 */
GEN_OWN GEN_NOFRAME unsigned int F_00689430(void)
{
  GEN_ENTER(0x689430u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf34 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (*(int *)(this + 0x714) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x8c))))(this GEN_EDX_FWD);
  }
  *(uint *)(this + 0x6fc) = param_1;
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,0);
  *(uint *)(this + 0x714) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x714) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  uVar1 = F_00b82430(this + 0x700 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf36 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006894c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6894c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x78))) != 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_006894d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6894d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b82530(in_ecx + 0x700 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf38 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006894e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x6894e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00b825e0(this + 0x700 GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf39 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006894f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6894f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b82190(param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00689500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00b821d0(this + 0x700 GEN_EDX_FWD);
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf41 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00689510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b82200(in_ecx + 0x700 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf42 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b82240(this + 0x700 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00b82390(this + 0x700 GEN_EDX_FWD,param_1,param_2,param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf44 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_00689560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  double dVar1;
  
  dVar1 = F_00b823f0(this + 0x700 GEN_EDX_FWD,param_1,param_2);
  return dVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf45 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00689570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  longlong lVar1;
  byte bVar2;
  
  bVar2 = (byte)*param_1;
  if (*param_2 == 0) {
    lVar1 = ((ulonglong)(((ulonglong)bVar2 < 0x40) ? ((1L << (ulonglong)bVar2)) : 0));
    *(uint *)(this + 0x6f0) = *(uint *)(this + 0x6f0) & ~(uint)lVar1;
    *(uint *)(this + 0x6f4) = *(uint *)(this + 0x6f4) & ~(uint)((ulonglong)lVar1 >> 0x20);
  }
  else {
    lVar1 = ((ulonglong)(((ulonglong)bVar2 < 0x40) ? ((1L << (ulonglong)bVar2)) : 0));
    *(uint *)(this + 0x6f0) = *(uint *)(this + 0x6f0) | (uint)lVar1;
    *(uint *)(this + 0x6f4) = *(uint *)(this + 0x6f4) | (uint)((ulonglong)lVar1 >> 0x20);
  }
  F_0061f2d0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,*(undefined4 *)(this + 0x6f0),*(undefined4 *)(this + 0x6f4));
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf46 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006895d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6895d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  longlong lVar1;
  
  lVar1 = ((ulonglong)(((ulonglong)(byte)*param_1 < 0x40) ? ((1L << (ulonglong)(byte)*param_1)) : 0));
  if (((uint)lVar1 & *(uint *)(this + 0x6f0)) != 0 ||
      ((uint)((ulonglong)lVar1 >> 0x20) & *(uint *)(this + 0x6f4)) != 0) {
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf47 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00689610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return *(ulonglong *)(this + 0x6f0);
}

/* ref: Client::Graphics::Scene::CharacterBase::vf48 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00689620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x78)));
}

/* ref: Client::Graphics::Scene::CharacterBase::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00689630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x2d8)));
}

/* ref: Client::Graphics::Scene::Human::vf50 */
GEN_OWN GEN_NOFRAME uint F_00689650(void)
{
  GEN_ENTER(0x689650u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Human::vf58 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00689660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_1 < 10) {
    if (param_2 != 0) {
      F_00513f60(param_2,0,0);
    }
    if (*(int *)(this + param_1 * 4 + 0x7bc) != 0) {
      F_0050c620(*(int *)(this + param_1 * 4 + 0x7bc),0,0);
      *(undefined4 *)(this + param_1 * 4 + 0x7bc) = 0;
    }
    *(int *)(this + param_1 * 4 + 0x7bc) = param_2;
  }
  return;
}

/* ref: Client::Graphics::Scene::Human::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006896c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6896c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (9 < param_2) {
    return 0;
  }
  return (uint)(*((ushort *)GEN_TOP((in_ecx + 0x782 + param_2 * 6))) >> 10);
}

/* ref: Client::Graphics::Scene::Human::vf65 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006896f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6896f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10af210)),(uint)*(ushort *)(this + 0x778));
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf71 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10af780)),
             (uint)*(ushort *)(this + 0x778),((char *)REFP(0x10af778)),param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf79 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10afb28)),
             (uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x778),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00689790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)(this + 0x7f8);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(this + 0x7f8) = param_1;
  return;
}

/* ref: Client::Graphics::Scene::Human::vf83 */
GEN_OWN GEN_NOFRAME uint F_006897d0(void)
{
  GEN_ENTER(0x6897d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_006897e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006897e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6897e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_1);
  if (0x191 < (ushort)param_1) {
    if ((ushort)param_1 < 0x4b2) {
      if ((ushort)param_1 == 0x4b1) {
        return 0x44d;
      }
      if ((ushort)param_1 == 0x25c) {
        return 0x1f8;
      }
      if ((ushort)param_1 == 0x2bd) {
        return 0x65;
      }
      if ((ushort)param_1 == 0x3e9) {
        return 0x259;
      }
    }
    else {
      if (((ushort)param_1 != 0x2390) && ((ushort)param_1 != 0x23f4)) {
        return uVar1;
      }
switchD_00689806_caseD_cc: ;
      uVar1 = 0x68;
    }
switchD_00689806_caseD_68: ;
    return uVar1;
  }
  if ((ushort)param_1 != 0x191) {
    switch((unsigned int)(uintptr_t)((ushort)param_1)) {
    case 0x66: ;
    case 0x67: ;
    case 0x12d: ;
      return 0x65;
    default: ;
      goto switchD_00689806_caseD_68;
    case 0xca: ;
    case 0xcb: ;
      break;
    case 0xcc: ;
      goto switchD_00689806_caseD_cc;
    }
  }
  return 0xc9;
}

/* ref: FUN_00689950 */
GEN_OWN GEN_FRAME ushort GEN_STDCALL F_00689950(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x689950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = (uint)(ushort)param_1;
  uVar3 = (ushort)param_1;
  switch((unsigned int)(uintptr_t)(uVar2 % 10)) {
  case 1: ;
    if (uVar2 < 0x386) {
      if (uVar2 == 0x385) {
        return (ushort)param_1;
      }
      iVar1 = uVar2 - 0x65;
    }
    else {
      iVar1 = uVar2 - 0x44d;
    }
    if (iVar1 == 0) {
      return (ushort)param_1;
    }
    if (iVar1 == 100) {
      return (ushort)param_1;
    }
    uVar3 = 0xc9;
  case 3: ;
    break;
  case 2: ;
    uVar3 = 0xc9;
    break;
  case 4: ;
    goto switchD_0068996e_caseD_3;
  default: ;
    goto switchD_0068996e_default;
  }
  if ((uVar2 / 100 & 1) != 0) {
switchD_0068996e_caseD_3: ;
    uVar3 = 0x65;
  }
switchD_0068996e_default: ;
  return uVar3;
}

/* ref: FUN_006899f0 */
GEN_OWN GEN_FRAME ushort GEN_STDCALL F_006899f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6899f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if ((ushort)param_1 < 0x25d) {
    if ((ushort)param_1 != 0x25c) {
      if ((ushort)param_1 == 0xcb) {
        return 0xc9;
      }
      if (((ushort)param_1 != 0xcc) && ((ushort)param_1 != 0x1f8)) {
        return (ushort)param_1;
      }
    }
  }
  else if (((ushort)param_1 != 0x2390) && ((ushort)param_1 != 0x23f4)) {
    return (ushort)param_1;
  }
  return 0x68;
}

/* ref: FUN_00689a40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00689a40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x689a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_1);
  if ((ushort)param_1 < 0x322) {
    if ((ushort)param_1 == 0x321) {
      return uVar1;
    }
    if ((ushort)param_1 == 0xc9) {
      return uVar1;
    }
    bVar2 = (ushort)param_1 == 0x2bd;
  }
  else {
    if ((ushort)param_1 == 0x385) {
      return uVar1;
    }
    bVar2 = (ushort)param_1 == 0x44d;
  }
  if (!bVar2) {
    if ((ushort)param_1 < 0x25a) {
      if (((ushort)param_1 != 0x259) && (((ushort)param_1 == 0x12d || ((ushort)param_1 != 0x191))))
      {
        return 0x65;
      }
    }
    else if ((ushort)param_1 != 0x3e9) {
      if ((ushort)param_1 != 0x4b1) {
        return 0x65;
      }
      return 0x44d;
    }
    uVar1 = 0xc9;
  }
  return uVar1;
}

/* ref: FUN_00689ac0 */
GEN_OWN GEN_FRAME ushort GEN_STDCALL F_00689ac0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x689ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  ushort uVar1;
  bool bVar2;
  
  uVar1 = (ushort)param_1;
  if ((uint)(ushort)param_1 % 10 == 2) {
    uVar1 = (ushort)param_1 - 1;
  }
  if (uVar1 < 0x2be) {
    if (uVar1 == 0x2bd) {
      return 0x65;
    }
    if (uVar1 < 0x1f9) {
      if (uVar1 == 0x1f8) {
        return 0x68;
      }
      if (uVar1 == 0xcc) {
        return 0x68;
      }
      if (uVar1 != 0x1f5) {
        return uVar1;
      }
      return 0x65;
    }
    if (uVar1 == 0x259) {
      return 0xc9;
    }
    bVar2 = uVar1 == 0x25c;
  }
  else {
    if (uVar1 < 0x4b2) {
      if (uVar1 == 0x4b1) {
        return 0x44d;
      }
      if (uVar1 == 0x321) {
        return 0xc9;
      }
      if (uVar1 == 0x3e9) {
        return 0x191;
      }
      return uVar1;
    }
    if (uVar1 == 0x2390) {
      return 0x68;
    }
    bVar2 = uVar1 == 0x23f4;
  }
  if (bVar2) {
    return 0x68;
  }
  return uVar1;
}

/* ref: FUN_00689b70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00689b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  uint uVar1;
  short * psVar2;
  
  if (*((short *)GEN_TOP(((int)this + 0x748))) != *param_1) {
    return 0;
  }
  uVar1 = 0;
  psVar2 = param_1;
  do {
    psVar2 = psVar2 + 2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD,uVar1,psVar2);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return 1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf50 */
GEN_OWN GEN_NOFRAME uint F_00689bc0(void)
{
  GEN_ENTER(0x689bc0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Graphics::Scene::Demihuman::vf54 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00689bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::Graphics::Scene::Demihuman::vf58 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00689be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_1 < 5) {
    if (param_2 != 0) {
      F_00513f60(param_2,0,0);
    }
    if (*(int *)(this + param_1 * 4 + 0x768) != 0) {
      F_0050c620(*(int *)(this + param_1 * 4 + 0x768),0,0);
      *(undefined4 *)(this + param_1 * 4 + 0x768) = 0;
    }
    *(int *)(this + param_1 * 4 + 0x768) = param_2;
  }
  return;
}

/* ref: Client::Graphics::Scene::Demihuman::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x689c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (4 < param_2) {
    return 0;
  }
  return (uint)(*((ushort *)GEN_TOP((in_ecx + 0x74c + param_2 * 6))) >> 10);
}

/* ref: Client::Graphics::Scene::Demihuman::vf65 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0148)),(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf66 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0160)),
             (uint)*(ushort *)(this + 0x748),(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf68 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x120))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b0001/skl_d%04db0001.skp",
               (uint)*(ushort *)(this + 0x748),(uint)*(ushort *)(this + 0x748));
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b0001/skl_d%04db0001.skp",0x3f1,
             0x3f1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf69 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0220)),
             (uint)*(ushort *)(this + 0x748),(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf73 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x689d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0274)),
             (uint)*(ushort *)(this + 0x748),param_4,(&REFG(undefined * PTR32, 0x1322a30))[(int)(param_3)]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x689da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if (param_3 != 1) {
    F_00c472af(param_1,param_2,((char *)REFP(0x10b0334)),
               (uint)*(ushort *)(this + 0x748),param_4,param_4);
    return param_1;
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0304)),
             (uint)*(ushort *)(this + 0x748),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf71 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b036c)),
             (uint)*(ushort *)(this + 0x748),((char *)REFP(0x10b0364)),param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf79 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0484)),
             (uint)*(ushort *)(this + 0x748),1,(uint)*(ushort *)(this + 0x748),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00689e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x689e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)(this + 0x780);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(this + 0x780) = param_1;
  return;
}

/* ref: Client::Graphics::Scene::Demihuman::vf83 */
GEN_OWN GEN_NOFRAME uint F_00689eb0(void)
{
  GEN_ENTER(0x689eb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Weapon::vf50 */
GEN_OWN GEN_NOFRAME uint F_00689ec0(void)
{
  GEN_ENTER(0x689ec0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Client::Graphics::Scene::Weapon::vf51 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00689ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x689ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)(*((ushort *)GEN_TOP((in_ecx + 0x73c))) >> 10);
}

/* ref: Client::Graphics::Scene::Weapon::vf58 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (param_2 != 0) {
    F_00513f60(param_2,0,0);
  }
  uVar1 = 0;
  if (*(int *)(this + 0x740) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 0x740),0,0);
    *(undefined4 *)(this + 0x740) = 0;
  }
  *(int *)(this + 0x740) = param_2;
  return uVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf65 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x689f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b079c)),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf66 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b07b0)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf68 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00689f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf69 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00689fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf67 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x689fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b07ec)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00689ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x689ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0824)),
             (uint)*(ushort *)(this + 0x730),param_4,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf71 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0858)),
             (uint)*(ushort *)(this + 0x730),((char *)REFP(0x10b0850)),param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf75 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0888)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf76 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0068a0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68a0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  undefined1 WVar1;
  char * pcVar2;
  char * pcVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  WVar1 = this[0x73a];
  if (WVar1 == (undefined1)0x0) {
    return 0;
  }
  if (*(short *)(this + 0x736) != 0) {
    F_00c472af(param_1,param_2,((char *)REFP(0x10b08b4)),
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1,
               param_4);
    pcVar2 = param_1;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3[-5] = '\0';
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x10,((char *)REFP(0x10b08f4)),(uint)*(ushort *)(this + 0x736));
    F_00c473c8(param_1,param_2,((undefined1 *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0900)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1,
             param_4);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf77 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if (this[0x73b] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0934)),
             (uint)(byte)this[0x73b]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf78 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68a1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined1 WVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  WVar1 = this[0x73e];
  if (WVar1 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)WVar1 < 100) {
    puVar2 = ((undefined4 *)GEN_TOP(F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,4,0)));
    *param_4 = *puVar2;
    F_00c472af(param_1,param_2,((char *)REFP(0x10b0968)),
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1);
    return param_1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,8,0)));
  *param_4 = *puVar2;
  F_00c472af(param_1,param_2,((char *)REFP(0x10b09a0)),(uint)(byte)WVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf79 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68a270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b09bc)),
             (uint)*(ushort *)(this + 0x730),1,(uint)*(ushort *)(this + 0x730),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068a2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68a2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)(this + 0x744);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)(this + 0x744) = param_1;
  return;
}

/* ref: Client::Graphics::Scene::Weapon::vf83 */
GEN_OWN GEN_NOFRAME uint F_0068a2e0(void)
{
  GEN_ENTER(0x68a2e0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Graphics::Scene::Weapon::vf73 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68a2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b09f8)),
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf50 */
GEN_OWN GEN_NOFRAME uint F_0068a320(void)
{
  GEN_ENTER(0x68a320u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Client::Graphics::Scene::Monster::vf58 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68a330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (param_2 != 0) {
    F_00513f60(param_2,0,0);
  }
  uVar1 = 0;
  if (*(int *)(this + 0x73c) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 0x73c),0,0);
    *(undefined4 *)(this + 0x73c) = 0;
  }
  *(int *)(this + 0x73c) = param_2;
  return uVar1;
}

/* ref: Client::Graphics::Scene::Monster::vf65 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68a380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0aa8)),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf66 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0abc)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf68 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x120))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/skl_m%04db0001.skp",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/skl_m%04db0001.skp",1,1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf69 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0b70)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf67 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0bac)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68a4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if (param_3 != 1) {
    F_00c472af(param_1,param_2,((char *)REFP(0x10b0c10)),
               (uint)*(ushort *)(this + 0x730),param_4,param_4);
    return param_1;
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0be4)),
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf71 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0c44)),
             (uint)*(ushort *)(this + 0x730),((char *)REFP(0x10b0c3c)),param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf75 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0c78)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf76 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68a590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  if (this[0x736] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0ca8)),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)this[0x736]
             ,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf77 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68a5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if (this[0x737] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0ce0)),
             (uint)(byte)this[0x737]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf78 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68a620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined1 MVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  MVar1 = this[0x73a];
  if (MVar1 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)MVar1 < 100) {
    puVar2 = ((undefined4 *)GEN_TOP(F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,4,0)));
    *param_4 = *puVar2;
    F_00c472af(param_1,param_2,((char *)REFP(0x10b0d14)),
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)MVar1);
    return param_1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,8,0)));
  *param_4 = *puVar2;
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0d4c)),(uint)(byte)MVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf79 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68a6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0d68)),
             (uint)*(ushort *)(this + 0x730),1,(uint)*(ushort *)(this + 0x730),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf73 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068a6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68a6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0da4)),
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: FUN_0068a720 */
GEN_OWN GEN_FRAME uint F_0068a720(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x68a720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = param_1;
  while (iVar1 - 1U < 0xc5) {
    switch((unsigned int)(uintptr_t)(iVar1 - 1U)) {
    case 0: ;
      return 0x10b0df4;
    case 1: ;
      return 0x10b0e00;
    case 2: ;
      return 0x10b0e0c;
    case 3: ;
      return 0x10b0e18;
    case 4: ;
      return 0x10b0e24;
    case 5: ;
      return 0x10b0e30;
    case 6: ;
      return 0x10b0e40;
    case 7: ;
      return 0x10b0e4c;
    case 8: ;
      return 0x10b0e58;
    case 9: ;
      return 0x10b0e64;
    case 10: ;
      return 0x10b0e70;
    case 0xb: ;
      return 0x10b0e80;
    case 0xc: ;
      return 0x10b0e90;
    case 0xd: ;
      return 0x10b0ea0;
    case 0xe: ;
      return 0x10b0eac;
    case 0xf: ;
      return 0x10b0eb8;
    case 0x10: ;
      return 0x10b0ec8;
    case 0x11: ;
      return 0x10b0ed4;
    case 0x12: ;
      return 0x10b0ee0;
    case 0x13: ;
      return 0x10b0ef0;
    case 0x14: ;
      return 0x10b0f00;
    case 0x15: ;
      return 0x10b0f10;
    case 0x16: ;
      return 0x10b0f20;
    case 0x17: ;
      return 0x10b0f30;
    case 0x18: ;
      return 0x10b0f40;
    case 0x19: ;
      return 0x10b0f50;
    case 0x1a: ;
      return 0x10b0f60;
    case 0x1b: ;
      return 0x10b0f70;
    case 0x1c: ;
      return 0x10b0f7c;
    case 0x1d: ;
      return 0x10b0f88;
    case 0x1e: ;
      return 0x10b0f94;
    case 0x1f: ;
      return 0x10b0fa0;
    case 0x20: ;
      return 0x10b0fb0;
    case 0x21: ;
      return 0x10b0fc0;
    case 0x22: ;
      return 0x10b0fcc;
    case 0x23: ;
      return 0x10b0fdc;
    case 0x24: ;
      return 0x10b0fe8;
    case 0x25: ;
      return 0x10b0ff4;
    default: ;
      goto switchD_0068a730_caseD_26;
    case 0x27: ;
      return 0x10b1004;
    case 0x2b: ;
      return 0x10b1014;
    case 0x2c: ;
    case 0x2d: ;
      iVar1 = 0x2c;
      break;
    case 0x30: ;
      return 0x10b1024;
    case 0x31: ;
      iVar1 = 0x31;
      break;
    case 0x34: ;
      return 0x10b1034;
    case 0x35: ;
      return 0x10b1044;
    case 0x36: ;
      return 0x10b1054;
    case 0x3b: ;
      return 0x10b1064;
    case 0x3c: ;
      return 0x10b1074;
    case 0x3d: ;
      return 0x10b1084;
    case 0x3e: ;
      return 0x10b1090;
    case 0x3f: ;
      return 0x10b10a0;
    case 0x40: ;
      return 0x10b10ac;
    case 0x41: ;
      return 0x10b10bc;
    case 0x42: ;
      return 0x10b10cc;
    case 0x43: ;
      return 0x10b10dc;
    case 0x44: ;
      return 0x10b10ec;
    case 0x45: ;
      return 0x10b10fc;
    case 0x46: ;
      return 0x10b110c;
    case 0x47: ;
      return 0x10b111c;
    case 0x48: ;
      return 0x10b1124;
    case 0x49: ;
      return 0x10b1130;
    case 0x4a: ;
      return 0x10b113c;
    case 0x4b: ;
      return 0x10b114c;
    case 0x4c: ;
      return 0x10b1158;
    case 0x4d: ;
      return 0x10b1164;
    case 0x4e: ;
      return 0x10b1174;
    case 0x4f: ;
      return 0x10b1180;
    case 0x50: ;
      return 0x10b118c;
    case 0x52: ;
      return 0x10b119c;
    case 0x53: ;
      return 0x10b11ac;
    case 0x54: ;
      return 0x10b11b8;
    case 0x55: ;
      return 0x10b11c4;
    case 0x56: ;
      return 0x10b11d4;
    case 0x57: ;
      return 0x10b11e4;
    case 0x58: ;
      return 0x10b11f0;
    case 0x59: ;
      return 0x10b11fc;
    case 0x5a: ;
      return 0x10b1208;
    case 0x5b: ;
      return 0x10b1218;
    case 0x5c: ;
      return 0x10b1224;
    case 0x5d: ;
      return 0x10b1230;
    case 0x5e: ;
      return 0x10b123c;
    case 0x5f: ;
      return 0x10b124c;
    case 0x60: ;
      return 0x10b1258;
    case 0x61: ;
      return 0x10b1264;
    case 0x62: ;
      return 0x10b1270;
    case 99: ;
      return 0x10b127c;
    case 100: ;
      return 0x10b1288;
    case 0x65: ;
      return 0x10b1298;
    case 0x66: ;
      return 0x10b12a8;
    case 0x67: ;
      return 0x10b12b8;
    case 0x68: ;
      return 0x10b12c8;
    case 0x69: ;
      return 0x10b12d8;
    case 0x6a: ;
      return 0x10b12e4;
    case 0x6b: ;
      return 0x10b12f4;
    case 0x6c: ;
      return 0x10b1304;
    case 0x6d: ;
      return 0x10b1310;
    case 0x6e: ;
      return 0x10b131c;
    case 0x6f: ;
      return 0x10b1328;
    case 0x70: ;
      return 0x10b1338;
    case 0x71: ;
      return 0x10b1344;
    case 0x72: ;
      return 0x10b1354;
    case 0x73: ;
      return 0x10b1360;
    case 0x74: ;
      return 0x10b136c;
    case 0x75: ;
      return 0x10b137c;
    case 0x76: ;
      return 0x10b1388;
    case 0x77: ;
      return 0x10b1394;
    case 0x78: ;
      return 0x10b13a0;
    case 0x79: ;
      return 0x10b13ac;
    case 0x7a: ;
      return 0x10b13b8;
    case 0x7b: ;
      return 0x10b13c4;
    case 0x7c: ;
      return 0x10b13d0;
    case 0x7d: ;
      return 0x10b13e0;
    case 0x7e: ;
      return 0x10b13f0;
    case 0x7f: ;
      return 0x10b1400;
    case 0x80: ;
      return 0x10b1410;
    case 0x81: ;
      return 0x10b1418;
    case 0x82: ;
      return 0x10b1420;
    case 0x83: ;
      return 0x10b142c;
    case 0x84: ;
      return 0x10b1438;
    case 0x85: ;
      return 0x10b1444;
    case 0x86: ;
      return 0x10b1450;
    case 0x87: ;
      return 0x10b145c;
    case 0x88: ;
      return 0x10b1468;
    case 0x89: ;
      return 0x10b1474;
    case 0x8a: ;
      return 0x10b1480;
    case 0x8b: ;
      return 0x10b148c;
    case 0x8c: ;
      return 0x10b1498;
    case 0x8d: ;
      return 0x10b14a8;
    case 0x8e: ;
      return 0x10b14b4;
    case 0x8f: ;
      return 0x10b14c4;
    case 0x90: ;
      return 0x10b14d0;
    case 0x91: ;
      return 0x10b14dc;
    case 0x92: ;
      return 0x10b14ec;
    case 0x93: ;
      return 0x10b14f8;
    case 0x94: ;
      return 0x10b1508;
    case 0x95: ;
      return 0x10b1518;
    case 0x96: ;
      return 0x10b1528;
    case 0x97: ;
      return 0x10b1538;
    case 0x98: ;
      return 0x10b1548;
    case 0x99: ;
      return 0x10b1558;
    case 0x9a: ;
      return 0x10b1568;
    case 0x9b: ;
      return 0x10b1578;
    case 0x9c: ;
      return 0x10b1588;
    case 0x9d: ;
      return 0x10b1598;
    case 0x9e: ;
      return 0x10b15a4;
    case 0x9f: ;
      return 0x10b15b0;
    case 0xa0: ;
      return 0x10b15c0;
    case 0xa1: ;
      return 0x10b15cc;
    case 0xa2: ;
      return 0x10b15dc;
    case 0xa3: ;
      return 0x10b15e8;
    case 0xa4: ;
      return 0x10b15f4;
    case 0xa5: ;
      return 0x10b1604;
    case 0xa6: ;
      return 0x10b1610;
    case 0xa7: ;
      return 0x10b1620;
    case 0xa8: ;
      return 0x10b1630;
    case 0xa9: ;
      return 0x10b1640;
    case 0xaa: ;
      return 0x10b1650;
    case 0xab: ;
      return 0x10b165c;
    case 0xac: ;
      return 0x10b1668;
    case 0xad: ;
      return 0x10b1674;
    case 0xae: ;
      return 0x10b1684;
    case 0xaf: ;
      return 0x10b1694;
    case 0xb0: ;
      return 0x10b16a4;
    case 0xb1: ;
      return 0x10b16b0;
    case 0xb2: ;
      return 0x10b16bc;
    case 0xb3: ;
      return 0x10b16cc;
    case 0xb4: ;
      return 0x10b16dc;
    case 0xb5: ;
      return 0x10b16e8;
    case 0xb6: ;
      return 0x10b16f4;
    case 0xb7: ;
      return 0x10b1700;
    case 0xb8: ;
      return 0x10b170c;
    case 0xb9: ;
      return 0x10b171c;
    case 0xba: ;
      return 0x10b1728;
    case 0xbb: ;
      return 0x10b1734;
    case 0xbe: ;
      return 0x10b1740;
    case 0xbf: ;
      return 0x10b174c;
    case 0xc1: ;
      return 0x10b1758;
    case 0xc2: ;
      return 0x10b1768;
    case 0xc3: ;
      return 0x10b1778;
    case 0xc4: ;
      return 0x10b1788;
    }
  }
switchD_0068a730_caseD_26: ;
  return 0x10b1798;
}

/* ref: Client::Graphics::Scene::Terrain::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068af50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68af50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  F_006aecf0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Terrain::vf6 */
GEN_OWN GEN_NOFRAME unsigned int F_0068af90(void)
{
  GEN_ENTER(0x68af90u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0068afb0 */
GEN_OWN GEN_FRAME uint F_0068afb0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x68afb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG,param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  return uVar1;
}

/* ref: FUN_0068afe0 */
GEN_OWN GEN_NOFRAME float F_0068afe0(void)
{
  GEN_ENTER(0x68afe0u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x10b2a34);
}

/* ref: FUN_0068aff0 */
GEN_OWN GEN_FRAME uint F_0068aff0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68aff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0062e310(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_0068b010 */
GEN_OWN GEN_FRAME uint F_0068b010(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x68b010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0062e350(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0068b020 */
GEN_OWN GEN_FRAME uint F_0068b020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x68b020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b040 */
GEN_OWN GEN_NOFRAME unsigned int F_0068b040(void)
{
  GEN_ENTER(0x68b040u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0068b050 */
GEN_OWN GEN_FRAME uint F_0068b050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x68b050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b070 */
GEN_OWN GEN_NOFRAME unsigned int F_0068b070(void)
{
  GEN_ENTER(0x68b070u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::BGManager::vf2 */
GEN_OWN GEN_NOFRAME uint F_0068b080(void)
{
  GEN_ENTER(0x68b080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b090 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068b090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68b090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 4))))((int)this + 0x70);
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x224)));
  if (uVar3 != 0) {
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x220))) != 0) {
      iVar4 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((iVar4 + *((int *)GEN_TOP(((int)this + 0x224))))));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0xa0;
      } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0x220))));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x224)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      if (puVar2[-4] == 0) {
        uVar6 = F_00406b30(puVar2 - 4);
        uVar3 = (uint)uVar6;
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,3);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x22c))) != 0) {
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x228))) != 0) {
      iVar4 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((iVar4 + *((int *)GEN_TOP(((int)this + 0x22c))))));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x80;
      } while (uVar5 < *((uint *)GEN_TOP(((int)this + 0x228))));
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x22c)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      if (puVar2[-4] != 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,3);
        *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
        return uVar3;
      }
      uVar6 = F_00406b30(puVar2 - 4);
      uVar3 = (uint)uVar6;
      *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
    }
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf26 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068b1a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68b1a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x0)) + 0)) = (byte)(int)TRUNC((double)param_2 * *(double *)&REFG(undefined, 0x1088100));
  *((byte *)GEN_TOP((in_ecx + 0x8a))) = (byte)(*(ushort *)(gen_frame + 0x0));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  return (byte)(*(ushort *)(gen_frame + 0x0));
}

/* ref: Client::Graphics::Scene::BGObject::vf27 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_0068b1e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68b1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((byte *)GEN_TOP((in_ecx + 0x8a))) / (float10)*(double *)&REFG(undefined, 0x1088100)))));
}

/* ref: FUN_0068b210 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_0068b210(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x68b210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  uint uVar1;
  float * pfVar2;
  float10 fVar3;
  
  fVar3 = (float10)REFG(double, 0x1088108);
  uVar1 = 0;
  pfVar2 = ((float *)GEN_TOP((param_1 + 4)));
  do {
    if ((~param_2 & 1 << GEN_SHC((byte)uVar1, (unsigned int)(uintptr_t)uVar1)) == 0) {
      if (!((float10)((float)GEN_TOF(((float10)pfVar2[1] *
                             (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[6] +
                                                              (float10)param_3[2]) * fVar3))) +
                            ((float10)*pfVar2 *
                             (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[5] +
                                                              (float10)param_3[1]) * fVar3))) +
                            (float10)pfVar2[-1] *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[4] +
                                                             (float10)*param_3) * fVar3))))))) -
            (float10)pfVar2[2] <=
           (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)pfVar2[1]))) *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[6] -
                                                             (float10)param_3[2]) * fVar3))) +
                           ((float10)((float)GEN_TOF(ABS((float10)*pfVar2))) *
                            (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[5] -
                                                             (float10)param_3[1]) * fVar3))) +
                           (float10)((float)GEN_TOF(ABS((float10)pfVar2[-1]))) *
                           (float10)((float)GEN_TOF(((float10)(float)((float10)param_3[4] - (float10)*param_3
                                                            ) * fVar3))))))))) {
        return 0;
      }
    }
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 4;
  } while (uVar1 < 6);
  return 1;
}

/* ref: FUN_0068b380 */
GEN_OWN GEN_NOFRAME unsigned int F_0068b380(void)
{
  GEN_ENTER(0x68b380u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0068b390 */
GEN_OWN GEN_NOFRAME unsigned int F_0068b390(void)
{
  GEN_ENTER(0x68b390u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0068b3a0 */
GEN_OWN GEN_NOFRAME unsigned int F_0068b3a0(void)
{
  GEN_ENTER(0x68b3a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0068b3b0 */
GEN_OWN GEN_NOFRAME unsigned int F_0068b3b0(void)
{
  GEN_ENTER(0x68b3b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0068b3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068b3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00625bc0(*((undefined4 *)GEN_TOP(((int)this + 0x70))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0068b3d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068b3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x78))) = param_1;
  return;
}

/* ref: FUN_0068b400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068b400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x7c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x7c))) = param_1;
  return in_EAX;
}

/* ref: FUN_0068b430 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068b430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x78)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x78))) = param_1;
  return;
}

/* ref: FUN_0068b460 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068b460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x7c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x7c))) = param_1;
  return;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf6 */
GEN_OWN GEN_NOFRAME unsigned int F_0068b490(void)
{
  GEN_ENTER(0x68b490u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0068b4a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068b4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x58c)));
  if (uVar1 < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x588)));
      do {
        if (*piVar3 == param_1) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < uVar1);
    }
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x588))) + uVar1 * 4))) = param_1;
    *((int *)GEN_TOP(((int)this + 0x58c))) = *((int *)GEN_TOP(((int)this + 0x58c))) + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0068b500 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068b500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x58c)));
  uVar5 = 0;
  uVar4 = uVar3;
  if (uVar3 != 0) {
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x588)));
    do {
      uVar4 = uVar5;
      if (*piVar6 == param_1) break;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
      uVar4 = uVar3;
    } while (uVar5 < uVar3);
  }
  if (uVar4 < uVar3) {
    *((uint *)GEN_TOP(((int)this + 0x58c))) = uVar3 - 1;
    if (uVar4 < uVar3 - 1) {
      do {
        iVar2 = uVar4 * 4;
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x588))) + iVar1))) =
             *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x588))) + 4 + iVar2)));
      } while (uVar4 < *((uint *)GEN_TOP(((int)this + 0x58c))));
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x588))) + *((int *)GEN_TOP(((int)this + 0x58c))) * 4))) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_0068b590 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068b590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = F_0068b500(this GEN_EDX_FWD,param_1);
    if (bVar1 != 0) {
      bVar1 = F_0068b4a0(this GEN_EDX_ARG,param_1);
      return bVar1 != 0;
    }
  }
  return 0;
}

/* ref: FUN_0068b5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068b5d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x68b5d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  *((undefined1 *)GEN_TOP((param_1 + 0x1e5))) = param_5;
  *((float *)GEN_TOP((param_1 + 0x1e8))) = param_2;
  *((undefined1 *)GEN_TOP((param_1 + 0x1e6))) = param_6;
  *((float *)GEN_TOP((param_1 + 0x1ec))) = param_3;
  F_00983ae0(param_1 + 0x70 GEN_EDX_FWD,param_4);
  return param_4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068b610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68b610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)(this + 0x234) != ((undefined *)GEN_TOP(0x0))) {
    F_009bc2a0(*(undefined * PTR32 *)(this + 0x234) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_0068b620 */
GEN_OWN GEN_FRAME uint F_0068b620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x68b620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b640 */
GEN_OWN GEN_FRAME uint F_0068b640(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x68b640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *((byte *)GEN_TOP((param_1 + 0x1e4))) = *((byte *)GEN_TOP((param_1 + 0x1e4))) & 0xef;
  return param_1;
}

/* ref: FUN_0068b650 */
GEN_OWN GEN_NOFRAME unsigned int F_0068b650(void)
{
  GEN_ENTER(0x68b650u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::VfxObject::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068b660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x68b660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP((in_ecx + 0x290)));
  if (param_3 != 0x2d) {
    puVar2 = ((undefined4 *)GEN_TOP((in_ecx + 0x250)));
  }
  puVar3 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::VfxObject::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068b690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1);
  return uVar1 + 0x30;
}

/* ref: Client::Graphics::Scene::VfxObject::vf20 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0068b6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68b6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_0068b6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068b6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x234))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_009bc350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x234))) GEN_EDX_FWD,param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_0068b710 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068b710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68b710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x234))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_009bc2e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x234))) GEN_EDX_FWD);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_0068b730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068b730(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68b730u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_EAX = 0;
  
  *((byte *)GEN_TOP((param_1 + 0x1e4))) = *((byte *)GEN_TOP((param_1 + 0x1e4))) | 8;
  *((float *)GEN_TOP((param_1 + 0x1f0))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 500))) = 0;
  if ((*((undefined * PTR32 *)GEN_TOP((param_1 + 0x234))) != ((undefined *)GEN_TOP(0x0))) && (param_2 <= 0.0)) {
    in_EAX = F_009bc2a0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x234))) GEN_EDX_FWD);
  }
  return in_EAX;
}

/* ref: FUN_0068b780 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068b780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x68b780u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *((float *)GEN_TOP((in_ecx + 0x1f8))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x1fc))) = param_3;
  *((float *)GEN_TOP((in_ecx + 0x200))) = param_4;
  *((float *)GEN_TOP((in_ecx + 0x204))) = param_5;
  return;
}

/* ref: FUN_0068b7c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068b7c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68b7c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x204))) = param_2;
  return;
}

/* ref: FUN_0068b7e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068b7e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68b7e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x228))) = param_2;
  return;
}

/* ref: FUN_0068b800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068b800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68b800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x18, 8);
  float10 fVar1;
  float fVar2;
  uint in_EAX = 0;
  float fVar3;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x1e4))) & 1) != 0) {
    in_EAX = F_009bc070(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x234))) GEN_EDX_FWD,&(*(char *)(gen_frame + 0x13)),&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x4)),
                          &(*(float *)(gen_frame + 0x0)));
    fVar2 = REFG(float, 0x1087f04);
    fVar3 = *((float *)GEN_TOP(((int)this + 0x21c)));
    if ((*(char *)(gen_frame + 0x13)) == '\0') {
      if ((fVar3 <= 0.0) && (*((float *)GEN_TOP(((int)this + 0x218))) <= 0.0)) {
        *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
        fVar3 = fVar2;
      }
      else {
        *((undefined4 *)GEN_TOP(((int)this + 0x208))) = *((undefined4 *)GEN_TOP(((int)this + 0x218)));
      }
      *((float *)GEN_TOP(((int)this + 0x20c))) = fVar3;
      fVar3 = *((float *)GEN_TOP(((int)this + 0x220)));
      if ((fVar3 <= 0.0) && (*((float *)GEN_TOP(((int)this + 0x224))) <= 0.0)) {
        fVar3 = *((float *)GEN_TOP(((int)this + 0x228)));
        (*(float *)(gen_frame + 0x0)) = fVar3;
        fVar1 = (float10)*(double *)&REFG(undefined, 0x1094818);
        *((float *)GEN_TOP(((int)this + 0x214))) = fVar3;
        *((float *)GEN_TOP(((int)this + 0x210))) = (float)((float10)fVar3 * fVar1);
        return in_EAX;
      }
    }
    else {
      if ((fVar3 <= 0.0) && (*((float *)GEN_TOP(((int)this + 0x218))) <= 0.0)) {
        *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = (*(undefined4 *)(gen_frame + 0xc));
        *((undefined4 *)GEN_TOP(((int)this + 0x208))) = (*(undefined4 *)(gen_frame + 0x8));
      }
      else {
        *((float *)GEN_TOP(((int)this + 0x20c))) = fVar3;
        *((undefined4 *)GEN_TOP(((int)this + 0x208))) = *((undefined4 *)GEN_TOP(((int)this + 0x218)));
      }
      fVar3 = *((float *)GEN_TOP(((int)this + 0x220)));
      if ((fVar3 <= 0.0) && (*((float *)GEN_TOP(((int)this + 0x224))) <= 0.0)) {
        *((undefined4 *)GEN_TOP(((int)this + 0x210))) = (*(undefined4 *)(gen_frame + 0x4));
        *((float *)GEN_TOP(((int)this + 0x214))) = (*(float *)(gen_frame + 0x0));
        return in_EAX;
      }
    }
    *((float *)GEN_TOP(((int)this + 0x210))) = fVar3;
    *((undefined4 *)GEN_TOP(((int)this + 0x214))) = *((undefined4 *)GEN_TOP(((int)this + 0x224)));
  }
  return in_EAX;
}

/* ref: FUN_0068b950 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068b950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68b950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x22c))) = param_2;
  return;
}

/* ref: FUN_0068b970 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068b970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68b970u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x230))) = param_2;
  return;
}

/* ref: FUN_0068b9a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068b9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68b9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 4))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  uVar2 = 0;
  if (*(short *)this != 0) {
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)this);
  }
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    *(undefined2 *)this = 0;
    return 0;
  }
  F_00406b30(*((int *)GEN_TOP(((int)this + 8))));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined2 *)this = 0;
  return 0;
}

/* ref: FUN_0068ba30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068ba30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68ba30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0xe094 + param_2 * 4)));
}

/* ref: FUN_0068ba50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068ba50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68ba50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0xe09d)));
}

/* ref: FUN_0068ba60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068ba60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68ba60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xe0a0))) + 4 + param_2 * 0xc)));
}

/* ref: FUN_0068ba80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068ba80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68ba80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe0a0))) + 8 + param_1 * 0xc))) + param_2 * 4)));
}

/* ref: FUN_0068bad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068bad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68bad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0068bb00 */
GEN_OWN GEN_FRAME uint F_0068bb00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68bb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((float10)*((float *)GEN_TOP((param_1 + 4))) < (float10)*((float *)GEN_TOP((param_2 + 4)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0068bb20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068bb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x68bb20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_3 * 0xe0c0 + 0x30 + in_ecx)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return (uint)puVar1;
}

/* ref: FUN_0068bb50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068bb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68bb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0xe0c0 + 0x30 + in_ecx;
}

/* ref: FUN_0068bb70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068bb70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68bb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 8))) * 0xe0c0 + 0x10 + in_ecx;
}

/* ref: FUN_0068bb80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068bb80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68bb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: FUN_0068bb90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068bb90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68bb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0xe0c0 + 0x10 + in_ecx;
}

/* ref: FUN_0068bbb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0068bbb0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x68bbb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  uint uVar1;
  
  if ((double)param_1 < *(double *)&REFG(undefined, 0x10ac2d0)) {
    return 0;
  }
  uVar1 = 1;
  if (!((double)param_1 < *(double *)&REFG(undefined, 0x10b2a60))) {
    uVar1 = 2;
  }
  return uVar1;
}

/* ref: FUN_0068bc00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068bc00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68bc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xe0f0))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0xe0f4))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xe0f8))) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::Attach::vf4 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068bc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68bc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x38) != 0) {
    F_0065be20((undefined *)this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068bc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x68bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))
                    (this + 4 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::ResourceList::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_0068bc70(void)
{
  GEN_ENTER(0x68bc70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0068bd00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068bd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68bd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
  if ((iVar1 != 0) && (*((uint *)GEN_TOP((iVar1 + 0x20))) == param_1)) {
    *((uint *)GEN_TOP((iVar1 + 0x20))) =
         -(uint)(*((uint *)GEN_TOP((param_1 + 0x1c))) != param_1) & *((uint *)GEN_TOP((param_1 + 0x1c)));
  }
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 0x1c))) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *((uint *)GEN_TOP((param_1 + 0x18))) = param_1;
  *((uint *)GEN_TOP((param_1 + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x20))) == 0) {
    *((uint *)GEN_TOP(((int)this + 0x20))) = param_1;
    *((uint *)GEN_TOP((param_1 + 0x1c))) = param_1;
    *((uint *)GEN_TOP((param_1 + 0x18))) = param_1;
    *((undefined * PTR32 *)GEN_TOP((param_1 + 0x14))) = this;
    return 0;
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x18))) + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x18)));
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *((undefined * PTR32 *)GEN_TOP((param_1 + 0x14))) = this;
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf4 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068bd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68bd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0x28);
  while (piVar2 != ((int *)GEN_TOP(0x0))) {
    if ((*(byte *)(piVar2 + 9) & 1) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_FWD);
      piVar2 = ((int *)GEN_TOP(piVar2[10]));
    }
    else {
      piVar1 = ((int *)GEN_TOP(piVar2[10]));
      uVar3 = piVar2[9] & 0xfffffffc;
      piVar2[9] = piVar2[9] & 3;
      piVar2[10] = 0;
      if (uVar3 != 0) {
        *((int * PTR32 *)GEN_TOP((uVar3 + 0x28))) = piVar1;
      }
      piVar2 = piVar1;
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        piVar1[9] = piVar1[9] & 3U | uVar3;
      }
    }
  }
  return;
}

/* ref: Client::Graphics::Scene::World::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068bdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68bdd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x28); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[10]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_0068bdf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068bdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68bdf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0xe0, 0);
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_2;
  puVar1 = ((undefined4 *)GEN_TOP(F_004f11a0(((undefined1 *)(gen_frame + 0x40)),(int)this + 0x80,*((int *)GEN_TOP(((int)this + 0xc0))) + 0x50)));
  puVar3 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  F_004f2ec0(((undefined4 *)(gen_frame + 0x80)) GEN_EDX_ARG);
  puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1];
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_004ee790(&(*(float *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined4 *)(gen_frame + 0x80)));
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_004ee790(&(*(float *)(gen_frame + 0x30)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined4 *)(gen_frame + 0x80)));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x8)));
  F_004bd580(&(*(float *)(gen_frame + 0x30)) GEN_EDX_ARG);
  *(*(float * PTR32 *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x0));
  (*(float * PTR32 *)(gen_frame + 0x18))[1] = (*(float *)(gen_frame + 0x4));
  (*(float * PTR32 *)(gen_frame + 0x18))[2] = (*(float *)(gen_frame + 0x8));
  (*(float * PTR32 *)(gen_frame + 0x18))[4] = (*(float *)(gen_frame + 0x30));
  (*(float * PTR32 *)(gen_frame + 0x18))[5] = (*(float *)(gen_frame + 0x34));
  (*(float * PTR32 *)(gen_frame + 0x18))[6] = (*(float *)(gen_frame + 0x38));
  return (uint)(*(float * PTR32 *)(gen_frame + 0x18));
}

/* ref: FUN_0068bf80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068bf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68bf80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 0x60)));
  fVar2 = *((float *)GEN_TOP(((int)this + 0x30)));
  (*(float *)(gen_frame + 0x1c)) = *((float *)GEN_TOP(((int)this + 0x78)));
  (*(float *)(gen_frame + 0x18)) = *((float *)GEN_TOP(((int)this + 0x74)));
  fVar3 = (float10)*((float *)GEN_TOP(((int)this + 0x78)));
  fVar4 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 100))) -
                          (float10)*((float *)GEN_TOP(((int)this + 0x34)))))));
  fVar5 = (float10)*((float *)GEN_TOP(((int)this + 0x74)));
  fVar6 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x68))) -
                          (float10)*((float *)GEN_TOP(((int)this + 0x38)))))));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar4 * fVar3 - fVar6 * fVar5);
  (*(float *)(gen_frame + 0x18)) = *((float *)GEN_TOP(((int)this + 0x70)));
  fVar7 = (float10)*((float *)GEN_TOP(((int)this + 0x70)));
  fVar8 = GEN_X87((float10)(float)((float10)fVar1 - (float10)fVar2));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar7 * fVar6 - fVar8 * fVar3);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar5 * fVar8 - fVar4 * fVar7);
  F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_FWD);
  param_1[1] = (*(float *)(gen_frame + 0x4));
  *param_1 = (*(float *)(gen_frame + 0x0));
  param_1[2] = (*(float *)(gen_frame + 0x8));
  return (uint)param_1;
}

/* ref: FUN_0068c030 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068c030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68c030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  F_004d6630(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  return (uint)this;
}

/* ref: FUN_0068c0b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068c0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68c0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x58))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x58)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x60)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 100))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 100))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 100)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x68))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x68))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x6c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6c)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x70))) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x70))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_0068c1a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068c1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68c1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x120, 0);
  undefined * this_00;
  float * pfVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  undefined4 * puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x30)));
  if (*((int *)GEN_TOP(((int)this + uVar3 * 4 + 0x34))) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + uVar3 * 4 + 0x34))) + 0x10))))
              (*((undefined4 *)GEN_TOP(((int)this + uVar3 * 4 + 0x34))));
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x30))) * 4 + 0x34))) + 0xc0)));
    pfVar1 = ((float *)GEN_TOP(F_004f45d0(((undefined4 *)(gen_frame + 0x40)),(int)this_00 + 0x10)));
    pfVar5 = ((float *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    fVar7 = (float10)*((float *)GEN_TOP(((int)this + 0x18)));
    fVar8 = (float10)*((float *)GEN_TOP(((int)this + 0x14)));
    fVar9 = (float10)*((float *)GEN_TOP(((int)this + 0x10)));
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf0)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar9 * (float10)((float *)(gen_frame + 0xc0))[0
                                                  ]) + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0xd0))))))
                                      + (float10)(float)(fVar7 * (float10)(*(float *)(gen_frame + 0xe0)))))))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf4)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0xc0))[1] *
                                                                        fVar9) +
                                                       (float10)(float)((float10)(*(float *)(gen_frame + 0xd4)) * fVar8))))
                                      + (float10)(float)((float10)(*(float *)(gen_frame + 0xe4)) * fVar7)))))));
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar9 * (float10)((float *)(gen_frame + 0xc0))[2
                                                  ]) + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0xd8))))))
                                      + (float10)(float)(fVar7 * (float10)(*(float *)(gen_frame + 0xe8)))))))));
    fVar7 = ((float10)GEN_TOD(fsin((float10)*((float *)GEN_TOP(((int)this + 0x28))))));
    fVar8 = ((float10)GEN_TOD(fcos((float10)*((float *)GEN_TOP(((int)this + 0x28))))));
    (*(float *)(gen_frame + 0x80)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(float *)(gen_frame + 0x84)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF(-(float10)(float)fVar7));
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float *)(gen_frame + 0x94)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    F_0065ec40(&(*(float *)(gen_frame + 0x80)) GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x20)))));
    F_0065ed60(&(*(float *)(gen_frame + 0x80)) GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x24)))));
    pfVar1 = ((float *)GEN_TOP(F_004ef350(((undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x80)),(uint)((float *)(gen_frame + 0xc0)))));
    pfVar5 = ((float *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puVar2 = ((undefined4 *)GEN_TOP(F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0xc0)))));
    puVar6 = ((undefined4 *)(gen_frame + 0x40));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = F_00621fc0(this_00 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x40)));
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::DrawObject::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068c480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68c480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx + 0x30;
}

/* ref: Client::Graphics::Scene::DrawObject::vf18 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068c490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68c490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068c4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
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
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068c540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68c540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
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
  return (uint)param_1;
}

/* ref: FUN_0068c5c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068c5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68c5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b14060(REFG(undefined4, 0x1370c1c) GEN_EDX_FWD,(undefined1)param_1);
  *((uint *)GEN_TOP(((int)this + 0x60))) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  *((undefined * PTR32 *)GEN_TOP((uVar1 + 4))) = this;
  return 1;
}

/* ref: FUN_0068c5f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068c5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68c5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    uVar1 = F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x60))));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  }
  return uVar1;
}

/* ref: FUN_0068c610 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_0068c610(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68c610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x140, 0);
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
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  fVar1 = param_2[0x10];
  fVar2 = param_2[0x11];
  fVar3 = param_2[0x12];
  fVar4 = param_2[0x13];
  fVar5 = param_2[0xc];
  fVar6 = param_2[0xd];
  fVar7 = param_2[0xe];
  fVar8 = param_2[0xf];
  ((float *)(gen_frame + 0xa0))[0] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[1] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[2] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[3] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[4] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[5] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[6] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[7] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[8] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[9] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[10] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0xb] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0xc] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0xd] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0xe] = fVar3 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0xf] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0x10] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x11] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x12] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x13] = fVar4 * 0.0;
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  fVar13 = param_2[4];
  fVar14 = param_2[5];
  fVar15 = param_2[6];
  fVar16 = param_2[7];
  ((float *)(gen_frame + 0xa0))[0x14] = fVar1 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x15] = fVar2 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x16] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x17] = fVar4 * 0.0;
  fVar17 = param_2[8];
  fVar18 = param_2[9];
  fVar19 = param_2[10];
  fVar20 = param_2[0xb];
  ((float *)(gen_frame + 0xa0))[0x18] = fVar1 * REFG(float, 0x1090708);
  ((float *)(gen_frame + 0xa0))[0x19] = fVar2 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x1a] = fVar3 * REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xa0))[0x1b] = fVar4 * 0.0;
  ((float *)(gen_frame + 0xa0))[0x1c] = fVar1;
  ((float *)(gen_frame + 0xa0))[0x1d] = fVar2;
  ((float *)(gen_frame + 0xa0))[0x1e] = fVar3;
  ((float *)(gen_frame + 0xa0))[0x1f] = fVar4;
  uVar21 = 0;
  do {
    fVar1 = *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xa0)) + uVar21 + 8)));
    fVar2 = *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xa0)) + uVar21 + 4)));
    fVar3 = *((float *)GEN_TOP(((int)((float *)(gen_frame + 0xa0)) + uVar21)));
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar21) = ((fVar1 * fVar17 + fVar5) + fVar2 * fVar13) + fVar3 * fVar9;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar21 + 4) =
         ((fVar1 * fVar18 + fVar6) + fVar2 * fVar14) + fVar3 * fVar10;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar21 + 8) =
         ((fVar1 * fVar19 + fVar7) + fVar2 * fVar15) + fVar3 * fVar11;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar21 + 0xc) =
         ((fVar1 * fVar20 + fVar8) + fVar2 * fVar16) + fVar3 * fVar12;
    uVar21 = uVar21 + 0x10;
  } while (uVar21 < 0x80);
  gen_maxps(&(auVar22), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), ((undefined1 *)(gen_frame + 0x30)));
  gen_maxps(&(auVar22), &(auVar22), ((undefined1 *)(gen_frame + 0x40)));
  gen_maxps(&(auVar22), &(auVar22), ((undefined1 *)(gen_frame + 0x50)));
  gen_minps(&(auVar23), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), ((undefined1 *)(gen_frame + 0x30)));
  gen_maxps(&(auVar22), &(auVar22), ((undefined1 *)(gen_frame + 0x60)));
  gen_minps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x40)));
  gen_maxps(&(auVar22), &(auVar22), ((undefined1 *)(gen_frame + 0x70)));
  gen_minps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x50)));
  gen_maxps(&(auVar22), &(auVar22), ((undefined1 *)(gen_frame + 0x80)));
  gen_minps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x60)));
  gen_maxps(&(auVar22), &(auVar22), ((undefined1 *)(gen_frame + 0x90)));
  gen_minps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x70)));
  gen_minps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x80)));
  gen_minps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x90)));
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)((char *)&auVar23 + 0));
  *param_1 = (*(undefined4 *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)((char *)&auVar23 + 4));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x14));
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)((char *)&auVar23 + 8));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)((char *)&auVar22 + 0));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)((char *)&auVar22 + 4));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)((char *)&auVar22 + 8));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  return uVar21;
}

/* ref: FUN_0068c8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068c8e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68c8e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float * pfVar1;
  uint uVar2;
  
  pfVar1 = ((float *)GEN_TOP(F_004d9920(*((undefined4 *)GEN_TOP((param_1 + 0xa8))) GEN_EDX_FWD,0,0x10,2)));
  uVar2 = 0;
  if (pfVar1 != ((float *)GEN_TOP(0x0))) {
    *pfVar1 = (float)((float10)param_2 + (float10)REFG(double, 0x1088130));
    uVar2 = *((uint *)GEN_TOP((param_1 + 0xa8)));
    *((undefined4 *)GEN_TOP((uVar2 + 0x24))) = 0;
  }
  *((float *)GEN_TOP((param_1 + 0xe0))) = param_2;
  return uVar2;
}

/* ref: FUN_0068c930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068c930(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68c930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d9920(*((undefined4 *)GEN_TOP((param_1 + 0xa8))) GEN_EDX_FWD,0,0x10,2);
  uVar2 = 0;
  if (uVar1 != 0) {
    *((float *)GEN_TOP((uVar1 + 4))) = (float)((float10)param_2 + (float10)REFG(double, 0x1088130));
    uVar2 = *((uint *)GEN_TOP((param_1 + 0xa8)));
    *((undefined4 *)GEN_TOP((uVar2 + 0x24))) = 0;
  }
  *((float *)GEN_TOP((param_1 + 0xe4))) = param_2;
  return uVar2;
}

/* ref: FUN_0068c980 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0068c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  ushort uVar1;
  
  uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_2,param_3);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_0068c9a0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0068c9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  ushort uVar1;
  
  uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_2,param_3);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_0068c9c0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0068c9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68c9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((ushort)param_1 == 0x65) {
    return 0x65;
  }
  uVar2 = (uint)(ushort)param_1;
  if (4 < param_2) {
    uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_3 & 0xffff,uVar2);
    if (param_2 == 5) {
      bVar4 = (uVar1 & 2) == 0;
LAB_0068cb36: ;
      if (!bVar4) {
        return (ushort)param_1;
      }
    }
    else {
      if (param_2 == 6) {
        bVar4 = (uVar1 & 8) == 0;
        goto LAB_0068cb36;
      }
      if (param_2 == 7) {
        bVar4 = (uVar1 & 0x20) == 0;
        goto LAB_0068cb36;
      }
      if (param_2 == 8) {
        bVar4 = (uVar1 & 0x80) == 0;
        goto LAB_0068cb36;
      }
      if ((param_2 == 9) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
    }
    if ((uVar2 / 100 & 1) != 0) {
      return 0x65;
    }
    if ((ushort)param_1 == 0xc9) {
      return 0x65;
    }
    uVar3 = 0xc9;
    if ((ushort)param_1 == 0x4b1) {
      uVar3 = 0x44d;
    }
    uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_3 & 0xffff,uVar3);
    if (param_2 == 5) goto LAB_0068ca60;
    if (param_2 == 6) goto LAB_0068cac8;
    if (param_2 == 7) goto LAB_0068cae4;
    if (param_2 != 8) {
      bVar4 = param_2 == 9;
      goto LAB_0068cba9;
    }
    goto LAB_0068cb00;
  }
  uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_3 & 0xffff,uVar2);
  if (param_2 == 0) {
    bVar4 = (uVar1 & 2) == 0;
LAB_0068ca08: ;
    if (!bVar4) {
      return (ushort)param_1;
    }
  }
  else {
    if (param_2 == 1) {
      bVar4 = (uVar1 & 8) == 0;
      goto LAB_0068ca08;
    }
    if (param_2 == 2) {
      bVar4 = (uVar1 & 0x20) == 0;
      goto LAB_0068ca08;
    }
    if (param_2 == 3) {
      bVar4 = (uVar1 & 0x80) == 0;
      goto LAB_0068ca08;
    }
    if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
      return (ushort)param_1;
    }
  }
  if ((uVar2 / 100 & 1) != 0) {
    return 0x65;
  }
  if ((ushort)param_1 == 0xc9) {
    return 0x65;
  }
  uVar3 = 0xc9;
  if ((ushort)param_1 == 0x4b1) {
    uVar3 = 0x44d;
  }
  uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_3 & 0xffff,uVar3);
  if (param_2 == 0) {
LAB_0068ca60: ;
    if ((uVar1 & 2) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 == 1) {
LAB_0068cac8: ;
    if ((uVar1 & 8) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 == 2) {
LAB_0068cae4: ;
    if ((uVar1 & 0x20) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
  if (param_2 != 3) {
    bVar4 = param_2 == 4;
LAB_0068cba9: ;
    if (!bVar4) {
      return 0x65;
    }
    if ((uVar1 & 0x200) != 0) {
      return (ushort)uVar3;
    }
    return 0x65;
  }
LAB_0068cb00: ;
  if ((uVar1 & 0x80) != 0) {
    return (ushort)uVar3;
  }
  return 0x65;
}

/* ref: FUN_0068cc20 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0068cc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68cc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ushort local_8;
  
  local_8 = 0x65;
  if (4 < param_2) {
    return 0x65;
  }
  uVar2 = (uint)(ushort)param_1;
  uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_3 & 0xffff,uVar2);
  if (param_2 == 0) {
    bVar3 = (uVar1 & 2) == 0;
  }
  else if (param_2 == 1) {
    bVar3 = (uVar1 & 8) == 0;
  }
  else if (param_2 == 2) {
    bVar3 = (uVar1 & 0x20) == 0;
  }
  else {
    if (param_2 != 3) {
      if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
      goto LAB_0068cc5d;
    }
    bVar3 = (uVar1 & 0x80) == 0;
  }
  if (!bVar3) {
    return (ushort)param_1;
  }
LAB_0068cc5d: ;
  if ((ushort)param_1 != 0xc9) {
    param_1 = 0x68;
    if (uVar2 == 0x388) {
      param_1 = 0x385;
    }
    else if ((uVar2 == 0x450) || (uVar2 == 0x4b4)) {
      param_1 = 0x44d;
    }
    uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_3 & 0xffff,param_1);
    if (param_2 == 0) {
      bVar3 = (uVar1 & 2) == 0;
    }
    else if (param_2 == 1) {
      bVar3 = (uVar1 & 8) == 0;
    }
    else if (param_2 == 2) {
      bVar3 = (uVar1 & 0x20) == 0;
    }
    else if (param_2 == 3) {
      bVar3 = (uVar1 & 0x80) == 0;
    }
    else {
      if (param_2 != 4) {
        return 0x65;
      }
      bVar3 = (uVar1 & 0x200) == 0;
    }
    if (!bVar3) {
      local_8 = (ushort)param_1;
    }
  }
  return local_8;
}

/* ref: FUN_0068cd40 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0068cd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68cd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  ushort uVar1;
  bool bVar2;
  ushort local_8;
  
  local_8 = 0x65;
  if (4 < param_2) {
    return 0x65;
  }
  uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_3 & 0xffff,(uint)(ushort)param_1);
  if (param_2 == 0) {
    bVar2 = (uVar1 & 2) == 0;
  }
  else if (param_2 == 1) {
    bVar2 = (uVar1 & 8) == 0;
  }
  else if (param_2 == 2) {
    bVar2 = (uVar1 & 0x20) == 0;
  }
  else {
    if (param_2 != 3) {
      if ((param_2 == 4) && ((uVar1 & 0x200) != 0)) {
        return (ushort)param_1;
      }
      goto LAB_0068cd7d;
    }
    bVar2 = (uVar1 & 0x80) == 0;
  }
  if (!bVar2) {
    return (ushort)param_1;
  }
LAB_0068cd7d: ;
  if ((((ushort)param_1 / 100 & 1) == 0) && ((ushort)param_1 != 0xc9)) {
    uVar1 = F_006b0fd0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_3 & 0xffff,0xc9);
    if (param_2 == 0) {
      bVar2 = (uVar1 & 2) == 0;
    }
    else if (param_2 == 1) {
      bVar2 = (uVar1 & 8) == 0;
    }
    else if (param_2 == 2) {
      bVar2 = (uVar1 & 0x20) == 0;
    }
    else if (param_2 == 3) {
      bVar2 = (uVar1 & 0x80) == 0;
    }
    else {
      if (param_2 != 4) {
        return 0x65;
      }
      bVar2 = (uVar1 & 0x200) == 0;
    }
    if (!bVar2) {
      local_8 = 0xc9;
    }
  }
  return local_8;
}

/* ref: FUN_0068ce50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0068ce50(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68ce50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar4 = 0;
  iVar1 = *param_1;
  if (uVar3 != 0) {
    do {
      iVar2 = *((int *)GEN_TOP((iVar1 + uVar4 * 4)));
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *((undefined4 *)GEN_TOP((iVar1 + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*param_1 != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
    *param_2 = 0;
    return uVar3;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf12 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068ced0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68ced0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x30)));
  fVar2 = *((float *)GEN_TOP((in_ecx + 0x150)));
  fVar3 = *((float *)GEN_TOP((in_ecx + 0x34)));
  fVar4 = *((float *)GEN_TOP((in_ecx + 0x154)));
  fVar5 = *((float *)GEN_TOP((in_ecx + 0x38)));
  fVar6 = *((float *)GEN_TOP((in_ecx + 0x158)));
  fVar7 = *((float *)GEN_TOP((in_ecx + 0x144)));
  fVar8 = *((float *)GEN_TOP((in_ecx + 0x148)));
  *param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x140))) + (float10)fVar1)));
  param_2[1] = (float)((float10)fVar3 + (float10)fVar7);
  param_2[2] = (float)((float10)fVar5 + (float10)fVar8);
  param_2[4] = (float)((float10)fVar1 + (float10)fVar2);
  param_2[5] = (float)((float10)fVar3 + (float10)fVar4);
  param_2[6] = (float)((float10)fVar5 + (float10)fVar6);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf15 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068cf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68cf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  uVar4 = F_005ff5c0(param_1 GEN_EDX_FWD,this + 0x120);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  iVar1 = *(int *)(this + 0x7c);
  uVar2 = *(uint *)(this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + uVar5 * 4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        bVar3 = F_00655030(this_00 GEN_EDX_ARG,param_1);
        uVar4 = CONCAT31(extraout_var,bVar3);
        if (bVar3 != 0) {
          return CONCAT31(extraout_var,1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar4 & 0xffffff00;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf14 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068cff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68cff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  uVar4 = F_005ff5c0(param_1 GEN_EDX_FWD,this + 0x120);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  iVar1 = *(int *)(this + 0x7c);
  uVar2 = *(uint *)(this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + uVar5 * 4)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        bVar3 = F_00655230(this_00 GEN_EDX_ARG,param_1,param_2);
        uVar4 = CONCAT31(extraout_var,bVar3);
        if (bVar3 != 0) {
          return CONCAT31(extraout_var,1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar4 & 0xffffff00;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068d050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68d050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0064d240(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,param_1,param_2);
    return uVar1;
  }
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
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068d0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x68d0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_0064cf40(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,param_1,param_2);
    return uVar1;
  }
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
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf17 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068d170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68d170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) == ((undefined *)GEN_TOP(0x0))) {
    return (uint)(this + 0x30);
  }
  uVar1 = F_00655980(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf19 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068d190(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x68d190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL(0x118, 8);
  float fVar1;
  float fVar2;
  undefined * this;
  byte bVar3;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  uint uVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x104)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x108);
  (*(float * PTR32 *)(gen_frame + 0x4)) = param_2;
  if (param_1[0x1e] == 0) {
    pfVar7 = (float *)&REFG(float, 0x1302d00);
    pfVar5 = param_2;
    goto LAB_0068d706;
  }
  if (param_3 != 0x3d) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))(param_1 GEN_EDX_FWD,param_2,param_3);
    return (uint)(*(float * PTR32 *)(gen_frame + 0x4));
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,0x1d);
  if ((char)uVar4 == '\0') {
    if (((undefined *)GEN_TOP(param_1[0x1e])) != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_00623160(((undefined *)GEN_TOP(param_1[0x1e])) GEN_EDX_ARG,((char *)REFP(0x10af150)));
      if ((short)uVar4 != -1) {
        uVar4 = F_0054e1a0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x78)),uVar4 & 0xffff);
        goto LAB_0068d292;
      }
    }
    (*(float *)(gen_frame + 0x18)) = *param_4;
    (*(float *)(gen_frame + 0x1c)) = param_4[1];
    (*(float *)(gen_frame + 0x20)) = param_4[2];
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(param_1[0x48]);
    (*(float *)(gen_frame + 0x2c)) = gen_bits2f(param_1[0x49]);
    fVar13 = gen_bits2f(param_1[0x4a]);
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x78)),0x1d);
LAB_0068d292: ;
    (*(float *)(gen_frame + 0x18)) = *param_4;
    (*(float *)(gen_frame + 0x1c)) = param_4[1];
    (*(float *)(gen_frame + 0x20)) = param_4[2];
    (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP((uVar4 + 0x30)));
    (*(float *)(gen_frame + 0x2c)) = *((float *)GEN_TOP((uVar4 + 0x34)));
    fVar13 = *((float *)GEN_TOP((uVar4 + 0x38)));
  }
  uVar4 = param_1[0x1d];
  iVar6 = param_1[0x1f];
  (*(float *)(gen_frame + 0x30)) = fVar13;
  uVar8 = 0;
  (*(float *)(gen_frame + 0x40)) = gen_bits2f(uVar4);
  (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1090998);
  (*(char *)(gen_frame + 0x77)) = '\0';
  if (uVar4 == 0) {
LAB_0068d375: ;
    (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x28));
    (*(float *)(gen_frame + 0x5c)) = (*(float *)(gen_frame + 0x2c));
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x30));
  }
  else {
    do {
      this = *((undefined * PTR32 *)GEN_TOP((iVar6 + uVar8 * 4)));
      if ((this != ((undefined *)GEN_TOP(0x0))) && (bVar3 = F_00655450(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0))), bVar3 != 0)) {
        pfVar7 = &(*(float *)(gen_frame + 0x44));
        if (!((float10)(*(float *)(gen_frame + 0x44)) < (float10)(*(float *)(gen_frame + 0x0)))) {
          pfVar7 = &(*(float *)(gen_frame + 0x0));
        }
        (*(float *)(gen_frame + 0x44)) = *pfVar7;
        (*(char *)(gen_frame + 0x77)) = '\x01';
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)gen_fl2bits((*(float *)(gen_frame + 0x40))));
    if ((*(char *)(gen_frame + 0x77)) == '\0') goto LAB_0068d375;
    fVar13 = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x48)) = fVar13;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x2c)) - (float10)(*(float *)(gen_frame + 0x1c)));
    (*(float *)(gen_frame + 0x4c)) = fVar2;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar10 = (float10)(*(float *)(gen_frame + 0x44));
    fVar13 = (float)(fVar10 * (float10)fVar13);
    (*(float *)(gen_frame + 0x58)) = fVar13;
    fVar2 = (float)((float10)fVar2 * fVar10);
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    fVar1 = (float)(fVar10 * (float10)fVar1);
    (*(float *)(gen_frame + 0x60)) = fVar1;
    fVar13 = (float)((float10)fVar13 + (float10)(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x48)) = fVar13;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x1c)) + (float10)fVar2);
    (*(float *)(gen_frame + 0x4c)) = fVar2;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)fVar1);
    (*(float *)(gen_frame + 0x50)) = fVar1;
    (*(float *)(gen_frame + 0x58)) = fVar13;
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    (*(float *)(gen_frame + 0x60)) = fVar1;
  }
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0x5c)) - (float10)(*(float *)(gen_frame + 0x2c)));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)(*(float *)(gen_frame + 0x5c)) - (float10)(*(float *)(gen_frame + 0x2c)));
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x30)));
  if (param_5 != '\0') {
    (*(float *)(gen_frame + 0x4c)) = 0.0;
  }
  F_0046f390(&(*(float *)(gen_frame + 0x48)) GEN_EDX_ARG);
  fVar10 = (float10)(*(float *)(gen_frame + 0x48));
  fVar11 = (float10)(*(float *)(gen_frame + 0x4c));
  fVar12 = (float10)(*(float *)(gen_frame + 0x50));
  fVar13 = ((float)GEN_TOF(((fVar11 * fVar11 + fVar10 * fVar10) + fVar12 * fVar12)));
  (*(float *)(gen_frame + 0x40)) = fVar13;
  if ((float10)fVar13 < (float10)REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0xb8)) = REFG(float, 0x1302c60);
    fVar10 = (float10)0;
    (*(float *)(gen_frame + 0xe8)) = (float)fVar10;
    (*(float *)(gen_frame + 0xbc)) = 0.0;
    (*(float *)(gen_frame + 0xec)) = (float)fVar10;
    (*(float *)(gen_frame + 0xc0)) = 0.0;
    (*(float *)(gen_frame + 0xf0)) = (float)fVar10;
    (*(float *)(gen_frame + 0xc8)) = 0.0;
    (*(float *)(gen_frame + 0xd0)) = 0.0;
    (*(float *)(gen_frame + 0xd8)) = 0.0;
    (*(float *)(gen_frame + 0xdc)) = 0.0;
    (*(float *)(gen_frame + 0xcc)) = gen_bits2f(REFG(float, 0x1302c64));
    (*(float *)(gen_frame + 0xe0)) = gen_bits2f(REFG(float, 0x1302c68));
    F_004efe70(&(*(float *)(gen_frame + 0xb8)) GEN_EDX_ARG,(uint)(param_1 + 0x10));
    (*(float *)(gen_frame + 0xe8)) = (float)((float10)(*(float *)(gen_frame + 0xe8)) + (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0xec)) = (float)((float10)(*(float *)(gen_frame + 0xec)) + (float10)(*(float *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x60)));
  }
  else {
    (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0x5c));
    (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x60));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)REFG(float, 0x1302c84) * fVar12 - (float10)REFG(float, 0x1302c88) * fVar11);
    (*(float *)(gen_frame + 0x5c)) = (float)(fVar10 * (float10)REFG(float, 0x1302c88) - (float10)REFG(float, 0x1302c80) * fVar12);
    (*(float *)(gen_frame + 0x60)) = (float)((float10)REFG(float, 0x1302c80) * fVar11 - fVar10 * (float10)REFG(float, 0x1302c84));
    F_0046f390(&(*(float *)(gen_frame + 0x58)) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0xb8)) = (*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0xbc)) = (*(float *)(gen_frame + 0x5c));
    (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0x60));
    fVar13 = (float)((float10)(*(float *)(gen_frame + 0x4c)) * (float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x8)) = fVar13;
    (*(float *)(gen_frame + 0xc8)) = fVar13;
    (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0x4c));
    (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x50));
    fVar13 = (float)((float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x50)) - (float10)(*(float *)(gen_frame + 0x48)) * (float10)(*(float *)(gen_frame + 0x60)));
    (*(float *)(gen_frame + 0xc)) = fVar13;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x5c)) * (float10)(*(float *)(gen_frame + 0x48)) - (float10)(*(float *)(gen_frame + 0x4c)) * (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x10)) = fVar2;
    (*(float *)(gen_frame + 0xcc)) = fVar13;
    (*(float *)(gen_frame + 0xd0)) = fVar2;
  }
  pfVar7 = &(*(float *)(gen_frame + 0xb8));
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x4));
LAB_0068d706: ;
  pfVar9 = pfVar5;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
    *pfVar9 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
  }
  return (uint)pfVar5;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068d730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68d730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b81ed0(*(undefined * PTR32 *)(this + 0x60) GEN_EDX_FWD,this + 0x120);
  return uVar1;
}

/* ref: FUN_0068d740 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068d740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68d740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x710))) != 0) {
    uVar1 = F_0050c620(*((int *)GEN_TOP(((int)this + 0x710))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x710))) = 0;
  }
  *((uint *)GEN_TOP(((int)this + 0x6f8))) = *((uint *)GEN_TOP(((int)this + 0x6f8))) & 0xfffeffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x6ec))) = 1;
  return uVar1;
}

/* ref: FUN_0068d780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068d780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68d780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x714)));
  if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + param_1 * 4))) != 0)) {
    F_0050c620(*((undefined4 *)GEN_TOP((iVar1 + param_1 * 4))),0,0);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x714))) + param_1 * 4))) = 0;
  }
  uVar2 = 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  *((uint *)GEN_TOP(((int)this + 0x6f8))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 0x6f8))) | uVar2;
  *((undefined1 *)GEN_TOP(((int)this + 0x6ec))) = 1;
  return uVar2;
}

/* ref: FUN_0068d7f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0068d7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68d7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x71c))) >> 4;
  if ((uVar1 & 1) != 0) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
      F_0061eec0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD,1);
    }
    F_009f54d0(((undefined *)GEN_TOP(((int)this + 0x4a0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x414))),1,0);
    if (*((int *)GEN_TOP(((int)this + 0x414))) != 0) {
      F_0050c620(*((int *)GEN_TOP(((int)this + 0x414))),0,0);
      *((undefined4 *)GEN_TOP(((int)this + 0x414))) = 0;
    }
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x100);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x118))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x100,1,((char *)REFP(0x10af1f8)));
    if (uVar1 != 0) {
      F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,4,0);
      *((undefined4 *)GEN_TOP(((int)this + 0x40c))) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x706170;
      *((undefined4 *)GEN_TOP(((int)this + 0x410))) = 0;
      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)),0,0,0);
      *((uint *)GEN_TOP(((int)this + 0x414))) = uVar1;
      return uVar1;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x410))) = 0xffffffff;
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0068d920 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068d920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68d920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (byte)(*((uint *)GEN_TOP((in_ecx + 0x2c4))) >> GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2)) & 1;
}

/* ref: FUN_0068d980 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068d980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68d980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x78))) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_006233a0(*((int *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD);
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) != ((undefined *)GEN_TOP(0x0))) {
        F_0064d630(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x78))) GEN_EDX_ARG,param_1,uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

/* ref: FUN_0068d9c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068d9c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68d9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int in_ecx_00;
  byte bVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x78))) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x78))) + 0x54))), in_ecx_00 != 0)) {
    bVar1 = F_009f0920(in_ecx_00 GEN_EDX_FWD,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_0068d9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068d9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68d9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0x78))) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + 0x54))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    uVar1 = F_009f4320(this_00 GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0068da00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068da00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68da00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int in_ecx_00;
  uint uVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x78))) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x78))) + 0x54))), in_ecx_00 != 0)) {
    uVar1 = F_009f0900(in_ecx_00 GEN_EDX_FWD,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0068da20 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_0068da20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68da20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x78))) == 0) {
    return (float10)0;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x78))) + 0x54)));
  if (iVar1 != 0) {
    return (float10)*((float *)GEN_TOP((iVar1 + 0xc)));
  }
  return (float10)0.0;
}

/* ref: FUN_0068da60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068da60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x68da60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_ecx_00;
  
  in_ecx_00 = 0;
  if ((*((int *)GEN_TOP((in_ecx + 0x78))) != 0) &&
     (in_ecx_00 = *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x78))) + 0x54))), in_ecx_00 != 0)) {
    F_009f13a0(in_ecx_00 GEN_EDX_FWD,param_2);
  }
  return in_ecx_00;
}

/* ref: FUN_0068da90 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0068da90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68da90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  
  if ((REFG(int, 0x14c4e78) != 0) && (iVar1 = *((int *)GEN_TOP((REFG(int, 0x14c4e78) + 0x18))), iVar1 != 0)) {
    if ((*((int *)GEN_TOP((iVar1 + 0x2e00))) == 0) || (*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x2e00))) + 0xec))) != this)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    return *((undefined * PTR32 *)GEN_TOP((iVar1 + 0xec))) == this | bVar2 |
           ((((undefined *)GEN_TOP((iVar1 + 0x2600))) == this || ((undefined *)GEN_TOP((iVar1 + 0x1e60))) == this) ||
           ((undefined *)GEN_TOP((iVar1 + 0x16c0))) == this);
  }
  return *((short *)GEN_TOP(((int)this + 0x72))) == 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf8 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068db00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x68db00u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x7c)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x74)));
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *((int *)GEN_TOP((iVar1 + uVar4 * 4)));
      if ((iVar3 != 0) && (iVar3 = *((int *)GEN_TOP((iVar3 + 0x18))), iVar3 != 0)) {
        F_004ffee0(iVar3 GEN_EDX_FWD,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf9 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068db40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x68db40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x7c)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x74)));
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *((int *)GEN_TOP((iVar1 + uVar4 * 4)));
      if ((iVar3 != 0) && (iVar3 = *((int *)GEN_TOP((iVar3 + 0x18))), iVar3 != 0)) {
        F_004fff30(iVar3 GEN_EDX_FWD,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

/* ref: FUN_0068db80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0068db80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68db80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  *((uint *)GEN_TOP(((int)this + 0x74))) = param_1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1 * 4,0x10);
  *((uint *)GEN_TOP(((int)this + 0x7c))) = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,param_1 * 4,0x10);
  *((uint *)GEN_TOP(((int)this + 0x80))) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7c))) + uVar1 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  return 0;
}

/* ref: FUN_0068dc00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068dc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68dc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x7c))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x7c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x80))));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf81 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068dc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68dc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x70, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  undefined4 uVar4;
  float10 fVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    fVar1 = *(float *)(this + 0x50);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    uVar4 = *(undefined4 *)(this + 0x40);
    fVar2 = *(float *)(this + 0x54);
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x30);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0x34);
    (*(float *)(gen_frame + 0x28)) = *(float *)(this + 0x58);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x38);
    (*(float *)(gen_frame + 0x5c)) = *(float *)(this + 0x294);
    (*(float *)(gen_frame + 0x58)) = *(float *)(this + 0x290);
    fVar5 = (float10)*(float *)(this + 0x294);
    (*(undefined4 *)(gen_frame + 0x10)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x44);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x48);
    fVar1 = (float)(fVar5 * (float10)fVar1);
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(this + 0x4c);
    fVar2 = (float)((float10)fVar2 * fVar5);
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar5 * (float10)*(float *)(this + 0x58))));
    (*(float *)(gen_frame + 0x48)) = fVar3;
    fVar5 = (float10)*(float *)(this + 0x290);
    fVar1 = (float)(fVar5 * (float10)fVar1);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar5);
    (*(float *)(gen_frame + 0x34)) = fVar2;
    fVar3 = (float)(fVar5 * (float10)fVar3);
    (*(float *)(gen_frame + 0x38)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    F_00623060(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf82 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068dd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68dd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = *(int *)(this + 0x74);
  uVar4 = 0;
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090998);
  ((float *)(gen_frame + 0x18))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x18))[0], REFG(float, 0x1090998));
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1097b10);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1097b10);
  ((float *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[0], REFG(float, 0x1097b10));
  fVar8 = REFG(float, 0x1090998);
  fVar9 = REFG(float, 0x1097b10);
  fVar10 = REFG(float, 0x1097b10);
  fVar11 = REFG(float, 0x1097b10);
  fVar12 = REFG(float, 0x1090998);
  fVar13 = REFG(float, 0x1090998);
  if (iVar1 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + uVar4 * 4)));
      if ((iVar1 != 0) && (iVar1 = *((int *)GEN_TOP((iVar1 + 0x18))), iVar1 != 0)) {
        pfVar3 = *((float * PTR32 *)GEN_TOP((iVar1 + 0xf0)));
        pfVar2 = &(*(float *)(gen_frame + 0x10));
        if (!((float10)(*(float *)(gen_frame + 0x10)) < (float10)*pfVar3)) {
          pfVar2 = pfVar3;
        }
        fVar13 = *pfVar2;
        fVar12 = pfVar3[1];
        pfVar2 = pfVar3 + 1;
        (*(float *)(gen_frame + 0x10)) = fVar13;
        if ((float10)(*(float *)(gen_frame + 0x14)) < (float10)fVar12) {
          pfVar2 = &(*(float *)(gen_frame + 0x14));
        }
        fVar12 = *pfVar2;
        fVar8 = pfVar3[2];
        pfVar2 = pfVar3 + 2;
        (*(float *)(gen_frame + 0x14)) = fVar12;
        if ((float10)((float *)(gen_frame + 0x18))[0] < (float10)fVar8) {
          pfVar2 = ((float *)(gen_frame + 0x18));
        }
        fVar11 = pfVar3[4];
        fVar8 = *pfVar2;
        ((float *)(gen_frame + 0x18))[0] = fVar8;
        pfVar2 = &(*(float *)(gen_frame + 0x0));
        if (!((float10)fVar11 < (float10)(*(float *)(gen_frame + 0x0)))) {
          pfVar2 = pfVar3 + 4;
        }
        fVar10 = pfVar3[5];
        fVar11 = *pfVar2;
        pfVar2 = pfVar3 + 5;
        (*(float *)(gen_frame + 0x0)) = fVar11;
        if ((float10)fVar10 < (float10)(*(float *)(gen_frame + 0x4))) {
          pfVar2 = &(*(float *)(gen_frame + 0x4));
        }
        fVar9 = pfVar3[6];
        fVar10 = *pfVar2;
        pfVar3 = pfVar3 + 6;
        (*(float *)(gen_frame + 0x4)) = fVar10;
        if ((float10)fVar9 < (float10)((float *)(gen_frame + 0x8))[0]) {
          pfVar3 = ((float *)(gen_frame + 0x8));
        }
        fVar9 = *pfVar3;
        ((float *)(gen_frame + 0x8))[0] = fVar9;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(this + 0x74));
  }
  *(float *)(this + 0x140) = fVar13;
  *(float *)(this + 0x144) = fVar12;
  *(float *)(this + 0x148) = fVar8;
  *(float *)(this + 0x150) = fVar11;
  *(float *)(this + 0x154) = fVar10;
  *(float *)(this + 0x158) = fVar9;
  fVar13 = *(float *)(this + 0x150);
  fVar12 = *(float *)(this + 0x140);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar13 - (float10)fVar12);
  fVar8 = *(float *)(this + 0x154);
  fVar11 = *(float *)(this + 0x144);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar8 - (float10)fVar11);
  fVar10 = *(float *)(this + 0x158);
  fVar9 = *(float *)(this + 0x148);
  ((float *)(gen_frame + 0x8))[0] = (float)((float10)fVar10 - (float10)fVar9);
  fVar5 = (float10)REFG(double, 0x1088108);
  fVar13 = ((float)GEN_TOF(((float10)(float)((float10)fVar13 - (float10)fVar12) * fVar5)));
  (*(float *)(gen_frame + 0x10)) = fVar13;
  fVar12 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar11) * fVar5)));
  (*(float *)(gen_frame + 0x14)) = fVar12;
  fVar8 = ((float)GEN_TOF((fVar5 * (float10)(float)((float10)fVar10 - (float10)fVar9))));
  ((float *)(gen_frame + 0x18))[0] = fVar8;
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10a0c88);
  fVar13 = (float)((float10)fVar13 * fVar5);
  (*(float *)(gen_frame + 0x0)) = fVar13;
  fVar12 = (float)((float10)fVar12 * fVar5);
  (*(float *)(gen_frame + 0x4)) = fVar12;
  fVar8 = (float)(fVar5 * (float10)fVar8);
  ((float *)(gen_frame + 0x8))[0] = fVar8;
  fVar5 = (float10)fVar12;
  fVar6 = (float10)fVar13;
  fVar7 = (float10)fVar8;
  fVar13 = ((float)GEN_TOF(((fVar5 * fVar5 + fVar6 * fVar6) + fVar7 * fVar7)));
  (*(float *)(gen_frame + 0x2c)) = fVar13;
  if ((float10)fVar13 < (float10)1) {
    F_0046f0e0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_FWD,(float)(float10)1);
  }
  F_006aec30(this + 0x140 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  fVar13 = *(float *)(this + 0x150);
  fVar12 = *(float *)(this + 0x140);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar13 - (float10)fVar12);
  fVar8 = *(float *)(this + 0x154);
  fVar11 = *(float *)(this + 0x144);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar8 - (float10)fVar11);
  fVar10 = *(float *)(this + 0x158);
  fVar9 = *(float *)(this + 0x148);
  ((float *)(gen_frame + 0x18))[0] = (float)((float10)fVar10 - (float10)fVar9);
  fVar5 = (float10)REFG(double, 0x1088108);
  fVar13 = ((float)GEN_TOF(((float10)(float)((float10)fVar13 - (float10)fVar12) * fVar5)));
  (*(float *)(gen_frame + 0x10)) = fVar13;
  fVar12 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar11) * fVar5)));
  (*(float *)(gen_frame + 0x14)) = fVar12;
  fVar8 = ((float)GEN_TOF((fVar5 * (float10)(float)((float10)fVar10 - (float10)fVar9))));
  ((float *)(gen_frame + 0x18))[0] = fVar8;
  fVar11 = ((float)GEN_TOF((((float10)fVar12 * (float10)fVar12 + (float10)fVar13 * (float10)fVar13) +
                  (float10)fVar8 * (float10)fVar8)));
  (*(float *)(gen_frame + 0x2c)) = fVar11;
  fVar11 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar11))));
  (*(float *)(gen_frame + 0x2c)) = fVar11;
  *(float *)(this + 0x13c) = fVar11;
  *(float *)(this + 0x130) = ((float)GEN_TOF(((float10)fVar13 + (float10)*(float *)(this + 0x140))));
  *(float *)(this + 0x134) = ((float)GEN_TOF(((float10)*(float *)(this + 0x144) + (float10)fVar12)));
  *(float *)(this + 0x138) = ((float)GEN_TOF(((float10)*(float *)(this + 0x148) + (float10)fVar8)));
  return 0;
}

/* ref: FUN_0068e000 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0068e000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68e000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_006aea80(((undefined4 *)GEN_TOP(((int)this + 0x120))) GEN_EDX_FWD,((undefined4 *)GEN_TOP(((int)this + 0x130))));
  if (bVar1 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x120))) = *((undefined4 *)GEN_TOP(((int)this + 0x130)));
    *((undefined4 *)GEN_TOP(((int)this + 0x124))) = *((undefined4 *)GEN_TOP(((int)this + 0x134)));
    *((undefined4 *)GEN_TOP(((int)this + 0x128))) = *((undefined4 *)GEN_TOP(((int)this + 0x138)));
    *((undefined4 *)GEN_TOP(((int)this + 300))) = *((undefined4 *)GEN_TOP(((int)this + 0x13c)));
    return 1;
  }
  return 0;
}

/* ref: FUN_0068e040 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68e040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x7c)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x74)));
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *((int *)GEN_TOP((iVar1 + uVar5 * 4)));
      if (iVar3 != 0) {
        bVar4 = F_004ffb50(*((undefined4 *)GEN_TOP((iVar3 + 0x18))) GEN_EDX_FWD,(undefined1)param_1);
        if (bVar4 != 0) {
          return 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return 0;
}

/* ref: FUN_0068e090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68e090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + param_1 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + param_1 * 4))) != 0) {
    F_009bc2a0(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_FWD);
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + param_1 * 4)));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + param_1 * 4))) != 0) {
      this_00 = ((undefined *)GEN_TOP(*puVar1));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_009cfa70(this_00 GEN_EDX_ARG);
        puVar1 = ((undefined4 *)GEN_TOP(F_00406ad0(this_00)));
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + param_1 * 4))) = 0;
    }
  }
  return (uint)puVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf35 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0068e0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68e0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x710) != 0) {
    F_0050c620(*(int *)(this + 0x710),0,0);
    *(undefined4 *)(this + 0x710) = 0;
  }
  *(uint *)(this + 0x6f8) = *(uint *)(this + 0x6f8) & 0xfffeffff;
  uVar3 = 0;
  this[0x6ec] = (undefined1)0x1;
  if (*(int *)(this + 0x6fc) != 0) {
    do {
      iVar1 = *(int *)(this + 0x714);
      if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + uVar3 * 4))) != 0)) {
        F_0050c620(*((undefined4 *)GEN_TOP((iVar1 + uVar3 * 4))),0,0);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x714) + uVar3 * 4))) = 0;
      }
      bVar2 = (byte)uVar3;
      uVar3 = uVar3 + 1;
      *(uint *)(this + 0x6f8) =
           ~(1 << GEN_SHC(bVar2, bVar2)) & *(uint *)(this + 0x6f8) | 0 << GEN_SHC(bVar2, bVar2);
      this[0x6ec] = (undefined1)0x1;
    } while (uVar3 < *(uint *)(this + 0x6fc));
  }
  if (*(int *)(this + 0x714) != 0) {
    F_00406b30(*(int *)(this + 0x714));
    *(undefined4 *)(this + 0x714) = 0;
  }
  *(undefined4 *)(this + 0x6f8) = 0;
  *(undefined4 *)(this + 0x6fc) = 0;
  this[0x6ec] = (undefined1)0x0;
  F_00b824b0(this + 0x700 GEN_EDX_ARG);
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf72 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0068e1e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68e1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (byte)(*((uint *)GEN_TOP((in_ecx + 0x71c))) >> 6) & 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf31 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68e1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)(this + 0x2d8);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x7c);
  *(int * PTR32 *)(this + 0x2d8) = param_1;
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    uVar7 = *(undefined4 *)(this + 0x160);
  }
  else {
    uVar7 = 0;
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((iVar3 + uVar5 * 4)));
      if (iVar4 != 0) {
        *((undefined4 *)GEN_TOP((iVar4 + 0x70))) = uVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x80);
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((iVar3 + uVar6 * 4)));
      if (iVar4 != 0) {
        uVar5 = F_009bc1e0(iVar4 GEN_EDX_ARG,param_1 != ((int *)GEN_TOP(0x0)));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return uVar5;
}

/* ref: Client::Graphics::Scene::Human::vf55 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68e290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  
  if (param_1 < 10) {
    *(undefined4 *)(this + param_1 * 4 + 0x750) =
         *((undefined4 *)GEN_TOP((param_1 * 0xc + *(int *)(this + 0x818))));
    iVar2 = param_1 * 0xc + *(int *)(this + 0x818);
    *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x3c0) * 2))) = *((undefined4 *)GEN_TOP((iVar2 + 4)));
    *((undefined2 *)GEN_TOP((this + (param_1 * 3 + 0x3c0) * 2 + 4))) = *((undefined2 *)GEN_TOP((iVar2 + 8)));
  }
  if (((param_1 == 0xd) || (uVar1 = param_1, param_1 == 0xe)) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0x7c) + param_1 * 4))), uVar1 != 0)) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x14))) = 0x3000000;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf75 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(gen_size32 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68e300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  ushort uVar1;
  uint uVar2;
  char * _Format;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      _Format = ((char *)REFP(0x10af7b0));
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      _Format = ((char *)REFP(0x10af7b0));
    }
  }
  else {
    if (9 < param_3) {
      return 0;
    }
    if (*(int *)(this + 0x818) == 0) {
      uVar1 = *(ushort *)(this + param_3 * 4 + 0x750);
    }
    else {
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
    }
    uVar2 = (uint)uVar1;
    _Format = ((char *)REFP(0x10af7d0));
  }
  F_00c472af(param_1,param_2,_Format,uVar2,uVar2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf76 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0068e390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(gen_size32 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68e390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  char * pcVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  iVar8 = param_4;
  if (param_3 < 5) {
    if (*((char *)GEN_TOP((param_4 + 8))) != 'b') {
      iVar2 = *(int *)(this + 0x818);
      iVar3 = param_3 * 0xc;
      if (*((char *)GEN_TOP((iVar2 + 4 + iVar3))) == '\0') {
        return 0;
      }
      uVar7 = (uint)*((byte *)GEN_TOP((iVar3 + 4 + iVar2)));
      uVar5 = (uint)*((ushort *)GEN_TOP((iVar3 + iVar2)));
      if (*((char *)GEN_TOP((iVar2 + 3 + iVar3))) != '\0') {
        F_00c472af(param_1,param_2,((char *)REFP(0x10af828)),uVar5,uVar7,
                   param_4);
        pcVar9 = param_1;
        do {
          pcVar6 = pcVar9;
          pcVar9 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        pcVar6[-5] = '\0';
        bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x818) + 3 + iVar3)));
        pcVar9 = "_s%04d.mtrl";
LAB_0068e461: ;
        F_00c472af(((char *)(gen_frame + 0x0)),0x10,pcVar9,(uint)bVar1);
        F_00c473c8(param_1,param_2,((char *)(gen_frame + 0x0)));
        return (uint)param_1;
      }
      pcVar9 = ((char *)REFP(0x10af868));
      goto LAB_0068e624;
    }
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    uVar5 = (uint)uVar4;
    pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
  }
  else {
    if (param_3 < 10) {
      iVar2 = *(int *)(this + 0x818);
      iVar3 = param_3 * 0xc;
      if (*((char *)GEN_TOP((iVar2 + 4 + iVar3))) == '\0') {
        return 0;
      }
      uVar7 = (uint)*((byte *)GEN_TOP((iVar3 + 4 + iVar2)));
      uVar5 = (uint)*((ushort *)GEN_TOP((iVar3 + iVar2)));
      if (*((char *)GEN_TOP((iVar2 + 3 + iVar3))) != '\0') {
        F_00c472af(param_1,param_2,((char *)REFP(0x10af890)),uVar5,uVar7,
                   param_4);
        pcVar9 = param_1;
        do {
          pcVar6 = pcVar9;
          pcVar9 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        pcVar6[-5] = '\0';
        bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x818) + 3 + iVar3)));
        pcVar9 = "_s%04d.mtrl";
        goto LAB_0068e461;
      }
      pcVar9 = ((char *)REFP(0x10af8d0));
      goto LAB_0068e624;
    }
    if (param_3 == 10) {
      uVar5 = (uint)*(ushort *)(this + 0x778);
      pcVar9 = ((char *)REFP(0x10af8f8));
      uVar7 = (uint)*(ushort *)(this + 0x77a);
      goto LAB_0068e624;
    }
    if (param_3 == 0xb) {
      uVar5 = (uint)*(ushort *)(this + 0x778);
      pcVar9 = ((char *)REFP(0x10af92c));
      uVar7 = (uint)*(ushort *)(this + 0x77c);
      goto LAB_0068e624;
    }
    if (param_3 == 0xc) {
      uVar5 = (uint)*(ushort *)(this + 0x778);
      pcVar9 = ((char *)REFP(0x10af95c));
      uVar7 = (uint)*(ushort *)(this + 0x77e);
      goto LAB_0068e624;
    }
    if (param_3 == 0xd) {
      uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
      iVar8 = param_4 + 8;
      uVar5 = (uint)uVar4;
      uVar7 = uVar5;
      if (*((char *)GEN_TOP((param_4 + 8))) != 'f') {
        pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
        goto LAB_0068e624;
      }
      if ((uVar5 == 0x12d) || (uVar5 == 0x191)) {
        iVar8 = param_4 + 0xd;
        pcVar9 = ((char *)REFP(0x10af98c));
        goto LAB_0068e624;
      }
      pcVar9 = ((char *)REFP(0x10af9c8));
    }
    else {
      if (param_3 == 0xe) {
        uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
        uVar5 = (uint)uVar4;
        iVar8 = param_4 + 8;
        pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
        uVar7 = uVar5;
        goto LAB_0068e624;
      }
      if (param_3 != 0xf) {
        return (uint)param_1;
      }
      uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
      uVar5 = (uint)uVar4;
      pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
    }
  }
  iVar8 = param_4 + 8;
  uVar7 = uVar5;
LAB_0068e624: ;
  F_00c472af(param_1,param_2,pcVar9,uVar5,uVar7,iVar8);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf77 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined1 HVar1;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      HVar1 = this[param_3 * 6 + 0x781];
    }
    else {
      HVar1 = *((undefined *)GEN_TOP((*(int *)(this + 0x818) + 5 + param_3 * 0xc)));
    }
    if (HVar1 != (undefined1)0x0) {
      F_00c472af(param_1,param_2,((char *)REFP(0x10afaa8)),
                 (uint)(byte)HVar1);
      return param_1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf78 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined4 * puVar1;
  undefined1 HVar2;
  ushort uVar3;
  
  if (4 < (*(uint *)&gen_args[2])) {
    return 0;
  }
  if (*(int *)(this + 0x818) == 0) {
    uVar3 = *(ushort *)(this + (*(uint *)&gen_args[2]) * 4 + 0x750);
    HVar2 = this[(*(uint *)&gen_args[2]) * 6 + 0x784];
  }
  else {
    uVar3 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + (*(uint *)&gen_args[2]) * 0xc)));
    HVar2 = *((undefined *)GEN_TOP((*(int *)(this + 0x818) + 8 + (*(uint *)&gen_args[2]) * 0xc)));
  }
  if (HVar2 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)HVar2 < 100) {
    puVar1 = ((undefined4 *)GEN_TOP(F_004ff310(&(*(uint *)&gen_args[2]) GEN_EDX_FWD,4,0)));
    *(*(undefined4 * PTR32 *)&gen_args[3]) = *puVar1;
    F_00c472af((*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),((char *)REFP(0x10afadc)),(uint)uVar3,
               (uint)(byte)HVar2);
    return (*(uint *)&gen_args[0]);
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_004ff310(&(*(uint *)&gen_args[2]) GEN_EDX_ARG,8,0)));
  *(*(undefined4 * PTR32 *)&gen_args[3]) = *puVar1;
  F_00c472af((*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),((char *)REFP(0x10afb08)),(uint)(byte)HVar2);
  return (*(uint *)&gen_args[0]);
}

/* ref: Client::Graphics::Scene::Human::vf88 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68e770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x7fc))) >> GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2) & 1;
}

/* ref: FUN_0068e790 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068e790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68e790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x1e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x26))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x32))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x36))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3e))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x42))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x44))) = 1;
  *(undefined4 *)this = 0x1010101;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x1010101;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x1010101;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x1010101;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x1010101;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x1010101;
  *((undefined2 *)GEN_TOP(((int)this + 0x18))) = 0x101;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0x172;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 0x172;
  *((undefined2 *)GEN_TOP(((int)this + 0x24))) = 0x172;
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = 0x172;
  *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = 0x172;
  *((undefined2 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x40))) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Demihuman::vf55 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68e810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined * pDVar3;
  
  pDVar3 = param_1;
  if (param_1 < (undefined *)&REFG(undefined, 0x5)) {
    iVar2 = (int)((int)(uintptr_t)param_1) * 0xc;
    *(undefined4 *)(this + (int)((int)(uintptr_t)param_1) * 4 + 0x734) =
         *((undefined4 *)GEN_TOP((iVar2 + *(int *)(this + 0x790))));
    iVar1 = *(int *)(this + 0x790);
    pDVar3 = this + ((int)((int)(uintptr_t)param_1) * 3 + 0x3a5) * 2;
    *(undefined4 *)pDVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar2)));
    *(undefined2 *)(pDVar3 + 4) = *((undefined2 *)GEN_TOP((iVar1 + 8 + iVar2)));
  }
  return (uint)pDVar3;
}

/* ref: Client::Graphics::Scene::Demihuman::vf67 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68e860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  ushort uVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar1 = *(ushort *)(this + param_3 * 4 + 0x734);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b02c0)),
             (uint)*(ushort *)(this + 0x748),(uint)uVar1,(uint)*(ushort *)(this + 0x748),(uint)uVar1
             ,(&REFG(undefined * PTR32, 0x1322de0))[(int)(param_3)]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf75 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68e8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  ushort uVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar1 = *(ushort *)(this + param_3 * 4 + 0x734);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b03a0)),
             (uint)*(ushort *)(this + 0x748),(uint)uVar1,(uint)uVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf76 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x68e910u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  ushort * puVar1;
  byte bVar2;
  
  puVar1 = ((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  bVar2 = (byte)puVar1[2];
  if (bVar2 == 0) {
    return 0;
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b03d4)),
             (uint)*(ushort *)(this + 0x748),(uint)*puVar1,(uint)bVar2,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf77 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x68e960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined1 DVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    DVar1 = this[param_3 * 6 + 0x74b];
  }
  else {
    DVar1 = *((undefined *)GEN_TOP((*(int *)(this + 0x790) + 5 + param_3 * 0xc)));
  }
  if (DVar1 == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,((char *)REFP(0x10b0410)),(uint)(byte)DVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf78 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068e9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined4 * puVar1;
  undefined1 DVar2;
  ushort uVar3;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar3 = *(ushort *)(this + (*(int *)&gen_args[2]) * 4 + 0x734);
    DVar2 = this[(*(int *)&gen_args[2]) * 6 + 0x74e];
  }
  else {
    uVar3 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + (*(int *)&gen_args[2]) * 0xc)));
    DVar2 = *((undefined *)GEN_TOP((*(int *)(this + 0x790) + 8 + (*(int *)&gen_args[2]) * 0xc)));
  }
  if ((DVar2 != (undefined1)0x0) && ((byte)DVar2 < 100)) {
    puVar1 = ((undefined4 *)GEN_TOP(F_004ff310(&(*(int *)&gen_args[2]) GEN_EDX_FWD,4,0)));
    *(*(undefined4 * PTR32 *)&gen_args[3]) = *puVar1;
    F_00c472af((*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),((char *)REFP(0x10b0444)),
               (uint)*(ushort *)(this + 0x748),(uint)uVar3,(uint)(byte)DVar2);
    return (*(uint *)&gen_args[0]);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf88 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068ea40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68ea40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x784))) >> GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2) & 1;
}

/* ref: FUN_0068ea60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068ea60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68ea60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x78c)));
  if ((uVar1 != 0) && (*((int *)GEN_TOP(((int)this + 0x788))) != 0)) {
    if ((uVar1 & 1) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x788))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x788))) GEN_EDX_FWD,this);
      *((uint *)GEN_TOP(((int)this + 0x78c))) = *((uint *)GEN_TOP(((int)this + 0x78c))) & 0xfffffffe;
      return uVar1;
    }
    uVar1 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x788))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x788))) GEN_EDX_ARG,this);
      *((uint *)GEN_TOP(((int)this + 0x78c))) = *((uint *)GEN_TOP(((int)this + 0x78c))) & 0xfffffffd;
    }
  }
  return uVar1;
}

/* ref: FUN_0068eab0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068eab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68eab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined2 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 2))) = 0x100;
  *((undefined4 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x16))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 1;
  return (uint)this;
}

/* ref: FUN_0068eaf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068eaf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68eaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = param_2 != '\0' | *((byte *)GEN_TOP((param_1 + 2))) & 0xfe;
  *((byte *)GEN_TOP((param_1 + 2))) = bVar1;
  return bVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf88 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068eb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68eb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x748))) >> GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2) & 1;
}

/* ref: FUN_0068eb40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068eb40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68eb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0x1001c;
  *(undefined2 *)(in_ecx + 1) = 0;
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_0068eb60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0068eb60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68eb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = param_2 != '\0' | *((byte *)GEN_TOP((param_1 + 6))) & 0xfe;
  *((byte *)GEN_TOP((param_1 + 6))) = bVar1;
  return bVar1;
}

/* ref: FUN_0068eb90 */
GEN_OWN GEN_FRAME uint F_0068eb90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x68eb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(F_00ab2a20(param_1)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    return 0x10b0ddc;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_0068ebc0 */
GEN_OWN GEN_FRAME uint F_0068ebc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x68ebc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(F_00ab2ae0(param_1)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    return 0x10b0de8;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: Client::Graphics::Scene::Terrain::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068ebf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68ebf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  int * piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar1 = *(int *)(this + 0x78);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090998);
  ((float *)(gen_frame + 0x18))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x18))[0], REFG(float, 0x1090998));
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1097b10);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1097b10);
  ((float *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[0], REFG(float, 0x1097b10));
  fVar5 = REFG(float, 0x1090998);
  fVar6 = REFG(float, 0x1097b10);
  fVar7 = REFG(float, 0x1097b10);
  fVar8 = REFG(float, 0x1097b10);
  fVar9 = REFG(float, 0x1090998);
  fVar10 = REFG(float, 0x1090998);
  if (iVar1 != 0) {
    piVar4 = *(int * PTR32 *)(this + 0x74);
    (*(int *)(gen_frame + 0x2c)) = iVar1;
    do {
      pfVar2 = *((float * PTR32 *)GEN_TOP((*piVar4 + 0xf0)));
      pfVar3 = &(*(float *)(gen_frame + 0x10));
      if (!((float10)(*(float *)(gen_frame + 0x10)) < (float10)*pfVar2)) {
        pfVar3 = pfVar2;
      }
      fVar10 = *pfVar3;
      fVar9 = pfVar2[1];
      pfVar3 = pfVar2 + 1;
      (*(float *)(gen_frame + 0x10)) = fVar10;
      if ((float10)(*(float *)(gen_frame + 0x14)) < (float10)fVar9) {
        pfVar3 = &(*(float *)(gen_frame + 0x14));
      }
      fVar9 = *pfVar3;
      fVar5 = pfVar2[2];
      pfVar3 = pfVar2 + 2;
      (*(float *)(gen_frame + 0x14)) = fVar9;
      if ((float10)((float *)(gen_frame + 0x18))[0] < (float10)fVar5) {
        pfVar3 = ((float *)(gen_frame + 0x18));
      }
      fVar8 = pfVar2[4];
      fVar5 = *pfVar3;
      ((float *)(gen_frame + 0x18))[0] = fVar5;
      pfVar3 = &(*(float *)(gen_frame + 0x0));
      if (!((float10)fVar8 < (float10)(*(float *)(gen_frame + 0x0)))) {
        pfVar3 = pfVar2 + 4;
      }
      fVar7 = pfVar2[5];
      fVar8 = *pfVar3;
      pfVar3 = pfVar2 + 5;
      (*(float *)(gen_frame + 0x0)) = fVar8;
      if ((float10)fVar7 < (float10)(*(float *)(gen_frame + 0x4))) {
        pfVar3 = &(*(float *)(gen_frame + 0x4));
      }
      fVar6 = pfVar2[6];
      fVar7 = *pfVar3;
      (*(float *)(gen_frame + 0x4)) = fVar7;
      pfVar3 = ((float *)(gen_frame + 0x8));
      if (!((float10)fVar6 < (float10)((float *)(gen_frame + 0x8))[0])) {
        pfVar3 = pfVar2 + 6;
      }
      fVar6 = *pfVar3;
      piVar4 = piVar4 + 1;
      iVar1 = (*(int *)(gen_frame + 0x2c)) - 1;
      (*(int *)(gen_frame + 0x2c)) = iVar1;
      ((float *)(gen_frame + 0x8))[0] = fVar6;
    } while (iVar1 != 0);
  }
  *param_1 = fVar10;
  param_1[1] = fVar9;
  param_1[2] = fVar5;
  param_1[4] = fVar8;
  param_1[5] = fVar7;
  param_1[6] = fVar6;
  return (uint)param_1;
}

/* ref: FUN_0068ed40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0068ed40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68ed40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x12050, 0);
  gen_size32 _Size;
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  int iVar4;
  short * psVar5;
  undefined * pvVar6;
  int * piVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x1203c)) = 0x68ed60;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x78)));
  (*(undefined4 *)(gen_frame + 0x12028)) = REFG(undefined4, 0x1370c1c);
  if (iVar1 != 0) {
    uVar3 = F_005003e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) GEN_EDX_FWD);
    (*(uint *)(gen_frame + 0x12030)) = uVar3;
    (*(uint *)(gen_frame + 0x1203c)) = 0;
    uVar3 = F_00500500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG);
    if (iVar1 != 0) {
      piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x74)));
      iVar4 = uVar3 - (int)piVar7;
      (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
      (*(int *)(gen_frame + 0x1202c)) = iVar4;
      (*(int *)(gen_frame + 0x12034)) = iVar1;
      do {
        iVar1 = *piVar7;
        uVar8 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xa8))) + 4))) + 0x1e + *((int *)GEN_TOP((iVar1 + 0xa8)))
                               )));
        uVar3 = 0;
        if (uVar8 != 0) {
          psVar5 = ((short *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xb8))) + 0x1a)));
          do {
            if (*psVar5 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar1;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar4 + (int)piVar7;
              (*(uint *)(gen_frame + 0x1203c)) = (*(uint *)(gen_frame + 0x1203c)) + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            psVar5 = psVar5 + 0x1e;
          } while (uVar3 < uVar8);
        }
        piVar7 = piVar7 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
        iVar1 = (*(int *)(gen_frame + 0x12034)) - 1;
        (*(int *)(gen_frame + 0x12034)) = iVar1;
      } while (iVar1 != 0);
    }
    *((uint *)GEN_TOP(((int)this + 0x84))) = (*(uint *)(gen_frame + 0x1203c));
    if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
      _Size = (*(uint *)(gen_frame + 0x1203c)) * 4;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                                 (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,_Size,0x10)));
      *((undefined * PTR32 *)GEN_TOP(((int)this + 0x90))) = pvVar6;
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        F_00c48350(pvVar6,0,_Size);
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                                   (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,_Size,0x10)));
        *((undefined * PTR32 *)GEN_TOP(((int)this + 0x9c))) = pvVar6;
        if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
          F_00c48350(pvVar6,0,_Size);
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
            do {
              uVar8 = F_00637b80(((int *)(gen_frame + 0x11000))[(int)(uVar3)]);
              *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x90))) + uVar3 * 4))) = uVar8;
              piVar7 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x90))) + uVar3 * 4)));
              if (*piVar7 == 0) goto LAB_0068ee30;
              puVar2 = ((ushort *)GEN_TOP(((int *)(gen_frame + 0x10000))[(int)(uVar3)]));
              *((undefined2 *)GEN_TOP((*piVar7 + 8))) = (undefined2)(*(uint *)(gen_frame + 0x12030));
              F_00625340(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x90))) + uVar3 * 4))) GEN_EDX_ARG,(uint)*puVar2,
                           (uint)puVar2[1]);
              uVar3 = uVar3 + 1;
            } while (uVar3 < (*(uint *)(gen_frame + 0x1203c)));
          }
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) == 0) {
            return 1;
          }
          while( true ) {
            uVar8 = F_00b14060((*(undefined4 *)(gen_frame + 0x12028)) GEN_EDX_ARG,9);
            *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x9c))) + uVar3 * 4))) = uVar8;
            if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x9c))) + uVar3 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x9c))) + uVar3 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x90))) + uVar3 * 4)));
            F_006253e0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x90))) + uVar3 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x12000)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x9c))) + uVar3 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x12000)));
            uVar3 = uVar3 + 1;
            if ((*(uint *)(gen_frame + 0x1203c)) <= uVar3) {
              return 1;
            }
          }
        }
      }
LAB_0068ee30: ;
      *((undefined1 *)GEN_TOP(((int)this + 0x65))) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0068ef60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068ef60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68ef60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar7 = 0;
  iVar6 = 0;
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 0x10))))((int)this + 0x70);
  uVar2 = 0;
  local_8 = 0;
  if (1 < *((int *)GEN_TOP(((int)this + 0x220)))) {
    pcVar3 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x224))) + 0x105)));
    iVar5 = (*((int *)GEN_TOP(((int)this + 0x220))) - 2U >> 1) + 1;
    uVar2 = iVar5 * 2;
    do {
      iVar7 = iVar7 + (uint)(pcVar3[-0xa0] == '\x03');
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x140;
      iVar6 = iVar6 + (uint)(cVar1 == '\x03');
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  if (uVar2 < *((uint *)GEN_TOP(((int)this + 0x220)))) {
    local_8 = (uint)(*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x224))) + 0x65 + uVar2 * 0xa0))) == '\x03');
  }
  uVar2 = 0;
  local_10 = 0;
  local_c = 0;
  if (1 < *((int *)GEN_TOP(((int)this + 0x228)))) {
    pcVar3 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22c))) + 0xe5)));
    iVar5 = (*((int *)GEN_TOP(((int)this + 0x228))) - 2U >> 1) + 1;
    uVar2 = iVar5 * 2;
    do {
      local_10 = local_10 + (uint)(pcVar3[-0x80] == '\x03');
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x100;
      local_c = local_c + (uint)(cVar1 == '\x03');
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  uVar4 = 0;
  if (uVar2 < *((uint *)GEN_TOP(((int)this + 0x228)))) {
    uVar4 = (uint)(*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22c))) + 0x65 + uVar2 * 0x80))) == '\x03');
  }
  if (((*((int *)GEN_TOP(((int)this + 0x220))) == local_8 + iVar7 + iVar6) &&
      (*((uint *)GEN_TOP(((int)this + 0x228))) == local_c + local_10 + uVar4)) &&
     (*((char *)GEN_TOP(((int)this + 0xd5))) == '\x03')) {
    *((undefined1 *)GEN_TOP(((int)this + 0x60))) = 2;
  }
  return uVar4;
}

/* ref: FUN_0068f090 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068f090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68f090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 0x28))))((int)this + 0x70);
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x220))) != 0) {
    iVar2 = 0;
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x224))) + iVar2))) + 0x18))))
                        (*((int *)GEN_TOP(((int)this + 0x224))) + iVar2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0xa0;
    } while (uVar3 < *((uint *)GEN_TOP(((int)this + 0x220))));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x60))) = 3;
  return uVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf11 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0068f100(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x68f100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_2;
  fVar4 = *((float *)GEN_TOP((param_1 + 0x50)));
  fVar5 = *((float *)GEN_TOP((param_1 + 0x54)));
  iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x70))) + 0xa8)));
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x38)));
  iVar7 = *((int *)GEN_TOP((iVar6 + 4)));
  *((undefined4 *)GEN_TOP(param_2)) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 4))) = 0;
  *((undefined4 *)GEN_TOP((param_2 + 8))) = 0;
  fVar3 = *((float *)GEN_TOP((iVar7 + 8 + iVar6)));
  *((float *)GEN_TOP((param_2 + 0xc))) = fVar3;
  param_2 = (uint)gen_fl2bits(fVar4);
  if ((float10)fVar4 < (float10)fVar5) {
    param_2 = (uint)gen_fl2bits(fVar5);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)*((float *)GEN_TOP((param_1 + 0x58)))) {
    param_2 = (uint)gen_fl2bits(*((float *)GEN_TOP((param_1 + 0x58))));
  }
  *((undefined4 *)GEN_TOP(uVar8)) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  *((undefined4 *)GEN_TOP((uVar8 + 4))) = uVar1;
  *((undefined4 *)GEN_TOP((uVar8 + 8))) = uVar2;
  *((float *)GEN_TOP((uVar8 + 0xc))) = (float)((float10)fVar3 * ((float10)GEN_TOD(gen_bits2f(param_2))));
  return uVar8;
}

/* ref: Client::Graphics::Scene::BGObject::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068f1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x68f1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  F_0068c610(param_1,((undefined1 *)(gen_frame + 0x0)));
  return param_1;
}

/* ref: FUN_0068f210 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0068f210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x68f210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 0xa8)));
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + 0x20 + iVar2)));
  uVar3 = (uint)uVar1;
  if (uVar1 != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,uVar3 << 6,0x40);
    *((uint *)GEN_TOP(((int)this + 0x7c))) = uVar3;
  }
  return uVar3;
}

