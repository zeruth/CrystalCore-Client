#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf18 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cce920(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcce920u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  int * piVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  uint uVar5;
  float10 fVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  fVar3 = (float10)0;
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 1: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10abc60) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10abc60)))) {
      if (fVar3 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar3)) && fVar6 != fVar3)) {
        param_2 = (float)fVar3;
      }
      *((int *)GEN_TOP(((int)param_1 + 0x50))) = (int)param_2;
    }
    else {
      *((int *)GEN_TOP(((int)param_1 + 0x50))) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 2: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10abc60) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10abc60)))) {
      if (fVar3 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar3)) && fVar6 != fVar3)) {
        param_2 = (float)fVar3;
      }
      *((int *)GEN_TOP(((int)param_1 + 0x54))) = (int)param_2;
    }
    else {
      *((int *)GEN_TOP(((int)param_1 + 0x54))) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 3: ;
    dVar4 = (double)param_2;
    if (!(REFG(double, 0x1094800) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN(REFG(double, 0x1094800)))) {
      if (!(dVar4 <= (double)REFG(float, 0x10a0d00)) == (GEN_ISNAN((double)REFG(float, 0x10a0d00)) || GEN_ISNAN(dVar4))) {
        *((float *)GEN_TOP(((int)param_1 + 0x5c))) = param_2;
      }
      else {
        *((float *)GEN_TOP(((int)param_1 + 0x5c))) = GEN_FLT_TO(*((float *)GEN_TOP(((int)param_1 + 0x5c))), REFG(float, 0x10a0d00));
      }
    }
    else {
      *((float *)GEN_TOP(((int)param_1 + 0x5c))) = GEN_FLT_TO(*((float *)GEN_TOP(((int)param_1 + 0x5c))), REFG(float, 0x1094884));
    }
    break;
  case 4: ;
    dVar4 = (double)param_2;
    if (!(REFG(double, 0x1094800) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN(REFG(double, 0x1094800)))) {
      if (!(dVar4 <= (double)REFG(float, 0x10928e4)) == (GEN_ISNAN((double)REFG(float, 0x10928e4)) || GEN_ISNAN(dVar4))) {
        *((float *)GEN_TOP(((int)param_1 + 0x60))) = param_2;
      }
      else {
        *((float *)GEN_TOP(((int)param_1 + 0x60))) = GEN_FLT_TO(*((float *)GEN_TOP(((int)param_1 + 0x60))), REFG(float, 0x10928e4));
      }
    }
    else {
      *((float *)GEN_TOP(((int)param_1 + 0x60))) = GEN_FLT_TO(*((float *)GEN_TOP(((int)param_1 + 0x60))), REFG(float, 0x1094884));
    }
    break;
  case 5: ;
    dVar4 = (double)param_2;
    if (!((double)REFG(float, 0x10abc60) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN((double)REFG(float, 0x10abc60)))) {
      if (*(double *)&REFG(undefined, 0x10912a8) <= dVar4 &&
          ((!GEN_ISNAN(dVar4) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x10912a8))) && dVar4 != *(double *)&REFG(undefined, 0x10912a8))) {
        param_2 = REFG(float, 0x1094724);
      }
      *((int *)GEN_TOP(((int)param_1 + 100))) = (int)param_2;
    }
    else {
      *((int *)GEN_TOP(((int)param_1 + 100))) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 6: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      if (!(fVar6 <= (float10)REFG(float, 0x10abe50)) == (GEN_ISNAN((float10)REFG(float, 0x10abe50)) || GEN_ISNAN(fVar6))) {
        *((float *)GEN_TOP(((int)param_1 + 0x68))) = param_2;
      }
      else {
        *((float *)GEN_TOP(((int)param_1 + 0x68))) = GEN_FLT_TO(*((float *)GEN_TOP(((int)param_1 + 0x68))), REFG(float, 0x10abe50));
      }
    }
    else {
      *((float *)GEN_TOP(((int)param_1 + 0x68))) = (float)fVar3;
    }
    break;
  case 7: ;
    dVar4 = (double)param_2;
    if (!((double)REFG(float, 0x10abc60) <= dVar4) == (GEN_ISNAN(dVar4) || GEN_ISNAN((double)REFG(float, 0x10abc60)))) {
      if (*(double *)&REFG(undefined, 0x10a5500) <= dVar4 &&
          ((!GEN_ISNAN(dVar4) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x10a5500))) && dVar4 != *(double *)&REFG(undefined, 0x10a5500))) {
        param_2 = REFG(float, 0x10946bc);
      }
      *((int *)GEN_TOP(((int)param_1 + 0x6c))) = (int)param_2;
    }
    else {
      *((int *)GEN_TOP(((int)param_1 + 0x6c))) = (int)REFG(float, 0x10abc60);
    }
    break;
  case 8: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)REFG(double, 0x1094800);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x1094884);
      }
      *((float *)GEN_TOP(((int)param_1 + 0x70))) = param_2;
    }
    else {
      *((float *)GEN_TOP(((int)param_1 + 0x70))) = (float)fVar3;
    }
    break;
  case 9: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *((float *)GEN_TOP(((int)param_1 + 0x74))) = param_2;
    }
    else {
      *((float *)GEN_TOP(((int)param_1 + 0x74))) = (float)fVar3;
    }
    break;
  case 10: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *((float *)GEN_TOP(((int)param_1 + 0x78))) = param_2;
    }
    else {
      *((float *)GEN_TOP(((int)param_1 + 0x78))) = (float)fVar3;
    }
    break;
  case 0xb: ;
    fVar6 = (float10)param_2;
    if (!((float10)REFG(float, 0x10a0d00) <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN((float10)REFG(float, 0x10a0d00)))) {
      if (!(fVar6 <= (float10)REFG(float, 0x10ac04c)) != (GEN_ISNAN((float10)REFG(float, 0x10ac04c)) || GEN_ISNAN(fVar6))) {
        param_2 = REFG(float, 0x10ac04c);
      }
    }
    else {
      param_2 = REFG(float, 0x10a0d00);
    }
    *((float *)GEN_TOP(((int)param_1 + 0x7c))) = param_2;
    break;
  case 0xc: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      fVar2 = (float10)*(double *)&REFG(undefined, 0x1088118);
      if (fVar2 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar2)) && fVar6 != fVar2)) {
        param_2 = REFG(float, 0x10916ec);
      }
      *((float *)GEN_TOP(((int)param_1 + 0x4c))) = param_2;
    }
    else {
      *((float *)GEN_TOP(((int)param_1 + 0x4c))) = (float)fVar3;
    }
    break;
  case 0xd: ;
    fVar6 = (float10)param_2;
    if (!(fVar3 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar3))) {
      if (!(fVar6 <= (float10)REFG(float, 0x1094880)) == (GEN_ISNAN((float10)REFG(float, 0x1094880)) || GEN_ISNAN(fVar6))) {
        *((float *)GEN_TOP(((int)param_1 + 0x58))) = param_2;
      }
      else {
        *((float *)GEN_TOP(((int)param_1 + 0x58))) = GEN_FLT_TO(*((float *)GEN_TOP(((int)param_1 + 0x58))), REFG(float, 0x1094880));
      }
    }
    else {
      *((float *)GEN_TOP(((int)param_1 + 0x58))) = (float)fVar3;
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x40)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    (*(float *)(gen_frame + 0x0)) = (float)fVar3;
    F_00c48350(((undefined1 *)(gen_frame + 0x4)),0,0x30);
    F_00ccf2a0((int)param_1 + 0x4c,(uint)&(*(float *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,0,&(*(float *)(gen_frame + 0x0)),0x34,0);
  }
  uVar5 = F_00cce2c0(param_1 GEN_EDX_ARG);
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cced60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcced60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pRVar4;
  
  uVar2 = param_1 - 1;
  if (uVar2 < 4) {
    *(uint *)(this + 0x80) = uVar2;
    puVar3 = (undefined4 *)(&REFG(undefined, 0x134c990) + uVar2 * 0x34);
    pRVar4 = this + 0x4c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 - 1) {
      *(undefined4 *)pRVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      pRVar4 = pRVar4 + 4;
    }
    this = ((undefined *)GEN_TOP(F_00cce510(this GEN_EDX_FWD)));
  }
  return (uint)this;
}

/* ref: FUN_00cceda0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cceda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcceda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x430, 0, 4);
  LPVOID * ppv;
  int * piVar1;
  undefined * rclsid;
  HRESULT HVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  bool bVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x428)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x42c));
  F_00ce62e0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = param_3;
  ppv = ((LPVOID *)GEN_TOP(((int)this + 0x48)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b60c));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *ppv = (LPVOID)0x0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  F_00cccb10((int)this + 0x8c GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0xb0 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0xd4 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0xf8 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0x11c GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0x140 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0x164 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0x188 GEN_EDX_ARG,(float)(float10)0);
  bVar7 = ((byte)REFG(undefined4, 0x15d8bb4) & 1) != 0;
  (*(uint *)(gen_frame + 0x1c)) = (uint)bVar7;
  rclsid = (undefined *)&REFG(undefined, 0x112b590);
  if (!bVar7) {
    rclsid = (undefined *)&REFG(undefined, 0x112b580);
  }
  HVar2 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),ppv);
  if (HVar2 < 0) {
    if ((*(uint *)(gen_frame + 0x1c)) != 0) {
      (*(undefined1 *)(gen_frame + 0x427)) = 0;
      F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,
                   ((char *)REFP(0x112b210))
                   ,HVar2);
      F_00cbee70(((char *)(gen_frame + 0x28)),2);
      HVar2 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x112b580),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),ppv);
      (*(undefined1 *)(gen_frame + 0x427)) = 0;
      if (HVar2 < 0) {
        F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,((char *)REFP(0x112b274)));
      }
      else {
        F_00c472ec(((char *)(gen_frame + 0x28)),0x400,0x3ff,((char *)REFP(0x112b204)));
      }
      F_00cbee70(((char *)(gen_frame + 0x28)),2);
    }
    if (HVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
      }
      ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112b300)),((char *)REFP(0x112b2d4)),
                      "XA2\\Effects\\ReverbXA2.cpp",0xbb,
                      "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
    }
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(LPVOID * PTR32 *)(gen_frame + 0x18)) = ((LPVOID *)GEN_TOP(0x0));
  (*(LPVOID * PTR32 *)(gen_frame + 0x18)) = &(*(LPVOID *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(LPVOID *)(gen_frame + 0x8)) = *ppv;
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  iVar4 = REFG(int, 0x15d8bac);
  if (REFG(int, 0x15d8bac) == 0) {
    iVar4 = REFG(int, 0x15d8ba8);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = iVar4;
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x0));
  if ((iVar4 != 0) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                        (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,(int)this + 0x40,1,REFG(undefined4, 0x15d8be0),8,3,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x14))),
     (int)uVar3 < 0)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112b20d),
                    "XA2\\Effects\\ReverbXA2.cpp",0xd8,
                    "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
  }
  if ((*((int *)GEN_TOP(((int)this + 0x40))) != 0) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                        (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,(int)this + 0x44,param_3,REFG(undefined4, 0x15d8be0),8,2,&(*(undefined4 *)(gen_frame + 0x20)),0),
     (int)uVar3 < 0)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112b20e),
                    "XA2\\Effects\\ReverbXA2.cpp",0xe2,
                    "SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::ReverbXA2");
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 2;
  puVar5 = &REFG(undefined4, 0x134c9f8);
  puVar6 = ((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  F_00cce510(this GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,0,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0x30))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)1),0);
  }
  F_00ccb520(*((undefined4 *)GEN_TOP(((int)this + 0x40))),*((undefined4 *)GEN_TOP(((int)this + 0x44))));
  return (uint)this;
}

/* ref: FUN_00ccf160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ccf160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x48)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b60c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x44)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,0,0);
    if ((int)uVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcce880));
      }
      ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112b500)),&REFG(undefined, 0x112b20f),
                      ((char *)REFP(0x112b4e4)),0x107,
                      ((char *)REFP(0x112b4a8)));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  F_00cccb40((int)this + 0x188 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x164 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x140 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x11c GEN_EDX_ARG);
  F_00cccb40((int)this + 0xf8 GEN_EDX_ARG);
  F_00cccb40((int)this + 0xd4 GEN_EDX_ARG);
  F_00cccb40((int)this + 0xb0 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x8c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40((int)this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: FUN_00ccf270 */
GEN_LIB GEN_FRAME unsigned int F_00ccf270(GEN_P(LPVOID * param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccf270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * rclsid;
  
  rclsid = (undefined *)&REFG(undefined, 0x112b590);
  if ((param_2 & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112b580);
  }
  return (uint)(gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),param_1));
}

/* ref: FUN_00ccf2a0 */
GEN_LIB GEN_FRAME byte F_00ccf2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xccf2a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_c;
  
  uVar3 = (*(uint *)&gen_args[1]);
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x30))), REFG(float, 0x10916ec));
  *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x13))) = 6;
  *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[1]) + 9))) = 0x1b060605;
  *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x11))) = 4;
  *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xd))) = 0x1b;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x18))) = ((float)GEN_TOF(((float10)(int)(*(undefined4 * PTR32 *)&gen_args[0])[1] / fVar6)));
  *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x1c))) = ((float)GEN_TOF(((float10)(int)(*(undefined4 * PTR32 *)&gen_args[0])[2] / fVar6)));
  fVar7 = (float10)1;
  fVar6 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5])));
  if (!(fVar6 <= fVar7) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6)) {
    fVar6 = ((float10)GEN_TOD(GEN_X87MATH(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))),3)));
    iVar5 = (int)((double)(float)fVar6 * *(double *)&REFG(undefined, 0x1094788));
    if (iVar5 < -8) {
      iVar5 = -8;
    }
    *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x10))) = 8;
    if (iVar5 < 0) {
      cVar4 = (char)iVar5 + '\b';
    }
    else {
      cVar4 = '\b';
    }
    *((char *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x12))) = cVar4;
    fVar6 = ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4])));
  }
  else {
    fVar6 = ((float10)GEN_TOD(GEN_X87MATH(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))),3)));
    iVar5 = (int)((double)(float)fVar6 * *(double *)&REFG(undefined, 0x10944a0));
    if (iVar5 < -8) {
      *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x10))) = 0;
      *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x12))) = 8;
      fVar6 = GEN_X87(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))));
    }
    else if (iVar5 < 0) {
      *((char *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x10))) = (char)iVar5 + '\b';
      *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x12))) = 8;
      fVar6 = GEN_X87(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))));
    }
    else {
      *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x10))) = 8;
      *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x12))) = 8;
      fVar6 = GEN_X87(((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[4]))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[5]))));
    }
  }
  *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x28))) = (float)fVar6;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[7]))) * fVar6))));
  if ((float10)*(float *)&REFG(undefined, 0x112b5ac) <= ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))) {
    (*(uint *)&gen_args[1]) = *(uint *)&REFG(undefined, 0x112b5a8);
  }
  else if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) <= (float10)1) {
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(float10)1);
  }
  gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
  local_c = (undefined4)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))));
  *((undefined4 *)GEN_TOP((uVar3 + 4))) = local_c;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF((fVar6 * ((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)&gen_args[0])[9])))))));
  fVar7 = (float10)*(float *)&REFG(undefined, 0x112b5a4);
  fVar6 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))));
  if (!(fVar6 <= fVar7) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6)) {
    (*(uint *)&gen_args[1]) = *(uint *)&REFG(undefined, 0x112b5a0);
  }
  gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) = (byte)(int)TRUNC(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))));
  *((byte *)GEN_TOP((uVar3 + 8))) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088118);
  *((float *)GEN_TOP((uVar3 + 0x20))) = (float)((float10)(int)puVar2[6] / fVar6);
  *((float *)GEN_TOP((uVar3 + 0x24))) = (float)((float10)(int)puVar2[8] / fVar6);
  gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 0)))) =
       (byte)(int)TRUNC((((float10)GEN_TOD(gen_bits2f(puVar2[10]))) * (float10)*(double *)&REFG(undefined, 0x1094560)) /
                        fVar6);
  *((byte *)GEN_TOP((uVar3 + 0xe))) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  *((byte *)GEN_TOP((uVar3 + 0xf))) = (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  *((undefined4 *)GEN_TOP((uVar3 + 0x2c))) = puVar2[0xb];
  *((undefined4 *)GEN_TOP((uVar3 + 0x14))) = puVar2[0xc];
  *((undefined4 *)GEN_TOP(uVar3)) = *puVar2;
  return (byte)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ccf490 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf490(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40(in_ecx + 2 GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf14 */
GEN_LIB GEN_NOFRAME uint F_00ccf4b0(void)
{
  GEN_ENTER(0xccf4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf15 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccf4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf16 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccf4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccf4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccf4f0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xccf4f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_4);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccf510(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccf510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  F_00cccb40(param_1 + 2 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ccf550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x3c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf14 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ccf560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xccf570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf6 */
GEN_LIB GEN_NOFRAME uint F_00ccf580(void)
{
  GEN_ENTER(0xccf580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::ReverbXA2::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccf590(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccf590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ccf160(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ccf5c0 */
GEN_LIB GEN_FRAME uint F_00ccf5c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccf5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c51da0(param_1,(undefined1)param_2);
  return uVar1;
}

/* ref: FUN_00ccf5d0 */
GEN_LIB GEN_FRAME uint F_00ccf5d0(GEN_P(gen_size32 in_eax, unsigned int gen_a0), GEN_P(char * in_ecx, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xccf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(gen_size32 in_eax = (gen_size32)gen_a0;)
  GEN_PIN(char * in_ecx = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c4c591(param_3,in_ecx,in_eax);
  return uVar1;
}

/* ref: FUN_00ccf5f0 */
GEN_LIB GEN_FRAME unsigned int F_00ccf5f0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xccf5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ccf610 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ccf610(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xccf610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  return;
}

/* ref: FUN_00ccf620 */
GEN_LIB GEN_NOFRAME uint F_00ccf620(GEN_P(char * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xccf620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  bool bVar2;
  
  cVar1 = *in_eax;
  bVar2 = cVar1 < '!';
  do {
    if (cVar1 == '\0') {
      return (uint)in_eax;
    }
    if (cVar1 < '!') {
      bVar2 = true;
    }
    else {
      if (bVar2) {
        return (uint)in_eax;
      }
      bVar2 = false;
    }
    cVar1 = in_eax[1];
    in_eax = in_eax + 1;
  } while( true );
}

/* ref: FUN_00ccf670 */
GEN_LIB GEN_NOFRAME byte F_00ccf670(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(uint * in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xccf670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *in_esi = 0;
  if ((in_eax != ((char *)GEN_TOP(0x0))) && (*in_eax != '\0')) {
    uVar1 = F_00c4c74c(in_eax);
    *in_esi = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00ccf690 */
GEN_LIB GEN_NOFRAME byte F_00ccf690(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(float * in_esi, unsigned int gen_a1))
{
  GEN_ENTER(0xccf690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_esi = (float *)(uintptr_t)gen_a1;)
  double dVar1;
  
  *in_esi = (float)(float10)0;
  if ((in_eax != ((char *)GEN_TOP(0x0))) && (*in_eax != '\0')) {
    dVar1 = F_00c4acaa(in_eax);
    *in_esi = (float)dVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00ccf6b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ccf6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccf6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x6c, 4, 4);
  char * pcVar1;
  float * in_esi;
  char cVar2;
  float10 fVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined * pvVar9;
  int iVar10;
  undefined4 * puVar11;
  char * pcVar12;
  undefined4 * puVar13;
  float10 fVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  (*(int *)(gen_frame + 0x5c)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x60)) = param_1;
  do {
    pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x64));
    cVar2 = *(*(char * PTR32 *)(gen_frame + 0x60));
    pcVar12 = (*(char * PTR32 *)(gen_frame + 0x60));
    if (cVar2 < '!') {
      while ((cVar2 != '\0' && (cVar2 < '!'))) {
        pcVar1 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
        cVar2 = *pcVar1;
      }
    }
    iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b670)),9);
    if (iVar6 == 0) {
      cVar2 = *pcVar12;
      bVar8 = cVar2 < '!';
      while (cVar2 != '\0') {
        if (cVar2 < '!') {
          bVar4 = true;
        }
        else {
          bVar4 = false;
          if (bVar8) break;
        }
        pcVar1 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
        bVar8 = bVar4;
        cVar2 = *pcVar1;
      }
      *((undefined4 *)GEN_TOP(((int)pvVar9 + 4))) = 0;
      if (*pcVar12 == '\0') {
        return 0;
      }
      uVar7 = F_00c4c74c(pcVar12);
      *((uint *)GEN_TOP(((int)pvVar9 + 4))) = uVar7;
    }
    else {
      iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b67c)),7);
      if (iVar6 == 0) {
        cVar2 = *pcVar12;
        bVar8 = cVar2 < '!';
        while (cVar2 != '\0') {
          if (cVar2 < '!') {
            bVar4 = true;
          }
          else {
            bVar4 = false;
            if (bVar8) break;
          }
          pcVar1 = pcVar12 + 1;
          pcVar12 = pcVar12 + 1;
          bVar8 = bVar4;
          cVar2 = *pcVar1;
        }
      }
      else {
        iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b684)),10);
        if (iVar6 == 0) {
          cVar2 = *pcVar12;
          bVar8 = cVar2 < '!';
          while (cVar2 != '\0') {
            if (cVar2 < '!') {
              bVar8 = true;
            }
            else {
              if (bVar8) break;
              bVar8 = false;
            }
            pcVar1 = pcVar12 + 1;
            pcVar12 = pcVar12 + 1;
            cVar2 = *pcVar1;
          }
          *((undefined4 *)GEN_TOP(((int)pvVar9 + 8))) = 0;
          if (*pcVar12 == '\0') {
            return 0;
          }
          uVar7 = F_00c4c74c(pcVar12);
          *((uint *)GEN_TOP(((int)pvVar9 + 8))) = uVar7;
        }
        else {
          iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b690)),8);
          if (iVar6 == 0) {
            cVar2 = *pcVar12;
            bVar8 = cVar2 < '!';
            while (cVar2 != '\0') {
              if (cVar2 < '!') {
                bVar4 = true;
              }
              else {
                bVar4 = false;
                if (bVar8) break;
              }
              pcVar1 = pcVar12 + 1;
              pcVar12 = pcVar12 + 1;
              bVar8 = bVar4;
              cVar2 = *pcVar1;
            }
            *((undefined4 *)GEN_TOP(((int)pvVar9 + 0xc))) = 0;
            if (*pcVar12 == '\0') {
              return 0;
            }
            uVar7 = F_00c4c74c(pcVar12);
            *((uint *)GEN_TOP(((int)pvVar9 + 0xc))) = uVar7;
          }
          else {
            iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b69c)),0x11);
            if (iVar6 == 0) {
              pcVar12 = ((char *)GEN_TOP(F_00ccf620(pcVar12)));
              *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x20))) = 0;
              if (pcVar12 == ((char *)GEN_TOP(0x0))) {
                return 0;
              }
              if (*pcVar12 == '\0') {
                return 0;
              }
              uVar7 = F_00c4c74c(pcVar12);
              *((uint *)GEN_TOP(((int)pvVar9 + 0x20))) = uVar7;
            }
            else {
              iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b6b0)),0x13);
              if (iVar6 == 0) {
                pcVar12 = ((char *)GEN_TOP(F_00ccf620(pcVar12)));
                *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x24))) = 0;
                if (pcVar12 == ((char *)GEN_TOP(0x0))) {
                  return 0;
                }
                if (*pcVar12 == '\0') {
                  return 0;
                }
                uVar7 = F_00c4c74c(pcVar12);
                *((uint *)GEN_TOP(((int)pvVar9 + 0x24))) = uVar7;
              }
              else {
                iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b6c4)),0x13);
                if (iVar6 == 0) {
                  uVar7 = F_00ccf620(pcVar12);
                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x28);
                }
                else {
                  iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b6d8)),0x10);
                  if (iVar6 != 0) {
                    iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b6ec)),0xc);
                    if (iVar6 == 0) {
                      pcVar12 = ((char *)GEN_TOP(F_00ccf620(pcVar12)));
                      if (*pcVar12 == '\0') {
                        return 0;
                      }
                      iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b6fc)),4);
                      if (iVar6 == 0) {
                        *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x30))) = 0;
                      }
                      else {
                        iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b704)),6);
                        if (iVar6 == 0) {
                          *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x30))) = 1;
                        }
                        else {
                          iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b70c)),5);
                          if (iVar6 == 0) {
                            *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x30))) = 2;
                          }
                          else {
                            iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b714)),7);
                            if (iVar6 == 0) {
                              *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x30))) = 4;
                            }
                            else {
                              iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b71c)),0x10);
                              if (iVar6 == 0) {
                                *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x30))) = 5;
                              }
                              else {
                                iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b730)))),3);
                                if (iVar6 == 0) {
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x30))) = 3;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b734)),0x11);
                      if (iVar6 == 0) {
                        pcVar12 = ((char *)GEN_TOP(F_00ccf620(pcVar12)));
                        if (*pcVar12 == '\0') {
                          return 0;
                        }
                        iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b748)),6);
                        if (iVar6 == 0) {
                          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x34))) = 1;
                        }
                      }
                      else {
                        iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b750)))),3);
                        if (iVar6 == 0) {
                          (*(int *)(gen_frame + 0x58)) = 0;
                          pcVar12 = ((char *)GEN_TOP(F_00ccf620(pcVar12)));
                          if (*pcVar12 == '\0') {
                            return 0;
                          }
                          uVar7 = F_00ccf620(pcVar12);
                          bVar5 = F_00ccf670(uVar7,((ushort *)(gen_frame + 0x54)));
                          if (bVar5 == 0) {
                            return 0;
                          }
                          uVar7 = F_00ccf620(uVar7);
                          F_00ccf670(uVar7,&(*(int *)(gen_frame + 0x58)));
                          param_1 = ((char *)GEN_TOP((uint)((ushort *)(gen_frame + 0x54))[0]));
                          if ((*(int *)(gen_frame + 0x58)) == 3) {
                            param_1 = ((char *)GEN_TOP(CONCAT22(1,((ushort *)(gen_frame + 0x54))[0])));
                          }
                          iVar6 = (*(int *)(gen_frame + 0x5c)) * 4;
                          (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 1;
                          *((char * PTR32 *)GEN_TOP(((int)pvVar9 + iVar6 + 0x94))) = param_1;
                        }
                        else {
                          iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b754)),0xf);
                          if (iVar6 == 0) {
                            *((undefined1 *)GEN_TOP(((int)pvVar9 + 0x1bc))) = 1;
                          }
                          else {
                            iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b764)),10);
                            if (iVar6 != 0) {
                              iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b770)),0xb);
                              if (iVar6 == 0) {
                                uVar7 = F_00ccf620(pcVar12);
                                bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x40);
                              }
                              else {
                                iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b77c)),0x1e);
                                if (iVar6 == 0) {
                                  *((undefined1 *)GEN_TOP(((int)pvVar9 + 0x1bf))) = 1;
                                  goto LAB_00ccfee0;
                                }
                                iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b79c)),0xf);
                                if (iVar6 == 0) {
                                  uVar7 = F_00ccf620(pcVar12);
                                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x14);
                                }
                                else {
                                  iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b7ac)),0x1b);
                                  if (iVar6 == 0) {
                                    uVar7 = F_00ccf620(pcVar12);
                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x44);
                                  }
                                  else {
                                    iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b7c8)),0x1c);
                                    if (iVar6 == 0) {
                                      uVar7 = F_00ccf620(pcVar12);
                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x48);
                                    }
                                    else {
                                      iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b7e8)),0x15);
                                      if (iVar6 == 0) {
                                        uVar7 = F_00ccf620(pcVar12);
                                        bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x4c);
                                      }
                                      else {
                                        iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b800)),0x14);
                                        if (iVar6 == 0) {
                                          uVar7 = F_00ccf620(pcVar12);
                                          bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x50);
                                        }
                                        else {
                                          iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b818)),0x11);
                                          if (iVar6 == 0) {
                                            uVar7 = F_00ccf620(pcVar12);
                                            bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x54);
                                          }
                                          else {
                                            iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b82c)),0xf);
                                            if (iVar6 == 0) {
                                              uVar7 = F_00ccf620(pcVar12);
                                              bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x60);
                                            }
                                            else {
                                              iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b83c)),0x14
                                                                );
                                              if (iVar6 != 0) {
                                                iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b854)),
                                                                   0x13);
                                                if (iVar6 == 0) {
                                                  *((undefined1 *)GEN_TOP(((int)pvVar9 + 0x1bd))) = 1;
                                                }
                                                else {
                                                  iVar6 = F_00c4c591(pcVar12,
                                                  ((char *)REFP(0x112b868)),0x21);
                                                  if (iVar6 == 0) {
                                                    uVar7 = F_00ccf620(pcVar12);
                                                    in_esi = ((float *)GEN_TOP(((int)pvVar9 + 0x58)));
                                                    bVar5 = F_00ccf690(uVar7,in_esi);
                                                    if (bVar5 == 0) {
                                                      return 0;
                                                    }
                                                    if (!((float10)*in_esi <= (float10)REFG(float, 0x10b2b38))
                                                        == (GEN_ISNAN((float10)REFG(float, 0x10b2b38)) ||
                                                           GEN_ISNAN((float10)*in_esi))) {
                                                      fVar14 = (float10)*(float *)&REFG(undefined, 0x112bb9c);
                                                      fVar3 = (float10)*in_esi;
                                                      if (fVar3 <= fVar14 &&
                                                          ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar3)) &&
                                                          fVar14 != fVar3)) {
                                                        *in_esi = *(float *)&REFG(undefined, 0x112bb9c);
                                                      }
                                                    }
                                                    else {
                                                      *in_esi = GEN_FLT_TO(*in_esi, REFG(float, 0x10b2b38));
                                                    }
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b88c)),
                                                                       0x12);
                                                    if (iVar6 == 0) {
                                                      uVar7 = F_00ccf620(pcVar12);
                                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 100);
                                                      if (bVar5 == 0) {
                                                        return 0;
                                                      }
                                                      uVar7 = F_00ccf620(uVar7);
                                                      bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x68)
                                                      ;
                                                      goto joined_r0x00ccfc2d;
                                                    }
                                                    iVar6 = F_00c4c591(pcVar12,((char *)REFP(0x112b8a0)),
                                                                       0x12);
                                                    if (iVar6 == 0) {
                                                      iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x6c;
                                                      iVar6 = 0;
                                                      do {
                                                        pcVar12 = ((char *)GEN_TOP(F_00ccf620(pcVar12)));
                                                        bVar5 = F_00ccf690(pcVar12,iVar10);
                                                        if (bVar5 == 0) break;
                                                        iVar6 = iVar6 + 1;
                                                        iVar10 = iVar10 + 4;
                                                      } while (iVar6 < 4);
                                                    }
                                                    else {
                                                      iVar6 = F_00c4c591(pcVar12,
                                                  ((char *)REFP(0x112b8b4)),0x15);
                                                  if (iVar6 == 0) {
                                                    iVar6 = 0;
                                                    iVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x7c;
                                                    do {
                                                      pcVar12 = ((char *)GEN_TOP(F_00ccf620(pcVar12)));
                                                      bVar5 = F_00ccf670(pcVar12,iVar10);
                                                      if (bVar5 == 0) break;
                                                      iVar6 = iVar6 + 1;
                                                      iVar10 = iVar10 + 4;
                                                    } while (iVar6 < 4);
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,
                                                  ((char *)REFP(0x112b8cc)),0x17);
                                                  if (iVar6 == 0) {
                                                    uVar7 = F_00ccf620(pcVar12);
                                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x8c);
                                                    if (bVar5 == 0) {
LAB_00ccfe8f: ;
                                                      F_00c48350(((undefined *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x0)) + 1))),0,0x53);
                                                      cVar2 = *((char *)GEN_TOP(((int)pvVar9 + 0x1bf)));
                                                      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 1;
                                                      puVar11 = &(*(undefined4 *)(gen_frame + 0x0));
                                                      puVar13 = ((undefined4 *)GEN_TOP(((int)pvVar9 + 0x114)));
                                                      for (iVar6 = 0x15; iVar6 != 0;
                                                          iVar6 = iVar6 - 1) {
                                                        *puVar13 = *puVar11;
                                                        puVar11 = puVar11 + 1;
                                                        puVar13 = puVar13 + 1;
                                                      }
                                                      *((int *)GEN_TOP(((int)pvVar9 + 0x38))) = (*(int *)(gen_frame + 0x5c));
                                                      *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x3c))) = 1;
                                                      if ((cVar2 != '\0') &&
                                                         (-1 < *((int *)GEN_TOP(((int)pvVar9 + 0x40))))) {
                                                        *((int *)GEN_TOP(((int)pvVar9 + 4))) =
                                                             *((int *)GEN_TOP(((int)pvVar9 + 4))) +
                                                             *((int *)GEN_TOP(((int)pvVar9 + 0x40)));
                                                      }
                                                      return 1;
                                                    }
                                                    uVar7 = F_00ccf620(uVar7);
                                                    bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x90);
                                                    if (bVar5 == 0) goto LAB_00ccfe8f;
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,
                                                  ((char *)REFP(0x112b8e4)),0x17);
                                                  if (iVar6 == 0) {
                                                    *((undefined1 *)GEN_TOP(((int)pvVar9 + 0x1c0))) = 1;
                                                  }
                                                  else {
                                                    iVar6 = F_00c4c591(pcVar12,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112b8fc)))),3);
                                                  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x64));
                                                  if (iVar6 == 0) goto LAB_00ccfe8f;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                                goto LAB_00ccfee0;
                                              }
                                              uVar7 = F_00ccf620(pcVar12);
                                              bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x5c);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto joined_r0x00ccfc2d;
                            }
                            *((undefined1 *)GEN_TOP(((int)pvVar9 + 0x1be))) = 1;
                          }
                        }
                      }
                    }
                    goto LAB_00ccfee0;
                  }
                  uVar7 = F_00ccf620(pcVar12);
                  bVar5 = F_00ccf670(uVar7,(int)pvVar9 + 0x2c);
                }
joined_r0x00ccfc2d: ;
                if (bVar5 == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
LAB_00ccfee0: ;
    uVar7 = F_00c51da0((*(char * PTR32 *)(gen_frame + 0x60)),10);
    (*(char * PTR32 *)(gen_frame + 0x60)) = ((char *)GEN_TOP((uVar7 + 1)));
  } while( true );
}

/* ref: FUN_00ccff00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ccff00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xccff00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  float10 fVar1;
  byte bVar2;
  undefined2 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x58))), REFG(float, 0x10928e4));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x10;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x10;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0x10;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 8;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 8;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x40;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x180;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x3c;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x1e;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x20;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  puVar3 = ((undefined2 *)GEN_TOP(((int)this + 0x94)));
  iVar4 = 0x1f;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  fVar1 = (float10)0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  *((float *)GEN_TOP(((int)this + 0x6c))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x70))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((float *)GEN_TOP(((int)this + 0x74))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((float *)GEN_TOP(((int)this + 0x78))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  if ((param_1 != 0) && (bVar2 = F_00ccf6b0(this GEN_EDX_FWD,param_1), bVar2 != 0)) {
    return (uint)this;
  }
  F_00c48350(((undefined *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x0)) + 1))),0,0x53);
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 4;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0x10020;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 1;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
  puVar6 = ((undefined4 *)GEN_TOP(((int)this + 0x114)));
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 4;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 1;
  return (uint)this;
}

/* ref: FUN_00cd0070 */
GEN_LIB_GS GEN_FRAME uint F_00cd0070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcd0070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112bb78)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112bb58)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cd0110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x94 + param_2 * 4;
}

/* ref: FUN_00cd0130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (int)*((short *)GEN_TOP((in_ecx + 0x94 + param_2 * 4)));
}

/* ref: FUN_00cd0150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((in_ecx + 0x96 + param_2 * 4))) & 1;
}

/* ref: FUN_00cd0170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x54 + 0x114 + in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ConfigReader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0190(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x112bb98));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd01c0 */
GEN_LIB GEN_FRAME unsigned int F_00cd01c0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd01c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cd01e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd01e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd01e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    piVar2 = ((int *)GEN_TOP(F_00ccb510()));
    if (piVar1 != piVar2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd0230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00cd0240 */
GEN_LIB_GS GEN_FRAME uint F_00cd0240(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcd0240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112bd6c)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112bd4c)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cd02e0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd02e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcd02e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  int * piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  (*(int *)(gen_frame + 0x3c)) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar4 = 0xffffffff;
  iVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined4 *)(gen_frame + 0x34)) = param_2;
  (*(int *)(gen_frame + 0x38)) = param_3;
  (*(undefined2 *)(gen_frame + 0x40)) = 0;
  ((char *)(gen_frame + 0x42))[0x1a] = '\0';
  ((char *)(gen_frame + 0x42))[0x1b] = '\0';
  ((char *)(gen_frame + 0x42))[0x1c] = '\0';
  ((char *)(gen_frame + 0x42))[0x1d] = '\0';
  ((char *)(gen_frame + 0x42))[0] = '\0';
  ((char *)(gen_frame + 0x42))[1] = '\0';
  ((char *)(gen_frame + 0x42))[2] = '\0';
  ((char *)(gen_frame + 0x42))[3] = '\0';
  ((char *)(gen_frame + 0x42))[4] = '\0';
  ((char *)(gen_frame + 0x42))[5] = '\0';
  ((char *)(gen_frame + 0x42))[6] = '\0';
  ((char *)(gen_frame + 0x42))[7] = '\0';
  ((char *)(gen_frame + 0x42))[8] = '\0';
  ((char *)(gen_frame + 0x42))[9] = '\0';
  ((char *)(gen_frame + 0x42))[10] = '\0';
  ((char *)(gen_frame + 0x42))[0xb] = '\0';
  ((char *)(gen_frame + 0x42))[0xc] = '\0';
  ((char *)(gen_frame + 0x42))[0xd] = '\0';
  ((char *)(gen_frame + 0x42))[0xe] = '\0';
  ((char *)(gen_frame + 0x42))[0xf] = '\0';
  ((char *)(gen_frame + 0x42))[0x10] = '\0';
  ((char *)(gen_frame + 0x42))[0x11] = '\0';
  ((char *)(gen_frame + 0x42))[0x12] = '\0';
  ((char *)(gen_frame + 0x42))[0x13] = '\0';
  ((char *)(gen_frame + 0x42))[0x14] = '\0';
  ((char *)(gen_frame + 0x42))[0x15] = '\0';
  ((char *)(gen_frame + 0x42))[0x16] = '\0';
  ((char *)(gen_frame + 0x42))[0x17] = '\0';
  ((char *)(gen_frame + 0x42))[0x18] = '\0';
  ((char *)(gen_frame + 0x42))[0x19] = '\0';
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_FWD);
  }
  if (REFG(char, 0x15d7798) != '\0') {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    uVar4 = F_00cca4d0(&REFG(char, 0x15d7798) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)) - 1);
    if (uVar4 == 0) {
      (*(int *)(gen_frame + 0x3c)) = (int)(char)(*(undefined2 *)(gen_frame + 0x40));
    }
  }
  if ((*(int *)(gen_frame + 0x38)) != 0) {
    iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + (*(int *)(gen_frame + 0x3c)) * 4)));
  }
  if ((*(int *)(gen_frame + 0x3c)) != 0) {
    (*(int *)(gen_frame + 0x38)) = REFG(undefined4, 0x134c7ec);
    if (uVar4 == 0) {
      cVar2 = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x40)) + 1));
      if ('\0' < (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x40)) + 1))) {
        iVar5 = 0;
        do {
          if (((char *)(gen_frame + 0x42))[(int)(iVar5)] == '\0') {
            ((uint *)(gen_frame + 0x0))[(int)(iVar5)] = REFG(undefined4, 0x15d8bac);
            if (REFG(undefined4, 0x15d8bac) == 0) {
              ((uint *)(gen_frame + 0x0))[(int)(iVar5)] = REFG(undefined4, 0x15d8ba8);
            }
          }
          else {
            uVar4 = F_00ccb4d0(((char *)(gen_frame + 0x42))[(int)(iVar5)] - 1);
            ((uint *)(gen_frame + 0x0))[(int)(iVar5)] = uVar4;
          }
          ((uint *)(gen_frame + 0xc0))[(int)(iVar5 * 2 + 1)] = ((uint *)(gen_frame + 0x0))[(int)(iVar5)];
          ((uint *)(gen_frame + 0xc0))[(int)(iVar5 * 2)] = 0;
          iVar5 = iVar5 + 1;
          cVar2 = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x40)) + 1));
        } while (iVar5 < (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x40)) + 1)));
      }
      (*(int *)(gen_frame + 0x20)) = (int)cVar2;
      (*(uint * PTR32 *)(gen_frame + 0x24)) = ((uint *)(gen_frame + 0xc0));
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(char * PTR32 *)(gen_frame + 0x2c)) = ((char *)(gen_frame + 0x42)) + 0x1e;
      if (iVar3 != 0) {
        iVar5 = 0;
        puVar6 = ((undefined4 *)(gen_frame + 0x68));
        do {
          if (*((int *)GEN_TOP((iVar3 + iVar5 * 4))) == 0) break;
          piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + iVar5 * 4)));
          *puVar6 = (*(undefined4 *)(gen_frame + 0x34));
          puVar6[-1] = 0;
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
          puVar6[-2] = uVar4;
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 3;
        } while (iVar5 < 8);
        (*(int *)(gen_frame + 0x28)) = iVar5;
        this = (*(undefined * PTR32 *)(gen_frame + 0x30));
      }
      if ((REFG(int * PTR32, 0x15d8ba4) != ((int *)GEN_TOP(0x0))) &&
         (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                            (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,(int)this + 4,(*(undefined4 *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x38)),0,0xff - (*(int *)(gen_frame + 0x3c)),
                             &(*(int *)(gen_frame + 0x20)),-(uint)((*(int *)(gen_frame + 0x28)) != 0) & (uint)&(*(int *)(gen_frame + 0x28))), (int)uVar4 < 0)) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0240));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"","","XA2\\BusXA2.cpp",0x89,
                        "SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::BusXA2");
      }
      if (iVar3 != 0) {
        iVar5 = 0;
        do {
          if (*((int *)GEN_TOP((iVar3 + iVar5 * 4))) == 0) break;
          piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + iVar5 * 4)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 8);
      }
    }
    else if (iVar3 == 0) {
      uVar4 = F_00ccb510();
      *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
      if (uVar4 == 0) {
        uVar4 = F_00ccc080((*(undefined4 *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x38)));
        *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
      }
    }
    else {
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(char * PTR32 *)(gen_frame + 0x2c)) = ((char *)(gen_frame + 0x42)) + 0x1e;
      iVar5 = 0;
      puVar6 = ((undefined4 *)(gen_frame + 0x68));
      do {
        if (*((int *)GEN_TOP((iVar3 + iVar5 * 4))) == 0) break;
        piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + iVar5 * 4)));
        *puVar6 = (*(undefined4 *)(gen_frame + 0x34));
        puVar6[-1] = 0;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
        puVar6[-2] = uVar4;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 3;
      } while (iVar5 < 8);
      (*(int *)(gen_frame + 0x28)) = iVar5;
      if ((REFG(int * PTR32, 0x15d8ba4) != ((int *)GEN_TOP(0x0))) &&
         (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d8ba4) + 0x24))))
                            (REFG(int * PTR32, 0x15d8ba4) GEN_EDX_ARG,(int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4,(*(undefined4 *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x38)),0,0xff - (*(int *)(gen_frame + 0x3c)),0,
                             -(uint)(iVar5 != 0) & (uint)&(*(int *)(gen_frame + 0x28))), (int)uVar4 < 0)) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0240));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][XA2] Error: CreateSubmixVoice\"",&REFG(undefined, 0x112bc7b),
                        "XA2\\BusXA2.cpp",0xae,"SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::BusXA2"
                       );
      }
      iVar5 = 0;
      do {
        this = (*(undefined * PTR32 *)(gen_frame + 0x30));
        if (*((int *)GEN_TOP((iVar3 + iVar5 * 4))) == 0) break;
        piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + iVar5 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4))),iVar5);
        iVar5 = iVar5 + 1;
        this = (*(undefined * PTR32 *)(gen_frame + 0x30));
      } while (iVar5 < 8);
    }
    F_00ccb4b0(*((undefined4 *)GEN_TOP(((int)this + 4))),(*(int *)(gen_frame + 0x3c)) - 1);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IDSPBus::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0710(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::BusXA2::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0750(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112bd98));
  if (param_1[1] != 0) {
    piVar1 = ((int *)GEN_TOP(param_1[1]));
    piVar2 = ((int *)GEN_TOP(F_00ccb510()));
    if (piVar1 != piVar2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
      param_1[1] = 0;
    }
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112bd8c));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd07a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd07a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd07a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if (param_2 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112be30);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x14;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x120,((char *)REFP(0x112bdac)),0,0,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce6310(this_00 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cd0850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcd0850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (param_3 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112be30);
    F_00cccf50((int)this + 0x14 GEN_EDX_FWD,param_2);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x14;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(F_00ce6310(param_1 GEN_EDX_ARG)));
    *((int * PTR32 *)GEN_TOP(((int)this + 0xc))) = piVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
    return (uint)this;
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x120,((char *)REFP(0x112bdc8)),0,0,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    return (uint)this;
  }
  uVar2 = F_00ce6310(this_00 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  return (uint)this;
}

/* ref: FUN_00cd0920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd0920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x14))) + 4))) - 0x14 + (int)this))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x14))) + 4)));
  *((uint *)GEN_TOP(((uVar1 - 0x18) + (int)this))) = uVar1 - 0x14;
  *((undefined4 *)GEN_TOP(((int)this - 0x10))) = 0;
  return uVar1;
}

/* ref: FUN_00cd0950 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd0950(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  
  if (*((int *)GEN_TOP((param_1 - 0x10))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 - 0x10)));
    if (param_2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 - 0xc))),0);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 - 0xc))),0);
  }
  return;
}

/* ref: FUN_00cd0980 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd0980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar1 = *((int *)GEN_TOP(((int)this - 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x1));
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this - 0x10))) + 0x14))))
              (*((int * PTR32 *)GEN_TOP(((int)this - 0x10))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this - 0xc))),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x0));
}

/* ref: FUN_00cd09c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd09c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd09c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float fVar7;
  float fVar8;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*(uint *)(gen_frame + 0x14)) = uVar6;
  if (*((int *)GEN_TOP(((int)this - 0x10))) != 0) {
    iVar4 = *((int *)GEN_TOP(((int)this - 0x14)));
    iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) - 0x14 + (int)this)));
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + 0x38 + (int)this)));
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + 0x14 + (int)this)));
    piVar3 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) - 0x10 + (int)this)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1);
    fVar8 = (float)extraout_ST0;
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2);
    fVar7 = (float)extraout_ST0_00;
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3);
    ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x3c))))
              (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x14))) + 4))) - 0x14 + (int)this,((undefined1 *)(gen_frame + 0x0)),
               (undefined4)gen_fl2bits((float)extraout_ST0_01),(undefined4)gen_fl2bits(fVar7),
               (undefined4)gen_fl2bits(fVar8));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this - 0x10))) + 0x18))))
                      (*((int * PTR32 *)GEN_TOP(((int)this - 0x10))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this - 0xc))),((undefined1 *)(gen_frame + 0x0)),0x14,
                       0);
  }
  return uVar6;
}

/* ref: FUN_00cd0a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd0a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (-1 < param_2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this - 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this - 8))) GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this - 0x10))) = param_1;
    *((int *)GEN_TOP(((int)this - 0xc))) = param_2;
    F_00ce6650(*((undefined4 *)GEN_TOP(((int)this - 8))) GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x14))) + 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 - 0x14 + (int)this))) + 0x24))))(iVar1 - 0x14 + (int)this);
  return uVar2;
}

/* ref: FUN_00cd0ab0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd0ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx - 8)));
}

/* ref: FUN_00cd0ac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd0ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd09c0(((undefined *)GEN_TOP(((int)this - *((int *)GEN_TOP(((int)this - 4)))))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cd0ad0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd0ad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0ab0(in_ecx - *((int *)GEN_TOP((in_ecx - 4))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cd0ae0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd0ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00cd0980(((undefined *)GEN_TOP(((int)this - *((int *)GEN_TOP(((int)this - 4)))))) GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00cd0af0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cd0950((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return;
}

/* ref: FUN_00cd0b00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd0b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd0b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cd0a60(((undefined *)GEN_TOP(((int)this - *((int *)GEN_TOP(((int)this - 4)))))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cd0b10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd0b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cd0b70((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cd0b20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd0b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd0b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) + (int)this))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  uVar1 = *((uint *)GEN_TOP((*(int *)this + 4)));
  *((uint *)GEN_TOP(((uVar1 - 4) + (int)this))) = uVar1 - 0x14;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x60 GEN_EDX_FWD);
  F_00cccb40((int)this + 0x3c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x18 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cd0b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0b70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = param_1 - 5;
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1[-5] + 4))) + (int)piVar1))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112bdec));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*piVar1 + 4))) - 4 + (int)piVar1))) = *((int *)GEN_TOP((*piVar1 + 4))) - 0x14;
  param_1[-4] = 0;
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (piVar1 != ((int *)GEN_TOP(0x0)))) {
    F_00406810(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00cd0be0 */
GEN_LIB GEN_FRAME unsigned int F_00cd0be0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd0c00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd0c00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  float fVar2;
  float10 extraout_ST0;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x10 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  if (*((int *)GEN_TOP((param_1 + 0xf0))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xf0))) + 0x30))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 0xf0))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0);
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x10))))(param_1 + 0x10); fVar2 = extraout_ST0;
  F_00cccbd0(param_1 + 0x10 GEN_EDX_ARG,(float)extraout_ST0);
  return (uint)gen_fl2bits(fVar2);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::vf1 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd0c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd0c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  undefined1 MVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  float10 extraout_ST0;
  ulonglong uVar5;
  undefined * pMVar6;
  undefined * pMVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0xc))))(this + 0x10 GEN_EDX_FWD);
  if ((char)uVar4 != '\0') {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10 GEN_EDX_ARG,param_1);
    if (*(int *)(this + 0xf0) == 0) {
      return uVar4;
    }
    iVar2 = **(int * PTR32 *)(this + 0xf0);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x10))))(this + 0x10);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x30))))
                      (*(undefined4 *)(this + 0xf0),(undefined4)gen_fl2bits((float)extraout_ST0));
  }
  if (*(int *)(this + 0xf0) != 0) {
    MVar1 = this[300];
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x128);
    piVar3 = *(int * PTR32 *)(this + 0xf0);
    pMVar6 = this + 0xf8;
    pMVar7 = this + 0x110;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = pMVar6;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = pMVar7;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG,(int)(char)MVar1,&(*(undefined * PTR32 *)(gen_frame + 0x0)),0xc);
    uVar5 = F_00427d90();
    F_00cd1160(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x40001,(int)uVar5,(int)(uVar5 >> 0x20),pMVar6,pMVar7);
    uVar4 = F_00d2cf60(((undefined1 *)(gen_frame + 0xc)),0x50);
  }
  return uVar4;
}

/* ref: FUN_00cd0d40 */
GEN_LIB_GS GEN_FRAME uint F_00cd0d40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcd0d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112bfe8)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112bfc8)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cd0de0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd0de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcd0de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x7c, 4, 4);
  int iVar1;
  float10 fVar2;
  undefined * rclsid;
  HRESULT HVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x74)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x78));
  F_00ce6810(this GEN_EDX_FWD,param_1);
  fVar2 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112c028));
  *((undefined1 *)GEN_TOP(((int)this + 300))) = 0xff;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  *((float *)GEN_TOP(((int)this + 0x110))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0xf8))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x114))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0xfc))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x118))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x100))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x11c))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x104))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x120))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x108))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x124))) = (float)fVar2;
  *((float *)GEN_TOP(((int)this + 0x10c))) = (float)fVar2;
  piVar7 = REFG(int * PTR32, 0x15d8ba4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = REFG(int * PTR32, 0x15d8ba4);
  if (REFG(int * PTR32, 0x15d8ba4) != ((int *)GEN_TOP(0x0))) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0));
    rclsid = (undefined *)&REFG(undefined, 0x112c014);
    if (((byte)REFG(undefined4, 0x15d8bb4) & 1) == 0) {
      rclsid = (undefined *)&REFG(undefined, 0x112c004);
    }
    HVar3 = gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),&(*(int * PTR32 *)(gen_frame + 0x10)));
    if (HVar3 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0d40));
      }
      ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112bed0)),"",
                      ((char *)REFP(0x112beb8)),0x4c,
                      ((char *)REFP(0x112be78)));
    }
    (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)(gen_frame + 0x14));
    iVar4 = 0;
    (*(uint *)(gen_frame + 0xc)) = param_2;
    (*(int *)(gen_frame + 0x0)) = 0;
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        iVar4 = (*(int *)(gen_frame + 0x0));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x8));
        if (*((int *)GEN_TOP((param_3 + uVar6 * 4))) == 0) break;
        piVar7 = *((int * PTR32 *)GEN_TOP((param_3 + uVar6 * 4)));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x20))))(piVar7 GEN_EDX_ARG);
        if (uVar5 != 0xffffffff) {
          piVar7 = *((int * PTR32 *)GEN_TOP((param_3 + uVar6 * 4)));
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x20))))(piVar7 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0xc)) = uVar5;
        }
        piVar7 = *((int * PTR32 *)GEN_TOP((param_3 + uVar6 * 4)));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x18))))(piVar7 GEN_EDX_ARG);
        iVar1 = (*(int *)(gen_frame + 0x0));
        ((uint *)(gen_frame + 0x14))[(int)((*(int *)(gen_frame + 0x0)) * 3)] = uVar5;
        piVar7 = *((int * PTR32 *)GEN_TOP((param_3 + uVar6 * 4)));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x1c))))(piVar7 GEN_EDX_ARG);
        ((uint *)(gen_frame + 0x14))[(int)(iVar1 * 3 + 1)] = uVar5 & 0xff;
        iVar4 = (*(int *)(gen_frame + 0x0)) + 1;
        uVar6 = uVar6 + 1;
        ((uint *)(gen_frame + 0x14))[(int)(iVar1 * 3 + 2)] = (*(uint *)(gen_frame + 0xc));
        (*(int *)(gen_frame + 0x0)) = iVar4;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x8));
      } while (uVar6 < 8);
    }
    ((uint *)(gen_frame + 0x14))[(int)(iVar4 * 3)] = (uint)(*(int * PTR32 *)(gen_frame + 0x10));
    *((uint *)GEN_TOP(((int)this + 0x128))) = (*(uint *)(gen_frame + 0xc));
    ((uint *)(gen_frame + 0x14))[(int)(iVar4 * 3 + 1)] = 1;
    ((uint *)(gen_frame + 0x14))[(int)(iVar4 * 3 + 2)] = (*(uint *)(gen_frame + 0xc));
    *((char *)GEN_TOP(((int)this + 300))) = (char)iVar4;
    iVar1 = *piVar7;
    (*(int *)(gen_frame + 0x0)) = iVar4 + 1;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x28))))(piVar7,(int)this + 0xf0,param_2,REFG(int, 0x134c7e8),0,0,&(*(int *)(gen_frame + 0x0)));
    if ((int)uVar6 < 0) {
      REFG(undefined1, 0x15d8bd9) = 1;
    }
    if (param_3 != 0) {
      uVar6 = 0;
      do {
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x8));
        if (*((int *)GEN_TOP((param_3 + uVar6 * 4))) == 0) break;
        piVar7 = *((int * PTR32 *)GEN_TOP((param_3 + uVar6 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xf0))),uVar6);
        uVar6 = uVar6 + 1;
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x8));
      } while (uVar6 < 8);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    F_00ccb490(*((undefined4 *)GEN_TOP(((int)this + 0xf0))));
    if ((*((int *)GEN_TOP(((int)this + 0xf0))) != 0) && (REFG(int, 0x134c7e8) != REFG(int, 0x134c7ec))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x24))))
                (piVar7 GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)this + 0xf4))),param_2,REFG(int, 0x134c7ec),0,0xff,0,0);
      F_00ccb4a0(*((undefined4 *)GEN_TOP(((int)this + 0xf4))));
    }
  }
  return (uint)this;
}

/* ref: FUN_00cd1060 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xf4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112c028));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xf0)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,0,0);
    if ((int)uVar2 < 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd0d40));
      }
      ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112bf94)),"",
                      ((char *)REFP(0x112bf7c)),0xd9,
                      ((char *)REFP(0x112bf38)));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  }
  uVar2 = F_00ce6850(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00cd1100 */
GEN_LIB GEN_FRAME unsigned int F_00cd1100(GEN_P(LPVOID * param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPVOID * param_1 = (LPVOID *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * rclsid;
  
  rclsid = (undefined *)&REFG(undefined, 0x112c014);
  if ((param_2 & 1) == 0) {
    rclsid = (undefined *)&REFG(undefined, 0x112c004);
  }
  return (uint)(gen_imp_CoCreateInstance(rclsid,(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x112b570),param_1));
}

/* ref: FUN_00cd1140 */
GEN_LIB GEN_FRAME byte F_00cd1140(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcd1140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  REFG(undefined1, 0x15d8bd9) = param_1;
  return param_1;
}

/* ref: FUN_00cd1150 */
GEN_LIB GEN_FRAME float10 F_00cd1150(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xcd1150u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)param_1;
}

/* ref: FUN_00cd1160 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd1160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcd1160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_4[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_5[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_4[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = param_5[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_4[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = param_5[5];
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::MasterBusXA2::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd11e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd11e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cd1060(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd1210 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd1210(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb40(in_ecx + 10 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 1 GEN_EDX_ARG);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1240(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb40(param_1 + 10 GEN_EDX_FWD);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd1280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  F_00ce6b60(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c0a8));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x70898,((char *)REFP(0x112c054)),0,0,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ce6be0(this_00 GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)this + 0x50))) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x10))))(uVar1 + 0x20,(int)this + 0x54,8);
  return (uint)this;
}

/* ref: FUN_00cd1310 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x50)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c0a8));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf5 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd1360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd1360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined4 * puVar1;
  float10 fVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  puVar1 = param_1;
  if (-1 < param_2) {
    *(undefined4 * PTR32 *)(this + 0x5c) = param_1;
    *(int *)(this + 0x60) = param_2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,((byte *)(gen_frame + 0x0)));
    fVar2 = (float10)(int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) < 0) {
      fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *(float *)(this + 0x4c) = (float)fVar2;
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG)));
  }
  return (uint)puVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf1 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd13c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd13c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x5c))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x5c)));
    if (param_2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0x60))),0);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x60))),0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf2 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd13f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd13f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar1 = *(int *)(this + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x5c) + 0x14))))
              (*(int * PTR32 *)(this + 0x5c) GEN_EDX_ARG,*(undefined4 *)(this + 0x60),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x0));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0x10)));
  *(float *)(this + 0x54) = (float)((float10)1 / extraout_ST0);
  extraout_ST0_00 = (*pcVar1)(this + 0x28);
  *(float *)(this + 0x58) = (float)extraout_ST0_00;
  piVar2 = *(int * PTR32 *)(this + 0x5c);
  uVar3 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_FWD,*(undefined4 *)(this + 0x60),this + 0x54,8,0);
  }
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x50)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf7 */
GEN_LIB GEN_NOFRAME byte F_00cd1490(void)
{
  GEN_ENTER(0xcd1490u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularPitchShiftXA2::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd14a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd14a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[0x14]));
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x112c0a8));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    param_1[0x14] = 0;
    param_1[0x17] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd1500 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd1500(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb40(in_ecx + 10 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 1 GEN_EDX_ARG);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1530(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb40(param_1 + 10 GEN_EDX_FWD);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd1570 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  F_00ce7460(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x112c14c));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x78,((char *)REFP(0x112c0e4)),0,0,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
    return (uint)this;
  }
  uVar1 = F_00ce7940(this_00 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x4c))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cd15e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd15e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd15e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x4c)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x112c14c));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf1 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd1620(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x50))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x50)));
    if (param_2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0x54))),0);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x54))),0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf2 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd1650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar1 = *(int *)(this + 0x50);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x1));
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x50) + 0x14))))
              (*(int * PTR32 *)(this + 0x50) GEN_EDX_ARG,*(undefined4 *)(this + 0x54),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x0));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd1690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 extraout_ST0;
  
  if (*(int *)(this + 0x4c) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
    F_00ce7660(*(undefined4 *)(this + 0x4c) GEN_EDX_FWD,(float)extraout_ST0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd16c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd16c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf14 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd16d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd16d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 0x4c))) != 0) {
    bVar1 = F_00ce76e0(*((int *)GEN_TOP((in_ecx + 0x4c))) GEN_EDX_FWD);
    return bVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf15 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd16e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd16e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ce76a0(*((undefined4 *)GEN_TOP((in_ecx + 0x4c))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf16 */
GEN_LIB GEN_NOFRAME unsigned int F_00cd16f0(void)
{
  GEN_ENTER(0xcd16f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf12 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd1700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x4c))) != 0) {
    F_00ce76c0(*((int *)GEN_TOP((in_ecx + 0x4c))) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd1710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x4c))) != 0) {
    F_00ce76d0(*((int *)GEN_TOP((in_ecx + 0x4c))) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd1720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2;
  if (-1 < (int)param_2) {
    *(undefined4 *)(this + 0x50) = param_1;
    *(uint *)(this + 0x54) = param_2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,0);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x4c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::GranularSynthesizerXA2::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1760(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[0x13]));
  *param_1 = (*(undefined * PTR32 (*)[18])REFP(0x112c14c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    param_1[0x13] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd17c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd17c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd17c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40(in_ecx + 0x25 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x1c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 0x13 GEN_EDX_ARG);
  F_00cccb40(in_ecx + 10 GEN_EDX_ARG);
  F_00cccb40(in_ecx + 1 GEN_EDX_ARG);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1800(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40(param_1 + 0x25 GEN_EDX_FWD);
  F_00cccb40(param_1 + 0x1c GEN_EDX_ARG);
  F_00cccb40(param_1 + 0x13 GEN_EDX_ARG);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd1860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  F_00ce8330(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c20c));
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xa4,((char *)REFP(0x112c1a0)),0,0,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ce8520(this_00 GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)this + 0xbc))) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x10))))(uVar1 + 0x20,(int)this + 0xc0,0x14);
  return (uint)this;
}

/* ref: FUN_00cd1900 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xbc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c20c));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb40((int)this + 0x94 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x70 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x4c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x28 GEN_EDX_ARG);
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf5 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd1970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd1970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined4 * puVar1;
  float10 fVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  puVar1 = param_1;
  if (-1 < param_2) {
    *(undefined4 * PTR32 *)(this + 0xd4) = param_1;
    *(int *)(this + 0xd8) = param_2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,((byte *)(gen_frame + 0x0)));
    fVar2 = (float10)(int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) < 0) {
      fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *(float *)(this + 0xb8) = (float)fVar2;
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG)));
  }
  return (uint)puVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf1 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd19e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd19e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0xd4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xd4)));
    if (param_2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xd8))),0);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xd8))),0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf2 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd1a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar1 = *(int *)(this + 0xd4);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xd4) + 0x14))))
              (*(int * PTR32 *)(this + 0xd4) GEN_EDX_ARG,*(undefined4 *)(this + 0xd8),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x0));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
  *(float *)(this + 0xc0) = (float)extraout_ST0;
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0x10))))(this + 0x28);
  *(float *)(this + 0xc4) = (float)extraout_ST0_00;
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0x10))))(this + 0x4c);
  *(float *)(this + 200) = (float)extraout_ST0_01;
  extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 0x10))))(this + 0x70);
  *(float *)(this + 0xcc) = (float)extraout_ST0_02;
  extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x94) + 0x10))))(this + 0x94);
  *(float *)(this + 0xd0) = (float)extraout_ST0_03;
  piVar1 = *(int * PTR32 *)(this + 0xd4);
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0xd8),this + 0xc0,0x14,0);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xbc)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::CompressorXA2::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1b00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cd1900(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd1b30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd1b30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(in_ecx + 1 GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1b50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd1b80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  F_00ce8a80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x20084,((char *)REFP(0x112c25c)),0,0,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ce8aa0(this_00 GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x20))) + 0x10))))(uVar1 + 0x20,(int)this + 0x2c,4);
  return (uint)this;
}

/* ref: FUN_00cd1c10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40((int)this + 4 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf5 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd1c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined4 * puVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  puVar1 = param_1;
  if (-1 < param_2) {
    *(undefined4 * PTR32 *)(this + 0x30) = param_1;
    *(int *)(this + 0x34) = param_2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG)));
  }
  return (uint)puVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf1 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd1ca0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * piVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30)));
    if (param_2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0x34))),0);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x34))),0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf2 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd1cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar1 = *(int *)(this + 0x30);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  if (iVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x14))))
              (*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG,*(undefined4 *)(this + 0x34),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return (*(undefined * PTR32 *)(gen_frame + 0x0)) == ((undefined *)GEN_TOP(0x0));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
  piVar1 = *(int * PTR32 *)(this + 0x30);
  *(float *)(this + 0x2c) = (float)((float10)1 / extraout_ST0);
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0x34),this + 0x2c,4,0);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x28)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::StringendoEffectXA2::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd1d60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[10]));
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x112c2ac));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    param_1[10] = 0;
    param_1[0xc] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd1dc0 */
GEN_LIB GEN_FRAME unsigned int F_00cd1dc0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cd1df0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd1df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd1df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar1 = param_1;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[3];
    bVar2 = F_00ce9330(param_1);
    if (bVar2 != 0) {
      puVar3 = ((undefined4 *)GEN_TOP(F_00ce9590(param_1,3)));
      *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = *puVar3;
      *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = puVar3[1];
      *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = puVar3[2];
      *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = puVar3[3];
      puVar3 = ((undefined4 *)GEN_TOP(F_00ce95c0(param_1,3)));
      param_1 = ((undefined4 *)GEN_TOP(0x0));
      if (*((char *)GEN_TOP(((int)this + 0x1cc))) != '\0') {
        puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x1d8)));
        do {
          param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 1)));
          *puVar5 = *puVar3;
          puVar5[1] = puVar3[1];
          puVar5[2] = puVar3[2];
          puVar5[3] = puVar3[3];
          puVar3 = puVar3 + 4;
          puVar5 = puVar5 + 4;
        } while ((int)param_1 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1cc))));
      }
      uVar4 = F_00ce93d0(((undefined *)GEN_TOP(((int)this + 0x1c8))) GEN_EDX_ARG);
      F_00c46aa0((int)this + 0x228,puVar1 + (*((byte *)GEN_TOP(((int)this + 0x1cc))) + 2) * 4,uVar4);
      return;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x1cc))) = 1;
    *((float *)GEN_TOP(((int)this + 0x1dc))) = (float)(float10)1;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf107 */
GEN_LIB GEN_NOFRAME byte F_00cd1f00(void)
{
  GEN_ENTER(0xcd1f00u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00cd1f10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd1f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x88, 8);
  byte bVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar5 = 0;
  (*(char *)(gen_frame + 0x83)) = '\0';
  if (0 < *((int *)GEN_TOP(((int)this + 700)))) {
    puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x2c0)));
    do {
      bVar1 = F_00cd65b0(*puVar2 GEN_EDX_FWD);
      if (bVar1 != 0) {
        F_00cd8a90(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
        *puVar2 = 0;
        (*(char *)(gen_frame + 0x83)) = '\x01';
      }
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 700))));
    if ((*(char *)(gen_frame + 0x83)) != '\0') {
      iVar5 = 0;
      if (0 < *((int *)GEN_TOP(((int)this + 700)))) {
        iVar4 = *((int *)GEN_TOP(((int)this + 700)));
        piVar3 = ((int *)GEN_TOP(((int)this + 0x2c0)));
        do {
          if (*piVar3 != 0) {
            ((int *)(gen_frame + 0x0))[(int)(iVar5)] = *piVar3;
            iVar5 = iVar5 + 1;
          }
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
      }
      if (0 < iVar5) {
        piVar3 = ((int *)(gen_frame + 0x0));
        piVar6 = ((int *)GEN_TOP(((int)this + 0x2c0)));
        for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 - 1) {
          *piVar6 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      if (iVar5 < *((int *)GEN_TOP(((int)this + 700)))) {
        puVar2 = ((undefined4 *)GEN_TOP(((int)this + iVar5 * 4 + 0x2c0)));
        iVar4 = iVar5;
        do {
          *puVar2 = 0;
          iVar4 = iVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (iVar4 < *((int *)GEN_TOP(((int)this + 700))));
      }
      *((int *)GEN_TOP(((int)this + 700))) = iVar5;
    }
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf10 */
GEN_LIB GEN_NOFRAME unsigned int F_00cd1fe0(void)
{
  GEN_ENTER(0xcd1fe0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf104 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd1ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd1ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  undefined * pRVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar2 = this + 0x2c0;
    do {
      in_EAX = F_00cd8390(*(undefined * PTR32 *)pRVar2 GEN_EDX_FWD);
      iVar1 = iVar1 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar1 < *(int *)(this + 700));
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf3 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd2020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd2020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined * pRVar3;
  
  if ((*(uint *)(this + 0xf8) >> 2 & 1) != 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar3 = this + 0x2c0;
    do {
      uVar1 = F_00cd9930(*(undefined4 *)pRVar3 GEN_EDX_FWD,param_1,1);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pRVar3 = pRVar3 + 4;
    } while (iVar2 < *(int *)(this + 700));
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd2080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  if (((byte)this[0xf8] & 8) != 0) {
    return 5;
  }
  uVar1 = F_00427d90();
  *(int *)(this + 0x118) = (int)uVar1;
  *(undefined4 *)(this + 0x110) = param_1;
  *(int *)(this + 0x11c) = (int)(uVar1 >> 0x20);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd20c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd20c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: FUN_00cd20e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd20e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd20e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = *(byte *)this;
  *(byte *)this = '\x01' << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) | bVar1;
  return bVar1 == 0;
}

/* ref: FUN_00cd2110 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd2110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd2110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)this;
  bVar2 = ~('\x01' << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & bVar1;
  *(byte *)this = bVar2;
  if ((bVar1 != 0) && (bVar2 == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd2150 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd2150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd2150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return ((byte)(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *(byte *)this) != 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd2170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD,0,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd2190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 RVar1;
  
  RVar1 = this[0x130];
  this[0x130] = (undefined1)('\x01' << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) | (byte)RVar1);
  if (RVar1 == (undefined1)0x0) {
    *(uint *)(this + 300) = *(uint *)(this + 300) & 2 | param_2 * 4 | 1;
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd21e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd21e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,0,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd2200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 RVar1;
  undefined1 RVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  
  RVar1 = this[0x130];
  RVar2 = (undefined1)(~('\x01' << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & (byte)RVar1);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),RVar2);
  this[0x130] = RVar2;
  if ((RVar1 != (undefined1)0x0) && (RVar2 == (undefined1)0x0)) {
    uVar3 = *(uint *)(this + 300) & 2 | param_2 * 4;
    *(uint *)(this + 300) = uVar3;
  }
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2250(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd2250u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  float fVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  double dVar6;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x164))))(param_1 GEN_EDX_FWD);
  if ((char)uVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x4a) = 0;
    uVar3 = (uint)param_1[0x3e] >> 3;
    if ((uVar3 & 1) == 0) {
      if (param_3 != 0) {
        uVar3 = F_00cccd90(param_1 + 8 GEN_EDX_ARG,param_2,param_3);
        return uVar3;
      }
      F_00cccbd0(param_1 + 8 GEN_EDX_ARG,param_2);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0xdc] + 0x10))))(param_1 + 0xdc);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[8] + 0x10))))(param_1 + 8);
      fVar1 = gen_bits2f(param_1[0x40]);
      fVar2 = gen_bits2f(param_1[0x41]);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0x4e] + 0x10))))(param_1 + 0x4e);
      uVar3 = (uint)(ulonglong)gen_d2bits(dVar6); dVar6 = extraout_ST0_01;
      iVar5 = 0;
      if (0 < param_1[0xaf]) {
        piVar4 = param_1 + 0xb0;
        do {
          uVar3 = F_00cd8a30(*piVar4 GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                              (float10)((double)GEN_TOD((((extraout_ST0_00 *
                                                                 (float10)(double)extraout_ST0) *
                                                                (float10)fVar1) * (float10)fVar2)))))));
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar5 < param_1[0xaf]);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00cd2330 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cd2330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd2330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x370))) + 0x10))))((int)this + 0x370);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x10))))((int)this + 0x20);
  fVar1 = *((float *)GEN_TOP(((int)this + 0x100)));
  fVar2 = *((float *)GEN_TOP(((int)this + 0x104)));
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x138))) + 0x10))))((int)this + 0x138);
  extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb0))) + 0x10))))((int)this + 0xb0);
  return GEN_X87(((float)GEN_TOF((extraout_ST0_02 *
                (float10)((double)GEN_TOD((extraout_ST0_01 *
                                 (float10)((double)GEN_TOD((((extraout_ST0_00 * (float10)(double)extraout_ST0
                                                    ) * (float10)fVar1) * (float10)fVar2))))))))));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd23a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcd23a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xf8))) >> 3;
  if (((uVar1 & 1) == 0) && (iVar2 = 0, 0 < *((int *)GEN_TOP((param_1 + 700))))) {
    puVar3 = ((undefined4 *)GEN_TOP((param_1 + 0x2c0)));
    do {
      uVar1 = F_00cd6630(*puVar3 GEN_EDX_FWD,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *((int *)GEN_TOP((param_1 + 700))));
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf17 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd23f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd23f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined * pRVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x168))))(this GEN_EDX_FWD);
  if ((((char)uVar1 == '\0') && (this[0x340] == (undefined1)0x0)) &&
     (iVar2 = 0, 0 < *(int *)(this + 700))) {
    pRVar3 = this + 0x2c0;
    do {
      F_00cd66f0(*(undefined * PTR32 *)pRVar3 GEN_EDX_ARG,param_1);
      iVar2 = iVar2 + 1;
      pRVar3 = pRVar3 + 4;
    } while (iVar2 < *(int *)(this + 700));
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf18 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd2440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd2440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x168))))(this GEN_EDX_FWD);
  if (((char)uVar2 == '\0') &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x164))))(this GEN_EDX_ARG), (char)uVar2 == '\0')) {
    *(undefined4 *)(this + 0xd4) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0xd8) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *(undefined4 *)(this + 0xdc) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
    iVar3 = 0;
    *(undefined4 *)(this + 0xe0) = *((undefined4 *)GEN_TOP(((int)param_1 + 0xc)));
    if (0 < *(int *)(this + 700)) {
      param_1 = this + 0x2c0;
      do {
        F_00cd7670(*(undefined * PTR32 *)param_1 GEN_EDX_ARG,puVar1);
        param_1 = param_1 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this + 700));
    }
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd24c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd24c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  uint uVar2;
  float fVar3;
  undefined4 * puVar4;
  int iVar5;
  float10 extraout_ST0;
  
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x44 GEN_EDX_FWD,param_2);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x44))) + 0x10))))(param_1 + 0x44);
    fVar1 = *((float *)GEN_TOP((param_1 + 0x108))); fVar3 = extraout_ST0;
    iVar5 = 0;
    if (0 < *((int *)GEN_TOP((param_1 + 700)))) {
      puVar4 = ((undefined4 *)GEN_TOP((param_1 + 0x2c0)));
      do {
        fVar3 = gen_bits2f(F_00cd68a0(*puVar4 GEN_EDX_ARG,(float)(extraout_ST0 * (float10)fVar1)));
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar5 < *((int *)GEN_TOP((param_1 + 700))));
    }
    return (uint)gen_fl2bits(fVar3);
  }
  uVar2 = F_00cccd90(param_1 + 0x44 GEN_EDX_ARG,param_2,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd2540(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd2540u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = 0;
  *((float *)GEN_TOP((param_1 + 0xf4))) = param_2;
  if (0 < *((int *)GEN_TOP((param_1 + 700)))) {
    puVar2 = ((undefined4 *)GEN_TOP((param_1 + 0x2c0)));
    do {
      F_00cd6740(*puVar2 GEN_EDX_FWD,param_2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *((int *)GEN_TOP((param_1 + 700))));
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2590(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd2590u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  float10 extraout_ST0;
  
  fVar1 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x168))))(param_1 GEN_EDX_FWD));
  if ((char)(uint)gen_fl2bits(fVar1) == '\0') {
    if (param_3 != 0) {
      uVar2 = F_00cccd90(param_1 + 0x1a GEN_EDX_ARG,param_2,param_3);
      return uVar2;
    }
    F_00cccbd0(param_1 + 0x1a GEN_EDX_ARG,param_2);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0x1a] + 0x10))))(param_1 + 0x1a); fVar1 = extraout_ST0;
    iVar4 = 0;
    if (0 < param_1[0xaf]) {
      piVar3 = param_1 + 0xb0;
      do {
        fVar1 = gen_bits2f(F_00cd68c0(*piVar3 GEN_EDX_ARG,(float)extraout_ST0));
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < param_1[0xaf]);
    }
  }
  return (uint)gen_fl2bits(fVar1);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2620(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd2620u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x9, 7, 4);
  byte bVar1;
  uint in_ecx;
  byte bVar2;
  
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc4))))(param_1 GEN_EDX_FWD);
  bVar2 = 0;
  bVar1 = (byte)in_ecx;
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) & 0xffffff00;
  if (bVar1 != 0) {
    do {
      in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xcc))))(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
      if (in_ecx != 0) {
        F_00cd6890(in_ecx GEN_EDX_ARG,param_2);
      }
      bVar2 = bVar2 + 1;
      (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),bVar2);
    } while (bVar2 < bVar1);
  }
  return in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf23 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd2680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd2680u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  F_00cccc10(in_ecx + 0x20 GEN_EDX_FWD,param_2);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf24 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd26a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd26a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  F_00cccc10(in_ecx + 0x44 GEN_EDX_FWD,param_2);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd26c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd26c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  code * pcVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  double dVar7;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x164))))(param_1 GEN_EDX_FWD);
  if ((char)uVar4 == '\0') {
    pcVar3 = *((gen_code32 *)GEN_TOP((param_1[0xdc] + 0x10)));
    param_1[0x41] = (int)gen_fl2bits(param_2);
    extraout_ST0 = (*pcVar3)(param_1 + 0xdc);
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[8] + 0x10))))(param_1 + 8);
    fVar1 = gen_bits2f(param_1[0x40]);
    fVar2 = gen_bits2f(param_1[0x41]);
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0x4e] + 0x10))))(param_1 + 0x4e);
    uVar4 = (uint)(ulonglong)gen_d2bits(dVar7); dVar7 = extraout_ST0_01;
    if (0 < param_1[0xaf]) {
      piVar5 = param_1 + 0xb0;
      iVar6 = 0;
      do {
        uVar4 = F_00cd8a30(*piVar5 GEN_EDX_ARG,((float)GEN_TOF((extraout_ST0_01 *
                                            (float10)((double)GEN_TOD((((extraout_ST0_00 *
                                                               (float10)(double)extraout_ST0) *
                                                              (float10)fVar1) * (float10)fVar2)))))));
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < param_1[0xaf]);
    }
  }
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2770(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd2770u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  int iVar4;
  float10 extraout_ST0;
  
  *((float *)GEN_TOP((param_1 + 0x108))) = param_2;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x44))) + 0x10))))(param_1 + 0x44);
  fVar1 = *((float *)GEN_TOP((param_1 + 0x108))); fVar2 = extraout_ST0;
  iVar4 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 700)))) {
    puVar3 = ((undefined4 *)GEN_TOP((param_1 + 0x2c0)));
    do {
      fVar2 = gen_bits2f(F_00cd68a0(*puVar3 GEN_EDX_FWD,(float)(extraout_ST0 * (float10)fVar1)));
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *((int *)GEN_TOP((param_1 + 700))));
  }
  return (uint)gen_fl2bits(fVar2);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf37 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd27d0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcd27d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x168))))(param_1 GEN_EDX_FWD);
  if (((char)uVar1 == '\0') && (iVar2 = 0, 0 < param_1[0xaf])) {
    piVar3 = param_1 + 0xb0;
    do {
      F_00cd7720(*piVar3 GEN_EDX_ARG,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < param_1[0xaf]);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf66 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cd2830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd2830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pRVar1;
  int iVar2;
  float fVar3;
  float local_8;
  
  local_8 = (float)(float10)0;
  iVar2 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar1 = this + 0x2c0;
    do {
      fVar3 = F_00cd76f0(*(undefined * PTR32 *)pRVar1 GEN_EDX_FWD);
      if (!((float10)fVar3 <= (float10)local_8) != (GEN_ISNAN((float10)local_8) || GEN_ISNAN((float10)fVar3))) {
        local_8 = fVar3;
      }
      iVar2 = iVar2 + 1;
      pRVar1 = pRVar1 + 4;
    } while (iVar2 < *(int *)(this + 700));
  }
  return local_8;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf67 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00cd2890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd2890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  
  if (0 < *(int *)(this + 700)) {
    fVar1 = F_00cd83d0(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_FWD);
    return fVar1;
  }
  return (float)(float10)0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf77 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd28b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd28b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (byte)(*((uint *)GEN_TOP((in_ecx + 0xf8))) >> 2) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf78 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd28c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd28c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 700))) == 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf79 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd28d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd28d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  undefined * this_00;
  bool bVar2;
  
  bVar2 = true;
  if (((byte)this[300] & 1) == 0) {
    this_00 = ((undefined *)GEN_TOP(F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),(uint)(byte)this[0x11])));
    bVar1 = F_00cbb1b0(this_00 GEN_EDX_ARG);
    F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar2 = bVar1 != 0;
  }
  return bVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf73 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cd2910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd2910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  undefined * this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  undefined * pRVar5;
  int iVar6;
  uint uVar7;
  undefined * pRVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  pbVar4 = param_1;
  pbVar4[0] = 0;
  pbVar4[1] = 0;
  pbVar4[2] = 0;
  pbVar4[3] = 0;
  pbVar4[4] = 0;
  pbVar4[5] = 0;
  pbVar4[6] = 0;
  pbVar4[7] = 0;
  pbVar4[8] = 0;
  pbVar4[9] = 0;
  pbVar4[10] = 0;
  pbVar4[0xb] = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar8 = this + 0x2c0;
    do {
      bVar1 = F_00cd65b0(*(undefined4 *)pRVar8 GEN_EDX_FWD);
      if (bVar1 != 0) {
        return 0;
      }
      bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x28)),1);
      uVar7 = (*(uint *)(gen_frame + 0x28));
      iVar2 = (*(int *)(gen_frame + 0x38));
      while ((*(uint *)(gen_frame + 0x28)) = uVar7, (*(int *)(gen_frame + 0x38)) = iVar2, bVar1 != 0) {
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x2c)) + param_2;
        (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x4));
        iVar6 = 0;
        (*(byte *)(gen_frame + 0xf)) = 1;
        if (0 < *(int *)(this + 700)) {
          pRVar5 = this + 0x2c0;
          do {
            if (iVar6 != (*(int *)(gen_frame + 0x0))) {
              bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar5 GEN_EDX_ARG,((byte *)(gen_frame + 0x10)),1);
              while (bVar1 != 0) {
                uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 4)) + param_2;
                (*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 4)) = uVar3;
                if (((iVar2 == (*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 16))) && (uVar7 <= uVar3)) &&
                   ((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0)) <= (*(uint *)(gen_frame + 0x4)))) {
                  (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
                  if (uVar7 < (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0))) {
                    uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x10)) + 0));
                  }
                  if (uVar3 < (*(uint *)(gen_frame + 0x4))) {
                    (*(uint *)(gen_frame + 0x4)) = uVar3;
                  }
                  break;
                }
                this_00 = *(undefined * PTR32 *)pRVar5;
                bVar1 = F_00cd7de0(this_00 GEN_EDX_ARG,((byte *)(gen_frame + 0x10)),0);
              }
            }
            iVar6 = iVar6 + 1;
            pRVar5 = pRVar5 + 4;
          } while (iVar6 < *(int *)(this + 700));
        }
        if ((*(int *)(gen_frame + 0x38)) == 0xc) {
          if (*param_1 < (*(byte *)(gen_frame + 0xf))) {
            *param_1 = (*(byte *)(gen_frame + 0xf));
          }
        }
        else if ((*(int *)(gen_frame + 0x38)) == 6) {
          if (param_1[1] < (*(byte *)(gen_frame + 0xf))) {
            param_1[1] = (*(byte *)(gen_frame + 0xf));
          }
        }
        else {
          if (((*(int *)(gen_frame + 0x38)) != 1) && ((*(int *)(gen_frame + 0x38)) != 0)) {
            return 0;
          }
          if (param_1[2] < (*(byte *)(gen_frame + 0xf))) {
            param_1[2] = (*(byte *)(gen_frame + 0xf));
          }
        }
        if (-1 < (*(int *)(gen_frame + 0x3c))) {
          iVar2 = 0;
          if (param_1[3] != 0) {
            pbVar4 = param_1 + 4;
            do {
              if (*(short *)pbVar4 == (*(int *)(gen_frame + 0x3c))) goto LAB_00cd2a7b;
              iVar2 = iVar2 + 1;
              pbVar4 = pbVar4 + 2;
            } while (iVar2 < (int)(uint)param_1[3]);
          }
          *(short *)(param_1 + (uint)param_1[3] * 2 + 4) = (short)(*(int *)(gen_frame + 0x3c));
          param_1[3] = param_1[3] + 1;
        }
LAB_00cd2a7b: ;
        bVar1 = F_00cd7de0(*(undefined * PTR32 *)pRVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x28)),0);
        uVar7 = (*(uint *)(gen_frame + 0x28));
        iVar2 = (*(int *)(gen_frame + 0x38));
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      pRVar8 = pRVar8 + 4;
    } while ((*(int *)(gen_frame + 0x0)) < *(int *)(this + 700));
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf87 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd2ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd2ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_00d2ccd0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(uint)(byte)this[0x11]);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xd4))))(piVar2 GEN_EDX_ARG);
  if (((char)uVar3 != '\0') && (((byte)this[0x14] & 2) != 0)) {
LAB_00cd2b36: ;
    F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xcc))))(piVar2 GEN_EDX_ARG);
  if ((char)uVar3 != '\0') {
    bVar1 = F_00cbb420(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (bVar1 != 0) goto LAB_00cd2b36;
  }
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf88 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd2b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd2b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int iVar2;
  undefined * pRVar3;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_FWD);
  }
  if ((REFG(char, 0x15d7798) != '\0') && (iVar2 = 0, this[0x1cc] != (undefined1)0x0)) {
    pRVar3 = this + 0x1d8;
    do {
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      }
      bVar1 = F_00cca610(&REFG(char, 0x15d7798) GEN_EDX_ARG,(uint)(byte)*pRVar3);
      if (bVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      pRVar3 = pRVar3 + 0x10;
    } while (iVar2 < (int)(uint)(byte)this[0x1cc]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf29 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2bf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd2bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x178))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd2c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd2c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x178)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf57 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd2c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd2c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x10))) * 1000 + (uint)*((ushort *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf97 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd2c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd2c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x1c)));
}

/* ref: FUN_00cd2c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2c40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd2c40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)0;
  fVar3 = (float10)param_2;
  if (!(fVar1 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar1))) {
    fVar3 = (float10)(float)fVar1;
  }
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x8c GEN_EDX_FWD,(float)fVar3);
    return 0;
  }
  uVar2 = F_00cccd90(param_1 + 0x8c GEN_EDX_ARG,(float)fVar3,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf108 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2c90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd2c90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc8, 8, 4);
  int * piVar1;
  undefined * this;
  char cVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  undefined4 * puVar6;
  bool bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uVar15;
  float * pfVar16;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4);
  (*(uint *)(gen_frame + 0xc0)) = uVar3;
  if (*((char *)GEN_TOP((param_1 + 0x340))) == '\0') {
    iVar4 = 0;
    if (0 < *((int *)GEN_TOP((param_1 + 700)))) {
      puVar6 = ((undefined4 *)GEN_TOP((param_1 + 0x2c0)));
      do {
        uVar3 = F_00cd6c00(*puVar6 GEN_EDX_FWD,param_2);
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar4 < *((int *)GEN_TOP((param_1 + 700))));
      return uVar3;
    }
  }
  else {
    iVar4 = 0;
    if (0 < *((int *)GEN_TOP((param_1 + 700)))) {
      piVar5 = ((int *)GEN_TOP((param_1 + 0x2c0)));
      do {
        fVar10 = (float10)param_2;
        if ((*((uint *)GEN_TOP((param_1 + 0x14))) & 0x5000) == 0) {
          if (*((int *)GEN_TOP((*piVar5 + 4))) == 0) {
            cVar2 = '\0';
          }
          else {
            piVar1 = *((int * PTR32 *)GEN_TOP((*piVar5 + 4)));
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG);
            cVar2 = (char)uVar3;
          }
          fVar9 = (float10)param_2;
          fVar10 = (float10)0;
          if (cVar2 == 4) {
            pfVar16 = &(*(float *)(gen_frame + 0x40));
            uVar15 = 4;
            (*(float *)(gen_frame + 0x40)) = (float)((float10)1 - fVar9);
            (*(float *)(gen_frame + 0x54)) = (float)((float10)1 - fVar9);
            (*(float *)(gen_frame + 0x44)) = (float)fVar10;
            (*(float *)(gen_frame + 0x4c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x50)) = (float)fVar10;
            (*(float *)(gen_frame + 0x58)) = (float)fVar10;
            (*(float *)(gen_frame + 0x60)) = (float)fVar10;
            (*(float *)(gen_frame + 0x64)) = (float)fVar10;
            (*(float *)(gen_frame + 0x68)) = (float)fVar10;
            (*(float *)(gen_frame + 0x6c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x70)) = (float)fVar10;
            (*(float *)(gen_frame + 0x74)) = (float)fVar10;
            (*(float *)(gen_frame + 0x78)) = (float)fVar10;
            (*(float *)(gen_frame + 0x7c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x80)) = (float)fVar10;
            (*(float *)(gen_frame + 0x84)) = (float)fVar10;
            (*(float *)(gen_frame + 0x88)) = (float)fVar10;
            (*(float *)(gen_frame + 0x8c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x90)) = (float)fVar10;
            (*(float *)(gen_frame + 0x94)) = (float)fVar10;
            (*(float *)(gen_frame + 0x98)) = (float)fVar10;
            (*(float *)(gen_frame + 0x9c)) = (float)fVar10;
            (*(float *)(gen_frame + 0xa0)) = (float)fVar10;
            (*(float *)(gen_frame + 0xa4)) = (float)fVar10;
            (*(float *)(gen_frame + 0xa8)) = (float)fVar10;
            (*(float *)(gen_frame + 0xac)) = (float)fVar10;
            (*(float *)(gen_frame + 0xb0)) = (float)fVar10;
            (*(float *)(gen_frame + 0xb4)) = (float)fVar10;
            (*(float *)(gen_frame + 0xb8)) = (float)fVar10;
            (*(float *)(gen_frame + 0xbc)) = (float)fVar10;
            (*(float *)(gen_frame + 0x48)) = param_2;
            (*(float *)(gen_frame + 0x5c)) = param_2;
          }
          else {
            uVar3 = (int)cVar2 - 6;
            if (uVar3 != 0) goto LAB_00cd2f9e;
            fVar11 = (float10)REFG(float, 0x1088068);
            if (fVar9 <= fVar11) {
              fVar13 = GEN_X87((float10)1 - fVar9 * (float10)*(double *)&REFG(undefined, 0x1092098));
            }
            else {
              fVar13 = (float10)0;
            }
            fVar14 = (float10)*(double *)&REFG(undefined, 0x1092098);
            if ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar11)) || fVar9 < fVar11 == (fVar9 == fVar11)) {
              fVar12 = GEN_X87((float10)1 - (fVar9 - (float10)REFG(double, 0x1088108)) * fVar14);
            }
            else {
              fVar12 = GEN_X87(fVar9 * fVar14);
            }
            if ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar11)) || fVar9 < fVar11 == (fVar9 == fVar11)) {
              fVar14 = GEN_X87((fVar9 - (float10)REFG(double, 0x1088108)) * fVar14);
            }
            else {
              fVar14 = (float10)0;
            }
            pfVar16 = &(*(float *)(gen_frame + 0x0));
            (*(float *)(gen_frame + 0x0)) = (float)fVar13;
            uVar15 = 6;
            (*(float *)(gen_frame + 0x4)) = (float)fVar10;
            (*(float *)(gen_frame + 0x8)) = (float)fVar12;
            (*(float *)(gen_frame + 0xc)) = (float)fVar10;
            (*(float *)(gen_frame + 0x10)) = (float)fVar14;
            (*(float *)(gen_frame + 0x2c)) = (float)fVar14;
            (*(float *)(gen_frame + 0x14)) = (float)fVar10;
            (*(float *)(gen_frame + 0x18)) = (float)fVar10;
            (*(float *)(gen_frame + 0x20)) = (float)fVar10;
            (*(float *)(gen_frame + 0x28)) = (float)fVar10;
            (*(float *)(gen_frame + 0x30)) = (float)fVar10;
            (*(float *)(gen_frame + 0x34)) = (float)fVar10;
            (*(float *)(gen_frame + 0x38)) = (float)fVar10;
            (*(float *)(gen_frame + 0x3c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x40)) = (float)fVar10;
            (*(float *)(gen_frame + 0x44)) = (float)fVar10;
            (*(float *)(gen_frame + 0x48)) = (float)fVar10;
            (*(float *)(gen_frame + 0x4c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x50)) = (float)fVar10;
            (*(float *)(gen_frame + 0x54)) = (float)fVar10;
            (*(float *)(gen_frame + 0x58)) = (float)fVar10;
            (*(float *)(gen_frame + 0x5c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x60)) = (float)fVar10;
            (*(float *)(gen_frame + 0x64)) = (float)fVar10;
            (*(float *)(gen_frame + 0x68)) = (float)fVar10;
            (*(float *)(gen_frame + 0x6c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x70)) = (float)fVar10;
            (*(float *)(gen_frame + 0x74)) = (float)fVar10;
            (*(float *)(gen_frame + 0x78)) = (float)fVar10;
            (*(float *)(gen_frame + 0x7c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x80)) = (float)fVar10;
            (*(float *)(gen_frame + 0x84)) = (float)fVar10;
            (*(float *)(gen_frame + 0x88)) = (float)fVar10;
            (*(float *)(gen_frame + 0x8c)) = (float)fVar10;
            (*(float *)(gen_frame + 0x90)) = (float)fVar10;
            (*(float *)(gen_frame + 0x94)) = (float)fVar10;
            (*(float *)(gen_frame + 0x98)) = (float)fVar10;
            (*(float *)(gen_frame + 0x9c)) = (float)fVar10;
            (*(float *)(gen_frame + 0xa0)) = (float)fVar10;
            (*(float *)(gen_frame + 0xa4)) = (float)fVar10;
            (*(float *)(gen_frame + 0xa8)) = (float)fVar10;
            (*(float *)(gen_frame + 0xac)) = (float)fVar10;
            (*(float *)(gen_frame + 0xb0)) = (float)fVar10;
            (*(float *)(gen_frame + 0xb4)) = (float)fVar10;
            (*(float *)(gen_frame + 0xb8)) = (float)fVar10;
            (*(float *)(gen_frame + 0xbc)) = (float)fVar10;
            (*(float *)(gen_frame + 0x1c)) = (float)fVar13;
            (*(float *)(gen_frame + 0x24)) = (float)fVar12;
          }
          this = ((undefined *)GEN_TOP(*piVar5));
          (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x54));
          (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x5c));
          uVar3 = F_00cd6720(this GEN_EDX_ARG,uVar15,pfVar16);
        }
        else {
          bVar7 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar10);
          if (bVar7 == (bVar7 || (float10)0 == fVar10)) {
            bVar7 = GEN_ISNAN((float10)1) || GEN_ISNAN(fVar10);
            if (bVar7 == (bVar7 || (float10)1 == fVar10)) {
              fVar9 = (float10)REFG(float, 0x10928e4);
              bVar7 = GEN_ISNAN(fVar9) || GEN_ISNAN(fVar10);
              bVar8 = bVar7 || fVar9 == fVar10;
              uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                               (ushort)!(fVar10 <= fVar9) << 8 | (ushort)bVar7 << 10 |
                               (ushort)bVar8 << 0xe);
              if (bVar7 != bVar8) {
                uVar3 = F_00cd6e00(*piVar5 GEN_EDX_ARG,2);
              }
            }
            else {
              uVar3 = F_00cd6e00(*piVar5 GEN_EDX_ARG,1);
            }
          }
          else {
            uVar3 = F_00cd6e00(*piVar5 GEN_EDX_ARG,0);
          }
        }
LAB_00cd2f9e: ;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < *((int *)GEN_TOP((param_1 + 700))));
    }
  }
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd2fd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd2fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 0x20))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_FWD);
  if (uVar2 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*((ushort *)GEN_TOP((param_1 + 0x1c)));
  }
  uVar5 = 3;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG,uVar2);
  uVar2 = F_00ce9640(uVar2,uVar5);
  if (uVar2 == 0) {
    *((undefined1 *)GEN_TOP((param_1 + 0x36d))) = (undefined1)param_2;
    return 0;
  }
  if (param_2 < *((byte *)GEN_TOP((uVar2 + 2)))) {
    uVar3 = (uint)*((byte *)GEN_TOP((param_1 + 0x36d)));
    if ((uVar3 != param_2) || ((char)param_3 != '\0')) {
      if (param_2 < uVar3) {
        iVar4 = *((int *)GEN_TOP((uVar2 + 0x1c + uVar3 * 0x10)));
      }
      else {
        iVar4 = *((int *)GEN_TOP((uVar2 + 0x18 + uVar3 * 0x10)));
      }
      if ((char)param_3 != '\0') {
        iVar4 = 0;
      }
      fVar1 = *((float *)GEN_TOP((uVar2 + 0x14 + param_2 * 0x10)));
      if (iVar4 != 0) {
        uVar2 = F_00cccd90(param_1 + 0x370 GEN_EDX_ARG,fVar1,iVar4);
        *((undefined1 *)GEN_TOP((param_1 + 0x36d))) = (undefined1)param_2;
        return uVar2;
      }
      F_00cccbd0(param_1 + 0x370 GEN_EDX_ARG,fVar1);
      *((undefined1 *)GEN_TOP((param_1 + 0x36d))) = (undefined1)param_2;
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf75 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd30a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd30a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  bVar1 = F_00ce9390(this + 0x10);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x20))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG);
  if (uVar2 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(this + 0x1c);
  }
  uVar4 = 3;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar2);
  puVar3 = ((undefined4 *)GEN_TOP(F_00ce96e0(uVar2,uVar4)));
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf34 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd3110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd3110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pRVar2;
  
  if ((this[0x340] != (undefined1)0x0) && (iVar1 = 0, 0 < *(int *)(this + 700))) {
    pRVar2 = this + 0x2c0;
    do {
      F_00cd8d60(*(undefined * PTR32 *)pRVar2 GEN_EDX_FWD,iVar1,0);
      iVar1 = iVar1 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar1 < *(int *)(this + 700));
  }
  return;
}

/* ref: FUN_00cd3150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd3150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd3150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  bVar2 = GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x28)))) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x24))));
  if (bVar2 == (bVar2 || (float10)*((float *)GEN_TOP((in_ecx + 0x28))) == (float10)*((float *)GEN_TOP((in_ecx + 0x24)))))
  {
    F_00cccc70(in_ecx + 0x20 GEN_EDX_FWD);
  }
  bVar2 = GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x4c)))) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x48))));
  if (bVar2 == (bVar2 || (float10)*((float *)GEN_TOP((in_ecx + 0x4c))) == (float10)*((float *)GEN_TOP((in_ecx + 0x48)))))
  {
    F_00cccc70(in_ecx + 0x44 GEN_EDX_ARG);
  }
  bVar2 = GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x70)))) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x6c))));
  if (bVar2 == (bVar2 || (float10)*((float *)GEN_TOP((in_ecx + 0x70))) == (float10)*((float *)GEN_TOP((in_ecx + 0x6c)))))
  {
    F_00cccc70(in_ecx + 0x68 GEN_EDX_ARG);
  }
  fVar4 = (float10)*((float *)GEN_TOP((in_ecx + 0x90)));
  fVar5 = (float10)*((float *)GEN_TOP((in_ecx + 0x94)));
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
  if (bVar2 == bVar3) {
    F_00cccc70(in_ecx + 0x8c GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00cd31c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd31c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd31c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x18))))((int)this + 0x20);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 0x18))))((int)this + 0x44);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x68))) + 0x18))))((int)this + 0x68);
  return (uint)(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + 0x18))))((int)this + 0x8c));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf38 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd3200(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcd3200u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  F_00cccbd0(param_1 + 0xb0 GEN_EDX_FWD,param_2);
  fVar4 = (float10)param_2;
  fVar5 = (float10)param_3;
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  if (bVar2 == bVar3) {
    uVar1 = F_00cccd90(param_1 + 0xb0 GEN_EDX_ARG,param_3,param_4);
    return uVar1;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),
                  (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
}

/* ref: FUN_00cd3250 */
GEN_LIB GEN_FRAME uint F_00cd3250(GEN_P(undefined4 * in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd3250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00d2ccf0()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xcc))))
                    (piVar1 GEN_EDX_ARG,*in_esi,in_esi[1],in_esi[2],in_esi[3],param_2,param_3);
  return uVar2;
}

/* ref: FUN_00cd3290 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cd3290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(undefined4 * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xcd3290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_GS(0x3c, 4, 4);
  float fVar1;
  char cVar2;
  byte bVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x34)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38));
  bVar3 = 0;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(byte *)(gen_frame + 0x23)) = 0;
  if ((*((int *)GEN_TOP(((int)this + 0x134))) != 0) && (iVar7 = 0, *((char *)GEN_TOP((param_1 + 3))) != '\0')) {
    do {
      uVar6 = (uint)*((byte *)GEN_TOP((param_1 + iVar7)));
      bVar3 = 0;
      switch((unsigned int)(uintptr_t)(uVar6 & 0xf)) {
      case 0: ;
        bVar3 = 1;
        break;
      case 1: ;
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(int * PTR32 *)(gen_frame + 0x1c))[0x59] / (float10)*(double *)&REFG(undefined, 0x1097260));
        bVar3 = F_00ce9ad0(uVar6,(int)((double)(float)((float10)(*(int * PTR32 *)(gen_frame + 0x1c))[0x59] /
                                                        (float10)*(double *)&REFG(undefined, 0x1097260)) *
                                        *(double *)&REFG(undefined, 0x10912a8)),
                             *((undefined4 *)GEN_TOP((param_1 + 4 + iVar7 * 4))));
        break;
      case 2: ;
        fVar10 = *((float *)GEN_TOP((param_1 + 4 + iVar7 * 4)));
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x1c))[8] + 0x10))))((*(int * PTR32 *)(gen_frame + 0x1c)) + 8);
        fVar8 = extraout_ST0;
        goto LAB_00cd3339;
      case 3: ;
        piVar4 = ((int *)GEN_TOP(F_00d2ccf0()));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xcc))))
                  (piVar4 GEN_EDX_ARG,*param_6,param_6[1],param_6[2],param_6[3],&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x0)));
        puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x19c))))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)))));
        piVar4 = ((int *)GEN_TOP(F_00d2ccf0()));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xcc))))
                  (piVar4 GEN_EDX_ARG,*puVar5,puVar5[1],puVar5[2],puVar5[3],&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x4)));
        (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x4)));
        fVar8 = (float10)*((float *)GEN_TOP((param_1 + 4 + iVar7 * 4)));
        fVar10 = (float)(fVar8 * fVar8);
        (*(float *)(gen_frame + 0x14)) = fVar10;
        fVar8 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x4))));
        fVar9 = GEN_X87((float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x10))));
        fVar1 = (float)(fVar9 * fVar9 + fVar8 * fVar8);
        (*(float *)(gen_frame + 0x14)) = fVar1;
        fVar8 = (float10)fVar1;
LAB_00cd3339: ;
        bVar3 = F_00ce9bb0((uint)*((byte *)GEN_TOP((param_1 + iVar7))),(float)fVar8,fVar10);
        break;
      case 4: ;
        bVar3 = F_00ce9ad0(uVar6,param_2,*((undefined4 *)GEN_TOP((param_1 + 4 + iVar7 * 4))));
        break;
      case 5: ;
        bVar3 = F_00ce9ad0(uVar6,(uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x12))) - param_3,
                             *((undefined4 *)GEN_TOP((param_1 + 4 + iVar7 * 4))));
        break;
      case 6: ;
        if (param_4 != 0 || param_5 != 0) {
          bVar3 = F_00ce9ad0(uVar6,(*(int * PTR32 *)(gen_frame + 0x1c))[0x60],param_4);
        }
        break;
      default: ;
        bVar3 = 0;
      }
      if (iVar7 == 0) {
        (*(byte *)(gen_frame + 0x23)) = bVar3;
      }
      else {
        cVar2 = *((char *)GEN_TOP((param_1 + 1 + iVar7)));
        if (cVar2 == '\0') {
          (*(byte *)(gen_frame + 0x23)) = (*(byte *)(gen_frame + 0x23)) & bVar3;
        }
        else if (cVar2 == '\x01') {
          (*(byte *)(gen_frame + 0x23)) = (*(byte *)(gen_frame + 0x23)) | bVar3;
        }
        else {
          (*(byte *)(gen_frame + 0x23)) = bVar3;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*((byte *)GEN_TOP((param_1 + 3))));
    bVar3 = (*(byte *)(gen_frame + 0x23));
    if ((*(byte *)(gen_frame + 0x23)) != 0) {
      (*(int * PTR32 *)(gen_frame + 0x1c))[0x4d] = (*(int * PTR32 *)(gen_frame + 0x1c))[0x4d] + 1;
    }
  }
  return bVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf86 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd34d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcd34d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x154))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x150))))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf62 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd34f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd34f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: FUN_00cd3540 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd3540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd3540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((byte *)GEN_TOP(((int)this + 0x368))) < 8) {
    *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0x368))) * 4 + 0x348))) = param_1;
    *((char *)GEN_TOP(((int)this + 0x368))) = *((char *)GEN_TOP(((int)this + 0x368))) + '\x01';
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd3570 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd3570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd3570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (*((char *)GEN_TOP(((int)this + 0x368))) != '\0') {
    do {
      bVar1 = F_00cc2c00(*((undefined4 *)GEN_TOP(((int)this + (uint)bVar2 * 4 + 0x348))));
      if (bVar1 != 0) {
        return 0;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < *((byte *)GEN_TOP(((int)this + 0x368))));
  }
  return 1;
}

/* ref: FUN_00cd3600 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd3600(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd3600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  char * pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = *((int *)GEN_TOP((param_1 + iVar3 * 8)));
    if (iVar2 < 0) {
      pcVar1 = ((char *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
      *pcVar1 = *pcVar1 + param_3;
      *((int *)GEN_TOP((param_1 + iVar3 * 8))) = param_2;
      *((char *)GEN_TOP((param_1 + 0x80))) = *((char *)GEN_TOP((param_1 + 0x80))) + '\x01';
      return 1;
    }
    if (iVar2 == param_2) break;
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      return 0;
    }
  }
  pcVar1 = ((char *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
  *pcVar1 = *pcVar1 + param_3;
  return 1;
}

/* ref: FUN_00cd3660 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd3660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd3660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x20) != 0) {
    piVar4 = param_1;
    do {
      uVar3 = 0;
      if (*((byte *)GEN_TOP(((int)this + 0x80))) == 0) {
        return 0;
      }
      piVar1 = this;
      while (*piVar1 != *piVar4) {
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 2;
        if (*((byte *)GEN_TOP(((int)this + 0x80))) <= uVar3) {
          return 0;
        }
      }
      if (*(byte *)(piVar1 + 1) < *(byte *)(piVar4 + 1)) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar2 < *(byte *)(param_1 + 0x20));
  }
  return 1;
}

/* ref: FUN_00cd36d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd36d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd36d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*((char *)GEN_TOP((param_1 + 0x80))) != '\0') {
    do {
      cVar2 = *((char *)GEN_TOP((param_1 + 4 + uVar6 * 8)));
      iVar3 = *((int *)GEN_TOP((param_1 + uVar6 * 8)));
      iVar5 = 0;
      do {
        iVar4 = *((int *)GEN_TOP(((int)this + iVar5 * 8)));
        if (iVar4 < 0) {
          pcVar1 = ((char *)GEN_TOP(((int)this + iVar5 * 8 + 4)));
          *pcVar1 = *pcVar1 + cVar2;
          *((int *)GEN_TOP(((int)this + iVar5 * 8))) = iVar3;
          *((char *)GEN_TOP(((int)this + 0x80))) = *((char *)GEN_TOP(((int)this + 0x80))) + '\x01';
          break;
        }
        if (iVar4 == iVar3) {
          pcVar1 = ((char *)GEN_TOP(((int)this + iVar5 * 8 + 4)));
          *pcVar1 = *pcVar1 + cVar2;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *((byte *)GEN_TOP((param_1 + 0x80))));
  }
  return 0;
}

/* ref: FUN_00cd3730 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd3730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd3730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((byte *)GEN_TOP(((int)this + 0x80))) != 0) {
    do {
      if ((param_1 == *((int *)GEN_TOP(((int)this + uVar1 * 8)))) &&
         (*((char *)GEN_TOP(((int)this + uVar1 * 8 + 4))) != '\0')) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *((byte *)GEN_TOP(((int)this + 0x80))));
  }
  return 0;
}

/* ref: FUN_00cd3770 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd3770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd3770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((byte *)GEN_TOP((param_1 + 0x80))) != 0) {
    do {
      uVar1 = 0;
      if (*((byte *)GEN_TOP(((int)this + 0x80))) != 0) {
        do {
          if ((*((int *)GEN_TOP((param_1 + uVar2 * 8))) == *((int *)GEN_TOP(((int)this + uVar1 * 8)))) &&
             (*((char *)GEN_TOP(((int)this + uVar1 * 8 + 4))) != '\0')) {
            return 1;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < *((byte *)GEN_TOP(((int)this + 0x80))));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *((byte *)GEN_TOP((param_1 + 0x80))));
  }
  return 0;
}

/* ref: FUN_00cd37e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd37e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd37e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 0;
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x0)) = (uint)this & 0xffffff00;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc4))))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    uVar4 = 0;
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
      if ((uVar2 != 0) && (piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 4))), piVar1 != ((int *)GEN_TOP(0x0)))) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        if ((char)uVar2 == '\0') {
          uVar4 = uVar4 + 1;
        }
      }
      bVar3 = bVar3 + 1;
      (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),bVar3);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc4))))(this GEN_EDX_ARG);
    } while (bVar3 < (byte)uVar2);
  }
  return uVar4;
}

/* ref: FUN_00cd38f0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd38f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined1 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xcd38f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined1 param_9 = (undefined1)gen_a8;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  byte bVar5;
  int iVar6;
  undefined * this;
  ushort * puVar7;
  uint uVar8;
  int * piVar9;
  ulonglong uVar10;
  float fVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  param_1[2] = param_2;
  (*(int *)(gen_frame + 0x20)) = param_4;
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112c6ec));
  param_1[3] = param_3;
  F_00cccb10(param_1 + 8 GEN_EDX_FWD,(float)(float10)1);
  F_00cccb10(param_1 + 0x11 GEN_EDX_ARG,(float)(float10)1);
  F_00cccb10(param_1 + 0x1a GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10(param_1 + 0x23 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10(param_1 + 0x2c GEN_EDX_ARG,(float)(float10)1);
  fVar4 = (float10)0;
  param_1[0x35] = (undefined4)gen_fl2bits((float)fVar4);
  param_1[0x36] = (undefined4)gen_fl2bits((float)fVar4);
  param_1[0x37] = (undefined4)gen_fl2bits((float)fVar4);
  fVar3 = (float10)1;
  param_1[0x38] = (undefined4)gen_fl2bits((float)fVar3);
  param_1[0x3c] = (undefined4)gen_fl2bits((float)fVar3);
  param_1[0x39] = (undefined4)gen_fl2bits((float)fVar4);
  param_1[0x3a] = (undefined4)gen_fl2bits((float)fVar4);
  param_1[0x3b] = (undefined4)gen_fl2bits((float)fVar4);
  param_1[0x3d] = GEN_FLT_TO(param_1[0x3d], REFG(float, 0x1090708));
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x40] = (undefined4)gen_fl2bits((float)fVar3);
  param_1[0x46] = 0;
  param_1[0x41] = (undefined4)gen_fl2bits((float)fVar3);
  param_1[0x47] = 0;
  param_1[0x42] = (undefined4)gen_fl2bits((float)fVar3);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  F_00cccb10(param_1 + 0x4e GEN_EDX_ARG,(float)fVar3);
  param_1[0x57] = (undefined4)gen_fl2bits((float)(float10)0);
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x65));
  *(undefined1 *)(param_1 + 0x6b) = 1;
  *(byte *)(param_1 + 0xdb) = *(byte *)(param_1 + 0xdb) & 0xfe;
  *(undefined1 *)(param_1 + 0xae) = (undefined1)param_8;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x71) = param_9;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x1c5))) = 0;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x2b9))) = 0;
  param_1[0xaf] = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  param_1[0xd1] = 0xffffffff;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0x36a))) = 0;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x36d))) = 0;
  F_00cccb10(param_1 + 0xdc GEN_EDX_ARG,(float)(float10)1);
  REFG(char, 0x15d8c00) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8be8));
  REFG(undefined4, 0x15d8be4) = gen_bits2f((int)gen_fl2bits(REFG(undefined4, 0x15d8be4)) + 1);
  if (REFG(undefined4, 0x15d8be4) == 0.0) {
    REFG(undefined4, 0x15d8be4) = 1.4013e-45;
  }
  (*(float *)(gen_frame + 0x1c)) = REFG(undefined4, 0x15d8be4);
  if (REFG(char, 0x15d8c00) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8be8));
  }
  param_1[0x6c] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
  F_00ce1250(((undefined *)GEN_TOP(param_1[3])) GEN_EDX_ARG);
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  F_00c48350(param_1 + 0x8a,0,0x90);
  if ((*(int *)(gen_frame + 0x20)) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    F_00cd1df0(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x20)));
  }
  param_1[0xd2] = 0xffffffff;
  param_1[0xd3] = 0xffffffff;
  param_1[0xd4] = 0xffffffff;
  param_1[0xd5] = 0xffffffff;
  param_1[0xd6] = 0xffffffff;
  param_1[0xd7] = 0xffffffff;
  param_1[0xd8] = 0xffffffff;
  param_1[0xd9] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xda) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  F_00c48350(param_1 + 0xb0,0,0x80);
  iVar6 = 0;
  param_1[0xaf] = 0;
  if (0 < param_6) {
    piVar9 = param_1 + 0xb0;
    do {
      iVar2 = *((int *)GEN_TOP((param_5 + iVar6 * 4)));
      if (iVar2 == 0) break;
      *piVar9 = iVar2;
      param_1[0xaf] = param_1[0xaf] + 1;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < param_6);
  }
  if (param_7 != '\0') {
    if (1 < *((uint *)GEN_TOP((param_3 + 0xc)))) {
      param_1[0x40] = param_1[6];
      this = ((undefined *)GEN_TOP(F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),(uint)*((byte *)GEN_TOP(((int)param_1 + 0x11))))));
      fVar11 = F_00cbb330(this GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x1c)) = fVar11;
      F_00cccc10(param_1 + 8 GEN_EDX_ARG,fVar11);
      F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      *(undefined1 *)(param_1 + 0x4a) = 1;
      F_00cd2250(param_1 GEN_EDX_ARG,(float)(float10)1,0);
    }
    puVar7 = ((ushort *)GEN_TOP(F_00ce9920((*(int *)(gen_frame + 0x20)),0,3)));
    if (param_1[0xaf] == 1) {
      param_1[0xd1] = (uint)*puVar7;
    }
    (*(int *)(gen_frame + 0x20)) = 0;
    if (0 < (int)param_1[0xaf]) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_1 + 0xb0;
      do {
        F_00cd8640(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))) GEN_EDX_ARG,param_1,(*(int *)(gen_frame + 0x20)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[3])) + 0x10))))(((int *)GEN_TOP(param_1[3])) GEN_EDX_ARG,(uint)*puVar7);
        if (uVar8 != 0) {
          F_00cd78c0(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))) GEN_EDX_ARG,uVar8,(uint)*puVar7);
        }
        if ((puVar7[1] & 0x4000) == 0) {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[3])) + 0x14))))(((int *)GEN_TOP(param_1[3])) GEN_EDX_ARG,(uint)puVar7[1]);
          (*(uint *)(gen_frame + 0x10)) = uVar8;
          if (uVar8 != 0) {
            piVar9 = ((int *)GEN_TOP(F_00d2ccd0()));
            (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x4c))))(piVar9 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(uint)*((byte *)GEN_TOP(((int)param_1 + 0x11))));
            uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xd4))))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            if (((char)uVar8 == '\0') || ((*(byte *)(param_1 + 5) & 2) == 0)) {
              uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xcc))))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
              if ((char)uVar8 != '\0') {
                bVar5 = F_00cbb420(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
                if (bVar5 != 0) goto LAB_00cd3d2f;
              }
              fVar11 = (*(float *)(gen_frame + 0x1c));
              (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0)) = 0;
              (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)gen_fl2bits(fVar11) & 0xffffff00);
            }
            else {
LAB_00cd3d2f: ;
              (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0)) = 1;
              (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x1c)), 1, 3),1));
            }
            F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            F_00cd7980(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x10)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))),param_8);
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
        iVar6 = (*(int *)(gen_frame + 0x20)) + 1;
        puVar7 = puVar7 + 2;
        (*(int *)(gen_frame + 0x20)) = iVar6;
      } while (iVar6 < (int)param_1[0xaf]);
    }
  }
  iVar6 = *((int *)GEN_TOP((param_1[3] + 0x10)));
  uVar1 = *(ushort *)(param_1 + 7);
  (*(undefined1 *)(gen_frame + 0x24)) = *((undefined1 *)GEN_TOP(((int)param_1 + 0x13)));
  uVar10 = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x2c)) = param_2;
  (*(uint *)(gen_frame + 0x34)) = (uint)*((byte *)GEN_TOP(((int)param_1 + 0x11)));
  (*(ulonglong *)(gen_frame + 0x38)) = uVar10;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x10001;
  (*(int *)(gen_frame + 0x30)) = iVar6 * 1000 + (uint)uVar1;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined1 *)(gen_frame + 0x48)) = (*(undefined1 *)(gen_frame + 0x24));
  (*(undefined1 *)(gen_frame + 0x49)) = 0;
  (*(undefined2 *)(gen_frame + 0x4a)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x28)),0x30);
  return (uint)param_1;
}

/* ref: FUN_00cd3df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd3df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd3df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  ushort uVar1;
  undefined4 uVar2;
  int * piVar3;
  byte bVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  uint extraout_EAX = 0;
  int iVar9;
  short * psVar10;
  
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x1c)));
  bVar4 = *((byte *)GEN_TOP(((int)this + 0x11)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112c6ec));
  iVar9 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x10)));
  (*(ulonglong *)(gen_frame + 0x10)) = F_00427d90();
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(int *)(gen_frame + 0x8)) = iVar9 * 1000 + (uint)uVar1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10002;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
  (*(uint *)(gen_frame + 0xc)) = (uint)bVar4;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x20);
  if (*((int *)GEN_TOP(((int)this + 0x124))) != 0) {
    pvVar5 = ((undefined *)GEN_TOP(F_00d2dd30(((undefined1 *)(gen_frame + 0x20)),*((int *)GEN_TOP(((int)this + 0x124))))));
    F_00cbd280(pvVar5 GEN_EDX_ARG);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  }
  F_00ce1280(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x1ac))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  piVar8 = ((int *)GEN_TOP(((int)this + 0x168)));
  iVar9 = 4;
  do {
    if (*piVar8 != 0) {
      piVar3 = ((int *)GEN_TOP(*piVar8));
      if (*((int *)GEN_TOP(((int)this + 0x10c))) == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
      }
      else {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x10c))));
      }
    }
    piVar8 = piVar8 + 1;
    iVar9 = iVar9 - 1;
  } while (iVar9 != 0);
  bVar4 = F_00ce9350((int)this + 0x10);
  if ((bVar4 != 0) && (*((char *)GEN_TOP(((int)this + 0x2b9))) != '\0')) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
    if (uVar6 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)*((ushort *)GEN_TOP(((int)this + 0x1c)));
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
    uVar6 = F_00ce95f0(uVar7,uVar6);
    pvVar5 = ((undefined *)GEN_TOP(F_00cbf660((uint)*((byte *)GEN_TOP((uVar6 + 1))))));
    if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
      F_00cc9590(pvVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar6 + 4))));
    }
  }
  iVar9 = 0;
  if (*((char *)GEN_TOP(((int)this + 0x1bb))) != '\0') {
    psVar10 = ((short *)GEN_TOP(((int)this + 0x1bc)));
    do {
      piVar8 = ((int *)GEN_TOP(F_00d2ccd0()));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x90))))(piVar8 GEN_EDX_ARG,(int)*psVar10);
      if (uVar6 != 0) {
        *((short *)GEN_TOP((uVar6 + 0x20))) = *((short *)GEN_TOP((uVar6 + 0x20))) - 1;
      }
      iVar9 = iVar9 + 1;
      psVar10 = psVar10 + 1;
    } while (iVar9 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x1bb))));
  }
  if (*((char *)GEN_TOP(((int)this + 0x1ac))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  }
  F_00cccb40((int)this + 0x370 GEN_EDX_ARG);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x194));
  F_00cccb40((int)this + 0x138 GEN_EDX_ARG);
  F_00cccb40((int)this + 0xb0 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x8c GEN_EDX_ARG);
  F_00cccb40((int)this + 0x68 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x44 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x20 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[104])REFP(0x112c544));
  return extraout_EAX;
}

/* ref: FUN_00cd3fd0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd3fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd3fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  uVar3 = F_00427d90();
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10004;
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  (*(ulonglong *)(gen_frame + 0x10)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar1 = F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x30);
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 8;
  return uVar1;
}

/* ref: FUN_00cd4080 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd4080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd4080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  uVar3 = F_00427d90();
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10005;
  (*(ulonglong *)(gen_frame + 0x10)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar1 = F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x30);
  *((uint *)GEN_TOP(((int)this + 0xf8))) = *((uint *)GEN_TOP(((int)this + 0xf8))) | 0x10;
  return uVar1;
}

/* ref: FUN_00cd4120 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd4120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd4120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x38, 8, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34));
  uVar3 = F_00427d90();
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0xc)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10006;
  (*(ulonglong *)(gen_frame + 0x10)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x30);
  *((uint *)GEN_TOP(((int)this + 0xf8))) = *((uint *)GEN_TOP(((int)this + 0xf8))) & 0xffffffef;
  uVar3 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x118))) = uVar3;
  return (uint)uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf72 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd41d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd41d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined * pRVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar2 = this + 0x2c0;
    do {
      if (*((int *)GEN_TOP((*(int *)pRVar2 + 0x1b4))) == param_1) {
        return *((uint *)GEN_TOP((*(int *)(this + iVar1 * 4 + 0x2c0) + 0x1c)));
      }
      iVar1 = iVar1 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar1 < *(int *)(this + 700));
  }
  return 0xffffffff;
}

/* ref: FUN_00cd4220 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd4220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd4220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x9, 7, 4);
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc4))))(this GEN_EDX_FWD);
  bVar3 = 0;
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) & 0xffffff00;
  if ((byte)uVar1 != 0) {
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)));
      if ((uVar2 == 0) || (*((int *)GEN_TOP((uVar2 + 0x24))) == 0)) {
        return 0;
      }
      bVar3 = bVar3 + 1;
      (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),bVar3);
    } while (bVar3 < (byte)uVar1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf27 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd4280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd4280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined * pRVar2;
  
  this[0x1ac] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x194));
  iVar1 = 0;
  pRVar2 = this + 0x168;
  do {
    if (*(int *)pRVar2 == 0) {
      *(undefined4 *)(this + iVar1 * 4 + 0x168) = param_1;
      break;
    }
    iVar1 = iVar1 + 1;
    pRVar2 = pRVar2 + 4;
  } while (iVar1 < 4);
  if (this[0x1ac] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x194));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf28 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd42d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd42d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined * pRVar2;
  
  this[0x1ac] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x194));
  iVar1 = 0;
  pRVar2 = this + 0x168;
  do {
    if (*(int *)pRVar2 == param_1) {
      *(undefined4 *)(this + iVar1 * 4 + 0x168) = 0;
      break;
    }
    iVar1 = iVar1 + 1;
    pRVar2 = pRVar2 + 4;
  } while (iVar1 < 4);
  if (this[0x1ac] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x194));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd4320(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd4320u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * in_ecx;
  int iVar1;
  float10 fVar2;
  uint uVar3;
  float10 fVar4;
  float10 extraout_ST0;
  
  fVar4 = (float10)param_2;
  fVar2 = (float10)0;
  if (fVar4 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar4)) && fVar2 != fVar4)) {
    param_2 = (float)fVar2;
  }
  in_ecx = param_1 + 0x23;
  if (param_3 == 0) {
    F_00cccbd0(in_ecx GEN_EDX_FWD,param_2);
  }
  else {
    F_00cccd90(in_ecx GEN_EDX_ARG,param_2,param_3);
  }
  iVar1 = *param_1;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x1b0))))(param_1,(undefined4)gen_fl2bits((float)extraout_ST0));
  return uVar3;
}

/* ref: FUN_00cd4390 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cd4390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcd4390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x84, 12, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80));
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  if ((*((byte *)GEN_TOP((param_1 + 6))) & 1) != 0) {
    if ((*((byte *)GEN_TOP(((int)this + 0x14))) & 0x80) != 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_FWD);
      }
      if (REFG(char, 0x15d7798) != '\0') {
        F_00ccb2c0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        uVar1 = F_00cca3f0(&REFG(char, 0x15d7798) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(uint)*((ushort *)GEN_TOP(((int)this + 0x16))));
        if (uVar1 != 0) {
          return 0;
        }
        if ((*(short *)(gen_frame + 0x4)) != *((short *)GEN_TOP((param_1 + 4)))) {
          return 0;
        }
        goto LAB_00cd4473;
      }
    }
    uVar1 = F_00ce9a60(*((undefined4 *)GEN_TOP(((int)this + 0xc))),(int)this + 0x10);
    if ((uVar1 == 0) || (*((short *)GEN_TOP((param_1 + 4))) != *((short *)GEN_TOP((uVar1 + 2))))) {
      return 0;
    }
  }
LAB_00cd4473: ;
  if ((*((byte *)GEN_TOP((param_1 + 6))) & 2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
    if (uVar1 < *((uint *)GEN_TOP((param_1 + 8)))) {
      return 0;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
    if (*((uint *)GEN_TOP((param_1 + 0xc))) < uVar1) {
      return 0;
    }
  }
  if (((*((byte *)GEN_TOP((param_1 + 6))) & 0x10) != 0) &&
     (((param_2 == 0 && param_3 == 0 || (*((int *)GEN_TOP(((int)this + 0x180))) != param_2)) ||
      (*((int *)GEN_TOP(((int)this + 0x184))) != param_3)))) {
    return 0;
  }
  *((int *)GEN_TOP(((int)this + 0x134))) = *((int *)GEN_TOP(((int)this + 0x134))) + 1;
  return 1;
}

/* ref: FUN_00cd44f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd44f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd44f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
    if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x48))) & 8) == 0) {
      bVar1 = F_00cd4220(this GEN_EDX_FWD);
      if (bVar1 == 0) {
        return 0;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x124))))(this GEN_EDX_ARG,(int)this + 0x1b8,0);
      return 1;
    }
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = param_1[2];
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf106 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd4560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd4560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined * pRVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1ac))))(this GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  if ((*((byte *)GEN_TOP((*(int *)(this + 0xc) + 0x48))) & 8) == 0) {
    bVar1 = F_00cd4220(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x124))))(this GEN_EDX_ARG,this + 0x1b8,0);
  }
  iVar4 = 0;
  if (this[0x1bb] != (undefined1)0x0) {
    pRVar5 = this + 0x1bc;
    do {
      piVar3 = ((int *)GEN_TOP(F_00d2ccd0()));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x90))))(piVar3 GEN_EDX_ARG,(int)*(short *)pRVar5);
      if (uVar2 != 0) {
        *((short *)GEN_TOP((uVar2 + 0x20))) = *((short *)GEN_TOP((uVar2 + 0x20))) + 1;
      }
      iVar4 = iVar4 + 1;
      pRVar5 = pRVar5 + 2;
    } while (iVar4 < (int)(uint)(byte)this[0x1bb]);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd45f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd45f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  float10 fVar1;
  uint uVar2;
  undefined * pRVar3;
  int iVar4;
  float10 extraout_ST0;
  
  if ((param_1 != 0) && ((*(uint *)(this + 0xf8) >> 4 & 1) == 0)) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x10))))(this + 0x20);
    fVar1 = (float10)0;
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(extraout_ST0)) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(extraout_ST0)) || fVar1 == extraout_ST0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD,(undefined4)gen_fl2bits((float)fVar1),param_1);
      uVar2 = F_00cd3fd0(this GEN_EDX_ARG,param_1);
      return uVar2;
    }
  }
  uVar2 = F_00cd3fd0(this GEN_EDX_ARG,0);
  iVar4 = 0;
  if (0 < *(int *)(this + 700)) {
    pRVar3 = this + 0x2c0;
    do {
      uVar2 = F_00cd87f0(*(undefined * PTR32 *)pRVar3 GEN_EDX_ARG,0);
      iVar4 = iVar4 + 1;
      pRVar3 = pRVar3 + 4;
    } while (iVar4 < *(int *)(this + 700));
  }
  return uVar2;
}

/* ref: FUN_00cd4680 */
GEN_LIB_GS GEN_FRAME uint F_00cd4680(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcd4680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112c524)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112c504)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cd4720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd4720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd4720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x4c, 4);
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  if ((*((uint *)GEN_TOP(((int)this + 0xf8))) >> 3 & 1) != 0) {
    return 5;
  }
  uVar6 = F_00427d90();
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x40)) = uVar3;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
  uVar7 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x10003;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar7;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x40));
  (*(ulonglong *)(gen_frame + 0x10)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x20);
  iVar1 = *((int *)GEN_TOP(((int)this + 0xf8)));
  if (iVar1 == 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
    if ((*(byte *)(piVar4 + 0x12) & 8) != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x88))))(piVar4 GEN_EDX_ARG);
      if ((char)uVar3 == '\0') goto LAB_00cd4897;
    }
    piVar4 = ((int *)GEN_TOP(F_00d2ccd0()));
    iVar1 = *piVar4;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x4c))))(piVar4,((undefined1 *)(gen_frame + 0x30)),uVar3);
    uVar3 = F_00cbaf80(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    if ((int)uVar3 < 1) {
      F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x47)) GEN_EDX_ARG,((char *)REFP(0x112c32c)),"",((char *)REFP(0x112c31c)),0x321,
                   ((char *)REFP(0x112c2e4)));
    }
    uVar3 = F_00cbaf80(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    uVar5 = F_00cbafb0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    if ((int)uVar3 < (int)uVar5) {
      uVar3 = F_00cbb480(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,1);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_ARG);
      if (uVar3 != uVar5) {
        uVar7 = 0;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),uVar3)));
        F_00cbdbf0(this_00 GEN_EDX_ARG,uVar7);
        F_00cbbdb0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 1;
      F_00cbaf10(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      return 1;
    }
    F_00cbaf10(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  }
  else {
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 2) {
      return 2;
    }
  }
LAB_00cd4897: ;
  bVar2 = F_00ce9350((int)this + 0x10);
  if ((bVar2 != 0) && (*((char *)GEN_TOP(((int)this + 0x2b9))) == '\0')) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
    if (uVar3 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*((ushort *)GEN_TOP(((int)this + 0x1c)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
    uVar3 = F_00ce95f0(uVar5,uVar3);
    uVar5 = F_00cbf660((uint)*((byte *)GEN_TOP((uVar3 + 1))));
    if (uVar5 != 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x2b9))) = 1;
      F_00cc94b0(uVar5 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((uVar3 + 8)))),*((undefined4 *)GEN_TOP((uVar3 + 4))));
    }
  }
  *((uint *)GEN_TOP(((int)this + 0xf8))) = *((uint *)GEN_TOP(((int)this + 0xf8))) | 4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf81 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd4920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd4920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pRVar4;
  uint uVar5;
  byte local_5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == *(uint *)(this + 0xc)) {
    return 1;
  }
  uVar3 = (uint)(byte)this[0x1bb];
  local_5 = 0;
  if (4 < uVar3) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112c3b8))
                    ,"",((char *)REFP(0x112c3a8)),0x610,
                    ((char *)REFP(0x112c36c)));
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    pRVar4 = this + 0x1bc;
    while( true ) {
      piVar1 = ((int *)GEN_TOP(F_00d2ccd0()));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x90))))(piVar1 GEN_EDX_ARG,(int)*(short *)pRVar4);
      if ((uVar2 != 0) && (param_1 == uVar2)) break;
      uVar5 = uVar5 + 1;
      pRVar4 = pRVar4 + 2;
      if (uVar3 <= uVar5) {
        return 0;
      }
    }
    local_5 = 1;
  }
  return local_5;
}

/* ref: FUN_00cd49f0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd49f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd49f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x23c, 4, 4);
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x234)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x238));
  uVar4 = F_00cc6440(((int *)(gen_frame + 0x40)),0x10);
  (*(uint *)(gen_frame + 0x84)) = uVar4;
  if (uVar4 == 0) {
    return 0;
  }
  if (((int *)(gen_frame + 0x40))[0] == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112c4cc),"",((char *)REFP(0x112c4bc)),0x81e, ((char *)REFP(0x112c470)));
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      if (((undefined *)GEN_TOP(((int *)(gen_frame + 0x40))[(int)(uVar5)])) != this) {
        piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x40))[(int)(uVar5)]));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc0))))(this GEN_EDX_ARG);
        (*(byte *)(gen_frame + 0x8f)) = (byte)uVar4;
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc0))))(piVar1 GEN_EDX_ARG);
        uVar4 = (*(uint *)(gen_frame + 0x84));
        if ((*(byte *)(gen_frame + 0x8f)) < (byte)uVar5) {
          return 2;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  iVar6 = 0;
  ((undefined1 *)(gen_frame + 0x120))[0x7c] = 0;
  do {
    *(undefined4 *)(((undefined1 *)(gen_frame + 0x120)) + iVar6 * 8 - 4) = 0xffffffff;
    ((undefined1 *)(gen_frame + 0x120))[(int)(iVar6 * 8)] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  (*(undefined4 *)(gen_frame + 0x19e)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x1a2)) = 0xffffffff;
  (*(undefined1 *)(gen_frame + 0x1a6)) = 0;
  ((undefined1 *)(gen_frame + 0x1ac))[0x7c] = 0;
  iVar6 = 0;
  do {
    *(undefined4 *)(((undefined1 *)(gen_frame + 0x1ac)) + iVar6 * 8 - 4) = 0xffffffff;
    ((undefined1 *)(gen_frame + 0x1ac))[(int)(iVar6 * 8)] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x10);
  (*(undefined1 *)(gen_frame + 0x232)) = 0;
  (*(undefined4 *)(gen_frame + 0x22a)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x22e)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x88)) = 0;
  F_00c48350(((int *)(gen_frame + 0x0)),0,0x40);
  (*(uint *)(gen_frame + 0x80)) = 0;
  if (uVar4 != 0) {
    do {
      piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x40))[(int)((*(uint *)(gen_frame + 0x80)))]));
      if ((((piVar1 != this) && ((*(byte *)(piVar1 + 0xdb) & 1) == 0)) && ((*(byte *)(piVar1 + 0x3e) & 3) == 0)) && ((REFG(char, 0x134ced0) == '\0' || (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x150))))(piVar1 GEN_EDX_ARG), (char)uVar4 == '\0')))) {
        ((undefined1 *)(gen_frame + 0x94))[0x7c] = 0;
        iVar6 = 0;
        do {
          *(undefined4 *)(((undefined1 *)(gen_frame + 0x94)) + iVar6 * 8 - 4) = 0xffffffff;
          ((undefined1 *)(gen_frame + 0x94))[(int)(iVar6 * 8)] = 0;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x10);
        (*(undefined1 *)(gen_frame + 0x11a)) = 0;
        (*(undefined4 *)(gen_frame + 0x112)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x116)) = 0xffffffff;
        bVar3 = F_00cd3770(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x11c)));
        if (bVar3 != 0) {
          F_00cd36d0(&(*(undefined4 *)(gen_frame + 0x1a8)) GEN_EDX_ARG,((undefined4)(uint)(&(*(undefined4 *)(gen_frame + 0x90)))));
          ((int *)(gen_frame + 0x0))[(int)((*(uint *)(gen_frame + 0x88)))] = (int)piVar1;
          (*(uint *)(gen_frame + 0x88)) = (*(uint *)(gen_frame + 0x88)) + 1;
          bVar3 = F_00cd3660(&(*(undefined4 *)(gen_frame + 0x1a8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x11c)));
          if (bVar3 != 0) {
            uVar4 = 0;
            if ((*(uint *)(gen_frame + 0x88)) != 0) {
              do {
                piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar4)]));
                pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0xd0)));
                *(byte *)(piVar1 + 0xdb) = *(byte *)(piVar1 + 0xdb) | 1;
                uVar7 = 0;
                uVar5 = (*pcVar2)(piVar1);
                F_00cc2ec0(uVar5,uVar7);
                uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd0))))(piVar1 GEN_EDX_ARG);
                if (*((byte *)GEN_TOP(((int)this + 0x368))) < 8) {
                  *((uint *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP(((int)this + 0x368))) * 4 + 0x348))) = uVar5;
                  *((char *)GEN_TOP(((int)this + 0x368))) = *((char *)GEN_TOP(((int)this + 0x368))) + '\x01';
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < (*(uint *)(gen_frame + 0x88)));
            }
            return 1;
          }
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x80)) + 1;
      (*(uint *)(gen_frame + 0x80)) = uVar4;
    } while (uVar4 < (*(uint *)(gen_frame + 0x84)));
  }
  return 0;
}

/* ref: FUN_00cd4d10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd4d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd4d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  
  *((short *)GEN_TOP(((int)this + 0x36a))) = *((short *)GEN_TOP(((int)this + 0x36a))) + (short)param_1;
  if (1000 < *((ushort *)GEN_TOP(((int)this + 0x36a)))) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xd0)));
    uVar5 = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 4;
    uVar3 = (*pcVar1)(this);
    F_00cc2ec0(uVar3,uVar5);
    *((undefined2 *)GEN_TOP(((int)this + 0x36a))) = 0;
  }
  bVar4 = 0;
  if (*((char *)GEN_TOP(((int)this + 0x368))) != '\0') {
    do {
      bVar2 = F_00cc2c00(*((undefined4 *)GEN_TOP(((int)this + (uint)bVar4 * 4 + 0x348))));
      if (bVar2 != 0) {
        return 0;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < *((byte *)GEN_TOP(((int)this + 0x368))));
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 4;
  (*pcVar1)(this);
  return 1;
}

/* ref: FUN_00cd4db0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cd4db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd4db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  ulonglong uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_ARG);
  uVar6 = F_00427d90();
  (*(ulonglong *)(gen_frame + 0x2c)) = uVar6;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x10))))(((int *)GEN_TOP(((int)this + 0x20))));
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 0x10))))((int)this + 0x44);
  (*(float *)(gen_frame + 0x34)) = (float)extraout_ST0_00;
  (*(float *)(gen_frame + 0x58)) = (float)extraout_ST0;
  (*(uint *)(gen_frame + 0x44)) = uVar4;
  (*(float *)(gen_frame + 0x5c)) = (float)extraout_ST0_00;
  (*(uint *)(gen_frame + 0x40)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x10007;
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)(*(ulonglong *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x2c)) + 4));
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x38)),0x30);
  if ((*((uint *)GEN_TOP(((int)this + 0xf8))) & 1) == 0) {
    if ((*((uint *)GEN_TOP(((int)this + 0xf8))) & 2) == 0) {
      if ((*((int *)GEN_TOP(((int)this + 0x110))) != 0) &&
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x13c))))(this GEN_EDX_ARG), (char)uVar3 == '\0')) {
        piVar5 = ((int *)GEN_TOP(((int)this + 0x110)));
        *piVar5 = *piVar5 - param_1;
        if (*piVar5 < 0) {
          pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
          *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
          (*pcVar2)(this);
        }
      }
      if (((*((byte *)GEN_TOP(((int)this + 0xf8))) & 4) != 0) &&
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x13c))))(this GEN_EDX_ARG), (char)uVar3 == '\0')) {
        (*(longlong *)(gen_frame + 0x0)) = (longlong)(param_1 * 1000);
        *((int *)GEN_TOP(((int)this + 0x164))) =
             *((int *)GEN_TOP(((int)this + 0x164))) + (int)((ulonglong)((*(longlong *)(gen_frame + 0x0)) * 300000) / 1000000);
      }
    }
    else {
      F_00cd4d10(this GEN_EDX_ARG,param_1);
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(F_00d2ccd0()));
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(*piVar5);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x34))) + 0x4c))))(piVar5,((undefined1 *)(gen_frame + 0x24)),uVar3);
    uVar3 = F_00cbafb0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    uVar4 = F_00cbb4c0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(uVar4);
    uVar4 = F_00cbaf80(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    if ((uVar3 <= uVar4) || ((uint)gen_fl2bits((*(float *)(gen_frame + 0x34))) < uVar4)) {
      uVar3 = F_00cd37e0(this GEN_EDX_ARG);
      if (uVar3 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
        F_00cbaf10(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
        return 1;
      }
      pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
      *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 4;
      (*pcVar2)(this);
    }
    F_00cbaf10(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd4f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd4f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  undefined * this_00;
  undefined * pRVar2;
  int iVar3;
  float10 extraout_ST0;
  
  F_00cd4720(this GEN_EDX_FWD);
  if (((byte)this[0xf8] & 1) != 0) {
    return 1;
  }
  if ((*(uint *)(this + 0xf8) >> 1 & 1) != 0) {
    return 2;
  }
  this_00 = ((undefined *)GEN_TOP(F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),(uint)(byte)this[0x11])));
  bVar1 = F_00cbb1b0(this_00 GEN_EDX_ARG);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (bVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,0);
    F_00cd3150(this GEN_EDX_ARG);
    iVar3 = 0;
    if (0 < *(int *)(this + 700)) {
      pRVar2 = this + 0x2c0;
      do {
        F_00cd6460(*(undefined * PTR32 *)pRVar2 GEN_EDX_ARG);
        iVar3 = iVar3 + 1;
        pRVar2 = pRVar2 + 4;
      } while (iVar3 < *(int *)(this + 700));
    }
  }
  if (-1 < *(int *)(this + 0x160)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0),0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))
              (this GEN_EDX_ARG,*(undefined4 *)(this + 0x15c),*(undefined4 *)(this + 0x160));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1a0))))(this GEN_EDX_ARG);
  iVar3 = *(int *)this;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
  ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x1b0))))(this,(undefined4)gen_fl2bits((float)extraout_ST0));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))(this GEN_EDX_ARG,(uint)(byte)this[0x36d],1);
  if ((this[0x340] != (undefined1)0x0) && (iVar3 = 0, 0 < *(int *)(this + 700))) {
    pRVar2 = this + 0x2c0;
    do {
      F_00cd8d60(*(undefined * PTR32 *)pRVar2 GEN_EDX_ARG,iVar3,1);
      iVar3 = iVar3 + 1;
      pRVar2 = pRVar2 + 4;
    } while (iVar3 < *(int *)(this + 700));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf9 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd50e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd50e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  ushort * puVar6;
  uint uVar7;
  undefined * pRVar8;
  uint uVar9;
  int iVar10;
  undefined * pRVar11;
  bool bVar12;
  bool bVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar14;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  float10 extraout_ST0_09;
  float10 extraout_ST0_10;
  float10 extraout_ST0_11;
  float10 extraout_ST0_12;
  float10 extraout_ST0_13;
  float10 extraout_ST0_14;
  float10 extraout_ST0_15;
  float10 extraout_ST0_16;
  float10 extraout_ST0_17;
  undefined1 uVar15;
  undefined4 uVar16;
  float local_8;
  
  uVar5 = *(uint *)(this + 300);
  if ((uVar5 >> 1 & 1) != (uVar5 & 1)) {
    if ((uVar5 & 1) == 0) {
      if ((*(uint *)(this + 0xf8) >> 4 & 1) != 0) {
        F_00cd4120(this GEN_EDX_FWD,uVar5 >> 2);
        pRVar8 = this + 0xb0;
        if ((*(uint *)(this + 300) & 0xfffffffc) == 0) {
          F_00cccbd0(pRVar8 GEN_EDX_ARG,(float)(float10)1);
          this[0xd2] = (undefined1)0x1;
        }
        else {
          bVar13 = GEN_ISNAN((float10)*(float *)(this + 0xb8)) || GEN_ISNAN((float10)*(float *)(this + 0xb4));
          if (bVar13 != (bVar13 ||
                        (float10)*(float *)(this + 0xb8) == (float10)*(float *)(this + 0xb4))) {
            F_00cccbd0(pRVar8 GEN_EDX_ARG,(float)(float10)0);
          }
          F_00cccd90(pRVar8 GEN_EDX_ARG,(float)(float10)1,*(uint *)(this + 300) >> 2);
        }
        F_00cd31c0(this GEN_EDX_ARG);
        local_8 = 0.0;
        if (0 < *(int *)(this + 700)) {
          pRVar11 = this + 0x2c0;
          do {
            extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x10))))(this + 0x20);
            fVar1 = *(float *)(this + 0x100);
            fVar3 = *(float *)(this + 0x104);
            extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x138) + 0x10))))(this + 0x138);
            extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)pRVar8 + 0x10))))(pRVar8);
            F_00cd8a30(*(undefined4 *)pRVar11 GEN_EDX_ARG,
                         ((float)GEN_TOF((extraout_ST0_01 *
                                (float10)((double)GEN_TOD((extraout_ST0_00 *
                                                 (float10)((double)GEN_TOD(((extraout_ST0 * (float10)fVar1) *
                                                                  (float10)fVar3))))))))));
            F_00cd64e0(*(undefined * PTR32 *)pRVar11 GEN_EDX_ARG);
            local_8 = gen_bits2f((int)gen_fl2bits(local_8) + 1);
            pRVar11 = pRVar11 + 4;
          } while ((int)gen_fl2bits(local_8) < *(int *)(this + 700));
        }
      }
    }
    else if ((*(uint *)(this + 0xf8) >> 4 & 1) == 0) {
      if ((uVar5 & 0xfffffffc) == 0) {
        F_00cd4080(this GEN_EDX_ARG,0);
        F_00cd3150(this GEN_EDX_ARG);
        iVar10 = 0;
        if (0 < *(int *)(this + 700)) {
          pRVar8 = this + 0x2c0;
          do {
            F_00cd6460(*(undefined * PTR32 *)pRVar8 GEN_EDX_ARG);
            iVar10 = iVar10 + 1;
            pRVar8 = pRVar8 + 4;
          } while (iVar10 < *(int *)(this + 700));
        }
      }
      else {
        bVar13 = GEN_ISNAN((float10)*(float *)(this + 0xb8)) || GEN_ISNAN((float10)*(float *)(this + 0xb4));
        if (bVar13 != (bVar13 ||
                      (float10)*(float *)(this + 0xb8) == (float10)*(float *)(this + 0xb4))) {
          F_00cccbd0(this + 0xb0 GEN_EDX_ARG,(float)(float10)1);
        }
        F_00cccd90(this + 0xb0 GEN_EDX_ARG,(float)(float10)0,*(uint *)(this + 300) >> 2);
        F_00cd4080(this GEN_EDX_ARG,*(uint *)(this + 300) >> 2);
      }
    }
    uVar5 = *(uint *)(this + 300);
    *(uint *)(this + 300) = (uVar5 * 2 ^ uVar5) & 2 ^ uVar5;
  }
  F_00cd4db0(this GEN_EDX_ARG,param_1);
  local_8 = (float)(float10)1;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 0xc))))(this + 0xb0 GEN_EDX_ARG);
  if ((char)uVar5 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 8))))(this + 0xb0 GEN_EDX_ARG,param_1);
    bVar13 = GEN_ISNAN((float10)*(float *)(this + 0xb8)) || GEN_ISNAN((float10)*(float *)(this + 0xb4));
    if (bVar13 == (bVar13 || (float10)*(float *)(this + 0xb8) == (float10)*(float *)(this + 0xb4)))
    {
      extraout_ST0_05 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 0x10))))(this + 0xb0);
      local_8 = (float)extraout_ST0_05;
      extraout_ST0_06 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x370) + 0x10))))(this + 0x370);
      extraout_ST0_07 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x10))))(this + 0x20);
      fVar1 = *(float *)(this + 0x100);
      fVar3 = *(float *)(this + 0x104);
      extraout_ST0_08 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x138) + 0x10))))(this + 0x138);
      if (0 < *(int *)(this + 700)) {
        pRVar8 = this + 0x2c0;
        iVar10 = 0;
        do {
          F_00cd8a30(*(undefined4 *)pRVar8 GEN_EDX_ARG,
                       ((float)GEN_TOF(((extraout_ST0_08 *
                               (float10)((double)GEN_TOD((((extraout_ST0_07 *
                                                  (float10)(double)extraout_ST0_06) * (float10)fVar1
                                                 ) * (float10)fVar3)))) * (float10)local_8))));
          iVar10 = iVar10 + 1;
          pRVar8 = pRVar8 + 4;
        } while (iVar10 < *(int *)(this + 700));
      }
    }
    else {
      fVar1 = *(float *)(this + 0xb8);
      fVar14 = (float10)fVar1;
      bVar13 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar14);
      if (bVar13 == (bVar13 || (float10)0 == fVar14)) {
        extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x370) + 0x10))))(this + 0x370);
        extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x10))))(this + 0x20);
        fVar3 = *(float *)(this + 0x100);
        fVar2 = *(float *)(this + 0x104);
        extraout_ST0_04 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x138) + 0x10))))(this + 0x138);
        iVar10 = 0;
        if (0 < *(int *)(this + 700)) {
          pRVar8 = this + 0x2c0;
          do {
            F_00cd8a30(*(undefined4 *)pRVar8 GEN_EDX_ARG,
                         ((float)GEN_TOF(((extraout_ST0_04 *
                                 (float10)((double)GEN_TOD((((extraout_ST0_03 *
                                                    (float10)(double)extraout_ST0_02) *
                                                   (float10)fVar3) * (float10)fVar2)))) *
                                (float10)fVar1))));
            iVar10 = iVar10 + 1;
            pRVar8 = pRVar8 + 4;
          } while (iVar10 < *(int *)(this + 700));
        }
      }
      else {
        F_00cd4080(this GEN_EDX_ARG,0);
        iVar10 = 0;
        if (0 < *(int *)(this + 700)) {
          pRVar8 = this + 0x2c0;
          do {
            F_00cd8a30(*(undefined4 *)pRVar8 GEN_EDX_ARG,(float)(float10)0);
            iVar10 = iVar10 + 1;
            pRVar8 = pRVar8 + 4;
          } while (iVar10 < *(int *)(this + 700));
        }
        F_00cd3150(this GEN_EDX_ARG);
        iVar10 = 0;
        if (0 < *(int *)(this + 700)) {
          pRVar8 = this + 0x2c0;
          do {
            F_00cd6460(*(undefined * PTR32 *)pRVar8 GEN_EDX_ARG);
            iVar10 = iVar10 + 1;
            pRVar8 = pRVar8 + 4;
          } while (iVar10 < *(int *)(this + 700));
        }
      }
    }
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x138) + 0xc))))(this + 0x138 GEN_EDX_ARG);
  bVar13 = (char)uVar5 != '\0';
  if (bVar13) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x138) + 8))))(this + 0x138 GEN_EDX_ARG,param_1);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x370) + 0xc))))(this + 0x370 GEN_EDX_ARG);
  bVar12 = (char)uVar5 != '\0';
  if (bVar12) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x370) + 8))))(this + 0x370 GEN_EDX_ARG,param_1);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0xc))))(this + 0x20 GEN_EDX_ARG);
  if ((char)uVar5 == '\0') {
    if (!bVar12 && !bVar13) goto LAB_00cd55e5;
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 8))))(this + 0x20 GEN_EDX_ARG,param_1);
  }
  extraout_ST0_09 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x370) + 0x10))))(this + 0x370);
  extraout_ST0_10 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x10))))(this + 0x20);
  fVar1 = *(float *)(this + 0x100);
  fVar3 = *(float *)(this + 0x104);
  extraout_ST0_11 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x138) + 0x10))))(this + 0x138);
  iVar10 = 0;
  fVar1 = ((float)GEN_TOF(((extraout_ST0_11 *
                  (float10)((double)GEN_TOD((((extraout_ST0_10 * (float10)(double)extraout_ST0_09) *
                                    (float10)fVar1) * (float10)fVar3)))) * (float10)local_8)));
  if (0 < *(int *)(this + 700)) {
    pRVar8 = this + 0x2c0;
    do {
      F_00cd8a30(*(undefined4 *)pRVar8 GEN_EDX_ARG,fVar1);
      iVar10 = iVar10 + 1;
      pRVar8 = pRVar8 + 4;
    } while (iVar10 < *(int *)(this + 700));
  }
  fVar14 = (float10)fVar1;
  bVar13 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar14);
  if (((bVar13 != (bVar13 || (float10)0 == fVar14)) && ((*(uint *)(this + 0xf8) >> 3 & 1) != 0)) &&
     (iVar10 = 0, 0 < *(int *)(this + 700))) {
    pRVar8 = this + 0x2c0;
    do {
      F_00cd87f0(*(undefined * PTR32 *)pRVar8 GEN_EDX_ARG,0);
      iVar10 = iVar10 + 1;
      pRVar8 = pRVar8 + 4;
    } while (iVar10 < *(int *)(this + 700));
  }
LAB_00cd55e5: ;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x44) + 0xc))))(this + 0x44 GEN_EDX_ARG);
  if ((char)uVar5 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x44) + 8))))(this + 0x44 GEN_EDX_ARG,param_1);
    extraout_ST0_12 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x44) + 0x10))))(this + 0x44);
    fVar1 = *(float *)(this + 0x108);
    iVar10 = 0;
    if (0 < *(int *)(this + 700)) {
      pRVar8 = this + 0x2c0;
      do {
        F_00cd68a0(*(undefined4 *)pRVar8 GEN_EDX_ARG,(float)(extraout_ST0_12 * (float10)fVar1));
        iVar10 = iVar10 + 1;
        pRVar8 = pRVar8 + 4;
      } while (iVar10 < *(int *)(this + 700));
    }
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x68) + 0xc))))(this + 0x68 GEN_EDX_ARG);
  if ((char)uVar5 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x68) + 8))))(this + 0x68 GEN_EDX_ARG,param_1);
    extraout_ST0_13 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x68) + 0x10))))(this + 0x68);
    iVar10 = 0;
    if (0 < *(int *)(this + 700)) {
      pRVar8 = this + 0x2c0;
      do {
        F_00cd68c0(*(undefined4 *)pRVar8 GEN_EDX_ARG,(float)extraout_ST0_13);
        iVar10 = iVar10 + 1;
        pRVar8 = pRVar8 + 4;
      } while (iVar10 < *(int *)(this + 700));
    }
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0xc))))(this + 0x8c GEN_EDX_ARG);
  if ((char)uVar5 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 8))))(this + 0x8c GEN_EDX_ARG,param_1);
    iVar10 = *(int *)this;
    extraout_ST0_14 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
    ((code *)*((gen_code32 *)GEN_TOP((iVar10 + 0x1b0))))(this,(undefined4)gen_fl2bits((float)extraout_ST0_14));
  }
  F_00cd1f10(this GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x138))))(this GEN_EDX_ARG);
  if ((((char)uVar5 != '\0') && (1 < *(int *)(this + 0xfc))) &&
     ((((byte)this[0xf8] & 0x28) == 0 && (this[0x13] == (undefined1)0x1)))) {
    pRVar8 = this + 0x2c0;
    *(int *)(this + 0xfc) = *(int *)(this + 0xfc) - 1;
    bVar4 = F_00cc2aa0((uint)(byte)this[0x10],pRVar8,0);
    if (bVar4 != 0) {
      uVar9 = (uint)*(ushort *)(this + 0x1c);
      *(uint *)(this + 700) = (uint)(byte)this[0x10];
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x20))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG);
      if (uVar5 == 1) {
        uVar9 = 0;
      }
      uVar16 = 3;
      uVar15 = 0;
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar9);
      puVar6 = ((ushort *)GEN_TOP(F_00ce9920(uVar5,uVar15,uVar16)));
      extraout_ST0_15 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x370) + 0x10))))(this + 0x370);
      extraout_ST0_16 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x10))))(this + 0x20);
      fVar1 = *(float *)(this + 0x100);
      fVar3 = *(float *)(this + 0x104);
      extraout_ST0_17 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x138) + 0x10))))(this + 0x138);
      param_1 = 0;
      if (0 < *(int *)(this + 700)) {
        do {
          F_00cd8640(*(undefined * PTR32 *)pRVar8 GEN_EDX_ARG,this,param_1);
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,(uint)*puVar6);
          if (uVar5 != 0) {
            F_00cd78c0(*(undefined * PTR32 *)pRVar8 GEN_EDX_ARG,uVar5,(uint)*puVar6);
          }
          if (((puVar6[1] & 0x4000) == 0) &&
             (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x14))))
                                (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,(uint)puVar6[1]), uVar5 != 0)) {
            uVar9 = (uint)(byte)this[0x2b8];
            uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG);
            F_00cd7980(*(undefined * PTR32 *)pRVar8 GEN_EDX_ARG,uVar5,uVar7 & 0xff,uVar9);
          }
          F_00cd8a30(*(undefined4 *)pRVar8 GEN_EDX_ARG,
                       ((float)GEN_TOF(((extraout_ST0_17 *
                               (float10)((double)GEN_TOD((((extraout_ST0_16 *
                                                  (float10)(double)extraout_ST0_15) * (float10)fVar1
                                                 ) * (float10)fVar3)))) * (float10)local_8))));
          param_1 = param_1 + 1;
          pRVar8 = pRVar8 + 4;
          puVar6 = puVar6 + 2;
        } while (param_1 < *(int *)(this + 700));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1a0))))(this GEN_EDX_ARG);
    }
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x138))))(this GEN_EDX_ARG);
  return (char)uVar5 == '\0';
}

/* ref: FUN_00cd58a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd58a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd58a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  longlong uStack_18;
  
  uStack_18 = CONCAT44(param_2,param_1);
  *(int *)this = (int)((ulonglong)(uStack_18 * 300000) / 1000000);
  return (uint)this;
}

/* ref: FUN_00cd58e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd58e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd58e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(int *)this = *(int *)this + *param_1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ISound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5910(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[104])REFP(0x112c544));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cd5950 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd5950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x22))) = param_2;
  return param_2;
}

/* ref: FUN_00cd5a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5a20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (uint)((*((uint *)GEN_TOP((in_ecx + 0xf8))) & param_2) != 0);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf41 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5a40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0x11)));
}

/* ref: FUN_00cd5aa0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd5aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0x36c))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0x36c))) = *((byte *)GEN_TOP((in_ecx + 0x36c))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cd5ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xcd5ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[5] = param_7;
  param_1[4] = param_6;
  *(undefined1 *)(param_1 + 8) = param_8;
  param_1[6] = 0;
  param_1[7] = 0;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x21))) = 0;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0x22))) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  return (uint)param_1;
}

/* ref: FUN_00cd5b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5b20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8))
{
  GEN_ENTER(0xcd5b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  param_1[8] = (undefined4)gen_fl2bits(param_8);
  *param_1 = param_2;
  param_1[9] = (undefined4)gen_fl2bits(param_9);
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return (uint)param_1;
}

/* ref: FUN_00cd5ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf11 */
GEN_LIB GEN_NOFRAME unsigned int F_00cd5bd0(void)
{
  GEN_ENTER(0xcd5bd0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf83 */
GEN_LIB GEN_NOFRAME byte F_00cd5be0(void)
{
  GEN_ENTER(0xcd5be0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf82 */
GEN_LIB GEN_NOFRAME byte F_00cd5bf0(void)
{
  GEN_ENTER(0xcd5bf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf68 */
GEN_LIB GEN_NOFRAME float GEN_THISCALL F_00cd5c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  
  fVar1 = F_00cccde0(this + 0x20 GEN_EDX_FWD);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf49 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd5c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 700)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf53 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x344)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf54 */
GEN_LIB GEN_NOFRAME uint F_00cd5c30(void)
{
  GEN_ENTER(0xcd5c30u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf55 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xf8)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf74 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd5c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x1c4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf42 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd5c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return *((byte *)GEN_TOP((in_ecx + 0x1d8 + (uint)param_2 * 0x10)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf43 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00cd5c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x1dc + (uint)param_2 * 0x10)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf44 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd5ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x1cc)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf64 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00cd5cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0xf4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf45 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0x228)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf46 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x228;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf47 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 700) == 1) {
    uVar1 = F_00cd7c60(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf48 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd5d00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x12)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf52 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd5d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 8))) == param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf56 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5d40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x164)));
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf31 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10c))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf84 */
GEN_LIB GEN_NOFRAME byte F_00cd5d70(void)
{
  GEN_ENTER(0xcd5d70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf85 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14))) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf58 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcd5d90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))
                    (this + 0x8c GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf105 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd5db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x340))) = 1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf59 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0x13)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf89 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5dd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (((*((byte *)GEN_TOP((in_ecx + 0x14))) & 4) != 0) && (*((char *)GEN_TOP((in_ecx + 0x128))) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5df0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14))) >> 3 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf91 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14))) >> 6 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf92 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14))) >> 5 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf93 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5e20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14))) >> 9 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf13 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd5e30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x128))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf94 */
GEN_LIB GEN_NOFRAME unsigned int F_00cd5e40(void)
{
  GEN_ENTER(0xcd5e40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 700) != 1) {
    return 0;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x2c0) + 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2c0) + 4)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_FWD);
    return (int)(char)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf61 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5e90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + 0x14)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf63 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0xd4);
  param_1[1] = *(undefined4 *)(this + 0xd8);
  uVar1 = *(undefined4 *)(this + 0xe0);
  param_1[2] = *(undefined4 *)(this + 0xdc);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf95 */
GEN_LIB GEN_NOFRAME float F_00cd5ed0(void)
{
  GEN_ENTER(0xcd5ed0u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1090708);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf65 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd5ee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x2b8)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5ef0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd5ef0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x138 GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf69 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x120)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf35 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x124))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf36 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5f30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x124)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf96 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5f40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf71 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcd5f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 700) != 1) {
    return 0xffffffff;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x2c0) + 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x2c0) + 4)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xbc))))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf39 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd5f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)(this + 0x180) = param_1;
  *(undefined4 *)(this + 0x184) = param_2;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return *(uint *)(this + 0x180);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf100 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd5fb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0x1e)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf101 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd5fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5fd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xfc))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf76 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd5fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd5fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x1c5)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf102 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd5ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd5ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)(this + 0xe4) = *param_1;
  *(undefined4 *)(this + 0xe8) = param_1[1];
  *(undefined4 *)(this + 0xec) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0xf0) = uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf103 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(this + 0xe4);
  param_1[1] = *(undefined4 *)(this + 0xe8);
  uVar1 = *(undefined4 *)(this + 0xf0);
  param_1[2] = *(undefined4 *)(this + 0xec);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf98 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd6050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1b0)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf99 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd6060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1b4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6070(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cd3df0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf51 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd60a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd60a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 700))) <= (int)(uint)param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112c8a0)),&REFG(undefined1, 0x107fc63),
                    ((char *)REFP(0x112c8c0))
                    ,0x105,((char *)REFP(0x112c90c)));
  }
  return *((uint *)GEN_TOP((param_1 + 0x2c0 + (uint)param_2 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RootSound::vf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6100(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 700))) <= (int)(uint)param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd4680));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112c8a0)),&REFG(undefined1, 0x107fc63),
                    ((char *)REFP(0x112c8c0))
                    ,0x10a,((char *)REFP(0x112c90c)));
  }
  return *((uint *)GEN_TOP((param_1 + 0x2c0 + (uint)param_2 * 4)));
}

/* ref: FUN_00cd6160 */
GEN_LIB GEN_FRAME unsigned int F_00cd6160(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cd6180 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd6180(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int in_ecx_00;
  int iVar1;
  
  F_00cccb40(in_ecx + 0x228 GEN_EDX_FWD);
  in_ecx_00 = in_ecx + 0x1a4;
  iVar1 = 3;
  do {
    in_ecx_00 = in_ecx_00 - 0x24;
    F_00cccb40(in_ecx_00 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_00cccb40(in_ecx + 0xf0 GEN_EDX_ARG);
  F_00cccb40(in_ecx + 0xcc GEN_EDX_ARG);
  F_00cccb40(in_ecx + 0xa8 GEN_EDX_ARG);
  F_00cccb40(in_ecx + 0x84 GEN_EDX_ARG);
  F_00cccb40(in_ecx + 0x60 GEN_EDX_ARG);
  F_00cbbdb0(in_ecx + 0xc GEN_EDX_ARG);
  return;
}

/* ref: FUN_00cd61f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd61f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcd61f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  *((uint *)GEN_TOP((param_1 + 0x24c))) =
       *((uint *)GEN_TOP((param_1 + 0x24c))) ^ ((uint)param_4 << 6 ^ *((uint *)GEN_TOP((param_1 + 0x24c)))) & 0x40;
  *((uint *)GEN_TOP((param_1 + 0x1b4))) = param_2;
  return param_2;
}

/* ref: FUN_00cd6220 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd6220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  uint uVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 4))))
            ((int)this + 0x60,(undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 4))))
            ((int)this + 0xf0,(undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 4))))
            ((int)this + 0x84,(undefined4)gen_fl2bits((float)(float10)1));
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 4))))
            ((int)this + 0xa8,(undefined4)gen_fl2bits((float)(float10)0));
  F_00cccc10((int)this + 0xa8 GEN_EDX_ARG,(float)(float10)0);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + 4))))
                    ((int)this + 0xcc,(undefined4)gen_fl2bits((float)(float10)0));
  F_00cccc10((int)this + 0xcc GEN_EDX_ARG,(float)(float10)0);
  fVar1 = (float10)0;
  *((float *)GEN_TOP(((int)this + 0x1a4))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1a8))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x1ac))) = (float)fVar1;
  return uVar2;
}

/* ref: FUN_00cd62d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd62d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd62d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  int * piVar2;
  float10 fVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00cccbd0((int)this + 0x60 GEN_EDX_FWD,(float)(float10)1);
  F_00cccbd0((int)this + 0xf0 GEN_EDX_ARG,(float)(float10)1);
  F_00cccbd0((int)this + 0x84 GEN_EDX_ARG,(float)(float10)1);
  F_00cccbd0((int)this + 0xa8 GEN_EDX_ARG,(float)(float10)0);
  F_00cccbd0((int)this + 0xcc GEN_EDX_ARG,(float)(float10)0);
  fVar5 = (float10)1;
  *((float *)GEN_TOP(((int)this + 0x1c4))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x1c8))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x1d4))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x1d8))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x1d0))) = (float)fVar5;
  fVar3 = (float10)0;
  *((float *)GEN_TOP(((int)this + 0x1cc))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 0x1f0))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 500))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 0x1e8))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x1ec))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x1f8))) = (float)fVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((float *)GEN_TOP(((int)this + 0x1fc))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 0x200))) = (float)fVar3;
  pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 4)));
  *((float *)GEN_TOP(((int)this + 0x220))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x224))) = (float)fVar5;
  (*pcVar1)(((int *)GEN_TOP(((int)this + 0x228))),(undefined4)gen_fl2bits((float)fVar5));
  fVar5 = (float10)1;
  *((uint *)GEN_TOP(((int)this + 0x214))) = *((uint *)GEN_TOP(((int)this + 0x214))) & 0xffffffc0;
  *((float *)GEN_TOP(((int)this + 0x25c))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x21c))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x218))) = (float)fVar5;
  *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xffffffd0 | 0x10;
  *((float *)GEN_TOP(((int)this + 0x210))) = (float)(float10)0;
  uVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x270))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x250))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x254))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 600))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x260))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x264))) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0xffffffff;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x15c))))(piVar2 GEN_EDX_ARG);
    fVar5 = (float10)1;
    if ((char)uVar4 != '\0') {
      *((float *)GEN_TOP(((int)this + 0x268))) = (float)fVar5;
      goto LAB_00cd643e;
    }
  }
  *((float *)GEN_TOP(((int)this + 0x268))) = (float)(float10)1;
  fVar5 = (float10)0;
LAB_00cd643e: ;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *((float *)GEN_TOP(((int)this + 0x26c))) = (float)fVar5;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return uVar4;
}

/* ref: FUN_00cd6460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((undefined1 *)GEN_TOP(((int)this + 0x20b))) = 1;
  F_00cccc70((int)this + 0x60 GEN_EDX_FWD);
  F_00cccc70((int)this + 0xf0 GEN_EDX_ARG);
  F_00cccc70((int)this + 0x84 GEN_EDX_ARG);
  F_00cccc70((int)this + 0xa8 GEN_EDX_ARG);
  F_00cccc70((int)this + 0xcc GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0)));
  uVar2 = F_00cbdd20((int)this + 0xc GEN_EDX_ARG,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00cd64e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd64e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd64e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0x18)));
  *((undefined1 *)GEN_TOP(((int)this + 0x20b))) = 0;
  (*pcVar1)((int)this + 0x60);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 0x18))))((int)this + 0xf0);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x18))))((int)this + 0x84);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 0x18))))((int)this + 0xa8);
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + 0x18))))((int)this + 0xcc);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0)));
  uVar3 = F_00cbdd70((int)this + 0xc GEN_EDX_ARG,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00cd6590 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd6590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x5c))) == 0) && (*((int *)GEN_TOP((in_ecx + 8))) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cd65b0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd65b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd65b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x5c))) != 5) && (*((int *)GEN_TOP((in_ecx + 0x5c))) != 6)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00cd65d0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd65d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd65d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte in_AL = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    in_AL = (byte)uVar1;
  }
  return in_AL;
}

/* ref: FUN_00cd6630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6630(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcd6630u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  float10 extraout_ST0;
  float10 fVar6;
  double dVar7;
  
  iVar2 = (*(int *)&gen_args[2]);
  iVar1 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[2]) == 0) {
    F_00cccbd0(param_1 + 0x114 + (*(int *)&gen_args[1]) * 0x24 GEN_EDX_FWD,(*(float *)&gen_args[0]));
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 200))))
                (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[0])),iVar1);
    }
    (*(int *)&gen_args[1]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    uVar3 = F_00cbde10(param_1 + 0xc GEN_EDX_ARG,(*(float *)&gen_args[0]),iVar1,(uint)&(*(int *)&gen_args[1]));
  }
  else {
    iVar1 = param_1 + 0x114 + (*(int *)&gen_args[1]) * 0x24;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x114 + (*(int *)&gen_args[1]) * 0x24))) + 0x10))))(iVar1); dVar7 = extraout_ST0;
    fVar6 = (float10)(*(float *)&gen_args[0]);
    bVar4 = GEN_ISNAN(fVar6) || GEN_ISNAN(extraout_ST0);
    bVar5 = bVar4 || fVar6 == extraout_ST0;
    uVar3 = CONCAT22((short)((ulonglong)gen_d2bits(dVar7) >> 0x10),
                     (ushort)!(extraout_ST0 <= fVar6) << 8 | (ushort)bVar4 << 10 |
                     (ushort)bVar5 << 0xe);
    if (bVar4 == bVar5) {
      uVar3 = F_00cccd90(iVar1 GEN_EDX_ARG,(*(float *)&gen_args[0]),iVar2);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00cd66f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd66f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd66f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x78))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  }
  F_00cbc480(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_00cd6720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd6720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xb4))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cd6740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6740(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd6740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x84))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  uVar1 = F_00cbc710(param_1 + 0xc GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00cd6780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  float10 fVar3;
  byte bVar4;
  uint in_EAX = 0;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xec))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    if (((in_EAX != 0xb) && (in_EAX != 6)) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
      if ((in_EAX != 8) && (in_EAX != 10)) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x16c))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
        if ((char)uVar5 == '\0') {
LAB_00cd67e8: ;
          fVar7 = *((float *)GEN_TOP(((int)this + 0xe8)));
          fVar1 = *((float *)GEN_TOP(((int)this + 0xc4)));
          iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 4)));
          iVar9 = (int)this + 0x1f8;
          uVar8 = *((undefined4 *)GEN_TOP(((int)this + 500)));
          fVar6 = F_00cccde0(((undefined *)GEN_TOP(((int)this + 0xcc))) GEN_EDX_ARG);
          fVar7 = (float)((float10)fVar6 + (float10)fVar7);
          fVar6 = F_00cccde0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0xb8))))
                            (*((undefined4 *)GEN_TOP(((int)this + 4))),
                             (undefined4)
                             gen_fl2bits(((float)GEN_TOF(((((float10)fVar6 + (float10)fVar1) +
                                                 (float10)*((float *)GEN_TOP(((int)this + 0x1f0)))) +
                                                (float10)*((float *)GEN_TOP(((int)this + 0x1cc))))))),
                             (undefined4)gen_fl2bits(fVar7),uVar8,iVar9);
          return uVar5;
        }
        bVar4 = F_00d2cdf0();
        if (bVar4 == 0) goto LAB_00cd67e8;
      }
      fVar3 = (float10)0;
      in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xb8))))
                         (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar3),
                          (undefined4)gen_fl2bits((float)fVar3),
                          (undefined4)gen_fl2bits((float)fVar3),(int)this + 0x1f8);
    }
  }
  return in_EAX;
}

/* ref: FUN_00cd6890 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd6890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd6890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x1e4))) = param_2;
  return;
}

/* ref: FUN_00cd68a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd68a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd68a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_EAX = 0;
  
  F_00cccc10(in_ecx + 0x84 GEN_EDX_FWD,param_2);
  return in_EAX;
}

/* ref: FUN_00cd68c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd68c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd68c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_EAX = 0;
  
  F_00cccc10(in_ecx + 0xa8 GEN_EDX_FWD,param_2);
  return in_EAX;
}

/* ref: FUN_00cd68f0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cd68f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd68f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 0x10))))((int)this + 0x228);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x10))))((int)this + 0x84);
  return GEN_X87(((float)GEN_TOF(((extraout_ST0_00 * (float10)(double)extraout_ST0) *
                (float10)*((float *)GEN_TOP(((int)this + 0x1ec)))))));
}

/* ref: FUN_00cd6960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcd6960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xac))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cd69c0 */
GEN_LIB GEN_FRAME float10 F_00cd69c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcd69c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  iVar4 = 0;
  iVar2 = 0;
switchD_00cd69e8_caseD_7: ;
  iVar1 = iVar2;
  iVar2 = iVar1 + 2;
  switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((iVar1 + param_1))))) {
  case 0: ;
  case 0xe: ;
  case 0x10: ;
  case 0x35: ;
    goto switchD_00cd69e8_caseD_0;
  case 1: ;
  case 2: ;
  case 6: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xd: ;
  case 0x12: ;
  case 0x14: ;
  case 0x16: ;
  case 0x18: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x25: ;
  case 0x27: ;
  case 0x33: ;
    iVar2 = iVar1 + 10;
    goto switchD_00cd69e8_caseD_7;
  case 3: ;
    iVar4 = iVar4 + *((int *)GEN_TOP((iVar2 + param_1)));
switchD_00cd69e8_caseD_5: ;
    iVar2 = iVar1 + 6;
    goto switchD_00cd69e8_caseD_7;
  case 4: ;
  case 0x37: ;
  case 0x38: ;
    iVar2 = iVar1 + 0xe;
    goto switchD_00cd69e8_caseD_7;
  case 5: ;
  case 0xf: ;
  case 0x11: ;
  case 0x13: ;
  case 0x15: ;
  case 0x17: ;
  case 0x1d: ;
  case 0x20: ;
  case 0x30: ;
  case 0x3c: ;
    goto switchD_00cd69e8_caseD_5;
  case 7: ;
  case 0xc: ;
  case 0x24: ;
  case 0x26: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2a: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x31: ;
  case 0x32: ;
  case 0x34: ;
  case 0x36: ;
    goto switchD_00cd69e8_caseD_7;
  default: ;
    return (float10)0;
  case 0x2b: ;
  case 0x3b: ;
    iVar2 = iVar1 + 0x12;
    goto switchD_00cd69e8_caseD_7;
  case 0x2f: ;
    iVar2 = iVar1 + 4;
    goto switchD_00cd69e8_caseD_7;
  case 0x39: ;
    iVar2 = iVar2 + (uint)*((ushort *)GEN_TOP((iVar2 + param_1))) * 2;
    goto switchD_00cd69e8_caseD_7;
  case 0x3a: ;
    iVar2 = iVar1 + 6 + (uint)*((ushort *)GEN_TOP((iVar1 + 4 + param_1))) * 2;
    goto switchD_00cd69e8_caseD_7;
  case 0x3d: ;
    iVar2 = *((short *)GEN_TOP((iVar1 + 4 + param_1))) + iVar2 + *((short *)GEN_TOP((iVar1 + 6 + param_1))) * 4;
    goto switchD_00cd69e8_caseD_7;
  case 0x3f: ;
    break;
  }
  iVar3 = (int)*((short *)GEN_TOP((iVar2 + param_1 + 4)));
  iVar2 = iVar2 + *((short *)GEN_TOP((iVar1 + 4 + param_1)));
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 - 1;
      iVar2 = *((short *)GEN_TOP((iVar2 + 2 + param_1))) + iVar2 + *((short *)GEN_TOP((iVar2 + 4 + param_1))) * 4;
    } while (iVar3 != 0);
  }
  goto switchD_00cd69e8_caseD_7;
switchD_00cd69e8_caseD_0: ;
  return GEN_X87((float10)(float)((float10)iVar4 * (float10)REFG(double, 0x1091858)));
}

/* ref: FUN_00cd6af0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd6af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd6af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x82))) = 1;
  *((float *)GEN_TOP((in_ecx + 0x1d4))) = param_2;
  return;
}

/* ref: FUN_00cd6b10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6b10(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd6b10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  *((float *)GEN_TOP(((int)param_1 + 0x1d8))) = param_2;
  uVar1 = F_00cda360(param_1 GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xa6))) = 1;
  return uVar1;
}

/* ref: FUN_00cd6b30 */
GEN_LIB GEN_FRAME float10 F_00cd6b30(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = *((short *)GEN_TOP((in_eax + 2))) + in_eax;
  iVar1 = *((short *)GEN_TOP((in_eax + 4))) - 1;
  iVar8 = 0;
  iVar3 = 0;
  iVar6 = iVar1;
  if (-1 < iVar1) {
    do {
      iVar3 = (iVar6 + iVar8) / 2;
      uVar2 = *((ushort *)GEN_TOP((iVar4 + iVar3 * 4)));
      if (uVar2 == (ushort)param_2) break;
      if (uVar2 < (ushort)param_2) {
        iVar8 = iVar3 + 1;
      }
      else {
        iVar6 = iVar3 - 1;
      }
    } while (iVar8 <= iVar6);
  }
  if (((ushort)param_2 < *((ushort *)GEN_TOP((iVar4 + iVar3 * 4)))) && (0 < iVar3)) {
    iVar3 = iVar3 - 1;
  }
  else if (*((short *)GEN_TOP((in_eax + 4))) <= iVar3) {
    iVar3 = iVar1;
  }
  if (iVar3 != iVar1) {
    uVar5 = (uint)*((ushort *)GEN_TOP((iVar4 + iVar3 * 4)));
    uVar7 = (uint)*((ushort *)GEN_TOP((iVar4 + 2 + iVar3 * 4)));
    return GEN_X87((float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((float10)(int)((param_2 & 0xffff) - uVar5) /
                                             (float10)(int)(*((ushort *)GEN_TOP((iVar4 + 4 + iVar3 * 4))) -
                                                           uVar5)))) *
                             (float10)(int)(*((ushort *)GEN_TOP((iVar4 + 6 + iVar3 * 4))) - uVar7) +
                            (float10)uVar7) / (float10)REFG(double, 0x109cab0)))));
  }
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((iVar4 + 2 + iVar3 * 4))) / (float10)REFG(double, 0x109cab0)))));
}

/* ref: FUN_00cd6c00 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd6c00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd6c00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_GS(0x10c, 4, 4);
  float fVar1;
  short sVar2;
  int iVar3;
  int * piVar4;
  double dVar5;
  uint extraout_EAX = 0;
  uint uVar6;
  uint uVar7;
  int in_eax;
  int iVar8;
  float10 fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x104)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x108));
  uVar6 = *((uint *)GEN_TOP((param_1 + 0x5c)));
  if (((uVar6 != 5) && (uVar6 != 4)) && (uVar6 != 6)) {
    if (*((int *)GEN_TOP((param_1 + 0x1dc))) != 0) {
      (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      fVar9 = F_00cd6b30(*((int *)GEN_TOP((param_1 + 0x1dc))),
                           (int)TRUNC((double)param_2 * REFG(double, 0x109cab0)) & 0xffff);
      *((float *)GEN_TOP((param_1 + 0x1d4))) = (float)fVar9;
      *((undefined1 *)GEN_TOP((param_1 + 0x82))) = 1;
      uVar6 = extraout_EAX;
    }
    iVar3 = *((int *)GEN_TOP((param_1 + 0x1e0)));
    if ((iVar3 != 0) && (uVar6 = (uint)*((ushort *)GEN_TOP((iVar3 + 4))), 0 < (short)*((ushort *)GEN_TOP((iVar3 + 4))))) {
      dVar5 = GEN_X87((double)param_2 * REFG(double, 0x109cab0));
      iVar8 = (int)*((short *)GEN_TOP((iVar3 + 2)));
      (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(float *)(gen_frame + 0x4)) = (float)(float10)0;
      F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0xfc);
      uVar6 = (uint)*((short *)GEN_TOP((iVar3 + 4)));
      uVar7 = 0;
      if (0 < (int)uVar6) {
        do {
          in_eax = iVar3 + iVar8;
          fVar9 = F_00cd6b30(in_eax,(int)TRUNC(dVar5) & 0xffff);
          fVar1 = (float)(fVar9 * (float10)*(double *)&REFG(undefined, 0x10c6318));
          if ((uVar7 & 1) == 0) {
            sVar2 = *((short *)GEN_TOP((iVar3 + 4)));
            *(float *)(((undefined1 *)(gen_frame + 0x8)) + uVar7 * 4 - 4) = fVar1;
            *((float *)GEN_TOP((((undefined1 *)(gen_frame + 0x8)) + (uVar7 + sVar2 * 4) * 4 - 4))) = fVar1;
          }
          else {
            sVar2 = *((short *)GEN_TOP((iVar3 + 4)));
            *((float *)GEN_TOP((((undefined1 *)(gen_frame + 0x8)) + ((int)sVar2 + uVar7) * 4 - 4))) = fVar1;
            *((float *)GEN_TOP((((undefined1 *)(gen_frame + 0x8)) + (uVar7 + sVar2 * 5) * 4 - 4))) = fVar1;
          }
          uVar7 = uVar7 + 1;
          iVar8 = *((short *)GEN_TOP((in_eax + 2))) + iVar8 + *((short *)GEN_TOP((in_eax + 4))) * 4;
        } while ((int)uVar7 < (int)uVar6);
      }
      piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb4))))(piVar4 GEN_EDX_ARG,uVar6,&(*(float *)(gen_frame + 0x4)));
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00cd6e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((uint *)GEN_TOP((in_ecx + 0x214))) ^ param_2) & 3;
  *((uint *)GEN_TOP((in_ecx + 0x214))) = *((uint *)GEN_TOP((in_ecx + 0x214))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00cd6e20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd6e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  
  if ((*((int *)GEN_TOP(((int)this + 0x5c))) != 0) || (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
    in_EAX = F_00cda360(this GEN_EDX_FWD);
    *((undefined1 *)GEN_TOP(((int)this + 0xa6))) = 1;
  }
  return in_EAX;
}

/* ref: FUN_00cd6e40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd6e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xd4))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00cd6e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + iVar1)));
  *param_1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar1)));
  param_1[1] = uVar2;
  *(int *)this = iVar1 + 8;
  return (uint)param_1;
}

/* ref: FUN_00cd6e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  iVar3 = *(int *)this;
  uVar1 = *((undefined1 *)GEN_TOP((iVar2 + iVar3)));
  iVar5 = iVar2 + iVar3;
  *(undefined4 *)(param_1 + 4) = *((undefined4 *)GEN_TOP((iVar2 + 4 + iVar3)));
  *param_1 = uVar1;
  param_1[1] = *((undefined1 *)GEN_TOP((iVar5 + 1)));
  param_1[2] = *((undefined1 *)GEN_TOP((iVar5 + 2)));
  uVar1 = *((undefined1 *)GEN_TOP((iVar5 + 3)));
  uVar4 = *((undefined4 *)GEN_TOP((iVar5 + 8)));
  *(int *)this = iVar3 + 0xc;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar4;
  return (uint)param_1;
}

/* ref: FUN_00cd6ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  iVar3 = *(int *)this + 8;
  *param_1 = *((undefined4 *)GEN_TOP((iVar2 + *(int *)this)));
  uVar1 = *((undefined4 *)GEN_TOP((iVar2 - 4 + iVar3)));
  *(int *)this = iVar3;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00cd6f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  iVar3 = *((int *)GEN_TOP(((int)this + 8))) + iVar2;
  *param_1 = *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2)));
  sVar1 = *((short *)GEN_TOP((iVar3 + 2)));
  param_1[1] = sVar1;
  if (-1 < sVar1) {
    *(int *)this = iVar2 + 4;
    return (uint)param_1;
  }
  *(int *)(param_1 + 2) = iVar3 + 4;
  *(int *)this = iVar2 + (2 - sVar1) * 2;
  return (uint)param_1;
}

/* ref: FUN_00cd6f90 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cd6f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd6f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  
  fVar1 = *((float *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 8))))));
  *(int *)this = *(int *)this + 4;
  return fVar1;
}

/* ref: FUN_00cd6fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd6fd0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcd6fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *param_1;
  uVar2 = *((uint *)GEN_TOP((param_1[2] + iVar1)));
  *param_1 = iVar1 + 4;
  uVar3 = *((uint *)GEN_TOP((iVar1 + 4 + param_1[2])));
  *param_1 = iVar1 + 8;
  iVar4 = param_1[3];
  if ((iVar4 < 0) || ((*(byte *)(param_1 + iVar4 * 4 + 7) & 2) == 0)) {
    param_1[3] = iVar4 + 1;
    param_1[(iVar4 + 1) * 4 + 5] = 0;
    param_1[(param_1[3] + 1) * 4] = iVar1 - 2;
    if ((param_2 == '\0') && (uVar2 < uVar3)) {
      uVar5 = F_00a4b840();
      param_1[param_1[3] * 4 + 6] = uVar5 % ((uVar3 - uVar2) + 1) + uVar2;
    }
    else {
      param_1[param_1[3] * 4 + 6] = uVar2;
    }
    param_1[param_1[3] * 4 + 7] = (uint)(param_1[param_1[3] * 4 + 6] == 0);
  }
  iVar1 = param_1[3];
  param_1[iVar1 * 4 + 7] = param_1[iVar1 * 4 + 7] & 0xfffffffd;
  return (uint)(param_1 + iVar1 * 4 + 7);
}

/* ref: FUN_00cd70b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd70b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd70b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar1 = *((float *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 8))))));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  *(int *)this = *(int *)this + 4;
  fVar5 = (float10)*((int *)GEN_TOP(((int)this + iVar2 * 0x10 + 0x14)));
  if (*((int *)GEN_TOP(((int)this + iVar2 * 0x10 + 0x14))) < 0) {
    fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar5 = GEN_X87(fVar5 * (float10)fVar1);
  uVar3 = (uint)fVar5;
  uVar4 = uVar3;
  if (-1 < iVar2) {
    uVar4 = uVar3 + *((int *)GEN_TOP(((int)this + 4)));
    if (0 < (int)uVar4) {
      *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
      *param_1 = (float)((float10)(float)fVar5 - (float10)(int)uVar3);
      return uVar4;
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return uVar4;
}

/* ref: FUN_00cd7180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd7180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd7180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x1b4)));
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  fVar4 = F_00cccde0(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  param_1[2] = (undefined4)gen_fl2bits(fVar4);
  fVar4 = F_00cccde0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  param_1[3] = (undefined4)gen_fl2bits(fVar4);
  fVar4 = F_00cccde0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
  param_1[4] = (undefined4)gen_fl2bits(fVar4);
  param_1[5] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  param_1[6] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  param_1[7] = uVar1;
  param_1[8] = param_1[8] ^ ((uint)(*((int *)GEN_TOP(((int)this + 8))) != 0) ^ param_1[8]) & 1;
  if ((*((int *)GEN_TOP(((int)this + 0x5c))) == 0) && (*((int *)GEN_TOP(((int)this + 8))) == 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  uVar1 = (iVar2 * 2 ^ param_1[8]) & 2U ^ param_1[8];
  param_1[8] = uVar1;
  uVar3 = ((uint)*((byte *)GEN_TOP(((int)this + 0x20b))) * 4 ^ uVar1) & 4 ^ uVar1;
  param_1[8] = uVar3;
  param_1[8] = (*((uint *)GEN_TOP(((int)this + 0x24c))) >> 3 ^ uVar3) & 8 ^ uVar3;
  return uVar1;
}

/* ref: FUN_00cd7250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd7250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd7250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  int * piVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ecx;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00cbbd70((int)this + 0xc GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2c))),0,0x30);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  F_00cccb10((int)this + 0x60 GEN_EDX_ARG,(float)(float10)1);
  F_00cccb10((int)this + 0x84 GEN_EDX_ARG,(float)(float10)1);
  F_00cccb10((int)this + 0xa8 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0xcc GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10((int)this + 0xf0 GEN_EDX_ARG,(float)(float10)1);
  in_ecx = (int)this + 0x114;
  local_8 = 3;
  do {
    F_00cccb10(in_ecx GEN_EDX_ARG,(float)(float10)0);
    in_ecx = in_ecx + 0x24;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  fVar4 = (float10)0;
  *((float *)GEN_TOP(((int)this + 0x1a4))) = (float)fVar4;
  *((float *)GEN_TOP(((int)this + 0x1a8))) = (float)fVar4;
  *((float *)GEN_TOP(((int)this + 0x1ac))) = (float)fVar4;
  fVar3 = (float10)1;
  *((float *)GEN_TOP(((int)this + 0x1b0))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 0x1c4))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 0x1c8))) = (float)fVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b4))) = 0;
  *((float *)GEN_TOP(((int)this + 0x1d0))) = (float)fVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = 0xffffffff;
  *((float *)GEN_TOP(((int)this + 0x1d4))) = (float)fVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0xffffffff;
  *((float *)GEN_TOP(((int)this + 0x1d8))) = (float)fVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  *((float *)GEN_TOP(((int)this + 0x1e4))) = (float)fVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((float *)GEN_TOP(((int)this + 0x1f8))) = (float)fVar4;
  *((float *)GEN_TOP(((int)this + 0x1fc))) = (float)fVar4;
  *((float *)GEN_TOP(((int)this + 0x200))) = (float)fVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
  *((float *)GEN_TOP(((int)this + 0x210))) = (float)fVar4;
  *((undefined1 *)GEN_TOP(((int)this + 0x20c))) = 0;
  F_00cccb10((int)this + 0x228 GEN_EDX_ARG,(float)fVar4);
  fVar4 = (float10)0;
  *((float *)GEN_TOP(((int)this + 0x1cc))) = (float)fVar4;
  fVar3 = (float10)1;
  *((float *)GEN_TOP(((int)this + 0x1e8))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 0x1ec))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 0x1f0))) = (float)fVar4;
  *((float *)GEN_TOP(((int)this + 500))) = (float)fVar4;
  *((float *)GEN_TOP(((int)this + 0x1f8))) = (float)fVar4;
  *((float *)GEN_TOP(((int)this + 0x1fc))) = (float)fVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((float *)GEN_TOP(((int)this + 0x200))) = (float)fVar4;
  pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 4)));
  *((float *)GEN_TOP(((int)this + 0x220))) = (float)fVar3;
  *((float *)GEN_TOP(((int)this + 0x224))) = (float)fVar3;
  (*pcVar1)((int)this + 0x228,(undefined4)gen_fl2bits((float)fVar3));
  *((float *)GEN_TOP(((int)this + 0x25c))) = (float)(float10)1;
  *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xffffff90 | 0x10;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x250))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x254))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 600))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x260))) = 0;
  if ((piVar2 == ((int *)GEN_TOP(0x0))) ||
     (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x15c))))(piVar2 GEN_EDX_ARG), uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068))), (char)uVar6 == '\0')) {
    *((float *)GEN_TOP(((int)this + 0x268))) = (float)(float10)1;
    *((float *)GEN_TOP(((int)this + 0x26c))) = (float)(float10)0;
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 0x268))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x268))), REFG(float, 0x1088068));
    *((undefined4 *)GEN_TOP(((int)this + 0x26c))) = uVar5;
  }
  *((undefined2 *)GEN_TOP(((int)this + 0x264))) = 0;
  *((float *)GEN_TOP(((int)this + 0x21c))) = (float)(float10)1;
  *((float *)GEN_TOP(((int)this + 0x218))) = (float)(float10)1;
  *((undefined4 *)GEN_TOP(((int)this + 0x270))) = 0;
  F_00cccc10((int)this + 0xa8 GEN_EDX_ARG,(float)(float10)0);
  F_00cccc10((int)this + 0xcc GEN_EDX_ARG,(float)(float10)0);
  *((uint *)GEN_TOP(((int)this + 0x214))) = *((uint *)GEN_TOP(((int)this + 0x214))) & 0xffffffc0;
  return (uint)this;
}

/* ref: FUN_00cd74c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd74c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd74c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar7;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  double dVar8;
  
  uVar4 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) == 0) {
    F_00cccbd0(param_1 + 0x84 GEN_EDX_FWD,(*(float *)&gen_args[0]));
    extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x228))) + 0x10))))(param_1 + 0x228);
    (*(double *)(gen_frame + 0x0)) = (double)extraout_ST0_02;
    extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + 0x10))))(param_1 + 0x84);
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF(((extraout_ST0_03 * (float10)(*(double *)(gen_frame + 0x0))) *
                                       (float10)*((float *)GEN_TOP((param_1 + 0x1ec)))))));
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      extraout_ST0_04 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x228))) + 0x10))))(param_1 + 0x228);
      (*(double *)(gen_frame + 0x0)) = (double)extraout_ST0_04;
      extraout_ST0_05 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + 0x10))))(param_1 + 0x84);
      piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
      pcVar1 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x80)));
      (*(float *)&gen_args[0]) = ((float)GEN_TOF(((extraout_ST0_05 * (float10)(*(double *)(gen_frame + 0x0))) * (float10)*((float *)GEN_TOP((param_1 + 0x1ec))))))
      ;
      (*pcVar1)(piVar2,(undefined4)gen_fl2bits((*(float *)&gen_args[0])));
    }
    (*(float *)&gen_args[0]) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
    uVar3 = F_00cbdeb0(param_1 + 0xc GEN_EDX_ARG,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))),(uint)&(*(float *)&gen_args[0]));
  }
  else {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + 0xc))))(param_1 + 0x84);
    if ((char)uVar3 != '\0') {
      F_00cccbd0(param_1 + 0x84 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x8c)))));
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x228))) + 0x10))))(param_1 + 0x228);
      (*(double *)(gen_frame + 0x0)) = (double)extraout_ST0;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + 0x10))))(param_1 + 0x84);
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF(((extraout_ST0_00 * (float10)(*(double *)(gen_frame + 0x0))) *
                                         (float10)*((float *)GEN_TOP((param_1 + 0x1ec)))))));
      if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x80))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(*(uint *)&gen_args[1]));
      }
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0))));
      F_00cbdeb0(param_1 + 0xc GEN_EDX_ARG,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))),(int)&(*(double *)(gen_frame + 0x0)) + 4);
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x84))) + 0x10)));
    (*(double *)(gen_frame + 0x0)) = (double)(*(float *)&gen_args[0]);
    extraout_ST0_01 = (*pcVar1)(param_1 + 0x84); dVar8 = extraout_ST0_01;
    fVar7 = (float10)(*(double *)(gen_frame + 0x0));
    bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN(extraout_ST0_01);
    bVar6 = bVar5 || fVar7 == extraout_ST0_01;
    uVar3 = CONCAT22((short)((ulonglong)gen_d2bits(dVar8) >> 0x10),
                     (ushort)!(extraout_ST0_01 <= fVar7) << 8 | (ushort)bVar5 << 10 |
                     (ushort)bVar6 << 0xe);
    if (bVar5 == bVar6) {
      uVar4 = F_00cccd90(param_1 + 0x84 GEN_EDX_ARG,(*(float *)&gen_args[0]),uVar4);
      return uVar4;
    }
  }
  return uVar3;
}

/* ref: FUN_00cd7670 */
GEN_LIB_GS GEN_FRAME unsigned int GEN_THISCALL F_00cd7670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd7670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a8))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x1ac))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x1b0))) = param_1[3];
  F_00cda400(this GEN_EDX_FWD,(uint)((undefined1 *)(gen_frame + 0x0)));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x7c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  }
  F_00cbc4e0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return;
}

/* ref: FUN_00cd76f0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cd76f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd76f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x24))) == 0) {
    return (float)(float10)0;
  }
  fVar1 = F_00cd69c0(*((uint *)GEN_TOP(((int)this + 0x24))));
  return (float)fVar1;
}

/* ref: FUN_00cd7720 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd7720(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcd7720u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  if ((*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 5) && (*((int *)GEN_TOP(((int)param_1 + 0x5c))) != 6)) {
    *((float *)GEN_TOP(((int)param_1 + 0x1f0))) = param_2;
    *((float *)GEN_TOP(((int)param_1 + 500))) = param_3;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x1f8))) = *param_4;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x1fc))) = param_4[1];
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x200))) = param_4[2];
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x204))) = param_4[3];
    F_00cdafb0(param_1 GEN_EDX_FWD);
    F_00cbc9e0((int)param_1 + 0xc GEN_EDX_ARG,param_2,param_3,param_4);
  }
  return;
}

/* ref: FUN_00cd77a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd77a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd77a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 == 0) {
    F_00cccbd0((int)param_1 + 0xa8 GEN_EDX_FWD,param_2);
    uVar1 = F_00cdafb0(param_1 GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = F_00cccd90((int)param_1 + 0xa8 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cd77e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd77e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcd77e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 == 0) {
    F_00cccbd0((int)param_1 + 0xcc GEN_EDX_FWD,param_2);
    uVar1 = F_00cdafb0(param_1 GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = F_00cccd90((int)param_1 + 0xcc GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00cd7820 */
GEN_LIB_GS GEN_FRAME uint F_00cd7820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcd7820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112d6f0)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112d6d0)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cd78c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd78c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd78c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (-1 < *((int *)GEN_TOP(((int)this + 0x1c)))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112c990)),&REFG(undefined, 0x112c98e),((char *)REFP(0x112c984)),0xe0,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetTrackData");
  }
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112c9f0)),&REFG(undefined, 0x112c98f),"Track.cpp",0xe1,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetTrackData");
    *((uint *)GEN_TOP(((int)this + 0x1b4))) = param_2;
    *((uint *)GEN_TOP(((int)this + 0x24))) = param_1;
    return param_2;
  }
  *((uint *)GEN_TOP(((int)this + 0x1b4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0x24))) = param_1;
  return param_1;
}

/* ref: FUN_00cd7980 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd7980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcd7980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) == 4) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112ca54)),&REFG(undefined, 0x112c9ad),"Track.cpp",0xf4,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetAudioData");
  }
  if (*((int *)GEN_TOP(((int)this + 0x5c))) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cab0)),&REFG(undefined, 0x112c9ae),"Track.cpp",0xf5,
                    "SQEX::CDev::Engine::Sd::Driver::Track::SetAudioData");
  }
  if (*((int *)GEN_TOP(((int)this + 0x1b8))) == -1) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1b8))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_1,param_2,param_3);
  return (byte)uVar2;
}

/* ref: FUN_00cd7a50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd7a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd7a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  if ((((iVar1 != 5) && (iVar1 != 0)) && (iVar1 != 6)) && (iVar1 != 999)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cef0))
                    ,&REFG(undefined, 0x112cb06),((char *)REFP(0x112cee0)),0x278,
                    ((char *)REFP(0x112ceac)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2c))),0,0x30);
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
  uVar2 = F_00cd8330(this GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: FUN_00cd7ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd7ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd7ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d1f8)),&REFG(undefined, 0x112cb2f),((char *)REFP(0x112d1ec)),0xf65,
                  ((char *)REFP(0x112d1b8)));
  return 0;
}

/* ref: FUN_00cd7b40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd7b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd7b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa8))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d288)),&REFG(undefined, 0x112cb67),((char *)REFP(0x112d27c)),0xf72,
                  ((char *)REFP(0x112d248)));
  return 0;
}

/* ref: FUN_00cd7ba0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cd7ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd7ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float10 extraout_ST0;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xac))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))),param_1);
    return (float)extraout_ST0;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d324)),&REFG(undefined, 0x112cb72),((char *)REFP(0x112d318)),0xf7e,
                  ((char *)REFP(0x112d2e0)));
  return (float)(float10)0;
}

/* ref: FUN_00cd7c00 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd7c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd7c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xb0))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d3c8)),&REFG(undefined, 0x112cb73),((char *)REFP(0x112d3bc)),
                  0xf8a,((char *)REFP(0x112d384)));
  return 0;
}

/* ref: FUN_00cd7c60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd7c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd7c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0xd0))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d460)),&REFG(undefined, 0x112cbee),((char *)REFP(0x112d454)),0xf96,
                  ((char *)REFP(0x112d420)));
  return 0;
}

/* ref: FUN_00cd7cc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd7cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd7cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x180))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d4f0)),&REFG(undefined, 0x112cbef),((char *)REFP(0x112d4e4)),0x1115,
                  ((char *)REFP(0x112d4b4)));
  return 0;
}

/* ref: FUN_00cd7d20 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd7d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd7d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x170))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d57c)),&REFG(undefined, 0x112cc09),((char *)REFP(0x112d570)),0x112f,
                  ((char *)REFP(0x112d540)));
  return 0;
}

/* ref: FUN_00cd7d80 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd7d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd7d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x160))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    return (byte)uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d618)),&REFG(undefined, 0x112cc0a),((char *)REFP(0x112d60c)),
                  0x1138,((char *)REFP(0x112d5d4)));
  return 0;
}

/* ref: FUN_00cd7de0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cd7de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd7de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  
  if ((char)param_2 != '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *((undefined4 *)GEN_TOP(((int)this + 0x1b8)));
    param_1[5] = 0xffffffff;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x24)));
  uVar9 = (uint)*((ushort *)GEN_TOP((param_1[2] + iVar2)));
  param_1[2] = param_1[2] + 2;
  bVar3 = false;
  bVar4 = false;
  if (0x3f < uVar9) {
switchD_00cd7e46_caseD_cd7e31: ;
    return 0;
  }
switchD_00cd7e46_switchD: ;
  switch((unsigned int)(uintptr_t)((&REFG(undefined * PTR32, 0xcd8098))[(int)(uVar9)])) {
  case 0xcd7e31: ;
    goto switchD_00cd7e46_caseD_cd7e31;
  case 0xcd7e4d: ;
    iVar5 = param_1[2];
    param_1[2] = *((short *)GEN_TOP((iVar5 + 2 + iVar2))) + iVar5 + *((short *)GEN_TOP((iVar5 + 4 + iVar2))) * 4;
    break;
  case 0xcd7e67: ;
    iVar8 = param_1[2];
    param_1[2] = param_1[2] + (int)*((short *)GEN_TOP((iVar8 + 2 + iVar2)));
    iVar5 = param_1[2];
    iVar8 = iVar8 + iVar2;
    iVar10 = 0;
    if (0 < *((short *)GEN_TOP((iVar8 + 4)))) {
      do {
        iVar5 = *((short *)GEN_TOP((iVar5 + 2 + iVar2))) + iVar5 + *((short *)GEN_TOP((iVar5 + 4 + iVar2))) * 4;
        param_1[2] = iVar5;
        iVar10 = iVar10 + 1;
      } while (iVar10 < *((short *)GEN_TOP((iVar8 + 4))));
    }
    break;
  case 0xcd7ea3: ;
    if ((bVar3) && (!bVar4)) {
      param_1[2] = param_1[2] - 2;
      goto LAB_00cd8034;
    }
    param_1[2] = param_1[2] + 8;
    if ((!bVar3) || (!bVar4)) {
      *param_1 = param_1[3];
    }
    bVar3 = true;
    break;
  case 0xcd7eca: ;
    if ((bVar3) && (!bVar4)) {
      param_1[2] = param_1[2] - 2;
LAB_00cd8049: ;
      param_1[1] = param_1[3];
      return 1;
    }
  case 0xcd7ed8: ;
    goto switchD_00cd7e46_caseD_cd7ed8;
  case 0xcd7ee3: ;
    param_1[2] = param_1[2] + 8;
    break;
  case 0xcd7ee9: ;
    param_1[2] = param_1[2] + 0xc;
    break;
  case 0xcd7eef: ;
    param_1[3] = param_1[3] + *((int *)GEN_TOP((param_1[2] + iVar2)));
  case 0xcd7ef8: ;
    param_1[2] = param_1[2] + 4;
    break;
  case 0xcd7f1f: ;
    if ((bVar3) && (!bVar4)) {
LAB_00cd8034: ;
      param_1[1] = param_1[3];
      return 1;
    }
    break;
  case 0xcd7f2f: ;
    iVar5 = param_1[2];
    sVar11 = *((short *)GEN_TOP((iVar5 + 2 + iVar2)));
    uVar1 = *((ushort *)GEN_TOP((iVar5 + iVar2)));
    param_1[2] = iVar5 + 4;
    piVar7 = ((int *)GEN_TOP(F_00cd7cc0(this GEN_EDX_FWD)));
    uVar9 = (uint)uVar1;
    if (piVar7[4] != uVar9) {
      piVar7 = ((int *)GEN_TOP(F_00d2ccd0()));
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x90))))(piVar7 GEN_EDX_ARG,uVar9)));
      if (piVar7 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
    }
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG,(int)sVar11);
    param_1[4] = *((undefined4 *)GEN_TOP((uVar6 + 0xc)));
    param_1[5] = uVar9;
    break;
  case 0xcd7f8b: ;
    bVar4 = true;
    break;
  case 0xcd7f94: ;
    if (bVar3) goto LAB_00cd8049;
    bVar4 = false;
    break;
  case 0xcd7fa4: ;
    param_1[2] = param_1[2] + 0x10;
    break;
  case 0xcd7fad: ;
    piVar7 = ((int *)GEN_TOP(F_00cd7cc0(this GEN_EDX_ARG)));
    iVar5 = param_1[2];
    sVar11 = *((short *)GEN_TOP((iVar5 + 2 + iVar2)));
    uVar1 = *((ushort *)GEN_TOP((iVar5 + iVar2)));
    if (sVar11 < 0) {
      param_1[2] = iVar5 + (2 - sVar11) * 2;
      sVar11 = *((short *)GEN_TOP((iVar5 + 4 + iVar2)));
    }
    else {
      param_1[2] = iVar5 + 4;
    }
    if (piVar7[4] != (uint)uVar1) {
      piVar7 = ((int *)GEN_TOP(F_00d2ccd0()));
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x90))))(piVar7 GEN_EDX_ARG,(uint)uVar1)));
      if (piVar7 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
    }
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG,(int)sVar11);
    param_1[4] = *((undefined4 *)GEN_TOP((uVar9 + 0xc)));
    break;
  case 0xcd8027: ;
    param_1[2] = param_1[2] + 2;
    break;
  case 0xcd805a: ;
    if (!bVar3) {
      return 0;
    }
    param_1[2] = param_1[2] - 2;
    param_1[1] = 0xffffffff;
    return 1;
  case 0xcd8078: ;
    if (!bVar3) {
      return 0;
    }
    param_1[2] = param_1[2] - 2;
    param_1[1] = param_1[3];
    return 1;
  }
switchD_00cd7e46_caseD_cd7efc: ;
  uVar9 = (uint)*((ushort *)GEN_TOP((param_1[2] + iVar2)));
  param_1[2] = param_1[2] + 2;
  if (0x3f < uVar9) {
    return 0;
  }
  goto switchD_00cd7e46_switchD;
switchD_00cd7e46_caseD_cd7ed8: ;
  *param_1 = param_1[3];
  bVar3 = true;
  goto switchD_00cd7e46_caseD_cd7efc;
}

/* ref: FUN_00cd81a0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd81a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd81a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d6bc)),&REFG(undefined, 0x112d698),((char *)REFP(0x112d68c)),0x12f8,
                    ((char *)REFP(0x112d648)));
  }
  *(undefined4 *)this = 0;
  uVar1 = (*((short * PTR32 *)GEN_TOP(((int)this + 8))))[1];
  if ((**((short * PTR32 *)GEN_TOP(((int)this + 8))) == 0x2f) && (*(undefined4 *)this = 4, 0xb < uVar1)) {
    *(undefined4 *)this = 0xffffffff;
    return 0;
  }
  return 1;
}

/* ref: FUN_00cd8220 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cd8220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd8220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint * puVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xc))) * 0x10 + 0x14)));
  *piVar1 = *piVar1 + 1;
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (((*((byte *)GEN_TOP(((int)this + iVar3 * 0x10 + 0x1c))) & 1) == 0) &&
     (*((uint *)GEN_TOP(((int)this + iVar3 * 0x10 + 0x18))) <= *((uint *)GEN_TOP(((int)this + iVar3 * 0x10 + 0x14))))) {
    *((int *)GEN_TOP(((int)this + 0xc))) = iVar3 - 1;
    return 0;
  }
  iVar3 = *((int *)GEN_TOP(((int)this + iVar3 * 0x10 + 0x10)));
  if (iVar3 == -1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d70c)),&REFG(undefined1, 0x107fc63),
                    ((char *)REFP(0x112d720))
                    ,0x2a2,((char *)REFP(0x112d768)));
  }
  *(int *)this = iVar3;
  puVar2 = ((uint *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xc))) * 0x10 + 0x1c)));
  *puVar2 = *puVar2 | 2;
  return 1;
}

/* ref: FUN_00cd82b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd82b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd82b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) == 999) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112ce90)),&REFG(undefined, 0x112cacb),((char *)REFP(0x112ce84)),0x1c6,
                    ((char *)REFP(0x112ce50)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x5c)));
  if (((uVar1 != 5) && (uVar1 != 6)) && (uVar1 != 0)) {
    return uVar1;
  }
  F_00cd7a50(this GEN_EDX_ARG);
  F_00cd6220(this GEN_EDX_ARG);
  uVar1 = F_00cd62d0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cd8330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd8330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcd8330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  
  *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = param_1;
  if (param_1 == &REFG(undefined, 0x5)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    puVar1 = F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2c))),0,0x30);
    if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
      puVar1 = ((undefined1 *)GEN_TOP(F_00cd82b0(this GEN_EDX_ARG)));
    }
  }
  else {
    puVar1 = param_1;
    if (param_1 == &REFG(undefined, 0x6)) {
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
      return 6;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00cd8390 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cd8390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd8390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x5c)));
  if (((uVar2 != 5) && (uVar2 != 4)) && (uVar2 != 6)) {
    if (uVar2 != 3) {
      bVar1 = F_00cd81a0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 4;
        return uVar2;
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cd83d0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cd83d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd83d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar2;
  undefined4 uVar3;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 0x10))))((int)this + 0xf0);
  uVar3 = 0;
  bVar1 = F_00cd7d20(this GEN_EDX_FWD,0);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0x10))))((int)this + 0x60);
  fVar2 = F_00d2edb0(((float)GEN_TOF(((extraout_ST0_00 * (float10)(double)extraout_ST0) *
                              (float10)*((float *)GEN_TOP(((int)this + 0x1e8)))))),bVar1,uVar3);
  return GEN_X87(((float)GEN_TOF((fVar2 * (float10)*((float *)GEN_TOP(((int)this + 0x1d4)))))));
}

/* ref: FUN_00cd8440 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd8440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcd8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cb14)),&REFG(undefined, 0x112c9af),((char *)REFP(0x112cb08)),0x13e,
                    ((char *)REFP(0x112cacc)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5),
     (char)uVar2 != '\0')) {
    return;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  return;
}

/* ref: FUN_00cd84d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd84d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd84d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x5c)));
  if ((uVar2 != 0) && (uVar2 != 3)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    uVar2 = ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cb74)),&REFG(undefined, 0x112c9ee),
                            ((char *)REFP(0x112cb68)),0x147,
                            ((char *)REFP(0x112cb30)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,param_1,param_2), (char)uVar2 != '\0')) {
    return uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  return uVar2;
}

/* ref: FUN_00cd8550 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd8550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd8550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cbf0)),&REFG(undefined, 0x112c9ef),((char *)REFP(0x112cbe4)),0x154,
                    ((char *)REFP(0x112cba8)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,param_1,param_2), (char)uVar2 != '\0')) {
    return;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  return;
}

/* ref: FUN_00cd85d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd85d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd85d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x5c))) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cc48)),&REFG(undefined, 0x112ca52),((char *)REFP(0x112cc3c)),0x161,
                    ((char *)REFP(0x112cc0c)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 999;
  return;
}

/* ref: FUN_00cd8630 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cd8630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd8630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  return;
}

/* ref: FUN_00cd8640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd8640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd8640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x150))))(param_1 GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    uVar5 = F_00427d90();
    (*(undefined4 *)(gen_frame + 0x24)) = (int)(uVar5 >> 0x20);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1 GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe4))))(param_1 GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x1b4)));
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x10)) = (int)uVar5;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x20001;
    (*(uint *)(gen_frame + 0xc)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x24));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x20);
  }
  if ((*((int * PTR32 *)GEN_TOP(((int)this + 8))) != ((int *)GEN_TOP(0x0))) &&
     ((*((int * PTR32 *)GEN_TOP(((int)this + 8))) != param_1 || (*((int *)GEN_TOP(((int)this + 0x5c))) != 0)))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cce8)),
                    &REFG(undefined, 0x112caae),((char *)REFP(0x112caa4)),0x17b,"SQEX::CDev::Engine::Sd::Driver::Track::Attach")
    ;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x5c))) != 0) && (*((int *)GEN_TOP(((int)this + 0x5c))) != 999)) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cd70)),&REFG(undefined, 0x112caaf),"Track.cpp"
                    ,0x17c,"SQEX::CDev::Engine::Sd::Driver::Track::Attach");
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = param_2;
  if (*((int *)GEN_TOP(((int)this + 0x5c))) == 999) {
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  }
  piVar4 = ((int *)GEN_TOP(F_00cea080()));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 6;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
    uVar2 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,this);
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
    if ((piVar4 == ((int *)GEN_TOP(0x0))) ||
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x15c))))(piVar4 GEN_EDX_ARG), uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068))), (char)uVar2 == '\0'))
    {
      *((float *)GEN_TOP(((int)this + 0x268))) = (float)(float10)1;
      *((float *)GEN_TOP(((int)this + 0x26c))) = (float)(float10)0;
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + 0x268))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x268))), REFG(float, 0x1088068));
      *((undefined4 *)GEN_TOP(((int)this + 0x26c))) = uVar1;
    }
  }
  if ((*((int *)GEN_TOP(((int)this + 0x5c))) != 0) || (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
    uVar2 = F_00cda360(this GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP(((int)this + 0xa6))) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cd87f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd87f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  float10 fVar2;
  uint uVar3;
  undefined1 * puVar4;
  float10 extraout_ST0;
  
  puVar4 = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x5c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x20b))) = 0;
  if (puVar4 != &REFG(undefined, 0x5)) {
    if (((puVar4 != ((undefined1 *)GEN_TOP(0x0))) && (puVar4 != &REFG(undefined, 0x6))) &&
       (puVar4 != ((undefined1 *)GEN_TOP(0x3e7)))) {
      if (puVar4 == ((undefined1 *)GEN_TOP(0x3))) {
        *((undefined2 *)GEN_TOP(((int)this + 0x208))) = 0;
        *((undefined1 *)GEN_TOP(((int)this + 0x20a))) = 0;
        uVar3 = F_00cd8330(this GEN_EDX_FWD,5);
        return uVar3;
      }
      if (puVar4 != ((undefined1 *)GEN_TOP(0x1))) {
        if ((puVar4 != ((undefined1 *)GEN_TOP(0x2))) && (puVar4 != &REFG(undefined, 0x4))) {
          uVar3 = F_00cc1d20(((undefined *)GEN_TOP(((int)&(*(int *)&gen_args[0]) + 3))) GEN_EDX_ARG,&REFG(undefined, 0x112d07c),&REFG(undefined, 0x112cb13),((char *)REFP(0x112d070)),
                               0x387,((char *)REFP(0x112d044)));
          return uVar3;
        }
        if ((*(int *)&gen_args[0]) != 0) {
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0x10))))((int)this + 0x60);
          fVar2 = (float10)0;
          if ((GEN_ISNAN(fVar2) || GEN_ISNAN(extraout_ST0)) ==
              ((GEN_ISNAN(fVar2) || GEN_ISNAN(extraout_ST0)) || fVar2 == extraout_ST0)) {
            uVar3 = F_00cccd90((int)this + 0x60 GEN_EDX_ARG,(float)fVar2,(*(int *)&gen_args[0]));
            *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 4;
            *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
            return uVar3;
          }
        }
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG);
        }
        (*(int *)&gen_args[0]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
        F_00cbe1a0((int)this + 0xc GEN_EDX_ARG,(uint)&(*(int *)&gen_args[0]));
        uVar3 = F_00cdb430(this GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 4;
        *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
        return uVar3;
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG);
      }
      (*(int *)&gen_args[0]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      uVar3 = F_00cbe1a0((int)this + 0xc GEN_EDX_ARG,(uint)&(*(int *)&gen_args[0]));
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
      *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 4;
      return uVar3;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 5;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
    puVar4 = F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2c))),0,0x30);
    if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
      puVar4 = ((undefined1 *)GEN_TOP(F_00cd82b0(this GEN_EDX_ARG)));
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00cd8980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd8980(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcd8980u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  double dVar6;
  float fVar7;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) == 0) {
    F_00cccbd0((int)param_1 + 0x60 GEN_EDX_FWD,(*(float *)&gen_args[0]));
    fVar7 = F_00cd83d0(param_1 GEN_EDX_ARG);
    if (*((int *)GEN_TOP(((int)param_1 + 4))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) + 0x4c))))
                (*((int * PTR32 *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar7));
    }
    (*(int *)&gen_args[1]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    uVar2 = F_00cbddc0((int)param_1 + 0xc GEN_EDX_ARG,fVar7,(uint)&(*(int *)&gen_args[1]));
  }
  else {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x60))) + 0x10))))((int)param_1 + 0x60); dVar6 = extraout_ST0;
    fVar5 = (float10)(*(float *)&gen_args[0]);
    bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
    bVar4 = bVar3 || fVar5 == extraout_ST0;
    uVar2 = CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                     (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 |
                     (ushort)bVar4 << 0xe);
    if (bVar3 == bVar4) {
      uVar2 = F_00cccd90((int)param_1 + 0x60 GEN_EDX_ARG,(*(float *)&gen_args[0]),iVar1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00cd8a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd8a30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcd8a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = F_00c51673((double)param_2);
  if (uVar2 != 0) {
    param_2 = (float)(float10)1;
  }
  F_00cccc10((int)param_1 + 0x60 GEN_EDX_ARG,param_2);
  if ((*((int *)GEN_TOP(((int)param_1 + 8))) != 0) && (*((int *)GEN_TOP(((int)param_1 + 4))) != 0)) {
    iVar1 = **((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
    fVar3 = F_00cd83d0(param_1 GEN_EDX_ARG);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x4c))))
                      (*((undefined4 *)GEN_TOP(((int)param_1 + 4))),(undefined4)gen_fl2bits(fVar3));
  }
  return uVar2;
}

/* ref: FUN_00cd8a90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd8a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd8a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int * piVar1;
  undefined4 uVar2;
  double dVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) == 999) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112cde4)),&REFG(undefined, 0x112cac9),"Track.cpp",0x1a1,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Detach");
  }
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112ce3c)),&REFG(undefined, 0x112caca),"Track.cpp",0x1a2,
                    "SQEX::CDev::Engine::Sd::Driver::Track::Detach");
  }
  F_00cd87f0(this GEN_EDX_ARG,0);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar5 = F_00427d90();
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
    (*(uint *)(gen_frame + 0x20)) = uVar4;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xe4))))(piVar1 GEN_EDX_ARG);
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x1b4)));
    (*(uint *)(gen_frame + 0x8)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x20002;
    (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x20));
    (*(ulonglong *)(gen_frame + 0x10)) = uVar5;
    F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x20);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2c))),0,0x30);
  F_00cd82b0(this GEN_EDX_ARG);
  F_00cea180(*((undefined4 *)GEN_TOP(((int)this + 4))));
  dVar3 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  (*(uint *)(gen_frame + 0x20)) = (int)dVar3;
  uVar4 = F_00cbe1a0((int)this + 0xc GEN_EDX_ARG,(uint)&(*(uint *)(gen_frame + 0x20)));
  return uVar4;
}

/* ref: FUN_00cd8c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd8c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd8c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00cd87f0(this GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x8c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x40))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0)));
  F_00cbe1a0((int)this + 0xc GEN_EDX_ARG,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  uVar1 = F_00cd8a90(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cd8c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cd8c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcd8c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  undefined2 extraout_var = 0;
  uint uVar3;
  bool bVar4;
  float10 extraout_ST0;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xe8))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))));
  dVar6 = (double)(float)extraout_ST0;
  dVar5 = F_00d2cff0();
  bVar4 = (GEN_ISNAN(dVar5) || GEN_ISNAN(dVar6)) || dVar5 == dVar6;
  uVar3 = CONCAT22(extraout_var,
                   (ushort)!(dVar6 <= dVar5) << 8 | (ushort)(GEN_ISNAN(dVar5) || GEN_ISNAN(dVar6)) << 10 |
                   (ushort)bVar4 << 0xe);
  if (!(dVar6 <= dVar5) != bVar4) {
    iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 8)));
    uVar7 = 0;
    dVar6 = F_00d2cff0();
    ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x80))))
              (*((undefined4 *)GEN_TOP(((int)this + 8))),
               (undefined4)gen_fl2bits((float)((float10)(float)extraout_ST0 - (float10)dVar6)),uVar7
              );
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
    if (iVar1 == -1) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
      }
      ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d70c)),&REFG(undefined1, 0x107fc63),
                      ((char *)REFP(0x112d720))
                      ,0x2a2,((char *)REFP(0x112d768))
                     );
    }
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1;
    F_00cdb540(this GEN_EDX_ARG,0x24);
    if ((*((byte *)GEN_TOP(((int)this + 0x24c))) & 0x10) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 4))))
                ((int)this + 0x228,(undefined4)gen_fl2bits((float)(float10)1));
    }
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xfffffffb | 0x10;
    *((uint *)GEN_TOP(((int)this + 0x24c))) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00cd8d60 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cd8d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcd8d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0xd4, 12, 4);
  int * piVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0));
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x4)) = (float)fVar2;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x214)));
  (*(float *)(gen_frame + 0x8)) = (float)fVar2;
  uVar4 = uVar3 & 3;
  if (((uVar3 >> 2 & 3) == uVar4) && (param_2 == 0)) {
    if ((uVar3 & 0x10) == 0) {
      return uVar3;
    }
    *((uint *)GEN_TOP(((int)this + 0x214))) = uVar3 & 0xffffffef;
    uVar4 = (uVar3 & 0xffffffef) >> 2 & 3;
    if (uVar4 == 0) {
      (*(float *)(gen_frame + 0x4)) = (float)(float10)1;
      (*(float *)(gen_frame + 0x8)) = (float)fVar2;
      uVar4 = 0;
    }
    else if (uVar4 == 1) {
      (*(float *)(gen_frame + 0x4)) = (float)fVar2;
      (*(float *)(gen_frame + 0x8)) = (float)(float10)1;
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 - 2;
      if (uVar4 == 0) {
        (*(float *)(gen_frame + 0x4)) = (float)fVar2;
        (*(float *)(gen_frame + 0x8)) = (float)fVar2;
        uVar4 = F_00cdb540(this GEN_EDX_FWD,0xc);
      }
    }
    goto LAB_00cd8e78;
  }
  fVar5 = (float10)1;
  uVar3 = uVar4 * 4 | uVar3 & 0xfffffff3;
  *((uint *)GEN_TOP(((int)this + 0x214))) = uVar3;
  if (uVar4 == 0) {
    (*(float *)(gen_frame + 0x4)) = (float)fVar5;
    (*(float *)(gen_frame + 0x8)) = (float)fVar2;
    uVar4 = 0;
LAB_00cd8e5f: ;
    if (param_2 != 0) goto LAB_00cd8e78;
  }
  else {
    if (uVar4 == 1) {
      (*(float *)(gen_frame + 0x4)) = (float)fVar2;
      (*(float *)(gen_frame + 0x8)) = (float)fVar5;
      uVar4 = 0;
      goto LAB_00cd8e5f;
    }
    uVar4 = uVar4 - 2;
    if (uVar4 != 0) goto LAB_00cd8e5f;
    (*(float *)(gen_frame + 0x4)) = (float)fVar2;
    (*(float *)(gen_frame + 0x8)) = (float)(float10)1;
    fVar5 = fVar2;
  }
  *((uint *)GEN_TOP(((int)this + 0x214))) = uVar3 | 0x10;
  fVar2 = fVar5;
LAB_00cd8e78: ;
  (*(float *)(gen_frame + 0x0)) = (float)fVar2;
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar4 == '\x06') {
      (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x4));
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      fVar2 = (float10)0;
      (*(float *)(gen_frame + 0x10)) = (float)fVar2;
      (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x8));
      (*(float *)(gen_frame + 0x18)) = (float)fVar2;
      (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x0));
      (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x0));
      (*(float *)(gen_frame + 0x20)) = (float)fVar2;
      (*(float *)(gen_frame + 0x24)) = (float)fVar2;
      (*(float *)(gen_frame + 0x2c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x34)) = (float)fVar2;
      (*(float *)(gen_frame + 0x3c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x40)) = (float)fVar2;
      (*(float *)(gen_frame + 0x44)) = (float)fVar2;
      (*(float *)(gen_frame + 0x48)) = (float)fVar2;
      (*(float *)(gen_frame + 0x4c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x50)) = (float)fVar2;
      (*(float *)(gen_frame + 0x54)) = (float)fVar2;
      (*(float *)(gen_frame + 0x58)) = (float)fVar2;
      (*(float *)(gen_frame + 0x5c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x60)) = (float)fVar2;
      (*(float *)(gen_frame + 0x64)) = (float)fVar2;
      (*(float *)(gen_frame + 0x68)) = (float)fVar2;
      (*(float *)(gen_frame + 0x6c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x70)) = (float)fVar2;
      (*(float *)(gen_frame + 0x74)) = (float)fVar2;
      (*(float *)(gen_frame + 0x78)) = (float)fVar2;
      (*(float *)(gen_frame + 0x7c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x80)) = (float)fVar2;
      (*(float *)(gen_frame + 0x84)) = (float)fVar2;
      (*(float *)(gen_frame + 0x88)) = (float)fVar2;
      (*(float *)(gen_frame + 0x8c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x90)) = (float)fVar2;
      (*(float *)(gen_frame + 0x94)) = (float)fVar2;
      (*(float *)(gen_frame + 0x98)) = (float)fVar2;
      (*(float *)(gen_frame + 0x9c)) = (float)fVar2;
      (*(float *)(gen_frame + 0xa0)) = (float)fVar2;
      (*(float *)(gen_frame + 0xa4)) = (float)fVar2;
      (*(float *)(gen_frame + 0xa8)) = (float)fVar2;
      (*(float *)(gen_frame + 0xac)) = (float)fVar2;
      (*(float *)(gen_frame + 0xb0)) = (float)fVar2;
      (*(float *)(gen_frame + 0xb4)) = (float)fVar2;
      (*(float *)(gen_frame + 0xb8)) = (float)fVar2;
      (*(float *)(gen_frame + 0xbc)) = (float)fVar2;
      (*(float *)(gen_frame + 0xc0)) = (float)fVar2;
      (*(float *)(gen_frame + 0xc4)) = (float)fVar2;
      (*(float *)(gen_frame + 0xc8)) = (float)fVar2;
      (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x4));
      (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x8));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG,6,&(*(float *)(gen_frame + 0xc)));
        return uVar3;
      }
    }
    else {
      (*(float *)(gen_frame + 0x4c)) = (*(float *)(gen_frame + 0x4));
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
      fVar2 = (float10)0;
      (*(float *)(gen_frame + 0x50)) = (float)fVar2;
      (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x8));
      (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x8));
      (*(float *)(gen_frame + 0x58)) = (float)fVar2;
      (*(float *)(gen_frame + 0x5c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x64)) = (float)fVar2;
      (*(float *)(gen_frame + 0x6c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x70)) = (float)fVar2;
      (*(float *)(gen_frame + 0x74)) = (float)fVar2;
      (*(float *)(gen_frame + 0x78)) = (float)fVar2;
      (*(float *)(gen_frame + 0x7c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x80)) = (float)fVar2;
      (*(float *)(gen_frame + 0x84)) = (float)fVar2;
      (*(float *)(gen_frame + 0x88)) = (float)fVar2;
      (*(float *)(gen_frame + 0x8c)) = (float)fVar2;
      (*(float *)(gen_frame + 0x90)) = (float)fVar2;
      (*(float *)(gen_frame + 0x94)) = (float)fVar2;
      (*(float *)(gen_frame + 0x98)) = (float)fVar2;
      (*(float *)(gen_frame + 0x9c)) = (float)fVar2;
      (*(float *)(gen_frame + 0xa0)) = (float)fVar2;
      (*(float *)(gen_frame + 0xa4)) = (float)fVar2;
      (*(float *)(gen_frame + 0xa8)) = (float)fVar2;
      (*(float *)(gen_frame + 0xac)) = (float)fVar2;
      (*(float *)(gen_frame + 0xb0)) = (float)fVar2;
      (*(float *)(gen_frame + 0xb4)) = (float)fVar2;
      (*(float *)(gen_frame + 0xb8)) = (float)fVar2;
      (*(float *)(gen_frame + 0xbc)) = (float)fVar2;
      (*(float *)(gen_frame + 0xc0)) = (float)fVar2;
      (*(float *)(gen_frame + 0xc4)) = (float)fVar2;
      (*(float *)(gen_frame + 0xc8)) = (float)fVar2;
      (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x4));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb4))))(piVar1 GEN_EDX_ARG,4,&(*(float *)(gen_frame + 0x4c)));
        return uVar3;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00cd9050 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd9050(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xcd9050u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int * piVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  undefined4 * puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float10 fVar16;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  if (-1 < *((int *)GEN_TOP(((int)param_1 + 0x1c)))) {
    if (*((int *)GEN_TOP(((int)param_1 + 0x24))) == 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
      }
      ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112d16c),&REFG(undefined, 0x112cb2e),((char *)REFP(0x112d160)),0x5e6,
                      ((char *)REFP(0x112d128)));
      return;
    }
    fVar16 = GEN_X87((float10)(*(float *)&gen_args[0]) + (float10)*((float *)GEN_TOP(((int)param_1 + 0x210))));
    (*(float *)&gen_args[0]) = gen_bits2f((int)fVar16);
    *((int *)GEN_TOP(((int)param_1 + 0x20))) = *((int *)GEN_TOP(((int)param_1 + 0x20))) - (int)gen_fl2bits((*(float *)&gen_args[0]));
    *((float *)GEN_TOP(((int)param_1 + 0x210))) =
         (float)((float10)(float)fVar16 - (float10)(int)gen_fl2bits((*(float *)&gen_args[0])));
    if (*((int *)GEN_TOP(((int)param_1 + 0x20))) < 1) {
      (*(int *)(gen_frame + 0x10)) = *((int *)GEN_TOP(((int)param_1 + 0x20)));
LAB_00cd90e6: ;
      (*(float *)&gen_args[0]) = gen_bits2f(CONCAT13(1,GEN_PIECE(&(*(float *)&gen_args[0]), 0, 3)));
      do {
        if (*((int *)GEN_TOP(((int)param_1 + 0x1c))) < 0) {
          return;
        }
        uVar14 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1c))) + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
        *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + 2;
        cVar10 = (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0));
        switch((unsigned int)(uintptr_t)(uVar14)) {
        case 0: ;
          goto switchD_00cd9114_caseD_0;
        case 1: ;
          F_00cdc1e0(param_1 GEN_EDX_ARG);
          break;
        case 2: ;
          F_00cdb0b0(param_1 GEN_EDX_ARG);
          break;
        case 3: ;
          (*(float *)(gen_frame + 0x14)) = (float)(float10)0;
          bVar11 = F_00cda700(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x14)));
          fVar1 = *((float *)GEN_TOP(((int)param_1 + 0x210)));
          (*(float *)&gen_args[0]) = gen_bits2f(CONCAT13(bVar11 == 0,GEN_PIECE(&(*(float *)&gen_args[0]), 0, 3)));
          *((float *)GEN_TOP(((int)param_1 + 0x210))) = (float)((float10)(*(float *)(gen_frame + 0x14)) + (float10)fVar1);
          sVar5 = *((short *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1c))) + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + 2;
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) - 2;
          if (sVar5 == 0x11) goto LAB_00cd90e6;
          break;
        case 4: ;
          F_00cda7b0(param_1 GEN_EDX_ARG);
          break;
        case 5: ;
          F_00cda780(param_1 GEN_EDX_ARG);
          break;
        case 6: ;
          F_00cdb180(param_1 GEN_EDX_ARG);
          break;
        case 7: ;
          F_00cdb500(param_1 GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)));
          break;
        case 8: ;
          F_00cdb9c0(param_1 GEN_EDX_ARG);
          break;
        case 9: ;
          F_00cda830(param_1 GEN_EDX_ARG);
          break;
        case 10: ;
          F_00cdb0e0(param_1 GEN_EDX_ARG);
          break;
        default: ;
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x1c))) = 0xffffffff;
          F_00cdb540(param_1 GEN_EDX_ARG,0x24);
          goto LAB_00cd9814;
        case 0xc: ;
          if ((*((byte *)GEN_TOP(((int)param_1 + 0x24c))) & 8) == 0) goto switchD_00cd9114_caseD_24;
          piVar8 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
          if (((piVar8 != ((int *)GEN_TOP(0x0))) &&
              (uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG), (char)uVar14 == '\0')) ||
             ((bVar11 = F_00cbc040(((undefined *)GEN_TOP(((int)param_1 + 0xc))) GEN_EDX_ARG), bVar11 != 0 &&
              ((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) == '\0')))) goto LAB_00cd97f7;
          *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 0xfffffff7;
          F_00cdb430(param_1 GEN_EDX_ARG);
          break;
        case 0xd: ;
          F_00cd6fd0((int)param_1 + 0x1c GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)));
          break;
        case 0xe: ;
          F_00cd8220(((undefined *)GEN_TOP(((int)param_1 + 0x1c))) GEN_EDX_ARG);
          break;
        case 0xf: ;
          iVar13 = *((int *)GEN_TOP(((int)param_1 + 0x1c)));
          if ((*((byte *)GEN_TOP(((int)param_1 + 0x214))) & 0x20) != 0) {
            F_00cdb620(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])),0x24);
          }
          bVar11 = F_00cdc280(param_1 GEN_EDX_ARG);
          if (bVar11 == 0) {
            *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 - 2;
            return;
          }
          break;
        case 0x10: ;
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x1c))) = 0xffffffff;
          return;
        case 0x11: ;
          (*(float *)&gen_args[0]) = (float)(float10)0;
          F_00cda900(param_1 GEN_EDX_ARG,&(*(float *)&gen_args[0]));
          fVar16 = (float10)(*(float *)&gen_args[0]);
          fVar1 = *((float *)GEN_TOP(((int)param_1 + 0x210)));
          iVar13 = *((int *)GEN_TOP(((int)param_1 + 0x20)));
          (*(float *)&gen_args[0]) = gen_bits2f(CONCAT13(iVar13 < 1,GEN_PIECE(&(*(float *)&gen_args[0]), 0, 3)));
          *((float *)GEN_TOP(((int)param_1 + 0x210))) = (float)(fVar16 + (float10)fVar1);
          break;
        case 0x12: ;
          F_00cda950(param_1 GEN_EDX_ARG);
          break;
        case 0x13: ;
          F_00cdbc50(param_1 GEN_EDX_ARG);
          break;
        case 0x14: ;
          F_00cdc390(param_1 GEN_EDX_ARG);
          break;
        case 0x15: ;
          F_00cdc4a0(param_1 GEN_EDX_ARG);
          break;
        case 0x16: ;
          F_00cdb240(param_1 GEN_EDX_ARG);
          break;
        case 0x17: ;
          F_00cdb2c0(param_1 GEN_EDX_ARG);
          break;
        case 0x18: ;
          F_00cdaa00(param_1 GEN_EDX_ARG);
          break;
        case 0x19: ;
          F_00cdaa30(param_1 GEN_EDX_ARG);
          break;
        case 0x1a: ;
          F_00cdaa80(param_1 GEN_EDX_ARG);
          break;
        case 0x1b: ;
          F_00cdab10(param_1 GEN_EDX_ARG);
          break;
        case 0x1c: ;
          F_00cdab40(param_1 GEN_EDX_ARG);
          break;
        case 0x1d: ;
          F_00cda9d0(param_1 GEN_EDX_ARG);
          break;
        case 0x1e: ;
          F_00cdac70(param_1 GEN_EDX_ARG);
          break;
        case 0x1f: ;
          F_00cdad40(param_1 GEN_EDX_ARG);
          break;
        case 0x20: ;
          F_00cdae10(param_1 GEN_EDX_ARG);
          break;
        case 0x21: ;
          F_00cdb1e0(param_1 GEN_EDX_ARG);
          break;
        case 0x22: ;
          bVar11 = F_00cdaec0(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x10)));
          (*(float *)&gen_args[0]) = gen_bits2f(CONCAT13(bVar11 == 0,GEN_PIECE(&(*(float *)&gen_args[0]), 0, 3)));
          break;
        case 0x23: ;
          F_00cdb900(param_1 GEN_EDX_ARG);
          break;
        case 0x24: ;
switchD_00cd9114_caseD_24: ;
          if ((*((byte *)GEN_TOP(((int)param_1 + 0x24c))) & 1) == 0) {
            F_00cdb620(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])),uVar14);
            piVar8 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
            *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) | 2;
            if (((piVar8 == ((int *)GEN_TOP(0x0))) ||
                (uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x98))))(piVar8 GEN_EDX_ARG), (char)uVar14 != '\0')) &&
               ((bVar11 = F_00cbc040(((undefined *)GEN_TOP(((int)param_1 + 0xc))) GEN_EDX_ARG), bVar11 == 0 ||
                (cVar10 == '\0')))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (((*((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 8) != 0) && (bVar9)) {
LAB_00cd97f7: ;
              *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) - 2;
              return;
            }
            *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 0xfffffff7;
            F_00cdb430(param_1 GEN_EDX_ARG);
          }
          break;
        case 0x25: ;
          F_00cdaf50(param_1 GEN_EDX_ARG);
          break;
        case 0x26: ;
          break;
        case 0x27: ;
          F_00cdabb0(param_1 GEN_EDX_ARG);
          break;
        case 0x28: ;
          bVar11 = F_00cdbfe0(param_1 GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)));
          if (bVar11 == 0) {
            return;
          }
          break;
        case 0x29: ;
          if ((*((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 1) == 0) {
            *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) | 3;
          }
          break;
        case 0x2a: ;
          F_00cdb620(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])),0x24);
          *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 0xfffffffe;
          break;
        case 0x2b: ;
          F_00cda4f0(param_1 GEN_EDX_ARG);
          break;
        case 0x2c: ;
          puVar12 = ((undefined4 *)GEN_TOP(F_00cd6f10(((undefined *)GEN_TOP(((int)param_1 + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x270))) = *puVar12;
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x274))) = puVar12[1];
          break;
        case 0x2d: ;
          F_00cd8d60(param_1 GEN_EDX_ARG,0xff,0);
          break;
        case 0x2e: ;
          F_00cdb620(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])),0x24);
          F_00cd62d0(param_1 GEN_EDX_ARG);
          break;
        case 0x30: ;
          iVar13 = *((int *)GEN_TOP(((int)param_1 + 0x1c)));
          fVar1 = *((float *)GEN_TOP((iVar13 + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
          (*(float *)(gen_frame + 0x14)) = fVar1;
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 + 4;
          *((float *)GEN_TOP(((int)param_1 + 0x268))) = fVar1;
          fVar16 = (float10)1;
          goto LAB_00cd959f;
        case 0x31: ;
          *((float *)GEN_TOP(((int)param_1 + 0x268))) = (float)(float10)1;
          fVar16 = (float10)0;
LAB_00cd959f: ;
          *((float *)GEN_TOP(((int)param_1 + 0x26c))) = (float)fVar16;
          F_00cdafb0(param_1 GEN_EDX_ARG);
          piVar8 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
          if (piVar8 != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x88))))
                      (piVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x268))),
                       *((undefined4 *)GEN_TOP(((int)param_1 + 0x26c))));
          }
          break;
        case 0x32: ;
          bVar11 = F_00cdbd90(param_1 GEN_EDX_ARG,(*(float *)&gen_args[1]));
          if (bVar11 == 0) goto code_r0x00cd950e;
          break;
        case 0x33: ;
          F_00cdb130(param_1 GEN_EDX_ARG);
          break;
        case 0x34: ;
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x250))) = 0;
          break;
        case 0x35: ;
          F_00cdb620(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])),0x24);
switchD_00cd9114_caseD_0: ;
          piVar8 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 8)));
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x1c))) = 0xffffffff;
          if (((piVar8 != ((int *)GEN_TOP(0x0))) &&
              (uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x154))))(piVar8 GEN_EDX_ARG), (char)uVar14 != '\0')) &&
             (uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) + 0xec))))
                                 (*((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG), uVar14 != 4)) {
            uVar14 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) + 0xec))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG)
            ;
            if (uVar14 != 7) {
              return;
            }
            *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 4;
            return;
          }
LAB_00cd9814: ;
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = 4;
          return;
        case 0x36: ;
          F_00cdb620(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])),0x24);
          *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 0xfffffffe;
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x250))) = 0;
          F_00cccbd0((int)param_1 + 0xf0 GEN_EDX_ARG,(float)(float10)1);
          *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 0xfffffffb;
          *((float *)GEN_TOP(((int)param_1 + 0x25c))) = (float)(float10)1;
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x254))) = 0;
          *((undefined4 *)GEN_TOP(((int)param_1 + 600))) = 0;
          *((undefined4 *)GEN_TOP(((int)param_1 + 0x260))) = 0;
          break;
        case 0x37: ;
          F_00cdaac0(param_1 GEN_EDX_ARG);
          break;
        case 0x38: ;
          F_00cdab70(param_1 GEN_EDX_ARG);
          break;
        case 0x39: ;
          uVar4 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1c))) + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
          iVar13 = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + 2;
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13;
          if (uVar4 != 0) {
            *((uint *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 + (uint)uVar4 * 2;
          }
          break;
        case 0x3a: ;
          iVar13 = *((int *)GEN_TOP(((int)param_1 + 0x1c)));
          sVar5 = *((short *)GEN_TOP((iVar13 + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 + 2;
          uVar4 = *((ushort *)GEN_TOP((iVar13 + 2 + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 + 4;
          if (sVar5 != 0) {
            if (sVar5 == 1) {
              sVar5 = *((short *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1c))) + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
              *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + 2;
              *((uint *)GEN_TOP(((int)param_1 + 0x24c))) =
                   *((uint *)GEN_TOP(((int)param_1 + 0x24c))) ^
                   ((uint)(sVar5 == 1) << 5 ^ *((uint *)GEN_TOP(((int)param_1 + 0x24c)))) & 0x20;
            }
            else if (uVar4 != 0) {
              *((uint *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + (uint)uVar4 * 2;
            }
          }
          break;
        case 0x3b: ;
          iVar13 = *((int *)GEN_TOP(((int)param_1 + 0x1c)));
          uVar7 = *((undefined4 *)GEN_TOP((iVar13 + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 + 4;
          iVar15 = *((int *)GEN_TOP(((int)param_1 + 0x24)));
          uVar2 = *((undefined4 *)GEN_TOP((iVar13 + 4 + iVar15)));
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 + 8;
          (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
          uVar3 = *((undefined4 *)GEN_TOP((iVar13 + 8 + iVar15)));
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 + 0xc;
          (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
          fVar1 = *((float *)GEN_TOP((iVar13 + 0xc + iVar15)));
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar13 + 0x10;
          (*(float *)(gen_frame + 0x14)) = fVar1;
          piVar8 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
          if (piVar8 != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xcc))))(piVar8 GEN_EDX_ARG,uVar7,uVar2,uVar3,(undefined4)gen_fl2bits(fVar1));
          }
          break;
        case 0x3c: ;
          F_00cdb6a0(param_1 GEN_EDX_ARG,(*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)));
          break;
        case 0x3d: ;
          iVar13 = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + *((int *)GEN_TOP(((int)param_1 + 0x24)));
          *((int *)GEN_TOP(((int)param_1 + 0x1dc))) = iVar13;
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) =
               *((int *)GEN_TOP(((int)param_1 + 0x1c))) +
               (int)*((short *)GEN_TOP((iVar13 + 2))) + *((short *)GEN_TOP((iVar13 + 4))) * 4;
          if (((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) == '\0') &&
             (piVar8 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 8))), piVar8 != ((int *)GEN_TOP(0x0)))) {
            extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe8))))(piVar8);
            fVar16 = extraout_ST0;
LAB_00cd976e: ;
            F_00cd6c00(param_1 GEN_EDX_ARG,(float)fVar16);
          }
          break;
        case 0x3e: ;
          F_00cd8c60(param_1 GEN_EDX_ARG);
          break;
        case 0x3f: ;
          iVar15 = *((int *)GEN_TOP(((int)param_1 + 0x24))) + *((int *)GEN_TOP(((int)param_1 + 0x1c)));
          *((int *)GEN_TOP(((int)param_1 + 0x1e0))) = iVar15;
          iVar13 = (int)*((short *)GEN_TOP((iVar15 + 2)));
          if (0 < *((short *)GEN_TOP((iVar15 + 4)))) {
            (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)*((short *)GEN_TOP((iVar15 + 4))));
            do {
              sVar5 = *((short *)GEN_TOP((iVar15 + 2 + iVar13)));
              sVar6 = *((short *)GEN_TOP((iVar15 + 4 + iVar13)));
              fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) - 1);
              (*(float *)(gen_frame + 0x14)) = fVar1;
              iVar13 = sVar5 + iVar13 + sVar6 * 4;
            } while (fVar1 != 0.0);
          }
          *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + iVar13;
          if (((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) == '\0') &&
             (piVar8 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 8))), piVar8 != ((int *)GEN_TOP(0x0)))) {
            extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe8))))(piVar8);
            fVar16 = extraout_ST0_00;
            goto LAB_00cd976e;
          }
        }
        if ((*(undefined1 *)((char *)&(*(float *)&gen_args[0]) + 3)) == '\0') {
          return;
        }
      } while( true );
    }
  }
  return;
code_r0x00cd950e: ;
  if ((*((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 1) == 0) {
    return;
  }
  if ((*((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 2) != 0) {
    return;
  }
  goto LAB_00cd90e6;
}

/* ref: FUN_00cd9d70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cd9d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcd9d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  int * piVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float fVar6;
  
  if (*((char *)GEN_TOP(((int)this + 0x20b))) != '\0') {
    return;
  }
  if (*((char *)GEN_TOP(((int)this + 0x20c))) != '\0') {
    return;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  if (iVar1 == 5) {
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 3) {
    return;
  }
  if (iVar1 == 6) {
    return;
  }
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 4)) {
    return;
  }
  if (((iVar1 == 4) && (bVar4 = F_00cea270(this), bVar4 == 0)) &&
     (bVar4 = F_00cbc040(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG), bVar4 == 0)) {
    if (-1 < *((int *)GEN_TOP(((int)this + 0x1c)))) {
      F_00cc1d20(((undefined *)GEN_TOP(((int)&(*(int *)&gen_args[0]) + 3))) GEN_EDX_ARG,&REFG(undefined, 0x112d0e8),&REFG(undefined, 0x112cb2d),((char *)REFP(0x112d0dc)),0x471,
                   ((char *)REFP(0x112d0ac)));
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 5;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
    F_00c48350(((undefined *)GEN_TOP(((int)this + 0x2c))),0,0x30);
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      return;
    }
    F_00cd82b0(this GEN_EDX_ARG);
    return;
  }
  if (*((char *)GEN_TOP(((int)this + 0x208))) != '\0') {
    if (((*((int *)GEN_TOP(((int)this + 0x1c0))) < 1) ||
        (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4))), piVar2 == ((int *)GEN_TOP(0x0)))) ||
       (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x34))))(piVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x1c0)))),
       (char)uVar5 == '\x01')) {
      F_00cdb3a0(this GEN_EDX_ARG);
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x208))) = 0;
  }
  if (*((char *)GEN_TOP(((int)this + 0x20a))) != '\0') {
    if (*((int *)GEN_TOP(((int)this + 0x1c0))) < 1) {
      (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
      F_00cbdf90((int)this + 0xc GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x8)),0);
    }
    else {
      F_00cbd990(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x1c0))),0);
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x20a))) = 0;
  }
  fVar6 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x1e4))) * (float10)(*(int *)&gen_args[0]))));
  (*(float *)(gen_frame + 0x8)) = fVar6;
  F_00cd9050(this GEN_EDX_ARG,fVar6,gen_bits2f((unsigned int)(0)));
  (*(char *)(gen_frame + 0xe)) = '\0';
  (*(char *)(gen_frame + 0xf)) = '\0';
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0xc))))((int)this + 0x60);
  if ((char)uVar5 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 8))))((int)this + 0x60,(*(int *)&gen_args[0]));
    (*(char *)(gen_frame + 0xf)) = '\x01';
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 0xc))))((int)this + 0xf0);
  if ((char)uVar5 == '\0') {
    if ((*((uint *)GEN_TOP(((int)this + 0x24c))) & 4) != 0) {
      *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xfffffffb;
      if (*((int *)GEN_TOP(((int)this + 600))) == 0) {
        F_00cccbd0((int)this + 0xf0 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x25c)))));
        *((float *)GEN_TOP(((int)this + 0x25c))) = (float)(float10)1;
        *((undefined4 *)GEN_TOP(((int)this + 600))) = 0;
      }
      else {
        F_00cccd90((int)this + 0xf0 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x25c)))),*((int *)GEN_TOP(((int)this + 600))));
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 8))))((int)this + 0xf0,(*(int *)&gen_args[0]));
        *((float *)GEN_TOP(((int)this + 0x25c))) = (float)(float10)1;
        *((undefined4 *)GEN_TOP(((int)this + 600))) = 0;
      }
      goto LAB_00cd9fbe;
    }
    if ((*(char *)(gen_frame + 0xf)) != '\0') goto LAB_00cd9fbe;
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 8))))((int)this + 0xf0,(*(int *)&gen_args[0]));
LAB_00cd9fbe: ;
    fVar6 = F_00cd83d0(this GEN_EDX_ARG);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = fVar6;
    (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar6),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0))));
    if (*((int * PTR32 *)GEN_TOP(((int)this + 4))) != ((int *)GEN_TOP(0x0))) {
      iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 4)));
      fVar6 = F_00cd83d0(this GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x4c))))(*((undefined4 *)GEN_TOP(((int)this + 4))),(undefined4)gen_fl2bits(fVar6));
    }
    fVar6 = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
    (*(float *)(gen_frame + 0x8)) = fVar6;
    F_00cbddc0((int)this + 0xc GEN_EDX_ARG,(*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)),(uint)&(*(float *)(gen_frame + 0x8)));
    if (*((int *)GEN_TOP(((int)this + 0x5c))) == 4) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) + 0x10))))((int)this + 0x60);
      fVar3 = (float10)*(float *)&REFG(undefined, 0x1088114);
      if (!(fVar3 <= extraout_ST0) != ((GEN_ISNAN(extraout_ST0) || GEN_ISNAN(fVar3)) || extraout_ST0 == fVar3))
      {
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG);
        }
        F_00cdb430(this GEN_EDX_ARG);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = fVar6;
        (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar6),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0))));
        F_00cbe1a0((int)this + 0xc GEN_EDX_ARG,(int)&(*(double *)(gen_frame + 0x0)) + 4);
      }
    }
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0xc))))((int)this + 0x84);
  if ((char)uVar5 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 8))))((int)this + 0x84,(*(int *)&gen_args[0]));
    (*(char *)(gen_frame + 0xe)) = '\x01';
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 0xc))))((int)this + 0x228);
  if ((char)uVar5 == '\0') {
    if ((*(char *)(gen_frame + 0xe)) == '\0') goto LAB_00cda116;
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 8))))((int)this + 0x228,(*(int *)&gen_args[0]));
  }
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 0x10))))((int)this + 0x228);
  (*(double *)(gen_frame + 0x0)) = (double)extraout_ST0_00;
  extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x10))))((int)this + 0x84);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  fVar6 = ((float)GEN_TOF(((extraout_ST0_01 * (float10)(*(double *)(gen_frame + 0x0))) * (float10)*((float *)GEN_TOP(((int)this + 0x1ec))))));
  (*(float *)(gen_frame + 0x8)) = fVar6;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x80))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar6));
  }
  (*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0))));
  F_00cbdeb0((int)this + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x8)),(int)&(*(double *)(gen_frame + 0x0)) + 4);
LAB_00cda116: ;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 0xc))))((int)this + 0xa8);
  iVar1 = (*(int *)&gen_args[0]);
  if ((char)uVar5 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 8))))((int)this + 0xa8,(*(int *)&gen_args[0]));
    F_00cdafb0(this GEN_EDX_ARG);
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + 0xc))))((int)this + 0xcc);
  if ((char)uVar5 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xcc))) + 8))))((int)this + 0xcc,iVar1);
    F_00cdafb0(this GEN_EDX_ARG);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,iVar1);
  }
  return;
}

/* ref: FUN_00cda190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda190(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcda190u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cda1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda1a0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcda1a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 4))) = param_2;
  return in_ecx;
}

/* ref: FUN_00cda1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda1b0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcda1b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 8))) = param_2;
  return in_ecx;
}

/* ref: FUN_00cda220 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cda220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined4 *)this = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xffffffff;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x10))),0,0x30);
  return (uint)this;
}

/* ref: FUN_00cda290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcda290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cda2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda2d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcda2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return param_2;
}

/* ref: FUN_00cda2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda2e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcda2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cda310 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cda310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  F_00cccb40(in_ecx + 0x28 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 4 GEN_EDX_ARG);
  return;
}

/* ref: FUN_00cda360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint extraout_EAX = 0;
  float fVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa4))))(piVar1 GEN_EDX_FWD);
    in_EAX = F_00cc2760();
    if (uVar2 == in_EAX) {
      fVar3 = F_00cc2740();
      *((float *)GEN_TOP(((int)this + 0x1e4))) = fVar3;
      *((float *)GEN_TOP(((int)this + 0x1ec))) =
           ((float)GEN_TOF((((((float10)*((float *)GEN_TOP(((int)this + 0x1d8))) *
                     (float10)*((float *)GEN_TOP(((int)this + 0x1c8)))) *
                    (float10)*((float *)GEN_TOP(((int)this + 0x220)))) * (float10)*((float *)GEN_TOP(((int)this + 0x224)))
                   ) * (float10)fVar3)));
      return extraout_EAX;
    }
  }
  *((float *)GEN_TOP(((int)this + 0x1ec))) =
       ((float)GEN_TOF(((((float10)*((float *)GEN_TOP(((int)this + 0x1d8))) * (float10)*((float *)GEN_TOP(((int)this + 0x1c8)))) *
               (float10)*((float *)GEN_TOP(((int)this + 0x220)))) * (float10)*((float *)GEN_TOP(((int)this + 0x224))))));
  return in_EAX;
}

/* ref: FUN_00cda3e0 */
GEN_LIB GEN_FRAME uint F_00cda3e0(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcda3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  return *param_1;
}

/* ref: FUN_00cda3f0 */
GEN_LIB GEN_FRAME float F_00cda3f0(GEN_P(float * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcda3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  return *param_1;
}

/* ref: FUN_00cda400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda400(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcda400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0xc4)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x1a8)));
  *((undefined4 *)GEN_TOP(param_2)) = *((undefined4 *)GEN_TOP((param_1 + 0x1a4)));
  uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x1ac)));
  *((undefined4 *)GEN_TOP((param_2 + 4))) = uVar2;
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x1b0)));
  *((undefined4 *)GEN_TOP((param_2 + 8))) = uVar3;
  *((undefined4 *)GEN_TOP((param_2 + 0xc))) = uVar2;
  fVar6 = F_00cccde0(((undefined *)GEN_TOP((param_1 + 0xa8))) GEN_EDX_FWD);
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(param_2)) + (float10)(float)((float10)fVar6 + (float10)fVar1))));
  fVar4 = (float10)fVar1;
  *((float *)GEN_TOP(param_2)) = fVar1;
  fVar5 = (float10)REFG(float, 0x1090708);
  if (fVar4 <= fVar5 && ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && fVar5 != fVar4)) {
    *((float *)GEN_TOP(param_2)) = GEN_FLT_TO(*((float *)GEN_TOP(param_2)), REFG(float, 0x1090708));
  }
  fVar4 = (float10)1;
  if (!((float10)*((float *)GEN_TOP(param_2)) <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN((float10)*((float *)GEN_TOP(param_2))))) {
    return param_2;
  }
  *((float *)GEN_TOP(param_2)) = (float)fVar4;
  return param_2;
}

/* ref: FUN_00cda4b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xcda4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  return (uint)this;
}

/* ref: FUN_00cda4f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST0_00;
  float10 fVar9;
  double dVar10;
  undefined4 local_10;
  ushort uStack_c;
  
  if (((*((uint *)GEN_TOP(((int)this + 0x24c))) & 1) == 0) || ((*((uint *)GEN_TOP(((int)this + 0x24c))) & 2) != 0)) {
    uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
    *((undefined4 *)GEN_TOP(((int)this + 0x254))) = uVar3;
    uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
    *((undefined4 *)GEN_TOP(((int)this + 600))) = uVar3;
    uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
    *((undefined4 *)GEN_TOP(((int)this + 0x25c))) = uVar3;
    uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
    uVar7 = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
    *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar7;
    *((undefined4 *)GEN_TOP(((int)this + 0x260))) = uVar3;
  }
  else {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 0xc))))((int)this + 0xf0);
    uVar7 = 4;
    if ((char)uVar6 == '\0') {
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
    }
    else if ((*((byte *)GEN_TOP(((int)this + 0x24c))) & 4) == 0) {
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
      iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
      iVar4 = *((int *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
      *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 4;
      fVar1 = *((float *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
      *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 0x10))))((int)this + 0xf0); dVar10 = extraout_ST0_00;
      fVar8 = (float10)0;
      fVar9 = GEN_X87((float10)(float)(extraout_ST0_00 - (float10)fVar1));
      uVar5 = (ushort)((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8);
      uVar7 = CONCAT22((short)((ulonglong)gen_d2bits(dVar10) >> 0x10),
                       (ushort)!(fVar8 <= fVar9) << 8 | (ushort)(GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) << 10 |
                       uVar5 << 0xe);
      if (fVar8 <= fVar9 && uVar5 == 0) {
        fVar8 = (float10)iVar4;
        if (iVar4 < 0) {
          fVar8 = GEN_X87(fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        uStack_c = gen_x87_cw | 0xc00;
        gen_set_x87_cw((unsigned short)uStack_c);
        local_10 = (undefined4)(longlong)TRUNC(fVar8 * fVar9);
        gen_set_x87_cw((unsigned short)gen_x87_cw);
        uVar7 = F_00cccd90((int)this + 0xf0 GEN_EDX_ARG,fVar1,local_10);
      }
    }
    else {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 0x10))))((int)this + 0xf0);
      fVar8 = (float10)iVar2;
      if (iVar2 < 0) {
        fVar8 = GEN_X87(fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uStack_c = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)uStack_c);
      local_10 = (undefined4)(longlong)TRUNC(fVar8 * (float10)(float)((float10)1 - extraout_ST0));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      F_00cccd90((int)this + 0xf0 GEN_EDX_ARG,(float)(float10)1,local_10);
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
      *((undefined4 *)GEN_TOP(((int)this + 600))) = uVar3;
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
      uVar7 = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
      *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar7;
      *((undefined4 *)GEN_TOP(((int)this + 0x25c))) = uVar3;
    }
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x8c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar3);
      return uVar7;
    }
  }
  return uVar7;
}

/* ref: FUN_00cda700 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cda700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcda700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  if ((*((byte *)GEN_TOP(((int)this + 0x24c))) & 0x20) == 0) {
    iVar3 = *((int *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 4;
    *((int *)GEN_TOP(((int)this + 0x20))) = *param_1 + iVar3;
  }
  else {
    fVar1 = *((float *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 4;
    iVar2 = (int)fVar1;
    *param_2 = (float)((float10)fVar1 - (float10)iVar2);
    *((int *)GEN_TOP(((int)this + 0x20))) = *param_1 + iVar2;
  }
  if (0 < *((int *)GEN_TOP(((int)this + 0x20)))) {
    *param_1 = 0;
    return 1;
  }
  *param_1 = *((int *)GEN_TOP(((int)this + 0x20)));
  return 0;
}

/* ref: FUN_00cda780 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cda780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar2 = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar2;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x8c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar1);
  }
  return uVar2;
}

/* ref: FUN_00cda7b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 uStack_e = 0;
  undefined1 uStack_c;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 0x1c)));
  iVar5 = *((int *)GEN_TOP(((int)this + 0x24)));
  uVar2 = *((undefined1 *)GEN_TOP((iVar5 + iVar4)));
  uVar1 = *((undefined4 *)GEN_TOP((iVar5 + 4 + iVar4)));
  uVar6 = *((undefined4 *)GEN_TOP((iVar5 + 8 + iVar4)));
  uVar8 = iVar5 + iVar4;
  uVar3 = *((undefined1 *)GEN_TOP((uVar8 + 1)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar4 + 0xc;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uStack_c = (undefined1)uVar1;
    uVar7 = CONCAT22(uStack_e,CONCAT11(uVar3,uVar2));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar7,CONCAT13(uStack_c,CONCAT21(uStack_e,uVar3)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x58))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar7,uVar1,0);
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 100))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar7,uVar6,0);
  }
  return uVar8;
}

/* ref: FUN_00cda830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 0)) = *((float *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x1c))))));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x1c))) + 8;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = *((float *)GEN_TOP((iVar1 - 4 + iVar3)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar3;
  fVar5 = F_00a4b7d0();
  *((float *)GEN_TOP(((int)this + 0x1c8))) =
       ((float)GEN_TOF(((float10)fVar5 * ((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 0)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4))) +
              (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)))));
  F_00cda360(this GEN_EDX_ARG);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 0x10))))((int)this + 0x228);
  (*(double *)(gen_frame + 0x0)) = (double)extraout_ST0;
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x10))))((int)this + 0x84);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  fVar5 = ((float)GEN_TOF(((extraout_ST0_00 * (float10)(*(double *)(gen_frame + 0x0))) * (float10)*((float *)GEN_TOP(((int)this + 0x1ec))))));
  (*(float *)(gen_frame + 0x8)) = fVar5;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x80))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar5));
  }
  (*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0),
                                 (uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x0)) + 0)))));
  uVar4 = F_00cbdeb0((int)this + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x8)),(int)&(*(double *)(gen_frame + 0x0)) + 4);
  return uVar4;
}

/* ref: FUN_00cda8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcda8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cd6fd0((int)this + 0x1c GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cda900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cda900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcda900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x24c))) & 0x20) != 0) {
    uVar2 = F_00cd70b0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,param_1);
    return uVar2;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  uVar2 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x28))) * 0x10 + 0x30))) * iVar1;
  if (-1 < *((int *)GEN_TOP(((int)this + 0x28)))) {
    uVar2 = uVar2 + *((int *)GEN_TOP(((int)this + 0x20)));
    *((uint *)GEN_TOP(((int)this + 0x20))) = ((int)uVar2 < 1) - 1 & uVar2;
  }
  return uVar2;
}

/* ref: FUN_00cda950 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cda950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar3 + 4;
  fVar2 = *((float *)GEN_TOP((iVar3 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar3 + 8;
  fVar4 = (float10)fVar2;
  fVar5 = (float10)fVar1;
  if (!(fVar4 <= fVar5) != (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4))) {
    fVar6 = F_00a4b7d0();
    fVar5 = (float10)fVar1;
    fVar5 = GEN_X87((float10)fVar6 * ((float10)fVar2 - fVar5) + fVar5);
  }
  *((float *)GEN_TOP(((int)this + 0x218))) = (float)fVar5;
  *((float *)GEN_TOP(((int)this + 0x1e8))) =
       ((float)GEN_TOF((((float10)*((float *)GEN_TOP(((int)this + 0x1c4))) * (float10)*((float *)GEN_TOP(((int)this + 0x218)))) *
              (float10)*((float *)GEN_TOP(((int)this + 0x21c))))));
  return 0;
}

/* ref: FUN_00cda9d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cda9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcda9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar2 = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar2;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x54))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar1);
  }
  return uVar2;
}

/* ref: FUN_00cdaa00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdaa00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdaa00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar4 = iVar1 + 4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar4;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1 + 8;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar2,uVar3);
  }
  return uVar4;
}

/* ref: FUN_00cdaa30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdaa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdaa30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar3 = *((undefined4 *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar4 = iVar2 + 4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar4;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((uVar4 + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x58))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar3,uVar1,0);
  }
  return uVar4;
}

/* ref: FUN_00cdaa80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdaa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdaa80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar3 = *((undefined4 *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar4 = iVar2 + 4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar4;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((uVar4 + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x5c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar3,uVar1);
  }
  return uVar4;
}

/* ref: FUN_00cdaac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdaac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdaac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar3 = *((undefined4 *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 4;
  uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
  uVar4 = *((undefined4 *)GEN_TOP((iVar2 + 8 + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar5 = iVar2 + 0xc;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar5;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x58))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar3,uVar1,uVar4);
  }
  return uVar5;
}

/* ref: FUN_00cdab10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdab10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdab10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar4 = iVar1 + 4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar4;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1 + 8;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 100))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar2,uVar3,0);
  }
  return uVar4;
}

/* ref: FUN_00cdab40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdab40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdab40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar4 = iVar1 + 4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar4;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((uVar4 + *((int *)GEN_TOP(((int)this + 0x24))))));
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1 + 8;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x68))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar2,uVar3);
  }
  return uVar4;
}

/* ref: FUN_00cdab70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdab70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdab70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1 + 4;
  uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1 + 8;
  uVar4 = *((undefined4 *)GEN_TOP((iVar1 + 8 + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar5 = iVar1 + 0xc;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar5;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 100))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar2,uVar3,uVar4);
  }
  return uVar5;
}

/* ref: FUN_00cdabb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdabb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdabb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 4;
  iVar3 = *((int *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((uint *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8U;
  if (iVar3 == 0) {
    F_00cccbd0((int)this + 0x228 GEN_EDX_FWD,((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x230))) * (float10)fVar1))))
    ;
    *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xffffffef;
    return iVar2 + 8U;
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x24c))) & 1) == 0) {
    F_00cccbd0((int)this + 0x228 GEN_EDX_ARG,(float)(float10)1);
    uVar4 = F_00cccd90((int)this + 0x228 GEN_EDX_ARG,fVar1,iVar3);
    *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xffffffef;
    return uVar4;
  }
  uVar4 = F_00cccd90((int)this + 0x228 GEN_EDX_ARG,
                       ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x230))) * (float10)fVar1))),iVar3);
  *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xffffffef;
  return uVar4;
}

/* ref: FUN_00cdac70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdac70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdac70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 4;
  fVar7 = *((float *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
  fVar5 = (float10)fVar7;
  fVar6 = (float10)fVar1;
  if (!(fVar5 <= fVar6) != (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
    fVar7 = F_00a4b7d0();
    fVar6 = (float10)fVar1;
    fVar6 = GEN_X87((float10)fVar7 * ((float10)(*(float *)(gen_frame + 0x0)) - fVar6) + fVar6);
  }
  *((float *)GEN_TOP(((int)this + 0x220))) = (float)fVar6;
  F_00cda360(this GEN_EDX_ARG);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 0x10))))((int)this + 0x228);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x10))))((int)this + 0x84);
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  fVar1 = ((float)GEN_TOF(((extraout_ST0_00 * (float10)(double)extraout_ST0) *
                 (float10)*((float *)GEN_TOP(((int)this + 0x1ec))))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x80))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar1));
  }
  (*(float *)(gen_frame + 0x0)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  uVar4 = F_00cbdeb0((int)this + 0xc GEN_EDX_ARG,fVar1,(uint)&(*(float *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00cdad40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdad40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdad40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 4;
  fVar7 = *((float *)GEN_TOP((iVar2 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
  fVar5 = (float10)fVar7;
  fVar6 = (float10)fVar1;
  if (!(fVar5 <= fVar6) != (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
    fVar7 = F_00a4b7d0();
    fVar6 = (float10)fVar1;
    fVar6 = GEN_X87((float10)fVar7 * ((float10)(*(float *)(gen_frame + 0x0)) - fVar6) + fVar6);
  }
  *((float *)GEN_TOP(((int)this + 0x224))) = (float)fVar6;
  F_00cda360(this GEN_EDX_ARG);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 0x10))))((int)this + 0x228);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x10))))((int)this + 0x84);
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  fVar1 = ((float)GEN_TOF(((extraout_ST0_00 * (float10)(double)extraout_ST0) *
                 (float10)*((float *)GEN_TOP(((int)this + 0x1ec))))));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x80))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar1));
  }
  (*(float *)(gen_frame + 0x0)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  uVar4 = F_00cbdeb0((int)this + 0xc GEN_EDX_ARG,fVar1,(uint)&(*(float *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00cdae10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdae10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float fVar1;
  int * piVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  *((float *)GEN_TOP(((int)this + 0x224))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x224))) * (float10)fVar1)));
  F_00cda360(this GEN_EDX_FWD);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 0x10))))((int)this + 0x228);
  (*(double *)(gen_frame + 0x0)) = (double)extraout_ST0;
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x10))))((int)this + 0x84);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  fVar1 = ((float)GEN_TOF(((extraout_ST0_00 * (float10)(*(double *)(gen_frame + 0x0))) * (float10)*((float *)GEN_TOP(((int)this + 0x1ec))))));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x80))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar1));
  }
  (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0))));
  uVar3 = F_00cbdeb0((int)this + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x8)),(int)&(*(double *)(gen_frame + 0x0)) + 4);
  return uVar3;
}

/* ref: FUN_00cdaec0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdaec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdaec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  int local_10;
  ushort uStack_c;
  
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  if (uVar2 < uVar1) {
    fVar5 = F_00a4b7d0();
    iVar3 = uVar1 - uVar2;
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    uStack_c = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_c);
    local_10 = (int)(longlong)TRUNC(fVar4 * (float10)fVar5);
    uVar2 = local_10 + uVar2;
    gen_set_x87_cw((unsigned short)gen_x87_cw);
  }
  iVar3 = uVar2 + *param_1;
  *((int *)GEN_TOP(((int)this + 0x20))) = iVar3;
  if (0 < iVar3) {
    *param_1 = 0;
    return 1;
  }
  *param_1 = iVar3;
  return 0;
}

/* ref: FUN_00cdaf50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdaf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdaf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  cVar1 = *((char *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x24))))));
  uVar5 = iVar2 + 4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar5;
  iVar3 = *((int *)GEN_TOP((uVar5 + *((int *)GEN_TOP(((int)this + 0x24))))));
  iVar2 = iVar2 + 8;
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2;
  if (cVar1 == '\x01') {
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x28)));
    uVar5 = uVar4;
    if (-1 < (int)uVar4) {
      uVar5 = uVar4 * 2;
      if (*((int *)GEN_TOP(((int)this + uVar4 * 0x10 + 0x30))) == 0) {
        *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + iVar3;
        return uVar4 * 2;
      }
    }
  }
  else if (((cVar1 == '\x02') &&
           (uVar4 = *((uint *)GEN_TOP(((int)this + 0x28))), uVar5 = uVar4, -1 < (int)uVar4)) &&
          (uVar5 = uVar4 * 2, *((int *)GEN_TOP(((int)this + uVar4 * 0x10 + 0x30))) != 0)) {
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + iVar3;
  }
  return uVar5;
}

/* ref: FUN_00cdafb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdafb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdafb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  int * piVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x5c)));
  if (((uVar1 != 5) && (uVar1 != 6)) && (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 8))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x174))))(piVar2 GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      *((byte *)GEN_TOP(((int)this + 0x204))) = *((byte *)GEN_TOP(((int)this + 0x204))) | 4;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x130))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      *((float *)GEN_TOP(((int)this + 0x1fc))) = (float)(float10)1;
    }
    *((byte *)GEN_TOP(((int)this + 0x204))) = *((byte *)GEN_TOP(((int)this + 0x204))) & 0xef;
    piVar2 = ((int *)GEN_TOP(F_00d2cce0()));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x34))))(piVar2 GEN_EDX_ARG);
      if (uVar1 == 2) {
        piVar2 = ((int *)GEN_TOP(F_00d2ccd0()));
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xec))))(piVar2 GEN_EDX_ARG);
          if ((char)uVar1 != '\0') {
            uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
            F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),uVar1);
            uVar1 = F_00cbb300(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            if (uVar1 != 1) {
              if ((uVar1 != 2) || (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4))), piVar2 == ((int *)GEN_TOP(0x0))))
              goto LAB_00cdb086;
              uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xb0))))(piVar2 GEN_EDX_ARG);
              if ((char)uVar1 != '\x04') goto LAB_00cdb086;
            }
            *((byte *)GEN_TOP(((int)this + 0x204))) = *((byte *)GEN_TOP(((int)this + 0x204))) | 0x10;
LAB_00cdb086: ;
            F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            uVar1 = F_00cd6780(this GEN_EDX_ARG);
            return uVar1;
          }
        }
        *((byte *)GEN_TOP(((int)this + 0x204))) = *((byte *)GEN_TOP(((int)this + 0x204))) | 0x10;
      }
    }
    uVar1 = F_00cd6780(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00cdb0b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2)));
  uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 4 + iVar2)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
  uVar3 = F_00cd74c0(this GEN_EDX_FWD,fVar1,uVar3);
  return uVar3;
}

/* ref: FUN_00cdb0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + *((int *)GEN_TOP(((int)this + 0x1c))))));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x1c))) + 8;
  fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) - 4 + iVar3)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar3;
  fVar6 = F_00a4b7d0();
  fVar5 = (float10)fVar2;
  *((float *)GEN_TOP(((int)this + 0x1cc))) = ((float)GEN_TOF(((float10)fVar6 * ((float10)fVar1 - fVar5) + fVar5)));
  uVar4 = F_00cdafb0(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00cdb130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  
  uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  *((undefined4 *)GEN_TOP(((int)this + 0x250))) = uVar2;
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar4;
  fVar8 = (float10)fVar1;
  fVar3 = (float10)0;
  bVar6 = GEN_ISNAN(fVar3) || GEN_ISNAN(fVar8);
  bVar7 = bVar6 || fVar3 == fVar8;
  if (bVar6 == bVar7) {
    uVar5 = F_00cd74c0(this GEN_EDX_FWD,fVar1,0);
    return uVar5;
  }
  return CONCAT22((short)((uint)iVar4 >> 0x10),
                  (ushort)!(fVar8 <= fVar3) << 8 | (ushort)bVar6 << 10 | (ushort)bVar7 << 0xe);
}

/* ref: FUN_00cdb180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2)));
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 4 + iVar2)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
  if (iVar3 == 0) {
    F_00cccbd0((int)this + 0xa8 GEN_EDX_FWD,fVar1);
    uVar4 = F_00cdafb0(this GEN_EDX_ARG);
    return uVar4;
  }
  uVar4 = F_00cccd90((int)this + 0xa8 GEN_EDX_ARG,fVar1,iVar3);
  return uVar4;
}

/* ref: FUN_00cdb1e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2)));
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 4 + iVar2)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
  if (iVar3 == 0) {
    F_00cccbd0((int)this + 0xcc GEN_EDX_FWD,fVar1);
    uVar4 = F_00cdafb0(this GEN_EDX_ARG);
    return uVar4;
  }
  uVar4 = F_00cccd90((int)this + 0xcc GEN_EDX_ARG,fVar1,iVar3);
  return uVar4;
}

/* ref: FUN_00cdb240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar3 + 4;
  fVar2 = *((float *)GEN_TOP((iVar3 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar3 + 8;
  fVar5 = (float10)fVar2;
  fVar6 = (float10)fVar1;
  if (!(fVar5 <= fVar6) != (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
    fVar7 = F_00a4b7d0();
    fVar5 = (float10)fVar1;
    fVar6 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar7 * ((float10)fVar2 - fVar5) + fVar5))));
  }
  F_00cccbd0((int)this + 0xa8 GEN_EDX_ARG,(float)fVar6);
  uVar4 = F_00cdafb0(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00cdb2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  uint uVar2;
  float10 fVar3;
  float fVar4;
  
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  fVar4 = F_00cccde0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  fVar3 = GEN_X87((float10)(float)((float10)fVar4 + (float10)fVar1));
  if (!((float10)REFG(float, 0x1090708) <= fVar3) == (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)REFG(float, 0x1090708)))) {
    if (!(fVar3 <= (float10)1) == (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar3))) goto LAB_00cdb31e;
    fVar3 = GEN_X87(fVar3 - (float10)*(double *)&REFG(undefined, 0x1092098));
  }
  else {
    fVar3 = GEN_X87(fVar3 + (float10)*(double *)&REFG(undefined, 0x1092098));
  }
  fVar3 = (float10)(float)fVar3;
LAB_00cdb31e: ;
  F_00cccbd0((int)this + 0xa8 GEN_EDX_ARG,(float)fVar3);
  uVar2 = F_00cdafb0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00cdb340 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdb340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdb340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == -1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d70c)),&REFG(undefined1, 0x107fc63),
                    ((char *)REFP(0x112d720))
                    ,0x2a2,((char *)REFP(0x112d768)));
  }
  *(int *)this = param_1;
  return;
}

/* ref: FUN_00cdb3a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdb3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar4 = F_00427d90();
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x20)) = uVar3;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1b4)));
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x20003;
    (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x20));
    (*(ulonglong *)(gen_frame + 0x10)) = uVar4;
    F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x20);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 2;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)this + 0x214))) = *((uint *)GEN_TOP(((int)this + 0x214))) | 0x20;
  return;
}

/* ref: FUN_00cdb430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x15c, 4, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined1 * in_ecx;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0x154)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x158);
  in_ecx = ((undefined1 *)(gen_frame + 0x0));
  iVar3 = 3;
  do {
    F_00cea700(in_ecx GEN_EDX_FWD);
    in_ecx = in_ecx + 0x54;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x70))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  }
  F_00cea180(*((undefined4 *)GEN_TOP(((int)this + 4))));
  piVar1 = ((int *)GEN_TOP(F_00cea080()));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 6;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
    uVar2 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,this);
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x74))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    }
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = piVar1;
  iVar3 = 3;
  puVar4 = &(*(uint *)(gen_frame + 0x154));
  do {
    F_00cccb40(puVar4 - 0xc GEN_EDX_ARG);
    F_00cccb40(puVar4 - 0x15 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
    puVar4 = puVar4 - 0x15;
  } while (-1 < iVar3);
  return uVar2;
}

/* ref: FUN_00cdb500 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdb500(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdb500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x208))) = 1;
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x209))) = 1;
    return 0;
  }
  F_00cdb3a0(param_1 GEN_EDX_FWD);
  return 1;
}

/* ref: FUN_00cdb540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdb540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 uVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  ulonglong uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar4 = F_00427d90();
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xa4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x20)) = uVar3;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x1b4)));
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x20004;
    (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x20));
    (*(ulonglong *)(gen_frame + 0x10)) = uVar4;
    in_EAX = F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x0)),0x20);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((short)(*(int *)&gen_args[0]) == 0x24) {
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG);
    }
    (*(int *)&gen_args[0]) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    F_00cbe1a0((int)this + 0xc GEN_EDX_ARG,(uint)&(*(int *)&gen_args[0]));
    uVar3 = F_00cdb430(this GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x214))) = *((uint *)GEN_TOP(((int)this + 0x214))) & 0xffffffdf;
    return uVar3;
  }
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) | 8;
  *((uint *)GEN_TOP(((int)this + 0x214))) = *((uint *)GEN_TOP(((int)this + 0x214))) & 0xffffffdf;
  return in_EAX;
}

/* ref: FUN_00cdb620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdb620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  double dVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = (*(undefined4 *)&gen_args[1]);
  if ((char)(*(int *)&gen_args[0]) == '\0') {
    uVar3 = F_00cdb540(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]));
  }
  else {
    *((undefined1 *)GEN_TOP(((int)this + 0x208))) = 0;
    dVar1 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    *((undefined1 *)GEN_TOP(((int)this + 0x20a))) = 0;
    (*(int *)&gen_args[0]) = (int)dVar1;
    uVar3 = F_00cbe1a0((int)this + 0xc GEN_EDX_ARG,(uint)&(*(int *)&gen_args[0]));
  }
  if (((*((byte *)GEN_TOP(((int)this + 0x24c))) & 0x10) != 0) && ((short)uVar2 != 0xc)) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x228))) + 4))))
                      ((int)this + 0x228,(undefined4)gen_fl2bits((float)(float10)1));
  }
  *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xfffffffb | 0x10;
  return uVar3;
}

/* ref: FUN_00cdb6a0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cdb6a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdb6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  code * pcVar4;
  float10 fVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar9;
  uint * puVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  if (*((int *)GEN_TOP(((int)param_1 + 0x5c))) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d7c4)),&REFG(undefined1, 0x107fc63),((char *)REFP(0x112d7e0)),0x8c5,
                    ((char *)REFP(0x112d7ec)));
  }
  iVar2 = *((int *)GEN_TOP(((int)param_1 + 0x5c)));
  if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && (iVar2 != 3)) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)param_1 + 8))) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d7b0)),&REFG(undefined1, 0x107fc63),((char *)REFP(0x112d7e0)),0x8d3,
                    ((char *)REFP(0x112d7ec)));
  }
  iVar2 = *((int *)GEN_TOP(((int)param_1 + 0x1c)));
  sVar1 = *((short *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
  *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar2 + 2;
  (*(uint *)(gen_frame + 0x10)) = (uint)*((ushort *)GEN_TOP((iVar2 + 2 + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
  *((int *)GEN_TOP(((int)param_1 + 0x1c))) = iVar2 + 4;
  uVar6 = F_00cd7cc0(param_1 GEN_EDX_ARG);
  if ((uVar6 != 0) && (*((int *)GEN_TOP((uVar6 + 0x10))) == (int)sVar1)) {
    piVar7 = ((int *)GEN_TOP(F_00d2ccd0()));
    fVar5 = (float10)0;
    uVar3 = *((undefined4 *)GEN_TOP((uVar6 + 0x14)));
    (*(float *)(gen_frame + 0x0)) = (float)fVar5;
    (*(float *)(gen_frame + 0x4)) = (float)fVar5;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 0)) = (float)fVar5;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = (float)(float10)1;
    (*(double *)(gen_frame + 0x8)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((float)(float10)1),
                                   (uint)gen_fl2bits((float)fVar5)));
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x3c)))) (piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),uVar3,(int)(short)(*(uint *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)),0,0,1);
    F_00cbbdc0(((undefined *)GEN_TOP(((int)param_1 + 0xc))) GEN_EDX_ARG,uVar6);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    uVar6 = (uint)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    puVar10 = &(*(uint *)(gen_frame + 0x10));
    (*(uint *)(gen_frame + 0x10)) = uVar6;
    fVar9 = F_00cd83d0(param_1 GEN_EDX_ARG);
    F_00cbddc0((int)param_1 + 0xc GEN_EDX_ARG,fVar9,(uint)puVar10);
    pcVar4 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x228))) + 0x10)));
    (*(uint *)(gen_frame + 0x10)) = uVar6;
    extraout_ST0 = (*pcVar4)((int)param_1 + 0x228);
    (*(double *)(gen_frame + 0x8)) = (double)extraout_ST0;
    puVar10 = &(*(uint *)(gen_frame + 0x10));
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x84))) + 0x10))))((int)param_1 + 0x84);
    fVar9 = ((float)GEN_TOF(((extraout_ST0_00 * (float10)(*(double *)(gen_frame + 0x8))) *
                   (float10)*((float *)GEN_TOP(((int)param_1 + 0x1ec))))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = fVar9;
    (*(double *)(gen_frame + 0x8)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar9),(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 0)))));
    F_00cbdeb0((int)param_1 + 0xc GEN_EDX_ARG,fVar9,(uint)puVar10);
    uVar8 = F_00cda400(param_1 GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x14)));
    F_00cbc4e0(((undefined *)GEN_TOP(((int)param_1 + 0xc))) GEN_EDX_ARG,uVar8);
    F_00cd6780(param_1 GEN_EDX_ARG);
    fVar9 = F_00cccde0(((undefined *)GEN_TOP(((int)param_1 + 0xcc))) GEN_EDX_ARG);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = fVar9;
    (*(double *)(gen_frame + 0x8)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar9),(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 0)))));
    F_00cccbd0((int)param_1 + 0xcc GEN_EDX_ARG,fVar9);
    F_00cdafb0(param_1 GEN_EDX_ARG);
    if (param_2 == '\0') {
      (*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 4)) = gen_bits2f(uVar6);
      (*(double *)(gen_frame + 0x8)) = gen_bits2d(CONCAT44(uVar6,(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x8)) + 0)))));
      F_00cbdf90((int)param_1 + 0xc GEN_EDX_ARG,(int)&(*(double *)(gen_frame + 0x8)) + 4,0);
      return 1;
    }
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x208))) = 0;
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x209))) = 0x101;
    return 1;
  }
  return 0;
}

/* ref: FUN_00cdb900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  float10 extraout_ST0;
  float10 fVar7;
  double dVar8;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2)));
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2 + 4)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
  if (iVar3 == 0) {
    F_00cccbd0((int)this + 0xf0 GEN_EDX_FWD,fVar1);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)) = F_00cd83d0(this GEN_EDX_ARG);
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4))));
    }
    (*(int *)(gen_frame + 0x0)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    uVar4 = F_00cbddc0((int)this + 0xc GEN_EDX_ARG,(*(float *)((char *)&(*(double *)(gen_frame + 0x4)) + 4)),(uint)&(*(int *)(gen_frame + 0x0)));
  }
  else {
    (*(double *)(gen_frame + 0x4)) = (double)fVar1;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xf0))) + 0x10))))((int)this + 0xf0); dVar8 = extraout_ST0;
    fVar7 = (float10)(*(double *)(gen_frame + 0x4));
    bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN(extraout_ST0);
    bVar6 = bVar5 || fVar7 == extraout_ST0;
    uVar4 = CONCAT22((short)((ulonglong)gen_d2bits(dVar8) >> 0x10),
                     (ushort)!(extraout_ST0 <= fVar7) << 8 | (ushort)bVar5 << 10 |
                     (ushort)bVar6 << 0xe);
    if (bVar5 == bVar6) {
      uVar4 = F_00cccd90((int)this + 0xf0 GEN_EDX_ARG,fVar1,iVar3);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00cdb9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdb9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdb9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + *((int *)GEN_TOP(((int)this + 0x1c))))));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c))) + 8;
  fVar4 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) - 4 + iVar2)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2;
  (*(float *)(gen_frame + 0x0)) = fVar4;
  fVar4 = F_00a4b7d0();
  fVar5 = ((float)GEN_TOF(((float10)fVar4 * ((float10)fVar5 - (float10)(*(float *)(gen_frame + 0x0))) + (float10)(*(float *)(gen_frame + 0x0)))));
  (*(float *)(gen_frame + 0x4)) = fVar5;
  *((float *)GEN_TOP(((int)this + 0x1c4))) = fVar5;
  *((float *)GEN_TOP(((int)this + 0x1e8))) =
       ((float)GEN_TOF((((float10)fVar5 * (float10)*((float *)GEN_TOP(((int)this + 0x218)))) *
              (float10)*((float *)GEN_TOP(((int)this + 0x21c))))));
  fVar5 = F_00cd83d0(this GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  (*(float *)(gen_frame + 0x4)) = fVar5;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar5));
  }
  (*(float *)(gen_frame + 0x0)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  uVar3 = F_00cbddc0((int)this + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)),(uint)&(*(float *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00cdba60 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cdba60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcdba60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  uint3 uVar7;
  int iVar6;
  float fVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  piVar2 = ((int *)GEN_TOP(F_00cd7cc0(param_1 GEN_EDX_FWD)));
  (*(ushort *)(gen_frame + 0x0)) = param_2[1];
  if ((short)(*(ushort *)(gen_frame + 0x0)) < 0) {
    uVar3 = F_00a4b840();
    (*(ushort *)(gen_frame + 0x0)) = *((ushort *)GEN_TOP((*(int *)(param_2 + 2) +
                ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) % (int)(short)param_2[1]
                ) * 2)));
  }
  if (((piVar2 == ((int *)GEN_TOP(0x0))) || (piVar2[4] != (uint)*param_2)) ||
     ((*(byte *)(piVar2 + 0x12) & 8) != 0)) {
    piVar5 = ((int *)GEN_TOP(F_00d2ccd0()));
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x90))))(piVar5 GEN_EDX_ARG,(uint)*param_2)));
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 1;
    }
    if ((*(byte *)(piVar5 + 0x12) & 8) != 0) {
      return 1;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG,(int)(short)(*(ushort *)(gen_frame + 0x0)));
    uVar7 = (uint3)((uint)((int)(uintptr_t)piVar2) >> 8);
    if (*((int *)GEN_TOP(((int)param_1 + 8))) == 0) {
      iVar6 = (uint)uVar7 << 8;
    }
    else {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) + 0x15c))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG);
      iVar6 = CONCAT31(uVar7,(char)uVar4);
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) + 0x104))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG);
    bVar1 = F_00cd7980(param_1 GEN_EDX_ARG,uVar3,iVar6,uVar4 & 0xff);
    if (bVar1 == 0) {
      return 0;
    }
    if (*((int *)GEN_TOP(((int)param_1 + 4))) == 0) goto LAB_00cdbc02;
    iVar6 = **((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
  }
  else {
    if ((param_3 == '\0') &&
       ((*((int *)GEN_TOP(((int)param_1 + 8))) == 0 ||
        (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) + 0x15c))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG),
        (char)uVar3 == '\0')))) {
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
    }
    else {
      (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),1);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) + 0x104))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG);
    uVar3 = uVar3 & 0xff;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG,(int)(short)(*(ushort *)(gen_frame + 0x0)));
    bVar1 = F_00cd7980(param_1 GEN_EDX_ARG,uVar4,(*(uint *)(gen_frame + 0x4)),uVar3);
    if (bVar1 == 0) {
      return 0;
    }
    if (*((int *)GEN_TOP(((int)param_1 + 4))) == 0) goto LAB_00cdbc02;
    iVar6 = **((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
  }
  fVar8 = F_00cd83d0(param_1 GEN_EDX_ARG);
  ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x4c))))(*((undefined4 *)GEN_TOP(((int)param_1 + 4))),(undefined4)gen_fl2bits(fVar8));
  iVar6 = **((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
  fVar8 = F_00cd68f0(param_1 GEN_EDX_ARG);
  ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x80))))(*((undefined4 *)GEN_TOP(((int)param_1 + 4))),(undefined4)gen_fl2bits(fVar8));
  iVar6 = **((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
  uVar3 = F_00cda400(param_1 GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x8)));
  ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x7c))))(*((undefined4 *)GEN_TOP(((int)param_1 + 4))),uVar3);
LAB_00cdbc02: ;
  F_00cd6780(param_1 GEN_EDX_ARG);
  fVar8 = F_00cccde0(((undefined *)GEN_TOP(((int)param_1 + 0xcc))) GEN_EDX_ARG);
  F_00cccbd0((int)param_1 + 0xcc GEN_EDX_ARG,fVar8);
  F_00cdafb0(param_1 GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00cdbc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdbc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdbc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  (*(float *)(gen_frame + 0x4)) = fVar3;
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  *((float *)GEN_TOP(((int)this + 0x21c))) = fVar3;
  *((float *)GEN_TOP(((int)this + 0x1e8))) =
       ((float)GEN_TOF((((float10)*((float *)GEN_TOP(((int)this + 0x218))) * (float10)*((float *)GEN_TOP(((int)this + 0x1c4)))) *
              (float10)fVar3)));
  fVar3 = F_00cd83d0(this GEN_EDX_FWD);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  (*(float *)(gen_frame + 0x4)) = fVar3;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar3));
  }
  (*(int *)(gen_frame + 0x0)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  uVar2 = F_00cbddc0((int)this + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)),(uint)&(*(int *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00cdbcd0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cdbcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdbcd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d7c4)),&REFG(undefined1, 0x107fc63),((char *)REFP(0x112d7e0)),0x8f9,
                    ((char *)REFP(0x112d824)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && (iVar1 != 3)) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d7b0)),&REFG(undefined1, 0x107fc63),((char *)REFP(0x112d7e0)),0x8ff,
                    ((char *)REFP(0x112d824)));
  }
  bVar2 = F_00cdba60(this GEN_EDX_ARG,(int)this + 0x270,1);
  return bVar2;
}

/* ref: FUN_00cdbd90 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdbd90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xcdbd90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int in_ecx;
  int * piVar1;
  double dVar2;
  byte bVar3;
  float fVar4;
  
  if (((*((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 1) != 0) && ((*((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 2) == 0))
  {
    F_00cdbc50(param_1 GEN_EDX_FWD);
    fVar4 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1c))) + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
    *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + 4;
    F_00cd74c0(param_1 GEN_EDX_ARG,fVar4,*((uint *)GEN_TOP(((int)param_1 + 0x250))));
    return 0;
  }
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[0]) + 0)) == '\0') {
    F_00cdb540(param_1 GEN_EDX_ARG,0x24);
  }
  else {
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x208))) = 0;
    dVar2 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x20a))) = 0;
    (*(float *)(gen_frame + 0x4)) = gen_bits2f((int)dVar2);
    F_00cbe1a0((int)param_1 + 0xc GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x4)));
  }
  if ((*((byte *)GEN_TOP(((int)param_1 + 0x24c))) & 0x10) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x228))) + 4))))
              ((int)param_1 + 0x228,(undefined4)gen_fl2bits((float)(float10)1));
  }
  *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 0xfffffffb | 0x10;
  bVar3 = F_00cdbcd0(param_1 GEN_EDX_ARG);
  if (bVar3 == 0) {
    *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) - 2;
    return 0;
  }
  *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 0xfffffffd;
  F_00cdbc50(param_1 GEN_EDX_ARG);
  fVar4 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1c))) + *((int *)GEN_TOP(((int)param_1 + 0x24))))));
  *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) + 4;
  (*(float *)(gen_frame + 0x4)) = fVar4;
  F_00cd74c0(param_1 GEN_EDX_ARG,fVar4,*((uint *)GEN_TOP(((int)param_1 + 0x250))));
  in_ecx = (int)param_1 + 0xf0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x254))) == 0) {
    if (*((int *)GEN_TOP(((int)param_1 + 600))) == 0) {
      F_00cccbd0(in_ecx GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x25c)))));
      fVar4 = F_00cd83d0(param_1 GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x4)) = fVar4;
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar4));
      }
      (*(int *)(gen_frame + 0x0)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      F_00cbddc0((int)param_1 + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)),(uint)&(*(int *)(gen_frame + 0x0)));
    }
    else {
      F_00cccbd0(in_ecx GEN_EDX_ARG,(float)(float10)1);
      F_00cccd90((int)param_1 + 0xf0 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x25c)))),
                   *((undefined4 *)GEN_TOP(((int)param_1 + 600))));
      *((undefined4 *)GEN_TOP(((int)param_1 + 600))) = 0;
    }
    *((float *)GEN_TOP(((int)param_1 + 0x25c))) = (float)(float10)1;
  }
  else {
    F_00cccbd0(in_ecx GEN_EDX_ARG,(float)(float10)0);
    F_00cccd90((int)param_1 + 0xf0 GEN_EDX_ARG,(float)(float10)1,*((undefined4 *)GEN_TOP(((int)param_1 + 0x254))));
    *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) | 4;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x254))) = 0;
  }
  if (*((int *)GEN_TOP(((int)param_1 + 0x260))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x8c))))(piVar1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x260))));
    }
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x260))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x88))))
              (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x268))),*((undefined4 *)GEN_TOP(((int)param_1 + 0x26c))));
  }
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[0]) + 0)) != '\0') {
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x208))) = 1;
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x209))) = 1;
    return 0;
  }
  F_00cdb3a0(param_1 GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00cdbfe0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdbfe0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdbfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int in_ecx;
  uint uVar1;
  int * piVar2;
  double dVar3;
  byte bVar4;
  float fVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0x24c)));
  if (((uVar1 & 1) != 0) && ((uVar1 & 2) == 0)) {
    return 0;
  }
  *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = uVar1 & 0xfffffffd;
  if (param_2 == '\0') {
    F_00cdb540(param_1 GEN_EDX_FWD,0x24);
  }
  else {
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x208))) = 0;
    dVar3 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x20a))) = 0;
    (*(float *)(gen_frame + 0x4)) = gen_bits2f((int)dVar3);
    F_00cbe1a0((int)param_1 + 0xc GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x4)));
  }
  if ((*((byte *)GEN_TOP(((int)param_1 + 0x24c))) & 0x10) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x228))) + 4))))
              ((int)param_1 + 0x228,(undefined4)gen_fl2bits((float)(float10)1));
  }
  *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) & 0xfffffffb | 0x10;
  bVar4 = F_00cdbcd0(param_1 GEN_EDX_ARG);
  if (bVar4 == 0) {
    *((int *)GEN_TOP(((int)param_1 + 0x1c))) = *((int *)GEN_TOP(((int)param_1 + 0x1c))) - 2;
    return 0;
  }
  in_ecx = (int)param_1 + 0xf0;
  if (*((int *)GEN_TOP(((int)param_1 + 0x254))) == 0) {
    if (*((int *)GEN_TOP(((int)param_1 + 600))) == 0) {
      F_00cccbd0(in_ecx GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x25c)))));
      fVar5 = F_00cd83d0(param_1 GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x4)) = fVar5;
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar5));
      }
      (*(int *)(gen_frame + 0x0)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
      F_00cbddc0((int)param_1 + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)),(uint)&(*(int *)(gen_frame + 0x0)));
    }
    else {
      F_00cccbd0(in_ecx GEN_EDX_ARG,(float)(float10)1);
      F_00cccd90((int)param_1 + 0xf0 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x25c)))),
                   *((undefined4 *)GEN_TOP(((int)param_1 + 600))));
      *((undefined4 *)GEN_TOP(((int)param_1 + 600))) = 0;
    }
    *((float *)GEN_TOP(((int)param_1 + 0x25c))) = (float)(float10)1;
  }
  else {
    F_00cccbd0(in_ecx GEN_EDX_ARG,(float)(float10)0);
    F_00cccd90((int)param_1 + 0xf0 GEN_EDX_ARG,(float)(float10)1,*((undefined4 *)GEN_TOP(((int)param_1 + 0x254))));
    *((uint *)GEN_TOP(((int)param_1 + 0x24c))) = *((uint *)GEN_TOP(((int)param_1 + 0x24c))) | 4;
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x254))) = 0;
  }
  if ((*((int *)GEN_TOP(((int)param_1 + 0x260))) != 0) &&
     (piVar2 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4))), piVar2 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x8c))))(piVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)param_1 + 0x260))));
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 4)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x88))))
              (piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x268))),*((undefined4 *)GEN_TOP(((int)param_1 + 0x26c))));
  }
  if (param_2 != '\0') {
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x208))) = 1;
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x209))) = 1;
    return 0;
  }
  F_00cdb3a0(param_1 GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00cdc1e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdc1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdc1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  float fVar6;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2)));
  uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2 + 4)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 8;
  F_00cccbd0((int)this + 0x60 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x1d0)))));
  fVar6 = F_00cd83d0(this GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x4)) = fVar6;
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x4c))))(piVar4 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar6));
  }
  (*(int *)(gen_frame + 0x0)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00cbddc0((int)this + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)),(uint)&(*(int *)(gen_frame + 0x0)));
  uVar5 = F_00cd8980(this GEN_EDX_ARG,fVar1,uVar3);
  *((float *)GEN_TOP(((int)this + 0x1d0))) = fVar1;
  return uVar5;
}

