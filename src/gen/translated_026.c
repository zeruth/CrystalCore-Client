#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00550e10 */
GEN_OWN GEN_FRAME float10 F_00550e10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x550e10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00550e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00550e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x550e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00c93010(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  return (uint)this;
}

/* ref: BGCollisionModule::BGCollisionModule */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00550e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x550e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  HANDLE pvVar2;
  uint uVar3;
  
  *(undefined2 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  F_004a0020((int)this + 0x28 GEN_EDX_ARG);
  pvVar2 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,1,(LPCSTR)0x0);
  *((HANDLE *)GEN_TOP(((int)this + 0x50))) = pvVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 1;
  uVar3 = F_00406b90(0x24,0,0);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  if (uVar3 != 0) {
    uVar3 = F_00c97030(uVar3 GEN_EDX_ARG);
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
  return (uint)this;
}

/* ref: BGCollisionModule::~BGCollisionModule */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00550f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x550f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  gen_imp_CloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0x50))));
  F_004a05c0(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc)));
}

/* ref: FUN_00550f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00550f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x550f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 4)));
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 0x18))) = param_2;
  }
  return uVar1;
}

/* ref: BGCollisionModule::OnEndOfFrame */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00550fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x550fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) && (*((char *)GEN_TOP(((int)this + 1))) == '\0')) {
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this + 0x50))),0xffffffff);
  }
  return;
}

/* ref: FUN_00550fc0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00550fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x550fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 1))) = 1;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00c976f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00550fe0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00550fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x550fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00c975f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  return;
}

/* ref: FUN_00550ff0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00550ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x550ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) &&
     (bVar1 = F_00c97070(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD), bVar1 != 0)) {
    return 1;
  }
  if (0 < *((int *)GEN_TOP(((int)this + 0x54)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00551030 */
GEN_OWN GEN_FRAME float10 F_00551030(GEN_P(float * in_ecx, unsigned int gen_a0), GEN_P(float * in_edx, unsigned int gen_a1), GEN_P(float * in_esi, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x551030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_edx = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * in_esi = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  pfVar10 = *((float * PTR32 *)GEN_TOP(param_4));
  (*(float *)(gen_frame + 0x28)) = *in_esi;
  (*(float *)(gen_frame + 0x24)) = in_esi[2];
  fVar11 = (float10)in_esi[1];
  fVar12 = (float10)*in_esi;
  fVar13 = (float10)in_esi[2];
  fVar1 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar2 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x24)) = *in_edx;
  (*(float *)(gen_frame + 0x28)) = in_edx[2];
  fVar11 = (float10)in_edx[1];
  fVar12 = (float10)*in_edx;
  fVar13 = (float10)in_edx[2];
  fVar4 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  fVar5 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = *in_ecx;
  (*(float *)(gen_frame + 0x28)) = in_ecx[2];
  fVar11 = (float10)in_ecx[1];
  fVar12 = (float10)*in_ecx;
  fVar13 = (float10)in_ecx[2];
  fVar7 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar8 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x4)) = fVar8;
  fVar9 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x8)) = fVar9;
  fVar11 = (float10)fVar4;
  fVar12 = (float10)fVar5;
  fVar13 = (float10)fVar6;
  fVar4 = (float)((float10)fVar7 - fVar11);
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar5 = (float)((float10)fVar8 - fVar12);
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar6 = (float)((float10)fVar9 - fVar13);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar14 = (float10)fVar6;
  fVar12 = GEN_X87((float10)(float)(fVar12 - (float10)fVar2));
  fVar15 = (float10)fVar5;
  fVar13 = GEN_X87((float10)(float)(fVar13 - (float10)fVar3));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar12 * fVar14 - fVar13 * fVar15);
  fVar16 = (float10)fVar4;
  fVar11 = GEN_X87((float10)(float)(fVar11 - (float10)fVar1));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * fVar13 - fVar11 * fVar14);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar15 * fVar11 - fVar12 * fVar16);
  F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (float10)(*(float *)(gen_frame + 0x4));
}

/* ref: FUN_00551200 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00551200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x551200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  float fVar1;
  int iVar2;
  byte bVar3;
  byte * pbVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  pbVar4 = ((byte *)GEN_TOP((iVar2 + 1 +
                   (*((ushort *)GEN_TOP((iVar2 + 0x28))) + 8 + (uint)*((ushort *)GEN_TOP((iVar2 + 0x2c))) * 2) * 6)));
  (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  (*(int *)(gen_frame + 0x14)) = param_5;
  F_00c90030(this GEN_EDX_FWD,param_5);
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  param_5 = 0;
  if (*((short *)GEN_TOP((iVar2 + 0x2a))) != 0) {
    do {
      bVar3 = F_00553ba0(param_2,param_3,(*(int *)(gen_frame + 0x14)) + (uint)pbVar4[-1] * 0xc,
                           (*(int *)(gen_frame + 0x14)) + (uint)*pbVar4 * 0xc,(*(int *)(gen_frame + 0x14)) + (uint)pbVar4[1] * 0xc,&(*(float *)(gen_frame + 0x0)),
                           &(*(float *)(gen_frame + 0x18)));
      if ((((bVar3 != 0) && ((float10)(*(float *)(gen_frame + 0x18)) <= (float10)*param_4)) &&
          ((!GEN_ISNAN((*(float *)(gen_frame + 0x18))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x18)) < *(float *)&REFG(undefined, 0x1088114)))
          ) && (fVar1 = ((float)GEN_TOF(((float10)param_3[2] * (float10)(*(float *)(gen_frame + 0x8)) +
                               ((float10)*param_3 * (float10)(*(float *)(gen_frame + 0x0)) +
                               (float10)param_3[1] * (float10)(*(float *)(gen_frame + 0x4)))))), (*(float *)(gen_frame + 0xc)) = fVar1,
               (float10)fVar1 < (float10)0)) {
        (*(uint *)(gen_frame + 0x10)) = param_5;
        *param_4 = (*(float *)(gen_frame + 0x18));
      }
      param_5 = param_5 + 1;
      pbVar4 = pbVar4 + 6;
    } while (param_5 < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x2a))));
  }
  bVar3 = F_00c901b0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x10)),param_1,&(*(int *)(gen_frame + 0x14)),param_2,param_3,*param_4);
  return bVar3;
}

/* ref: FUN_00551330 */
GEN_OWN GEN_FRAME float10 F_00551330(GEN_P(float * in_ecx, unsigned int gen_a0), GEN_P(float * in_edx, unsigned int gen_a1), GEN_P(float * in_esi, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x551330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_edx = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * in_esi = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  pfVar10 = *((float * PTR32 *)GEN_TOP(param_4));
  (*(float *)(gen_frame + 0x28)) = *in_esi;
  (*(float *)(gen_frame + 0x24)) = in_esi[2];
  fVar11 = (float10)in_esi[1];
  fVar12 = (float10)*in_esi;
  fVar13 = (float10)in_esi[2];
  fVar1 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar2 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x24)) = *in_edx;
  (*(float *)(gen_frame + 0x28)) = in_edx[2];
  fVar11 = (float10)in_edx[1];
  fVar12 = (float10)*in_edx;
  fVar13 = (float10)in_edx[2];
  fVar4 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  fVar5 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = *in_ecx;
  (*(float *)(gen_frame + 0x28)) = in_ecx[2];
  fVar11 = (float10)in_ecx[1];
  fVar12 = (float10)*in_ecx;
  fVar13 = (float10)in_ecx[2];
  fVar7 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar8 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x4)) = fVar8;
  fVar9 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x8)) = fVar9;
  fVar11 = (float10)fVar4;
  fVar12 = (float10)fVar5;
  fVar13 = (float10)fVar6;
  fVar4 = (float)((float10)fVar7 - fVar11);
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar5 = (float)((float10)fVar8 - fVar12);
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar6 = (float)((float10)fVar9 - fVar13);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar14 = (float10)fVar6;
  fVar12 = GEN_X87((float10)(float)(fVar12 - (float10)fVar2));
  fVar15 = (float10)fVar5;
  fVar13 = GEN_X87((float10)(float)(fVar13 - (float10)fVar3));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar12 * fVar14 - fVar13 * fVar15);
  fVar16 = (float10)fVar4;
  fVar11 = GEN_X87((float10)(float)(fVar11 - (float10)fVar1));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * fVar13 - fVar11 * fVar14);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar15 * fVar11 - fVar12 * fVar16);
  F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (float10)(*(float *)(gen_frame + 0x4));
}

/* ref: FUN_00551500 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00551500(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x551500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar1 = F_00c971c0(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,param_2,param_6,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551590 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00551590(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x551590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar1 = F_00c97440(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,param_2,param_6,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551620 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00551620(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x551620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar1 = F_00c974a0(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,param_2,param_6,param_7,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005516b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005516b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x5516b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(param_5));
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_5 + 4)));
    (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_5 + 8)));
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    fVar2 = ((float10)GEN_TOD(fcos((float10)param_3)));
    bVar1 = F_00c97340(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,param_2,param_7,(float)fVar2,param_4,&(*(undefined4 *)(gen_frame + 0x0))
                         ,(undefined4)gen_fl2bits(param_6));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551750 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00551750(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x551750u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(param_5));
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_5 + 4)));
    (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_5 + 8)));
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    fVar2 = ((float10)GEN_TOD(fcos((float10)param_3)));
    bVar1 = F_00c97550(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,param_2,param_7,(float)fVar2,param_4,&(*(undefined4 *)(gen_frame + 0x0))
                         ,(undefined4)gen_fl2bits(param_6));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005517f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005517f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5517f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[7];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x44))) = 0;
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x0)) = 7;
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[2]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[4]);
    fVar2 = ((float10)GEN_TOD(fcos((float10)(*(float *)&gen_args[1]))));
    (*(float *)(gen_frame + 0x10)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005518b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005518b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5518b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x44))) = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[1])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[1])[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cc48)));
    (*(undefined4 *)(gen_frame + 0x30)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x30));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[3]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x0)) = 4;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(this_00 GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[4]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005519a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005519a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5519a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[7];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x44))) = 0;
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cc48)));
    (*(undefined4 *)(gen_frame + 0x30)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x0)) = 6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[4]);
    fVar2 = ((float10)GEN_TOD(fcos((float10)(*(float *)&gen_args[1]))));
    (*(float *)(gen_frame + 0x10)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,(*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551a90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00551a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x551a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00c975d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1,param_3,param_2);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551ae0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00551ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x551ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) && (param_1 != 0)) {
    F_00c97130(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc)));
}

/* ref: FUN_00551b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00551b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x551b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c97080(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_2,param_1);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00551b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x551b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xac, 4, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa8);
  ((byte *)(gen_frame + 0x0))[0xa4] = (char)uVar1;
  ((byte *)(gen_frame + 0x0))[0xa5] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x0))[0xa6] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xa7] = (char)(uVar1 >> 0x18);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) = param_2;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = ((char *)REFP(0x109cbe4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = ((char *)REFP(0x109cbec));
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = ((char *)REFP(0x109cbf4));
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  ((byte *)(gen_frame + 0x0))[0x11] = 0;
  ((byte *)(gen_frame + 0x0))[0x12] = 0;
  ((byte *)(gen_frame + 0x0))[0x13] = 0;
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) = &REFG(undefined, 0x109cc04);
  if ((param_1 < 9) && (*(int *)(((byte *)(gen_frame + 0x0)) + param_1 * 4) != 0)) {
    F_00c472af(((byte *)(gen_frame + 0x0)) + 0x24,0x80,((char *)REFP(0x109cc0c)),*(int *)(((byte *)(gen_frame + 0x0)) + param_1 * 4));
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) == ((undefined *)GEN_TOP(0x0))) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00c97080(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)),((byte *)(gen_frame + 0x0)) + 0x24);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551c70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00551c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x551c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c970b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_5,param_1,param_2,param_3,param_4);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00551cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x551cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c970f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_4,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00551d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x551d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  uVar1 = *param_3;
  uVar2 = param_3[1];
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00c97100(this_00 GEN_EDX_ARG,param_4,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar3;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00551da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x551da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = *param_3;
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00c97110(this_00 GEN_EDX_ARG,param_4,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00551e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x551e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00c97120(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_4,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00551e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x551e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  int iVar1;
  undefined4 uVar2;
  
  if (*(float *)&REFG(undefined, 0x1088114) <= *((float *)GEN_TOP(((int)this + 100)))) {
    *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
    *param_2 = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
    *param_3 = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
    *param_4 = *((undefined4 *)GEN_TOP(((int)this + 100)));
    return (uint)param_3;
  }
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x90)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cdcc)));
  *param_2 = *((undefined4 *)GEN_TOP((iVar1 + 0x94)));
  *param_3 = *((undefined4 *)GEN_TOP((iVar1 + 0x98)));
  *param_4 = uVar2;
  return (uint)param_3;
}

/* ref: FUN_00551f10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00551f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x194, 12, 4);
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined * PTR32 * ppuVar6;
  undefined * pvVar7;
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
  
  uVar9 = (*(uint *)&gen_args[2]);
  iVar19 = *((int *)GEN_TOP(((*(uint *)&gen_args[2]) + 4)));
  (*(int *)(gen_frame + 0x168)) = iVar19;
  iVar4 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x178)) = *((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 8)));
  fVar10 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 8))) + 0x34))) + 4))) + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x184)) = param_1;
  (*(float *)(gen_frame + 0x188)) = fVar10;
  if (*((short *)GEN_TOP((iVar4 + 0x2a))) != 0) {
    if (*((char *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x18))) == '\0') {
      (*(float *)(gen_frame + 0x174)) = -NAN;
      (*(uint *)(gen_frame + 0x17c)) = iVar4 + (*((ushort *)GEN_TOP((iVar4 + 0x28))) + 8 + (uint)*((ushort *)GEN_TOP((iVar4 + 0x2c))) * 2) * 6;
      (*(uint *)(gen_frame + 0x16c)) = (*(uint *)&gen_args[3]);
      F_00c90030(param_1 GEN_EDX_FWD,(*(uint *)&gen_args[3]));
      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x178));
      pfVar11 = *((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0xc)));
      uVar2 = *((undefined4 *)GEN_TOP((*(uint *)&gen_args[2])));
      (*(float *)(gen_frame + 0x188)) = 0.0;
      ((float *)(gen_frame + 0x108))[5] = 0.0;
      ((float *)(gen_frame + 0x108))[6] = 0.0;
      ((float *)(gen_frame + 0x108))[7] = 0.0;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        fVar10 = 0.0;
        if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))) != 0) {
          pbVar16 = ((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x17c)) + 1)));
          do {
            bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x168)),(uint)(*(float * PTR32 *)(gen_frame + 0x178)),(*(uint *)(gen_frame + 0x16c)) + (uint)pbVar16[-1] * 0xc,
                                 (*(uint *)(gen_frame + 0x16c)) + (uint)*pbVar16 * 0xc,(*(uint *)(gen_frame + 0x16c)) + (uint)pbVar16[1] * 0xc,
                                 ((float *)(gen_frame + 0x108)) + 5,&(*(uint *)&gen_args[3]));
            if (((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <= (float10)*pfVar11)) &&
               ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                !(gen_bits2f((*(uint *)&gen_args[3])) < *(float *)&REFG(undefined, 0x1088114)))) {
              (*(float *)(gen_frame + 0x174)) = fVar10;
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[3]));
            }
            fVar10 = gen_bits2f((int)gen_fl2bits(fVar10) + 1);
            pbVar16 = pbVar16 + 6;
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))));
        }
        break;
      case 1: ;
        iVar19 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
        (*(uint *)(gen_frame + 0x170)) = *((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 4)));
        (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)GEN_TOP(0x0));
        if (*((short *)GEN_TOP((iVar19 + 0x2a))) != 0) {
          pbVar16 = ((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x17c)) + 1)));
          do {
            bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x170)),pfVar12,(*(uint *)(gen_frame + 0x16c)) + (uint)pbVar16[-1] * 0xc,
                                 (*(uint *)(gen_frame + 0x16c)) + (uint)*pbVar16 * 0xc,(*(uint *)(gen_frame + 0x16c)) + (uint)pbVar16[1] * 0xc,
                                 ((float *)(gen_frame + 0x108)) + 5,&(*(uint *)&gen_args[3]));
            if (bVar8 != 0) {
              if (((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <=
                    (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                  (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[3])))) &&
                 ((fVar10 = ((float)GEN_TOF(((float10)pfVar12[2] * (float10)((float *)(gen_frame + 0x108))[7] +
                                   ((float10)((float *)(gen_frame + 0x108))[5] * (float10)*pfVar12 +
                                   (float10)pfVar12[1] * (float10)((float *)(gen_frame + 0x108))[6])))),
                  !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)REFG(double, 0x109cdf8)) ||
                  (!((float10)(*(float *)(gen_frame + 0x188)) <= (float10)fVar10))))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[3]));
                (*(float *)(gen_frame + 0x174)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x18c)))));
                (*(float *)(gen_frame + 0x188)) = fVar10;
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x18c)) + 1);
            pbVar16 = pbVar16 + 6;
            (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))));
        }
        break;
      case 2: ;
        fVar10 = *((float *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x10)));
        iVar19 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
        (*(uint *)(gen_frame + 0x170)) = (*(uint *)&gen_args[0]);
        (*(float *)(gen_frame + 0x188)) = fVar10;
        (*(uint *)&gen_args[0]) = 0;
        if (*((short *)GEN_TOP((iVar19 + 0x2a))) != 0) {
          pbVar16 = ((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x17c)) + 2)));
          do {
            uVar9 = (*(uint *)(gen_frame + 0x16c)) + (uint)pbVar16[-2] * 0xc;
            uVar18 = (*(uint *)(gen_frame + 0x16c)) + (uint)pbVar16[-1] * 0xc;
            fVar10 = gen_bits2f((*(uint *)(gen_frame + 0x16c)) + (uint)*pbVar16 * 0xc);
            (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
            bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x168)),(uint)(*(float * PTR32 *)(gen_frame + 0x178)),uVar9,uVar18,(uint)gen_fl2bits(fVar10),
                                 ((float *)(gen_frame + 0x108)) + 5,&(*(uint *)&gen_args[3]));
            if (((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <= (float10)*pfVar11)) &&
               (((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                 !(gen_bits2f((*(uint *)&gen_args[3])) < *(float *)&REFG(undefined, 0x1088114)) &&
                (fVar20 = F_00551330((*(undefined * PTR32 *)(gen_frame + 0x18c)),uVar18,uVar9,(uint)&(*(uint *)(gen_frame + 0x170))),
                fVar20 <= (float10)(*(float *)(gen_frame + 0x188)))))) {
              (*(float *)(gen_frame + 0x174)) = gen_bits2f((*(uint *)&gen_args[0]));
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[3]));
            }
            (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) + 1;
            pbVar16 = pbVar16 + 6;
          } while ((*(uint *)&gen_args[0]) < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))));
        }
        break;
      case 3: ;
        (*(uint *)(gen_frame + 0x170)) = *((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 4)));
        iVar19 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
        (*(float *)(gen_frame + 0x164)) = gen_bits2f((*(uint *)&gen_args[0]));
        (*(float *)(gen_frame + 0xf0)) = 0.0;
        (*(float *)(gen_frame + 0xf4)) = 0.0;
        (*(float *)(gen_frame + 0xf8)) = 0.0;
        (*(float *)(gen_frame + 0x160)) = *((float *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x10)));
        (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)GEN_TOP(0x0));
        if (*((short *)GEN_TOP((iVar19 + 0x2a))) != 0) {
          pbVar16 = ((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x17c)) + 2)));
          do {
            uVar9 = (*(uint *)(gen_frame + 0x16c)) + (uint)pbVar16[-1] * 0xc;
            uVar18 = (*(uint *)(gen_frame + 0x16c)) + (uint)pbVar16[-2] * 0xc;
            iVar19 = (*(uint *)(gen_frame + 0x16c)) + (uint)*pbVar16 * 0xc;
            (*(uint *)(gen_frame + 0x17c)) = iVar19;
            bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x170)),(*(float * PTR32 *)(gen_frame + 0x178)),uVar18,uVar9,iVar19,&(*(float *)(gen_frame + 0xf0)),&(*(uint *)&gen_args[3]));
            if (bVar8 != 0) {
              if ((((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <=
                     (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                   (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[3])))) &&
                  ((fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x178))[2] * (float10)(*(float *)(gen_frame + 0xf8)) +
                                    ((float10)(*(float *)(gen_frame + 0xf0)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x178)) +
                                    (float10)(*(float * PTR32 *)(gen_frame + 0x178))[1] * (float10)(*(float *)(gen_frame + 0xf4)))))),
                   !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)REFG(double, 0x109cdf8)) ||
                   (!((float10)(*(float *)(gen_frame + 0x188)) <= (float10)fVar10))))) &&
                 (fVar20 = F_00551330((*(uint *)(gen_frame + 0x17c)),uVar9,uVar18,(uint)&(*(float *)(gen_frame + 0x164))),
                 fVar20 <= (float10)(*(float *)(gen_frame + 0x160)))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[3]));
                (*(float *)(gen_frame + 0x174)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x18c)))));
                (*(float *)(gen_frame + 0x188)) = fVar10;
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x18c)) + 1);
            pbVar16 = pbVar16 + 6;
            (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))));
        }
        break;
      case 4: ;
        (*(float *)(gen_frame + 0x160)) = **((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14)));
        iVar19 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
        (*(float *)(gen_frame + 0x164)) = (*((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14))))[1];
        (*(uint *)&gen_args[0]) = 0;
        if (*((short *)GEN_TOP((iVar19 + 0x2a))) != 0) {
          puVar17 = ((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x17c)) + 4)));
          uVar9 = (*(uint *)(gen_frame + 0x16c));
          do {
            if ((((gen_bits2f((uint)CONCAT12(*((undefined1 *)GEN_TOP(((int)puVar17 - 1))),*puVar17) &
                              (uint)gen_fl2bits((*(float *)(gen_frame + 0x160)))) == (*(float *)(gen_frame + 0x164))) &&
                 (bVar8 = F_00550990((*(int *)(gen_frame + 0x168)),(uint)(*(float * PTR32 *)(gen_frame + 0x178)),
                                       uVar9 + (uint)*(byte *)(puVar17 - 2) * 0xc,
                                       uVar9 + (uint)*((byte *)GEN_TOP(((int)puVar17 - 3))) * 0xc,
                                       uVar9 + (uint)*(byte *)(puVar17 - 1) * 0xc,&(*(uint *)&gen_args[3])),
                 bVar8 != 0)) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <= (float10)*pfVar11)) &&
               ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                !(gen_bits2f((*(uint *)&gen_args[3])) < *(float *)&REFG(undefined, 0x1088114)))) {
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[3]));
              (*(float *)(gen_frame + 0x174)) = gen_bits2f((*(uint *)&gen_args[0]));
              uVar9 = (*(uint *)(gen_frame + 0x16c));
            }
            (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) + 1;
            puVar17 = puVar17 + 3;
          } while ((*(uint *)&gen_args[0]) < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))));
        }
        break;
      case 5: ;
        fVar10 = **((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14)));
        fVar3 = (*((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14))))[1];
        (*(uint *)(gen_frame + 0x170)) = *((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 4)));
        (*(float *)(gen_frame + 0x160)) = fVar10;
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc)));
        (*(float *)(gen_frame + 0x164)) = fVar3;
        fVar10 = 0.0;
        (*(float *)(gen_frame + 0xfc)) = 0.0;
        (*(float *)(gen_frame + 0x100)) = 0.0;
        (*(float *)(gen_frame + 0x104)) = 0.0;
        if (*((short *)GEN_TOP((iVar19 + 0x2a))) != 0) {
          puVar17 = ((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x17c)) + 4)));
          do {
            if ((gen_bits2f((uint)CONCAT12(*((undefined1 *)GEN_TOP(((int)puVar17 - 1))),*puVar17) &
                            (uint)gen_fl2bits((*(float *)(gen_frame + 0x160)))) == (*(float *)(gen_frame + 0x164))) &&
               (bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x170)),(*(float * PTR32 *)(gen_frame + 0x178)),
                                     (*(uint *)(gen_frame + 0x16c)) + (uint)*(byte *)(puVar17 - 2) * 0xc,
                                     (*(uint *)(gen_frame + 0x16c)) + (uint)*((byte *)GEN_TOP(((int)puVar17 - 3))) * 0xc,
                                     (*(uint *)(gen_frame + 0x16c)) + (uint)*(byte *)(puVar17 - 1) * 0xc,&(*(float *)(gen_frame + 0xfc)),
                                     &(*(uint *)&gen_args[3])), bVar8 != 0)) {
              if (((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <=
                    (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                  (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[3])))) &&
                 ((fVar3 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x178))[2] * (float10)(*(float *)(gen_frame + 0x104)) +
                                  ((float10)(*(float *)(gen_frame + 0xfc)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x178)) +
                                  (float10)(*(float * PTR32 *)(gen_frame + 0x178))[1] * (float10)(*(float *)(gen_frame + 0x100)))))),
                  !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)REFG(double, 0x109cdf8)) ||
                  (!((float10)(*(float *)(gen_frame + 0x188)) <= (float10)fVar3))))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[3]));
                (*(float *)(gen_frame + 0x174)) = fVar10;
                (*(float *)(gen_frame + 0x188)) = fVar3;
              }
            }
            fVar10 = gen_bits2f((int)gen_fl2bits(fVar10) + 1);
            puVar17 = puVar17 + 3;
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))));
        }
        break;
      case 6: ;
        fVar10 = *((float *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x10)));
        fVar3 = **((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14)));
        fVar5 = (*((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14))))[1];
        (*(float *)(gen_frame + 0x188)) = gen_bits2f((*(uint *)&gen_args[0]));
        (*(float *)(gen_frame + 0x160)) = fVar3;
        iVar19 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
        (*(float *)(gen_frame + 0x164)) = fVar5;
        (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
        (*(uint *)&gen_args[0]) = 0;
        if (*((short *)GEN_TOP((iVar19 + 0x2a))) != 0) {
          puVar17 = ((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x17c)) + 4)));
          do {
            if (gen_bits2f((uint)CONCAT12(*((undefined1 *)GEN_TOP(((int)puVar17 - 1))),*puVar17) &
                           (uint)gen_fl2bits((*(float *)(gen_frame + 0x160)))) == (*(float *)(gen_frame + 0x164))) {
              uVar9 = (*(uint *)(gen_frame + 0x16c)) + (uint)*(byte *)(puVar17 - 2) * 0xc;
              uVar18 = (*(uint *)(gen_frame + 0x16c)) + (uint)*((byte *)GEN_TOP(((int)puVar17 - 3))) * 0xc;
              uVar1 = (*(uint *)(gen_frame + 0x16c)) + (uint)*(byte *)(puVar17 - 1) * 0xc;
              (*(uint *)(gen_frame + 0x170)) = uVar1;
              bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x168)),(uint)(*(float * PTR32 *)(gen_frame + 0x178)),uVar9,uVar18,uVar1,((float *)(gen_frame + 0x108)) + 5,&(*(uint *)&gen_args[3]))
              ;
              if ((((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <= (float10)*pfVar11)) &&
                  ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                   !(gen_bits2f((*(uint *)&gen_args[3])) < *(float *)&REFG(undefined, 0x1088114)))) &&
                 (fVar20 = F_00551330((*(uint *)(gen_frame + 0x170)),uVar18,uVar9,(uint)&(*(float *)(gen_frame + 0x188))),
                 fVar20 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x18c))))))) {
                (*(float *)(gen_frame + 0x174)) = gen_bits2f((*(uint *)&gen_args[0]));
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[3]));
              }
            }
            (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) + 1;
            puVar17 = puVar17 + 3;
          } while ((*(uint *)&gen_args[0]) < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))));
        }
        break;
      case 7: ;
        uVar9 = *((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 4)));
        (*(float *)(gen_frame + 0xe4)) = 0.0;
        (*(float *)(gen_frame + 0xe8)) = 0.0;
        (*(float *)(gen_frame + 0xec)) = 0.0;
        fVar10 = *((float *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x10)));
        pfVar12 = *((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14)));
        fVar3 = *pfVar12;
        (*(uint *)(gen_frame + 0x170)) = uVar9;
        fVar5 = pfVar12[1];
        (*(uint *)(gen_frame + 0xd0)) = (*(uint *)&gen_args[0]);
        (*(float *)(gen_frame + 0x160)) = fVar3;
        iVar19 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
        (*(float *)(gen_frame + 0x164)) = fVar5;
        ((float *)(gen_frame + 0x108))[0x14] = fVar10;
        (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)GEN_TOP(0x0));
        if (*((short *)GEN_TOP((iVar19 + 0x2a))) != 0) {
          puVar17 = ((undefined2 *)GEN_TOP(((*(uint *)(gen_frame + 0x17c)) + 4)));
          do {
            if (gen_bits2f((uint)CONCAT12(*((undefined1 *)GEN_TOP(((int)puVar17 - 1))),*puVar17) &
                           (uint)gen_fl2bits((*(float *)(gen_frame + 0x160)))) == (*(float *)(gen_frame + 0x164))) {
              uVar9 = (*(uint *)(gen_frame + 0x16c)) + (uint)*(byte *)(puVar17 - 2) * 0xc;
              uVar18 = (*(uint *)(gen_frame + 0x16c)) + (uint)*((byte *)GEN_TOP(((int)puVar17 - 3))) * 0xc;
              iVar19 = (*(uint *)(gen_frame + 0x16c)) + (uint)*(byte *)(puVar17 - 1) * 0xc;
              (*(uint *)(gen_frame + 0x17c)) = iVar19;
              bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x170)),(*(float * PTR32 *)(gen_frame + 0x178)),uVar9,uVar18,iVar19,&(*(float *)(gen_frame + 0xe4)),&(*(uint *)&gen_args[3]));
              if (bVar8 != 0) {
                if ((((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) <=
                       (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                     (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[3])))) &&
                    ((fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x178))[2] * (float10)(*(float *)(gen_frame + 0xec)) +
                                      ((float10)(*(float *)(gen_frame + 0xe4)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x178)) +
                                      (float10)(*(float * PTR32 *)(gen_frame + 0x178))[1] * (float10)(*(float *)(gen_frame + 0xe8)))))),
                     !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)REFG(double, 0x109cdf8)) ||
                     (!((float10)(*(float *)(gen_frame + 0x188)) <= (float10)fVar10))))) &&
                   (fVar20 = F_00551330((*(uint *)(gen_frame + 0x17c)),uVar18,uVar9,(uint)&(*(uint *)(gen_frame + 0xd0))),
                   fVar20 <= (float10)((float *)(gen_frame + 0x108))[0x14])) {
                  *pfVar11 = gen_bits2f((*(uint *)&gen_args[3]));
                  (*(float *)(gen_frame + 0x174)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x18c)))));
                  (*(float *)(gen_frame + 0x188)) = fVar10;
                }
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x18c)) + 1);
            puVar17 = puVar17 + 3;
            (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))) + 0x2a))));
        }
      }
      bVar8 = F_00c901b0((*(undefined * PTR32 *)(gen_frame + 0x184)) GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x174))),(*(uint *)&gen_args[1]),&(*(uint *)(gen_frame + 0x16c)),(*(int *)(gen_frame + 0x168)),
                           (*(float * PTR32 *)(gen_frame + 0x178)),*pfVar11);
      return bVar8;
    }
    this = ((undefined *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x24)));
    (*(undefined * PTR32 *)(gen_frame + 0x18c)) = this;
    if (*((int *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x2003c))) == 0) {
      uVar9 = F_00a4b910(this GEN_EDX_ARG,0x1b0);
      *((uint *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x2003c))) = uVar9;
      *((undefined4 *)GEN_TOP((uVar9 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x20040)));
    }
    iVar19 = *((int *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x2003c)));
    if (*((int *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x2003c))) == 0) {
      uVar9 = F_00a4b910(this GEN_EDX_ARG,0x1b0);
      *((uint *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x2003c))) = uVar9;
      *((undefined4 *)GEN_TOP((uVar9 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x20040)));
    }
    fVar3 = (*(float *)(gen_frame + 0x188));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x184));
    iVar4 = *((int *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x2003c)));
    iVar13 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc)));
    uVar9 = ((uint)*((ushort *)GEN_TOP((iVar13 + 0x2a))) + (uint)*((ushort *)GEN_TOP((iVar13 + 0x2c))) * 2 +
            (uint)*((ushort *)GEN_TOP((iVar13 + 0x28)))) * 6 + 0x3f & 0xfffffff0;
    (*(uint *)(gen_frame + 0x17c)) = uVar9;
    puVar14 = (undefined4 *)REFG(undefined * PTR32, 0x13066c0);
    puVar15 = ((undefined4 *)GEN_TOP((iVar19 + 0x80)));
    for (iVar13 = 0x14; iVar13 != 0; iVar13 = iVar13 - 1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    *((uint *)GEN_TOP((iVar19 + 0xa4))) = uVar9;
    *((undefined4 *)GEN_TOP((iVar19 + 0xa0))) = 0;
    *((undefined4 *)GEN_TOP((iVar19 + 0xa8))) = 0x60;
    *((undefined2 *)GEN_TOP((iVar19 + 0x98))) = 8;
    iVar13 = *((int *)GEN_TOP((*(uint *)&gen_args[2])));
    *((int *)GEN_TOP((iVar19 + 0xdc))) = iVar13 >> 0x1f;
    *((int *)GEN_TOP((iVar19 + 0xd8))) = iVar13;
    puVar14 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 4)));
    *((undefined4 *)GEN_TOP((iVar19 + 0xe0))) = *puVar14;
    *((undefined4 *)GEN_TOP((iVar19 + 0xe4))) = puVar14[1];
    *((undefined4 *)GEN_TOP((iVar19 + 0xe8))) = puVar14[2];
    *((undefined4 *)GEN_TOP((iVar19 + 0xec))) = puVar14[3];
    puVar14 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 8)));
    *((undefined4 *)GEN_TOP((iVar19 + 0xf0))) = *puVar14;
    *((undefined4 *)GEN_TOP((iVar19 + 0xf4))) = puVar14[1];
    uVar2 = puVar14[2];
    *((int *)GEN_TOP((iVar19 + 0x108))) = iVar4;
    *((undefined4 *)GEN_TOP((iVar19 + 0xf8))) = uVar2;
    *((undefined4 *)GEN_TOP((iVar19 + 0x10c))) = 0;
    puVar14 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14)));
    *((undefined4 *)GEN_TOP((iVar19 + 0x100))) = *puVar14;
    *((undefined4 *)GEN_TOP((iVar19 + 0x104))) = puVar14[1];
    *((undefined4 *)GEN_TOP((iVar19 + 0x110))) = *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x10)));
    puVar14 = ((undefined4 *)GEN_TOP((*(uint *)&gen_args[0])));
    puVar15 = ((undefined4 *)GEN_TOP((iVar19 + 0x118)));
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    *((undefined4 *)GEN_TOP((iVar19 + 0x158))) = *((undefined4 *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x188))) + 0x20044)));
    *((undefined4 *)GEN_TOP((iVar19 + 0x15c))) = *((undefined4 *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x188))) + 0x20048)));
    *((undefined4 *)GEN_TOP((iVar19 + 0x160))) = *((undefined4 *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x188))) + 0x2004c)));
    F_00a19bd0(((undefined4 *)GEN_TOP((iVar19 + 0x80))),iVar19 + 0xd0,uVar9,
                 *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc))));
    *((undefined4 *)GEN_TOP((iVar4 + 0x50))) = 0;
    *((undefined4 *)GEN_TOP((iVar4 + 0x68))) = *((undefined4 *)GEN_TOP(((int)pvVar7 + 8)));
    *((undefined4 *)GEN_TOP((iVar4 + 0x6c))) = *((undefined4 *)GEN_TOP(((int)pvVar7 + 0xc)));
    *((undefined4 *)GEN_TOP((iVar4 + 0x70))) = *((undefined4 *)GEN_TOP(((int)pvVar7 + 0xc)));
    *((undefined4 *)GEN_TOP((iVar4 + 0x74))) = *((undefined4 *)GEN_TOP(((int)pvVar7 + 8)));
    F_00556050((*(undefined * PTR32 *)(gen_frame + 0x18c)) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar3));
    return 0;
  }
  (*(byte *)(gen_frame + 0x183)) = 0;
  if (*((char *)GEN_TOP(((int)gen_fl2bits(fVar10) + 0x18))) != '\0') {
    ((float *)(gen_frame + 0x108))[0xe] = 0.0;
    ((float *)(gen_frame + 0x108))[0xf] = 0.0;
    ((float *)(gen_frame + 0x108))[0x10] = 0.0;
    ((float *)(gen_frame + 0x108))[0x11] = 0.0;
    ((float *)(gen_frame + 0x108))[0x12] = 0.0;
    ((float *)(gen_frame + 0x108))[0x13] = 0.0;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP((iVar19 + 0xc))))));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
    uVar18 = 8;
    do {
      iVar19 = *((int *)GEN_TOP(((int)param_1 + 0xc)));
      if (0 < *((int *)GEN_TOP((iVar19 + 8)))) {
        (*(int *)(gen_frame + 0xe0)) = *((int *)GEN_TOP((iVar19 + uVar18))) + iVar19;
        (*(undefined4 *)(gen_frame + 0xdc)) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
      }
      pfVar11 = ((float *)GEN_TOP(F_00c90300(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) GEN_EDX_ARG)));
      ((float *)(gen_frame + 0x108))[0xe] = *pfVar11;
      ((float *)(gen_frame + 0x108))[0xf] = pfVar11[1];
      ((float *)(gen_frame + 0x108))[0x10] = pfVar11[2];
      pfVar11 = ((float *)GEN_TOP(F_00c90310(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) GEN_EDX_ARG)));
      fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x18c)))));
      ((float *)(gen_frame + 0x108))[0x11] = *pfVar11;
      ((float *)(gen_frame + 0x108))[0x12] = pfVar11[1];
      ((float *)(gen_frame + 0x108))[0xe] = (float)((float10)((float *)(gen_frame + 0x108))[0xe] - fVar20);
      ((float *)(gen_frame + 0x108))[0x13] = pfVar11[2];
      ((float *)(gen_frame + 0x108))[0xf] = (float)((float10)((float *)(gen_frame + 0x108))[0xf] - fVar20);
      ((float *)(gen_frame + 0x108))[0x10] = (float)((float10)((float *)(gen_frame + 0x108))[0x10] - fVar20);
      ((float *)(gen_frame + 0x108))[0x11] = (float)((float10)*pfVar11 + fVar20);
      ((float *)(gen_frame + 0x108))[0x12] = (float)((float10)pfVar11[1] + fVar20);
      ((float *)(gen_frame + 0x108))[0x13] = (float)(fVar20 + (float10)pfVar11[2]);
      bVar8 = F_00c996f0((*(int *)(gen_frame + 0x168)),(*(float * PTR32 *)(gen_frame + 0x178)),((float *)(gen_frame + 0x108)) + 0xe,((float *)(gen_frame + 0x108)) + 0x14);
      if (bVar8 != 0) {
        pfVar11 = *((float * PTR32 *)GEN_TOP((uVar9 + 0xc)));
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
        fVar10 = *pfVar11;
        (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar10);
        if (((float10)((float *)(gen_frame + 0x108))[0x14] - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x18c))))) < (float10)*pfVar11) &&
           (bVar8 = F_00551f10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) GEN_EDX_ARG,(*(uint *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x0)),uVar9,(*(uint *)&gen_args[3])), bVar8 != 0)) {
          fVar3 = **((float * PTR32 *)GEN_TOP((uVar9 + 0xc)));
          (*(float *)(gen_frame + 0x188)) = fVar3;
          if ((float10)fVar3 < (float10)fVar10) {
            F_00550bc0(((undefined *)GEN_TOP((*(uint *)&gen_args[1]))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
            (*(byte *)(gen_frame + 0x183)) = 1;
            (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar3);
          }
        }
        **((uint * PTR32 *)GEN_TOP((uVar9 + 0xc))) = (*(uint *)&gen_args[2]);
      }
      uVar18 = uVar18 + 4;
    } while (uVar18 < 0x10);
    F_00c93040(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
    return (*(byte *)(gen_frame + 0x183));
  }
  ((float *)(gen_frame + 0x108))[8] = 0.0;
  ((float *)(gen_frame + 0x108))[9] = 0.0;
  ((float *)(gen_frame + 0x108))[10] = 0.0;
  ((float *)(gen_frame + 0x108))[0xb] = 0.0;
  ((float *)(gen_frame + 0x108))[0xc] = 0.0;
  ((float *)(gen_frame + 0x108))[0xd] = 0.0;
  fVar10 = *((float *)GEN_TOP((iVar19 + 0xc)));
  (*(float *)(gen_frame + 0x188)) = 0.0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4c))[2] = ((undefined * PTR32 *)GEN_TOP(0x0));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4c))[6] = ((undefined * PTR32 *)GEN_TOP(0x0));
  pfVar11 = ((float *)(gen_frame + 0x108));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4c))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4c))[5] = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  (*(float *)(gen_frame + 0x174)) = fVar10;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4c))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4c))[4] = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)GEN_TOP(0x1));
  in_ecx = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4c));
  ((float *)(gen_frame + 0x108))[0x14] = gen_bits2f(8 - (int)pfVar11);
  (*(uint *)(gen_frame + 0x17c)) = 2;
  do {
    iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 0xc)));
    if (0 < *((int *)GEN_TOP((iVar19 + 8)))) {
      ppuVar6 = *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x184)) + 8)));
      in_ecx[3] = ((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x108))[0x14]) + iVar19 + (int)pfVar11))) + iVar19)));
      in_ecx[2] = ppuVar6;
    }
    pfVar12 = ((float *)GEN_TOP(F_00c90300(in_ecx GEN_EDX_ARG)));
    ((float *)(gen_frame + 0x108))[8] = *pfVar12;
    ((float *)(gen_frame + 0x108))[9] = pfVar12[1];
    ((float *)(gen_frame + 0x108))[10] = pfVar12[2];
    pfVar12 = ((float *)GEN_TOP(F_00c90310(in_ecx GEN_EDX_ARG)));
    fVar20 = (float10)(*(float *)(gen_frame + 0x174));
    ((float *)(gen_frame + 0x108))[0xb] = *pfVar12;
    ((float *)(gen_frame + 0x108))[0xc] = pfVar12[1];
    ((float *)(gen_frame + 0x108))[8] = (float)((float10)((float *)(gen_frame + 0x108))[8] - fVar20);
    ((float *)(gen_frame + 0x108))[0xd] = pfVar12[2];
    ((float *)(gen_frame + 0x108))[9] = (float)((float10)((float *)(gen_frame + 0x108))[9] - fVar20);
    ((float *)(gen_frame + 0x108))[10] = (float)((float10)((float *)(gen_frame + 0x108))[10] - fVar20);
    ((float *)(gen_frame + 0x108))[0xb] = (float)((float10)*pfVar12 + fVar20);
    ((float *)(gen_frame + 0x108))[0xc] = (float)((float10)pfVar12[1] + fVar20);
    ((float *)(gen_frame + 0x108))[0xd] = (float)(fVar20 + (float10)pfVar12[2]);
    bVar8 = F_00c996f0((*(int *)(gen_frame + 0x168)),(*(float * PTR32 *)(gen_frame + 0x178)),((float *)(gen_frame + 0x108)) + 8,pfVar11);
    if (bVar8 != 0) {
      (*(float *)(gen_frame + 0x188)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x188))) | (uint)(*(undefined * PTR32 *)(gen_frame + 0x18c)));
    }
    in_ecx = in_ecx + 4;
    pfVar11 = pfVar11 + 1;
    iVar19 = (*(uint *)(gen_frame + 0x17c)) - 1;
    (*(uint *)(gen_frame + 0x17c)) = iVar19;
    (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x18c))) << 1 | (uint)((int)(*(undefined * PTR32 *)(gen_frame + 0x18c)) < 0))));
  } while (iVar19 != 0);
  switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x188))))) {
  case 0: ;
    (*(int *)(gen_frame + 0x15c)) = -1;
    break;
  case 1: ;
    (*(float *)(gen_frame + 0x160)) = -NAN;
    goto LAB_00552d89;
  case 2: ;
    (*(int *)(gen_frame + 0x15c)) = 1;
    (*(float *)(gen_frame + 0x160)) = -NAN;
    break;
  case 3: ;
    if ((float10)((float *)(gen_frame + 0x108))[1] < (float10)((float *)(gen_frame + 0x108))[0]) {
      (*(int *)(gen_frame + 0x15c)) = 1;
      (*(float *)(gen_frame + 0x160)) = 0.0;
      break;
    }
    (*(float *)(gen_frame + 0x160)) = 1.4013e-45;
LAB_00552d89: ;
    (*(int *)(gen_frame + 0x15c)) = 0;
  }
  pfVar11 = *((float * PTR32 *)GEN_TOP(((*(uint *)&gen_args[2]) + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)GEN_TOP(0x0));
  ((float *)(gen_frame + 0x108))[2] = 0.0;
  ((float *)(gen_frame + 0x108))[3] = 0.0;
  ((float *)(gen_frame + 0x108))[4] = 0.0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(float *)(gen_frame + 0x90)) = 0.0;
  (*(float *)(gen_frame + 0x94)) = 0.0;
  (*(float *)(gen_frame + 0x98)) = 0.0;
  (*(float *)(gen_frame + 0x9c)) = 0.0;
  (*(float *)(gen_frame + 0xa0)) = 0.0;
  (*(float *)(gen_frame + 0xa4)) = 0.0;
  (*(float *)(gen_frame + 0xa8)) = 0.0;
  (*(float *)(gen_frame + 0xac)) = 0.0;
  (*(float *)(gen_frame + 0xb0)) = 0.0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  (*(float *)(gen_frame + 0x188)) = *pfVar11;
  uVar18 = 0;
  do {
    iVar19 = (&(*(int *)(gen_frame + 0x15c)))[uVar18];
    if (iVar19 == -1) break;
    if (((float10)((float *)(gen_frame + 0x108))[(int)(iVar19)] - (float10)(*(float *)(gen_frame + 0x174)) < ((float10)GEN_TOD(**((float * PTR32 *)GEN_TOP((uVar9 + 0xc)))))) &&
       (bVar8 = F_00551f10(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4c)) + iVar19 * 4 GEN_EDX_ARG,(*(uint *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x84)),uVar9,(*(uint *)&gen_args[3])),
       bVar8 != 0)) {
      if ((*((byte *)GEN_TOP(uVar9)) & 1) == 0) {
        (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(**((float * PTR32 *)GEN_TOP((uVar9 + 0xc))));
        if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)(*(float *)(gen_frame + 0x188))) {
LAB_00552f9b: ;
          (*(float *)(gen_frame + 0x188)) = gen_bits2f((*(uint *)&gen_args[2]));
          F_00550bc0(((undefined *)GEN_TOP((*(uint *)&gen_args[1]))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x84)));
          (*(byte *)(gen_frame + 0x183)) = 1;
        }
      }
      else if (((float10)GEN_TOD(**((float * PTR32 *)GEN_TOP((uVar9 + 0xc))))) <=
               (float10)(*(float *)(gen_frame + 0x188)) + (float10)*(double *)&REFG(undefined, 0x109ce00)) {
        (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0xa8)) - (float10)(*(float *)(gen_frame + 0x9c)));
        (*(float *)(gen_frame + 0x7c)) = (float)((float10)(*(float *)(gen_frame + 0xac)) - (float10)(*(float *)(gen_frame + 0xa0)));
        (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0xa4)));
        (*(float *)(gen_frame + 0x6c)) = (float)((float10)(*(float *)(gen_frame + 0x9c)) - (float10)(*(float *)(gen_frame + 0x90)));
        (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0xa0)) - (float10)(*(float *)(gen_frame + 0x94)));
        (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0xa4)) - (float10)(*(float *)(gen_frame + 0x98)));
        F_00550080(((float *)(gen_frame + 0x108)) + 2,(uint)&(*(float *)(gen_frame + 0x6c)),(uint)&(*(float *)(gen_frame + 0x78)));
        F_00553ac0(((float *)(gen_frame + 0x108)) + 2 GEN_EDX_ARG);
        fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x178))[2] * (float10)((float *)(gen_frame + 0x108))[4] +
                        ((float10)((float *)(gen_frame + 0x108))[2] * (float10)*(*(float * PTR32 *)(gen_frame + 0x178)) +
                        (float10)(*(float * PTR32 *)(gen_frame + 0x178))[1] * (float10)((float *)(gen_frame + 0x108))[3]))));
        (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(**((float * PTR32 *)GEN_TOP((uVar9 + 0xc))));
        if ((!((float10)(*(float *)(gen_frame + 0x188)) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)REFG(double, 0x109cdf8))) ||
           (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x18c))))) <= (float10)fVar10))) {
          (*(undefined * PTR32 *)(gen_frame + 0x18c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          goto LAB_00552f9b;
        }
      }
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 2);
  **((float * PTR32 *)GEN_TOP((uVar9 + 0xc))) = (*(float *)(gen_frame + 0x188));
  pfVar11 = &(*(float *)(gen_frame + 0x6c));
  iVar19 = 1;
  do {
    pfVar11 = pfVar11 - 4;
    F_00c93040(pfVar11 GEN_EDX_ARG);
    iVar19 = iVar19 - 1;
  } while (-1 < iVar19);
  return (*(byte *)(gen_frame + 0x183));
}

/* ref: FUN_00553020 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00553020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x553020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_GS(0xc08, 8, 4);
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc00)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc04));
  iVar3 = 0xff;
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  bVar1 = F_00551f10(this GEN_EDX_FWD,param_1,param_2,param_3,(uint)((undefined1 *)(gen_frame + 0x0)));
  return bVar1;
}

/* ref: BGCollisionModule::UpdateCollision */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00553090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x553090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  fVar6 = *((float *)GEN_TOP(((int)this + 100)));
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar6) {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
    uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
    uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
  }
  else {
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
    uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 0x90)));
    uVar4 = *((undefined4 *)GEN_TOP((iVar1 + 0x94)));
    uVar5 = *((undefined4 *)GEN_TOP((iVar1 + 0x98)));
    fVar6 = REFG(float, 0x109cdcc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x14))) = uVar3;
  *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = uVar4;
  *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = uVar5;
  *((float *)GEN_TOP((iVar1 + 0x20))) = fVar6;
  F_00c97620(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  bVar2 = F_00c97070(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  if (bVar2 == 0) {
    if (0 < *((int *)GEN_TOP(((int)this + 0x54)))) {
      *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
    }
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return (uint)(gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x50)))));
}

/* ref: BGCollisionModule::KickCollisionUpdate */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00553140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x553140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) && (*((char *)GEN_TOP(((int)this + 1))) == '\0')) {
    gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x50))));
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x553a60));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x553090));
    F_004a1280(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: BGCollisionModule::OnCollisionUpdateTask */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005531a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5531a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) && (*((char *)GEN_TOP(((int)this + 1))) == '\0')) {
    gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x50))));
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x553a60));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x553090));
    F_004a1280(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,&(*(gen_code32 *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: BGCollisionModule::Initialize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553200(GEN_P(char * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x553200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  *param_1 = param_2;
  this = ((undefined *)GEN_TOP(F_00406b90(0x20050,0,0)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_005558b0(this GEN_EDX_ARG);
  }
  *(uint *)(param_1 + 4) = uVar1;
  F_00c97800(*(undefined * PTR32 *)(param_1 + 8) GEN_EDX_ARG,uVar1,(uint)(*param_1 != '\0'));
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
    puVar2[2] = ((code *)REFP(0x553a90));
    puVar2[3] = param_1;
    puVar2[5] = 0;
    puVar2[4] = ((code *)REFP(0x5531a0));
    puVar2[6] = ((char *)REFP(0x109cbb4));
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = ((char *)REFP(0x109cbb4));
  }
  F_004a0100(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,0x27,puVar2);
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  *(gen_code32 *)(param_1 + 0x30) = ((code *)REFP(0x553a80));
  *(char * PTR32 *)(param_1 + 0x34) = param_1;
  *(gen_code32 *)(param_1 + 0x38) = ((code *)REFP(0x550fa0));
  *(char * PTR32 *)(param_1 + 0x40) = ((char *)REFP(0x109cbc4));
  *(char * PTR32 *)(param_1 + 0x4c) = ((char *)REFP(0x109cbc4));
  uVar1 = F_004a0100(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,0xf,param_1 + 0x28);
  return uVar1;
}

/* ref: FUN_005532e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005532e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5532e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((uint *)GEN_TOP(((int)this + 0x58))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x5c))) = (int)param_1 >> 0x1f;
  return param_1;
}

/* ref: FUN_00553310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x553310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x60))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 100))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = param_2[2];
  *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = param_2[3];
  return (uint)param_2;
}

/* ref: FUN_00553340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x553340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x60)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 100)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x68)));
  param_2[3] = *((undefined4 *)GEN_TOP((in_ecx + 0x6c)));
  return (uint)param_2;
}

/* ref: FUN_00553370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x553370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00553390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x553390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x70)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x74)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x78)));
  return (uint)param_2;
}

/* ref: FUN_005533b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005533b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5533b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x84))) = uVar1;
  return uVar1;
}

/* ref: FUN_005533e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005533e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5533e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x88))) = param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x8c))) = 0;
  return param_2;
}

/* ref: FUN_00553400 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00553400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x553400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x90))) = param_2;
  return;
}

/* ref: FUN_00553430 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00553430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x553430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 0x98)));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00553460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x553460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xd8))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0xdc))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xe0))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005534a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005534a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5534a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005534f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005534f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5534f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = (uint)*((ushort *)GEN_TOP((*param_1 + 0x2c)));
  *((int *)GEN_TOP(((int)this + 4))) = *param_1 + 0x30;
  return (uint)this;
}

/* ref: FUN_00553520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x553520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 < *((uint *)GEN_TOP(((int)this + 8)))) {
    return *((int *)GEN_TOP(((int)this + 4))) + param_1 * 0xc;
  }
  return *(int *)this + (param_1 - *((uint *)GEN_TOP(((int)this + 8)))) * 0xc;
}

/* ref: FUN_00553550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00553550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x553550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
  fVar1 = *((float *)GEN_TOP((iVar10 + 0x10)));
  fVar2 = *((float *)GEN_TOP((iVar10 + 0x14)));
  fVar3 = *((float *)GEN_TOP((iVar10 + 0x18)));
  uVar13 = 0;
  puVar11 = ((ushort *)GEN_TOP((iVar10 + ((uint)*((ushort *)GEN_TOP((iVar10 + 0x2c))) * 3 + 0xc) * 4)));
  fVar4 = *((float *)GEN_TOP((iVar10 + 0x1c)));
  fVar14 = (float10)REFG(double, 0x109cab0);
  fVar5 = *((float *)GEN_TOP((iVar10 + 0x20)));
  fVar6 = *((float *)GEN_TOP((iVar10 + 0x24)));
  if (*((short *)GEN_TOP((iVar10 + 0x28))) != 0) {
    pfVar12 = ((float *)GEN_TOP((param_1 + 8)));
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
    } while (uVar13 < *((ushort *)GEN_TOP((iVar10 + 0x28))));
    return 0;
  }
  return 0;
}

/* ref: FUN_00553640 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00553640(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0x553640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  byte * pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  if (-1 < param_2) {
    iVar3 = *param_1;
    pbVar1 = ((byte *)GEN_TOP((iVar3 + ((uint)*((ushort *)GEN_TOP((iVar3 + 0x28))) + param_2 + 8 +
                              (uint)*((ushort *)GEN_TOP((iVar3 + 0x2c))) * 2) * 6)));
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
    param_3[3] = *((float *)GEN_TOP((iVar3 + uVar4 * 0xc)));
    param_3[4] = *((float *)GEN_TOP((iVar2 + 4)));
    param_3[5] = *((float *)GEN_TOP((iVar2 + 8)));
    uVar4 = (uint)pbVar1[1];
    if (uVar4 < (uint)param_4[2]) {
      iVar3 = param_4[1];
    }
    else {
      uVar4 = uVar4 - param_4[2];
      iVar3 = *param_4;
    }
    iVar2 = iVar3 + uVar4 * 0xc;
    param_3[6] = *((float *)GEN_TOP((iVar3 + uVar4 * 0xc)));
    param_3[7] = *((float *)GEN_TOP((iVar2 + 4)));
    param_3[8] = *((float *)GEN_TOP((iVar2 + 8)));
    uVar4 = (uint)pbVar1[2];
    if (uVar4 < (uint)param_4[2]) {
      iVar3 = param_4[1];
    }
    else {
      iVar3 = *param_4;
      uVar4 = uVar4 - param_4[2];
    }
    iVar2 = iVar3 + uVar4 * 0xc;
    param_3[9] = *((float *)GEN_TOP((iVar3 + uVar4 * 0xc)));
    param_3[10] = *((float *)GEN_TOP((iVar2 + 4)));
    param_3[0xb] = *((float *)GEN_TOP((iVar2 + 8)));
    param_3[0xf] = gen_bits2f((uint)CONCAT12(pbVar1[3],*(undefined2 *)(pbVar1 + 4)));
    param_3[0x10] = param_7;
    param_3[0x13] = 1.4013e-45;
    return 1;
  }
  param_3[0x13] = 0.0;
  return 0;
}

/* ref: FUN_00553770 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00553770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x553770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_005537e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005537e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5537e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1a0))) = param_2;
  return param_2;
}

/* ref: Global::EnsureCurrentNode */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00553810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x553810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x20018))) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *((uint *)GEN_TOP(((int)this + 0x20018))) = uVar1;
    *((undefined4 *)GEN_TOP((uVar1 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)this + 0x2001c)));
  }
  return;
}

/* ref: Global::GetCurrentNode */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00553840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x553840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x20018))) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *((uint *)GEN_TOP(((int)this + 0x20018))) = uVar1;
    *((undefined4 *)GEN_TOP((uVar1 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)this + 0x2001c)));
  }
  return *((uint *)GEN_TOP(((int)this + 0x20018)));
}

/* ref: Global::GetCurrentNodeData */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00553870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x553870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x20018))) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *((uint *)GEN_TOP(((int)this + 0x20018))) = uVar1;
    *((undefined4 *)GEN_TOP((uVar1 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)this + 0x2001c)));
  }
  return *((int *)GEN_TOP(((int)this + 0x20018))) + 0x80;
}

/* ref: FUN_005538e0 */
GEN_OWN GEN_FRAME uint F_005538e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5538e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005538f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5538f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x2a)));
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00553900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x553900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x2c))) +
         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x28)));
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf7 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00553910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x553910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint local_8;
  
  iVar1 = *(int *)(this + 0xc);
  if (*((short *)GEN_TOP((iVar1 + 0x2a))) != 0) {
    local_8 = 0;
    if (*((short *)GEN_TOP((iVar1 + 0x2c))) != 0) {
      pfVar2 = ((float *)GEN_TOP((iVar1 + 0x30)));
      pfVar3 = ((float *)GEN_TOP((param_2 + 8)));
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
      } while (local_8 < *((ushort *)GEN_TOP((iVar1 + 0x2c))));
    }
    F_00c8fd40(this GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP((iVar1 + 0x2c))),param_1,param_2);
  }
  return;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005539d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5539d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  return iVar1 + (*((ushort *)GEN_TOP((iVar1 + 0x28))) + 8 + (uint)*((ushort *)GEN_TOP((iVar1 + 0x2c))) * 2) * 6;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005539f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5539f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc)));
  *param_2 = *((undefined4 *)GEN_TOP((uVar1 + 0x10)));
  param_2[1] = *((undefined4 *)GEN_TOP((uVar1 + 0x14)));
  param_2[2] = *((undefined4 *)GEN_TOP((uVar1 + 0x18)));
  param_2[3] = *((undefined4 *)GEN_TOP((uVar1 + 0x1c)));
  param_2[4] = *((undefined4 *)GEN_TOP((uVar1 + 0x20)));
  param_2[5] = *((undefined4 *)GEN_TOP((uVar1 + 0x24)));
  return uVar1;
}

/* ref: FUN_00553a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x553a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  uVar1 = param_1[3];
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return uVar1;
}

/* ref: Global::InvokeJobThunk */
GEN_OWN GEN_FRAME uint F_00553a60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x553a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3);
  return uVar1;
}

/* ref: Global::InvokeCallbackThunk */
GEN_OWN GEN_FRAME uint F_00553a80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x553a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
  return uVar1;
}

/* ref: Global::InvokeTaskThunk */
GEN_OWN GEN_FRAME uint F_00553a90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x553a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00553ab0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00553ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x553ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00554520((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00553ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00553ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x553ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*((float *)GEN_TOP(((int)this + 4)));
  fVar2 = (float10)*(float *)this;
  fVar3 = (float10)*((float *)GEN_TOP(((int)this + 8)));
  fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 +
                                                               (fVar2 * fVar2 + fVar1 * fVar1))))))))))));
  if ((float10)0 < fVar1) {
    *(float *)this = (float)((float10)*(float *)((int)(uintptr_t)this) * fVar1);
    *((float *)GEN_TOP(((int)this + 4))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 4))) * fVar1)));
    *((float *)GEN_TOP(((int)this + 8))) = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP(((int)this + 8))))));
    return (uint)this;
  }
  if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
    REFG(float, 0x1379700) = 0;
    REFG(float, 0x1379704) = REFG(float, 0x1087f04);
    REFG(float, 0x1379708) = 0;
  }
  *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x1379700));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 4))), REFG(float, 0x1379704));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 8))), REFG(float, 0x1379708));
  return (uint)this;
}

/* ref: FUN_00553ba0 */
GEN_OWN GEN_FRAME byte F_00553ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
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
  fVar5 = *((float *)GEN_TOP((*(uint *)&gen_args[3])));
  fVar1 = *((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 0xc)));
  fVar2 = *((float *)GEN_TOP(((*(uint *)&gen_args[2]) + 8)));
  fVar3 = *((float *)GEN_TOP((*(uint *)&gen_args[2])));
  (*(float *)(gen_frame + 0x0)) = fVar3;
  (*(float *)(gen_frame + 0x4)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  (*(float *)(gen_frame + 0x8)) = fVar3;
  if ((float10)fVar5 < (float10)fVar3) {
    (*(float *)(gen_frame + 0x0)) = fVar5;
  }
  fVar6 = *((float *)GEN_TOP(((*(uint *)&gen_args[3]) + 8)));
  if ((float10)fVar6 < (float10)fVar2) {
    (*(float *)(gen_frame + 0x4)) = fVar6;
  }
  if ((float10)fVar3 < (float10)fVar5) {
    (*(float *)(gen_frame + 0x8)) = fVar5;
  }
  if ((float10)fVar2 < (float10)fVar6) {
    (*(float *)(gen_frame + 0xc)) = fVar6;
  }
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(*(*(float * PTR32 *)&gen_args[4]));
  if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)(*(float *)(gen_frame + 0x0))) {
    (*(float *)(gen_frame + 0x0)) = gen_bits2f((*(uint *)&gen_args[3]));
  }
  fVar2 = (*(float * PTR32 *)&gen_args[4])[2];
  (*(float *)(gen_frame + 0x44)) = fVar2;
  if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x4))) {
    (*(float *)(gen_frame + 0x4)) = fVar2;
  }
  if ((float10)(*(float *)(gen_frame + 0x8)) < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))) {
    (*(float *)(gen_frame + 0x8)) = gen_bits2f((*(uint *)&gen_args[3]));
  }
  if ((float10)(*(float *)(gen_frame + 0xc)) < (float10)fVar2) {
    (*(float *)(gen_frame + 0xc)) = fVar2;
  }
  fVar15 = (float10)fVar1;
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - fVar15);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - fVar15);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + fVar15);
  (*(float *)(gen_frame + 0xc)) = (float)(fVar15 + (float10)(*(float *)(gen_frame + 0xc)));
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar5);
  bVar14 = F_005507d0((*(uint *)&gen_args[0]),(uint)(*(float * PTR32 *)&gen_args[1]),(uint)&(*(float *)(gen_frame + 0x0)));
  if (bVar14 == 0) {
    return 0;
  }
  fVar15 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))));
  (*(float *)(gen_frame + 0x10)) = (float)(fVar15 - (float10)(*(float *)(gen_frame + 0x28)));
  fVar2 = *((float *)GEN_TOP((uVar12 + 4)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)fVar2 - (float10)*((float *)GEN_TOP((uVar11 + 4))))));
  (*(uint *)&gen_args[2]) = *((uint *)GEN_TOP((uVar12 + 8)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) - (float10)*((float *)GEN_TOP((uVar11 + 8))))));
  (*(float *)(gen_frame + 0x4)) = (float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) - fVar15);
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - (float10)fVar2)));
  (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))));
  F_00550080((*(float * PTR32 *)&gen_args[5]),(uint)&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x4)));
  F_00553ac0((*(float * PTR32 *)&gen_args[5]) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x2c)) = (*(float * PTR32 *)&gen_args[1])[1];
  (*(float *)(gen_frame + 0x38)) = (*(float * PTR32 *)&gen_args[5])[1];
  (*(float *)(gen_frame + 0x30)) = *(*(float * PTR32 *)&gen_args[1]);
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(*(*(float * PTR32 *)&gen_args[5]));
  (*(float *)(gen_frame + 0x28)) = (*(float * PTR32 *)&gen_args[1])[2];
  (*(float *)(gen_frame + 0x34)) = (*(float * PTR32 *)&gen_args[5])[2];
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
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  fVar3 = (float)(fVar15 * fVar17);
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar5 = (float)(fVar16 * fVar17);
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x44)) = *((float *)GEN_TOP((*(uint *)&gen_args[0])));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*((float *)GEN_TOP((*(uint *)&gen_args[0]))) - (float10)fVar2);
  (*(float *)(gen_frame + 0x40)) = *((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 4))) - (float10)fVar3)));
  (*(float *)(gen_frame + 0x3c)) = *((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) - (float10)fVar5)));
  bVar14 = F_00550990(&(*(float *)(gen_frame + 0x10)),(uint)(*(float * PTR32 *)&gen_args[1]),uVar11,uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) &&
     ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[2]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(gen_bits2f((*(uint *)&gen_args[2])) < *(float *)&REFG(undefined, 0x1088114)))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
    return 1;
  }
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x1c)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x40)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x24)));
  fVar15 = (float10)REFG(double, 0x1094890);
  (*(float *)(gen_frame + 0x4)) = (float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) * fVar15);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * fVar15);
  (*(float *)(gen_frame + 0xc)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x34)));
  bVar14 = F_00550990(&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x4)),uVar11,uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),&(*(uint *)&gen_args[2]));
  if (((bVar14 != 0) && (0.0 <= gen_bits2f((*(uint *)&gen_args[2])))) &&
     (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)fVar1 + (float10)fVar1)) {
    *(*(float * PTR32 *)&gen_args[6]) = 0.0;
    return 1;
  }
  fVar2 = *((float *)GEN_TOP(uVar11));
  fVar15 = (float10)(*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar2 - fVar15);
  fVar16 = (float10)*((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 4)));
  fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar11 + 4))) - fVar16)));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  fVar17 = (float10)*((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 8)));
  fVar5 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar11 + 8))) - fVar17)));
  (*(float *)(gen_frame + 0x18)) = fVar5;
  fVar6 = *((float *)GEN_TOP(uVar12));
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)fVar6 - fVar15);
  fVar7 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar12 + 4))) - fVar16)));
  (*(float *)(gen_frame + 0x20)) = fVar7;
  fVar8 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar12 + 8))) - fVar17)));
  (*(float *)(gen_frame + 0x24)) = fVar8;
  fVar9 = *(*(float * PTR32 *)&gen_args[4]);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar9 - fVar15);
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - fVar16)));
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[2])) - fVar17)));
  fVar18 = GEN_X87((float10)(float)((float10)fVar2 - fVar15));
  fVar19 = (float10)fVar3;
  fVar20 = (float10)fVar5;
  fVar2 = ((float)GEN_TOF((fVar20 * fVar20 + (fVar19 * fVar19 + fVar18 * fVar18))));
  fVar18 = GEN_X87((float10)(float)((float10)fVar6 - fVar15));
  fVar19 = (float10)fVar7;
  fVar20 = (float10)fVar8;
  fVar3 = ((float)GEN_TOF((fVar20 * fVar20 + (fVar19 * fVar19 + fVar18 * fVar18))));
  (*(float *)(gen_frame + 0x34)) = fVar3;
  fVar15 = GEN_X87((float10)(float)((float10)fVar9 - fVar15));
  fVar16 = GEN_X87((float10)((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - fVar16))));
  fVar17 = GEN_X87((float10)((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[2])) - fVar17))));
  fVar5 = ((float)GEN_TOF((fVar17 * fVar17 + (fVar16 * fVar16 + fVar15 * fVar15))));
  (*(float *)(gen_frame + 0x38)) = fVar5;
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar2);
  if ((float10)fVar2 < (float10)fVar3) {
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar3);
  }
  if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)fVar5) {
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar5);
  }
  fVar15 = (float10)fVar1;
  (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 0;
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(fVar15 + (float10)((float)GEN_TOF(GEN_X87(SQRT(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))))))));
  fVar16 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))));
  (*(float *)(gen_frame + 0x1c)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) * fVar16);
  (*(float *)(gen_frame + 0x24)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x44)) + (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x30))))));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x2c)) * fVar16))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x28))))));
  (*(float *)(gen_frame + 0x44)) = (float)(fVar15 * fVar15);
  bVar14 = F_00c9abd0(uVar10,uVar11,uVar12,(float)(fVar15 * fVar15));
  if (((bVar14 != 0) || (bVar14 = F_00c9abd0(uVar10,uVar12,(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x44))), bVar14 != 0)) ||
     (bVar14 = F_00c9abd0(uVar10,(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x44))), bVar14 != 0)) {
    *(*(float * PTR32 *)&gen_args[6]) = 0.0;
    return 1;
  }
  bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x1c)),uVar11,uVar12,(*(float *)(gen_frame + 0x44)),(*(float * PTR32 *)&gen_args[6]));
  if (bVar14 == 0) {
    bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x1c)),uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x44)),(*(float * PTR32 *)&gen_args[6]));
    if (bVar14 == 0) {
      bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x1c)),(uint)(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x44)),(*(float * PTR32 *)&gen_args[6]));
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
    bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x1c)),uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x44)),&(*(uint *)&gen_args[2]));
    if ((bVar14 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
      *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
    }
  }
  bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x1c)),(uint)(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x44)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1;
  *(*(float * PTR32 *)&gen_args[6]) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))) * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))))));
LAB_0055410a: ;
  fVar1 = *((float *)GEN_TOP((uVar11 + 4)));
  uVar4 = *((undefined4 *)GEN_TOP((uVar11 + 8)));
  (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(uVar11));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar4);
  (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x44));
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x0)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  fVar1 = *((float *)GEN_TOP((uVar12 + 4)));
  uVar4 = *((undefined4 *)GEN_TOP((uVar12 + 8)));
  (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(uVar12));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar4);
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x0)),&(*(uint *)&gen_args[2]));
  pfVar13 = (*(float * PTR32 *)&gen_args[6]);
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  fVar1 = (*(float * PTR32 *)&gen_args[4])[1];
  fVar2 = (*(float * PTR32 *)&gen_args[4])[2];
  (*(float *)(gen_frame + 0x0)) = *(*(float * PTR32 *)&gen_args[4]);
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x0)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)*pfVar13)) {
    *pfVar13 = gen_bits2f((*(uint *)&gen_args[2]));
  }
  return (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3));
}

/* ref: FUN_00554230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00554230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPCRITICAL_SECTION param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x554230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;)
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_005542b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005542b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5542b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005542c0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_005542c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005542c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5542c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: InterfaceHolderBase_InterfaceHolder_VNodeInterface_Mesh_RigidBody_BGCollision::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005542f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5542f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00554320 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00554320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x554320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x20018))) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *((uint *)GEN_TOP(((int)this + 0x20018))) = uVar1;
    *((undefined4 *)GEN_TOP((uVar1 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)this + 0x2001c)));
  }
  return *((uint *)GEN_TOP(((int)this + 0x20018)));
}

/* ref: FUN_00554350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00554350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x554350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x20018))) == 0) {
    uVar1 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *((uint *)GEN_TOP(((int)this + 0x20018))) = uVar1;
    *((undefined4 *)GEN_TOP((uVar1 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)this + 0x2001c)));
  }
  return *((int *)GEN_TOP(((int)this + 0x20018))) + 0x80;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00554440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x554440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf4 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00554450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x554450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf7 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00554460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x554460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf6 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00554470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x554470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00554480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x554480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00554490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00554490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x554490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005544d0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_005544a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005544a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5544a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005544d0((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005544d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5544d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[2] = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  param_1[1] = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00554500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00554500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x554500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: FUN_00554520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00554520(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x554520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c93040(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00554550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00554550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x554550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a60));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00554570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00554570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x554570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a90));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00554590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00554590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x554590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a80));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005545d0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5545d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00c93040(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00554600 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00554600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x554600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005545d0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00554610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00554610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x554610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00554640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x554640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0xc);
  if (*((short *)GEN_TOP((uVar2 + 0x2a))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,this);
  }
  iVar1 = *(int *)(this + 0xc);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if (0 < *((int *)GEN_TOP((iVar1 + 8)))) {
    (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((iVar1 + 8))) + iVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 8);
    uVar2 = F_00554640((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  }
  iVar1 = *(int *)(this + 0xc);
  if (0 < *((int *)GEN_TOP((iVar1 + 8)))) {
    (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((iVar1 + 0xc))) + iVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 8);
    uVar2 = F_00554640((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  }
  F_00c93040(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005546d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005546d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5546d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    param_1[3] = *((undefined4 *)GEN_TOP(((int)this + 8)));
    param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return (uint)param_1;
}

/* ref: FUN_00554700 */
GEN_OWN_GS GEN_FRAME unsigned int GEN_THISCALL F_00554700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x554700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0xd28, 8, 4);
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
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd24));
  (*(float * PTR32 *)(gen_frame + 0xbc)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0xd4)) = this;
  (*(byte * PTR32 *)(gen_frame + 0x104)) = param_1;
  (*(byte * PTR32 *)(gen_frame + 0xc0)) = param_1;
  iVar17 = 0xff;
  puVar11 = ((undefined4 *)(gen_frame + 0x128));
  do {
    puVar11[-2] = 0;
    puVar11[-1] = 0;
    *puVar11 = 0;
    puVar11 = puVar11 + 3;
    iVar17 = iVar17 - 1;
  } while (-1 < iVar17);
  uVar18 = (uint)*(ushort *)(param_1 + 0x2c);
  (*(byte * PTR32 *)(gen_frame + 0x110)) = param_1 + (*(ushort *)(param_1 + 0x28) + 8 + uVar18 * 2) * 6;
  (*(byte * PTR32 *)(gen_frame + 0xd8)) = ((byte *)(gen_frame + 0x120));
  (*(byte * PTR32 *)(gen_frame + 0xf8)) = ((byte *)GEN_TOP(0xffffffff));
  (*(uint *)(gen_frame + 0xe0)) = uVar18;
  (*(byte * PTR32 *)(gen_frame + 0xdc)) = param_1 + 0x30;
  F_00553550(&(*(byte * PTR32 *)(gen_frame + 0xc0)) GEN_EDX_FWD,((byte *)(gen_frame + 0x120)));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
  uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 100)));
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
  (*(undefined4 *)(gen_frame + 0x70)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8c)) = uVar1;
  (*(float *)(gen_frame + 0xe4)) = *((float *)GEN_TOP(((int)this + 0x70)));
  (*(float *)(gen_frame + 0xe8)) = *((float *)GEN_TOP(((int)this + 0x74)));
  (*(float *)(gen_frame + 0xec)) = *((float *)GEN_TOP(((int)this + 0x78)));
  (*(float *)(gen_frame + 0xc4)) = 0.0;
  (*(float *)(gen_frame + 0xc8)) = 0.0;
  (*(float *)(gen_frame + 0xcc)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x74)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x78)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x7c)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x90)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x94)) = uVar3;
  (*(float *)(gen_frame + 0x108)) = REFG(float, 0x1090998);
  (*(byte * PTR32 *)(gen_frame + 0x100)) = ((byte *)GEN_TOP(0x0));
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 0: ;
    (*(byte * PTR32 *)(gen_frame + 0x104)) = ((byte *)GEN_TOP(0x0));
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x110)) + 1;
      do {
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[1];
        if (uVar14 < uVar18) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar15 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar15;
        uVar14 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x11c));
        if (uVar14 < uVar18) {
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar13 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-1];
        if (uVar14 < uVar18) {
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar12 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        bVar10 = F_00c9bf20(&(*(undefined4 *)(gen_frame + 0x8c)),(uint)&(*(float *)(gen_frame + 0xe4)),(uint)pbVar12,(uint)pbVar13,(uint)pbVar15,
                              &(*(float *)(gen_frame + 0xc4)),&(*(float *)(gen_frame + 0x118)));
        if (((bVar10 != 0) && ((float10)(*(float *)(gen_frame + 0x118)) <= (float10)(*(float *)(gen_frame + 0x108)))) &&
           ((!GEN_ISNAN((*(float *)(gen_frame + 0x118))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !((*(float *)(gen_frame + 0x118)) < *(float *)&REFG(undefined, 0x1088114)))) {
          (*(byte * PTR32 *)(gen_frame + 0xf8)) = (*(byte * PTR32 *)(gen_frame + 0x104));
          (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x118));
        }
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x11c)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x104)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x104)) = pbVar15;
      } while (pbVar15 < ((byte *)GEN_TOP((uint)*(ushort *)(param_1 + 0x2a))));
    }
    break;
  case 1: ;
    (*(byte * PTR32 *)(gen_frame + 0x104)) = ((byte *)GEN_TOP(0x0));
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x110)) + 1;
      do {
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[1];
        if (uVar14 < uVar18) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar15 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar15;
        uVar14 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x11c));
        if (uVar14 < uVar18) {
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar13 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-1];
        if (uVar14 < uVar18) {
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar12 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        bVar10 = F_00553ba0((uint)&(*(undefined4 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0xe4)),(uint)pbVar12,(uint)pbVar13,pbVar15,
                              &(*(float *)(gen_frame + 0xc4)),&(*(float *)(gen_frame + 0x118)));
        if (bVar10 != 0) {
          if (((float10)(*(float *)(gen_frame + 0x118)) <= (float10)REFG(double, 0x1091858) + (float10)(*(float *)(gen_frame + 0x108))) &&
             (*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x118)))) {
            pbVar15 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xcc)) * (float10)(*(float *)(gen_frame + 0xec)) +
                                     ((float10)(*(float *)(gen_frame + 0xc8)) * (float10)(*(float *)(gen_frame + 0xe8)) +
                                     (float10)(*(float *)(gen_frame + 0xc4)) * (float10)(*(float *)(gen_frame + 0xe4)))))))));
            (*(byte * PTR32 *)(gen_frame + 0x110)) = pbVar15;
            if ((!((float10)(*(float *)(gen_frame + 0x108)) - (float10)(*(float *)(gen_frame + 0x118)) < (float10)*(double *)&REFG(undefined, 0x109cd58))) ||
               (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x100))))) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar15)))))) {
              (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x118));
              (*(byte * PTR32 *)(gen_frame + 0xf8)) = (*(byte * PTR32 *)(gen_frame + 0x104));
              (*(byte * PTR32 *)(gen_frame + 0x100)) = pbVar15;
            }
          }
        }
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x11c)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x104)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x104)) = pbVar15;
      } while (pbVar15 < ((byte *)GEN_TOP((uint)*(ushort *)(param_1 + 0x2a))));
    }
    break;
  case 2: ;
    pbVar15 = *((byte * PTR32 *)GEN_TOP(((int)this + 0x90)));
    (*(byte * PTR32 *)(gen_frame + 0x114)) = ((byte *)GEN_TOP(((int)this + 0x98)));
    (*(byte * PTR32 *)(gen_frame + 0x10c)) = pbVar15;
    (*(byte * PTR32 *)(gen_frame + 0xfc)) = ((byte *)GEN_TOP(0x0));
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x110)) = (*(byte * PTR32 *)(gen_frame + 0x110)) + 2;
      do {
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x110))[-2];
        if (uVar14 < uVar18) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar15 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x110))[-1];
        (*(byte * PTR32 *)(gen_frame + 0x100)) = pbVar15;
        if (uVar14 < uVar18) {
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar13 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = pbVar13;
        uVar14 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x110));
        if (uVar14 < uVar18) {
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar12 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        bVar10 = F_00c9bf20(&(*(undefined4 *)(gen_frame + 0x8c)),(uint)&(*(float *)(gen_frame + 0xe4)),(uint)pbVar15,(uint)pbVar13,(uint)pbVar12,
                              &(*(float *)(gen_frame + 0xc4)),&(*(float *)(gen_frame + 0x118)));
        if ((((bVar10 != 0) && ((float10)(*(float *)(gen_frame + 0x118)) <= (float10)(*(float *)(gen_frame + 0x108)))) &&
            ((!GEN_ISNAN((*(float *)(gen_frame + 0x118))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
             !((*(float *)(gen_frame + 0x118)) < *(float *)&REFG(undefined, 0x1088114)))) &&
           (fVar19 = F_00551030(pbVar12,(*(byte * PTR32 *)(gen_frame + 0x11c)),(*(byte * PTR32 *)(gen_frame + 0x100)),(uint)&(*(byte * PTR32 *)(gen_frame + 0x114))),
           fVar19 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x10c))))))) {
          (*(byte * PTR32 *)(gen_frame + 0xf8)) = (*(byte * PTR32 *)(gen_frame + 0xfc));
          (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x118));
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x104)) + 0x2a);
        (*(byte * PTR32 *)(gen_frame + 0x110)) = (*(byte * PTR32 *)(gen_frame + 0x110)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xfc)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0xfc)) = pbVar15;
      } while (pbVar15 < ((byte *)GEN_TOP((uint)uVar6)));
    }
    break;
  case 3: ;
    (*(float *)(gen_frame + 0xa4)) = 0.0;
    (*(float *)(gen_frame + 0xa8)) = 0.0;
    (*(float *)(gen_frame + 0xac)) = 0.0;
    fVar5 = *((float *)GEN_TOP(((int)this + 0x90)));
    (*(float *)(gen_frame + 0xf4)) = gen_bits2f((int)this + 0x98);
    (*(float *)(gen_frame + 0xf0)) = fVar5;
    (*(byte * PTR32 *)(gen_frame + 0x10c)) = ((byte *)GEN_TOP(0x0));
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x114)) = (*(byte * PTR32 *)(gen_frame + 0x110)) + 2;
      do {
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x114))[-2];
        if (uVar14 < uVar18) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar15 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x114))[-1];
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = pbVar15;
        if (uVar14 < uVar18) {
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar13 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        (*(byte * PTR32 *)(gen_frame + 0xfc)) = pbVar13;
        uVar14 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x114));
        if (uVar14 < uVar18) {
          pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
        }
        else {
          pbVar12 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
        }
        bVar10 = F_00553ba0((uint)&(*(undefined4 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0xe4)),(uint)pbVar15,(uint)pbVar13,pbVar12,
                              &(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0x118)));
        if (bVar10 != 0) {
          if (((float10)(*(float *)(gen_frame + 0x118)) <= (float10)REFG(double, 0x1091858) + (float10)(*(float *)(gen_frame + 0x108))) &&
             (*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x118)))) {
            pbVar15 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xac)) * (float10)(*(float *)(gen_frame + 0xec)) +
                                     ((float10)(*(float *)(gen_frame + 0xa8)) * (float10)(*(float *)(gen_frame + 0xe8)) +
                                     (float10)(*(float *)(gen_frame + 0xa4)) * (float10)(*(float *)(gen_frame + 0xe4)))))))));
            (*(byte * PTR32 *)(gen_frame + 0x110)) = pbVar15;
            if (((!((float10)(*(float *)(gen_frame + 0x108)) - (float10)(*(float *)(gen_frame + 0x118)) < (float10)*(double *)&REFG(undefined, 0x109cd58))) ||
                (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x100))))) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar15)))))) &&
               (fVar19 = F_00551030(pbVar12,(*(byte * PTR32 *)(gen_frame + 0xfc)),(*(byte * PTR32 *)(gen_frame + 0x11c)),(uint)&(*(float *)(gen_frame + 0xf4))),
               fVar19 <= (float10)(*(float *)(gen_frame + 0xf0)))) {
              (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x118));
              (*(byte * PTR32 *)(gen_frame + 0xf8)) = (*(byte * PTR32 *)(gen_frame + 0x10c));
              (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x110));
            }
          }
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x104)) + 0x2a);
        (*(byte * PTR32 *)(gen_frame + 0x114)) = (*(byte * PTR32 *)(gen_frame + 0x114)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x10c)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x10c)) = pbVar15;
      } while (pbVar15 < ((byte *)GEN_TOP((uint)uVar6)));
    }
    break;
  case 4: ;
    (*(float *)(gen_frame + 0xf0)) = *((float *)GEN_TOP(((int)this + 0x80)));
    (*(float *)(gen_frame + 0xf4)) = *((float *)GEN_TOP(((int)this + 0x84)));
    (*(byte * PTR32 *)(gen_frame + 0x114)) = ((byte *)GEN_TOP(0x0));
    if (*(short *)(param_1 + 0x2a) != 0) {
      pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x110)) + 4;
      do {
        if (gen_bits2f((uint)CONCAT12(pbVar15[-1],*(undefined2 *)pbVar15) &
                       (uint)gen_fl2bits((*(float *)(gen_frame + 0xf0)))) == (*(float *)(gen_frame + 0xf4))) {
          uVar14 = (uint)pbVar15[-2];
          if (uVar14 < uVar18) {
            (*(byte * PTR32 *)(gen_frame + 0x10c)) = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            (*(byte * PTR32 *)(gen_frame + 0x10c)) = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)pbVar15[-3];
          if (uVar14 < uVar18) {
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar13 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)pbVar15[-4];
          if (uVar14 < uVar18) {
            pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar12 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          bVar10 = F_00c9bf20(&(*(undefined4 *)(gen_frame + 0x8c)),(uint)&(*(float *)(gen_frame + 0xe4)),(uint)pbVar12,(uint)pbVar13,
                                (uint)(*(byte * PTR32 *)(gen_frame + 0x10c)),&(*(float *)(gen_frame + 0xc4)),&(*(float *)(gen_frame + 0x118)));
          if (((bVar10 != 0) && ((float10)(*(float *)(gen_frame + 0x118)) <= (float10)(*(float *)(gen_frame + 0x108)))) &&
             ((!GEN_ISNAN((*(float *)(gen_frame + 0x118))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
              !((*(float *)(gen_frame + 0x118)) < *(float *)&REFG(undefined, 0x1088114)))) {
            (*(byte * PTR32 *)(gen_frame + 0xf8)) = (*(byte * PTR32 *)(gen_frame + 0x114));
            (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x118));
          }
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x104)) + 0x2a);
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x114)) + 1;
        pbVar15 = pbVar15 + 6;
        (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar13;
      } while (pbVar13 < ((byte *)GEN_TOP((uint)uVar6)));
    }
    break;
  case 5: ;
    fVar5 = *((float *)GEN_TOP(((int)this + 0x80)));
    fVar8 = *((float *)GEN_TOP(((int)this + 0x84)));
    (*(float *)(gen_frame + 0x80)) = 0.0;
    (*(float *)(gen_frame + 0x84)) = 0.0;
    (*(float *)(gen_frame + 0x88)) = 0.0;
    (*(float *)(gen_frame + 0xf0)) = fVar5;
    (*(float *)(gen_frame + 0xf4)) = fVar8;
    (*(byte * PTR32 *)(gen_frame + 0x114)) = ((byte *)GEN_TOP(0x0));
    if (*(short *)(param_1 + 0x2a) != 0) {
      pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x110)) + 4;
      do {
        if (gen_bits2f((uint)CONCAT12(pbVar15[-1],*(undefined2 *)pbVar15) &
                       (uint)gen_fl2bits((*(float *)(gen_frame + 0xf0)))) == (*(float *)(gen_frame + 0xf4))) {
          uVar14 = (uint)pbVar15[-2];
          if (uVar14 < uVar18) {
            (*(byte * PTR32 *)(gen_frame + 0x10c)) = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            (*(byte * PTR32 *)(gen_frame + 0x10c)) = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)pbVar15[-3];
          if (uVar14 < uVar18) {
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar13 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)pbVar15[-4];
          if (uVar14 < uVar18) {
            pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar12 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          bVar10 = F_00553ba0((uint)&(*(undefined4 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0xe4)),(uint)pbVar12,(uint)pbVar13,(*(byte * PTR32 *)(gen_frame + 0x10c)),
                                &(*(float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x118)));
          if (bVar10 != 0) {
            if (((float10)(*(float *)(gen_frame + 0x118)) <= (float10)REFG(double, 0x1091858) + (float10)(*(float *)(gen_frame + 0x108))) &&
               (*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x118)))) {
              pbVar13 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x88)) * (float10)(*(float *)(gen_frame + 0xec)) +
                                       ((float10)(*(float *)(gen_frame + 0x84)) * (float10)(*(float *)(gen_frame + 0xe8)) +
                                       (float10)(*(float *)(gen_frame + 0x80)) * (float10)(*(float *)(gen_frame + 0xe4)))))))));
              (*(byte * PTR32 *)(gen_frame + 0x110)) = pbVar13;
              if ((!((float10)(*(float *)(gen_frame + 0x108)) - (float10)(*(float *)(gen_frame + 0x118)) < (float10)*(double *)&REFG(undefined, 0x109cd58)))
                 || (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x100))))) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar13)))))) {
                (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x118));
                (*(byte * PTR32 *)(gen_frame + 0xf8)) = (*(byte * PTR32 *)(gen_frame + 0x114));
                (*(byte * PTR32 *)(gen_frame + 0x100)) = pbVar13;
              }
            }
          }
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x104)) + 0x2a);
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x114)) + 1;
        pbVar15 = pbVar15 + 6;
        (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar13;
      } while (pbVar13 < ((byte *)GEN_TOP((uint)uVar6)));
    }
    break;
  case 6: ;
    fVar8 = *((float *)GEN_TOP(((int)this + 0x84)));
    fVar5 = *((float *)GEN_TOP(((int)this + 0x90)));
    (*(byte * PTR32 *)(gen_frame + 0x100)) = ((byte *)GEN_TOP(((int)this + 0x98)));
    (*(float *)(gen_frame + 0xd0)) = fVar5;
    (*(float *)(gen_frame + 0xf0)) = *((float *)GEN_TOP(((int)this + 0x80)));
    (*(float *)(gen_frame + 0xf4)) = fVar8;
    (*(byte * PTR32 *)(gen_frame + 0xfc)) = ((byte *)GEN_TOP(0x0));
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x110)) + 4;
      do {
        if (gen_bits2f((uint)CONCAT12((*(byte * PTR32 *)(gen_frame + 0x11c))[-1],*(undefined2 *)(*(byte * PTR32 *)(gen_frame + 0x11c))) &
                       (uint)gen_fl2bits((*(float *)(gen_frame + 0xf0)))) == (*(float *)(gen_frame + 0xf4))) {
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-4];
          if (uVar14 < uVar18) {
            pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar15 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          (*(byte * PTR32 *)(gen_frame + 0x10c)) = pbVar15;
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-3];
          if (uVar14 < uVar18) {
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar13 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-2];
          (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar13;
          if (uVar14 < uVar18) {
            pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar12 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          bVar10 = F_00c9bf20(&(*(undefined4 *)(gen_frame + 0x8c)),(uint)&(*(float *)(gen_frame + 0xe4)),(uint)pbVar15,(uint)pbVar13,
                                (uint)pbVar12,&(*(float *)(gen_frame + 0xc4)),&(*(float *)(gen_frame + 0x118)));
          if ((((bVar10 != 0) && ((float10)(*(float *)(gen_frame + 0x118)) <= (float10)(*(float *)(gen_frame + 0x108)))) &&
              ((!GEN_ISNAN((*(float *)(gen_frame + 0x118))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
               !((*(float *)(gen_frame + 0x118)) < *(float *)&REFG(undefined, 0x1088114)))) &&
             (fVar19 = F_00551030(pbVar12,(*(byte * PTR32 *)(gen_frame + 0x114)),(*(byte * PTR32 *)(gen_frame + 0x10c)),(uint)&(*(byte * PTR32 *)(gen_frame + 0x100))),
             fVar19 <= (float10)(*(float *)(gen_frame + 0xd0)))) {
            (*(byte * PTR32 *)(gen_frame + 0xf8)) = (*(byte * PTR32 *)(gen_frame + 0xfc));
            (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x118));
          }
        }
        uVar6 = *(ushort *)((*(byte * PTR32 *)(gen_frame + 0x104)) + 0x2a);
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x11c)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xfc)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0xfc)) = pbVar15;
      } while (pbVar15 < ((byte *)GEN_TOP((uint)uVar6)));
    }
    break;
  case 7: ;
    fVar5 = *((float *)GEN_TOP(((int)this + 0x84)));
    (*(byte * PTR32 *)(gen_frame + 0xfc)) = ((byte *)GEN_TOP(((int)this + 0x98)));
    fVar8 = *((float *)GEN_TOP(((int)this + 0x80)));
    (*(float *)(gen_frame + 0x98)) = 0.0;
    (*(float *)(gen_frame + 0x9c)) = 0.0;
    (*(float *)(gen_frame + 0xa0)) = 0.0;
    (*(float *)(gen_frame + 0xf4)) = *((float *)GEN_TOP(((int)this + 0x90)));
    (*(float *)(gen_frame + 0xd0)) = fVar8;
    (*(float *)(gen_frame + 0xf0)) = fVar5;
    (*(byte * PTR32 *)(gen_frame + 0x10c)) = ((byte *)GEN_TOP(0x0));
    if (*(short *)(param_1 + 0x2a) != 0) {
      (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x110)) + 4;
      do {
        if (gen_bits2f((uint)CONCAT12((*(byte * PTR32 *)(gen_frame + 0x11c))[-1],*(undefined2 *)(*(byte * PTR32 *)(gen_frame + 0x11c))) &
                       (uint)gen_fl2bits((*(float *)(gen_frame + 0xd0)))) == (*(float *)(gen_frame + 0xf0))) {
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-4];
          if (uVar14 < uVar18) {
            pbVar15 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar15 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          (*(byte * PTR32 *)(gen_frame + 0x114)) = pbVar15;
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-3];
          if (uVar14 < uVar18) {
            pbVar13 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar13 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          uVar14 = (uint)(*(byte * PTR32 *)(gen_frame + 0x11c))[-2];
          if (uVar14 < uVar18) {
            pbVar12 = (*(byte * PTR32 *)(gen_frame + 0xdc)) + uVar14 * 0xc;
          }
          else {
            pbVar12 = ((byte *)(gen_frame + 0x120)) + (uVar14 - uVar18) * 0xc;
          }
          bVar10 = F_00553ba0((uint)&(*(undefined4 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0xe4)),(uint)pbVar15,(uint)pbVar13,pbVar12,
                                &(*(float *)(gen_frame + 0x98)),&(*(float *)(gen_frame + 0x118)));
          if (bVar10 != 0) {
            if (((float10)(*(float *)(gen_frame + 0x118)) <= (float10)REFG(double, 0x1091858) + (float10)(*(float *)(gen_frame + 0x108))) &&
               (*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x118)))) {
              pbVar15 = ((byte *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xa0)) * (float10)(*(float *)(gen_frame + 0xec)) +
                                       ((float10)(*(float *)(gen_frame + 0x9c)) * (float10)(*(float *)(gen_frame + 0xe8)) +
                                       (float10)(*(float *)(gen_frame + 0x98)) * (float10)(*(float *)(gen_frame + 0xe4)))))))));
              (*(byte * PTR32 *)(gen_frame + 0x110)) = pbVar15;
              if (((!((float10)(*(float *)(gen_frame + 0x108)) - (float10)(*(float *)(gen_frame + 0x118)) < (float10)*(double *)&REFG(undefined, 0x109cd58)))
                  || (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(byte * PTR32 *)(gen_frame + 0x100))))) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pbVar15)))))) &&
                 (fVar19 = F_00551030(pbVar12,pbVar13,(*(byte * PTR32 *)(gen_frame + 0x114)),(uint)&(*(byte * PTR32 *)(gen_frame + 0xfc))),
                 fVar19 <= (float10)(*(float *)(gen_frame + 0xf4)))) {
                (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x118));
                (*(byte * PTR32 *)(gen_frame + 0xf8)) = (*(byte * PTR32 *)(gen_frame + 0x10c));
                (*(byte * PTR32 *)(gen_frame + 0x100)) = (*(byte * PTR32 *)(gen_frame + 0x110));
              }
            }
          }
        }
        (*(byte * PTR32 *)(gen_frame + 0x11c)) = (*(byte * PTR32 *)(gen_frame + 0x11c)) + 6;
        pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x10c)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x10c)) = pbVar15;
        this = (*(undefined * PTR32 *)(gen_frame + 0xd4));
      } while (pbVar15 < ((byte *)GEN_TOP((uint)*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x104)) + 0x2a))));
    }
  }
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0xbc));
  bVar10 = F_00553640(&(*(byte * PTR32 *)(gen_frame + 0xc0)) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0xf8)),(*(float * PTR32 *)(gen_frame + 0xbc)),&(*(byte * PTR32 *)(gen_frame + 0xd8)),&(*(undefined4 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0xe4)),(*(float *)(gen_frame + 0x108)));
  pfVar9[0x13] = gen_bits2f((uint)bVar10);
  if (gen_bits2f((uint)bVar10) == 0.0) {
    pfVar9[0x14] = 1.4013e-45;
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP(((int)this + 0x98)));
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)this + 0x9c)));
  (*(undefined4 *)(gen_frame + 0x2c)) = *((undefined4 *)GEN_TOP(((int)this + 0xa0)));
  (*(undefined4 *)(gen_frame + 0x30)) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
  (*(undefined4 *)(gen_frame + 0x34)) = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
  (*(undefined4 *)(gen_frame + 0x38)) = *((undefined4 *)GEN_TOP(((int)this + 0xac)));
  (*(undefined4 *)(gen_frame + 0x3c)) = *((undefined4 *)GEN_TOP(((int)this + 0xb0)));
  (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
  (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
  (*(undefined4 *)(gen_frame + 0x48)) = *((undefined4 *)GEN_TOP(((int)this + 0xbc)));
  (*(undefined4 *)(gen_frame + 0x4c)) = *((undefined4 *)GEN_TOP(((int)this + 0xc0)));
  (*(undefined4 *)(gen_frame + 0x50)) = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
  (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP(((int)this + 200)));
  (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
  (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP(((int)this + 0xd0)));
  (*(undefined4 *)(gen_frame + 0x60)) = *((undefined4 *)GEN_TOP(((int)this + 0xd4)));
  F_00550450(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xb0)),(uint)pfVar9);
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb0)) - (float10)*((float *)GEN_TOP(((int)this + 0xd8))))));
  (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb4)) - (float10)*((float *)GEN_TOP(((int)this + 0xdc))))));
  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb8)) - (float10)*((float *)GEN_TOP(((int)this + 0xe0))))));
  pfVar16 = ((float *)GEN_TOP(F_00550450(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),(uint)(pfVar9 + 3))));
  pfVar9[3] = *pfVar16;
  pfVar9[4] = pfVar16[1];
  pfVar9[5] = pfVar16[2];
  pfVar16 = ((float *)GEN_TOP(F_00550450(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(uint)(pfVar9 + 6))));
  pfVar9[6] = *pfVar16;
  pfVar9[7] = pfVar16[1];
  pfVar9[8] = pfVar16[2];
  pfVar16 = ((float *)GEN_TOP(F_00550450(&(*(undefined4 *)(gen_frame + 0x24)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),(uint)(pfVar9 + 9))));
  pfVar9[9] = *pfVar16;
  pfVar9[10] = pfVar16[1];
  pfVar9[0xb] = pfVar16[2];
  *pfVar9 = (*(float *)(gen_frame + 0xb0));
  pfVar9[1] = (*(float *)(gen_frame + 0xb4));
  pfVar9[2] = (*(float *)(gen_frame + 0xb8));
  fVar5 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x6c)) * (float10)(*(float *)(gen_frame + 0x6c)) +
                 ((float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x64)) + (float10)(*(float *)(gen_frame + 0x68)) * (float10)(*(float *)(gen_frame + 0x68)))
                 )));
  (*(undefined * PTR32 *)(gen_frame + 0xd4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar5)));
  fVar5 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar5))));
  (*(undefined * PTR32 *)(gen_frame + 0xd4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar5)));
  pfVar9[0x10] = fVar5;
  pfVar9[0x14] = 1.4013e-45;
  return 0;
}

/* ref: FUN_005558b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005558b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5558b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109ccfc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x109ccec));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[5])REFP(0x109ccd4));
  F_00509590(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00a4b9f0(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,(int)this + 0x3c,0x20000,1);
  *((undefined4 *)GEN_TOP(((int)this + 0x2003c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20040))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20044))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20048))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2004c))) = 0;
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x11ac)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = this_00;
  uVar1 = F_00a1abd0(this_00 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x20))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00555960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1[8];
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1[9];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_1[10];
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_1[0xb];
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1[0xf];
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_1[0x10];
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  F_00c9f100(param_1 GEN_EDX_FWD,(int)this + 0x30);
  return (uint)this;
}

/* ref: FUN_005559e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005559e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5559e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: FUN_00555a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00555a20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00555a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00555a30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00555a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((param_1 != 0) && (REFG(char, 0x1379710) == '\0')) {
    REFG(char, 0x1379710) = '\x01';
  }
  return;
}

/* ref: FUN_00555a50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00555a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00555a60 */
GEN_OWN GEN_NOFRAME unsigned int F_00555a60(void)
{
  GEN_ENTER(0x555a60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00555a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555a70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x555a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: Global::SetName */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c49908((int)this + 0x14,0x50,param_1);
  return uVar1;
}

/* ref: FUN_00555ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x555ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 100))) = param_2;
  return param_2;
}

/* ref: FUN_00555ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555ad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x555ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x68))) = param_2;
  return param_2;
}

/* ref: Global::ClearNodes */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00555b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x555b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x2001c)));
  while (iVar1 != 0) {
    F_00a4b9d0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x2001c))));
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2001c))) + 0x1a0)));
    *((int *)GEN_TOP(((int)this + 0x2001c))) = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20018))) = 0;
  return;
}

/* ref: FUN_00555b60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00555b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x555b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 0;
}

/* ref: FUN_00555b80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00555b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x20044))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20048))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x2004c))) = param_1[2];
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    F_00b1af80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  }
  F_00555b10(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
  return;
}

/* ref: Global::RecordClosestHit */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00555bc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x555bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  float fVar1;
  undefined4 * puVar2;
  
  if (*((int *)GEN_TOP((param_2 + 0x4c))) != 0) {
    fVar1 = *((float *)GEN_TOP((param_2 + 0x40)));
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x18)));
    if ((float10)fVar1 < ((float10)GEN_TOD(gen_bits2f(puVar2[0x10])))) {
      puVar2[3] = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
      puVar2[4] = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
      puVar2[5] = *((undefined4 *)GEN_TOP((param_2 + 0x14)));
      puVar2[6] = *((undefined4 *)GEN_TOP((param_2 + 0x18)));
      puVar2[7] = *((undefined4 *)GEN_TOP((param_2 + 0x1c)));
      puVar2[8] = *((undefined4 *)GEN_TOP((param_2 + 0x20)));
      puVar2[9] = *((undefined4 *)GEN_TOP((param_2 + 0x24)));
      puVar2[10] = *((undefined4 *)GEN_TOP((param_2 + 0x28)));
      puVar2[0xb] = *((undefined4 *)GEN_TOP((param_2 + 0x2c)));
      *puVar2 = *((undefined4 *)GEN_TOP(param_2));
      puVar2[1] = *((undefined4 *)GEN_TOP((param_2 + 4)));
      puVar2[2] = *((undefined4 *)GEN_TOP((param_2 + 8)));
      puVar2[0x10] = (undefined4)gen_fl2bits(fVar1);
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 0x44))) = *((undefined4 *)GEN_TOP((param_2 + 0x74)));
      **((undefined1 * PTR32 *)GEN_TOP((param_1 + 0x14))) = 1;
    }
  }
  return;
}

/* ref: Global::Invoke_00555c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x555c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00555ca0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00555ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00555cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555cf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x555cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00555d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555d00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x555d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00555d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00555d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555d20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x555d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00555d30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00555d30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x555d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx == param_2;
}

/* ref: Global::InvokeDelegateStub */
GEN_OWN GEN_FRAME uint F_00555d50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x555d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00555d70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00555d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00556300((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00555d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00555d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00556300((int)this - 8 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00555d90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00555d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00556300((int)this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00555da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  F_00555960(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00555e10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00555e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x2001c)));
  if (iVar1 != 0) {
    do {
      (*((code *)GEN_TOP(*param_1)))(param_1[1],param_1 + 2,iVar1,0);
      iVar1 = *((int *)GEN_TOP((iVar1 + 0x1a0)));
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00555e50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00555e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x555e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  
  if (*((int *)GEN_TOP((param_1 + 0x4c))) != 0) {
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
    (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP((param_1 + 0x74)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: FUN_00555ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *(undefined4 *)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    *((int *)GEN_TOP((uVar1 + 8))) = param_1;
  }
  *(int *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00555f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555f00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x555f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00555f10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00555f10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x555f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00555f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00555f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x555f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: FUN_00555f80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00555f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x555f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  F_00a1ac10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x20))));
  F_00a4b900((int)this + 0x24 GEN_EDX_ARG);
  uVar1 = F_005095f0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  return uVar1;
}

/* ref: FUN_00555fe0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00555fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x555fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar2 != 0) {
    while ((*((int *)GEN_TOP((iVar2 + 0x10))) != param_1 ||
           (piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 100))), piVar1 == ((int *)GEN_TOP(0x0))))) {
      iVar2 = *((int *)GEN_TOP((iVar2 + 0xc)));
      if (iVar2 == 0) {
        return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
      }
    }
    *((undefined4 *)GEN_TOP((iVar2 + 100))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,iVar2);
  }
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_00556050 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00556050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x556050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x20018))) == 0) {
    uVar2 = F_00a4b910(this GEN_EDX_FWD,0x1b0);
    *((uint *)GEN_TOP(((int)this + 0x20018))) = uVar2;
    *((undefined4 *)GEN_TOP((uVar2 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)this + 0x2001c)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20018)));
  if (iVar1 == 0) {
    uVar2 = F_00a4b910(this GEN_EDX_ARG,0x1b0);
    *((uint *)GEN_TOP(((int)this + 0x20018))) = uVar2;
    *((undefined4 *)GEN_TOP((uVar2 + 0x1a0))) = *((undefined4 *)GEN_TOP(((int)this + 0x2001c)));
  }
  F_00554700(((undefined *)GEN_TOP((iVar1 + 0x80))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20018))) + 0x70))),
               *((int *)GEN_TOP(((int)this + 0x20018))));
  *((undefined4 *)GEN_TOP(((int)this + 0x2001c))) = *((undefined4 *)GEN_TOP(((int)this + 0x20018)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20018))) = 0;
  return;
}

/* ref: FUN_005560f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005560f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5560f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_3;
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this;
  *((gen_code32 *)GEN_TOP(((int)this + 8))) = ((code *)REFP(0x555bc0));
  return (uint)this;
}

/* ref: FUN_00556120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x556120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x14))) = (int)this + 0x20;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this;
  *((gen_code32 *)GEN_TOP(((int)this + 8))) = ((code *)REFP(0x555e50));
  return (uint)this;
}

/* ref: FUN_00556150 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00556150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x556150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  int iVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    F_00b1af80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20040)));
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x4)) = &(*(gen_code32 *)(gen_frame + 0x0));
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x555bc0));
  for (; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x1a0)))) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x0)))((*(gen_code32 * PTR32 *)(gen_frame + 0x4)),&(*(gen_code32 *)(gen_frame + 0x8)),iVar1,0);
  }
  F_00555b10(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_005561e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005561e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5561e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  int iVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    F_00b1af80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20040)));
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  (*(undefined4 *)(gen_frame + 0x18)) = param_3;
  (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x4)) = &(*(gen_code32 *)(gen_frame + 0x0));
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x555bc0));
  for (; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x1a0)))) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x0)))((*(gen_code32 * PTR32 *)(gen_frame + 0x4)),&(*(gen_code32 *)(gen_frame + 0x8)),iVar1,0);
  }
  F_00555b10(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00556270 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00556270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x556270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  int iVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\0') {
    F_00b1af80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20040)));
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = ((undefined1 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  (*(gen_code32 *)(gen_frame + 0x0)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x4)) = &(*(gen_code32 *)(gen_frame + 0x0));
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0x555e50));
  for (; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x1a0)))) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x0)))((*(gen_code32 * PTR32 *)(gen_frame + 0x4)),&(*(gen_code32 *)(gen_frame + 0x8)),iVar1,0);
  }
  F_00555b10(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00556300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556300(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  param_1[1] = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  param_1[2] = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  param_1[3] = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  F_00a1ac10(((undefined *)GEN_TOP(param_1[7])) GEN_EDX_FWD,param_1[8]);
  F_00a4b900(param_1 + 9 GEN_EDX_ARG);
  F_005095f0((undefined *)(param_1 + 3) GEN_EDX_ARG);
  param_1[2] = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  param_1[1] = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00556370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x556370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  return (uint)this;
}

/* ref: FUN_005563c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005563c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5563c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 != 0) {
    if (*(uint *)this == param_1) {
      *(undefined4 *)this = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    }
    if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    }
    if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    }
    *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  return param_1;
}

/* ref: FUN_00556410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556410(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x556410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  for (iVar1 = *in_ecx; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0xc)))) {
    if (iVar1 == param_3) {
      *param_2 = iVar1;
      return (uint)param_2;
    }
    if (iVar1 == 0) break;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: LinkList_VBGCollisionResourceHandle_Environment_A0x3663ed73_Collision_Component::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556450(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109cdc8));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 0xc))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 8))) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Framework::Task::Task_005564a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005564a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(char * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5564a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *(undefined4 *)(this + 0xc) = param_1;
  *(undefined4 *)(this + 0x10) = param_2;
  *(gen_code32 *)(this + 8) = ((code *)REFP(0x553a90));
  *(undefined4 *)(this + 0x14) = 0;
  *(char * PTR32 *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if ((param_3 != ((char *)GEN_TOP(0x0))) && (*param_3 != '\0')) {
    *(char * PTR32 *)(this + 0x24) = param_3;
    return (uint)this;
  }
  *(undefined * PTR32 *)(this + 0x24) = this;
  return (uint)this;
}

/* ref: FUN_005564f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005564f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(char * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5564f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((gen_code32 *)GEN_TOP(((int)this + 8))) = ((code *)REFP(0x553a80));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((char * PTR32 *)GEN_TOP(((int)this + 0x18))) = param_3;
  if ((param_3 != ((char *)GEN_TOP(0x0))) && (*param_3 != '\0')) {
    *((char * PTR32 *)GEN_TOP(((int)this + 0x24))) = param_3;
    return (uint)param_3;
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = this;
  return (uint)param_3;
}

/* ref: FUN_00556570 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00556570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x14;
}

/* ref: FUN_00556580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00556580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x556580u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x5c))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00556590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00556590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x68)));
}

/* ref: FUN_005565a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005565a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5565a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00556830((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_005565b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005565b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5565b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0x88)));
  iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
  return iVar1 == 2;
}

/* ref: FUN_005565d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005565d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5565d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0x1c)));
}

/* ref: FUN_005565e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005565e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5565e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0x8c)));
  iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), 0);
  return 7 < iVar1;
}

/* ref: FUN_00556640 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00556640(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x556640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_FRAME_DECL_GS(0x13c, 4, 4);
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  char * pcVar6;
  char * pcVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x134)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x138));
  (*(char * PTR32 *)(gen_frame + 0x28)) = param_2;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = param_3;
  puVar2 = ((undefined4 *)GEN_TOP(F_00406b90(0x6c,0,0)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
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
  puVar2[3] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  if (*((int *)GEN_TOP((param_1 + 0xc))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 8))) = puVar2;
  }
  *((int *)GEN_TOP((param_1 + 0x10))) = *((int *)GEN_TOP((param_1 + 0x10))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xc))) = puVar2;
  pcVar6 = ((char *)(gen_frame + 0x30));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x28));
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\\') {
      cVar1 = '/';
    }
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00c49908(puVar2 + 5,0x50,(*(char * PTR32 *)(gen_frame + 0x28)));
  puVar2[0x19] = (*(int * PTR32 *)(gen_frame + 0x2c));
  puVar2[0x1a] = param_4;
  if (param_1 == 4) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + 8;
  }
  ((int *)(gen_frame + 0x0))[0] = iVar3;
  ((int *)(gen_frame + 0x0))[2] = param_5;
  (*(undefined4 *)(gen_frame + 0xc)) = param_6;
  ((int *)(gen_frame + 0x0))[1] = 0;
  (*(int *)(gen_frame + 0x10)) = (-(uint)(param_7 != '\0') & 0xfffffffd) + 5;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1d)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar4 = F_00513dc0(((char *)(gen_frame + 0x30)),((int *)(gen_frame + 0x0)),0,0);
  puVar2[4] = uVar4;
  piVar5 = ((int *)GEN_TOP((uVar4 + 0x88)));
  iVar3 = _InterlockedExchangeAdd((volatile gen_long *)(piVar5), 0);
  if ((iVar3 == 2) && ((*(int * PTR32 *)(gen_frame + 0x2c)) != ((int *)GEN_TOP(0x0)))) {
    puVar2[0x19] = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x2c)) + 4))))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,puVar2);
  }
  return (uint)puVar2;
}

/* ref: FUN_005567b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005567b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5567b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    while (puVar1 != param_1) {
      if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
        return;
      }
      puVar1 = ((undefined4 *)GEN_TOP(puVar1[3]));
      if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
        return;
      }
    }
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      F_0050c620(puVar1[4],0,0);
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) == puVar1) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = puVar1[3];
      }
      if (puVar1[2] != 0) {
        *((undefined4 *)GEN_TOP((puVar1[2] + 0xc))) = puVar1[3];
      }
      if (puVar1[3] != 0) {
        *((undefined4 *)GEN_TOP((puVar1[3] + 8))) = puVar1[2];
      }
      puVar1[2] = 0;
      puVar1[3] = 0;
      *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00556830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556830(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109cddc));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x109cdd4));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x109cdc8));
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 0xc))) = param_1[3];
  }
  if (param_1[3] != 0) {
    *((undefined4 *)GEN_TOP((param_1[3] + 8))) = param_1[2];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109bed4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00556890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x556890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  return (uint)this;
}

/* ref: FUN_005568b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005568b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5568b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 6;
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00556970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556970(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005569d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5569d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  char cVar1;
  
  cVar1 = *((char *)GEN_TOP((param_1 + 0x1c)));
  *((undefined1 *)GEN_TOP(((int)cVar1 + 0xcU + param_1))) = param_2;
  *((char *)GEN_TOP((param_1 + 0x1c))) = *((char *)GEN_TOP((param_1 + 0x1c))) + '\x01';
  *((undefined1 *)GEN_TOP((param_1 + 0x1d))) = 2;
  return (int)cVar1;
}

/* ref: FUN_005569f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005569f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5569f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)*((char *)GEN_TOP((param_1 + 0x1c)));
  uVar1 = 0;
  if (0 < iVar2) {
    while (*((char *)GEN_TOP((param_1 + 0xc + uVar1))) != param_2) {
      uVar1 = uVar1 + 1;
      if ((int)*((char *)GEN_TOP((param_1 + 0x1c))) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != iVar2 - 1U) {
      uVar1 = F_00c46e20(uVar1 + 0xc + param_1,uVar1 + 0xd + param_1,(iVar2 - uVar1) - 1);
    }
    *((char *)GEN_TOP((param_1 + 0x1c))) = *((char *)GEN_TOP((param_1 + 0x1c))) - 1;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkArrayData::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_00556a40(void)
{
  GEN_ENTER(0x556a40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Component::GUI2::AtkArrayData::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00556a80 */
GEN_OWN GEN_FRAME float10 F_00556a80(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x556a80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF(ABS((float10)param_1)));
}

/* ref: FUN_00556a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556a90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00556ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x20))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return uVar1;
}

/* ref: FUN_00556af0 */
GEN_OWN GEN_FRAME float10 F_00556af0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x556af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  double dVar2;
  
  dVar2 = (GEN_X87MATH(((double)param_1),0xe));
  return (float10)(float)dVar2;
}

/* ref: FUN_00556b10 */
GEN_OWN GEN_FRAME float10 F_00556b10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x556b10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF(ABS((float10)param_1)));
}

/* ref: FUN_00556b20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00556b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x20))));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  uVar4 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*((uint *)GEN_TOP(((int)this + 4))) * 4;
  pvVar3 = ((undefined *)GEN_TOP(F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar4)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*((int *)GEN_TOP(((int)this + 4))) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::NumberArrayData::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556b80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  if (param_1[8] != 0) {
    F_00406b30(param_1[8]);
    param_1[8] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00556bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556bc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00556bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    uVar3 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x20))));
    uVar1 = (uint)uVar3;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
      iVar2 = 0;
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2 * 4))) != 0) {
          F_00406b30(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2 * 4))));
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2 * 4))) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))));
    }
    uVar1 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
      uVar3 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x24))));
      uVar1 = (uint)uVar3;
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return uVar1;
}

/* ref: FUN_00556c70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00556c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x20))));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*((uint *)GEN_TOP(((int)this + 4))) * 4;
  pvVar3 = ((undefined *)GEN_TOP(F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) = pvVar3;
  F_00c48350(pvVar3,0,*((int *)GEN_TOP(((int)this + 4))) * 4);
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    iVar4 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar4 * 4))) != 0) {
          F_00406b30(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar4 * 4))));
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar4 * 4))) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *((int *)GEN_TOP(((int)this + 4))));
    }
    if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
      F_00406b30(*((int *)GEN_TOP(((int)this + 0x24))));
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    }
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*((uint *)GEN_TOP(((int)this + 4))) * 4;
  pvVar3 = ((undefined *)GEN_TOP(F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*((int *)GEN_TOP(((int)this + 4))) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::StringArrayData::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00556d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556da0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00556bf0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00556dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556dd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00556e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0940));
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    iVar1 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar1 * 4))) != 0) {
          F_00406ad0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar1 * 4))));
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar1 * 4))) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *((int *)GEN_TOP(((int)this + 4))));
    }
    if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
      F_00406b30(*((int *)GEN_TOP(((int)this + 0x20))));
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return;
}

/* ref: FUN_00556e70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00556e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    iVar4 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar4 * 4))) != 0) {
          F_00406ad0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar4 * 4))));
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar4 * 4))) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *((int *)GEN_TOP(((int)this + 4))));
    }
    if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
      F_00406b30(*((int *)GEN_TOP(((int)this + 0x20))));
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    }
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*((uint *)GEN_TOP(((int)this + 4))) * 4;
  pvVar3 = ((undefined *)GEN_TOP(F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*((int *)GEN_TOP(((int)this + 4))) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::ExtendArrayData::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00556f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x556f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556f40(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x556f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00556e00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00556fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00556fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x556fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  *(short *)this = (short)param_1;
  *((short *)GEN_TOP(((int)this + 2))) = (short)param_2;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = (undefined2)param_3;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *((uint *)GEN_TOP(((int)this + 0x20))) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *((uint *)GEN_TOP(((int)this + 0x24))) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 4),0,uVar1,uVar3);
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar1;
  iVar2 = 0;
  if (0 < *(short *)this) {
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)this);
  }
  iVar2 = 0;
  if (0 < *((short *)GEN_TOP(((int)this + 2)))) {
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((short *)GEN_TOP(((int)this + 2))));
  }
  iVar2 = 0;
  if (0 < *((short *)GEN_TOP(((int)this + 4)))) {
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((short *)GEN_TOP(((int)this + 4))));
  }
  return (uint)this;
}

/* ref: FUN_005571e0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005571e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5571e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  longlong lVar1;
  uint uVar2;
  undefined * _Dst;
  undefined4 uVar3;
  
  if (*((int *)GEN_TOP((param_2 + 0x20))) != 0) {
    F_00406b30(*((int *)GEN_TOP((param_2 + 0x20))));
    *((undefined4 *)GEN_TOP((param_2 + 0x20))) = 0;
  }
  uVar3 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*((uint *)GEN_TOP((param_2 + 4))) * 4;
  _Dst = ((undefined *)GEN_TOP(F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                              uVar3)));
  *((undefined * PTR32 *)GEN_TOP((param_2 + 0x20))) = _Dst;
  F_00c48350(_Dst,0,*((int *)GEN_TOP((param_2 + 4))) * 4);
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 4))) = param_2;
  return (ushort)param_1;
}

/* ref: FUN_00557250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x557250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  F_00556c70(param_2 GEN_EDX_FWD);
  *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + param_1 * 4))) = param_2;
  return param_1;
}

/* ref: FUN_00557270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x557270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  F_00556e70(param_2 GEN_EDX_FWD);
  *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + param_1 * 4))) = param_2;
  return param_1;
}

/* ref: FUN_00557290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x557290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_005572b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005572b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5572b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + param_2 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_005572d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005572d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5572d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x24))) + param_2 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x24))) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_00557380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557380(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x557380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + param_3 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + param_3 * 4))) != 0) {
    piVar1 = ((int *)GEN_TOP(*piVar1));
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = param_2;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x1d))) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_005573b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005573b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5573b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + param_3 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + param_3 * 4))) != 0) {
    piVar1 = ((int *)GEN_TOP(*piVar1));
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = param_2;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x1d))) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_005573e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005573e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5573e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + param_3 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + param_3 * 4))) != 0) {
    piVar1 = ((int *)GEN_TOP(*piVar1));
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = param_2;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *((undefined1 *)GEN_TOP(((int)piVar1 + 0x1d))) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00557410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x557410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_2 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_2 * 4))) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(F_005569f0(*puVar1 GEN_EDX_FWD,(undefined1)param_1)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00557440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557440(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x557440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + param_3 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + param_3 * 4))) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(F_005569f0(*puVar2 GEN_EDX_FWD,(undefined1)param_2)));
    if (param_4 != '\0') {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + param_3 * 4)));
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00557480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557480(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x557480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + param_3 * 4)));
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + param_3 * 4))) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(F_005569f0(*puVar2 GEN_EDX_FWD,(undefined1)param_2)));
    if (param_4 != '\0') {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + param_3 * 4)));
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_005574c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005574c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5574c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)*((short *)GEN_TOP(((int)this + 2)));
  while (iVar4 = iVar4 - 1, -1 < iVar4) {
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + iVar4 * 4)));
    if (iVar3 != 0) {
      bVar2 = *((byte *)GEN_TOP((iVar3 + 0x1d)));
      *((undefined1 *)GEN_TOP((iVar3 + 0x1d))) = 0;
      if ((bVar2 != 0) && (iVar5 = *((char *)GEN_TOP((iVar3 + 0x1c))) - 1, -1 < iVar5)) {
        do {
          pbVar1 = ((byte *)GEN_TOP(((uint)*((byte *)GEN_TOP((iVar3 + 0xc + iVar5))) + param_1)));
          *pbVar1 = *pbVar1 | ((bVar2 & 2) != 0) + 1U;
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
    }
  }
  iVar4 = (int)*(short *)this;
  while (iVar4 = iVar4 - 1, -1 < iVar4) {
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4 * 4)));
    if (iVar3 != 0) {
      bVar2 = *((byte *)GEN_TOP((iVar3 + 0x1d)));
      *((undefined1 *)GEN_TOP((iVar3 + 0x1d))) = 0;
      if ((bVar2 != 0) && (iVar5 = *((char *)GEN_TOP((iVar3 + 0x1c))) - 1, -1 < iVar5)) {
        do {
          pbVar1 = ((byte *)GEN_TOP(((uint)*((byte *)GEN_TOP((iVar3 + 0xc + iVar5))) + param_1)));
          *pbVar1 = *pbVar1 | ((bVar2 & 2) != 0) + 1U;
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
    }
  }
  return 0;
}

/* ref: FUN_00557570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x557570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = ((int *)GEN_TOP(*piVar1)), piVar1 != ((int *)GEN_TOP(0x0)))) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_005575a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005575a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5575a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x18))) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = ((int *)GEN_TOP(*piVar1)), piVar1 != ((int *)GEN_TOP(0x0)))) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_005575d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005575d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5575d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *((undefined4 *)GEN_TOP((param_1 + 0x24c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = *((undefined4 *)GEN_TOP((param_1 + 0x25c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = *((undefined4 *)GEN_TOP((param_1 + 0x26c)));
  return 1;
}

/* ref: FUN_00557620 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00557620(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x557620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if (((char)in_ecx[1] == '\0') && (*in_ecx == 2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00557640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x557640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = 0;
  return (uint)this;
}

/* ref: FUN_00557670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x557670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  *((uint *)GEN_TOP((in_ecx + 0x14))) = *((uint *)GEN_TOP((in_ecx + 0x14))) | 0x10000;
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x14)));
  if (param_2 != '\0') {
    uVar1 = uVar1 | 0x200000;
    *((uint *)GEN_TOP((in_ecx + 0x14))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_005576b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005576b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5576b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_ecx;
  if (*in_ecx == 0) {
    *in_ecx = param_2;
    return param_2;
  }
  do {
    uVar1 = *((uint *)GEN_TOP((uVar2 + 0x10)));
    if (uVar1 == 0) {
      *((uint *)GEN_TOP((uVar2 + 0x10))) = param_2;
      return uVar2;
    }
    uVar2 = uVar1;
  } while (uVar1 != 0);
  return 0;
}

/* ref: FUN_005576e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005576e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5576e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  do {
    uVar1 = uVar2;
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = *((uint *)GEN_TOP((uVar1 + 0x10)));
  } while (*((uint *)GEN_TOP((uVar1 + 0x10))) != param_1);
  return uVar1;
}

/* ref: FUN_00557710 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00557710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x557710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *(int *)this;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*((byte *)GEN_TOP((iVar1 + 0x14))) == (ushort)param_1) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return 1;
}

/* ref: FUN_00557740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x557740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *(int *)this;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*((byte *)GEN_TOP((iVar1 + 0x14))) == (ushort)param_1) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 0x10)));
  }
  return *((uint *)GEN_TOP((iVar1 + 0xc)));
}

/* ref: FUN_00557790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557790(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x557790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined1 uVar1;
  undefined * pvVar2;
  
  if (param_2 != '\0') {
    uVar1 = *((undefined1 *)GEN_TOP(((int)param_1 + 0x70)));
    pvVar2 = F_00c48350(param_1,0,0x74);
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x70))) = uVar1;
    return (uint)pvVar2;
  }
  pvVar2 = F_00c48350(param_1,0,0x74);
  return (uint)pvVar2;
}

/* ref: FUN_005577f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005577f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5577f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  return (uint)this;
}

/* ref: FUN_00557840 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00557840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x557840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a0a50);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  fVar1 = ((float10)GEN_TOD(fcos(fVar1)));
  *(float *)&REFG(undefined, 0x1379968) = (float)fVar1;
  return 0;
}

/* ref: FUN_00557890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557890(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x557890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x150 + *in_ecx;
}

/* ref: FUN_005578b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005578b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5578b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (*((ushort *)GEN_TOP((in_ecx + 8))) <= (ushort)param_2) {
    return 0;
  }
  return (uint)(ushort)param_2 * 0x74 + *((int *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00557970 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00557970(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x557970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  if ((((0x1f < param_1) && (param_1 != 0x7f)) && ((param_1 < 0x20 || (0x7e < param_1)))) &&
     ((param_1 < 0xa1 || (0xdf < param_1)))) {
    if (((param_1 < 0x81) || (0x9f < param_1)) && (0xf < (byte)(param_1 + 0x20))) {
      return 0;
    }
    return 2;
  }
  return 1;
}

/* ref: FUN_005579c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005579c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5579c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 0x60)));
  if ((((*((byte *)GEN_TOP((param_2 + 0x6e))) & 4) != 0) && (*((byte *)GEN_TOP((param_2 + 0x6f))) <= param_1)) &&
     (param_1 < 0x100)) {
    return (param_1 - *((byte *)GEN_TOP((param_2 + 0x6f)))) * 0x10 + iVar1;
  }
  iVar4 = *((int *)GEN_TOP((param_2 + 0x44)));
  iVar5 = 0;
  if (iVar4 < 0) {
    return 0;
  }
  do {
    iVar3 = (iVar4 + iVar5) / 2;
    uVar2 = *((uint *)GEN_TOP((iVar1 + iVar3 * 0x10)));
    if (param_1 < uVar2) {
      iVar4 = iVar3 - 1;
    }
    else {
      if (param_1 <= uVar2) {
        return iVar3 * 0x10 + iVar1;
      }
      iVar5 = iVar3 + 1;
    }
  } while (iVar5 <= iVar4);
  return 0;
}

/* ref: FUN_00557a50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00557a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x557a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP((param_2 + 0x60)));
  uVar2 = 0;
  if (*((uint *)GEN_TOP((param_2 + 0x44))) != 0) {
    do {
      if (*((short *)GEN_TOP((uVar1 + 4))) == (short)param_1) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 0x10;
    } while (uVar2 < *((uint *)GEN_TOP((param_2 + 0x44))));
  }
  return 0;
}

/* ref: FUN_00557a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x557a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  short * psVar2;
  short * psVar3;
  short * psVar4;
  uint uVar5;
  
  psVar3 = ((short *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP(((int)this + 0x60))) == 0) {
    return (uint)psVar3;
  }
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0xc)));
  uVar5 = 0;
  psVar4 = psVar3;
  psVar2 = *((short * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0x10)));
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
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00557ac0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x557ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  int local_8;
  
  param_3 = *((int *)GEN_TOP((param_3 + 0x48)));
  local_8 = 0;
  if (-1 < param_3) {
    do {
      iVar3 = (param_3 + local_8) / 2;
      puVar2 = ((uint *)GEN_TOP((iVar3 * 0x10 + param_4)));
      uVar1 = *puVar2;
      if (uVar1 < param_1) {
LAB_00557b30: ;
        local_8 = iVar3 + 1;
      }
      else {
        if ((uVar1 <= param_1) && (puVar2[1] <= param_2)) {
          if (param_1 < uVar1) {
            return (uint)puVar2;
          }
          if ((param_1 <= uVar1) && (param_2 <= puVar2[1])) {
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
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00557b50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x557b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
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
  if ((param_1 != 0) && (param_4 != 0)) {
    uVar3 = *((uint *)GEN_TOP((param_3 + 0x48)));
    uVar5 = param_4;
    if (uVar3 != 0) {
      do {
        uVar6 = (uint)*((ushort *)GEN_TOP((uVar5 + 8)));
        if (uVar6 == param_1) {
          uVar2 = *((ushort *)GEN_TOP((uVar5 + 10)));
          for (; ((uVar4 = uVar5, uVar2 != param_2 && (uVar4 = local_8, uVar7 < uVar3)) &&
                 (puVar1 = ((ushort *)GEN_TOP((uVar5 + 8))), uVar6 == *puVar1)); uVar5 = uVar5 + 0x10) {
            uVar2 = *((ushort *)GEN_TOP((uVar5 + 0x1a)));
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00557be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x557be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = F_005579c0(0xe38093,param_1);
  if (uVar1 == 0) {
    if (((*((byte *)GEN_TOP((param_1 + 0x6e))) & 4) == 0) || (0x2d < *((byte *)GEN_TOP((param_1 + 0x6f))))) {
      iVar3 = *((int *)GEN_TOP((param_1 + 0x44)));
      iVar4 = 0;
      if (-1 < iVar3) {
        do {
          iVar2 = (iVar3 + iVar4) / 2;
          uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x60))) + iVar2 * 0x10)));
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
      iVar2 = 0x2d - (uint)*((byte *)GEN_TOP((param_1 + 0x6f)));
LAB_00557c60: ;
      uVar1 = iVar2 * 0x10 + *((int *)GEN_TOP((param_1 + 0x60)));
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = F_005579c0(0xe39080,param_1);
  }
  return uVar1;
}

/* ref: FUN_00557c70 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00557c70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x557c70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  float10 fVar4;
  float local_8;
  
  uVar3 = 0;
  local_8 = 0.0;
  uVar2 = 0;
  while( true ) {
    fVar1 = *((float *)GEN_TOP((param_1 + (uint)uVar2 * 0xc + 4)));
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
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00557cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x557cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  F_00c48350(((undefined4 *)GEN_TOP(((int)this + 100))),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *((uint *)GEN_TOP(((int)this + 0x9c))) = *((uint *)GEN_TOP(((int)this + 0x9c))) | 0x10000;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)this + 0xa6))) = 0xff;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = uVar1;
  F_00c48350(((undefined4 *)GEN_TOP(((int)this + 0xa8))),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) | 0x10000;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)this + 0xea))) = 0xff;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x30)));
  iVar4 = 4;
  do {
    puVar3[-0xc] = 0;
    puVar3[-0xb] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  *((undefined1 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  return 0;
}

/* ref: FUN_00557e00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00557e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x557e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  F_00c48350(((undefined4 *)GEN_TOP(((int)this + 100))),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *((uint *)GEN_TOP(((int)this + 0x9c))) = *((uint *)GEN_TOP(((int)this + 0x9c))) | 0x10000;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)this + 0xa6))) = 0xff;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = uVar1;
  F_00c48350(((undefined4 *)GEN_TOP(((int)this + 0xa8))),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *((uint *)GEN_TOP(((int)this + 0xe0))) = *((uint *)GEN_TOP(((int)this + 0xe0))) | 0x10000;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)this + 0xea))) = 0xff;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = uVar1;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 8)));
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
  *((undefined1 *)GEN_TOP(((int)this + 0x148))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  return 0;
}

/* ref: FUN_00557f00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00557f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x557f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP((in_ecx + 100)));
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: FUN_00557f70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00557f70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x557f70u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  int * piVar1;
  int iVar2;
  short sVar3;
  
  if (param_3 != 0) {
    piVar1 = in_ecx + (uint)(ushort)param_2 * 3;
    *piVar1 = param_3;
    *((undefined1 *)GEN_TOP((param_3 + 0x70))) = param_8;
    piVar1[1] = (int)gen_fl2bits(param_4);
    piVar1[2] = (int)gen_fl2bits(param_7);
    in_ecx[(uint)(ushort)param_2 * 3 + 0xc] = param_5;
    if (param_5 != 0) {
      *((undefined1 *)GEN_TOP((param_5 + 0x70))) = param_8;
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558000(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x558000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  float fVar1;
  ushort uVar2;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0x74)));
  if ((((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x144))) - (float10)fVar1)))))) <= (float10)REFG(float, 0x10905c4)) && (param_2 != '\0')) && (*((uint *)GEN_TOP((param_1 + 0x140))) != 0)) {
    return *((uint *)GEN_TOP((param_1 + 0x140)));
  }
  uVar2 = F_00557c70(param_1 GEN_EDX_FWD,fVar1);
  *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + 0x140))) = *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + (uint)uVar2 * 0xc)));
  if ((*((byte *)GEN_TOP((((int)(uint)(param_1)) + 0x148))) & 8) != 0) {
    *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + 0x140))) = *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + ((uint)uVar2 * 3 + 0xc) * 4)));
  }
  *((float *)GEN_TOP((((int)(uint)(param_1)) + 0x144))) = fVar1;
  return *((uint *)GEN_TOP((((int)(uint)(param_1)) + 0x140)));
}

/* ref: FUN_005580a0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005580a0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5580a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  ushort uVar1;
  
  uVar1 = F_00557c70(param_1 GEN_EDX_FWD,param_2);
  return (float10)*((float *)GEN_TOP((((int)(uint)(param_1)) + 8 + (uint)uVar1 * 0xc)));
}

/* ref: FUN_005580c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005580c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5580c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x60))) = param_2;
  }
  return param_2;
}

/* ref: FUN_005580e0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005580e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5580e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  float10 fVar5;
  
  bVar2 = *((byte *)GEN_TOP((param_1 + 0x148)));
  if ((bVar2 & 2) != 0) {
    fVar1 = *((float *)GEN_TOP((param_1 + 0x74)));
    if ((!((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x144))) - (float10)fVar1)))))) <= (float10)REFG(float, 0x10905c4))) || (iVar4 = *((int *)GEN_TOP((param_1 + 0x140))), iVar4 == 0)) {
      uVar3 = F_00557c70(param_1 GEN_EDX_FWD,fVar1);
      *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + 0x140))) = *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + (uint)uVar3 * 0xc)));
      if ((bVar2 & 8) != 0) {
        *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + 0x140))) = *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + ((uint)uVar3 * 3 + 0xc) * 4)));
      }
      *((float *)GEN_TOP((((int)(uint)(param_1)) + 0x144))) = fVar1;
      iVar4 = *((int *)GEN_TOP((((int)(uint)(param_1)) + 0x140)));
    }
    fVar5 = (float10)param_3;
    if (param_3 < 0) {
      fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    return GEN_X87((float10)((float)GEN_TOF((fVar5 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 / (float10)*((float *)GEN_TOP((iVar4 + 0x54)))))) * (float10)*((int *)GEN_TOP((iVar4 + 0x58))))))))));
  }
  return (float10)0;
}

/* ref: FUN_005581b0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005581b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5581b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int extraout_ECX;
  float10 fVar5;
  
  bVar2 = *((byte *)GEN_TOP((param_1 + 0x148)));
  if ((bVar2 & 2) != 0) {
    fVar1 = *((float *)GEN_TOP((param_1 + 0x74)));
    if ((!((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x144))) - (float10)fVar1)))))) <= (float10)REFG(float, 0x10905c4))) || (iVar4 = *((int *)GEN_TOP((param_1 + 0x140))), iVar4 == 0)) {
      uVar3 = F_00557c70(param_1 GEN_EDX_FWD,fVar1);
      extraout_ECX = ((int)(uint)(param_1));
      *((undefined4 *)GEN_TOP((extraout_ECX + 0x140))) = *((undefined4 *)GEN_TOP((extraout_ECX + (uint)uVar3 * 0xc)));
      if ((bVar2 & 8) != 0) {
        *((undefined4 *)GEN_TOP((extraout_ECX + 0x140))) = *((undefined4 *)GEN_TOP((extraout_ECX + ((uint)uVar3 * 3 + 0xc) * 4)));
      }
      iVar4 = *((int *)GEN_TOP((extraout_ECX + 0x140)));
      *((float *)GEN_TOP((extraout_ECX + 0x144))) = fVar1;
      param_1 = extraout_ECX;
    }
    fVar5 = (float10)param_2;
    param_2 = (float)*((byte *)GEN_TOP((param_1 + 0xa5)));
    if ((char)param_3 != '\0') {
      param_2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x7c))) * (float10)*((byte *)GEN_TOP((param_1 + 0xa5))))));
    }
    return GEN_X87((float10)((float)GEN_TOF(((float10)param_2 - (float10)*((int *)GEN_TOP((iVar4 + 0x58))) * (float10)((float)GEN_TOF((fVar5 / (float10)*((float *)GEN_TOP((iVar4 + 0x54))))))))));
  }
  return (float10)0;
}

/* ref: FUN_00558290 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00558290(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x558290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x0)) = param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_0042e290(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)param_1;
}

/* ref: FUN_005582c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005582c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5582c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
  if (param_2 < 0x1e) {
    uVar1 = (uint)param_2 * 8;
    *((undefined4 *)GEN_TOP((uVar1 + *((int *)GEN_TOP((param_1 + 0x28)))))) = param_3;
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 4 + uVar1))) = param_4;
  }
  return uVar1;
}

/* ref: FUN_005582f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005582f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5582f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  uVar2 = in_EAX & 0xffffff00;
  do {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + (uVar2 & 0xff) * 8))) == param_1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4 + (uVar2 & 0xff) * 8))) = param_2;
      return uVar2 & 0xff;
    }
    bVar1 = (char)uVar2 + 1;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  } while (bVar1 < 0x1e);
  return uVar2;
}

/* ref: FUN_00558330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x558330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  bVar1 = 0;
  do {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + (uint)bVar1 * 8))) == param_1) {
      return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4 + (uint)bVar1 * 8)));
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00558370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x558370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_0042e430(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_00a21e20(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 0x1c))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_005583a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005583a0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5583a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
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
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00558440(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x558440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = 0;
  if (((param_1 - 0x30U < 10) || (param_1 == 0x25)) || (param_1 - 0x28U < 8)) {
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00558470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005584b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5584b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  
  pcVar1 = param_2;
  if (*param_2 != '\x02') {
    if (*((uint *)GEN_TOP((in_ecx + 0xb4))) <= *((uint *)GEN_TOP((in_ecx + 0xbc)))) {
      *((int *)GEN_TOP((in_ecx + 0xa8))) = *((int *)GEN_TOP((in_ecx + 0xa8))) + 1;
    }
    pcVar1 = ((char *)GEN_TOP((*((uint *)GEN_TOP((in_ecx + 0xbc))) + 1)));
    *((char * PTR32 *)GEN_TOP((in_ecx + 0xbc))) = pcVar1;
  }
  return (uint)pcVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005584e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5584e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(this + 0x15c);
  *(float *)(this + 0x144) = fVar1;
  if (this[0x164] == (undefined1)0x0) {
    if ((float10)*(float *)(this + 0x140) < (float10)*(float *)(this + 0x158)) {
      *(float *)(this + 0x140) = *(float *)(this + 0x158);
    }
    fVar2 = F_005580e0(*(undefined4 *)(this + 8) GEN_EDX_FWD,*(float *)(this + 0x28),1);
    *(float *)(this + 0x144) = ((float)GEN_TOF((fVar2 + (float10)*(float *)(this + 0x144))));
    return 0;
  }
  if (*(uint *)(this + 0xb8) <= *(uint *)(this + 0xbc)) {
    fVar2 = (float10)*(float *)(this + 0x150);
    if ((float10)0 < fVar2) {
      *(float *)(this + 0x140) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x154) - (float10)*(float *)(this + 0x14c))));
      *(float *)(this + 0x144) = (float)((float10)fVar1 - fVar2);
      return 0;
    }
    *(float *)(this + 0x140) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0x158) - (float10)*(float *)(this + 0x14c))));
    *(float *)(this + 0x144) = (float)((float10)fVar1 - fVar2);
    return 0;
  }
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x158);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005585d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5585d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x558690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 0x28))))(this + 0x140 GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x10) = param_1;
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005586c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5586c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
GEN_OWN GEN_NOFRAME unsigned int F_00558720(void)
{
  GEN_ENTER(0x558720u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x558730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
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
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005587b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5587b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  *((undefined2 *)GEN_TOP((param_1 + 0x10))) = (undefined2)param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x12))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP((param_1 + 0x28))) = (undefined2)param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x2a))) = (undefined2)param_5;
  *((undefined2 *)GEN_TOP((param_1 + 0x40))) = (undefined2)param_4;
  *((undefined2 *)GEN_TOP((param_1 + 0x42))) = (undefined2)param_5;
  *((undefined2 *)GEN_TOP((param_1 + 0x58))) = (undefined2)param_4;
  *((undefined2 *)GEN_TOP((param_1 + 0x5a))) = (undefined2)param_3;
  return param_1;
}

/* ref: FUN_005587f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005587f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x5587f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x14))) = (undefined2)param_7;
  *((undefined2 *)GEN_TOP((param_1 + 0x16))) = (undefined2)param_8;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x2c))) = (undefined2)param_7;
  *((undefined2 *)GEN_TOP((param_1 + 0x2e))) = (undefined2)param_8;
  *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x44))) = (undefined2)param_7;
  *((undefined2 *)GEN_TOP((param_1 + 0x46))) = (undefined2)param_8;
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x5c))) = (undefined2)param_7;
  *((undefined2 *)GEN_TOP((param_1 + 0x5e))) = (undefined2)param_8;
  return param_1;
}

/* ref: FUN_00558840 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00558840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x558840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x14))) = (undefined2)param_7;
  *((undefined2 *)GEN_TOP((param_1 + 0x16))) = (undefined2)param_8;
  *((undefined2 *)GEN_TOP((param_1 + 0x1a))) = (undefined2)param_4;
  *((undefined2 *)GEN_TOP((param_1 + 0x1c))) = (undefined2)param_5;
  *((undefined2 *)GEN_TOP((param_1 + 0x1e))) = (undefined2)param_6;
  *((undefined2 *)GEN_TOP((param_1 + 0x18))) = (undefined2)param_3;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x34))) = (undefined2)param_7;
  *((undefined2 *)GEN_TOP((param_1 + 0x36))) = (undefined2)param_8;
  *((undefined2 *)GEN_TOP((param_1 + 0x38))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP((param_1 + 0x3a))) = (undefined2)param_4;
  *((undefined2 *)GEN_TOP((param_1 + 0x3c))) = (undefined2)param_5;
  *((undefined2 *)GEN_TOP((param_1 + 0x3e))) = (undefined2)param_6;
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x54))) = (undefined2)param_7;
  *((undefined2 *)GEN_TOP((param_1 + 0x56))) = (undefined2)param_8;
  *((undefined2 *)GEN_TOP((param_1 + 0x58))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP((param_1 + 0x5a))) = (undefined2)param_4;
  *((undefined2 *)GEN_TOP((param_1 + 0x5c))) = (undefined2)param_5;
  *((undefined2 *)GEN_TOP((param_1 + 0x5e))) = (undefined2)param_6;
  *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = param_2;
  *((undefined2 *)GEN_TOP((param_1 + 0x74))) = (undefined2)param_7;
  *((undefined2 *)GEN_TOP((param_1 + 0x76))) = (undefined2)param_8;
  *((undefined2 *)GEN_TOP((param_1 + 0x78))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP((param_1 + 0x7a))) = (undefined2)param_4;
  *((undefined2 *)GEN_TOP((param_1 + 0x7c))) = (undefined2)param_5;
  *((undefined2 *)GEN_TOP((param_1 + 0x7e))) = (undefined2)param_6;
  return 0;
}

/* ref: FUN_00558900 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00558900(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x558900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  *((short *)GEN_TOP((param_1 + 0x10))) = (short)param_3 - (short)param_2;
  *((short *)GEN_TOP((param_1 + 0x12))) = (short)param_4 - (short)param_2;
  *((short *)GEN_TOP((param_1 + 0x30))) = (short)param_3 - (short)param_2;
  *((short *)GEN_TOP((param_1 + 0x32))) = (short)param_6 + (short)param_2;
  *((short *)GEN_TOP((param_1 + 0x50))) = (short)param_2 + (short)param_5;
  *((short *)GEN_TOP((param_1 + 0x52))) = (short)param_6 + (short)param_2;
  *((short *)GEN_TOP((param_1 + 0x72))) = (short)param_4 - (short)param_2;
  *((short *)GEN_TOP((param_1 + 0x70))) = (short)param_2 + (short)param_5;
  return param_1;
}

/* ref: FUN_00558950 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00558950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x558950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((in_ecx + 0x18))) == 1) {
    *((float *)GEN_TOP((in_ecx + 0x280))) = ((float)GEN_TOF(((float10)param_2 + (float10)*((float *)GEN_TOP((in_ecx + 0x280))))));
    return;
  }
  *((float *)GEN_TOP((in_ecx + 0x280))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x24))) + (float10)*((float *)GEN_TOP((in_ecx + 0x280))))));
  return;
}

/* ref: FUN_00558980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00558980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2a0))),0,0x100);
  *((undefined4 *)GEN_TOP(((int)this + 0x3a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a4))) = 0;
  return (uint)pvVar1;
}

/* ref: FUN_005589b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005589b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5589b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  gen_size32 _Size;
  undefined * pvVar2;
  undefined * _Dst;
  int iVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP((param_1 * 0x40 + 0x2a0 + (int)this)));
  iVar1 = (param_1 + 0x10) * 0x20 - (int)piVar4;
  iVar3 = 8;
  do {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + iVar1 + (int)piVar4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      _Dst = ((undefined *)GEN_TOP(*piVar4));
      if (_Dst == ((undefined *)GEN_TOP(0x0))) {
        _Dst = ((undefined *)GEN_TOP(piVar4[8]));
        if (_Dst == ((undefined *)GEN_TOP(0x0))) goto LAB_005589ff;
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
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00558a10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x558a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((param_1 != ((undefined *)GEN_TOP(0x0))) && (param_2 != 0)) {
    F_00c48350(param_1,0,param_2 << 7);
  }
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558a40(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x558a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
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
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00558ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((char *)GEN_TOP((in_ecx + 0x17c))) != '\0') &&
     ((float10)*((float *)GEN_TOP((in_ecx + 0x170))) <
      (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x168))) + (float10)*((float *)GEN_TOP((in_ecx + 0x158))))))))
  {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFBase::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x558b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  return param_2;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFBase::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x558b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00558b30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00558b30(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x558b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  if (((byte)(param_1 + 0x80) < 0x40) || (param_1 < 0x80)) {
    return 1;
  }
  if (param_1 < 0xe0) {
    return 2;
  }
  if (param_1 < 0xf0) {
    return 3;
  }
  return (-(uint)(param_1 < 0xf8) & 3) + 1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFCount::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00558b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFCount::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00558b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x558b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((int *)GEN_TOP((in_ecx + 0xc))) = *((int *)GEN_TOP((in_ecx + 0xc))) + 1;
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00558ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) != 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00558bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x558bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)(this + 0xc) = param_1;
  *(undefined2 *)(this + 0x10) = (undefined2)param_2;
  return param_1;
}

/* ref: FUN_00558be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x558be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return param_1;
}

/* ref: Component::GUI2::AtkFontAnalyzerFunctorSelect::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x558c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xa4)));
  if ((*(uint *)(this + 4) <= uVar1) && (uVar1 <= *(uint *)(this + 8))) {
    *((uint *)GEN_TOP((param_1 + 0x50))) = *((uint *)GEN_TOP((param_1 + 0x50))) | 0x100000;
    return uVar1;
  }
  *((uint *)GEN_TOP((param_1 + 0x50))) = *((uint *)GEN_TOP((param_1 + 0x50))) & 0xffefffff;
  return uVar1;
}

/* ref: FUN_00558c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x558c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 0x970;
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x20))))((int)this + 4,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x144))) + 0x20))))((int)this + 0x144,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2ac))) + 0x20))))((int)this + 0x2ac,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x654))) + 0x20))))((int)this + 0x654,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7f8))) + 0x20))))((int)this + 0x7f8,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7d4))) + 0x10))))((int)this + 0x7d4,param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x7e4))) + 0x10))))((int)this + 0x7e4);
  return uVar2;
}

/* ref: FUN_00558cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00558cd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x558cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_2 != '\0') {
    *((undefined4 *)GEN_TOP((param_1 + 0x978))) = param_3;
    *((undefined4 *)GEN_TOP((param_1 + 0x97c))) = param_4;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2ac))) + 0x28))))(param_1 + 0x2ac,param_1 + 0x974);
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2ac))) + 0x28))))(param_1 + 0x2ac,param_1 + 0x970);
  return uVar1;
}

/* ref: FUN_00558d60 */
GEN_OWN GEN_FRAME float10 F_00558d60(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x558d60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00558d80 */
GEN_OWN GEN_FRAME float10 F_00558d80(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x558d80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                         (float10)*(double *)&REFG(undefined, 0x1080228)))));
}

/* ref: FUN_00558dc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00558dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc64))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc6a))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc6c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc6d))) = 1;
  do {
    uVar2 = uVar1 & 0xffff;
    uVar1 = uVar1 + 1;
    *((undefined4 *)GEN_TOP(((int)this + uVar2 * 4 + 4))) = 0;
  } while (uVar1 < 7);
  *((undefined2 *)GEN_TOP(((int)this + 0xc68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc58))) = 0;
  return 0;
}

/* ref: FUN_00558e10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00558e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((short *)GEN_TOP((in_ecx + 0xc68))) == 0) {
    return *((uint *)GEN_TOP((in_ecx + 0xc58)));
  }
  return *((uint *)GEN_TOP((in_ecx + 0x50 + *((short *)GEN_TOP((in_ecx + 0xc68))) * 0xc)));
}

/* ref: FUN_00558e30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00558e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * in_EAX = 0;
  int iVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0xc58))) != 0) {
    in_EAX = ((int *)GEN_TOP(0x0));
    iVar1 = 0;
    if (0 < *((short *)GEN_TOP(((int)this + 0xc68)))) {
      in_EAX = ((int *)GEN_TOP(((int)this + 0x5c)));
      do {
        if (*in_EAX == *((int *)GEN_TOP(((int)this + 0xc58)))) {
          *in_EAX = 0;
          in_EAX[-1] = 0;
        }
        iVar1 = iVar1 + 1;
        in_EAX = in_EAX + 3;
      } while (iVar1 < *((short *)GEN_TOP(((int)this + 0xc68))));
    }
    *((undefined4 *)GEN_TOP(((int)this + 0xc58))) = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00558e90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00558e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x22d2a))) == '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,0,0x2f);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,0,9);
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,0);
      if (uVar1 != 0) {
        **((undefined4 * PTR32 *)GEN_TOP((uVar1 + 0x20))) = 0xfffffffe;
        *((undefined1 *)GEN_TOP((uVar1 + 0x1d))) = 1;
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc4))))(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG,0);
    *((undefined1 *)GEN_TOP(((int)this + 0x22d2a))) = 1;
  }
  return;
}

/* ref: FUN_00558f10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00558f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x558f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  code * pcVar3;
  
  if (*((char *)GEN_TOP(((int)this + 0x22d2a))) != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG,0);
      pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x34)));
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_ARG,0);
      pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x40)));
    }
    (*pcVar3)(this,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_ARG);
    if ((char)uVar1 == '\0') {
      iVar2 = 0;
      if (0 < *((short *)GEN_TOP(((int)this + 0x20de0)))) {
        do {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20dec))) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *((short *)GEN_TOP(((int)this + 0x20de0))));
      }
      iVar2 = 0;
      if (0 < *((short *)GEN_TOP(((int)this + 0x20de2)))) {
        do {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20df8))) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *((short *)GEN_TOP(((int)this + 0x20de2))));
      }
      iVar2 = 0;
      if (0 < *((short *)GEN_TOP(((int)this + 0x20de4)))) {
        do {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20e04))) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *((short *)GEN_TOP(((int)this + 0x20de4))));
      }
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x22d2a))) = 0;
  }
  return;
}

/* ref: FUN_00559010 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00559010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte * pbVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x22d2b))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x22d2b))) = 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x130))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x130))) GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG);
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x130))) + 0x1b0)));
    *pbVar1 = *pbVar1 | 2;
  }
  return;
}

/* ref: FUN_00559050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x559050u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00559060 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00559060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x559060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Component::GUI2::AtkModule::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x559070u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x24))))
                    (this + 0x2223c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x559090u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x28))))
                    (this + 0x2223c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005590b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5590b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x40))))(this + 0x2223c GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    uVar1 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf4 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005590e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5590e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if ((*((char *)GEN_TOP((in_ecx + 0x22d2b))) != '\0') &&
     ((param_2 == '\0' || (*((char *)GEN_TOP((in_ecx + 0x22d2c))) != '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00559110(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x559110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  code * pcVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = param_1 + 0x8b3c;
  do {
    iVar2 = *piVar3;
    piVar3 = ((int *)GEN_TOP(((int)piVar3 + 1)));
  } while ((char)iVar2 != '\0');
  if (piVar3 == ((int *)GEN_TOP(((int)param_1 + 0x22cf1)))) {
    if (param_3 != '\0') {
      return 1;
    }
    F_00c49908(param_1 + 0x8b3c,0x10,param_2);
  }
  else if (param_3 != '\0') {
    return 1;
  }
  F_00558e90(param_1 GEN_EDX_ARG);
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0xd8)));
  *(undefined1 *)(param_1 + 0x8afa) = 1;
  uVar4 = (*pcVar1)(param_1,param_2,0,param_4);
  if ((char)uVar4 == '\0') {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x8afa) = 2;
  return 1;
}

/* ref: FUN_00559190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x559190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x22d29))) = 1;
  if (param_1 != ((char *)GEN_TOP(0x0))) {
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
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0xf0))))(this);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0xf8))))(this,uVar4 & 0xff);
  return uVar4;
}

/* ref: FUN_00559200 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00559200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * _Dst;
  int iVar1;
  
  if ((*((char *)GEN_TOP(((int)this + 0x22d2a))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x22d2b))) != '\0')) {
    _Dst = ((undefined *)GEN_TOP(((int)this + 0x22bf0)));
    F_00c48350(_Dst,0,0x100);
    F_005574c0(((undefined *)GEN_TOP(((int)this + 0x20de0))) GEN_EDX_ARG,_Dst,0x100);
    iVar1 = 0xff;
    do {
      if (*((byte *)GEN_TOP(((int)_Dst + iVar1))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x130))) + 0x2c))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x130))) GEN_EDX_ARG,iVar1,*((undefined4 *)GEN_TOP(((int)this + 0x20df0))),
                   *((undefined4 *)GEN_TOP(((int)this + 0x20dfc))),
                   (uint)(*((byte *)GEN_TOP(((int)_Dst + iVar1))) >> 1 & 1));
      }
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: Component::GUI2::AtkModule::vf15 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559280(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x559280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x20dec))) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = ((int *)GEN_TOP(*piVar1)), piVar1 != ((int *)GEN_TOP(0x0)))) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: Component::GUI2::AtkModule::vf16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005592b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5592b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x20df8))) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = ((int *)GEN_TOP(*piVar1)), piVar1 != ((int *)GEN_TOP(0x0)))) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: Component::GUI2::AtkModule::vf18 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005592e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5592e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x22224))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkModule::vf19 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005592f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5592f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Component::GUI2::AtkModule::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x559300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x30))))
                    (*(int * PTR32 *)(this + 0x130) GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x559330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x20))))(*(int * PTR32 *)(this + 0x130) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x559360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x24))))(*(int * PTR32 *)(this + 0x130) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x559380u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x6c))))
                    (*(int * PTR32 *)(this + 0x130) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf45 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x559390u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x70))))
                    (*(int * PTR32 *)(this + 0x130) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: FUN_005593a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005593a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5593a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x24))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20e9c))) + 0x54)));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
  uVar2 = F_00cb0950(this_00 GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: Component::GUI2::AtkModule::vf30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005593e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5593e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x22d2d))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkModule::vf32 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005593f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5593f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0xb8))) != 0) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xb8))) + 0x21a)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf31 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00559410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x22d2e)));
}

/* ref: Component::GUI2::AtkModule::vf33 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00559420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (((*((int *)GEN_TOP((in_ecx + 0xb8))) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xb8))) + 0x14))) + 0xcc))), iVar1 != 0)) &&
     ((*((byte *)GEN_TOP((iVar1 + 0xf9))) & 0x20) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf36 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x559450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)(this + 0x20dc8) = param_1;
  *(undefined4 *)(this + 0x20dcc) = param_2;
  return param_1;
}

/* ref: FUN_00559470 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20ea0;
}

/* ref: FUN_00559480 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00559480(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x559480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00559490 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00559490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x20db2)));
}

/* ref: FUN_005594a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005594a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5594a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x20db3))) = param_2;
  return param_2;
}

/* ref: FUN_005594b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005594b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5594b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x20db3)));
}

/* ref: FUN_005594c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005594c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5594c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 2) {
    return *((uint *)GEN_TOP((in_ecx + 0x22d10)));
  }
  return *((uint *)GEN_TOP((in_ecx + 0x22d14)));
}

/* ref: FUN_005594e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005594e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5594e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xb8))) + 0x14))) + 0x1b0))) >> 7;
}

/* ref: Component::GUI2::AtkModule::vf39 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xb8))) + 0x34)));
}

/* ref: Component::GUI2::AtkModule::vf40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 8) + 0x18))))(this + 8 GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x34))))(this + 0x2223c GEN_EDX_ARG,2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00559580 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00559580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x14))),0,0x20000);
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))),0,*((int *)GEN_TOP(((int)this + 0xc))) * 4);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  bVar1 = F_00a4b410(this GEN_EDX_ARG,0);
  return bVar1;
}

/* ref: FUN_005595d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005595d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5595d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  
  if (0x7fff < param_1) {
    return 0xffffffff;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x14)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0xfffffffe;
  }
  F_00a4b450(this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,1);
  *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x14))) = 0;
  return 0;
}

/* ref: FUN_00559630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x559630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x8000) {
    uVar1 = *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x14)));
  }
  return uVar1;
}

/* ref: FUN_00559650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x559650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 4)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x74))) = param_2;
  return uVar1;
}

/* ref: FUN_00559660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x559660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 4)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x70))) = param_2;
  return uVar1;
}

/* ref: FUN_00559670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x559670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 4)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x78))) = param_2;
  return uVar1;
}

/* ref: FUN_00559680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x559680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP((uVar1 + 0x94))) = *param_1;
  *((undefined4 *)GEN_TOP((uVar1 + 0x98))) = param_1[1];
  *((undefined4 *)GEN_TOP((uVar1 + 0x9c))) = param_1[2];
  *((undefined4 *)GEN_TOP((uVar1 + 0xa0))) = param_1[3];
  return uVar1;
}

/* ref: FUN_005596b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005596b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5596b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 4)));
  *((byte *)GEN_TOP((uVar1 + 0xa4))) = *((byte *)GEN_TOP((uVar1 + 0xa4))) ^ (*((byte *)GEN_TOP((uVar1 + 0xa4))) ^ param_2) & 1;
  return uVar1;
}

/* ref: FUN_005596d0 */
GEN_OWN GEN_FRAME ushort GEN_STDCALL F_005596d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5596d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (0xfffe < param_1) {
    return 0;
  }
  return -(short)param_1 - 1;
}

/* ref: FUN_005596f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005596f0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x5596f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  uint local_c;
  ushort uStack_8;
  
  fVar1 = GEN_X87((float10)((float)GEN_TOF((((float10)1 - (float10)param_1) * (float10)REFG(double, 0x109cab0)))));
  if (fVar1 <= (float10)0) {
    return 0;
  }
  if ((float10)REFG(double, 0x109cab0) <= fVar1) {
    return 0xffff;
  }
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (uint)(longlong)TRUNC(fVar1);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  return local_c;
}

/* ref: FUN_00559770 */
GEN_OWN GEN_FRAME byte F_00559770(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x559770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00415150(param_1 GEN_EDX_ARG);
  REFG(undefined1, 0x137996c) = bVar1;
  return bVar1;
}

/* ref: FUN_005597f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005597f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5597f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  undefined2 * puVar3;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0xffffffff;
  uVar2 = 0;
  puVar3 = ((undefined2 *)GEN_TOP(((int)this + 0x54)));
  do {
    *puVar3 = 0;
    *((undefined1 *)GEN_TOP(((int)this + uVar2 + 0x5a))) = 100;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 3);
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0xffffffff;
  uVar2 = 0;
  puVar3 = ((undefined2 *)GEN_TOP(((int)this + 0x68)));
  do {
    *puVar3 = 0;
    *((undefined1 *)GEN_TOP(((int)this + uVar2 + 0x6e))) = 100;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 3);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = REFG(undefined4, 0x131de4c);
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = REFG(undefined4, 0x131de50);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = REFG(undefined4, 0x131de54);
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = REFG(undefined4, 0x131de58);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = REFG(undefined4, 0x131de5c);
  uVar1 = REFG(undefined4, 0x131de60);
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x88))) & 0xfffffff9 | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x88))) = uVar2;
  return uVar2;
}

/* ref: FUN_005598c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005598c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5598c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  bool bVar1;
  
  if (((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) &&
     ((bVar1 = GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x38)))) || GEN_ISNAN((float10)param_2),
      bVar1 == (bVar1 || (float10)*((float *)GEN_TOP((param_1 + 0x38))) == (float10)param_2) ||
      (bVar1 = GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x3c)))) || GEN_ISNAN((float10)param_3),
      bVar1 == (bVar1 || (float10)*((float *)GEN_TOP((param_1 + 0x3c))) == (float10)param_3))))) {
    *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
  }
  *((float *)GEN_TOP((param_1 + 0x38))) = param_2;
  *((float *)GEN_TOP((param_1 + 0x3c))) = param_3;
  return;
}

/* ref: FUN_00559910 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559910(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x559910u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  bool bVar2;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) {
    fVar1 = *((float *)GEN_TOP((param_1 + 0x38)));
    *((float *)GEN_TOP((param_1 + 0x38))) = param_2;
    bVar2 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)param_2);
    if (bVar2 == (bVar2 || (float10)fVar1 == (float10)param_2)) {
      *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
      return;
    }
  }
  else {
    *((float *)GEN_TOP((param_1 + 0x38))) = param_2;
  }
  return;
}

/* ref: FUN_00559950 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559950(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x559950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  bool bVar2;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) {
    fVar1 = *((float *)GEN_TOP((param_1 + 0x3c)));
    *((float *)GEN_TOP((param_1 + 0x3c))) = param_2;
    bVar2 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)param_2);
    if (bVar2 == (bVar2 || (float10)fVar1 == (float10)param_2)) {
      *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
      return;
    }
  }
  else {
    *((float *)GEN_TOP((param_1 + 0x3c))) = param_2;
  }
  return;
}

/* ref: FUN_005599e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005599e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5599e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x4c))) = param_2;
  return;
}

/* ref: FUN_00559a00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x559a00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  float10 fVar2;
  
  if (((*((uint *)GEN_TOP((in_ecx + 0x88))) & 1) == 0) &&
     ((fVar1 = (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x74))) -
                                                   (float10)param_2)))))), fVar2 = (float10)REFG(float, 0x10905c4)
      , (!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && !(fVar2 < fVar1) ||
      ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x78))) - (float10)param_3))))))
       <= fVar2)))) {
    *((uint *)GEN_TOP((in_ecx + 0x88))) = *((uint *)GEN_TOP((in_ecx + 0x88))) | 1;
  }
  *((float *)GEN_TOP((in_ecx + 0x74))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x78))) = param_3;
  return;
}

/* ref: FUN_00559a80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x559a80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  
  if ((*((uint *)GEN_TOP((in_ecx + 0x88))) & 1) == 0) {
    fVar1 = *((float *)GEN_TOP((in_ecx + 0x74)));
    *((float *)GEN_TOP((in_ecx + 0x74))) = param_2;
    if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - (float10)param_2)))) <=
        (float10)REFG(float, 0x10905c4)) {
      *((uint *)GEN_TOP((in_ecx + 0x88))) = *((uint *)GEN_TOP((in_ecx + 0x88))) | 1;
      return;
    }
  }
  else {
    *((float *)GEN_TOP((in_ecx + 0x74))) = param_2;
  }
  return;
}

/* ref: FUN_00559ae0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x559ae0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  
  if ((*((uint *)GEN_TOP((in_ecx + 0x88))) & 1) == 0) {
    fVar1 = *((float *)GEN_TOP((in_ecx + 0x78)));
    *((float *)GEN_TOP((in_ecx + 0x78))) = param_2;
    if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - (float10)param_2)))) <=
        (float10)REFG(float, 0x10905c4)) {
      *((uint *)GEN_TOP((in_ecx + 0x88))) = *((uint *)GEN_TOP((in_ecx + 0x88))) | 1;
      return;
    }
  }
  else {
    *((float *)GEN_TOP((in_ecx + 0x78))) = param_2;
  }
  return;
}

/* ref: FUN_00559b70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if (in_ecx == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*((ushort *)GEN_TOP((in_ecx + 0x18)));
    if (999 < *((ushort *)GEN_TOP((in_ecx + 0x18)))) {
      return 10000;
    }
  }
  return uVar1;
}

/* ref: FUN_00559b90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559b90(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  if ((in_ecx == 0) || (*((short *)GEN_TOP((in_ecx + 0x18))) != 2)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559ba0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559ba0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  if ((in_ecx == 0) || (*((short *)GEN_TOP((in_ecx + 0x18))) != 3)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559bb0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  if ((in_ecx == 0) || (*((short *)GEN_TOP((in_ecx + 0x18))) != 4)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559bc0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  if ((in_ecx == 0) || (*((short *)GEN_TOP((in_ecx + 0x18))) != 5)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559bf0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  if ((in_ecx == 0) || (*((short *)GEN_TOP((in_ecx + 0x18))) != 8)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559c00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559c00(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  if ((in_ecx == 0) || (*((ushort *)GEN_TOP((in_ecx + 0x18))) < 1000)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((in_ecx != 0) && (999 < *((ushort *)GEN_TOP((in_ecx + 0x18))))) {
    return *((uint *)GEN_TOP((in_ecx + 0x8c)));
  }
  return 0;
}

/* ref: FUN_00559c40 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00559c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  ushort in_AX = 0;
  
  if ((in_ecx != 0) && (in_AX = 0, *((int *)GEN_TOP((in_ecx + 0x1c))) != 0)) {
    return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x1c))) + 0x22))) >> 0xf;
  }
  return in_AX & 0xff00;
}

/* ref: FUN_00559c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x559c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  
  if ((this != ((undefined *)GEN_TOP(0x0))) && (in_EAX = *((uint *)GEN_TOP(((int)this + 0x1c))), in_EAX != 0)) {
    *((ushort *)GEN_TOP((in_EAX + 0x22))) = *((ushort *)GEN_TOP((in_EAX + 0x22))) | 0x8000;
    *((undefined4 *)GEN_TOP((in_EAX + 0x18))) = param_1;
  }
  return in_EAX;
}

/* ref: FUN_00559cb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 0x1c))) != 0)) {
    return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x1c))) + 0x10)));
  }
  return 0;
}

/* ref: FUN_00559cd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((in_ecx != 0) && (*((int *)GEN_TOP((in_ecx + 0x1c))) != 0)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x1c))) + 0x18)));
  }
  return 0;
}

/* ref: FUN_00559cf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00559cf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if ((in_ecx != 0) && (iVar1 = *((int *)GEN_TOP((in_ecx + 0x1c))), iVar1 != 0)) {
    return CONCAT22((short)((uint)iVar1 >> 0x10),*((undefined2 *)GEN_TOP((iVar1 + 0x20))));
  }
  return 0;
}

/* ref: FUN_00559d10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x559d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (in_ecx != 0) {
    *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x38)));
    *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x3c)));
  }
  return;
}

/* ref: FUN_00559d30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x559d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  float fVar1;
  
  if (this != ((undefined *)GEN_TOP(0x0))) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x3c)));
    *param_1 = (short)(int)*((float *)GEN_TOP(((int)this + 0x38)));
    *param_2 = (short)(int)fVar1;
  }
  return;
}

/* ref: FUN_00559d60 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00559d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (float10)*((float *)GEN_TOP((in_ecx + 0x38)));
  }
  return (float10)0;
}

/* ref: FUN_00559d70 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00559d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (ushort)(int)*((float *)GEN_TOP((in_ecx + 0x38)));
  }
  return 0;
}

/* ref: FUN_00559d80 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00559d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (float10)*((float *)GEN_TOP((in_ecx + 0x3c)));
  }
  return (float10)0;
}

/* ref: FUN_00559d90 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00559d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x559d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (ushort)(int)*((float *)GEN_TOP((in_ecx + 0x3c)));
  }
  return 0;
}

/* ref: FUN_00559da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559da0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x559da0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
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
  if ((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) {
    fVar5 = (float10)param_2;
    fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x38)));
    bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
    bVar4 = bVar3 || fVar6 == fVar5;
    uVar2 = (undefined2)(in_EAX >> 0x10);
    uVar1 = (undefined1)in_EAX;
    in_EAX = CONCAT22(uVar2,CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),uVar1));
    if (bVar3 != bVar4) {
      fVar5 = (float10)param_3;
      fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x3c)));
      bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
      bVar4 = bVar3 || fVar6 == fVar5;
      in_EAX = CONCAT22(uVar2,CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),uVar1));
      if (bVar3 != bVar4) goto LAB_00559ddb;
    }
    *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
  }
LAB_00559ddb: ;
  *((float *)GEN_TOP((param_1 + 0x38))) = param_2;
  *((float *)GEN_TOP((param_1 + 0x3c))) = param_3;
  return in_EAX;
}

/* ref: FUN_00559e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559e00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x559e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
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
  if ((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) {
    fVar4 = (float10)(int)uVar1;
    fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x38)));
    bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
    bVar3 = bVar2 || fVar5 == fVar4;
    uVar1 = CONCAT22((short)param_2 >> 0xf,
                     CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)param_2));
    if (bVar2 != bVar3) {
      fVar4 = (float10)(int)(short)param_3;
      fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x3c)));
      bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
      bVar3 = bVar2 || fVar5 == fVar4;
      uVar1 = CONCAT22((short)param_2 >> 0xf,
                       CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)param_2));
      if (bVar2 != bVar3) goto LAB_00559e5b;
    }
    *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
  }
LAB_00559e5b: ;
  *((float *)GEN_TOP((param_1 + 0x38))) = fVar6;
  *((float *)GEN_TOP((param_1 + 0x3c))) = (float)(int)(short)param_3;
  return uVar1;
}

/* ref: FUN_00559e70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559e70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x559e70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  bool bVar1;
  
  if (param_1 != 0) {
    if (((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) &&
       (bVar1 = GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x38)))) || GEN_ISNAN((float10)param_2),
       bVar1 == (bVar1 || (float10)*((float *)GEN_TOP((param_1 + 0x38))) == (float10)param_2))) {
      *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
    }
    *((float *)GEN_TOP((param_1 + 0x38))) = param_2;
  }
  return;
}

/* ref: FUN_00559eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559eb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x559eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (param_1 != 0) {
    in_EAX = (uint)(short)param_2;
    fVar5 = (float)(int)in_EAX;
    if ((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) {
      fVar3 = (float10)(int)in_EAX;
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0x38)));
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)param_2 >> 0xf,
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)param_2));
      if (bVar1 == bVar2) {
        *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
      }
    }
    *((float *)GEN_TOP((param_1 + 0x38))) = fVar5;
  }
  return in_EAX;
}

/* ref: FUN_00559f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559f00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x559f00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 != 0) {
    if ((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) {
      fVar3 = (float10)param_2;
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0x3c)));
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)in_EAX));
      if (bVar1 == bVar2) {
        *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
      }
    }
    *((float *)GEN_TOP((param_1 + 0x3c))) = param_2;
  }
  return in_EAX;
}

/* ref: FUN_00559f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00559f40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x559f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (param_1 != 0) {
    in_EAX = (uint)(short)param_2;
    fVar5 = (float)(int)in_EAX;
    if ((*((uint *)GEN_TOP((param_1 + 0x88))) & 1) == 0) {
      fVar3 = (float10)(int)in_EAX;
      fVar4 = (float10)*((float *)GEN_TOP((param_1 + 0x3c)));
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)param_2 >> 0xf,
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)param_2));
      if (bVar1 == bVar2) {
        *((uint *)GEN_TOP((param_1 + 0x88))) = *((uint *)GEN_TOP((param_1 + 0x88))) | 1;
      }
    }
    *((float *)GEN_TOP((param_1 + 0x3c))) = fVar5;
  }
  return in_EAX;
}

/* ref: FUN_00559f90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559f90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x559f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (in_ecx != 0) {
    *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
    *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x34)));
  }
  return;
}

/* ref: FUN_00559fb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x559fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  float fVar1;
  
  if (this != ((undefined *)GEN_TOP(0x0))) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x34)));
    *param_1 = (short)(int)*((float *)GEN_TOP(((int)this + 0x30)));
    *param_2 = (short)(int)fVar1;
  }
  return;
}

/* ref: FUN_00559fe0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00559fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x559fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (in_ecx != 0) {
    *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x40)));
    *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x44)));
  }
  return;
}

/* ref: FUN_0055a000 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x55a000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *((undefined2 *)GEN_TOP(((int)this + 0x7c)));
    *param_2 = *((undefined2 *)GEN_TOP(((int)this + 0x7e)));
  }
  return;
}

/* ref: FUN_0055a020 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_0055a020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((ushort *)GEN_TOP((in_ecx + 0x7c)));
  }
  return 0;
}

/* ref: FUN_0055a030 */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_0055a030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((ushort *)GEN_TOP((in_ecx + 0x7e)));
  }
  return 0;
}

/* ref: FUN_0055a040 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0055a040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x55a040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort in_AX = 0;
  
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *((ushort *)GEN_TOP(((int)this + 0x7c))) = (ushort)param_1;
    *((undefined2 *)GEN_TOP(((int)this + 0x7e))) = (undefined2)param_2;
    in_AX = (ushort)param_1;
  }
  return in_AX;
}

/* ref: FUN_0055a060 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0055a060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *((ushort *)GEN_TOP((in_ecx + 0x7c))) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a080 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0055a080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *((ushort *)GEN_TOP((in_ecx + 0x7e))) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a0a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a0a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x84))) =
         *((uint *)GEN_TOP((in_ecx + 0x84))) ^ ((uint)param_2 << 0x17 ^ *((uint *)GEN_TOP((in_ecx + 0x84)))) & 0x800000;
  }
  return;
}

/* ref: FUN_0055a0e0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_0055a0e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return GEN_X87((float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((in_ecx + 0x48))) * (float10)*(double *)&REFG(undefined, 0x1080220))
                           / (float10)*(double *)&REFG(undefined, 0x1080228)))));
  }
  return (float10)0;
}

/* ref: FUN_0055a120 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (in_ecx != 0) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x50))) = param_2;
  }
  return;
}

/* ref: FUN_0055a140 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined2 * param_2, unsigned int gen_a2), GEN_P(undefined2 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x55a140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;)
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *((undefined2 *)GEN_TOP(((int)this + 0x54)));
    *param_2 = *((undefined2 *)GEN_TOP(((int)this + 0x56)));
    *param_3 = *((undefined2 *)GEN_TOP(((int)this + 0x58)));
  }
  return;
}

/* ref: FUN_0055a170 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0055a170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x55a170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  ushort in_AX = 0;
  
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *((undefined2 *)GEN_TOP(((int)this + 0x54))) = (undefined2)param_1;
    *((undefined2 *)GEN_TOP(((int)this + 0x56))) = (undefined2)param_2;
    *((ushort *)GEN_TOP(((int)this + 0x58))) = (ushort)param_3;
    in_AX = (ushort)param_3;
  }
  return in_AX;
}

/* ref: FUN_0055a1a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2), GEN_P(undefined1 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x55a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;)
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *((undefined1 *)GEN_TOP(((int)this + 0x5a)));
    *param_2 = *((undefined1 *)GEN_TOP(((int)this + 0x5b)));
    *param_3 = *((undefined1 *)GEN_TOP(((int)this + 0x5c)));
  }
  return;
}

/* ref: FUN_0055a1d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0055a1d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x55a1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  byte in_AL = 0;
  
  if (param_1 != 0) {
    *((undefined1 *)GEN_TOP((param_1 + 0x5a))) = param_2;
    *((undefined1 *)GEN_TOP((param_1 + 0x5b))) = param_3;
    *((byte *)GEN_TOP((param_1 + 0x5c))) = param_4;
    in_AL = param_4;
  }
  return in_AL;
}

/* ref: FUN_0055a1f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0055a1f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((byte *)GEN_TOP((in_ecx + 0x53)));
  }
  return 0;
}

/* ref: FUN_0055a200 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  if (in_ecx != 0) {
    *((undefined1 *)GEN_TOP((in_ecx + 0x53))) = param_2;
  }
  return;
}

/* ref: FUN_0055a220 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0055a220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x55a220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if ((this != ((undefined *)GEN_TOP(0x0))) && (*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) != ((int *)GEN_TOP(0x0)))) {
    for (iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x80))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x10)))) {
      if (*((byte *)GEN_TOP((iVar1 + 0x14))) == (ushort)param_1) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0055a260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0055a260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x55a260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if ((this != ((undefined *)GEN_TOP(0x0))) && (*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) != ((int *)GEN_TOP(0x0)))) {
    for (iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x80))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x10)))) {
      if (*((byte *)GEN_TOP((iVar1 + 0x14))) == (ushort)param_1) {
        return *((uint *)GEN_TOP((iVar1 + 0xc)));
      }
    }
  }
  return 0;
}

/* ref: FUN_0055a2a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0055a2a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (uint)*((ushort *)GEN_TOP((in_ecx + 0x84)));
  }
  return 0;
}

/* ref: FUN_0055a2b0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_0055a2b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *((ushort *)GEN_TOP((in_ecx + 0x84))) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a2d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0055a2d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (((in_ecx != 0) && ((*((uint *)GEN_TOP((in_ecx + 0x84))) & 0x100000) != 0)) &&
     ((*((uint *)GEN_TOP((in_ecx + 0x88))) & 0x20000) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0055a300 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0055a300(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte in_AL = 0;
  
  if (param_1 != 0) {
    *((uint *)GEN_TOP((param_1 + 0x84))) =
         *((uint *)GEN_TOP((param_1 + 0x84))) ^ ((uint)param_2 << 0x14 ^ *((uint *)GEN_TOP((param_1 + 0x84)))) & 0x100000;
    *((uint *)GEN_TOP((param_1 + 0x88))) =
         *((uint *)GEN_TOP((param_1 + 0x88))) ^ ((uint)(param_2 == 0) << 7 ^ *((uint *)GEN_TOP((param_1 + 0x88)))) & 0x80;
    in_AL = param_2;
  }
  return in_AL;
}

/* ref: FUN_0055a350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0055a350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x84))) >> 0x15 & 1;
  }
  return 0;
}

/* ref: FUN_0055a370 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x84))) =
         *((uint *)GEN_TOP((in_ecx + 0x84))) ^ ((uint)param_2 << 0x15 ^ *((uint *)GEN_TOP((in_ecx + 0x84)))) & 0x200000;
  }
  return;
}

/* ref: FUN_0055a3a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0055a3a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (byte)((uint)*((undefined4 *)GEN_TOP((in_ecx + 0x84))) >> 0x19) & 1;
  }
  return 0;
}

/* ref: FUN_0055a3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0055a3c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint in_EAX = 0;
  
  if (in_ecx != 0) {
    in_EAX = ((uint)param_2 << 0x19 ^ *((uint *)GEN_TOP((in_ecx + 0x84)))) & 0x2000000;
    *((uint *)GEN_TOP((in_ecx + 0x84))) = *((uint *)GEN_TOP((in_ecx + 0x84))) ^ in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_0055a3f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0055a3f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x84))) >> 0x1a & 1;
  }
  return 0;
}

/* ref: FUN_0055a410 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x84))) =
         *((uint *)GEN_TOP((in_ecx + 0x84))) ^ ((uint)param_2 << 0x1a ^ *((uint *)GEN_TOP((in_ecx + 0x84)))) & 0x4000000;
  }
  return;
}

/* ref: FUN_0055a440 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0055a440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (byte)((uint)*((undefined4 *)GEN_TOP((in_ecx + 0x84))) >> 0x1b) & 1;
  }
  return 0;
}

/* ref: FUN_0055a460 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x84))) =
         *((uint *)GEN_TOP((in_ecx + 0x84))) ^ ((uint)param_2 << 0x1b ^ *((uint *)GEN_TOP((in_ecx + 0x84)))) & 0x8000000;
  }
  return;
}

/* ref: FUN_0055a490 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0055a490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x84))) >> 0x1d & 1;
  }
  return 0;
}

/* ref: FUN_0055a4b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a4b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x84))) =
         *((uint *)GEN_TOP((in_ecx + 0x84))) ^ ((uint)param_2 << 0x1d ^ *((uint *)GEN_TOP((in_ecx + 0x84)))) & 0x20000000;
  }
  return;
}

/* ref: FUN_0055a4e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0055a4e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (byte)*((undefined2 *)GEN_TOP((in_ecx + 0x8a))) & 1;
  }
  return 0;
}

/* ref: FUN_0055a500 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x88))) =
         *((uint *)GEN_TOP((in_ecx + 0x88))) ^ ((uint)param_2 << 0x10 ^ *((uint *)GEN_TOP((in_ecx + 0x88)))) & 0x10000;
  }
  return;
}

/* ref: FUN_0055a530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0055a530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x88))) >> 0x13 & 1;
  }
  return 0;
}

/* ref: FUN_0055a550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x88))) =
         *((uint *)GEN_TOP((in_ecx + 0x88))) ^ ((uint)param_2 << 0x13 ^ *((uint *)GEN_TOP((in_ecx + 0x88)))) & 0x80000;
  }
  return;
}

/* ref: FUN_0055a580 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0055a580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x88))) >> 0x15 & 1;
  }
  return 0;
}

/* ref: FUN_0055a5a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a5a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x88))) =
         *((uint *)GEN_TOP((in_ecx + 0x88))) ^ ((uint)param_2 << 0x15 ^ *((uint *)GEN_TOP((in_ecx + 0x88)))) & 0x200000;
  }
  return;
}

/* ref: FUN_0055a5f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a5f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x88))) =
         *((uint *)GEN_TOP((in_ecx + 0x88))) ^ ((uint)param_2 << 0x16 ^ *((uint *)GEN_TOP((in_ecx + 0x88)))) & 0x400000;
  }
  return;
}

/* ref: FUN_0055a620 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (in_ecx != 0) {
    *((uint *)GEN_TOP((in_ecx + 0x88))) =
         *((uint *)GEN_TOP((in_ecx + 0x88))) ^ ((uint)param_2 << 0x14 ^ *((uint *)GEN_TOP((in_ecx + 0x88)))) & 0x100000;
  }
  return;
}

/* ref: FUN_0055a650 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0055a650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (byte)(*((uint *)GEN_TOP((in_ecx + 0x88))) >> 0x11) & 1;
  }
  return 0;
}

/* ref: FUN_0055a670 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0055a670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (byte)(*((uint *)GEN_TOP((in_ecx + 0x88))) >> 0x12) & 1;
  }
  return 0;
}

/* ref: FUN_0055a690 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0055a690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return *((uint *)GEN_TOP((in_ecx + 0x84))) >> 0x1e & 1;
  }
  return 0;
}

/* ref: FUN_0055a6b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0055a6b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x55a6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint in_EAX = 0;
  
  if (in_ecx != 0) {
    in_EAX = ((uint)param_2 << 0x1e ^ *((uint *)GEN_TOP((in_ecx + 0x84)))) & 0x40000000;
    *((uint *)GEN_TOP((in_ecx + 0x84))) = *((uint *)GEN_TOP((in_ecx + 0x84))) ^ in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_0055a6e0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_0055a6e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (float10)*((float *)GEN_TOP((in_ecx + 0x4c)));
  }
  return (float10)0.0;
}

/* ref: FUN_0055a710 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x55a710u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (in_ecx != 0) {
    *((float *)GEN_TOP((in_ecx + 0x4c))) = param_2;
  }
  return;
}

/* ref: FUN_0055a730 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x55a730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (in_ecx != 0) {
    *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x74)));
    *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x78)));
  }
  return;
}

/* ref: FUN_0055a750 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_0055a750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (float10)*((float *)GEN_TOP((in_ecx + 0x74)));
  }
  return (float10)0;
}

/* ref: FUN_0055a760 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_0055a760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x55a760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx != 0) {
    return (float10)*((float *)GEN_TOP((in_ecx + 0x78)));
  }
  return (float10)0;
}

/* ref: FUN_0055a770 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x55a770u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if (in_ecx != 0) {
    F_00559a00(in_ecx GEN_EDX_FWD,param_2,param_3);
  }
  return;
}

/* ref: FUN_0055a790 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x55a790u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (in_ecx != 0) {
    if ((*((uint *)GEN_TOP((in_ecx + 0x88))) & 1) == 0) {
      if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x74))) - (float10)param_2
                                              )))))) <= (float10)REFG(float, 0x10905c4)) {
        *((uint *)GEN_TOP((in_ecx + 0x88))) = *((uint *)GEN_TOP((in_ecx + 0x88))) | 1;
      }
    }
    *((float *)GEN_TOP((in_ecx + 0x74))) = param_2;
  }
  return;
}

/* ref: FUN_0055a7e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a7e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x55a7e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (in_ecx != 0) {
    if ((*((uint *)GEN_TOP((in_ecx + 0x88))) & 1) == 0) {
      if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x78))) - (float10)param_2
                                              )))))) <= (float10)REFG(float, 0x10905c4)) {
        *((uint *)GEN_TOP((in_ecx + 0x88))) = *((uint *)GEN_TOP((in_ecx + 0x88))) | 1;
      }
    }
    *((float *)GEN_TOP((in_ecx + 0x78))) = param_2;
  }
  return;
}

/* ref: FUN_0055a830 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0055a830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x55a830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  ushort local_8;
  
  if (this != ((undefined *)GEN_TOP(0x0))) {
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
      local_8 = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)local_8);
      uVar2 = (int)TRUNC((double)*((ushort *)GEN_TOP(((int)this + 0x7c))) * REFG(double, 0x1088108)) & 0xffff;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      break;
    case 2: ;
    case 5: ;
    case 8: ;
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x7c)));
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
      local_8 = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)local_8);
      uVar1 = (int)TRUNC((double)*((ushort *)GEN_TOP(((int)this + 0x7e))) * REFG(double, 0x1088108)) & 0xffff;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      break;
    case 6: ;
    case 7: ;
    case 8: ;
      uVar1 = (uint)*((ushort *)GEN_TOP(((int)this + 0x7e)));
    }
    F_00559a00(this GEN_EDX_FWD,(float)uVar2,(float)uVar1);
  }
  return;
}

