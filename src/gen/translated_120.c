#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ab1910 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ab1910(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = REFG(float, 0x1087f04);
  if ((char)param_1 != '\0') {
    fVar3 = 0.0;
  }
  uVar1 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
  F_004e7f70(uVar1 GEN_EDX_ARG,fVar3);
  uVar2 = F_004e7cc0(uVar1 GEN_EDX_ARG,fVar3);
  return uVar2;
}

/* ref: FUN_00ab1960 */
GEN_OWN GEN_NOFRAME unsigned int F_00ab1960(void)
{
  GEN_ENTER(0xab1960u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x1c, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined * this;
  int * piVar7;
  float * pfVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  this = REFG(void * PTR32, 0x1379694);
  if (((REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) && (REFG(char, 0x14b5220) == '\x01')) &&
     ((*(uint *)(gen_frame + 0x0)) = 0, REFG(undefined4, 0x14b5264) != 0)) {
    do {
      if ((((*((byte *)GEN_TOP(((&REFG(undefined4, 0x14b5224))[(int)((*(uint *)(gen_frame + 0x0)))] + 0x44))) & 0x40) != 0) &&
          (piVar7 = ((int *)GEN_TOP(F_005f32a0(0x39,(&REFG(undefined4, 0x14b5224))[(int)((*(uint *)(gen_frame + 0x0)))]))), piVar7 != ((int *)GEN_TOP(0x0)))) &&
         ((char)piVar7[0x23] != '\0')) {
        pfVar8 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xe4))))(piVar7 GEN_EDX_ARG)));
        fVar1 = *pfVar8;
        fVar2 = pfVar8[1];
        fVar3 = pfVar8[2];
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xfc))))(piVar7 GEN_EDX_ARG);
        F_00a1e160(&(*(float *)(gen_frame + 0x4)),uVar9 + 0x10);
        pfVar8 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
        fVar4 = (float)((float10)*pfVar8 - (float10)fVar1);
        fVar5 = (float)((float10)pfVar8[2] - (float10)fVar3);
        fVar11 = (float10)fVar5;
        fVar12 = (float10)fVar4;
        fVar6 = (float)(fVar12 * fVar12 + fVar11 * fVar11);
        (*(float *)(gen_frame + 0x8)) = fVar6;
        fVar6 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar6))));
        (*(float *)(gen_frame + 0x8)) = fVar6;
        fVar11 = (float10)fVar6;
        bVar10 = GEN_ISNAN(fVar11) || GEN_ISNAN((float10)0);
        if (bVar10 == (bVar10 || fVar11 == (float10)0)) {
          fVar11 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0x4)))));
          (*(float *)(gen_frame + 0x8)) = (float)fVar11;
          fVar12 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x4)))));
          (*(float *)(gen_frame + 0x8)) = (float)fVar12;
          fVar2 = ((float)GEN_TOF(((float10)(float)fVar12 * (float10)fVar5 +
                         ((float10)(float)((float10)pfVar8[1] - (float10)fVar2) *
                          (float10)*(double *)&REFG(undefined, 0x108bec8) +
                         (float10)(float)fVar11 * (float10)fVar4))));
          (*(float *)(gen_frame + 0x8)) = fVar2;
          if ((float10)fVar2 < (float10)0) {
            (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)*(double *)&REFG(undefined, 0x1080228));
            fVar11 = F_00aed220((float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)*(double *)&REFG(undefined, 0x1080228)));
            (*(float *)(gen_frame + 0x4)) = (float)fVar11;
          }
        }
        fVar11 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0x4)))));
        (*(float *)(gen_frame + 0x8)) = (float)fVar11;
        fVar12 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x4)))));
        (*(float *)(gen_frame + 0x8)) = (float)fVar12;
        fVar13 = (float10)*(double *)&REFG(undefined, 0x10944e0);
        pfVar8 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
        fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)(float)fVar11 * fVar13) +
                                        (float10)fVar1))) - (float10)*pfVar8)));
        fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar13 * (float10)(float)fVar12) +
                                        (float10)fVar3))) - (float10)pfVar8[2])));
        fVar11 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)fVar2)));
        (*(float *)(gen_frame + 0x8)) = (float)fVar11;
        (*(float *)(gen_frame + 0x4)) = (float)fVar11;
        uVar9 = F_00a9fc60(this GEN_EDX_ARG);
        if (((char)uVar9 == '\0') &&
           (uVar15 = *((ulonglong *)GEN_TOP(((int)this + 0x2f08))), uVar14 = F_00427d90(),
           uVar15 < uVar14 - 1000)) {
          fVar11 = (float10)fVar1;
          fVar12 = (float10)fVar2;
          fVar1 = (float)(fVar12 * fVar12 + fVar11 * fVar11);
          (*(float *)(gen_frame + 0x8)) = fVar1;
          fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
          (*(float *)(gen_frame + 0x8)) = fVar1;
          F_00aa2400(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)),fVar1,REFG(float, 0x1088068),0,1);
          uVar15 = F_00427d90();
          *((ulonglong *)GEN_TOP(((int)this + 0x2f08))) = uVar15;
        }
      }
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < REFG(undefined4, 0x14b5264));
  }
  return;
}

/* ref: FUN_00ab1c10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00ab1c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab1c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x20)))) {
    piVar3 = ((int *)GEN_TOP(((int)this + 0xc)));
    do {
      if ((*piVar3 != 0) && (*((char *)GEN_TOP((*piVar3 + 0x65))) != '\x03')) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x20))));
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x4c)))) {
    piVar3 = ((int *)GEN_TOP(((int)this + 0x24)));
    do {
      if (*piVar3 != 0) {
        bVar1 = F_00982b50(*piVar3 GEN_EDX_FWD);
        if (bVar1 == 0) {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x4c))));
  }
  return 1;
}

/* ref: FUN_00ab1c70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab1c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab1c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00aaf890(this GEN_EDX_FWD);
  uVar1 = F_00aaf890(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ab1c90 */
GEN_OWN GEN_FRAME uint F_00ab1c90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1cc0 */
GEN_OWN GEN_FRAME uint F_00ab1cc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1cf0 */
GEN_OWN GEN_FRAME byte F_00ab1cf0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,param_1);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
    uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa4,
                         (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 0x2a))));
    if ((uVar1 != 0) && (*((byte * PTR32 *)GEN_TOP((uVar1 + 4))) != ((byte *)GEN_TOP(0x0)))) {
      return **((byte * PTR32 *)GEN_TOP((uVar1 + 4)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1d50 */
GEN_OWN GEN_FRAME byte F_00ab1d50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,param_1);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
    uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa4,
                         (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 0x2a))));
    if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
      return *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 1)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1db0 */
GEN_OWN GEN_FRAME byte F_00ab1db0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,param_1);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
    uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa4,
                         (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 0x2a))));
    if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
      return *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 6)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1e10 */
GEN_OWN GEN_FRAME byte F_00ab1e10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,param_1);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
    uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa4,
                         (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 0x2a))));
    if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
      return *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 7)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1e70 */
GEN_OWN GEN_FRAME uint F_00ab1e70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x58,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1ea0 */
GEN_OWN GEN_FRAME uint F_00ab1ea0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x59,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1ed0 */
GEN_OWN GEN_FRAME uint F_00ab1ed0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1f00 */
GEN_OWN GEN_FRAME uint F_00ab1f00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x24,param_1 - 100000);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1f30 */
GEN_OWN GEN_FRAME uint F_00ab1f30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x50,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1f60 */
GEN_OWN GEN_FRAME uint F_00ab1f60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x73,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1f90 */
GEN_OWN GEN_FRAME uint F_00ab1f90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x45,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1fc0 */
GEN_OWN GEN_FRAME uint F_00ab1fc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x25,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab1ff0 */
GEN_OWN GEN_FRAME uint F_00ab1ff0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab1ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x39,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2020 */
GEN_OWN GEN_FRAME uint F_00ab2020(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x62,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2050 */
GEN_OWN GEN_FRAME uint F_00ab2050(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x65,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2080 */
GEN_OWN GEN_FRAME uint F_00ab2080(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xf2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab20b0 */
GEN_OWN GEN_FRAME uint F_00ab20b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab20b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xf1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab20e0 */
GEN_OWN GEN_FRAME uint F_00ab20e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab20e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,10,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2110 */
GEN_OWN GEN_FRAME uint F_00ab2110(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2140 */
GEN_OWN GEN_FRAME uint F_00ab2140(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x146,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2170 */
GEN_OWN GEN_FRAME uint F_00ab2170(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x57,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab21a0 */
GEN_OWN GEN_FRAME uint F_00ab21a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab21a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x27,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab21d0 */
GEN_OWN GEN_FRAME uint F_00ab21d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab21d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2200 */
GEN_OWN GEN_FRAME uint F_00ab2200(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x55,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2230 */
GEN_OWN GEN_FRAME uint F_00ab2230(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x26,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2260 */
GEN_OWN GEN_FRAME uint F_00ab2260(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x36,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2290 */
GEN_OWN GEN_FRAME uint F_00ab2290(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x10e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab22c0 */
GEN_OWN GEN_FRAME uint F_00ab22c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab22c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x2c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab22f0 */
GEN_OWN GEN_FRAME uint F_00ab22f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab22f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x1f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2320 */
GEN_OWN GEN_FRAME uint F_00ab2320(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2350 */
GEN_OWN GEN_FRAME uint F_00ab2350(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x1e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2380 */
GEN_OWN GEN_FRAME uint F_00ab2380(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xe7,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab23b0 */
GEN_OWN GEN_FRAME uint F_00ab23b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab23b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xbc,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab23e0 */
GEN_OWN GEN_FRAME uint F_00ab23e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab23e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xdf,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2410 */
GEN_OWN GEN_FRAME uint F_00ab2410(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x44,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2440 */
GEN_OWN GEN_FRAME uint F_00ab2440(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xea,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2470 */
GEN_OWN GEN_FRAME uint F_00ab2470(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x56,param_1 - 2000000);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab24a0 */
GEN_OWN GEN_FRAME uint F_00ab24a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab24a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1;
  if (999999 < param_1) {
    uVar1 = param_1 - 1000000;
  }
  if (uVar1 < 0x18cf) {
    uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9,uVar1);
    if (uVar1 != 0) {
      return *((uint *)GEN_TOP((uVar1 + 4)));
    }
  }
  return 0;
}

/* ref: FUN_00ab24e0 */
GEN_OWN GEN_FRAME uint F_00ab24e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab24e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2510 */
GEN_OWN GEN_FRAME uint F_00ab2510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x52,param_1 - 2000000);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2540 */
GEN_OWN GEN_FRAME uint F_00ab2540(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2570 */
GEN_OWN GEN_FRAME uint F_00ab2570(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x4b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab25a0 */
GEN_OWN GEN_FRAME uint F_00ab25a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab25a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab25d0 */
GEN_OWN GEN_FRAME uint F_00ab25d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab25d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2600 */
GEN_OWN GEN_FRAME uint F_00ab2600(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,6,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2630 */
GEN_OWN GEN_FRAME uint F_00ab2630(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xcd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2660 */
GEN_OWN GEN_FRAME uint F_00ab2660(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x77,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2690 */
GEN_OWN GEN_FRAME uint F_00ab2690(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x28,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab26c0 */
GEN_OWN GEN_FRAME uint F_00ab26c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab26c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x114,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab26f0 */
GEN_OWN GEN_FRAME uint F_00ab26f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab26f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x12,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2720 */
GEN_OWN GEN_FRAME uint F_00ab2720(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x13,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2750 */
GEN_OWN GEN_FRAME uint F_00ab2750(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x47,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2780 */
GEN_OWN GEN_FRAME uint F_00ab2780(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab27b0 */
GEN_OWN GEN_FRAME uint F_00ab27b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab27b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x112,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab27e0 */
GEN_OWN GEN_FRAME uint F_00ab27e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab27e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fce0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x140,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2810 */
GEN_OWN GEN_FRAME uint F_00ab2810(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x142,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2840 */
GEN_OWN GEN_FRAME uint F_00ab2840(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2870 */
GEN_OWN GEN_FRAME uint F_00ab2870(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xae,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab28a0 */
GEN_OWN GEN_FRAME uint F_00ab28a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab28a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x46,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab28d0 */
GEN_OWN GEN_FRAME uint F_00ab28d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab28d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x43,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2900 */
GEN_OWN GEN_FRAME uint F_00ab2900(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2930 */
GEN_OWN GEN_FRAME uint F_00ab2930(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x7e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2960 */
GEN_OWN GEN_FRAME uint F_00ab2960(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x15,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2990 */
GEN_OWN GEN_FRAME uint F_00ab2990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab2990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fce0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,4,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab29c0 */
GEN_OWN GEN_FRAME uint F_00ab29c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab29c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x86,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab29f0 */
GEN_OWN GEN_FRAME uint F_00ab29f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab29f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x135,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2a20 */
GEN_OWN GEN_FRAME uint F_00ab2a20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x48,param_1);
    if (uVar1 != 0) {
      return *((uint *)GEN_TOP((uVar1 + 4)));
    }
  }
  return 0;
}

/* ref: FUN_00ab2a50 */
GEN_OWN GEN_FRAME uint F_00ab2a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x60,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2a80 */
GEN_OWN GEN_FRAME uint F_00ab2a80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x61,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2ab0 */
GEN_OWN GEN_FRAME uint F_00ab2ab0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x75,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2ae0 */
GEN_OWN GEN_FRAME uint F_00ab2ae0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,100,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2b10 */
GEN_OWN GEN_FRAME uint F_00ab2b10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x20,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2b40 */
GEN_OWN GEN_FRAME uint F_00ab2b40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x79,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2b70 */
GEN_OWN GEN_FRAME uint F_00ab2b70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x104,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2ba0 */
GEN_OWN GEN_FRAME uint F_00ab2ba0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xe8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2bd0 */
GEN_OWN GEN_FRAME uint F_00ab2bd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x118,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2c00 */
GEN_OWN GEN_FRAME uint F_00ab2c00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2c30 */
GEN_OWN GEN_FRAME uint F_00ab2c30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x107,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2c60 */
GEN_OWN GEN_FRAME uint F_00ab2c60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x108,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2c90 */
GEN_OWN GEN_FRAME uint F_00ab2c90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x13a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2cc0 */
GEN_OWN GEN_FRAME uint F_00ab2cc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x139,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2cf0 */
GEN_OWN GEN_FRAME uint F_00ab2cf0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x106,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2d20 */
GEN_OWN GEN_FRAME uint F_00ab2d20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x116,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2d50 */
GEN_OWN GEN_FRAME uint F_00ab2d50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x130,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2d80 */
GEN_OWN GEN_FRAME uint F_00ab2d80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd,param_1 - 30000);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2db0 */
GEN_OWN GEN_FRAME uint F_00ab2db0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xc,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2de0 */
GEN_OWN GEN_FRAME uint F_00ab2de0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xe,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2e10 */
GEN_OWN GEN_FRAME uint F_00ab2e10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xf,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2e40 */
GEN_OWN GEN_FRAME uint F_00ab2e40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x22,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2e70 */
GEN_OWN GEN_FRAME uint F_00ab2e70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x23,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2ea0 */
GEN_OWN GEN_FRAME uint F_00ab2ea0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,200,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2ed0 */
GEN_OWN GEN_FRAME uint F_00ab2ed0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x88,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2f00 */
GEN_OWN GEN_FRAME uint F_00ab2f00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x38,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2f30 */
GEN_OWN GEN_FRAME uint F_00ab2f30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2f60 */
GEN_OWN GEN_FRAME uint F_00ab2f60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x9e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2f90 */
GEN_OWN GEN_FRAME uint F_00ab2f90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x69,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2fc0 */
GEN_OWN GEN_FRAME uint F_00ab2fc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab2fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x129,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab2ff0 */
GEN_OWN GEN_FRAME uint F_00ab2ff0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab2ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fce0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x13e,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3020 */
GEN_OWN GEN_FRAME uint F_00ab3020(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x127,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3050 */
GEN_OWN GEN_FRAME uint F_00ab3050(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x125,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3080 */
GEN_OWN GEN_FRAME uint F_00ab3080(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x147,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab30b0 */
GEN_OWN GEN_FRAME uint F_00ab30b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab30b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab30e0 */
GEN_OWN GEN_FRAME uint F_00ab30e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab30e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x10,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3110 */
GEN_OWN GEN_FRAME uint F_00ab3110(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xda,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3140 */
GEN_OWN GEN_FRAME uint F_00ab3140(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x1c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3170 */
GEN_OWN GEN_FRAME uint F_00ab3170(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xca,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab31a0 */
GEN_OWN GEN_FRAME uint F_00ab31a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab31a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x34,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab31d0 */
GEN_OWN GEN_FRAME uint F_00ab31d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab31d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x2a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3200 */
GEN_OWN_GS GEN_FRAME uint F_00ab3200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab3200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
  uVar3 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x2a,param_1);
  uVar4 = 0;
  if ((uVar3 != 0) && (puVar1 = *((uint * PTR32 *)GEN_TOP((uVar3 + 4))), uVar4 = 0, puVar1 != ((uint *)GEN_TOP(0x0)))) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar4 = (uint)uVar5;
  }
  return uVar4;
}

/* ref: FUN_00ab32a0 */
GEN_OWN GEN_FRAME uint F_00ab32a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab32a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x4a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab32d0 */
GEN_OWN GEN_FRAME uint F_00ab32d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab32d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x49,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3300 */
GEN_OWN GEN_FRAME uint F_00ab3300(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x70,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3330 */
GEN_OWN GEN_FRAME uint F_00ab3330(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x3c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3360 */
GEN_OWN GEN_FRAME uint F_00ab3360(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3390 */
GEN_OWN GEN_FRAME uint F_00ab3390(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x7c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab33c0 */
GEN_OWN GEN_FRAME uint F_00ab33c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab33c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x9d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab33f0 */
GEN_OWN GEN_FRAME uint F_00ab33f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab33f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xb2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3420 */
GEN_OWN GEN_FRAME uint F_00ab3420(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3450 */
GEN_OWN GEN_FRAME uint F_00ab3450(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xfd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3480 */
GEN_OWN GEN_FRAME uint F_00ab3480(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x3e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab34b0 */
GEN_OWN GEN_FRAME uint F_00ab34b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab34b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x7a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab34e0 */
GEN_OWN GEN_FRAME uint F_00ab34e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab34e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x7b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3510 */
GEN_OWN GEN_FRAME uint F_00ab3510(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x3f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3540 */
GEN_OWN GEN_FRAME uint F_00ab3540(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x3a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3570 */
GEN_OWN GEN_FRAME uint F_00ab3570(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x3b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab35a0 */
GEN_OWN GEN_FRAME uint F_00ab35a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab35a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x5e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab35d0 */
GEN_OWN GEN_FRAME uint F_00ab35d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab35d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x91,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3600 */
GEN_OWN GEN_FRAME uint F_00ab3600(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x123,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3630 */
GEN_OWN GEN_FRAME uint F_00ab3630(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xbd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3660 */
GEN_OWN GEN_FRAME uint F_00ab3660(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xc0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3690 */
GEN_OWN GEN_FRAME uint F_00ab3690(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x148,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab36c0 */
GEN_OWN GEN_FRAME uint F_00ab36c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab36c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x2b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab36f0 */
GEN_OWN GEN_FRAME uint F_00ab36f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab36f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3720 */
GEN_OWN GEN_FRAME uint F_00ab3720(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x12a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3750 */
GEN_OWN GEN_FRAME uint F_00ab3750(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x12e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3780 */
GEN_OWN GEN_FRAME uint F_00ab3780(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab37b0 */
GEN_OWN GEN_FRAME uint F_00ab37b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab37b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x11e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab37e0 */
GEN_OWN GEN_FRAME uint F_00ab37e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab37e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x51,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3810 */
GEN_OWN GEN_FRAME uint F_00ab3810(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x76,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3840 */
GEN_OWN GEN_FRAME uint F_00ab3840(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd6,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3870 */
GEN_OWN GEN_FRAME uint F_00ab3870(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab38a0 */
GEN_OWN GEN_FRAME uint F_00ab38a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab38a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x8a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab38d0 */
GEN_OWN GEN_FRAME uint F_00ab38d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab38d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x98,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3900 */
GEN_OWN GEN_FRAME uint F_00ab3900(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x12f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3930 */
GEN_OWN GEN_FRAME uint F_00ab3930(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x7f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3960 */
GEN_OWN GEN_FRAME uint F_00ab3960(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x82,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3990 */
GEN_OWN GEN_FRAME uint F_00ab3990(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x1b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab39c0 */
GEN_OWN GEN_FRAME uint F_00ab39c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab39c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x83,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab39f0 */
GEN_OWN GEN_FRAME uint F_00ab39f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab39f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x84,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3a20 */
GEN_OWN GEN_FRAME uint F_00ab3a20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x85,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3a50 */
GEN_OWN GEN_FRAME uint F_00ab3a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x96,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3a80 */
GEN_OWN GEN_FRAME uint F_00ab3a80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x97,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3ab0 */
GEN_OWN GEN_FRAME uint F_00ab3ab0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3ae0 */
GEN_OWN GEN_FRAME uint F_00ab3ae0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x8b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3b10 */
GEN_OWN GEN_FRAME uint F_00ab3b10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x13d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3b40 */
GEN_OWN GEN_FRAME uint F_00ab3b40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x8e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3b70 */
GEN_OWN GEN_FRAME uint F_00ab3b70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x8d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3ba0 */
GEN_OWN GEN_FRAME uint F_00ab3ba0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x109,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3bd0 */
GEN_OWN GEN_FRAME uint F_00ab3bd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x9b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3c00 */
GEN_OWN GEN_FRAME uint F_00ab3c00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x35,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3c30 */
GEN_OWN GEN_FRAME uint F_00ab3c30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3c60 */
GEN_OWN GEN_FRAME uint F_00ab3c60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,299,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3c90 */
GEN_OWN GEN_FRAME uint F_00ab3c90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3cc0 */
GEN_OWN GEN_FRAME uint F_00ab3cc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x137,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3cf0 */
GEN_OWN GEN_FRAME uint F_00ab3cf0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x149,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3d20 */
GEN_OWN GEN_FRAME uint F_00ab3d20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x92,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3d50 */
GEN_OWN GEN_FRAME uint F_00ab3d50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x94,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3d80 */
GEN_OWN GEN_FRAME uint F_00ab3d80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xab,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3db0 */
GEN_OWN GEN_FRAME uint F_00ab3db0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xfb,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3de0 */
GEN_OWN GEN_FRAME uint F_00ab3de0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xb3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3e10 */
GEN_OWN GEN_FRAME uint F_00ab3e10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab3e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd7,param_1);
  uVar3 = 0;
  if ((uVar2 != 0) && (puVar1 = *((uint * PTR32 *)GEN_TOP((uVar2 + 4))), uVar3 = 0, puVar1 != ((uint *)GEN_TOP(0x0)))) {
    uVar3 = F_0042e430(param_2 GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1);
  }
  return uVar3;
}

/* ref: FUN_00ab3e50 */
GEN_OWN GEN_FRAME uint F_00ab3e50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xb1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3e80 */
GEN_OWN GEN_FRAME uint F_00ab3e80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xce,param_1 - 0x120000);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3eb0 */
GEN_OWN GEN_FRAME uint F_00ab3eb0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xc3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3ee0 */
GEN_OWN GEN_FRAME uint F_00ab3ee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xc4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3f10 */
GEN_OWN GEN_FRAME uint F_00ab3f10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xc9,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3f40 */
GEN_OWN GEN_FRAME uint F_00ab3f40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3f70 */
GEN_OWN GEN_FRAME uint F_00ab3f70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xe1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3fa0 */
GEN_OWN GEN_FRAME uint F_00ab3fa0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab3fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xe0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab3fd0 */
GEN_OWN GEN_FRAME uint F_00ab3fd0(GEN_P(char param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab3fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  if (param_1 == '\x01') {
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
    if (param_3 != '\0') {
      uVar2 = F_0052ff60(this GEN_EDX_ARG,0xf4,param_2);
      iVar1 = REFG(int, 0x137104c);
      goto joined_r0x00ab405c;
    }
    uVar3 = 0xf5;
  }
  else if (param_1 == '\x02') {
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
    if (param_3 == '\0') {
      uVar3 = 0xf7;
    }
    else {
      uVar3 = 0xf6;
    }
  }
  else {
    if (param_1 != '\x03') {
      return 0;
    }
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8)));
    if (param_3 == '\0') {
      uVar3 = 0xf9;
    }
    else {
      uVar3 = 0xf8;
    }
  }
  uVar2 = F_0052ff60(this GEN_EDX_ARG,uVar3,param_2);
  iVar1 = REFG(int, 0x137104c);
joined_r0x00ab405c: ;
  if (uVar2 == 0) {
    REFG(int, 0x137104c) = iVar1;
    return 0;
  }
  REFG(int, 0x137104c) = iVar1;
  return *((uint *)GEN_TOP((uVar2 + 4)));
}

/* ref: FUN_00ab4070 */
GEN_OWN GEN_FRAME uint F_00ab4070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xe3,param_1 - 0x160000);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab40a0 */
GEN_OWN GEN_FRAME uint F_00ab40a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab40a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xb4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab40d0 */
GEN_OWN GEN_FRAME uint F_00ab40d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab40d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x10d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4100 */
GEN_OWN GEN_FRAME uint F_00ab4100(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x10c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4130 */
GEN_OWN GEN_FRAME uint F_00ab4130(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x119,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4160 */
GEN_OWN GEN_FRAME uint F_00ab4160(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x10b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4190 */
GEN_OWN GEN_FRAME uint F_00ab4190(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x131,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab41c0 */
GEN_OWN GEN_FRAME uint F_00ab41c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab41c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x132,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab41f0 */
GEN_OWN GEN_FRAME uint F_00ab41f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab41f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x133,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4220 */
GEN_OWN GEN_FRAME uint F_00ab4220(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x13c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4250 */
GEN_OWN GEN_FRAME uint F_00ab4250(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x141,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4280 */
GEN_OWN GEN_FRAME uint F_00ab4280(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x128,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab42b0 */
GEN_OWN GEN_FRAME uint F_00ab42b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab42b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xb5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab42e0 */
GEN_OWN GEN_FRAME uint F_00ab42e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab42e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xbb,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4310 */
GEN_OWN GEN_FRAME uint F_00ab4310(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x138,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4340 */
GEN_OWN GEN_FRAME uint F_00ab4340(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x13b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00ab4370 */
GEN_OWN GEN_NOFRAME uint F_00ab4370(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xab4370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x280, 0);
  char cVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  F_00990c20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6f,param_1);
  if (uVar2 == 0) {
    puVar5 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar5 = *((uint * PTR32 *)GEN_TOP((uVar2 + 4)));
  }
  if ((param_2 != 0) && (param_3 != ((int *)GEN_TOP(0x0)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x98))))(param_3 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      F_00990c50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 0x88))),0xffffffff,param_5);
      F_00990ca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*(ushort *)(param_3 + 0x22),0xffffffff,0);
      if (puVar5 != ((uint *)GEN_TOP(0x0))) {
        pcVar4 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
        pcVar3 = pcVar4;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (pcVar3 != pcVar4 + 1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x100,((char *)REFP(0x10e8fac)),pcVar4);
          uVar2 = F_009cfc30(((undefined1 *)(gen_frame + 0x168)),((undefined1 *)(gen_frame + 0x0)),2,param_4);
          F_00982d70();
          return uVar2;
        }
      }
    }
  }
  F_00982d70();
  return 0;
}

/* ref: FUN_00ab44e0 */
GEN_OWN GEN_NOFRAME uint F_00ab44e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xab44e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_FRAME_DECL(0x284, 12);
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x270)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x274);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_4);
  F_00990c20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar3 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6f,param_1);
  if ((uVar3 != 0) && (puVar2 = *((uint * PTR32 *)GEN_TOP((uVar3 + 4))), puVar2 != ((uint *)GEN_TOP(0x0)))) {
    pcVar5 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar5 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x16c)),0x100,((char *)REFP(0x10e8fc4)),pcVar5);
      uVar3 = F_009cfd00(((undefined1 *)(gen_frame + 0x16c)),2,(*(undefined4 *)(gen_frame + 0x0)),*param_2,param_2[1],param_2[2],param_3,param_3,
                           param_3,(float)(float10)0);
      F_00982d70();
      return uVar3;
    }
  }
  F_00982d70();
  return 0;
}

/* ref: FUN_00ab4610 */
GEN_OWN GEN_NOFRAME uint F_00ab4610(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab4610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL(0x280, 0);
  char cVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  F_00990c20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6f,param_1);
  if (uVar2 == 0) {
    puVar5 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar5 = *((uint * PTR32 *)GEN_TOP((uVar2 + 4)));
  }
  if ((param_2 != 0) &&
     (F_00990c50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_2 + 0x88))),0xffffffff,1), puVar5 != ((uint *)GEN_TOP(0x0)))
     ) {
    pcVar4 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar4 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x100,((char *)REFP(0x10e8fdc)),pcVar4);
      uVar2 = F_009cfc30(((undefined1 *)(gen_frame + 0x168)),((undefined1 *)(gen_frame + 0x0)),2,param_3);
      F_00982d70();
      return uVar2;
    }
  }
  F_00982d70();
  return 0;
}

/* ref: FUN_00ab4730 */
GEN_OWN GEN_NOFRAME uint F_00ab4730(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xab4730u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_FRAME_DECL(0x2d0, 0);
  char cVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  float * pfVar8;
  float * pfVar9;
  
  (*(uint *)(gen_frame + 0x2bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c0);
  (*(undefined1 *)(gen_frame + 0x48)) = param_7;
  *(undefined4 *)&(*(undefined1 *)(gen_frame + 0x48)) = CONCAT31((*(undefined3 *)(gen_frame + 0x49)),param_7);
  F_00990c20(((float *)(gen_frame + 0x50)) GEN_EDX_ARG);
  puVar3 = ((uint *)GEN_TOP(F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x6f,param_1)));
  if (puVar3 == ((uint *)GEN_TOP(0x0))) {
    (*(uint * PTR32 *)(gen_frame + 0x4c)) = puVar3;
  }
  else {
    (*(uint * PTR32 *)(gen_frame + 0x4c)) = ((uint *)GEN_TOP(puVar3[1]));
  }
  if (param_2 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x98))))(param_2 GEN_EDX_ARG);
    if ((char)uVar4 != '\0') {
      uVar2 = *(ushort *)(param_2 + 0x22);
      ((float *)(gen_frame + 0x0))[1] = 0.0;
      ((float *)(gen_frame + 0x0))[2] = 0.0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(float *)(gen_frame + 0x30)) = param_3;
      (*(float *)(gen_frame + 0x34)) = param_4;
      ((float *)(gen_frame + 0x0))[0] = param_6;
      (*(float *)(gen_frame + 0x14)) = param_6;
      (*(float *)(gen_frame + 0x28)) = param_6;
      (*(float *)(gen_frame + 0x38)) = param_5;
      F_00990c50(((float *)(gen_frame + 0x50)) GEN_EDX_ARG,(uint)uVar2,0xffffffff,0);
      pfVar8 = ((float *)(gen_frame + 0x0));
      pfVar9 = ((float *)(gen_frame + 0x50));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      if ((*(uint * PTR32 *)(gen_frame + 0x4c)) != ((uint *)GEN_TOP(0x0))) {
        pcVar7 = ((char *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x4c)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x4c)))));
        pcVar5 = pcVar7;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 != pcVar7 + 1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x1b8)),0x100,((char *)REFP(0x10e8ff4)),pcVar7);
          uVar4 = F_009cfc30(((undefined1 *)(gen_frame + 0x1b8)),((float *)(gen_frame + 0x50)),2,(char)*(undefined4 *)&(*(undefined1 *)(gen_frame + 0x48)));
          F_00982d70();
          return uVar4;
        }
      }
    }
  }
  F_00982d70();
  return 0;
}

/* ref: FUN_00ab4900 */
GEN_OWN GEN_NOFRAME uint F_00ab4900(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xab4900u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_FRAME_DECL(0x294, 12);
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  uint * puVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x280)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x284);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_7);
  F_00990c20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  uVar3 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x112,param_1);
  if ((uVar3 == 0) || (puVar2 = *((uint * PTR32 *)GEN_TOP((uVar3 + 4))), puVar2 == ((uint *)GEN_TOP(0x0)))) {
LAB_00ab4991: ;
    F_00982d70();
    return 0;
  }
  pcVar7 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == pcVar7 + 1) goto LAB_00ab4991;
  if (param_6 == '\0') {
    puVar6 = puVar2 + 1;
    pcVar5 = ((char *)GEN_TOP(((puVar2[1] & 0xffffff) + (int)puVar6)));
    pcVar4 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 != pcVar4) {
      pcVar7 = ((char *)GEN_TOP(((*puVar6 & 0xffffff) + (int)puVar6)));
      pcVar4 = "vfx/omen/eff/%s.avfx";
      goto override_prt_ab4a1b_112095b4;
    }
  }
  pcVar4 = "vfx/omen/eff/%s.avfx";
override_prt_ab4a1b_112095b4: ;
  F_00c472af(((undefined1 *)(gen_frame + 0x17c)),0x100,pcVar4,pcVar7);
  uVar3 = F_009cfd00(((undefined1 *)(gen_frame + 0x17c)),2,(*(undefined4 *)(gen_frame + 0x0)),*param_2,param_2[1],param_2[2],param_4,param_4,param_5,
                       param_3);
  F_00982d70();
  return uVar3;
}

/* ref: FUN_00ab4aa0 */
GEN_OWN GEN_NOFRAME uint F_00ab4aa0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x280, 0);
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  F_00990c20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x112,param_1);
  if ((uVar3 != 0) && (puVar2 = *((uint * PTR32 *)GEN_TOP((uVar3 + 4))), puVar2 != ((uint *)GEN_TOP(0x0)))) {
    pcVar5 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar5 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x100,((char *)REFP(0x10e903c)),pcVar5);
      uVar3 = F_00990ad0(((undefined1 *)(gen_frame + 0x168)));
      F_00982d70();
      return uVar3;
    }
  }
  F_00982d70();
  return 0;
}

/* ref: FUN_00ab4b90 */
GEN_OWN GEN_FRAME unsigned int F_00ab4b90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(int, 0x14bcc68) != 0) {
    F_00ab0810(((undefined *)GEN_TOP((REFG(int, 0x14bcc68) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00ab4bb0 */
GEN_OWN GEN_FRAME unsigned int F_00ab4bb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xab4bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  if (REFG(int, 0x14bcc68) != 0) {
    F_00ab09a0(REFG(int, 0x14bcc68) GEN_EDX_ARG,param_1,param_2,(undefined1)param_3,(undefined1)param_4,param_5,
                 param_6,param_7);
  }
  return;
}

/* ref: FUN_00ab4be0 */
GEN_OWN GEN_FRAME unsigned int F_00ab4be0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab4be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  
  if (((REFG(int, 0x14bcc68) != 0) && (param_2 < *((uint *)GEN_TOP((REFG(int, 0x14bcc68) + 8))))) &&
     (iVar1 = param_2 * 0x50 + *((int *)GEN_TOP((REFG(int, 0x14bcc68) + 0xa0))), *((int *)GEN_TOP((iVar1 + 0x48))) != 1)) {
    *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
    *((undefined1 *)GEN_TOP((iVar1 + 0x16))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = 0;
    *((undefined1 *)GEN_TOP((iVar1 + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x48))) = 0;
    *((undefined2 *)GEN_TOP((iVar1 + 0x10))) = 0;
    *((undefined2 *)GEN_TOP((iVar1 + 0x12))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x30))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x34))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x40))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x44))) = 0;
  }
  return;
}

/* ref: FUN_00ab4c40 */
GEN_OWN GEN_FRAME unsigned int F_00ab4c40(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab4c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if ((REFG(int, 0x14bcc68) != 0) && (param_1 < *((uint *)GEN_TOP((REFG(int, 0x14bcc68) + 8))))) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x14bcc68) + 0xa0))) + 0x48 + param_1 * 0x50))) = param_2;
  }
  return;
}

/* ref: FUN_00ab4c70 */
GEN_OWN GEN_NOFRAME uint F_00ab4c70(void)
{
  GEN_ENTER(0xab4c70u, 0u, 0u, 0u, 0u);
  int * piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (REFG(int, 0x14bcc68) != 0) {
    uVar7 = 0;
    piVar1 = ((int *)GEN_TOP((REFG(int, 0x14bcc68) + 0xa0)));
    if (*((int *)GEN_TOP((REFG(int, 0x14bcc68) + 8))) != 0) {
      iVar6 = 0;
      iVar5 = REFG(int, 0x14bcc68);
      do {
        uVar2 = *((ushort *)GEN_TOP((iVar6 + 0x10 + *piVar1)));
        if ((((uVar2 != 0) && (1000 < uVar2)) &&
            (uVar4 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x85,(uint)uVar2),
            iVar5 = REFG(int, 0x14bcc68), uVar4 != 0)) &&
           (((iVar3 = *((int *)GEN_TOP((uVar4 + 4))), iVar3 != 0 && (*((short *)GEN_TOP((iVar3 + 4))) != 0)) &&
            (*((short *)GEN_TOP((iVar3 + 4))) != 1)))) {
          return (uint)*((ushort *)GEN_TOP((iVar3 + 4)));
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x50;
      } while (uVar7 < *((uint *)GEN_TOP((iVar5 + 8))));
    }
  }
  return 0;
}

/* ref: FUN_00ab4cf0 */
GEN_OWN GEN_FRAME float F_00ab4cf0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd4,param_1);
  if ((uVar1 != 0) && (*((float * PTR32 *)GEN_TOP((uVar1 + 4))) != ((float *)GEN_TOP(0x0)))) {
    return **((float * PTR32 *)GEN_TOP((uVar1 + 4)));
  }
  return 0.0;
}

/* ref: FUN_00ab4dc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab4dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab4dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_FWD,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x14))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = uVar2;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
  return 0;
}

/* ref: FUN_00ab4e30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ab4e30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab4e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x83,param_1 & 0xffff);
  if ((uVar2 != 0) && (puVar1 = *((uint * PTR32 *)GEN_TOP((uVar2 + 4))), puVar1 != ((uint *)GEN_TOP(0x0)))) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_00ab4e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab4e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab4e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int local_8;
  
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined1 *)this = 0;
  local_8 = 1;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x30)));
  do {
    uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xd4,3);
    if ((uVar1 == 0) || (*((undefined4 * PTR32 *)GEN_TOP((uVar1 + 4))) == ((undefined4 *)GEN_TOP(0x0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = **((undefined4 * PTR32 *)GEN_TOP((uVar1 + 4)));
    }
    *puVar3 = uVar4;
    puVar2[-9] = 0;
    puVar2[-7] = 0;
    *(undefined1 *)(puVar2 - 6) = 0;
    puVar2[-5] = 0;
    puVar2[-4] = 0;
    *(undefined2 *)(puVar2 - 3) = 0;
    *(undefined2 *)(puVar2 - 8) = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar2[5] = GEN_FLT_TO(puVar2[5], REFG(float, 0x1087f04));
    puVar3 = puVar3 + 0x10;
    puVar2 = puVar2 + 0x10;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = uVar4;
  return (uint)this;
}

/* ref: FUN_00ab4f20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ab4f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab4f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = (int)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined1 *)this = 0;
  *((int *)GEN_TOP(((int)this + 0x88))) = iVar4;
  piVar3 = ((int *)GEN_TOP(((int)this + 0x1c)));
  iVar4 = 2;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar3));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_FWD,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar3)) + 0x78))))(((int *)GEN_TOP(*piVar3)) GEN_EDX_ARG,500);
      *piVar3 = 0;
    }
    piVar3[9] = 0;
    iVar2 = (int)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    piVar3[-4] = 0;
    piVar3[1] = 0;
    *(undefined2 *)(piVar3 + 2) = 0;
    piVar3[10] = iVar2;
    *(undefined2 *)(piVar3 - 3) = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[-2] = 0;
    *(undefined1 *)(piVar3 - 1) = 0;
    piVar3 = piVar3 + 0x10;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00ab4fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab4fc0(GEN_P(byte * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xab4fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  iVar4 = 0;
  local_8 = 0;
  if (param_4 == '\x03') {
    local_8 = 1;
  }
  else if (param_2 == '\x03') {
    local_8 = 2;
  }
  else if ((*(int *)(param_1 + (uint)*param_1 * 0x40 + 0x1c) == 0) ||
          (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + (uint)*param_1 * 0x40 + 0x1c) + 0x7c))))
                             (*(int * PTR32 *)(param_1 + (uint)*param_1 * 0x40 + 0x1c) GEN_EDX_ARG),
          (char)uVar3 == '\0')) {
    local_8 = 3;
  }
  else {
    uVar3 = F_00530100(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x96);
    if (0 < (int)uVar3) {
      do {
        uVar2 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x96,iVar4);
        if ((((uVar2 != 0) && (puVar1 = *((uint * PTR32 *)GEN_TOP((uVar2 + 4))), puVar1 != ((uint *)GEN_TOP(0x0)))) &&
            (*puVar1 == (uint)param_3)) && (puVar1[1] == (uint)param_5)) {
          local_8 = puVar1[2];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar3);
    }
  }
  uVar3 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x97,local_8);
  if (uVar3 != 0) {
    return *((uint *)GEN_TOP((uVar3 + 4)));
  }
  return 0;
}

/* ref: FUN_00ab50b0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00ab50b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab50b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x83,param_1 & 0xffff);
  if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 4))) != 0)) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 8)));
  }
  return 0;
}

/* ref: FUN_00ab50f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ab50f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab50f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0xb4))) != '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 3;
    return;
  }
  uVar1 = F_00ab0c40();
  *((uint *)GEN_TOP(((int)this + 0xb0))) = uVar1;
  return;
}

/* ref: FUN_00ab5120 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab5120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab5120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 199))) != '\0') {
    if (*((char *)GEN_TOP(((int)this + 0xc6))) == '\0') {
      *((undefined1 *)GEN_TOP(((int)this + 199))) = 0;
    }
    if (*((char *)GEN_TOP(((int)this + 199))) != '\0') goto LAB_00ab5154;
  }
  if (*((char *)GEN_TOP(((int)this + 0xc6))) != '\0') {
    F_00ab0a20(this GEN_EDX_FWD,0,6);
  }
LAB_00ab5154: ;
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x1b0);
  if (((*((int *)GEN_TOP((uVar1 + 0x14))) != 1) && (4 < *((uint *)GEN_TOP(((int)this + 8))))) &&
     (uVar1 = *((uint *)GEN_TOP(((int)this + 0xa0))), *((int *)GEN_TOP((uVar1 + 0x188))) != 1)) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x14c))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x156))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x158))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x16c))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x188))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x150))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x170))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x174))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x178))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x180))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x184))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab51d0 */
GEN_OWN GEN_FRAME uint F_00ab51d0(void)
{
  GEN_ENTER(0xab51d0u, 0u, 0u, 0u, 0u);
  uint * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  undefined4 * puVar7;
  int * piVar8;
  char cVar9;
  char * pcVar10;
  int iVar11;
  uint local_10;
  uint local_8;
  
  REFG(int * PTR32, 0x14bcc6c) = ((int *)GEN_TOP(F_00406b90(0x1c,0,0)));
  if (REFG(int * PTR32, 0x14bcc6c) == ((int *)GEN_TOP(0x0))) {
    REFG(int * PTR32, 0x14bcc6c) = ((int *)GEN_TOP(0x0));
  }
  else {
    *REFG(int * PTR32, 0x14bcc6c) = 0;
    REFG(int * PTR32, 0x14bcc6c)[1] = 0;
    REFG(int * PTR32, 0x14bcc6c)[2] = 0;
    REFG(int * PTR32, 0x14bcc6c)[3] = 0;
  }
  uVar4 = F_00530100(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x75);
  F_00aba8d0(REFG(int * PTR32, 0x14bcc6c) GEN_EDX_ARG,uVar4);
  local_8 = 0;
  if (uVar4 != 0) {
    do {
      uVar5 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x75,local_8);
      if ((uVar5 == 0) || (puVar1 = *((uint * PTR32 *)GEN_TOP((uVar5 + 4))), puVar1 == ((uint *)GEN_TOP(0x0)))) {
LAB_00ab52a3: ;
        REFG(int * PTR32, 0x14bcc6c)[1] = REFG(int * PTR32, 0x14bcc6c)[1] - 1;
      }
      else {
        pcVar10 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
        if ((pcVar10 == ((char *)GEN_TOP(0x0))) || (*pcVar10 == '\0')) goto LAB_00ab52a3;
        cVar9 = *pcVar10;
        iVar11 = 0;
        if (cVar9 != '\0') {
          pcVar6 = pcVar10 + (-(int)puVar1 - (*puVar1 & 0xffffff));
          do {
            pcVar6 = pcVar6 + 1;
            pcVar10 = pcVar10 + 1;
            iVar11 = iVar11 + (int)cVar9 * (int)pcVar6;
            cVar9 = *pcVar10;
          } while (cVar9 != '\0');
        }
        *((int *)GEN_TOP((*REFG(int * PTR32, 0x14bcc6c) + local_8 * 8))) = iVar11;
        *((uint * PTR32 *)GEN_TOP((*REFG(int * PTR32, 0x14bcc6c) + 4 + local_8 * 8))) = puVar1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar4);
  }
  F_00aba940(REFG(int * PTR32, 0x14bcc6c) GEN_EDX_ARG);
  uVar5 = F_00530100(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x60);
  piVar8 = REFG(int * PTR32, 0x14bcc6c);
  REFG(int * PTR32, 0x14bcc6c)[3] = uVar5;
  puVar7 = ((undefined4 *)GEN_TOP(F_00406bb0(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar5 * 8),0,0)));
  puVar2 = puVar7;
  uVar4 = uVar5;
  if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar7 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    while (-1 < (int)(uVar4 - 1)) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      uVar4 = uVar4 - 1;
    }
  }
  piVar8[2] = (int)puVar7;
  local_10 = 0;
  if (uVar5 != 0) {
    local_8 = 0;
    do {
      uVar4 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x60,local_10);
      if ((uVar4 == 0) || (puVar1 = *((uint * PTR32 *)GEN_TOP((uVar4 + 4))), puVar1 == ((uint *)GEN_TOP(0x0)))) {
LAB_00ab53b0: ;
        REFG(int * PTR32, 0x14bcc6c)[3] = REFG(int * PTR32, 0x14bcc6c)[3] - 1;
      }
      else {
        pcVar10 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
        if ((pcVar10 == ((char *)GEN_TOP(0x0))) || (*pcVar10 == '\0')) goto LAB_00ab53b0;
        cVar9 = *pcVar10;
        iVar11 = 0;
        if (cVar9 != '\0') {
          pcVar6 = pcVar10 + (-(int)puVar1 - (*puVar1 & 0xffffff));
          do {
            pcVar6 = pcVar6 + 1;
            pcVar10 = pcVar10 + 1;
            iVar11 = iVar11 + (int)cVar9 * (int)pcVar6;
            cVar9 = *pcVar10;
          } while (cVar9 != '\0');
        }
        *((int *)GEN_TOP((local_8 + REFG(int * PTR32, 0x14bcc6c)[2]))) = iVar11;
        *((uint * PTR32 *)GEN_TOP((REFG(int * PTR32, 0x14bcc6c)[2] + 4 + local_8))) = puVar1;
        local_8 = local_8 + 8;
      }
      local_10 = local_10 + 1;
    } while (local_10 < uVar5);
  }
  F_00abaaa0(REFG(int * PTR32, 0x14bcc6c) + 2 GEN_EDX_ARG);
  uVar4 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x2c,0);
  piVar3 = REFG(int * PTR32, 0x14bcc6c);
  piVar8 = ((int *)GEN_TOP(0x0));
  if (uVar4 != 0) {
    piVar8 = *((int * PTR32 *)GEN_TOP((uVar4 + 4)));
  }
  REFG(int * PTR32, 0x14bcc6c)[4] = *piVar8;
  piVar3[5] = piVar8[1];
  uVar4 = piVar8[2];
  piVar3[6] = uVar4;
  return uVar4;
}

/* ref: FUN_00ab5410 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ab5410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xab5410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ab0f60(this GEN_EDX_FWD,param_1);
  F_00ab0fb0(this GEN_EDX_ARG,param_2);
  return;
}

/* ref: FUN_00ab5430 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ab5430(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab5430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x58,param_2);
  if ((uVar3 != 0) && (iVar2 = *((int *)GEN_TOP((uVar3 + 4))), iVar2 != 0)) {
    uVar1 = *((ushort *)GEN_TOP((iVar2 + 0x1c)));
    if (*((char *)GEN_TOP((iVar2 + 0x22))) == '\0') {
      if ((-1 < (short)uVar1) && (uVar1 < 0x14)) {
        return *((byte *)GEN_TOP(((uint)param_3 + ((short)uVar1 + 0x50) * 0x20 + param_1)));
      }
    }
    else if ((-1 < (short)uVar1) && (uVar1 < 0xa0)) {
      return *((byte *)GEN_TOP(((uint)param_3 + (short)uVar1 * 0x10 + param_1)));
    }
  }
  return 1;
}

/* ref: FUN_00ab54c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab54c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xab54c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x20, 0);
  int iVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 * puVar4;
  
  if (*((char *)GEN_TOP(((int)this + 0xc80))) == '\0') {
    uVar3 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x58,param_3);
    in_EAX = 0;
    if ((uVar3 != 0) && (iVar1 = *((int *)GEN_TOP((uVar3 + 4))), in_EAX = 0, iVar1 != 0)) {
      bVar2 = F_00ab10a0(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar1 + 0x1c))),(undefined1)param_2,
                           *((undefined1 *)GEN_TOP((iVar1 + 0x22))));
      in_EAX = CONCAT31(extraout_var,bVar2);
      if ((bVar2 == 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
        puVar4 = ((undefined4 *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG)));
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
        (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
        in_EAX = F_00ab0ff0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00ab5570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab5570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab5570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  int local_8;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  puVar2 = ((uint *)GEN_TOP(((int)this + 0x80)));
  local_8 = 3;
  do {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) + 8))))
                                (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x14))) GEN_EDX_ARG,0x750,0x10)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_006ae690(this_00 GEN_EDX_ARG);
    }
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  return uVar1;
}

/* ref: FUN_00ab5620 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab5620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab5620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  uVar1 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
  F_004e7f70(uVar1 GEN_EDX_FWD,(float)(float10)0);
  uVar2 = F_004e7cc0(uVar1 GEN_EDX_ARG,(float)(float10)0);
  return uVar2;
}

/* ref: Global::ReadInitZone */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab56a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab56a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  
  (*(int * PTR32 *)(gen_frame + 0x3c)) = REFG(int * PTR32, 0x1379694);
  if ((*((byte *)GEN_TOP((param_1 + 0xd))) & 6) != 0) {
    REFG(undefined1, 0x1338ad4) = 0;
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_FWD)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xa8))))(piVar3 GEN_EDX_ARG,0,0,1);
  (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(((int)this + 0x80)));
  (*(int * PTR32 *)(gen_frame + 0x34)) = ((int *)GEN_TOP(0x3));
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x38)))) + 4))))(((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x38)))) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 1;
    piVar3 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x34)) - 1)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
  } while (piVar3 != ((int *)GEN_TOP(0x0)));
  if ((*(int * PTR32 *)(gen_frame + 0x3c)) != ((int *)GEN_TOP(0x0))) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x7c)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x7c)));
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
      }
    }
    *((int *)GEN_TOP(((int)this + 0x7c))) = (*(int * PTR32 *)(gen_frame + 0x3c))[0x3b];
    iVar1 = (*(int * PTR32 *)(gen_frame + 0x3c))[0x3b];
    if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 200))) != 0)) {
      F_006b2f70(((undefined *)GEN_TOP((iVar1 + 0x90))) GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x38))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,0);
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(((int)this + 0x80)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = (*(int * PTR32 *)(gen_frame + 0x3c)) + 0x5ac;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
    (*(int *)(gen_frame + 0x30)) = 3;
    do {
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x34));
      (*(int *)(gen_frame + 0x28)) = iVar1;
      if (iVar1 != 0 || (*(int * PTR32 *)(gen_frame + 0x34))[1] != 0) {
        (*(int *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x34))[1];
        pvVar5 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x38))));
        (*(int *)(gen_frame + 0x0)) = iVar1;
        F_006ac620(pvVar5 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
        F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,*(*(int * PTR32 *)(gen_frame + 0x38)));
        F_00690620(((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x38)))) GEN_EDX_ARG);
        puVar4 = ((undefined4 *)GEN_TOP(F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG)));
        iVar1 = *(*(int * PTR32 *)(gen_frame + 0x38));
        *((undefined4 *)GEN_TOP((iVar1 + 0x30))) = *puVar4;
        *((undefined4 *)GEN_TOP((iVar1 + 0x34))) = puVar4[1];
        *((undefined4 *)GEN_TOP((iVar1 + 0x38))) = puVar4[2];
        *((uint *)GEN_TOP((iVar1 + 0x24))) = *((uint *)GEN_TOP((iVar1 + 0x24))) | 2;
      }
      (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 1;
      (*(int * PTR32 *)(gen_frame + 0x34)) = (*(int * PTR32 *)(gen_frame + 0x34)) + 0x1e8;
      iVar1 = (*(int *)(gen_frame + 0x30)) - 1;
      (*(int *)(gen_frame + 0x30)) = iVar1;
    } while (iVar1 != 0);
  }
  F_00a35550();
  F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x23,1);
  F_005d4d80((uint)*((ushort *)GEN_TOP((param_1 + 2))));
  F_005d4fa0(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_1 + 0xe))),(uint)*((ushort *)GEN_TOP((param_1 + 0x10))),
               (uint)*((ushort *)GEN_TOP((param_1 + 0x12))),(uint)*((ushort *)GEN_TOP((param_1 + 0x14))));
  F_005d4fe0(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((param_1 + 2))),*((undefined4 *)GEN_TOP((param_1 + 4))),0,1,1);
  F_00b7c250(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG,*((undefined1 *)GEN_TOP((param_1 + 0xc))),(uint)*((ushort *)GEN_TOP((param_1 + 2))));
  F_00a375a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  F_00a3a050();
  F_00a37ab0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((param_1 + 0x18)));
  (*(int *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  F_005f4a00(&(*(int *)(gen_frame + 0x0)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 8)));
  (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((param_1 + 0x18)));
  (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((param_1 + 0x1c)));
  uVar7 = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar7;
  F_00b70d10(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG,0);
  if (REFG(int, 0x1375bbc) == -1) {
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(0x0));
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP((&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))]));
  }
  F_00b6ae80((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)1);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)1 + (float10)(*(float *)(gen_frame + 0x14)));
  F_00b6ae50((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
  uVar6 = (uint)*((ushort *)GEN_TOP((param_1 + 2)));
  pvVar5 = ((undefined *)GEN_TOP(F_006b8c00()));
  F_006ebf80(pvVar5 GEN_EDX_ARG,uVar6);
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x34)) = piVar3;
  uVar7 = 0x1c;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
  pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar6 GEN_EDX_ARG,uVar7)));
  if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
    F_008b8590(pvVar5 GEN_EDX_ARG);
  }
  F_00a6d810(&REFG(undefined, 0x14ab380) GEN_EDX_ARG,4);
  *((byte *)GEN_TOP(((int)this + 0x30))) = *((byte *)GEN_TOP((param_1 + 0xd))) & 1;
  iVar1 = REFG(int, 0x14bcc68);
  if (REFG(int, 0x14bcc68) != 0) {
    *((undefined4 *)GEN_TOP((REFG(int, 0x14bcc68) + 0xc0))) = 0;
    *((undefined2 *)GEN_TOP((iVar1 + 0xc4))) = 0;
  }
  (*(int *)(gen_frame + 0x30)) = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
  F_004e7f70(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,(float)(float10)0);
  F_004e7cc0((*(int *)(gen_frame + 0x30)) GEN_EDX_ARG,(float)(float10)0);
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  F_005f3240();
  *((undefined2 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *(undefined4 *)this = 6;
  F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,1);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x7c))))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,5,0,param_1);
  uVar6 = F_00a6b4f0(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,0xe0000000);
  return uVar6;
}

/* ref: FUN_00ab5a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab5a60(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab5a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  uVar2 = F_00a7d290(0x2d7,REFG(int * PTR32, 0x1379694),0,0,0,REFG(float, 0x10916ec));
  if ((((param_2 == 4) || (param_2 == 7)) && (uVar2 = param_1[0x1a], (int)uVar2 < 3)) &&
     (uVar2 != 0)) {
    F_005f3240();
    uVar2 = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if (param_3 == '\x01') {
    if ((param_2 == 3) && (piVar1 != ((int *)GEN_TOP(0x0)))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,0);
      return uVar2;
    }
  }
  else {
    uVar2 = *param_1;
    if (((uVar2 != 5) && (uVar2 != 6)) && (uVar2 != 1)) {
      param_1[9] = param_2;
      *(undefined1 *)(param_1 + 8) = 1;
      return uVar2;
    }
    uVar2 = F_00ab1390(param_1 GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_00ab5b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab5b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab5b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  char cVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  cVar2 = REFG(char, 0x14a737d);
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (*(int *)this == 1) {
    if (param_1 == 0) {
      if ((((*((int *)GEN_TOP(((int)this + 0xc))) != 0) && (REFG(int * PTR32, 0x1379694) != ((int *)GEN_TOP(0x0)))) &&
          ((char)REFG(int * PTR32, 0x1379694)[0xb82] != '\0')) &&
         ((uVar3 = F_00ab1c90((uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x86)))), uVar3 != 0 &&
          (*((char *)GEN_TOP((uVar3 + 0x2e))) == '\0')))) {
        F_00aab790(piVar1 GEN_EDX_ARG,0,0,0,0,1);
        F_00a51200(4,0,0,0,0);
        *(undefined4 *)this = 2;
        uVar3 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
        return uVar3;
      }
      *(undefined4 *)this = 3;
      in_EAX = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
    }
    else {
      if (param_1 != 1) {
        *(undefined4 *)this = 0;
        uVar3 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
        return uVar3;
      }
      in_EAX = F_00a7d290(0x2d7,REFG(int * PTR32, 0x1379694),0,0,0,REFG(float, 0x10916ec));
      if (cVar2 != '\x01') {
        uVar3 = *(uint *)this;
        if (((uVar3 != 5) && (uVar3 != 6)) && (uVar3 != 1)) {
          *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 1;
          *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 3;
          return uVar3;
        }
        uVar3 = F_00ab1390(this GEN_EDX_ARG,3);
        return uVar3;
      }
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,0);
        return uVar3;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00ab5c50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab5c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab5c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_FWD)));
  F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x28,(uint)REFG(undefined1, 0x14ab29e));
  this_00 = REFG(void * PTR32, 0x1379694);
  F_00ab4370(0x70,REFG(void * PTR32, 0x1379694),REFG(void * PTR32, 0x1379694),0,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa8))))(piVar1 GEN_EDX_ARG,0,0x1e,1);
  puVar2 = ((undefined4 *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = puVar2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = puVar2[2];
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG);
  *(undefined4 *)this = 4;
  uVar3 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
  return uVar3;
}

/* ref: FUN_00ab5cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab5cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xab5cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  int * piVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  F_00ab4370(0x70,param_1,param_1,0,0);
  bVar1 = F_00a9f620(param_1 GEN_EDX_ARG);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa8))))(piVar2 GEN_EDX_ARG,0,0x1e,1);
    puVar3 = ((undefined4 *)GEN_TOP(F_00a5feb0(param_1 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar3;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = puVar3[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = puVar3[2];
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb4))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)this = 4;
    uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
  }
  return uVar4;
}

/* ref: FUN_00ab5d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab5d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xab5d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    return in_EAX;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_FWD,10,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG,9,0);
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 4: ;
  case 0xe: ;
    uVar4 = 0x6e;
    break;
  default: ;
    goto switchD_00ab5dbf_caseD_5;
  case 7: ;
  case 8: ;
    uVar4 = 0x6f;
  }
  F_00ab4370(uVar4,param_1,param_1,0,0);
switchD_00ab5dbf_caseD_5: ;
  if ((param_2 == 5) || (param_2 == 8)) {
    F_00aa2c50(param_1 GEN_EDX_ARG,0,0,0);
    F_00aa4270(param_1 GEN_EDX_ARG,0x4d,0,0);
    F_00a7d290(0x230,param_1,0,0,0,REFG(float, 0x10916ec));
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 3: ;
  case 9: ;
  case 10: ;
  case 0xc: ;
  case 0xd: ;
  case 0x10: ;
    bVar1 = F_00a9f620(param_1 GEN_EDX_ARG);
    if (bVar1 == 0) goto switchD_00ab5e32_caseD_4;
  default: ;
    F_00aa0980(param_1 GEN_EDX_ARG,(float)(float10)1,0);
    iVar3 = 0;
    break;
  case 4: ;
  case 5: ;
  case 7: ;
  case 8: ;
  case 0xe: ;
switchD_00ab5e32_caseD_4: ;
    F_00aa0980(param_1 GEN_EDX_ARG,(float)(float10)0,0);
    iVar3 = (int)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  }
  param_1[0xbb2] = iVar3;
  bVar1 = F_00a9f620(param_1 GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    F_00a696f0(&REFG(undefined, 0x14ab380) GEN_EDX_ARG);
    *(undefined4 *)this = 0;
    uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
  }
  return uVar2;
}

/* ref: FUN_00ab5ef0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ab5ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab5ef0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  byte bVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  bVar2 = F_006d7160(this GEN_EDX_ARG);
  uVar1 = (*(undefined4 *)&gen_args[1]);
  bVar7 = (*(int *)&gen_args[0]) != 0xb;
  uVar4 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,(*(undefined4 *)&gen_args[1]));
  if (uVar4 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *((int *)GEN_TOP((uVar4 + 4)));
  }
  uVar5 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,*(undefined4 *)&REFG(undefined2, 0x1379c78));
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar4 = *((uint *)GEN_TOP((uVar5 + 4)));
  }
  if ((((iVar6 == 0) || (uVar4 == 0)) || (*((int *)GEN_TOP((iVar6 + 0x10))) != *((int *)GEN_TOP((uVar4 + 0x10))))) &&
     (bVar7 && bVar2 != 1)) {
    iVar6 = *piVar3;
    uVar4 = F_004142d0(&(*(int *)&gen_args[0]) GEN_EDX_ARG,0xffffffff);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0xf4))))(piVar3,uVar1,1,1,uVar4);
  }
  return uVar4;
}

/* ref: FUN_00ab5fa0 */
GEN_OWN GEN_NOFRAME byte F_00ab5fa0(void)
{
  GEN_ENTER(0xab5fa0u, 0u, 0u, 0u, 0u);
  char cVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
    cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x2a)));
    if (cVar1 == '\0') {
      return 1;
    }
    return cVar1 == '\x01';
  }
  return 0;
}

/* ref: FUN_00ab5fe0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ab5fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab5fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (REFG(char, 0x14a7373) != '\x01') {
    bVar2 = F_00ab1680(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),&(*(char *)(gen_frame + 0xf)));
    if ((bVar2 == 0) || (uVar4 = (*(uint *)(gen_frame + 0x0)), uVar5 = (*(undefined4 *)(gen_frame + 0x4)), (*(int *)(gen_frame + 0x8)) == 0)) {
      uVar3 = F_00ab1340();
      (*(char *)(gen_frame + 0xf)) = '\x01';
      if (uVar3 == 0) {
        if (1 < *((int *)GEN_TOP(((int)this + 0x68)))) {
          return;
        }
        if (*((int *)GEN_TOP(((int)this + 0x68))) == 0) {
          return;
        }
        F_005f3240();
        *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
        *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
        return;
      }
      uVar4 = (uint)*((ushort *)GEN_TOP((uVar3 + 0x86)));
      uVar5 = *((undefined4 *)GEN_TOP((uVar3 + 0x8c)));
    }
    uVar3 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x41,uVar4 & 0xffff);
    if (((uVar3 != 0) && (iVar1 = *((int *)GEN_TOP((uVar3 + 4))), iVar1 != 0)) && ((*(char *)(gen_frame + 0xf)) == '\x01')) {
      F_00aaf740(this GEN_EDX_ARG,1,(*((uint *)GEN_TOP((iVar1 + 4))) & 0xffffff) + iVar1 + 4,0x28,uVar5,uVar4 & 0xffff);
      return;
    }
  }
  return;
}

/* ref: FUN_00ab60c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab60c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab60c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_FWD)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG,1,0x5a,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG,0,0x5a,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb8))))(piVar2 GEN_EDX_ARG);
  F_00a6e120(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,*(undefined4 *)&REFG(undefined2, 0x1379c78),*((undefined4 *)GEN_TOP(((int)this + 8))));
  if ((*((char *)GEN_TOP(((int)this + 0x30))) != '\0') && (REFG(char, 0x1379c7c) == '\x05')) {
    F_00a69c30(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
  }
  if ((*((char *)GEN_TOP(((int)this + 0x28))) != '\0') &&
     (iVar3 = (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') + 2, REFG(int, 0x14b4eb4) < iVar3)) {
    REFG(int, 0x14b4eb4) = iVar3;
  }
  uVar1 = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
  F_004e7f70(uVar1 GEN_EDX_ARG,(float)(float10)1);
  uVar4 = F_004e7cc0(uVar1 GEN_EDX_ARG,(float)(float10)1);
  return uVar4;
}

/* ref: FUN_00ab6180 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ab6180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab6180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD)));
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
    uVar3 = F_00a5feb0(this_00 GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((uVar3 + 4)));
    uVar3 = F_00a5feb0(this_00 GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((uVar3 + 8)));
    bVar1 = F_00551a90(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,(int)this + 4,&(*(undefined4 *)(gen_frame + 0x0)),2);
    *(byte *)this = bVar1;
    F_00ab1960();
  }
  return;
}

/* ref: FUN_00ab6210 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ab6210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab6210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4c))) < 10) {
    uVar1 = F_00ab4aa0(param_1);
    *((uint *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x4c))) * 4 + 0x24))) = uVar1;
    *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) + 1;
  }
  return;
}

/* ref: FUN_00ab6240 */
GEN_OWN_GS GEN_FRAME uint F_00ab6240(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab6240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x104, 12, 4);
  uint uVar1;
  int iVar2;
  int * piVar3;
  undefined * pvVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 * puVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100));
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 1;
    F_0042b630(&REFG(undefined, 0x14bcdc0) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107c6b0)));
  }
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 2;
    F_0042b630(&REFG(char * PTR32, 0x14bcd68) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107c6a0)));
  }
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 4;
    F_0042b630(&REFG(char * PTR32, 0x14bcd10) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107c690)));
  }
  iVar2 = param_3;
  if (param_3 == 0) {
    uVar1 = param_1;
    if (999999 < param_1) {
      uVar1 = param_1 - 1000000;
    }
    if (uVar1 < 0x18cf) {
      uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9,uVar1);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = *((int *)GEN_TOP((uVar1 + 4)));
      }
      if (iVar2 != 0) goto LAB_00ab631a;
    }
    return 0;
  }
LAB_00ab631a: ;
  piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) + 0x10)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG);
  if (((param_2 == '\0') && (uVar1 != 1)) && (uVar1 != 5)) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      F_0042e430(&REFG(undefined, 0x14bcdc0) GEN_EDX_ARG,(*((uint *)GEN_TOP((iVar2 + 0xc))) & 0xffffff) + iVar2 + 0xc);
      if (999999 < param_1) {
        if (*REFG(char * PTR32, 0x14bcd68) == '\0') {
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 9;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
          uVar1 = F_0043bd00(pvVar4 GEN_EDX_ARG,uVar6,uVar7,uVar8);
          F_0042e430(&REFG(char * PTR32, 0x14bcd68) GEN_EDX_ARG,uVar1);
        }
        F_0042e360(&REFG(undefined, 0x14bcdc0) GEN_EDX_ARG,&REFG(char * PTR32, 0x14bcd68));
      }
      if (*REFG(char * PTR32, 0x14bcd10) == '\0') {
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x20))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),((char *)REFP(0x10e88e0)));
        F_0042ccf0(&REFG(char * PTR32, 0x14bcd10) GEN_EDX_ARG,uVar1);
        F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
      }
      uVar1 = (uint)*((byte *)GEN_TOP((iVar2 + 0xa3)));
      uVar6 = 6;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
      uVar1 = F_00460bd0(pvVar4 GEN_EDX_ARG,uVar6,uVar1);
      if (uVar1 != 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar1,REFG(undefined4, 0x108cc50));
        puVar9 = &REFG(char * PTR32, 0x14bcd10);
        uVar1 = F_0046e280(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x14bcdc0));
        uVar1 = F_0046e280(((undefined1 *)(gen_frame + 0x54)),uVar1,puVar9);
        F_0042ccf0(&REFG(undefined, 0x14bcdc0) GEN_EDX_ARG,uVar1);
        F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
        uVar1 = F_0042a990(&REFG(undefined, 0x14bcdc0) GEN_EDX_ARG);
        return uVar1;
      }
    }
  }
  else {
    uVar1 = F_00463610(1,param_1,0);
    F_0042e430(&REFG(undefined, 0x14bcdc0) GEN_EDX_ARG,uVar1);
  }
  uVar1 = F_0042a990(&REFG(undefined, 0x14bcdc0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ab64e0 */
GEN_OWN GEN_FRAME uint F_00ab64e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab64e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14bce6c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14bce6c) = *(uint *)&REFG(undefined, 0x14bce6c) | 1;
    F_0042b630(&REFG(undefined, 0x14bce18) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107c6c0)));
  }
  iVar3 = param_3;
  if (param_3 == 0) {
    uVar2 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x52,param_1 - 2000000);
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = *((int *)GEN_TOP((uVar2 + 4)));
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) + 0x10)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
  if (((param_2 == '\0') && (uVar2 != 1)) && (uVar2 != 5)) {
    uVar2 = (*((uint *)GEN_TOP((iVar3 + 0xc))) & 0xffffff) + iVar3 + 0xc;
  }
  else {
    uVar2 = F_00463610(1,param_1,0);
  }
  F_0042e430(&REFG(undefined, 0x14bce18) GEN_EDX_ARG,uVar2);
  uVar2 = F_0042a990(&REFG(undefined, 0x14bce18) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00ab65a0 */
GEN_OWN GEN_FRAME uint F_00ab65a0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab65a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = param_1;
    if (999999 < param_1) {
      uVar1 = param_1 - 1000000;
    }
    if (uVar1 < 0x18cf) {
      uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,9,uVar1);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = *((int *)GEN_TOP((uVar1 + 4)));
      }
      if (iVar2 != 0) goto LAB_00ab65e4;
    }
    uVar1 = 0;
  }
  else {
LAB_00ab65e4: ;
    uVar1 = (uint)*((ushort *)GEN_TOP((iVar2 + 0x7c)));
    if (999999 < param_1) {
      return uVar1 + 1000000;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6600 */
GEN_OWN GEN_FRAME byte F_00ab6600(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab6600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00530100(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x139);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x138,uVar3);
      if (((uVar2 != 0) && (*((ushort * PTR32 *)GEN_TOP((uVar2 + 4))) != ((ushort *)GEN_TOP(0x0)))) &&
         (**((ushort * PTR32 *)GEN_TOP((uVar2 + 4))) == param_1)) {
        return (byte)uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00ab6670 */
GEN_OWN GEN_FRAME uint F_00ab6670(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab6670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (7 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined1 *)GEN_TOP((uVar1 + 0x25c))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x240))) = (undefined2)param_1;
    *((undefined1 *)GEN_TOP((uVar1 + 0x246))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x248))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x260))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x264))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x268))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x270))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x274))) = 0;
    if (*((char *)GEN_TOP((uVar1 + 0x25c))) != '\0') {
      *((undefined4 *)GEN_TOP((uVar1 + 0x260))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x264))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x268))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x270))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x274))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6700 */
GEN_OWN GEN_NOFRAME uint F_00ab6700(void)
{
  GEN_ENTER(0xab6700u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (7 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) &&
     (uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0))), *((int *)GEN_TOP((uVar1 + 0x278))) != 1)) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x23c))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x246))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x248))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x25c))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x278))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x240))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x242))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x260))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x264))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x268))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x270))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x274))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6780 */
GEN_OWN GEN_FRAME uint F_00ab6780(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab6780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (6 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined1 *)GEN_TOP((uVar1 + 0x20c))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x1f0))) = (undefined2)param_1;
    *((undefined1 *)GEN_TOP((uVar1 + 0x1f6))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x1f8))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x210))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x214))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x218))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x220))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x224))) = 0;
    if (*((char *)GEN_TOP((uVar1 + 0x20c))) != '\0') {
      *((undefined4 *)GEN_TOP((uVar1 + 0x210))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x214))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x218))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x220))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x224))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6810 */
GEN_OWN GEN_NOFRAME uint F_00ab6810(void)
{
  GEN_ENTER(0xab6810u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (6 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) &&
     (uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0))), *((int *)GEN_TOP((uVar1 + 0x228))) != 1)) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x1ec))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x1f6))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x1f8))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x20c))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x228))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x1f0))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x1f2))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x210))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x214))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x218))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x220))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x224))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6890 */
GEN_OWN GEN_FRAME uint F_00ab6890(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab6890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (3 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined1 *)GEN_TOP((uVar1 + 0x11c))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x100))) = (undefined2)param_1;
    *((undefined1 *)GEN_TOP((uVar1 + 0x106))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x108))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x120))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x124))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x128))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x130))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x134))) = 0;
    if (*((char *)GEN_TOP((uVar1 + 0x11c))) != '\0') {
      *((undefined4 *)GEN_TOP((uVar1 + 0x120))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x124))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x128))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x130))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x134))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6920 */
GEN_OWN GEN_NOFRAME uint F_00ab6920(void)
{
  GEN_ENTER(0xab6920u, 0u, 0u, 0u, 0u);
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x14bcc68);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a509c)));
  if (REFG(undefined4, 0x14bcc68) != 0) {
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xb8))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0xbc))) = uVar1;
    *((undefined1 *)GEN_TOP((uVar2 + 0xb4))) = 0;
    uVar2 = REFG(undefined4, 0x14bcc68);
    if (((REFG(undefined4, 0x14bcc68) != 0) && (3 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) &&
       (uVar2 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0))), *((int *)GEN_TOP((uVar2 + 0x138))) != 1)) {
      *((undefined4 *)GEN_TOP((uVar2 + 0xfc))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x106))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x108))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0x11c))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x138))) = 0;
      *((undefined2 *)GEN_TOP((uVar2 + 0x100))) = 0;
      *((undefined2 *)GEN_TOP((uVar2 + 0x102))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x120))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x124))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x128))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x130))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x134))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ab69c0 */
GEN_OWN GEN_FRAME uint F_00ab69c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab69c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (4 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined1 *)GEN_TOP((uVar1 + 0x16c))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x150))) = (undefined2)param_1;
    *((undefined1 *)GEN_TOP((uVar1 + 0x156))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x158))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x170))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x174))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x178))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x180))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x184))) = 0;
    if (*((char *)GEN_TOP((uVar1 + 0x16c))) != '\0') {
      *((undefined4 *)GEN_TOP((uVar1 + 0x170))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x174))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x178))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x180))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0x184))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6a50 */
GEN_OWN GEN_NOFRAME uint F_00ab6a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab6a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (4 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) &&
     (uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0))), *((int *)GEN_TOP((uVar1 + 0x188))) != 1)) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x14c))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x156))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x158))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x16c))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x188))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x150))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x152))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x170))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x174))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x178))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x180))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x184))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6ad0 */
GEN_OWN GEN_FRAME uint F_00ab6ad0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab6ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (2 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined1 *)GEN_TOP((uVar1 + 0xcc))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0xb0))) = (undefined2)param_1;
    *((undefined1 *)GEN_TOP((uVar1 + 0xb6))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0xb8))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0xd0))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0xd4))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0xd8))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0xe0))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0xe4))) = 0;
    if (*((char *)GEN_TOP((uVar1 + 0xcc))) != '\0') {
      *((undefined4 *)GEN_TOP((uVar1 + 0xd0))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0xd4))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0xd8))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0xe0))) = 0;
      *((undefined4 *)GEN_TOP((uVar1 + 0xe4))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6b60 */
GEN_OWN GEN_NOFRAME uint F_00ab6b60(void)
{
  GEN_ENTER(0xab6b60u, 0u, 0u, 0u, 0u);
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x14bcc68);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a509c)));
  if (REFG(undefined4, 0x14bcc68) != 0) {
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xb8))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0xbc))) = uVar1;
    *((undefined1 *)GEN_TOP((uVar2 + 0xb4))) = 0;
    uVar2 = REFG(undefined4, 0x14bcc68);
    if (((REFG(undefined4, 0x14bcc68) != 0) && (2 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) &&
       (uVar2 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0))), *((int *)GEN_TOP((uVar2 + 0xe8))) != 1)) {
      *((undefined4 *)GEN_TOP((uVar2 + 0xac))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0xb6))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0xb8))) = 0;
      *((undefined1 *)GEN_TOP((uVar2 + 0xcc))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0xe8))) = 0;
      *((undefined2 *)GEN_TOP((uVar2 + 0xb0))) = 0;
      *((undefined2 *)GEN_TOP((uVar2 + 0xb2))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0xd0))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0xd4))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0xd8))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0xe0))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0xe4))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ab6c00 */
GEN_OWN GEN_FRAME uint F_00ab6c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xab6c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  uVar2 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) {
    uVar2 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined1 *)GEN_TOP((uVar2 + 0x66))) = param_6;
    *((undefined1 *)GEN_TOP((uVar2 + 0x7c))) = param_2;
    *((undefined4 *)GEN_TOP((uVar2 + 0x68))) = 0;
    *((undefined2 *)GEN_TOP((uVar2 + 0x60))) = (undefined2)param_1;
    *((undefined4 *)GEN_TOP((uVar2 + 0x80))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x84))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x88))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x90))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x94))) = 0;
    if (*((char *)GEN_TOP((uVar2 + 0x7c))) != '\0') {
      *((undefined4 *)GEN_TOP((uVar2 + 0x80))) = param_3;
      *((undefined4 *)GEN_TOP((uVar2 + 0x84))) = param_4;
      *((undefined4 *)GEN_TOP((uVar2 + 0x88))) = param_5;
      *((undefined4 *)GEN_TOP((uVar2 + 0x90))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x94))) = 0;
    }
    *((undefined1 *)GEN_TOP((uVar1 + 0xc5))) = 1;
  }
  return uVar2;
}

/* ref: FUN_00ab6ca0 */
GEN_OWN GEN_NOFRAME uint F_00ab6ca0(void)
{
  GEN_ENTER(0xab6ca0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (1 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) &&
     (uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0))), *((int *)GEN_TOP((uVar1 + 0x98))) != 1)) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x5c))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x66))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x68))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x7c))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x98))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x60))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x62))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x80))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x84))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x88))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x90))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x94))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6d10 */
GEN_OWN GEN_NOFRAME uint F_00ab6d10(void)
{
  GEN_ENTER(0xab6d10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined4 *)GEN_TOP((uVar1 + 0x98))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6d30 */
GEN_OWN GEN_NOFRAME uint F_00ab6d30(void)
{
  GEN_ENTER(0xab6d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))))) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined4 *)GEN_TOP((uVar1 + 0x98))) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ab6d50 */
GEN_OWN GEN_FRAME uint F_00ab6d50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xab6d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  uVar2 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*((int *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))) != 0)) {
    uVar2 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined2 *)GEN_TOP((uVar2 + 0x10))) = (undefined2)param_1;
    *((undefined1 *)GEN_TOP((uVar2 + 0x16))) = param_6;
    *((undefined1 *)GEN_TOP((uVar2 + 0x2c))) = param_2;
    *((undefined4 *)GEN_TOP((uVar2 + 0x18))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x30))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x34))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x38))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x40))) = 0;
    *((undefined4 *)GEN_TOP((uVar2 + 0x44))) = 0;
    if (*((char *)GEN_TOP((uVar2 + 0x2c))) != '\0') {
      *((undefined4 *)GEN_TOP((uVar2 + 0x30))) = param_3;
      *((undefined4 *)GEN_TOP((uVar2 + 0x34))) = param_4;
      *((undefined4 *)GEN_TOP((uVar2 + 0x38))) = param_5;
      *((undefined4 *)GEN_TOP((uVar2 + 0x40))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 0x44))) = 0;
    }
    *((undefined1 *)GEN_TOP((uVar1 + 0xc5))) = 1;
  }
  return uVar2;
}

/* ref: FUN_00ab6dc0 */
GEN_OWN GEN_NOFRAME uint F_00ab6dc0(void)
{
  GEN_ENTER(0xab6dc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (*((int *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))) != 0)) &&
     (uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0))), *((int *)GEN_TOP((uVar1 + 0x48))) != 1)) {
    *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x16))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x18))) = 0;
    *((undefined1 *)GEN_TOP((uVar1 + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x48))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x10))) = 0;
    *((undefined2 *)GEN_TOP((uVar1 + 0x12))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x30))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x34))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x38))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x40))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x44))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6e10 */
GEN_OWN GEN_NOFRAME uint F_00ab6e10(void)
{
  GEN_ENTER(0xab6e10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*((int *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))) != 0)) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined4 *)GEN_TOP((uVar1 + 0x48))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6e30 */
GEN_OWN GEN_NOFRAME uint F_00ab6e30(void)
{
  GEN_ENTER(0xab6e30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*((int *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 8))) != 0)) {
    uVar1 = *((uint *)GEN_TOP((REFG(undefined4, 0x14bcc68) + 0xa0)));
    *((undefined4 *)GEN_TOP((uVar1 + 0x48))) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ab6e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab6e50(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xab6e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  char cVar1;
  int * piVar2;
  float10 fVar3;
  longlong lVar4;
  char * pcVar5;
  float fVar6;
  uint uVar7;
  char * pcVar8;
  undefined * this;
  bool bVar9;
  bool bVar10;
  float10 extraout_ST0;
  double dVar11;
  
  if (REFG(int, 0x137104c) != 0) {
    if ((param_1[0xd] == 0.0) && ((uint)gen_fl2bits(param_1[0xc]) < (uint)gen_fl2bits(param_1[10])))
    {
      lVar4 = (longlong)((double)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) * *(double *)&REFG(undefined, 0x10912a8));
      uVar7 = (uint)lVar4;
      fVar6 = param_1[0xc];
      param_1[0xc] = gen_bits2f(uVar7 + (int)gen_fl2bits(param_1[0xc]));
      param_1[0xd] = gen_bits2f((int)((ulonglong)lVar4 >> 0x20) +
                                (uint)CARRY4(uVar7,(uint)gen_fl2bits(fVar6)));
    }
  }
  if (((param_1[1] == 1.4013e-45) || ((int)gen_fl2bits(param_1[1]) - 3U < 5)) && (param_1[5] == 0.0)
     ) {
    F_00ab06e0(param_1 GEN_EDX_FWD,0);
  }
  pcVar5 = ((char *)GEN_TOP(((int)gen_fl2bits(param_1[1]) - 1)));
  switch((unsigned int)(uintptr_t)(pcVar5)) {
  case 0x0: ;
    pcVar5 = ((char *)GEN_TOP(0x0));
    if ((param_1[0xd] != 0.0) || ((uint)gen_fl2bits(param_1[10]) <= (uint)gen_fl2bits(param_1[0xc]))
       ) {
      if (*((char *)GEN_TOP(((int)param_1 + 0x1d))) != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) + 0x60))))
                  (((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1[9]));
        *((undefined1 *)GEN_TOP(((int)param_1 + 0x1d))) = 0;
      }
      uVar7 = F_00aaef40(param_1 GEN_EDX_ARG,(float)(float10)1,param_2,(undefined4)gen_fl2bits(param_1[9]));
      param_1[1] = 5.60519e-45;
      return uVar7;
    }
    break;
  case 0x1: ;
    if (REFG(int, 0x137104c) == 0) {
      this = ((undefined *)GEN_TOP(0x0));
    }
    else {
      this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
    }
    if (this != ((undefined *)GEN_TOP(0x0))) {
      piVar2 = ((int *)(uintptr_t)gen_fl2bits((float)(param_1[5])));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,500);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) + 0x78))))(((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) GEN_EDX_ARG,500);
      }
      pcVar5 = ((char *)GEN_TOP(F_00ab4e30((uint)*(ushort *)(param_1 + 2))));
      if (pcVar5 != ((char *)GEN_TOP(0x0))) {
        pcVar8 = pcVar5;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (pcVar8 != pcVar5 + 1 && -1 < (int)pcVar8 - (int)(pcVar5 + 1)) {
          fVar6 = gen_bits2f(F_004e98b0(this GEN_EDX_ARG,pcVar5));
          param_1[5] = fVar6;
          pcVar5 = ((char *)GEN_TOP(0x0));
          if (fVar6 != 0.0) {
            param_1[1] = 4.2039e-45;
            return (uint)gen_fl2bits(fVar6);
          }
        }
      }
    }
    break;
  case 0x2: ;
    pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) + 0x14))))(((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) GEN_EDX_ARG)));
    if (((char)pcVar5 == '\0') && (pcVar5 = ((char *)GEN_TOP(F_00aaee80(param_1 + 8 GEN_EDX_ARG))), (char)pcVar5 == '\0')
       ) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) + 0x4c))))
                        (((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1[9]));
      param_1[1] = 5.60519e-45;
      return uVar7;
    }
    break;
  case 0x3: ;
    uVar7 = F_00aaf0c0(param_1 GEN_EDX_ARG);
    return uVar7;
  case 0x4: ;
    piVar2 = ((int *)(uintptr_t)gen_fl2bits((float)(param_1[5])));
    param_1[0xf] = 0.0;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      pcVar5 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))
                                 (piVar2 GEN_EDX_ARG,(undefined4)
                                         gen_fl2bits((float)((float10)param_2 *
                                                            (float10)*(double *)&REFG(undefined, 0x108bec8))),
                                  (undefined4)gen_fl2bits(param_1[8]))));
    }
    param_1[1] = 8.40779e-45;
    return (uint)pcVar5;
  case 0x5: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) + 0x20))))(((int *)(uintptr_t)gen_fl2bits((float)(param_1[5])))); dVar11 = extraout_ST0;
    fVar3 = (float10)0;
    bVar9 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN(fVar3);
    bVar10 = bVar9 || extraout_ST0 == fVar3;
    if (bVar9 == bVar10) {
      return CONCAT22((short)((ulonglong)gen_d2bits(dVar11) >> 0x10),
                      CONCAT11(bVar10 << 6 | bVar9 << 2 | 2U | !(fVar3 <= extraout_ST0),
                               (char)(ulonglong)gen_d2bits(dVar11)));
    }
    if ((*(char *)(param_1 + 7) != '\0') &&
       (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) + 0x7c))))(((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) GEN_EDX_ARG), (char)uVar7 != '\0')) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) + 0x5c))))(((int *)(uintptr_t)gen_fl2bits((float)(param_1[5]))) GEN_EDX_ARG,0);
      param_1[1] = 9.80909e-45;
      *((undefined1 *)GEN_TOP(((int)param_1 + 0x1d))) = 1;
      return uVar7;
    }
    goto LAB_00ab709f;
  case 0x6: ;
    if (REFG(int, 0x137104c) == 0) {
      return (uint)pcVar5;
    }
    fVar6 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)param_1[0xe])));
    param_1[0xe] = fVar6;
    if (!((float10)*param_1 < (float10)fVar6)) {
      return (uint)pcVar5;
    }
LAB_00ab709f: ;
    pcVar5 = ((char *)GEN_TOP(F_00ab06e0(param_1 GEN_EDX_ARG,0)));
  }
  return (uint)pcVar5;
}

/* ref: FUN_00ab70d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ab70d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab70d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  short * psVar1;
  
  psVar1 = *((short * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  while( true ) {
    if (psVar1 == *((short * PTR32 *)GEN_TOP(((int)this + 0x20)))) {
      return 0;
    }
    if (*psVar1 == (short)param_1) break;
    psVar1 = psVar1 + 8;
  }
  return 1;
}

/* ref: FUN_00ab7100 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ab7100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab7100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  short * psVar1;
  
  psVar1 = *((short * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (psVar1 != *((short * PTR32 *)GEN_TOP(((int)this + 0x20)))) {
    do {
      if (*psVar1 == (short)param_1) {
        *(undefined1 *)(psVar1 + 6) = 1;
      }
      psVar1 = psVar1 + 8;
    } while (psVar1 != *((short * PTR32 *)GEN_TOP(((int)this + 0x20))));
  }
  return 0;
}

/* ref: FUN_00ab7140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ab7140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xab7140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  byte bVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ushort * puVar11;
  undefined4 * puVar12;
  byte bVar13;
  int * piVar14;
  uint local_18;
  ushort uStack_14;
  int local_c;
  byte local_5;
  
  if ((ushort)(*(undefined4 *)&gen_args[0]) == 1) {
    puVar12 = ((undefined4 *)GEN_TOP(((int)this + 0x30)));
    local_c = 2;
    do {
      if (puVar12[-9] - 1 < 4) {
        if ((*(undefined4 * PTR32 *)&gen_args[4]) == ((undefined4 *)GEN_TOP(0x0))) {
          pfVar5 = ((float *)GEN_TOP(F_00ab4fc0(this GEN_EDX_FWD,(char)puVar12[-7],*(undefined1 *)(puVar12 - 6),
                                         (char)(*(undefined4 *)&gen_args[1]),(undefined1)(*(undefined4 *)&gen_args[2]))));
          if (pfVar5 == ((float *)GEN_TOP(0x0))) {
            uVar6 = 0;
          }
          else {
            uStack_14 = gen_x87_cw | 0xc00;
            gen_set_x87_cw((unsigned short)uStack_14);
            local_18 = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
            gen_set_x87_cw((unsigned short)gen_x87_cw);
            uVar6 = local_18;
          }
        }
        else {
          uVar6 = *(*(undefined4 * PTR32 *)&gen_args[4]);
        }
        puVar12[-9] = 5;
        *(undefined1 *)(puVar12 - 3) = (undefined1)(*(undefined4 *)&gen_args[3]);
        puVar12[-2] = uVar6;
        puVar12[-1] = 0;
        *puVar12 = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
      }
      puVar12 = puVar12 + 0x10;
      local_c = local_c - 1;
    } while (local_c != 0);
    return 1;
  }
  iVar7 = 0;
  puVar11 = ((ushort *)GEN_TOP(((int)this + 0x10)));
  do {
    if ((*(int *)(puVar11 - 2) - 1U < 4) && (*puVar11 == (ushort)(*(undefined4 *)&gen_args[0]))) {
      *((undefined1 *)GEN_TOP((iVar7 * 0x40 + 0x18 + (int)this))) = (undefined1)(*(undefined4 *)&gen_args[2]);
      return 1;
    }
    iVar7 = iVar7 + 1;
    puVar11 = puVar11 + 0x20;
  } while (iVar7 < 2);
  bVar2 = false;
  iVar7 = 0;
  piVar14 = ((int *)GEN_TOP(((int)this + 0x1c)));
  do {
    if (*(ushort *)(piVar14 - 3) == (ushort)(*(undefined4 *)&gen_args[0])) {
      switch((unsigned int)(uintptr_t)(piVar14[-4])) {
      case 1: ;
      case 7: ;
switchD_00ab722e_caseD_1: ;
        local_5 = (byte)iVar7;
        bVar2 = true;
        goto LAB_00ab728c;
      case 5: ;
      case 6: ;
        if ((*piVar14 != 0) &&
           (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar14)) + 0x7c))))(((int *)GEN_TOP(*piVar14)) GEN_EDX_ARG), (char)uVar6 != '\0'))
        goto switchD_00ab722e_caseD_1;
      }
    }
    iVar7 = iVar7 + 1;
    piVar14 = piVar14 + 0x10;
  } while (iVar7 < 2);
  iVar7 = 0;
  puVar12 = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  do {
    switch((unsigned int)(uintptr_t)(*puVar12)) {
    case 0: ;
    case 2: ;
    case 3: ;
    case 7: ;
      local_5 = (byte)iVar7;
LAB_00ab728c: ;
      uVar6 = (uint)local_5;
      iVar7 = uVar6 * 0x40;
      if (bVar2) {
        *((undefined4 *)GEN_TOP((iVar7 + 0xc + (int)this))) = 1;
      }
      else {
        piVar14 = *((int * PTR32 *)GEN_TOP((iVar7 + 0x1c + (int)this)));
        if (piVar14 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 0x50))))(piVar14 GEN_EDX_ARG,0);
          piVar14 = *((int * PTR32 *)GEN_TOP((iVar7 + 0x1c + (int)this)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 0x78))))(piVar14 GEN_EDX_ARG,500);
          *((undefined4 *)GEN_TOP((iVar7 + 0x1c + (int)this))) = 0;
        }
        *((undefined4 *)GEN_TOP((iVar7 + 0x40 + (int)this))) = 0;
        uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        *((undefined4 *)GEN_TOP((iVar7 + 0x20 + (int)this))) = 0;
        *((undefined2 *)GEN_TOP((iVar7 + 0x24 + (int)this))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x44 + (int)this))) = uVar3;
        *((undefined4 *)GEN_TOP((iVar7 + 0x28 + (int)this))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x2c + (int)this))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x30 + (int)this))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x38 + (int)this))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x3c + (int)this))) = 0;
        *((ushort *)GEN_TOP((iVar7 + 0x10 + (int)this))) = (ushort)(*(undefined4 *)&gen_args[0]);
        *((undefined4 *)GEN_TOP((iVar7 + 0xc + (int)this))) = 2;
        *((undefined4 *)GEN_TOP((iVar7 + 0x14 + (int)this))) = (*(undefined4 *)&gen_args[1]);
        *((undefined1 *)GEN_TOP((iVar7 + 0x18 + (int)this))) = (undefined1)(*(undefined4 *)&gen_args[2]);
      }
      if (*((int *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x4c))) - 1U < 4) {
        *((undefined4 *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x4c))) = 5;
        *((undefined1 *)GEN_TOP(((int)this + uVar6 * -0x40 + 100))) = (undefined1)(*(undefined4 *)&gen_args[3]);
      }
      if ((*(undefined4 * PTR32 *)&gen_args[4]) == ((undefined4 *)GEN_TOP(0x0))) {
        pfVar5 = ((float *)GEN_TOP(F_00ab4fc0(this GEN_EDX_ARG,(char)*((undefined4 *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x54))),
                                       *((undefined1 *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x58))),
                                       (char)*((undefined4 *)GEN_TOP((iVar7 + 0x14 + (int)this))),
                                       *((undefined1 *)GEN_TOP((iVar7 + 0x18 + (int)this))))));
        gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
        local_18 = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
        uVar8 = local_18;
        gen_set_x87_cw((unsigned short)gen_x87_cw);
        if (*((int *)GEN_TOP((iVar7 + 0xc + (int)this))) == 1) {
          gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
          local_18 = (uint)(longlong)TRUNC((double)pfVar5[3] * *(double *)&REFG(undefined, 0x10912a8));
          gen_set_x87_cw((unsigned short)gen_x87_cw);
          uVar9 = local_18;
        }
        else {
          gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
          local_18 = (uint)(longlong)TRUNC((double)pfVar5[1] * *(double *)&REFG(undefined, 0x10912a8));
          gen_set_x87_cw((unsigned short)gen_x87_cw);
          uVar9 = local_18;
        }
        gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
        local_18 = (uint)(longlong)TRUNC(*(double *)&REFG(undefined, 0x10912a8) * (double)pfVar5[2]);
        gen_set_x87_cw((unsigned short)gen_x87_cw);
        (*(undefined4 *)&gen_args[3]) = local_18;
      }
      else {
        uVar8 = *(*(undefined4 * PTR32 *)&gen_args[4]);
        uVar9 = (*(undefined4 * PTR32 *)&gen_args[4])[1];
        (*(undefined4 *)&gen_args[3]) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
      }
      puVar12 = ((undefined4 *)GEN_TOP((iVar7 + 0x28 + (int)this)));
      puVar12[1] = uVar9;
      *puVar12 = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[2] = (*(undefined4 *)&gen_args[3]);
      *((uint *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x68))) = uVar8;
      *((undefined4 *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x6c))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x70))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x78))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + uVar6 * -0x40 + 0x7c))) = 0;
      *(byte *)this = local_5;
      return 1;
    }
    iVar7 = iVar7 + 1;
    puVar12 = puVar12 + 0x10;
  } while (iVar7 < 2);
  uVar6 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x83,(uint)(ushort)(*(undefined4 *)&gen_args[0]));
  if ((uVar6 == 0) || (*((int *)GEN_TOP((uVar6 + 4))) == 0)) {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) = 0;
  }
  else {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) = *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 4))) + 8)));
  }
  uVar6 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x83,
                       (uint)*((ushort *)GEN_TOP(((uint)*(byte *)((int)(uintptr_t)this) * 0x40 + 0x10 + (int)this))));
  if ((uVar6 == 0) || (*((int *)GEN_TOP((uVar6 + 4))) == 0)) {
    bVar13 = 0;
  }
  else {
    bVar13 = *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 4))) + 8)));
  }
  uVar6 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x83,
                       (uint)*((ushort *)GEN_TOP(((int)this + (uint)*(byte *)this * -0x40 + 0x50))));
  if ((uVar6 == 0) || (*((int *)GEN_TOP((uVar6 + 4))) == 0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar6 + 4))) + 8)));
    if (bVar13 < bVar10) {
      bVar4 = *(byte *)this;
      bVar10 = bVar13;
      goto LAB_00ab7364;
    }
  }
  bVar4 = 1 - *(char *)this;
LAB_00ab7364: ;
  iVar7 = (uint)bVar4 * 0x40;
  uVar6 = 1000;
  if (((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) < bVar10) &&
     (pfVar5 = ((float *)GEN_TOP(F_00ab4fc0(this GEN_EDX_ARG,(char)*((undefined4 *)GEN_TOP(((int)this + iVar7 + 0x14))),
                                     *((undefined1 *)GEN_TOP(((int)this + iVar7 + 0x18))),(char)(*(undefined4 *)&gen_args[1]),
                                     (undefined1)(*(undefined4 *)&gen_args[2])))), pfVar5 != ((float *)GEN_TOP(0x0)))) {
    gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
    local_18 = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    uVar6 = local_18;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + iVar7 + 0xc)));
  if ((iVar1 == 4) ||
     (((iVar1 == 5 || (iVar1 == 6)) &&
      (uVar8 = *((int *)GEN_TOP(((int)this + iVar7 + 0x28))) - *((int *)GEN_TOP(((int)this + iVar7 + 0x38))),
      uVar6 < (((int)uVar8 < 1) - 1 & uVar8))))) {
    *((undefined4 *)GEN_TOP(((int)this + iVar7 + 0xc))) = 5;
    *((undefined1 *)GEN_TOP(((int)this + iVar7 + 0x24))) = 0;
    *((uint *)GEN_TOP(((int)this + iVar7 + 0x28))) = uVar6;
    *((undefined4 *)GEN_TOP(((int)this + iVar7 + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar7 + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar7 + 0x38))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + iVar7 + 0x3c))) = 0;
  }
  return 0;
}

/* ref: FUN_00ab75e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab75e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab75e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  char cVar2;
  int * piVar3;
  float10 fVar4;
  int iVar5;
  char * pcVar6;
  uint uVar7;
  char * pcVar8;
  undefined * this_00;
  int * piVar9;
  bool bVar10;
  bool bVar11;
  float10 extraout_ST0;
  double dVar12;
  int local_c;
  
  piVar9 = ((int *)GEN_TOP(((int)this + 0x1c)));
  local_c = 2;
  do {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x88)));
    if (REFG(int, 0x137104c) != 0) {
      if ((piVar9[8] == 0) && ((uint)piVar9[7] < (uint)piVar9[5])) {
        *(longlong *)(piVar9 + 7) =
             (longlong)((double)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) * *(double *)&REFG(undefined, 0x10912a8)) +
             *(longlong *)(piVar9 + 7);
      }
    }
    if (((piVar9[-4] == 1) || (piVar9[-4] - 3U < 5)) && (*piVar9 == 0)) {
      piVar9[9] = 0;
      iVar5 = (int)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      piVar9[-4] = 0;
      piVar9[1] = 0;
      piVar9[10] = iVar5;
      *(undefined2 *)(piVar9 - 3) = 0;
      *(undefined2 *)(piVar9 + 2) = 0;
      piVar9[3] = 0;
      piVar9[4] = 0;
      piVar9[5] = 0;
      piVar9[7] = 0;
      piVar9[8] = 0;
    }
    pcVar6 = ((char *)GEN_TOP((piVar9[-4] - 1)));
    switch((unsigned int)(uintptr_t)(pcVar6)) {
    case 0x0: ;
      pcVar6 = ((char *)GEN_TOP(0x0));
      if ((piVar9[8] != 0) || ((uint)piVar9[5] <= (uint)piVar9[7])) {
        if (*((char *)GEN_TOP(((int)piVar9 + 9))) != '\0') {
          pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x60))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_FWD,piVar9[4])));
          *((undefined1 *)GEN_TOP(((int)piVar9 + 9))) = 0;
        }
        piVar3 = ((int *)GEN_TOP(*piVar9));
        piVar9[10] = GEN_FLT_TO(piVar9[10], REFG(float, 0x1087f04));
        if (piVar3 != ((int *)GEN_TOP(0x0))) {
          pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))
                                     (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar1),piVar9[4])));
        }
        piVar9[-4] = 4;
      }
      break;
    case 0x1: ;
      if (REFG(int, 0x137104c) == 0) {
        this_00 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
      }
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(*piVar9));
        if (piVar3 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,500);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x78))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_ARG,500);
        }
        pcVar6 = ((char *)GEN_TOP(F_00ab4e30((uint)*(ushort *)(piVar9 - 3))));
        if (pcVar6 != ((char *)GEN_TOP(0x0))) {
          pcVar8 = pcVar6;
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          if (pcVar8 != pcVar6 + 1 && -1 < (int)pcVar8 - (int)(pcVar6 + 1)) {
            pcVar6 = ((char *)GEN_TOP(F_004e98b0(this_00 GEN_EDX_ARG,pcVar6)));
            *piVar9 = (int)pcVar6;
            if (pcVar6 != ((char *)GEN_TOP(0x0))) {
              piVar9[-4] = 3;
            }
          }
        }
      }
      break;
    case 0x2: ;
      pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x14))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_ARG)));
      if ((char)pcVar6 == '\0') {
        pcVar6 = ((char *)GEN_TOP(0x0));
        if ((piVar9[8] != 0) || ((uint)piVar9[5] <= (uint)piVar9[7])) {
          pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x4c))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_ARG,piVar9[4])));
          piVar9[-4] = 4;
        }
      }
      break;
    case 0x3: ;
      pcVar6 = ((char *)GEN_TOP(F_00aaf0c0(piVar9 - 5 GEN_EDX_ARG)));
      break;
    case 0x4: ;
      piVar3 = ((int *)GEN_TOP(*piVar9));
      piVar9[10] = 0;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x24))))
                                   (piVar3 GEN_EDX_ARG,(undefined4)
                                           gen_fl2bits((float)((float10)fVar1 *
                                                              (float10)*(double *)&REFG(undefined, 0x108bec8))),
                                    piVar9[3])));
      }
      piVar9[-4] = 6;
      break;
    case 0x5: ;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x20))))(((int *)GEN_TOP(*piVar9))); dVar12 = extraout_ST0;
      fVar4 = (float10)0;
      bVar10 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN(fVar4);
      bVar11 = bVar10 || extraout_ST0 == fVar4;
      pcVar6 = ((char *)GEN_TOP(CONCAT22((short)((ulonglong)gen_d2bits(dVar12) >> 0x10),
                                CONCAT11(bVar11 << 6 | bVar10 << 2 | 2U | !(fVar4 <= extraout_ST0),
                                         (char)(ulonglong)gen_d2bits(dVar12)))));
      if (bVar10 != bVar11) {
        if (((char)piVar9[2] == '\0') ||
           (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x7c))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_ARG), (char)uVar7 == '\0'))
        goto LAB_00ab7891;
        pcVar6 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar9)) + 0x5c))))(((int *)GEN_TOP(*piVar9)) GEN_EDX_ARG,0)));
        piVar9[-4] = 7;
        *((undefined1 *)GEN_TOP(((int)piVar9 + 9))) = 1;
      }
      break;
    case 0x6: ;
      if ((REFG(int, 0x137104c) != 0) &&
         (fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) +
                         ((float10)GEN_TOD(gen_bits2f(piVar9[9])))))), piVar9[9] = (int)gen_fl2bits(fVar1),
         ((float10)GEN_TOD(gen_bits2f(piVar9[-5]))) < (float10)fVar1)) {
LAB_00ab7891: ;
        pcVar6 = ((char *)GEN_TOP(F_00ab06e0(piVar9 - 5 GEN_EDX_ARG,0)));
      }
    }
    piVar9 = piVar9 + 0x10;
    local_c = local_c - 1;
    if (local_c == 0) {
      return (uint)pcVar6;
    }
  } while( true );
}

/* ref: FUN_00ab78d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab78d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xab78d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  byte bVar1;
  int * piVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (param_2 == ((int *)GEN_TOP(0x0))) {
    return (uint)piVar2;
  }
  cVar5 = '\x02';
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 3: ;
    bVar1 = F_00a9f620(param_2 GEN_EDX_ARG);
    cVar5 = bVar1 == 0;
    break;
  case 4: ;
    if ((param_4 & 1) != 0) break;
  case 0xe: ;
    F_00ab4370(0x70,param_2,param_2,0,0);
    cVar5 = '\x01';
    break;
  case 5: ;
    F_00ab4370(0xb5,param_2,param_2,0,0);
    cVar5 = '\x01';
    break;
  case 8: ;
    F_00ab4370(0x71,param_2,param_2,0,0);
    cVar5 = '\x01';
  }
  if ((((undefined *)GEN_TOP(param_2[0xb81])) != ((undefined *)GEN_TOP(0x0))) && (*(int *)&REFG(undefined2, 0x1379c78) == param_5)) {
    F_00bc7e20(((undefined *)GEN_TOP(param_2[0xb81])) GEN_EDX_ARG);
  }
  bVar1 = F_00a9f620(param_2 GEN_EDX_ARG);
  if (bVar1 != 0) {
    F_005d9a00();
    this = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006e33b0(this GEN_EDX_ARG);
    if (param_3 != 3) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa8))))(piVar2 GEN_EDX_ARG,0,0x1e,1);
    }
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,1);
    if ((param_4 & 2) == 0) {
      F_00ab5ef0(param_3,param_5);
    }
    F_00a6efa0(&REFG(undefined, 0x14ab428) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb4))))(piVar2 GEN_EDX_ARG);
    if (*(int *)&REFG(undefined2, 0x1379c78) == param_5) {
      *((undefined1 *)GEN_TOP((param_1 + 0x28))) = 0;
    }
    else {
      *((undefined1 *)GEN_TOP((param_1 + 0x28))) = 1;
      F_00ae33e0(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG);
    }
    *((int *)GEN_TOP((param_1 + 8))) = param_3;
  }
  if (cVar5 == '\x01') {
    param_2[0xbb2] = GEN_FLT_TO(param_2[0xbb2], REFG(float, 0x109cb08));
  }
  else if (cVar5 == '\x02') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG,9,0);
  }
  bVar1 = F_00a9f620(param_2 GEN_EDX_ARG);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (((bVar1 == 0) && (*(int *)&REFG(undefined2, 0x1379c78) != param_5)) &&
     (uVar3 = F_00a9fba0(param_2 GEN_EDX_ARG,param_3), (*((byte *)GEN_TOP(((int)param_2 + 0x2dd2))) & 0x10) != 0)) {
    uVar4 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_2[0x1d]);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = F_00b7aa60(((undefined *)GEN_TOP((uVar4 + 0x6c))) GEN_EDX_ARG);
    }
  }
  return uVar3;
}

/* ref: FUN_00ab7ac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab7ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab7ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc80, 0);
  int iVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  byte bVar5;
  int * piVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  float * pfVar9;
  undefined4 * puVar10;
  uint uVar11;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int * piVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  piVar12 = REFG(int * PTR32, 0x1379694);
  (*(uint *)(gen_frame + 0xc6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc70);
  piVar6 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar6;
  pvVar7 = ((undefined *)GEN_TOP(F_006b8c00()));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar7;
  if (REFG(int, 0x1379c74) == -1) {
    return (uint)pvVar7;
  }
  F_00ab5fe0(this GEN_EDX_ARG);
  uVar11 = *(uint *)this;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)*((float *)GEN_TOP(((int)this + 4))))));
  (*(float *)(gen_frame + 0x44)) = fVar2;
  *((float *)GEN_TOP(((int)this + 4))) = fVar2;
  switch((unsigned int)(uintptr_t)(uVar11)) {
  case 0: ;
    if ((piVar12 == ((int *)GEN_TOP(0x0))) || ((char)piVar12[0x62] != '\x02')) {
      uVar8 = F_00ab1340();
      *((uint *)GEN_TOP(((int)this + 0xc))) = uVar8;
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = F_006b8c00();
        uVar11 = F_006c5190(uVar11 GEN_EDX_ARG);
        if ((char)uVar11 != '\0') {
          uVar15 = 0;
          uVar14 = 0x32;
          pvVar7 = ((undefined *)GEN_TOP(F_006b8c00()));
          bVar5 = F_006e3100(pvVar7 GEN_EDX_ARG,uVar14,uVar15);
          return CONCAT31(extraout_var,bVar5);
        }
        uVar8 = F_00ab1c90((uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x86))));
        uVar11 = 0;
        if (uVar8 != 0) {
          piVar12 = ((int *)GEN_TOP(F_005f3270(0x28,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x90))),0)));
          if (piVar12 != ((int *)GEN_TOP(0x0))) {
            pfVar4 = ((float *)GEN_TOP(piVar12[0x1f]));
            iVar1 = *piVar12;
            (*(float *)(gen_frame + 0x20)) = *pfVar4;
            (*(float *)(gen_frame + 0x24)) = pfVar4[1];
            pfVar9 = &(*(float *)(gen_frame + 0x20));
            (*(float *)(gen_frame + 0x28)) = pfVar4[2];
            uVar11 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xe4))))(piVar12);
            puVar10 = ((undefined4 *)GEN_TOP(F_004bd670(((undefined1 *)(gen_frame + 0x0)),uVar11,pfVar9)));
            *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar10;
            *((undefined4 *)GEN_TOP(((int)this + 0x14))) = puVar10[1];
            *((undefined4 *)GEN_TOP(((int)this + 0x18))) = puVar10[2];
          }
          uVar14 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
          pvVar7 = ((undefined *)GEN_TOP(F_006b8c00()));
          F_006f7db0(pvVar7 GEN_EDX_ARG,uVar14);
          uVar11 = F_006b8c00();
          uVar11 = F_006c5190(uVar11 GEN_EDX_ARG);
          if ((char)uVar11 == '\0') {
            *(undefined4 *)this = 3;
            uVar11 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
            return uVar11;
          }
          *(undefined4 *)this = 1;
          uVar11 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
          return uVar11;
        }
      }
    }
    break;
  case 2: ;
    if (piVar12 != ((int *)GEN_TOP(0x0))) {
      bVar5 = F_00a9fca0(piVar12 GEN_EDX_ARG);
      if (bVar5 != 0) {
        return CONCAT31(extraout_var_00,bVar5);
      }
    }
    *(undefined4 *)this = 3;
    uVar11 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
    return uVar11;
  case 3: ;
    F_00ae8f70();
    fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x94)));
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar13 = ((float10)GEN_TOD(fsin((float10)fVar2)));
    fVar3 = (float)fVar13;
    (*(float *)(gen_frame + 0x40)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar3;
    fVar13 = ((float10)GEN_TOD(fcos((float10)fVar2)));
    fVar2 = (float)fVar13;
    (*(float *)(gen_frame + 0x40)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    fVar13 = (float10)REFG(double, 0x10944b8);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar3 * fVar13);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)0 * fVar13);
    (*(float *)(gen_frame + 0x28)) = (float)(fVar13 * (float10)fVar2);
    pfVar9 = ((float *)GEN_TOP(F_00a5feb0(piVar12 GEN_EDX_ARG)));
    iVar1 = *piVar12;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar9 + (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar9[1] + (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar9[2] + (float10)(*(float *)(gen_frame + 0x28)));
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x54))))(piVar12,1);
    F_00a9f7c0(piVar12 GEN_EDX_ARG,(*(float *)(gen_frame + 0x20)),(*(float *)(gen_frame + 0x24)),(*(float *)(gen_frame + 0x28)),(*(float *)(gen_frame + 0x44)),0);
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x23,1);
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,1);
    (*(float *)(gen_frame + 0x40)) = gen_bits2f(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x14))));
    puVar10 = ((undefined4 *)GEN_TOP(F_00a5feb0(piVar12 GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0x44)) = gen_bits2f(*puVar10);
    uVar11 = F_00a5feb0(piVar12 GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)GEN_TOP(*((undefined4 *)GEN_TOP((uVar11 + 4)))));
    uVar11 = F_00a5feb0(piVar12 GEN_EDX_ARG);
    uVar14 = *((undefined4 *)GEN_TOP((uVar11 + 8)));
    (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x44)));
    (*(undefined4 *)(gen_frame + 0x48)) = 400;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x20;
    (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x40)));
    uVar16 = 0;
    uVar15 = 0;
    puVar10 = &(*(undefined4 *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0x6c)) = uVar14;
    pvVar7 = ((undefined *)GEN_TOP(F_00424810(REFG(int, 0x137104c) GEN_EDX_ARG)));
    F_00974e00(pvVar7 GEN_EDX_ARG,puVar10,uVar15,uVar16);
    F_005d9a00();
    piVar12 = (*(int * PTR32 *)(gen_frame + 0x3c));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xa8))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,0,0x1e,1);
    *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0xb4))))(piVar12 GEN_EDX_ARG);
    *(undefined4 *)this = 4;
    uVar11 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
    return uVar11;
  case 4: ;
    if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(REFG(float, 0x1087f04))) && !(fVar2 < REFG(float, 0x1087f04))) {
      if (*((char *)GEN_TOP(((int)this + 0x20))) == '\0') {
        uVar11 = F_00424810(REFG(int, 0x137104c) GEN_EDX_ARG);
        uVar11 = F_00974710(uVar11 GEN_EDX_ARG);
        if ((char)uVar11 != '\0') {
          *(undefined4 *)this = 5;
          uVar11 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
          return uVar11;
        }
      }
      uVar11 = F_00ab1390(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
      return uVar11;
    }
    break;
  case 6: ;
    bVar5 = F_005e1600();
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c));
    if ((((((((bVar5 == 0) || (bVar5 = F_005d99e0(), piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c)), bVar5 == 0)) ||
            (piVar12 == ((int *)GEN_TOP(0x0)))) ||
           (uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x68))))(piVar12 GEN_EDX_ARG), pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x1c)), piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c))
           , (char)uVar11 != '\x01')) ||
          (((uVar11 = F_006c5190((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG), (char)uVar11 != '\0' &&
            (piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c)), *((char *)GEN_TOP(((int)this + 0x28))) != '\0')) ||
           ((bVar5 = F_006da1b0(pvVar7 GEN_EDX_ARG), piVar6 = (*(int * PTR32 *)(gen_frame + 0x3c)), bVar5 == 0 ||
            ((uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x80))))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,1), (char)uVar11 == '\0' ||
             (REFG(char, 0x14b5184) == '\0')))))))) || (REFG(char, 0x14b51d4) == '\0')) ||
        (((!(REFG(float, 0x1087ef8) <= *((float *)GEN_TOP(((int)this + 4)))) &&
          ((*((int *)GEN_TOP(((int)this + 8))) != 5 || (bVar5 = F_00ab5fa0(), bVar5 != 0)))) ||
         (uVar11 = F_00b7a2c0(&REFG(undefined, 0x14c5798) GEN_EDX_ARG), (int)uVar11 < 0x50)))) &&
       (!(REFG(float, 0x10946b8) <= *((float *)GEN_TOP(((int)this + 4)))))) {
      bVar5 = F_005e1600();
      if (bVar5 == 0) {
        return CONCAT31(extraout_var_01,bVar5);
      }
      bVar5 = F_005d99e0();
      if (bVar5 == 0) {
        return CONCAT31(extraout_var_02,bVar5);
      }
      if (REFG(char, 0x14a31e4) == '\0') {
        return CONCAT31(extraout_var_02,bVar5);
      }
      uVar11 = F_005d9a30();
      return uVar11;
    }
    if (*((int *)GEN_TOP(((int)this + 8))) != 0x11) {
      if (REFG(int, 0x1375bbc) == -1) {
        piVar12 = ((int *)GEN_TOP(0x0));
      }
      else {
        piVar12 = ((int *)GEN_TOP((&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))]));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x10))))(piVar12 GEN_EDX_ARG);
    }
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x23,0);
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
    F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xf8))))(piVar6 GEN_EDX_ARG);
    F_00a51200(0xe,0,0,0,0);
    if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
      pvVar7 = ((undefined *)GEN_TOP(F_006b8c00()));
      bVar5 = F_0070dfa0(pvVar7 GEN_EDX_ARG);
      if (bVar5 != 0) goto LAB_00ab8099;
    }
    F_00ab60c0(this GEN_EDX_ARG);
LAB_00ab8099: ;
    F_00ab0590();
    uVar14 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    uVar11 = F_006b8c00();
    F_006c5150(uVar11 GEN_EDX_ARG,uVar14);
    piVar12 = *((int * PTR32 *)GEN_TOP(((int)this + 0x7c)));
    if (piVar12 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 4))))(piVar12 GEN_EDX_ARG);
      puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x7c)));
      if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
      }
    }
    puVar10 = ((undefined4 *)GEN_TOP(((int)this + 0x80)));
    (*(float *)(gen_frame + 0x44)) = 4.2039e-45;
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar10)) + 4))))(((int *)GEN_TOP(*puVar10)) GEN_EDX_ARG);
      puVar10 = puVar10 + 1;
      iVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x44))) - 1;
      (*(float *)(gen_frame + 0x44)) = gen_bits2f(iVar1);
    } while (iVar1 != 0);
    F_005f3240();
    *((undefined2 *)GEN_TOP(((int)this + 0x40))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
    F_00a021b0(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x2620))) GEN_EDX_ARG,2,0);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    F_005d9a70();
    *(undefined4 *)this = 0;
    uVar11 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1d,0);
    return uVar11;
  }
  return uVar11;
}

/* ref: FUN_00ab81e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ab81e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab81e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte * pbVar1;
  int * piVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x20))) < 5) {
    uVar3 = F_00aa55c0(param_1);
    *((uint *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x20))) * 4 + 0xc))) = uVar3;
    piVar2 = ((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x20))) * 4 + 0xc)));
    if (*piVar2 != 0) {
      pbVar1 = ((byte *)GEN_TOP((*piVar2 + 100)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
  }
  return;
}

/* ref: FUN_00ab8220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab8220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab8220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = F_0052fce0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x140,*(undefined4 *)this,iVar4,0,0);
    if (uVar2 == 0) {
      return 0;
    }
    piVar3 = *((int * PTR32 *)GEN_TOP((uVar2 + 4)));
    if (piVar3 == ((int *)GEN_TOP(0x0))) break;
    cVar1 = (char)piVar3[1];
    if (cVar1 == '\x01') {
      piVar3 = ((int *)GEN_TOP(*piVar3));
      if (*((int *)GEN_TOP(((int)this + 0x20))) < 5) {
        uVar2 = F_00aa55c0(piVar3);
        *((uint *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x20))) * 4 + 0xc))) = uVar2;
        piVar3 = ((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x20))) * 4 + 0xc)));
        if (*piVar3 != 0) {
          piVar3 = ((int *)GEN_TOP(*piVar3));
          *(byte *)(piVar3 + 0x19) = *(byte *)(piVar3 + 0x19) & 0xfe;
        }
        *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
      }
    }
    else if (((cVar1 != '\x02') && (cVar1 == '\x04')) &&
            (piVar3 = ((int *)GEN_TOP(*piVar3)), *((int *)GEN_TOP(((int)this + 0x4c))) < 10)) {
      piVar3 = ((int *)GEN_TOP(F_00ab4aa0(piVar3)));
      *((int * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x4c))) * 4 + 0x24))) = piVar3;
      *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) + 1;
    }
    iVar4 = iVar4 + 1;
    if (0x13 < iVar4) {
      return (uint)piVar3;
    }
  }
  return 0;
}

/* ref: FUN_00ab82c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab82c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab82c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 1) {
    iVar4 = 0;
    while ((uVar2 = F_0052fce0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x140,*(undefined4 *)this,iVar4,0
                                 ,0), uVar2 != 0 &&
           (piVar3 = *((int * PTR32 *)GEN_TOP((uVar2 + 4))), piVar3 != ((int *)GEN_TOP(0x0))))) {
      if (((char)piVar3[1] == '\x01') && (piVar3 = ((int *)GEN_TOP(*piVar3)), 999999 < (int)piVar3)) {
        piVar3 = ((int *)GEN_TOP(F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x44,piVar3)));
        if (piVar3 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        if (piVar3[1] == 0) {
          return (uint)piVar3;
        }
      }
      iVar4 = iVar4 + 1;
      if (0x13 < iVar4) {
        return (uint)piVar3;
      }
    }
    uVar2 = F_00ab8220(this GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 2;
  }
  else {
    uVar2 = *((int *)GEN_TOP(((int)this + 8))) - 2;
    if (uVar2 == 0) {
      bVar1 = F_00ab1c10(this GEN_EDX_ARG);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        *((undefined1 *)GEN_TOP(((int)this + 4))) = 1;
        *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ab8360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab8360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab8360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = param_1;
  *(int *)this = param_1;
  uVar2 = F_00aaf890(this GEN_EDX_FWD);
  iVar4 = 0;
  if (param_1 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 4))) = 1;
    return uVar2;
  }
  param_1 = 0;
  do {
    uVar2 = F_0052fce0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x140,iVar1,iVar4,0,0);
    piVar3 = ((int *)GEN_TOP(0x0));
    if ((uVar2 == 0) || (piVar3 = *((int * PTR32 *)GEN_TOP((uVar2 + 4))), piVar3 == ((int *)GEN_TOP(0x0)))) break;
    if (((char)piVar3[1] == '\x01') && (piVar3 = ((int *)GEN_TOP(*piVar3)), 999999 < (int)piVar3)) {
      piVar3 = ((int *)GEN_TOP(F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x44,piVar3)));
      if ((piVar3 == ((int *)GEN_TOP(0x0))) || (piVar3[1] == 0)) {
        param_1 = param_1 + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
    return (uint)piVar3;
  }
  uVar2 = F_00ab8220(this GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 2;
  return uVar2;
}

/* ref: FUN_00ab8420 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab8420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab8420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00ab82c0(this GEN_EDX_FWD);
  uVar1 = F_00ab82c0(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ab8440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab8440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab8440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x41,param_1);
  if ((uVar2 != 0) && (iVar1 = *((int *)GEN_TOP((uVar2 + 4))), iVar1 != 0)) {
    if (*((char *)GEN_TOP(((int)this + 4))) == '\0') {
      F_00ab8360(this GEN_EDX_ARG,1);
    }
    uVar2 = F_00ab8360(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((iVar1 + 0x2b))));
  }
  return uVar2;
}

/* ref: FUN_00ab8490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab8490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xab8490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x1c))) >> 4) < 0x10) {
    uVar3 = F_004296a0(0x100,0,800);
    F_00abd2f0(*((undefined4 *)GEN_TOP(((int)this + 0x1c))),*((undefined4 *)GEN_TOP(((int)this + 0x20))),uVar3,
                 (int)this + 0x28);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
    if (iVar1 != 0) {
      F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 0x24))) - iVar1 & 0xfffffff0,800);
    }
    *((uint *)GEN_TOP(((int)this + 0x20))) = (iVar2 - iVar1 & 0xfffffff0U) + uVar3;
    *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 0x24))) = uVar3 + 0x100;
  }
  return (uint)this;
}

/* ref: FUN_00ab8560 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab8560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab8560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 0x24))) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  return uVar2;
}

/* ref: FUN_00ab85a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ab85a0(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(byte * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab85a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a2;)
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int * piVar4;
  short * psVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  short * psVar9;
  ushort * puVar10;
  short sVar11;
  int iVar12;
  short * psVar13;
  short * psVar14;
  ushort * puVar15;
  byte * pbVar16;
  float fVar17;
  
  if (REFG(int, 0x137104c) == 0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = *((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198)));
  }
  uVar2 = (ushort)param_1[4];
  if (uVar2 == 0) goto LAB_00ab869f;
  *((ushort *)GEN_TOP(((int)param_1 + 0x12))) = uVar2;
  param_1[3] = 0;
  if (((uVar2 < 0x3e9) ||
      (uVar8 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x85,(uint)uVar2), uVar8 == 0)) ||
     (psVar9 = *((short * PTR32 *)GEN_TOP((uVar8 + 4))), psVar9 == ((short *)GEN_TOP(0x0)))) goto switchD_00ab861f_default;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    sVar11 = *psVar9;
    param_1[3] = 1;
    goto LAB_00ab8693;
  case 2: ;
    *((short *)GEN_TOP(((int)param_1 + 0x12))) = psVar9[1];
    param_1[3] = 2;
    break;
  case 3: ;
    *((short *)GEN_TOP(((int)param_1 + 0x12))) = psVar9[2];
    param_1[3] = 3;
    break;
  case 4: ;
    sVar11 = psVar9[3];
    if (sVar11 != 0) {
      param_1[3] = 4;
      goto LAB_00ab8693;
    }
    *((short *)GEN_TOP(((int)param_1 + 0x12))) = *psVar9;
    param_1[3] = 1;
    break;
  case 5: ;
    sVar11 = psVar9[4];
    if (sVar11 == 0) {
      sVar11 = psVar9[1];
      param_1[3] = 2;
    }
    else {
      param_1[3] = 5;
    }
LAB_00ab8693: ;
    *((short *)GEN_TOP(((int)param_1 + 0x12))) = sVar11;
  }
switchD_00ab861f_default: ;
  *(undefined2 *)(param_1 + 5) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x12)));
LAB_00ab869f: ;
  if (*((char *)GEN_TOP(((int)param_1 + 0x16))) != '\0') {
    if (gen_bits2f(param_1[6]) < *(float *)&REFG(undefined, 0x10e9058)) {
      param_1[6] = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[6]))) + (float10)fVar17));
    }
    else if ((REFG(int, 0x14bcc68) == 0) || (*((char *)GEN_TOP((REFG(int, 0x14bcc68) + 0xb4))) == '\0')) {
      F_00ab07d0(param_1 GEN_EDX_ARG);
    }
  }
  puVar15 = ((ushort *)GEN_TOP(param_1[7]));
  psVar9 = ((short *)GEN_TOP(((uint)*param_3 * 0x40)));
  bVar1 = *((byte *)GEN_TOP(((int)(psVar9 + 0xc) + (int)param_3)));
  sVar11 = *((short *)GEN_TOP(((int)(psVar9 + 8) + (int)param_3)));
  if (puVar15 != ((ushort *)GEN_TOP(param_1[8]))) {
    do {
      if (((char)puVar15[1] != '\0') && ((char)puVar15[6] == '\0')) {
        if ((uint)bVar1 == *param_1) {
          iVar12 = 0;
          puVar10 = (ushort *)(param_3 + 0x10);
          do {
            if ((*(int *)(puVar10 - 2) - 1U < 4) && (*puVar10 == *puVar15)) {
              bVar7 = F_00aaf3c0(param_3 GEN_EDX_ARG,(uint)*puVar15);
              psVar9 = ((short *)GEN_TOP((uint)bVar7));
              if (bVar7 == 0) goto LAB_00ab8751;
              goto LAB_00ab874d;
            }
            iVar12 = iVar12 + 1;
            puVar10 = puVar10 + 0x20;
          } while (iVar12 < 2);
        }
        bVar7 = F_00aaf410(param_3 GEN_EDX_ARG,(uint)*puVar15);
        psVar9 = ((short *)GEN_TOP((uint)bVar7));
        if (bVar7 == 0) {
LAB_00ab874d: ;
          *(undefined1 *)(puVar15 + 6) = 1;
        }
      }
LAB_00ab8751: ;
      puVar15 = puVar15 + 8;
    } while (puVar15 != ((ushort *)GEN_TOP(param_1[8])));
  }
  bVar7 = (byte)psVar9;
  psVar13 = ((short *)GEN_TOP(param_1[7]));
  param_2 = (uint)psVar13;
  if (psVar13 != ((short *)GEN_TOP(param_1[8]))) {
    do {
      if (((char)psVar13[6] == '\0') ||
         (*(float *)(psVar13 + 4) = ((float)GEN_TOF(((float10)fVar17 + (float10)*(float *)(psVar13 + 4)))),
         !((float10)*(float *)(psVar13 + 2) < (float10)*(float *)(psVar13 + 4)))) {
        psVar13 = psVar13 + 8;
        param_2 = (uint)psVar13;
      }
      else {
        sVar3 = *psVar13;
        if ((uint)bVar1 == *param_1) {
          iVar12 = 0;
          pbVar16 = param_3 + 0x1c;
          do {
            if ((((*(int *)(pbVar16 - 0x10) == 4) && (*(int *)pbVar16 != 0)) &&
                (uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pbVar16 + 0x7c))))(*(int * PTR32 *)pbVar16 GEN_EDX_ARG),
                psVar13 = ((short *)GEN_TOP(param_2)), (char)uVar8 == '\0')) &&
               (*(short *)(pbVar16 - 0xc) == sVar3)) {
              if (*((short *)GEN_TOP(((int)param_1 + 0x12))) == sVar11) {
                iVar12 = (uint)*param_3 * 0x40;
                piVar4 = *(int * PTR32 *)(param_3 + iVar12 + 0x1c);
                if (piVar4 != ((int *)GEN_TOP(0x0))) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x50))))(piVar4 GEN_EDX_ARG,0);
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_3 + iVar12 + 0x1c) + 0x78))))
                            (*(int * PTR32 *)(param_3 + iVar12 + 0x1c) GEN_EDX_ARG,500);
                  pbVar16 = param_3 + iVar12 + 0x1c;
                  pbVar16[0] = 0;
                  pbVar16[1] = 0;
                  pbVar16[2] = 0;
                  pbVar16[3] = 0;
                }
                pbVar16 = param_3 + iVar12 + 0x40;
                pbVar16[0] = 0;
                uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0xc;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                (param_3 + iVar12 + 0x10)[0] = 0;
                (param_3 + iVar12 + 0x10)[1] = 0;
                pbVar16 = param_3 + iVar12 + 0x20;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                (param_3 + iVar12 + 0x24)[0] = 0;
                (param_3 + iVar12 + 0x24)[1] = 0;
                *(undefined4 *)(param_3 + iVar12 + 0x44) = uVar6;
                pbVar16 = param_3 + iVar12 + 0x28;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x2c;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x30;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x38;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x3c;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x14;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                param_3[iVar12 + 0x18] = 0;
              }
              break;
            }
            iVar12 = iVar12 + 1;
            pbVar16 = pbVar16 + 0x40;
          } while (iVar12 < 2);
        }
        psVar5 = ((short *)GEN_TOP(param_1[8]));
        psVar14 = psVar13;
        psVar9 = psVar13;
        while (psVar9 = psVar9 + 8, psVar9 != psVar5) {
          *(undefined4 *)psVar14 = *(undefined4 *)psVar9;
          *(undefined4 *)(psVar14 + 2) = *(undefined4 *)(psVar9 + 2);
          *(undefined4 *)(psVar14 + 4) = *(undefined4 *)(psVar9 + 4);
          *(undefined4 *)(psVar14 + 6) = *(undefined4 *)(psVar9 + 6);
          psVar14 = psVar14 + 8;
          psVar13 = ((short *)GEN_TOP(param_2));
        }
        param_1[8] = param_1[8] - 0x10;
      }
      bVar7 = (byte)psVar9;
    } while (psVar13 != ((short *)GEN_TOP(param_1[8])));
  }
  return bVar7;
}

/* ref: FUN_00ab88e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ab88e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab88e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x16))) == '\0') {
LAB_00ab891f: ;
    if (*((int *)GEN_TOP(((int)this + 0x48))) != 1) goto LAB_00ab894e;
  }
  else if (*((int *)GEN_TOP(((int)this + 0x48))) != 1) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    goto LAB_00ab891f;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
LAB_00ab894e: ;
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != *((int *)GEN_TOP(((int)this + 0x20)))) {
    *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x1c)));
  }
  return 0;
}

/* ref: FUN_00ab8990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab8990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xab8990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  uint uVar2;
  ushort * puVar3;
  uint uVar4;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x20))) - *((int *)GEN_TOP(((int)this + 0x1c))) >> 4;
  if (uVar2 < 0x10) {
    for (puVar3 = *((ushort * PTR32 *)GEN_TOP(((int)this + 0x1c))); puVar3 != *((ushort * PTR32 *)GEN_TOP(((int)this + 0x20)));
        puVar3 = puVar3 + 8) {
      if (*puVar3 == (ushort)param_1) {
        return (uint)puVar3;
      }
    }
    uVar4 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x83,(uint)(ushort)param_1);
    uVar2 = 0;
    if (uVar4 != 0) {
      iVar1 = *((int *)GEN_TOP((uVar4 + 4)));
      uVar2 = 0;
      if (iVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0x2)) = *((undefined1 *)GEN_TOP((iVar1 + 0xb)));
        (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
        (*(ushort *)(gen_frame + 0x0)) = (ushort)param_1;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined1 *)(gen_frame + 0xc)) = 0;
        uVar2 = F_00abd660(((undefined4 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(ushort *)(gen_frame + 0x0)));
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ab8a60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ab8a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab8a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  ushort * puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined * this_00;
  undefined4 local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  bVar5 = false;
  local_10 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    local_c = 0;
    do {
      this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + local_c)));
      cVar1 = *((char *)GEN_TOP(((int)this + 0xb4)));
      uVar2 = *((ushort *)GEN_TOP(((int)this_00 + 0x12)));
      uVar11 = (uint)uVar2;
      uVar3 = *((undefined4 *)GEN_TOP(((int)this_00 + 0xc)));
      if (((uVar2 != 0) &&
          (uVar7 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x83,uVar11), uVar7 != 0)) &&
         (iVar9 = *((int *)GEN_TOP((uVar7 + 4))), iVar9 != 0)) {
        if (((*((char *)GEN_TOP(((int)this_00 + 4))) == '\0') ||
            (iVar10 = (uint)*((byte *)GEN_TOP(((int)this + 0x10))) * 0x40,
            3 < *((int *)GEN_TOP(((int)this + iVar10 + 0x1c))) - 1U)) ||
           ((*((int *)GEN_TOP(((int)this + iVar10 + 0x24))) != 3 || (cVar1 == '\0')))) {
          bVar4 = false;
          if ((*((char *)GEN_TOP(((int)this_00 + 8))) != '\0') && (*((char *)GEN_TOP((iVar9 + 10))) != '\0')) {
            for (puVar8 = *((ushort * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
                puVar8 != *((ushort * PTR32 *)GEN_TOP(((int)this_00 + 0x20))); puVar8 = puVar8 + 8) {
              if (*puVar8 == uVar2) {
                bVar6 = F_00aaf380(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar11);
                if ((bVar6 == 0) &&
                   (bVar6 = F_00aaf410(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar11), bVar6 == 0))
                goto LAB_00ab8b58;
                break;
              }
            }
            bVar4 = true;
          }
          local_5 = 0;
          if (*((char *)GEN_TOP(((int)this_00 + 6))) != '\0') {
            if (*((char *)GEN_TOP(((int)this + 200))) != '\0') goto LAB_00ab8b54;
            if (*((char *)GEN_TOP((iVar9 + 9))) != '\0') {
              local_5 = 1;
            }
          }
          local_14 = CONCAT31((int3)((uint)iVar9 >> 8),*((undefined1 *)GEN_TOP(((int)this_00 + 7))));
          if (*((char *)GEN_TOP(((int)this_00 + 0x2c))) == '\0') {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)this_00 + 0x30;
          }
          bVar6 = F_00ab7140(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar11,uVar3,local_10,local_14,iVar9);
          local_10 = (uint)bVar6;
          if (bVar6 != 0) {
            if (bVar4) {
              F_00ab8990(this_00 GEN_EDX_ARG,uVar11);
            }
            local_10 = (uint)local_5;
            *((byte *)GEN_TOP(((int)this + 200))) = local_5;
            if (local_5 != 0) {
              *((ushort *)GEN_TOP(((int)this + 0xca))) = uVar2;
              return local_5;
            }
          }
          goto LAB_00ab8b95;
        }
LAB_00ab8b54: ;
        bVar5 = true;
      }
LAB_00ab8b58: ;
      local_c = local_c + 0x50;
      local_10 = local_10 + 1;
    } while (local_10 < *((uint *)GEN_TOP(((int)this + 8))));
    if (bVar5) goto LAB_00ab8b95;
  }
  bVar6 = F_00ab7140(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,1,
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 0x23c))),7,
                       (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 0x237))),0);
  local_10 = (uint)bVar6;
LAB_00ab8b95: ;
  return (byte)local_10;
}

/* ref: FUN_00ab8c00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ab8c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab8c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte * this_00;
  byte bVar1;
  undefined * pvVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  
  F_00ab0ad0(this GEN_EDX_FWD);
  if (*((char *)GEN_TOP(((int)this + 0xb4))) == '\0') {
    uVar4 = F_00ab0c40();
    *((uint *)GEN_TOP(((int)this + 0xb0))) = uVar4;
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 3;
  }
  uVar4 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    iVar5 = 0;
    do {
      F_00ab85a0(*((int *)GEN_TOP(((int)this + 0xa0))) + iVar5 GEN_EDX_ARG,*((uint *)GEN_TOP(((int)this + 0xb0))),(int)this + 0x10);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (uVar4 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  F_00ab0b90(this GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0xc0))))) {
  case 0: ;
    bVar1 = F_005e1600();
    if ((bVar1 != 0) && (REFG(int, 0x1379694) != 0)) {
      pvVar2 = ((undefined *)GEN_TOP(F_006b8c00()));
      bVar1 = F_006da1b0(pvVar2 GEN_EDX_ARG);
      if (bVar1 != 0) {
        pvVar2 = ((undefined *)GEN_TOP(F_006b8c00()));
        bVar1 = F_006da210(pvVar2 GEN_EDX_ARG);
        *((uint *)GEN_TOP(((int)this + 0xc0))) = (uint)(bVar1 == 0) * 2 + 1;
      }
    }
    break;
  case 1: ;
    if (*((char *)GEN_TOP(((int)this + 0xc4))) != '\0') {
      pvVar2 = ((undefined *)GEN_TOP(F_006b8c00()));
      bVar1 = F_006d9e20(pvVar2 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0xc0))) = (bVar1 != 0xf) + 2;
    }
    break;
  case 2: ;
    pvVar2 = ((undefined *)GEN_TOP(F_006b8c00()));
    bVar1 = F_006d9e20(pvVar2 GEN_EDX_ARG);
    if ((bVar1 == 0) || (*((char *)GEN_TOP(((int)this + 0xc5))) != '\0')) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 3;
    }
    break;
  case 3: ;
    *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 4;
    *((undefined2 *)GEN_TOP(((int)this + 199))) = 1;
    *((undefined2 *)GEN_TOP(((int)this + 0xca))) = 0;
    F_00ab0890(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
    uVar4 = 0;
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      iVar5 = 0;
      do {
        F_00ab88e0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + iVar5))) GEN_EDX_ARG);
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x50;
      } while (uVar4 < *((uint *)GEN_TOP(((int)this + 8))));
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 0xa0)));
    *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0xb4))) = 0;
    if (*((int *)GEN_TOP((iVar5 + 0x228))) != 1) {
      *((undefined4 *)GEN_TOP((iVar5 + 0x1ec))) = 0;
      *((undefined1 *)GEN_TOP((iVar5 + 0x1f6))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 0x1f8))) = 0;
      *((undefined1 *)GEN_TOP((iVar5 + 0x20c))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 0x228))) = 0;
      *((undefined2 *)GEN_TOP((iVar5 + 0x1f0))) = 0;
      *((undefined2 *)GEN_TOP((iVar5 + 0x1f2))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 0x210))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 0x214))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 0x218))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 0x220))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 0x224))) = 0;
    }
    break;
  case 4: ;
    F_00ab5120(this GEN_EDX_ARG);
    F_00ab8a60(this GEN_EDX_ARG);
  }
  this_00 = ((byte *)GEN_TOP(((int)this + 0x10)));
  pbVar3 = ((byte *)GEN_TOP(F_00ab75e0(this_00 GEN_EDX_ARG)));
  if ((*((char *)GEN_TOP(((int)this + 200))) != '\0') &&
     ((pbVar3 = this_00 + (uint)*this_00 * 0x40,
      *(short *)(this_00 + (uint)*this_00 * 0x40 + 0x10) != *((short *)GEN_TOP(((int)this + 0xca))) ||
      (((*(int *)(pbVar3 + 0xc) == 4 && (*(int *)(pbVar3 + 0x1c) != 0)) &&
       (pbVar3 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pbVar3 + 0x1c) + 0x7c))))(*(int * PTR32 *)(pbVar3 + 0x1c) GEN_EDX_ARG))),
       (char)pbVar3 == '\0')))))) {
    *((undefined1 *)GEN_TOP(((int)this + 200))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0xca))) = 0;
  }
  return (uint)pbVar3;
}

/* ref: FUN_00ab8e60 */
GEN_OWN GEN_NOFRAME unsigned int F_00ab8e60(void)
{
  GEN_ENTER(0xab8e60u, 0u, 0u, 0u, 0u);
  if (REFG(void * PTR32, 0x14bcc68) != ((undefined *)GEN_TOP(0x0))) {
    F_00ab8c00(REFG(void * PTR32, 0x14bcc68) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00ab8e70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ab8e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab8e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00abd9c0(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_FWD);
  F_00ab4f20(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00ab8e90 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ab8e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xab8e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0xd4,1);
  if ((uVar1 == 0) || (*((undefined4 * PTR32 *)GEN_TOP((uVar1 + 4))) == ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = **((undefined4 * PTR32 *)GEN_TOP((uVar1 + 4)));
  }
  *(undefined4 *)this = uVar3;
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xd4,2);
  if ((uVar1 == 0) || (*((undefined4 * PTR32 *)GEN_TOP((uVar1 + 4))) == ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = **((undefined4 * PTR32 *)GEN_TOP((uVar1 + 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar3;
  uVar1 = F_00530100(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x84);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  F_00ab4e70(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 4;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xca))) = 0;
  F_00abda80(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = 0;
    do {
      uVar2 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x84,uVar1);
      if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) != 0)) {
        uVar2 = F_00ab8490(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,*((int *)GEN_TOP((uVar2 + 4))));
        F_00abdbf0(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_ARG,uVar2);
        if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) != 0) {
          F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) & 0xfffffff0,800);
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *((uint *)GEN_TOP(((int)this + 8))));
  }
  return (uint)this;
}

/* ref: FUN_00ab9000 */
GEN_OWN GEN_FRAME uint F_00ab9000(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab9000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  undefined * this;
  uint uVar3;
  ulonglong uVar4;
  int * PTR32 * ppiVar5;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x0));
    *piVar2 = (int)ppiVar5;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046aa70(this GEN_EDX_ARG,param_1,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    uVar3 = (uint)uVar4;
  }
  return uVar3;
}

/* ref: FUN_00ab9090 */
GEN_OWN GEN_FRAME uint F_00ab9090(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab9090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar1 = F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (uVar1 != 0) {
    if (param_2 == 5) {
      uVar4 = 0x4d2;
    }
    else {
      if (param_2 - 7U != 0) {
        return param_2 - 7U;
      }
      uVar4 = 0x4d3;
    }
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    F_00aaece0(uVar1,uVar4,param_1,&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    uVar3 = (uint)uVar5;
  }
  return uVar3;
}

/* ref: FUN_00ab9130 */
GEN_OWN GEN_NOFRAME unsigned int F_00ab9130(void)
{
  GEN_ENTER(0xab9130u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x14bcc68) == 0) {
    this = ((undefined *)GEN_TOP(F_00406b90(0xd0,0,0)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00ab8e90(this GEN_EDX_ARG);
      REFG(undefined4, 0x14bcc68) = uVar1;
      return;
    }
    REFG(undefined4, 0x14bcc68) = 0;
  }
  return;
}

/* ref: FUN_00ab9170 */
GEN_OWN GEN_NOFRAME unsigned int F_00ab9170(void)
{
  GEN_ENTER(0xab9170u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = REFG(int, 0x14bcc68);
  if (REFG(int, 0x14bcc68) != 0) {
    F_00abd9c0(((undefined *)GEN_TOP((REFG(int, 0x14bcc68) + 0xa0))) GEN_EDX_ARG);
    F_00ab4f20(((undefined *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_ARG);
    F_00406ad0(iVar1);
    REFG(int, 0x14bcc68) = 0;
  }
  return;
}

/* ref: FUN_00ab91b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab91b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xab91b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xc80))) = 0;
  bVar2 = 0;
  uVar3 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,0x58,param_2);
  if ((uVar3 != 0) && (iVar1 = *((int *)GEN_TOP((uVar3 + 4))), iVar1 != 0)) {
    bVar2 = F_00aaf5f0(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((iVar1 + 0x1c))),(undefined1)param_1,
                         *((undefined1 *)GEN_TOP((iVar1 + 0x22))),1);
  }
  uVar4 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0xa4,(uint)REFG(undefined1, 0x1379c7c));
  uVar3 = 0;
  if ((((uVar4 != 0) && (uVar3 = *((uint *)GEN_TOP((uVar4 + 4))), uVar3 != 0)) &&
      (*((char *)GEN_TOP((uVar3 + 0xb))) != '\0')) && (bVar2 != 0)) {
    uVar3 = F_00ab9000(0x58);
  }
  return uVar3;
}

/* ref: FUN_00ab9240 */
GEN_OWN_GS GEN_FRAME uint F_00ab9240(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab9240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  uint * puVar1;
  undefined * this;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
  uVar4 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x2a,param_1);
  if ((uVar4 != 0) && (puVar1 = *((uint * PTR32 *)GEN_TOP((uVar4 + 4))), puVar1 != ((uint *)GEN_TOP(0x0)))) {
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar5 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      *piVar5 = 0;
      piVar5[1] = 0;
    }
    *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = &(*(undefined4 *)(gen_frame + 0x70));
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = param_2;
    (*(char *)(gen_frame + 0x78)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x74)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x78)) != '\0')) && ((*(char *)(gen_frame + 0x78)) == '\x01')) {
      this = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x74))));
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
        F_0042c880(this GEN_EDX_ARG);
        F_00406ad0(this);
      }
    }
    uVar2 = (*(undefined4 *)(gen_frame + 0x18));
    F_0042aca0((*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    F_0042cc20(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)),&(*(int * PTR32 *)(gen_frame + 0x0)),uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    uVar4 = (uint)uVar6;
  }
  return uVar4;
}

/* ref: FUN_00ab93a0 */
GEN_OWN_GS GEN_FRAME uint F_00ab93a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xab93a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  uint * puVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
  uVar4 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,0x2a,param_1);
  uVar6 = 0;
  if (uVar4 != 0) {
    puVar1 = *((uint * PTR32 *)GEN_TOP((uVar4 + 4)));
    uVar6 = 0;
    if (puVar1 != ((uint *)GEN_TOP(0x0))) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
      piVar5 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        *piVar5 = 0;
        piVar5[1] = 0;
      }
      *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
      (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = param_2;
      (*(char *)(gen_frame + 0x74)) = '\0';
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x6c)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
        pvVar2 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x70))));
        *((int *)GEN_TOP(((int)pvVar2 + 0x54))) = *((int *)GEN_TOP(((int)pvVar2 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar2 + 0x54))) < 1) {
          F_0042c880(pvVar2 GEN_EDX_ARG);
          F_00406ad0(pvVar2);
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = param_3;
      (*(char *)(gen_frame + 0x74)) = '\0';
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x6c)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
        pvVar2 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x70))));
        *((int *)GEN_TOP(((int)pvVar2 + 0x54))) = *((int *)GEN_TOP(((int)pvVar2 + 0x54))) - 1;
        if (*((int *)GEN_TOP(((int)pvVar2 + 0x54))) < 1) {
          F_0042c880(pvVar2 GEN_EDX_ARG);
          F_00406ad0(pvVar2);
        }
      }
      F_0042aca0(param_4 GEN_EDX_ARG);
      F_0042cc20(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x0)),param_4);
      F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar7 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
      uVar6 = (uint)uVar7;
    }
  }
  return uVar6;
}

/* ref: FUN_00ab9550 */
GEN_OWN_GS GEN_FRAME uint F_00ab9550(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab9550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  int * piVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  ulonglong uVar5;
  int * PTR32 * ppiVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  else {
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x18)) = param_1;
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x1c)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    uVar4 = param_2 & 0xffff;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x18)) = uVar4;
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x1c)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar3 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar3 + 0x54))) = *((int *)GEN_TOP(((int)pvVar3 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar3 + 0x54))) < 1) {
        F_0042c880(pvVar3 GEN_EDX_ARG);
        F_00406ad0(pvVar3);
      }
    }
    if (uVar4 == 0) {
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    else {
      uVar2 = 0x4d5;
      if (uVar4 == 1) {
        uVar2 = 0x4d4;
      }
      ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x0));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
      F_0046aa70(pvVar3 GEN_EDX_ARG,uVar2,ppiVar6);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar5;
}

/* ref: FUN_00ab96d0 */
GEN_OWN_GS GEN_FRAME uint F_00ab96d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab96d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  int * piVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int * PTR32 * ppiVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if ((piVar1 == ((int *)GEN_TOP(0x0))) || (param_1 == 0)) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  else {
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x18)) = param_1;
    (*(int * PTR32 *)(gen_frame + 0x1c)) = &(*(int *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)));
    if ((((*(int * PTR32 *)(gen_frame + 0x1c)) != ((int *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar2 = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar2 + 0x54))) = *((int *)GEN_TOP(((int)pvVar2 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar2 + 0x54))) < 1) {
        F_0042c880(pvVar2 GEN_EDX_ARG);
        F_00406ad0(pvVar2);
      }
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x0));
    uVar4 = 0x4d6;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046aa70(pvVar2 GEN_EDX_ARG,uVar4,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar3;
}

/* ref: FUN_00ab97e0 */
GEN_OWN_GS GEN_FRAME uint F_00ab97e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xab97e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  int * piVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int * PTR32 * ppiVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
  piVar1 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      pvVar2 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)pvVar2 + 0x54))) = *((int *)GEN_TOP(((int)pvVar2 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar2 + 0x54))) < 1) {
        F_0042c880(pvVar2 GEN_EDX_ARG);
        F_00406ad0(pvVar2);
      }
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x0));
    uVar4 = 0x4e0;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
    F_0046aa70(pvVar2 GEN_EDX_ARG,uVar4,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
  return (uint)uVar3;
}

/* ref: FUN_00ab98f0 */
GEN_OWN_GS GEN_FRAME uint F_00ab98f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xab98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_FRAME_DECL_GS(0x80, 0, 4);
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c));
  uVar2 = F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar4 = 0;
  if (uVar2 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    if (param_2 == '\x01') {
      uVar6 = 0x186;
    }
    else {
      if (param_2 != '\x02') {
        uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
        return (uint)uVar5;
      }
      uVar6 = 0x187;
    }
    F_00ab0230(uVar6,((undefined1 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar3 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(uint * PTR32 *)(gen_frame + 0x70)) = &(*(uint *)(gen_frame + 0x6c));
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = param_4;
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x70))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x70)) = ((undefined4 *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x74)) = -1;
    F_00490f90(&(*(uint *)(gen_frame + 0x6c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x70))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = (uint)param_3;
    (*(uint * PTR32 *)(gen_frame + 0x70)) = &(*(uint *)(gen_frame + 0x6c));
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x70))));
      *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
        F_0042c880(pvVar1 GEN_EDX_ARG);
        F_00406ad0(pvVar1);
      }
    }
    F_00aaece0(uVar2,0x4cf,param_1,&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    uVar4 = (uint)uVar5;
  }
  return uVar4;
}

/* ref: FUN_00ab9ad0 */
GEN_OWN_GS GEN_FRAME uint F_00ab9ad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xab9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  undefined * this;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  uVar1 = F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (uVar1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
    piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = param_2;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != ((uint *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      this = ((undefined *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x20))));
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
        F_0042c880(this GEN_EDX_ARG);
        F_00406ad0(this);
      }
    }
    uVar3 = param_3 & 0xffff;
    uVar4 = (*(undefined4 *)(gen_frame + 0x0));
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        uVar4 = 0x4d0;
      }
      else {
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = uVar3;
        uVar4 = 0x4d1;
        (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
        (*(char *)(gen_frame + 0x24)) = '\0';
        F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      }
    }
    F_00aaece0(uVar1,uVar4,param_1,&(*(int * PTR32 *)(gen_frame + 0x4)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar5;
  }
  return uVar3;
}

/* ref: FUN_00ab9c00 */
GEN_OWN_GS GEN_FRAME uint F_00ab9c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab9c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  undefined * this;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  uVar1 = F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (uVar1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0x18));
    (*(char *)(gen_frame + 0x20)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x20)) != '\0')) && ((*(char *)(gen_frame + 0x20)) == '\x01')) {
      this = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c))));
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
      if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
        F_0042c880(this GEN_EDX_ARG);
        F_00406ad0(this);
      }
    }
    F_00aaece0(uVar1,0x4eb,param_1,&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    uVar3 = (uint)uVar4;
  }
  return uVar3;
}

/* ref: FUN_00ab9cf0 */
GEN_OWN_GS GEN_FRAME uint F_00ab9cf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xab9cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x98, 8, 4);
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x90)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,&REFG(undefined, 0x10e88fa),REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(0x0));
  piVar2 = ((int *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x18));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 0: ;
    F_00ab98f0(*(undefined4 *)(param_2 + 2),*(undefined1 *)(param_2 + 4),
                 *(undefined1 *)(param_2 + 6),*(undefined4 *)(param_2 + 8));
    break;
  case 1: ;
    if (REFG(int, 0x1379694) == 0) {
LAB_00ab9dd9: ;
      F_00493180(&(*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
      goto LAB_00ab9f00;
    }
    F_00ab9090(*((undefined4 *)GEN_TOP((REFG(int, 0x1379694) + 0x74))),*(undefined4 *)(param_2 + 0xc));
    F_00ab9ad0(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 8),(uint)(ushort)param_2[10]
                );
    break;
  case 2: ;
    F_00ab9550(*(undefined4 *)(param_2 + 2),(uint)(ushort)param_2[4]);
    break;
  case 3: ;
    F_00ab9ad0(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),(uint)(ushort)param_2[6])
    ;
    break;
  case 4: ;
    uVar6 = 0x4e5;
    goto LAB_00ab9eda;
  case 5: ;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00aaece0(piVar1,0x4e7,*(undefined4 *)(param_2 + 2),((undefined1 *)(gen_frame + 0x0)));
      F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    break;
  case 6: ;
    if (piVar1 == ((int *)GEN_TOP(0x0))) goto LAB_00ab9dd9;
    if (*(int *)(param_2 + 2) == 0) {
      uVar6 = 0x4e9;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
      F_0046a630(pvVar3 GEN_EDX_ARG,uVar6);
    }
    else {
      F_004816e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar6 = *(undefined4 *)(param_2 + 2);
      (*(undefined4 *)(gen_frame + 0x84)) = 0;
      (*(undefined4 *)(gen_frame + 0x84)) = uVar6;
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = &(*(undefined4 *)(gen_frame + 0x84));
      (*(undefined1 *)(gen_frame + 0x8c)) = 0;
      F_00493b50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x84)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x84)) GEN_EDX_ARG);
      puVar5 = ((undefined1 *)(gen_frame + 0x0));
      uVar6 = 0x4ea;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG)));
      F_0046aa70(pvVar3 GEN_EDX_ARG,uVar6,puVar5);
      F_00493180(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    break;
  case 8: ;
    uVar6 = 0x4dd;
LAB_00ab9eda: ;
    F_00ab9000(uVar6);
    break;
  case 9: ;
    F_00ab9c00(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
  F_00429760((*(int * PTR32 *)(gen_frame + 0x18)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(0x0));
LAB_00ab9f00: ;
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00ab9f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab9f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xab9f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x2f08))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f0c))) = param_2;
  return param_1;
}

/* ref: FUN_00ab9fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab9fb0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xab9fb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] + fVar1);
  in_ecx[2] = (float)(fVar1 + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00ab9fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ab9fe0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xab9fe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] + fVar1);
  in_ecx[2] = (float)(fVar1 + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00aba030 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aba030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00aba090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x48))) = param_2;
  return param_2;
}

/* ref: FUN_00aba0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba0f0(GEN_P(undefined2 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xaba0f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *(float *)(param_1 + 2) = param_4;
  *param_1 = (undefined2)param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return (uint)param_1;
}

/* ref: FUN_00aba120 */
GEN_OWN GEN_FRAME int F_00aba120(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  int iVar1;
  char cVar2;
  char * pcVar3;
  int iVar4;
  
  cVar2 = *param_1;
  iVar1 = 0;
  if (cVar2 != '\0') {
    iVar4 = 1;
    pcVar3 = param_1;
    do {
      pcVar3 = pcVar3 + 1;
      iVar1 = iVar1 + cVar2 * iVar4;
      cVar2 = *pcVar3;
      iVar4 = iVar4 + 1;
    } while (cVar2 != '\0');
  }
  return iVar1;
}

/* ref: FUN_00aba150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba150(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00aba170 */
GEN_OWN GEN_FRAME uint F_00aba170(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 1 << ((byte)param_1 & 7);
}

/* ref: FUN_00aba190 */
GEN_OWN GEN_FRAME uint F_00aba190(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaba190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return param_1 * param_3 + (param_2 >> 3);
}

/* ref: FUN_00aba220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba220(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x50 + *in_ecx;
}

/* ref: FUN_00aba240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba240(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x50 + *in_ecx;
}

/* ref: FUN_00aba280 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aba280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaba280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00aba2a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aba2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xaba2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar4 = 0;
  uVar2 = iVar3 / 2;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    uVar1 = *((uint *)GEN_TOP((*(int *)this + uVar2 * 8)));
    if (param_1 < uVar1) {
      iVar4 = uVar2 + 1;
    }
    else {
      if (param_1 <= uVar1) {
        *param_2 = uVar2;
        *param_3 = uVar2;
        uVar2 = *param_2;
        while ((0 < (int)uVar2 && (*((uint *)GEN_TOP((*(int *)this - 8 + *param_2 * 8))) == param_1))) {
          uVar2 = *param_2 - 1;
          *param_2 = uVar2;
        }
        if (*param_3 < *((int *)GEN_TOP(((int)this + 4))) - 1U) {
          do {
            if (*((uint *)GEN_TOP((*(int *)this + 8 + *param_3 * 8))) != param_1) {
              return 1;
            }
            *param_3 = *param_3 + 1;
          } while (*param_3 < *((int *)GEN_TOP(((int)this + 4))) - 1U);
        }
        return 1;
      }
      iVar3 = uVar2 - 1;
    }
    uVar2 = (iVar3 - iVar4) / 2 + iVar4;
  } while (iVar4 <= iVar3);
  return 0;
}

/* ref: FUN_00aba340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00aba340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaba340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00aba360 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00aba360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xaba360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar4 = 0;
  uVar2 = iVar3 / 2;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    uVar1 = *((uint *)GEN_TOP((*(int *)this + uVar2 * 8)));
    if (param_1 < uVar1) {
      iVar4 = uVar2 + 1;
    }
    else {
      if (param_1 <= uVar1) {
        *param_2 = uVar2;
        *param_3 = uVar2;
        uVar2 = *param_2;
        while ((0 < (int)uVar2 && (*((uint *)GEN_TOP((*(int *)this - 8 + *param_2 * 8))) == param_1))) {
          uVar2 = *param_2 - 1;
          *param_2 = uVar2;
        }
        if (*param_3 < *((int *)GEN_TOP(((int)this + 4))) - 1U) {
          do {
            if (*((uint *)GEN_TOP((*(int *)this + 8 + *param_3 * 8))) != param_1) {
              return 1;
            }
            *param_3 = *param_3 + 1;
          } while (*param_3 < *((int *)GEN_TOP(((int)this + 4))) - 1U);
        }
        return 1;
      }
      iVar3 = uVar2 - 1;
    }
    uVar2 = (iVar3 - iVar4) / 2 + iVar4;
  } while (iVar4 <= iVar3);
  return 0;
}

/* ref: FUN_00aba400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba400(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00aba430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba430(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aba490 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00aba490(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00aba4b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00aba4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00aba510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba510(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aba570 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00aba570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x50,param_2,800);
  return uVar1;
}

/* ref: FUN_00aba5a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00aba5a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x50,800);
  return (uint)uVar1;
}

/* ref: FUN_00aba5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba5d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xaba5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00aba600 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00aba600(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *in_ecx = *puVar2;
    puVar2 = puVar2 + 1;
    in_ecx = in_ecx + 1;
  }
  return;
}

/* ref: FUN_00aba680 */
GEN_OWN GEN_FRAME uint F_00aba680(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00aba690 */
GEN_OWN GEN_FRAME uint F_00aba690(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00aba6a0 */
GEN_OWN GEN_FRAME uint F_00aba6a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00aba6b0 */
GEN_OWN GEN_FRAME uint F_00aba6b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00aba6c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00aba6c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return (uint)param_1;
}

/* ref: FUN_00aba6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba6f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xaba6f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  in_ecx[8] = (undefined4)gen_fl2bits(param_4);
  *in_ecx = 400;
  in_ecx[1] = 0x20;
  in_ecx[6] = param_2;
  in_ecx[9] = (undefined4)gen_fl2bits(param_5);
  return (uint)in_ecx;
}

/* ref: FUN_00aba730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba730(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xaba730u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  in_ecx[8] = (undefined4)gen_fl2bits(param_4);
  *in_ecx = 0x194;
  in_ecx[1] = 0x20;
  in_ecx[6] = param_2;
  in_ecx[9] = (undefined4)gen_fl2bits(param_5);
  return (uint)in_ecx;
}

/* ref: FUN_00aba770 */
GEN_OWN GEN_FRAME byte F_00aba770(void)
{
  GEN_ENTER(0xaba770u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00aba780 */
GEN_OWN GEN_FRAME byte F_00aba780(void)
{
  GEN_ENTER(0xaba780u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00aba7a0 */
GEN_OWN GEN_FRAME uint F_00aba7a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00aba7d0 */
GEN_OWN GEN_FRAME byte F_00aba7d0(void)
{
  GEN_ENTER(0xaba7d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00aba7e0 */
GEN_OWN GEN_FRAME uint F_00aba7e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00aba7f0 */
GEN_OWN GEN_FRAME uint F_00aba7f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xaba7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00530100(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00aba840 */
GEN_OWN GEN_FRAME byte F_00aba840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xaba840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  return (*((byte *)GEN_TOP(((param_3 >> 3) + param_2 * param_4 + param_1))) & '\x01' << ((byte)param_3 & 7))
         != 0;
}

/* ref: FUN_00aba870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x7c))) + param_2 * 0xc;
}

/* ref: FUN_00aba890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00aba8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba8a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xaba8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00aba8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xaba8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP(F_00406bb0(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 8),0,0)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    iVar3 = param_1 - 1;
    puVar2 = puVar1;
    if (-1 < iVar3) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar3 = iVar3 - 1;
        puVar2 = puVar2 + 2;
      } while (-1 < iVar3);
      *(undefined4 * PTR32 *)this = puVar1;
      return (uint)puVar1;
    }
  }
  *(undefined4 * PTR32 *)this = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00aba940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00aba940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xaba940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  ulonglong uVar6;
  uint local_10;
  uint local_c;
  undefined4 * local_8;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  local_8 = ((undefined4 *)GEN_TOP(F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 8),0,0)));
  puVar3 = local_8;
  if (local_8 == ((undefined4 *)GEN_TOP(0x0))) {
    local_8 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  local_10 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = 0;
      uVar1 = 0;
      local_c = 0;
      if (uVar2 != 0) {
        puVar5 = *(uint * PTR32 *)this;
        do {
          if ((puVar5[1] != 0) && (local_c < *puVar5)) {
            uVar4 = uVar1;
            local_c = *puVar5;
          }
          uVar1 = uVar1 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar1 < uVar2);
      }
      local_8[local_10 * 2 + 1] = *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar4 * 8)));
      local_8[local_10 * 2] = *((undefined4 *)GEN_TOP((*(int *)this + uVar4 * 8)));
      *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar4 * 8))) = 0;
      uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
      local_10 = local_10 + 1;
    } while (local_10 < uVar2);
  }
  uVar6 = F_00c46aa0(*(undefined4 *)this,local_8,*((int *)GEN_TOP(((int)this + 4))) * 8);
  uVar2 = (uint)uVar6;
  if (local_8 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar6 = F_00406b30(local_8);
    uVar2 = (uint)uVar6;
  }
  return uVar2;
}

/* ref: FUN_00abaa30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00abaa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xabaa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP(F_00406bb0(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 8),0,0)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    iVar3 = param_1 - 1;
    puVar2 = puVar1;
    if (-1 < iVar3) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar3 = iVar3 - 1;
        puVar2 = puVar2 + 2;
      } while (-1 < iVar3);
      *(undefined4 * PTR32 *)this = puVar1;
      return (uint)puVar1;
    }
  }
  *(undefined4 * PTR32 *)this = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00abaaa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00abaaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xabaaa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  ulonglong uVar6;
  uint local_10;
  uint local_c;
  undefined4 * local_8;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  local_8 = ((undefined4 *)GEN_TOP(F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 8),0,0)));
  puVar3 = local_8;
  if (local_8 == ((undefined4 *)GEN_TOP(0x0))) {
    local_8 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  local_10 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = 0;
      uVar1 = 0;
      local_c = 0;
      if (uVar2 != 0) {
        puVar5 = *(uint * PTR32 *)this;
        do {
          if ((puVar5[1] != 0) && (local_c < *puVar5)) {
            uVar4 = uVar1;
            local_c = *puVar5;
          }
          uVar1 = uVar1 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar1 < uVar2);
      }
      local_8[local_10 * 2 + 1] = *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar4 * 8)));
      local_8[local_10 * 2] = *((undefined4 *)GEN_TOP((*(int *)this + uVar4 * 8)));
      *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar4 * 8))) = 0;
      uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
      local_10 = local_10 + 1;
    } while (local_10 < uVar2);
  }
  uVar6 = F_00c46aa0(*(undefined4 *)this,local_8,*((int *)GEN_TOP(((int)this + 4))) * 8);
  uVar2 = (uint)uVar6;
  if (local_8 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar6 = F_00406b30(local_8);
    uVar2 = (uint)uVar6;
  }
  return uVar2;
}

/* ref: FUN_00ababf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ababf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xababf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00abac00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00abac00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xabac00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00abac20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00abac20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xabac20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 4;
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

/* ref: FUN_00abac50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00abac50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xabac50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x50;
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

/* ref: FUN_00abac90 */
GEN_OWN GEN_FRAME uint F_00abac90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabac90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abacc0 */
GEN_OWN GEN_FRAME uint F_00abacc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabacc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abacf0 */
GEN_OWN GEN_FRAME uint F_00abacf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabacf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abad20 */
GEN_OWN GEN_FRAME uint F_00abad20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabad20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abad50 */
GEN_OWN GEN_FRAME uint F_00abad50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabad50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abad80 */
GEN_OWN GEN_FRAME uint F_00abad80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabad80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abadb0 */
GEN_OWN GEN_FRAME uint F_00abadb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabadb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abade0 */
GEN_OWN GEN_FRAME uint F_00abade0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabade0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abae10 */
GEN_OWN GEN_FRAME uint F_00abae10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabae10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abae40 */
GEN_OWN GEN_FRAME uint F_00abae40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabae40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abae70 */
GEN_OWN GEN_FRAME uint F_00abae70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabae70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abaea0 */
GEN_OWN GEN_FRAME uint F_00abaea0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabaea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abaed0 */
GEN_OWN GEN_FRAME uint F_00abaed0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabaed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abaf00 */
GEN_OWN GEN_FRAME uint F_00abaf00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabaf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abaf30 */
GEN_OWN GEN_FRAME uint F_00abaf30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabaf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abaf60 */
GEN_OWN GEN_FRAME uint F_00abaf60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabaf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abaf90 */
GEN_OWN GEN_FRAME uint F_00abaf90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabaf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abafc0 */
GEN_OWN GEN_FRAME uint F_00abafc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabafc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abaff0 */
GEN_OWN GEN_FRAME uint F_00abaff0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabaff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb020 */
GEN_OWN GEN_FRAME uint F_00abb020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb050 */
GEN_OWN GEN_FRAME uint F_00abb050(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb080 */
GEN_OWN GEN_FRAME uint F_00abb080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb0b0 */
GEN_OWN GEN_FRAME uint F_00abb0b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb0e0 */
GEN_OWN GEN_FRAME uint F_00abb0e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb110 */
GEN_OWN GEN_FRAME uint F_00abb110(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb140 */
GEN_OWN GEN_FRAME uint F_00abb140(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb170 */
GEN_OWN GEN_FRAME uint F_00abb170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb1a0 */
GEN_OWN GEN_FRAME uint F_00abb1a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb1d0 */
GEN_OWN GEN_FRAME uint F_00abb1d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb200 */
GEN_OWN GEN_FRAME uint F_00abb200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb230 */
GEN_OWN GEN_FRAME uint F_00abb230(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb260 */
GEN_OWN GEN_FRAME uint F_00abb260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb290 */
GEN_OWN GEN_FRAME uint F_00abb290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb2c0 */
GEN_OWN GEN_FRAME uint F_00abb2c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb2f0 */
GEN_OWN GEN_FRAME uint F_00abb2f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb320 */
GEN_OWN GEN_FRAME uint F_00abb320(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052fdd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb350 */
GEN_OWN GEN_FRAME uint F_00abb350(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb380 */
GEN_OWN GEN_FRAME uint F_00abb380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb3b0 */
GEN_OWN GEN_FRAME uint F_00abb3b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb3e0 */
GEN_OWN GEN_FRAME uint F_00abb3e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb410 */
GEN_OWN GEN_FRAME uint F_00abb410(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb440 */
GEN_OWN GEN_FRAME uint F_00abb440(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb470 */
GEN_OWN GEN_FRAME uint F_00abb470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb4a0 */
GEN_OWN GEN_FRAME uint F_00abb4a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb4d0 */
GEN_OWN GEN_FRAME uint F_00abb4d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb500 */
GEN_OWN GEN_FRAME uint F_00abb500(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb530 */
GEN_OWN GEN_FRAME uint F_00abb530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb560 */
GEN_OWN GEN_FRAME uint F_00abb560(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb590 */
GEN_OWN GEN_FRAME uint F_00abb590(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb5c0 */
GEN_OWN GEN_FRAME uint F_00abb5c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00abb5f0 */
GEN_OWN GEN_FRAME uint F_00abb5f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xabb5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0052ff60(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

