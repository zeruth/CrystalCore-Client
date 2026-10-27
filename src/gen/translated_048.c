#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0067efb0 */
byte F_0067efb0(unsigned int gen_a0)
{
  GEN_ENTER(0x67efb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  undefined4 uVar2;
  char * pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  char * PTR32 * ppcVar7;
  
  bVar5 = F_0067a050(this,1);
  if (bVar5 != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = "shader/posteffect/LightDebug.shcd";
    uVar6 = F_00688330(this,0,&(*(undefined4 *)(gen_frame + 0x0)),1);
    if (uVar6 != 0) {
      bVar5 = F_00677f90(this);
      iVar4 = REFG(int, 0x1371288);
      if (bVar5 != 0) {
        pcVar3 = (char *)(int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1ff;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0xfffffe00;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *(undefined4 *)(REFG(int, 0x1371288) + 0x14);
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),"sLight0",uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1ff;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0xfffffe00;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x18);
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),"sLight1",uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1ff;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar1 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar1;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0xfffffe00;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar1) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x28);
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),"sLight2",uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x1ff;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        if (0x1fe < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        }
        pcVar3 = *ppcVar7;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0xfffffe00;
        ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x4));
        if (-0x201 < (int)pcVar3) {
          ppcVar7 = &(*(char * PTR32 *)(gen_frame + 0x8));
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x2c);
        (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP((((uint)*ppcVar7 & 0x3ff) << 10 | 0x25)));
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),"sLight3",uVar2,&(*(char * PTR32 *)(gen_frame + 0x4)));
        F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4))),0,
                     *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x2c) + 0x34))));
        *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))) = 0x7080541;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0067f1c0 */
uint F_0067f1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x67f1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  char cVar2;
  undefined * this_00;
  float10 fVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  
  cVar2 = *(char *)((int)this + 0x2d);
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x2f) == '\0')) {
    (*(float *)(gen_frame + 0x4)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x30) == '\0')) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x31) == '\0')) {
    (*(float *)(gen_frame + 0x14)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x32) == '\0')) {
    (*(float *)(gen_frame + 0x18)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x33) == '\0')) {
    (*(float *)(gen_frame + 0x1c)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x34) == '\0')) {
    (*(float *)(gen_frame + 0x20)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
  }
  cVar2 = *(char *)((int)this + 0x2e);
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x2f) == '\0')) {
    (*(float *)(gen_frame + 0x24)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x30) == '\0')) {
    (*(float *)(gen_frame + 0x28)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  }
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x31) == '\0')) {
    (*(float *)(gen_frame + 0x34)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x32) == '\0')) {
    (*(float *)(gen_frame + 0x38)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x33) == '\0')) {
    (*(float *)(gen_frame + 0x3c)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
  }
  if ((cVar2 == '\0') || (*(char *)((int)this + 0x34) == '\0')) {
    (*(float *)(gen_frame + 0x40)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  }
  fVar6 = *(float *)((int)this + 0x24);
  (*(float *)(gen_frame + 0x54)) = fVar6;
  fVar7 = (float10)(int)gen_fl2bits(fVar6);
  if ((int)gen_fl2bits(fVar6) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x58)) = (float)fVar7;
  (*(float *)(gen_frame + 0x54)) = 0.0;
  pfVar4 = &(*(float *)(gen_frame + 0x54));
  fVar8 = (float10)0;
  if (!((float10)(float)fVar7 < fVar8)) {
    pfVar4 = &(*(float *)(gen_frame + 0x58));
  }
  fVar1 = *pfVar4;
  fVar6 = gen_bits2f(*(int *)((int)this + 0x28) - (int)gen_fl2bits(fVar6));
  (*(float *)(gen_frame + 0x54)) = fVar6;
  fVar7 = (float10)(int)gen_fl2bits(fVar6);
  (*(float *)(gen_frame + 0x44)) = fVar1;
  if ((int)gen_fl2bits(fVar6) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x58)) = (float)fVar7;
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  pfVar4 = &(*(float *)(gen_frame + 0x54));
  fVar3 = (float10)1;
  if (!((float10)(float)fVar7 < fVar3)) {
    pfVar4 = &(*(float *)(gen_frame + 0x58));
  }
  (*(float *)(gen_frame + 0x48)) = (float)(fVar3 / (float10)*pfVar4);
  if (*(char *)((int)this + 0x2c) != '\0') {
    fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) + -1);
    (*(float *)(gen_frame + 0x54)) = fVar6;
    fVar7 = (float10)(int)gen_fl2bits(fVar6);
    if ((int)gen_fl2bits(fVar6) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x58)) = (float)fVar7;
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    pfVar4 = &(*(float *)(gen_frame + 0x54));
    if (!((float10)(float)fVar7 < fVar3)) {
      pfVar4 = &(*(float *)(gen_frame + 0x58));
    }
    fVar8 = fVar3 / (float10)*pfVar4;
  }
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4c)) = (float)fVar8;
  this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4)));
  (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)((int)this + 0x20);
  uVar5 = F_0067d2b0(this_00,"cLightParam");
  if (-1 < (int)uVar5) {
    F_006793b0(this_00,uVar5,&(*(float *)(gen_frame + 0x4)),0x50);
  }
  uVar5 = F_0067a0f0(this);
  return uVar5;
}

/* ref: FUN_0067f3e0 */
byte F_0067f3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x67f3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  char * PTR32 * ppcVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  F_0067a800(this);
  *(undefined4 *)((int)this + 0x1510) = 0xffffffff;
  uVar5 = *(uint *)((int)this + 0x1510);
  uVar4 = 0;
  uVar2 = 1;
  do {
    bVar1 = (byte)uVar4;
    uVar4 = uVar4 + 1;
    uVar5 = 0 << (bVar1 & 0x1f) | ~uVar2 & uVar5;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while (uVar4 < 0x1b);
  *(uint *)((int)this + 0x1510) = uVar5;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Default.shcd";
  uVar5 = F_00688330((undefined *)((int)this + 0x14),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
  if (uVar5 != 0) {
    pcVar3 = "shader/posteffect/Default.shcd";
    if (*(int *)(REFG(int, 0x1370b90) + 0x44) != 0x8086) {
      pcVar3 = "shader/posteffect/AlphaTest.shcd";
    }
    (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar3;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar5 = F_00688330((undefined *)((int)this + 0x34),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
    if (uVar5 != 0) {
      pcVar3 = "shader/posteffect/DownScaleDepthNormalZ_RAWZ.shcd";
      if ((*(byte *)((int)this + 0x1508) & 4) == 0) {
        pcVar3 = "shader/posteffect/DownScaleDepthNormalZ.shcd";
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 4;
      (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar3;
      uVar5 = F_00688330((undefined *)((int)this + 0x54),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
      if (uVar5 != 0) {
        pcVar3 = "shader/posteffect/ViewDepth_RAWZ.shcd";
        if ((*(byte *)((int)this + 0x1508) & 4) == 0) {
          pcVar3 = "shader/posteffect/ViewDepth.shcd";
        }
        (*(char * PTR32 *)(gen_frame + 0x44)) = pcVar3;
        ((char *)(gen_frame + 0x40))[0] = '\0';
        ((char *)(gen_frame + 0x40))[1] = '\0';
        ((char *)(gen_frame + 0x40))[2] = '\0';
        ((char *)(gen_frame + 0x40))[3] = '\0';
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Default.shcd";
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/Default.shcd";
        uVar5 = 0;
        (*(char * PTR32 *)(gen_frame + 0x10)) = ((char *)(gen_frame + 0x40));
        do {
          uVar2 = F_00688330((undefined *)((int)this + 0x74),uVar5,(*(char * PTR32 *)(gen_frame + 0x10)),0);
          if (uVar2 == 0) goto LAB_0067f44c;
          (*(char * PTR32 *)(gen_frame + 0x10)) = (*(char * PTR32 *)(gen_frame + 0x10)) + 8;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 3);
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Saturate.shcd";
        uVar5 = F_00688330((undefined *)((int)this + 0x94),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
        if (uVar5 != 0) {
          ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
          ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/DownScale2x2_Linear.shcd";
          (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
          (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/DownScale2x2_Linear.shcd";
          ((char *)(gen_frame + 0x40))[0] = '\0';
          ((char *)(gen_frame + 0x40))[1] = '\0';
          ((char *)(gen_frame + 0x40))[2] = '\0';
          ((char *)(gen_frame + 0x40))[3] = '\0';
          (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/DownScale2x2_Linear.shcd";
          (*(undefined4 *)(gen_frame + 0x48)) = 3;
          (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/MeasureLumInitial.shcd";
          (*(undefined4 *)(gen_frame + 0x50)) = 0;
          (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/AdaptLum.shcd";
          uVar5 = 0;
          do {
            if (uVar5 == 3) {
              uVar2 = F_00687d40((undefined *)((int)this + 0xb4),3,&(*(undefined4 *)(gen_frame + 0x48)),0);
            }
            else if (uVar5 == 4) {
              uVar2 = F_00687e00((undefined *)((int)this + 0xb4),4,&(*(undefined4 *)(gen_frame + 0x50)),0);
            }
            else {
              uVar2 = F_00688330((undefined *)((int)this + 0xb4),uVar5,((char * PTR32 *)(gen_frame + 0x28)) + uVar5 * 2 + 2,0);
            }
            if (uVar2 == 0) goto LAB_0067f44c;
            uVar5 = uVar5 + 1;
          } while (uVar5 < 5);
          (*(undefined4 *)(gen_frame + 0xc)) = 0;
          (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/ToneMapping.shcd";
          uVar5 = F_00688330((undefined *)((int)this + 0xd4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
          if (uVar5 != 0) {
            (*(undefined4 *)(gen_frame + 0xc)) = 0;
            (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/ToneAdjust.shcd";
            uVar5 = F_00688330((undefined *)((int)this + 0xf4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
            if (uVar5 != 0) {
              (*(undefined4 *)(gen_frame + 0xc)) = 0;
              (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Default.shcd";
              uVar5 = F_00688330((undefined *)((int)this + 0x114),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
              if (uVar5 != 0) {
                pvVar6 = (undefined *)((int)this + 0x134);
                ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
                ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/BrightPassFilter.shcd";
                (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x8;
                (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/GaussBlur5x5_Linear.shcd";
                ((char *)(gen_frame + 0x40))[0] = '\0';
                ((char *)(gen_frame + 0x40))[1] = '\0';
                ((char *)(gen_frame + 0x40))[2] = '\0';
                ((char *)(gen_frame + 0x40))[3] = '\0';
                (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/DownScale2x2_Linear.shcd";
                (*(undefined4 *)(gen_frame + 0x48)) = 7;
                (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/StarBlur.shcd";
                (*(undefined4 *)(gen_frame + 0x50)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/GlareMerge.shcd";
                uVar5 = 0;
                do {
                  if (uVar5 == 2) {
                    uVar2 = F_00687f00(pvVar6,2,((char *)(gen_frame + 0x40)),0);
                  }
                  else if (uVar5 == 3) {
                    uVar2 = F_00687fc0(pvVar6,3,&(*(undefined4 *)(gen_frame + 0x48)),0);
                  }
                  else {
                    uVar2 = F_00688330(pvVar6,uVar5,((char * PTR32 *)(gen_frame + 0x28)) + uVar5 * 2 + 2,0);
                  }
                  if (uVar2 == 0) goto LAB_0067f44c;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < 5);
                (*(undefined4 *)(gen_frame + 0x4)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x8)) = "shader/posteffect/MergeTextures1.shcd";
                (*(undefined4 *)(gen_frame + 0xc)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Default.shcd";
                uVar5 = 0;
                puVar7 = &(*(undefined4 *)(gen_frame + 0x4));
                do {
                  uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x154),uVar5,puVar7,0);
                  if (uVar2 == 0) goto LAB_0067f44c;
                  uVar5 = uVar5 + 1;
                  puVar7 = puVar7 + 2;
                } while (uVar5 < 2);
                (*(undefined4 *)(gen_frame + 0x48)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/FXAALuma.shcd";
                (*(undefined4 *)(gen_frame + 0x50)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/FXAA.shcd";
                (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x174);
                uVar5 = 0;
                puVar7 = &(*(undefined4 *)(gen_frame + 0x48));
                do {
                  uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0x10)),uVar5,puVar7,0);
                  if (uVar2 == 0) goto LAB_0067f44c;
                  uVar5 = uVar5 + 1;
                  puVar7 = puVar7 + 2;
                } while (uVar5 < 2);
                (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/Clear.shcd";
                ((char *)(gen_frame + 0x40))[0] = '\0';
                ((char *)(gen_frame + 0x40))[1] = '\0';
                ((char *)(gen_frame + 0x40))[2] = '\0';
                ((char *)(gen_frame + 0x40))[3] = '\0';
                (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/Sky.shcd";
                (*(undefined4 *)(gen_frame + 0x48)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Sky2.shcd";
                (*(undefined4 *)(gen_frame + 0x50)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/Default.shcd";
                uVar5 = 0;
                ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28)) + 4;
                do {
                  uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x194),uVar5,ppcVar8,0);
                  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
                  if (uVar2 == 0) goto LAB_0067f44c;
                  uVar5 = uVar5 + 1;
                  ppcVar8 = ppcVar8 + 2;
                } while (uVar5 < 4);
                (*(undefined4 *)(gen_frame + 0xc)) = 0;
                (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/Moon.shcd";
                uVar5 = F_00688090((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x1b4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                if (uVar5 != 0) {
                  (*(undefined4 *)(gen_frame + 0xc)) = 3;
                  (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/CloudShadow.shcd";
                  uVar5 = F_00688330((undefined *)((int)pvVar6 + 0x1d4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                  if (uVar5 != 0) {
                    (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                    (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/Default.shcd";
                    ((char *)(gen_frame + 0x40))[0] = '\0';
                    ((char *)(gen_frame + 0x40))[1] = '\0';
                    ((char *)(gen_frame + 0x40))[2] = '\0';
                    ((char *)(gen_frame + 0x40))[3] = '\0';
                    (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/Halo.shcd";
                    (*(undefined4 *)(gen_frame + 0x48)) = 0;
                    (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Default.shcd";
                    (*(undefined4 *)(gen_frame + 0x50)) = 0;
                    (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/Default.shcd";
                    uVar5 = 0;
                    ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28)) + 4;
                    do {
                      uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 500),uVar5,ppcVar8,0);
                      if (uVar2 == 0) goto LAB_0067f44c;
                      uVar5 = uVar5 + 1;
                      ppcVar8 = ppcVar8 + 2;
                    } while (uVar5 < 4);
                    pcVar3 = "shader/posteffect/Fog_RAWZ.shcd";
                    if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x1508) & 4) == 0) {
                      pcVar3 = "shader/posteffect/Fog.shcd";
                    }
                    (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar3;
                    (*(undefined4 *)(gen_frame + 0xc)) = 0;
                    uVar5 = F_00688520((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x214),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
                    if (uVar5 != 0) {
                      ((char * PTR32 *)(gen_frame + 0x18))[0] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x18))[1] = "shader/posteffect/DepthOfFieldWeight2.shcd";
                      ((char * PTR32 *)(gen_frame + 0x18))[2] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x18))[3] = "shader/posteffect/DownScale2x2_Linear.shcd";
                      ((char * PTR32 *)(gen_frame + 0x28))[0] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[1] = "shader/posteffect/DownScale2x2_Linear.shcd";
                      ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x3;
                      ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/DepthOfFieldDownScale4x4.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x3;
                      (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/DownScale3x3_Linear.shcd";
                      ((char *)(gen_frame + 0x40))[0] = '\x0f';
                      ((char *)(gen_frame + 0x40))[1] = '\0';
                      ((char *)(gen_frame + 0x40))[2] = '\0';
                      ((char *)(gen_frame + 0x40))[3] = '\0';
                      (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/DepthOfFieldDiscBlurNear.shcd";
                      (*(undefined4 *)(gen_frame + 0x48)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/DepthOfFieldMergeFar.shcd";
                      (*(undefined4 *)(gen_frame + 0x50)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/DepthOfFieldMerge2.shcd";
                      uVar5 = 0;
                      do {
                        if (uVar5 == 0) {
                          uVar2 = F_00688160((undefined *)((int)pvVar6 + 0x234),0,((char * PTR32 *)(gen_frame + 0x18)),0);
                        }
                        else {
                          uVar2 = F_00688330((undefined *)((int)pvVar6 + 0x234),uVar5,
                                               ((char * PTR32 *)(gen_frame + 0x18)) + uVar5 * 2,0);
                        }
                        if (uVar2 == 0) goto LAB_0067f44c;
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 8);
                      pcVar3 = "shader/posteffect/CameraVelocity_RAWZ.shcd";
                      if ((*(byte *)((int)pvVar6 + 0x1508) & 4) == 0) {
                        pcVar3 = "shader/posteffect/CameraVelocity.shcd";
                      }
                      ((char * PTR32 *)(gen_frame + 0x28))[0] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[1] = pcVar3;
                      ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/CameraSpeed.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                      (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/CameraMotionBlur.shcd";
                      ((char *)(gen_frame + 0x40))[0] = '\0';
                      ((char *)(gen_frame + 0x40))[1] = '\0';
                      ((char *)(gen_frame + 0x40))[2] = '\0';
                      ((char *)(gen_frame + 0x40))[3] = '\0';
                      (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/CameraMotionBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x48)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/CameraMotionBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x50)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/CameraMotionBlurMerge.shcd";
                      uVar5 = 0;
                      do {
                        if (uVar5 == 0) {
                          uVar2 = F_00688240((undefined *)((int)pvVar6 + 0x254),0,((char * PTR32 *)(gen_frame + 0x28)),0);
                        }
                        else {
                          uVar2 = F_00688330((undefined *)((int)pvVar6 + 0x254),uVar5,
                                               ((char * PTR32 *)(gen_frame + 0x28)) + uVar5 * 2,0);
                        }
                        if (uVar2 == 0) goto LAB_0067f44c;
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 6);
                      ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/Default.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                      (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/RadialBlur.shcd";
                      ((char *)(gen_frame + 0x40))[0] = '\0';
                      ((char *)(gen_frame + 0x40))[1] = '\0';
                      ((char *)(gen_frame + 0x40))[2] = '\0';
                      ((char *)(gen_frame + 0x40))[3] = '\0';
                      (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x48)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x50)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/DonutMerge.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x274);
                      uVar5 = 0;
                      ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28));
                      do {
                        ppcVar8 = (char * PTR32 *)((int)ppcVar8 + 8);
                        uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0x10)),uVar5,ppcVar8,0);
                        if (uVar2 == 0) goto LAB_0067f44c;
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < 5);
                      ((char * PTR32 *)(gen_frame + 0x28))[0] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[1] = "shader/posteffect/Sun.shcd";
                      ((char * PTR32 *)(gen_frame + 0x28))[2] = (char *)0x0;
                      ((char * PTR32 *)(gen_frame + 0x28))[3] = "shader/posteffect/RadialBlur.shcd";
                      (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                      (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/RadialBlur.shcd";
                      ((char *)(gen_frame + 0x40))[0] = '\0';
                      ((char *)(gen_frame + 0x40))[1] = '\0';
                      ((char *)(gen_frame + 0x40))[2] = '\0';
                      ((char *)(gen_frame + 0x40))[3] = '\0';
                      (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/RadialBlur.shcd";
                      (*(undefined4 *)(gen_frame + 0x48)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/GodraysMerge.shcd";
                      (*(undefined4 *)(gen_frame + 0x50)) = 0xf;
                      (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/DownScale4x4_Point.shcd";
                      uVar5 = 0;
                      ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28));
                      do {
                        uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x294),uVar5,ppcVar8,0);
                        if (uVar2 == 0) goto LAB_0067f44c;
                        uVar5 = uVar5 + 1;
                        ppcVar8 = ppcVar8 + 2;
                      } while (uVar5 < 6);
                      (*(undefined4 *)(gen_frame + 0xc)) = 0;
                      (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/ColorFilter.shcd";
                      uVar5 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x2b4),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                      if (uVar5 != 0) {
                        (*(undefined4 *)(gen_frame + 0x48)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Vignetting.shcd";
                        (*(undefined4 *)(gen_frame + 0x50)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/AlphaTest.shcd";
                        uVar5 = 0;
                        puVar7 = &(*(undefined4 *)(gen_frame + 0x48));
                        do {
                          uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x2d4),uVar5,puVar7,0);
                          if (uVar2 == 0) goto LAB_0067f44c;
                          uVar5 = uVar5 + 1;
                          puVar7 = puVar7 + 2;
                        } while (uVar5 < 2);
                        (*(undefined4 *)(gen_frame + 0x48)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/Default.shcd";
                        (*(undefined4 *)(gen_frame + 0x50)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/Default.shcd";
                        (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x314);
                        uVar5 = 0;
                        puVar7 = &(*(undefined4 *)(gen_frame + 0x48));
                        do {
                          uVar2 = F_00688330((*(char * PTR32 *)(gen_frame + 0x10)),uVar5,puVar7,0);
                          if (uVar2 == 0) goto LAB_0067f44c;
                          uVar5 = uVar5 + 1;
                          puVar7 = puVar7 + 2;
                        } while (uVar5 < 2);
                        (*(char * PTR32 *)(gen_frame + 0x38)) = (char *)0x0;
                        (*(char * PTR32 *)(gen_frame + 0x3c)) = "shader/posteffect/QueryInitial.shcd";
                        ((char *)(gen_frame + 0x40))[0] = '\0';
                        ((char *)(gen_frame + 0x40))[1] = '\0';
                        ((char *)(gen_frame + 0x40))[2] = '\0';
                        ((char *)(gen_frame + 0x40))[3] = '\0';
                        (*(char * PTR32 *)(gen_frame + 0x44)) = "shader/posteffect/QueryWeight.shcd";
                        (*(undefined4 *)(gen_frame + 0x48)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x4c)) = "shader/posteffect/QueryWeight.shcd";
                        (*(undefined4 *)(gen_frame + 0x50)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x54)) = "shader/posteffect/QueryWeight.shcd";
                        uVar5 = 0;
                        ppcVar8 = ((char * PTR32 *)(gen_frame + 0x28)) + 4;
                        do {
                          uVar2 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x334),uVar5,ppcVar8,0);
                          pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
                          if (uVar2 == 0) goto LAB_0067f44c;
                          uVar5 = uVar5 + 1;
                          ppcVar8 = ppcVar8 + 2;
                        } while (uVar5 < 4);
                        (*(undefined4 *)(gen_frame + 0xc)) = 0;
                        (*(char * PTR32 *)(gen_frame + 0x10)) = "shader/posteffect/QueryWeight.shcd";
                        uVar5 = F_00688330((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x354),0,&(*(undefined4 *)(gen_frame + 0xc)),0);
                        if (uVar5 != 0) {
                          bVar1 = F_0067d150(pvVar6);
                          F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
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
LAB_0067f44c: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_0067fb80 */
uint F_0067fb80(unsigned int gen_a0)
{
  GEN_ENTER(0x67fb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x140];
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
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(int *)(gen_frame + 0x8c)) = REFG(int, 0x1371288);
  fVar11 = 0.0;
  if (REFG(int, 0x1371288) != 0) {
    if (((*(byte *)((int)this + 0x1510) & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x14)), bVar9 != 0)) {
      dVar8 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x1458);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1458);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))),0,*(undefined4 *)((int)this + 0x1488)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 1;
    }
    if (((*(uint *)((int)this + 0x1510) >> 1 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x34)), bVar9 != 0)) {
      dVar8 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x146c);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x38)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x146c),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x38))),0,*(undefined4 *)((int)this + 0x1458)
                  );
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x38) + 0x30))) = 0x7080541;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 2;
    }
    if (((*(uint *)((int)this + 0x1510) >> 2 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x54)), bVar9 != 0)) {
      fVar11 = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1464);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))),"sDepth",uVar16,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x146c);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))),"sNormal",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))),0,*(undefined4 *)((int)this + 0x14c0)
                  );
      ((float *)(gen_frame + 0x90))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[0], REFG(float, 0x1099848));
      ((float *)(gen_frame + 0x90))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[1], REFG(float, 0x1099848));
      ((float *)(gen_frame + 0x90))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[2], REFG(float, 0x1094808));
      ((float *)(gen_frame + 0x90))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[3], REFG(float, 0x1099848));
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1099848);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1094808);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1094808);
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1094808);
      pfVar10 = ((float *)(gen_frame + 0xb4));
      pfVar15 = ((float *)(gen_frame + 0x90));
      for (iVar13 = 8; pfVar10 = (float *)((int)pfVar10 + 4), iVar13 != 0; iVar13 = iVar13 + -1) {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x58))),((float *)(gen_frame + 0xb4)) + 1,4);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 4;
    }
    if (((*(uint *)((int)this + 0x1510) >> 3 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x74)), bVar9 != 0)) {
      fVar11 = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x14c0);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x78);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0((undefined *)*puVar4,"sDepthNormalZ",uVar16,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1468);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x78);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0((undefined *)*puVar4,"sDepth",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x78))),0,*(undefined4 *)((int)this + 0x1494)
                  );
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 4)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(pvVar2,"sInput",*(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 4))),0,*(undefined4 *)((int)this + 0x1494))
      ;
      *((undefined1 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + 4))) + 0x30))) = REFP(0x00a00101);
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1458);
      iVar13 = *(int *)((int)this + 0x78);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(*(undefined * PTR32 *)(iVar13 + 8),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 8))),0,*(undefined4 *)((int)this + 0x1494))
      ;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + 8))) + 0x30))) = 0xa88101;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 8;
    }
    if (((*(uint *)((int)this + 0x1510) >> 4 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x94)), bVar9 != 0)) {
      dVar8 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)((int)this + 0x1458);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1458);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x98))),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x98))),0,*(undefined4 *)((int)this + 0x1488)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x10;
    }
    if (((*(uint *)((int)this + 0x1510) >> 5 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0xb4)), bVar9 != 0)) {
      dVar8 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)this + 0x1458);
      fVar11 = gen_bits2f((int)dVar8);
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb8)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb8))),0,*(undefined4 *)((int)this + 0x148c)
                  );
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x148c);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 4))),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 4))),0,*(undefined4 *)((int)this + 0x14a0))
      ;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x14a0);
      iVar13 = *(int *)((int)this + 0xb8);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(*(undefined * PTR32 *)(iVar13 + 8),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 8))),0,*(undefined4 *)((int)this + 0x14ac))
      ;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xb8) + 0xc)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x14ac),((float *)(gen_frame + 0xb4)));
      iVar13 = *(int *)((int)this + 0xb8);
      uVar16 = *((undefined4 *)GEN_TOP((*(int *)(iVar13 + 0xc) + 0x50)));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0(*(undefined * PTR32 *)(iVar13 + 0x10),"sToneMap",uVar16,((float *)(gen_frame + 0xb4)));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x20;
    }
    if (((*(uint *)((int)this + 0x1510) >> 6 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0xd4)), bVar9 != 0)) {
      dVar8 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)this + 0x1458);
      (*(int * PTR32 *)(gen_frame + 0x88)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x10))) + 0x7c)));
      fVar11 = gen_bits2f((int)dVar8);
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1458);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0xd8);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d450((undefined *)*puVar4,"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0xd8);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d3e0((undefined *)*puVar4,"sToneMap",(*(int * PTR32 *)(gen_frame + 0x88)),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xd8))),0,*(undefined4 *)((int)this + 0x1488)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x40;
    }
    if (((*(uint *)((int)this + 0x1510) >> 7 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0xf4)), bVar9 != 0)) {
      dVar8 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x100) = *(undefined4 *)((int)this + 0x1458);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1458);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x25);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xf8))),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xf8))),0,*(undefined4 *)((int)this + 0x1460)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x80;
    }
    if (((*(uint *)((int)this + 0x1510) >> 8 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x114)), bVar9 != 0)) {
      dVar8 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x1458);
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)dVar8);
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)dVar8) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x118)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x118))),0,
                   *(undefined4 *)((int)this + 0x1498));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x100;
    }
    if (((*(uint *)((int)this + 0x1510) >> 9 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x134)), bVar9 != 0)) {
      dVar8 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0x1458);
      fVar11 = gen_bits2f((int)dVar8);
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1498);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x138);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450((undefined *)*puVar4,"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x1494);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x138);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0((undefined *)*puVar4,"sGeometry",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x138))),0,
                   *(undefined4 *)((int)this + 0x149c));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 4)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x149c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 4))),0,*(undefined4 *)((int)this + 0x14a8)
                  );
      iVar13 = *((int *)GEN_TOP((*(int *)((int)this + 0x138) + 4)));
      pbVar1 = (byte *)(iVar13 + 0x48);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(iVar13 + 0x34) = 0;
      iVar13 = *((int *)GEN_TOP((*(int *)((int)this + 0x138) + 4)));
      *(undefined2 *)(iVar13 + 0x3c) = 0xffff;
      *(undefined2 *)(iVar13 + 0x3e) = 0xffff;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x14a8);
      iVar13 = *(int *)((int)this + 0x138);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x26a);
      F_0067d450(*(undefined * PTR32 *)(iVar13 + 8),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 8))),0,*(undefined4 *)((int)this + 0x14b4)
                  );
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0xc)));
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x26a);
      F_0067d450(pvVar2,"sInput",*(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x14a4));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar3 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar3;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar3)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x14b4);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0x10))),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)gen_fl2bits(fVar11)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar16 = *(undefined4 *)((int)this + 0x14a4);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0x10))),"sMerge1",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 0x10))),0,
                   *(undefined4 *)((int)this + 0x14a8));
      ((float *)(gen_frame + 0x40))[0] = 0.0;
      ((float *)(gen_frame + 0x40))[1] = 0.0;
      ((float *)(gen_frame + 0x40))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[2], REFG(float, 0x10adb80));
      ((float *)(gen_frame + 0x40))[3] = 0.0;
      ((float *)(gen_frame + 0x40))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[4], REFG(float, 0x10adb7c));
      (*(float *)(gen_frame + 0x54)) = 0.0;
      (*(float *)(gen_frame + 0x58)) = 0.0;
      (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x60)) = 0.0;
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x70)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x74)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x78)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x10adb80);
      (*(float *)(gen_frame + 0x80)) = REFG(float, 0x10adb7c);
      (*(float *)(gen_frame + 0x84)) = REFG(float, 0x10adb7c);
      pfVar10 = ((float *)(gen_frame + 0xb4));
      pfVar15 = ((float *)(gen_frame + 0x40));
      for (iVar13 = 0x12; pfVar10 = (float *)((int)pfVar10 + 4), iVar13 != 0; iVar13 = iVar13 + -1)
      {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x138) + 4))),((float *)(gen_frame + 0xb4)) + 1,9);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x200;
    }
    if (((*(uint *)((int)this + 0x1510) >> 10 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x154)), bVar9 != 0)) {
      if ((*(uint *)((int)this + 0x1508) & 0x400) == 0) {
        uVar16 = *(undefined4 *)((int)this + 0x149c);
      }
      else {
        uVar16 = *(undefined4 *)((int)this + 0x148c);
      }
      (*(float *)(gen_frame + 0xb0)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0));
      ((float *)(gen_frame + 0xb4))[0] = 7.16064e-43;
      pfVar10 = &(*(float *)(gen_frame + 0xb0));
      if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
        pfVar10 = ((float *)(gen_frame + 0xb4));
      }
      fVar11 = *pfVar10;
      (*(float *)(gen_frame + 0xb0)) = fVar11;
      ((float *)(gen_frame + 0xb4))[0] = -NAN;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      if (-0x201 < (int)gen_fl2bits(fVar11)) {
        pfVar10 = &(*(float *)(gen_frame + 0xb0));
      }
      uVar5 = *(undefined4 *)((int)this + 0x14a8);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x158);
      ((float *)(gen_frame + 0xb4))[0] = gen_bits2f(((uint)gen_fl2bits(*pfVar10) & 0x3ff) << 10 | 0x265);
      F_0067d3e0((undefined *)*puVar4,"sInput",uVar5,((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x158))),0,uVar16);
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x158) + 0x30))) = 0x7080111;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x158) + 4))),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x158) + 4))),0,*(undefined4 *)((int)this + 0x1458)
                  );
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x158) + 4))) + 0x30))) = 0x7080111;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x400;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xb & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x174)), bVar9 != 0)) {
      *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x178))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x178))),0,
                   *(undefined4 *)((int)this + 0x1488));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x178) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x178) + 4))),0,*(undefined4 *)((int)this + 0x1458)
                  );
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x800;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xc & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x194)), bVar9 != 0)) {
      uVar16 = **(undefined4 * PTR32 *)((int)this + 0x198);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1090708);
      F_006775f0(uVar16,(uint)&(*(float *)(gen_frame + 0xa0)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x198))),0,
                   *(undefined4 *)((int)this + 0x14a8));
      uVar16 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 4)));
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1090708);
      F_006775f0(uVar16,(uint)&(*(float *)(gen_frame + 0xa0)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 4))),0,*(undefined4 *)((int)this + 0x14a8)
                  );
      uVar16 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 8)));
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1090708);
      F_006775f0(uVar16,(uint)&(*(float *)(gen_frame + 0xa0)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 8))),0,*(undefined4 *)((int)this + 0x14a8)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x1458));
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))),*(undefined4 *)((int)this + 0x1464)
                  );
      *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))) + 8))) + 0x20))) = GEN_FLT_TO(*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))) + 8))) + 0x20))), REFG(float, 0x1087f04));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x198) + 0xc))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x1000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xd & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x1b4)), bVar9 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1b8))),0,
                   *(undefined4 *)((int)this + 0x1458));
      F_00676250(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1b8))),*(undefined4 *)((int)this + 0x1464))
      ;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x2000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xe & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x1d4)), bVar9 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xb4)),0,0,2,9,(float)(float10)0,0,0,0);
      iVar13 = (*(int *)(gen_frame + 0x8c));
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1d8))),"sInput",
                   *(undefined4 *)((*(int *)(gen_frame + 0x8c)) + 0x58),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1d8))),0,*(undefined4 *)(iVar13 + 0x8c));
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1d8);
      ((float *)(gen_frame + 0x90))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[0], REFG(float, 0x1090708));
      ((float *)(gen_frame + 0x90))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[1], REFG(float, 0x109cab8));
      ((float *)(gen_frame + 0x90))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[2], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0x90))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[3], REFG(float, 0x1088068));
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1087f04);
      pfVar10 = ((float *)(gen_frame + 0xb4));
      pfVar15 = ((float *)(gen_frame + 0x90));
      for (iVar13 = 8; pfVar10 = (float *)((int)pfVar10 + 4), iVar13 != 0; iVar13 = iVar13 + -1) {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650((undefined *)*puVar4,((float *)(gen_frame + 0xb4)) + 1,4);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x4000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0xf & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 500)), bVar9 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1f8))),"sInput",
                   *(undefined4 *)((int)this + 0x145c),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x1f8))),0,
                   *(undefined4 *)((int)this + 0x14a8));
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1f8) + 0x30))) = 0x7808511;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 4))),&REFG(undefined, 0x10ad690),
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 4))),0,*(undefined4 *)((int)this + 0x14a4)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))),"sInput",
                   *(undefined4 *)((int)this + 0x145c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))),0,*(undefined4 *)((int)this + 0x1458)
                  );
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))),*(undefined4 *)((int)this + 0x1464));
      *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))) + 8))) + 0x20))) = GEN_FLT_TO(*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))) + 8))) + 0x20))), REFG(float, 0x1087f04));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8))) + 0x30))) = 0x7800511;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x14a4),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x1458));
      F_00676250(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))),*(undefined4 *)((int)this + 0x1464)
                  );
      *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))) + 8))) + 0x20))) = GEN_FLT_TO(*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))) + 8))) + 0x20))), REFG(float, 0x1087f04));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))) + 0x2c))) = REFG(undefined4, 0x1302364) & 0x1f;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc))) + 0x30))) = 0x7080111;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x8000;
    }
    if (((*(byte *)((int)this + 0x1512) & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x214)), bVar9 != 0)) {
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x218))),"sDepth",
                   *(undefined4 *)((int)this + 0x1464),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x218))),&REFG(undefined, 0x10ad6b0),
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x218))),"sGeometry",
                   *(undefined4 *)((int)this + 0x1494),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x218))),0,
                   *(undefined4 *)((int)this + 0x1458));
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x218) + 0x30))) = 0x7800541;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x10000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x11 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x234)), bVar9 != 0)) {
      *(undefined4 *)((int)this + 0x240) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x238))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x238))),"sGeometry",
                   *(undefined4 *)((int)this + 0x1494),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x238))),0,
                   *(undefined4 *)((int)this + 0x1488));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 4))),0,*(undefined4 *)((int)this + 0x148c)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 8))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 8))),0,*(undefined4 *)((int)this + 0x14a0)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x149c));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc))),1,
                   *(undefined4 *)((int)this + 0x14a0));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x10))),"sInput",
                   *(undefined4 *)((int)this + 0x14a0),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x10))),0,
                   *(undefined4 *)((int)this + 0x14a8));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x14))),"sNear",
                   *(undefined4 *)((int)this + 0x149c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x14))),0,
                   *(undefined4 *)((int)this + 0x14a4));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18))),&REFG(undefined, 0x10ad700),
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18))),0,
                   *(undefined4 *)((int)this + 0x1458));
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18))) + 0x30))) = 0x7080011;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),"sNear",
                   *(undefined4 *)((int)this + 0x14a4),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),&REFG(undefined, 0x10ad718),
                   *(undefined4 *)((int)this + 0x14a8),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),"sInput",
                   *(undefined4 *)((int)this + 0x1488),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),0,
                   *(undefined4 *)((int)this + 0x1458));
      fVar3 = REFG(float, 0x1099848);
      fVar11 = REFG(float, 0x1094808);
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))) + 0x30))) = 0x7080011;
      ((float *)(gen_frame + 0x90))[0] = fVar3;
      ((float *)(gen_frame + 0x90))[1] = fVar3;
      ((float *)(gen_frame + 0x90))[2] = fVar11;
      ((float *)(gen_frame + 0x90))[3] = fVar3;
      (*(float *)(gen_frame + 0xa0)) = fVar3;
      (*(float *)(gen_frame + 0xa4)) = fVar11;
      (*(float *)(gen_frame + 0xa8)) = fVar11;
      (*(float *)(gen_frame + 0xac)) = fVar11;
      pfVar10 = ((float *)(gen_frame + 0xb4));
      pfVar15 = ((float *)(gen_frame + 0x90));
      for (iVar13 = 8; pfVar10 = (float *)((int)pfVar10 + 4), iVar13 != 0; iVar13 = iVar13 + -1) {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc))),((float *)(gen_frame + 0xb4)) + 1,4);
      iVar13 = *(int *)((int)this + 0x238);
      ((float *)(gen_frame + 0x90))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[0], REFG(float, 0x109cab8));
      ((float *)(gen_frame + 0x90))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[1], REFG(float, 0x109cab8));
      ((float *)(gen_frame + 0x90))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[2], REFG(float, 0x1088068));
      ((float *)(gen_frame + 0x90))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x90))[3], REFG(float, 0x109cab8));
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1088068);
      pfVar10 = ((float *)(gen_frame + 0xb4));
      pfVar15 = ((float *)(gen_frame + 0x90));
      for (iVar14 = 8; pfVar10 = (float *)((int)pfVar10 + 4), iVar14 != 0; iVar14 = iVar14 + -1) {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(*(undefined * PTR32 *)(iVar13 + 0x10),((float *)(gen_frame + 0xb4)) + 1,4);
      F_00675e70(((float *)(gen_frame + 0xb4)) + 1);
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x14))),((float *)(gen_frame + 0xb4)) + 1,0x10);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x20000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x12 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x254)), bVar9 != 0)) {
      *(undefined4 *)((int)this + 0x260) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 600))),"sDepth",
                   *(undefined4 *)((int)this + 0x1464),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 600))),0,*(undefined4 *)((int)this + 0x14b8))
      ;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 4))),"sVelocity",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 4))),0,*(undefined4 *)((int)this + 0x148c));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 8))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 8))),"sVelocity",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 8))),0,*(undefined4 *)((int)this + 0x1490));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x1490),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0xc))),"sVelocity",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0xc))),0,*(undefined4 *)((int)this + 0x148c)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x10))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x10))),"sVelocity",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x10))),0,
                   *(undefined4 *)((int)this + 0x1490));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x14))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x14))),"sBlur",
                   *(undefined4 *)((int)this + 0x1490),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 600) + 0x14))),0,
                   *(undefined4 *)((int)this + 0x1488));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x40000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x13 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x274)), bVar9 != 0)) {
      *(undefined4 *)((int)this + 0x280) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x278))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x278))),0,
                   *(undefined4 *)((int)this + 0x148c));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 4))),0,*(undefined4 *)((int)this + 0x1490)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 8))),"sInput",
                   *(undefined4 *)((int)this + 0x1490),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 8))),0,*(undefined4 *)((int)this + 0x148c)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0xc))),"sInput",
                   *(undefined4 *)((int)this + 0x148c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0xc))),0,
                   *(undefined4 *)((int)this + 0x1490));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0x10))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0x10))),"sMerge1",
                   *(undefined4 *)((int)this + 0x1490),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x278) + 0x10))),0,
                   *(undefined4 *)((int)this + 0x1488));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x80000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x14 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x294)), bVar9 != 0)) {
      if ((*(uint *)((int)this + 0x1508) >> 10 & 1) == 0) {
        (*(float *)(gen_frame + 0xa4)) = *(float *)((int)this + 0x149c);
        uVar16 = *(undefined4 *)((int)this + 0x14a0);
        (*(float *)(gen_frame + 0xac)) = *(float *)((int)this + 0x14a4);
      }
      else {
        (*(float *)(gen_frame + 0xa4)) = *(float *)((int)this + 0x148c);
        uVar16 = *(undefined4 *)((int)this + 0x1490);
        (*(float *)(gen_frame + 0xac)) = *(float *)((int)this + 0x1498);
      }
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x298))),"sGeometry",
                   *(undefined4 *)((int)this + 0x1494),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x298))),0,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa4)))
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 4))),"sInput",
                   (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa4))),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 4))),0,uVar16);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 8))),"sInput",uVar16,((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 8))),0,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xac))))
      ;
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0xc))),"sInput",
                   (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xac))),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0xc))),0,uVar16);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x10))),"sMerge1",uVar16,((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x10))),"sMerge2",
                   (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xac))),((float *)(gen_frame + 0xb4)));
      fVar11 = (*(float *)(gen_frame + 0xa4));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x10))),0,
                   (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa4))));
      F_004d4af0(((float *)(gen_frame + 0xb4)),2,2,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x14))),"sInput",
                   (undefined4)gen_fl2bits(fVar11),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x14))),0,
                   *(undefined4 *)((int)this + 0x1478));
      if ((*(byte *)((int)this + 0x1508) & 0x18) != 0) {
        iVar13 = *((int *)GEN_TOP((*(int *)((int)this + 0x298) + 0x14)));
        pbVar1 = (byte *)(iVar13 + 0x48);
        *pbVar1 = *pbVar1 | 1;
        *(undefined4 *)(iVar13 + 0x34) = 0;
      }
      ((float *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[0], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x8))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[1], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x8))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[2], REFG(float, 0x10ac274));
      ((float *)(gen_frame + 0x8))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[3], REFG(float, 0x10adb78));
      (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x20)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x28)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x30)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x34)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x38)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x10ac274);
      ((float *)(gen_frame + 0x40))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[0], REFG(float, 0x10adb74));
      ((float *)(gen_frame + 0x40))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[1], REFG(float, 0x10ac274));
      ((float *)(gen_frame + 0x40))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[2], REFG(float, 0x10adb78));
      ((float *)(gen_frame + 0x40))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[3], REFG(float, 0x10ac160));
      ((float *)(gen_frame + 0x40))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x40))[4], REFG(float, 0x10ac274));
      (*(float *)(gen_frame + 0x54)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x58)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x10adb78);
      (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x70)) = REFG(float, 0x10ac274);
      (*(float *)(gen_frame + 0x74)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x78)) = REFG(float, 0x10ac160);
      (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x80)) = REFG(float, 0x10adb74);
      (*(float *)(gen_frame + 0x84)) = REFG(float, 0x10adb74);
      pfVar10 = ((float *)(gen_frame + 0xb4));
      pfVar15 = ((float *)(gen_frame + 0x8));
      for (iVar13 = 0x20; pfVar10 = (float *)((int)pfVar10 + 4), iVar13 != 0; iVar13 = iVar13 + -1)
      {
        *pfVar10 = *pfVar15;
        pfVar15 = pfVar15 + 1;
      }
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x14))),((float *)(gen_frame + 0xb4)) + 1,0x10);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x100000;
      F_006879b0((undefined *)((int)this + 0x374),*(undefined4 *)((int)this + 0x1478));
      F_006879e0((undefined *)((int)this + 0x374),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xa4))));
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x15 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x2b4)), bVar9 != 0)) {
      *(undefined4 *)((int)this + 0x2c0) = *(undefined4 *)((int)this + 0x1458);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2b8))),"sInput",
                   *(undefined4 *)((int)this + 0x1458),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2b8))),0,
                   *(undefined4 *)((int)this + 0x1460));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x200000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x16 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x2d4)), bVar9 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2d8))),0,
                   *(undefined4 *)((int)this + 0x149c));
      uVar16 = **(undefined4 * PTR32 *)((int)this + 0x2d8);
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1090708);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1090708);
      F_006775f0(uVar16,(uint)&(*(float *)(gen_frame + 0xa0)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2d8) + 4))),"sInput",
                   *(undefined4 *)((int)this + 0x149c),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2d8) + 4))),0,*(undefined4 *)((int)this + 0x1460)
                  );
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x2d8) + 4))) + 0x30))) = 0x7a80541;
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x400000;
    }
    if (((*(uint *)((int)this + 0x1510) >> 0x17 & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x2f4)), bVar9 != 0)) {
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2f8))),0,
                   *(undefined4 *)((int)this + 0x14b8));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x2f8))),1,
                   *(undefined4 *)((int)this + 0x14bc));
      F_004d4af0(((float *)(gen_frame + 0xb4)),2,2,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 4))),"sDepthNormalZ",
                   *(undefined4 *)((int)this + 0x14c0),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 4))),0,*(undefined4 *)((int)this + 0x14b8)
                  );
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 4))),1,*(undefined4 *)((int)this + 0x14bc)
                  );
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 8))),"sGatherDepth",
                   *(undefined4 *)((int)this + 0x14b8),((float *)(gen_frame + 0xb4)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,9,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 8))),"sGatherNormalZ",
                   *(undefined4 *)((int)this + 0x14bc),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 8))),0,*(undefined4 *)((int)this + 0x1498)
                  );
      ((float *)(gen_frame + 0xb4))[1] = 0.0;
      ((float *)(gen_frame + 0xb4))[2] = GEN_FLT_TO(((float *)(gen_frame + 0xb4))[2], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0xb4))[3] = GEN_FLT_TO(((float *)(gen_frame + 0xb4))[3], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0xb4))[4] = GEN_FLT_TO(((float *)(gen_frame + 0xb4))[4], REFG(float, 0x1087f04));
      (*(float *)(gen_frame + 0xc8)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      (*(undefined4 *)(gen_frame + 0xd0)) = 0;
      (*(undefined4 *)(gen_frame + 0xd4)) = 0;
      F_00677650(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2f8) + 4))),((float *)(gen_frame + 0xb4)) + 1,4);
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x800000;
    }
    if (((*(byte *)((int)this + 0x1513) & 1) == 0) &&
       (bVar9 = F_00677f90((undefined *)((int)this + 0x314)), bVar9 != 0)) {
      if ((*(byte *)((int)this + 0x1508) & 0x18) != 0) {
        iVar13 = **(int * PTR32 *)((int)this + 0x318);
        pbVar1 = (byte *)(iVar13 + 0x48);
        *pbVar1 = *pbVar1 | 1;
        *(undefined4 *)(iVar13 + 0x34) = 0;
      }
      fVar18 = (float10)*((int *)GEN_TOP((*(int *)((int)this + 0x147c) + 0x18)));
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x147c) + 0x18))) < 0) {
        fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0xb0)) = (float)((float10)1 / fVar18);
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x318))),"sInput",
                   *(undefined4 *)((*(int *)(gen_frame + 0x8c)) + 0x58),((float *)(gen_frame + 0xb4)));
      F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x318))),0,
                   *(undefined4 *)((int)this + 0x147c));
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x318);
      (*(float *)(gen_frame + 0xa4)) = 0.0;
      (*(float *)(gen_frame + 0xa0)) = (float)((float10)*(double *)&REFG(undefined, 0x108bec8) * (float10)(*(float *)(gen_frame + 0xb0)));
      (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xb0));
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1087f04);
      F_00677590(*puVar4,(uint)&(*(float *)(gen_frame + 0xa0)));
      F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
      F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x318) + 4))),"sInput",
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x10))) + 0x60))),((float *)(gen_frame + 0xb4)));
      F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x318) + 4))),0,*(undefined4 *)((int)this + 0x147c)
                  );
      (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0xb0));
      (*(float *)(gen_frame + 0xa4)) = 0.0;
      (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0xb0)));
      F_00677590(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x318) + 4))),(uint)&(*(float *)(gen_frame + 0xa0)));
      *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x1000000;
    }
    fVar11 = gen_bits2f(*(uint *)((int)this + 0x1510) >> 0x19);
    if (((uint)gen_fl2bits(fVar11) & 1) == 0) {
      bVar9 = F_00677f90((undefined *)((int)this + 0x334));
      fVar11 = gen_bits2f(CONCAT31(extraout_var,bVar9));
      if (bVar9 != 0) {
        F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
        iVar13 = (*(int *)(gen_frame + 0x8c));
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x338) + 4))),"sInput",
                     *(undefined4 *)((*(int *)(gen_frame + 0x8c)) + 0x58),((float *)(gen_frame + 0xb4)));
        F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x338) + 8))),"sInput",
                     *(undefined4 *)(iVar13 + 0x58),((float *)(gen_frame + 0xb4)));
        F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x338) + 0xc))),"sInput",
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x10))) + 0x60))),((float *)(gen_frame + 0xb4)));
        uVar17 = 0;
        (*(float *)(gen_frame + 0xb0)) = 1.4013e-45;
        do {
          F_006761f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x338) + uVar17 * 4))),0,
                       *(undefined4 *)((int)this + 0x1480));
          ((float *)(gen_frame + 0xb4))[0] = *((float *)GEN_TOP((*(int *)((int)this + 0x338) + uVar17 * 4)));
          piVar6 = *(int * PTR32 *)((int)this + 0x1484);
          (*(int * PTR32 *)(gen_frame + 0x88)) = piVar6;
          if (piVar6 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
          }
          piVar6 = *(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28);
          if (piVar6 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
          }
          *(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28) = (*(int * PTR32 *)(gen_frame + 0x88));
          puVar12 = &REFG(undefined4, 0x1302350);
          if ((*(byte *)((int)this + 0x1508) & 0x40) == 0) {
            puVar12 = &REFG(undefined4, 0x1302358);
          }
          *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x338) + uVar17 * 4))) + 0x30))) =
               *puVar12 & 0x7ffffff;
          fVar11 = REFG(float, 0x1088068);
          if (uVar17 == 0) {
            *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x338) + 0x2c))) = 0x1f;
          }
          else {
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x338) + uVar17 * 4))) + 0x2c))) = 0x11;
            uVar16 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x338) + uVar17 * 4)));
            (*(float *)(gen_frame + 0xa0)) = fVar11;
            (*(float *)(gen_frame + 0xa4)) = fVar11;
            (*(float *)(gen_frame + 0xa8)) = fVar11;
            (*(float *)(gen_frame + 0xac)) = fVar11;
            F_006775f0(uVar16,(uint)&(*(float *)(gen_frame + 0xa0)));
            *(uint *)((int)this + 0x350) =
                 ~(uint)gen_fl2bits((*(float *)(gen_frame + 0xb0))) & *(uint *)((int)this + 0x350) |
                 0 << ((byte)uVar17 & 0x1f);
          }
          uVar17 = uVar17 + 1;
          fVar11 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xb0))) << 1 |
                              (uint)((int)gen_fl2bits((*(float *)(gen_frame + 0xb0))) < 0));
          (*(float *)(gen_frame + 0xb0)) = fVar11;
        } while (uVar17 < 4);
        *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x2000000;
      }
    }
    if ((*(uint *)((int)this + 0x1510) >> 0x1a & 1) == 0) {
      bVar9 = F_00677f90((undefined *)((int)this + 0x354));
      fVar11 = gen_bits2f(CONCAT31(extraout_var_00,bVar9));
      if (bVar9 != 0) {
        F_004d4af0(((float *)(gen_frame + 0xb4)),1,1,2,0,(float)(float10)0,0,0,0);
        F_0067d3e0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x358))),"sInput",
                     *(undefined4 *)((*(int *)(gen_frame + 0x8c)) + 0x58),((float *)(gen_frame + 0xb4)));
        F_006761f0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x358))),0,
                     *(undefined4 *)((int)this + 0x1480));
        piVar6 = *(int * PTR32 *)((int)this + 0x1484);
        ((float *)(gen_frame + 0xb4))[0] = **(float * PTR32 *)((int)this + 0x358);
        if (piVar6 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
        }
        piVar7 = *(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28);
        if (piVar7 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
        }
        *(int * PTR32 *)((int)gen_fl2bits(((float *)(gen_frame + 0xb4))[0]) + 0x28) = piVar6;
        *((uint *)GEN_TOP((**(int * PTR32 *)((int)this + 0x358) + 0x30))) = REFG(undefined4, 0x1302358) & 0x7ffffff;
        fVar11 = **(float * PTR32 *)((int)this + 0x358);
        *(undefined4 *)((int)gen_fl2bits(fVar11) + 0x2c) = 0x11;
        *(uint *)((int)this + 0x1510) = *(uint *)((int)this + 0x1510) | 0x4000000;
      }
    }
    fVar3 = REFG(undefined4, 0x137127c);
    if (*(int *)((int)this + 0x1510) == -1) {
      *(uint *)((int)gen_fl2bits(REFG(undefined4, 0x137127c)) + 0x11e44U) =
           *(uint *)((int)gen_fl2bits(REFG(undefined4, 0x137127c)) + 0x11e44U) | 8;
      fVar11 = fVar3;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return (uint)gen_fl2bits(fVar11);
}

/* ref: FUN_00682f10 */
unsigned int F_00682f10(unsigned int gen_a0)
{
  GEN_ENTER(0x682f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
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
  if (*(int *)((int)this + 0x1510) == -1) {
    piVar6 = *(int * PTR32 *)((int)this + 0x1458);
    *(undefined4 *)(REFG(int, 0x1371288) + 0x16c) = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 300) = piVar6;
    (*(int *)(gen_frame + 0x8)) = iVar11;
    if ((*(uint *)((int)this + 0x1514) >> 2 & 1) != 0) {
      F_006765f0((undefined *)((int)this + 0x194),piVar6);
    }
    if ((*(uint *)((int)this + 0x1514) >> 3 & 1) != 0) {
      F_006765f0((undefined *)((int)this + 0x1b4),piVar6);
    }
    if ((*(uint *)((int)this + 0x1514) >> 10 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x114),piVar6);
    }
    if ((*(uint *)((int)this + 0x1514) >> 4 & 1) != 0) {
      (*(int * PTR32 *)(gen_frame + 0xc)) = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 8)));
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
      }
      piVar8 = (int *)(*(int * PTR32 *)(gen_frame + 0xc))[6];
      piVar9 = (*(int * PTR32 *)(gen_frame + 0xc));
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        piVar9 = (*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar8 = piVar9 + 6;
      *piVar8 = (int)piVar6;
      *(undefined1 *)((int)piVar9 + 0x42) = 0;
      uVar5 = 0;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar8;
      do {
        if (*piVar8 == 0) break;
        *(char *)((int)piVar9 + 0x42) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        piVar8 = piVar8 + 1;
        (*(int * PTR32 *)(gen_frame + 0xc)) = piVar8;
      } while (uVar5 < 4);
      (*(int * PTR32 *)(gen_frame + 0xc)) = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1f8) + 0xc)));
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
      }
      piVar8 = (int *)(*(int * PTR32 *)(gen_frame + 0xc))[6];
      piVar9 = (*(int * PTR32 *)(gen_frame + 0xc));
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        piVar9 = (*(int * PTR32 *)(gen_frame + 0xc));
      }
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar9 + 6;
      *(*(int * PTR32 *)(gen_frame + 0xc)) = (int)piVar6;
      *(undefined1 *)((int)piVar9 + 0x42) = 0;
      uVar5 = 0;
      do {
        if (*(*(int * PTR32 *)(gen_frame + 0xc)) == 0) break;
        *(char *)((int)piVar9 + 0x42) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0xc)) + 1;
      } while (uVar5 < 4);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x130) = piVar6;
    *(undefined4 *)(iVar11 + 0x170) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x134) = piVar6;
    *(undefined4 *)(iVar11 + 0x174) = uVar1;
    if ((*(uint *)((int)this + 0x1514) >> 6 & 1) != 0) {
      F_006765f0((undefined *)((int)this + 0x214),piVar6);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x138) = piVar6;
    *(undefined4 *)(iVar11 + 0x178) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x13c) = piVar6;
    *(undefined4 *)(iVar11 + 0x17c) = uVar1;
    F_006765a0((undefined *)((int)this + 0x74),piVar6);
    if ((*(uint *)((int)this + 0x1514) >> 7 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x234),piVar6);
      piVar8 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar6 == piVar8) {
        piVar8 = *(int * PTR32 *)((int)this + 0x1488);
      }
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x238)));
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8);
      }
      piVar9 = (int *)(*(int * PTR32 *)(gen_frame + 0xc))[6];
      piVar10 = (*(int * PTR32 *)(gen_frame + 0xc));
      if (piVar9 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9);
        piVar10 = (*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = piVar10 + 6;
      *piVar9 = (int)piVar8;
      *(undefined1 *)((int)piVar10 + 0x42) = 0;
      uVar5 = 0;
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar9;
      do {
        if (*piVar9 == 0) break;
        *(char *)((int)piVar10 + 0x42) = (char)uVar5 + '\x01';
        uVar5 = uVar5 + 1;
        piVar9 = piVar9 + 1;
        (*(int * PTR32 *)(gen_frame + 0xc)) = piVar9;
      } while (uVar5 < 4);
      piVar9 = (int *)(int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      if (0x1fe < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 4))),"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x10));
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(pvVar2,"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x10));
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x14));
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x18)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x25)));
      F_0067d450(pvVar2,"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0xc)));
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      }
      piVar9 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0xc));
      if (-0x201 < (int)piVar9) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x25)));
      F_0067d450(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x238) + 0x1c))),"sInput",piVar8,&(*(int * PTR32 *)(gen_frame + 0xc)));
      F_006765f0((undefined *)((int)this + 0x234),piVar6);
      iVar11 = (*(int *)(gen_frame + 0x8));
    }
    piVar8 = piVar6;
    if ((*(uint *)((int)this + 0x1514) >> 8 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x254),piVar6);
      piVar8 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar6 == piVar8) {
        piVar8 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0x254),piVar8);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x140) = piVar8;
    *(undefined4 *)(iVar11 + 0x180) = uVar1;
    piVar6 = piVar8;
    if ((*(uint *)((int)this + 0x1514) >> 9 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x274),piVar8);
      piVar6 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar8 == piVar6) {
        piVar6 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0x274),piVar6);
    }
    if ((*(uint *)((int)this + 0x1514) >> 0xd & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0xb4),piVar6);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x144) = piVar6;
    *(undefined4 *)(iVar11 + 0x184) = uVar1;
    if ((*(uint *)((int)this + 0x1514) >> 10 & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x134),piVar6);
    }
    if (((*(uint *)((int)this + 0x1514) >> 10 & 1) != 0) ||
       ((*(uint *)((int)this + 0x1514) >> 0xb & 1) != 0)) {
      F_006765f0((undefined *)((int)this + 0x154),piVar6);
    }
    *(undefined4 *)(iVar11 + 0x188) = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)(iVar11 + 0x148) = piVar6;
    piVar8 = piVar6;
    if ((*(uint *)((int)this + 0x1514) >> 0xd & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0xd4),piVar6);
      piVar8 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar6 == piVar8) {
        piVar8 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0xd4),piVar8);
    }
    piVar6 = piVar8;
    if ((*(uint *)((int)this + 0x1514) >> 0xe & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x94),piVar8);
      piVar6 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar8 == piVar6) {
        piVar6 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0x94),piVar6);
    }
    piVar8 = piVar6;
    if ((*(uint *)((int)this + 0x1514) >> 0xf & 1) != 0) {
      F_006765a0((undefined *)((int)this + 0x2b4),piVar6);
      piVar8 = *(int * PTR32 *)((int)this + 0x1458);
      if (piVar6 == piVar8) {
        piVar8 = *(int * PTR32 *)((int)this + 0x1488);
      }
      F_006765f0((undefined *)((int)this + 0x2b4),piVar8);
    }
    uVar5 = *(uint *)((int)this + 0x1514) >> 1;
    (*(byte *)(gen_frame + 0x1b)) = (byte)(*(uint *)((int)this + 0x1514) >> 0x11) & 1;
    piVar6 = ((int *)GEN_TOP(((-(uint)((uVar5 & 1) != 0) & 0xb) * 0x20 + 0x14 + (int)this)));
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar6;
    F_006765a0(piVar6,piVar8);
    piVar6 = *(int * PTR32 *)((int)this + 0x1458);
    if ((uVar5 & 1) == 0) {
      if (piVar8 == piVar6) {
        piVar6 = *(int * PTR32 *)((int)this + 0x1488);
      }
    }
    else {
      if (piVar8 == piVar6) {
        piVar6 = *(int * PTR32 *)((int)this + 0x1488);
      }
      iVar11 = *(int *)(*(int * PTR32 *)(gen_frame + 0xc))[1];
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
      }
      piVar6 = *(int * PTR32 *)(iVar11 + 0x18);
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      }
      piVar6 = (int *)(iVar11 + 0x18);
      *piVar6 = (int)(*(int * PTR32 *)(gen_frame + 0x14));
      *(undefined1 *)(iVar11 + 0x42) = 0;
      uVar5 = 0;
      do {
        if (*piVar6 == 0) break;
        cVar3 = (char)uVar5;
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 1;
        *(char *)(iVar11 + 0x42) = cVar3 + '\x01';
      } while (uVar5 < 4);
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)(int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
      (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x1ff;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x4));
      }
      piVar6 = *ppiVar7;
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
      (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0xfffffe00;
      ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x4));
      if (-0x201 < (int)piVar6) {
        ppiVar7 = &(*(int * PTR32 *)(gen_frame + 0x10));
      }
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP((((uint)*ppiVar7 & 0x3ff) << 10 | 0x265)));
      F_0067d450(*(undefined * PTR32 *)((*(int * PTR32 *)(gen_frame + 0xc))[1] + 4),"sInput",(*(int * PTR32 *)(gen_frame + 0x14)),&(*(int * PTR32 *)(gen_frame + 0x4)));
      piVar6 = piVar8;
    }
    bVar4 = (*(byte *)(gen_frame + 0x1b));
    if ((*(byte *)(gen_frame + 0x1b)) == 0) {
      piVar6 = *(int * PTR32 *)((int)this + 0x1460);
    }
    F_006765f0((*(int * PTR32 *)(gen_frame + 0xc)),piVar6);
    F_006765f0((undefined *)((int)this + 0x34),piVar6);
    if ((*(byte *)((int)this + 0x1516) & 1) != 0) {
      F_006765f0((undefined *)((int)this + 0x2d4),piVar6);
    }
    uVar1 = *(undefined4 *)((int)this + 0x1464);
    *(int * PTR32 *)((*(int *)(gen_frame + 0x8)) + 0x14c) = piVar6;
    *(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x18c) = uVar1;
    if (bVar4 != 0) {
      F_006765a0((undefined *)((int)this + 0xf4),piVar6);
    }
  }
  return 0;
}

/* ref: FUN_006835d0 */
uint F_006835d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6835d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
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
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  puVar1 = (uint *)((int)pvVar6 + 8);
  *puVar1 = *puVar1 | 0x7ffffff;
  uVar13 = *(uint *)((int)this + 0x1514) >> 0xd;
  bVar18 = *(byte *)(REFG(int, 0x137127c) + 0x6540) & 1;
  *(undefined4 *)((undefined1 *)(gen_frame + 0x34)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar6;
  (*(byte *)(gen_frame + 0x4a)) = bVar18;
  (*(byte *)(gen_frame + 0x4b)) = (byte)uVar13 & 1;
  if ((bVar18 == 0) || ((*(char *)(gen_frame + 0x3e)) = '\x01', *(byte *)((int)this + 0x173c) < 5)) {
    (*(char *)(gen_frame + 0x3e)) = '\0';
  }
  if (bVar18 == 0) {
    *(undefined1 *)((int)this + 0x173c) = 0;
  }
  else if (*(byte *)((int)this + 0x173c) < 5) {
    *(byte *)((int)this + 0x173c) = *(byte *)((int)this + 0x173c) + 1;
  }
  if (((uVar13 & 1) == 0) || ((*(char *)(gen_frame + 0x3f)) = '\x01', *(byte *)((int)this + 0x173d) < 5)) {
    (*(char *)(gen_frame + 0x3f)) = '\0';
  }
  if ((uVar13 & 1) == 0) {
    *(undefined1 *)((int)this + 0x173d) = 0;
  }
  else if (*(byte *)((int)this + 0x173d) < 5) {
    *(byte *)((int)this + 0x173d) = *(byte *)((int)this + 0x173d) + 1;
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1088068)));
  if ((bVar18 != 0) && (iVar16 = *(int *)(REFG(int, 0x137127c) + 0x6554), iVar16 != 0)) {
    puVar14 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x50)),iVar16 + 0x10,iVar16 + 0x50);
    piVar17 = *(int * PTR32 *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x172c);
    fVar2 = *(float *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x1730);
    piVar3 = *(int * PTR32 *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x1734);
    puVar20 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar20 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar20 = puVar20 + 1;
    }
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
    F_004eeb30(&(*(int * PTR32 *)(gen_frame + 0x10)),(uint)((undefined4 *)(gen_frame + 0x90)));
    fVar21 = (float10)REFG(double, 0x1088108);
    (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) * fVar21 + fVar21))));
    (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) * fVar21))));
  }
  { unsigned int gen_ac = (unsigned int)((*(unsigned int *)((undefined1 *)(gen_frame + 0x34)))); memcpy(auVar11, &gen_ac, 4); }
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 0xff;
  (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 0xff;
  (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 2)),0xffff)));
  *(undefined4 *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x1738) = GEN_FLT_TO(*(undefined4 *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x1738), REFG(float, 0x1087f04));
  if ((*(byte *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x1508) & 0x20) == 0) {
    if (((*(byte *)(gen_frame + 0x4a)) != 0) || ((*(byte *)(gen_frame + 0x4b)) != 0)) {
      uVar8 = *(undefined4 *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x147c);
      puVar14 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x30)),8);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 10;
        puVar14[1] = uVar8;
        F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x30)),puVar14);
      }
    }
    uVar13 = F_004d6dd0(*(undefined * PTR32 *)((int)(*(unsigned int *)auVar11) + 0x147c),0,&(*(float *)(gen_frame + 0xe0)),1);
    if (uVar13 != 0) {
      if ((*(char *)(gen_frame + 0x3e)) != '\0') {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 1;
        (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x44)), 1, 3),1)));
        if (!((float10)*(*(float * PTR32 *)(gen_frame + 0xe8)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)((uint)GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x44)), 1, 3) << 8);
        }
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 1;
        (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = CONCAT11(1,(byte)(*(int * PTR32 *)(gen_frame + 0x44)));
        if (!((float10)(*(float * PTR32 *)(gen_frame + 0xe8))[1] < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 2)),(ushort)(byte)(*(int * PTR32 *)(gen_frame + 0x44)))));
        }
      }
      if ((*(char *)(gen_frame + 0x3f)) != '\0') {
        *(float *)((int)(*(unsigned int *)auVar11) + 0x1738) = (*(float * PTR32 *)(gen_frame + 0xe8))[4];
      }
      F_004d6e60(*(undefined * PTR32 *)((int)(*(unsigned int *)auVar11) + 0x147c),0);
    }
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)0x0;
    do {
      uVar22 = (*(ulonglong *)(gen_frame + 0x8));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (int *)0x0;
      (*(ulonglong *)(gen_frame + 0x8)) = uVar22 & 0xffffffff00000000;
      iVar16 = *((int *)GEN_TOP(((int)(*(unsigned int *)auVar11) + ((int)(*(int * PTR32 *)(gen_frame + 0x4c)) + REFG(undefined4, 0x14882b4) * 3) * 4 + 0x14cc)));
      if (*(int *)(iVar16 + 0x1c) == 0) {
        uVar12 = 0;
        piVar17 = (*(int * PTR32 *)(gen_frame + 0x4c));
      }
      else {
        uVar13 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar16 + 0x1c) + 0x1c))))
                           (*(int * PTR32 *)(iVar16 + 0x1c),&(*(ulonglong *)(gen_frame + 0x8)),4,0);
        piVar17 = (*(int * PTR32 *)(gen_frame + 0x4c));
        if (uVar13 == 0) {
          if (*(int *)(iVar16 + 0x18) == 3) {
            (*(ulonglong *)(gen_frame + 0x8)) = ((*(ulonglong *)(gen_frame + 0x8)) * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
          }
          uVar12 = 1;
        }
        else {
          uVar12 = 0;
        }
      }
      *(undefined1 *)((int)&(*(int *)(gen_frame + 0x38)) + (int)piVar17) = uVar12;
      if ((int *)(*(ulonglong *)(gen_frame + 0x8)) < (int *)0x101) {
        (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)0xff;
        ppiVar15 = (int * PTR32 *)&(*(ulonglong *)(gen_frame + 0x8));
        if ((int *)0xfe < (int *)(*(ulonglong *)(gen_frame + 0x8))) {
          ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x40));
        }
        fVar21 = (float10)(int)*ppiVar15;
        if ((int)*ppiVar15 < 0) {
          fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar21 / (float10)*(double *)&REFG(undefined, 0x1088100)))));
        fVar21 = (float10)(float)(fVar21 / (float10)*(double *)&REFG(undefined, 0x1088100));
        (&(*(float *)(gen_frame + 0xe0)))[(int)piVar17] = (float)(fVar21 * fVar21);
      }
      else {
        *(undefined1 *)((int)&(*(int *)(gen_frame + 0x38)) + (int)piVar17) = 0;
      }
      (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)((int)piVar17 + 1U);
    } while ((int *)((int)piVar17 + 1U) < (int *)0x3);
    if ((*(char *)(gen_frame + 0x3e)) != '\0') {
      if ((byte)(*(int *)(gen_frame + 0x38)) != '\0') {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 1;
        (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x44)), 1, 3),1)));
        if (!((float10)(*(float *)(gen_frame + 0xe0)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18))))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)((uint)GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x44)), 1, 3) << 8);
        }
      }
      if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 1)) != '\0') {
        if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xe4))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18)))))) {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 1;
          (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = CONCAT11(1,(byte)(*(int * PTR32 *)(gen_frame + 0x44)));
        }
        else {
          (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1)) = 0;
          (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 0)) = (ushort)(byte)(*(int * PTR32 *)(gen_frame + 0x44));
        }
      }
    }
    if (((*(char *)(gen_frame + 0x3f)) != '\0') && ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 2)) != '\0')) {
      *(float *)((int)(*(unsigned int *)auVar11) + 0x1738) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xe8))))) * (float10)REFG(double, 0x10944b8));
    }
  }
  *(byte *)(REFG(int, 0x1371290) + 0x2a) = (byte)(*(int * PTR32 *)(gen_frame + 0x44));
  *(undefined1 *)(REFG(int, 0x1371290) + 0x2b) = (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x44)) + 1));
  if ((*(byte *)((int)(*(unsigned int *)auVar11) + 0x1508) & 0x20) == 0) {
    uVar13 = *(uint *)((int)(*(unsigned int *)auVar11) + 0x330);
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0xdc)) = fVar2;
    (*(int * PTR32 *)(gen_frame + 0xe4)) = (*(int * PTR32 *)(gen_frame + 0x10));
    fVar4 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))));
    (*(float *)(gen_frame + 0xe0)) = fVar4;
    (*(float * PTR32 *)(gen_frame + 0xe8)) = (float *)(*(int * PTR32 *)(gen_frame + 0x14));
    dVar10 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
    *(uint *)((int)(*(unsigned int *)auVar11) + 0x330) =
         (uint)((*(byte *)(gen_frame + 0x4b)) != 0) * 2 | (uint)((*(byte *)(gen_frame + 0x4a)) != 0) | uVar13 & 0xfffffffc;
    iVar16 = *((int *)GEN_TOP((**(int * PTR32 *)((int)(*(unsigned int *)auVar11) + 0x318) + 8)));
    *(float *)(iVar16 + 0x10) = fVar2;
    *(float *)(iVar16 + 0x14) = fVar4;
    *(int * PTR32 *)(iVar16 + 0x18) = (*(int * PTR32 *)(gen_frame + 0x10));
    *(int * PTR32 *)(iVar16 + 0x1c) = (*(int * PTR32 *)(gen_frame + 0x14));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)(int)dVar10;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x1ff;
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x4c));
    if (0x1fe < (int)dVar10) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x2c));
    }
    piVar17 = *ppiVar15;
    (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0xfffffe00;
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x2c));
    if (-0x201 < (int)piVar17) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x4c));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP((((uint)*ppiVar15 & 0x3ff) << 10 | 0x25)));
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x318) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0xb8) + 0x10))) + 0x60)));
    uVar22 = F_0067d330(pvVar6,"sInput");
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)uVar22;
    if (-1 < (int)(int *)uVar22) {
      if ((*(int * PTR32 *)(gen_frame + 0x4c)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4c)) + 8))((*(int * PTR32 *)(gen_frame + 0x4c)));
      }
      iVar16 = *(int *)((int)pvVar6 + 0x10);
      piVar17 = (int *)((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x2c))) * 0xc);
      iVar7 = *(int *)(iVar16 + 4 + (int)piVar17);
      (*(int * PTR32 *)(gen_frame + 0x40)) = piVar17;
      if (iVar7 != 0) {
        piVar17 = *(int * PTR32 *)(iVar16 + 4 + (int)piVar17);
        ((code *)*(gen_code32 *)(*piVar17 + 0xc))(piVar17);
      }
      *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 4 + (int)(*(int * PTR32 *)(gen_frame + 0x40))))) = (*(int * PTR32 *)(gen_frame + 0x4c));
      *((uint *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 8 + (int)(*(int * PTR32 *)(gen_frame + 0x40))))) = (uint)(*(undefined * PTR32 *)(gen_frame + 0x30)) & 0xfffffff;
    }
    *(undefined4 *)((int)(*(unsigned int *)auVar11) + 0x32c) = GEN_FLT_TO(*(undefined4 *)((int)(*(unsigned int *)auVar11) + 0x32c), REFG(float, 0x1087f04));
    F_0067a0f0((undefined *)((int)(*(unsigned int *)auVar11) + 0x314));
  }
  else {
    pvVar6 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(unsigned int *)auVar11) + 0x338)));
    uVar13 = F_0067d2b0(pvVar6,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6,uVar13,&REFG(undefined, 0x1322808),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 4)));
    uVar13 = F_0067d2b0(pvVar6,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6,uVar13,&REFG(undefined, 0x13227f8),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 8)));
    uVar13 = F_0067d2b0(pvVar6,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6,uVar13,&REFG(undefined, 0x13227e8),0x10);
    }
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 0xc)));
    uVar13 = F_0067d2b0(pvVar6,"cQueryParam");
    if (-1 < (int)uVar13) {
      F_006793b0(pvVar6,uVar13,&REFG(undefined, 0x13227d8),0x10);
    }
    iVar16 = *(int *)((int)(*(unsigned int *)auVar11) + 0x338);
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (*(int * PTR32 *)(gen_frame + 0x10));
    iVar16 = *((int *)GEN_TOP((*(int *)(iVar16 + 4) + 8)));
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0xdc)) = fVar2;
    *(float *)(iVar16 + 0x10) = fVar2;
    (*(int * PTR32 *)(gen_frame + 0xe4)) = (*(int * PTR32 *)(gen_frame + 0x10));
    fVar2 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))));
    (*(float *)(gen_frame + 0xe0)) = fVar2;
    *(float *)(iVar16 + 0x14) = fVar2;
    *(int * PTR32 *)(iVar16 + 0x18) = (*(int * PTR32 *)(gen_frame + 0x10));
    (*(float * PTR32 *)(gen_frame + 0xe8)) = (float *)(*(int * PTR32 *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))));
    *(int * PTR32 *)(iVar16 + 0x1c) = (*(int * PTR32 *)(gen_frame + 0x14));
    iVar16 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 8))) + 8)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = (*(int * PTR32 *)(gen_frame + 0x14));
    (*(ulonglong *)(gen_frame + 0x8)) = CONCAT44((*(int * PTR32 *)(gen_frame + 0x14)),(*(int * PTR32 *)(gen_frame + 0x10)));
    *(float *)(iVar16 + 0x10) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0xe0)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))));
    dVar10 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
    *(float *)(iVar16 + 0x14) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14))))));
    *(int * PTR32 *)(iVar16 + 0x18) = (*(int * PTR32 *)(gen_frame + 0x10));
    *(int * PTR32 *)(iVar16 + 0x1c) = (*(int * PTR32 *)(gen_frame + 0x14));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)(int)dVar10;
    (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)0x1ff;
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x4c));
    if (0x1fe < (int)dVar10) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x40));
    }
    piVar17 = *ppiVar15;
    (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar17;
    (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)0xfffffe00;
    ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x40));
    if (-0x201 < (int)piVar17) {
      ppiVar15 = &(*(int * PTR32 *)(gen_frame + 0x4c));
    }
    (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP((((uint)*ppiVar15 & 0x3ff) << 10 | 0x25)));
    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(unsigned int *)auVar11) + 0x338) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0xb8) + 0x10))) + 0x60)));
    uVar22 = F_0067d330(pvVar6,"sInput");
    (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)uVar22;
    if (-1 < (int)(int *)uVar22) {
      if ((*(int * PTR32 *)(gen_frame + 0x4c)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4c)) + 8))((*(int * PTR32 *)(gen_frame + 0x4c)));
      }
      iVar16 = *(int *)((int)pvVar6 + 0x10);
      iVar9 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x40))) * 0xc;
      iVar7 = *(int *)(iVar16 + 4 + iVar9);
      (*(int *)(gen_frame + 0x38)) = iVar9;
      if (iVar7 != 0) {
        piVar17 = *(int * PTR32 *)(iVar16 + 4 + iVar9);
        ((code *)*(gen_code32 *)(*piVar17 + 0xc))(piVar17);
      }
      *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 4 + (*(int *)(gen_frame + 0x38))))) = (*(int * PTR32 *)(gen_frame + 0x4c));
      *((uint *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 8 + (*(int *)(gen_frame + 0x38))))) = (uint)(*(int * PTR32 *)(gen_frame + 0x44)) & 0xfffffff;
    }
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x30));
    *(undefined4 *)((int)(*(unsigned int *)auVar11) + 0x34c) = *(undefined4 *)(REFG(int, 0x13759f8) + 0x268);
    if ((*(byte *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x1508) & 0x18) != 0) {
      F_004daa40((*(undefined * PTR32 *)(gen_frame + 0x30)),1,(int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x1480,*(undefined4 *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x1484),0,0);
      puVar14 = (undefined4 *)F_004d4760(pvVar6,0x28);
      uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 3;
        puVar14[2] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[1] = 2;
        puVar14[3] = uVar8;
        F_004d4810(pvVar6,puVar14);
      }
      *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) = *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) | 1;
    }
    F_0067a0f0((undefined *)((int)(*(unsigned int *)auVar11) + 0x334));
    *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) = *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) & 0xfffffffe;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 0)) = (*(byte *)(gen_frame + 0x4a));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 1)) = (*(byte *)(gen_frame + 0x4a));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 2)) = (*(byte *)(gen_frame + 0x4b));
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x38)) + 3)) = (*(byte *)(gen_frame + 0x4b));
    (*(int *)(gen_frame + 0x38)) = CONCAT13((*(byte *)(gen_frame + 0x4b)),CONCAT12((*(byte *)(gen_frame + 0x4b)),CONCAT11((*(byte *)(gen_frame + 0x4a)),(*(byte *)(gen_frame + 0x4a)))));
    (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)0x1;
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)(((undefined1 *)(gen_frame + 0x34)) + 3);
    do {
      cVar5 = *(char *)((int)(*(int * PTR32 *)(gen_frame + 0x44)) + 1 + (int)(*(int * PTR32 *)(gen_frame + 0x2c)));
      (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x44)) + 1);
      if (cVar5 != '\0') {
        uVar8 = *((undefined4 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + ((int)(*(int * PTR32 *)(gen_frame + 0x44)) + REFG(undefined4, 0x14882b4) * 3) * 4 + 0x14cc)));
        puVar14 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x30)),0xc);
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = 0xc;
          puVar14[1] = uVar8;
          puVar14[2] = 2;
          F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x30)),puVar14);
        }
        uVar13 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x4c))) << 1 | (uint)((int)(*(int * PTR32 *)(gen_frame + 0x4c)) < 0);
        uVar19 = ~uVar13;
        *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) = uVar19 & *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) | uVar13;
        F_0067a0f0((undefined *)((int)(*(unsigned int *)auVar11) + 0x334));
        iVar16 = REFG(undefined4, 0x14882b4) * 3;
        *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) =
             uVar19 & *(uint *)((int)(*(unsigned int *)auVar11) + 0x350) | 0 << ((byte)(*(int * PTR32 *)(gen_frame + 0x40)) & 0x1f);
        uVar8 = *((undefined4 *)GEN_TOP(((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + ((int)(*(int * PTR32 *)(gen_frame + 0x44)) + iVar16) * 4 + 0x14cc)));
        puVar14 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x30)),0xc);
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = 0xc;
          puVar14[1] = uVar8;
          puVar14[2] = 1;
          F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x30)),puVar14);
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x40));
      (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x4c))) << 1 | (uint)((int)(*(int * PTR32 *)(gen_frame + 0x4c)) < 0));
    } while ((*(int * PTR32 *)(gen_frame + 0x40)) < (int *)0x3);
    REFG(undefined4, 0x14882b4) = (REFG(undefined4, 0x14882b4) + 1) % 5;
  }
  if ((*(byte *)(gen_frame + 0x4a)) == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = (int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x354;
  }
  uVar13 = F_0067e7d0((undefined *)((int)(*(unsigned int *)((undefined1 *)(gen_frame + 0x34))) + 0x3d0),iVar16);
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar13;
}

/* ref: FUN_00684040 */
byte F_00684040(unsigned int gen_a0)
{
  GEN_ENTER(0x684040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint * PTR32 * ppuVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  
  uVar5 = *(uint *)(REFG(int, 0x1370b90) + 0x8c);
  (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)0x4;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
  (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)uVar5;
  if (uVar5 < 4) {
    ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0x10));
    if (uVar5 < 2) {
      ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0xc));
    }
  }
  else {
    ppuVar4 = &(*(uint * PTR32 *)(gen_frame + 0x14));
  }
  *(uint *)((int)this + 0x1508) =
       *(uint *)((int)this + 0x1508) ^
       ((int)*ppuVar4 * 8 - 8U ^ *(uint *)((int)this + 0x1508)) & 0x18;
  uVar5 = ((*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 1 & 0xff) * 4 ^ *(uint *)((int)this + 0x1508)) & 4 ^
          *(uint *)((int)this + 0x1508);
  *(uint *)((int)this + 0x1508) = uVar5;
  *(uint *)((int)this + 0x1508) =
       ((uint)(*(int *)(REFG(int, 0x1370b90) + 0x44) == 0x8086) << 6 ^ uVar5) & 0x40 ^ uVar5;
  uVar5 = F_00678da0(&(*(undefined1 *)(gen_frame + 0x1b)));
  *(uint *)((int)this + 0x10) = uVar5;
  iVar2 = REFG(int, 0x1371288);
  if (uVar5 == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(REFG(int, 0x1371288) + 0x1c);
  *(int * PTR32 *)((int)this + 0x1458) = piVar1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    piVar1 = *(int * PTR32 *)(iVar2 + 0x30);
    *(int * PTR32 *)((int)this + 0x145c) = piVar1;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x2c) + 0x34)));
      *(int * PTR32 *)((int)this + 0x1460) = piVar1;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        piVar1 = *(int * PTR32 *)(iVar2 + 0x20);
        *(int * PTR32 *)((int)this + 0x1464) = piVar1;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
          piVar1 = *(int * PTR32 *)(iVar2 + 0x34);
          *(int * PTR32 *)((int)this + 0x1468) = piVar1;
          if (piVar1 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
            piVar1 = *(int * PTR32 *)(iVar2 + 0x10);
            *(int * PTR32 *)((int)this + 0x146c) = piVar1;
            if (piVar1 != (int *)0x0) {
              ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
              piVar1 = *(int * PTR32 *)(iVar2 + 0x40);
              *(int * PTR32 *)((int)this + 0x1470) = piVar1;
              if (piVar1 != (int *)0x0) {
                ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                (*(undefined4 *)(gen_frame + 0x8)) = 1;
                (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
                uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x2460,0x100000,0xb);
                *(uint *)((int)this + 0x1478) = uVar5;
                if (uVar5 != 0) {
                  (*(undefined4 *)(gen_frame + 0x8)) = 4;
                  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
                  uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x2470,0x8100010,0xb);
                  *(uint *)((int)this + 0x147c) = uVar5;
                  if (uVar5 != 0) {
                    uVar5 = *(uint *)((int)this + 0x1508);
                    (*(undefined4 *)(gen_frame + 0x8)) = 0x100;
                    (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
                    uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,
                                         (-(uint)((uVar5 & 0x40) != 0) & 0xffffc350) + 0x5100,
                                         0x100000,0xb);
                    *(uint *)((int)this + 0x1480) = uVar5;
                    if (uVar5 != 0) {
                      (*(undefined4 *)(gen_frame + 0x8)) = 0x100;
                      (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x1;
                      uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x4140,0x200000,0xb);
                      *(uint *)((int)this + 0x1484) = uVar5;
                      if (uVar5 != 0) {
                        piVar1 = *(int * PTR32 *)(iVar2 + 0x90);
                        *(int * PTR32 *)((int)this + 0x1488) = piVar1;
                        if (piVar1 != (int *)0x0) {
                          ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                          piVar1 = *(int * PTR32 *)(iVar2 + 0x94);
                          *(int * PTR32 *)((int)this + 0x148c) = piVar1;
                          if (piVar1 != (int *)0x0) {
                            ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                            piVar1 = *(int * PTR32 *)(iVar2 + 0x98);
                            *(int * PTR32 *)((int)this + 0x1490) = piVar1;
                            if (piVar1 != (int *)0x0) {
                              ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                              piVar1 = *(int * PTR32 *)(iVar2 + 0x9c);
                              *(int * PTR32 *)((int)this + 0x1494) = piVar1;
                              if (piVar1 != (int *)0x0) {
                                ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                piVar1 = *(int * PTR32 *)(iVar2 + 0xa0);
                                *(int * PTR32 *)((int)this + 0x1498) = piVar1;
                                if (piVar1 != (int *)0x0) {
                                  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                  piVar1 = *(int * PTR32 *)(iVar2 + 0xa4);
                                  *(int * PTR32 *)((int)this + 0x149c) = piVar1;
                                  if (piVar1 != (int *)0x0) {
                                    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                    piVar1 = *(int * PTR32 *)(iVar2 + 0xa8);
                                    *(int * PTR32 *)((int)this + 0x14a0) = piVar1;
                                    if (piVar1 != (int *)0x0) {
                                      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                      piVar1 = *(int * PTR32 *)(iVar2 + 0xac);
                                      *(int * PTR32 *)((int)this + 0x14a4) = piVar1;
                                      if (piVar1 != (int *)0x0) {
                                        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                        piVar1 = *(int * PTR32 *)(iVar2 + 0xb0);
                                        *(int * PTR32 *)((int)this + 0x14a8) = piVar1;
                                        if (piVar1 != (int *)0x0) {
                                          ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                          piVar1 = *(int * PTR32 *)(iVar2 + 0xb4);
                                          *(int * PTR32 *)((int)this + 0x14ac) = piVar1;
                                          if (piVar1 != (int *)0x0) {
                                            ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                            piVar1 = *(int * PTR32 *)(iVar2 + 0xb8);
                                            *(int * PTR32 *)((int)this + 0x14b0) = piVar1;
                                            if (piVar1 != (int *)0x0) {
                                              ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                              piVar1 = *(int * PTR32 *)(iVar2 + 0xbc);
                                              *(int * PTR32 *)((int)this + 0x14b4) = piVar1;
                                              if (piVar1 != (int *)0x0) {
                                                ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                                piVar1 = *(int * PTR32 *)(iVar2 + 0xc0);
                                                *(int * PTR32 *)((int)this + 0x14b8) = piVar1;
                                                if (piVar1 != (int *)0x0) {
                                                  ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                                  piVar1 = *(int * PTR32 *)(iVar2 + 0xc4);
                                                  *(int * PTR32 *)((int)this + 0x14bc) = piVar1;
                                                  if (piVar1 != (int *)0x0) {
                                                    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                                    piVar1 = *(int * PTR32 *)(iVar2 + 200);
                                                    *(int * PTR32 *)((int)this + 0x14c0) = piVar1;
                                                    if (piVar1 != (int *)0x0) {
                                                      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
                                                      (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)0x0;
                                                      (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)((int)this + 0x14cc);
                                                      do {
                                                        uVar5 = 0;
                                                        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x14));
                                                        do {
                                                          uVar6 = F_004dcde0(2,0xb);
                                                          *puVar7 = uVar6;
                                                          if (uVar6 == 0) {
                                                            return 0;
                                                          }
                                                          uVar5 = uVar5 + 1;
                                                          puVar7 = puVar7 + 1;
                                                        } while (uVar5 < 3);
                                                        (*(uint * PTR32 *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0x14)) + 3;
                                                        uVar5 = (int)(*(uint * PTR32 *)(gen_frame + 0x10)) + 1;
                                                        (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)uVar5;
                                                      } while (uVar5 < 5);
                                                      bVar3 = F_0067a050((undefined *)((int)this + 0x14
                                                                                   ),1);
                                                      if ((((((((bVar3 != 0) &&
                                                               (bVar3 = F_0067a050((undefined *)((int)
                                                  this + 0x34),1), bVar3 != 0)) &&
                                                  (bVar3 = F_0067a050((undefined *)((int)this + 0x54),1
                                                                       ), bVar3 != 0)) &&
                                                  (((bVar3 = F_0067a050((undefined *)((int)this + 0x74)
                                                                          ,3), bVar3 != 0 &&
                                                    (bVar3 = F_0067a050((undefined *)((int)this + 0x94)
                                                                          ,1), bVar3 != 0)) &&
                                                   ((bVar3 = F_0067a050((undefined *)((int)this + 0xb4)
                                                                          ,5), bVar3 != 0 &&
                                                    ((bVar3 = F_0067a050((undefined *)((int)this + 0xd4
                                                                                   ),1), bVar3 != 0
                                                     && (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                      0xf4),1),
                                                        bVar3 != 0)))))))) &&
                                                  (bVar3 = F_0067a050((undefined *)((int)this + 0x114),
                                                                        1), bVar3 != 0)) &&
                                                  (((bVar3 = F_0067a050((undefined *)((int)this + 0x134
                                                                                  ),5), bVar3 != 0
                                                    && (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                     0x154),2),
                                                       bVar3 != 0)) &&
                                                   (bVar3 = F_0067a050((undefined *)((int)this + 0x174)
                                                                         ,2), bVar3 != 0)))) &&
                                                  (((bVar3 = F_0067a050((undefined *)((int)this + 0x194
                                                                                  ),4), bVar3 != 0
                                                    && (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                     0x1b4),1),
                                                       bVar3 != 0)) &&
                                                   ((bVar3 = F_0067a050((undefined *)((int)this + 0x1d4
                                                                                  ),1), bVar3 != 0
                                                    && ((bVar3 = F_0067a050((undefined *)((int)this +
                                                                                      500),4),
                                                        bVar3 != 0 &&
                                                        (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                      0x214),1),
                                                        bVar3 != 0)))))))) &&
                                                  (((bVar3 = F_0067a050((undefined *)((int)this + 0x234
                                                                                  ),8), bVar3 != 0
                                                    && (((((bVar3 = F_0067a050((undefined *)((int)this
                                                                                         + 0x254),6)
                                                           , bVar3 != 0 &&
                                                           (bVar3 = F_0067a050((undefined *)((int)this
                                                                                         + 0x274),5)
                                                           , bVar3 != 0)) &&
                                                          (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x294),6),
                                                          bVar3 != 0)) &&
                                                         ((bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x2b4),1),
                                                          bVar3 != 0 &&
                                                          (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x2d4),2),
                                                          bVar3 != 0)))) &&
                                                        ((bVar3 = F_0067a050((undefined *)((int)this +
                                                                                       0x2f4),3),
                                                         bVar3 != 0 &&
                                                         ((bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x314),2),
                                                          bVar3 != 0 &&
                                                          (bVar3 = F_0067a050((undefined *)((int)this +
                                                                                        0x334),4),
                                                          bVar3 != 0)))))))) &&
                                                   ((bVar3 = F_0067a050((undefined *)((int)this + 0x354
                                                                                  ),1), bVar3 != 0
                                                    && (((bVar3 = F_0067f3e0(this), bVar3 != 0 &&
                                                         (bVar3 = F_0067cd10((undefined *)((int)this +
                                                                                       0x374)),
                                                         bVar3 != 0)) &&
                                                        (bVar3 = F_0067a1d0((undefined *)((int)this +
                                                                                      0x3d0)),
                                                        bVar3 != 0)))))))) {
                                                    F_0067d1f0(this);
                                                    F_006782b0(this);
                                                    *(undefined4 *)((int)this + 0x1738) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x1738), REFG(float, 0x1087f04));
                                                    *(undefined2 *)((int)this + 0x173c) = 0;
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
uint F_006846f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6846f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x460];
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
  uint uVar12;
  undefined4 * puVar13;
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
  
  uVar12 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x450);
  (*(uint *)(gen_frame + 0x44c)) = uVar12;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if (*(int *)((int)this + 0x1510) != -1) goto LAB_006874a5;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  piVar16 = *(int * PTR32 *)(REFG(int, 0x137127c) + 0x66f4);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(REFG(int, 0x1371288) + 0xec);
  (*(int * PTR32 *)(gen_frame + 0x74)) = piVar16;
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar16 + 0x14;
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar16 + 4;
  puVar13 = (undefined4 *)F_004f11a0(((undefined4 *)(gen_frame + 0x2e0)),(uint)(piVar16 + 4),(uint)(piVar16 + 0x14));
  pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  piVar16 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar22 = ((undefined4 *)(gen_frame + 0x2a0));
  for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
    *puVar22 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar22 = puVar22 + 1;
  }
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)(*(int * PTR32 *)(gen_frame + 0x74))[0x2b];
  piVar14 = (int *)(*(int * PTR32 *)(gen_frame + 0x74))[0x2c];
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar14;
  fVar23 = ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x74))[0x2b])));
  fVar26 = (float10)1;
  (*(float *)(gen_frame + 0x14)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x74))[0x29]);
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(*(int * PTR32 *)(gen_frame + 0x74))[0x2a];
  (*(float *)(gen_frame + 0x70)) = *(float *)(REFG(int, 0x13759f8) + 0x268);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) & 0xfdbfffff | 0x5bfffff;
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
  piVar14 = *(int * PTR32 *)(REFG(int, 0x137127c) + 0x10350);
  piVar7 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1d8)));
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
  (*(int * PTR32 *)(gen_frame + 0x84)) = piVar14;
  (*(int * PTR32 *)(gen_frame + 0x88)) = piVar16;
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar7;
  (*(float *)(gen_frame + 0x8c)) = (float)((float10)REFG(double, 0x1088108) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) * (float10)REFG(double, 0x1088108));
  uVar12 = F_0067d2b0(piVar7,"cCloudShadowParam");
  if (-1 < (int)uVar12) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
  }
  F_0067a0f0((undefined *)((int)pvVar21 + 0x1d4));
  pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) & 0xfe180000 | 0x6180000;
  piVar16 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x58)));
  (*(int * PTR32 *)(gen_frame + 0x80)) = (*(int * PTR32 *)(gen_frame + 0x48));
  (*(int * PTR32 *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x4c));
  (*(int * PTR32 *)(gen_frame + 0x88)) = *(int * PTR32 *)((int)pvVar21 + 0x1530);
  (*(float *)(gen_frame + 0x8c)) = 0.0;
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
  uVar12 = F_0067d2b0(piVar16,"cView");
  if (-1 < (int)uVar12) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)),uVar12,(*(int * PTR32 *)(gen_frame + 0x38)),0x40);
  }
  piVar16 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x58)));
  (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
  uVar12 = F_0067d2b0(piVar16,"cViewDepthFactor");
  if (-1 < (int)uVar12) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
  }
  F_0067a0f0((undefined *)((int)pvVar21 + 0x54));
  if ((*(byte *)((int)pvVar21 + 0x1514) & 1) == 0) {
    (*(int * PTR32 *)(gen_frame + 0x98)) = *(int * PTR32 *)((int)pvVar21 + 0x1498);
    F_004daa40(pvVar20,1,&(*(int * PTR32 *)(gen_frame + 0x98)),0,0,0);
    puVar13 = (undefined4 *)F_004d4760(pvVar20,0x28);
    piVar16 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    if (puVar13 != (undefined4 *)0x0) {
      *puVar13 = 3;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[1] = 1;
      puVar13[2] = 0xff000000;
      puVar13[3] = piVar16;
      F_004d4810(pvVar20,puVar13);
    }
  }
  else {
    piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x1468);
    iVar18 = *(int *)((int)pvVar21 + 0x1498);
    iVar8 = piVar16[6];
    piVar14 = (int *)(iVar18 + 0x18);
    (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x78)) = piVar16;
    if ((iVar8 == *piVar14) && (piVar16[7] == *(int *)(iVar18 + 0x1c))) {
      *(uint *)((int)pvVar21 + 0x310) = *(uint *)((int)pvVar21 + 0x310) | 1;
      piVar16 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x2f8)));
      (*(bool *)(gen_frame + 0x97)) = true;
      (*(int * PTR32 *)(gen_frame + 0x80)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x84)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x88)) = (int *)0x0;
      (*(float *)(gen_frame + 0x8c)) = 0.0;
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
      uVar12 = F_0067d2b0(piVar16,"cClearColor");
      if (-1 < (int)uVar12) {
        F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x7c)) = (undefined *)*((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 4)));
      if ((*(int * PTR32 *)(gen_frame + 0x78)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x78)) + 8))((*(int * PTR32 *)(gen_frame + 0x78)));
      }
      piVar16 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x28);
      if (piVar16 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar16 + 0xc))(piVar16);
      }
      *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x28) = (*(int * PTR32 *)(gen_frame + 0x78));
      iVar18 = *((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 4)));
      pbVar1 = (byte *)(iVar18 + 0x48);
      *pbVar1 = *pbVar1 | 6;
      *(undefined1 *)(iVar18 + 0x43) = 0x80;
      (*(undefined * PTR32 *)(gen_frame + 0x7c)) = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 8)));
      if ((*(int * PTR32 *)(gen_frame + 0x78)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x78)) + 8))((*(int * PTR32 *)(gen_frame + 0x78)));
      }
      piVar16 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x28);
      if (piVar16 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar16 + 0xc))(piVar16);
      }
      *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x28) = (*(int * PTR32 *)(gen_frame + 0x78));
      iVar18 = *((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 8)));
      *(byte *)(iVar18 + 0x48) = *(byte *)(iVar18 + 0x48) & 0xfb | 2;
      *(undefined1 *)(iVar18 + 0x43) = 0x80;
      iVar18 = *((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 8)));
      pbVar1 = (byte *)(iVar18 + 0x48);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(iVar18 + 0x34) = 0xff000000;
    }
    else {
      *(uint *)((int)pvVar21 + 0x310) = *(uint *)((int)pvVar21 + 0x310) & 0xfffffffe;
      piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 4)));
      piVar14 = (int *)piVar16[10];
      (*(bool *)(gen_frame + 0x97)) = false;
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
      if (piVar14 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar14 + 0xc))(piVar14);
        piVar16 = (*(int * PTR32 *)(gen_frame + 0x98));
      }
      piVar16[10] = 0;
      iVar18 = *((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 4)));
      pbVar1 = (byte *)(iVar18 + 0x48);
      *pbVar1 = *pbVar1 & 0xf9;
      *(undefined1 *)(iVar18 + 0x43) = 0x80;
      piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 8)));
      piVar14 = (int *)piVar16[10];
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
      if (piVar14 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar14 + 0xc))(piVar14);
        piVar16 = (*(int * PTR32 *)(gen_frame + 0x98));
      }
      piVar16[10] = 0;
      iVar18 = *((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 8)));
      pbVar1 = (byte *)(iVar18 + 0x48);
      *pbVar1 = *pbVar1 & 0xf9;
      *(undefined1 *)(iVar18 + 0x43) = 0x80;
      iVar18 = *((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 8)));
      pbVar1 = (byte *)(iVar18 + 0x48);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined4 *)(iVar18 + 0x34) = 0;
    }
    fVar26 = (float10)*(*(int * PTR32 *)(gen_frame + 0x6c));
    if (*(*(int * PTR32 *)(gen_frame + 0x6c)) < 0) {
      fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar23 = (float10)1;
    iVar18 = (*(int * PTR32 *)(gen_frame + 0x6c))[1];
    (*(int * PTR32 *)(gen_frame + 0x410)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar26))));
    fVar26 = (float10)(*(int * PTR32 *)(gen_frame + 0x6c))[1];
    if (iVar18 < 0) {
      fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    ppiVar17 = (int * PTR32 *)((int)pvVar21 + 0x1520);
    (*(int * PTR32 *)(gen_frame + 0x418)) = *(int * PTR32 *)((int)pvVar21 + 0x1518);
    (*(undefined * PTR32 *)(gen_frame + 0x41c)) = *(undefined * PTR32 *)((int)pvVar21 + 0x151c);
    (*(int * PTR32 *)(gen_frame + 0x98)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094778)));
    (*(int * PTR32 *)(gen_frame + 0x414)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar26))));
    if ((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))) < REFG(double, 0x1094438)) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
    }
    piVar16 = *ppiVar17;
    ppiVar17 = (int * PTR32 *)((int)pvVar21 + 0x1524);
    (*(int * PTR32 *)(gen_frame + 0x420)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))));
    if ((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))) < REFG(double, 0x1094438)) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
    }
    piVar16 = *ppiVar17;
    ppiVar17 = (int * PTR32 *)((int)pvVar21 + 0x1528);
    (*(int * PTR32 *)(gen_frame + 0x424)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))));
    if ((double)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))) < REFG(double, 0x1094438)) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
    }
    (*(int * PTR32 *)(gen_frame + 0x428)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17)))))));
    if ((*(bool *)(gen_frame + 0x97)) == false) {
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c)))));
    }
    else {
      fVar26 = (float10)*(float *)((int)pvVar21 + 0x152c) * (float10)*(double *)&REFG(undefined, 0x10addd8);
    }
    (*(int * PTR32 *)(gen_frame + 0x42c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x430)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x434)) = *(int * PTR32 *)((int)pvVar21 + 0x1530);
    (*(int * PTR32 *)(gen_frame + 0x438)) = *(int * PTR32 *)((int)pvVar21 + 0x1534);
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)pvVar21 + 0x1538))));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cHDAOParam");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x410)),0x30);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 8)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cViewDepthFactor");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x48)),8);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x2f8) + 8)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cHDAOParam");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x98)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x410)),0x30);
    }
    *(float *)((int)pvVar21 + 0x30c) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x2f4));
  }
  *(uint *)((int)pvVar20 + 8) = *(uint *)((int)pvVar20 + 8) & 0xffb80000 | 0x380000;
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 2 & 1) != 0) {
    piVar14 = *(int * PTR32 *)((int)pvVar21 + 0x14c4);
    piVar7 = *(int * PTR32 *)((int)pvVar21 + 0x14c8);
    piVar16 = (int *)((int)pvVar21 + 0x194);
    iVar18 = 0;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x78)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar7;
    if ((piVar14 != (int *)0x0) && (iVar18 = 1, piVar7 != (int *)0x0)) {
      iVar18 = 2;
    }
    if ((float)REFG(float, 0x1087f04) <= *(float *)((int)pvVar21 + 0x1560)) {
      iVar18 = 0;
    }
    *(uint *)((int)pvVar21 + 0x1b0) =
         (uint)(iVar18 == 0) | *(uint *)((int)pvVar21 + 0x1b0) & 0xfffffffe;
    *(uint *)((int)pvVar21 + 0x1b0) =
         (uint)(iVar18 == 1) * 2 | *(uint *)((int)pvVar21 + 0x1b0) & 0xfffffffd;
    *(uint *)((int)pvVar21 + 0x1b0) =
         (uint)(iVar18 == 2) * 4 | *(uint *)((int)pvVar21 + 0x1b0) & 0xfffffffb;
    pvVar20 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x198) + iVar18 * 4)));
    (*(undefined * PTR32 *)(gen_frame + 0x7c)) = pvVar20;
    if (iVar18 == 0) {
      fVar26 = (float10)*(float *)((int)pvVar21 + 0x1560) * (float10)(*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0x8c)) = 0.0;
      (*(int * PTR32 *)(gen_frame + 0x80)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x1554) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x1558) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar26 * (float10)*(float *)((int)pvVar21 + 0x155c)))))));
      uVar12 = F_0067d2b0(pvVar20,"cClearColor");
      if (-1 < (int)uVar12) {
        F_006793b0((*(undefined * PTR32 *)(gen_frame + 0x7c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
      }
    }
    else {
      puVar13 = (undefined4 *)F_004f4970(((undefined4 *)(gen_frame + 0x2e0)),((undefined4 *)(gen_frame + 0x2a0)));
      pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x7c));
      puVar22 = ((undefined4 *)(gen_frame + 0x360));
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
        *puVar22 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar22 = puVar22 + 1;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x78)) == (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)0x1;
        (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x1;
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x64));
      }
      else {
        ppiVar17 = (int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x78)) + 6);
      }
      piVar16 = *ppiVar17;
      piVar14 = ppiVar17[1];
      if ((*(int * PTR32 *)(gen_frame + 0x98)) == (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x64)) = (int *)0x1;
        (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x1;
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x64));
      }
      else {
        ppiVar17 = (int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x98)) + 6);
      }
      piVar7 = *ppiVar17;
      (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
      piVar4 = ppiVar17[1];
      if ((*(int * PTR32 *)(gen_frame + 0x78)) == (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x1;
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)(*(int * PTR32 *)(gen_frame + 0x78))[8];
      }
      if ((*(int * PTR32 *)(gen_frame + 0x98)) == (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x6c)) = (int *)0x1;
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x6c)) = (int *)(*(int * PTR32 *)(gen_frame + 0x98))[8];
      }
      (*(int *)(gen_frame + 0x3a0)) = (*(int * PTR32 *)(gen_frame + 0x74))[0x24];
      (*(int *)(gen_frame + 0x3a4)) = (*(int * PTR32 *)(gen_frame + 0x74))[0x25];
      (*(int *)(gen_frame + 0x3a8)) = (*(int * PTR32 *)(gen_frame + 0x74))[0x26];
      (*(int * PTR32 *)(gen_frame + 0x3b0)) = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1584);
      (*(undefined4 *)(gen_frame + 0x3ac)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x3b4)) = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1588);
      piVar10 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x158c);
      (*(int * PTR32 *)(gen_frame + 0x3bc)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar14;
      fVar26 = (float10)(int)piVar14;
      (*(int * PTR32 *)(gen_frame + 0x3b8)) = piVar10;
      (*(float *)(gen_frame + 0x3c0)) = REFG(float, 0x1088068);
      if ((int)piVar14 < 0) {
        fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
      fVar26 = (float10)(float)fVar26;
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar4;
      (*(float *)(gen_frame + 0x3c8)) = REFG(float, 0x1088068);
      fVar23 = (float10)REFG(double, 0x1088108);
      (*(float *)(gen_frame + 0x3c4)) = ((float)GEN_TOF(((fVar26 - fVar23) / fVar26)));
      fVar24 = (float10)(int)piVar4;
      if ((int)piVar4 < 0) {
        fVar24 = fVar24 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar24)));
      fVar24 = (float10)(float)fVar24;
      (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)((int)piVar16 + -1);
      (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x1;
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x74));
      (*(float *)(gen_frame + 0x3cc)) = ((float)GEN_TOF(((fVar24 - fVar23) / fVar24)));
      if (0 < (int)piVar16 + -1) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
      }
      piVar10 = *ppiVar17;
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar16;
      fVar25 = (float10)(int)piVar16;
      if ((int)piVar16 < 0) {
        fVar25 = fVar25 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)((int)piVar14 + -1);
      (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x1;
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x3d0)) = ((float)GEN_TOF((((float10)(int)((int)(uintptr_t)piVar10) * fVar23) / fVar25)));
      if (0 < (int)piVar14 + -1) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x74));
      }
      piVar16 = *ppiVar17;
      (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)((int)piVar7 + -1);
      (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x1;
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
      (*(undefined * PTR32 *)(gen_frame + 0x3d4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)(int)((int)(uintptr_t)piVar16) * (float10)REFG(double, 0x1094890)) / fVar26))))));
      if (0 < (int)piVar7 + -1) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x74));
      }
      piVar16 = *ppiVar17;
      (*(int * PTR32 *)(gen_frame + 0x68)) = piVar7;
      fVar26 = (float10)(int)piVar7;
      if ((int)piVar7 < 0) {
        fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)((int)piVar4 + -1);
      (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x1;
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x3d8)) = ((float)GEN_TOF((((float10)(int)((int)(uintptr_t)piVar16) * fVar23) / fVar26)));
      if (0 < (int)piVar4 + -1) {
        ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x74));
      }
      (*(float *)(gen_frame + 0x3dc)) = ((float)GEN_TOF((((float10)(int)*ppiVar17 * (float10)REFG(double, 0x1094890)) / fVar24)));
      piVar16 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1544);
      (*(int * PTR32 *)(gen_frame + 0x74)) = piVar16;
      fVar26 = (float10)(int)(*(int * PTR32 *)(gen_frame + 0x20));
      if ((int)(*(int * PTR32 *)(gen_frame + 0x20)) < 0) {
        fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar6 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1548);
      (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
      (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)(uint)uVar6;
      fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
      fVar26 = (float10)(float)fVar26;
      (*(float *)(gen_frame + 0x3e0)) = ((float)GEN_TOF((fVar23 / fVar26 + (fVar24 * (float10)(int)(uint)uVar6) / fVar26)));
      fVar26 = (float10)(int)(*(int * PTR32 *)(gen_frame + 0x6c));
      if ((int)(*(int * PTR32 *)(gen_frame + 0x6c)) < 0) {
        fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar6 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x154a);
      (*(int * PTR32 *)(gen_frame + 0x6c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar26)));
      (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)(uint)uVar6;
      (*(undefined4 *)(gen_frame + 0x3fc)) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1560);
      fVar26 = (float10)(float)fVar26;
      (*(float *)(gen_frame + 0x3e4)) = ((float)GEN_TOF((((float10)(int)(uint)uVar6 * fVar24) / fVar26 + fVar23 / fVar26)));
      fVar26 = (float10)(*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0x3e8)) = ((float)GEN_TOF((fVar26 * (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x154c))));
      (*(float *)(gen_frame + 0x3ec)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1550) * fVar26)));
      (*(float *)(gen_frame + 0x3f0)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1554) * fVar26)));
      (*(float *)(gen_frame + 0x3f4)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1558) * fVar26)));
      (*(float *)(gen_frame + 0x3f8)) = ((float)GEN_TOF((fVar26 * (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x155c))));
      uVar12 = F_0067d2b0((*(undefined * PTR32 *)(gen_frame + 0x7c)),&REFG(undefined, 0x10ad908));
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar21,uVar12,((undefined4 *)(gen_frame + 0x360)),0x40);
      }
      uVar12 = F_0067d2b0(pvVar21,"cSkyParam");
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar21,uVar12,&(*(int *)(gen_frame + 0x3a0)),0x60);
      }
      uVar12 = F_004d4af0(&(*(int * PTR32 *)(gen_frame + 0x68)),2,2,0,9,(float)(float10)0,0,0,0);
      F_0067d3e0(pvVar21,&REFG(undefined, 0x10ad91c),(*(int * PTR32 *)(gen_frame + 0x78)),uVar12);
      uVar12 = F_004d4af0(&(*(int * PTR32 *)(gen_frame + 0x68)),2,2,0,9,(float)(float10)0,0,0,0);
      F_0067d3e0(pvVar21,"sSky2",(*(int * PTR32 *)(gen_frame + 0x98)),uVar12);
      pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      piVar16 = (*(int * PTR32 *)(gen_frame + 0x9c));
    }
    piVar16[6] = (int)gen_fl2bits((*(float *)(gen_frame + 0x70)));
    F_0067a0f0(piVar16);
    pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  *(uint *)((int)pvVar20 + 8) = *(uint *)((int)pvVar20 + 8) & 0xfff80002 | 2;
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 3 & 1) != 0) {
    *(float *)((int)pvVar21 + 0x1cc) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x1b4));
  }
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 10 & 1) != 0) {
    *(float *)((int)pvVar21 + 300) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x114));
  }
  *(uint *)((int)pvVar20 + 8) = *(uint *)((int)pvVar20 + 8) & 0xfffc0000 | 0x40000;
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 4 & 1) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x80)) = *(int * PTR32 *)((int)pvVar21 + 0x15f0);
    (*(int * PTR32 *)(gen_frame + 0x84)) = *(int * PTR32 *)((int)pvVar21 + 0x15f4);
    (*(int * PTR32 *)(gen_frame + 0x88)) = *(int * PTR32 *)((int)pvVar21 + 0x15f8);
    F_0046f390(&(*(int * PTR32 *)(gen_frame + 0x80)));
    F_004eebf0(&(*(int * PTR32 *)(gen_frame + 0x80)),(uint)(*(int * PTR32 *)(gen_frame + 0x38)));
    if (((*(uint *)((int)pvVar21 + 0x1514) >> 5 & 1) == 0) || (!(((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x88))))) < 0.0))) {
      (*(bool *)(gen_frame + 0x97)) = false;
    }
    else {
      (*(bool *)(gen_frame + 0x97)) = true;
      F_004eeb30(&(*(int * PTR32 *)(gen_frame + 0x80)),(uint)(*(int * PTR32 *)(gen_frame + 0x24)));
      fVar3 = *(float *)((int)pvVar21 + 0x1608);
      (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
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
      fVar27 = fVar27 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)0x0;
      fVar26 = (float10)1;
      piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar27 + fVar26) * fVar23))))));
      (*(int * PTR32 *)(gen_frame + 0x78)) = piVar14;
      piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 - fVar27))));
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar7;
      piVar4 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x15f4) +
                             (float10)*(float *)((int)pvVar21 + 0x15f4)))))));
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
      fVar3 = *(float *)((int)pvVar21 + 0x160c);
      (*(int * PTR32 *)(gen_frame + 0x414)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(int * PTR32 *)(gen_frame + 0x418)) = piVar16;
      piVar16 = *ppiVar17;
      (*(undefined * PTR32 *)(gen_frame + 0x41c)) = pvVar20;
      piVar7 = *ppiVar15;
      piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x1f8) + 4)));
      (*(int * PTR32 *)(gen_frame + 0x420)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094870)));
      piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)fVar3 * (float10)(*(float *)(gen_frame + 0x70))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))) *
                              (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7)))))))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
      fVar3 = *(float *)((int)pvVar21 + 0x1560);
      (*(int * PTR32 *)(gen_frame + 0x424)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094808)));
      (*(int * PTR32 *)(gen_frame + 0x410)) = (*(int * PTR32 *)(gen_frame + 0x18));
      (*(int * PTR32 *)(gen_frame + 0x428)) = piVar14;
      (*(int * PTR32 *)(gen_frame + 0x43c)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x42c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 - (float10)fVar3 * (float10)fVar3))));
      fVar3 = *(float *)((int)pvVar21 + 0x15fc);
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar4;
      (*(int * PTR32 *)(gen_frame + 0x430)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 * (float10)fVar3))));
      (*(int * PTR32 *)(gen_frame + 0x434)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x1600) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar26 * (float10)*(float *)((int)pvVar21 + 0x1604)))))));
      uVar12 = F_0067d2b0(piVar4,"cHaloParam");
      if (-1 < (int)uVar12) {
        F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x410)),0x30);
      }
    }
    *(uint *)((int)pvVar21 + 0x210) =
         *(uint *)((int)pvVar21 + 0x210) & 0xfffffffd | (uint)((*(bool *)(gen_frame + 0x97)) != false) * 2;
    *(uint *)((int)pvVar21 + 0x210) =
         (uint)((*(bool *)(gen_frame + 0x97)) != false) * 8 | *(uint *)((int)pvVar21 + 0x210) & 0xfffffff7;
    *(float *)((int)pvVar21 + 0x20c) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 500));
    pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  *(uint *)((int)pvVar20 + 8) = *(uint *)((int)pvVar20 + 8) & 0xffcfffff | 0x4fffff;
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 6 & 1) != 0) {
    fVar26 = (float10)(*(float *)(gen_frame + 0x70));
    iVar18 = **(int * PTR32 *)((int)pvVar21 + 0x218);
    uVar2 = *(undefined4 *)((int)pvVar21 + 0x1570);
    piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar26 * (float10)*(float *)((int)pvVar21 + 0x1568)))))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x156c) * fVar26))))));
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar14;
    fVar3 = *(float *)((int)pvVar21 + 0x1564);
    *(undefined4 *)(iVar18 + 0x74) = uVar2;
    *(float *)(iVar18 + 0x68) = (float)(fVar26 * (float10)fVar3);
    *(int * PTR32 *)(iVar18 + 0x6c) = piVar16;
    *(int * PTR32 *)(iVar18 + 0x70) = piVar14;
    *(undefined4 *)(iVar18 + 0x78) = *(undefined4 *)((int)pvVar21 + 0x1578);
    *(undefined4 *)(iVar18 + 0x7c) = *(undefined4 *)((int)pvVar21 + 0x1580);
    *(undefined4 *)(iVar18 + 0x80) = *(undefined4 *)((int)pvVar21 + 0x1574);
    uVar2 = *(undefined4 *)((int)pvVar21 + 0x157c);
    *(int * PTR32 *)(iVar18 + 0x88) = (*(int * PTR32 *)(gen_frame + 0x48));
    *(undefined4 *)(iVar18 + 0x84) = uVar2;
    *(int * PTR32 *)(iVar18 + 0x8c) = (*(int * PTR32 *)(gen_frame + 0x4c));
    *(int * PTR32 *)(iVar18 + 0x90) = (*(int * PTR32 *)(gen_frame + 0x3c));
    F_0067c740(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x218))));
    *(float *)((int)pvVar21 + 0x22c) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x214));
  }
  fVar26 = (float10)*(float *)&REFG(undefined, 0x1322834);
  *(uint *)((int)pvVar20 + 8) = *(uint *)((int)pvVar20 + 8) & 0xffdfffff | 0x5fffff;
  (*(float *)(gen_frame + 0x8c)) = (float)(fVar26 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c))))));
  piVar16 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x78)));
  (*(int * PTR32 *)(gen_frame + 0x80)) = (*(int * PTR32 *)(gen_frame + 0x48));
  (*(int * PTR32 *)(gen_frame + 0x84)) = (*(int * PTR32 *)(gen_frame + 0x4c));
  (*(int * PTR32 *)(gen_frame + 0x88)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
  uVar12 = F_0067d2b0(piVar16,"cViewDepthFactor");
  if (-1 < (int)uVar12) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
  }
  *(float *)((int)pvVar21 + 0x8c) = (*(float *)(gen_frame + 0x70));
  F_0067a0f0((undefined *)((int)pvVar21 + 0x74));
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 7 & 1) != 0) {
    fVar3 = *(float *)((int)pvVar21 + 0x16c8);
    bVar11 = (!GEN_ISNAN(fVar3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
             (!(fVar3 < *(float *)&REFG(undefined, 0x1088114)) && fVar3 != *(float *)&REFG(undefined, 0x1088114));
    uVar12 = *(uint *)((int)pvVar21 + 0x250);
    uVar19 = (uint)((GEN_ISNAN(fVar3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                   (fVar3 < *(float *)&REFG(undefined, 0x1088114) || fVar3 == *(float *)&REFG(undefined, 0x1088114)));
    (*(bool *)(gen_frame + 0x97)) = bVar11;
    *(uint *)((int)pvVar21 + 0x250) = uVar12 & 0xfffffffd | uVar19 * 2;
    *(uint *)((int)pvVar21 + 0x250) = uVar12 & 0xfffffff9 | uVar19 * 2 | uVar19 * 4;
    piVar16 = (int *)(uint)bVar11;
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    *(uint *)((int)pvVar21 + 0x250) =
         (int)((int)(uintptr_t)piVar16) * 8 | *(uint *)((int)pvVar21 + 0x250) & 0xfffffff7;
    *(uint *)((int)pvVar21 + 0x250) =
         uVar19 << 6 | (int)((int)(uintptr_t)piVar16) << 5 | *(uint *)((int)pvVar21 + 0x250) & 0xffffff1f |
         (int)((int)(uintptr_t)piVar16) << 7;
    iVar18 = **(int * PTR32 *)((int)pvVar21 + 0x238);
    *(undefined4 *)(iVar18 + 0x68) = *(undefined4 *)((int)pvVar21 + 0x16bc);
    *(int * PTR32 *)(iVar18 + 0x6c) = (*(int * PTR32 *)(gen_frame + 0x30));
    *(undefined4 *)(iVar18 + 0x70) = *(undefined4 *)((int)pvVar21 + 0x16c0);
    uVar2 = *(undefined4 *)((int)pvVar21 + 0x16c4);
    *(int * PTR32 *)(iVar18 + 0x78) = (*(int * PTR32 *)(gen_frame + 0x3c));
    *(undefined4 *)(iVar18 + 0x74) = uVar2;
    *(undefined4 *)(iVar18 + 0x7c) = *(undefined4 *)((int)pvVar21 + 0x16c8);
    *(undefined4 *)(iVar18 + 0x80) = *(undefined4 *)((int)pvVar21 + 0x16cc);
    *(undefined4 *)(iVar18 + 0x84) = *(undefined4 *)((int)pvVar21 + 0x16d0);
    F_00679b80(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x238))));
    *(float *)((int)pvVar21 + 0x24c) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x234));
    pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 8 & 1) != 0) {
    piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x16ac);
    piVar14 = *(int * PTR32 *)((int)pvVar21 + 0x16b0);
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)));
    piVar14 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 600) + 8)));
    fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) / fVar26;
    (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 / fVar26))));
    (*(int * PTR32 *)(gen_frame + 0x98)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
    uVar12 = F_0067d2b0(piVar14,"cBlurLength");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x68)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x9c)),4);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 600) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cBlurLength");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x98)),4);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 600) + 0x10)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cBlurLength");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x6c)),4);
    }
    piVar16 = ((int *)GEN_TOP((**(int * PTR32 *)((int)pvVar21 + 600) + 0x50)));
    piVar14 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x38)) - (int)piVar16);
    uVar12 = 0x40;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    do {
      if (*(int *)((int)piVar16 + (int)piVar14) != *piVar16) {
        piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x16b4);
        goto LAB_00685aa0;
      }
      uVar12 = uVar12 - 4;
      piVar16 = piVar16 + 1;
    } while (3 < uVar12);
    piVar16 = (int *)0x0;
LAB_00685aa0: ;
    piVar14 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 600) + 0x14)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    uVar12 = F_0067d2b0(piVar14,"cBlurStrength");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x98)),4);
    }
    *(float *)((int)pvVar21 + 0x26c) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x254));
  }
  *(uint *)((int)pvVar20 + 8) = *(uint *)((int)pvVar20 + 8) & 0xffe7ffff | 0x600000;
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 9 & 1) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x7c)) = (undefined *)((int)pvVar21 + 0x274);
    if (*(int *)((int)pvVar21 + 0x167c) == 1) {
      (*(int * PTR32 *)(gen_frame + 0x78)) = (int *)0x0;
      if ((*(uint *)&REFG(undefined, 0x14882d0) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14882d0) = *(uint *)&REFG(undefined, 0x14882d0) | 1;
      }
      puVar13 = (undefined4 *)F_004f45d0(((undefined4 *)(gen_frame + 0x2e0)),(*(int * PTR32 *)(gen_frame + 0x38)));
      puVar22 = ((undefined4 *)(gen_frame + 0x360));
      for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
        *puVar22 = *puVar13;
        puVar13 = puVar13 + 1;
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
      piVar4 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4)))))))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar4;
      (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar4;
      fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4)));
      if ((float10)REFG(float, 0x10addd0) <= fVar26) {
        (*(int * PTR32 *)(gen_frame + 0x80)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) / fVar26))));
        (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) / fVar26))));
        (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))) / fVar26))));
        (*(float *)(gen_frame + 0x8c)) = (float)((float10)fVar3 / fVar26);
        F_004be0e0(&(*(int * PTR32 *)(gen_frame + 0x320)),(*(int * PTR32 *)(gen_frame + 0x38)));
        F_004eee00(&(*(int * PTR32 *)(gen_frame + 0x80)),(uint)&(*(int * PTR32 *)(gen_frame + 0x320)));
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
        fVar23 = (float10)(float)(-(float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x3c))))) / fVar26);
        (*(int * PTR32 *)(gen_frame + 0x80)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x80)))))))));
        (*(int * PTR32 *)(gen_frame + 0x84)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x84)))))))));
        (*(int * PTR32 *)(gen_frame + 0x88)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 * fVar26))));
        (*(float *)(gen_frame + 0x8c)) = (float)(float10)1;
        F_004eee00(&(*(int * PTR32 *)(gen_frame + 0x80)),(uint)(*(int * PTR32 *)(gen_frame + 0x24)));
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
        (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)0x0;
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
        (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)0x0;
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
        fVar5 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1684);
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
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1688))));
      piVar16 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1680);
      fVar23 = (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1688);
      pvVar21 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 4) + 4)));
      fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x78))))) / fVar23;
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
      uVar12 = F_0067d2b0(pvVar21,"cRadialBlurParam");
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar21,uVar12,&(*(int * PTR32 *)(gen_frame + 0x40)),0x10);
        fVar26 = (float10)REFG(double, 0x1088108);
      }
      pvVar21 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar20 + 4) + 8)));
      uVar12 = F_0067d2b0(pvVar21,"cRadialBlurParam");
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar21,uVar12,&(*(int * PTR32 *)(gen_frame + 0x5c)),0x10);
        fVar26 = (float10)REFG(double, 0x1088108);
      }
      pvVar21 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar20 + 4) + 0xc)));
      uVar12 = F_0067d2b0(pvVar21,"cRadialBlurParam");
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar21,uVar12,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
        fVar26 = (float10)REFG(double, 0x1088108);
      }
      (*(int * PTR32 *)(gen_frame + 0x420)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x424)) = (int *)0x0;
      piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x78))))) * fVar26))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x430)) = (*(int * PTR32 *)(gen_frame + 0x80));
      (*(int * PTR32 *)(gen_frame + 0x428)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x42c)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x434)) = (*(int * PTR32 *)(gen_frame + 0x84));
      fVar3 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1690);
      (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8)));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
      if (!((double)fVar3 < REFG(double, 0x1091858))) {
        ppiVar17 = (int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1690);
      }
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar20 + 4) + 0x10)));
      (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x168c))));
      (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17)))))));
      uVar12 = F_0067d2b0(pvVar20,"cDonutMergeParam");
      pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x420)),0x20);
        pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      }
    }
    else {
      piVar4 = *(int * PTR32 *)((int)pvVar21 + 0x1684);
      piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x1694);
      (*(int * PTR32 *)(gen_frame + 0x98)) = piVar4;
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x278) + 4)));
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)pvVar21 + 0x1688))));
      piVar14 = *(int * PTR32 *)((int)pvVar21 + 0x1698);
      piVar7 = *(int * PTR32 *)((int)pvVar21 + 0x1680);
      fVar26 = (float10)*(float *)((int)pvVar21 + 0x1688);
      (*(int * PTR32 *)(gen_frame + 0x430)) = piVar16;
      (*(int * PTR32 *)(gen_frame + 0x80)) = piVar16;
      fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4))) / fVar26;
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
      uVar12 = F_0067d2b0(pvVar20,"cRadialBlurParam");
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
      }
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 4) + 8)));
      uVar12 = F_0067d2b0(pvVar20,"cRadialBlurParam");
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
      }
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 4) + 0xc)));
      uVar12 = F_0067d2b0(pvVar20,"cRadialBlurParam");
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x40)),0x10);
      }
      fVar3 = *(float *)((int)pvVar21 + 0x169c);
      fVar26 = (float10)REFG(double, 0x1088108);
      (*(int * PTR32 *)(gen_frame + 0x430)) = *(int * PTR32 *)((int)pvVar21 + 0x1694);
      (*(int * PTR32 *)(gen_frame + 0x434)) = *(int * PTR32 *)((int)pvVar21 + 0x1698);
      (*(int * PTR32 *)(gen_frame + 0x420)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar3 * fVar26))));
      (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8)));
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
      (*(int * PTR32 *)(gen_frame + 0x424)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x16a0) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x428)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x16a4) * fVar26))))));
      (*(int * PTR32 *)(gen_frame + 0x42c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x16a8) * fVar26))))));
      if (!((double)*(float *)((int)pvVar21 + 0x1690) < REFG(double, 0x1091858))) {
        ppiVar17 = (int * PTR32 *)((int)pvVar21 + 0x1690);
      }
      pvVar20 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 4) + 0x10)));
      (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)pvVar21 + 0x168c))));
      (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17)))))));
      uVar12 = F_0067d2b0(pvVar20,"cDonutMergeParam");
      if (-1 < (int)uVar12) {
        F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x420)),0x20);
      }
    }
    *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x18) = GEN_FLT_TO(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x7c)) + 0x18), REFG(float, 0x1087f04));
    F_0067a0f0((*(undefined * PTR32 *)(gen_frame + 0x7c)));
    pvVar20 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 0xd & 1) != 0) {
    *(float *)((int)pvVar21 + 0xcc) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0xb4));
  }
  *(uint *)((int)pvVar20 + 8) = *(uint *)((int)pvVar20 + 8) & 0xffefffff | 0x680000;
  (*(char *)(gen_frame + 0x37)) = '\0';
  (*(bool *)(gen_frame + 0x97)) = false;
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 10 & 1) != 0) {
    piVar16 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x138)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cBrightPassParam");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&REFG(undefined, 0x1322824),0x10);
    }
    fVar3 = *(float *)((int)pvVar21 + 0x1664);
    fVar5 = *(float *)((int)pvVar21 + 0x1668);
    uVar12 = *(uint *)((int)pvVar21 + 0x150);
    (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x0;
    *(uint *)((int)pvVar21 + 0x150) = (uint)(0.0 < fVar3) * 4 | uVar12 & 0xfffffffb;
    *(uint *)((int)pvVar21 + 0x150) =
         (uint)(0.0 < fVar5) * 8 | *(uint *)((int)pvVar21 + 0x150) & 0xfffffff7;
    piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x166c);
    iVar18 = *((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x138) + 0xc)));
    piVar14 = *(int * PTR32 *)((int)pvVar21 + 0x1670);
    uVar9 = *(undefined4 *)((int)pvVar21 + 0x1678);
    uVar2 = *(undefined4 *)((int)pvVar21 + 0x1674);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
    *(undefined4 *)(iVar18 + 0x60) = uVar9;
    piVar7 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
    if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))))) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
    }
    *(int * PTR32 *)(iVar18 + 100) = *ppiVar17;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x0;
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x98));
    if (!(((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) < ((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))))) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
    }
    if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar17))))) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x68));
    }
    piVar16 = *ppiVar17;
    *(undefined4 *)(iVar18 + 0x6c) = uVar2;
    *(int * PTR32 *)(iVar18 + 0x68) = piVar16;
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x138) + 0x10)));
    (*(int * PTR32 *)(gen_frame + 0x84)) = *(int * PTR32 *)((int)pvVar21 + 0x1664);
    (*(int * PTR32 *)(gen_frame + 0x88)) = *(int * PTR32 *)((int)pvVar21 + 0x1668);
    (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1322820);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cMergeWeight");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x84)),0xc);
    }
    *(float *)((int)pvVar21 + 0x14c) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x134));
    (*(char *)(gen_frame + 0x37)) = '\x01';
  }
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)pvVar21 + 0x1584);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)pvVar21 + 0x1588);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)pvVar21 + 0x158c);
  F_0046f390(&(*(float *)(gen_frame + 0x0)));
  F_004eebf0(&(*(float *)(gen_frame + 0x0)),(uint)(*(int * PTR32 *)(gen_frame + 0x38)));
  if (((*(uint *)((int)pvVar21 + 0x1514) >> 0xb & 1) != 0) &&
     (!GEN_ISNAN((*(float *)(gen_frame + 0x8))) && !(0.0 <= (*(float *)(gen_frame + 0x8))))) {
    F_004eeb30(&(*(float *)(gen_frame + 0x0)),(uint)(*(int * PTR32 *)(gen_frame + 0x24)));
    fVar26 = (float10)REFG(double, 0x1088108);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
    piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x0)) * fVar26 + fVar26))));
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar16;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 - (float10)(*(float *)(gen_frame + 0x4)) * fVar26))));
    (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar14;
    if (!((float10)1 < (float10)*(float *)((int)pvVar21 + 0x15c0))) {
      ppiVar17 = (int * PTR32 *)((int)pvVar21 + 0x15c0);
    }
    iVar18 = *(int *)((int)pvVar21 + 0x15b4);
    piVar7 = *ppiVar17;
    (*(int * PTR32 *)(gen_frame + 0x3b0)) = (*(int * PTR32 *)(gen_frame + 0x18));
    (*(int * PTR32 *)(gen_frame + 0x3b4)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(int * PTR32 *)(gen_frame + 0x3b8)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x3bc)) = piVar14;
    fVar3 = ((float)GEN_TOF((((float10)1 - (float10)*(float *)&REFG(undefined, 0x132281c)) +
                   (float10)*(float *)&REFG(undefined, 0x132281c) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7))))));
    (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x15b0) / (float10)(*(float *)(gen_frame + 0x14)))));
    (*(undefined * PTR32 *)(gen_frame + 0x7c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar5)));
    piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar21 + 0x15ac) / (float10)(*(float *)(gen_frame + 0x14))))))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar7;
    fVar23 = (float10)fVar3;
    piVar4 = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar23 * fVar23))));
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar4;
    fVar23 = (float10)fVar5;
    pvVar20 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)REFG(double, 0x1094890) / (fVar23 * fVar23)))))));
    (*(undefined * PTR32 *)(gen_frame + 0x7c)) = pvVar20;
    fVar23 = (float10)*(int *)((int)pvVar21 + 0x15b4);
    if (iVar18 < 0) {
      fVar23 = fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar3 = *(float *)((int)pvVar21 + 0x15b8);
    piVar10 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x298)));
    (*(float *)(gen_frame + 0x3c0)) = (float)(fVar23 * fVar26);
    (*(float *)(gen_frame + 0x3c4)) = fVar3;
    (*(float *)(gen_frame + 0x3c8)) = *(float *)((int)pvVar21 + 0x15bc);
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4)));
    (*(float *)(gen_frame + 0x3cc)) = *(float *)((int)pvVar21 + 0x15c0);
    (*(undefined * PTR32 *)(gen_frame + 0x3d4)) = pvVar20;
    (*(float *)(gen_frame + 0x3d0)) = (float)(fVar26 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar20))));
    (*(float *)(gen_frame + 0x3e0)) = *(float *)((int)pvVar21 + 0x159c);
    (*(float *)(gen_frame + 0x3e4)) = *(float *)((int)pvVar21 + 0x15a0);
    (*(float *)(gen_frame + 0x3e8)) = *(float *)((int)pvVar21 + 0x15a4);
    (*(float *)(gen_frame + 0x3ec)) = *(float *)((int)pvVar21 + 0x15a8);
    (*(float *)(gen_frame + 0x3f0)) = *(float *)((int)pvVar21 + 0x1590);
    (*(float *)(gen_frame + 0x3f4)) = *(float *)((int)pvVar21 + 0x1594);
    (*(float *)(gen_frame + 0x3f8)) = *(float *)((int)pvVar21 + 0x1598);
    (*(undefined4 *)(gen_frame + 0x3fc)) = *(undefined4 *)((int)pvVar21 + 0x15c4);
    (*(float *)(gen_frame + 0x3d8)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar20))) / fVar26);
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar7)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar10;
    (*(float *)(gen_frame + 0x3dc)) = ((float)GEN_TOF(((float10)REFG(double, 0x1094890) / (fVar26 * fVar26))));
    uVar12 = F_0067d2b0(piVar10,"cSunParam");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x3b0)),0x50);
      piVar16 = (*(int * PTR32 *)(gen_frame + 0x38));
      piVar14 = (*(int * PTR32 *)(gen_frame + 0x3c));
    }
    piVar7 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x298)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = *(int * PTR32 *)((int)pvVar21 + 0x15c8);
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar7;
    uVar12 = F_0067d2b0(piVar7,"cDepthThreshold");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x68)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x9c)),4);
      piVar16 = (*(int * PTR32 *)(gen_frame + 0x38));
      piVar14 = (*(int * PTR32 *)(gen_frame + 0x3c));
    }
    piVar4 = *(int * PTR32 *)((int)pvVar21 + 0x15d0);
    piVar7 = *(int * PTR32 *)((int)pvVar21 + 0x15cc);
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar4;
    piVar10 = *(int * PTR32 *)((int)pvVar21 + 0x15d4);
    in_ecx = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x298) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar10;
    (*(int * PTR32 *)(gen_frame + 0x438)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar10)));
    (*(int * PTR32 *)(gen_frame + 0x48)) = piVar7;
    fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar4))) / fVar26;
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
    uVar12 = F_0067d2b0(in_ecx,"cRadialBlurParam");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x298) + 8)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cRadialBlurParam");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x80)),0x10);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x298) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cRadialBlurParam");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x40)),0x10);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x298) + 0x10)));
    (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cMergeWeight");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x48)),8);
    }
    iVar18 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)pvVar21 + 0x298) + 0x14))) + 8)));
    fVar3 = ((float)GEN_TOF((((float10)*(float *)((int)pvVar21 + 0x15ac) * (float10)REFG(double, 0x1088108)) /
                   (float10)(*(float *)(gen_frame + 0x14)))));
    (*(int * PTR32 *)(gen_frame + 0x4c)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar26 = (float10)fVar3;
    (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18)))))))));
    fVar23 = (float10)(float)(fVar26 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x18))))));
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
    *(int * PTR32 *)(iVar18 + 0x10) = piVar7;
    piVar7 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar3 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)))))));
    (*(int * PTR32 *)(gen_frame + 0x44)) = piVar7;
    *(int * PTR32 *)(iVar18 + 0x14) = piVar7;
    *(int * PTR32 *)(iVar18 + 0x18) = piVar16;
    *(int * PTR32 *)(iVar18 + 0x1c) = piVar14;
    *(float *)((int)pvVar21 + 0x2ac) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x294));
    (*(bool *)(gen_frame + 0x97)) = true;
  }
  if (((*(uint *)((int)pvVar21 + 0x1514) >> 0xc & 1) != 0) && ((*(bool *)(gen_frame + 0x97)) != false)) {
    *(float *)((int)pvVar21 + 0x39c) = (*(float *)(gen_frame + 0x0));
    *(float *)((int)pvVar21 + 0x3a0) = (*(float *)(gen_frame + 0x4));
    piVar16 = (int *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) * *(*(int * PTR32 *)(gen_frame + 0x1c)) + (*(int * PTR32 *)(gen_frame + 0x1c))[1] * (*(int * PTR32 *)(gen_frame + 0x1c))[1]);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    fVar26 = (float10)(int)piVar16;
    if ((int)piVar16 < 0) {
      fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT(fVar26))))));
    *(float *)((int)pvVar21 + 0x3a8) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT(fVar26))) * (float10)*(float *)((int)pvVar21 + 0x15d8))));
    piVar16 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    piVar14 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094870)));
    if ((*(uint *)((int)pvVar21 + 0x1508) & 0x400) != 0) {
      piVar14 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10928e4)));
    }
    fVar3 = *(float *)((int)pvVar21 + 0x3a8);
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar14;
    *(float *)((int)pvVar21 + 0x3a8) = (float)((float10)fVar3 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))));
    *(undefined4 *)((int)pvVar21 + 0x3a4) = *(undefined4 *)((int)pvVar21 + 0x15dc);
    *(undefined4 *)((int)pvVar21 + 0x3c8) = *(undefined4 *)((int)pvVar21 + 0x15e0);
    *(undefined4 *)((int)pvVar21 + 0x3ac) = *(undefined4 *)((int)pvVar21 + 0x1590);
    *(undefined4 *)((int)pvVar21 + 0x3b0) = *(undefined4 *)((int)pvVar21 + 0x1594);
    *(undefined4 *)((int)pvVar21 + 0x3bc) = *(undefined4 *)((int)pvVar21 + 0x15e4);
    *(undefined4 *)((int)pvVar21 + 0x3b4) = *(undefined4 *)((int)pvVar21 + 0x1598);
    *(undefined4 *)((int)pvVar21 + 0x3c0) = *(undefined4 *)((int)pvVar21 + 0x15e8);
    *(float *)((int)pvVar21 + 0x3cc) =
         ((float)GEN_TOF(((float10)1 - (float10)*(float *)((int)pvVar21 + 0x1588))));
    *(int * PTR32 *)((int)pvVar21 + 0x3b8) = piVar16;
    *(undefined4 *)((int)pvVar21 + 0x3c4) = *(undefined4 *)((int)pvVar21 + 0x15ec);
    F_0067ce60((undefined *)((int)pvVar21 + 0x374));
  }
  piVar16 = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if ((*(char *)(gen_frame + 0x37)) == '\0') {
    if ((*(bool *)(gen_frame + 0x97)) != false) {
      piVar16 = (int *)0x0;
      goto LAB_00686c04;
    }
  }
  else {
LAB_00686c04: ;
    pvVar20 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x158)));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    uVar12 = F_0067d2b0(pvVar20,"cMergeWeight");
    if (-1 < (int)uVar12) {
      F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x98)),4);
    }
    if ((*(bool *)(gen_frame + 0x97)) == false) {
      piVar16 = (int *)((uint)(*(int * PTR32 *)(gen_frame + 0x98)) & 0xff808010 | 0x7808010);
    }
    else {
      piVar16 = (int *)((uint)(*(int * PTR32 *)(gen_frame + 0x98)) & 0xff080111 | 0x7080111);
    }
    iVar18 = **(int * PTR32 *)((int)pvVar21 + 0x158);
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    *(uint *)(iVar18 + 0x30) = (uint)piVar16 & 0x7ffffff;
    *(float *)((int)pvVar21 + 0x16c) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x154));
  }
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) & 0xfff7ffff | 0x700000;
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 0xd & 1) != 0) {
    piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x1654);
    iVar18 = *(int *)((int)pvVar21 + 0xb8);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
    piVar16 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar18 + 0x10) + 0x7c))) + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x420)) = *(int * PTR32 *)((int)pvVar21 + 0x165c);
    (*(int * PTR32 *)(gen_frame + 0x424)) = *(int * PTR32 *)((int)pvVar21 + 0x1658);
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x42c)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x428)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / fVar26))));
    fVar23 = (float10)(int)piVar16;
    if ((int)piVar16 < 0) {
      fVar23 = fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
    piVar16 = (int *)((int)piVar16 + -1);
    fVar23 = (float10)(float)fVar23;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    fVar24 = (float10)REFG(double, 0x1088108) / fVar23;
    (*(int * PTR32 *)(gen_frame + 0x430)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar24)));
    (*(int * PTR32 *)(gen_frame + 0x434)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - fVar24))));
    fVar24 = (float10)(int)piVar16;
    if ((int)piVar16 < 0) {
      fVar24 = fVar24 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar24)));
    pvVar20 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0xd8)));
    fVar24 = (float10)(float)fVar24;
    (*(int * PTR32 *)(gen_frame + 0x438)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar23 * fVar26) / fVar24))))));
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar26 * (float10)REFG(double, 0x1088108)) / fVar24))))));
    uVar12 = F_0067d2b0(pvVar20,"cToneMapParam");
    if (-1 < (int)uVar12) {
      F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x420)),0x20);
    }
    *(float *)((int)pvVar21 + 0xec) = (*(float *)(gen_frame + 0x70));
    F_0067a0f0((undefined *)((int)pvVar21 + 0xd4));
  }
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 0xe & 1) != 0) {
    *(int * PTR32 *)((int)pvVar21 + 0xac) = GEN_FLT_TO(*(int * PTR32 *)((int)pvVar21 + 0xac), REFG(float, 0x1087f04));
    F_0067a0f0((undefined *)((int)pvVar21 + 0x94));
  }
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 0xf & 1) != 0) {
    fVar3 = *(float *)((int)pvVar21 + 0x16d4);
    (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)((int)pvVar21 + 0x2b4);
    F_00676e60(((undefined1 *)(gen_frame + 0x260)),fVar3);
    piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x16d8);
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    if (0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))) {
      fVar26 = (float10)1 -
               (float10)1 / ((float10)*(double *)&REFG(undefined, 0x10adc48) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))));
    }
    else {
      fVar26 = -(float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
    }
    fVar23 = (float10)1;
    piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x16dc);
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
    (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x320)) = piVar14;
    ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x9c));
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) < (float10)0)) {
      ppiVar17 = &(*(int * PTR32 *)(gen_frame + 0x6c));
    }
    piVar16 = *ppiVar17;
    (*(int * PTR32 *)(gen_frame + 0x358)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x354)) = piVar16;
    (*(int * PTR32 *)(gen_frame + 0x350)) = piVar16;
    F_006770a0(((undefined1 *)(gen_frame + 0x220)),*(float *)((int)pvVar21 + 0x16e0));
    ((undefined4 *)(gen_frame + 0x360))[0] = *(undefined4 *)((int)pvVar21 + 0x16e4);
    ((undefined4 *)(gen_frame + 0x360))[1] = *(undefined4 *)((int)pvVar21 + 0x16f4);
    ((undefined4 *)(gen_frame + 0x360))[2] = *(undefined4 *)((int)pvVar21 + 0x1704);
    (*(undefined4 *)(gen_frame + 0x370)) = *(undefined4 *)((int)pvVar21 + 0x16e8);
    (*(undefined4 *)(gen_frame + 0x374)) = *(undefined4 *)((int)pvVar21 + 0x16f8);
    (*(undefined4 *)(gen_frame + 0x378)) = *(undefined4 *)((int)pvVar21 + 0x1708);
    (*(undefined4 *)(gen_frame + 0x380)) = *(undefined4 *)((int)pvVar21 + 0x16ec);
    (*(undefined4 *)(gen_frame + 0x384)) = *(undefined4 *)((int)pvVar21 + 0x16fc);
    (*(undefined4 *)(gen_frame + 0x388)) = *(undefined4 *)((int)pvVar21 + 0x170c);
    (*(float *)(gen_frame + 0x390)) = *(float *)((int)pvVar21 + 0x16f0);
    (*(float *)(gen_frame + 0x394)) = *(float *)((int)pvVar21 + 0x1700);
    (*(float *)(gen_frame + 0x398)) = *(float *)((int)pvVar21 + 0x1710);
    puVar13 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xa0)),(uint)((undefined1 *)(gen_frame + 0x260)),(uint)&(*(int * PTR32 *)(gen_frame + 0x400)));
    puVar22 = ((undefined4 *)(gen_frame + 0x1a0));
    for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
      *puVar22 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar13 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x120)),(uint)((undefined4 *)(gen_frame + 0x1a0)),(uint)&(*(int * PTR32 *)(gen_frame + 0x320)));
    puVar22 = ((undefined4 *)(gen_frame + 0x1e0));
    for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
      *puVar22 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar13 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xe0)),(uint)((undefined4 *)(gen_frame + 0x1e0)),(uint)((undefined1 *)(gen_frame + 0x220)));
    puVar22 = ((undefined4 *)(gen_frame + 0x160));
    for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
      *puVar22 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar13 = (undefined4 *)F_004ef350(&(*(float *)(gen_frame + 0x3c0)),(uint)((undefined4 *)(gen_frame + 0x160)),(uint)((undefined4 *)(gen_frame + 0x360)));
    piVar16 = (*(int * PTR32 *)(gen_frame + 0x68));
    puVar22 = ((undefined4 *)(gen_frame + 0x2e0));
    for (iVar18 = 0x10; iVar18 != 0; iVar18 = iVar18 + -1) {
      *puVar22 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar22 = puVar22 + 1;
    }
    pvVar21 = *(undefined * PTR32 *)(*(int * PTR32 *)(gen_frame + 0x68))[1];
    uVar12 = F_0067d2b0(pvVar21,"cFilter");
    if (-1 < (int)uVar12) {
      F_006793b0(pvVar21,uVar12,((undefined4 *)(gen_frame + 0x2e0)),0x40);
    }
    piVar16[6] = (int)REFG(float, 0x1087f04);
    F_0067a0f0(piVar16);
    pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  }
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 1 & 1) == 0) {
    pvVar20 = (undefined *)((int)pvVar21 + 0x14);
  }
  else {
    fVar26 = (float10)*(*(int * PTR32 *)(gen_frame + 0x1c));
    if (*(*(int * PTR32 *)(gen_frame + 0x1c)) < 0) {
      fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    iVar18 = (*(int * PTR32 *)(gen_frame + 0x1c))[1];
    (*(int * PTR32 *)(gen_frame + 0x430)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / fVar26))));
    fVar26 = (float10)(*(int * PTR32 *)(gen_frame + 0x1c))[1];
    if (iVar18 < 0) {
      fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    pvVar20 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x178) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x438)) = *(int * PTR32 *)((int)pvVar21 + 0x153c);
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)pvVar21 + 0x1540))));
    (*(int * PTR32 *)(gen_frame + 0x434)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / fVar26))));
    uVar12 = F_0067d2b0(pvVar20,"cFxaaParam");
    if (-1 < (int)uVar12) {
      F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
    }
    pvVar20 = (undefined *)((int)pvVar21 + 0x174);
  }
  *(int * PTR32 *)((int)pvVar20 + 0x18) = GEN_FLT_TO(*(int * PTR32 *)((int)pvVar20 + 0x18), REFG(float, 0x1087f04));
  F_0067a0f0(pvVar20);
  piVar16 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x38)));
  (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10addc0)));
  (*(int * PTR32 *)(gen_frame + 0x68)) = piVar16;
  uVar12 = F_0067d2b0(piVar16,"cAlphaThreshold");
  if (-1 < (int)uVar12) {
    F_006793b0((*(int * PTR32 *)(gen_frame + 0x68)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x9c)),4);
  }
  *(int * PTR32 *)((int)pvVar21 + 0x4c) = GEN_FLT_TO(*(int * PTR32 *)((int)pvVar21 + 0x4c), REFG(float, 0x1087f04));
  uVar12 = F_0067a0f0((undefined *)((int)pvVar21 + 0x34));
  if ((*(byte *)((int)pvVar21 + 0x1516) & 1) != 0) {
    piVar16 = *(int * PTR32 *)((int)pvVar21 + 0x1714);
    iVar18 = *(*(int * PTR32 *)(gen_frame + 0x1c));
    (*(int * PTR32 *)(gen_frame + 0x68)) = piVar16;
    fVar26 = (float10)*(*(int * PTR32 *)(gen_frame + 0x1c));
    if (iVar18 < 0) {
      fVar26 = fVar26 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    piVar14 = (int *)(*(int * PTR32 *)(gen_frame + 0x1c))[1];
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    fVar23 = (float10)(int)piVar14;
    if ((int)piVar14 < 0) {
      fVar23 = fVar23 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(int * PTR32 *)(gen_frame + 0x9c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar26 / fVar23))));
    fVar24 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)));
    piVar16 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar24 + ((float10)1 - fVar24) * (float10)(float)(fVar26 / fVar23)))))));
    (*(int * PTR32 *)(gen_frame + 0x98)) = piVar16;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16))) + (float10)1))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)))))))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    piVar7 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)pvVar21 + 0x2d8)));
    (*(int * PTR32 *)(gen_frame + 0x428)) = *(int * PTR32 *)((int)pvVar21 + 0x1718);
    (*(int * PTR32 *)(gen_frame + 0x42c)) = *(int * PTR32 *)((int)pvVar21 + 0x171c);
    (*(int * PTR32 *)(gen_frame + 0x430)) = *(int * PTR32 *)((int)pvVar21 + 0x1720);
    (*(int * PTR32 *)(gen_frame + 0x434)) = *(int * PTR32 *)((int)pvVar21 + 0x1724);
    (*(int * PTR32 *)(gen_frame + 0x438)) = *(int * PTR32 *)((int)pvVar21 + 0x1728);
    (*(int * PTR32 *)(gen_frame + 0x43c)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8)));
    piVar14 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14)))))));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar14;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x420)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar14))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar16)))))));
    (*(int * PTR32 *)(gen_frame + 0x424)) = piVar14;
    uVar12 = F_0067d2b0(piVar7,"cVignettingParam");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x420)),0x20);
    }
    piVar16 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar21 + 0x2d8) + 4)));
    (*(int * PTR32 *)(gen_frame + 0x9c)) = piVar16;
    uVar12 = F_0067d2b0(piVar16,"cAlphaThreshold");
    if (-1 < (int)uVar12) {
      F_006793b0((*(int * PTR32 *)(gen_frame + 0x9c)),uVar12,&(*(int * PTR32 *)(gen_frame + 0x68)),4);
    }
    *(int * PTR32 *)((int)pvVar21 + 0x2ec) = GEN_FLT_TO(*(int * PTR32 *)((int)pvVar21 + 0x2ec), REFG(float, 0x1087f04));
    uVar12 = F_0067a0f0((undefined *)((int)pvVar21 + 0x2d4));
  }
  if (REFG(char, 0x1322818) != '\0') {
    uVar12 = F_006835d0(pvVar21);
  }
  if ((*(uint *)((int)pvVar21 + 0x1514) >> 0x11 & 1) != 0) {
    uVar12 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8);
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) = 0xffffffff;
    (*(int * PTR32 *)(gen_frame + 0x9c)) = (int *)(uVar12 >> 0x1b);
    puVar13 = *(undefined4 * PTR32 *)((int)pvVar21 + 0xf8);
    (*(int * PTR32 *)(gen_frame + 0x430)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x434)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x438)) = (int *)0x0;
    pvVar20 = (undefined *)*puVar13;
    (*(int * PTR32 *)(gen_frame + 0x43c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)pvVar21 + 0x1660))));
    uVar12 = F_0067d2b0(pvVar20,"cToneMapParam");
    if (-1 < (int)uVar12) {
      F_006793b0(pvVar20,uVar12,&(*(int * PTR32 *)(gen_frame + 0x430)),0x10);
    }
    *(int * PTR32 *)((int)pvVar21 + 0x10c) = GEN_FLT_TO(*(int * PTR32 *)((int)pvVar21 + 0x10c), REFG(float, 0x1087f04));
    F_0067a0f0((undefined *)((int)pvVar21 + 0xf4));
    uVar12 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x9c))) << 0x1b;
    *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 8) & 0x7ffffff | uVar12;
  }
LAB_006874a5: ;
  F_00c47745((*(uint *)(gen_frame + 0x44c)) ^ (uint)(uint)(gen_frame + 0x450));
  return uVar12;
}

/* ref: FUN_006874c0 */
unsigned int F_006874c0(void)
{
  GEN_ENTER(0x6874c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006874e0 */
uint F_006874e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6874e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00687b60((undefined *)((int)this + -0x50),param_1);
  return uVar1;
}

/* ref: FUN_006874f0 */
uint F_006874f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6874f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00687520 */
float F_00687520(unsigned int gen_a0)
{
  GEN_ENTER(0x687520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) *
                                      (float10)*(float *)((int)this + 0xc) +
                                     ((float10)*(float *)((int)this + 8) *
                                      (float10)*(float *)((int)this + 8) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4)))))))));
}

/* ref: FUN_00687560 */
uint F_00687560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x687560u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  param_1[3] = (float)((float10)param_2[3] - (float10)param_3[3]);
  return (uint)param_1;
}

/* ref: FUN_00687590 */
uint F_00687590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x687590u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
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
uint F_00687600(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x687600u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
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
unsigned int F_00687660(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x687660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
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
unsigned int F_006876d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6876d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
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
unsigned int F_00687740(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x687740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  F_00687660(in_ecx,param_2);
  return 0;
}

/* ref: FUN_00687760 */
unsigned int F_00687760(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x687760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  F_006876d0(in_ecx,param_2);
  return 0;
}

/* ref: FUN_00687780 */
byte F_00687780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x687780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x1c) == 0) {
    return 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1c))))
                    (*(int * PTR32 *)((int)this + 0x1c),param_1,param_2,0);
  if (uVar1 != 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x18) == 3) {
    *param_1 = (*param_1 * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
  }
  return 1;
}

/* ref: FUN_006877f0 */
uint F_006877f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6877f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 4) {
    return *(uint *)(in_ecx + 0xa4 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00687810 */
uint F_00687810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 3) {
    return *(uint *)(in_ecx + 0xb4 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00687830 */
uint F_00687830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 200 + param_2 * 4);
}

/* ref: FUN_00687850 */
uint F_00687850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 4 + 0x110) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x150) = param_3;
  return param_1;
}

/* ref: FUN_00687870 */
uint F_00687870(unsigned int gen_a0)
{
  GEN_ENTER(0x687870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (param_1 + -1) * 0x10 + 0x38;
}

/* ref: FUN_006878c0 */
uint F_006878c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6878c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x10ac578) + param_1 * 4);
}

/* ref: FUN_006878e0 */
uint F_006878e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6878e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf4 */
uint F_00687940(unsigned int gen_a0)
{
  GEN_ENTER(0x687940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = (int)(char)this[0x44];
  if ((((iVar1 != -1) && (*(int *)(REFG(int, 0x148809c) + 8 + iVar1 * 4) != 0)) &&
      (*((int *)GEN_TOP((*(int *)(REFG(int, 0x148809c) + 8 + iVar1 * 4) + 0x98))) != 0)) &&
     (((((byte)this[0x48] & 8) != 0 && (this[0x42] != (undefined1)0x0)) &&
      (*(int *)(this + 0x18) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00687980 */
uint F_00687980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 4)));
}

/* ref: FUN_00687990 */
unsigned int F_00687990(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x687990u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_006879b0 */
unsigned int F_006879b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6879b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x18) = param_1;
  return 0;
}

/* ref: FUN_006879e0 */
unsigned int F_006879e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6879e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x1c) = param_1;
  return 0;
}

/* ref: FUN_00687a30 */
uint F_00687a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x687a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *((undefined1 *)GEN_TOP(((param_1 & 1) + 0x2a + (int)this))) = (undefined1)param_2;
  return param_1 & 1;
}

/* ref: Singleton_VPostEffectManager_PostEffect_Graphics_Client_Graphics::vf0 */
uint F_00687a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10adc40));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00687a90 */
uint F_00687a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return *(uint *)(in_ecx + 0x14);
  }
  return *((uint *)GEN_TOP((in_ecx + 0x50 + (param_2 - 1U & 1) * 4)));
}

/* ref: FUN_00687ab0 */
byte F_00687ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x687ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x81) = 1;
  return 1;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf4 */
uint F_00687ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x687ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = (int)(char)this[0x44];
  if ((((iVar1 != -1) && (*(int *)(REFG(int, 0x148809c) + 8 + iVar1 * 4) != 0)) &&
      (*((int *)GEN_TOP((*(int *)(REFG(int, 0x148809c) + 8 + iVar1 * 4) + 0x98))) != 0)) &&
     (((byte)this[0x48] & 8) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::PostEffect::PostEffectShader::vf0 */
uint F_00687b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectRepeatShader::vf0 */
uint F_00687b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectAdaptLumShader::vf0 */
uint F_00687b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
  *(undefined * PTR32 * PTR32 *)(this + 0x50) = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
  *(undefined * PTR32 * PTR32 *)(this + 0x80) = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  F_004d6680(this + 0x50);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectStarShader::vf0 */
uint F_00687ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectDofCocShader::vf0 */
uint F_00687be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectCameraVelocityShader::vf0 */
uint F_00687c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMoonShader::vf0 */
uint F_00687c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectChain::vf0 */
uint F_00687c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc28));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectLensFlare::vf0 */
uint F_00687ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc30));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectRoofQuery::vf0 */
uint F_00687ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10adc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00687d20 */
uint F_00687d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x687d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006884f0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00687d30 */
unsigned int F_00687d30(void)
{
  GEN_ENTER(0x687d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00687d40 */
uint F_00687d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  this_00 = (undefined *)F_00406b90(0x150,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677890(this_00);
  }
  *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00687e00 */
uint F_00687e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0xd4,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    F_004d6630(puVar2 + 0x14);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adc0c));
    puVar2[0x14] = (*(undefined * PTR32 (*)[5])REFP(0x10adbf4));
    F_00677380(puVar2 + 0x20);
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
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00687f00 */
uint F_00687f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  this_00 = (undefined *)F_00406b90(0x148,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677bb0(this_00);
  }
  *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00687fc0 */
uint F_00687fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x687fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0x70,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10adce8));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688090 */
uint F_00688090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0x54,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add3c));
    puVar2[0x14] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688160 */
uint F_00688160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0x88,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add04));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688240 */
uint F_00688240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add20));
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688310 */
uint F_00688310(unsigned int gen_a0)
{
  GEN_ENTER(0x688310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0x1738) = 0;
  *(uint *)(in_ecx + 0x34c) = *(uint *)(in_ecx + 0x34c) | 1;
  return 1;
}

/* ref: FUN_00688330 */
uint F_00688330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  this_00 = (undefined *)F_00406b90(0x50,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00677380(this_00);
  }
  *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = uVar3;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: Client::Graphics::PostEffect::PostEffectSystem::vf0 */
uint F_006883f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6883f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  REFG(undefined4, 0x148809c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectMeasureLumShader::vf0 */
uint F_00688420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pPVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adcb0));
  pPVar1 = this + 0x150;
  iVar2 = 2;
  do {
    pPVar1 = pPVar1 + -0x50;
    iVar2 = iVar2 + -1;
    *(undefined * PTR32 * PTR32 *)pPVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectBloomShader::vf0 */
uint F_00688470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pPVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adccc));
  pPVar1 = this + 0x148;
  iVar2 = 2;
  do {
    pPVar1 = pPVar1 + -0x50;
    iVar2 = iVar2 + -1;
    *(undefined * PTR32 * PTR32 *)pPVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectFogShader::vf0 */
uint F_006884c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6884c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10adbd8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::PostEffect::PostEffectManager::vf0 */
uint F_006884f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6884f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00678260(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00688520 */
uint F_00688520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined4 *)F_00406b90(0x9c,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    F_00677380(puVar2);
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x10add90));
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = puVar2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2,param_3);
    if (((char)uVar3 == '\0') && (*((int *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) != 0)) {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4))) = 0;
    }
  }
  *(uint *)((int)this + 0x1c) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x1c) | 0 << ((byte)param_1 & 0x1f);
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 4)));
}

/* ref: FUN_00688600 */
uint F_00688600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this,8);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 10;
    puVar1[1] = param_1;
    uVar2 = F_004d4810(this,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00688630 */
uint F_00688630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this,0xc);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xc;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    uVar2 = F_004d4810(this,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00688660 */
uint F_00688660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00688330(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00688670 */
uint F_00688670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x2c)));
  puVar2 = (undefined4 *)(iVar1 + param_1 * 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x14 + param_1 * 0x1c)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_006886a0 */
uint F_006886a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6886a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x2c)));
  puVar2 = (undefined4 *)(iVar1 + param_1 * 0x1c);
  if (0xf < *(uint *)(iVar1 + 0x14 + param_1 * 0x1c)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_006886d0 */
uint F_006886d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6886d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x20) == this)) {
    *(uint *)(iVar1 + 0x20) =
         -(uint)(*(undefined * PTR32 *)((int)this + 0x1c) != this) & (uint)*(undefined * PTR32 *)((int)this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x18))) = *(undefined4 *)((int)this + 0x18);
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)(uVar2 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined * PTR32 *)((int)this + 0x18) = this;
  *(undefined * PTR32 *)((int)this + 0x1c) = this;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Scene::Object::vf4 */
unsigned int F_00688710(void)
{
  GEN_ENTER(0x688710u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::Object::vf5 */
unsigned int F_00688720(void)
{
  GEN_ENTER(0x688720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf2 */
uint F_00688730(void)
{
  GEN_ENTER(0x688730u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688740 */
uint F_00688740(unsigned int gen_a0)
{
  GEN_ENTER(0x688740u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x10))((int *)*param_1);
  return uVar1;
}

/* ref: FUN_00688760 */
uint F_00688760(unsigned int gen_a0)
{
  GEN_ENTER(0x688760u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Camera::vf2 */
uint F_00688780(void)
{
  GEN_ENTER(0x688780u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688790 */
byte F_00688790(void)
{
  GEN_ENTER(0x688790u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf7 */
uint F_006887a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6887a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  return uVar1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf16 */
uint F_006887b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6887b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf19 */
uint F_006887d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6887d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf20 */
byte F_006887f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6887f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf30 */
uint F_00688800(void)
{
  GEN_ENTER(0x688800u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf31 */
unsigned int F_00688810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00688870 */
float10 F_00688870(float gen_a0)
{
  GEN_ENTER(0x688870u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00688890 */
float10 F_00688890(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x688890u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1))));
}

/* ref: Client::Graphics::Scene::CharacterUtility::vf1 */
unsigned int F_00688910(unsigned int gen_a0)
{
  GEN_ENTER(0x688910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa8) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xa4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa4) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0;
}

/* ref: FUN_00688990 */
uint F_00688990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  
  *param_1 = REFG(undefined4, 0x10f04d4);
  param_1[1] = REFG(undefined4, 0x10f04d8);
  param_1[2] = REFG(undefined4, 0x10f04dc);
  uVar1 = *(ushort *)(param_2 + 4);
  if ((4 < uVar1) && ((uVar1 < 9 || (uVar1 == 10)))) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
  }
  return (uint)param_1;
}

/* ref: FUN_006889d0 */
uint F_006889d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6889d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * this_00;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x28);
    break;
  case 2: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
    break;
  case 3: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x30);
    break;
  case 4: ;
    this_00 = *(undefined * PTR32 *)((int)this + 0x34);
    break;
  default: ;
    goto switchD_006889dc_default;
  }
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00503570(this_00,param_1,param_3);
    return uVar1;
  }
switchD_006889dc_default: ;
  return 0xffff;
}

/* ref: FUN_00688a30 */
byte F_00688a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b51e00(*(undefined * PTR32 *)((int)this + 0x10),param_1);
  return bVar1;
}

/* ref: FUN_00688a40 */
uint F_00688a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b51c10(*(undefined * PTR32 *)((int)this + 0x14),param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688a60 */
uint F_00688a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b51c10(*(undefined * PTR32 *)((int)this + 0x18),param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688a80 */
uint F_00688a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b51c10(*(undefined * PTR32 *)((int)this + 0x1c),param_2);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_00688ad0 */
uint F_00688ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x688ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
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
uint F_00688b20(void)
{
  GEN_ENTER(0x688b20u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: CPane::GetBorders */
uint F_00688b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0x120);
  param_1[1] = *(undefined4 *)(this + 0x124);
  uVar1 = *(undefined4 *)(this + 300);
  param_1[2] = *(undefined4 *)(this + 0x128);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf13 */
uint F_00688b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  if ((*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) || (*(ushort *)(this + 0x11c) == 0xffff)) {
    puVar3 = &REFG(float, 0x1302d00);
  }
  else {
    uVar1 = F_0064ce50(*(undefined * PTR32 *)(this + 0x78),((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0x11c));
    uVar2 = F_00623320(*(undefined * PTR32 *)(this + 0x78),(uint)*(ushort *)(this + 0x11c));
    F_004ef350(((undefined4 *)(gen_frame + 0x40)),uVar2,uVar1);
    puVar3 = ((undefined4 *)(gen_frame + 0x40));
  }
  F_005fec10(param_1,puVar3,this + 0x140);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf16 */
uint F_00688c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    puVar2 = &REFG(float, 0x1302d00);
    puVar3 = param_1;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return (uint)param_1;
  }
  F_006558a0(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf20 */
byte F_00688c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    return 0;
  }
  bVar1 = F_00623360(*(undefined * PTR32 *)(this + 0x78),param_1);
  return bVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf23 */
uint F_00688c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x270) = *param_1;
  *(undefined4 *)(this + 0x274) = param_1[1];
  *(undefined4 *)(this + 0x278) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x27c) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf24 */
uint F_00688ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x280) = *param_1;
  *(undefined4 *)(this + 0x284) = param_1[1];
  *(undefined4 *)(this + 0x288) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x28c) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf25 */
uint F_00688cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x688cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x280;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf26 */
unsigned int F_00688ce0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x688ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x298) = param_2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf27 */
float10 F_00688d00(unsigned int gen_a0)
{
  GEN_ENTER(0x688d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x298);
}

/* ref: Client::Graphics::Scene::CharacterBase::vf28 */
uint F_00688d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x29c) = param_2;
  return param_2;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf29 */
uint F_00688d20(unsigned int gen_a0)
{
  GEN_ENTER(0x688d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x29c);
}

/* ref: Client::Graphics::Scene::CharacterBase::vf51 */
uint F_00688d30(void)
{
  GEN_ENTER(0x688d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00688d50 */
uint F_00688d50(unsigned int gen_a0)
{
  GEN_ENTER(0x688d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78),1);
  }
  F_009f54d0((undefined *)((int)this + 0x4a0),*(undefined4 *)((int)this + 0x414),1,0);
  uVar1 = 0;
  if (*(int *)((int)this + 0x414) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x414),0,0);
    *(undefined4 *)((int)this + 0x414) = 0;
  }
  return uVar1;
}

/* ref: FUN_00688da0 */
unsigned int F_00688da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x688da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(int *)((int)this + 0x78) != 0) {
    F_00b825e0((undefined *)((int)this + 0x700),param_3,param_1,param_2);
    F_0063a2f0(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00688de0 */
uint F_00688de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x78) == 0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
  uVar3 = 0;
  if (uVar2 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      bVar1 = F_009f30c0(this_00,param_1);
      if (bVar1 != 0) {
        uVar2 = F_009f55b0((undefined *)(uVar3 * 0x88 + 0x418 + (int)this),param_1);
        return uVar2;
      }
      uVar3 = uVar3 + 1;
      this_00 = (undefined *)((int)this_00 + 0x88);
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00688e60 */
unsigned int F_00688e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0064d630(*(undefined * PTR32 *)((int)this + 0x78),param_2,param_1);
  }
  return 0;
}

/* ref: FUN_00688e80 */
uint F_00688e80(unsigned int gen_a0)
{
  GEN_ENTER(0x688e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_006233a0(*(int *)(in_ecx + 0x78));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00688e90 */
uint F_00688e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0061efe0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00688eb0 */
uint F_00688eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_006233d0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00688ed0 */
unsigned int F_00688ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f000(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00688ef0 */
float F_00688ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    fVar1 = F_006233b0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return fVar1;
  }
  return (float)(float10)0;
}

/* ref: FUN_00688f10 */
uint F_00688f10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688f10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    in_EAX = F_0061efc0(*(int *)(param_1 + 0x78),param_2,param_3);
  }
  return in_EAX;
}

/* ref: FUN_00688f30 */
float F_00688f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x688f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float10 fVar1;
  
  if (*(int *)((int)this + 0x78) != 0) {
    fVar1 = F_00623400(*(int *)((int)this + 0x78),param_1);
    return (float)fVar1;
  }
  return (float)(float10)0;
}

/* ref: FUN_00688f50 */
uint F_00688f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f100(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00688fa0 */
uint F_00688fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f0b0(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00688ff0 */
uint F_00688ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x688ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f150(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00689040 */
uint F_00689040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f1a0(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00689090 */
uint F_00689090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f1f0(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_006890d0 */
uint F_006890d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6890d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f230(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00689110 */
uint F_00689110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f020(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
    return (uint)param_1;
  }
  *param_1 = (undefined4)REFG(float, 0x1375ad0);
  param_1[1] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  param_1[2] = (undefined4)REFG(float, 0x1375ad8);
  param_1[3] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  return (uint)param_1;
}

/* ref: FUN_00689160 */
unsigned int F_00689160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061f270(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2,param_3);
    return 0;
  }
  return 0;
}

/* ref: FUN_00689180 */
uint F_00689180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0061f070(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_006891a0 */
uint F_006891a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6891a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_0061f090(*(int *)(in_ecx + 0x78),param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006891c0 */
uint F_006891c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6891c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x80);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
      if (this_00 != (undefined *)0x0) {
        in_EAX = F_009bc310(this_00,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return in_EAX;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf63 */
byte F_00689200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf64 */
uint F_00689210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf87 */
unsigned int F_00689220(unsigned int gen_a0)
{
  GEN_ENTER(0x689220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0x1e;
  if (*(int *)(this + 0x2d8) != 0) {
    uVar2 = F_0061f4f0(*(int *)(this + 0x2d8));
    local_8 = uVar2 + 0x1a;
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar1 = *(int *)(this + 0x7c);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
      if (this_00 != (undefined *)0x0) {
        F_006583e0(this_00,local_8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00689270 */
float F_00689270(void)
{
  GEN_ENTER(0x689270u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x10b2a34);
}

/* ref: FUN_00689280 */
unsigned int F_00689280(unsigned int gen_a0)
{
  GEN_ENTER(0x689280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x160) != (undefined *)0x0) {
    F_0061e400(*(undefined * PTR32 *)((int)this + 0x160));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x160);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x160) = 0;
    }
  }
  return 0;
}

/* ref: FUN_006892b0 */
byte F_006892b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6892b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  undefined * this_00;
  
  in_ecx = F_00406b90(8,0,0);
  if (in_ecx == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_006207f0(in_ecx);
  }
  *(undefined * PTR32 *)((int)this + 0x164) = this_00;
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  bVar1 = F_00632400(this_00);
  return bVar1 != 0;
}

/* ref: FUN_006892f0 */
unsigned int F_006892f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6892f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x164) != (undefined *)0x0) {
    F_00620800(*(undefined * PTR32 *)((int)this + 0x164));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x164);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x164) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00689350 */
unsigned int F_00689350(unsigned int gen_a0)
{
  GEN_ENTER(0x689350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00689380 */
unsigned int F_00689380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x80);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar3 * 4);
      if (this_00 != (undefined *)0x0) {
        F_009bc1e0(this_00,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf83 */
uint F_006893c0(void)
{
  GEN_ENTER(0x6893c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf84 */
uint F_006893d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6893d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf88 */
byte F_006893e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6893e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf89 */
unsigned int F_006893f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6893f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf90 */
unsigned int F_00689400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00689410 */
byte F_00689410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf32 */
unsigned int F_00689420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf33 */
unsigned int F_00689430(void)
{
  GEN_ENTER(0x689430u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf34 */
uint F_00689440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 0x714) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
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
  uVar1 = F_00b82430(this + 0x700,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf36 */
byte F_006894c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6894c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x78) != 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf37 */
uint F_006894d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6894d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b82530(in_ecx + 0x700);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf38 */
uint F_006894e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6894e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00b825e0(this + 0x700,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf39 */
uint F_006894f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6894f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b82190(param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf40 */
unsigned int F_00689500(unsigned int gen_a0)
{
  GEN_ENTER(0x689500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b821d0(this + 0x700);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf41 */
uint F_00689510(unsigned int gen_a0)
{
  GEN_ENTER(0x689510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b82200(in_ecx + 0x700);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf42 */
uint F_00689520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b82240(this + 0x700,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf43 */
uint F_00689530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00b82390(this + 0x700,param_1,param_2,param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf44 */
float F_00689560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_00b823f0(this + 0x700,param_1,param_2);
  return fVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf45 */
unsigned int F_00689570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
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
  F_0061f2d0(*(undefined * PTR32 *)(this + 0x78),*(undefined4 *)(this + 0x6f0),*(undefined4 *)(this + 0x6f4));
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf46 */
uint F_006895d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6895d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  longlong lVar1;
  
  lVar1 = ((ulonglong)(((ulonglong)(byte)*param_1 < 0x40) ? ((1L << (ulonglong)(byte)*param_1)) : 0));
  if (((uint)lVar1 & *(uint *)(this + 0x6f0)) != 0 ||
      ((uint)((ulonglong)lVar1 >> 0x20) & *(uint *)(this + 0x6f4)) != 0) {
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf47 */
uint F_00689610(unsigned int gen_a0)
{
  GEN_ENTER(0x689610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(uint *)(this + 0x6f0);
}

/* ref: Client::Graphics::Scene::CharacterBase::vf48 */
uint F_00689620(unsigned int gen_a0)
{
  GEN_ENTER(0x689620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x78);
}

/* ref: Client::Graphics::Scene::CharacterBase::vf30 */
uint F_00689630(unsigned int gen_a0)
{
  GEN_ENTER(0x689630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2d8);
}

/* ref: Client::Graphics::Scene::Human::vf50 */
uint F_00689650(void)
{
  GEN_ENTER(0x689650u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Human::vf58 */
unsigned int F_00689660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
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
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf64 */
uint F_006896c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6896c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (9 < param_2) {
    return 0;
  }
  return (uint)(*(ushort *)(in_ecx + 0x782 + param_2 * 6) >> 10);
}

/* ref: Client::Graphics::Scene::Human::vf65 */
uint F_006896f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6896f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/human/c%04d",(uint)*(ushort *)(this + 0x778));
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf71 */
uint F_00689720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/human/c%04d/animation/%s/timeline/%s.tmb",
             (uint)*(ushort *)(this + 0x778),"dummy",param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf79 */
uint F_00689760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/base/b%04d/eid_c%04db%04d.eid",
             (uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x778),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf90 */
unsigned int F_00689790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x7f8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(this + 0x7f8) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf83 */
uint F_006897d0(void)
{
  GEN_ENTER(0x6897d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_006897e0 */
uint F_006897e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6897e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
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
ushort F_00689950(unsigned int gen_a0)
{
  GEN_ENTER(0x689950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
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
ushort F_006899f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6899f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
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
uint F_00689a40(unsigned int gen_a0)
{
  GEN_ENTER(0x689a40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
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
ushort F_00689ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x689ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
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
byte F_00689b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  uint uVar1;
  short * psVar2;
  
  if (*(short *)((int)this + 0x748) != *param_1) {
    return 0;
  }
  uVar1 = 0;
  psVar2 = param_1;
  do {
    psVar2 = psVar2 + 2;
    ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,uVar1,psVar2);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return 1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf50 */
uint F_00689bc0(void)
{
  GEN_ENTER(0x689bc0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Graphics::Scene::Demihuman::vf54 */
unsigned int F_00689bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf58 */
unsigned int F_00689be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
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
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf64 */
uint F_00689c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (4 < param_2) {
    return 0;
  }
  return (uint)(*(ushort *)(in_ecx + 0x74c + param_2 * 6) >> 10);
}

/* ref: Client::Graphics::Scene::Demihuman::vf65 */
uint F_00689c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d",(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf66 */
uint F_00689ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b0001/skl_d%04db0001.sklb",
             (uint)*(ushort *)(this + 0x748),(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf68 */
uint F_00689cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x120))(this);
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
uint F_00689d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b0001/phy_d%04db0001.phyb",
             (uint)*(ushort *)(this + 0x748),(uint)*(ushort *)(this + 0x748));
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf73 */
uint F_00689d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x689d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/animation/s%04d/%s/material.pap",
             (uint)*(ushort *)(this + 0x748),param_4,(&REFG(undefined * PTR32, 0x1322a30))[(int)(param_3)]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf70 */
uint F_00689da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x689da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (param_3 != 1) {
    F_00c472af(param_1,param_2,"chara/demihuman/d%04d/animation/%s/pap/%s.pap",
               (uint)*(ushort *)(this + 0x748),param_4,param_4);
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/animation/f0000/%s.pap",
             (uint)*(ushort *)(this + 0x748),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf71 */
uint F_00689e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/animation/%s/timeline/%s.tmb",
             (uint)*(ushort *)(this + 0x748),"dummy",param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf79 */
uint F_00689e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/skeleton/base/b%04d/eid_d%04db%04d.eid",
             (uint)*(ushort *)(this + 0x748),1,(uint)*(ushort *)(this + 0x748),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf90 */
unsigned int F_00689e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x689e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x780);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(this + 0x780) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf83 */
uint F_00689eb0(void)
{
  GEN_ENTER(0x689eb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Weapon::vf50 */
uint F_00689ec0(void)
{
  GEN_ENTER(0x689ec0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Client::Graphics::Scene::Weapon::vf51 */
uint F_00689ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x689ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(ushort *)(in_ecx + 0x73c) >> 10);
}

/* ref: Client::Graphics::Scene::Weapon::vf58 */
uint F_00689ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
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
uint F_00689f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x689f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d",(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf66 */
uint F_00689f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/skeleton/base/b0001/skl_w%04db0001.sklb",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf68 */
uint F_00689f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf69 */
uint F_00689fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf67 */
uint F_00689fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x689fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/model/w%04db%04d.mdl",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf70 */
uint F_00689ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x689ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/animation/%s/pap/%s.pap",
             (uint)*(ushort *)(this + 0x730),param_4,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf71 */
uint F_0068a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/animation/%s/timeline/%s.tmb",
             (uint)*(ushort *)(this + 0x730),"dummy",param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf75 */
uint F_0068a060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/b%04d.imc",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf76 */
uint F_0068a0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 WVar1;
  char * pcVar2;
  char * pcVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  WVar1 = this[0x73a];
  if (WVar1 == (undefined1)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
    return 0;
  }
  if (*(short *)(this + 0x736) != 0) {
    F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/material/v%04d/staining/%s",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1,
               param_4);
    pcVar2 = param_1;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3[-5] = '\0';
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x10,"_s%04d.mtrl",(uint)*(ushort *)(this + 0x736));
    F_00c473c8(param_1,param_2,((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return (uint)param_1;
  }
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/material/v%04d/%s",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1,
             param_4);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf77 */
uint F_0068a190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (this[0x73b] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",
             (uint)(byte)this[0x73b]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf78 */
uint F_0068a1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 WVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  WVar1 = this[0x73e];
  if (WVar1 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)WVar1 < 100) {
    puVar2 = (undefined4 *)F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,0);
    *param_4 = *puVar2;
    F_00c472af(param_1,param_2,"chara/weapon/w%04d/obj/body/b%04d/vfx/eff/vw%04d.avfx",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)WVar1);
    return param_1;
  }
  puVar2 = (undefined4 *)F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),8,0);
  *param_4 = *puVar2;
  F_00c472af(param_1,param_2,"vfx/weapon/eff/vw%04d.avfx",(uint)(byte)WVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf79 */
uint F_0068a270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68a270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/skeleton/base/b%04d/eid_w%04db%04d.eid",
             (uint)*(ushort *)(this + 0x730),1,(uint)*(ushort *)(this + 0x730),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Weapon::vf90 */
unsigned int F_0068a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x744);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(this + 0x744) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf83 */
uint F_0068a2e0(void)
{
  GEN_ENTER(0x68a2e0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Graphics::Scene::Weapon::vf73 */
uint F_0068a2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c472af(param_1,param_2,"chara/weapon/w%04d/animation/s%04d/body/material.pap",
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf50 */
uint F_0068a320(void)
{
  GEN_ENTER(0x68a320u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Client::Graphics::Scene::Monster::vf58 */
uint F_0068a330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68a330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
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
uint F_0068a380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68a380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/monster/m%04d",(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf66 */
uint F_0068a3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/skl_m%04db0001.sklb",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf68 */
uint F_0068a3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x120))(this);
  if ((char)uVar1 != '\0') {
    F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/skl_m%04db0001.skp",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/skl_m%04db0001.skp",1,1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf69 */
uint F_0068a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b0001/phy_m%04db0001.phyb",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x730));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf67 */
uint F_0068a470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/obj/body/b%04d/model/m%04db%04d.mdl",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf70 */
uint F_0068a4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (param_3 != 1) {
    F_00c472af(param_1,param_2,"chara/monster/m%04d/animation/%s/pap/%s.pap",
               (uint)*(ushort *)(this + 0x730),param_4,param_4);
    return param_1;
  }
  F_00c472af(param_1,param_2,"chara/monster/m%04d/animation/f0000/%s.pap",
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf71 */
uint F_0068a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/animation/%s/timeline/%s.tmb",
             (uint)*(ushort *)(this + 0x730),"dummy",param_3);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf75 */
uint F_0068a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/obj/body/b%04d/b%04d.imc",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),
             (uint)*(ushort *)(this + 0x732));
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf76 */
uint F_0068a590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (this[0x736] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/monster/m%04d/obj/body/b%04d/material/v%04d/%s",
             (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)this[0x736]
             ,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf77 */
uint F_0068a5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68a5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (this[0x737] == (undefined1)0x0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",
             (uint)(byte)this[0x737]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf78 */
uint F_0068a620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 MVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  MVar1 = this[0x73a];
  if (MVar1 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)MVar1 < 100) {
    puVar2 = (undefined4 *)F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,0);
    *param_4 = *puVar2;
    F_00c472af(param_1,param_2,"chara/monster/m%04d/obj/body/b%04d/vfx/eff/vm%04d.avfx",
               (uint)*(ushort *)(this + 0x730),(uint)*(ushort *)(this + 0x732),(uint)(byte)MVar1);
    return param_1;
  }
  puVar2 = (undefined4 *)F_004ff310(&(*(undefined * PTR32 *)(gen_frame + 0x8)),8,0);
  *param_4 = *puVar2;
  F_00c472af(param_1,param_2,"vfx/monster/eff/vm%04d.avfx",(uint)(byte)MVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf79 */
uint F_0068a6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68a6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/skeleton/base/b%04d/eid_m%04db%04d.eid",
             (uint)*(ushort *)(this + 0x730),1,(uint)*(ushort *)(this + 0x730),1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Monster::vf73 */
uint F_0068a6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68a6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00c472af(param_1,param_2,"chara/monster/m%04d/animation/s%04d/body/material.pap",
             (uint)*(ushort *)(this + 0x730),param_4);
  return param_1;
}

/* ref: FUN_0068a720 */
uint F_0068a720(unsigned int gen_a0)
{
  GEN_ENTER(0x68a720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
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
uint F_0068af50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68af50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  F_006aecf0(param_1,((undefined1 *)(gen_frame + 0x0)));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Terrain::vf6 */
unsigned int F_0068af90(void)
{
  GEN_ENTER(0x68af90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068afb0 */
uint F_0068afb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x68afb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  return uVar1;
}

/* ref: FUN_0068afe0 */
float F_0068afe0(void)
{
  GEN_ENTER(0x68afe0u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x10b2a34);
}

/* ref: FUN_0068aff0 */
uint F_0068aff0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68aff0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_0062e310(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0068b010 */
uint F_0068b010(unsigned int gen_a0)
{
  GEN_ENTER(0x68b010u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0062e350(param_1);
  return uVar1;
}

/* ref: FUN_0068b020 */
uint F_0068b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b040 */
unsigned int F_0068b040(void)
{
  GEN_ENTER(0x68b040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b050 */
uint F_0068b050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b070 */
unsigned int F_0068b070(void)
{
  GEN_ENTER(0x68b070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::BGManager::vf2 */
uint F_0068b080(void)
{
  GEN_ENTER(0x68b080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b090 */
uint F_0068b090(unsigned int gen_a0)
{
  GEN_ENTER(0x68b090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 4))))((int)this + 0x70);
  uVar3 = *(uint *)((int)this + 0x224);
  if (uVar3 != 0) {
    uVar5 = 0;
    if (*(int *)((int)this + 0x220) != 0) {
      iVar4 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((iVar4 + *(int *)((int)this + 0x224))));
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0xa0;
      } while (uVar5 < *(uint *)((int)this + 0x220));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x224);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-4] == 0) {
        uVar6 = F_00406b30(puVar2 + -4);
        uVar3 = (uint)uVar6;
      }
      else {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
      }
      *(undefined4 *)((int)this + 0x224) = 0;
    }
  }
  if (*(int *)((int)this + 0x22c) != 0) {
    uVar5 = 0;
    if (*(int *)((int)this + 0x228) != 0) {
      iVar4 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((iVar4 + *(int *)((int)this + 0x22c))));
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x80;
      } while (uVar5 < *(uint *)((int)this + 0x228));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x22c);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-4] != 0) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
        *(undefined4 *)((int)this + 0x22c) = 0;
        return uVar3;
      }
      uVar6 = F_00406b30(puVar2 + -4);
      uVar3 = (uint)uVar6;
      *(undefined4 *)((int)this + 0x22c) = 0;
    }
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf26 */
byte F_0068b1a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b1a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte local_8;
  
  local_8 = (byte)(int)TRUNC((double)param_2 * *(double *)&REFG(undefined, 0x1088100));
  *(byte *)(in_ecx + 0x8a) = local_8;
  return local_8;
}

/* ref: Client::Graphics::Scene::BGObject::vf27 */
float10 F_0068b1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x68b1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(byte *)(in_ecx + 0x8a) / (float10)*(double *)&REFG(undefined, 0x1088100))));
}

/* ref: FUN_0068b210 */
byte F_0068b210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint uVar1;
  float * pfVar2;
  float10 fVar3;
  
  fVar3 = (float10)REFG(double, 0x1088108);
  uVar1 = 0;
  pfVar2 = (float *)(param_1 + 4);
  do {
    if ((~param_2 & 1 << ((byte)uVar1 & 0x1f)) == 0) {
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
unsigned int F_0068b380(void)
{
  GEN_ENTER(0x68b380u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b390 */
unsigned int F_0068b390(void)
{
  GEN_ENTER(0x68b390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3a0 */
unsigned int F_0068b3a0(void)
{
  GEN_ENTER(0x68b3a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3b0 */
unsigned int F_0068b3b0(void)
{
  GEN_ENTER(0x68b3b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b3c0 */
uint F_0068b3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00625bc0(*(undefined4 *)((int)this + 0x70),param_1);
  return uVar1;
}

/* ref: FUN_0068b3d0 */
unsigned int F_0068b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x78) = param_1;
  return 0;
}

/* ref: FUN_0068b400 */
uint F_0068b400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  
  if (param_1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x7c);
  if (piVar1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x7c) = param_1;
  return in_EAX;
}

/* ref: FUN_0068b430 */
unsigned int F_0068b430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x78) = param_1;
  return 0;
}

/* ref: FUN_0068b460 */
unsigned int F_0068b460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x7c) = param_1;
  return 0;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf6 */
unsigned int F_0068b490(void)
{
  GEN_ENTER(0x68b490u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068b4a0 */
byte F_0068b4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x58c);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 0x588);
      do {
        if (*piVar3 == param_1) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < uVar1);
    }
    *((int *)GEN_TOP((*(int *)((int)this + 0x588) + uVar1 * 4))) = param_1;
    *(int *)((int)this + 0x58c) = *(int *)((int)this + 0x58c) + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0068b500 */
byte F_0068b500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = *(uint *)((int)this + 0x58c);
  uVar5 = 0;
  uVar4 = uVar3;
  if (uVar3 != 0) {
    piVar6 = *(int * PTR32 *)((int)this + 0x588);
    do {
      uVar4 = uVar5;
      if (*piVar6 == param_1) break;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
      uVar4 = uVar3;
    } while (uVar5 < uVar3);
  }
  if (uVar4 < uVar3) {
    *(uint *)((int)this + 0x58c) = uVar3 - 1;
    if (uVar4 < uVar3 - 1) {
      do {
        iVar2 = uVar4 * 4;
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + iVar1))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + 4 + iVar2)));
      } while (uVar4 < *(uint *)((int)this + 0x58c));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x588) + *(int *)((int)this + 0x58c) * 4))) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_0068b590 */
byte F_0068b590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = F_0068b500(this,param_1);
    if (bVar1 != 0) {
      bVar1 = F_0068b4a0(this,param_1);
      return bVar1 != 0;
    }
  }
  return 0;
}

/* ref: FUN_0068b5d0 */
uint F_0068b5d0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x68b5d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  *(undefined1 *)(param_1 + 0x1e5) = (undefined1)param_5;
  *(float *)(param_1 + 0x1e8) = param_2;
  *(undefined1 *)(param_1 + 0x1e6) = (undefined1)param_6;
  *(float *)(param_1 + 0x1ec) = param_3;
  F_00983ae0(param_1 + 0x70,param_4);
  return param_4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf50 */
unsigned int F_0068b610(unsigned int gen_a0)
{
  GEN_ENTER(0x68b610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x234) != (undefined *)0x0) {
    F_009bc2a0(*(undefined * PTR32 *)(this + 0x234));
    return 0;
  }
  return 0;
}

/* ref: FUN_0068b620 */
uint F_0068b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  *param_3 = *param_3 & 0x3000000;
  return (uint)param_3;
}

/* ref: FUN_0068b640 */
uint F_0068b640(unsigned int gen_a0)
{
  GEN_ENTER(0x68b640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) & 0xef;
  return param_1;
}

/* ref: FUN_0068b650 */
unsigned int F_0068b650(void)
{
  GEN_ENTER(0x68b650u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::VfxObject::vf16 */
uint F_0068b660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b660u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)(in_ecx + 0x290);
  if (param_3 != 0x2d) {
    puVar2 = (undefined4 *)(in_ecx + 0x250);
  }
  puVar3 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::VfxObject::vf17 */
uint F_0068b690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x0)),param_1);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1 + 0x30;
}

/* ref: Client::Graphics::Scene::VfxObject::vf20 */
byte F_0068b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_0068b6f0 */
uint F_0068b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x234) != (undefined *)0x0) {
    uVar1 = F_009bc350(*(undefined * PTR32 *)((int)this + 0x234),param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_0068b710 */
uint F_0068b710(unsigned int gen_a0)
{
  GEN_ENTER(0x68b710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x234) != (undefined *)0x0) {
    uVar1 = F_009bc2e0(*(undefined * PTR32 *)((int)this + 0x234));
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_0068b730 */
uint F_0068b730(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b730u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | 8;
  *(float *)(param_1 + 0x1f0) = param_2;
  *(undefined4 *)(param_1 + 500) = 0;
  if ((*(undefined * PTR32 *)(param_1 + 0x234) != (undefined *)0x0) && (param_2 <= 0.0)) {
    in_EAX = F_009bc2a0(*(undefined * PTR32 *)(param_1 + 0x234));
  }
  return in_EAX;
}

/* ref: FUN_0068b780 */
unsigned int F_0068b780(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x68b780u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x1f8) = param_2;
  *(float *)(in_ecx + 0x1fc) = param_3;
  *(float *)(in_ecx + 0x200) = param_4;
  *(float *)(in_ecx + 0x204) = param_5;
  return 0;
}

/* ref: FUN_0068b7c0 */
unsigned int F_0068b7c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b7c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x204) = param_2;
  return 0;
}

/* ref: FUN_0068b7e0 */
unsigned int F_0068b7e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b7e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x228) = param_2;
  return 0;
}

/* ref: FUN_0068b800 */
uint F_0068b800(unsigned int gen_a0)
{
  GEN_ENTER(0x68b800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  float fVar2;
  uint in_EAX = 0;
  float fVar3;
  
  if ((*(byte *)((int)this + 0x1e4) & 1) != 0) {
    in_EAX = F_009bc070(*(undefined * PTR32 *)((int)this + 0x234),&(*(char *)(gen_frame + 0x1b)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0xc)),
                          &(*(float *)(gen_frame + 0x8)));
    fVar2 = REFG(float, 0x1087f04);
    fVar3 = *(float *)((int)this + 0x21c);
    if ((*(char *)(gen_frame + 0x1b)) == '\0') {
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x218) <= 0.0)) {
        *(undefined4 *)((int)this + 0x208) = 0;
        fVar3 = fVar2;
      }
      else {
        *(undefined4 *)((int)this + 0x208) = *(undefined4 *)((int)this + 0x218);
      }
      *(float *)((int)this + 0x20c) = fVar3;
      fVar3 = *(float *)((int)this + 0x220);
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x224) <= 0.0)) {
        fVar3 = *(float *)((int)this + 0x228);
        (*(float *)(gen_frame + 0x8)) = fVar3;
        fVar1 = (float10)*(double *)&REFG(undefined, 0x1094818);
        *(float *)((int)this + 0x214) = fVar3;
        *(float *)((int)this + 0x210) = (float)((float10)fVar3 * fVar1);
        return in_EAX;
      }
    }
    else {
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x218) <= 0.0)) {
        *(undefined4 *)((int)this + 0x20c) = (*(undefined4 *)(gen_frame + 0x14));
        *(undefined4 *)((int)this + 0x208) = (*(undefined4 *)(gen_frame + 0x10));
      }
      else {
        *(float *)((int)this + 0x20c) = fVar3;
        *(undefined4 *)((int)this + 0x208) = *(undefined4 *)((int)this + 0x218);
      }
      fVar3 = *(float *)((int)this + 0x220);
      if ((fVar3 <= 0.0) && (*(float *)((int)this + 0x224) <= 0.0)) {
        *(undefined4 *)((int)this + 0x210) = (*(undefined4 *)(gen_frame + 0xc));
        *(float *)((int)this + 0x214) = (*(float *)(gen_frame + 0x8));
        return in_EAX;
      }
    }
    *(float *)((int)this + 0x210) = fVar3;
    *(undefined4 *)((int)this + 0x214) = *(undefined4 *)((int)this + 0x224);
  }
  return in_EAX;
}

/* ref: FUN_0068b950 */
unsigned int F_0068b950(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x22c) = param_2;
  return 0;
}

/* ref: FUN_0068b970 */
unsigned int F_0068b970(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68b970u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x230) = param_2;
  return 0;
}

/* ref: FUN_0068b9a0 */
uint F_0068b9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x68b9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar2 = 0;
  if (*(short *)this != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4)));
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)this);
  }
  if (*(int *)((int)this + 8) == 0) {
    *(undefined2 *)this = 0;
    return 0;
  }
  F_00406b30(*(int *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)this = 0;
  return 0;
}

/* ref: FUN_0068ba30 */
uint F_0068ba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ba30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xe094 + param_2 * 4);
}

/* ref: FUN_0068ba50 */
uint F_0068ba50(unsigned int gen_a0)
{
  GEN_ENTER(0x68ba50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0xe09d);
}

/* ref: FUN_0068ba60 */
uint F_0068ba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ba60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xe0a0) + 4 + param_2 * 0xc)));
}

/* ref: FUN_0068ba80 */
uint F_0068ba80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68ba80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xe0a0) + 8 + param_1 * 0xc))) + param_2 * 4)));
}

/* ref: FUN_0068bad0 */
uint F_0068bad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0068bb00 */
uint F_0068bb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((float10)*(float *)(param_1 + 4) < (float10)*(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0068bb20 */
uint F_0068bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68bb20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)(param_3 * 0xe0c0 + 0x30 + in_ecx);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  return (uint)puVar1;
}

/* ref: FUN_0068bb50 */
uint F_0068bb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xe0c0 + 0x30 + in_ecx;
}

/* ref: FUN_0068bb70 */
uint F_0068bb70(unsigned int gen_a0)
{
  GEN_ENTER(0x68bb70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) * 0xe0c0 + 0x10 + in_ecx;
}

/* ref: FUN_0068bb80 */
uint F_0068bb80(unsigned int gen_a0)
{
  GEN_ENTER(0x68bb80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_0068bb90 */
uint F_0068bb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xe0c0 + 0x10 + in_ecx;
}

/* ref: FUN_0068bbb0 */
uint F_0068bbb0(float gen_a0)
{
  GEN_ENTER(0x68bbb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
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
uint F_0068bc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bc00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xe0f0) = *param_2;
  *(undefined4 *)(in_ecx + 0xe0f4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xe0f8) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::Attach::vf4 */
unsigned int F_0068bc40(unsigned int gen_a0)
{
  GEN_ENTER(0x68bc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x38) != 0) {
    F_0065be20((undefined *)this);
    return 0;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::vf1 */
uint F_0068bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x68bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))
                    (this + 4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::ResourceList::vf1 */
unsigned int F_0068bc70(void)
{
  GEN_ENTER(0x68bc70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0068bd00 */
unsigned int F_0068bd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x20) == param_1)) {
    *(uint *)(iVar1 + 0x20) =
         -(uint)(*(uint *)(param_1 + 0x1c) != param_1) & *(uint *)(param_1 + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x18))) = *(undefined4 *)(param_1 + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x1c))) = *(undefined4 *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = param_1;
  *(uint *)(param_1 + 0x1c) = param_1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((int)this + 0x20) == 0) {
    *(uint *)((int)this + 0x20) = param_1;
    *(uint *)(param_1 + 0x1c) = param_1;
    *(uint *)(param_1 + 0x18) = param_1;
    *(undefined * PTR32 *)(param_1 + 0x14) = this;
    return 0;
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18))) + 0x1c))) = param_1;
  *(undefined4 *)(param_1 + 0x18) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18)));
  *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0x18))) = param_1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x20);
  *(undefined * PTR32 *)(param_1 + 0x14) = this;
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf4 */
unsigned int F_0068bd80(unsigned int gen_a0)
{
  GEN_ENTER(0x68bd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0x28);
  while (piVar2 != (int *)0x0) {
    if ((*(byte *)(piVar2 + 9) & 1) == 0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      piVar2 = (int *)piVar2[10];
    }
    else {
      piVar1 = (int *)piVar2[10];
      uVar3 = piVar2[9] & 0xfffffffc;
      piVar2[9] = piVar2[9] & 3;
      piVar2[10] = 0;
      if (uVar3 != 0) {
        *(int * PTR32 *)(uVar3 + 0x28) = piVar1;
      }
      piVar2 = piVar1;
      if (piVar1 != (int *)0x0) {
        piVar1[9] = piVar1[9] & 3U | uVar3;
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::World::vf5 */
unsigned int F_0068bdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x68bdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)(this + 0x28); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[10]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  }
  return 0;
}

/* ref: FUN_0068bdf0 */
uint F_0068bdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68bdf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 * puVar1;
  float * pfVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_2;
  puVar1 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x40)),(int)this + 0x80,*(int *)((int)this + 0xc0) + 0x50);
  puVar4 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  F_004f2ec0(((undefined4 *)(gen_frame + 0x80)));
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
  F_004bd580(&(*(float *)(gen_frame + 0x30)));
  pfVar2 = (*(float * PTR32 *)(gen_frame + 0x18));
  *(*(float * PTR32 *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x0));
  (*(float * PTR32 *)(gen_frame + 0x18))[1] = (*(float *)(gen_frame + 0x4));
  (*(float * PTR32 *)(gen_frame + 0x18))[2] = (*(float *)(gen_frame + 0x8));
  (*(float * PTR32 *)(gen_frame + 0x18))[4] = (*(float *)(gen_frame + 0x30));
  (*(float * PTR32 *)(gen_frame + 0x18))[5] = (*(float *)(gen_frame + 0x34));
  (*(float * PTR32 *)(gen_frame + 0x18))[6] = (*(float *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)pfVar2;
}

/* ref: FUN_0068bf80 */
uint F_0068bf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68bf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *(float *)((int)this + 0x60);
  fVar2 = *(float *)((int)this + 0x30);
  (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x78);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x74);
  fVar3 = (float10)*(float *)((int)this + 0x78);
  fVar4 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 100) -
                          (float10)*(float *)((int)this + 0x34))));
  fVar5 = (float10)*(float *)((int)this + 0x74);
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) -
                          (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar4 * fVar3 - fVar6 * fVar5);
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0x70);
  fVar7 = (float10)*(float *)((int)this + 0x70);
  fVar8 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar7 * fVar6 - fVar8 * fVar3);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar5 * fVar8 - fVar4 * fVar7);
  F_0046f390(&(*(float *)(gen_frame + 0x0)));
  param_1[1] = (*(float *)(gen_frame + 0x4));
  *param_1 = (*(float *)(gen_frame + 0x0));
  param_1[2] = (*(float *)(gen_frame + 0x8));
  return (uint)param_1;
}

/* ref: FUN_0068c030 */
uint F_0068c030(unsigned int gen_a0)
{
  GEN_ENTER(0x68c030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: FUN_0068c0b0 */
unsigned int F_0068c0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x58) != 0) {
    *(undefined4 *)((int)this + 0x3c) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 4))))(*(int * PTR32 *)((int)this + 0x58));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x58);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x5c) != 0) {
    *(undefined4 *)((int)this + 0x40) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x5c) + 4))))(*(int * PTR32 *)((int)this + 0x5c));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x5c);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x60) != 0) {
    *(undefined4 *)((int)this + 0x44) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 4))))(*(int * PTR32 *)((int)this + 0x60));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x60);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 100) != 0) {
    *(undefined4 *)((int)this + 0x48) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 100) + 4))))(*(int * PTR32 *)((int)this + 100));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 100);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x68) != 0) {
    *(undefined4 *)((int)this + 0x4c) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x68) + 4))))(*(int * PTR32 *)((int)this + 0x68));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x68);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    *(undefined4 *)((int)this + 0x50) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x6c) + 4))))(*(int * PTR32 *)((int)this + 0x6c));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x6c);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  if (*(int *)((int)this + 0x70) != 0) {
    *(undefined4 *)((int)this + 0x54) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x70) + 4))))(*(int * PTR32 *)((int)this + 0x70));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x70);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  return 0;
}

/* ref: FUN_0068c1a0 */
uint F_0068c1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
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
  uVar3 = *(uint *)((int)this + 0x30);
  if (*(int *)((int)this + uVar3 * 4 + 0x34) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + uVar3 * 4 + 0x34) + 0x10))))
              (*(undefined4 *)((int)this + uVar3 * 4 + 0x34));
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x30) * 4 + 0x34))) + 0xc0)));
    pfVar1 = (float *)F_004f45d0(((undefined4 *)(gen_frame + 0x40)),(int)this_00 + 0x10);
    pfVar5 = ((float *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    fVar7 = (float10)*(float *)((int)this + 0x18);
    fVar8 = (float10)*(float *)((int)this + 0x14);
    fVar9 = (float10)*(float *)((int)this + 0x10);
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
    fVar7 = ((float10)GEN_TOD(fsin((float10)*(float *)((int)this + 0x28))));
    fVar8 = ((float10)GEN_TOD(fcos((float10)*(float *)((int)this + 0x28))));
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
    F_0065ec40(&(*(float *)(gen_frame + 0x80)),*(float *)((int)this + 0x20));
    F_0065ed60(&(*(float *)(gen_frame + 0x80)),*(float *)((int)this + 0x24));
    pfVar1 = (float *)F_004ef350(((undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x80)),(uint)((float *)(gen_frame + 0xc0)));
    pfVar5 = ((float *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puVar2 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0xc0)));
    puVar6 = ((undefined4 *)(gen_frame + 0x40));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = F_00621fc0(this_00,((undefined4 *)(gen_frame + 0x40)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return uVar3;
}

/* ref: Client::Graphics::Scene::DrawObject::vf17 */
uint F_0068c480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx + 0x30;
}

/* ref: Client::Graphics::Scene::DrawObject::vf18 */
uint F_0068c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::DrawObject::vf21 */
uint F_0068c4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
uint F_0068c540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68c540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
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
byte F_0068c5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b14060(REFG(void * PTR32, 0x1370c1c),param_1);
  *(uint *)((int)this + 0x60) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  *(undefined * PTR32 *)(uVar1 + 4) = this;
  return 1;
}

/* ref: FUN_0068c5f0 */
uint F_0068c5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68c5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x60) != 0) {
    uVar1 = F_00b14100(REFG(void * PTR32, 0x1370c1c),*(int *)((int)this + 0x60));
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  return uVar1;
}

/* ref: FUN_0068c610 */
uint F_0068c610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68c610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
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
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar21 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  (*(uint *)(gen_frame + 0x12c)) = uVar21;
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
  uVar22 = 0;
  do {
    fVar1 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22 + 8);
    fVar2 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22 + 4);
    fVar3 = *(float *)((int)((float *)(gen_frame + 0xa0)) + uVar22);
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22) = ((fVar1 * fVar17 + fVar5) + fVar2 * fVar13) + fVar3 * fVar9;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 4) =
         ((fVar1 * fVar18 + fVar6) + fVar2 * fVar14) + fVar3 * fVar10;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 8) =
         ((fVar1 * fVar19 + fVar7) + fVar2 * fVar15) + fVar3 * fVar11;
    *(float *)(((undefined1 *)(gen_frame + 0x20)) + uVar22 + 0xc) =
         ((fVar1 * fVar20 + fVar8) + fVar2 * fVar16) + fVar3 * fVar12;
    uVar22 = uVar22 + 0x10;
  } while (uVar22 < 0x80);
  gen_maxps(&(auVar23), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), ((undefined1 *)(gen_frame + 0x30)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x40)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x50)));
  gen_minps(&(auVar24), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), ((undefined1 *)(gen_frame + 0x30)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x60)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x40)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x70)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x50)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x80)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x60)));
  gen_maxps(&(auVar23), &(auVar23), ((undefined1 *)(gen_frame + 0x90)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x70)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x80)));
  gen_minps(&(auVar24), &(auVar24), ((undefined1 *)(gen_frame + 0x90)));
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)((char *)&auVar24 + 0));
  *param_1 = (*(undefined4 *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)((char *)&auVar24 + 4));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x14));
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)((char *)&auVar24 + 8));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)((char *)&auVar23 + 0));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)((char *)&auVar23 + 4));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)((char *)&auVar23 + 8));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  F_00c47745(uVar21 ^ (uint)(uint)(gen_frame + 0x130));
  return uVar22;
}

/* ref: FUN_0068c8e0 */
uint F_0068c8e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68c8e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  uint uVar2;
  
  pfVar1 = (float *)F_004d9920(*(undefined * PTR32 *)(param_1 + 0xa8),0,0x10,2);
  uVar2 = 0;
  if (pfVar1 != (float *)0x0) {
    *pfVar1 = (float)((float10)param_2 + (float10)REFG(double, 0x1088130));
    uVar2 = *(uint *)(param_1 + 0xa8);
    *(undefined4 *)(uVar2 + 0x24) = 0;
  }
  *(float *)(param_1 + 0xe0) = param_2;
  return uVar2;
}

/* ref: FUN_0068c930 */
uint F_0068c930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68c930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_004d9920(*(undefined * PTR32 *)(param_1 + 0xa8),0,0x10,2);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(float *)(uVar1 + 4) = (float)((float10)param_2 + (float10)REFG(double, 0x1088130));
    uVar2 = *(uint *)(param_1 + 0xa8);
    *(undefined4 *)(uVar2 + 0x24) = 0;
  }
  *(float *)(param_1 + 0xe4) = param_2;
  return uVar2;
}

/* ref: FUN_0068c980 */
ushort F_0068c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_2,param_3);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_0068c9a0 */
ushort F_0068c9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_2,param_3);
  *param_1 = uVar1;
  return uVar1;
}

/* ref: FUN_0068c9c0 */
ushort F_0068c9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68c9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((ushort)param_1 == 0x65) {
    return 0x65;
  }
  uVar2 = (uint)(ushort)param_1;
  if (4 < param_2) {
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_3 & 0xffff,uVar2);
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
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 0xc),param_3 & 0xffff,uVar3);
    if (param_2 == 5) goto LAB_0068ca60;
    if (param_2 == 6) goto LAB_0068cac8;
    if (param_2 == 7) goto LAB_0068cae4;
    if (param_2 != 8) {
      bVar4 = param_2 == 9;
      goto LAB_0068cba9;
    }
    goto LAB_0068cb00;
  }
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar2);
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
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar3);
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
ushort F_0068cc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68cc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ushort local_8;
  
  local_8 = 0x65;
  if (4 < param_2) {
    return 0x65;
  }
  uVar2 = (uint)(ushort)param_1;
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,uVar2);
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
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,param_1);
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
ushort F_0068cd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68cd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  bool bVar2;
  ushort local_8;
  
  local_8 = 0x65;
  if (4 < param_2) {
    return 0x65;
  }
  uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,(uint)(ushort)param_1);
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
    uVar1 = F_006b0fd0(*(undefined * PTR32 *)((int)this + 8),param_3 & 0xffff,0xc9);
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
uint F_0068ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ce50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar4 = 0;
  iVar1 = *param_1;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar4 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*param_1 != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*param_1);
    *param_1 = 0;
    *param_2 = 0;
    return uVar3;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf12 */
unsigned int F_0068ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ced0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(in_ecx + 0x30);
  fVar2 = *(float *)(in_ecx + 0x150);
  fVar3 = *(float *)(in_ecx + 0x34);
  fVar4 = *(float *)(in_ecx + 0x154);
  fVar5 = *(float *)(in_ecx + 0x38);
  fVar6 = *(float *)(in_ecx + 0x158);
  fVar7 = *(float *)(in_ecx + 0x144);
  fVar8 = *(float *)(in_ecx + 0x148);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x140) + (float10)fVar1)));
  param_2[1] = (float)((float10)fVar3 + (float10)fVar7);
  param_2[2] = (float)((float10)fVar5 + (float10)fVar8);
  param_2[4] = (float)((float10)fVar1 + (float10)fVar2);
  param_2[5] = (float)((float10)fVar3 + (float10)fVar4);
  param_2[6] = (float)((float10)fVar5 + (float10)fVar6);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf15 */
uint F_0068cf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68cf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  uVar4 = F_005ff5c0(param_1,this + 0x120);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  iVar1 = *(int *)(this + 0x7c);
  uVar2 = *(uint *)(this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar5 * 4);
      if (this_00 != (undefined *)0x0) {
        bVar3 = F_00655030(this_00,param_1);
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
uint F_0068cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68cff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  uVar4 = F_005ff5c0(param_1,this + 0x120);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  iVar1 = *(int *)(this + 0x7c);
  uVar2 = *(uint *)(this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar5 * 4);
      if (this_00 != (undefined *)0x0) {
        bVar3 = F_00655230(this_00,param_1,param_2);
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
uint F_0068d050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68d050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0064d240(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
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
uint F_0068d0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68d0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    uVar1 = F_0064cf40(*(undefined * PTR32 *)(this + 0x78),param_1,param_2);
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
uint F_0068d170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    return (uint)(this + 0x30);
  }
  uVar1 = F_00655980(*(undefined * PTR32 *)(this + 0x78),param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf19 */
uint F_0068d190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68d190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  undefined * this_00;
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
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  (*(float * PTR32 *)(gen_frame + 0xc)) = param_1;
  if (*(int *)(this + 0x78) == 0) {
    pfVar7 = (float *)&REFG(float, 0x1302d00);
  }
  else {
    if (param_2 != 0x3d) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,param_1,param_2);
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0xc));
      goto LAB_0068d70f;
    }
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0x1d);
    if ((char)uVar4 == '\0') {
      if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
        uVar4 = F_00623160(*(undefined * PTR32 *)(this + 0x78),"n_hara");
        if ((short)uVar4 != -1) {
          uVar4 = F_0054e1a0(this,((undefined1 *)(gen_frame + 0x80)),uVar4 & 0xffff);
          goto LAB_0068d292;
        }
      }
      (*(float *)(gen_frame + 0x20)) = *param_3;
      (*(float *)(gen_frame + 0x24)) = param_3[1];
      (*(float *)(gen_frame + 0x28)) = param_3[2];
      (*(float *)(gen_frame + 0x30)) = *(float *)(this + 0x120);
      (*(float *)(gen_frame + 0x34)) = *(float *)(this + 0x124);
      fVar13 = *(float *)(this + 0x128);
    }
    else {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x80)),0x1d);
LAB_0068d292: ;
      (*(float *)(gen_frame + 0x20)) = *param_3;
      (*(float *)(gen_frame + 0x24)) = param_3[1];
      (*(float *)(gen_frame + 0x28)) = param_3[2];
      (*(float *)(gen_frame + 0x30)) = *(float *)(uVar4 + 0x30);
      (*(float *)(gen_frame + 0x34)) = *(float *)(uVar4 + 0x34);
      fVar13 = *(float *)(uVar4 + 0x38);
    }
    uVar4 = *(uint *)(this + 0x74);
    iVar6 = *(int *)(this + 0x7c);
    (*(float *)(gen_frame + 0x38)) = fVar13;
    uVar8 = 0;
    (*(float *)(gen_frame + 0x48)) = gen_bits2f(uVar4);
    (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x1090998);
    (*(char *)(gen_frame + 0x7f)) = '\0';
    if (uVar4 == 0) {
LAB_0068d375: ;
      (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x30));
      (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x34));
      (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x38));
    }
    else {
      do {
        this_00 = *(undefined * PTR32 *)(iVar6 + uVar8 * 4);
        if (this_00 != (undefined *)0x0) {
          bVar3 = F_00655450(this_00,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x8)));
          if (bVar3 != 0) {
            pfVar7 = &(*(float *)(gen_frame + 0x4c));
            if (!((float10)(*(float *)(gen_frame + 0x4c)) < (float10)(*(float *)(gen_frame + 0x8)))) {
              pfVar7 = &(*(float *)(gen_frame + 0x8));
            }
            (*(float *)(gen_frame + 0x4c)) = *pfVar7;
            (*(char *)(gen_frame + 0x7f)) = '\x01';
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)gen_fl2bits((*(float *)(gen_frame + 0x48))));
      if ((*(char *)(gen_frame + 0x7f)) == '\0') goto LAB_0068d375;
      fVar13 = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x50)) = fVar13;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x28)));
      (*(float *)(gen_frame + 0x58)) = fVar1;
      fVar10 = (float10)(*(float *)(gen_frame + 0x4c));
      fVar13 = (float)(fVar10 * (float10)fVar13);
      (*(float *)(gen_frame + 0x60)) = fVar13;
      fVar2 = (float)((float10)fVar2 * fVar10);
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar1 = (float)(fVar10 * (float10)fVar1);
      (*(float *)(gen_frame + 0x68)) = fVar1;
      fVar13 = (float)((float10)fVar13 + (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x50)) = fVar13;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)fVar2);
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x28)) + (float10)fVar1);
      (*(float *)(gen_frame + 0x58)) = fVar1;
      (*(float *)(gen_frame + 0x60)) = fVar13;
      (*(float *)(gen_frame + 0x64)) = fVar2;
      (*(float *)(gen_frame + 0x68)) = fVar1;
    }
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x34)));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x34)));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x38)));
    if ((char)param_4 != '\0') {
      (*(float *)(gen_frame + 0x54)) = 0.0;
    }
    F_0046f390(&(*(float *)(gen_frame + 0x50)));
    fVar10 = (float10)(*(float *)(gen_frame + 0x50));
    fVar11 = (float10)(*(float *)(gen_frame + 0x54));
    fVar12 = (float10)(*(float *)(gen_frame + 0x58));
    fVar13 = ((float)GEN_TOF(((fVar11 * fVar11 + fVar10 * fVar10) + fVar12 * fVar12)));
    (*(float *)(gen_frame + 0x48)) = fVar13;
    if ((float10)fVar13 < (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0xc0)) = REFG(float, 0x1302c60);
      fVar10 = (float10)0;
      (*(float *)(gen_frame + 0xf0)) = (float)fVar10;
      (*(float *)(gen_frame + 0xc4)) = 0.0;
      (*(float *)(gen_frame + 0xf4)) = (float)fVar10;
      (*(float *)(gen_frame + 0xc8)) = 0.0;
      (*(float *)(gen_frame + 0xf8)) = (float)fVar10;
      (*(float *)(gen_frame + 0xd0)) = 0.0;
      (*(float *)(gen_frame + 0xd8)) = 0.0;
      (*(float *)(gen_frame + 0xe0)) = 0.0;
      (*(float *)(gen_frame + 0xe4)) = 0.0;
      (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1302c64);
      (*(float *)(gen_frame + 0xe8)) = REFG(float, 0x1302c68);
      F_004efe70(&(*(float *)(gen_frame + 0xc0)),(uint)(this + 0x40));
      (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x64)));
      (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x68)));
    }
    else {
      (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x60)) = (float)((float10)REFG(float, 0x1302c84) * fVar12 - (float10)REFG(float, 0x1302c88) * fVar11);
      (*(float *)(gen_frame + 0x64)) = (float)(fVar10 * (float10)REFG(float, 0x1302c88) - (float10)REFG(float, 0x1302c80) * fVar12);
      (*(float *)(gen_frame + 0x68)) = (float)((float10)REFG(float, 0x1302c80) * fVar11 - fVar10 * (float10)REFG(float, 0x1302c84));
      F_0046f390(&(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0x68));
      fVar13 = (float)((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x64))
                      );
      (*(float *)(gen_frame + 0x10)) = fVar13;
      (*(float *)(gen_frame + 0xd0)) = fVar13;
      (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x50));
      (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0x54));
      (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x58));
      fVar13 = (float)((float10)(*(float *)(gen_frame + 0x60)) * (float10)(*(float *)(gen_frame + 0x58)) - (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x68))
                      );
      (*(float *)(gen_frame + 0x14)) = fVar13;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x50)) - (float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x60)))
      ;
      (*(float *)(gen_frame + 0x18)) = fVar2;
      (*(float *)(gen_frame + 0xd4)) = fVar13;
      (*(float *)(gen_frame + 0xd8)) = fVar2;
    }
    pfVar7 = &(*(float *)(gen_frame + 0xc0));
  }
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0xc));
  for (iVar6 = 0x10; pfVar5 = (*(float * PTR32 *)(gen_frame + 0xc)), iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar9 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
  }
LAB_0068d70f: ;
  (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar5;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)pfVar5;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf6 */
uint F_0068d730(unsigned int gen_a0)
{
  GEN_ENTER(0x68d730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b81ed0(*(undefined * PTR32 *)(this + 0x60),this + 0x120);
  return uVar1;
}

/* ref: FUN_0068d740 */
uint F_0068d740(unsigned int gen_a0)
{
  GEN_ENTER(0x68d740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x710) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x710),0,0);
    *(undefined4 *)((int)this + 0x710) = 0;
  }
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) & 0xfffeffff;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  return uVar1;
}

/* ref: FUN_0068d780 */
uint F_0068d780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x714);
  if ((iVar1 != 0) && (*(int *)(iVar1 + param_1 * 4) != 0)) {
    F_0050c620(*(undefined4 *)(iVar1 + param_1 * 4),0,0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x714) + param_1 * 4))) = 0;
  }
  uVar2 = 0 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x6f8) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x6f8) | uVar2;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  return uVar2;
}

/* ref: FUN_0068d7f0 */
uint F_0068d7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68d7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = *(uint *)((int)this + 0x71c) >> 4;
  if ((uVar1 & 1) != 0) {
    if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
      F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78),1);
    }
    F_009f54d0((undefined *)((int)this + 0x4a0),*(undefined4 *)((int)this + 0x414),1,0);
    if (*(int *)((int)this + 0x414) != 0) {
      F_0050c620(*(int *)((int)this + 0x414),0,0);
      *(undefined4 *)((int)this + 0x414) = 0;
    }
    F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x100);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))(this,((undefined1 *)(gen_frame + 0x8)),0x100,1,"resident/face");
    if (uVar1 != 0) {
      F_004ff310(((undefined1 *)(gen_frame + 0x4)),4,0);
      *(undefined4 *)((int)this + 0x40c) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x0)) = 0x706170;
      *(undefined4 *)((int)this + 0x410) = 0;
      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)),0,0,0);
      *(uint *)((int)this + 0x414) = uVar1;
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return uVar1;
    }
    *(undefined4 *)((int)this + 0x410) = 0xffffffff;
    uVar1 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_0068d920 */
byte F_0068d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (byte)(*(uint *)(in_ecx + 0x2c4) >> ((byte)param_2 & 0x1f)) & 1;
}

/* ref: FUN_0068d980 */
unsigned int F_0068d980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x78) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_006233a0(*(int *)((int)this + 0x78));
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
        F_0064d630(*(undefined * PTR32 *)((int)this + 0x78),param_1,uVar2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_0068d9c0 */
byte F_0068d9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    bVar1 = F_009f0920(in_ecx_00,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_0068d9e0 */
uint F_0068d9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68d9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x78) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x78) + 0x54))), this_00 != (undefined *)0x0)) {
    uVar1 = F_009f4320(this_00,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0068da00 */
uint F_0068da00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68da00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx_00;
  uint uVar1;
  
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    uVar1 = F_009f0900(in_ecx_00,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0068da20 */
uint F_0068da20(unsigned int gen_a0)
{
  GEN_ENTER(0x68da20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  uint extraout_EAX = 0;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54)));
  if (in_ecx_00 != 0) {
    F_009f13c0(in_ecx_00);
    return extraout_EAX;
  }
  return 0;
}

/* ref: FUN_0068da60 */
uint F_0068da60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68da60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_ecx_00;
  
  in_ecx_00 = 0;
  if ((*(int *)(in_ecx + 0x78) != 0) &&
     (in_ecx_00 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0x54))), in_ecx_00 != 0)) {
    F_009f13a0(in_ecx_00,param_2);
  }
  return in_ecx_00;
}

/* ref: FUN_0068da90 */
byte F_0068da90(unsigned int gen_a0)
{
  GEN_ENTER(0x68da90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  if ((REFG(int, 0x14c4e78) != 0) && (iVar1 = *(int *)(REFG(int, 0x14c4e78) + 0x18), iVar1 != 0)) {
    if ((*(int *)(iVar1 + 0x2e00) == 0) || (*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x2e00) + 0xec))) != this)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    return *(undefined * PTR32 *)(iVar1 + 0xec) == this | bVar2 |
           (((undefined *)(iVar1 + 0x2600) == this || (undefined *)(iVar1 + 0x1e60) == this) ||
           (undefined *)(iVar1 + 0x16c0) == this);
  }
  return *(short *)((int)this + 0x72) == 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf8 */
unsigned int F_0068db00(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68db00u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar4 * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
        F_004ffee0(iVar3,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf9 */
unsigned int F_0068db40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68db40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar4 * 4);
      if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
        F_004fff30(iVar3,param_2,param_3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_0068db80 */
unsigned int F_0068db80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68db80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)((int)this + 0x74) = param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1 * 4,0x10);
  *(uint *)((int)this + 0x7c) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),param_1 * 4,0x10);
  *(uint *)((int)this + 0x80) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7c) + uVar1 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  return 0;
}

/* ref: FUN_0068dc00 */
uint F_0068dc00(unsigned int gen_a0)
{
  GEN_ENTER(0x68dc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x7c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x7c));
    *(undefined4 *)((int)this + 0x7c) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf81 */
unsigned int F_0068dc50(unsigned int gen_a0)
{
  GEN_ENTER(0x68dc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  undefined4 uVar4;
  float10 fVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) {
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
    F_00623060(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf82 */
unsigned int F_0068dd30(unsigned int gen_a0)
{
  GEN_ENTER(0x68dd30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
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
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
        pfVar3 = *(float * PTR32 *)(iVar1 + 0xf0);
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
    F_0046f0e0(&(*(float *)(gen_frame + 0x0)),(float)(float10)1);
  }
  F_006aec30(this + 0x140,&(*(float *)(gen_frame + 0x0)));
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
  fVar11 = ((float)GEN_TOF(SQRT((float10)fVar11)));
  (*(float *)(gen_frame + 0x2c)) = fVar11;
  *(float *)(this + 0x13c) = fVar11;
  *(float *)(this + 0x130) = ((float)GEN_TOF(((float10)fVar13 + (float10)*(float *)(this + 0x140))));
  *(float *)(this + 0x134) = ((float)GEN_TOF(((float10)*(float *)(this + 0x144) + (float10)fVar12)));
  *(float *)(this + 0x138) = ((float)GEN_TOF(((float10)*(float *)(this + 0x148) + (float10)fVar8)));
  return 0;
}

/* ref: FUN_0068e000 */
byte F_0068e000(unsigned int gen_a0)
{
  GEN_ENTER(0x68e000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_006aea80((undefined4 *)((int)this + 0x120),(undefined4 *)((int)this + 0x130));
  if (bVar1 == 0) {
    *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x130);
    *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x134);
    *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x138);
    *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)this + 0x13c);
    return 1;
  }
  return 0;
}

/* ref: FUN_0068e040 */
byte F_0068e040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x7c);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *(int *)(iVar1 + uVar5 * 4);
      if (iVar3 != 0) {
        bVar4 = F_004ffb50(*(undefined * PTR32 *)(iVar3 + 0x18),param_1);
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
uint F_0068e090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
    F_009bc2a0((undefined *)*puVar1);
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4)));
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
      this_00 = (undefined *)*puVar1;
      if (this_00 != (undefined *)0x0) {
        F_009cfa70(this_00);
        puVar1 = (undefined4 *)F_00406ad0(this_00);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) = 0;
    }
  }
  return (uint)puVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf35 */
unsigned int F_0068e0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68e0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
      if ((iVar1 != 0) && (*(int *)(iVar1 + uVar3 * 4) != 0)) {
        F_0050c620(*(undefined4 *)(iVar1 + uVar3 * 4),0,0);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x714) + uVar3 * 4))) = 0;
      }
      bVar2 = (byte)uVar3;
      uVar3 = uVar3 + 1;
      *(uint *)(this + 0x6f8) =
           ~(1 << (bVar2 & 0x1f)) & *(uint *)(this + 0x6f8) | 0 << (bVar2 & 0x1f);
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
  F_00b824b0(this + 0x700);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf72 */
byte F_0068e1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x68e1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (byte)(*(uint *)(in_ecx + 0x71c) >> 6) & 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf31 */
uint F_0068e1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)(this + 0x2d8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x7c);
  *(int * PTR32 *)(this + 0x2d8) = param_1;
  if (param_1 == (int *)0x0) {
    uVar7 = *(undefined4 *)(this + 0x160);
  }
  else {
    uVar7 = 0;
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar4 = *(int *)(iVar3 + uVar5 * 4);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x70) = uVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  uVar2 = *(uint *)(this + 0x74);
  iVar3 = *(int *)(this + 0x80);
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar3 + uVar6 * 4);
      if (this_00 != (undefined *)0x0) {
        uVar5 = F_009bc1e0(this_00,(uint)(param_1 != (int *)0x0));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return uVar5;
}

/* ref: Client::Graphics::Scene::Human::vf55 */
uint F_0068e290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (param_1 < 10) {
    *(undefined4 *)(this + param_1 * 4 + 0x750) =
         *((undefined4 *)GEN_TOP((param_1 * 0xc + *(int *)(this + 0x818))));
    iVar2 = param_1 * 0xc + *(int *)(this + 0x818);
    *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x3c0) * 2))) = *(undefined4 *)(iVar2 + 4);
    *((undefined2 *)GEN_TOP((this + (param_1 * 3 + 0x3c0) * 2 + 4))) = *(undefined2 *)(iVar2 + 8);
  }
  if (((param_1 == 0xd) || (uVar1 = param_1, param_1 == 0xe)) &&
     (uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0x7c) + param_1 * 4))), uVar1 != 0)) {
    *(undefined4 *)(uVar1 + 0x14) = 0x3000000;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf75 */
uint F_0068e300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  char * _Format;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      _Format = "chara/equipment/e%04d/e%04d.imc";
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      _Format = "chara/equipment/e%04d/e%04d.imc";
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
    _Format = "chara/accessory/a%04d/a%04d.imc";
  }
  F_00c472af(param_1,param_2,_Format,uVar2,uVar2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf76 */
uint F_0068e390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  char * pcVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar8 = param_4;
  if (param_3 < 5) {
    if (*(char *)(param_4 + 8) == 'b') {
      uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
      uVar5 = (uint)uVar4;
      pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
      goto LAB_0068e620;
    }
    iVar2 = *(int *)(this + 0x818);
    iVar3 = param_3 * 0xc;
    if (*(char *)(iVar2 + 4 + iVar3) == '\0') {
LAB_0068e3fc: ;
      F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
      return 0;
    }
    uVar7 = (uint)*(byte *)(iVar3 + 4 + iVar2);
    uVar5 = (uint)*(ushort *)(iVar3 + iVar2);
    if (*(char *)(iVar2 + 3 + iVar3) != '\0') {
      F_00c472af(param_1,param_2,"chara/equipment/e%04d/material/v%04d/staining/%s",uVar5,uVar7,
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
      F_00c472af(((char *)(gen_frame + 0x8)),0x10,pcVar9,(uint)bVar1);
      F_00c473c8(param_1,param_2,((char *)(gen_frame + 0x8)));
      goto LAB_0068e62d;
    }
    pcVar9 = "chara/equipment/e%04d/material/v%04d/%s";
  }
  else if (param_3 < 10) {
    iVar2 = *(int *)(this + 0x818);
    iVar3 = param_3 * 0xc;
    if (*(char *)(iVar2 + 4 + iVar3) == '\0') goto LAB_0068e3fc;
    uVar7 = (uint)*(byte *)(iVar3 + 4 + iVar2);
    uVar5 = (uint)*(ushort *)(iVar3 + iVar2);
    if (*(char *)(iVar2 + 3 + iVar3) != '\0') {
      F_00c472af(param_1,param_2,"chara/accessory/a%04d/material/v%04d/staining/%s",uVar5,uVar7,
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
    pcVar9 = "chara/accessory/a%04d/material/v%04d/%s";
  }
  else if (param_3 == 10) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/hair/h%04d/material/v0001/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77a);
  }
  else if (param_3 == 0xb) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/face/f%04d/material/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77c);
  }
  else if (param_3 == 0xc) {
    uVar5 = (uint)*(ushort *)(this + 0x778);
    pcVar9 = "chara/human/c%04d/obj/tail/t%04d/material/%s";
    uVar7 = (uint)*(ushort *)(this + 0x77e);
  }
  else if (param_3 == 0xd) {
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    iVar8 = param_4 + 8;
    uVar5 = (uint)uVar4;
    uVar7 = uVar5;
    if (*(char *)(param_4 + 8) == 'f') {
      if ((uVar5 != 0x12d) && (uVar5 != 0x191)) {
        pcVar9 = "chara/human/c%04d/obj/face/f0001/material/mt_c%04d%s";
        goto LAB_0068e620;
      }
      iVar8 = param_4 + 0xd;
      pcVar9 = "chara/human/c%04d/obj/face/f0101/material/mt_c%04df0101%s";
    }
    else {
      pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
    }
  }
  else if (param_3 == 0xe) {
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    uVar5 = (uint)uVar4;
    iVar8 = param_4 + 8;
    pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
    uVar7 = uVar5;
  }
  else {
    if (param_3 != 0xf) goto LAB_0068e62d;
    uVar4 = F_00689ac0((uint)*(ushort *)(this + 0x778));
    uVar5 = (uint)uVar4;
    pcVar9 = "chara/human/c%04d/obj/body/b0001/material/mt_c%04d%s";
LAB_0068e620: ;
    iVar8 = param_4 + 8;
    uVar7 = uVar5;
  }
  F_00c472af(param_1,param_2,pcVar9,uVar5,uVar7,iVar8);
LAB_0068e62d: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf77 */
uint F_0068e650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined1 HVar1;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      HVar1 = this[param_3 * 6 + 0x781];
    }
    else {
      HVar1 = *((undefined *)GEN_TOP((*(int *)(this + 0x818) + 5 + param_3 * 0xc)));
    }
    if (HVar1 != (undefined1)0x0) {
      F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",
                 (uint)(byte)HVar1);
      return param_1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf78 */
uint F_0068e6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined1 HVar2;
  ushort uVar3;
  
  if (4 < (*(uint *)&gen_args[3])) {
    return 0;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) == 0) {
    uVar3 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[3]) * 4 + 0x750)));
    HVar2 = (*(undefined * PTR32 *)&gen_args[0])[(*(uint *)&gen_args[3]) * 6 + 0x784];
  }
  else {
    uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) + (*(uint *)&gen_args[3]) * 0xc)));
    HVar2 = *((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x818))) + 8 + (*(uint *)&gen_args[3]) * 0xc)));
  }
  if (HVar2 == (undefined1)0x0) {
    return 0;
  }
  if ((byte)HVar2 < 100) {
    puVar1 = (undefined4 *)F_004ff310(&(*(uint *)&gen_args[3]),4,0);
    *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
    F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"chara/equipment/e%04d/vfx/eff/ve%04d.avfx",(uint)uVar3,
               (uint)(byte)HVar2);
    return (*(uint *)&gen_args[1]);
  }
  puVar1 = (undefined4 *)F_004ff310(&(*(uint *)&gen_args[3]),8,0);
  *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
  F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"vfx/equipment/eff/ve%04d.avfx",(uint)(byte)HVar2);
  return (*(uint *)&gen_args[1]);
}

/* ref: Client::Graphics::Scene::Human::vf88 */
uint F_0068e770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x7fc) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068e790 */
uint F_0068e790(unsigned int gen_a0)
{
  GEN_ENTER(0x68e790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x3a) = 0;
  *(undefined4 *)((int)this + 0x3e) = 0;
  *(undefined2 *)((int)this + 0x42) = 0;
  *(undefined1 *)((int)this + 0x44) = 1;
  *(undefined4 *)this = 0x1010101;
  *(undefined4 *)((int)this + 4) = 0x1010101;
  *(undefined4 *)((int)this + 8) = 0x1010101;
  *(undefined4 *)((int)this + 0xc) = 0x1010101;
  *(undefined4 *)((int)this + 0x10) = 0x1010101;
  *(undefined4 *)((int)this + 0x14) = 0x1010101;
  *(undefined2 *)((int)this + 0x18) = 0x101;
  *(undefined2 *)((int)this + 0x1c) = 0x172;
  *(undefined2 *)((int)this + 0x20) = 0x172;
  *(undefined2 *)((int)this + 0x24) = 0x172;
  *(undefined2 *)((int)this + 0x28) = 0x172;
  *(undefined2 *)((int)this + 0x2c) = 0x172;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Demihuman::vf55 */
uint F_0068e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
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
    *(undefined4 *)pDVar3 = *(undefined4 *)(iVar1 + 4 + iVar2);
    *(undefined2 *)(pDVar3 + 4) = *(undefined2 *)(iVar1 + 8 + iVar2);
  }
  return (uint)pDVar3;
}

/* ref: Client::Graphics::Scene::Demihuman::vf67 */
uint F_0068e860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar1 = *(ushort *)(this + param_3 * 4 + 0x734);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/model/d%04de%04d_%s.mdl",
             (uint)*(ushort *)(this + 0x748),(uint)uVar1,(uint)*(ushort *)(this + 0x748),(uint)uVar1
             ,(&REFG(undefined * PTR32, 0x1322de0))[(int)(param_3)]);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf75 */
uint F_0068e8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  
  if (*(int *)(this + 0x790) == 0) {
    uVar1 = *(ushort *)(this + param_3 * 4 + 0x734);
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/e%04d.imc",
             (uint)*(ushort *)(this + 0x748),(uint)uVar1,(uint)uVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf76 */
uint F_0068e910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort * puVar1;
  byte bVar2;
  
  puVar1 = ((ushort *)GEN_TOP((*(int *)(this + 0x790) + param_3 * 0xc)));
  bVar2 = (byte)puVar1[2];
  if (bVar2 == 0) {
    return 0;
  }
  F_00c472af(param_1,param_2,"chara/demihuman/d%04d/obj/equipment/e%04d/material/v%04d/%s",
             (uint)*(ushort *)(this + 0x748),(uint)*puVar1,(uint)bVar2,param_4);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf77 */
uint F_0068e960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68e960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
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
  F_00c472af(param_1,param_2,"chara/common/texture/decal_equip/-decal_%03d.tex",(uint)(byte)DVar1);
  return param_1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf78 */
uint F_0068e9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x68e9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 * puVar1;
  undefined1 DVar2;
  ushort uVar3;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) == 0) {
    uVar3 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[3]) * 4 + 0x734)));
    DVar2 = (*(undefined * PTR32 *)&gen_args[0])[(*(int *)&gen_args[3]) * 6 + 0x74e];
  }
  else {
    uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) + (*(int *)&gen_args[3]) * 0xc)));
    DVar2 = *((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x790))) + 8 + (*(int *)&gen_args[3]) * 0xc)));
  }
  if ((DVar2 != (undefined1)0x0) && ((byte)DVar2 < 100)) {
    puVar1 = (undefined4 *)F_004ff310(&(*(int *)&gen_args[3]),4,0);
    *(*(undefined4 * PTR32 *)&gen_args[4]) = *puVar1;
    F_00c472af((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"chara/demihuman/d%04d/obj/equipment/e%04d/vfx/eff/ve%04d.avfx",
               (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x748))),(uint)uVar3,(uint)(byte)DVar2);
    return (*(uint *)&gen_args[1]);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Demihuman::vf88 */
uint F_0068ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ea40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x784) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068ea60 */
uint F_0068ea60(unsigned int gen_a0)
{
  GEN_ENTER(0x68ea60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x78c);
  if ((uVar1 != 0) && (*(int *)((int)this + 0x788) != 0)) {
    if ((uVar1 & 1) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x788) + 0xc))))(*(int * PTR32 *)((int)this + 0x788),this);
      *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffe;
      return uVar1;
    }
    uVar1 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x788) + 8))))(*(int * PTR32 *)((int)this + 0x788),this);
      *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffd;
    }
  }
  return uVar1;
}

/* ref: FUN_0068eab0 */
uint F_0068eab0(unsigned int gen_a0)
{
  GEN_ENTER(0x68eab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)this = 0;
  *(undefined4 *)((int)this + 2) = 0x100;
  *(undefined4 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined2 *)((int)this + 0x16) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 8) = 1;
  return (uint)this;
}

/* ref: FUN_0068eaf0 */
byte F_0068eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 2) & 0xfe;
  *(byte *)((int)this + 2) = bVar1;
  return bVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf88 */
uint F_0068eb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eb20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x748) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0068eb40 */
uint F_0068eb40(unsigned int gen_a0)
{
  GEN_ENTER(0x68eb40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0x1001c;
  *(undefined2 *)(in_ecx + 1) = 0;
  *(undefined2 *)((int)in_ecx + 6) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_0068eb60 */
byte F_0068eb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68eb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 6) & 0xfe;
  *(byte *)((int)this + 6) = bVar1;
  return bVar1;
}

/* ref: FUN_0068eb90 */
uint F_0068eb90(unsigned int gen_a0)
{
  GEN_ENTER(0x68eb90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2a20(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0x10b0ddc;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_0068ebc0 */
uint F_0068ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0x68ebc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2ae0(param_1);
  if (puVar1 == (uint *)0x0) {
    return 0x10b0de8;
  }
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: Client::Graphics::Scene::Terrain::vf12 */
uint F_0068ebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68ebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
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
      pfVar2 = *(float * PTR32 *)(*piVar4 + 0xf0);
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
      iVar1 = (*(int *)(gen_frame + 0x2c)) + -1;
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
byte F_0068ed40(unsigned int gen_a0)
{
  GEN_ENTER(0x68ed40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12050];
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
  iVar1 = *(int *)((int)this + 0x78);
  (*(undefined * PTR32 *)(gen_frame + 0x12028)) = REFG(void * PTR32, 0x1370c1c);
  if (iVar1 != 0) {
    uVar3 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70));
    (*(uint *)(gen_frame + 0x12030)) = uVar3;
    (*(uint *)(gen_frame + 0x1203c)) = 0;
    uVar3 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70));
    if (iVar1 != 0) {
      piVar7 = *(int * PTR32 *)((int)this + 0x74);
      iVar4 = uVar3 - (int)piVar7;
      (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
      (*(int *)(gen_frame + 0x1202c)) = iVar4;
      (*(int *)(gen_frame + 0x12034)) = iVar1;
      do {
        iVar1 = *piVar7;
        uVar8 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0xa8) + 4))) + 0x1e + *(int *)(iVar1 + 0xa8)
                               )));
        uVar3 = 0;
        if (uVar8 != 0) {
          psVar5 = ((short *)GEN_TOP((*(int *)(iVar1 + 0xb8) + 0x1a)));
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
        iVar1 = (*(int *)(gen_frame + 0x12034)) + -1;
        (*(int *)(gen_frame + 0x12034)) = iVar1;
      } while (iVar1 != 0);
    }
    *(uint *)((int)this + 0x84) = (*(uint *)(gen_frame + 0x1203c));
    if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
      _Size = (*(uint *)(gen_frame + 0x1203c)) * 4;
      pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
      *(undefined * PTR32 *)((int)this + 0x90) = pvVar6;
      if (pvVar6 != (undefined *)0x0) {
        F_00c48350(pvVar6,0,_Size);
        pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                   (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),_Size,0x10)));
        *(undefined * PTR32 *)((int)this + 0x9c) = pvVar6;
        if (pvVar6 != (undefined *)0x0) {
          F_00c48350(pvVar6,0,_Size);
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
            do {
              uVar8 = F_00637b80(((int *)(gen_frame + 0x11000))[(int)(uVar3)]);
              *((uint *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))) = uVar8;
              piVar7 = ((int *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4)));
              if (*piVar7 == 0) goto LAB_0068ee30;
              puVar2 = (ushort *)((int *)(gen_frame + 0x10000))[(int)(uVar3)];
              *(undefined2 *)(*piVar7 + 8) = (undefined2)(*(uint *)(gen_frame + 0x12030));
              F_00625340(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))),(uint)*puVar2,
                           (uint)puVar2[1]);
              uVar3 = uVar3 + 1;
            } while (uVar3 < (*(uint *)(gen_frame + 0x1203c)));
          }
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) == 0) {
            return 1;
          }
          while( true ) {
            uVar8 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12028)),9);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) = uVar8;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4)));
            F_006253e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9c) + uVar3 * 4))),((undefined1 *)(gen_frame + 0x12000)));
            uVar3 = uVar3 + 1;
            if ((*(uint *)(gen_frame + 0x1203c)) <= uVar3) {
              return 1;
            }
          }
        }
      }
LAB_0068ee30: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0068ef60 */
uint F_0068ef60(unsigned int gen_a0)
{
  GEN_ENTER(0x68ef60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 0x10))))((int)this + 0x70);
  uVar2 = 0;
  local_8 = 0;
  if (1 < *(int *)((int)this + 0x220)) {
    pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x224) + 0x105)));
    iVar5 = (*(int *)((int)this + 0x220) - 2U >> 1) + 1;
    uVar2 = iVar5 * 2;
    do {
      iVar7 = iVar7 + (uint)(pcVar3[-0xa0] == '\x03');
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x140;
      iVar6 = iVar6 + (uint)(cVar1 == '\x03');
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (uVar2 < *(uint *)((int)this + 0x220)) {
    local_8 = (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x224) + 0x65 + uVar2 * 0xa0))) == '\x03');
  }
  uVar2 = 0;
  local_10 = 0;
  local_c = 0;
  if (1 < *(int *)((int)this + 0x228)) {
    pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x22c) + 0xe5)));
    iVar5 = (*(int *)((int)this + 0x228) - 2U >> 1) + 1;
    uVar2 = iVar5 * 2;
    do {
      local_10 = local_10 + (uint)(pcVar3[-0x80] == '\x03');
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x100;
      local_c = local_c + (uint)(cVar1 == '\x03');
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar4 = 0;
  if (uVar2 < *(uint *)((int)this + 0x228)) {
    uVar4 = (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x22c) + 0x65 + uVar2 * 0x80))) == '\x03');
  }
  if (((*(int *)((int)this + 0x220) == local_8 + iVar7 + iVar6) &&
      (*(uint *)((int)this + 0x228) == local_c + local_10 + uVar4)) &&
     (*(char *)((int)this + 0xd5) == '\x03')) {
    *(undefined1 *)((int)this + 0x60) = 2;
  }
  return uVar4;
}

/* ref: FUN_0068f090 */
uint F_0068f090(unsigned int gen_a0)
{
  GEN_ENTER(0x68f090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x70) + 0x28))))((int)this + 0x70);
  uVar3 = 0;
  if (*(int *)((int)this + 0x220) != 0) {
    iVar2 = 0;
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x224) + iVar2))) + 0x18))))
                        (*(int *)((int)this + 0x224) + iVar2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0xa0;
    } while (uVar3 < *(uint *)((int)this + 0x220));
  }
  *(undefined1 *)((int)this + 0x60) = 3;
  return uVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf11 */
uint F_0068f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_2;
  fVar4 = *(float *)(param_1 + 0x50);
  fVar5 = *(float *)(param_1 + 0x54);
  iVar6 = *((int *)GEN_TOP((*(int *)(param_1 + 0x70) + 0xa8)));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  iVar7 = *(int *)(iVar6 + 4);
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  fVar3 = *(float *)(iVar7 + 8 + iVar6);
  *(float *)(param_2 + 0xc) = fVar3;
  param_2 = (uint)gen_fl2bits(fVar4);
  if ((float10)fVar4 < (float10)fVar5) {
    param_2 = (uint)gen_fl2bits(fVar5);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)*(float *)(param_1 + 0x58)) {
    param_2 = (uint)gen_fl2bits(*(float *)(param_1 + 0x58));
  }
  *(undefined4 *)uVar8 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(uVar8 + 4) = uVar1;
  *(undefined4 *)(uVar8 + 8) = uVar2;
  *(float *)(uVar8 + 0xc) = (float)((float10)fVar3 * ((float10)GEN_TOD(gen_bits2f(param_2))));
  return uVar8;
}

/* ref: Client::Graphics::Scene::BGObject::vf12 */
uint F_0068f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,((undefined1 *)(gen_frame + 0x0)));
  F_0068c610(param_1,((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: FUN_0068f210 */
uint F_0068f210(unsigned int gen_a0)
{
  GEN_ENTER(0x68f210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8)));
  uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x20 + iVar2)));
  uVar3 = (uint)uVar1;
  if (uVar1 != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),uVar3 << 6,0x40);
    *(uint *)((int)this + 0x7c) = uVar3;
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf16 */
uint F_0068f250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar1 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x20 + iVar2)));
  uVar4 = 0;
  if (uVar1 != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_2 == *piVar3) {
        puVar5 = ((undefined4 *)GEN_TOP((uVar4 * 0x40 + *(int *)(this + 0x7c))));
        puVar6 = param_1;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        return (uint)param_1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 8;
    } while (uVar4 < uVar1);
  }
  puVar5 = &REFG(float, 0x1302d00);
  puVar6 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::BGObject::vf17 */
uint F_0068f2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 4) + 0x20 + iVar1)));
  uVar2 = 0;
  if (uVar3 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_1 == *piVar4) {
        return uVar2 * 0x40 + 0x30 + *(int *)(this + 0x7c);
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar2 < uVar3);
  }
  return (uint)(this + 0x30);
}

/* ref: Client::Graphics::Scene::BGObject::vf20 */
byte F_0068f300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)(this + 0x7c) == 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)));
  uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 4) + 0x20 + iVar1)));
  uVar2 = 0;
  if (uVar3 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x70) + 0xb4)));
    do {
      if (param_1 == *piVar4) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf8 */
unsigned int F_0068f350(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68f350u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(char *)(param_1 + 0x65) == '\x03') {
    F_004ffee0(*(undefined4 *)(param_1 + 0x70),param_2,param_3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf9 */
unsigned int F_0068f370(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x68f370u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(char *)(param_1 + 0x65) == '\x03') {
    F_004fff30(*(undefined4 *)(param_1 + 0x70),param_2,param_3);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf15 */
byte F_0068f390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  bVar1 = F_006601a0(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  return bVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf14 */
byte F_0068f3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  bVar1 = F_006602f0(param_1,(uint)((undefined1 *)(gen_frame + 0x0)),param_2);
  return bVar1;
}

/* ref: FUN_0068f430 */
uint F_0068f430(unsigned int gen_a0)
{
  GEN_ENTER(0x68f430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short local_c;
  
  uVar1 = (uint)TRUNC((double)*(float *)(REFG(int, 0x137104c) + 0x1198) * *(double *)&REFG(undefined, 0x10b2b28));
  local_c = (short)uVar1;
  *(short *)((int)this + 0x82) = *(short *)((int)this + 0x82) + local_c;
  *(short *)((int)this + 0x84) = *(short *)((int)this + 0x84) + local_c;
  return uVar1 & 0xffff;
}

/* ref: FUN_0068f480 */
float F_0068f480(unsigned int gen_a0)
{
  GEN_ENTER(0x68f480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *((float *)GEN_TOP((*(int *)(param_1 + 0x70) + 0x178)));
}

/* ref: FUN_0068f4a0 */
uint F_0068f4a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x68f4a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined * this;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0x67);
  this = *(undefined * PTR32 *)(param_1 + 0x70);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),*(char *)(param_1 + 0x66));
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),cVar1);
  if (*(char *)(param_1 + 0x66) == -1) {
    F_00502250(this,param_2);
  }
  else {
    F_00502310(this,(*(undefined4 *)(gen_frame + 0x8)));
  }
  if (cVar1 != -1) {
    uVar2 = F_00504650(this,(*(undefined4 *)(gen_frame + 0x4)));
    return uVar2;
  }
  uVar2 = F_00504540(this,param_2);
  return uVar2;
}

/* ref: FUN_0068f510 */
byte F_0068f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68f510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746578;
  uVar1 = F_00513d20(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2,0,0,0);
  if (uVar1 == 0) {
    *(undefined1 *)((int)this + 0x65) = 4;
    return 0;
  }
  *(uint *)((int)this + 0x74) = uVar1;
  *(undefined1 *)((int)this + 0x65) = 2;
  return 1;
}

/* ref: FUN_0068f560 */
byte F_0068f560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x68f560u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  F_004ff310(&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  (*(undefined4 *)&gen_args[2]) = 0x746578;
  uVar1 = F_00513d20(&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),0,0,0);
  if (uVar1 == 0) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
    return 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
  return 1;
}

/* ref: Client::Graphics::Scene::Light::vf11 */
unsigned int F_0068f5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)(this + 0x70);
  iVar2 = *(int *)(iVar1 + 0xc);
  puVar3 = *(undefined4 * PTR32 *)(iVar1 + 0x10);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  if (iVar2 != 5) {
    param_1[3] = *(undefined4 *)(iVar1 + 0x7c);
    return 0;
  }
  param_1[3] = (undefined4)
               gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(puVar3[8]))) * (float10)REFG(double, 0x1088108) +
                                  (float10)*(float *)(iVar1 + 0x7c)))));
  return 0;
}

/* ref: Client::Graphics::Scene::Light::vf6 */
uint F_0068f610(unsigned int gen_a0)
{
  GEN_ENTER(0x68f610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x60);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_00b81ef0(this_00,uVar1);
  return uVar1;
}

/* ref: FUN_0068f650 */
uint F_0068f650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x68f650u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x70) + 0x14))))
                    (*(int * PTR32 *)(param_1 + 0x70),param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  return uVar1;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf11 */
uint F_0068f6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1322864)));
  *param_2 = *(undefined4 *)(in_ecx + 0x30);
  uVar1 = *(undefined4 *)(in_ecx + 0x34);
  param_2[3] = uVar2;
  param_2[1] = uVar1;
  param_2[2] = *(undefined4 *)(in_ecx + 0x38);
  return (uint)param_2;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf12 */
unsigned int F_0068f6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f6e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar5 = (float10)REFG(float, 0x1302c60);
  fVar6 = (float10)REFG(float, 0x1322864);
  fVar7 = (float10)REFG(float, 0x1302c64);
  fVar4 = (float10)REFG(float, 0x1302c68);
  fVar1 = *(float *)(in_ecx + 0x30);
  fVar2 = *(float *)(in_ecx + 0x34);
  fVar3 = *(float *)(in_ecx + 0x38);
  *param_2 = ((float)GEN_TOF(((float10)fVar1 - (float10)(float)(fVar6 * fVar5))));
  param_2[1] = ((float)GEN_TOF(((float10)fVar2 - (float10)(float)(fVar7 * fVar6))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar3 - (float10)(float)(fVar6 * fVar4))));
  param_2[4] = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar5) + (float10)fVar1)));
  param_2[5] = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar6) + (float10)fVar2)));
  param_2[6] = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar4) + (float10)fVar3)));
  return 0;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf13 */
uint F_0068f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  
  fVar5 = (float10)REFG(float, 0x1322864);
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = this;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar5 * (float10)REFG(float, 0x1302c60));
  puVar3 = &REFG(float, 0x1302d00);
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (*(float *)(gen_frame + 0x54)) = (float)((float10)REFG(float, 0x1302c64) * fVar5);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar5 * (float10)REFG(float, 0x1302c68));
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)REFG(float, 0x1302c64) * fVar5);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar5 * (float10)REFG(float, 0x1302c68));
  F_0065f020(((undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x6c)) + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
  pfVar1 = (float *)F_005fe770(((undefined4 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x40)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar1 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar1[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar1[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((undefined4 *)(gen_frame + 0x0)));
  F_005fe2e0(param_1 + 0x10,(uint)((undefined1 *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x20,(uint)((undefined1 *)(gen_frame + 0x20)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x30));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x34));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x38));
  return param_1;
}

/* ref: FUN_0068f8f0 */
unsigned int F_0068f8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x68f8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  
  pfVar3 = (float *)((int)this + 0x54);
  if ((float10)*(float *)((int)this + 0x54) < (float10)*(float *)((int)this + 0x50)) {
    pfVar3 = (float *)((int)this + 0x50);
  }
  pfVar2 = (float *)((int)this + 0x58);
  if ((float10)*(float *)((int)this + 0x58) < (float10)*pfVar3) {
    pfVar2 = pfVar3;
  }
  fVar1 = (float)((float10)*pfVar2 + (float10)*pfVar2);
  if ((float10)fVar1 < (float10)*(float *)((int)this + 0x84)) {
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x84);
    return 0;
  }
  *(float *)((int)this + 0x84) = fVar1;
  return 0;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf11 */
uint F_0068f950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68f950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 EVar1;
  undefined * pEVar2;
  undefined * pEVar3;
  float fVar4;
  
  fVar4 = 0.0;
  EVar1 = this[0x94];
  pEVar2 = this + 0x50;
  if (EVar1 == (undefined1)0x1) {
    pEVar3 = this + 0x54;
    if ((float10)*(float *)(this + 0x54) < (float10)*(float *)pEVar2) {
      pEVar3 = pEVar2;
    }
    pEVar2 = this + 0x58;
    if ((float10)*(float *)(this + 0x58) < (float10)*(float *)pEVar3) {
      pEVar2 = pEVar3;
    }
    fVar4 = *(float *)pEVar2;
  }
  else if (EVar1 == (undefined1)0x2) {
    fVar4 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)*(float *)(this + 0x54) *
                                          (float10)*(float *)(this + 0x54) +
                                         (float10)*(float *)((int)(uintptr_t)pEVar2) * (float10)*(float *)pEVar2) +
                                        (float10)*(float *)(this + 0x58) *
                                        (float10)*(float *)(this + 0x58)))))));
  }
  else if (EVar1 == (undefined1)0x3) {
    if (!((float10)*(float *)(this + 0x58) < (float10)*(float *)pEVar2)) {
      pEVar2 = this + 0x58;
    }
    fVar4 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)(uintptr_t)pEVar2) * (float10)*(float *)pEVar2 +
                                        (float10)*(float *)(this + 0x54) *
                                        (float10)*(float *)(this + 0x54)))))));
  }
  *param_1 = *(undefined4 *)(this + 0x30);
  param_1[3] = (undefined4)gen_fl2bits(fVar4);
  param_1[1] = *(undefined4 *)(this + 0x34);
  param_1[2] = *(undefined4 *)(this + 0x38);
  return (uint)param_1;
}

/* ref: FUN_0068fa50 */
uint F_0068fa50(unsigned int gen_a0)
{
  GEN_ENTER(0x68fa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x580) != 0) {
    F_00406810(*(int *)((int)this + 0x580));
    *(undefined4 *)((int)this + 0x580) = 0;
  }
  *(undefined4 *)((int)this + 0x584) = 0;
  piVar2 = (int *)((int)this + 0x4e0);
  iVar1 = 8;
  do {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    piVar2 = piVar2 + -0x28;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  ((undefined4 *)(gen_frame + 0x0))[2] = 0;
  ((undefined4 *)(gen_frame + 0x0))[3] = 0;
  ((undefined4 *)(gen_frame + 0x0))[4] = 0;
  ((undefined4 *)(gen_frame + 0x0))[5] = 0;
  ((undefined4 *)(gen_frame + 0x0))[6] = 0;
  puVar3 = ((undefined4 *)(gen_frame + 0x0));
  puVar4 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return 0;
}

/* ref: FUN_0068fad0 */
byte F_0068fad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar4 = *(uint *)((int)this + 0x584);
  uVar3 = 0;
  uVar6 = uVar4;
  if (uVar4 != 0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x580);
    do {
      uVar6 = uVar3;
      if (*piVar5 == param_1) break;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 1;
      uVar6 = uVar4;
    } while (uVar3 < uVar4);
  }
  if (uVar4 <= uVar6) {
    return 0;
  }
  *(uint *)((int)this + 0x584) = uVar4 - 1;
  uVar3 = uVar6;
  if (uVar6 < uVar4 - 1) {
    do {
      uVar4 = uVar3 + 1;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + uVar3 * 4))) =
           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + 4 + uVar3 * 4)));
      uVar3 = uVar4;
    } while (uVar4 < *(uint *)((int)this + 0x584));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + *(int *)((int)this + 0x584) * 4))) = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    uVar4 = uVar6 >> 5;
    uVar6 = -1 << ((byte)uVar6 & 0x1f);
    do {
      iVar2 = *(int *)((int)this + 0x10);
      piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x590) + local_8 * 4)));
      puVar1 = (uint *)(*piVar5 + uVar4 * 4);
      uVar3 = *puVar1;
      *puVar1 = ~uVar6 & uVar3 | uVar3 >> 1 & uVar6;
      uVar3 = uVar4;
      while (uVar3 = uVar3 + 1, uVar3 <= iVar2 - 1U >> 5) {
        puVar1 = (uint *)(*piVar5 + uVar3 * 4 + -4);
        *puVar1 = *puVar1 | *(int *)(*piVar5 + uVar3 * 4) << 0x1f;
        puVar1 = (uint *)(*piVar5 + uVar3 * 4);
        *puVar1 = *puVar1 >> 1;
      }
      iVar2 = *(int *)((int)this + 0x10);
      piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x594) + local_8 * 4)));
      puVar1 = (uint *)(*piVar5 + uVar4 * 4);
      uVar3 = *puVar1;
      *puVar1 = ~uVar6 & uVar3 | uVar3 >> 1 & uVar6;
      uVar3 = uVar4;
      while (uVar3 = uVar3 + 1, uVar3 <= iVar2 - 1U >> 5) {
        puVar1 = (uint *)(*piVar5 + uVar3 * 4 + -4);
        *puVar1 = *puVar1 | *(int *)(*piVar5 + uVar3 * 4) << 0x1f;
        puVar1 = (uint *)(*piVar5 + uVar3 * 4);
        *puVar1 = *puVar1 >> 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)((int)this + 0x28));
  }
  return 1;
}

/* ref: FUN_0068fc50 */
unsigned int F_0068fc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  int local_8;
  
  uVar2 = *(int *)((int)this + 0x584) + 0x1fU >> 5;
  local_c = 0;
  if (uVar2 != 0) {
    local_8 = 0;
    do {
      uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x59c) + local_c * 4)));
      if (uVar1 != 0) {
        uVar3 = 0;
        uVar4 = 1;
        do {
          if ((uVar1 & uVar4) != 0) {
            ((code *)*(gen_code32 *)(*param_1 + 4))
                      (param_1,local_8 + uVar3,
                       *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + (local_8 + uVar3) * 4))));
          }
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
        } while (uVar3 < 0x20);
      }
      local_8 = local_8 + 0x20;
      local_c = local_c + 1;
    } while (local_c < uVar2);
  }
  return 0;
}

/* ref: FUN_0068fce0 */
byte F_0068fce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined * this_00;
  uint in_ecx;
  
  if ((*param_1 == 'b') && (param_1[1] == 'g')) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)((int)this + 0x1e4) =
       *(byte *)((int)this + 0x1e4) ^ (*(byte *)((int)this + 0x1e4) ^ bVar1) & 1;
  this_00 = (undefined *)F_00990ad0(param_1);
  in_ecx = F_009cfa30(this_00,(int)this + 0x70);
  *(uint *)((int)this + 0x234) = in_ecx;
  F_00982b60(in_ecx,(int)this + 0x1e0);
  F_00982b20(this_00);
  *(undefined1 *)((int)this + 0x65) = 2;
  return 1;
}

/* ref: FUN_0068fd50 */
uint F_0068fd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0068b800((undefined *)((int)this + -0x1e0));
  return uVar1;
}

/* ref: FUN_0068fd60 */
unsigned int F_0068fd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + -0x17b) = 0;
  if (*(int *)(in_ecx + 0x54) != 0) {
    F_00982b60(*(int *)(in_ecx + 0x54),0);
    *(undefined4 *)(in_ecx + 0x54) = 0;
  }
  return 0;
}

/* ref: FUN_0068fd90 */
uint F_0068fd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x68fd90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_00990c00(*(undefined4 *)((int)this + 0x234));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    uVar3 = F_00982ce0(*(undefined4 *)((int)this + 0x234));
    if ((char)uVar3 != '\0') {
      pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      uVar3 = (*pcVar1)(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  else {
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::VfxObject::vf6 */
uint F_0068fdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x68fdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x60);
  if (((byte)this[0x1e4] & 1) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00b81ef0(this_00,uVar1);
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc60)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc60)));
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc60)));
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc38)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc38)));
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc38)));
  uVar1 = F_00b81ef0(this_00,&(*(undefined4 *)(gen_frame + 0x20)));
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf15 */
uint F_0068fe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x68fe60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint in_EAX = 0;
  uint uVar4;
  
  if (*(char *)(in_ecx + 0x65) != '\x03') {
    return in_EAX & 0xffffff00;
  }
  fVar2 = *(float *)(in_ecx + 0x34);
  uVar1 = *(undefined4 *)(in_ecx + 0x38);
  fVar3 = *(float *)(in_ecx + 0x23c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(in_ecx + 0x30);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar3 + (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(in_ecx + 0x238);
  uVar4 = F_005ff5c0(param_2,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf14 */
byte F_0068fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68fee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  fVar2 = *(float *)(this + 0x34);
  uVar1 = *(undefined4 *)(this + 0x38);
  fVar3 = *(float *)(this + 0x23c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x30);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar3 + (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x238);
  bVar4 = F_006aeff0(param_1,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
  return bVar4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf18 */
uint F_0068ff60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  fVar1 = *(float *)(uVar5 + 0x34);
  fVar2 = *(float *)(this + 0x34);
  fVar3 = *(float *)(uVar5 + 0x38);
  fVar4 = *(float *)(this + 0x38);
  *param_1 = ((float)GEN_TOF(((float10)*(float *)(uVar5 + 0x30) - (float10)*(float *)(this + 0x30))));
  param_1[1] = (float)((float10)fVar1 - (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 - (float10)fVar4);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_0068ffe0 */
uint F_0068ffe0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x68ffe0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint uVar1;
  
  *(float *)((int)param_1 + 0x218) = param_3;
  *(float *)((int)param_1 + 0x21c) = param_2;
  *(float *)((int)param_1 + 0x220) = param_4;
  *(float *)((int)param_1 + 0x224) = param_5;
  uVar1 = F_0068b800(param_1);
  return uVar1;
}

/* ref: FUN_00690020 */
uint F_00690020(unsigned int gen_a0)
{
  GEN_ENTER(0x690020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x234) != 0) {
    bVar1 = F_00990c00(*(int *)(in_ecx + 0x234));
    if (bVar1 == 0) {
      uVar2 = F_00982ce0(*(undefined4 *)(in_ecx + 0x234));
      if ((char)uVar2 != '\0') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x234) + 0x40))) + 100)));
      }
    }
  }
  return 0;
}

