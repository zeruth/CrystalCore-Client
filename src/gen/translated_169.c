#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00d79b30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79b70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79bb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79bf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79c30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79c70 */
GEN_LIB GEN_FRAME uint F_00d79c70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd79c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 - param_1;
}

/* ref: FUN_00d79c80 */
GEN_LIB GEN_FRAME uint F_00d79c80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd79c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 - param_1;
}

/* ref: FUN_00d79c90 */
GEN_LIB GEN_FRAME uint F_00d79c90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd79c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 0x10;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 2;
  return (uVar1 >> 1 | uVar1) + 1;
}

/* ref: FUN_00d79cc0 */
GEN_LIB GEN_FRAME uint F_00d79cc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd79cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return ((1 << ((byte)param_1 & 0x1f)) - (param_1 >> 5 & 1U)) - 1;
}

/* ref: FUN_00d79ce0 */
GEN_LIB GEN_FRAME uint F_00d79ce0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd79ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((param_1 != 2) && (param_1 != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00d79d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79d20(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd79d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  *param_2 = in_ecx[2] * REFG(float, 0x10928e4);
  *param_3 = (in_ecx[1] + *in_ecx) * REFG(float, 0x1088068);
  return (uint)param_2;
}

/* ref: FUN_00d79d60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d79d60(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd79d60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float * pfVar1;
  
  pfVar1 = in_ecx + 1;
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*pfVar1)) && (!(param_2 < *pfVar1) && param_2 != *pfVar1)) {
    in_ecx[1] = param_2;
  }
  if (param_2 < *in_ecx) {
    *in_ecx = param_2;
  }
  return;
}

/* ref: FUN_00d79da0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d79da0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd79da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 * 9;
}

/* ref: FUN_00d79dc0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d79dc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd79dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (param_1 % 9) / 3 + param_1 % 9 + (param_1 / 9) * 0xc;
}

/* ref: FUN_00d79e40 */
GEN_LIB GEN_FRAME uint F_00d79e40(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(uint in_edx, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd79e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(uint in_edx = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  if (((int)in_eax <= (int)param_3) && (in_eax = in_edx, (int)param_3 <= (int)in_edx)) {
    in_eax = param_3;
  }
  return in_eax;
}

/* ref: FUN_00d79e80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d79e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd79e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  iVar1 = (*((int *)GEN_TOP(((int)this + 0x44))) - *((int *)GEN_TOP(((int)this + 0x40)))) / 2;
  iVar5 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    iVar4 = 0;
    do {
      iVar3 = *((int *)GEN_TOP(((int)this + 0x34))) + *((int *)GEN_TOP(((int)this + 0x40))) * 2;
      iVar3 = CONCAT22(*((undefined2 *)GEN_TOP((iVar3 + 2 + iVar5 * 4))),*((undefined2 *)GEN_TOP((iVar3 + iVar5 * 4))));
      iVar4 = iVar3 - iVar4;
      if (iVar2 < iVar4) {
        *((int *)GEN_TOP(((int)this + 0x90))) = iVar4;
        iVar2 = iVar4;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar3;
    } while (iVar5 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d79ee0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d79ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd79ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + param_2 * 4 + 0x40))) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  F_00d7cd40(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return;
}

/* ref: FUN_00d79f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d79f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd79f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + param_2 * 4 + 0x70))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  uVar1 = F_00d7cad0(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00d79f40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d79f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd79f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x340, 0);
  code * pcVar1;
  undefined * pvVar2;
  int iVar3;
  float * pfVar4;
  int iVar5;
  uint uVar6;
  undefined * pvVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int * piVar13;
  uint * puVar14;
  ushort uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float * pfVar19;
  float fVar20;
  float * pfVar21;
  char * pcVar22;
  undefined * puVar23;
  char * pcVar24;
  undefined * puVar25;
  undefined * puVar26;
  char * pcVar27;
  char * pcVar28;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2cc)) = this;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 5;
  F_00d7dbd0(((int *)(gen_frame + 0x264)) GEN_EDX_FWD,param_2,param_1,param_3);
  iVar5 = ((int *)(gen_frame + 0x264))[0];
  iVar3 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9 + *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40)));
  (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1136c54)));
  (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1136e98))));
  if (iVar3 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2d4)) = ((float *)GEN_TOP(0x0));
LAB_00d79ff7: ;
    (*(uint *)(gen_frame + 0x21c)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x218)) = iVar3 * 0xc;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x218)))));
    (*(float * PTR32 *)(gen_frame + 0x2d4)) = pfVar4;
    (*(uint *)(gen_frame + 0x21c)) = (*(int *)(gen_frame + 0x218)) / 0xc;
    if ((*(int *)(gen_frame + 0x218)) / 0xc == 0) goto LAB_00d79ff7;
  }
  pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d4));
  if (0 < iVar3) {
    do {
      if (pfVar4 != ((float *)GEN_TOP(0x0))) {
        *pfVar4 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x314)))));
        pfVar4[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x318)))));
        pfVar4[2] = (*(float *)(gen_frame + 0x31c));
      }
      pfVar4 = pfVar4 + 3;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  iVar5 = *((int *)GEN_TOP((iVar5 + 0x1c))) * 9 + *((int *)GEN_TOP((iVar5 + 0x40)));
  if (iVar5 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2d8)) = ((float *)GEN_TOP(0x0));
  }
  else {
    (*(int *)(gen_frame + 0x214)) = iVar5 * 4;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x214)))));
    uVar6 = (int)((*(int *)(gen_frame + 0x214)) + ((*(int *)(gen_frame + 0x214)) >> 0x1f & 3U)) >> 2;
    (*(float * PTR32 *)(gen_frame + 0x2d8)) = pfVar4;
    (*(uint *)(gen_frame + 0x210)) = uVar6;
    if (uVar6 != 0) goto LAB_00d7a07d;
  }
  (*(uint *)(gen_frame + 0x210)) = 0x80000000;
LAB_00d7a07d: ;
  piVar13 = (*(int * PTR32 *)(gen_frame + 0x26c));
  pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d8));
  if (0 < iVar5) {
    do {
      if (pfVar4 != ((float *)GEN_TOP(0x0))) {
        *pfVar4 = 1.4013e-45;
      }
      pfVar4 = pfVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  if ((*((int *)GEN_TOP((param_2 + 0x34))) == 0) && (0 < (*(int * PTR32 *)(gen_frame + 0x26c))[5])) {
    F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,
                 ((char *)REFP(0x1137b68))
                );
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbad892,((float *)(gen_frame + 0x0)),
               ((char *)REFP(0x1137b20)),0x144);
    F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  }
  iVar5 = 0;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0x1c))))(piVar13 GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      iVar5 = iVar5 + 1;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0x1c))))(piVar13 GEN_EDX_ARG);
    } while (iVar5 < (int)uVar6);
  }
  (*(float * PTR32 *)(gen_frame + 0x30c)) = ((float *)GEN_TOP(0x0));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0x1c))))(piVar13 GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      iVar5 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9;
      iVar3 = 0;
      if (0 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40))) + iVar5) {
        (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x2d4));
        do {
          if (iVar3 < iVar5) {
            iVar11 = iVar3 / 9;
            iVar9 = (*(int *)(gen_frame + 0x274));
          }
          else {
            iVar11 = iVar3 - iVar5;
            iVar9 = (*(int *)(gen_frame + 0x280));
          }
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304));
          if (*((int *)GEN_TOP((iVar9 + iVar11 * 4))) != -1) {
            if (iVar3 < iVar5) {
              pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00d7c7b0((piVar13[4] * (int)(*(float * PTR32 *)(gen_frame + 0x30c)) +
                                              *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar3 / 9) * 4)))) * 0x30 +
                                              piVar13[10],iVar3 % 9))));
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            }
            else {
              pfVar19 = *((float * PTR32 *)GEN_TOP((piVar13[0xd] +
                         (piVar13[5] * (int)(*(float * PTR32 *)(gen_frame + 0x30c)) + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar3 - iVar5) * 4)))) * 4
                         )));
            }
            pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304)) + 1;
            if ((!GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)))) && !GEN_ISNAN(*pfVar4)) &&
                (!(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < *pfVar4) && ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) != *pfVar4)) {
              (*(float * PTR32 *)(gen_frame + 0x304))[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
            }
            pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304));
            if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < *(*(float * PTR32 *)(gen_frame + 0x304))) {
              *(*(float * PTR32 *)(gen_frame + 0x304)) = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
            }
          }
          (*(float * PTR32 *)(gen_frame + 0x304)) = pfVar4 + 3;
          iVar5 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40))) + iVar5);
      }
      pfVar4 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x30c)) + 1)));
      (*(float * PTR32 *)(gen_frame + 0x30c)) = pfVar4;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0x1c))))(piVar13 GEN_EDX_ARG);
    } while ((int)pfVar4 < (int)uVar6);
  }
  iVar5 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9;
  iVar11 = 0;
  iVar3 = ((int *)(gen_frame + 0x264))[0];
  if (0 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40))) + iVar5) {
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 2;
    do {
      if (iVar11 < iVar5) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 - iVar5) * 4)));
      }
      if (iVar5 != -1) {
        fVar20 = F_00d7cff0(((int *)(gen_frame + 0x264)) GEN_EDX_ARG,iVar11);
        (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar20)));
        fVar17 = ((pfVar4[-1] - pfVar4[-2]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
        if (fVar17 < fVar20) {
          fVar17 = fVar20;
        }
        *pfVar4 = fVar17;
        if (iVar11 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9) {
          fVar17 = F_00d7c7b0((iVar11 / 9) * 0x30 + *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x24))),iVar11 % 9);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar17)));
        }
        else {
          iVar5 = iVar11 + *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * -9;
          if (iVar5 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x34)))) {
            fVar17 = *((float *)GEN_TOP((*((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x30))) + iVar5 * 4)));
          }
          else {
            fVar17 = 0.0;
          }
        }
        fVar20 = *pfVar4;
        if (pfVar4[-1] - pfVar4[-2] < fVar20 * REFG(float, 0x10928e4)) {
          fVar18 = ABS(pfVar4[-1] - fVar17);
          fVar17 = ABS(pfVar4[-2] - fVar17);
          ((float *)(gen_frame + 0x200))[0] = fVar18;
          ((float *)(gen_frame + 0x200))[1] = 0.0;
          ((float *)(gen_frame + 0x200))[2] = 0.0;
          ((float *)(gen_frame + 0x200))[1] = 0.0;
          ((float *)(gen_frame + 0x200))[2] = 0.0;
          ((float *)(gen_frame + 0x200))[3] = 0.0;
          (*(float *)(gen_frame + 0x310)) = fVar17;
          (*(int * PTR32 *)(gen_frame + 0x314)) = ((int *)GEN_TOP(0x0));
          (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(0x0));
          (*(float *)(gen_frame + 0x31c)) = 0.0;
          if (fVar17 < fVar18) {
            fVar17 = fVar18;
          }
          if (fVar17 < fVar20) {
            fVar17 = 1.4013e-45;
          }
          else {
            fVar17 = 0.0;
          }
        }
        else {
          fVar17 = 2.8026e-45;
        }
        (*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] = fVar17;
        pfVar21 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00d7d0e0(((int *)(gen_frame + 0x264)) GEN_EDX_ARG,iVar11))));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar21;
        pfVar19 = ((float *)GEN_TOP((((pfVar4[-1] - pfVar4[-2]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c))));
        if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar21)))) {
          pfVar19 = pfVar21;
        }
        *pfVar4 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
        iVar3 = ((int *)(gen_frame + 0x264))[0];
      }
      iVar5 = *((int *)GEN_TOP((iVar3 + 0x1c))) * 9;
      iVar11 = iVar11 + 1;
      pfVar4 = pfVar4 + 3;
    } while (iVar11 < *((int *)GEN_TOP((iVar3 + 0x40))) + iVar5);
  }
  fVar17 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x318)))));
  iVar5 = *((int *)GEN_TOP((iVar3 + 0x1c)));
  (*(float *)(gen_frame + 0x308)) = 0.0;
  if (0 < iVar5) {
    iVar11 = 0;
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d8)) + 3;
    do {
      if (iVar11 < iVar5 * 9) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 + iVar5 * -9) * 4)));
      }
      if (iVar5 != -1) {
        uVar6 = (uint)(*pfVar4 == 1.4013e-45);
        if (pfVar4[1] == 1.4013e-45) {
          uVar6 = uVar6 + 1;
        }
        if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11 + 5] == 1.4013e-45) {
          uVar6 = uVar6 + 1;
        }
        if (uVar6 - 1 < 2) {
          iVar5 = 3;
          pfVar19 = pfVar4;
          do {
            if (*pfVar19 == 1.4013e-45) {
              *pfVar19 = 0.0;
            }
            pfVar19 = pfVar19 + 1;
            iVar5 = iVar5 - 1;
          } while (iVar5 != 0);
        }
      }
      iVar5 = *((int *)GEN_TOP((iVar3 + 0x1c)));
      iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1;
      iVar11 = iVar11 + 9;
      pfVar4 = pfVar4 + 9;
      (*(float *)(gen_frame + 0x308)) = gen_bits2f(iVar9);
    } while (iVar9 < iVar5);
  }
  iVar11 = 0;
  (*(int *)(gen_frame + 0x2e4)) = 0;
  (*(uint *)(gen_frame + 0x2e8)) = 0;
  (*(uint *)(gen_frame + 0x2ec)) = 0x80000000;
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(((uint)gen_fl2bits(fVar17) & 0xffff0000)));
  iVar5 = *((int *)GEN_TOP((iVar3 + 0x1c)));
  (*(float *)(gen_frame + 0x308)) = 0.0;
  if (0 < iVar5) {
    iVar9 = 0;
    iVar3 = iVar11;
    do {
      if (iVar9 < iVar5 * 9) {
        iVar5 = iVar9 / 9;
        iVar10 = (*(int *)(gen_frame + 0x274));
      }
      else {
        iVar5 = iVar9 + iVar5 * -9;
        iVar10 = (*(int *)(gen_frame + 0x280));
      }
      iVar11 = iVar3 + 1;
      uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) |
               (ushort)(*((int *)GEN_TOP((iVar10 + iVar5 * 4))) != -1) << GEN_SHC((byte)iVar3, (unsigned int)(uintptr_t)iVar3);
      (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
      (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
      if (iVar11 == 0x10) {
        if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
        }
        uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
        *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2))) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
        (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
        (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP((uVar6 & 0xffff0000)));
        iVar11 = 0;
      }
      iVar5 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c)));
      fVar17 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1);
      iVar9 = iVar9 + 9;
      (*(float *)(gen_frame + 0x308)) = fVar17;
      iVar3 = iVar11;
    } while ((int)gen_fl2bits(fVar17) < iVar5);
    if (0 < iVar11) {
      if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
      }
      uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
      *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2))) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
      (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
      (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
      (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP((uVar6 & 0xffff0000)));
      iVar11 = 0;
    }
  }
  (*(float * PTR32 *)(gen_frame + 0x304)) = ((float *)GEN_TOP(0x0));
  if (0 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40)))) {
    iVar5 = ((int *)(gen_frame + 0x264))[0];
    uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    do {
      iVar3 = *((int *)GEN_TOP((iVar5 + 0x1c))) * 9;
      iVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x304)) + iVar3;
      if (iVar9 < iVar3) {
        iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar9 / 9) * 4)));
        iVar5 = ((int *)(gen_frame + 0x264))[0];
      }
      else {
        iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar9 + *((int *)GEN_TOP((iVar5 + 0x1c))) * -9) * 4)));
      }
      bVar8 = (byte)iVar11;
      iVar11 = iVar11 + 1;
      uVar15 = uVar15 | (ushort)(iVar3 != -1) << GEN_SHC(bVar8, bVar8);
      if (iVar11 == 0x10) {
        if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
          iVar5 = ((int *)(gen_frame + 0x264))[0];
        }
        *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2))) = uVar15;
        (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
        uVar15 = 0;
        iVar11 = 0;
      }
      pfVar4 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x304)) + 1)));
      (*(float * PTR32 *)(gen_frame + 0x304)) = pfVar4;
    } while ((int)pfVar4 < *((int *)GEN_TOP((iVar5 + 0x40))));
    (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
    (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
  }
  if (0 < iVar11) {
    if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
    }
    *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2))) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
  }
  uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
  (*(uint *)(gen_frame + 0x300)) = 0x80000000;
  (*(uint *)(gen_frame + 0x254)) = 0x80000000;
  (*(uint *)(gen_frame + 0x23c)) = 0x80000000;
  (*(uint *)(gen_frame + 0x230)) = 0x80000000;
  (*(uint *)(gen_frame + 0x248)) = 0x80000000;
  (*(uint *)(gen_frame + 0x260)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2c8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2bc)) = 0x80000000;
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x2fc)) = 0;
  (*(int *)(gen_frame + 0x24c)) = 0;
  (*(uint *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x234)) = 0;
  (*(uint *)(gen_frame + 0x238)) = 0;
  (*(int *)(gen_frame + 0x228)) = 0;
  (*(uint *)(gen_frame + 0x22c)) = 0;
  (*(int *)(gen_frame + 0x240)) = 0;
  (*(uint *)(gen_frame + 0x244)) = 0;
  (*(int *)(gen_frame + 0x258)) = 0;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x88))) = 0;
  (*(int *)(gen_frame + 0x2c0)) = 0;
  (*(uint *)(gen_frame + 0x2c4)) = 0;
  (*(int *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2ac)) = 0;
  (*(int *)(gen_frame + 0x2b4)) = 0;
  (*(uint *)(gen_frame + 0x2b8)) = 0;
  iVar5 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c)));
  uVar12 = 0;
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP((uVar6 & 0xffff0000)));
  (*(float *)(gen_frame + 0x31c)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x2f0)) = ((float *)GEN_TOP(0x0));
  if (0 < iVar5) {
    (*(float * PTR32 *)(gen_frame + 0x2f4)) = ((float *)GEN_TOP(0x0));
    (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2d8));
    (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 1;
    do {
      if ((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) < iVar5 * 9) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + ((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x2f4))) / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + ((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + iVar5 * -9) * 4)));
      }
      if (iVar5 != -1) {
        (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x2e0));
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (*(float * PTR32 *)(gen_frame + 0x2dc));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)GEN_TOP(0x9));
        pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2f4));
        do {
          pfVar21 = (*(float * PTR32 *)(gen_frame + 0x304));
          pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x304)))));
          (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar19;
          if (pfVar19 == ((float *)GEN_TOP(0x2))) {
            if ((((int)pfVar4 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9) && ((int)((int)(uintptr_t)pfVar4) % 9 - 3U < 3)) &&
               (fVar20 = F_00d7d0e0(((int *)(gen_frame + 0x264)) GEN_EDX_ARG,pfVar4), fVar17 = REFG(float, 0x1090708),
               bVar16 = GEN_ISNAN((float10)fVar20) || GEN_ISNAN((float10)0),
               bVar16 != (bVar16 || (float10)fVar20 == (float10)0))) {
              *pfVar21 = 4.2039e-45;
              (*(float * PTR32 *)(gen_frame + 0x30c))[-1] = fVar17;
              fVar17 = REFG(float, 0x1087f04);
              *(*(float * PTR32 *)(gen_frame + 0x30c)) = GEN_FLT_TO(*(*(float * PTR32 *)(gen_frame + 0x30c)), REFG(float, 0x1087f04));
              fVar17 = ((fVar17 - (*(float * PTR32 *)(gen_frame + 0x30c))[-1]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
              (*(float * PTR32 *)(gen_frame + 0x2d0)) = ((float *)GEN_TOP(0x3));
              if (fVar17 < 0.0) {
                fVar17 = 0.0;
              }
              bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
              iVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
              (*(float * PTR32 *)(gen_frame + 0x30c))[1] = fVar17;
              (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar5);
              uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 1 << GEN_SHC(bVar8, bVar8);
              (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
              (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
              if (iVar5 == 0x10) {
                if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
                }
                *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2))) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
LAB_00d7a9f0: ;
                uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(float *)(gen_frame + 0x31c)) = 0.0;
                (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
                (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP((uVar6 & 0xffff0000)));
              }
            }
            else {
              (*(float *)(gen_frame + 0x220)) = (*(float * PTR32 *)(gen_frame + 0x30c))[1] * REFG(float, 0x10928e4);
              (*(float *)(gen_frame + 0x308)) = ((*(float * PTR32 *)(gen_frame + 0x30c))[-1] + *(*(float * PTR32 *)(gen_frame + 0x30c))) * REFG(float, 0x1088068);
              if ((*(uint *)(gen_frame + 0x2c4)) == ((*(uint *)(gen_frame + 0x2c8)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c0)),4);
              }
              *((float *)GEN_TOP(((*(int *)(gen_frame + 0x2c0)) + (*(uint *)(gen_frame + 0x2c4)) * 4))) = (*(float *)(gen_frame + 0x220));
              (*(uint *)(gen_frame + 0x2c4)) = (*(uint *)(gen_frame + 0x2c4)) + 1;
              if ((*(uint *)(gen_frame + 0x2ac)) == ((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2a8)),4);
              }
              *((float *)GEN_TOP(((*(int *)(gen_frame + 0x2a8)) + (*(uint *)(gen_frame + 0x2ac)) * 4))) = (*(float *)(gen_frame + 0x308));
              (*(uint *)(gen_frame + 0x2ac)) = (*(uint *)(gen_frame + 0x2ac)) + 1;
              bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
              iVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
              (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar5);
              uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 0 << GEN_SHC(bVar8, bVar8);
              (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
              (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
              if (iVar5 == 0x10) {
                if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
                }
                *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2))) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
                goto LAB_00d7a9f0;
              }
            }
            if ((*(uint *)(gen_frame + 0x250)) == ((*(uint *)(gen_frame + 0x254)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x24c)),2);
            }
            *((short *)GEN_TOP(((*(int *)(gen_frame + 0x24c)) + (*(uint *)(gen_frame + 0x250)) * 2))) =
                 (short)(((int)((int)(uintptr_t)pfVar4) % 9) / 3) + (short)((int)((int)(uintptr_t)pfVar4) % 9) +
                 (short)((int)((int)(uintptr_t)pfVar4) / 9) * 0xc;
            uVar6 = (*(uint *)(gen_frame + 0x250)) + 1;
            (*(uint *)(gen_frame + 0x250)) = uVar6;
            uVar6 = uVar6 & 0x8000000f;
            bVar16 = uVar6 == 0;
            if ((int)uVar6 < 0) {
              bVar16 = (uVar6 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar16) {
              *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x88))) = (*(uint *)(gen_frame + 0x2c4));
            }
LAB_00d7aa89: ;
            if ((*(float * PTR32 *)(gen_frame + 0x2d0)) != ((float *)GEN_TOP(0x1))) goto LAB_00d7aa93;
          }
          else {
            if (pfVar19 != ((float *)GEN_TOP(0x0))) goto LAB_00d7aa89;
            (*(float *)(gen_frame + 0x28c)) = ((*(float * PTR32 *)(gen_frame + 0x30c))[-1] + *(*(float * PTR32 *)(gen_frame + 0x30c))) * REFG(float, 0x1088068);
            if ((*(uint *)(gen_frame + 0x2b8)) == ((*(uint *)(gen_frame + 0x2bc)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2b4)),4);
            }
            *((float *)GEN_TOP(((*(int *)(gen_frame + 0x2b4)) + (*(uint *)(gen_frame + 0x2b8)) * 4))) = (*(float *)(gen_frame + 0x28c));
            (*(uint *)(gen_frame + 0x2b8)) = (*(uint *)(gen_frame + 0x2b8)) + 1;
            if ((*(uint *)(gen_frame + 0x22c)) == ((*(uint *)(gen_frame + 0x230)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x228)),2);
            }
            *((short *)GEN_TOP(((*(int *)(gen_frame + 0x228)) + (*(uint *)(gen_frame + 0x22c)) * 2))) =
                 (short)(((int)((int)(uintptr_t)pfVar4) % 9) / 3) + (short)((int)((int)(uintptr_t)pfVar4) % 9) +
                 (short)((int)((int)(uintptr_t)pfVar4) / 9) * 0xc;
            (*(uint *)(gen_frame + 0x22c)) = (*(uint *)(gen_frame + 0x22c)) + 1;
LAB_00d7aa93: ;
            if ((((int)pfVar4 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9) && ((int)((int)(uintptr_t)pfVar4) % 9 - 3U < 3)) &&
               (((*(uint *)(gen_frame + 0x25c)) == 0 ||
                (((float *)GEN_TOP((uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x258)) - 2 + (*(uint *)(gen_frame + 0x25c)) * 2))))) != (*(float * PTR32 *)(gen_frame + 0x2f0)))))) {
              if ((*(uint *)(gen_frame + 0x25c)) == ((*(uint *)(gen_frame + 0x260)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x258)),2);
              }
              *((undefined2 *)GEN_TOP(((*(int *)(gen_frame + 0x258)) + (*(uint *)(gen_frame + 0x25c)) * 2))) = (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x2f0)) + 0));
              (*(uint *)(gen_frame + 0x25c)) = (*(uint *)(gen_frame + 0x25c)) + 1;
            }
          }
          (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x304)) + 1;
          (*(float * PTR32 *)(gen_frame + 0x30c)) = (*(float * PTR32 *)(gen_frame + 0x30c)) + 3;
          pfVar4 = ((float *)GEN_TOP(((int)pfVar4 + 1)));
          pfVar19 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x32c)) - 1)));
          (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
        } while (pfVar19 != ((float *)GEN_TOP(0x0)));
      }
      iVar5 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c)));
      (*(float * PTR32 *)(gen_frame + 0x2f4)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + 9)));
      (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + 9;
      (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2dc)) + 0x1b;
      pfVar4 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x2f0)) + 1)));
      (*(float * PTR32 *)(gen_frame + 0x2f0)) = pfVar4;
    } while ((int)pfVar4 < iVar5);
    uVar12 = (uint)(*(float * PTR32 *)(gen_frame + 0x318)) & 0xffff;
  }
  (*(uint *)(gen_frame + 0x224)) = (*(uint *)(gen_frame + 0x250));
  fVar17 = (*(float *)(gen_frame + 0x31c));
  if (0 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
    do {
      bVar8 = (byte)(uint)gen_fl2bits(fVar17);
      fVar17 = gen_bits2f((int)gen_fl2bits(fVar17) + 1);
      uVar15 = (ushort)uVar12 | 1 << GEN_SHC(bVar8, bVar8);
      uVar12 = (uint)uVar15;
      if (fVar17 == 2.24208e-44) {
        (*(float *)(gen_frame + 0x31c)) = fVar17;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
        if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
        }
        *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2))) = uVar15;
        (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
        (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)) << 0x10)));
        (*(float *)(gen_frame + 0x31c)) = 0.0;
        goto LAB_00d7ab93;
      }
    } while (0 < (int)gen_fl2bits(fVar17));
    (*(float *)(gen_frame + 0x31c)) = fVar17;
    (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
    (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
  }
LAB_00d7ab93: ;
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40)))) {
    do {
      iVar11 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9;
      iVar3 = iVar11 + iVar5;
      if (iVar3 < iVar11) {
        iVar3 = iVar3 / 9;
        iVar11 = (*(int *)(gen_frame + 0x274));
      }
      else {
        iVar3 = iVar3 + *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * -9;
        iVar11 = (*(int *)(gen_frame + 0x280));
      }
      if (*((int *)GEN_TOP((iVar11 + iVar3 * 4))) != -1) {
        iVar3 = iVar5 + *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c))) * 9;
        if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar3] == 2.8026e-45) {
          (*(float *)(gen_frame + 0x28c)) = (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 2] * REFG(float, 0x10928e4);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)GEN_TOP((((*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 1] + (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3]) * REFG(float, 0x1088068))));
          if ((*(uint *)(gen_frame + 0x2c4)) == ((*(uint *)(gen_frame + 0x2c8)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c0)),4);
          }
          *((float *)GEN_TOP(((*(int *)(gen_frame + 0x2c0)) + (*(uint *)(gen_frame + 0x2c4)) * 4))) = (*(float *)(gen_frame + 0x28c));
          (*(uint *)(gen_frame + 0x2c4)) = (*(uint *)(gen_frame + 0x2c4)) + 1;
          if ((*(uint *)(gen_frame + 0x2ac)) == ((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2a8)),4);
          }
          *((float * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x2a8)) + (*(uint *)(gen_frame + 0x2ac)) * 4))) = (*(float * PTR32 *)(gen_frame + 0x32c));
          (*(uint *)(gen_frame + 0x2ac)) = (*(uint *)(gen_frame + 0x2ac)) + 1;
          bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
          iVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
          (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar3);
          uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 0 << GEN_SHC(bVar8, bVar8);
          (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
          (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
          if (iVar3 == 0x10) {
            if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
            }
            uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
            *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2))) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
            (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
            (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
            (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP((uVar6 & 0xffff0000)));
            (*(float *)(gen_frame + 0x31c)) = 0.0;
          }
          if ((*(uint *)(gen_frame + 0x238)) == ((*(uint *)(gen_frame + 0x23c)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x234)),2);
          }
          *((short *)GEN_TOP(((*(int *)(gen_frame + 0x234)) + (*(uint *)(gen_frame + 0x238)) * 2))) = (short)iVar5;
          (*(uint *)(gen_frame + 0x238)) = (*(uint *)(gen_frame + 0x238)) + 1;
        }
        else if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar3] == 0.0) {
          (*(float *)(gen_frame + 0x220)) = ((*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 1] + (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3]) * REFG(float, 0x1088068);
          if ((*(uint *)(gen_frame + 0x2b8)) == ((*(uint *)(gen_frame + 0x2bc)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2b4)),4);
          }
          *((float *)GEN_TOP(((*(int *)(gen_frame + 0x2b4)) + (*(uint *)(gen_frame + 0x2b8)) * 4))) = (*(float *)(gen_frame + 0x220));
          (*(uint *)(gen_frame + 0x2b8)) = (*(uint *)(gen_frame + 0x2b8)) + 1;
          if ((*(uint *)(gen_frame + 0x244)) == ((*(uint *)(gen_frame + 0x248)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x240)),2);
          }
          *((short *)GEN_TOP(((*(int *)(gen_frame + 0x240)) + (*(uint *)(gen_frame + 0x244)) * 2))) = (short)iVar5;
          (*(uint *)(gen_frame + 0x244)) = (*(uint *)(gen_frame + 0x244)) + 1;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40))));
  }
  if (0 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
    if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
    }
    *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2))) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x40))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x44))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x48))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x4c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x50))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x54))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x58))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x5c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x60))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x70))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x74))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x78))) = 0xffffffff;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(uint *)(gen_frame + 0x298)) = 0x80000000;
  (*(int *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a0)) = 0;
  (*(int *)(gen_frame + 0x290)) = 0;
  (*(uint *)(gen_frame + 0x294)) = 0;
  (*(float *)(gen_frame + 0x308)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x304)) = ((float *)GEN_TOP(0x0));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x26c)) GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x26c)) GEN_EDX_ARG);
      if ((int)(uVar6 - (int)(*(float * PTR32 *)(gen_frame + 0x304))) < 0x10) {
        (*(float * PTR32 *)(gen_frame + 0x30c)) = ((float *)GEN_TOP((uVar6 - (int)(*(float * PTR32 *)(gen_frame + 0x304)))));
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x30c)) = ((float *)GEN_TOP(0x10));
      }
      pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
      (*(int * PTR32 *)(gen_frame + 0x314)) = ((int *)GEN_TOP(0x0));
      (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(0x0));
      (*(float *)(gen_frame + 0x31c)) = -0.0;
      if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x30c))) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)(gen_frame + 0x314)),((int)(*(float * PTR32 *)(gen_frame + 0x30c)) < 0) - 1 & (uint)(*(float * PTR32 *)(gen_frame + 0x30c)),0xc)
        ;
      }
      iVar3 = ((int)(*(float * PTR32 *)(gen_frame + 0x318)) - (int)pfVar4) - 1;
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318));
      if (-1 < iVar3) {
        puVar14 = (uint *)((*(int * PTR32 *)(gen_frame + 0x314)) + (int)((int)(uintptr_t)pfVar4) * 3 + iVar3 * 3 + 2);
        do {
          uVar6 = *puVar14;
          puVar14[-1] = 0;
          if (-1 < (int)uVar6) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),puVar14[-2],(uVar6 & 0x3fffffff) * 2);
          }
          puVar14[-2] = 0;
          *puVar14 = 0x80000000;
          iVar3 = iVar3 - 1;
          puVar14 = puVar14 - 3;
          iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318));
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
        } while (-1 < iVar3);
      }
      iVar3 = (int)pfVar4 - iVar5;
      piVar13 = (*(int * PTR32 *)(gen_frame + 0x314)) + iVar5 * 3;
      if (0 < iVar3) {
        do {
          if (piVar13 != ((int *)GEN_TOP(0x0))) {
            *piVar13 = 0;
            piVar13[1] = 0;
            piVar13[2] = ((int)0x80000000);
          }
          piVar13 = piVar13 + 3;
          iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0x318)) = pfVar4;
      if (0 < (int)pfVar4) {
        (*(float * PTR32 *)(gen_frame + 0x2e0)) = ((float *)GEN_TOP(0x0));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = (*(float * PTR32 *)(gen_frame + 0x30c));
        (*(float * PTR32 *)(gen_frame + 0x2f0)) = (*(float * PTR32 *)(gen_frame + 0x304));
        iVar5 = ((int *)(gen_frame + 0x264))[0];
        fVar17 = REFG(float, 0x1088068);
        do {
          (*(float * PTR32 *)(gen_frame + 0x2dc)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x2e0)) + (int)(*(int * PTR32 *)(gen_frame + 0x314)))));
          iVar3 = *((int *)GEN_TOP((iVar5 + 0x1c))) * 9;
          iVar11 = 0;
          if (0 < *((int *)GEN_TOP((iVar5 + 0x40))) + iVar3) {
            (*(float * PTR32 *)(gen_frame + 0x2f4)) = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 2;
            do {
              if (iVar11 < iVar3) {
                iVar9 = iVar11 / 9;
                iVar10 = (*(int *)(gen_frame + 0x274));
              }
              else {
                iVar9 = iVar11 - iVar3;
                iVar10 = (*(int *)(gen_frame + 0x280));
              }
              if ((*((int *)GEN_TOP((iVar10 + iVar9 * 4))) != -1) &&
                 (((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] == 2.8026e-45 || ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] == 4.2039e-45)))) {
                if (iVar11 < iVar3) {
                  fVar20 = F_00d7c7b0(((*(int * PTR32 *)(gen_frame + 0x26c))[4] * (int)(*(float * PTR32 *)(gen_frame + 0x2f0)) +
                                        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)))) * 0x30 + (*(int * PTR32 *)(gen_frame + 0x26c))[10]
                                        ,iVar11 % 9);
                  (*(float *)(gen_frame + 0x28c)) = fVar20;
                  fVar17 = REFG(float, 0x1088068);
                }
                else {
                  fVar20 = *((float *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x26c))[0xd] +
                                     ((*(int * PTR32 *)(gen_frame + 0x26c))[5] * (int)(*(float * PTR32 *)(gen_frame + 0x2f0)) +
                                     *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 - iVar3) * 4)))) * 4)));
                }
                fVar20 = (fVar20 - ((*(float * PTR32 *)(gen_frame + 0x2f4))[-2] + (*(float * PTR32 *)(gen_frame + 0x2f4))[-1]) * fVar17) /
                         (*(*(float * PTR32 *)(gen_frame + 0x2f4)) * REFG(float, 0x10928e4));
                if (*(float *)&REFG(undefined, 0x1088114) <= fVar20) {
                  fVar20 = fVar20 + fVar17;
                }
                else {
                  fVar20 = fVar20 - fVar17;
                }
                iVar5 = (int)fVar20;
                if (iVar5 < -0x1fff) {
                  iVar5 = -0x1fff;
                }
                else if (0x1fff < iVar5) {
                  iVar5 = 0x1fff;
                }
                if ((*(float * PTR32 *)(gen_frame + 0x2dc))[1] == gen_bits2f((uint)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[2]) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(*(float * PTR32 *)(gen_frame + 0x2dc)),2);
                  fVar17 = REFG(float, 0x1088068);
                }
                *((short *)GEN_TOP(((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x2dc))) + (int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[1]) * 2))) =
                     (short)iVar5;
                (*(float * PTR32 *)(gen_frame + 0x2dc))[1] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[1]) + 1);
                iVar5 = ((int *)(gen_frame + 0x264))[0];
              }
              iVar3 = *((int *)GEN_TOP((iVar5 + 0x1c))) * 9;
              (*(float * PTR32 *)(gen_frame + 0x2f4)) = (*(float * PTR32 *)(gen_frame + 0x2f4)) + 3;
              iVar11 = iVar11 + 1;
            } while (iVar11 < *((int *)GEN_TOP((iVar5 + 0x40))) + iVar3);
          }
          (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + 3;
          (*(float * PTR32 *)(gen_frame + 0x2f0)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x2f0)) + 1)));
          pfVar4 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x32c)) - 1)));
          (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar4;
        } while (pfVar4 != ((float *)GEN_TOP(0x0)));
      }
      pfVar4 = ((float *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x314))[1]));
      (*(float * PTR32 *)(gen_frame + 0x2f0)) = pfVar4;
      (*(float * PTR32 *)(gen_frame + 0x2f4)) = ((float *)GEN_TOP(0x0));
      if (0 < (int)pfVar4) {
        (*(float * PTR32 *)(gen_frame + 0x2e0)) = pfVar4;
        do {
          if ((int)(*(float * PTR32 *)(gen_frame + 0x2e0)) < 0x10) {
            (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2e0));
          }
          else {
            (*(float * PTR32 *)(gen_frame + 0x2dc)) = ((float *)GEN_TOP(0x10));
          }
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2dc));
          if (((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) <= (int)(*(uint *)(gen_frame + 0x224))) && ((int)(*(uint *)(gen_frame + 0x224)) < (int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + (int)(*(float * PTR32 *)(gen_frame + 0x2dc))))
          {
            iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c))) - (int)gen_fl2bits((*(float *)(gen_frame + 0x308)));
            if ((*(uint *)(gen_frame + 0x294)) == ((*(uint *)(gen_frame + 0x298)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x290)),2);
            }
            *((short *)GEN_TOP(((*(int *)(gen_frame + 0x290)) + (*(uint *)(gen_frame + 0x294)) * 2))) = (short)iVar5;
            uVar6 = (*(uint *)(gen_frame + 0x294)) + 1;
            (*(uint *)(gen_frame + 0x294)) = uVar6;
            if (uVar6 == ((*(uint *)(gen_frame + 0x298)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x290)),2);
            }
            *((short *)GEN_TOP(((*(int *)(gen_frame + 0x290)) + (*(uint *)(gen_frame + 0x294)) * 2))) = (short)((uint)iVar5 >> 0x10);
            (*(uint *)(gen_frame + 0x294)) = (*(uint *)(gen_frame + 0x294)) + 1;
          }
          if (((int)(*(float * PTR32 *)(gen_frame + 0x30c)) < 0x10) || ((int)pfVar4 < 0x10)) {
            iVar5 = 0x1f;
            pfVar19 = ((float *)(gen_frame + 0x0));
            do {
              iVar5 = iVar5 - 1;
              *pfVar19 = 0.0;
              pfVar19[1] = 0.0;
              pfVar19[2] = 0.0;
              pfVar19[3] = 0.0;
              pfVar19 = pfVar19 + 4;
            } while (-1 < iVar5);
          }
          if (0 < (int)pfVar4) {
            pfVar19 = ((float *)(gen_frame + 0x0));
            (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            iVar5 = (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x2f4))) * 2;
            (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar4;
            do {
              piVar13 = (*(int * PTR32 *)(gen_frame + 0x314));
              pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
              if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x30c))) {
                do {
                  *(undefined2 *)pfVar19 = *((undefined2 *)GEN_TOP((iVar5 + *piVar13)));
                  pfVar19 = ((float *)GEN_TOP(((int)pfVar19 + 2)));
                  piVar13 = piVar13 + 3;
                  pfVar4 = ((float *)GEN_TOP(((int)pfVar4 - 1)));
                } while (pfVar4 != ((float *)GEN_TOP(0x0)));
              }
              pfVar19 = (*(float * PTR32 *)(gen_frame + 0x32c)) + 8;
              iVar5 = iVar5 + 2;
              pfVar4 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x2d0)) - 1)));
              (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar4;
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            } while (pfVar4 != ((float *)GEN_TOP(0x0)));
          }
          pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x2cc));
          iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c)));
          piVar13 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x28)));
          iVar5 = iVar3 + 0x210;
          uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x30))) & 0x3fffffff;
          if ((int)uVar6 < iVar5) {
            iVar11 = uVar6 * 2;
            if (iVar5 < iVar11) {
              iVar5 = iVar11;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar13,iVar5,1);
          }
          iVar5 = *piVar13;
          *((int *)GEN_TOP(((int)pvVar2 + 0x2c))) = *((int *)GEN_TOP(((int)pvVar2 + 0x2c))) + 0x210;
          uVar6 = F_00d8a970(((float *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x30c)),(*(float * PTR32 *)(gen_frame + 0x2dc)),iVar5 + iVar3);
          iVar5 = uVar6 - *piVar13;
          uVar6 = *((uint *)GEN_TOP(((int)pvVar2 + 0x30))) & 0x3fffffff;
          if ((int)uVar6 < iVar5) {
            iVar3 = uVar6 * 2;
            if (iVar3 <= iVar5) {
              iVar3 = iVar5;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar13,iVar3,1);
          }
          (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) - 4;
          iVar3 = (int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + 0x10;
          *((int *)GEN_TOP(((int)pvVar2 + 0x2c))) = iVar5;
          (*(float * PTR32 *)(gen_frame + 0x2f4)) = ((float *)GEN_TOP(iVar3));
        } while (iVar3 < (int)(*(float * PTR32 *)(gen_frame + 0x2f0)));
      }
      iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c)));
      (*(float *)(gen_frame + 0x308)) = gen_bits2f(iVar5);
      if ((*(uint *)(gen_frame + 0x2a0)) == ((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x29c)),2);
      }
      *((short *)GEN_TOP(((*(int *)(gen_frame + 0x29c)) + (*(uint *)(gen_frame + 0x2a0)) * 2))) = (short)iVar5;
      uVar6 = (*(uint *)(gen_frame + 0x2a0)) + 1;
      (*(uint *)(gen_frame + 0x2a0)) = uVar6;
      if (uVar6 == ((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x29c)),2);
      }
      *((short *)GEN_TOP(((*(int *)(gen_frame + 0x29c)) + (*(uint *)(gen_frame + 0x2a0)) * 2))) = (short)((uint)iVar5 >> 0x10);
      (*(uint *)(gen_frame + 0x2a0)) = (*(uint *)(gen_frame + 0x2a0)) + 1;
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318)) - 1;
      if (-1 < iVar5) {
        puVar14 = (uint *)((*(int * PTR32 *)(gen_frame + 0x314)) + iVar5 * 3 + 2);
        do {
          puVar14[-1] = 0;
          if (-1 < (int)*puVar14) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),puVar14[-2],(*puVar14 & 0x3fffffff) * 2);
          }
          puVar14[-2] = 0;
          *puVar14 = 0x80000000;
          iVar5 = iVar5 - 1;
          puVar14 = puVar14 - 3;
        } while (-1 < iVar5);
      }
      (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(0x0));
      if (-1 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int * PTR32 *)(gen_frame + 0x314)),
                   ((uint)gen_fl2bits((*(float *)(gen_frame + 0x31c))) & 0x3fffffff) * 0xc);
      }
      pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c)));
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x304)) + 0xf;
      (*(int * PTR32 *)(gen_frame + 0x314)) = ((int *)GEN_TOP(0x0));
      (*(float *)(gen_frame + 0x31c)) = -0.0;
      (*(float * PTR32 *)(gen_frame + 0x304)) = ((float *)GEN_TOP(iVar5));
      uVar6 = (*pcVar1)((*(int * PTR32 *)(gen_frame + 0x26c)));
    } while (iVar5 < (int)uVar6);
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x2cc));
  F_00d79ee0((*(undefined * PTR32 *)(gen_frame + 0x2cc)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x29c)),0);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x290)),1);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2e4)),2);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2f8)),3);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24c)),4);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x234)),5);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x228)),6);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x240)),7);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x258)),8);
  F_00d79f10(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2b4)),0);
  F_00d79f10(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2c0)),1);
  F_00d79f10(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2a8)),2);
  iVar5 = *((int *)GEN_TOP(((int)pvVar2 + 0x38))) + 8;
  uVar6 = *((uint *)GEN_TOP(((int)pvVar2 + 0x3c))) & 0x3fffffff;
  if ((int)uVar6 < iVar5) {
    iVar3 = uVar6 * 2;
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x34,iVar5,2);
  }
  *((int *)GEN_TOP(((int)pvVar2 + 0x38))) = *((int *)GEN_TOP(((int)pvVar2 + 0x38))) + 8;
  iVar5 = *((int *)GEN_TOP(((int)pvVar2 + 0x68))) + 4;
  uVar6 = *((uint *)GEN_TOP(((int)pvVar2 + 0x6c))) & 0x3fffffff;
  if ((int)uVar6 < iVar5) {
    iVar3 = uVar6 * 2;
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 100,iVar5,4);
  }
  *((int *)GEN_TOP(((int)pvVar2 + 0x68))) = *((int *)GEN_TOP(((int)pvVar2 + 0x68))) + 4;
  if (*((int *)GEN_TOP(((int)pvVar2 + 0x38))) < (int)(*((uint *)GEN_TOP(((int)pvVar2 + 0x3c))) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x34,2,0,*((int *)GEN_TOP(((int)pvVar2 + 0x38))));
  }
  if (*((int *)GEN_TOP(((int)pvVar2 + 0x68))) < (int)(*((uint *)GEN_TOP(((int)pvVar2 + 0x6c))) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 100,4,0,*((int *)GEN_TOP(((int)pvVar2 + 0x68))));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0x3214badc,((char *)REFP(0x11378cc)));
  iVar5 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c)));
  iVar3 = iVar5 * 9;
  uVar6 = 0;
  iVar11 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40))) + iVar3;
  ((float *)(gen_frame + 0x200))[0] = 0.0;
  ((float *)(gen_frame + 0x200))[1] = 0.0;
  ((float *)(gen_frame + 0x200))[2] = 0.0;
  ((float *)(gen_frame + 0x200))[3] = 0.0;
  (*(float *)(gen_frame + 0x308)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)GEN_TOP(iVar3));
  if (0 < iVar11) {
    (*(float * PTR32 *)(gen_frame + 0x2d0)) = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + iVar5 * -0x24)));
    do {
      if ((int)uVar6 < (int)(*(float * PTR32 *)(gen_frame + 0x32c))) {
        fVar17 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (uVar6 / 9) * 4)));
      }
      else {
        fVar17 = *(*(float * PTR32 *)(gen_frame + 0x2d0));
      }
      if (fVar17 != -NAN) {
        ((float *)(gen_frame + 0x200))[(int)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2d8))[uVar6]))] =
             gen_bits2f((int)gen_fl2bits(((float *)(gen_frame + 0x200))[(int)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2d8))[uVar6]))]) + 1);
        (*(float *)(gen_frame + 0x308)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1);
      }
      uVar6 = uVar6 + 1;
      (*(float * PTR32 *)(gen_frame + 0x2d0)) = (*(float * PTR32 *)(gen_frame + 0x2d0)) + 1;
    } while ((int)uVar6 < iVar11);
  }
  iVar5 = ((*(int * PTR32 *)(gen_frame + 0x26c))[0xe] + (*(int * PTR32 *)(gen_frame + 0x26c))[0xb] * 0xc) * 4;
  uVar6 = F_00d6eca0(pvVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x224)) = uVar6;
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
  puVar26 = &REFG(undefined, 0x1137b18);
  fVar17 = (float)iVar5 / (float)(int)(*(uint *)(gen_frame + 0x224));
  puVar25 = &REFG(undefined, 0x1137b14);
  puVar23 = &REFG(undefined, 0x1137b0c);
  uVar6 = (*(uint *)(gen_frame + 0x224));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((char *)REFP(0x1137afc)))));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar5)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar23)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,uVar6)));
  uVar6 = F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar25);
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ffe0(uVar6 GEN_EDX_ARG,fVar17)));
  F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar26);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((float *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137b20)),0x29d);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
  iVar5 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c)));
  iVar3 = *((int *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40)));
  pcVar27 = ((char *)REFP(0x1137ae8));
  iVar11 = iVar3 + iVar5 * 8 + iVar5;
  puVar23 = &REFG(undefined, 0x1080808);
  pcVar24 = ((char *)REFP(0x1137adc));
  pcVar22 = ((char *)REFP(0x1137ad0));
  fVar17 = (*(float *)(gen_frame + 0x308));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,iVar5)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar22)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar3)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar24)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar17))));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar23)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar11)));
  F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar27);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((float *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137b20)),0x29f);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x26c)) GEN_EDX_ARG);
  pcVar22 = ((char *)REFP(0x1137ac8));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,uVar6)));
  F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar22);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((float *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137b20)),0x2a0);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
  pcVar28 = ((char *)REFP(0x1137ab8));
  pcVar27 = ((char *)REFP(0x1137aac));
  pcVar24 = ((char *)REFP(0x1137a9c));
  pcVar22 = ((char *)REFP(0x1137a90));
  fVar17 = ((float *)(gen_frame + 0x200))[1];
  fVar20 = ((float *)(gen_frame + 0x200))[2];
  fVar18 = ((float *)(gen_frame + 0x200))[3];
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,(undefined4)gen_fl2bits(((float *)(gen_frame + 0x200))[0]))));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar22)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar17))));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar24)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar20))));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar27)));
  pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar18))));
  F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar28);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((float *)(gen_frame + 0x0)),
             ((char *)REFP(0x1137b20)),0x2a1);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)pvVar2 + 0x2c))) < (int)(*((uint *)GEN_TOP(((int)pvVar2 + 0x30))) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x28,1,0,*((int *)GEN_TOP(((int)pvVar2 + 0x2c))));
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x26c)) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)pvVar2 + 0x84))) = uVar6;
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x80))) = *((undefined4 *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x40)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x7c))) = *((undefined4 *)GEN_TOP((((int *)(gen_frame + 0x264))[0] + 0x1c)));
  iVar5 = (*(int * PTR32 *)(gen_frame + 0x26c))[3];
  *((int *)GEN_TOP(((int)pvVar2 + 0x8c))) = ((int *)(gen_frame + 0x264))[0];
  *((int *)GEN_TOP(((int)pvVar2 + 0xc))) = iVar5;
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  F_00d79e80(pvVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x294)) = 0;
  if (((*(uint *)(gen_frame + 0x298)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x290)),((*(uint *)(gen_frame + 0x298)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x290)) = 0;
  (*(uint *)(gen_frame + 0x298)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2a0)) = 0;
  if (((*(uint *)(gen_frame + 0x2a4)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x29c)),((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2b8)) = 0;
  if (((*(uint *)(gen_frame + 0x2bc)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2b4)),(*(uint *)(gen_frame + 0x2bc)) * 4);
  }
  (*(int *)(gen_frame + 0x2b4)) = 0;
  (*(uint *)(gen_frame + 0x2bc)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2ac)) = 0;
  if (((*(uint *)(gen_frame + 0x2b0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2a8)),(*(uint *)(gen_frame + 0x2b0)) * 4);
  }
  (*(int *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2c4)) = 0;
  if (((*(uint *)(gen_frame + 0x2c8)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2c0)),(*(uint *)(gen_frame + 0x2c8)) * 4);
  }
  (*(int *)(gen_frame + 0x2c0)) = 0;
  (*(uint *)(gen_frame + 0x2c8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  if (((*(uint *)(gen_frame + 0x260)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x258)),((*(uint *)(gen_frame + 0x260)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x258)) = 0;
  (*(uint *)(gen_frame + 0x260)) = 0x80000000;
  (*(uint *)(gen_frame + 0x244)) = 0;
  if (((*(uint *)(gen_frame + 0x248)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x240)),((*(uint *)(gen_frame + 0x248)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x240)) = 0;
  (*(uint *)(gen_frame + 0x248)) = 0x80000000;
  (*(uint *)(gen_frame + 0x22c)) = 0;
  if (((*(uint *)(gen_frame + 0x230)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x228)),((*(uint *)(gen_frame + 0x230)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x228)) = 0;
  (*(uint *)(gen_frame + 0x230)) = 0x80000000;
  (*(uint *)(gen_frame + 0x238)) = 0;
  if (((*(uint *)(gen_frame + 0x23c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x234)),((*(uint *)(gen_frame + 0x23c)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x234)) = 0;
  (*(uint *)(gen_frame + 0x23c)) = 0x80000000;
  (*(uint *)(gen_frame + 0x250)) = 0;
  if (((*(uint *)(gen_frame + 0x254)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x24c)),((*(uint *)(gen_frame + 0x254)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x24c)) = 0;
  (*(uint *)(gen_frame + 0x254)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2fc)) = 0;
  if (((*(uint *)(gen_frame + 0x300)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2f8)),((*(uint *)(gen_frame + 0x300)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x300)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2e8)) = 0;
  if (((*(uint *)(gen_frame + 0x2ec)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2e4)),((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x2e4)) = 0;
  (*(uint *)(gen_frame + 0x2ec)) = 0x80000000;
  if (((*(uint *)(gen_frame + 0x210)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2d8)),(*(uint *)(gen_frame + 0x210)) * 4);
  }
  if (((*(uint *)(gen_frame + 0x21c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2d4)),((*(uint *)(gen_frame + 0x21c)) & 0x3fffffff) * 0xc);
  }
  uVar6 = F_00d7ddb0(((int *)(gen_frame + 0x264)) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00d7bdc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7bdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7bdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  
  F_00d739c0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00d6f630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00d79f40(this GEN_EDX_ARG,param_1,param_2,((undefined1 *)(gen_frame + 0x0)));
  F_00d7dd10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00d7be30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7be30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7be30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00d739c0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00d79f40(this GEN_EDX_ARG,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d7be90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7be90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7be90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  if (param_1 != 0) {
    F_00d79e80(this GEN_EDX_FWD);
    this = (((undefined *)GEN_TOP((uint)(this))));
  }
  return (uint)this;
}

/* ref: FUN_00d7beb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7beb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7beb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d7bed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7bed0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7bed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d7bee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7bee0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7bee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00d7bf00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7bf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7bf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: FUN_00d7bf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7bf30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7bf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d7bf70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7bf70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7bf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 4))) == 0;
  return param_2;
}

/* ref: FUN_00d7bfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7bfa0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7bfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d7bfc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7bfc0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7bfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d7c000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c000(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d7c020 */
GEN_LIB GEN_FRAME unsigned int F_00d7c020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (3 < param_2) {
    iVar3 = (param_2 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 4)));
    puVar2 = ((undefined4 *)GEN_TOP((param_3 + 0xc)));
    do {
      puVar1[-1] = puVar2[-3];
      iVar3 = iVar3 - 1;
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - param_1) - 0x10 + (int)(puVar1 + 4))));
      puVar1[1] = puVar2[-1];
      puVar1[2] = *puVar2;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_2) {
    iVar3 = param_2 - iVar4;
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + iVar4 * 4)));
    do {
      iVar3 = iVar3 - 1;
      *puVar1 = *((undefined4 *)GEN_TOP(((int)puVar1 + (param_3 - param_1))));
      puVar1 = puVar1 + 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00d7c0b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c0b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d7c0f0 */
GEN_LIB GEN_FRAME unsigned int F_00d7c0f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined2 *)GEN_TOP((param_1 + iVar1 * 2))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d7c130 */
GEN_LIB GEN_FRAME unsigned int F_00d7c130(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d7c160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7c160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d7c180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00d7c1c0 */
GEN_LIB GEN_FRAME unsigned int F_00d7c1c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d7c220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7c220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d7c240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0xc)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) / 0xc;
  return uVar3;
}

/* ref: FUN_00d7c2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7c2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00d7c2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00d7c330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d7c360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7c380 */
GEN_LIB GEN_FRAME uint F_00d7c380(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d7c3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d7c3c0 */
GEN_LIB GEN_FRAME uint F_00d7c3c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d7c3e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7c430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d7c440 */
GEN_LIB GEN_FRAME unsigned int F_00d7c440(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
  }
  return 0;
}

/* ref: FUN_00d7c460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 < *((int *)GEN_TOP((in_ecx + 0x10)))) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00d7c480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 < *((int *)GEN_TOP((in_ecx + 0x1c)))) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00d7c4a0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4))) * 0x20 + *(int *)this)));
  }
  return **(float * PTR32 *)this;
}

/* ref: FUN_00d7c4d0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7c4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4))) * 0x20 + 4 + *(int *)this)));
  }
  return *((float *)GEN_TOP((*(int *)this + 4)));
}

/* ref: FUN_00d7c500 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7c500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4))) * 0x20 + 8 + *(int *)this)));
  }
  return *((float *)GEN_TOP((*(int *)this + 8)));
}

/* ref: FUN_00d7c530 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7c530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x1c)))) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + param_1 * 4))) * 0x20 + 0xc + *(int *)this
                     )));
  }
  return *((float *)GEN_TOP((*(int *)this + 0xc)));
}

/* ref: FUN_00d7c560 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7c560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4))) * 0x20 + 0x10 + *(int *)this
                     )));
  }
  return *((float *)GEN_TOP((*(int *)this + 0x10)));
}

/* ref: FUN_00d7c590 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7c590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4))) * 0x20 + 0x14 + *(int *)this
                     )));
  }
  return *((float *)GEN_TOP((*(int *)this + 0x14)));
}

/* ref: FUN_00d7c5c0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7c5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4))) * 0x20 + 0x18 + *(int *)this
                     )));
  }
  return *((float *)GEN_TOP((*(int *)this + 0x18)));
}

/* ref: FUN_00d7c5f0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7c5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 0x1c)))) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + param_1 * 4))) * 0x20 + 0x1c +
                     *(int *)this)));
  }
  return *((float *)GEN_TOP((*(int *)this + 0x1c)));
}

/* ref: FUN_00d7c620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c620(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd7c620u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  float fVar2;
  
  fVar2 = (param_2 - (in_ecx[1] + *in_ecx) * REFG(float, 0x1088068)) / (in_ecx[2] * REFG(float, 0x10928e4));
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar2) {
    fVar2 = fVar2 + REFG(float, 0x1088068);
  }
  else {
    fVar2 = fVar2 - REFG(float, 0x1088068);
  }
  uVar1 = (uint)fVar2;
  if ((int)uVar1 < -0x1fff) {
    return 0xffffe001;
  }
  if (0x1fff < (int)uVar1) {
    uVar1 = 0x1fff;
  }
  return uVar1;
}

/* ref: FUN_00d7c690 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d7c690(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd7c690u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  
  fVar1 = ((in_ecx[1] - *in_ecx) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
  if (fVar1 < param_2) {
    fVar1 = param_2;
  }
  in_ecx[2] = fVar1;
  return;
}

/* ref: FUN_00d7c7b0 */
GEN_LIB GEN_NOFRAME float F_00d7c7b0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  float fVar1;
  float fVar2;
  
  fVar1 = ((ABS(param_1[5]) + ABS(param_1[4])) + ABS(param_1[6])) + ABS(param_1[7]);
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return *param_1;
  case 1: ;
    return param_1[1];
  case 2: ;
    return param_1[2];
  case 3: ;
    fVar2 = param_1[4];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    break;
  case 4: ;
    fVar2 = param_1[5];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    return GEN_X87((float)((float10)fVar2 / (float10)fVar1));
  case 5: ;
    fVar2 = param_1[6];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    return GEN_X87((float)((float10)fVar2 / (float10)fVar1));
  case 6: ;
    return param_1[8];
  case 7: ;
    return param_1[9];
  case 8: ;
    return param_1[10];
  default: ;
    return (float)(float10)0;
  }
  return GEN_X87((float)((float10)fVar2 / (float10)fVar1));
}

/* ref: FUN_00d7c930 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d7c930(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 < *((int *)GEN_TOP((*in_ecx + 0x1c))) * 9;
}

/* ref: FUN_00d7c950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7c950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((int)(*((uint *)GEN_TOP((*(int *)this + 0x1c))) * 9) <= param_1) {
    return *((uint *)GEN_TOP((*(int *)this + 0x1c))) & 0xffffff00;
  }
  return (uint)(param_1 % 9 - 3U < 3);
}

/* ref: FUN_00d7c9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,4,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7ca40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7ca40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7ca40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7ca80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7ca80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7ca80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_2;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00d7cad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7cad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7cad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 4))) + param_3;
  uVar6 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar6 < (int)uVar2) {
    uVar6 = uVar6 * 2;
    uVar3 = uVar2;
    if ((int)uVar2 < (int)uVar6) {
      uVar3 = uVar6;
    }
    F_00d95690(param_1,this,uVar3,4);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4;
  iVar7 = 0;
  if (3 < param_3) {
    iVar8 = (param_3 - 4U >> 2) + 1;
    iVar7 = iVar8 * 4;
    puVar4 = ((undefined4 *)GEN_TOP((iVar1 + 4)));
    puVar5 = ((undefined4 *)GEN_TOP((param_2 + 0xc)));
    do {
      puVar4[-1] = puVar5[-3];
      iVar8 = iVar8 - 1;
      *puVar4 = *((undefined4 *)GEN_TOP(((param_2 - iVar1) - 0x10 + (int)(puVar4 + 4))));
      puVar4[1] = puVar5[-1];
      puVar4[2] = *puVar5;
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (iVar8 != 0);
  }
  if (iVar7 < param_3) {
    iVar8 = param_3 - iVar7;
    puVar4 = ((undefined4 *)GEN_TOP((iVar1 + iVar7 * 4)));
    do {
      iVar8 = iVar8 - 1;
      *puVar4 = *((undefined4 *)GEN_TOP(((int)puVar4 + (param_2 - iVar1))));
      puVar4 = puVar4 + 1;
    } while (iVar8 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  return uVar2;
}

/* ref: FUN_00d7cba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7cba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7cba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,1,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7cc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7cc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7cc00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_2;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return *(int *)this + iVar2;
}

/* ref: FUN_00d7cc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7cc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7cc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,2,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7ccb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7ccb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7ccb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  undefined2 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 2)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7ccf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7ccf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_2;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,2);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return *(int *)this + iVar2 * 2;
}

/* ref: FUN_00d7cd40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d7cd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd7cd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  undefined2 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) + param_3;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,2);
  }
  puVar2 = ((undefined2 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 2)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *((undefined2 *)GEN_TOP((iVar3 + (int)puVar2)));
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: FUN_00d7cdb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7cdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar3 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]));
    iVar4 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar4 != 0) goto LAB_00d7ce07;
  }
  iVar4 = ((int)0x80000000);
LAB_00d7ce07: ;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  iVar4 = 0;
  *(uint *)this = uVar3;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  if (0 < iVar2) {
    do {
      *((undefined4 *)GEN_TOP((uVar3 + iVar4 * 4))) = *(*(undefined4 * PTR32 *)&gen_args[1]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return (uint)this;
}

/* ref: FUN_00d7ce40 */
GEN_LIB GEN_FRAME unsigned int F_00d7ce40(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7ce40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0xc)));
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d7ce70 */
GEN_LIB GEN_FRAME unsigned int F_00d7ce70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7ce70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d7cea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7cea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7cea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d7cee0 */
GEN_LIB GEN_FRAME unsigned int F_00d7cee0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7cee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d7cf10 */
GEN_LIB GEN_FRAME unsigned int F_00d7cf10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd7cf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00d7cf70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7cf70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7cf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return param_1 + *((int *)GEN_TOP((*(int *)this + 0x1c))) * 9;
}

/* ref: FUN_00d7cf90 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d7cf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7cf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP((*(int *)this + 0x1c))) * 9) {
    return *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_1 / 9) * 4))) != -1;
  }
  return *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + (param_1 + *((int *)GEN_TOP((*(int *)this + 0x1c))) * -9) * 4)))
         != -1;
}

/* ref: FUN_00d7cff0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7cff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7cff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  if (*((int *)GEN_TOP((*(int *)this + 0x1c))) * 9 <= param_1) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + (param_1 + *((int *)GEN_TOP((*(int *)this + 0x1c))) * -9) * 4
                    )));
    if (iVar1 < piVar2[7]) {
      return *((float *)GEN_TOP((*((int *)GEN_TOP((piVar2[6] + iVar1 * 4))) * 0x20 + 0xc + *piVar2)));
    }
    return *((float *)GEN_TOP((*piVar2 + 0xc)));
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_1 / 9) * 4)));
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (param_1 % 9 < 3) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*((int *)GEN_TOP((piVar2[3] + iVar1 * 4))) * 0x20 + *piVar2)));
    }
    return *((float *)GEN_TOP(*piVar2));
  }
  if (5 < param_1 % 9) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*((int *)GEN_TOP((piVar2[3] + iVar1 * 4))) * 0x20 + 8 + *piVar2)));
    }
    return *((float *)GEN_TOP((*piVar2 + 8)));
  }
  if (iVar1 < piVar2[4]) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((piVar2[3] + iVar1 * 4))) * 0x20 + 4 + *piVar2)));
  }
  return *((float *)GEN_TOP((*piVar2 + 4)));
}

/* ref: FUN_00d7d0e0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7d0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  if (*((int *)GEN_TOP((*(int *)this + 0x1c))) * 9 <= param_1) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + (param_1 + *((int *)GEN_TOP((*(int *)this + 0x1c))) * -9) * 4
                    )));
    if (iVar1 < piVar2[7]) {
      return *((float *)GEN_TOP((*((int *)GEN_TOP((piVar2[6] + iVar1 * 4))) * 0x20 + 0x1c + *piVar2)));
    }
    return *((float *)GEN_TOP((*piVar2 + 0x1c)));
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_1 / 9) * 4)));
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (param_1 % 9 < 3) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*((int *)GEN_TOP((piVar2[3] + iVar1 * 4))) * 0x20 + 0x10 + *piVar2)));
    }
    return *((float *)GEN_TOP((*piVar2 + 0x10)));
  }
  if (5 < param_1 % 9) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*((int *)GEN_TOP((piVar2[3] + iVar1 * 4))) * 0x20 + 0x18 + *piVar2)));
    }
    return *((float *)GEN_TOP((*piVar2 + 0x18)));
  }
  if (iVar1 < piVar2[4]) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((piVar2[3] + iVar1 * 4))) * 0x20 + 0x14 + *piVar2)));
  }
  return *((float *)GEN_TOP((*piVar2 + 0x14)));
}

/* ref: FUN_00d7d1d0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7d1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  float fVar1;
  
  if (param_2 < *((int *)GEN_TOP((*(int *)this + 0x1c))) * 9) {
    fVar1 = F_00d7c7b0((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) * param_1 +
                         *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (param_2 / 9) * 4)))) * 0x30 +
                         *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x28))),param_2 % 9);
    return fVar1;
  }
  return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x34))) +
                   (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) * param_1 +
                   *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) +
                           (param_2 + *((int *)GEN_TOP((*(int *)this + 0x1c))) * -9) * 4)))) * 4)));
}

/* ref: FUN_00d7d240 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00d7d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)this;
  if (param_1 < *((int *)GEN_TOP((iVar1 + 0x1c))) * 9) {
    fVar3 = F_00d7c7b0((param_1 / 9) * 0x30 + *((int *)GEN_TOP((iVar1 + 0x24))),param_1 % 9);
    return fVar3;
  }
  iVar2 = param_1 + *((int *)GEN_TOP((iVar1 + 0x1c))) * -9;
  if (*((int *)GEN_TOP((iVar1 + 0x34))) <= iVar2) {
    return (float)(float10)0;
  }
  return *((float *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x30))) + iVar2 * 4)));
}

/* ref: FUN_00d7d2a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7d2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,4,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7d350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00d7d3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7d3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d7cad0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d7d3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,1,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2;
}

/* ref: FUN_00d7d480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7d480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,2,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d4f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined2 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 2)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7d530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,2);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2 * 2;
}

/* ref: FUN_00d7d580 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d7d580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7d580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00d7cd40(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: FUN_00d7d5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  undefined2 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 2)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7d5e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7d5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7d5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined2 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*piVar2 + piVar2[1] * 2)));
  *puVar1 = *((undefined2 *)GEN_TOP(((int)this + 4)));
  piVar2[1] = piVar2[1] + 1;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00d7d630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  code * pcVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    puVar2 = ((undefined8 *)GEN_TOP(0x0));
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) * 0xc;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined8 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (*(int *)&gen_args[0]) / 0xc;
    if (iVar3 != 0) goto LAB_00d7d68e;
  }
  iVar3 = ((int)0x80000000);
LAB_00d7d68e: ;
  *(undefined8 * PTR32 *)this = puVar2;
  *((int *)GEN_TOP(((int)this + 4))) = iVar4;
  *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  if (0 < iVar4) {
    do {
      if (puVar2 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar2 = *(*(undefined8 * PTR32 *)&gen_args[1]);
        *(undefined4 *)(puVar2 + 1) = *((undefined4 *)GEN_TOP(((*(undefined8 * PTR32 *)&gen_args[1]) + 1)));
      }
      puVar2 = ((undefined8 *)GEN_TOP(((int)puVar2 + 0xc)));
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d7d6d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  code * pcVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d7d726;
  }
  iVar3 = ((int)0x80000000);
LAB_00d7d726: ;
  *(undefined4 * PTR32 *)this = puVar2;
  *((int *)GEN_TOP(((int)this + 4))) = iVar4;
  *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  if (0 < iVar4) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = *(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d7d760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d820 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7d820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7d820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7d860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  undefined2 * puVar2;
  
  *((ushort *)GEN_TOP(((int)this + 4))) =
       *((ushort *)GEN_TOP(((int)this + 4))) | ((ushort)param_1 & 1) << GEN_SHC((byte)*((int *)GEN_TOP(((int)this + 8))), (byte)*((int *)GEN_TOP(((int)this + 8))));
  puVar2 = ((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 1)));
  *((undefined2 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar2;
  if (puVar2 == ((undefined2 *)GEN_TOP(0x10))) {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,2);
    }
    puVar2 = ((undefined2 *)GEN_TOP((*piVar1 + piVar1[1] * 2)));
    *puVar2 = *((undefined2 *)GEN_TOP(((int)this + 4)));
    piVar1[1] = piVar1[1] + 1;
    *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return (uint)puVar2;
}

/* ref: FUN_00d7d920 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d7d920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7d920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int * piVar2;
  
  if (0 < *((int *)GEN_TOP(((int)this + 8)))) {
    do {
      *((ushort *)GEN_TOP(((int)this + 4))) =
           *((ushort *)GEN_TOP(((int)this + 4))) |
           ((ushort)param_1 & 1) << GEN_SHC((byte)*((int *)GEN_TOP(((int)this + 8))), (byte)*((int *)GEN_TOP(((int)this + 8))));
      iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
      *((int *)GEN_TOP(((int)this + 8))) = iVar1;
      if (iVar1 == 0x10) {
        piVar2 = *(int * PTR32 *)this;
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,2);
        }
        *((undefined2 *)GEN_TOP((*piVar2 + piVar2[1] * 2))) = *((undefined2 *)GEN_TOP(((int)this + 4)));
        piVar2[1] = piVar2[1] + 1;
        *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      }
    } while (0 < *((int *)GEN_TOP(((int)this + 8))));
  }
  return;
}

/* ref: FUN_00d7d9a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7d9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d9e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7d9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7d9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7da20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7da20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7da20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7da60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7da60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7da60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7daa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7daa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7daa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7dae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7dae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7dae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7db20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7db20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7db20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7db60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7db60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7db60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*param_1,(uVar1 & 0x3fffffff) * 2);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00d7dbd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7dbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7dbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  code * pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar3 = (*(int *)&gen_args[0]);
  *(int *)this = (*(int *)&gen_args[0]);
  *((int *)GEN_TOP(((int)this + 4))) = (*(int *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = (*(undefined4 *)&gen_args[2]);
  iVar4 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c)));
  puVar5 = ((undefined4 *)GEN_TOP(0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  if (iVar4 == 0) {
LAB_00d7dc39: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[0]) = iVar4 * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar2 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7dc39;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar5;
  *((int *)GEN_TOP(((int)this + 0x14))) = iVar4;
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar2;
  if (0 < iVar4) {
    for (; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
  }
  iVar4 = *((int *)GEN_TOP((iVar3 + 0x40)));
  puVar5 = ((undefined4 *)GEN_TOP(0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  if (iVar4 != 0) {
    (*(int *)&gen_args[0]) = iVar4 * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d7dca0;
  }
  iVar3 = ((int)0x80000000);
LAB_00d7dca0: ;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = puVar5;
  *((int *)GEN_TOP(((int)this + 0x20))) = iVar4;
  *((int *)GEN_TOP(((int)this + 0x24))) = iVar3;
  if (0 < iVar4) {
    for (; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
  }
  iVar4 = 0;
  if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14)))) {
    do {
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) +
              *((short *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10))) + iVar4 * 2))) * 4))) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))));
  }
  iVar4 = 0;
  if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20)))) {
    do {
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) +
              *((short *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x1c))) + iVar4 * 2))) * 4))) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20))));
  }
  return (uint)this;
}

/* ref: FUN_00d7dd10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7dd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7dd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d7ddb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7ddb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7ddb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00d7de20 */
GEN_LIB GEN_FRAME unsigned int F_00d7de20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7de20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((param_1 + 8 + iVar3 * 0xc)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: FUN_00d7de80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d7de80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7de80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((*(int *)this + 8 + iVar3 * 0xc)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: FUN_00d7def0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d7def0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7def0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= param_2) {
      iVar4 = param_2;
    }
    F_00d95690(param_1,this,iVar4,0xc);
  }
  iVar4 = (*((int *)GEN_TOP(((int)this + 4))) - param_2) - 1;
  if (-1 < iVar4) {
    puVar3 = ((uint *)GEN_TOP((*(int *)this + param_2 * 0xc + 8 + iVar4 * 0xc)));
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 - 3;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (0 < iVar4) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00d7dfc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7dfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7dfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((*(int *)this + 8 + iVar3 * 0xc)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e060 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d7e060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7e060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar5 = uVar1 * 2;
    iVar3 = param_1;
    if (param_1 < iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0xc);
  }
  iVar5 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) - 1;
  if (-1 < iVar5) {
    puVar4 = ((uint *)GEN_TOP((*(int *)this + param_1 * 0xc + 8 + iVar5 * 0xc)));
    do {
      uVar1 = *puVar4;
      puVar4[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar4[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 - 3;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  iVar5 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (0 < iVar5) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00d7e250 */
GEN_LIB GEN_FRAME uint F_00d7e250(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd7e250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d7e280 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7e280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 100))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x3c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x34))),(uVar2 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x28))),uVar2 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  uVar2 = F_00d3e6d0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkaPredictiveCompressedAnimation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7e320(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7e320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d7e280(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d7e380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7e380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7e380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d7e3b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d7e3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d7e460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7e460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7e460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7e490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7e490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7e490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 6);
  return uVar1;
}

/* ref: FUN_00d7e530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7e530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7e530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e570 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7e570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e5b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7e5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e5f0 */
GEN_LIB GEN_FRAME unsigned int F_00d7e5f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7e5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((param_1 + 8 + iVar3 * 0xc)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: FUN_00d7e650 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d7e650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((*(int *)this + 8 + iVar3 * 0xc)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: FUN_00d7e6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7e6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7e6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((*(int *)this + 8 + iVar3 * 0xc)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7e880(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  in_ecx[2] = 0;
  F_00d91340(in_ecx + 3 GEN_EDX_FWD);
  F_00d91340(in_ecx + 4 GEN_EDX_ARG);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0x80000000;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0x80000000;
  return (uint)in_ecx;
}

/* ref: FUN_00d7e8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7e8d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7e8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  F_00d91350(in_ecx + 3 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 4 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d7e900 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7e900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x24))),iVar2 << 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c))) - 1;
  if (-1 < iVar2) {
    puVar3 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8 + iVar2 * 0xc)));
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 - 3;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d7ea00 */
GEN_LIB GEN_FRAME uint F_00d7ea00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd7ea00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaMeshBinding::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7ea30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7ea30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d7e900(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d7eae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7eae0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7eae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d7eb60 */
GEN_LIB GEN_FRAME float F_00d7eb60(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd7eb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  float fVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_8;
  
  iVar4 = param_1[1];
  iVar5 = 0;
  fVar6 = REFG(float, 0x1136e98);
  if (3 < iVar4) {
    pfVar2 = ((float *)GEN_TOP((*param_1 + 8)));
    iVar3 = (iVar4 - 4U >> 2) + 1;
    iVar5 = iVar3 * 4;
    do {
      if (!(pfVar2[-2] < fVar6)) {
        fVar6 = pfVar2[-2];
      }
      if (!(pfVar2[-1] < fVar6)) {
        fVar6 = pfVar2[-1];
      }
      if (!(*pfVar2 < fVar6)) {
        fVar6 = *pfVar2;
      }
      if (!(pfVar2[1] < fVar6)) {
        fVar6 = pfVar2[1];
      }
      pfVar2 = pfVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  local_8 = fVar6;
  if (iVar5 < iVar4) {
    pfVar2 = ((float *)GEN_TOP((*param_1 + iVar5 * 4)));
    iVar4 = iVar4 - iVar5;
    do {
      fVar1 = *pfVar2;
      if (!(fVar1 < fVar6)) {
        fVar6 = fVar1;
        local_8 = fVar1;
      }
      pfVar2 = pfVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return local_8;
}

/* ref: FUN_00d7ec00 */
GEN_LIB GEN_FRAME float F_00d7ec00(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd7ec00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  float fVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_8;
  
  iVar4 = param_1[1];
  iVar5 = 0;
  fVar6 = REFG(float, 0x1136c54);
  if (3 < iVar4) {
    pfVar2 = ((float *)GEN_TOP((*param_1 + 8)));
    iVar3 = (iVar4 - 4U >> 2) + 1;
    iVar5 = iVar3 * 4;
    do {
      if (!(fVar6 < pfVar2[-2])) {
        fVar6 = pfVar2[-2];
      }
      if (!(fVar6 < pfVar2[-1])) {
        fVar6 = pfVar2[-1];
      }
      if (!(fVar6 < *pfVar2)) {
        fVar6 = *pfVar2;
      }
      if (!(fVar6 < pfVar2[1])) {
        fVar6 = pfVar2[1];
      }
      pfVar2 = pfVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  local_8 = fVar6;
  if (iVar5 < iVar4) {
    pfVar2 = ((float *)GEN_TOP((*param_1 + iVar5 * 4)));
    iVar4 = iVar4 - iVar5;
    do {
      fVar1 = *pfVar2;
      if (!(fVar6 < fVar1)) {
        fVar6 = fVar1;
        local_8 = fVar1;
      }
      pfVar2 = pfVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return local_8;
}

/* ref: FUN_00d7eca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7eca0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd7eca0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float * pfVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x44))) + param_2 * 4)));
  if (!(fVar3 < param_3)) {
    fVar3 = param_3;
  }
  iVar2 = *((int *)GEN_TOP((param_1 + 0x50)));
  *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x44))) + param_2 * 4))) = fVar3;
  fVar3 = *((float *)GEN_TOP((iVar2 + param_2 * 4)));
  pfVar1 = ((float *)GEN_TOP((iVar2 + param_2 * 4)));
  if (param_3 < fVar3) {
    *pfVar1 = fVar3;
    return (uint)pfVar1;
  }
  *pfVar1 = param_3;
  return (uint)pfVar1;
}

/* ref: FUN_00d7ed80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7ed80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7ed80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  if (param_3 != '\0') {
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x80)));
    *((undefined4 *)GEN_TOP((uVar1 + param_2 * 4))) = 0;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + param_2 * 4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x74))) + param_2 * 4))), REFG(float, 0x1087f04));
  return param_2;
}

/* ref: FUN_00d7edc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7edc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd7edc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  unsigned int gen_args[9];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  code * pcVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (*(int *)&gen_args[0]);
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x80000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d7ee50: ;
    iVar3 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar3 == 0) goto LAB_00d7ee50;
  }
  param_1[0x11] = puVar2;
  param_1[0x12] = iVar5;
  param_1[0x13] = iVar3;
  iVar3 = iVar5;
  if (0 < iVar5) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar2 = 0x7f7fffee;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x80000000;
  if (iVar5 == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d7eeb6: ;
    iVar3 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[0]) = iVar5 * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar3 == 0) goto LAB_00d7eeb6;
  }
  param_1[0x14] = puVar2;
  param_1[0x15] = iVar5;
  param_1[0x16] = iVar3;
  iVar3 = iVar5;
  if (0 < iVar5) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar2 = 0xff7fffee;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000000;
  if (iVar5 == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d7ef1b: ;
    iVar3 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[0]) = iVar5 * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar3 == 0) goto LAB_00d7ef1b;
  }
  param_1[0x17] = puVar2;
  param_1[0x18] = iVar5;
  param_1[0x19] = iVar3;
  iVar3 = iVar5;
  if (0 < iVar5) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar2 = 0x7f7fffee;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x80000000;
  if (iVar5 == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d7ef81: ;
    iVar3 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[0]) = iVar5 * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar3 == 0) goto LAB_00d7ef81;
  }
  param_1[0x1a] = puVar2;
  param_1[0x1b] = iVar5;
  param_1[0x1c] = iVar3;
  iVar3 = iVar5;
  if (0 < iVar5) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar2 = 0xff7fffee;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x80000000;
  if (iVar5 == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
LAB_00d7efe6: ;
    iVar3 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[0]) = iVar5 * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar3 == 0) goto LAB_00d7efe6;
  }
  param_1[0x1d] = puVar2;
  param_1[0x1e] = iVar5;
  param_1[0x1f] = iVar3;
  iVar3 = iVar5;
  if (0 < iVar5) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x80000000;
  if (iVar5 == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(int *)&gen_args[0]) = iVar5 * 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[0]))));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d7f057;
  }
  iVar3 = ((int)0x80000000);
LAB_00d7f057: ;
  param_1[0x20] = puVar2;
  param_1[0x21] = iVar5;
  param_1[0x22] = iVar3;
  if (0 < iVar5) {
    for (; iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar2 = 0x3f800000;
      puVar2 = puVar2 + 1;
    }
  }
  param_1[0x23] = (undefined4)gen_fl2bits((*(float *)&gen_args[2]));
  param_1[0x24] = (undefined4)gen_fl2bits((*(float *)&gen_args[3]));
  param_1[0x25] = (undefined4)gen_fl2bits((*(float *)&gen_args[1]));
  uVar4 = F_00da0e60((*(undefined4 *)&gen_args[4]));
  iVar5 = uVar4 + 1;
  if ((int)(param_1[4] & 0x3fffffff) < iVar5) {
    iVar3 = (param_1[4] & 0x3fffffff) * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1 + 2,iVar3,1);
  }
  param_1[3] = iVar5;
  F_00da0e20(param_1[2],(*(undefined4 *)&gen_args[4]));
  uVar4 = F_00da0e60((*(undefined4 *)&gen_args[5]));
  iVar5 = uVar4 + 1;
  if ((int)(param_1[7] & 0x3fffffff) < iVar5) {
    iVar3 = (param_1[7] & 0x3fffffff) * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1 + 5,iVar3,1);
  }
  param_1[6] = iVar5;
  F_00da0e20(param_1[5],(*(undefined4 *)&gen_args[5]));
  uVar4 = F_00da0e60((*(undefined4 *)&gen_args[6]));
  iVar5 = uVar4 + 1;
  if ((int)(param_1[10] & 0x3fffffff) < iVar5) {
    iVar3 = (param_1[10] & 0x3fffffff) * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1 + 8,iVar3,1);
  }
  param_1[9] = iVar5;
  F_00da0e20(param_1[8],(*(undefined4 *)&gen_args[6]));
  uVar4 = F_00da0e60((*(undefined4 *)&gen_args[7]));
  iVar5 = uVar4 + 1;
  if ((int)(param_1[0xd] & 0x3fffffff) < iVar5) {
    iVar3 = (param_1[0xd] & 0x3fffffff) * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1 + 0xb,iVar3,1);
  }
  param_1[0xc] = iVar5;
  F_00da0e20(param_1[0xb],(*(undefined4 *)&gen_args[7]));
  uVar4 = F_00da0e60((*(undefined4 *)&gen_args[8]));
  iVar5 = uVar4 + 1;
  if ((int)(param_1[0x10] & 0x3fffffff) < iVar5) {
    iVar3 = (param_1[0x10] & 0x3fffffff) * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1 + 0xe,iVar3,1);
  }
  param_1[0xf] = iVar5;
  F_00da0e20(param_1[0xe],(*(undefined4 *)&gen_args[8]));
  return (uint)param_1;
}

/* ref: FUN_00d7f240 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7f240(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7f240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  return (uint)in_ecx;
}

/* ref: FUN_00d7f250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7f250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7f250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x88)));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x80))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x7c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x74))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x70)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x68))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 100)));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x5c))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x58)));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x50))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x4c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x44))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x40)));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x38))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x34)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x2c))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x20))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d7f470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f470(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xd7f470u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined * this;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x98);
  *((undefined2 *)GEN_TOP((uVar4 + 4))) = 0x98;
  this = ((undefined *)GEN_TOP(F_00d7edc0(uVar4 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(this GEN_EDX_ARG);
  }
  piVar1 = ((int *)GEN_TOP((param_1 + 8)));
  if (*((uint *)GEN_TOP((param_1 + 0xc))) == (*((uint *)GEN_TOP((param_1 + 0x10))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP((param_1 + 0xc))) * 4)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(this GEN_EDX_ARG);
    }
    *puVar2 = this;
  }
  *((int *)GEN_TOP((param_1 + 0xc))) = *((int *)GEN_TOP((param_1 + 0xc))) + 1;
  F_00d91a80(this GEN_EDX_ARG);
  uVar4 = *((uint *)GEN_TOP((*piVar1 - 4 + *((int *)GEN_TOP((param_1 + 0xc))) * 4)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: FUN_00d7f590 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7f590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7f590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113680c));
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00d7f600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7f600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d7f680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd7f680u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00d7f690 */
GEN_LIB GEN_FRAME uint F_00d7f690(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7f690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00d7f6a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7f6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00d7f720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7f720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((param_1 * 4)));
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    iVar4 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f & 3U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 2;
    if (iVar4 != 0) goto LAB_00d7f77d;
  }
  iVar4 = ((int)0x80000000);
LAB_00d7f77d: ;
  iVar5 = 0;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  if (3 < iVar2) {
    iVar4 = (iVar2 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    puVar3 = ((undefined4 *)GEN_TOP((param_1 + 8)));
    do {
      iVar4 = iVar4 - 1;
      puVar3[-2] = *param_2;
      puVar3[-1] = *param_2;
      *puVar3 = *param_2;
      puVar3[1] = *param_2;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
  }
  while (iVar5 < iVar2) {
    uVar1 = *param_2;
    iVar5 = iVar5 + 1;
    *((undefined4 *)GEN_TOP(((param_1 - 4) + iVar5 * 4))) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00d7f7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7f7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7f830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7f830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d7f870 */
GEN_LIB GEN_FRAME unsigned int F_00d7f870(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7f870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        if (((undefined *)GEN_TOP(*param_3)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(((undefined *)GEN_TOP(*param_3)) GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d7f8b0 */
GEN_LIB GEN_FRAME uint F_00d7f8b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd7f8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d7f8e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7f8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00d7f920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd7f920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_2)) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00d919e0(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG);
    }
    *puVar1 = *param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: FUN_00d7f970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7f970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7f970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7f9b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7f9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00d7f9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7f9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd7f9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: FUN_00d7fa40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7fa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7fa40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7fa80 */
GEN_LIB GEN_FRAME uint F_00d7fa80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd7fa80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaFootstepAnalysisInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d7fab0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd7fab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d7f250(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf5 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00d7faf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7faf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x30)));
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf3 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d7fbe0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd7fbe0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float * pfVar1;
  int iVar2;
  int iVar3;
  undefined8 * puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0x38)));
  if (*((float *)GEN_TOP((param_1 + 0x30))) <= param_2) {
    pfVar1 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) - 0x10 + iVar2 * 0x10)));
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar5 = pfVar1[3];
  }
  else if (param_2 < 0.0) {
    pfVar1 = *((float * PTR32 *)GEN_TOP((param_1 + 0x34)));
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar5 = pfVar1[3];
  }
  else {
    fVar5 = param_2 / (*((float *)GEN_TOP((param_1 + 0x30))) / (float)(iVar2 - 1));
    iVar3 = (int)fVar5;
    if (iVar2 - 2 < iVar3) {
      iVar3 = iVar2 - 2;
    }
    fVar5 = fVar5 - (float)iVar3;
    puVar4 = ((undefined8 *)GEN_TOP((iVar3 * 0x10 + *((int *)GEN_TOP((param_1 + 0x34))))));
    local_20 = gen_bits2f((uint)puVar4[2]);
    fStack_1c = gen_bits2f((uint)((ulonglong)puVar4[2] >> 0x20));
    fStack_18 = gen_bits2f((uint)puVar4[3]);
    fStack_14 = gen_bits2f((uint)((ulonglong)puVar4[3] >> 0x20));
    local_30 = gen_bits2f((uint)*puVar4);
    fStack_2c = gen_bits2f((uint)((ulonglong)*puVar4 >> 0x20));
    fStack_28 = gen_bits2f((uint)puVar4[1]);
    fStack_24 = gen_bits2f((uint)((ulonglong)puVar4[1] >> 0x20));
    fVar6 = (local_20 - local_30) * fVar5 + local_30;
    fVar7 = (fStack_1c - fStack_2c) * fVar5 + fStack_2c;
    fVar8 = (fStack_18 - fStack_28) * fVar5 + fStack_28;
    fVar5 = (fStack_14 - fStack_24) * fVar5 + fStack_24;
  }
  *param_3 = fVar6;
  param_3[1] = fVar7;
  param_3[2] = fVar8;
  param_3[3] = fVar5;
  F_00d988a0(param_3 + 4 GEN_EDX_FWD,param_1 + 0x10,fVar5);
  fVar8 = *(float *)&REFG(undefined, 0x1137d2c);
  fVar7 = *(float *)&REFG(undefined, 0x1137d28);
  fVar6 = *(float *)&REFG(undefined, 0x1137d24);
  fVar5 = *(float *)&REFG(undefined, 0x1137d20);
  param_3[8] = *(float *)&REFG(undefined, 0x1137d20);
  param_3[9] = fVar6;
  param_3[10] = fVar7;
  param_3[0xb] = fVar8;
  return fVar5;
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d7fe70(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xd7fe70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_FRAME_DECL(0x130, 0);
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
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
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar24 [16];
  
  (*(float *)(gen_frame + 0x11c)) = gen_bits2f(param_1[0xc]) - param_7;
  if (gen_bits2f(param_1[0xc]) - param_7 <= param_6) {
    *param_5 = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[3] = 0.0;
    fVar7 = *(float *)&REFG(undefined, 0x1138cac);
    fVar6 = *(float *)&REFG(undefined, 0x1138ca8);
    fVar5 = *(float *)&REFG(undefined, 0x1138ca4);
    param_5[4] = *(float *)&REFG(undefined, 0x1138ca0);
    param_5[5] = fVar5;
    param_5[6] = fVar6;
    param_5[7] = fVar7;
    fVar7 = *(float *)&REFG(undefined, 0x1138afc);
    fVar6 = *(float *)&REFG(undefined, 0x1138af8);
    fVar5 = *(float *)&REFG(undefined, 0x1138af4);
    param_5[8] = *(float *)&REFG(undefined, 0x1138af0);
    param_5[9] = fVar5;
    param_5[10] = fVar6;
    param_5[0xb] = fVar7;
    return (uint)param_5;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),((undefined1 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),&(*(float *)(gen_frame + 0xc0)));
  if (param_4 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x11c))),&(*(float *)(gen_frame + 0x90)));
    if ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(param_6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_6 == *(float *)&REFG(undefined, 0x1088114))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_6),&(*(float *)(gen_frame + 0x30)));
      F_00d95160(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x30)));
      gen_rcpps(&(auVar24), &(in_XMM3), ((undefined1 *)(gen_frame + 0x50)));
      fVar13 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137cd0) -
                                            (*(float *)((char *)((undefined1 *)(gen_frame + 0x50)) + 0)) * (*(float *)((char *)&auVar24 + 0))) * (*(float *)((char *)&auVar24 + 0))) &
                          *(uint *)&REFG(undefined, 0x10abc20));
      fVar15 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137cd4) -
                                            (*(float *)((char *)((undefined1 *)(gen_frame + 0x50)) + 4)) * (*(float *)((char *)&auVar24 + 4))) * (*(float *)((char *)&auVar24 + 4))) &
                          *(uint *)&REFG(undefined, 0x10abc24));
      fVar17 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137cd8) -
                                            (*(float *)((char *)((undefined1 *)(gen_frame + 0x50)) + 8)) * (*(float *)((char *)&auVar24 + 8))) * (*(float *)((char *)&auVar24 + 8))) &
                          *(uint *)&REFG(undefined, 0x10abc28));
      fVar19 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137cdc) -
                                            (*(float *)((char *)((undefined1 *)(gen_frame + 0x50)) + 12)) * (*(float *)((char *)&auVar24 + 12))) * (*(float *)((char *)&auVar24 + 12))) &
                          *(uint *)&REFG(undefined, 0x10abc2c));
      (*(float *)(gen_frame + 0x80)) = fVar13;
      (*(float *)(gen_frame + 0x84)) = fVar15;
      (*(float *)(gen_frame + 0x88)) = fVar17;
      (*(float *)(gen_frame + 0x8c)) = fVar19;
      fVar5 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x60))));
      fVar7 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x64))));
      fVar9 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x68))));
      fVar11 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x6c))));
      (*(float *)(gen_frame + 0x60)) = fVar5;
      (*(float *)(gen_frame + 0x64)) = fVar7;
      (*(float *)(gen_frame + 0x68)) = fVar9;
      (*(float *)(gen_frame + 0x6c)) = fVar11;
      fVar6 = gen_bits2f((*(uint *)(gen_frame + 0x40)) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
      fVar8 = gen_bits2f((*(uint *)(gen_frame + 0x44)) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
      fVar10 = gen_bits2f((*(uint *)(gen_frame + 0x48)) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
      fVar12 = gen_bits2f((*(uint *)(gen_frame + 0x4c)) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
      (*(float *)(gen_frame + 0xf0)) = fVar10;
      (*(float *)(gen_frame + 0xf4)) = fVar6;
      (*(float *)(gen_frame + 0xf8)) = fVar8;
      (*(float *)(gen_frame + 0xfc)) = fVar12;
      fVar14 = fVar6 * (*(float *)(gen_frame + 0x90));
      fVar16 = fVar8 * (*(float *)(gen_frame + 0x94));
      fVar18 = fVar10 * (*(float *)(gen_frame + 0x98));
      fVar20 = (((fVar16 + fVar14) + fVar18) * fVar6 +
               (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               (*(float *)(gen_frame + 0x90))) + ((*(float *)(gen_frame + 0x98)) * fVar8 - (*(float *)(gen_frame + 0x94)) * fVar10) * fVar12;
      fVar22 = (((fVar16 + fVar14) + fVar18) * fVar8 +
               (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               (*(float *)(gen_frame + 0x94))) + ((*(float *)(gen_frame + 0x90)) * fVar10 - (*(float *)(gen_frame + 0x98)) * fVar6) * fVar12;
      fVar23 = (((fVar16 + fVar14) + fVar18) * fVar10 +
               (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               (*(float *)(gen_frame + 0x98))) + ((*(float *)(gen_frame + 0x94)) * fVar6 - (*(float *)(gen_frame + 0x90)) * fVar8) * fVar12;
      fVar14 = (((fVar16 + fVar14) + fVar18) * fVar12 +
               (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               (*(float *)(gen_frame + 0x9c))) + ((*(float *)(gen_frame + 0x9c)) * fVar12 - (*(float *)(gen_frame + 0x9c)) * fVar12) * fVar12;
      (*(float *)(gen_frame + 0x90)) = (fVar20 + fVar20) + fVar5;
      (*(float *)(gen_frame + 0x94)) = (fVar22 + fVar22) + fVar7;
      (*(float *)(gen_frame + 0x98)) = (fVar23 + fVar23) + fVar9;
      (*(float *)(gen_frame + 0x9c)) = (fVar14 + fVar14) + fVar11;
      (*(undefined4 *)((char *)&auVar24 + 4)) =
           (undefined4)
           gen_fl2bits(((gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 0))) * fVar10 - (*(float *)(gen_frame + 0xa8)) * fVar6) +
                       gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 4))) * fVar12) + (*(float *)(gen_frame + 0xac)) * fVar8);
      (*(undefined4 *)((char *)&auVar24 + 0)) =
           (undefined4)
           gen_fl2bits((((*(float *)(gen_frame + 0xa8)) * fVar8 - gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 4))) * fVar10) +
                       gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 0))) * fVar12) + (*(float *)(gen_frame + 0xac)) * fVar6);
      (*(undefined4 *)((char *)&auVar24 + 8)) =
           (undefined4)
           gen_fl2bits(((gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 4))) * fVar6 - gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 0))) * fVar8) +
                       (*(float *)(gen_frame + 0xa8)) * fVar12) + (*(float *)(gen_frame + 0xac)) * fVar10);
      (*(undefined4 *)((char *)&auVar24 + 12)) =
           (undefined4)
           gen_fl2bits((*(float *)(gen_frame + 0xac)) * fVar12 -
                       ((gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 4))) * fVar8 + gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 0))) * fVar6) +
                       (*(float *)(gen_frame + 0xa8)) * fVar10));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))), &(auVar24), sizeof(auVar24) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))) ? sizeof(auVar24) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))));
      (*(float *)(gen_frame + 0xb0)) = fVar13 * (*(float *)(gen_frame + 0xb0));
      (*(float *)(gen_frame + 0xb4)) = fVar15 * (*(float *)(gen_frame + 0xb4));
      (*(float *)(gen_frame + 0xb8)) = fVar17 * (*(float *)(gen_frame + 0xb8));
      (*(float *)(gen_frame + 0xbc)) = fVar19 * (*(float *)(gen_frame + 0xbc));
    }
    uVar3 = (int)param_4 >> 0x1f;
    fVar5 = gen_bits2f((param_4 ^ uVar3) - uVar3);
    (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS((*(float *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 4)) - (*(float *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4))) <= *(float *)&REFG(undefined, 0x1137d34));
    (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS((*(float *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 0)) - (*(float *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0))) <= *(float *)&REFG(undefined, 0x1137d30));
    (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS((*(float *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 8)) - (*(float *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 8))) <= *(float *)&REFG(undefined, 0x1137d38));
    (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS((*(float *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 12)) - (*(float *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 12))) <= *(float *)&REFG(undefined, 0x1137d3c));
    iVar4 = gen_movmskps(&(auVar1));
    if (fVar5 != 0.0) {
      (*(float *)(gen_frame + 0xf0)) = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
      (*(float *)(gen_frame + 0xf4)) = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
      (*(float *)(gen_frame + 0xf8)) = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
      (*(float *)(gen_frame + 0xfc)) = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
      (*(float *)(gen_frame + 0x11c)) = fVar5;
      memcpy(&(auVar21), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))) < sizeof(auVar21) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))) : sizeof(auVar21));
      do {
        if ((int)param_4 < 0) {
          memcpy(&(auVar24), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0xd0))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xd0))) < sizeof(auVar24) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xd0))) : sizeof(auVar24));
          F_00d95160(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x90)));
          (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb4)));
          (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb0)));
          (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb8)));
          (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xbc)));
          fVar5 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x60))) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar7 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x64))) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar9 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x68))) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
          fVar11 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x6c))) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
          gen_rcpps(&(auVar24), &(auVar24), &(auVar2));
          fVar13 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137cd0) - (*(float *)((char *)&auVar24 + 0)) * (*(float *)(gen_frame + 0xb0))
                                                ) * (*(float *)((char *)&auVar24 + 0))) & *(uint *)&REFG(undefined, 0x10abc20));
          fVar15 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137cd4) -
                                                (*(float *)((char *)&auVar24 + 4)) * (*(float *)(gen_frame + 0xb4))) * (*(float *)((char *)&auVar24 + 4))) &
                              *(uint *)&REFG(undefined, 0x10abc24));
          fVar17 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137cd8) -
                                                (*(float *)((char *)&auVar24 + 8)) * (*(float *)(gen_frame + 0xb8))) * (*(float *)((char *)&auVar24 + 8))) &
                              *(uint *)&REFG(undefined, 0x10abc28));
          fVar19 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137cdc) -
                                                (*(float *)((char *)&auVar24 + 12)) * (*(float *)(gen_frame + 0xbc))) * (*(float *)((char *)&auVar24 + 12))) &
                              *(uint *)&REFG(undefined, 0x10abc2c));
          (*(float *)(gen_frame + 0x80)) = fVar13;
          (*(float *)(gen_frame + 0x84)) = fVar15;
          (*(float *)(gen_frame + 0x88)) = fVar17;
          (*(float *)(gen_frame + 0x8c)) = fVar19;
          (*(float *)(gen_frame + 0xf0)) = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          (*(float *)(gen_frame + 0xf4)) = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          (*(float *)(gen_frame + 0xf8)) = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
          (*(float *)(gen_frame + 0xfc)) = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
          (*(float *)(gen_frame + 0x60)) = fVar5;
          (*(float *)(gen_frame + 0x64)) = fVar7;
          (*(float *)(gen_frame + 0x68)) = fVar9;
          (*(float *)(gen_frame + 0x6c)) = fVar11;
          fVar6 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 0)) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
          fVar8 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 4)) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
          fVar10 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 8)) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
          fVar12 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xa0)) + 12)) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
          (*(float *)(gen_frame + 0x100)) = fVar10;
          (*(float *)(gen_frame + 0x104)) = fVar6;
          (*(float *)(gen_frame + 0x108)) = fVar8;
          (*(float *)(gen_frame + 0x10c)) = fVar12;
          fVar14 = fVar6 * (*(float *)(gen_frame + 0xc0));
          fVar16 = fVar8 * (*(float *)(gen_frame + 0xc4));
          fVar18 = fVar10 * (*(float *)(gen_frame + 0xc8));
          fVar20 = (((fVar16 + fVar14) + fVar18) * fVar6 +
                   (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                   (*(float *)(gen_frame + 0xc0))) + ((*(float *)(gen_frame + 0xc8)) * fVar8 - (*(float *)(gen_frame + 0xc4)) * fVar10) * fVar12;
          fVar22 = (((fVar16 + fVar14) + fVar18) * fVar8 +
                   (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                   (*(float *)(gen_frame + 0xc4))) + ((*(float *)(gen_frame + 0xc0)) * fVar10 - (*(float *)(gen_frame + 0xc8)) * fVar6) * fVar12;
          fVar23 = (((fVar16 + fVar14) + fVar18) * fVar10 +
                   (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                   (*(float *)(gen_frame + 0xc8))) + ((*(float *)(gen_frame + 0xc4)) * fVar6 - (*(float *)(gen_frame + 0xc0)) * fVar8) * fVar12;
          fVar14 = (((fVar16 + fVar14) + fVar18) * fVar12 +
                   (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                   (*(float *)(gen_frame + 0xcc))) + ((*(float *)(gen_frame + 0xcc)) * fVar12 - (*(float *)(gen_frame + 0xcc)) * fVar12) * fVar12;
          (*(float *)(gen_frame + 0xc0)) = (fVar20 + fVar20) + fVar5;
          (*(float *)(gen_frame + 0xc4)) = (fVar22 + fVar22) + fVar7;
          (*(float *)(gen_frame + 0xc8)) = (fVar23 + fVar23) + fVar9;
          (*(float *)(gen_frame + 0xcc)) = (fVar14 + fVar14) + fVar11;
          (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0xc0));
          (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0xc4));
          (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0xc8));
          (*(float *)(gen_frame + 0x3c)) = (*(float *)(gen_frame + 0xcc));
          (*(undefined4 *)((char *)&auVar21 + 4)) =
               (undefined4)
               gen_fl2bits(((gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0))) * fVar10 - (*(float *)(gen_frame + 0xd8)) * fVar6) +
                           fVar12 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4)))) + fVar8 * (*(float *)(gen_frame + 0xdc)));
          (*(undefined4 *)((char *)&auVar21 + 0)) =
               (undefined4)
               gen_fl2bits((((*(float *)(gen_frame + 0xd8)) * fVar8 - gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4))) * fVar10) +
                           fVar12 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0)))) + fVar6 * (*(float *)(gen_frame + 0xdc)));
          (*(undefined4 *)((char *)&auVar21 + 8)) =
               (undefined4)
               gen_fl2bits(((gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4))) * fVar6 - gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0))) * fVar8
                            ) + fVar12 * (*(float *)(gen_frame + 0xd8))) + fVar10 * (*(float *)(gen_frame + 0xdc)));
          (*(undefined4 *)((char *)&auVar21 + 12)) =
               (undefined4)
               gen_fl2bits((*(float *)(gen_frame + 0xdc)) * fVar12 -
                           ((fVar8 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4))) + fVar6 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0)))
                            ) + fVar10 * (*(float *)(gen_frame + 0xd8))));
          (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0xe0)) * fVar13;
          (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0xe4)) * fVar15;
          (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0xe8)) * fVar17;
          (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0xec)) * fVar19;
          memcpy(&(auVar24), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))) < sizeof(auVar24) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xa0))) : sizeof(auVar24));
LAB_00d80380: ;
          memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0xd0))), &(auVar21), sizeof(auVar21) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xd0))) ? sizeof(auVar21) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xd0))));
          memcpy(&(auVar21), &(auVar24), sizeof(auVar24) < sizeof(auVar21) ? sizeof(auVar24) : sizeof(auVar21));
        }
        else {
          fVar12 = (*(float *)((char *)&auVar21 + 0));
          fVar5 = (*(float *)(gen_frame + 0xc0)) * fVar12;
          fVar13 = (*(float *)((char *)&auVar21 + 4));
          fVar6 = (*(float *)(gen_frame + 0xc4)) * fVar13;
          fVar14 = (*(float *)((char *)&auVar21 + 8));
          fVar7 = (*(float *)(gen_frame + 0xc8)) * fVar14;
          fVar15 = (*(float *)((char *)&auVar21 + 12));
          (*(float *)(gen_frame + 0x100)) = fVar14;
          (*(float *)(gen_frame + 0x104)) = fVar12;
          (*(float *)(gen_frame + 0x108)) = fVar13;
          (*(float *)(gen_frame + 0x10c)) = fVar15;
          fVar8 = (((fVar6 + fVar5) + fVar7) * fVar12 + (fVar15 * fVar15 + (*(float *)(gen_frame + 0xf0))) * (*(float *)(gen_frame + 0xc0))) +
                  ((*(float *)(gen_frame + 0xc8)) * fVar13 - (*(float *)(gen_frame + 0xc4)) * fVar14) * fVar15;
          fVar9 = (((fVar6 + fVar5) + fVar7) * fVar13 + (fVar15 * fVar15 + (*(float *)(gen_frame + 0xf4))) * (*(float *)(gen_frame + 0xc4))) +
                  ((*(float *)(gen_frame + 0xc0)) * fVar14 - (*(float *)(gen_frame + 0xc8)) * fVar12) * fVar15;
          fVar10 = (((fVar6 + fVar5) + fVar7) * fVar14 + (fVar15 * fVar15 + (*(float *)(gen_frame + 0xf8))) * (*(float *)(gen_frame + 0xc8)))
                   + ((*(float *)(gen_frame + 0xc4)) * fVar12 - (*(float *)(gen_frame + 0xc0)) * fVar13) * fVar15;
          fVar5 = (((fVar6 + fVar5) + fVar7) * fVar15 + (fVar15 * fVar15 + (*(float *)(gen_frame + 0xfc))) * (*(float *)(gen_frame + 0xcc))) +
                  ((*(float *)(gen_frame + 0xcc)) * fVar15 - (*(float *)(gen_frame + 0xcc)) * fVar15) * fVar15;
          (*(float *)(gen_frame + 0xc0)) = (fVar8 + fVar8) + (*(float *)(gen_frame + 0x90));
          (*(float *)(gen_frame + 0xc4)) = (fVar9 + fVar9) + (*(float *)(gen_frame + 0x94));
          (*(float *)(gen_frame + 0xc8)) = (fVar10 + fVar10) + (*(float *)(gen_frame + 0x98));
          (*(float *)(gen_frame + 0xcc)) = (fVar5 + fVar5) + (*(float *)(gen_frame + 0x9c));
          fVar8 = (*(float *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0));
          fVar9 = (*(float *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4));
          fVar10 = (*(float *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 8));
          fVar11 = (*(float *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 12));
          fVar5 = ((fVar10 * fVar13 - fVar9 * fVar14) + fVar15 * fVar8) + fVar11 * fVar12;
          fVar6 = ((fVar8 * fVar14 - fVar10 * fVar12) + fVar15 * fVar9) + fVar11 * fVar13;
          fVar7 = ((fVar9 * fVar12 - fVar8 * fVar13) + fVar15 * fVar10) + fVar11 * fVar14;
          (*(float *)(gen_frame + 0x100)) = fVar5;
          (*(float *)(gen_frame + 0x104)) = fVar6;
          (*(float *)(gen_frame + 0x108)) = fVar7;
          (*(float *)(gen_frame + 0x10c)) = ((fVar11 * fVar15 - fVar11 * fVar15) + fVar15 * fVar11) + fVar11 * fVar15;
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4)) = (undefined4)gen_fl2bits(fVar6);
          (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0)) = (undefined4)gen_fl2bits(fVar5);
          (*(float *)(gen_frame + 0xd8)) = fVar7;
          (*(float *)(gen_frame + 0xdc)) = fVar11 * fVar15 - ((fVar13 * fVar9 + fVar12 * fVar8) + fVar14 * fVar10);
          (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0xe0)) * (*(float *)(gen_frame + 0xb0));
          (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0xe4)) * (*(float *)(gen_frame + 0xb4));
          (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0xe8)) * (*(float *)(gen_frame + 0xb8));
          (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xbc));
          memcpy(&(auVar24), &(auVar21), sizeof(auVar21) < sizeof(auVar24) ? sizeof(auVar21) : sizeof(auVar24));
          if (iVar4 == 0xf) goto LAB_00d80380;
        }
        fVar5 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x11c))) - 1);
        (*(float *)(gen_frame + 0x11c)) = fVar5;
      } while (fVar5 != 0.0);
    }
  }
  F_00d95160(&(*(float *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x0)));
  fVar5 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x30))) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
  fVar6 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x34))) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
  fVar7 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x38))) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
  fVar8 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x3c))) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
  (*(float *)(gen_frame + 0x30)) = fVar5;
  (*(float *)(gen_frame + 0x34)) = fVar6;
  (*(float *)(gen_frame + 0x38)) = fVar7;
  (*(float *)(gen_frame + 0x3c)) = fVar8;
  fVar9 = gen_bits2f((*(uint *)(gen_frame + 0x10)) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
  fVar10 = gen_bits2f((*(uint *)(gen_frame + 0x14)) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
  fVar11 = gen_bits2f((*(uint *)(gen_frame + 0x18)) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
  fVar12 = gen_bits2f((*(uint *)(gen_frame + 0x1c)) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
  (*(float *)(gen_frame + 0x100)) = fVar11;
  (*(float *)(gen_frame + 0x104)) = fVar9;
  (*(float *)(gen_frame + 0x108)) = fVar10;
  (*(float *)(gen_frame + 0x10c)) = fVar12;
  fVar13 = fVar9 * (*(float *)(gen_frame + 0xc0));
  fVar14 = fVar10 * (*(float *)(gen_frame + 0xc4));
  fVar15 = fVar11 * (*(float *)(gen_frame + 0xc8));
  fVar16 = (((fVar14 + fVar13) + fVar15) * fVar9 +
           (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
           (*(float *)(gen_frame + 0xc0))) + ((*(float *)(gen_frame + 0xc8)) * fVar10 - (*(float *)(gen_frame + 0xc4)) * fVar11) * fVar12;
  fVar17 = (((fVar14 + fVar13) + fVar15) * fVar10 +
           (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
           (*(float *)(gen_frame + 0xc4))) + ((*(float *)(gen_frame + 0xc0)) * fVar11 - (*(float *)(gen_frame + 0xc8)) * fVar9) * fVar12;
  fVar18 = (((fVar14 + fVar13) + fVar15) * fVar11 +
           (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
           (*(float *)(gen_frame + 0xc8))) + ((*(float *)(gen_frame + 0xc4)) * fVar9 - (*(float *)(gen_frame + 0xc0)) * fVar10) * fVar12;
  fVar13 = (((fVar14 + fVar13) + fVar15) * fVar12 +
           (fVar12 * fVar12 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
           (*(float *)(gen_frame + 0xcc))) + ((*(float *)(gen_frame + 0xcc)) * fVar12 - (*(float *)(gen_frame + 0xcc)) * fVar12) * fVar12;
  *param_5 = (fVar16 + fVar16) + fVar5;
  param_5[1] = (fVar17 + fVar17) + fVar6;
  param_5[2] = (fVar18 + fVar18) + fVar7;
  param_5[3] = (fVar13 + fVar13) + fVar8;
  fVar8 = *(float *)&REFG(undefined, 0x1137d2c);
  fVar7 = *(float *)&REFG(undefined, 0x1137d28);
  fVar6 = *(float *)&REFG(undefined, 0x1137d24);
  fVar5 = *(float *)&REFG(undefined, 0x1137d20);
  param_5[4] = (((*(float *)(gen_frame + 0xd8)) * fVar10 - gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4))) * fVar11) +
               fVar12 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0)))) + fVar9 * (*(float *)(gen_frame + 0xdc));
  param_5[5] = ((gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0))) * fVar11 - (*(float *)(gen_frame + 0xd8)) * fVar9) +
               fVar12 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4)))) + fVar10 * (*(float *)(gen_frame + 0xdc));
  param_5[6] = ((gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4))) * fVar9 - gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0))) * fVar10) +
               fVar12 * (*(float *)(gen_frame + 0xd8))) + fVar11 * (*(float *)(gen_frame + 0xdc));
  param_5[7] = (*(float *)(gen_frame + 0xdc)) * fVar12 -
               ((fVar10 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 4))) + fVar9 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xd0)) + 0)))) +
               fVar11 * (*(float *)(gen_frame + 0xd8)));
  param_5[8] = fVar5;
  param_5[9] = fVar6;
  param_5[10] = fVar7;
  param_5[0xb] = fVar8;
  return (uint)param_5;
}

/* ref: FUN_00d80920 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d80920(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd80920u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  in_ecx[3] = in_ecx[3];
  return;
}

/* ref: FUN_00d80960 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d80960(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd80960u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  in_ecx[3] = 0.0;
  return;
}

/* ref: FUN_00d809a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00d809a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd809a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined1 auVar1 [16];
  int iVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] - param_2[1]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - *param_2) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] - param_2[2]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(in_ecx[3] - param_2[3]) <= param_3);
  iVar2 = gen_movmskps(&(auVar1));
  return iVar2 == 0xf;
}

/* ref: FUN_00d80bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d80bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd80bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0xc))) == (*((uint *)GEN_TOP(((int)this + 0x10))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 8))),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4)));
  *puVar1 = param_1;
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d80c20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d80c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd80c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136a94));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d80d00 */
GEN_LIB GEN_FRAME float F_00d80d00(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd80d00u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: FUN_00d828b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d828b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd828b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9b0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d828d0 */
GEN_LIB GEN_FRAME uint F_00d828d0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd828d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1[3];
  fVar5 = param_2[2] * param_1[2] + (param_2[1] * param_1[1] + *param_2 * *param_1);
  fVar6 = fVar5 * *param_1;
  fVar7 = fVar5 * param_1[1];
  fVar8 = fVar5 * param_1[2];
  *param_4 = fVar6;
  param_4[1] = fVar7;
  param_4[2] = fVar8;
  param_4[3] = fVar5 * fVar1;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_3 = *param_2 - fVar6;
  param_3[1] = fVar2 - fVar7;
  param_3[2] = fVar3 - fVar8;
  param_3[3] = fVar4 - fVar5 * fVar1;
  return (uint)param_2;
}

/* ref: hkaAnimationControl::vf14 */
GEN_LIB GEN_NOFRAME uint F_00d82920(void)
{
  GEN_ENTER(0xd82920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimationControl::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d82930(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0xc))) + 0x10)));
}

/* ref: hkaAnimationControl::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d82940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0xc))) + 0x14)));
}

/* ref: hkaAnimationControl::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d82950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0x14)));
}

/* ref: hkaAnimationControl::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d82960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0x10)));
}

/* ref: hkaAnimationControl::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d82970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0x20)));
}

/* ref: hkaAnimationControl::vf13 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d82980(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0x1c)));
}

/* ref: hkaAnimationControl::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd82990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0xc))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) GEN_EDX_ARG,*(undefined4 *)(this + 8),param_1,
                     param_2);
  return uVar1;
}

/* ref: hkaAnimationControl::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d829c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd829c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) GEN_EDX_ARG,*(undefined4 *)(this + 8),param_1,
                     param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d82a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd82a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x30)))) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2c)));
    do {
      if (*piVar2 == param_1) goto LAB_00d82a23;
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < *((int *)GEN_TOP(((int)this + 0x30))));
  }
  uVar1 = 0xffffffff;
LAB_00d82a23: ;
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) - 1;
  if (*((uint *)GEN_TOP(((int)this + 0x30))) != uVar1) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + uVar1 * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + *((uint *)GEN_TOP(((int)this + 0x30))) * 4)));
  }
  return uVar1;
}

/* ref: FUN_00d82a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd82a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *((int *)GEN_TOP(((int)this + 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff;
  if (uVar4 < 0x10) {
    uVar5 = uVar4 * 2;
    if (uVar4 == 8 || uVar5 < 0x10) {
      uVar5 = 0x10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,uVar5,1);
  }
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0x10)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,iVar6,1);
  }
  *((int *)GEN_TOP(((int)this + 0x14))) = iVar3;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff;
  if (uVar4 < 0x10) {
    uVar5 = uVar4 * 2;
    if (uVar4 == 8 || uVar5 < 0x10) {
      uVar5 = 0x10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar2,uVar5,1);
  }
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0x14)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar2,iVar6,1);
  }
  *((int *)GEN_TOP(((int)this + 0x20))) = iVar3;
  F_00da1030(*puVar1,0xff,*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  uVar4 = F_00da1030(*puVar2,0xff,*((undefined4 *)GEN_TOP(((int)this + 0x20))));
  return uVar4;
}

/* ref: FUN_00d82b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd82b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x30))) == (*((uint *)GEN_TOP(((int)this + 0x34))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x2c))),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + *((int *)GEN_TOP(((int)this + 0x30))) * 4)));
  *puVar1 = param_1;
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d82b80 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d82b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x28))) != 0) &&
     (*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + 0xc))) + 0x18))) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d82ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82ba0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd82ba0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x0)) = param_1;
  bVar4 = F_00d82b80(param_1 GEN_EDX_FWD);
  if (bVar4 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
    (*(undefined4 * PTR32 *)&gen_args[1])[2] = 0;
    (*(undefined4 * PTR32 *)&gen_args[1])[3] = 0;
    uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
    uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
    uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
    (*(undefined4 * PTR32 *)&gen_args[1])[4] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
    (*(undefined4 * PTR32 *)&gen_args[1])[5] = uVar1;
    (*(undefined4 * PTR32 *)&gen_args[1])[6] = uVar2;
    (*(undefined4 * PTR32 *)&gen_args[1])[7] = uVar3;
    uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
    uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
    uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
    (*(undefined4 * PTR32 *)&gen_args[1])[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
    (*(undefined4 * PTR32 *)&gen_args[1])[9] = uVar1;
    (*(undefined4 * PTR32 *)&gen_args[1])[10] = uVar2;
    (*(undefined4 * PTR32 *)&gen_args[1])[0xb] = uVar3;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[0])),&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(float *)&gen_args[0]));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1[10] + 0xc))) + 0x34))))
                    (*((int * PTR32 *)GEN_TOP((param_1[10] + 0xc))) GEN_EDX_ARG,param_1[2],(*(int * PTR32 *)(gen_frame + 0x0)),
                     (undefined4)gen_fl2bits((*(float *)&gen_args[0])),(*(undefined4 * PTR32 *)&gen_args[1]),(undefined4)gen_fl2bits((*(float *)&gen_args[2])),
                     (undefined4)gen_fl2bits((*(float *)&gen_args[3])));
  return uVar5;
}

/* ref: FUN_00d82c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd82c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  gen_size32 sVar8;
  int iVar9;
  
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1137eec));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
  piVar2 = ((int *)GEN_TOP(((int)this + 0x1c)));
  *((int *)GEN_TOP(((int)this + 0x28))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff;
    if (uVar5 < 0x10) {
      uVar6 = uVar5 * 2;
      if (uVar5 == 8 || uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,uVar6,1);
    }
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 0xc))) + 0x10)));
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff;
    if ((int)uVar5 < iVar3) {
      iVar9 = uVar5 * 2;
      iVar7 = iVar3;
      if (iVar3 < iVar9) {
        iVar7 = iVar9;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar7,1);
    }
    sVar8 = iVar3 - *((int *)GEN_TOP(((int)this + 0x14)));
    if (0 < (int)sVar8) {
      F_00c48350(((undefined *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x14)))))),0xff,sVar8);
    }
    *((int *)GEN_TOP(((int)this + 0x14))) = iVar3;
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff;
    if (uVar5 < 0x10) {
      uVar6 = uVar5 * 2;
      if (uVar5 == 8 || uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2,uVar6,1);
    }
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 0xc))) + 0x14)));
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff;
    if ((int)uVar5 < iVar3) {
      iVar9 = uVar5 * 2;
      if (iVar9 <= iVar3) {
        iVar9 = iVar3;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2,iVar9,1);
    }
    sVar8 = iVar3 - *((int *)GEN_TOP(((int)this + 0x20)));
    if (0 < (int)sVar8) {
      F_00c48350(((undefined *)GEN_TOP((*piVar2 + *((int *)GEN_TOP(((int)this + 0x20)))))),0xff,sVar8);
    }
    *((int *)GEN_TOP(((int)this + 0x20))) = iVar3;
  }
  return (uint)this;
}

/* ref: FUN_00d82db0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d82db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1137eec));
  if (0 < *((int *)GEN_TOP(((int)this + 0x30)))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + iVar3 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,this);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x30))));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x34)));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x2c))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),uVar2 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar2 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkaAnimationControl::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82e70(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd82e70u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d82ba0(param_1 GEN_EDX_FWD,param_2,param_3,0.0,0.0);
  return uVar1;
}

/* ref: FUN_00d82ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82ed0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd82ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d82ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd82ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  }
  if ((int)param_2 < iVar3) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + param_2 * 4)));
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00d82f50 */
GEN_LIB GEN_FRAME unsigned int F_00d82f50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd82f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d82f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d82f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd82f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d82fe0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d82fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined1 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd82fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined1 *)GEN_TOP((iVar5 + iVar1 + iVar3))) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00d83040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d83040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd83040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 != param_1) {
    uVar1 = *((uint *)GEN_TOP((*(int *)this + uVar1 * 4)));
    *((uint *)GEN_TOP((*(int *)this + param_1 * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00d83060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d83060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd83060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d830a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d830a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd830a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d830f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d830f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd830f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined1 *)GEN_TOP((iVar5 + iVar1 + iVar3))) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00d83150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d83150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd83150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d83190 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d83190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd83190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d831d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d831d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd831d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0x18))) != 0;
  return param_2;
}

/* ref: FUN_00d831f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d831f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd831f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d83230 */
GEN_LIB GEN_FRAME uint F_00d83230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd83230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkaAnimationControl::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d83260(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd83260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d82db0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d832a0 */
GEN_LIB GEN_FRAME unsigned int F_00d832a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd832a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float * pfVar8;
  float * pfVar9;
  float fVar10;
  int local_8;
  
  fVar6 = REFG(float, 0x10addc0);
  fVar5 = REFG(float, 0x1087f04);
  iVar3 = param_1[1];
  if (param_1[5] == 0) {
    iVar7 = 0;
    local_8 = 0;
    if (-1 < iVar3) {
      if (3 < iVar3 + 1) {
        pfVar9 = ((float *)GEN_TOP((param_2 + 0xc)));
        pfVar8 = ((float *)GEN_TOP((param_3 + 4)));
        do {
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + local_8))) * fVar6;
          }
          pfVar9[-3] = *((float *)GEN_TOP(((int)pfVar8 + *param_1 - param_3 - 4))) * (fVar10 * fVar1) +
                       pfVar9[-3];
          if (param_3 != 0) {
            pfVar8[-1] = fVar10 * fVar1 + pfVar8[-1];
          }
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + 1 + local_8))) * fVar6;
          }
          *((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar8))) =
               *((float *)GEN_TOP(((int)pfVar8 + *param_1 - param_3))) * (fVar10 * fVar1) +
               *((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar8)));
          if (param_3 != 0) {
            *pfVar8 = fVar10 * fVar1 + *pfVar8;
          }
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + 2 + local_8))) * fVar6;
          }
          pfVar9[-1] = *((float *)GEN_TOP(((int)pfVar8 + *param_1 + (4 - param_3)))) * (fVar10 * fVar1) +
                       pfVar9[-1];
          if (param_3 != 0) {
            pfVar8[1] = pfVar8[1] + fVar10 * fVar1;
          }
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + 3 + local_8))) * fVar6;
          }
          *pfVar9 = *((float *)GEN_TOP(((int)pfVar8 + *param_1 + (8 - param_3)))) * (fVar10 * fVar1) + *pfVar9;
          if (param_3 != 0) {
            pfVar8[2] = pfVar8[2] + fVar10 * fVar1;
          }
          iVar7 = local_8 + 4;
          pfVar8 = pfVar8 + 4;
          pfVar9 = pfVar9 + 4;
          local_8 = iVar7;
        } while (iVar7 <= iVar3 - 3);
      }
      if (iVar7 <= iVar3) {
        pfVar9 = ((float *)GEN_TOP((param_3 + iVar7 * 4)));
        do {
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + iVar7))) * fVar6;
          }
          *((float *)GEN_TOP(((int)pfVar9 + (param_2 - param_3)))) =
               *((float *)GEN_TOP((*param_1 + iVar7 * 4))) * (fVar10 * fVar1) +
               *((float *)GEN_TOP(((int)pfVar9 + (param_2 - param_3))));
          if (param_3 != 0) {
            *pfVar9 = fVar10 * fVar1 + *pfVar9;
          }
          iVar7 = iVar7 + 1;
          pfVar9 = pfVar9 + 1;
        } while (iVar7 <= iVar3);
      }
    }
  }
  else {
    iVar7 = 0;
    if (-1 < iVar3) {
      if (3 < iVar3 + 1) {
        do {
          uVar2 = *((ushort *)GEN_TOP((param_1[5] + iVar7 * 2)));
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + iVar7))) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *((float *)GEN_TOP((iVar4 + param_2))) =
                 *((float *)GEN_TOP((*param_1 + iVar7 * 4))) * (fVar10 * fVar1) + *((float *)GEN_TOP((iVar4 + param_2)));
            *((float *)GEN_TOP((iVar4 + param_3))) = *((float *)GEN_TOP((iVar4 + param_3))) + fVar10 * fVar1;
          }
          uVar2 = *((ushort *)GEN_TOP((param_1[5] + 2 + iVar7 * 2)));
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + 1 + iVar7))) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *((float *)GEN_TOP((iVar4 + param_2))) =
                 *((float *)GEN_TOP((*param_1 + 4 + iVar7 * 4))) * (fVar10 * fVar1) +
                 *((float *)GEN_TOP((iVar4 + param_2)));
            *((float *)GEN_TOP((iVar4 + param_3))) = *((float *)GEN_TOP((iVar4 + param_3))) + fVar10 * fVar1;
          }
          uVar2 = *((ushort *)GEN_TOP((param_1[5] + 4 + iVar7 * 2)));
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + 2 + iVar7))) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *((float *)GEN_TOP((iVar4 + param_2))) =
                 *((float *)GEN_TOP((*param_1 + 8 + iVar7 * 4))) * (fVar10 * fVar1) +
                 *((float *)GEN_TOP((iVar4 + param_2)));
            *((float *)GEN_TOP((iVar4 + param_3))) = *((float *)GEN_TOP((iVar4 + param_3))) + fVar10 * fVar1;
          }
          uVar2 = *((ushort *)GEN_TOP((param_1[5] + 6 + iVar7 * 2)));
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + 3 + iVar7))) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *((float *)GEN_TOP((iVar4 + param_2))) =
                 *((float *)GEN_TOP((*param_1 + 0xc + iVar7 * 4))) * (fVar10 * fVar1) +
                 *((float *)GEN_TOP((iVar4 + param_2)));
            *((float *)GEN_TOP((iVar4 + param_3))) = *((float *)GEN_TOP((iVar4 + param_3))) + fVar10 * fVar1;
          }
          iVar7 = iVar7 + 4;
        } while (iVar7 <= iVar3 - 3);
      }
      if (iVar7 <= iVar3) {
        do {
          uVar2 = *((ushort *)GEN_TOP((param_1[5] + iVar7 * 2)));
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*((byte *)GEN_TOP((param_1[4] + iVar7))) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *((float *)GEN_TOP((iVar4 + param_2))) =
                 *((float *)GEN_TOP((*param_1 + iVar7 * 4))) * (fVar10 * fVar1) + *((float *)GEN_TOP((iVar4 + param_2)));
            *((float *)GEN_TOP((iVar4 + param_3))) = *((float *)GEN_TOP((iVar4 + param_3))) + fVar10 * fVar1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar3);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d83760 */
GEN_LIB GEN_FRAME uint F_00d83760(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd83760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  short sVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (param_1 == 0) {
    uVar2 = param_3 - 1;
    if ((int)(param_4 - 1) < (int)uVar2) {
      return param_4 - 1;
    }
  }
  else {
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      sVar1 = *((short *)GEN_TOP((param_1 + uVar2 * 2)));
      if ((-1 < sVar1) && ((uint)(int)sVar1 < param_3)) {
        if (param_2 == 0) {
          return uVar2;
        }
        if (*((char *)GEN_TOP((uVar2 + param_2))) != '\0') {
          return uVar2;
        }
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_00d837c0 */
GEN_LIB GEN_FRAME unsigned int F_00d837c0(GEN_P(float param_1, float gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd837c0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float * pfVar1;
  int iVar2;
  
  pfVar1 = param_2;
  iVar2 = param_3;
  if (0 < param_3) {
    do {
      *pfVar1 = *pfVar1 * param_1;
      pfVar1[1] = pfVar1[1] * param_1;
      pfVar1[2] = pfVar1[2] * param_1;
      pfVar1[3] = pfVar1[3] * param_1;
      pfVar1 = pfVar1 + 0xc;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d837f0 */
GEN_LIB GEN_FRAME unsigned int F_00d837f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd837f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  param_4 = param_4 * 3;
  if (0 < (int)param_4) {
    puVar5 = ((undefined4 *)GEN_TOP((param_3 + 0xc)));
    puVar4 = ((undefined4 *)GEN_TOP((param_1 + 8)));
    do {
      uVar1 = puVar5[-2];
      uVar2 = *((undefined4 *)GEN_TOP(((param_3 - param_1) + (int)puVar4)));
      uVar3 = *puVar5;
      puVar4[-2] = puVar5[-3];
      puVar4[-1] = uVar1;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  param_4 = param_6 + 3U >> 2;
  if (param_4 != 0) {
    puVar5 = ((undefined4 *)GEN_TOP((param_5 + 0xc)));
    puVar4 = ((undefined4 *)GEN_TOP((param_2 + 8)));
    do {
      uVar1 = puVar5[-2];
      uVar2 = *((undefined4 *)GEN_TOP(((param_5 - param_2) + (int)puVar4)));
      uVar3 = *puVar5;
      puVar4[-2] = puVar5[-3];
      puVar4[-1] = uVar1;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return 0;
}

/* ref: FUN_00d83890 */
GEN_LIB GEN_FRAME uint F_00d83890(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd83890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  ushort uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int * piVar9;
  LPVOID pvVar10;
  float * pfVar11;
  LPVOID pvVar12;
  float * pfVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  uint uVar29;
  
  piVar9 = param_1;
  pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar10 + 4)));
  if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar10 + 0xc)))) {
    *puVar2 = ((char *)REFP(0x1137f50));
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar10 + 4))) = puVar2 + 3;
  }
  fVar8 = REFG(float, 0x10addc0);
  fVar21 = REFG(float, 0x1087f04);
  iVar3 = param_1[1];
  iVar14 = 0;
  if (param_1[5] == 0) {
    if (-1 < iVar3) {
      pfVar11 = ((float *)GEN_TOP((param_2 + 0x10)));
      do {
        fVar21 = REFG(float, 0x1087f04);
        if (param_1[4] != 0) {
          fVar21 = (float)*((byte *)GEN_TOP((param_1[4] + iVar14))) * fVar8;
        }
        fVar21 = fVar21 * gen_bits2f(param_1[3]);
        pfVar13 = ((float *)GEN_TOP(((int)pfVar11 + *param_1 + (-0x10 - param_2))));
        fVar20 = pfVar13[1];
        fVar5 = pfVar13[2];
        fVar6 = pfVar13[3];
        pfVar11[-4] = *pfVar13 * fVar21 + pfVar11[-4];
        pfVar11[-3] = fVar20 * fVar21 + pfVar11[-3];
        pfVar11[-2] = fVar5 * fVar21 + pfVar11[-2];
        pfVar11[-1] = fVar6 * fVar21 + pfVar11[-1];
        fVar20 = pfVar13[9];
        fVar5 = pfVar13[10];
        fVar6 = pfVar13[0xb];
        pfVar11[4] = pfVar13[8] * fVar21 + pfVar11[4];
        pfVar11[5] = fVar20 * fVar21 + pfVar11[5];
        pfVar11[6] = fVar5 * fVar21 + pfVar11[6];
        pfVar11[7] = fVar6 * fVar21 + pfVar11[7];
        fVar20 = pfVar13[4];
        fVar5 = pfVar13[5];
        fVar6 = pfVar13[6];
        fVar7 = pfVar13[7];
        fVar23 = pfVar11[2] * fVar6 + *pfVar11 * fVar20;
        fVar22 = pfVar11[3] * fVar7 + pfVar11[1] * fVar5;
        fVar24 = *pfVar11 * fVar20 + pfVar11[2] * fVar6;
        fVar26 = pfVar11[1] * fVar5 + pfVar11[3] * fVar7;
        uVar16 = -(uint)(fVar22 + fVar23 < 0.0);
        uVar17 = -(uint)(fVar23 + fVar22 < 0.0);
        uVar18 = -(uint)(fVar26 + fVar24 < 0.0);
        uVar19 = -(uint)(fVar24 + fVar26 < 0.0);
        uVar25 = (uint)gen_fl2bits(fVar5) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
        uVar27 = (uint)gen_fl2bits(fVar6) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
        uVar29 = (uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
        *pfVar11 = gen_bits2f(((uint)gen_fl2bits(fVar20) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar16 |
                              ~uVar16 & (uint)gen_fl2bits(fVar20)) * fVar21 + *pfVar11;
        pfVar11[1] = gen_bits2f(uVar25 & uVar17 | ~uVar17 & (uint)gen_fl2bits(fVar5)) * fVar21 +
                     pfVar11[1];
        pfVar11[2] = gen_bits2f(uVar27 & uVar18 | ~uVar18 & (uint)gen_fl2bits(fVar6)) * fVar21 +
                     pfVar11[2];
        pfVar11[3] = gen_bits2f(uVar29 & uVar19 | ~uVar19 & (uint)gen_fl2bits(fVar7)) * fVar21 +
                     pfVar11[3];
        if (param_3 != 0) {
          *((float *)GEN_TOP((param_3 + iVar14 * 4))) = *((float *)GEN_TOP((param_3 + iVar14 * 4))) + fVar21;
        }
        iVar14 = iVar14 + 1;
        pfVar11 = pfVar11 + 0xc;
      } while (iVar14 <= iVar3);
    }
  }
  else {
    iVar14 = 0;
    if (-1 < iVar3) {
      param_1 = ((int *)GEN_TOP(0x0));
      do {
        uVar1 = *((ushort *)GEN_TOP((piVar9[5] + iVar14 * 2)));
        if ((-1 < (short)uVar1) && ((int)(uint)uVar1 < piVar9[2])) {
          fVar20 = fVar21;
          if (piVar9[4] != 0) {
            fVar20 = (float)*((byte *)GEN_TOP((piVar9[4] + iVar14))) * fVar8;
          }
          pfVar13 = ((float *)GEN_TOP((*piVar9 + (int)param_1)));
          fVar20 = fVar20 * gen_bits2f(piVar9[3]);
          iVar15 = (int)(short)uVar1;
          pfVar11 = ((float *)GEN_TOP((iVar15 * 0x30 + param_2)));
          fVar5 = pfVar13[1];
          fVar6 = pfVar13[2];
          fVar7 = pfVar13[3];
          *pfVar11 = fVar20 * *pfVar13 + *pfVar11;
          pfVar11[1] = fVar20 * fVar5 + pfVar11[1];
          pfVar11[2] = fVar20 * fVar6 + pfVar11[2];
          pfVar11[3] = fVar20 * fVar7 + pfVar11[3];
          fVar5 = pfVar13[9];
          fVar6 = pfVar13[10];
          fVar7 = pfVar13[0xb];
          pfVar11[8] = pfVar13[8] * fVar20 + pfVar11[8];
          pfVar11[9] = fVar5 * fVar20 + pfVar11[9];
          pfVar11[10] = fVar6 * fVar20 + pfVar11[10];
          pfVar11[0xb] = fVar7 * fVar20 + pfVar11[0xb];
          fVar5 = pfVar13[4];
          fVar6 = pfVar13[5];
          fVar7 = pfVar13[6];
          fVar23 = pfVar13[7];
          fVar22 = fVar7 * pfVar11[6] + fVar5 * pfVar11[4];
          fVar24 = fVar23 * pfVar11[7] + fVar6 * pfVar11[5];
          fVar26 = fVar5 * pfVar11[4] + fVar7 * pfVar11[6];
          fVar28 = fVar6 * pfVar11[5] + fVar23 * pfVar11[7];
          uVar16 = -(uint)(fVar24 + fVar22 < 0.0);
          uVar17 = -(uint)(fVar22 + fVar24 < 0.0);
          uVar18 = -(uint)(fVar28 + fVar26 < 0.0);
          uVar19 = -(uint)(fVar26 + fVar28 < 0.0);
          uVar25 = (uint)gen_fl2bits(fVar6) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
          uVar27 = (uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
          uVar29 = (uint)gen_fl2bits(fVar23) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
          pfVar11[4] = gen_bits2f(((uint)gen_fl2bits(fVar5) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar16 |
                                  ~uVar16 & (uint)gen_fl2bits(fVar5)) * fVar20 + pfVar11[4];
          pfVar11[5] = gen_bits2f(uVar25 & uVar17 | ~uVar17 & (uint)gen_fl2bits(fVar6)) * fVar20 +
                       pfVar11[5];
          pfVar11[6] = gen_bits2f(uVar27 & uVar18 | ~uVar18 & (uint)gen_fl2bits(fVar7)) * fVar20 +
                       pfVar11[6];
          pfVar11[7] = gen_bits2f(uVar29 & uVar19 | ~uVar19 & (uint)gen_fl2bits(fVar23)) * fVar20 +
                       pfVar11[7];
          *((float *)GEN_TOP((param_3 + iVar15 * 4))) = *((float *)GEN_TOP((param_3 + iVar15 * 4))) + fVar20;
        }
        param_1 = ((int *)GEN_TOP(((int)param_1 + 0x30)));
        iVar14 = iVar14 + 1;
      } while (iVar14 <= iVar3);
    }
  }
  pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar12 + 4)));
  pvVar10 = pvVar12;
  if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar12 + 0xc)))) {
    *puVar2 = &REFG(undefined, 0x1136cb0);
    uVar4 = rdtsc();
    pvVar10 = (LPVOID)uVar4;
    puVar2[1] = pvVar10;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar12 + 4))) = puVar2 + 3;
  }
  return (uint)pvVar10;
}

/* ref: FUN_00d83af0 */
GEN_LIB GEN_FRAME unsigned int F_00d83af0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd83af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  F_00d837f0(param_1,param_2,*((undefined4 *)GEN_TOP((param_3 + 0x24))),*((undefined4 *)GEN_TOP((param_3 + 0x1c))),
               *((undefined4 *)GEN_TOP((param_3 + 0x30))),*((undefined4 *)GEN_TOP((param_3 + 0x40))));
  return;
}

/* ref: FUN_00d83b20 */
GEN_LIB GEN_NOFRAME uint F_00d83b20(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd83b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ushort uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  LPVOID pvVar6;
  float * pfVar7;
  LPVOID pvVar8;
  float * pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  undefined1 auVar36 [16];
  float fVar38;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4)));
  if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 0xc)))) {
    *puVar2 = ((char *)REFP(0x1137f60));
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar6 + 4))) = puVar2 + 3;
  }
  iVar3 = param_1[1];
  uVar10 = 0;
  if (param_1[5] == 0) {
    if (-1 < iVar3) {
      pfVar7 = ((float *)GEN_TOP((param_2 + 0x10)));
      do {
        if ((-1 < (int)uVar10) && ((int)(uVar10 & 0xffff) < param_1[2])) {
          fVar16 = REFG(float, 0x1087f04);
          if (param_1[4] != 0) {
            fVar16 = (float)*((byte *)GEN_TOP((param_1[4] + uVar10))) * REFG(float, 0x10addc0);
          }
          fVar18 = pfVar7[-4];
          fVar19 = pfVar7[-3];
          fVar20 = pfVar7[-2];
          fVar21 = pfVar7[-1];
          pfVar9 = ((float *)GEN_TOP(((int)pfVar7 + (-0x10 - param_2) + *param_1 + 0x10)));
          fVar24 = *pfVar9;
          fVar27 = pfVar9[1];
          fVar29 = pfVar9[2];
          fVar17 = pfVar9[3];
          pfVar9 = ((float *)GEN_TOP(((int)pfVar7 + (-0x10 - param_2) + *param_1)));
          fVar23 = fVar24 * fVar18;
          fVar26 = fVar27 * fVar19;
          fVar31 = fVar29 * fVar20;
          fVar22 = pfVar7[3];
          fVar38 = (((fVar26 + fVar23) + fVar31) * fVar24 +
                   (fVar17 * fVar17 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                   fVar18) + (fVar27 * fVar20 - fVar29 * fVar19) * fVar17;
          fVar25 = (((fVar26 + fVar23) + fVar31) * fVar27 +
                   (fVar17 * fVar17 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                   fVar19) + (fVar29 * fVar18 - fVar24 * fVar20) * fVar17;
          fVar28 = (((fVar26 + fVar23) + fVar31) * fVar29 +
                   (fVar17 * fVar17 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                   fVar20) + (fVar24 * fVar19 - fVar27 * fVar18) * fVar17;
          fVar30 = (((fVar26 + fVar23) + fVar31) * fVar17 +
                   (fVar17 * fVar17 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                   fVar21) + (fVar17 * fVar21 - fVar17 * fVar21) * fVar17;
          local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar9 + 4));
          fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar9 + 4) >> 0x20));
          fStack_38 = gen_bits2f((uint)*(undefined8 *)(pfVar9 + 6));
          local_30 = gen_bits2f((uint)*(undefined8 *)pfVar7);
          fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)pfVar7) >> 0x20));
          fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar7 + 2));
          fVar31 = ((fStack_3c * fStack_28 - fStack_38 * fStack_2c) + local_30 * fVar17) +
                   local_40 * fVar22;
          fVar32 = ((fStack_38 * local_30 - local_40 * fStack_28) + fStack_2c * fVar17) +
                   fStack_3c * fVar22;
          fVar33 = ((local_40 * fStack_2c - fStack_3c * local_30) + fStack_28 * fVar17) +
                   fStack_38 * fVar22;
          fVar37 = fVar22 * fVar17 -
                   ((fStack_3c * fStack_2c + local_40 * local_30) + fStack_38 * fStack_28);
          fVar18 = pfVar7[4];
          fVar19 = pfVar7[5];
          fVar20 = pfVar7[6];
          fVar21 = pfVar7[7];
          fVar24 = *pfVar9;
          fVar27 = pfVar9[1];
          fVar29 = pfVar9[2];
          fVar17 = pfVar9[3];
          fVar16 = fVar16 * gen_bits2f(param_1[3]);
          fVar22 = pfVar9[9];
          fVar23 = pfVar9[10];
          fVar26 = pfVar9[0xb];
          pfVar7[4] = (pfVar9[8] * fVar18 - fVar18) * fVar16 + fVar18;
          pfVar7[5] = (fVar22 * fVar19 - fVar19) * fVar16 + fVar19;
          pfVar7[6] = (fVar23 * fVar20 - fVar20) * fVar16 + fVar20;
          pfVar7[7] = (fVar26 * fVar21 - fVar21) * fVar16 + fVar21;
          pfVar7[-4] = (((fVar38 + fVar38) + fVar24) - pfVar7[-4]) * fVar16 + pfVar7[-4];
          pfVar7[-3] = (((fVar25 + fVar25) + fVar27) - pfVar7[-3]) * fVar16 + pfVar7[-3];
          pfVar7[-2] = (((fVar28 + fVar28) + fVar29) - pfVar7[-2]) * fVar16 + pfVar7[-2];
          pfVar7[-1] = (((fVar30 + fVar30) + fVar17) - pfVar7[-1]) * fVar16 + pfVar7[-1];
          fVar18 = *pfVar7 * fVar31;
          fVar19 = pfVar7[1] * fVar32;
          fVar20 = pfVar7[2] * fVar33;
          fVar21 = pfVar7[3] * fVar37;
          (*(float *)((char *)&auVar36 + 0)) = fVar20 + fVar18;
          (*(float *)((char *)&auVar36 + 4)) = fVar21 + fVar19;
          (*(float *)((char *)&auVar36 + 8)) = fVar18 + fVar20;
          (*(float *)((char *)&auVar36 + 12)) = fVar19 + fVar21;
          uVar12 = -(uint)((*(float *)((char *)&auVar36 + 4)) + (*(float *)((char *)&auVar36 + 0)) < 0.0);
          uVar13 = -(uint)((*(float *)((char *)&auVar36 + 0)) + (*(float *)((char *)&auVar36 + 4)) < 0.0);
          uVar14 = -(uint)((*(float *)((char *)&auVar36 + 12)) + (*(float *)((char *)&auVar36 + 8)) < 0.0);
          uVar15 = -(uint)((*(float *)((char *)&auVar36 + 8)) + (*(float *)((char *)&auVar36 + 12)) < 0.0);
          fVar18 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar12 |
                              ~uVar12 & (uint)gen_fl2bits(fVar16)) * fVar31 +
                   (*(float *)&REFG(undefined, 0x1138af0) - fVar16) * *pfVar7;
          fVar19 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar13 |
                              ~uVar13 & (uint)gen_fl2bits(fVar16)) * fVar32 +
                   (*(float *)&REFG(undefined, 0x1138af4) - fVar16) * pfVar7[1];
          fVar20 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar14 |
                              ~uVar14 & (uint)gen_fl2bits(fVar16)) * fVar33 +
                   (*(float *)&REFG(undefined, 0x1138af8) - fVar16) * pfVar7[2];
          fVar16 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar15 |
                              ~uVar15 & (uint)gen_fl2bits(fVar16)) * fVar37 +
                   (*(float *)&REFG(undefined, 0x1138afc) - fVar16) * pfVar7[3];
          fVar21 = fVar20 * fVar20 + fVar18 * fVar18;
          fVar24 = fVar16 * fVar16 + fVar19 * fVar19;
          fVar27 = fVar18 * fVar18 + fVar20 * fVar20;
          fVar29 = fVar19 * fVar19 + fVar16 * fVar16;
          fVar17 = fVar24 + fVar21;
          fVar21 = fVar21 + fVar24;
          fVar24 = fVar29 + fVar27;
          fVar27 = fVar27 + fVar29;
          (*(undefined4 *)((char *)&auVar35 + 4)) = (undefined4)gen_fl2bits(fVar21);
          (*(undefined4 *)((char *)&auVar35 + 0)) = (undefined4)gen_fl2bits(fVar17);
          (*(undefined4 *)((char *)&auVar35 + 8)) = (undefined4)gen_fl2bits(fVar24);
          (*(undefined4 *)((char *)&auVar35 + 12)) = (undefined4)gen_fl2bits(fVar27);
          gen_rsqrtps(&(auVar35), &(auVar36), &(auVar35));
          fVar26 = (*(float *)((char *)&auVar35 + 0));
          fVar29 = (*(float *)((char *)&auVar35 + 4));
          fVar22 = (*(float *)((char *)&auVar35 + 8));
          fVar23 = (*(float *)((char *)&auVar35 + 12));
          fVar21 = *(float *)&REFG(undefined, 0x1137f34) - (fVar29 * fVar21) * fVar29;
          fVar24 = *(float *)&REFG(undefined, 0x1137f38) - (fVar22 * fVar24) * fVar22;
          fVar27 = *(float *)&REFG(undefined, 0x1137f3c) - (fVar23 * fVar27) * fVar23;
          fVar29 = *(float *)&REFG(undefined, 0x1137f44) * fVar29;
          fVar22 = *(float *)&REFG(undefined, 0x1137f48) * fVar22;
          fVar23 = *(float *)&REFG(undefined, 0x1137f4c) * fVar23;
          *pfVar7 = ((*(float *)&REFG(undefined, 0x1137f30) - (fVar26 * fVar17) * fVar26) *
                    (*(float *)&REFG(undefined, 0x1137f40) * fVar26)) * fVar18;
          pfVar7[1] = (fVar21 * fVar29) * fVar19;
          pfVar7[2] = (fVar24 * fVar22) * fVar20;
          pfVar7[3] = (fVar27 * fVar23) * fVar16;
        }
        uVar10 = uVar10 + 1;
        pfVar7 = pfVar7 + 0xc;
      } while ((int)uVar10 <= iVar3);
    }
  }
  else if (-1 < iVar3) {
    iVar11 = 0;
    do {
      uVar1 = *((ushort *)GEN_TOP((param_1[5] + uVar10 * 2)));
      if ((-1 < (short)uVar1) && ((int)(uint)uVar1 < param_1[2])) {
        fVar16 = REFG(float, 0x1087f04);
        if (param_1[4] != 0) {
          fVar16 = (float)*((byte *)GEN_TOP((param_1[4] + uVar10))) * REFG(float, 0x10addc0);
        }
        pfVar7 = ((float *)GEN_TOP((*param_1 + 0x10 + iVar11)));
        fVar18 = *pfVar7;
        fVar19 = pfVar7[1];
        fVar20 = pfVar7[2];
        fVar21 = pfVar7[3];
        pfVar7 = ((float *)GEN_TOP(((short)uVar1 * 0x30 + param_2)));
        fVar24 = *pfVar7;
        fVar27 = pfVar7[1];
        fVar29 = pfVar7[2];
        fVar17 = pfVar7[3];
        fVar22 = fVar24 * fVar18;
        fVar23 = fVar27 * fVar19;
        fVar26 = fVar29 * fVar20;
        pfVar9 = ((float *)GEN_TOP((*param_1 + iVar11)));
        fVar31 = (((fVar23 + fVar22) + fVar26) * fVar18 +
                 (fVar21 * fVar21 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                 fVar24) + (fVar29 * fVar19 - fVar27 * fVar20) * fVar21;
        fVar32 = (((fVar23 + fVar22) + fVar26) * fVar19 +
                 (fVar21 * fVar21 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                 fVar27) + (fVar24 * fVar20 - fVar29 * fVar18) * fVar21;
        fVar33 = (((fVar23 + fVar22) + fVar26) * fVar20 +
                 (fVar21 * fVar21 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                 fVar29) + (fVar27 * fVar18 - fVar24 * fVar19) * fVar21;
        fVar26 = (((fVar23 + fVar22) + fVar26) * fVar21 +
                 (fVar21 * fVar21 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                 fVar17) + (fVar17 * fVar21 - fVar17 * fVar21) * fVar21;
        fVar18 = pfVar7[7];
        local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar7 + 4));
        fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar7 + 4) >> 0x20));
        fStack_38 = gen_bits2f((uint)*(undefined8 *)(pfVar7 + 6));
        local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar9 + 4));
        fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar9 + 4) >> 0x20));
        fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar9 + 6));
        fVar19 = *pfVar9;
        fVar20 = pfVar9[1];
        fVar24 = pfVar9[2];
        fVar27 = pfVar9[3];
        fVar17 = ((fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar21) +
                 local_30 * fVar18;
        fVar22 = ((fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar21) +
                 fStack_2c * fVar18;
        fVar23 = ((local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar21) +
                 fStack_28 * fVar18;
        fVar16 = fVar16 * gen_bits2f(param_1[3]);
        fVar38 = fVar18 * fVar21 -
                 ((fStack_2c * fStack_3c + local_30 * local_40) + fStack_28 * fStack_38);
        fVar18 = pfVar9[9];
        fVar21 = pfVar9[10];
        fVar29 = pfVar9[0xb];
        pfVar7[8] = (pfVar9[8] * pfVar7[8] - pfVar7[8]) * fVar16 + pfVar7[8];
        pfVar7[9] = (fVar18 * pfVar7[9] - pfVar7[9]) * fVar16 + pfVar7[9];
        pfVar7[10] = (fVar21 * pfVar7[10] - pfVar7[10]) * fVar16 + pfVar7[10];
        pfVar7[0xb] = (fVar29 * pfVar7[0xb] - pfVar7[0xb]) * fVar16 + pfVar7[0xb];
        *pfVar7 = (((fVar31 + fVar31) + fVar19) - *pfVar7) * fVar16 + *pfVar7;
        pfVar7[1] = (((fVar32 + fVar32) + fVar20) - pfVar7[1]) * fVar16 + pfVar7[1];
        pfVar7[2] = (((fVar33 + fVar33) + fVar24) - pfVar7[2]) * fVar16 + pfVar7[2];
        pfVar7[3] = (((fVar26 + fVar26) + fVar27) - pfVar7[3]) * fVar16 + pfVar7[3];
        fVar18 = pfVar7[4] * fVar17;
        fVar19 = pfVar7[5] * fVar22;
        fVar20 = pfVar7[6] * fVar23;
        fVar21 = pfVar7[7] * fVar38;
        (*(float *)((char *)&auVar34 + 0)) = fVar20 + fVar18;
        (*(float *)((char *)&auVar34 + 4)) = fVar21 + fVar19;
        (*(float *)((char *)&auVar34 + 8)) = fVar18 + fVar20;
        (*(float *)((char *)&auVar34 + 12)) = fVar19 + fVar21;
        uVar12 = -(uint)((*(float *)((char *)&auVar34 + 4)) + (*(float *)((char *)&auVar34 + 0)) < 0.0);
        uVar13 = -(uint)((*(float *)((char *)&auVar34 + 0)) + (*(float *)((char *)&auVar34 + 4)) < 0.0);
        uVar14 = -(uint)((*(float *)((char *)&auVar34 + 12)) + (*(float *)((char *)&auVar34 + 8)) < 0.0);
        uVar15 = -(uint)((*(float *)((char *)&auVar34 + 8)) + (*(float *)((char *)&auVar34 + 12)) < 0.0);
        fVar18 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar12 |
                            ~uVar12 & (uint)gen_fl2bits(fVar16)) * fVar17 +
                 (*(float *)&REFG(undefined, 0x1138af0) - fVar16) * pfVar7[4];
        fVar19 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar13 |
                            ~uVar13 & (uint)gen_fl2bits(fVar16)) * fVar22 +
                 (*(float *)&REFG(undefined, 0x1138af4) - fVar16) * pfVar7[5];
        fVar20 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar14 |
                            ~uVar14 & (uint)gen_fl2bits(fVar16)) * fVar23 +
                 (*(float *)&REFG(undefined, 0x1138af8) - fVar16) * pfVar7[6];
        fVar16 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar15 |
                            ~uVar15 & (uint)gen_fl2bits(fVar16)) * fVar38 +
                 (*(float *)&REFG(undefined, 0x1138afc) - fVar16) * pfVar7[7];
        fVar21 = fVar20 * fVar20 + fVar18 * fVar18;
        fVar24 = fVar16 * fVar16 + fVar19 * fVar19;
        fVar27 = fVar18 * fVar18 + fVar20 * fVar20;
        fVar29 = fVar19 * fVar19 + fVar16 * fVar16;
        fVar17 = fVar24 + fVar21;
        fVar21 = fVar21 + fVar24;
        fVar24 = fVar29 + fVar27;
        fVar27 = fVar27 + fVar29;
        (*(undefined4 *)((char *)&auVar5 + 4)) = (undefined4)gen_fl2bits(fVar21);
        (*(undefined4 *)((char *)&auVar5 + 0)) = (undefined4)gen_fl2bits(fVar17);
        (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(fVar24);
        (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(fVar27);
        gen_rsqrtps(&(auVar35), &(auVar34), &(auVar5));
        fVar26 = (*(float *)((char *)&auVar35 + 0));
        fVar29 = (*(float *)((char *)&auVar35 + 4));
        fVar22 = (*(float *)((char *)&auVar35 + 8));
        fVar23 = (*(float *)((char *)&auVar35 + 12));
        fVar21 = *(float *)&REFG(undefined, 0x1137f34) - (fVar29 * fVar21) * fVar29;
        fVar24 = *(float *)&REFG(undefined, 0x1137f38) - (fVar22 * fVar24) * fVar22;
        fVar27 = *(float *)&REFG(undefined, 0x1137f3c) - (fVar23 * fVar27) * fVar23;
        fVar29 = *(float *)&REFG(undefined, 0x1137f44) * fVar29;
        fVar22 = *(float *)&REFG(undefined, 0x1137f48) * fVar22;
        fVar23 = *(float *)&REFG(undefined, 0x1137f4c) * fVar23;
        pfVar7[4] = ((*(float *)&REFG(undefined, 0x1137f30) - (fVar26 * fVar17) * fVar26) *
                    (*(float *)&REFG(undefined, 0x1137f40) * fVar26)) * fVar18;
        pfVar7[5] = (fVar21 * fVar29) * fVar19;
        pfVar7[6] = (fVar24 * fVar22) * fVar20;
        pfVar7[7] = (fVar27 * fVar23) * fVar16;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 0x30;
    } while ((int)uVar10 <= iVar3);
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar8 + 4)));
  pvVar6 = pvVar8;
  if (puVar2 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar8 + 0xc)))) {
    *puVar2 = &REFG(undefined, 0x1136cb0);
    uVar4 = rdtsc();
    pvVar6 = (LPVOID)uVar4;
    puVar2[1] = pvVar6;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar8 + 4))) = puVar2 + 3;
  }
  return (uint)pvVar6;
}

/* ref: FUN_00d84050 */
GEN_LIB GEN_FRAME uint F_00d84050(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd84050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_ARG);
  return (param_1[5] + 0xfU & 0xfffffff0) +
         (param_1[4] + 0xfU & 0xfffffff0) + uVar1 +
         (param_1[4] * 2 + 0xfU & 0xfffffff0) + (param_1[5] * 2 + 0xfU & 0xfffffff0);
}

/* ref: FUN_00d84090 */
GEN_LIB GEN_FRAME uint F_00d84090(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd84090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  *((int *)GEN_TOP((param_7 + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP((param_7 + 0x24))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x24)));
  *((undefined4 *)GEN_TOP((param_7 + 0x28))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  *((undefined4 *)GEN_TOP((param_7 + 0x2c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x1c)));
  *((undefined4 *)GEN_TOP((param_7 + 0x30))) = param_6;
  *((undefined4 *)GEN_TOP((param_7 + 0x34))) = param_2;
  *((undefined4 *)GEN_TOP((param_7 + 0x38))) = param_4;
  *((undefined4 *)GEN_TOP((param_7 + 0x48))) = param_3;
  *((undefined4 *)GEN_TOP((param_7 + 0x4c))) = param_5;
  return param_7;
}

/* ref: FUN_00d840e0 */
GEN_LIB GEN_FRAME uint F_00d840e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd840e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar3 = 0;
  iVar4 = 0;
  local_8 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar4 * 4)));
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x28))) + 0xc)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG);
      uVar3 = (*((int *)GEN_TOP((iVar1 + 0x14))) + 0xfU & 0xfffffff0) +
              (*((int *)GEN_TOP((iVar1 + 0x20))) + 0xfU & 0xfffffff0) + uVar3 +
              (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x28))) + 0x20))) * 2 + 0xfU & 0xfffffff0) +
              (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x28))) + 0x14))) * 2 + 0xfU & 0xfffffff0);
      if ((int)local_8 < (int)uVar3) {
        local_8 = uVar3;
      }
      iVar4 = iVar4 + 1;
      uVar3 = local_8;
    } while (iVar4 < *((int *)GEN_TOP((param_1 + 0x14))));
  }
  return uVar3;
}

/* ref: FUN_00d84160 */
GEN_LIB GEN_FRAME uint F_00d84160(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  *((undefined4 *)GEN_TOP((param_2 + 0x20))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),iVar1 * 0x1c);
  *((uint *)GEN_TOP((param_2 + 0x24))) = uVar3;
  uVar3 = F_00da3720(uVar3,0,*((int *)GEN_TOP((param_1 + 0x14))) * 0x1c);
  return uVar3;
}

/* ref: FUN_00d841c0 */
GEN_LIB GEN_FRAME uint F_00d841c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd841c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x24)));
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1);
  return uVar3;
}

/* ref: FUN_00d841f0 */
GEN_LIB GEN_FRAME uint F_00d841f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(char param_8, unsigned int gen_a7), GEN_P(char param_9, unsigned int gen_a8), GEN_P(float param_10, float gen_a9))
{
  GEN_ENTER(0xd841f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(char param_8 = (char)gen_a7;)
  GEN_PIN(char param_9 = (char)gen_a8;)
  GEN_PIN(float param_10 = (float)gen_a9;)
  undefined4 * puVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ushort * puVar7;
  int iVar8;
  
  iVar8 = param_1;
  *((undefined4 *)GEN_TOP((param_7 + 0x30))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x24)));
  *((undefined4 *)GEN_TOP((param_7 + 0x34))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x30)));
  *((undefined4 *)GEN_TOP((param_7 + 0x28))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x1c)));
  *((undefined4 *)GEN_TOP((param_7 + 0x2c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + 0x40)));
  *((undefined4 *)GEN_TOP((param_7 + 0x3c))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  *((undefined4 *)GEN_TOP((param_7 + 0x38))) = param_6;
  *((float *)GEN_TOP((param_7 + 0x40))) = param_10;
  *((undefined4 *)GEN_TOP((param_7 + 0x20))) = 0;
  param_1 = 0;
  *((uint *)GEN_TOP((param_7 + 0x44))) = (uint)(param_8 != '\0') | -(uint)(param_9 != '\0') & 2;
  if (0 < *((int *)GEN_TOP((iVar8 + 0x14)))) {
    do {
      iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 0x10))) + param_1 * 4)));
      fVar2 = *((float *)GEN_TOP((iVar5 + 0xc)));
      if ((GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0)) &&
         (iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0x28))) + 0xc))), *((int *)GEN_TOP((iVar6 + 8))) == 4)) {
        puVar7 = *((ushort * PTR32 *)GEN_TOP((iVar6 + 0x28)));
        puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_7 + 0x24))) + *((int *)GEN_TOP((param_7 + 0x20))) * 0x1c)));
        *puVar1 = puVar7;
        puVar1[1] = (uint)*puVar7;
        puVar1[2] = *((undefined4 *)GEN_TOP((iVar5 + 8)));
        uVar3 = *((undefined4 *)GEN_TOP((iVar5 + 0xc)));
        puVar1[6] = 0;
        puVar1[3] = uVar3;
        cVar4 = *((char *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0x28))) + 0x28)));
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = (uint)(cVar4 == '\x01');
        *((int *)GEN_TOP((param_7 + 0x20))) = *((int *)GEN_TOP((param_7 + 0x20))) + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < *((int *)GEN_TOP((iVar8 + 0x14))));
  }
  *((undefined4 *)GEN_TOP((param_7 + 0x50))) = param_2;
  *((undefined4 *)GEN_TOP((param_7 + 0x58))) = param_4;
  *((uint *)GEN_TOP((param_7 + 0x54))) = param_3;
  *((undefined4 *)GEN_TOP((param_7 + 0x5c))) = param_5;
  return param_3;
}

/* ref: FUN_00d842f0 */
GEN_LIB GEN_FRAME uint F_00d842f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd842f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),(param_1 + 3U & 0xfffffffc) * 4);
  return uVar2;
}

/* ref: FUN_00d84320 */
GEN_LIB GEN_FRAME uint F_00d84320(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd84320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: FUN_00d84350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d84350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd84350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort * puVar1;
  
  puVar1 = *((ushort * PTR32 *)GEN_TOP((param_1 + 0x28)));
  *(ushort * PTR32 *)this = puVar1;
  *((uint *)GEN_TOP(((int)this + 4))) = (uint)*puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00d84370 */
GEN_LIB GEN_FRAME uint F_00d84370(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd84370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1 * 0x1c);
  return uVar2;
}

/* ref: FUN_00d843a0 */
GEN_LIB GEN_FRAME uint F_00d843a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd843a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: FUN_00d843d0 */
GEN_LIB GEN_FRAME uint F_00d843d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd843d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1 * 4);
  return uVar2;
}

/* ref: FUN_00d84400 */
GEN_LIB GEN_FRAME uint F_00d84400(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd84400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: FUN_00d84450 */
GEN_LIB GEN_NOFRAME unsigned int F_00d84450(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd84450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d84460 */
GEN_LIB GEN_NOFRAME unsigned int F_00d84460(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd84460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d84470 */
GEN_LIB GEN_NOFRAME unsigned int F_00d84470(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd84470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d84480 */
GEN_LIB GEN_NOFRAME unsigned int F_00d84480(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd84480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d84490 */
GEN_LIB GEN_NOFRAME unsigned int F_00d84490(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd84490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d844a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d844a0(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd844a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d844b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d844b0(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd844b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d844c0 */
GEN_LIB GEN_FRAME unsigned int F_00d844c0(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd844c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if ((in_eax != ((undefined4 *)GEN_TOP(0x0))) && (puVar1 = param_3, 0 < in_ecx)) {
    for (; in_ecx != 0; in_ecx = in_ecx - 1) {
      *in_eax = *puVar1;
      puVar1 = puVar1 + 1;
      in_eax = in_eax + 1;
    }
  }
  return 0;
}

/* ref: FUN_00d84530 */
GEN_LIB GEN_NOFRAME unsigned int F_00d84530(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined4 * in_ecx, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xd84530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if ((in_edi != 0) && (0 < in_eax)) {
    puVar5 = ((undefined4 *)GEN_TOP((in_edi + 0x10)));
    iVar6 = (int)in_ecx - in_edi;
    do {
      uVar2 = in_ecx[1];
      uVar3 = in_ecx[2];
      uVar4 = in_ecx[3];
      puVar5[-4] = *in_ecx;
      puVar5[-3] = uVar2;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar4;
      puVar1 = ((undefined4 *)GEN_TOP((iVar6 + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = in_ecx[9];
      uVar3 = in_ecx[10];
      uVar4 = in_ecx[0xb];
      puVar5[4] = in_ecx[8];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      in_ecx = in_ecx + 0xc;
      puVar5 = puVar5 + 0xc;
      in_eax = in_eax - 1;
    } while (in_eax != 0);
  }
  return 0;
}

/* ref: FUN_00d84570 */
GEN_LIB GEN_FRAME uint F_00d84570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd84570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = (param_1 + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00d845c0 */
GEN_LIB GEN_FRAME uint F_00d845c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd845c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = (param_1 + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00d84610 */
GEN_LIB GEN_FRAME uint F_00d84610(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = (param_2 + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + in_esi == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != in_esi)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = in_esi;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,in_esi,uVar1);
  return uVar1;
}

/* ref: FUN_00d84660 */
GEN_LIB GEN_FRAME uint F_00d84660(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = (param_2 + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + in_edi == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != in_edi)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = in_edi;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,in_edi,uVar1);
  return uVar1;
}

/* ref: FUN_00d846b0 */
GEN_LIB GEN_NOFRAME uint F_00d846b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd846b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL(0x120, 0);
  longlong lVar1;
  ushort uVar2;
  undefined4 uVar3;
  float fVar4;
  ushort * puVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  uint uVar8;
  undefined4 * puVar9;
  float * pfVar10;
  LPVOID pvVar11;
  float * pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4)));
  if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc)))) {
    *puVar9 = ((char *)REFP(0x1137fd4));
    puVar9[3] = ((char *)REFP(0x1137fb8));
    uVar6 = rdtsc();
    (*(uint *)(gen_frame + 0xf4)) = (int)uVar6;
    puVar9[1] = (int)uVar6;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4))) = puVar9 + 4;
  }
  F_00d84450(*((undefined4 *)GEN_TOP((param_1 + 0x30))),((uint *)(gen_frame + 0x90)) + 4);
  F_00d84460(*((undefined4 *)GEN_TOP((param_1 + 0x34))),&(*(undefined4 * PTR32 *)(gen_frame + 0xa4)));
  F_00d84470(*((undefined4 *)GEN_TOP((param_1 + 0x38))),&(*(undefined4 *)(gen_frame + 0xac)));
  F_00d84480(*((undefined4 *)GEN_TOP((param_1 + 0x24))),&(*(int *)(gen_frame + 0xe0)));
  F_00d84470(*((undefined4 *)GEN_TOP((param_1 + 0x48))),((uint *)(gen_frame + 0x90)) + 2);
  F_00d84490(*((undefined4 *)GEN_TOP((param_1 + 0x4c))),&(*(undefined4 *)(gen_frame + 0xa8)));
  uVar8 = F_00d84570(*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  (*(uint *)(gen_frame + 0xfc)) = uVar8;
  uVar8 = F_00d845c0(*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  (*(uint *)(gen_frame + 0xdc)) = uVar8;
  puVar9 = ((undefined4 *)GEN_TOP(F_00d845c0(*((undefined4 *)GEN_TOP((param_1 + 0x28))))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc8)) = puVar9;
  puVar9 = ((undefined4 *)GEN_TOP(F_00d845c0(*((undefined4 *)GEN_TOP((param_1 + 0x2c))))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xd8)) = puVar9;
  uVar8 = F_00d84570(*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  (*(uint *)(gen_frame + 0xec)) = uVar8;
  uVar8 = F_00d845c0(*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  (*(uint *)(gen_frame + 0xf4)) = uVar8;
  uVar8 = F_00d845c0(*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  (*(uint *)(gen_frame + 0xd4)) = uVar8;
  uVar8 = F_00d845c0(*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  (*(uint *)(gen_frame + 0xcc)) = uVar8;
  iVar15 = 0;
  do {
    uVar8 = F_00d84570(*((undefined4 *)GEN_TOP((param_1 + 0x28))));
    *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x48)) + iVar15 + 0x34))) = uVar8;
    uVar8 = F_00d845c0(*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
    uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
    *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x90)) + iVar15))) = uVar8;
    uVar8 = F_00d845c0(uVar3);
    uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
    *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x48)) + iVar15 + 0x20))) = uVar8;
    uVar8 = F_00d845c0(uVar3);
    *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x48)) + iVar15 + 0x18))) = uVar8;
    iVar15 = iVar15 + 4;
  } while (iVar15 < 8);
  ((uint *)(gen_frame + 0x7c))[3] = *((int *)GEN_TOP((param_1 + 0x28))) + 3U & 0xfffffffc;
  iVar15 = *((int *)GEN_TOP((param_1 + 0x28))) * 3;
  ((uint *)(gen_frame + 0x7c))[2] = *((int *)GEN_TOP((param_1 + 0x2c))) + 3U & 0xfffffffc;
  if (0 < iVar15) {
    pfVar12 = ((float *)GEN_TOP((((uint *)(gen_frame + 0x90))[4] + 0xc)));
    pfVar10 = ((float *)GEN_TOP(((*(uint *)(gen_frame + 0xfc)) + 8)));
    (*(int *)(gen_frame + 0x100)) = iVar15;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = ((undefined4 *)GEN_TOP((((uint *)(gen_frame + 0x90))[4] - (*(uint *)(gen_frame + 0xfc)))));
    do {
      fVar19 = *((float *)GEN_TOP(((((uint *)(gen_frame + 0x90))[4] - (*(uint *)(gen_frame + 0xfc))) + (int)pfVar10)));
      (*(float *)(gen_frame + 0xd0)) = fVar19;
      fVar18 = *pfVar12;
      (*(float *)(gen_frame + 0xe4)) = fVar18;
      fVar4 = pfVar12[-3];
      pfVar10[-1] = pfVar12[-2];
      *pfVar10 = fVar19;
      pfVar10[-2] = fVar4;
      pfVar10[1] = fVar18;
      pfVar12 = pfVar12 + 4;
      pfVar10 = pfVar10 + 4;
      iVar15 = (*(int *)(gen_frame + 0x100)) - 1;
      (*(int *)(gen_frame + 0x100)) = iVar15;
    } while (iVar15 != 0);
  }
  iVar15 = *((int *)GEN_TOP((param_1 + 0x2c)));
  if (0 < iVar15) {
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xa4));
    do {
      *((undefined4 *)GEN_TOP((((*(uint *)(gen_frame + 0xdc)) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xa4))) + (int)puVar9))) = *puVar9;
      puVar9 = puVar9 + 1;
      iVar15 = iVar15 - 1;
    } while (iVar15 != 0);
  }
  iVar15 = *((int *)GEN_TOP((param_1 + 0x28)));
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xc8));
  if (-1 < iVar15 - 1) {
    for (; iVar15 != 0; iVar15 = iVar15 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  iVar15 = *((int *)GEN_TOP((param_1 + 0x2c)));
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xd8));
  if (-1 < iVar15 - 1) {
    for (; iVar15 != 0; iVar15 = iVar15 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  (*(float *)(gen_frame + 0xe4)) = 0.0;
  iVar15 = 1;
  (*(int *)(gen_frame + 0xf8)) = 2;
  (*(int *)(gen_frame + 0xf0)) = 0;
  (*(int *)(gen_frame + 0xe8)) = *((int *)GEN_TOP((param_1 + 0x20)));
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = puVar9;
  if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc)))) {
    *puVar9 = ((char *)REFP(0x1137f9c));
    uVar6 = rdtsc();
    (*(int *)(gen_frame + 0x100)) = (int)uVar6;
    puVar9[1] = (int)uVar6;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4))) = puVar9 + 3;
  }
  if (-2 < (*(int *)(gen_frame + 0xe8))) {
    (*(int *)(gen_frame + 0x100)) = -1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x108)) = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xe0)) + 0x14)));
    fVar19 = REFG(float, 0x1087f04);
    do {
      iVar14 = (*(int *)(gen_frame + 0x100));
      iVar13 = (*(int *)(gen_frame + 0x100)) + 1;
      ((uint *)(gen_frame + 0x7c))[4] = iVar13;
      if ((-1 < iVar13) && (iVar13 < (*(int *)(gen_frame + 0xe8)))) {
        F_00d844a0((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-5],((uint *)(gen_frame + 0x48)) + (*(int *)(gen_frame + 0xf0)) + 10);
        F_00d844b0((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-1],((uint *)(gen_frame + 0x48)) + (*(int *)(gen_frame + 0xf0)) + 3);
        F_00d844b0(*(*(undefined4 * PTR32 *)(gen_frame + 0x108)),((uint *)(gen_frame + 0x48)) + (*(int *)(gen_frame + 0xf0)));
      }
      if ((-1 < iVar14) && (iVar14 < (*(int *)(gen_frame + 0xe8)))) {
        puVar5 = ((ushort *)GEN_TOP(((uint *)(gen_frame + 0x48))[(int)((*(int *)(gen_frame + 0xf8)) + 10)]));
        iVar13 = puVar5[3] - 1;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)GEN_TOP(iVar13));
        fVar16 = (float10)iVar13;
        if (iVar13 < 0) {
          fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x104)) + 2)) = gen_x87_cw;
        uVar8 = puVar5[3] - 2;
        fVar16 = GEN_X87(fVar16 * (((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-10]))) / (float10)*(float *)(puVar5 + 4)));
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)GEN_TOP((gen_x87_cw | 0xc00)));
        (*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
        gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)));
        lVar1 = (longlong)TRUNC(fVar16);
        (*(ulonglong *)(gen_frame + 0xb8)) = lVar1;
        lVar1 = (*(ulonglong *)(gen_frame + 0xb8));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 0)) = gen_bits2f((uint)lVar1);
        gen_set_x87_cw((unsigned short)gen_x87_cw);
        if (uVar8 < (uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8)))) {
          (*(uint *)(gen_frame + 0x104)) = uVar8;
          (*(ulonglong *)(gen_frame + 0xb8)) = lVar1;
LAB_00d84a04: ;
          fVar18 = fVar19;
        }
        else {
          (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(*(ulonglong *)(gen_frame + 0xb8)))));
          fVar17 = (float10)(int)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8)));
          (*(uint *)(gen_frame + 0x104)) = (uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8)));
          if ((int)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))) < 0) {
            fVar17 = GEN_X87(fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110));
          }
          fVar16 = GEN_X87(fVar16 - fVar17);
          fVar18 = (float)fVar16;
          (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar18)));
          (*(ulonglong *)(gen_frame + 0xb8)) = CONCAT44((uint)gen_fl2bits(fVar18),(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
          if (fVar16 < (float10)0) {
            fVar18 = 0.0;
          }
          else if (fVar19 < fVar18) goto LAB_00d84a04;
        }
        uVar2 = puVar5[0xe];
        ((float *)(gen_frame + 0x24))[(int)((*(int *)(gen_frame + 0xf8)))] = fVar18;
        uVar8 = (uint)*puVar5;
        iVar13 = (*(uint *)(gen_frame + 0x104)) + 1;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)GEN_TOP(uVar8));
        (*(ulonglong *)(gen_frame + 0xb8)) = (ulonglong)CONCAT24(*puVar5,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
        F_00d844a0(uVar2 * (*(uint *)(gen_frame + 0x104)) + uVar8 + (*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xc],((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0xf8)) * 2 + 3);
        F_00d844a0((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xc] + iVar13 * (uint)uVar2 + uVar8,((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0xf8)) * 2 + 4);
        iVar14 = (*(int *)(gen_frame + 0x100));
      }
      if ((-1 < iVar14 - 1) && (iVar14 - 1 < (*(int *)(gen_frame + 0xe8)))) {
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4)));
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = pvVar7;
        (*(ulonglong *)(gen_frame + 0xb8)) = CONCAT44(pvVar7,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
        if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc)))) {
          *puVar9 = ((char *)REFP(0x1137f88));
          puVar9[3] = ((char *)REFP(0x1134e08));
          uVar6 = rdtsc();
          ((uint *)(gen_frame + 0x90))[3] = (int)uVar6;
          puVar9[1] = (int)uVar6;
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4))) = puVar9 + 4;
        }
        F_00d68da0(((uint *)(gen_frame + 0x48))[(int)(iVar15 + 10)],gen_bits2f((unsigned int)((undefined4)gen_fl2bits(((float *)(gen_frame + 0x24))[(int)(iVar15 * 2 + 3)]))),gen_bits2f((unsigned int)((undefined4)gen_fl2bits(((float *)(gen_frame + 0x24))[(int)(iVar15 * 2 + 4)]))),
                     *((undefined4 *)GEN_TOP((param_1 + 0x28))),*((undefined4 *)GEN_TOP((param_1 + 0x2c))),(*(uint *)(gen_frame + 0xec)),
                     (*(uint *)(gen_frame + 0xf4)),(*(uint *)(gen_frame + 0xd4)),(*(uint *)(gen_frame + 0xcc)),((uint *)(gen_frame + 0x90))[4],(*(undefined4 * PTR32 *)(gen_frame + 0xa4)),((uint *)(gen_frame + 0x7c))[0],((uint *)(gen_frame + 0x7c))[1],
                     ((uint *)(gen_frame + 0x90))[0],((uint *)(gen_frame + 0x90))[1],((float *)(gen_frame + 0x24))[(int)(iVar15)],*((byte *)GEN_TOP((param_1 + 0x44))) & 1,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x40)))));
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4)));
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = puVar9;
        (*(ulonglong *)(gen_frame + 0xb8)) = CONCAT44(puVar9,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
        if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc)))) {
          *puVar9 = ((char *)REFP(0x1137f80));
          uVar6 = rdtsc();
          (*(int *)(gen_frame + 0xe0)) = (int)uVar6;
          puVar9[1] = (int)uVar6;
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4))) = puVar9 + 3;
        }
        fVar19 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0x10]) + (*(float *)(gen_frame + 0xe4));
        (*(float *)(gen_frame + 0xe4)) = fVar19;
        if (GEN_ISNAN(fVar19) == (GEN_ISNAN(fVar19) || fVar19 == 0.0)) {
          (*(float *)(gen_frame + 0xd0)) = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0x10]) / fVar19;
        }
        else {
          (*(float *)(gen_frame + 0xd0)) = 0.0;
        }
        if ((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x108)) - 0xd) & 4) != 0) {
          if ((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x108)) - 0xd) & 3) == 0) {
            F_00d86a60((*(uint *)(gen_frame + 0xec)),(*(undefined4 *)(gen_frame + 0xac)),(*(undefined4 *)(gen_frame + 0xa8)),((uint *)(gen_frame + 0x90))[2],*((undefined4 *)GEN_TOP((param_1 + 0x28))));
          }
          else {
            F_00d86c30((*(uint *)(gen_frame + 0xec)),(*(undefined4 *)(gen_frame + 0xac)),(*(undefined4 *)(gen_frame + 0xa8)),((uint *)(gen_frame + 0x90))[2],*((undefined4 *)GEN_TOP((param_1 + 0x28))));
          }
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xf] != 0) {
          F_00d48570((*(uint *)(gen_frame + 0xd4)),(*(uint *)(gen_frame + 0xd4)),((uint *)(gen_frame + 0x48))[(int)(iVar15 + 3)],((uint *)(gen_frame + 0x7c))[3]);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xe] != 0) {
          F_00d48570((*(uint *)(gen_frame + 0xcc)),(*(uint *)(gen_frame + 0xcc)),((uint *)(gen_frame + 0x48))[(int)(iVar15)],((uint *)(gen_frame + 0x7c))[2]);
        }
        if (((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xd] & 1) == 0) {
          (*(uint *)(gen_frame + 0x104)) = -(uint)(((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xd] & 2) != 0);
        }
        else {
          (*(uint *)(gen_frame + 0x104)) = 1;
        }
        uVar8 = *((uint *)GEN_TOP((param_1 + 0x44)));
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x28)));
        (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 0)) = (*(float *)(gen_frame + 0xd0));
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((*(float *)(gen_frame + 0xd0)))));
        (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xd0));
        F_00d49f20((*(uint *)(gen_frame + 0xfc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc8)),(*(uint *)(gen_frame + 0xfc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc8)),(*(uint *)(gen_frame + 0xec)),(*(uint *)(gen_frame + 0xd4)),&(*(float *)(gen_frame + 0x10)),uVar3,(*(uint *)(gen_frame + 0x104))
                     ,uVar8 & 1);
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
        (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0xb0));
        (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0xb4));
        (*(float *)(gen_frame + 0x8)) = (float)(*(ulonglong *)(gen_frame + 0xb8));
        (*(float *)(gen_frame + 0xc)) = (float)(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4));
        F_00d49e70((*(uint *)(gen_frame + 0xdc)),(*(undefined4 * PTR32 *)(gen_frame + 0xd8)),(*(uint *)(gen_frame + 0xdc)),(*(undefined4 * PTR32 *)(gen_frame + 0xd8)),(*(uint *)(gen_frame + 0xf4)),(*(uint *)(gen_frame + 0xcc)),&(*(float *)(gen_frame + 0x0)),uVar3,(*(uint *)(gen_frame + 0x104))
                    );
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4)));
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = puVar9;
        (*(ulonglong *)(gen_frame + 0xb8)) = CONCAT44(puVar9,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
        fVar19 = REFG(float, 0x1087f04);
        if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc)))) {
          *puVar9 = &REFG(undefined, 0x1134dd0);
          uVar6 = rdtsc();
          (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = ((undefined4 *)GEN_TOP((uint)uVar6));
          puVar9[1] = ((undefined4 *)GEN_TOP((uint)uVar6));
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4))) = puVar9 + 3;
          fVar19 = REFG(float, 0x1087f04);
        }
      }
      iVar15 = (iVar15 + 1) % 3;
      (*(undefined4 * PTR32 *)(gen_frame + 0x108)) = (*(undefined4 * PTR32 *)(gen_frame + 0x108)) + 7;
      (*(int *)(gen_frame + 0xf8)) = ((*(int *)(gen_frame + 0xf8)) + 1) % 3;
      (*(int *)(gen_frame + 0x100)) = ((uint *)(gen_frame + 0x7c))[4];
      (*(int *)(gen_frame + 0xf0)) = ((*(int *)(gen_frame + 0xf0)) + 1) % 3;
    } while ((int)(((uint *)(gen_frame + 0x7c))[4] - 1) < (*(int *)(gen_frame + 0xe8)));
  }
  uVar8 = (*(uint *)(gen_frame + 0xfc));
  if ((*((byte *)GEN_TOP((param_1 + 0x44))) & 2) != 0) {
    F_00d48b40((*(uint *)(gen_frame + 0xfc)),*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  }
  if (*((int *)GEN_TOP((param_1 + 0x38))) != 0) {
    F_00d49c70(uVar8,uVar8,(*(undefined4 *)(gen_frame + 0xac)),*((undefined4 *)GEN_TOP((param_1 + 0x28))),&REFG(undefined, 0x1351770));
  }
  F_00d84530(*((undefined4 *)GEN_TOP((param_1 + 0x28))),uVar8,*((undefined4 *)GEN_TOP((param_1 + 0x50))));
  F_00d844c0(*((undefined4 *)GEN_TOP((param_1 + 0x54))),*((undefined4 *)GEN_TOP((param_1 + 0x2c))),(*(uint *)(gen_frame + 0xdc)));
  F_00d844c0(*((undefined4 *)GEN_TOP((param_1 + 0x58))),*((undefined4 *)GEN_TOP((param_1 + 0x28))),(*(undefined4 * PTR32 *)(gen_frame + 0xc8)));
  F_00d844c0(*((undefined4 *)GEN_TOP((param_1 + 0x5c))),*((undefined4 *)GEN_TOP((param_1 + 0x2c))),(*(undefined4 * PTR32 *)(gen_frame + 0xd8)));
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4)));
  if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc)))) {
    *puVar9 = ((char *)REFP(0x1137f70));
    uVar6 = rdtsc();
    (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = ((undefined4 *)GEN_TOP((int)uVar6));
    puVar9[1] = (int)uVar6;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 4))) = puVar9 + 3;
  }
  puVar9 = ((undefined4 *)GEN_TOP(0x0));
  do {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = ((undefined4 *)GEN_TOP(((int)puVar9 - 4)));
    F_00d84610(*((undefined4 *)GEN_TOP(((int)((uint *)(gen_frame + 0x48)) + (int)puVar9 + 0x1c))),
                 *((undefined4 *)GEN_TOP((param_1 + 0x2c))));
    F_00d84610(*((undefined4 *)GEN_TOP(((int)((uint *)(gen_frame + 0x48)) + (int)puVar9 + 0x24))),
                 *((undefined4 *)GEN_TOP((param_1 + 0x28))));
    F_00d84610(*((undefined4 *)GEN_TOP(((int)((uint *)(gen_frame + 0x90)) + (int)puVar9 + 4))),*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
    F_00d84660(*((undefined4 *)GEN_TOP(((int)((uint *)(gen_frame + 0x48)) + (int)puVar9 + 0x38))),
                 *((undefined4 *)GEN_TOP((param_1 + 0x28))));
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x10c));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x10c)) != ((undefined4 *)GEN_TOP(0xfffffff8)));
  F_00d84610((*(uint *)(gen_frame + 0xcc)),*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  F_00d84610((*(uint *)(gen_frame + 0xd4)),*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  F_00d84610((*(uint *)(gen_frame + 0xf4)),*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  F_00d84660((*(uint *)(gen_frame + 0xec)),*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  F_00d84610((*(undefined4 * PTR32 *)(gen_frame + 0xd8)),*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  F_00d84610((*(undefined4 * PTR32 *)(gen_frame + 0xc8)),*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  F_00d84610((*(uint *)(gen_frame + 0xdc)),*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  F_00d84660((*(uint *)(gen_frame + 0xfc)),*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar11 + 4)));
  pvVar7 = pvVar11;
  if (puVar9 < *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar11 + 0xc)))) {
    *puVar9 = &REFG(undefined, 0x1134dd0);
    uVar6 = rdtsc();
    pvVar7 = (LPVOID)uVar6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = pvVar7;
    puVar9[1] = pvVar7;
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar11 + 4))) = puVar9 + 3;
  }
  return (uint)pvVar7;
}

/* ref: FUN_00d84ec0 */
GEN_LIB GEN_FRAME uint F_00d84ec0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd84ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((param_1 + 0x1c)));
}

/* ref: FUN_00d84ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d84ed0(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  
  (*(unsigned int *)((unsigned char *)(auVar1) + 12)) = (int)((unsigned int)gen_vbits((*param_2), 16, 0, 4));
  gen_vset(((unsigned char *)(auVar1) + 0), 12, (((unsigned char *)GEN_TOP(((*param_2)))) + 4), 12);
  memcpy(&(*in_ecx), &(auVar1), sizeof(auVar1) < sizeof(*in_ecx) ? sizeof(auVar1) : sizeof(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00d84ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d84ef0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar2;
  in_ecx[2] = uVar3;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00d84f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d84f10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar3;
  in_ecx[3] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00d84f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d84f30(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  
  gen_psllw(&(auVar1), &(*param_2), (&(unsigned long long[2]){1, 0}));
  memcpy(&(*in_ecx), &(auVar1), sizeof(auVar1) < sizeof(*in_ecx) ? sizeof(auVar1) : sizeof(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00d84f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d84f50(GEN_P(ushort * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *in_ecx = *param_2 >> 1;
  in_ecx[1] = uVar1 >> 1;
  in_ecx[2] = uVar2 >> 1;
  in_ecx[3] = uVar3 >> 1;
  in_ecx[4] = uVar4 >> 1;
  in_ecx[5] = uVar5 >> 1;
  in_ecx[6] = uVar6 >> 1;
  in_ecx[7] = uVar7 >> 1;
  return (uint)param_2;
}

/* ref: FUN_00d84f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d84f90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *in_ecx = param_2[3];
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d84fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d84fb0(GEN_P(ushort * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd84fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *in_ecx = *param_2 >> 0xf;
  in_ecx[1] = uVar1 >> 0xf;
  in_ecx[2] = uVar2 >> 0xf;
  in_ecx[3] = uVar3 >> 0xf;
  in_ecx[4] = uVar4 >> 0xf;
  in_ecx[5] = uVar5 >> 0xf;
  in_ecx[6] = uVar6 >> 0xf;
  in_ecx[7] = uVar7 >> 0xf;
  return (uint)param_2;
}

/* ref: FUN_00d850d0 */
GEN_LIB GEN_FRAME uint F_00d850d0(GEN_P(gen_v16 * in_eax, unsigned int gen_a0), GEN_P(gen_v16 * in_ecx, unsigned int gen_a1), GEN_P(gen_v16 * param_3, unsigned int gen_a2), GEN_P(gen_v16 * param_4, unsigned int gen_a3), GEN_P(gen_v16 * param_5, unsigned int gen_a4), GEN_P(gen_v16 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd850d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(gen_v16 * in_eax = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;)
  GEN_PIN(gen_v16 * param_4 = (gen_v16 *)(uintptr_t)gen_a3;)
  GEN_PIN(gen_v16 * param_5 = (gen_v16 *)(uintptr_t)gen_a4;)
  GEN_PIN(gen_v16 * param_6 = (gen_v16 *)(uintptr_t)gen_a5;)
  undefined1 auVar1 [14];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  memcpy(&(auVar9), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar9) ? sizeof(*in_ecx) : sizeof(auVar9));
  (*(undefined2 *)((char *)&auVar1 + 10)) = 0;
  gen_piece_set(&auVar1, 0, 10, (unsigned long long)(GEN_PIECE(&auVar9, 0, 10)));
  (*(undefined2 *)((char *)&auVar1 + 12)) = (*(undefined2 *)((char *)&auVar9 + 6));
  (*(undefined2 *)((char *)&auVar3 + 8)) = (*(undefined2 *)((char *)&auVar9 + 4));
  (*(undefined8 *)((char *)&auVar3 + 0)) = (*(undefined8 *)((char *)&auVar9 + 0));
  (*(undefined4 *)((char *)&auVar3 + 10)) = (*(undefined4 *)((char *)&auVar1 + 10));
  (*(undefined8 *)((char *)&auVar7 + 6)) = 0;
  gen_piece_set(&auVar7, 0, 6, (unsigned long long)(GEN_PIECE(&auVar3, 8, 6)));
  (*(undefined2 *)((char *)&auVar5 + 4)) = (*(undefined2 *)((char *)&auVar9 + 2));
  (*(undefined4 *)((char *)&auVar5 + 0)) = (*(undefined4 *)((char *)&auVar9 + 0));
  unsigned char gen_vx0[64];
  gen_vshift(gen_vx0, auVar7, 14, (int)(0x40), 0);
  (*(unsigned long long *)((unsigned char *)(auVar5) + 6)) = (longlong)((unsigned long long)gen_vbits(gen_vx0, 14, 48, 8));
  (*(unsigned int *)((unsigned char *)(auVar9) + 0)) = (*(unsigned int *)((unsigned char *)(auVar9) + 0)) & 0xffff;
  gen_piece_set(&auVar9, 4, 10, (unsigned long long)(GEN_PIECE(&auVar5, 4, 10)));
  (*(undefined2 *)((char *)&auVar9 + 14)) = 0;
  memcpy(&(*param_3), &(auVar9), sizeof(auVar9) < sizeof(*param_3) ? sizeof(auVar9) : sizeof(*param_3));
  (*(undefined2 *)((char *)&auVar10 + 2)) = 0;
  (*(undefined2 *)((char *)&auVar10 + 0)) = *((ushort *)GEN_TOP((*in_ecx + 8)));
  (*(undefined2 *)((char *)&auVar10 + 4)) = *((undefined2 *)GEN_TOP((*in_ecx + 10)));
  (*(undefined2 *)((char *)&auVar10 + 6)) = 0;
  (*(undefined2 *)((char *)&auVar10 + 8)) = *((undefined2 *)GEN_TOP((*in_ecx + 0xc)));
  (*(undefined2 *)((char *)&auVar10 + 10)) = 0;
  (*(undefined2 *)((char *)&auVar10 + 12)) = *((undefined2 *)GEN_TOP((*in_ecx + 0xe)));
  (*(undefined2 *)((char *)&auVar10 + 14)) = 0;
  memcpy(&(*param_4), &(auVar10), sizeof(auVar10) < sizeof(*param_4) ? sizeof(auVar10) : sizeof(*param_4));
  memcpy(&(auVar9), &(*in_eax), sizeof(*in_eax) < sizeof(auVar9) ? sizeof(*in_eax) : sizeof(auVar9));
  (*(undefined2 *)((char *)&auVar2 + 10)) = 0;
  gen_piece_set(&auVar2, 0, 10, (unsigned long long)(GEN_PIECE(&auVar9, 0, 10)));
  (*(undefined2 *)((char *)&auVar2 + 12)) = (*(undefined2 *)((char *)&auVar9 + 6));
  (*(undefined2 *)((char *)&auVar4 + 8)) = (*(undefined2 *)((char *)&auVar9 + 4));
  (*(undefined8 *)((char *)&auVar4 + 0)) = (*(undefined8 *)((char *)&auVar9 + 0));
  (*(undefined4 *)((char *)&auVar4 + 10)) = (*(undefined4 *)((char *)&auVar2 + 10));
  (*(undefined8 *)((char *)&auVar8 + 6)) = 0;
  gen_piece_set(&auVar8, 0, 6, (unsigned long long)(GEN_PIECE(&auVar4, 8, 6)));
  (*(undefined2 *)((char *)&auVar6 + 4)) = (*(undefined2 *)((char *)&auVar9 + 2));
  (*(undefined4 *)((char *)&auVar6 + 0)) = (*(undefined4 *)((char *)&auVar9 + 0));
  unsigned char gen_vx1[64];
  gen_vshift(gen_vx1, auVar8, 14, (int)(0x40), 0);
  (*(unsigned long long *)((unsigned char *)(auVar6) + 6)) = (longlong)((unsigned long long)gen_vbits(gen_vx1, 14, 48, 8));
  (*(unsigned int *)((unsigned char *)(auVar11) + 0)) = (*(unsigned int *)((unsigned char *)(auVar9) + 0)) & 0xffff;
  gen_piece_set(&auVar11, 4, 10, (unsigned long long)(GEN_PIECE(&auVar6, 4, 10)));
  (*(undefined2 *)((char *)&auVar11 + 14)) = 0;
  memcpy(&(*param_5), &(auVar11), sizeof(auVar11) < sizeof(*param_5) ? sizeof(auVar11) : sizeof(*param_5));
  (*(undefined2 *)((char *)&auVar12 + 2)) = 0;
  (*(undefined2 *)((char *)&auVar12 + 0)) = *((ushort *)GEN_TOP((*in_eax + 8)));
  (*(undefined2 *)((char *)&auVar12 + 4)) = *((undefined2 *)GEN_TOP((*in_eax + 10)));
  (*(undefined2 *)((char *)&auVar12 + 6)) = 0;
  (*(undefined2 *)((char *)&auVar12 + 8)) = *((undefined2 *)GEN_TOP((*in_eax + 0xc)));
  (*(undefined2 *)((char *)&auVar12 + 10)) = 0;
  (*(undefined2 *)((char *)&auVar12 + 12)) = *((undefined2 *)GEN_TOP((*in_eax + 0xe)));
  (*(undefined2 *)((char *)&auVar12 + 14)) = 0;
  memcpy(&(*param_6), &(auVar12), sizeof(auVar12) < sizeof(*param_6) ? sizeof(auVar12) : sizeof(*param_6));
  return (uint)param_6;
}

/* ref: FUN_00d85f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d85f20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd85f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d85f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d85f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd85f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(uint *)this = *param_1 | *param_2;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1 | uVar4;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 | uVar5;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3 | uVar6;
  return (uint)param_1;
}

/* ref: FUN_00d85f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d85f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd85f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(uint *)this = *param_1 ^ *param_2;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1 ^ uVar4;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 ^ uVar5;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3 ^ uVar6;
  return (uint)param_1;
}

/* ref: FUN_00d85f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d85f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd85f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d85fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d85fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd85fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  uVar2 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  uVar3 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  *(undefined4 *)this = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar3;
  return param_1;
}

/* ref: FUN_00d85fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d85fc0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd85fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  bVar1 = *(float *)&REFG(undefined, 0x1138084) <= fVar5;
  bVar2 = *(float *)&REFG(undefined, 0x1138088) <= fVar6;
  bVar3 = *(float *)&REFG(undefined, 0x113808c) <= fVar7;
  (*(float *)((char *)&auVar11 + 0)) =
       fVar4 - gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138080)) &
                          -(uint)(*(float *)&REFG(undefined, 0x1138080) <= fVar4));
  (*(float *)((char *)&auVar11 + 4)) = fVar5 - gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138084)) & -(uint)bVar1);
  (*(float *)((char *)&auVar11 + 8)) = fVar6 - gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138088)) & -(uint)bVar2);
  (*(float *)((char *)&auVar11 + 12)) = fVar7 - gen_bits2f((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x113808c)) & -(uint)bVar3);
  gen_maxps(&(auVar11), &(auVar11), (&(unsigned long long[2]){0, 0}));
  fVar8 = *(float *)&REFG(undefined, 0x1138084) + *(float *)&REFG(undefined, 0x1138084);
  fVar9 = *(float *)&REFG(undefined, 0x1138088) + *(float *)&REFG(undefined, 0x1138088);
  fVar10 = *(float *)&REFG(undefined, 0x113808c) + *(float *)&REFG(undefined, 0x113808c);
  *in_ecx = (int)(*(float *)((char *)&auVar11 + 0)) + (uint)(*(float *)&REFG(undefined, 0x1138080) <= fVar4) * ((int)0x80000000) |
            -(uint)(*(float *)&REFG(undefined, 0x1138080) + *(float *)&REFG(undefined, 0x1138080) <= fVar4);
  in_ecx[1] = (int)(*(float *)((char *)&auVar11 + 4)) + (uint)bVar1 * ((int)0x80000000) | -(uint)(fVar8 <= fVar5);
  in_ecx[2] = (int)(*(float *)((char *)&auVar11 + 8)) + (uint)bVar2 * ((int)0x80000000) | -(uint)(fVar9 <= fVar6);
  in_ecx[3] = (int)(*(float *)((char *)&auVar11 + 12)) + (uint)bVar3 * ((int)0x80000000) | -(uint)(fVar10 <= fVar7);
  return (uint)param_2;
}

/* ref: FUN_00d86010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd86010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(uint *)this = *param_1 & *param_2 | ~*param_1 & *param_3;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1 & uVar7 | ~uVar1 & uVar4;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 & uVar8 | ~uVar2 & uVar5;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3 & uVar9 | ~uVar3 & uVar6;
  return (uint)param_3;
}

/* ref: FUN_00d86040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86040(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd86040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x1138054) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x1138058) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x113805c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = (*(float *)&REFG(undefined, 0x1138050) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00d86070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86070(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd86070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 == *in_ecx);
  param_2[1] = -(uint)(fVar1 == fVar4);
  param_2[2] = -(uint)(fVar2 == fVar5);
  param_2[3] = -(uint)(fVar3 == fVar6);
  return (uint)param_2;
}

/* ref: FUN_00d86090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86090(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd86090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x1138054) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x1138058) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x113805c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = (*(float *)&REFG(undefined, 0x1138050) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00d860c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d860c0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd860c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 == *in_ecx);
  param_2[1] = -(uint)(fVar1 == fVar4);
  param_2[2] = -(uint)(fVar2 == fVar5);
  param_2[3] = -(uint)(fVar3 == fVar6);
  return (uint)param_2;
}

/* ref: FUN_00d86120 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00d86120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd86120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if ((short)param_2 < 0) {
    return 0xffff;
  }
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + (short)param_2 * 2)));
}

/* ref: FUN_00d86160 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00d86160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd86160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + (short)(ushort)param_1 * 2))) = (short)param_2;
  *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + (short)param_2 * 2))) = (ushort)param_1;
  return (ushort)param_1;
}

/* ref: FUN_00d86190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd86190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da1010(*((undefined4 *)GEN_TOP(((int)this + 8))),param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d861f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d861f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd861f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (param_2 + 1) * 0x10 + *((int *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: FUN_00d86210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd86210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (int)*((short *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + param_2 * 2)));
}

/* ref: FUN_00d86240 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d86240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd86240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: FUN_00d86250 */
GEN_LIB GEN_FRAME float F_00d86250(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd86250u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: FUN_00d86260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd86260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = F_00da3eb0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]));
  uVar3 = (*(uint *)&gen_args[0]);
  if (uVar2 != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}

/* ref: FUN_00d86290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd86290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,*((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe,
               *((uint *)GEN_TOP((param_2 + 4))) & 0xfffffffe);
  uVar1 = F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((uint *)GEN_TOP((param_2 + 4))) & 0xfffffffe,
                       *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe);
  return uVar1;
}

/* ref: FUN_00d862d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d862d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd862d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,param_1,param_2);
  uVar1 = F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,param_2,param_1);
  return uVar1;
}

/* ref: FUN_00d86310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd86310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  puVar4 = ((undefined4 *)GEN_TOP(((param_2 + 1) * 0x10 + *((int *)GEN_TOP((in_ecx + 0x18))))));
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *puVar4 = *param_3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  return (uint)puVar4;
}

/* ref: FUN_00d86330 */
GEN_LIB GEN_FRAME uint F_00d86330(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd86330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  return *param_1;
}

/* ref: FUN_00d86340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd86340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  LPVOID pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  
  uVar7 = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1138194));
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_1;
  puVar9 = ((undefined4 *)GEN_TOP((param_1 + 0xc)));
  param_1 = param_1 & 0xffffff00;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar9;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,param_1);
  iVar8 = *((int *)GEN_TOP((uVar7 + 0x1c)));
  *((int *)GEN_TOP(((int)this + 0x14))) = iVar8;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = F_00d923f0(*((undefined4 *)GEN_TOP(((int)pvVar6 + 0x2c))),iVar8 * 2,0x10);
  iVar8 = *((int *)GEN_TOP(((int)this + 0x14)));
  *((uint *)GEN_TOP(((int)this + 8))) = uVar7;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = F_00d923f0(*((undefined4 *)GEN_TOP(((int)pvVar6 + 0x2c))),(iVar8 + 1) * 0x10,0x10);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar7;
  uVar4 = *(undefined4 *)&REFG(undefined, 0x113811c);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138118);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138114);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138110);
  sVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    iVar8 = 0;
    do {
      *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar8 * 2))) = sVar5;
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 * 0x10 + *((int *)GEN_TOP(((int)this + 0x18))))));
      sVar5 = sVar5 + 1;
      *puVar9 = uVar1;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      iVar8 = (int)sVar5;
    } while (iVar8 < *((int *)GEN_TOP(((int)this + 0x14))));
  }
  uVar3 = *(undefined4 *)&REFG(undefined, 0x113811c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138118);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138114);
  puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) * 0x10 + *((int *)GEN_TOP(((int)this + 0x18))))));
  *puVar9 = *(undefined4 *)&REFG(undefined, 0x1138110);
  puVar9[1] = uVar1;
  puVar9[2] = uVar2;
  puVar9[3] = uVar3;
  return (uint)this;
}

/* ref: FUN_00d86410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d86410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd86410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1138194));
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d92430(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d92430(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1);
  uVar3 = F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00d86470 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d86470(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd86470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL(0x30, 0);
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 * puVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar6 = F_00d86210(param_1 GEN_EDX_FWD,param_3);
  uVar8 = param_3;
  if (param_4 != '\0') {
    uVar8 = uVar6;
  }
  puVar7 = ((undefined8 *)GEN_TOP(F_00d861f0(param_1 GEN_EDX_ARG,uVar8)));
  uVar1 = *(undefined8 *)(param_2 + 4);
  fVar4 = gen_bits2f(param_2[7]);
  (*(undefined8 *)(gen_frame + 0x0)) = uVar1;
  uVar5 = (*(undefined8 *)(gen_frame + 0x0));
  uVar2 = *(undefined8 *)(param_2 + 6);
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  uVar2 = (*(undefined8 *)(gen_frame + 0x8));
  uVar3 = *puVar7;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) = gen_bits2f((uint)uVar1);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = gen_bits2f((uint)uVar2);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
  fVar10 = *((float *)GEN_TOP(((int)puVar7 + 0xc)));
  (*(undefined8 *)(gen_frame + 0x10)) = uVar3;
  uVar3 = (*(undefined8 *)(gen_frame + 0x10));
  uVar1 = puVar7[1];
  (*(undefined8 *)(gen_frame + 0x18)) = uVar1;
  uVar1 = (*(undefined8 *)(gen_frame + 0x18));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = gen_bits2f((uint)uVar3);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = gen_bits2f((uint)uVar1);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  fVar9 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4))) - fVar4 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0))) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0));
  fVar11 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0))) - fVar4 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4))) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4));
  fVar12 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0))) - fVar4 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0))) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0));
  fVar18 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0))) + ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)));
  (*(undefined8 *)(gen_frame + 0x0)) = uVar5;
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined8 *)(gen_frame + 0x10)) = uVar3;
  (*(undefined8 *)(gen_frame + 0x18)) = uVar1;
  puVar7 = ((undefined8 *)GEN_TOP(F_00d861f0(param_1 GEN_EDX_ARG,uVar6)));
  uVar1 = *puVar7;
  (*(undefined8 *)(gen_frame + 0x0)) = uVar1;
  uVar2 = puVar7[1];
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) = gen_bits2f((uint)uVar1);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = gen_bits2f((uint)uVar2);
  fVar4 = *((float *)GEN_TOP(((int)puVar7 + 0xc)));
  fVar10 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) * fVar12;
  fVar13 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) * fVar11;
  fVar20 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) * fVar12;
  fVar22 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) * fVar9;
  fVar16 = fVar9 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0));
  fVar17 = fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4));
  fVar19 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) * fVar18;
  fVar21 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) * fVar18;
  puVar7 = &(*(undefined8 *)(gen_frame + 0x0));
  (*(undefined8 *)(gen_frame + 0x0)) = *(undefined8 *)param_2;
  param_2[4] = (uint)gen_fl2bits(((fVar10 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) * fVar11) + fVar4 * fVar9) + fVar19);
  param_2[5] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) * fVar9 - fVar20) + fVar4 * fVar11) + fVar21);
  param_2[6] = (uint)gen_fl2bits(((fVar13 - fVar22) + fVar4 * fVar12) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) * fVar18);
  param_2[7] = (uint)gen_fl2bits(fVar18 * fVar4 - ((fVar17 + fVar16) + fVar12 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0))));
  (*(undefined8 *)(gen_frame + 0x8)) = *(undefined8 *)(param_2 + 2);
  uVar8 = F_00d861f0(((undefined4)(uint)(param_1)) GEN_EDX_ARG,uVar6);
  uVar8 = F_00d950d0(param_2 GEN_EDX_ARG,uVar8,puVar7);
  uVar6 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar14 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar15 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *param_2 = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  param_2[1] = uVar6;
  param_2[2] = uVar14;
  param_2[3] = uVar15;
  return uVar8;
}

/* ref: FUN_00d86610 */
GEN_LIB GEN_NOFRAME unsigned int F_00d86610(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd86610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 * puVar11;
  undefined8 * puVar12;
  int iVar13;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar13 = 0;
  puVar12 = param_1;
  if (0 < param_3) {
    do {
      iVar10 = (int)*((short *)GEN_TOP((param_2 + iVar13 * 2)));
      if ((-1 < iVar10) && (iVar10 < iVar13)) {
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar6 = puVar12[5];
        puVar11 = param_1 + iVar10 * 6;
        uVar7 = *((undefined4 *)GEN_TOP(((int)puVar11 + 4)));
        uVar8 = *(undefined4 *)(puVar11 + 1);
        uVar9 = *((undefined4 *)GEN_TOP(((int)puVar11 + 0xc)));
        *(undefined4 *)puVar12 = *(undefined4 *)puVar11;
        *((undefined4 *)GEN_TOP(((int)puVar12 + 4))) = uVar7;
        *(undefined4 *)(puVar12 + 1) = uVar8;
        *((undefined4 *)GEN_TOP(((int)puVar12 + 0xc))) = uVar9;
        uVar7 = *((undefined4 *)GEN_TOP(((int)puVar11 + 0x14)));
        uVar8 = *(undefined4 *)(puVar11 + 3);
        uVar9 = *((undefined4 *)GEN_TOP(((int)puVar11 + 0x1c)));
        *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar11 + 2);
        *((undefined4 *)GEN_TOP(((int)puVar12 + 0x14))) = uVar7;
        *(undefined4 *)(puVar12 + 3) = uVar8;
        *((undefined4 *)GEN_TOP(((int)puVar12 + 0x1c))) = uVar9;
        uVar7 = *((undefined4 *)GEN_TOP(((int)puVar11 + 0x24)));
        uVar8 = *(undefined4 *)(puVar11 + 5);
        uVar9 = *((undefined4 *)GEN_TOP(((int)puVar11 + 0x2c)));
        *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar11 + 4);
        *((undefined4 *)GEN_TOP(((int)puVar12 + 0x24))) = uVar7;
        *(undefined4 *)(puVar12 + 5) = uVar8;
        *((undefined4 *)GEN_TOP(((int)puVar12 + 0x2c))) = uVar9;
        local_40 = (undefined4)uVar1;
        uStack_3c = (undefined4)((ulonglong)uVar1 >> 0x20);
        uStack_38 = (undefined4)uVar2;
        uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
        *(undefined4 *)puVar11 = local_40;
        *((undefined4 *)GEN_TOP(((int)puVar11 + 4))) = uStack_3c;
        *(undefined4 *)(puVar11 + 1) = uStack_38;
        *((undefined4 *)GEN_TOP(((int)puVar11 + 0xc))) = uStack_34;
        local_30 = (undefined4)uVar3;
        uStack_2c = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_28 = (undefined4)uVar4;
        uStack_24 = (undefined4)((ulonglong)uVar4 >> 0x20);
        *(undefined4 *)(puVar11 + 2) = local_30;
        *((undefined4 *)GEN_TOP(((int)puVar11 + 0x14))) = uStack_2c;
        *(undefined4 *)(puVar11 + 3) = uStack_28;
        *((undefined4 *)GEN_TOP(((int)puVar11 + 0x1c))) = uStack_24;
        local_20 = (undefined4)uVar5;
        uStack_1c = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_18 = (undefined4)uVar6;
        uStack_14 = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)(puVar11 + 4) = local_20;
        *((undefined4 *)GEN_TOP(((int)puVar11 + 0x24))) = uStack_1c;
        *(undefined4 *)(puVar11 + 5) = uStack_18;
        *((undefined4 *)GEN_TOP(((int)puVar11 + 0x2c))) = uStack_14;
      }
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 6;
    } while (iVar13 < param_3);
  }
  return;
}

/* ref: FUN_00d866e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d866e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd866e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d86470(this GEN_EDX_FWD,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_00d86700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd86700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d86470(this GEN_EDX_FWD,param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_00d86720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd86720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d86470(this GEN_EDX_FWD,param_1,0,1);
  return uVar1;
}

/* ref: FUN_00d86740 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00d86740(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd86740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  float * pfVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = ((float)GEN_TOF(SQRT(*(double *)&REFG(undefined, 0x1092098)))) * REFG(float, 0x1088068);
  if ((*(uint *)&REFG(undefined, 0x15d9a48) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d9a48) = *(uint *)&REFG(undefined, 0x15d9a48) | 1;
    *(undefined4 *)&REFG(undefined, 0x13513f8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13513fc) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351408) = 0;
    *(undefined4 *)&REFG(undefined, 0x135140c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351410) = 0;
    *(undefined4 *)&REFG(undefined, 0x135141c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351420) = 0;
    *(undefined4 *)&REFG(undefined, 0x135142c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351430) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351434) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351440) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351444) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351454) = 0;
    *(undefined4 *)&REFG(undefined, 0x135145c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351464) = 0;
    *(undefined4 *)&REFG(undefined, 0x135146c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351470) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351478) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351480) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351488) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351494) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351498) = 0;
    *(undefined4 *)&REFG(undefined, 0x13514a4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13514a8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13514b0) = *(undefined4 *)&REFG(undefined, 0x1138100);
    REFG(uint, 0x013514b4) = *(undefined4 *)&REFG(undefined, 0x1138104);
    REFG(uint, 0x013514b8) = *(undefined4 *)&REFG(undefined, 0x1138108);
    REFG(uint, 0x013514bc) = *(undefined4 *)&REFG(undefined, 0x113810c);
    *(undefined4 *)&REFG(undefined, 0x13514c0) = *(undefined4 *)&REFG(undefined, 0x1138120);
    REFG(uint, 0x013514c4) = *(undefined4 *)&REFG(undefined, 0x1138124);
    REFG(uint, 0x013514c8) = *(undefined4 *)&REFG(undefined, 0x1138128);
    REFG(uint, 0x013514cc) = *(undefined4 *)&REFG(undefined, 0x113812c);
    *(undefined4 *)&REFG(undefined, 0x13514d0) = *(undefined4 *)&REFG(undefined, 0x1138130);
    REFG(uint, 0x013514d4) = *(undefined4 *)&REFG(undefined, 0x1138134);
    REFG(uint, 0x013514d8) = *(undefined4 *)&REFG(undefined, 0x1138138);
    REFG(uint, 0x013514dc) = *(undefined4 *)&REFG(undefined, 0x113813c);
    *(undefined4 *)&REFG(undefined, 0x13514e0) = *(undefined4 *)&REFG(undefined, 0x1138140);
    REFG(uint, 0x013514e4) = *(undefined4 *)&REFG(undefined, 0x1138144);
    REFG(uint, 0x013514e8) = *(undefined4 *)&REFG(undefined, 0x1138148);
    REFG(uint, 0x013514ec) = *(undefined4 *)&REFG(undefined, 0x113814c);
    *(undefined4 *)&REFG(undefined, 0x13514f0) = *(undefined4 *)&REFG(undefined, 0x1138150);
    REFG(uint, 0x013514f4) = *(undefined4 *)&REFG(undefined, 0x1138154);
    REFG(uint, 0x013514f8) = *(undefined4 *)&REFG(undefined, 0x1138158);
    REFG(uint, 0x013514fc) = *(undefined4 *)&REFG(undefined, 0x113815c);
    *(undefined4 *)&REFG(undefined, 0x1351500) = *(undefined4 *)&REFG(undefined, 0x1138160);
    REFG(uint, 0x01351504) = *(undefined4 *)&REFG(undefined, 0x1138164);
    REFG(uint, 0x01351508) = *(undefined4 *)&REFG(undefined, 0x1138168);
    REFG(uint, 0x0135150c) = *(undefined4 *)&REFG(undefined, 0x113816c);
    *(uint *)&REFG(undefined, 0x1351404) = (uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0);
    *(undefined4 *)&REFG(undefined, 0x1351510) = *(undefined4 *)&REFG(undefined, 0x1138170);
    REFG(uint, 0x01351514) = *(undefined4 *)&REFG(undefined, 0x1138174);
    REFG(uint, 0x01351518) = *(undefined4 *)&REFG(undefined, 0x1138178);
    REFG(uint, 0x0135151c) = *(undefined4 *)&REFG(undefined, 0x113817c);
    *(undefined4 *)&REFG(undefined, 0x1351520) = *(undefined4 *)&REFG(undefined, 0x1138180);
    REFG(uint, 0x01351524) = *(undefined4 *)&REFG(undefined, 0x1138184);
    REFG(uint, 0x01351528) = *(undefined4 *)&REFG(undefined, 0x1138188);
    REFG(uint, 0x0135152c) = *(undefined4 *)&REFG(undefined, 0x113818c);
    *(float *)&REFG(undefined, 0x13513f0) = fVar5;
    *(float *)&REFG(undefined, 0x13513f4) = fVar5;
    *(float *)&REFG(undefined, 0x1351400) = fVar5;
    *(float *)&REFG(undefined, 0x1351414) = fVar5;
    *(float *)&REFG(undefined, 0x1351418) = fVar5;
    *(float *)&REFG(undefined, 0x1351424) = fVar5;
    *(uint *)&REFG(undefined, 0x1351428) = *(uint *)&REFG(undefined, 0x1351404);
    *(float *)&REFG(undefined, 0x1351438) = fVar5;
    *(float *)&REFG(undefined, 0x135143c) = fVar5;
    *(float *)&REFG(undefined, 0x1351448) = fVar5;
    *(uint *)&REFG(undefined, 0x135144c) = *(uint *)&REFG(undefined, 0x1351404);
    *(float *)&REFG(undefined, 0x1351450) = fVar5;
    *(float *)&REFG(undefined, 0x1351458) = fVar5;
    *(float *)&REFG(undefined, 0x1351460) = fVar5;
    *(uint *)&REFG(undefined, 0x1351468) = *(uint *)&REFG(undefined, 0x1351404);
    *(float *)&REFG(undefined, 0x1351474) = fVar5;
    *(float *)&REFG(undefined, 0x135147c) = fVar5;
    *(float *)&REFG(undefined, 0x1351484) = fVar5;
    *(uint *)&REFG(undefined, 0x135148c) = *(uint *)&REFG(undefined, 0x1351404);
    *(float *)&REFG(undefined, 0x1351490) = fVar5;
    *(float *)&REFG(undefined, 0x135149c) = fVar5;
    *(float *)&REFG(undefined, 0x13514a0) = fVar5;
    *(uint *)&REFG(undefined, 0x13514ac) = *(uint *)&REFG(undefined, 0x1351404);
  }
  iVar4 = 0;
  pfVar3 = (float *)&REFG(undefined, 0x13513b0);
  do {
    fVar5 = ABS((pfVar3[2] * param_1[2] + *pfVar3 * *param_1) +
                (pfVar3[3] * param_1[3] + pfVar3[1] * param_1[1]));
    if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(REFG(float, 0x1087f04) - param_2)) && !(fVar5 < REFG(float, 0x1087f04) - param_2)) {
      iVar4 = iVar4 * 0x10;
      fVar5 = *((float *)GEN_TOP((iVar4 + 0x13513b4)));
      fVar1 = *((float *)GEN_TOP((iVar4 + 0x13513b8)));
      fVar2 = *((float *)GEN_TOP((iVar4 + 0x13513bc)));
      *param_1 = *(float *)(&REFG(undefined, 0x13513b0) + iVar4);
      param_1[1] = fVar5;
      param_1[2] = fVar1;
      param_1[3] = fVar2;
      return 0;
    }
    pfVar3 = pfVar3 + 4;
    iVar4 = iVar4 + 1;
  } while ((int)pfVar3 < 0x1351530);
  return 0;
}

/* ref: FUN_00d86a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd86a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *param_1 = this;
  param_1[1] = 0x2c;
  uVar1 = F_00d86240(this GEN_EDX_FWD);
  param_1[2] = *((undefined4 *)GEN_TOP((((int)(uint)(this)) + 0x10)));
  param_1[3] = uVar1 * 2;
  uVar1 = F_00d86240(((int)(uint)(this)) GEN_EDX_ARG);
  param_1[4] = *((undefined4 *)GEN_TOP((((int)(uint)((this))) + 0x18)));
  param_1[5] = (uVar1 + 1) * 0x10;
  uVar1 = F_00d86240(((int)(uint)((this))) GEN_EDX_ARG);
  param_1[6] = *((undefined4 *)GEN_TOP((((int)(uint)(((int)(uint)((this))))) + 8)));
  param_1[7] = uVar1 * 2;
  return uVar1 * 2;
}

/* ref: FUN_00d86a60 */
GEN_LIB GEN_NOFRAME unsigned int F_00d86a60(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd86a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL(0x60, 0);
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 * puVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 * puVar9;
  int iVar10;
  uint * this;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  
  (*(int *)(gen_frame + 0x4c)) = 0;
  this = param_1;
  puVar4 = param_3;
  if (0 < param_5) {
    do {
      uVar1 = *(undefined8 *)(this + 4);
      fVar5 = gen_bits2f(this[7]);
      fVar14 = *((float *)GEN_TOP(((int)puVar4 + 0x1c)));
      (*(undefined8 *)(gen_frame + 0x20)) = uVar1;
      uVar6 = (*(undefined8 *)(gen_frame + 0x20));
      uVar2 = *(undefined8 *)(this + 6);
      (*(undefined8 *)(gen_frame + 0x28)) = uVar2;
      uVar7 = (*(undefined8 *)(gen_frame + 0x28));
      uVar3 = puVar4[2];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      (*(undefined8 *)(gen_frame + 0x30)) = uVar3;
      uVar3 = (*(undefined8 *)(gen_frame + 0x30));
      uVar1 = puVar4[3];
      (*(undefined8 *)(gen_frame + 0x38)) = uVar1;
      uVar8 = (*(undefined8 *)(gen_frame + 0x38));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) = gen_bits2f((uint)uVar3);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      fVar11 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4))) -
               fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0))) + fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0));
      fVar12 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) -
               fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4))) + fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4));
      fVar14 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0))) -
               fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0))) + fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0));
      fVar17 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) +
               ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)));
      puVar9 = param_3 + (*((short *)GEN_TOP((param_2 + (*(int *)(gen_frame + 0x4c)) * 2))) + 1) * 2;
      uVar1 = *puVar9;
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x10));
      (*(undefined8 *)(gen_frame + 0x18)) = puVar9[1];
      uVar2 = (*(undefined8 *)(gen_frame + 0x18));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = gen_bits2f((uint)puVar9[1]);
      fVar5 = *((float *)GEN_TOP(((int)puVar9 + 0xc)));
      (*(undefined8 *)(gen_frame + 0x0)) = *(undefined8 *)this;
      this[4] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar14 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar12) +
                                  fVar5 * fVar11) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar17);
      this[5] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar11 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar14) +
                                  fVar5 * fVar12) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar17);
      this[6] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar12 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar11) +
                                  fVar5 * fVar14) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar17);
      this[7] = (uint)gen_fl2bits(fVar17 * fVar5 -
                                  ((fVar12 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) + fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0))) +
                                  fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0))));
      (*(undefined8 *)(gen_frame + 0x8)) = *(undefined8 *)(this + 2);
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x18)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x20)) = uVar6;
      (*(undefined8 *)(gen_frame + 0x28)) = uVar7;
      (*(undefined8 *)(gen_frame + 0x30)) = uVar3;
      (*(undefined8 *)(gen_frame + 0x38)) = uVar8;
      F_00d950d0(this GEN_EDX_ARG,puVar9,&(*(undefined8 *)(gen_frame + 0x0)));
      uVar13 = this[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar15 = this[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar16 = this[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      iVar10 = (*(int *)(gen_frame + 0x4c)) + 1;
      *this = *this ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      this[1] = uVar13;
      this[2] = uVar15;
      this[3] = uVar16;
      this = this + 0xc;
      (*(int *)(gen_frame + 0x4c)) = iVar10;
      puVar4 = puVar4 + 2;
    } while (iVar10 < param_5);
  }
  F_00d86610(param_1,param_4,param_5);
  return;
}

/* ref: FUN_00d86c30 */
GEN_LIB GEN_NOFRAME unsigned int F_00d86c30(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd86c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL(0x50, 0);
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 * puVar8;
  uint * this;
  int iVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  
  iVar9 = 0;
  this = param_1;
  if (0 < param_5) {
    do {
      uVar1 = *(undefined8 *)(this + 4);
      (*(undefined8 *)(gen_frame + 0x20)) = uVar1;
      uVar4 = (*(undefined8 *)(gen_frame + 0x20));
      uVar2 = *(undefined8 *)(this + 6);
      fVar13 = gen_bits2f(this[7]);
      (*(undefined8 *)(gen_frame + 0x28)) = uVar2;
      uVar5 = (*(undefined8 *)(gen_frame + 0x28));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      puVar8 = ((undefined8 *)GEN_TOP(((*((short *)GEN_TOP((param_2 + iVar9 * 2))) + 1) * 0x10 + param_3)));
      uVar1 = *puVar8;
      (*(undefined8 *)(gen_frame + 0x30)) = uVar1;
      uVar6 = (*(undefined8 *)(gen_frame + 0x30));
      uVar2 = puVar8[1];
      (*(undefined8 *)(gen_frame + 0x38)) = uVar2;
      uVar7 = (*(undefined8 *)(gen_frame + 0x38));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      fVar3 = *((float *)GEN_TOP(((int)puVar8 + 0xc)));
      fVar10 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4))) -
               fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0))) + fVar3 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0));
      fVar11 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) -
               fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4))) + fVar3 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4));
      fVar13 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0))) -
               fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0))) + fVar3 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0));
      fVar16 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) +
               ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)));
      uVar1 = *puVar8;
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x10));
      (*(undefined8 *)(gen_frame + 0x18)) = puVar8[1];
      uVar2 = (*(undefined8 *)(gen_frame + 0x18));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = gen_bits2f((uint)puVar8[1]);
      (*(undefined8 *)(gen_frame + 0x0)) = *(undefined8 *)this;
      this[4] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar13 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar11) +
                                  fVar3 * fVar10) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar16);
      this[5] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar10 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar13) +
                                  fVar3 * fVar11) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar16);
      this[6] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar11 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar10) +
                                  fVar3 * fVar13) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar16);
      this[7] = (uint)gen_fl2bits(fVar16 * fVar3 -
                                  ((fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0))) +
                                  fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0))));
      (*(undefined8 *)(gen_frame + 0x8)) = *(undefined8 *)(this + 2);
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x18)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x20)) = uVar4;
      (*(undefined8 *)(gen_frame + 0x28)) = uVar5;
      (*(undefined8 *)(gen_frame + 0x30)) = uVar6;
      (*(undefined8 *)(gen_frame + 0x38)) = uVar7;
      F_00d950d0(this GEN_EDX_ARG,puVar8,&(*(undefined8 *)(gen_frame + 0x0)));
      uVar12 = *(uint *)&REFG(undefined, 0x10ab9c4) ^ this[1];
      uVar14 = *(uint *)&REFG(undefined, 0x10ab9c8) ^ this[2];
      uVar15 = *(uint *)&REFG(undefined, 0x10ab9cc) ^ this[3];
      *this = *(uint *)&REFG(undefined, 0x10ab9c0) ^ *this;
      this[1] = uVar12;
      this[2] = uVar14;
      this[3] = uVar15;
      iVar9 = iVar9 + 1;
      this = this + 0xc;
    } while (iVar9 < param_5);
  }
  F_00d86610(param_1,param_4,param_5);
  return;
}

/* ref: FUN_00d86de0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d86de0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd86de0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  F_00d86310(param_1 GEN_EDX_FWD,0xffffffff,param_2);
  iVar8 = 0;
  uVar6 = F_00d86240(param_1 GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x4c)) = ((undefined8 *)GEN_TOP((param_4 + 0x10)));
    fVar22 = *(float *)&REFG(undefined, 0x11380f0);
    fVar23 = *(float *)&REFG(undefined, 0x11380f4);
    fVar24 = *(float *)&REFG(undefined, 0x11380f8);
    fVar25 = *(float *)&REFG(undefined, 0x11380fc);
    do {
      uVar1 = *(*(undefined8 * PTR32 *)(gen_frame + 0x4c));
      fVar11 = *((float *)GEN_TOP(((int)(*(undefined8 * PTR32 *)(gen_frame + 0x4c)) + 0xc)));
      fVar10 = *((float *)GEN_TOP(((int)param_2 + 0xc)));
      (*(undefined8 *)(gen_frame + 0x20)) = uVar1;
      uVar4 = (*(undefined8 *)(gen_frame + 0x20));
      uVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x4c))[1];
      (*(undefined8 *)(gen_frame + 0x28)) = uVar2;
      uVar2 = (*(undefined8 *)(gen_frame + 0x28));
      uVar3 = *param_2;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      (*(undefined8 *)(gen_frame + 0x30)) = uVar3;
      uVar3 = (*(undefined8 *)(gen_frame + 0x30));
      uVar1 = param_2[1];
      (*(undefined8 *)(gen_frame + 0x38)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x38));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) = gen_bits2f((uint)uVar3);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      fVar9 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4))) +
              fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0))) - fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0));
      fVar12 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) +
               fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4))) - fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4));
      fVar14 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0))) +
               fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0))) - fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0));
      fVar20 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) +
               ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)));
      (*(undefined8 *)(gen_frame + 0x20)) = uVar4;
      (*(undefined8 *)(gen_frame + 0x28)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x30)) = uVar3;
      (*(undefined8 *)(gen_frame + 0x38)) = uVar1;
      uVar5 = F_00d86120(param_1 GEN_EDX_ARG,iVar8);
      iVar7 = (int)(short)uVar5;
      uVar1 = *((undefined8 *)GEN_TOP((param_4 + 0x10 + iVar7 * 0x30)));
      fVar11 = *((float *)GEN_TOP((param_4 + iVar7 * 0x30 + 0x1c)));
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x10));
      uVar2 = *((undefined8 *)GEN_TOP((param_4 + 0x18 + iVar7 * 0x30)));
      (*(undefined8 *)(gen_frame + 0x18)) = uVar2;
      uVar2 = (*(undefined8 *)(gen_frame + 0x18));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = gen_bits2f((uint)uVar2);
      fVar15 = fVar9 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0));
      fVar16 = fVar12 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4));
      fVar17 = fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0));
      fVar10 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar12 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar14) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar20) +
               fVar11 * fVar9;
      fVar13 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar14 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar9) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar20) +
               fVar11 * fVar12;
      fVar12 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar9 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar12) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar20) +
               fVar11 * fVar14;
      (*(float *)((char *)&auVar18 + 0)) = fVar11 * fVar20 - ((fVar16 + fVar15) + fVar17);
      (*(float *)((char *)&auVar18 + 4)) = fVar11 * fVar20 - ((fVar16 + fVar15) + fVar17);
      (*(float *)((char *)&auVar18 + 8)) = fVar11 * fVar20 - ((fVar16 + fVar15) + fVar17);
      (*(float *)((char *)&auVar18 + 12)) = fVar11 * fVar20 - ((fVar16 + fVar15) + fVar17);
      fVar11 = fVar12 * fVar12 + fVar10 * fVar10;
      fVar9 = (*(float *)((char *)&auVar18 + 12)) * (*(float *)((char *)&auVar18 + 12)) + fVar13 * fVar13;
      fVar14 = fVar10 * fVar10 + fVar12 * fVar12;
      fVar15 = fVar13 * fVar13 + (*(float *)((char *)&auVar18 + 12)) * (*(float *)((char *)&auVar18 + 12));
      fVar16 = fVar9 + fVar11;
      fVar11 = fVar11 + fVar9;
      fVar9 = fVar15 + fVar14;
      fVar14 = fVar14 + fVar15;
      (*(undefined4 *)((char *)&auVar19 + 4)) = (undefined4)gen_fl2bits(fVar11);
      (*(undefined4 *)((char *)&auVar19 + 0)) = (undefined4)gen_fl2bits(fVar16);
      (*(undefined4 *)((char *)&auVar19 + 8)) = (undefined4)gen_fl2bits(fVar9);
      (*(undefined4 *)((char *)&auVar19 + 12)) = (undefined4)gen_fl2bits(fVar14);
      gen_rsqrtps(&(auVar19), &(auVar18), &(auVar19));
      fVar15 = (*(float *)((char *)&auVar19 + 0));
      fVar17 = (*(float *)((char *)&auVar19 + 4));
      fVar20 = (*(float *)((char *)&auVar19 + 8));
      fVar21 = (*(float *)((char *)&auVar19 + 12));
      (*(float *)(gen_frame + 0x0)) = ((fVar22 - (fVar15 * fVar16) * fVar15) * (*(float *)&REFG(undefined, 0x1138100) * fVar15)) *
                 fVar10;
      (*(float *)(gen_frame + 0x4)) = ((fVar23 - (fVar17 * fVar11) * fVar17) * (*(float *)&REFG(undefined, 0x1138104) * fVar17)) *
                  fVar13;
      (*(float *)(gen_frame + 0x8)) = ((fVar24 - (fVar20 * fVar9) * fVar20) * (*(float *)&REFG(undefined, 0x1138108) * fVar20)) *
                  fVar12;
      (*(float *)(gen_frame + 0xc)) = ((fVar25 - (fVar21 * fVar14) * fVar21) * (*(float *)&REFG(undefined, 0x113810c) * fVar21)) *
                  (*(float *)((char *)&auVar18 + 12));
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x18)) = uVar2;
      F_00d86740(&(*(float *)(gen_frame + 0x0)),param_3);
      F_00d86310(param_1 GEN_EDX_ARG,iVar8,&(*(float *)(gen_frame + 0x0)));
      (*(undefined8 * PTR32 *)(gen_frame + 0x4c)) = (*(undefined8 * PTR32 *)(gen_frame + 0x4c)) + 6;
      iVar8 = iVar8 + 1;
      uVar6 = F_00d86240(param_1 GEN_EDX_ARG);
    } while (iVar8 < (int)uVar6);
  }
  return uVar6;
}

/* ref: FUN_00d86ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d86ff0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd86ff0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  (*(int *)(gen_frame + 0x3c)) = param_1;
  iVar1 = *((int *)GEN_TOP((param_1 + 0xc)));
  ((int *)(gen_frame + 0x0))[0] = iVar1;
  ((int *)(gen_frame + 0x0))[1] = 0;
  ((int *)(gen_frame + 0x0))[2] = 0;
  ((int *)(gen_frame + 0x0))[3] = 0x80000000;
  ((int *)(gen_frame + 0x0))[4] = 0;
  ((int *)(gen_frame + 0x0))[5] = 0;
  ((int *)(gen_frame + 0x0))[6] = 0x80000000;
  ((int *)(gen_frame + 0x0))[7] = 0;
  ((int *)(gen_frame + 0x0))[8] = 0;
  ((int *)(gen_frame + 0x0))[9] = 0x80000000;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0x80000000;
  iVar1 = *((int *)GEN_TOP((iVar1 + 0x1c)));
  uVar4 = iVar1 + 3U & 0xfffffffc;
  (*(int *)(gen_frame + 0x2c)) = iVar1;
  if (0 < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 4,uVar4,0x30);
  }
  if ((int)(((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 1,uVar4,0x30);
  }
  if ((int)(((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 7,uVar4,4);
  }
  if ((int)(((int *)(gen_frame + 0x0))[6] & 0x3fffffffU) < iVar1) {
    iVar3 = (((int *)(gen_frame + 0x0))[6] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 4,iVar3,0x30);
  }
  ((int *)(gen_frame + 0x0))[5] = iVar1;
  if ((int)(((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) < iVar1) {
    iVar3 = (((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 1,iVar3,0x30);
  }
  ((int *)(gen_frame + 0x0))[2] = iVar1;
  if ((int)(((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) < iVar1) {
    iVar3 = (((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 7,iVar3,4);
  }
  ((int *)(gen_frame + 0x0))[8] = iVar1;
  iVar1 = *((int *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0x40)));
  uVar4 = iVar1 + 3U & 0xfffffffc;
  if ((int)((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x30)),uVar4,4);
  }
  if ((int)((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) < iVar1) {
    iVar3 = ((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x30)),iVar3,4);
  }
  iVar3 = iVar1 - (*(int *)(gen_frame + 0x34));
  puVar2 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x34)) * 4)));
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  (*(int *)(gen_frame + 0x34)) = iVar1;
  F_00d31730(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(F_00d321b0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG)));
  F_00d86de0((*(int *)(gen_frame + 0x3c)) GEN_EDX_ARG,param_2,param_3,*puVar2);
  uVar4 = F_009ffa70(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00d871c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d871c0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd871c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00d321b0(param_4 GEN_EDX_FWD)));
  uVar2 = F_00d86de0(param_1 GEN_EDX_ARG,param_2,param_3,*puVar1);
  return uVar2;
}

/* ref: FUN_00d871f0 */
GEN_LIB GEN_FRAME unsigned int F_00d871f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd871f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
  (*(int *)(gen_frame + 0x8c)) = *((int *)GEN_TOP((param_3 + 0x1c)));
  (*(uint *)(gen_frame + 0x98)) = 0;
  if (0 < *((int *)GEN_TOP((param_3 + 0x1c)))) {
    (*(int *)(gen_frame + 0x90)) = 0;
    do {
      iVar4 = 0;
      (*(uint *)(gen_frame + 0x94)) = (*(uint *)(gen_frame + 0x98)) & 0xffff;
      if (0 < param_1[1]) {
        do {
          F_00da4df0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x18))) + (*(int *)(gen_frame + 0x90)) * 8))) & 0xfffffffe);
          iVar1 = *param_1;
          ((undefined2 *)(gen_frame + 0x9c))[0] = 0xff;
          F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((uint *)GEN_TOP((iVar1 + iVar4 * 4))) & 0xfffffffe,((undefined2 *)(gen_frame + 0x9c)),1);
          F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((uint *)GEN_TOP((*param_2 + iVar4 * 4))) & 0xfffffffe,
                       *((uint *)GEN_TOP((*param_1 + iVar4 * 4))) & 0xfffffffe,1);
          F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined2 *)(gen_frame + 0x9c)),*((uint *)GEN_TOP((*param_2 + iVar4 * 4))) & 0xfffffffe,1);
          uVar3 = 0;
          do {
            if ((uVar3 != (ushort)(*(uint *)(gen_frame + 0x98))) &&
               (uVar2 = F_00da43b0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,
                                     *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x18))) + (short)uVar3 * 8))) &
                                     0xfffffffe), uVar2 == 0)) {
              (*(uint *)(gen_frame + 0x94)) = (uint)uVar3;
              break;
            }
            uVar3 = uVar3 + 1;
          } while ((short)uVar3 < (*(int *)(gen_frame + 0x8c)));
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          if ((short)(*(uint *)(gen_frame + 0x94)) != (ushort)(*(uint *)(gen_frame + 0x98))) {
            if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
            }
            break;
          }
          if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1[1]);
      }
      *((short *)GEN_TOP((param_4 + (*(int *)(gen_frame + 0x90)) * 2))) = (short)(*(uint *)(gen_frame + 0x94));
      iVar4 = (int)(short)((*(uint *)(gen_frame + 0x98)) + 1);
      (*(uint *)(gen_frame + 0x98)) = (*(uint *)(gen_frame + 0x98)) + 1;
      (*(int *)(gen_frame + 0x90)) = iVar4;
    } while (iVar4 < (*(int *)(gen_frame + 0x8c)));
  }
  return 0;
}

/* ref: FUN_00d87380 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d87380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd87380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00d871f0(param_1,param_2,*((undefined4 *)GEN_TOP(((int)this + 0xc))),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return;
}

/* ref: FUN_00d873a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d873a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd873a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00d873c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d873c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd873c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d873d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d873d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd873d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3eb0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00d87410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d87410(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd87410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d87430 */
GEN_LIB GEN_FRAME uint F_00d87430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd87430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_2 * 2,param_1);
  return uVar2;
}

/* ref: FUN_00d87460 */
GEN_LIB GEN_FRAME uint F_00d87460(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd87460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_2 << 4,param_1);
  return uVar2;
}

/* ref: FUN_00d87490 */
GEN_LIB GEN_FRAME uint F_00d87490(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd87490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92430(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: FUN_00d874c0 */
GEN_LIB GEN_FRAME uint F_00d874c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd874c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92430(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: FUN_00d87580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d87580(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd87580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0x2c;
  return param_2;
}

/* ref: FUN_00d875a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d875a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd875a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *(uint *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = param_2 << 4;
  return param_1;
}

/* ref: FUN_00d87680 */
GEN_LIB GEN_FRAME uint F_00d87680(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd87680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d876b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d876b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd876b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkaMirroredSkeleton::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d876f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd876f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d86410(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d87730 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d87730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd87730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d87770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d87770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd87770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d877b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d877b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd877b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d87830 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d87830(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd87830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d91340(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0x80000000;
  return in_ecx;
}

/* ref: FUN_00d87850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d87850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd87850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined * this_00;
  int iVar7;
  int iVar8;
  undefined * local_c;
  int local_8;
  
  F_00d914e0(this GEN_EDX_FWD,param_1);
  piVar6 = ((int *)GEN_TOP(((int)this + 4)));
  *piVar6 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  iVar7 = *((int *)GEN_TOP(((int)this + 8)));
  iVar2 = *((int *)GEN_TOP((param_1 + 8)));
  local_8 = iVar7;
  if (iVar2 <= iVar7) {
    local_8 = iVar2;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 0xc))) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar6,iVar4,8);
  }
  iVar7 = (iVar7 - iVar2) - 1;
  if (-1 < iVar7) {
    local_c = ((undefined *)GEN_TOP((*piVar6 + iVar2 * 8 + 4 + iVar7 * 8)));
    do {
      F_00d91510(local_c GEN_EDX_ARG);
      local_c = ((undefined *)GEN_TOP(((int)local_c - 8)));
      iVar7 = iVar7 - 1;
    } while (-1 < iVar7);
  }
  iVar7 = *((int *)GEN_TOP((param_1 + 4)));
  iVar4 = *piVar6;
  iVar8 = 0;
  if (0 < local_8) {
    this_00 = ((undefined *)GEN_TOP((iVar4 + 4)));
    do {
      *((undefined4 *)GEN_TOP(((int)this_00 - 4))) = *((undefined4 *)GEN_TOP((iVar7 + iVar8 * 8)));
      F_00d91540(this_00 GEN_EDX_ARG,(iVar7 - iVar4) + (int)this_00);
      iVar8 = iVar8 + 1;
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)));
    } while (iVar8 < local_8);
  }
  piVar1 = ((int *)GEN_TOP((param_1 + 4)));
  puVar5 = ((undefined4 *)GEN_TOP((*piVar6 + local_8 * 8)));
  param_1 = iVar2 - local_8;
  if (param_1 < 1) {
    *((int *)GEN_TOP(((int)this + 8))) = iVar2;
    return (uint)this;
  }
  iVar7 = (*piVar1 + local_8 * 8) - (int)puVar5;
  do {
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar5 = *((undefined4 *)GEN_TOP((iVar7 + (int)puVar5)));
      F_00d914e0(puVar5 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar5 + 1));
    }
    puVar5 = puVar5 + 2;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  *((int *)GEN_TOP(((int)this + 8))) = iVar2;
  return (uint)this;
}

/* ref: FUN_00d87980 */
GEN_LIB GEN_FRAME uint F_00d87980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(ushort * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd87980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(ushort * param_3 = (ushort *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  ushort * puVar1;
  float * pfVar2;
  float fVar3;
  uint uVar4;
  float * pfVar5;
  ushort * puVar6;
  int iVar7;
  ushort uVar8;
  
  if (REFG(char, 0x15d9a4c) == '\0') {
    F_00d91330();
    uVar4 = F_00d91120(&REFG(char, 0x15d9a4c));
    if (REFG(char, 0x15d9a4c) == '\0') {
      return uVar4;
    }
  }
  iVar7 = 0;
  uVar4 = param_7;
  if (0 < (int)param_7) {
    uVar8 = *param_3;
    if (0 < (int)(param_7 - 1)) {
      pfVar5 = param_4;
      puVar6 = param_3;
      do {
        if (param_2 <= (int)(uint)uVar8) break;
        puVar1 = ((ushort *)GEN_TOP(((param_6 - (int)param_3) + (int)puVar6)));
        pfVar2 = ((float *)GEN_TOP(((param_5 - (int)param_4) + (int)pfVar5)));
        fVar3 = *pfVar5;
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
        pfVar5 = pfVar5 + 1;
        *((float *)GEN_TOP((param_1 + (uint)uVar8 * 4))) = (float)*puVar1 * *pfVar2 + fVar3;
        uVar8 = *puVar6;
      } while (iVar7 < (int)(param_7 - 1));
    }
    uVar4 = (uint)uVar8;
    if ((int)uVar4 < param_2) {
      *((float *)GEN_TOP((param_1 + uVar4 * 4))) =
           (float)*((ushort *)GEN_TOP((param_6 + iVar7 * 2))) * *((float *)GEN_TOP((param_5 + iVar7 * 4))) +
           param_4[iVar7];
    }
  }
  return uVar4;
}

/* ref: FUN_00d87ad0 */
GEN_LIB GEN_FRAME float F_00d87ad0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd87ad0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: FUN_00d87c80 */
GEN_LIB GEN_FRAME byte F_00d87c80(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd87c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1[2] * REFG(float, 0x11383c0);
  fVar3 = param_1[3] * REFG(float, 0x11383c0);
  bVar1 = ((char)(int)(param_1[1] * REFG(float, 0x11383c0)) + '\a') * '\x10' |
          (char)(int)(*param_1 * REFG(float, 0x11383c0)) + 7U;
  *param_2 = bVar1;
  param_2[1] = ((char)(int)fVar3 + '\a') * '\x10' | (char)(int)fVar2 + 7U;
  return bVar1;
}

/* ref: FUN_00d87cf0 */
GEN_LIB GEN_NOFRAME byte F_00d87cf0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd87cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float * pfVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((*(uint *)&REFG(undefined, 0x15d9a54) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d9a54) = *(uint *)&REFG(undefined, 0x15d9a54) | 1;
    REFG(float, 0x15d9a50) = ((float)GEN_TOF(SQRT(*(double *)&REFG(undefined, 0x1092098)))) * *(float *)&REFG(undefined, 0x11383c4);
  }
  fVar7 = ABS(*param_1);
  fVar8 = ABS(param_1[1]);
  fVar9 = ABS(param_1[2]);
  fVar10 = ABS(param_1[3]);
  ((float *)(gen_frame + 0x0))[0] = fVar7;
  ((float *)(gen_frame + 0x0))[1] = fVar8;
  ((float *)(gen_frame + 0x0))[2] = fVar9;
  ((float *)(gen_frame + 0x0))[3] = fVar10;
  uVar2 = (uint)((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && (!(fVar8 < fVar7) && fVar8 != fVar7));
  pfVar1 = ((float *)(gen_frame + 0x0)) + uVar2;
  if ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(*pfVar1)) && (!(fVar9 < *pfVar1) && fVar9 != *pfVar1)) {
    uVar2 = 2;
  }
  pfVar1 = ((float *)(gen_frame + 0x0)) + uVar2;
  if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(*pfVar1)) && (!(fVar10 < *pfVar1) && fVar10 != *pfVar1)) {
    uVar2 = 3;
  }
  uVar5 = (uVar2 == 0) + 1;
  fVar7 = param_1[uVar2 == 0] * REFG(float, 0x15d9a50);
  iVar6 = uVar5 + (uVar5 == uVar2);
  bVar3 = (char)(int)(param_1[iVar6] * REFG(float, 0x15d9a50)) + 0x3f;
  (*(byte *)(gen_frame + 0x1d)) = bVar3;
  uVar5 = iVar6 + 1;
  bVar4 = (char)(int)(param_1[(uVar5 == uVar2) + uVar5] * REFG(float, 0x15d9a50)) + 0x3f;
  param_2[2] = bVar4;
  (*(byte *)(gen_frame + 0x1e)) = bVar4;
  *param_2 = (byte)uVar2 << 7 | (char)(int)fVar7 + 0x3fU;
  param_2[1] = ((byte)uVar2 & 0xfe) << 6 | bVar3;
  pfVar1 = param_1 + uVar2;
  if (!GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)) {
    param_2[2] = bVar4 | 0x80;
    return bVar4 | 0x80;
  }
  param_2[2] = bVar4;
  return bVar4;
}

/* ref: FUN_00d87e30 */
GEN_LIB GEN_NOFRAME uint F_00d87e30(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd87e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  float * pfVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(uint *)&REFG(undefined, 0x15d9a5c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d9a5c) = *(uint *)&REFG(undefined, 0x15d9a5c) | 1;
    REFG(float, 0x15d9a58) = ((float)GEN_TOF(SQRT(*(double *)&REFG(undefined, 0x1092098)))) * *(float *)&REFG(undefined, 0x11383c8);
  }
  fVar8 = ABS(*param_1);
  fVar9 = ABS(param_1[1]);
  fVar10 = ABS(param_1[2]);
  fVar11 = ABS(param_1[3]);
  ((float *)(gen_frame + 0x0))[0] = fVar8;
  ((float *)(gen_frame + 0x0))[1] = fVar9;
  (*(undefined1 *)(gen_frame + 0x8)) = (undefined1)(uint)gen_fl2bits(fVar10);
  (*(undefined1 *)(gen_frame + 0x9)) = (undefined1)((uint)gen_fl2bits(fVar10) >> 8);
  (*(char *)(gen_frame + 0xa)) = (char)((uint)gen_fl2bits(fVar10) >> 0x10);
  (*(undefined1 *)(gen_frame + 0xb)) = (undefined1)((uint)gen_fl2bits(fVar10) >> 0x18);
  (*(undefined2 *)(gen_frame + 0xe)) = (undefined2)((uint)gen_fl2bits(fVar11) >> 0x10);
  uVar2 = (uint)((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && (!(fVar9 < fVar8) && fVar9 != fVar8));
  pfVar1 = ((float *)(gen_frame + 0x0)) + uVar2;
  if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(*pfVar1)) && (!(fVar10 < *pfVar1) && fVar10 != *pfVar1)) {
    uVar2 = 2;
  }
  pfVar1 = ((float *)(gen_frame + 0x0)) + uVar2;
  if ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(*pfVar1)) && (!(fVar11 < *pfVar1) && fVar11 != *pfVar1)) {
    uVar2 = 3;
  }
  sVar4 = (short)(int)(param_1[uVar2 == 0] * REFG(float, 0x15d9a58)) + 0x7ff;
  (*(undefined1 *)(gen_frame + 0x8)) = (undefined1)sVar4;
  uVar6 = (uVar2 == 0) + 1;
  iVar7 = uVar6 + (uVar6 == uVar2);
  sVar3 = (short)(int)(param_1[iVar7] * REFG(float, 0x15d9a58)) + 0x7ff;
  (*(char *)(gen_frame + 0xa)) = (char)sVar3;
  uVar6 = iVar7 + 1;
  sVar5 = (short)(int)(param_1[(uVar6 == uVar2) + uVar6] * REFG(float, 0x15d9a58)) + 0x7ff;
  (*(undefined1 *)(gen_frame + 0xc)) = (undefined1)sVar5;
  (*(byte *)(gen_frame + 0xd)) = (byte)((ushort)sVar5 >> 8);
  *param_2 = (*(undefined1 *)(gen_frame + 0x8));
  param_2[1] = (byte)((ushort)sVar4 >> 8) | (*(char *)(gen_frame + 0xa)) << 4;
  param_2[2] = (char)((int)CONCAT13((*(byte *)(gen_frame + 0xd)),CONCAT12((*(undefined1 *)(gen_frame + 0xc)),sVar3)) >> 4);
  param_2[3] = (*(undefined1 *)(gen_frame + 0xc));
  pfVar1 = param_1 + uVar2;
  param_2[4] = ((!GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)) * '\x04' | (byte)uVar2) << 4
               | (*(byte *)(gen_frame + 0xd));
  return (int)CONCAT22((*(undefined2 *)(gen_frame + 0xe)),sVar5) >> 8;
}

/* ref: FUN_00d87f90 */
GEN_LIB GEN_NOFRAME uint F_00d87f90(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd87f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  float * pfVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((*(uint *)&REFG(undefined, 0x15d9a64) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d9a64) = *(uint *)&REFG(undefined, 0x15d9a64) | 1;
    REFG(float, 0x15d9a60) = ((float)GEN_TOF(SQRT(*(double *)&REFG(undefined, 0x1092098)))) * *(float *)&REFG(undefined, 0x11383cc);
  }
  fVar10 = ABS(*param_1);
  fVar11 = ABS(param_1[1]);
  fVar12 = ABS(param_1[2]);
  fVar13 = ABS(param_1[3]);
  ((float *)(gen_frame + 0x0))[0] = fVar10;
  ((float *)(gen_frame + 0x0))[1] = fVar11;
  (*(ushort *)(gen_frame + 0x8)) = (ushort)(uint)gen_fl2bits(fVar12);
  (*(ushort *)(gen_frame + 0xa)) = (ushort)((uint)gen_fl2bits(fVar12) >> 0x10);
  bVar2 = (!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && (!(fVar11 < fVar10) && fVar11 != fVar10);
  uVar9 = (uint)bVar2;
  pfVar1 = ((float *)(gen_frame + 0x0)) + (short)(ushort)bVar2;
  if ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(*pfVar1)) && (!(fVar12 < *pfVar1) && fVar12 != *pfVar1)) {
    uVar9 = 2;
  }
  pfVar1 = ((float *)(gen_frame + 0x0)) + (short)uVar9;
  if ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(*pfVar1)) && (!(fVar13 < *pfVar1) && fVar13 != *pfVar1)) {
    uVar9 = 3;
  }
  iVar8 = (int)(short)uVar9;
  uVar6 = (short)(int)(param_1[iVar8 == 0] * REFG(float, 0x15d9a60)) + 0x3fff;
  iVar4 = (iVar8 == 0) + 1;
  (*(ushort *)(gen_frame + 0x8)) = uVar6;
  iVar4 = iVar4 + (uint)(iVar4 == iVar8);
  iVar5 = iVar4 + 1;
  uVar7 = (short)(int)(param_1[iVar4] * REFG(float, 0x15d9a60)) + 0x3fff;
  (*(ushort *)(gen_frame + 0xa)) = uVar7;
  uVar3 = (short)(int)(param_1[(uint)(iVar5 == iVar8) + iVar5] * REFG(float, 0x15d9a60)) + 0x3fff;
  (*(ushort *)(gen_frame + 0xc)) = uVar3;
  *param_2 = (ushort)(uVar9 << 0xf) | uVar6;
  param_2[1] = (ushort)((uVar9 & 0xfffffffe) << 0xe) | uVar7;
  pfVar1 = param_1 + iVar8;
  if (!GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)) {
    param_2[2] = uVar3 | 0x8000;
    return (uint)param_2;
  }
  param_2[2] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d880f0 */
GEN_LIB GEN_FRAME uint F_00d880f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd880f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return (uint)param_1;
}

/* ref: FUN_00d88120 */
GEN_LIB GEN_FRAME unsigned int F_00d88120(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd88120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  fVar8 = REFG(float, 0x1087f04);
  if ((*(uint *)&REFG(undefined, 0x15d9a6c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d9a6c) = *(uint *)&REFG(undefined, 0x15d9a6c) | 1;
    REFG(float, 0x15d9a68) = REFG(float, 0x1087f04) / (((float)GEN_TOF(SQRT(*(double *)&REFG(undefined, 0x1092098)))) * *(float *)&REFG(undefined, 0x11383c4));
  }
  fVar4 = REFG(float, 0x15d9a68);
  bVar1 = *param_1;
  bVar2 = param_1[1];
  bVar3 = param_1[2];
  uVar5 = (bVar2 & 0x80 | (uint)(bVar1 >> 1)) >> 6;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[uVar5 == 0] = ((float)GEN_TOF(((short)(ushort)(bVar1 & 0x7f) - 0x3f))) * fVar4;
  uVar6 = (uVar5 == 0) + 1;
  iVar7 = uVar6 + (uVar6 == uVar5);
  param_2[iVar7] = ((float)GEN_TOF(((short)(ushort)(bVar2 & 0x7f) - 0x3f))) * fVar4;
  uVar6 = iVar7 + 1;
  param_2[(uVar6 == uVar5) + uVar6] = ((float)GEN_TOF(((short)(ushort)(bVar3 & 0x7f) - 0x3f))) * fVar4;
  fVar8 = SQRT((((fVar8 - *param_2 * *param_2) - param_2[1] * param_2[1]) - param_2[2] * param_2[2])
               - param_2[3] * param_2[3]);
  param_2[uVar5] = fVar8;
  if ((param_1[2] & 0x80) != 0) {
    param_2[uVar5] = gen_bits2f((uint)gen_fl2bits(fVar8) ^ REFG(uint, 0x10920d0));
  }
  return 0;
}

/* ref: FUN_00d88280 */
GEN_LIB GEN_FRAME float F_00d88280(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd88280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 0.0;
  fVar3 = (float)(*((uint *)GEN_TOP(param_1)) >> 0x12 & 0x3ff) * *(float *)&REFG(undefined, 0x11383d4);
  uVar1 = *((uint *)GEN_TOP(param_1)) & 0x3ffff;
  fVar7 = REFG(float, 0x1087f04) - fVar3 * fVar3;
  iVar2 = (int)SQRT((float)uVar1);
  fVar5 = (float)iVar2 * REFG(float, 0x10928e4);
  fVar3 = (((float)iVar2 * *(float *)&REFG(undefined, 0x11383d0)) * REFG(float, 0x1088068)) * REFG(float, 0x110e250);
  if (GEN_ISNAN(fVar5) == (GEN_ISNAN(fVar5) || fVar5 == 0.0)) {
    fVar8 = (((float)(int)(uVar1 - iVar2 * iVar2) / fVar5) * REFG(float, 0x1088068)) * REFG(float, 0x110e250);
  }
  fVar6 = SQRT(REFG(float, 0x1087f04) - fVar7 * fVar7);
  fVar5 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar3))));
  fVar4 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar8))));
  fVar4 = (fVar4 * fVar5) * fVar6;
  *param_2 = fVar4;
  fVar8 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar8))));
  fVar5 = (fVar8 * fVar5) * fVar6;
  param_2[1] = fVar5;
  fVar3 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar3))));
  fVar3 = fVar3 * fVar6;
  param_2[2] = fVar3;
  param_2[3] = fVar7;
  uVar1 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  if ((*((uint *)GEN_TOP(param_1)) & 0x10000000) != 0) {
    *param_2 = gen_bits2f((uint)gen_fl2bits(fVar4) ^ REFG(uint, 0x10920d0));
  }
  if ((*((uint *)GEN_TOP(param_1)) & 0x20000000) != 0) {
    param_2[1] = gen_bits2f((uint)gen_fl2bits(fVar5) ^ uVar1);
  }
  if ((*((uint *)GEN_TOP(param_1)) & 0x40000000) != 0) {
    fVar3 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ uVar1);
    param_2[2] = fVar3;
  }
  if ((*((uint *)GEN_TOP(param_1)) & 0x80000000) != 0) {
    param_2[3] = gen_bits2f((uint)gen_fl2bits(fVar7) ^ uVar1);
  }
  return fVar3;
}

/* ref: FUN_00d88410 */
GEN_LIB GEN_FRAME unsigned int F_00d88410(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd88410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  fVar10 = REFG(float, 0x1087f04);
  if ((*(uint *)&REFG(undefined, 0x15d9a74) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d9a74) = *(uint *)&REFG(undefined, 0x15d9a74) | 1;
    REFG(float, 0x15d9a70) = REFG(float, 0x1087f04) / (((float)GEN_TOF(SQRT(*(double *)&REFG(undefined, 0x1092098)))) * *(float *)&REFG(undefined, 0x11383c8));
  }
  fVar6 = REFG(float, 0x15d9a70);
  bVar1 = *((byte *)GEN_TOP(((int)param_1 + 1)));
  uVar3 = *param_1;
  uVar5 = param_1[1];
  uVar4 = *((ushort *)GEN_TOP(((int)param_1 + 3)));
  bVar2 = (byte)param_1[2] >> 4;
  uVar9 = bVar2 & 3;
  uVar7 = (uint)((bVar2 & 3) == 0);
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[uVar7] = ((float)GEN_TOF(((short)(uVar3 & 0xfff) - 0x7ff))) * fVar6;
  uVar7 = uVar7 + 1;
  iVar8 = uVar7 + (uVar7 == uVar9);
  param_2[iVar8] =
       ((float)GEN_TOF(((short)((ushort)(byte)uVar5 << 4 | (ushort)(bVar1 >> 4)) - 0x7ff))) * fVar6;
  uVar7 = iVar8 + 1;
  param_2[(uVar7 == uVar9) + uVar7] = ((float)GEN_TOF(((short)(uVar4 & 0xfff) - 0x7ff))) * fVar6;
  fVar10 = SQRT((((fVar10 - *param_2 * *param_2) - param_2[1] * param_2[1]) -
                param_2[2] * param_2[2]) - param_2[3] * param_2[3]);
  param_2[uVar9] = fVar10;
  if ((param_1[2] & 0x40) != 0) {
    param_2[uVar9] = gen_bits2f((uint)gen_fl2bits(fVar10) ^ REFG(uint, 0x10920d0));
  }
  return 0;
}

/* ref: FUN_00d88580 */
GEN_LIB GEN_FRAME uint F_00d88580(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd88580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return (uint)param_1;
}

/* ref: FUN_00d885b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d885b0(void)
{
  GEN_ENTER(0xd885b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d885c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d885c0(void)
{
  GEN_ENTER(0xd885c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d885d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d885d0(void)
{
  GEN_ENTER(0xd885d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d885e0 */
GEN_LIB GEN_NOFRAME float F_00d885e0(void)
{
  GEN_ENTER(0xd885e0u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x10ac160);
}

/* ref: FUN_00d885f0 */
GEN_LIB GEN_NOFRAME float F_00d885f0(void)
{
  GEN_ENTER(0xd885f0u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x11383d8);
}

/* ref: FUN_00d88600 */
GEN_LIB GEN_NOFRAME float F_00d88600(void)
{
  GEN_ENTER(0xd88600u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1088128);
}

/* ref: FUN_00d88610 */
GEN_LIB GEN_NOFRAME float F_00d88610(void)
{
  GEN_ENTER(0xd88610u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x11383dc);
}

/* ref: FUN_00d88620 */
GEN_LIB GEN_NOFRAME float F_00d88620(void)
{
  GEN_ENTER(0xd88620u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x11383e0);
}

/* ref: FUN_00d88630 */
GEN_LIB GEN_NOFRAME float F_00d88630(void)
{
  GEN_ENTER(0xd88630u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x10905c4);
}

/* ref: FUN_00d88640 */
GEN_LIB GEN_FRAME uint F_00d88640(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd88640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  
  if (REFG(char, 0x15d9a80) == '\0') {
    F_00d91330();
    F_00d91120(&REFG(char, 0x15d9a80));
    if (REFG(char, 0x15d9a80) == '\0') {
      return 0;
    }
  }
  iVar1 = *((int *)GEN_TOP((param_2 + param_3 * 4)));
  return iVar1 + (param_4 & 0x7fffffff) + param_1;
}

/* ref: FUN_00d88690 */
GEN_LIB GEN_FRAME uint F_00d88690(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd88690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d886b0 */
GEN_LIB GEN_FRAME uint F_00d886b0(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd886b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d886e0 */
GEN_LIB GEN_FRAME unsigned int F_00d886e0(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd886e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0;
}

/* ref: FUN_00d88740 */
GEN_LIB GEN_FRAME uint F_00d88740(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd88740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  
  fVar8 = REFG(float, 0x1087f04);
  if ((*(uint *)&REFG(undefined, 0x15d9a7c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d9a7c) = *(uint *)&REFG(undefined, 0x15d9a7c) | 1;
    REFG(float, 0x15d9a78) = REFG(float, 0x1087f04) / (((float)GEN_TOF(SQRT(*(double *)&REFG(undefined, 0x1092098)))) * *(float *)&REFG(undefined, 0x11383cc));
  }
  fVar4 = REFG(float, 0x15d9a78);
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar3 = param_1[2];
  uVar7 = ((uint)(*param_1 >> 1) | uVar1 & 0x8000) >> 0xe;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[uVar7 == 0] = ((float)GEN_TOF(((short)(uVar2 & 0x7fff) - 0x3fff))) * fVar4;
  uVar5 = (uVar7 == 0) + 1;
  iVar6 = uVar5 + (uVar5 == uVar7);
  param_2[iVar6] = ((float)GEN_TOF(((short)(uVar1 & 0x7fff) - 0x3fff))) * fVar4;
  uVar5 = iVar6 + 1;
  param_2[(uVar5 == uVar7) + uVar5] = ((float)GEN_TOF(((short)(uVar3 & 0x7fff) - 0x3fff))) * fVar4;
  fVar8 = SQRT(fVar8 - ((param_2[2] * param_2[2] + *param_2 * *param_2) +
                       (param_2[3] * param_2[3] + param_2[1] * param_2[1])));
  param_2[uVar7] = fVar8;
  if ((param_1[2] & 0x8000) != 0) {
    param_2[uVar7] = gen_bits2f((uint)gen_fl2bits(fVar8) ^ REFG(uint, 0x10920d0));
  }
  return 0x8000;
}

/* ref: FUN_00d88890 */
GEN_LIB GEN_FRAME unsigned int F_00d88890(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd88890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte bVar2;
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
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar15 [16];
  
  bVar1 = *param_1;
  bVar2 = param_1[1];
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  fVar3 = REFG(float, 0x11383e4);
  *param_2 = ((float)GEN_TOF(((short)(ushort)(bVar1 & 0xf) - 7))) * REFG(float, 0x11383e4);
  param_2[1] = ((float)GEN_TOF(((short)(ushort)(bVar1 >> 4) - 7))) * fVar3;
  param_2[2] = ((float)GEN_TOF(((short)(ushort)(bVar2 & 0xf) - 7))) * fVar3;
  param_2[3] = ((float)GEN_TOF(((short)(ushort)(bVar2 >> 4) - 7))) * fVar3;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar8 = fVar6 * fVar6 + fVar4 * fVar4;
  fVar9 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar10 = fVar4 * fVar4 + fVar6 * fVar6;
  fVar11 = fVar8 + fVar7;
  fVar7 = fVar7 + fVar8;
  fVar8 = fVar10 + fVar9;
  fVar9 = fVar9 + fVar10;
  (*(undefined4 *)((char *)&auVar15 + 4)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar15 + 0)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar15 + 8)) = (undefined4)gen_fl2bits(fVar8);
  (*(undefined4 *)((char *)&auVar15 + 12)) = (undefined4)gen_fl2bits(fVar9);
  gen_rsqrtps(&(auVar15), &(in_XMM3), &(auVar15));
  fVar14 = (*(float *)((char *)&auVar15 + 0));
  fVar10 = (*(float *)((char *)&auVar15 + 4));
  fVar12 = (*(float *)((char *)&auVar15 + 8));
  fVar13 = (*(float *)((char *)&auVar15 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x11383a4) - (fVar10 * fVar7) * fVar10;
  fVar8 = *(float *)&REFG(undefined, 0x11383a8) - (fVar12 * fVar8) * fVar12;
  fVar9 = *(float *)&REFG(undefined, 0x11383ac) - (fVar13 * fVar9) * fVar13;
  fVar10 = *(float *)&REFG(undefined, 0x11383b4) * fVar10;
  fVar12 = *(float *)&REFG(undefined, 0x11383b8) * fVar12;
  fVar13 = *(float *)&REFG(undefined, 0x11383bc) * fVar13;
  *param_2 = fVar3 * ((*(float *)&REFG(undefined, 0x11383a0) - (fVar14 * fVar11) * fVar14) *
                     (*(float *)&REFG(undefined, 0x11383b0) * fVar14));
  param_2[1] = fVar4 * (fVar7 * fVar10);
  param_2[2] = fVar5 * (fVar8 * fVar12);
  param_2[3] = fVar6 * (fVar9 * fVar13);
  return 0;
}

/* ref: FUN_00d88970 */
GEN_LIB GEN_NOFRAME uint F_00d88970(GEN_P(ulonglong * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd88970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar1 = *param_1;
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 0)) = gen_bits2f((uint)uVar1);
  uVar2 = param_1[1];
  *param_2 = 0;
  (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)(!GEN_ISNAN((float)(*(ulonglong *)(gen_frame + 0x0))) &&
                               (!(0.0 < (float)(*(ulonglong *)(gen_frame + 0x0))) && (float)(*(ulonglong *)(gen_frame + 0x0)) != 0.0)));
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)) = gen_bits2f((uint)(uVar1 >> 0x20));
  bVar4 = GEN_ISNAN((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)));
  bVar10 = (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)) != 0.0;
  bVar5 = 0.0 < (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4));
  (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)uVar2);
  (*(float *)(gen_frame + 0xc)) = gen_bits2f((uint)(uVar2 >> 0x20));
  bVar3 = !GEN_ISNAN((*(float *)(gen_frame + 0xc))) && (!(0.0 < (*(float *)(gen_frame + 0xc))) && (*(float *)(gen_frame + 0xc)) != 0.0);
  fVar19 = ABS((float)(*(ulonglong *)(gen_frame + 0x0)));
  fVar20 = ABS((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)));
  fVar21 = ABS((*(float *)(gen_frame + 0x8)));
  fVar22 = ABS((*(float *)(gen_frame + 0xc)));
  (*(ulonglong *)(gen_frame + 0x0)) = uVar1 & 0x7fffffff7fffffff;
  uVar9 = ((((uint)bVar3 * 2 | (uint)(!GEN_ISNAN((*(float *)(gen_frame + 0x8))) && (!(0.0 < (*(float *)(gen_frame + 0x8))) && (*(float *)(gen_frame + 0x8)) != 0.0)))
            * 2 | (uint)(!bVar4 && (!bVar5 && bVar10))) * 2 | (uint)gen_fl2bits((*(float *)(gen_frame + 0x18)))) << 0x1c;
  *param_2 = uVar9;
  if ((GEN_ISNAN((float)(*(ulonglong *)(gen_frame + 0x0))) != (GEN_ISNAN((float)(*(ulonglong *)(gen_frame + 0x0))) || (float)(*(ulonglong *)(gen_frame + 0x0)) == 0.0)) &&
     (GEN_ISNAN((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4))) != (GEN_ISNAN((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4))) || (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)) == 0.0))) {
    bVar4 = GEN_ISNAN(fVar21);
    bVar10 = bVar4 || fVar21 == 0.0;
    if (bVar4 != bVar10) {
      return (uint)CONCAT11(bVar10 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar21),bVar3);
    }
  }
  fVar11 = fVar19 * fVar19;
  fVar12 = fVar20 * fVar20;
  fVar13 = fVar21 * fVar21;
  fVar14 = (fVar12 + fVar11) + fVar13;
  fVar15 = (fVar12 + fVar11) + fVar13;
  fVar16 = (fVar12 + fVar11) + fVar13;
  memset(&auVar17, 0, 12);
  (*(undefined4 *)((char *)&auVar17 + 12)) = 0;
  (*(undefined4 *)((char *)&auVar18 + 4)) = (undefined4)gen_fl2bits(fVar15);
  (*(undefined4 *)((char *)&auVar18 + 0)) = (undefined4)gen_fl2bits(fVar14);
  (*(undefined4 *)((char *)&auVar18 + 8)) = (undefined4)gen_fl2bits(fVar16);
  (*(undefined4 *)((char *)&auVar18 + 12)) = (undefined4)gen_fl2bits((fVar12 + fVar11) + fVar13);
  gen_rsqrtps(&(auVar18), &(auVar17), &(auVar18));
  fVar11 = (*(float *)((char *)&auVar18 + 0));
  fVar12 = (*(float *)((char *)&auVar18 + 4));
  fVar13 = (*(float *)((char *)&auVar18 + 8));
  fVar19 = gen_bits2f(~-(uint)(fVar14 <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x11383a0) - (fVar11 * fVar14) * fVar11) *
                                        (*(float *)&REFG(undefined, 0x11383b0) * fVar11))) * fVar19;
  fVar20 = gen_bits2f(~-(uint)(fVar15 <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x11383a4) - (fVar12 * fVar15) * fVar12) *
                                        (*(float *)&REFG(undefined, 0x11383b4) * fVar12))) * fVar20;
  fVar21 = gen_bits2f(~-(uint)(fVar16 <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x11383a8) - (fVar13 * fVar16) * fVar13) *
                                        (*(float *)&REFG(undefined, 0x11383b8) * fVar13))) * fVar21;
  if (REFG(float, 0x1087f04) <= ABS(fVar21)) {
    fVar11 = REFG(float, 0x110e250);
    if (0.0 < fVar21) {
      fVar11 = 0.0;
    }
  }
  else {
    fVar11 = F_01051e46(fVar21);
  }
  iVar7 = (int)(((fVar11 * REFG(float, 0x10928e4)) * *(float *)&REFG(undefined, 0x11383f0)) * *(float *)&REFG(undefined, 0x11383ec) +
               REFG(float, 0x1088068));
  fVar11 = ABS(fVar19);
  fVar21 = ABS(fVar20);
  if (fVar21 <= fVar11) {
    fVar21 = fVar21 / (fVar11 + REFG(float, 0x10905c4));
    (*(float *)(gen_frame + 0x18)) = (REFG(float, 0x1087f04) - fVar21 * *(float *)&REFG(undefined, 0x1136e94)) * fVar21 -
                ((fVar21 * *(float *)&REFG(undefined, 0x1136e90)) * fVar21) * fVar21;
  }
  else {
    fVar11 = fVar11 / (fVar21 + REFG(float, 0x10905c4));
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x109ca64) -
                ((REFG(float, 0x1087f04) - fVar11 * *(float *)&REFG(undefined, 0x1136e94)) * fVar11 -
                ((fVar11 * *(float *)&REFG(undefined, 0x1136e90)) * fVar11) * fVar11);
  }
  if (fVar19 < 0.0) {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x110e250) - (*(float *)(gen_frame + 0x18));
  }
  if (fVar20 < 0.0) {
    (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x18))) ^ REFG(uint, 0x10920d0));
  }
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xc)) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xc)) + 0)));
  (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)(longlong)
                               TRUNC(GEN_X87(SQRT((float10)1 - (float10)fVar22)) *
                                     (float10)*(float *)&REFG(undefined, 0x11383e8) + (float10)REFG(float, 0x1088068)));
  uVar8 = (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) << 0x12;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xc)) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0xc)) + 0)));
  (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)(longlong)
                               TRUNC((((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x18))) *
                                     (float10)*(float *)&REFG(undefined, 0x11383f0)) * (float10)(iVar7 * 2) +
                                     (float10)REFG(float, 0x1088068)));
  uVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) + iVar7 * iVar7;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  *param_2 = uVar8 | uVar6 | uVar9;
  return uVar6;
}

/* ref: FUN_00d88c90 */
GEN_LIB GEN_FRAME ushort F_00d88c90(GEN_P(short in_ax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd88c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short in_ax = (short)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (short)(in_ax << GEN_SHC(0x10U - (char)param_2, 0x10U - (char)param_2)) >> GEN_SHC(0x10U - (char)param_2, 0x10U - (char)param_2);
}

/* ref: FUN_00d88cb0 */
GEN_LIB GEN_NOFRAME uint F_00d88cb0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xd88cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  int iVar1;
  
  if (in_ecx == 0) {
    return CONCAT31((int3)((uint)in_eax >> 8),in_eax == 0);
  }
  iVar1 = in_eax >> GEN_SHC((char)in_ecx - 1U, (char)in_ecx - 1U);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00d88d10 */
GEN_LIB GEN_FRAME uint F_00d88d10(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(short * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xd88d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(short * in_edi = (short *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) =
       CONCAT13(*((undefined1 *)GEN_TOP((in_eax - 0xc))),
                CONCAT12(*((undefined1 *)GEN_TOP((in_eax - 0xb))),
                         CONCAT11(*((undefined1 *)GEN_TOP((in_eax - 10))),*((undefined1 *)GEN_TOP((in_eax - 9))))));
  (*(ulonglong *)(gen_frame + 0x8)) = CONCAT17(*((undefined1 *)GEN_TOP((in_eax - 0x10))),
                      CONCAT16(*((undefined1 *)GEN_TOP((in_eax - 0xf))),
                               CONCAT15(*((undefined1 *)GEN_TOP((in_eax - 0xe))),
                                        CONCAT14(*((undefined1 *)GEN_TOP((in_eax - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x8))))));
  *(uint3 *)((undefined1 *)(gen_frame + 0x0)) =
       CONCAT12(*((undefined1 *)GEN_TOP((in_eax - 3))),
                CONCAT11(*((undefined1 *)GEN_TOP((in_eax - 2))),*((undefined1 *)GEN_TOP((in_eax - 1)))));
  *(int *)((undefined1 *)(gen_frame + 0x0)) = CONCAT13(*((undefined1 *)GEN_TOP((in_eax - 4))),*(uint3 *)((undefined1 *)(gen_frame + 0x0)));
  *(undefined8 *)((undefined1 *)(gen_frame + 0x0)) =
       CONCAT17(*((undefined1 *)GEN_TOP((in_eax - 8))),
                CONCAT16(*((undefined1 *)GEN_TOP((in_eax - 7))),
                         CONCAT15(*((undefined1 *)GEN_TOP((in_eax - 6))),
                                  CONCAT14(*((undefined1 *)GEN_TOP((in_eax - 5))),*(int *)((undefined1 *)(gen_frame + 0x0))))));
  if (REFG(char, 0x15d9a81) == '\0') {
    F_00d91330();
    uVar3 = F_00d91120(&REFG(char, 0x15d9a81));
    if (REFG(char, 0x15d9a81) == '\0') {
      return uVar3;
    }
  }
  iVar1 = (*(uint3 *)((undefined1 *)(gen_frame + 0x0)) & 0xf) + 2;
  bVar4 = 0x10 - (char)iVar1;
  *in_edi = (short)(((ushort)(*(int *)((undefined1 *)(gen_frame + 0x0)) >> 2) & 0xfffc) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f)
  ;
  uVar3 = iVar1 * 2;
  bVar5 = (byte)uVar3;
  in_edi[1] = (short)((short)((*(int *)((undefined1 *)(gen_frame + 0x0)) >> (char)(*(uint3 *)((undefined1 *)(gen_frame + 0x0)) & 0xf) + 4) * 4) <<
                     (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar3 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x8))) <<
          (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
          ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((CONCAT44((*(undefined4 *)(gen_frame + 0x4)),*(int *)((undefined1 *)(gen_frame + 0x0))) >> (ulonglong)bVar5)) : 0));
  uVar6 = (uint)uVar2;
  iVar1 = (uVar6 & 0xf) + 2;
  bVar5 = 0x10 - (char)iVar1;
  uVar7 = (*(ulonglong *)(gen_frame + 0x8)) >> (ulonglong)uVar3;
  in_edi[2] = (short)(((ushort)((int)uVar6 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  in_edi[3] = (short)((short)((int)uVar6 >> (char)(uVar6 & 0xf) + 4) * 4 << (bVar5 & 0x1f)) >>
              (bVar5 & 0x1f);
  uVar3 = iVar1 * 2;
  bVar5 = (byte)uVar3;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (uint)uVar7;
  uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar3 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x8))) <<
          (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
          ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar2 >> (ulonglong)bVar5)) : 0));
  uVar6 = (uint)uVar2;
  iVar1 = (uVar6 & 0xf) + 2;
  bVar5 = 0x10 - (char)iVar1;
  in_edi[4] = (short)(((ushort)((int)uVar6 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  in_edi[5] = (short)((short)((int)uVar6 >> (char)(uVar6 & 0xf) + 4) * 4 << (bVar5 & 0x1f)) >>
              (bVar5 & 0x1f);
  iVar1 = iVar1 * 2;
  bVar5 = (byte)iVar1;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (uint)(uVar7 >> (ulonglong)uVar3);
  uVar6 = (uint)(((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - (iVar1 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x8))) <<
                (ulonglong)(byte)(0x40 - bVar5))) : 0))) |
          (uint)(((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar2 >> (ulonglong)bVar5)) : 0)));
  uVar3 = 0x10 - ((uVar6 & 0xf) + 2);
  bVar5 = (byte)uVar3;
  in_edi[6] = (short)(((ushort)((int)uVar6 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  in_edi[7] = (short)((short)((int)uVar6 >> (char)(uVar6 & 0xf) + 4) * 4 << (bVar5 & 0x1f)) >>
              (bVar5 & 0x1f);
  return uVar3;
}

/* ref: FUN_00d88fd0 */
GEN_LIB GEN_FRAME unsigned int F_00d88fd0(GEN_P(short * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xd88fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(short * in_eax = (short *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = 3;
  do {
    in_eax[1] = in_eax[1] + *in_eax;
    in_eax[2] = in_eax[2] + in_eax[1];
    in_eax[3] = in_eax[3] + in_eax[2];
    in_eax[4] = in_eax[4] + in_eax[3];
    in_eax[5] = in_eax[5] + in_eax[4];
    in_eax[6] = in_eax[6] + in_eax[5];
    in_eax[7] = in_eax[7] + in_eax[6];
    in_eax[8] = in_eax[8] + in_eax[7];
    in_eax[9] = in_eax[9] + in_eax[8];
    in_eax[10] = in_eax[10] + in_eax[9];
    in_eax[0xb] = in_eax[0xb] + in_eax[10];
    in_eax[0xc] = in_eax[0xc] + in_eax[0xb];
    in_eax[0xd] = in_eax[0xd] + in_eax[0xc];
    in_eax[0xe] = in_eax[0xe] + in_eax[0xd];
    in_eax[0xf] = in_eax[0xf] + in_eax[0xe];
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  *in_eax = *in_eax >> 2;
  in_eax[1] = in_eax[1] >> 2;
  in_eax[2] = in_eax[2] >> 2;
  in_eax[3] = in_eax[3] >> 2;
  in_eax[4] = in_eax[4] >> 2;
  in_eax[5] = in_eax[5] >> 2;
  in_eax[6] = in_eax[6] >> 2;
  in_eax[7] = in_eax[7] >> 2;
  in_eax[8] = in_eax[8] >> 2;
  in_eax[9] = in_eax[9] >> 2;
  in_eax[10] = in_eax[10] >> 2;
  in_eax[0xb] = in_eax[0xb] >> 2;
  in_eax[0xc] = in_eax[0xc] >> 2;
  in_eax[0xd] = in_eax[0xd] >> 2;
  in_eax[0xe] = in_eax[0xe] >> 2;
  in_eax[0xf] = in_eax[0xf] >> 2;
  return 0;
}

/* ref: FUN_00d890c0 */
GEN_LIB GEN_FRAME unsigned int F_00d890c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd890c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short * psVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar3 = param_1 + 0x10;
  (*(int *)(gen_frame + 0x30)) = 0;
  psVar7 = ((short *)GEN_TOP((param_2 + 0x14)));
  do {
    bVar6 = *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + param_1)));
    uVar8 = (uint)(bVar6 >> 4);
    iVar9 = uVar8 + 1 + iVar3;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar9 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP(((uVar8 - 10) + iVar3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar9 - 10))),*((undefined1 *)GEN_TOP((iVar9 - 9))))));
    (*(ulonglong *)(gen_frame + 0x18)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar9 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar9 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar9 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar9 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x18))))));
    *(uint3 *)((undefined1 *)(gen_frame + 0x8)) =
         CONCAT12(*((undefined1 *)GEN_TOP((iVar9 - 3))),
                  CONCAT11(*((undefined1 *)GEN_TOP((iVar9 - 2))),*((undefined1 *)GEN_TOP((iVar9 - 1)))));
    *(int *)((undefined1 *)(gen_frame + 0x8)) = CONCAT13(*((undefined1 *)GEN_TOP((iVar9 - 4))),*(uint3 *)((undefined1 *)(gen_frame + 0x8)));
    *(undefined8 *)((undefined1 *)(gen_frame + 0x8)) =
         CONCAT17(*((undefined1 *)GEN_TOP((iVar9 - 8))),
                  CONCAT16(*((undefined1 *)GEN_TOP((iVar9 - 7))),
                           CONCAT15(*((undefined1 *)GEN_TOP((iVar9 - 6))),
                                    CONCAT14(*((undefined1 *)GEN_TOP((iVar9 - 5))),*(int *)((undefined1 *)(gen_frame + 0x8))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d891a4;
    }
    else {
LAB_00d891a4: ;
      iVar3 = (*(uint3 *)((undefined1 *)(gen_frame + 0x8)) & 0xf) + 2;
      cVar2 = (char)iVar3;
      bVar4 = 0x10 - cVar2;
      psVar7[-10] = (short)(((ushort)(*(int *)((undefined1 *)(gen_frame + 0x8)) >> 2) & 0xfffc) << (bVar4 & 0x1f)) >>
                    (bVar4 & 0x1f);
      uVar8 = iVar3 * 2;
      bVar5 = (byte)uVar8;
      psVar7[-9] = (short)((short)(*(int *)((undefined1 *)(gen_frame + 0x8)) >> (char)(*(uint3 *)((undefined1 *)(gen_frame + 0x8)) & 0xf) + 4) * 4
                          << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
      uVar1 = (ulonglong)(byte)(cVar2 * -2 + 0x40);
      uVar1 = ((ulonglong)((uVar1 < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar8 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x18))) <<
              uVar1)) : 0)) | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((CONCAT44((*(undefined4 *)(gen_frame + 0xc)),*(int *)((undefined1 *)(gen_frame + 0x8))) >> (ulonglong)bVar5)) : 0));
      uVar10 = (uint)uVar1;
      iVar3 = (uVar10 & 0xf) + 2;
      bVar5 = 0x10 - (char)iVar3;
      uVar11 = (*(ulonglong *)(gen_frame + 0x18)) >> (ulonglong)uVar8;
      psVar7[-8] = (short)(((ushort)((int)uVar10 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >>
                   (bVar5 & 0x1f);
      psVar7[-7] = (short)((short)((int)uVar10 >> (char)(uVar10 & 0xf) + 4) * 4 << (bVar5 & 0x1f))
                   >> (bVar5 & 0x1f);
      uVar8 = iVar3 * 2;
      bVar5 = (byte)uVar8;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = (uint)uVar11;
      uVar1 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar8 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x18))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
              ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar1 >> (ulonglong)bVar5)) : 0));
      uVar10 = (uint)uVar1;
      iVar3 = (uVar10 & 0xf) + 2;
      bVar5 = 0x10 - (char)iVar3;
      psVar7[-6] = (short)(((ushort)((int)uVar10 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >>
                   (bVar5 & 0x1f);
      psVar7[-5] = (short)((short)((int)uVar10 >> (char)(uVar10 & 0xf) + 4) * 4 << (bVar5 & 0x1f))
                   >> (bVar5 & 0x1f);
      iVar3 = iVar3 * 2;
      bVar5 = (byte)iVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = (uint)(uVar11 >> (ulonglong)uVar8);
      uVar1 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - (iVar3 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x18))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
              ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar1 >> (ulonglong)bVar5)) : 0));
      iVar3 = (int)uVar1;
      bVar5 = (byte)uVar1 & 0xf;
      bVar4 = 0x10 - (bVar5 + 2);
      psVar7[-4] = (short)(((ushort)(iVar3 >> 2) & 0xfffc) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
      psVar7[-3] = (short)((short)(iVar3 >> bVar5 + 4) * 4 << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
    }
    iVar3 = iVar9 + (bVar6 & 0xf) + 1;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar3 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP((iVar3 - 0xb))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar3 - 10))),*((undefined1 *)GEN_TOP((iVar3 - 9))))));
    (*(ulonglong *)(gen_frame + 0x10)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar3 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar3 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar3 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar3 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x10))))));
    *(uint3 *)((undefined1 *)(gen_frame + 0x0)) =
         CONCAT12(*((undefined1 *)GEN_TOP((iVar3 - 3))),
                  CONCAT11(*((undefined1 *)GEN_TOP((iVar3 - 2))),*((undefined1 *)GEN_TOP((iVar3 - 1)))));
    *(int *)((undefined1 *)(gen_frame + 0x0)) = CONCAT13(*((undefined1 *)GEN_TOP((iVar3 - 4))),*(uint3 *)((undefined1 *)(gen_frame + 0x0)));
    *(undefined8 *)((undefined1 *)(gen_frame + 0x0)) =
         CONCAT17(*((undefined1 *)GEN_TOP((iVar3 - 8))),
                  CONCAT16(*((undefined1 *)GEN_TOP((iVar3 - 7))),
                           CONCAT15(*((undefined1 *)GEN_TOP((iVar3 - 6))),
                                    CONCAT14(*((undefined1 *)GEN_TOP((iVar3 - 5))),*(int *)((undefined1 *)(gen_frame + 0x0))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d8945d;
    }
    else {
LAB_00d8945d: ;
      iVar9 = (*(uint3 *)((undefined1 *)(gen_frame + 0x0)) & 0xf) + 2;
      cVar2 = (char)iVar9;
      bVar5 = 0x10 - cVar2;
      psVar7[-2] = (short)(((ushort)(*(int *)((undefined1 *)(gen_frame + 0x0)) >> 2) & 0xfffc) << (bVar5 & 0x1f)) >>
                   (bVar5 & 0x1f);
      uVar8 = iVar9 * 2;
      bVar6 = (byte)uVar8;
      psVar7[-1] = (short)((short)(*(int *)((undefined1 *)(gen_frame + 0x0)) >> (char)(*(uint3 *)((undefined1 *)(gen_frame + 0x0)) & 0xf) + 4) * 4
                          << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
      uVar1 = (ulonglong)(byte)(cVar2 * -2 + 0x40);
      uVar1 = ((ulonglong)((uVar1 < 0x40) ? (((ulonglong)(((1 << (bVar6 & 0x1f)) - ((int)uVar8 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x10))) <<
              uVar1)) : 0)) | ((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((CONCAT44((*(undefined4 *)(gen_frame + 0x4)),*(int *)((undefined1 *)(gen_frame + 0x0))) >> (ulonglong)bVar6)) : 0));
      uVar10 = (uint)uVar1;
      iVar9 = (uVar10 & 0xf) + 2;
      bVar6 = 0x10 - (char)iVar9;
      uVar11 = (*(ulonglong *)(gen_frame + 0x10)) >> (ulonglong)uVar8;
      *psVar7 = (short)(((ushort)((int)uVar10 >> 2) & 0xfffc) << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
      psVar7[1] = (short)((short)((int)uVar10 >> (char)(uVar10 & 0xf) + 4) * 4 << (bVar6 & 0x1f)) >>
                  (bVar6 & 0x1f);
      uVar8 = iVar9 * 2;
      bVar6 = (byte)uVar8;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = (uint)uVar11;
      uVar1 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar6) < 0x40) ? (((ulonglong)(((1 << (bVar6 & 0x1f)) - ((int)uVar8 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x10))) <<
              (ulonglong)(byte)(0x40 - bVar6))) : 0)) |
              ((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((uVar1 >> (ulonglong)bVar6)) : 0));
      uVar10 = (uint)uVar1;
      iVar9 = (uVar10 & 0xf) + 2;
      bVar6 = 0x10 - (char)iVar9;
      psVar7[2] = (short)(((ushort)((int)uVar10 >> 2) & 0xfffc) << (bVar6 & 0x1f)) >> (bVar6 & 0x1f)
      ;
      psVar7[3] = (short)((short)((int)uVar10 >> (char)(uVar10 & 0xf) + 4) * 4 << (bVar6 & 0x1f)) >>
                  (bVar6 & 0x1f);
      iVar9 = iVar9 * 2;
      bVar6 = (byte)iVar9;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = (uint)(uVar11 >> (ulonglong)uVar8);
      uVar1 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar6) < 0x40) ? (((ulonglong)(((1 << (bVar6 & 0x1f)) - (iVar9 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x10))) <<
              (ulonglong)(byte)(0x40 - bVar6))) : 0)) |
              ((ulonglong)(((ulonglong)bVar6 < 0x40) ? ((uVar1 >> (ulonglong)bVar6)) : 0));
      iVar9 = (int)uVar1;
      bVar6 = (byte)uVar1 & 0xf;
      bVar5 = 0x10 - (bVar6 + 2);
      psVar7[4] = (short)(((ushort)(iVar9 >> 2) & 0xfffc) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
      psVar7[5] = (short)((short)(iVar9 >> bVar6 + 4) * 4 << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
    iVar9 = 3;
    do {
      psVar7[-9] = psVar7[-9] + psVar7[-10];
      psVar7[-8] = psVar7[-8] + psVar7[-9];
      psVar7[-7] = psVar7[-7] + psVar7[-8];
      psVar7[-6] = psVar7[-6] + psVar7[-7];
      psVar7[-5] = psVar7[-5] + psVar7[-6];
      psVar7[-4] = psVar7[-4] + psVar7[-5];
      psVar7[-3] = psVar7[-3] + psVar7[-4];
      psVar7[-2] = psVar7[-2] + psVar7[-3];
      psVar7[-1] = psVar7[-1] + psVar7[-2];
      *psVar7 = *psVar7 + psVar7[-1];
      psVar7[1] = psVar7[1] + *psVar7;
      psVar7[2] = psVar7[2] + psVar7[1];
      psVar7[3] = psVar7[3] + psVar7[2];
      psVar7[4] = psVar7[4] + psVar7[3];
      psVar7[5] = psVar7[5] + psVar7[4];
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
    psVar7[-10] = psVar7[-10] >> 2;
    psVar7[-9] = psVar7[-9] >> 2;
    psVar7[-8] = psVar7[-8] >> 2;
    psVar7[-7] = psVar7[-7] >> 2;
    psVar7[-6] = psVar7[-6] >> 2;
    psVar7[-5] = psVar7[-5] >> 2;
    psVar7[-4] = psVar7[-4] >> 2;
    psVar7[-3] = psVar7[-3] >> 2;
    psVar7[-2] = psVar7[-2] >> 2;
    psVar7[-1] = psVar7[-1] >> 2;
    *psVar7 = *psVar7 >> 2;
    psVar7[1] = psVar7[1] >> 2;
    psVar7[2] = psVar7[2] >> 2;
    psVar7[3] = psVar7[3] >> 2;
    psVar7[4] = psVar7[4] >> 2;
    psVar7[5] = psVar7[5] >> 2;
    (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
    psVar7 = psVar7 + 0x10;
    if (0xf < (*(int *)(gen_frame + 0x30))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00d89760 */
GEN_LIB GEN_FRAME uint F_00d89760(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(short * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd89760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x70, 0, 4);
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  uint uVar23;
  int iVar24;
  short sVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  
  (*(int *)(gen_frame + 0x64)) = param_1;
  uVar6 = param_1 + 0x10;
  (*(int *)(gen_frame + 0x68)) = 0;
  (*(short * PTR32 *)(gen_frame + 0x58)) = ((short *)(gen_frame + 0x0)) + param_2;
  do {
    uVar23 = (uint)(*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x68)) + (*(int *)(gen_frame + 0x64))))) >> 4);
    uVar1 = *((undefined1 *)GEN_TOP(((uVar23 - 10) + uVar6)));
    iVar24 = uVar23 + 1 + uVar6;
    (*(uint *)(gen_frame + 0x5c)) = (*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x68)) + (*(int *)(gen_frame + 0x64))))) & 0xf) + 1;
    (*(ulonglong *)(gen_frame + 0x50)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 0)) = *((undefined1 *)GEN_TOP((iVar24 - 9)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 1)) = *((undefined1 *)GEN_TOP((iVar24 - 10)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 2)) = uVar1;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 3)) = *((undefined1 *)GEN_TOP((iVar24 - 0xc)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar24 - 0xc))),
                  CONCAT12(uVar1,CONCAT11(*((undefined1 *)GEN_TOP((iVar24 - 10))),*((undefined1 *)GEN_TOP((iVar24 - 9)))
                                         )));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 4)) = *((undefined1 *)GEN_TOP((iVar24 - 0xd)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 5)) = *((undefined1 *)GEN_TOP((iVar24 - 0xe)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 6)) = *((undefined1 *)GEN_TOP((iVar24 - 0xf)));
    (*(ulonglong *)(gen_frame + 0x38)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 7)) = *((undefined1 *)GEN_TOP((iVar24 - 0x10)));
    (*(ulonglong *)(gen_frame + 0x50)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar24 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar24 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar24 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar24 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x50))))))
    ;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) = *((undefined1 *)GEN_TOP((iVar24 - 1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 1)) = *((undefined1 *)GEN_TOP((iVar24 - 2)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 2)) = *((undefined1 *)GEN_TOP((iVar24 - 3)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 3)) = *((undefined1 *)GEN_TOP((iVar24 - 4)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar24 - 4))),
                  CONCAT12(*((undefined1 *)GEN_TOP((iVar24 - 3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar24 - 2))),*((undefined1 *)GEN_TOP((iVar24 - 1))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = *((undefined1 *)GEN_TOP((iVar24 - 5)));
    (*(int *)(gen_frame + 0x60)) = iVar24;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 5)) = *((undefined1 *)GEN_TOP((iVar24 - 6)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 6)) = *((undefined1 *)GEN_TOP((iVar24 - 7)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 7)) = *((undefined1 *)GEN_TOP((iVar24 - 8)));
    (*(ulonglong *)(gen_frame + 0x38)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar24 - 8))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar24 - 7))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar24 - 6))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar24 - 5))),(uint)(*(ulonglong *)(gen_frame + 0x38))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d8984a;
    }
    else {
LAB_00d8984a: ;
      iVar24 = ((uint)(*(ulonglong *)(gen_frame + 0x38)) & 0xf) + 2;
      cVar4 = (char)iVar24;
      bVar8 = 0x10 - cVar4;
      uVar6 = iVar24 * 2;
      ((short *)(gen_frame + 0x0))[0] = (short)(((ushort)((int)(uint)(*(ulonglong *)(gen_frame + 0x38)) >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                    (bVar8 & 0x1f);
      bVar5 = (byte)uVar6;
      ((short *)(gen_frame + 0x0))[1] = (short)((short)(((int)(uint)(*(ulonglong *)(gen_frame + 0x38)) >> (char)((uint)(*(ulonglong *)(gen_frame + 0x38)) & 0xf) + 4) * 4)
                           << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar3 = (ulonglong)(byte)(cVar4 * -2 + 0x40);
      uVar3 = ((ulonglong)((uVar3 < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar6 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x50))) <<
              uVar3)) : 0));
      (*(undefined4 *)(gen_frame + 0x34)) = (int)(uVar3 >> 0x20);
      uVar3 = uVar3 | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? (((*(ulonglong *)(gen_frame + 0x38)) >> (ulonglong)bVar5)) : 0));
      uVar23 = (uint)uVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (int)(uVar3 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      uVar26 = (*(ulonglong *)(gen_frame + 0x50)) >> (ulonglong)uVar6;
      (*(ulonglong *)(gen_frame + 0x50)) = uVar26;
      ((short *)(gen_frame + 0x0))[2] = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                    (bVar8 & 0x1f);
      uVar6 = iVar24 * 2;
      bVar5 = (byte)uVar6;
      ((short *)(gen_frame + 0x0))[3] = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f)
                           ) >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 0)) = (uint)uVar26;
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar6 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x50))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0));
      (*(undefined4 *)(gen_frame + 0x2c)) = (int)(uVar2 >> 0x20);
      uVar2 = uVar2 | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar3 >> (ulonglong)bVar5)) : 0));
      uVar23 = (uint)uVar2;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (int)(uVar2 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      (*(ulonglong *)(gen_frame + 0x50)) = uVar26 >> (ulonglong)uVar6;
      uVar27 = (*(ulonglong *)(gen_frame + 0x50));
      (*(short *)(gen_frame + 0x8)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = iVar24 * 2;
      bVar5 = (byte)iVar24;
      (*(short *)(gen_frame + 0xa)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x50)) + 0)) = (uint)(uVar26 >> (ulonglong)uVar6);
      uVar3 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - (iVar24 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x50))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
              ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar2 >> (ulonglong)bVar5)) : 0));
      uVar7 = (undefined4)(uVar3 >> 0x20);
      bVar5 = (byte)uVar3 & 0xf;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = uVar7;
      (*(ulonglong *)(gen_frame + 0x38)) = CONCAT44(uVar7,(uint)(*(ulonglong *)(gen_frame + 0x38)));
      bVar8 = 0x10 - (bVar5 + 2);
      (*(short *)(gen_frame + 0xc)) = (short)(((ushort)((int)uVar3 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      (*(short *)(gen_frame + 0xe)) = (short)((short)((int)uVar3 >> bVar5 + 4) * 4 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = (*(int *)(gen_frame + 0x60));
      (*(ulonglong *)(gen_frame + 0x50)) = uVar27;
    }
    sVar15 = (*(short *)(gen_frame + 0xc));
    uVar6 = iVar24 + (*(uint *)(gen_frame + 0x5c));
    (*(ulonglong *)(gen_frame + 0x48)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = *((undefined1 *)GEN_TOP((uVar6 - 9)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 1)) = *((undefined1 *)GEN_TOP((uVar6 - 10)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 2)) = *((undefined1 *)GEN_TOP((uVar6 - 0xb)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 3)) = *((undefined1 *)GEN_TOP((uVar6 - 0xc)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((uVar6 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP((uVar6 - 0xb))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar6 - 10))),*((undefined1 *)GEN_TOP((uVar6 - 9))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 4)) = *((undefined1 *)GEN_TOP((uVar6 - 0xd)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 5)) = *((undefined1 *)GEN_TOP((uVar6 - 0xe)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 6)) = *((undefined1 *)GEN_TOP((uVar6 - 0xf)));
    (*(ulonglong *)(gen_frame + 0x40)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 7)) = *((undefined1 *)GEN_TOP((uVar6 - 0x10)));
    (*(ulonglong *)(gen_frame + 0x48)) = CONCAT17(*((undefined1 *)GEN_TOP((uVar6 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((uVar6 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((uVar6 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((uVar6 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x48))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) = *((undefined1 *)GEN_TOP((uVar6 - 1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 1)) = *((undefined1 *)GEN_TOP((uVar6 - 2)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 2)) = *((undefined1 *)GEN_TOP((uVar6 - 3)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 3)) = *((undefined1 *)GEN_TOP((uVar6 - 4)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((uVar6 - 4))),
                  CONCAT12(*((undefined1 *)GEN_TOP((uVar6 - 3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar6 - 2))),*((undefined1 *)GEN_TOP((uVar6 - 1))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = *((undefined1 *)GEN_TOP((uVar6 - 5)));
    (*(uint *)(gen_frame + 0x5c)) = uVar6;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 5)) = *((undefined1 *)GEN_TOP((uVar6 - 6)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 6)) = *((undefined1 *)GEN_TOP((uVar6 - 7)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 7)) = *((undefined1 *)GEN_TOP((uVar6 - 8)));
    (*(ulonglong *)(gen_frame + 0x40)) = CONCAT17(*((undefined1 *)GEN_TOP((uVar6 - 8))),
                        CONCAT16(*((undefined1 *)GEN_TOP((uVar6 - 7))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((uVar6 - 6))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((uVar6 - 5))),(uint)(*(ulonglong *)(gen_frame + 0x40))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      sVar16 = (*(short *)(gen_frame + 0x1e));
      sVar25 = (*(short *)(gen_frame + 0x1c));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d89af2;
    }
    else {
LAB_00d89af2: ;
      iVar24 = ((uint)(*(ulonglong *)(gen_frame + 0x40)) & 0xf) + 2;
      cVar4 = (char)iVar24;
      bVar8 = 0x10 - cVar4;
      uVar6 = iVar24 * 2;
      (*(short *)(gen_frame + 0x10)) = (short)(((ushort)((int)(uint)(*(ulonglong *)(gen_frame + 0x40)) >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
      bVar5 = (byte)uVar6;
      (*(short *)(gen_frame + 0x12)) = (short)((short)((int)(uint)(*(ulonglong *)(gen_frame + 0x40)) >> (char)((uint)(*(ulonglong *)(gen_frame + 0x40)) & 0xf) + 4) * 4 <<
                        (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar3 = (ulonglong)(byte)(cVar4 * -2 + 0x40);
      uVar2 = ((ulonglong)((uVar3 < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar6 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              uVar3)) : 0)) | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? (((*(ulonglong *)(gen_frame + 0x40)) >> (ulonglong)bVar5)) : 0));
      uVar23 = (uint)uVar2;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = (int)(uVar2 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      uVar27 = (*(ulonglong *)(gen_frame + 0x48)) >> (ulonglong)uVar6;
      (*(ulonglong *)(gen_frame + 0x48)) = uVar27;
      (*(short *)(gen_frame + 0x14)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar6 = iVar24 * 2;
      bVar5 = (byte)uVar6;
      (*(short *)(gen_frame + 0x16)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = (uint)uVar27;
      uVar3 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - ((int)uVar6 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0));
      (*(undefined4 *)(gen_frame + 0x24)) = (int)(uVar3 >> 0x20);
      uVar3 = uVar3 | ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar2 >> (ulonglong)bVar5)) : 0));
      uVar23 = (uint)uVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = (int)(uVar3 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      (*(ulonglong *)(gen_frame + 0x48)) = uVar27 >> (ulonglong)uVar6;
      uVar2 = (*(ulonglong *)(gen_frame + 0x48));
      (*(short *)(gen_frame + 0x18)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = iVar24 * 2;
      bVar5 = (byte)iVar24;
      (*(short *)(gen_frame + 0x1a)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = (uint)(uVar27 >> (ulonglong)uVar6);
      uVar3 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar5) < 0x40) ? (((ulonglong)(((1 << (bVar5 & 0x1f)) - (iVar24 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar5))) : 0)) |
              ((ulonglong)(((ulonglong)bVar5 < 0x40) ? ((uVar3 >> (ulonglong)bVar5)) : 0));
      uVar7 = (undefined4)(uVar3 >> 0x20);
      bVar5 = (byte)uVar3 & 0xf;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = uVar7;
      (*(ulonglong *)(gen_frame + 0x40)) = CONCAT44(uVar7,(uint)(*(ulonglong *)(gen_frame + 0x40)));
      bVar8 = 0x10 - (bVar5 + 2);
      sVar25 = (short)(((ushort)((int)uVar3 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      sVar16 = (short)((short)((int)uVar3 >> bVar5 + 4) * 4 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar6 = (*(uint *)(gen_frame + 0x5c));
      sVar15 = (*(short *)(gen_frame + 0xc));
      (*(ulonglong *)(gen_frame + 0x48)) = uVar2;
    }
    iVar24 = 3;
    do {
      uVar9 = ((short *)(gen_frame + 0x0))[1] + ((short *)(gen_frame + 0x0))[0];
      sVar17 = ((short *)(gen_frame + 0x0))[2] + uVar9;
      (*(uint *)(gen_frame + 0x5c)) = (uint)uVar9;
      ((short *)(gen_frame + 0x0))[1] = uVar9;
      sVar10 = ((short *)(gen_frame + 0x0))[3] + sVar17;
      ((short *)(gen_frame + 0x0))[2] = sVar17;
      sVar18 = (*(short *)(gen_frame + 0x8)) + sVar10;
      ((short *)(gen_frame + 0x0))[3] = sVar10;
      sVar11 = (*(short *)(gen_frame + 0xa)) + sVar18;
      (*(short *)(gen_frame + 0x8)) = sVar18;
      sVar15 = sVar15 + sVar11;
      sVar19 = (*(short *)(gen_frame + 0xe)) + sVar15;
      (*(short *)(gen_frame + 0xa)) = sVar11;
      sVar12 = (*(short *)(gen_frame + 0x10)) + sVar19;
      (*(short *)(gen_frame + 0xe)) = sVar19;
      sVar20 = (*(short *)(gen_frame + 0x12)) + sVar12;
      (*(short *)(gen_frame + 0x10)) = sVar12;
      sVar13 = (*(short *)(gen_frame + 0x14)) + sVar20;
      (*(short *)(gen_frame + 0x12)) = sVar20;
      sVar21 = (*(short *)(gen_frame + 0x16)) + sVar13;
      (*(short *)(gen_frame + 0x14)) = sVar13;
      sVar14 = (*(short *)(gen_frame + 0x18)) + sVar21;
      (*(short *)(gen_frame + 0x16)) = sVar21;
      sVar22 = (*(short *)(gen_frame + 0x1a)) + sVar14;
      sVar25 = sVar25 + sVar22;
      sVar16 = sVar16 + sVar25;
      iVar24 = iVar24 - 1;
      (*(short *)(gen_frame + 0x18)) = sVar14;
      (*(short *)(gen_frame + 0x1a)) = sVar22;
    } while (iVar24 != 0);
    ((short *)(gen_frame + 0x0))[0] = ((short *)(gen_frame + 0x0))[0] >> 2;
    ((short *)(gen_frame + 0x0))[1] = (short)uVar9 >> 2;
    ((short *)(gen_frame + 0x0))[2] = sVar17 >> 2;
    ((short *)(gen_frame + 0x0))[3] = sVar10 >> 2;
    (*(short *)(gen_frame + 0x8)) = sVar18 >> 2;
    (*(short *)(gen_frame + 0xa)) = sVar11 >> 2;
    (*(short *)(gen_frame + 0xe)) = sVar19 >> 2;
    (*(short *)(gen_frame + 0x10)) = sVar12 >> 2;
    (*(short *)(gen_frame + 0x12)) = sVar20 >> 2;
    (*(short *)(gen_frame + 0x14)) = sVar13 >> 2;
    (*(short *)(gen_frame + 0x16)) = sVar21 >> 2;
    (*(short *)(gen_frame + 0x18)) = sVar14 >> 2;
    (*(short *)(gen_frame + 0x1a)) = sVar22 >> 2;
    (*(short *)(gen_frame + 0xc)) = sVar15 >> 2;
    (*(short *)(gen_frame + 0x1c)) = sVar25 >> 2;
    (*(short *)(gen_frame + 0x1e)) = sVar16 >> 2;
    *param_3 = *(*(short * PTR32 *)(gen_frame + 0x58));
    param_3 = param_3 + 1;
    iVar24 = (*(int *)(gen_frame + 0x68)) + 1;
    (*(int *)(gen_frame + 0x68)) = iVar24;
    if (0xf < iVar24) {
      return uVar6;
    }
  } while( true );
}

/* ref: FUN_00d89e10 */
GEN_LIB GEN_FRAME uint F_00d89e10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd89e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x6c, 4, 4);
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  uint uVar23;
  int iVar24;
  short sVar25;
  ulonglong uVar26;
  
  (*(int *)(gen_frame + 0x60)) = param_1;
  uVar5 = param_1 + 0x10;
  (*(int *)(gen_frame + 0x64)) = 0;
  (*(short * PTR32 *)(gen_frame + 0x54)) = ((short *)(gen_frame + 0x0)) + param_2;
  (*(short * PTR32 *)(gen_frame + 0x50)) = ((short *)(gen_frame + 0x0)) + param_2 + 1;
  do {
    uVar23 = (uint)(*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + (*(int *)(gen_frame + 0x60))))) >> 4);
    uVar1 = *((undefined1 *)GEN_TOP(((uVar23 - 8) + uVar5)));
    iVar24 = uVar23 + 1 + uVar5;
    (*(uint *)(gen_frame + 0x58)) = (*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x64)) + (*(int *)(gen_frame + 0x60))))) & 0xf) + 1;
    (*(ulonglong *)(gen_frame + 0x48)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = uVar1;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 1)) = *((undefined1 *)GEN_TOP((iVar24 - 10)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 2)) = *((undefined1 *)GEN_TOP((iVar24 - 0xb)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 3)) = *((undefined1 *)GEN_TOP((iVar24 - 0xc)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar24 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP((iVar24 - 0xb))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar24 - 10))),uVar1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 4)) = *((undefined1 *)GEN_TOP((iVar24 - 0xd)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 5)) = *((undefined1 *)GEN_TOP((iVar24 - 0xe)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 6)) = *((undefined1 *)GEN_TOP((iVar24 - 0xf)));
    (*(ulonglong *)(gen_frame + 0x38)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 7)) = *((undefined1 *)GEN_TOP((iVar24 - 0x10)));
    (*(ulonglong *)(gen_frame + 0x48)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar24 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar24 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar24 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar24 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x48))))))
    ;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) = *((undefined1 *)GEN_TOP((iVar24 - 1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 1)) = *((undefined1 *)GEN_TOP((iVar24 - 2)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 2)) = *((undefined1 *)GEN_TOP((iVar24 - 3)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 3)) = *((undefined1 *)GEN_TOP((iVar24 - 4)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((iVar24 - 4))),
                  CONCAT12(*((undefined1 *)GEN_TOP((iVar24 - 3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((iVar24 - 2))),*((undefined1 *)GEN_TOP((iVar24 - 1))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = *((undefined1 *)GEN_TOP((iVar24 - 5)));
    (*(int *)(gen_frame + 0x5c)) = iVar24;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 5)) = *((undefined1 *)GEN_TOP((iVar24 - 6)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 6)) = *((undefined1 *)GEN_TOP((iVar24 - 7)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 7)) = *((undefined1 *)GEN_TOP((iVar24 - 8)));
    (*(ulonglong *)(gen_frame + 0x38)) = CONCAT17(*((undefined1 *)GEN_TOP((iVar24 - 8))),
                        CONCAT16(*((undefined1 *)GEN_TOP((iVar24 - 7))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((iVar24 - 6))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((iVar24 - 5))),(uint)(*(ulonglong *)(gen_frame + 0x38))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d89f07;
    }
    else {
LAB_00d89f07: ;
      iVar24 = ((uint)(*(ulonglong *)(gen_frame + 0x38)) & 0xf) + 2;
      bVar7 = 0x10 - (char)iVar24;
      ((short *)(gen_frame + 0x0))[0] = (short)(((ushort)((int)(uint)(*(ulonglong *)(gen_frame + 0x38)) >> 2) & 0xfffc) << (bVar7 & 0x1f)) >>
                    (bVar7 & 0x1f);
      ((short *)(gen_frame + 0x0))[1] = (short)((short)((int)(uint)(*(ulonglong *)(gen_frame + 0x38)) >> (char)((uint)(*(ulonglong *)(gen_frame + 0x38)) & 0xf) + 4) * 4 <<
                           (bVar7 & 0x1f)) >> (bVar7 & 0x1f);
      uVar5 = iVar24 * 2;
      bVar7 = (byte)uVar5;
      uVar3 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - ((int)uVar5 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0)) |
              ((ulonglong)(((ulonglong)bVar7 < 0x40) ? (((*(ulonglong *)(gen_frame + 0x38)) >> (ulonglong)bVar7)) : 0));
      uVar23 = (uint)uVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (int)(uVar3 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      uVar26 = (*(ulonglong *)(gen_frame + 0x48)) >> (ulonglong)uVar5;
      (*(ulonglong *)(gen_frame + 0x48)) = uVar26;
      ((short *)(gen_frame + 0x0))[2] = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                    (bVar8 & 0x1f);
      uVar5 = iVar24 * 2;
      bVar7 = (byte)uVar5;
      ((short *)(gen_frame + 0x0))[3] = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f)
                           ) >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = (uint)uVar26;
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - ((int)uVar5 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0));
      (*(undefined4 *)(gen_frame + 0x2c)) = (int)(uVar2 >> 0x20);
      uVar2 = uVar2 | ((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar3 >> (ulonglong)bVar7)) : 0));
      uVar23 = (uint)uVar2;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = (int)(uVar2 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      (*(ulonglong *)(gen_frame + 0x48)) = uVar26 >> (ulonglong)uVar5;
      uVar3 = (*(ulonglong *)(gen_frame + 0x48));
      (*(short *)(gen_frame + 0x8)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = iVar24 * 2;
      bVar7 = (byte)iVar24;
      (*(short *)(gen_frame + 0xa)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x48)) + 0)) = (uint)(uVar26 >> (ulonglong)uVar5);
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - (iVar24 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x48))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0)) |
              ((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar2 >> (ulonglong)bVar7)) : 0));
      uVar6 = (undefined4)(uVar2 >> 0x20);
      bVar7 = (byte)uVar2 & 0xf;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x38)) + 4)) = uVar6;
      (*(ulonglong *)(gen_frame + 0x38)) = CONCAT44(uVar6,(uint)(*(ulonglong *)(gen_frame + 0x38)));
      bVar8 = 0x10 - (bVar7 + 2);
      (*(short *)(gen_frame + 0xc)) = (short)(((ushort)((int)uVar2 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      (*(short *)(gen_frame + 0xe)) = (short)((short)((int)uVar2 >> bVar7 + 4) * 4 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = (*(int *)(gen_frame + 0x5c));
      (*(ulonglong *)(gen_frame + 0x48)) = uVar3;
    }
    sVar15 = (*(short *)(gen_frame + 0xc));
    uVar5 = iVar24 + (*(uint *)(gen_frame + 0x58));
    (*(ulonglong *)(gen_frame + 0x40)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) = *((undefined1 *)GEN_TOP((uVar5 - 9)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 1)) = *((undefined1 *)GEN_TOP((uVar5 - 10)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 2)) = *((undefined1 *)GEN_TOP((uVar5 - 0xb)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 3)) = *((undefined1 *)GEN_TOP((uVar5 - 0xc)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((uVar5 - 0xc))),
                  CONCAT12(*((undefined1 *)GEN_TOP((uVar5 - 0xb))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar5 - 10))),*((undefined1 *)GEN_TOP((uVar5 - 9))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 4)) = *((undefined1 *)GEN_TOP((uVar5 - 0xd)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 5)) = *((undefined1 *)GEN_TOP((uVar5 - 0xe)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 6)) = *((undefined1 *)GEN_TOP((uVar5 - 0xf)));
    (*(ulonglong *)(gen_frame + 0x30)) = 0;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 7)) = *((undefined1 *)GEN_TOP((uVar5 - 0x10)));
    (*(ulonglong *)(gen_frame + 0x40)) = CONCAT17(*((undefined1 *)GEN_TOP((uVar5 - 0x10))),
                        CONCAT16(*((undefined1 *)GEN_TOP((uVar5 - 0xf))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((uVar5 - 0xe))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((uVar5 - 0xd))),(uint)(*(ulonglong *)(gen_frame + 0x40))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 0)) = *((undefined1 *)GEN_TOP((uVar5 - 1)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 1)) = *((undefined1 *)GEN_TOP((uVar5 - 2)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 2)) = *((undefined1 *)GEN_TOP((uVar5 - 3)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 3)) = *((undefined1 *)GEN_TOP((uVar5 - 4)));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 0)) =
         CONCAT13(*((undefined1 *)GEN_TOP((uVar5 - 4))),
                  CONCAT12(*((undefined1 *)GEN_TOP((uVar5 - 3))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar5 - 2))),*((undefined1 *)GEN_TOP((uVar5 - 1))))));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 4)) = *((undefined1 *)GEN_TOP((uVar5 - 5)));
    (*(uint *)(gen_frame + 0x58)) = uVar5;
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 5)) = *((undefined1 *)GEN_TOP((uVar5 - 6)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 6)) = *((undefined1 *)GEN_TOP((uVar5 - 7)));
    (*(undefined1 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 7)) = *((undefined1 *)GEN_TOP((uVar5 - 8)));
    (*(ulonglong *)(gen_frame + 0x30)) = CONCAT17(*((undefined1 *)GEN_TOP((uVar5 - 8))),
                        CONCAT16(*((undefined1 *)GEN_TOP((uVar5 - 7))),
                                 CONCAT15(*((undefined1 *)GEN_TOP((uVar5 - 6))),
                                          CONCAT14(*((undefined1 *)GEN_TOP((uVar5 - 5))),(uint)(*(ulonglong *)(gen_frame + 0x30))))));
    if (REFG(char, 0x15d9a81) == '\0') {
      F_00d91330();
      F_00d91120(&REFG(char, 0x15d9a81));
      sVar16 = (*(short *)(gen_frame + 0x1e));
      sVar25 = (*(short *)(gen_frame + 0x1c));
      if (REFG(char, 0x15d9a81) != '\0') goto LAB_00d8a1ab;
    }
    else {
LAB_00d8a1ab: ;
      iVar24 = ((uint)(*(ulonglong *)(gen_frame + 0x30)) & 0xf) + 2;
      cVar4 = (char)iVar24;
      bVar8 = 0x10 - cVar4;
      uVar5 = iVar24 * 2;
      (*(short *)(gen_frame + 0x10)) = (short)(((ushort)((int)(uint)(*(ulonglong *)(gen_frame + 0x30)) >> 2) & 0xfffc) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
      bVar7 = (byte)uVar5;
      (*(short *)(gen_frame + 0x12)) = (short)((short)((int)(uint)(*(ulonglong *)(gen_frame + 0x30)) >> (char)((uint)(*(ulonglong *)(gen_frame + 0x30)) & 0xf) + 4) * 4 <<
                        (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar2 = (ulonglong)(byte)(cVar4 * -2 + 0x40);
      uVar3 = ((ulonglong)((uVar2 < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - ((int)uVar5 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x40))) <<
              uVar2)) : 0)) | ((ulonglong)(((ulonglong)bVar7 < 0x40) ? (((*(ulonglong *)(gen_frame + 0x30)) >> (ulonglong)bVar7)) : 0));
      uVar23 = (uint)uVar3;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 4)) = (int)(uVar3 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      uVar26 = (*(ulonglong *)(gen_frame + 0x40)) >> (ulonglong)uVar5;
      (*(ulonglong *)(gen_frame + 0x40)) = uVar26;
      (*(short *)(gen_frame + 0x14)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar5 = iVar24 * 2;
      bVar7 = (byte)uVar5;
      (*(short *)(gen_frame + 0x16)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) = (uint)uVar26;
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - ((int)uVar5 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x40))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0));
      (*(undefined4 *)(gen_frame + 0x24)) = (int)(uVar2 >> 0x20);
      uVar2 = uVar2 | ((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar3 >> (ulonglong)bVar7)) : 0));
      uVar23 = (uint)uVar2;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 4)) = (int)(uVar2 >> 0x20);
      iVar24 = (uVar23 & 0xf) + 2;
      bVar8 = 0x10 - (char)iVar24;
      (*(ulonglong *)(gen_frame + 0x40)) = uVar26 >> (ulonglong)uVar5;
      uVar3 = (*(ulonglong *)(gen_frame + 0x40));
      (*(short *)(gen_frame + 0x18)) = (short)(((ushort)((int)uVar23 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      iVar24 = iVar24 * 2;
      bVar7 = (byte)iVar24;
      (*(short *)(gen_frame + 0x1a)) = (short)((short)(((int)uVar23 >> (char)(uVar23 & 0xf) + 4) * 4) << (bVar8 & 0x1f))
                 >> (bVar8 & 0x1f);
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x40)) + 0)) = (uint)(uVar26 >> (ulonglong)uVar5);
      uVar2 = ((ulonglong)(((ulonglong)(byte)(0x40 - bVar7) < 0x40) ? (((ulonglong)(((1 << (bVar7 & 0x1f)) - (iVar24 >> 5)) - 1U & (uint)(*(ulonglong *)(gen_frame + 0x40))) <<
              (ulonglong)(byte)(0x40 - bVar7))) : 0)) |
              ((ulonglong)(((ulonglong)bVar7 < 0x40) ? ((uVar2 >> (ulonglong)bVar7)) : 0));
      uVar6 = (undefined4)(uVar2 >> 0x20);
      bVar7 = (byte)uVar2 & 0xf;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x30)) + 4)) = uVar6;
      (*(ulonglong *)(gen_frame + 0x30)) = CONCAT44(uVar6,(uint)(*(ulonglong *)(gen_frame + 0x30)));
      bVar8 = 0x10 - (bVar7 + 2);
      sVar25 = (short)(((ushort)((int)uVar2 >> 2) & 0xfffc) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      sVar16 = (short)((short)((int)uVar2 >> bVar7 + 4) * 4 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
      uVar5 = (*(uint *)(gen_frame + 0x58));
      sVar15 = (*(short *)(gen_frame + 0xc));
      (*(ulonglong *)(gen_frame + 0x40)) = uVar3;
    }
    iVar24 = 3;
    do {
      uVar9 = ((short *)(gen_frame + 0x0))[1] + ((short *)(gen_frame + 0x0))[0];
      sVar17 = ((short *)(gen_frame + 0x0))[2] + uVar9;
      (*(uint *)(gen_frame + 0x58)) = (uint)uVar9;
      ((short *)(gen_frame + 0x0))[1] = uVar9;
      sVar10 = ((short *)(gen_frame + 0x0))[3] + sVar17;
      ((short *)(gen_frame + 0x0))[2] = sVar17;
      sVar18 = (*(short *)(gen_frame + 0x8)) + sVar10;
      ((short *)(gen_frame + 0x0))[3] = sVar10;
      sVar11 = (*(short *)(gen_frame + 0xa)) + sVar18;
      (*(short *)(gen_frame + 0x8)) = sVar18;
      sVar15 = sVar15 + sVar11;
      sVar19 = (*(short *)(gen_frame + 0xe)) + sVar15;
      (*(short *)(gen_frame + 0xa)) = sVar11;
      sVar12 = (*(short *)(gen_frame + 0x10)) + sVar19;
      (*(short *)(gen_frame + 0xe)) = sVar19;
      sVar20 = (*(short *)(gen_frame + 0x12)) + sVar12;
      (*(short *)(gen_frame + 0x10)) = sVar12;
      sVar13 = (*(short *)(gen_frame + 0x14)) + sVar20;
      (*(short *)(gen_frame + 0x12)) = sVar20;
      sVar21 = (*(short *)(gen_frame + 0x16)) + sVar13;
      (*(short *)(gen_frame + 0x14)) = sVar13;
      sVar14 = (*(short *)(gen_frame + 0x18)) + sVar21;
      (*(short *)(gen_frame + 0x16)) = sVar21;
      sVar22 = (*(short *)(gen_frame + 0x1a)) + sVar14;
      sVar25 = sVar25 + sVar22;
      sVar16 = sVar16 + sVar25;
      iVar24 = iVar24 - 1;
      (*(short *)(gen_frame + 0x18)) = sVar14;
      (*(short *)(gen_frame + 0x1a)) = sVar22;
    } while (iVar24 != 0);
    ((short *)(gen_frame + 0x0))[0] = ((short *)(gen_frame + 0x0))[0] >> 2;
    ((short *)(gen_frame + 0x0))[1] = (short)uVar9 >> 2;
    ((short *)(gen_frame + 0x0))[2] = sVar17 >> 2;
    ((short *)(gen_frame + 0x0))[3] = sVar10 >> 2;
    (*(short *)(gen_frame + 0x8)) = sVar18 >> 2;
    (*(short *)(gen_frame + 0xa)) = sVar11 >> 2;
    (*(short *)(gen_frame + 0xe)) = sVar19 >> 2;
    (*(short *)(gen_frame + 0x10)) = sVar12 >> 2;
    (*(short *)(gen_frame + 0x12)) = sVar20 >> 2;
    (*(short *)(gen_frame + 0x14)) = sVar13 >> 2;
    (*(short *)(gen_frame + 0x16)) = sVar21 >> 2;
    (*(short *)(gen_frame + 0x18)) = sVar14 >> 2;
    (*(short *)(gen_frame + 0x1a)) = sVar22 >> 2;
    (*(short *)(gen_frame + 0x1e)) = sVar16 >> 2;
    (*(short *)(gen_frame + 0xc)) = sVar15 >> 2;
    (*(short *)(gen_frame + 0x1c)) = sVar25 >> 2;
    *((short *)GEN_TOP((param_3 + (*(int *)(gen_frame + 0x64)) * 2))) = *(*(short * PTR32 *)(gen_frame + 0x54));
    *((short *)GEN_TOP((param_3 + 0x20 + (*(int *)(gen_frame + 0x64)) * 2))) = *(*(short * PTR32 *)(gen_frame + 0x50));
    iVar24 = (*(int *)(gen_frame + 0x64)) + 1;
    (*(int *)(gen_frame + 0x64)) = iVar24;
    if (0xf < iVar24) {
      return uVar5;
    }
  } while( true );
}

/* ref: FUN_00d8a4f0 */
GEN_LIB GEN_FRAME uint F_00d8a4f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8a4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d89760(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d8a500 */
GEN_LIB GEN_FRAME uint F_00d8a500(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8a500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d89e10(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d8a510 */
GEN_LIB GEN_FRAME unsigned int F_00d8a510(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8a510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d890c0(param_1,param_2);
  return;
}

/* ref: FUN_00d8a520 */
GEN_LIB GEN_FRAME uint F_00d8a520(GEN_P(uint * in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8a520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *in_esi;
  uVar3 = uVar2 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  iVar4 = param_3;
  if (uVar3 != 0) {
    iVar5 = param_4;
    if ((int)(8 - uVar3) < param_4) {
      iVar5 = 8 - uVar3;
    }
    pbVar1 = ((byte *)GEN_TOP((((int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3) + param_2)));
    iVar4 = param_3 >> ((byte)iVar5 & 0x1f);
    *pbVar1 = *pbVar1 | ((('\x01' << ((byte)iVar5 & 0x1f)) - ((byte)(iVar5 >> 5) & 1)) - 1 &
                        (byte)param_3) << ((byte)uVar3 & 0x1f);
    param_4 = param_4 - iVar5;
    *in_esi = *in_esi + iVar5;
  }
  iVar5 = ((int)(param_4 + (param_4 >> 0x1f & 7U)) >> 3) * 8;
  uVar2 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
  if (0 < (int)uVar2) {
    param_4 = param_4 + uVar2 * -8;
    uVar3 = uVar2;
    do {
      uVar2 = (int)(*in_esi + ((int)*in_esi >> 0x1f & 7U)) >> 3;
      *((char *)GEN_TOP((uVar2 + param_2))) = (char)iVar4;
      *in_esi = *in_esi + 8;
      iVar4 = iVar4 >> 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (0 < param_4) {
    uVar2 = (int)(*in_esi + ((int)*in_esi >> 0x1f & 7U)) >> 3;
    *((byte *)GEN_TOP((uVar2 + param_2))) =
         (('\x01' << ((byte)param_4 & 0x1f)) - ((byte)(param_4 >> 5) & 1)) - 1 & (byte)iVar4;
    *in_esi = *in_esi + param_4;
  }
  return uVar2;
}

/* ref: FUN_00d8a610 */
GEN_LIB GEN_FRAME uint F_00d8a610(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8a610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x19, 7, 4);
  short sVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  int in_ecx;
  uint uVar5;
  
  iVar4 = 0;
  uVar2 = param_2 & 0x80000001;
  (*(undefined1 *)(gen_frame + 0x1)) = 0;
  (*(undefined8 *)(gen_frame + 0x2)) = 0;
  (*(undefined4 *)(gen_frame + 0xa)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x11)) = 0;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if (uVar2 != 0) {
    *((undefined2 *)GEN_TOP((param_1 + param_2 * 2))) = 0;
  }
  if (0 < (int)param_2) {
    do {
      sVar1 = *((short *)GEN_TOP((param_1 + iVar4 * 2)));
      in_ecx = 0;
      while ((uVar2 = F_00d88cb0((int)sVar1,in_ecx), (char)uVar2 == '\0' ||
             (uVar2 = F_00d88cb0((int)*((short *)GEN_TOP((param_1 + 2 + iVar4 * 2))),in_ecx),
             (char)uVar2 == '\0'))) {
        in_ecx = in_ecx + 1;
      }
      F_00d8a520(&(*(int *)(gen_frame + 0x11)),&(*(undefined1 *)(gen_frame + 0x1)),in_ecx,4);
      F_00d8a520(&(*(int *)(gen_frame + 0x11)),&(*(undefined1 *)(gen_frame + 0x1)),(int)*((short *)GEN_TOP((param_1 + iVar4 * 2))),in_ecx);
      F_00d8a520(&(*(int *)(gen_frame + 0x11)),&(*(undefined1 *)(gen_frame + 0x1)),(int)*((short *)GEN_TOP((param_1 + 2 + iVar4 * 2))),in_ecx);
      iVar4 = iVar4 + 2;
    } while (iVar4 < (int)param_2);
  }
  uVar2 = (int)(((*(int *)(gen_frame + 0x11)) + 7 >> 0x1f & 7U) + (*(int *)(gen_frame + 0x11)) + 7) >> 3;
  if (0 < (int)uVar2) {
    puVar3 = (gen_frame + 0x0) + uVar2;
    uVar5 = uVar2;
    do {
      *((undefined1 *)GEN_TOP(*param_3)) = *puVar3;
      *param_3 = *param_3 + 1;
      puVar3 = puVar3 - 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return uVar2;
}

/* ref: FUN_00d8a710 */
GEN_LIB GEN_FRAME byte F_00d8a710(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int * in_esi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8a710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (8 < in_eax) {
    uVar2 = F_00d8a610(param_3,8,in_esi);
    uVar3 = F_00d8a610(param_3 + 0x10,in_eax - 8,in_esi);
    bVar1 = (char)uVar3 - 1;
    *param_4 = ((char)uVar2 - 1) * '\x10' | bVar1;
    return bVar1;
  }
  uVar2 = F_00d8a610(param_3,in_eax,in_esi);
  *((undefined1 *)GEN_TOP(*in_esi)) = 0;
  *in_esi = *in_esi + 1;
  *param_4 = ((char)uVar2 - 1) * '\x10';
  return 0;
}

/* ref: FUN_00d8a780 */
GEN_LIB GEN_NOFRAME uint F_00d8a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd8a780u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  GEN_FRAME_DECL(0x230, 0);
  short * psVar1;
  undefined2 * puVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  char * pcVar9;
  char * pcVar10;
  char * pcVar11;
  
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[0]);
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  (*(int *)(gen_frame + 0x214)) = (int)(*(undefined2 * PTR32 *)&gen_args[3]);
  if (0 < (*(int *)&gen_args[2])) {
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    (*(int *)(gen_frame + 0x218)) = (*(int *)&gen_args[2]);
    do {
      iVar4 = 0;
      do {
        psVar1 = ((short *)GEN_TOP(((int)puVar5 + iVar4 * 2)));
        *psVar1 = *psVar1 << 2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
      (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) = ((undefined4 *)GEN_TOP(0x3));
      do {
        psVar1 = ((short *)GEN_TOP(((int)puVar5 + 0x1a)));
        iVar4 = 3;
        do {
          psVar1[2] = psVar1[2] - psVar1[1];
          psVar1[1] = psVar1[1] - *psVar1;
          *psVar1 = *psVar1 - psVar1[-1];
          psVar1[-1] = psVar1[-1] - psVar1[-2];
          psVar1[-2] = psVar1[-2] - psVar1[-3];
          psVar1 = psVar1 - 5;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        puVar7 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x21c)) - 1)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) = puVar7;
      } while (puVar7 != ((undefined4 *)GEN_TOP(0x0)));
      iVar4 = 0;
      do {
        psVar1 = ((short *)GEN_TOP(((int)puVar5 + iVar4 * 2)));
        *psVar1 = *psVar1 >> 2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
      puVar5 = puVar5 + 8;
      iVar4 = (*(int *)(gen_frame + 0x218)) - 1;
      (*(int *)(gen_frame + 0x218)) = iVar4;
    } while (iVar4 != 0);
  }
  puVar2 = ((undefined2 *)GEN_TOP(((int)(*(undefined2 * PTR32 *)&gen_args[3]) + 0x10)));
  iVar8 = 0;
  (*(int *)(gen_frame + 0x218)) = (int)(*(undefined2 * PTR32 *)&gen_args[3]);
  iVar4 = (int)(*(undefined2 * PTR32 *)&gen_args[3]);
  if (0 < (*(int *)&gen_args[2])) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) = ((undefined4 *)(gen_frame + 0x0));
    (*(undefined2 * PTR32 *)&gen_args[3]) = puVar2;
    do {
      F_00d8a710((*(int *)&gen_args[1]),&(*(undefined2 * PTR32 *)&gen_args[3]),(*(undefined4 * PTR32 *)(gen_frame + 0x21c)),(*(int *)(gen_frame + 0x218)) + iVar8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x21c)) + 8;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (*(int *)&gen_args[2]));
    puVar2 = (*(undefined2 * PTR32 *)&gen_args[3]);
    iVar4 = (*(int *)(gen_frame + 0x218));
    if (0xf < iVar8) goto LAB_00d8a897;
  }
  do {
    *((undefined1 *)GEN_TOP((iVar8 + iVar4))) = 0;
    *puVar2 = 0;
    iVar8 = iVar8 + 1;
    puVar2 = puVar2 + 1;
    (*(undefined2 * PTR32 *)&gen_args[3]) = puVar2;
  } while (iVar8 < 0x10);
LAB_00d8a897: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0x9832bf32,((char *)REFP(0x113857c)));
  F_00da0a80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)),0x200);
  iVar6 = (int)(*(undefined2 * PTR32 *)&gen_args[3]) - (*(int *)(gen_frame + 0x214));
  iVar8 = (*(int *)&gen_args[1]) * (*(int *)&gen_args[2]);
  iVar4 = (iVar6 * 100) / (iVar8 * 2);
  pcVar11 = ((char *)REFP(0x113856c));
  pcVar10 = ((char *)REFP(0x1138560));
  pcVar9 = ((char *)REFP(0x1138544));
  pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((char *)REFP(0x113853c)))));
  pvVar3 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar3 GEN_EDX_ARG,iVar8)));
  pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar3 GEN_EDX_ARG,pcVar9)));
  pvVar3 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar3 GEN_EDX_ARG,iVar6)));
  pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar3 GEN_EDX_ARG,pcVar10)));
  pvVar3 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar3 GEN_EDX_ARG,iVar4)));
  F_00d9fe80(pvVar3 GEN_EDX_ARG,pcVar11);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined4 *)(gen_frame + 0x0)),
             ((char *)REFP(0x1138500)),0x135);
  F_00d9fda0(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG);
  return (uint)(*(undefined2 * PTR32 *)&gen_args[3]);
}

/* ref: FUN_00d8a970 */
GEN_LIB GEN_FRAME uint F_00d8a970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8a970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00d8a780(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d8a980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8a980(GEN_P(char * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8a980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = (*param_1 != '\0') == (bool)param_3;
  return param_2;
}

/* ref: FUN_00d8aa50 */
GEN_LIB GEN_FRAME float F_00d8aa50(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xd8aa50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: FUN_00d8aa60 */
GEN_LIB GEN_NOFRAME float10 F_00d8aa60(GEN_P(double in_xmm0, double gen_a0))
{
  GEN_ENTER(0xd8aa60u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(double in_xmm0 = (double)gen_a0;)
  double dVar2;
  
  dVar2 = (GEN_X87MATH((((double)GEN_TOD(gen_bits2f((uint)(ulonglong)gen_d2bits(in_xmm0))))),0xe));
  return (float10)dVar2;
}

/* ref: FUN_00d8aa80 */
GEN_LIB GEN_FRAME uint F_00d8aa80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd8aa80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x375f00;
  ((uint *)(gen_frame + 0x0))[0] = 1;
  ((uint *)(gen_frame + 0x0))[1] = 1;
  ((uint *)(gen_frame + 0x0))[2] = 2;
  ((uint *)(gen_frame + 0x0))[3] = 6;
  ((uint *)(gen_frame + 0x0))[4] = 0x18;
  ((uint *)(gen_frame + 0x0))[5] = 0x78;
  ((uint *)(gen_frame + 0x0))[6] = 0x2d0;
  ((uint *)(gen_frame + 0x0))[7] = 0x13b0;
  ((uint *)(gen_frame + 0x0))[8] = 0x9d80;
  ((uint *)(gen_frame + 0x0))[9] = 0x58980;
  ((uint *)(gen_frame + 0x0))[10] = 0x375f00;
  if (param_1 < 1) {
    return 1;
  }
  if (10 < param_1) {
    iVar2 = 0xb;
    if (10 < param_1) {
      do {
        uVar1 = uVar1 * iVar2;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= param_1);
    }
    return uVar1;
  }
  return ((uint *)(gen_frame + 0x0))[(int)(param_1)];
}

/* ref: FUN_00d8ab10 */
GEN_LIB GEN_FRAME uint F_00d8ab10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ab10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00d8aa80(param_1 - param_2);
  uVar2 = F_00d8aa80(param_2);
  uVar3 = F_00d8aa80(param_1);
  return (int)uVar3 / (int)(uVar1 * uVar2);
}

/* ref: FUN_00d8ab50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ab50(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd8ab50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00d8ab80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ab80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ab80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00d8abb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8abb0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8abb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = param_2[1] + in_ecx[1];
  in_ecx[2] = param_2[2] + in_ecx[2];
  in_ecx[3] = param_2[3] + in_ecx[3];
  return (uint)in_ecx;
}

/* ref: FUN_00d8ac00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ac00(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8ac00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - param_2[1];
  in_ecx[2] = in_ecx[2] - param_2[2];
  in_ecx[3] = in_ecx[3] - param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00d8ac50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ac50(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd8ac50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *in_ecx = *in_ecx * param_2;
  in_ecx[1] = in_ecx[1] * param_2;
  in_ecx[2] = in_ecx[2] * param_2;
  in_ecx[3] = in_ecx[3] * param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d8aca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8aca0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd8aca0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  
  fVar1 = REFG(float, 0x1087f04) / param_2;
  *in_ecx = *in_ecx * fVar1;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar1 * in_ecx[2];
  in_ecx[3] = fVar1 * in_ecx[3];
  return (uint)in_ecx;
}

/* ref: FUN_00d8acf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8acf0(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8acf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  
  (*(undefined8 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined8 *)(gen_frame + 0x8)) = in_ecx[1];
  puVar1 = ((undefined8 *)GEN_TOP(F_00d8abb0(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3)));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return (uint)param_2;
}

/* ref: FUN_00d8ad40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ad40(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8ad40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  
  (*(undefined8 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined8 *)(gen_frame + 0x8)) = in_ecx[1];
  puVar1 = ((undefined8 *)GEN_TOP(F_00d8ac00(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3)));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return (uint)param_2;
}

/* ref: FUN_00d8ad90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ad90(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd8ad90u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  
  (*(undefined8 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined8 *)(gen_frame + 0x8)) = in_ecx[1];
  puVar1 = ((undefined8 *)GEN_TOP(F_00d8ac50(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3)));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return (uint)param_2;
}

/* ref: FUN_00d8ade0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8ade0(GEN_P(undefined8 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xd8ade0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined8 * puVar1;
  
  (*(undefined8 *)(gen_frame + 0x0)) = *in_ecx;
  (*(undefined8 *)(gen_frame + 0x8)) = in_ecx[1];
  puVar1 = ((undefined8 *)GEN_TOP(F_00d8aca0(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_3)));
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return (uint)param_2;
}

/* ref: FUN_00d8ae30 */
GEN_LIB GEN_FRAME uint F_00d8ae30(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8ae30u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00d8ad90(param_3 GEN_EDX_ARG,param_1,param_2);
  return param_1;
}

/* ref: FUN_00d8ae50 */
GEN_LIB GEN_FRAME uint F_00d8ae50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8ae50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00d8ade0(param_3 GEN_EDX_ARG,param_1,param_2);
  return param_1;
}

/* ref: FUN_00d8b0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8b0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd8b0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (GEN_X87MATH(((double)*((float *)GEN_TOP(((int)this + 0xc)))),0xe));
  dVar3 = (GEN_X87MATH(((double)*((float *)GEN_TOP(((int)this + 8)))),0xe));
  dVar4 = (GEN_X87MATH(((double)*((float *)GEN_TOP(((int)this + 4)))),0xe));
  dVar5 = (GEN_X87MATH(((double)*(float *)this),0xe));
  F_00d8ab50(param_1 GEN_EDX_FWD,(float)dVar5,(float)dVar4,(float)dVar3,(float)dVar2);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00d8b140 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00d8b140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8b140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + param_2 * 4)));
}

/* ref: FUN_00d8b150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8b150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8b150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d8b160 */
GEN_LIB GEN_FRAME double F_00d8b160(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8b160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  return GEN_X87(((double)GEN_TOD(((float10)param_2[3] * (float10)param_1[3] +
                 ((float10)param_2[2] * (float10)param_1[2] +
                 ((float10)*param_2 * (float10)*param_1 + (float10)param_2[1] * (float10)param_1[1])
                 )))));
}

/* ref: FUN_00d8b1d0 */
GEN_LIB GEN_FRAME uint F_00d8b1d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8b1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float * pfVar2;
  
  F_00d8ab50(param_1 GEN_EDX_ARG,0.0,0.0,0.0,0.0);
  pfVar2 = param_3;
  if ((float10)*param_3 < (float10)*param_2) {
    pfVar2 = param_2;
  }
  fVar1 = *pfVar2;
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,0)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_3[1] < (float10)param_2[1]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[1];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,1)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_3[2] < (float10)param_2[2]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[2];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,2)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_3[3] < (float10)param_2[3]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[3];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,3)));
  *pfVar2 = fVar1;
  return param_1;
}

/* ref: FUN_00d8b2f0 */
GEN_LIB GEN_FRAME uint F_00d8b2f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8b2f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float * pfVar2;
  
  F_00d8ab50(param_1 GEN_EDX_ARG,0.0,0.0,0.0,0.0);
  pfVar2 = param_3;
  if ((float10)*param_2 < (float10)*param_3) {
    pfVar2 = param_2;
  }
  fVar1 = *pfVar2;
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,0)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_2[1] < (float10)param_3[1]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[1];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,1)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_2[2] < (float10)param_3[2]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[2];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,2)));
  *pfVar2 = fVar1;
  pfVar2 = param_3;
  if ((float10)param_2[3] < (float10)param_3[3]) {
    pfVar2 = param_2;
  }
  fVar1 = pfVar2[3];
  pfVar2 = ((float *)GEN_TOP(F_00d8b150(param_1 GEN_EDX_ARG,3)));
  *pfVar2 = fVar1;
  return param_1;
}

/* ref: FUN_00d8b440 */
GEN_LIB GEN_FRAME uint F_00d8b440(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8b440u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  iVar3 = *param_4;
  pfVar1 = ((float *)GEN_TOP((iVar3 + 4 + param_1 * 4)));
  bVar8 = GEN_ISNAN(param_3) || GEN_ISNAN(*pfVar1);
  if (bVar8 != (bVar8 || param_3 == *pfVar1)) {
    return param_1;
  }
  iVar4 = param_2 + param_1 + 1;
  uVar6 = param_1 + 1;
  uVar7 = param_2;
  do {
    while( true ) {
      uVar5 = iVar4 / 2;
      fVar2 = *((float *)GEN_TOP((iVar3 + uVar5 * 4)));
      if (!(param_3 < fVar2)) break;
LAB_00d8b485: ;
      iVar4 = uVar5 + uVar7;
      uVar6 = uVar5;
    }
    if (!(*((float *)GEN_TOP((iVar3 + 4 + uVar5 * 4))) <= param_3)) {
      return uVar5;
    }
    if (param_3 < fVar2) goto LAB_00d8b485;
    iVar4 = uVar6 + uVar5;
    uVar7 = uVar5;
  } while( true );
}

/* ref: FUN_00d8b4a0 */
GEN_LIB GEN_FRAME unsigned int F_00d8b4a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xd8b4a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = 1;
  *param_5 = GEN_FLT_TO(*param_5, REFG(float, 0x1087f04));
  if (0 < param_3) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((*param_4 + param_1 * 4)));
    (*(float * PTR32 *)(gen_frame + 0x2c)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 1;
    do {
      pfVar2 = (*(float * PTR32 *)(gen_frame + 0x2c));
      ((float *)(gen_frame + 0x0))[(int)(iVar5)] = param_2 - *(*(float * PTR32 *)(gen_frame + 0x28));
      iVar4 = 0;
      (&(*(float *)(gen_frame + 0x10)))[iVar5] = *pfVar2 - param_2;
      fVar9 = 0.0;
      if (3 < iVar5) {
        (*(int *)(gen_frame + 0x24)) = (int)&(*(float *)(gen_frame + 0x10)) - (int)param_5;
        (*(int *)(gen_frame + 0x20)) = (int)((float *)(gen_frame + 0x14)) - (int)param_5;
        pfVar2 = (float *)(param_5 + 2);
        pfVar3 = ((float *)(gen_frame + 0x14)) + iVar5 - 7;
        do {
          fVar1 = pfVar3[2];
          fVar7 = pfVar2[-2] / (((float *)(gen_frame + 0x14))[(int)(iVar4)] + fVar1);
          pfVar2[-2] = ((float *)(gen_frame + 0x14))[(int)(iVar4)] * fVar7 + fVar9;
          fVar9 = *((float *)GEN_TOP((((int)&(*(float *)(gen_frame + 0x10)) - (int)param_5) + (int)pfVar2)));
          fVar11 = pfVar3[1];
          fVar10 = pfVar2[-1] / (fVar9 + fVar11);
          fVar8 = *pfVar3;
          pfVar2[-1] = fVar9 * fVar10 + fVar1 * fVar7;
          fVar9 = *((float *)GEN_TOP((((int)((float *)(gen_frame + 0x14)) - (int)param_5) + (int)pfVar2)));
          fVar7 = *pfVar2 / (fVar9 + fVar8);
          *pfVar2 = fVar9 * fVar7 + fVar11 * fVar10;
          fVar1 = *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x14)) + (4 - (int)param_5) + (int)pfVar2)));
          fVar11 = pfVar2[1] / (fVar1 + pfVar3[-1]);
          fVar9 = fVar11 * pfVar3[-1];
          pfVar2[1] = fVar1 * fVar11 + fVar8 * fVar7;
          iVar4 = iVar4 + 4;
          pfVar2 = pfVar2 + 4;
          pfVar3 = pfVar3 - 4;
        } while (iVar4 < iVar5 - 3);
      }
      if (iVar4 < iVar5) {
        iVar6 = iVar5 - iVar4;
        pfVar2 = (float *)(param_5 + iVar4);
        pfVar3 = ((float *)(gen_frame + 0x0)) + iVar6;
        do {
          fVar1 = *((float *)GEN_TOP(((int)pfVar2 + ((int)((float *)(gen_frame + 0x14)) - (int)param_5))));
          fVar11 = *pfVar3;
          fVar8 = *pfVar2 / (fVar1 + fVar11);
          *pfVar2 = fVar1 * fVar8 + fVar9;
          pfVar2 = pfVar2 + 1;
          pfVar3 = pfVar3 - 1;
          iVar6 = iVar6 - 1;
          fVar9 = fVar11 * fVar8;
        } while (iVar6 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0x2c)) = (*(float * PTR32 *)(gen_frame + 0x2c)) + 1;
      param_5[iVar5] = (undefined4)gen_fl2bits(fVar9);
      iVar5 = iVar5 + 1;
      (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) - 1;
    } while (iVar5 <= param_3);
  }
  return;
}

/* ref: FUN_00d8b670 */
GEN_LIB GEN_FRAME uint F_00d8b670(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xd8b670u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_FRAME_DECL_TOP(0xac, 4, 4);
  float * pfVar1;
  float fVar2;
  float * in_EAX = 0;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float * pfVar10;
  float * pfVar11;
  float fVar12;
  float * pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar16 = REFG(float, 0x1087f04);
  iVar7 = 1;
  ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x1087f04));
  if (0 < param_3) {
    pfVar13 = ((float *)(gen_frame + 0x10)) + 1;
    (*(float * PTR32 *)(gen_frame + 0x94)) = pfVar13;
    in_EAX = ((float *)GEN_TOP((*param_5 + param_1 * 4)));
    (*(float * PTR32 *)(gen_frame + 0x9c)) = pfVar13;
    (*(float * PTR32 *)(gen_frame + 0xa4)) = in_EAX + 1;
    (*(float * PTR32 *)(gen_frame + 0x98)) = in_EAX;
    do {
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0xa4));
      (*(float * PTR32 *)(gen_frame + 0x98)) = in_EAX;
      (*(float * PTR32 *)(gen_frame + 0x9c)) = pfVar13;
      ((float *)(gen_frame + 0x3c))[(int)(iVar7 + 5)] = param_2 - *in_EAX;
      iVar3 = 0;
      ((float *)(gen_frame + 0x3c))[(int)(iVar7 + 9)] = *pfVar5 - param_2;
      fVar20 = 0.0;
      if (3 < iVar7) {
        pfVar6 = ((float *)(gen_frame + 0x0)) + iVar7;
        pfVar5 = ((float *)(gen_frame + 0x3c)) + iVar7 + 3;
        do {
          fVar12 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 10)];
          fVar15 = pfVar5[2];
          fVar17 = fVar12 + fVar15;
          pfVar13[-1] = fVar17;
          fVar17 = pfVar6[-1] / fVar17;
          fVar19 = pfVar5[1];
          *pfVar6 = fVar12 * fVar17 + fVar20;
          fVar20 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 0xb)];
          fVar18 = fVar19 + fVar20;
          *pfVar13 = fVar18;
          fVar18 = pfVar6[3] / fVar18;
          fVar12 = *pfVar5;
          pfVar6[4] = fVar20 * fVar18 + fVar15 * fVar17;
          fVar15 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 0xc)];
          fVar17 = fVar15 + fVar12;
          pfVar13[1] = fVar17;
          fVar17 = pfVar6[7] / fVar17;
          fVar20 = pfVar5[-1];
          pfVar6[8] = fVar15 * fVar17 + fVar19 * fVar18;
          fVar15 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 0xd)];
          fVar19 = fVar15 + fVar20;
          pfVar13[2] = fVar19;
          fVar19 = pfVar6[0xb] / fVar19;
          pfVar6[0xc] = fVar15 * fVar19 + fVar12 * fVar17;
          iVar3 = iVar3 + 4;
          pfVar6 = pfVar6 + 0x10;
          pfVar13 = pfVar13 + 4;
          pfVar5 = pfVar5 - 4;
          fVar20 = fVar20 * fVar19;
        } while (iVar3 < iVar7 - 3);
      }
      if (iVar3 < iVar7) {
        pfVar13 = ((float *)(gen_frame + 0x3c)) + (iVar7 - iVar3) + 5;
        pfVar5 = ((float *)(gen_frame + 0x0)) + iVar3 + iVar7 * 4;
        pfVar6 = ((float *)(gen_frame + 0x0)) + iVar7 + iVar3 * 4;
        do {
          fVar12 = *pfVar13;
          fVar15 = ((float *)(gen_frame + 0x3c))[(int)(iVar3 + 10)];
          fVar19 = fVar12 + fVar15;
          *pfVar5 = fVar19;
          fVar19 = pfVar6[-1] / fVar19;
          *pfVar6 = fVar15 * fVar19 + fVar20;
          iVar3 = iVar3 + 1;
          pfVar6 = pfVar6 + 4;
          pfVar5 = pfVar5 + 1;
          pfVar13 = pfVar13 - 1;
          fVar20 = fVar12 * fVar19;
        } while (iVar3 < iVar7);
      }
      (*(float * PTR32 *)(gen_frame + 0xa4)) = (*(float * PTR32 *)(gen_frame + 0xa4)) + 1;
      *(*(float * PTR32 *)(gen_frame + 0x94)) = fVar20;
      iVar7 = iVar7 + 1;
      in_EAX = (*(float * PTR32 *)(gen_frame + 0x98)) - 1;
      pfVar13 = (*(float * PTR32 *)(gen_frame + 0x9c)) + 4;
      (*(float * PTR32 *)(gen_frame + 0x98)) = in_EAX;
      (*(float * PTR32 *)(gen_frame + 0x9c)) = pfVar13;
      (*(float * PTR32 *)(gen_frame + 0x94)) = (*(float * PTR32 *)(gen_frame + 0x94)) + 5;
    } while (iVar7 <= param_3);
  }
  iVar7 = 0;
  if (-1 < param_3) {
    in_EAX = ((float *)GEN_TOP((param_3 + 1)));
    if (3 < (int)in_EAX) {
      uVar9 = param_3 + 1U >> 2;
      iVar7 = uVar9 * 4;
      pfVar13 = ((float *)(gen_frame + 0x10)) + param_3;
      pfVar5 = ((float *)GEN_TOP((param_6 + 8)));
      do {
        in_EAX = pfVar13 + 0x10;
        pfVar5[-2] = pfVar13[-4];
        uVar9 = uVar9 - 1;
        pfVar5[-1] = *pfVar13;
        *pfVar5 = pfVar13[4];
        pfVar5[1] = pfVar13[8];
        pfVar13 = in_EAX;
        pfVar5 = pfVar5 + 4;
      } while (uVar9 != 0);
    }
    if (iVar7 <= param_3) {
      in_EAX = ((float *)(gen_frame + 0x0)) + param_3 + iVar7 * 4;
      do {
        iVar7 = iVar7 + 1;
        *((float *)GEN_TOP((param_6 - 4 + iVar7 * 4))) = *in_EAX;
        in_EAX = in_EAX + 4;
      } while (iVar7 <= param_3);
    }
    fVar20 = REFG(float, 0x1090708);
    if (-1 < param_3) {
      (*(int *)(gen_frame + 0x7c)) = -param_3;
      fVar12 = gen_bits2f(1 - param_3);
      (*(int *)(gen_frame + 0x80)) = param_3;
      (*(float * PTR32 *)(gen_frame + 0xa4)) = ((float *)GEN_TOP(0xfffffffc));
      ((float *)(gen_frame + 0x64))[3] = fVar12;
      do {
        in_EAX = ((float *)GEN_TOP(0x0));
        (*(float * PTR32 *)(gen_frame + 0x88)) = ((float *)GEN_TOP(0x0));
        (*(float * PTR32 *)(gen_frame + 0x84)) = ((float *)GEN_TOP(0x1));
        ((float *)(gen_frame + 0x3c))[1] = fVar16;
        (*(int *)(gen_frame + 0x8c)) = 1;
        if (0 < param_4) {
          (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(((int)gen_fl2bits(fVar12) + (*(int *)(gen_frame + 0x80)))));
          (*(float * PTR32 *)(gen_frame + 0x9c)) = (*(float * PTR32 *)(gen_frame + 0xa4));
          iVar7 = param_3 - 1;
          (*(int *)(gen_frame + 0x78)) = iVar7;
          (*(float * PTR32 *)(gen_frame + 0x90)) = ((float *)GEN_TOP((param_6 + 0x14 + (int)(*(float * PTR32 *)(gen_frame + 0xa4)))));
          do {
            fVar12 = 0.0;
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x7c)) + param_3;
            if ((*(int *)(gen_frame + 0x8c)) <= (*(int *)(gen_frame + 0x7c)) + param_3) {
              fVar12 = ((float *)(gen_frame + 0x3c))[(int)((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x88))) * 4 + 1)];
              fVar15 = ((float *)(gen_frame + 0x10))[(int)((*(int *)(gen_frame + 0x7c)) + iVar7 * 5)];
              ((float *)(gen_frame + 0x3c))[(int)((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x84))) * 4 + 1)] = fVar12 / fVar15;
              fVar12 = ((float *)(gen_frame + 0x0))[(int)((int)(*(float * PTR32 *)(gen_frame + 0x9c)) + iVar7)] * (fVar12 / fVar15);
            }
            iVar3 = (*(int *)(gen_frame + 0x7c)) + iVar7;
            (*(float * PTR32 *)(gen_frame + 0x94)) = ((float *)GEN_TOP(iVar3));
            pfVar13 = ((float *)GEN_TOP(0x1));
            if (iVar3 < -1) {
              pfVar13 = (*(float * PTR32 *)(gen_frame + 0x98));
            }
            if (iVar7 < (*(int *)(gen_frame + 0x7c)) + param_3 - 1) {
              (*(float * PTR32 *)(gen_frame + 0xa0)) = ((float *)GEN_TOP((*(int *)(gen_frame + 0x80))));
              pfVar5 = ((float *)GEN_TOP((*(int *)(gen_frame + 0x80))));
            }
            else {
              pfVar5 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x8c)) - 1)));
              (*(float * PTR32 *)(gen_frame + 0xa0)) = pfVar5;
            }
            in_EAX = (*(float * PTR32 *)(gen_frame + 0x88));
            pfVar6 = (*(float * PTR32 *)(gen_frame + 0x84));
            if ((int)pfVar13 <= (int)pfVar5) {
              if (3 < ((int)pfVar5 - (int)pfVar13) + 1) {
                iVar8 = (((int)pfVar5 - (int)pfVar13) - 3U >> 2) + 1;
                pfVar6 = ((float *)(gen_frame + 0x3c)) + (int)pfVar13 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x84))) * 4 + 1;
                pfVar10 = ((float *)(gen_frame + 0x10)) + iVar3 + iVar7 * 4 + (int)pfVar13 + 1;
                pfVar4 = ((float *)(gen_frame + 0x3c)) + (int)pfVar13 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x88))) * 4 + 1;
                pfVar11 = ((float *)(gen_frame + 0x10)) + iVar7 + (iVar3 + (int)pfVar13) * 4;
                pfVar13 = ((float *)GEN_TOP(((int)pfVar13 + iVar8 * 4)));
                (*(int *)(gen_frame + 0x78)) = iVar7;
                (*(float * PTR32 *)(gen_frame + 0xa0)) = pfVar5;
                do {
                  fVar15 = pfVar11[-4];
                  *pfVar6 = (*pfVar4 - pfVar4[-1]) / pfVar10[-1];
                  fVar19 = *pfVar6;
                  pfVar6[1] = (pfVar4[1] - *pfVar4) / *pfVar10;
                  fVar17 = *pfVar11;
                  pfVar5 = pfVar6 + 1;
                  fVar18 = pfVar11[4];
                  pfVar6[2] = (pfVar4[2] - pfVar4[1]) / pfVar10[1];
                  pfVar1 = pfVar6 + 2;
                  fVar14 = (pfVar4[3] - pfVar4[2]) / pfVar10[2];
                  fVar2 = pfVar11[8];
                  pfVar6[3] = fVar14;
                  pfVar11 = pfVar11 + 0x10;
                  pfVar4 = pfVar4 + 4;
                  pfVar10 = pfVar10 + 4;
                  pfVar6 = pfVar6 + 4;
                  iVar8 = iVar8 - 1;
                  fVar12 = fVar2 * fVar14 +
                           (((fVar15 * fVar19 + fVar12) + fVar17 * *pfVar5) + fVar18 * *pfVar1);
                  pfVar5 = (*(float * PTR32 *)(gen_frame + 0xa0));
                  iVar7 = (*(int *)(gen_frame + 0x78));
                } while (iVar8 != 0);
              }
              in_EAX = (*(float * PTR32 *)(gen_frame + 0x88));
              pfVar6 = (*(float * PTR32 *)(gen_frame + 0x84));
              if ((int)pfVar13 <= (int)pfVar5) {
                (*(float * PTR32 *)(gen_frame + 0xa0)) = ((float *)(gen_frame + 0x3c)) + (int)pfVar13 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x84))) * 4 + 1;
                pfVar10 = ((float *)(gen_frame + 0x10)) + (int)(*(float * PTR32 *)(gen_frame + 0x94)) + iVar7 * 4 + (int)pfVar13;
                pfVar4 = ((float *)(gen_frame + 0x3c)) + (int)pfVar13 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x88))) * 4 + 1;
                pfVar11 = ((float *)(gen_frame + 0x0)) + iVar7 + ((int)(*(float * PTR32 *)(gen_frame + 0x94)) + (int)pfVar13) * 4;
                iVar3 = ((int)pfVar5 - (int)pfVar13) + 1;
                do {
                  fVar19 = (*pfVar4 - pfVar4[-1]) / *pfVar10;
                  *(*(float * PTR32 *)(gen_frame + 0xa0)) = fVar19;
                  fVar15 = *pfVar11;
                  pfVar11 = pfVar11 + 4;
                  pfVar4 = pfVar4 + 1;
                  pfVar10 = pfVar10 + 1;
                  iVar3 = iVar3 - 1;
                  fVar12 = fVar12 + fVar19 * fVar15;
                  (*(float * PTR32 *)(gen_frame + 0xa0)) = (*(float * PTR32 *)(gen_frame + 0xa0)) + 1;
                  in_EAX = (*(float * PTR32 *)(gen_frame + 0x88));
                  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x84));
                } while (iVar3 != 0);
              }
            }
            if ((*(int *)(gen_frame + 0x74)) <= iVar7) {
              fVar15 = (fVar20 / ((float *)(gen_frame + 0x10))[(int)((*(int *)(gen_frame + 0x74)) + iVar7 * 4)]) *
                       ((float *)(gen_frame + 0x3c))[(int)((*(int *)(gen_frame + 0x8c)) + (int)((int)(uintptr_t)in_EAX) * 4)];
              ((float *)(gen_frame + 0x3c))[(int)((*(int *)(gen_frame + 0x8c)) + (int)((int)(uintptr_t)pfVar6) * 4 + 1)] = fVar15;
              fVar12 = fVar12 + ((float *)(gen_frame + 0x10))[(int)((int)(*(float * PTR32 *)(gen_frame + 0xa4)) + iVar7)] * fVar15;
            }
            (*(float * PTR32 *)(gen_frame + 0x9c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x9c)) - 4)));
            (*(float * PTR32 *)(gen_frame + 0x98)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x98)) + 1)));
            iVar3 = (*(int *)(gen_frame + 0x8c)) + 1;
            *(*(float * PTR32 *)(gen_frame + 0x90)) = fVar12;
            iVar7 = iVar7 - 1;
            (*(float * PTR32 *)(gen_frame + 0x88)) = pfVar6;
            (*(float * PTR32 *)(gen_frame + 0x84)) = in_EAX;
            (*(int *)(gen_frame + 0x8c)) = iVar3;
            (*(int *)(gen_frame + 0x78)) = iVar7;
            (*(float * PTR32 *)(gen_frame + 0x90)) = (*(float * PTR32 *)(gen_frame + 0x90)) + 4;
            fVar12 = ((float *)(gen_frame + 0x64))[3];
          } while (iVar3 <= param_4);
        }
        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) - 1;
        (*(float * PTR32 *)(gen_frame + 0xa4)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0xa4)) + 4)));
        (*(int *)(gen_frame + 0x7c)) = (*(int *)(gen_frame + 0x7c)) + 1;
      } while ((*(int *)(gen_frame + 0x7c)) + param_3 <= param_3);
    }
  }
  iVar7 = 1;
  if (0 < param_4) {
    (*(float * PTR32 *)(gen_frame + 0x90)) = ((float *)GEN_TOP((param_3 - 1)));
    in_EAX = ((float *)GEN_TOP((param_6 + 0x10)));
    iVar3 = param_3;
    do {
      iVar8 = 0;
      if (-1 < param_3) {
        if (3 < param_3 + 1) {
          uVar9 = param_3 + 1U >> 2;
          fVar16 = (float)iVar3;
          iVar8 = uVar9 * 4;
          pfVar13 = in_EAX;
          do {
            *pfVar13 = *pfVar13 * fVar16;
            pfVar13[1] = pfVar13[1] * fVar16;
            pfVar13[2] = pfVar13[2] * fVar16;
            pfVar13[3] = pfVar13[3] * fVar16;
            pfVar13 = pfVar13 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (iVar8 <= param_3) {
          pfVar13 = ((float *)GEN_TOP((param_6 + (iVar8 + iVar7 * 4) * 4)));
          iVar8 = (param_3 - iVar8) + 1;
          do {
            *pfVar13 = (float)iVar3 * *pfVar13;
            pfVar13 = pfVar13 + 1;
            iVar8 = iVar8 - 1;
          } while (iVar8 != 0);
        }
      }
      iVar3 = iVar3 * (int)(*(float * PTR32 *)(gen_frame + 0x90));
      iVar7 = iVar7 + 1;
      in_EAX = in_EAX + 4;
      (*(float * PTR32 *)(gen_frame + 0x90)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x90)) - 1)));
    } while (iVar7 <= param_4);
  }
  return (uint)in_EAX;
}

/* ref: FUN_00d8bc90 */
GEN_LIB GEN_FRAME float10 F_00d8bc90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xd8bc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float * pfVar11;
  float fVar12;
  
  if (((param_4 != 0) ||
      (bVar8 = GEN_ISNAN(param_5) || GEN_ISNAN(*((float *)GEN_TOP(*param_3))),
      bVar8 == (bVar8 || param_5 == *((float *)GEN_TOP(*param_3))))) &&
     ((param_4 != (param_2 - param_1) - 1 ||
      (pfVar11 = ((float *)GEN_TOP((*param_3 + param_2 * 4))), bVar8 = GEN_ISNAN(param_5) || GEN_ISNAN(*pfVar11),
      bVar8 == (bVar8 || param_5 == *pfVar11))))) {
    iVar6 = *param_3;
    pfVar11 = ((float *)GEN_TOP((iVar6 + param_4 * 4)));
    (*(int *)(gen_frame + 0x20)) = iVar6;
    ((float * PTR32 *)(gen_frame + 0xc))[2] = pfVar11;
    if ((!(param_5 < *((float *)GEN_TOP((iVar6 + param_4 * 4))))) &&
       (!(*((float *)GEN_TOP((iVar6 + 4 + (param_1 + param_4) * 4))) <= param_5))) {
      iVar2 = 0;
      pfVar5 = pfVar11;
      if (-1 < param_1) {
        do {
          if ((*pfVar5 <= param_5) && (param_5 < pfVar5[1])) {
            ((float *)(gen_frame + 0x0))[(int)(iVar2)] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[(int)(iVar2)], REFG(float, 0x1087f04));
          }
          else {
            ((float *)(gen_frame + 0x0))[(int)(iVar2)] = 0.0;
          }
          iVar2 = iVar2 + 1;
          pfVar5 = pfVar5 + 1;
        } while (iVar2 <= param_1);
      }
      (*(int *)(gen_frame + 0x1c)) = 1;
      if (0 < param_1) {
        pfVar5 = ((float *)GEN_TOP((iVar6 + 8 + param_4 * 4)));
        (*(int *)(gen_frame + 0x18)) = param_1;
        ((float * PTR32 *)(gen_frame + 0xc))[1] = pfVar5;
        iVar6 = param_1;
        do {
          if (GEN_ISNAN(((float *)(gen_frame + 0x0))[0]) == (GEN_ISNAN(((float *)(gen_frame + 0x0))[0]) || ((float *)(gen_frame + 0x0))[0] == 0.0)) {
            fVar9 = ((param_5 - *pfVar11) * ((float *)(gen_frame + 0x0))[0]) / (pfVar5[-1] - *pfVar11);
          }
          else {
            fVar9 = 0.0;
          }
          iVar2 = 0;
          pfVar11 = pfVar5;
          if (3 < iVar6) {
            pfVar4 = pfVar5 + 2;
            pfVar3 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0xc + param_4 * 4)));
            pfVar7 = ((float * PTR32 *)(gen_frame + 0xc))[2] + 1;
            ((float * PTR32 *)(gen_frame + 0xc))[1] = pfVar5;
            (*(int *)(gen_frame + 0x18)) = iVar6;
            do {
              fVar10 = ((float *)(gen_frame + 0x0))[(int)(iVar2 + 1)];
              fVar12 = *pfVar7;
              if (GEN_ISNAN(fVar10) == (GEN_ISNAN(fVar10) || fVar10 == 0.0)) {
                fVar10 = fVar10 / (*pfVar5 - fVar12);
                ((float *)(gen_frame + 0x0))[(int)(iVar2)] = (*pfVar5 - param_5) * fVar10 + fVar9;
                fVar10 = (param_5 - fVar12) * fVar10;
              }
              else {
                ((float *)(gen_frame + 0x0))[(int)(iVar2)] = fVar9;
                fVar10 = 0.0;
              }
              fVar9 = ((float *)(gen_frame + 0x0))[(int)(iVar2 + 2)];
              fVar12 = pfVar3[-1];
              if (GEN_ISNAN(fVar9) == (GEN_ISNAN(fVar9) || fVar9 == 0.0)) {
                fVar9 = fVar9 / (pfVar4[-1] - fVar12);
                ((float *)(gen_frame + 0x0))[(int)(iVar2 + 1)] = (pfVar4[-1] - param_5) * fVar9 + fVar10;
                fVar9 = (param_5 - fVar12) * fVar9;
              }
              else {
                ((float *)(gen_frame + 0x0))[(int)(iVar2 + 1)] = fVar10;
                fVar9 = 0.0;
              }
              pfVar11 = ((float * PTR32 *)(gen_frame + 0xc))[(int)(iVar2)];
              fVar10 = *pfVar3;
              if (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)))) == (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)))) || ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))) == 0.0)) {
                fVar12 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))) / (*pfVar4 - fVar10);
                ((float *)(gen_frame + 0x0))[(int)(iVar2 + 2)] = (*pfVar4 - param_5) * fVar12 + fVar9;
                pfVar11 = ((float *)GEN_TOP(((param_5 - fVar10) * fVar12)));
              }
              else {
                ((float *)(gen_frame + 0x0))[(int)(iVar2 + 2)] = fVar9;
                pfVar11 = ((float *)GEN_TOP(0x0));
              }
              pfVar1 = ((float * PTR32 *)(gen_frame + 0xc))[(int)(iVar2 + 1)];
              fVar10 = pfVar3[1];
              if (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)))) == (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)))) || ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1))) == 0.0)) {
                fVar9 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1))) / (pfVar4[1] - fVar10);
                ((float * PTR32 *)(gen_frame + 0xc))[(int)(iVar2)] = ((float *)GEN_TOP(((pfVar4[1] - param_5) * fVar9 + ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))))));
                fVar9 = (param_5 - fVar10) * fVar9;
              }
              else {
                ((float * PTR32 *)(gen_frame + 0xc))[(int)(iVar2)] = pfVar11;
                fVar9 = 0.0;
              }
              iVar2 = iVar2 + 4;
              pfVar7 = pfVar7 + 4;
              pfVar5 = pfVar5 + 4;
              pfVar3 = pfVar3 + 4;
              pfVar4 = pfVar4 + 4;
              iVar6 = (*(int *)(gen_frame + 0x18));
              pfVar11 = ((float * PTR32 *)(gen_frame + 0xc))[1];
            } while (iVar2 < (*(int *)(gen_frame + 0x18)) - 3);
          }
          if (iVar2 < iVar6) {
            pfVar5 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 4 + ((*(int *)(gen_frame + 0x1c)) + iVar2 + param_4) * 4)));
            pfVar4 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 4 + (param_4 + iVar2) * 4)));
            do {
              fVar10 = ((float *)(gen_frame + 0x0))[(int)(iVar2 + 1)];
              fVar12 = *pfVar4;
              if (GEN_ISNAN(fVar10) == (GEN_ISNAN(fVar10) || fVar10 == 0.0)) {
                fVar10 = fVar10 / (*pfVar5 - fVar12);
                ((float *)(gen_frame + 0x0))[(int)(iVar2)] = (*pfVar5 - param_5) * fVar10 + fVar9;
                fVar9 = (param_5 - fVar12) * fVar10;
              }
              else {
                ((float *)(gen_frame + 0x0))[(int)(iVar2)] = fVar9;
                fVar9 = 0.0;
              }
              iVar2 = iVar2 + 1;
              pfVar4 = pfVar4 + 1;
              pfVar5 = pfVar5 + 1;
            } while (iVar2 < iVar6);
          }
          iVar2 = (*(int *)(gen_frame + 0x1c)) + 1;
          pfVar5 = pfVar11 + 1;
          iVar6 = iVar6 - 1;
          (*(int *)(gen_frame + 0x1c)) = iVar2;
          ((float * PTR32 *)(gen_frame + 0xc))[1] = pfVar5;
          (*(int *)(gen_frame + 0x18)) = iVar6;
          pfVar11 = ((float * PTR32 *)(gen_frame + 0xc))[2];
        } while (iVar2 <= param_1);
      }
      return (float10)((float *)(gen_frame + 0x0))[0];
    }
    return (float10)0;
  }
  return (float10)1;
}

/* ref: FUN_00d8bfb0 */
GEN_LIB GEN_FRAME uint F_00d8bfb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd8bfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_FRAME_DECL_TOP(0x70, 0, 4);
  uint uVar1;
  uint uVar2;
  int in_ecx;
  int iVar3;
  int iVar4;
  float * pfVar5;
  undefined1 * puVar6;
  float fVar7;
  
  iVar3 = param_6;
  if (param_2 <= param_6) {
    param_6 = param_2;
  }
  fVar7 = 0.0;
  iVar4 = param_2 + 1;
  if (iVar4 <= iVar3) {
    in_ecx = iVar4 * 0x10 + param_7;
    iVar3 = (iVar3 - iVar4) + 1;
    do {
      uVar1 = F_00d8ab50(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,fVar7,fVar7,fVar7,fVar7);
      F_00d8ab80(in_ecx GEN_EDX_ARG,uVar1);
      in_ecx = in_ecx + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  uVar1 = F_00d8b440(param_1,param_2,param_5,param_3);
  (*(uint *)(gen_frame + 0x64)) = uVar1;
  uVar2 = F_00d8b670(uVar1,param_5,param_2,param_6,param_3,((undefined1 *)(gen_frame + 0x0)));
  if (-1 < param_6) {
    fVar7 = 0.0;
    puVar6 = ((undefined1 *)(gen_frame + 0x0)) - param_7;
    (*(undefined1 * PTR32 *)(gen_frame + 0x60)) = puVar6;
    (*(int *)(gen_frame + 0x68)) = param_6 + 1;
    iVar3 = param_7;
    do {
      uVar2 = F_00d8ab50(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,fVar7,fVar7,fVar7,fVar7);
      uVar2 = F_00d8ab80(iVar3 GEN_EDX_ARG,uVar2);
      if (-1 < param_2) {
        pfVar5 = (float *)(puVar6 + iVar3);
        iVar4 = (uVar1 - param_2) * 0x10;
        param_6 = param_2 + 1;
        do {
          uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0x40)),*pfVar5,*param_4 + iVar4);
          uVar2 = F_00d8abb0(iVar3 GEN_EDX_ARG,uVar1);
          iVar4 = iVar4 + 0x10;
          pfVar5 = pfVar5 + 1;
          param_6 = param_6 - 1;
          uVar1 = (*(uint *)(gen_frame + 0x64));
          puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x60));
        } while (param_6 != 0);
      }
      iVar3 = iVar3 + 0x10;
      iVar4 = (*(int *)(gen_frame + 0x68)) - 1;
      (*(int *)(gen_frame + 0x68)) = iVar4;
    } while (iVar4 != 0);
  }
  return uVar2;
}

/* ref: FUN_00d8c100 */
GEN_LIB GEN_FRAME uint F_00d8c100(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xd8c100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d8b440(param_2,param_3,param_6,param_4);
  F_00d8b4a0(uVar1,param_6,param_3,param_4,((float *)(gen_frame + 0x10)));
  iVar2 = (uVar1 - param_3) * 0x10;
  F_00d8ae30(param_1,((float *)(gen_frame + 0x10))[0],*param_5 + iVar2);
  iVar3 = 1;
  if (0 < param_3) {
    do {
      iVar2 = iVar2 + 0x10;
      uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0x10))[(int)(iVar3)],*param_5 + iVar2);
      F_00d8abb0(param_1 GEN_EDX_ARG,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= param_3);
  }
  return param_1;
}

/* ref: FUN_00d8c1b0 */
GEN_LIB GEN_FRAME unsigned int F_00d8c1b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd8c1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (-1 < param_5) {
    iVar3 = 0;
    do {
      uVar1 = F_00d8c100(((undefined1 *)(gen_frame + 0x0)),param_1,param_2,param_3,param_4,GEN_ARGF(*((float *)GEN_TOP((*param_6 + iVar2 * 4)))));
      F_00d8ab80(*param_7 + iVar3 GEN_EDX_ARG,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 <= param_5);
  }
  return;
}

/* ref: FUN_00d8c210 */
GEN_LIB GEN_FRAME uint F_00d8c210(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8c210u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pfVar2 = ((float *)GEN_TOP(*param_2));
  uVar5 = 0;
  uVar3 = (int)param_3 / 2;
  pfVar1 = pfVar2 + param_3;
  if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(*pfVar1)) && (!(param_1 < *pfVar1) && param_1 != *pfVar1)) {
    return param_3 + 1;
  }
  if (!(param_1 <= *pfVar2)) {
    uVar4 = param_3;
    if (uVar3 != 0) {
      do {
        uVar6 = uVar3;
        if (param_1 <= pfVar2[uVar3]) {
          uVar4 = uVar3;
          uVar6 = uVar5;
        }
        uVar3 = (int)(uVar4 + uVar6) / 2;
        uVar5 = uVar6;
      } while (uVar6 != uVar3);
    }
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00d8c280 */
GEN_LIB GEN_FRAME uint F_00d8c280(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8c280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  float fVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (param_1 <= param_2) {
    fVar1 = *((float *)GEN_TOP((*param_3 + param_1 * 4)));
    pfVar3 = ((float *)GEN_TOP((*param_3 + param_1 * 4)));
    iVar2 = param_1;
    do {
      bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(*pfVar3);
      if (bVar6 == (bVar6 || fVar1 == *pfVar3)) break;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar2 <= param_2);
  }
  iVar2 = param_1 - 1;
  iVar4 = 1;
  if (-1 < iVar2) {
    fVar1 = *((float *)GEN_TOP((*param_3 + param_1 * 4)));
    do {
      pfVar3 = ((float *)GEN_TOP((*param_3 + iVar2 * 4)));
      bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(*pfVar3);
      if (bVar6 == (bVar6 || fVar1 == *pfVar3)) break;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return iVar4 - 1 + iVar5;
}

/* ref: FUN_00d8c2f0 */
GEN_LIB GEN_FRAME uint F_00d8c2f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float fVar1;
  float fVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  iVar5 = 0;
  if (3 < param_2) {
    pfVar3 = ((float *)GEN_TOP((*param_1 + 8)));
    iVar4 = (param_2 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    do {
      fVar1 = pfVar3[-1];
      bVar7 = GEN_ISNAN(pfVar3[-2]) || GEN_ISNAN(fVar1);
      if (bVar7 == (bVar7 || pfVar3[-2] == fVar1)) {
        iVar6 = iVar6 + 1;
      }
      fVar2 = *pfVar3;
      if ((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar2)) == ((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar2)) || fVar1 == fVar2)) {
        iVar6 = iVar6 + 1;
      }
      fVar1 = pfVar3[1];
      if ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) == ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) || fVar2 == fVar1)) {
        iVar6 = iVar6 + 1;
      }
      bVar7 = GEN_ISNAN(fVar1) || GEN_ISNAN(pfVar3[2]);
      if (bVar7 == (bVar7 || fVar1 == pfVar3[2])) {
        iVar6 = iVar6 + 1;
      }
      pfVar3 = pfVar3 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if (iVar5 < param_2) {
    pfVar3 = ((float *)GEN_TOP((*param_1 + iVar5 * 4)));
    iVar5 = param_2 - iVar5;
    do {
      bVar7 = GEN_ISNAN(*pfVar3) || GEN_ISNAN(pfVar3[1]);
      if (bVar7 == (bVar7 || *pfVar3 == pfVar3[1])) {
        iVar6 = iVar6 + 1;
      }
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  return iVar6 + 1;
}

/* ref: FUN_00d8c390 */
GEN_LIB GEN_FRAME uint F_00d8c390(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd8c390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  float * pfVar1;
  float fVar2;
  bool bVar3;
  
  if ((param_2 != param_4) &&
     (fVar2 = *((float *)GEN_TOP((*param_3 + param_2 * 4))), pfVar1 = ((float *)GEN_TOP((*param_3 + 4 + param_2 * 4))),
     bVar3 = GEN_ISNAN(fVar2) || GEN_ISNAN(*pfVar1), bVar3 != (bVar3 || fVar2 == *pfVar1))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d8c3d0 */
GEN_LIB GEN_FRAME uint F_00d8c3d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  
  if (0 < param_2) {
    pfVar4 = ((float *)GEN_TOP(*param_1));
    fVar5 = *pfVar4;
    uVar1 = 0;
    uVar2 = 1;
    if (1 < param_2) {
      if (3 < param_2 - 1) {
        pfVar3 = pfVar4 + 3;
        do {
          if (pfVar3[-2] < fVar5) {
            uVar1 = uVar2;
            fVar5 = pfVar3[-2];
          }
          if (pfVar3[-1] < fVar5) {
            uVar1 = uVar2 + 1;
            fVar5 = pfVar3[-1];
          }
          if (*pfVar3 < fVar5) {
            uVar1 = uVar2 + 2;
            fVar5 = *pfVar3;
          }
          if (pfVar3[1] < fVar5) {
            uVar1 = uVar2 + 3;
            fVar5 = pfVar3[1];
          }
          uVar2 = uVar2 + 4;
          pfVar3 = pfVar3 + 4;
        } while ((int)uVar2 < param_2 - 3);
      }
      if ((int)uVar2 < param_2) {
        pfVar4 = pfVar4 + uVar2;
        do {
          if (*pfVar4 < fVar5) {
            uVar1 = uVar2;
            fVar5 = *pfVar4;
          }
          uVar2 = uVar2 + 1;
          pfVar4 = pfVar4 + 1;
        } while ((int)uVar2 < param_2);
      }
    }
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00d8c470 */
GEN_LIB GEN_FRAME uint F_00d8c470(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  
  if (0 < param_2) {
    pfVar4 = ((float *)GEN_TOP(*param_1));
    fVar5 = *pfVar4;
    uVar1 = 0;
    uVar2 = 1;
    if (1 < param_2) {
      if (3 < param_2 - 1) {
        pfVar3 = pfVar4 + 3;
        do {
          if (fVar5 < pfVar3[-2]) {
            uVar1 = uVar2;
            fVar5 = pfVar3[-2];
          }
          if (fVar5 < pfVar3[-1]) {
            uVar1 = uVar2 + 1;
            fVar5 = pfVar3[-1];
          }
          if (fVar5 < *pfVar3) {
            uVar1 = uVar2 + 2;
            fVar5 = *pfVar3;
          }
          if (fVar5 < pfVar3[1]) {
            uVar1 = uVar2 + 3;
            fVar5 = pfVar3[1];
          }
          uVar2 = uVar2 + 4;
          pfVar3 = pfVar3 + 4;
        } while ((int)uVar2 < param_2 - 3);
      }
      if ((int)uVar2 < param_2) {
        pfVar4 = pfVar4 + uVar2;
        do {
          if (fVar5 < *pfVar4) {
            uVar1 = uVar2;
            fVar5 = *pfVar4;
          }
          uVar2 = uVar2 + 1;
          pfVar4 = pfVar4 + 1;
        } while ((int)uVar2 < param_2);
      }
    }
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00d8c510 */
GEN_LIB GEN_NOFRAME double GEN_THISCALL F_00d8c510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd8c510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  double dVar1;
  
  dVar1 = F_00d8b160(this,this);
  return dVar1;
}

/* ref: FUN_00d8c520 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00d8c520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd8c520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  double dVar1;
  
  dVar1 = F_00d8c510(this GEN_EDX_FWD);
  return ((float)GEN_TOF(GEN_X87(SQRT((float10)dVar1))));
}

/* ref: FUN_00d8c530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d8c530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  float fVar1;
  
  fVar1 = F_00d8c520(this GEN_EDX_FWD);
  F_00d8ade0(this GEN_EDX_ARG,param_1,fVar1);
  return param_1;
}

/* ref: FUN_00d8c560 */
GEN_LIB GEN_FRAME float F_00d8c560(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * this;
  float fVar1;
  
  this = ((undefined *)GEN_TOP(F_00d8ad40(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2)));
  fVar1 = F_00d8c520(this GEN_EDX_ARG);
  return fVar1;
}

/* ref: FUN_00d8c5c0 */
GEN_LIB GEN_FRAME double F_00d8c5c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd8c5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * this;
  float fVar1;
  
  this = ((undefined *)GEN_TOP(F_00d8ad40(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1)));
  fVar1 = F_00d8c520(this GEN_EDX_ARG);
  return (double)fVar1;
}

/* ref: FUN_00d8c5f0 */
GEN_LIB GEN_FRAME uint F_00d8c5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd8c5f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  
  uVar3 = (*(undefined4 *)&gen_args[2]);
  uVar2 = (*(undefined4 *)&gen_args[1]);
  uVar5 = (*(uint *)&gen_args[0]);
  pcVar4 = ((char *)GEN_TOP(F_00d8c390((int)&(*(uint *)&gen_args[0]) + 3,(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))));
  cVar1 = *pcVar4;
  while (cVar1 == '\0') {
    uVar5 = uVar5 + 1;
    pcVar4 = ((char *)GEN_TOP(F_00d8c390((int)&(*(uint *)&gen_args[0]) + 3,uVar5,uVar2,uVar3)));
    cVar1 = *pcVar4;
  }
  return uVar5;
}

/* ref: FUN_00d8c630 */
GEN_LIB GEN_FRAME unsigned int F_00d8c630(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8c630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  param_2[1] = param_2[1] - 1;
  iVar1 = (param_2[1] - param_1) * 4;
  puVar2 = ((undefined4 *)GEN_TOP((*param_2 + param_1 * 4)));
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d8c670 */
GEN_LIB GEN_FRAME unsigned int F_00d8c670(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd8c670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  param_2[1] = param_2[1] - 1;
  iVar2 = (param_2[1] - param_1) * 4;
  puVar4 = ((undefined4 *)GEN_TOP((*param_2 + param_1 * 4)));
  iVar3 = param_1;
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar4 = puVar4[1];
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  for (; iVar3 < param_3; iVar3 = iVar3 + 1) {
    piVar1 = ((int *)GEN_TOP((*param_2 + iVar3 * 4)));
    *piVar1 = *piVar1 - 1;
  }
  return 0;
}

/* ref: FUN_00d8c950 */
GEN_LIB GEN_FRAME uint F_00d8c950(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9), GEN_P(float param_11, float gen_a10), GEN_P(float param_12, float gen_a11), GEN_P(char param_13, unsigned int gen_a12))
{
  GEN_ENTER(0xd8c950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  GEN_PIN(float param_11 = (float)gen_a10;)
  GEN_PIN(float param_12 = (float)gen_a11;)
  GEN_PIN(char param_13 = (char)gen_a12;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint in_EAX = 0;
  undefined * this;
  uint extraout_EAX = 0;
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  iVar1 = 0;
  if (-1 < (int)param_1) {
    iVar2 = 0;
    do {
      if (param_13 == '\0') {
        fVar4 = *((float *)GEN_TOP((*param_8 + iVar1 * 4)));
      }
      else {
        fVar3 = F_00d8c6d0(param_3,param_4,param_5,param_6,*param_2 + iVar2,param_9,param_10,
                             param_11,param_12);
        fVar4 = (float)fVar3;
      }
      F_00d8c100(((undefined1 *)(gen_frame + 0x10)),param_3,param_4,param_5,param_6,fVar4);
      *((float *)GEN_TOP((*param_8 + iVar1 * 4))) = fVar4;
      this = ((undefined *)GEN_TOP(F_00d8ad40(*param_2 + iVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)))));
      fVar4 = F_00d8c520(this GEN_EDX_ARG);
      *((float *)GEN_TOP((*param_7 + iVar1 * 4))) = fVar4;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
      in_EAX = extraout_EAX;
    } while (iVar1 <= (int)param_1);
  }
  return in_EAX;
}

/* ref: FUN_00d8cb90 */
GEN_LIB GEN_FRAME uint F_00d8cb90(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xd8cb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  undefined8 * puVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  (*(int *)(gen_frame + 0x24)) = 0;
  if (-1 < param_6) {
    (*(int *)(gen_frame + 0x28)) = 0;
    do {
      puVar1 = ((undefined8 *)GEN_TOP((*param_7 + (*(int *)(gen_frame + 0x28)))));
      (*(undefined8 *)(gen_frame + 0x10)) = *puVar1;
      (*(undefined8 *)(gen_frame + 0x18)) = puVar1[1];
      fVar3 = F_00d8c6d0(param_2,param_3,param_5,param_4,puVar1,100,10,REFG(float, 0x10abe98),REFG(float, 0x10abe98));
      (*(float *)(gen_frame + 0x20)) = (float)fVar3;
      F_00d8c100(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_5,param_4,(float)fVar3);
      fVar4 = F_00d8c560(&(*(undefined8 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x0)));
      if ((!GEN_ISNAN((float10)fVar4) && !GEN_ISNAN((float10)param_8)) && !((float10)fVar4 <= (float10)param_8))
      {
        *param_1 = 0;
        return (uint)param_1;
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x10;
      iVar2 = (*(int *)(gen_frame + 0x24)) + 1;
      (*(int *)(gen_frame + 0x24)) = iVar2;
    } while (iVar2 <= param_6);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d8cc60 */
GEN_LIB GEN_FRAME float10 F_00d8cc60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined1 * param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xd8cc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_FRAME_DECL_TOP(0xf0, 0, 4);
  uint uVar1;
  uint in_ecx;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int in_ecx_00;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 * puVar11;
  
  fVar7 = 0.0;
  puVar2 = ((undefined1 *)(gen_frame + 0x30));
  iVar3 = 6;
  do {
    F_00d8ab50(puVar2 GEN_EDX_ARG,fVar7,fVar7,fVar7,fVar7);
    puVar2 = ((undefined1 *)GEN_TOP((((int)(uint)(puVar2)) + 0x10)));
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  iVar4 = (int)gen_fl2bits(*param_4);
  iVar5 = (int)param_6 - param_2;
  param_7 = (int)param_6 - param_7;
  (*(int *)(gen_frame + 0xd4)) = iVar4;
  F_00d8ab80(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,(iVar5 - 1) * 0x10 + iVar4);
  iVar4 = param_7 * 0x10 + iVar4;
  iVar3 = param_7 - (iVar5 - 1);
  F_00d8ab80(((undefined1 *)(gen_frame + 0x40)) + iVar3 * 0x10 GEN_EDX_ARG,iVar4 + 0x10);
  (*(int *)(gen_frame + 0xe0)) = 1;
  (*(int *)(gen_frame + 0xd8)) = iVar3;
  fVar7 = param_5;
  fVar9 = REFG(float, 0x1087f04);
  if (param_7 != iVar5 && -1 < param_7 - iVar5) {
    param_6 = ((undefined1 *)(gen_frame + 0x30)) + iVar3 * 0x10;
    (*(float * PTR32 *)(gen_frame + 0xe8)) = ((float *)GEN_TOP((*param_3 + param_7 * 4)));
    (*(float * PTR32 *)(gen_frame + 0xe4)) = ((float *)GEN_TOP((*param_3 + iVar5 * 4)));
    (*(float * PTR32 *)(gen_frame + 0xdc)) = ((float *)GEN_TOP((*param_3 + (param_7 + 1 + param_2) * 4)));
    in_ecx_00 = iVar5 * 0x10 + (*(int *)(gen_frame + 0xd4));
    param_4 = ((float *)GEN_TOP((*param_3 + (iVar5 + 1 + param_2) * 4)));
    (*(int *)(gen_frame + 0xd0)) = iVar4;
    puVar2 = ((undefined1 *)(gen_frame + 0x40));
    do {
      fVar6 = (fVar7 - *(*(float * PTR32 *)(gen_frame + 0xe4))) / (*param_4 - *(*(float * PTR32 *)(gen_frame + 0xe4)));
      puVar11 = ((undefined1 *)(gen_frame + 0x0));
      fVar8 = (fVar7 - *(*(float * PTR32 *)(gen_frame + 0xe8))) / (*(*(float * PTR32 *)(gen_frame + 0xdc)) - *(*(float * PTR32 *)(gen_frame + 0xe8)));
      uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0x10)),fVar9 - fVar6,puVar2 - 0x10);
      uVar1 = F_00d8ad40(in_ecx_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),uVar1);
      uVar1 = F_00d8ade0(uVar1 GEN_EDX_ARG,puVar11,fVar6);
      F_00d8ab80(puVar2 GEN_EDX_ARG,uVar1);
      fVar6 = fVar9 - fVar8;
      puVar11 = ((undefined1 *)(gen_frame + 0xc0));
      uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0xb0)),fVar8,param_6 + 0x10);
      iVar4 = (*(int *)(gen_frame + 0xd0));
      uVar1 = F_00d8ad40((*(int *)(gen_frame + 0xd0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa0)),uVar1);
      uVar1 = F_00d8ade0(uVar1 GEN_EDX_ARG,puVar11,fVar6);
      F_00d8ab80(param_6 GEN_EDX_ARG,uVar1);
      (*(int *)(gen_frame + 0xe0)) = (*(int *)(gen_frame + 0xe0)) + 1;
      (*(float * PTR32 *)(gen_frame + 0xdc)) = (*(float * PTR32 *)(gen_frame + 0xdc)) - 1;
      (*(float * PTR32 *)(gen_frame + 0xe8)) = (*(float * PTR32 *)(gen_frame + 0xe8)) - 1;
      iVar3 = (*(int *)(gen_frame + 0xd8)) - 1;
      (*(int *)(gen_frame + 0xd8)) = iVar3;
      param_6 = param_6 - 0x10;
      param_4 = param_4 + 1;
      (*(float * PTR32 *)(gen_frame + 0xe4)) = (*(float * PTR32 *)(gen_frame + 0xe4)) + 1;
      param_7 = param_7 - 1;
      iVar5 = iVar5 + 1;
      in_ecx_00 = in_ecx_00 + 0x10;
      puVar2 = puVar2 + 0x10;
      (*(int *)(gen_frame + 0xd0)) = iVar4 - 0x10;
    } while (param_7 != iVar5 && -1 < param_7 - iVar5);
  }
  (*(int *)(gen_frame + 0xd8)) = iVar3;
  if (-1 < param_7 - iVar5) {
    iVar3 = *param_3;
    iVar4 = (*(int *)(gen_frame + 0xe0)) * 0x10;
    fVar7 = (fVar7 - *((float *)GEN_TOP((iVar3 + iVar5 * 4)))) / (*((float *)GEN_TOP((iVar3 + (iVar5 + 1 + param_2) * 4))) - *((float *)GEN_TOP((iVar3 + iVar5 * 4))));
    uVar1 = F_00d8ae30(((undefined1 *)(gen_frame + 0xa0)),fVar9 - fVar7,((undefined1 *)(gen_frame + 0x20)) + iVar4);
    puVar2 = ((undefined1 *)(gen_frame + 0xb0));
    in_ecx = F_00d8ae30(((undefined1 *)(gen_frame + 0xc0)),fVar7,((undefined1 *)(gen_frame + 0x40)) + iVar4);
    uVar1 = F_00d8acf0(in_ecx GEN_EDX_ARG,puVar2,uVar1);
    dVar10 = F_00d8c5c0(iVar5 * 0x10 + (*(int *)(gen_frame + 0xd4)),uVar1);
    return (float10)dVar10;
  }
  dVar10 = F_00d8c5c0(((undefined1 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0xe0)) * 0x10,((undefined1 *)(gen_frame + 0x40)) + iVar3 * 0x10);
  return (float10)dVar10;
}

