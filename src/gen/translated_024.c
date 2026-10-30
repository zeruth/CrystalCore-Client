#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00533220 */
GEN_OWN GEN_FRAME uint F_00533220(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 * puVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  fVar2 = (float10)*((float *)GEN_TOP(param_1));
  fVar3 = (float10)*((float *)GEN_TOP(param_2));
  if ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar3)) || fVar2 == fVar3)) {
    if (!(fVar2 < fVar3)) {
      return 1;
    }
    return 0xffffffff;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_2 + 4)));
  uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))))(*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))));
  uVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
  if (uVar4 <= uVar5) {
    return 1;
  }
  return 0xffffffff;
}

/* ref: FUN_005332a0 */
GEN_OWN GEN_FRAME uint F_005332a0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5332a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  if ((float10)*param_1 <= (float10)*param_2) {
    return 0xffffffff;
  }
  return 1;
}

/* ref: FUN_005332c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005332c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5332c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = param_2 + 1;
  if (*in_ecx <= uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_005332e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005332e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5332e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *((int *)GEN_TOP(((int)this + *(int *)((int)(uintptr_t)this) * 8 + 0xc))) = param_1;
    uVar1 = *(uint *)this;
    *((undefined1 *)GEN_TOP(((int)this + uVar1 * 8 + 0x10))) = 0;
    *(int *)this = *(int *)this + 1;
  }
  return uVar1;
}

/* ref: FUN_00533300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0xc + param_2 * 8;
}

/* ref: FUN_00533310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533310(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x533310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP((param_1 + 0x10 + param_2 * 8)));
  *((byte *)GEN_TOP((param_1 + 8))) =
       *((byte *)GEN_TOP((param_1 + 8))) | *((char *)GEN_TOP((param_1 + 0x10 + param_2 * 8))) != param_3;
  *pcVar1 = param_3;
  return (uint)pcVar1;
}

/* ref: Client::Game::Control::TargetSystem::TargetFilter::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x533330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00a5f060(param_1 GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    if (uVar2 != 8) {
      uVar2 = F_00a5f290(param_1 GEN_EDX_ARG);
      if (uVar2 == 0) {
        return 1;
      }
      if (*((char *)GEN_TOP((uVar2 + 0x188))) == '\x02') {
        uVar2 = F_00a62220(uVar2);
        if ((char)uVar2 != '\0') {
          return 0;
        }
      }
      return 1;
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00533390 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00533390(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_005333b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005333b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5333b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca00));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::RayFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005333d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5333d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00a618e0(param_1 GEN_EDX_FWD);
  return bVar1;
}

/* ref: Client::Game::Control::TargetSystem::DelayedRayFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005333e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5333e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00a618e0(param_1 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_005333f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005333f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5333f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109ca0c));
  in_ecx[1] = param_2;
  in_ecx[2] = (undefined4)gen_fl2bits((float)((float10)param_3 * (float10)param_3));
  return (uint)in_ecx;
}

/* ref: FUN_00533410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x533410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca18));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00533430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533430(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109ca24));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00533450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533450(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109ca30));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00533470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x533470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca3c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00533490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533490(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x533490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  param_1[1] = param_2;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = param_4;
  return (uint)param_1;
}

/* ref: Client::Game::Control::TargetSystem::OrFilter::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005334c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5334c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::Control::TargetSystem::NotFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00533500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x533500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,param_1);
  return (char)uVar1 == '\0';
}

/* ref: FUN_00533520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x4c))) = param_2;
  return param_2;
}

/* ref: FUN_005335a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005335a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5335a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  longlong lVar4;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x38);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) &&
     (((puVar2 = ((undefined4 *)GEN_TOP(F_00a5f2b0(param_1))), puVar2 == ((undefined4 *)GEN_TOP(0x0)) ||
       (lVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG), lVar4 == 0xe0000000)) ||
      (uVar3 = F_00a62220(puVar2), (char)uVar3 == '\0')))) {
    bVar1 = F_00a7ede0(&REFG(undefined1, 0x14ab068) GEN_EDX_ARG,0,1,1);
    uVar3 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar3;
}

/* ref: FUN_00533600 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00533600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x533600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = F_00ac1a20(param_2,param_3);
  bVar1 = F_00ac1510(uVar2,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00533630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x533630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0xfb0))) == 0) {
    return 1;
  }
  uVar2 = F_00ac1a20(*((undefined4 *)GEN_TOP(((int)this + 0xfb4))),*((int *)GEN_TOP(((int)this + 0xfb0))));
  bVar1 = F_00ac1510(uVar2,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00533670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00533670(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x533670u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  byte bVar1;
  
  if (param_2 == 0.0) {
    return 0;
  }
  if (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114))) &&
     (bVar1 = F_00532730(param_2,param_3), bVar1 == 0)) {
    return 0;
  }
  bVar1 = F_00533060((uint)gen_fl2bits(param_2),*(float *)&REFG(undefined, 0x109c740));
  return bVar1 != 0;
}

/* ref: FUN_005336d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005336d0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5336d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  byte bVar1;
  
  if (param_2 == 0.0) {
    return 0;
  }
  if (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114))) &&
     (bVar1 = F_00532790(param_2,param_3), bVar1 == 0)) {
    return 0;
  }
  bVar1 = F_00533060((uint)gen_fl2bits(param_2),*(float *)&REFG(undefined, 0x109c740));
  return bVar1 != 0;
}

/* ref: FUN_00533750 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00533750(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00533770 */
GEN_OWN GEN_FRAME byte F_00533770(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  return uVar1 - 4 < 5;
}

/* ref: FUN_00533790 */
GEN_OWN GEN_FRAME uint F_00533790(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_00a5f0b0(param_1,param_2);
  if (uVar2 != 0xe0000000) {
    bVar1 = F_00a66e00(&REFG(undefined, 0x14aa74c) GEN_EDX_ARG,uVar2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0xe0000000;
}

/* ref: FUN_005337c0 */
GEN_OWN GEN_FRAME uint F_005337c0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5337c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if (uVar1 != 1) {
    return 0;
  }
  uVar1 = F_00a5f2b0(param_1);
  if ((uVar1 != 0) && (uVar1 = F_00a62220(uVar1), (char)uVar1 != '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00533800 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00533800(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
  if ((char)uVar1 != '\x03') {
    return 0;
  }
  uVar1 = F_00a5f2b0(param_1);
  if ((uVar1 != 0) && (uVar1 = F_00a62220(uVar1), (char)uVar1 != '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00533840 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00533840(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if (uVar1 == 2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar1 == '\x02') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00533880 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00533880(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if (uVar1 == 1) {
    uVar1 = F_00a5f2b0(param_1);
    if (uVar1 == 0) {
      return 1;
    }
    uVar1 = F_00a62220(uVar1);
    if ((char)uVar1 == '\0') {
      return 1;
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if ((uVar1 == 2) && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG), (char)uVar1 == '\x03')) {
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if ((uVar1 == 2) && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG), (char)uVar1 == '\x02')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00533900 */
GEN_OWN GEN_FRAME byte F_00533900(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != ((int *)GEN_TOP(0x0)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xb8))))(param_2 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      uVar2 = F_00a5f290(param_2 GEN_EDX_ARG);
      bVar1 = F_00a9f2c0(uVar2 GEN_EDX_ARG,param_1);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00533950 */
GEN_OWN GEN_FRAME byte F_00533950(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  if ((param_1 != ((int *)GEN_TOP(0x0))) && (param_2 != 0)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      uVar2 = F_00a5f290(param_1 GEN_EDX_ARG);
      bVar1 = F_00a9f2c0(uVar2 GEN_EDX_ARG,param_2);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005339c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005339c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5339c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x40))) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x40))) + 0x74)));
  }
  return 0xe0000000;
}

/* ref: FUN_005339e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005339e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5339e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x40)));
}

/* ref: FUN_005339f0 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_005339f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5339f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 extraout_EDX = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD);
    return CONCAT44(extraout_EDX,uVar1);
  }
  return 0xe0000000;
}

/* ref: FUN_00533a10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x44))) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x44))) + 0x74)));
  }
  return 0xe0000000;
}

/* ref: FUN_00533a30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533a30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x44)));
}

/* ref: FUN_00533aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((*((char *)GEN_TOP(((int)this + 0x93))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x44))) != 0)) &&
     (lVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD),
     lVar2 != 0xe0000000)) {
    if ((*((char *)GEN_TOP(((int)this + 0x93))) != '\0') && (*((int *)GEN_TOP(((int)this + 0x44))) != 0)) {
      uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))));
      uVar1 = F_00ab1290((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
      return uVar1;
    }
    uVar1 = F_00ab1290(0xe0000000,0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00533b10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined8 uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    uVar2 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x58))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x58))));
    uVar1 = F_00a5f0b0((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    return uVar1;
  }
  uVar1 = F_00a5f0b0(0xe0000000,0);
  return uVar1;
}

/* ref: FUN_00533b40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533b40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x58)));
}

/* ref: FUN_00533b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x78))) = param_2;
  return param_2;
}

/* ref: FUN_00533b60 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00533b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD);
    return CONCAT44(extraout_EDX,uVar2);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG);
    return CONCAT44(extraout_EDX_00,uVar2);
  }
  return 0xe0000000;
}

/* ref: FUN_00533b90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  undefined8 uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) == 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      uVar1 = F_00a5f0b0(0xe0000000,0);
      return uVar1;
    }
  }
  else {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44)));
  }
  uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
  uVar1 = F_00a5f0b0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return uVar1;
}

/* ref: FUN_00533bd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) == 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      lVar3 = 0xe0000000;
    }
    else {
      lVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
    }
  }
  else {
    lVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))));
  }
  if (lVar3 != 0xe0000000) {
    uVar2 = F_00ab1290((int)lVar3,(int)((ulonglong)lVar3 >> 0x20));
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00533c20 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00533c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD);
    return CONCAT44(extraout_EDX,uVar2);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG);
    return CONCAT44(extraout_EDX_00,uVar2);
  }
  return 0xe0000000;
}

/* ref: FUN_00533c90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) == 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      lVar3 = 0xe0000000;
    }
    else {
      lVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
    }
  }
  else {
    lVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))));
  }
  if (lVar3 != 0xe0000000) {
    uVar2 = F_00ab1290((int)lVar3,(int)((ulonglong)lVar3 >> 0x20));
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00533d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00533d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = 0;
  return 0;
}

/* ref: FUN_00533d50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00533d50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint in_EAX = 0;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if ((param_1 != REFG(int, 0x1379694)) && (param_1 != *((int *)GEN_TOP((REFG(int, 0x1379694) + 0x2e00))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00533d80 */
GEN_OWN GEN_FRAME double GEN_STDCALL F_00533d80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  float fVar1;
  
  fVar1 = REFG(float, 0x109c7c8);
  if (param_1 != 0) {
    if (param_1 == 1) {
      return (double)REFG(float, 0x109c7cc);
    }
    fVar1 = 0.0;
    if (param_1 == 2) {
      return (double)REFG(float, 0x109c7d0);
    }
  }
  return (double)fVar1;
}

/* ref: FUN_00533de0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00533de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x533de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  float fVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  
  if (((*((int *)GEN_TOP(((int)this + 8))) != 0x49) && (*((int *)GEN_TOP(((int)this + 8))) == param_1)) &&
     (iVar2 = *((int *)GEN_TOP(((int)this + 4))), -1 < iVar2)) {
    if (iVar2 < 2) {
      fVar1 = *(float *)this;
      dVar4 = F_00533d80(iVar2);
      bVar3 = GEN_ISNAN((double)fVar1) || GEN_ISNAN(dVar4);
      if (bVar3 != (bVar3 || (double)fVar1 == dVar4)) {
        return 1;
      }
    }
    else if ((iVar2 == 2) && (!GEN_ISNAN(*(float *)this) && !(0.0 < *(float *)this))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00533e40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00533e40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if (*param_2 == param_1) {
    *param_2 = 0;
  }
  return (uint)param_2;
}

/* ref: FUN_00533e60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00533e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    if (bVar1 != 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x39))) = 0;
      F_00a51200(0x3c,0,0,0,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00533ea0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00533ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 8))) != 0) {
    bVar1 = F_00a9f620(*((int *)GEN_TOP((in_ecx + 8))) GEN_EDX_FWD);
    if (bVar1 == 0) {
      *((undefined1 *)GEN_TOP((in_ecx + 0x38))) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00533ec0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00533ec0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0xc))) != 0;
}

/* ref: FUN_00533ed0 */
GEN_OWN GEN_NOFRAME byte F_00533ed0(void)
{
  GEN_ENTER(0x533ed0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x2f);
  return bVar1 != 0;
}

/* ref: FUN_00533ef0 */
GEN_OWN GEN_NOFRAME byte F_00533ef0(void)
{
  GEN_ENTER(0x533ef0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,3);
  return bVar1 != 0;
}

/* ref: FUN_00533f10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00533f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x533f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x10))) != 0;
}

/* ref: FUN_00533f20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00533f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x533f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((*((int *)GEN_TOP((in_ecx + 0xc))) != 0) && (*((int *)GEN_TOP((in_ecx + 0x40))) == param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00533f40 */
GEN_OWN GEN_FRAME uint F_00533f40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x32: ;
  case 0x33: ;
    return 1;
  case 0x34: ;
  case 0x35: ;
    return 2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00533f80 */
GEN_OWN GEN_FRAME byte F_00533f80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((param_1 != 1) && (param_1 != 2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00533fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00533fa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x533fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if ((*((int *)GEN_TOP((in_ecx + 8))) == 0) || (param_2 == 0)) {
    return 0;
  }
  if (param_3 == 1) {
    return *((uint *)GEN_TOP((param_2 + 0x10)));
  }
  if (param_3 != 2) {
    if (param_3 != 3) {
      return *((uint *)GEN_TOP((param_2 + 4)));
    }
    return *((uint *)GEN_TOP((param_2 + 0x18)));
  }
  return *((uint *)GEN_TOP((param_2 + 0x14)));
}

/* ref: FUN_00533fe0 */
GEN_OWN GEN_FRAME uint F_00533fe0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x533fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == 1) {
    return 0x32;
  }
  if (param_1 != 2) {
    return 0;
  }
  return 0x34;
}

/* ref: FUN_00534000 */
GEN_OWN GEN_FRAME uint F_00534000(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == 1) {
    return 0x33;
  }
  if (param_1 != 2) {
    return 0;
  }
  return 0x35;
}

/* ref: FUN_00534020 */
GEN_OWN GEN_FRAME byte F_00534020(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((param_1 != 0x33) && (param_1 != 0x35)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00534040 */
GEN_OWN GEN_FRAME byte F_00534040(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (uVar3 == 0) {
      uVar1 = 0x33;
    }
    else {
      if (uVar3 != 1) {
        return 0;
      }
      uVar1 = 0x35;
    }
    uVar2 = F_00ab28a0(uVar1);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 4))) == param_1)) break;
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00534140 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00534140(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x534140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00534150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00534150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x534150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  if (*((int *)GEN_TOP((in_ecx + 8))) != 0) {
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + 0x2e08))) != '\0') {
      return 3;
    }
    iVar1 = *((int *)GEN_TOP((in_ecx + 0x10)));
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if ((*((int *)GEN_TOP((in_ecx + 0xc))) != 0x33) && (*((int *)GEN_TOP((in_ecx + 0xc))) != 0x35)) {
          return 1;
        }
      }
      else if (iVar1 != 2) {
        return 0;
      }
      if ((*((int *)GEN_TOP((in_ecx + 0xc))) != 0x33) && (*((int *)GEN_TOP((in_ecx + 0xc))) != 0x35)) {
        return 2;
      }
    }
  }
  return 0;
}

/* ref: FUN_005341a0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005341a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5341a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((param_1 != 0x3c) && (param_1 != 0x3d)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005341c0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005341c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5341c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ab28a0(param_1);
  if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 0x2d))) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005341f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005341f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5341f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
      F_00aa0100(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0,param_1);
    }
    F_00aa0100(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x40))),param_1);
  }
  return;
}

/* ref: FUN_00534230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00534230(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x534230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00aa0350(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,1,0);
  if (1 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  if ((*((int *)GEN_TOP((param_1 + 8))) == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00534150(param_1 GEN_EDX_ARG);
    if (uVar1 == 1) {
      uVar1 = *((uint *)GEN_TOP((param_2 + 0x10)));
    }
    else if (uVar1 == 2) {
      uVar1 = *((uint *)GEN_TOP((param_2 + 0x14)));
    }
    else if (uVar1 == 3) {
      uVar1 = *((uint *)GEN_TOP((param_2 + 0x18)));
    }
    else {
      uVar1 = *((uint *)GEN_TOP((param_2 + 4)));
    }
  }
  uVar2 = F_00ab2a20(uVar1);
  if ((param_3 != '\0') &&
     (uVar3 = F_00aa0210(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((uVar2 + 7))),0),
     uVar3 == uVar1)) {
    return uVar3 & 0xffffff00;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x3b))) = 1;
  if ((*((int *)GEN_TOP((param_1 + 0xc))) != 0) && ((uint)*((byte *)GEN_TOP((uVar2 + 7))) != *((uint *)GEN_TOP((param_1 + 0x40))))) {
    F_00aa0100(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((uint *)GEN_TOP((param_1 + 0x40))),0);
  }
  uVar1 = F_00aa0040(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((param_2 + 8))),uVar1,
                       *((undefined4 *)GEN_TOP((param_2 + 0xc))),REFG(float, 0x1090708),0,1);
  if ((char)uVar1 != '\0') {
    *((uint *)GEN_TOP((param_1 + 0x40))) = (uint)*((byte *)GEN_TOP((uVar2 + 7)));
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x3b))) = 0;
  return uVar1;
}

/* ref: FUN_00534310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00534310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x534310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00aa0040(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,0,*((undefined4 *)GEN_TOP((param_1 + 8))),
                       *((undefined4 *)GEN_TOP((param_1 + 4))),*((undefined4 *)GEN_TOP((param_1 + 0xc))),REFG(float, 0x1090708),0,1)
  ;
  return uVar1;
}

/* ref: FUN_00534340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00534340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x534340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
    *((undefined1 *)GEN_TOP(((int)this + 0x28))) = *((undefined1 *)GEN_TOP((param_1 + 0x10)));
    *((undefined1 *)GEN_TOP(((int)this + 0x29))) = *((undefined1 *)GEN_TOP((param_1 + 0x11)));
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x18)));
    *((uint *)GEN_TOP(((int)this + 0x30))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00534380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00534380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x534380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  if ((char)param_1 == '\0') {
    if (*((char *)GEN_TOP(((int)this_00 + 0x188))) == '\x03') {
      F_00aaa5b0(this_00 GEN_EDX_FWD,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  else {
    F_00aaa5b0(this_00 GEN_EDX_ARG,3);
    bVar1 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    if (bVar1 == 0) {
      F_00aa6f20(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0,1);
    }
    else {
      F_00a7ef20(&REFG(undefined1, 0x14ab058) GEN_EDX_ARG,0,1,0);
    }
  }
  bVar1 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,3,(char)param_1);
  }
  return uVar2;
}

/* ref: FUN_00534400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00534400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x534400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 == 1) {
    uVar2 = 0x33;
  }
  else {
    uVar2 = iVar1 - 2;
    if (uVar2 != 0) goto LAB_0053443d;
    uVar2 = 0x35;
  }
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar3 = F_00ab28a0(uVar2);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_00534230(this GEN_EDX_ARG,uVar3,1);
      return uVar2;
    }
  }
LAB_0053443d: ;
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00534450 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00534450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x534450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = 0x30f;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = 0x317;
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = 0x314;
  *((undefined4 *)GEN_TOP((in_ecx + 0x48))) = 0x31b;
  *((undefined4 *)GEN_TOP((in_ecx + 0x4c))) = 0x319;
  *((undefined4 *)GEN_TOP((in_ecx + 0x50))) = 0x31a;
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0x318;
  return;
}

/* ref: FUN_005344c0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005344c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5344c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x18))) != 0;
}

/* ref: FUN_005344d0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005344d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5344d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  bVar1 = F_00a9fc40(*((undefined4 *)GEN_TOP((in_ecx + 0x10))) GEN_EDX_FWD);
  if ((bVar1 == 0) && (*((char *)GEN_TOP((in_ecx + 0x60))) == '\0')) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP((in_ecx + 100))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0x60))) = 0;
  }
  if (*((char *)GEN_TOP((in_ecx + 200))) != '\0') {
    *((undefined1 *)GEN_TOP((in_ecx + 200))) = 0;
  }
  return bVar1;
}

/* ref: FUN_00534510 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00534510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x534510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP((in_ecx + 0x18))) == 0) {
    return 0;
  }
  if ((((*((int *)GEN_TOP((in_ecx + 0x14))) == 1) && (*((int *)GEN_TOP((in_ecx + 100))) == 1)) &&
      (bVar1 = F_00a9fc40(*((undefined4 *)GEN_TOP((in_ecx + 0x10))) GEN_EDX_FWD), bVar1 != 0)) &&
     (bVar1 = F_00a9fc50(*((undefined4 *)GEN_TOP((in_ecx + 0x10))) GEN_EDX_ARG), bVar1 == 0)) {
    return 0;
  }
  uVar2 = F_00a9fbf0(*((undefined4 *)GEN_TOP((in_ecx + 0x10))) GEN_EDX_ARG);
  return (char)uVar2 == '\0';
}

/* ref: FUN_00534559 */
GEN_OWN GEN_NOFRAME unsigned int F_00534559(void)
{
  GEN_ENTER(0x534559u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00534560 */
GEN_OWN GEN_FRAME byte F_00534560(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
  case 5: ;
  case 8: ;
  case 0xb: ;
  case 0xd: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005345a0 */
GEN_OWN GEN_FRAME byte F_005345a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5345a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 3: ;
  case 6: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005345e0 */
GEN_OWN GEN_FRAME byte F_005345e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5345e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((10 < param_1) && (param_1 < 0xd)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00534600 */
GEN_OWN GEN_FRAME byte F_00534600(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((0xc < param_1) && (param_1 < 0xf)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00534620 */
GEN_OWN GEN_FRAME byte F_00534620(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((param_1 < 0xb) || (0xc < param_1)) && ((param_1 < 0xd || (0xe < param_1)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00534650 */
GEN_OWN GEN_FRAME byte F_00534650(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 == 0xf;
}

/* ref: FUN_00534660 */
GEN_OWN GEN_FRAME byte F_00534660(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 == 10;
}

/* ref: FUN_00534670 */
GEN_OWN GEN_FRAME byte F_00534670(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((6 < param_1) && (param_1 < 10)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00534690 */
GEN_OWN GEN_FRAME byte F_00534690(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x534690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((0 < param_1) && ((param_1 < 7 || (param_1 == 10)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005346b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005346b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5346b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  if ((param_2 == 0xf) || (param_2 == 10)) {
    uVar3 = F_00a9f870(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x5c)))));
    return uVar3;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  iVar2 = *((int *)GEN_TOP((param_1 + 0x14)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(REFG(float, 0x1090708));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c964));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (iVar2 - 0xbU < 2) {
    switch((unsigned int)(uintptr_t)(iVar2)) {
    case 0xb: ;
      uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c03c)));
      break;
    default: ;
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 3: ;
      case 6: ;
      case 9: ;
      case 0xc: ;
      case 0xe: ;
        uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c7d0)));
        break;
      default: ;
        goto switchD_00534742_caseD_4;
      }
    }
    (*(undefined4 *)(gen_frame + 0xc)) = uVar5;
  }
switchD_00534742_caseD_4: ;
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0xb0)));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar4 = F_00aed220(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x5c))) - (float10)fVar1))));
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  fVar4 = GEN_X87((float10)((float)GEN_TOF((((float10)((float)GEN_TOF(ABS(fVar4))) - (float10)*(double *)&REFG(undefined, 0x1094620)) /
                          (float10)*(double *)&REFG(undefined, 0x1094620)))));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar4 * (float10)*(double *)&REFG(undefined, 0x1094818) +
                    ((float10)1 - fVar4) * (float10)*(double *)&REFG(undefined, 0x109ca50))));
  uVar3 = F_00a9f850(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x5c)))),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00534800 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00534800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x534800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((*((char *)GEN_TOP(((int)this + 0x60))) != '\0') &&
     (*((int *)GEN_TOP(((int)this + 0x14))) == *((int *)GEN_TOP(((int)this + 100))))) {
    F_005346b0(this GEN_EDX_FWD,param_1);
    *((undefined1 *)GEN_TOP(((int)this + 0x60))) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00534840 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00534840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x534840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00aa0310(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,1,0);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00aa0210(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,1,0);
    uVar1 = F_00ab2a20(uVar1);
    if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 0xd))) == '\0')) {
      return 1;
    }
  }
  uVar1 = F_00aa0310(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,5,0);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00aa0210(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,5,0);
    uVar1 = F_00ab2a20(uVar1);
    if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 0xd))) == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005348d0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005348d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5348d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0xc4))) != '\0') {
    return 0;
  }
  return *((int *)GEN_TOP((in_ecx + 0x58))) == 1;
}

/* ref: FUN_00534970 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00534970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x534970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  bool bVar1;
  
  bVar1 = GEN_ISNAN(*((float *)GEN_TOP((in_ecx + 0xb0)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar1 == (bVar1 || *((float *)GEN_TOP((in_ecx + 0xb0))) == *(float *)&REFG(undefined, 0x1088114))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00534990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00534990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x534990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: FUN_005349a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005349a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5349a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x20))) != 0;
}

/* ref: FUN_005349f0 */
GEN_OWN GEN_FRAME float10 GEN_STDCALL F_005349f0(GEN_P(float param_1, float gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5349f0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if ((GEN_ISNAN(param_1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(param_1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_1 == *(float *)&REFG(undefined, 0x1088114))) {
    if ((float10)((float)GEN_TOF(ABS((float10)*((float *)GEN_TOP((param_2 + 8)))))) <
        (float10)((float)GEN_TOF(ABS((float10)*((float *)GEN_TOP((param_2 + 4))))))) {
      if ((float10)*((float *)GEN_TOP((param_2 + 4))) * (float10)*((float *)GEN_TOP((param_3 + 4))) < (float10)0) {
        return (float10)0;
      }
    }
    else if ((float10)*((float *)GEN_TOP((param_2 + 8))) * (float10)*((float *)GEN_TOP((param_3 + 8))) < (float10)0) {
      return (float10)0;
    }
    if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(REFG(float, 0x109c7c8))) && !(param_1 <= REFG(float, 0x109c7c8))) {
      return GEN_X87((float10)(float)((float10)1 - (float10)param_1));
    }
  }
  return (float10)param_1;
}

/* ref: FUN_00534ab0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00534ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x534ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  float local_8;
  
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x228)));
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar1 == REFG(float, 0x1090708))) {
    return (float10)1;
  }
  if ((float10)fVar1 <= (float10)*(double *)&REFG(undefined, 0x109ca58)) {
    return (float10)0;
  }
  local_8 = (float)((float10)fVar1 / (float10)*(double *)&REFG(undefined, 0x10920a8));
  if ((float10)1 < (float10)local_8) {
    local_8 = REFG(float, 0x1087f04);
  }
  return (float10)local_8;
}

/* ref: FUN_00534ec0 */
GEN_OWN GEN_NOFRAME uint F_00534ec0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x534ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(float *)(gen_frame + 0x34)) = *param_4;
  (*(float *)(gen_frame + 0x3c)) = *param_3;
  fVar8 = (float10)*param_3;
  fVar1 = (float)((float10)*param_4 - fVar8);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = param_4[1];
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x2c)) = param_3[1];
  fVar9 = (float10)param_3[1];
  fVar2 = (float)((float10)fVar2 - fVar9);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x2c)) = param_4[2];
  (*(float *)(gen_frame + 0x4)) = fVar2;
  (*(float *)(gen_frame + 0x38)) = param_3[2];
  fVar10 = (float10)param_3[2];
  fVar3 = (float)((float10)param_4[2] - fVar10);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar4 = *param_2;
  (*(float *)(gen_frame + 0x8)) = fVar3;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar1 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2))));
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar11 = (float10)fVar1;
  bVar7 = GEN_ISNAN(fVar11) || GEN_ISNAN((float10)0);
  if (bVar7 == (bVar7 || fVar11 == (float10)0)) {
    F_004bd580(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(float)((float10)fVar6 - fVar10) +
                   ((float10)(*(float *)(gen_frame + 0x4)) * (float10)(float)((float10)fVar5 - fVar9) +
                   (float10)(*(float *)(gen_frame + 0x0)) * (float10)(float)((float10)fVar4 - fVar8)))));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar8 = (float10)fVar1;
    if (!(fVar8 < (float10)0)) {
      if (!((float10)(*(float *)(gen_frame + 0x38)) < fVar8)) {
        fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0x0))))));
        (*(float *)(gen_frame + 0x0)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0x4))) + (float10)param_3[1])));
        (*(float *)(gen_frame + 0x4)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)param_3[2] + (float10)(float)(fVar8 * (float10)(*(float *)(gen_frame + 0x8))))));
        (*(float *)(gen_frame + 0x8)) = fVar3;
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
        return (uint)param_1;
      }
      *param_1 = (*(float *)(gen_frame + 0x34));
      param_1[1] = (*(float *)(gen_frame + 0x30));
      param_1[2] = (*(float *)(gen_frame + 0x2c));
      return (uint)param_1;
    }
  }
  param_1[1] = param_3[1];
  fVar1 = param_3[2];
  *param_1 = (*(float *)(gen_frame + 0x3c));
  param_1[2] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_00535080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00535080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x535080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  uVar1 = F_00688e90(this_00 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_005350a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005350a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5350a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  F_00688ed0(this_00 GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_005350c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005350c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5350c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00688eb0(this_00 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_005350e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005350e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5350e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  F_00688e60(this_00 GEN_EDX_ARG,param_1,param_2);
  return;
}

/* ref: FUN_00535100 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00535100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x535100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  double dVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      dVar1 = F_00688ef0(this_00 GEN_EDX_ARG,param_1);
      return (float)dVar1;
    }
  }
  return REFG(float, 0x1090708);
}

/* ref: FUN_00535130 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00535130(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x535130u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
    if (uVar1 != 0) {
      F_00688f10(uVar1 GEN_EDX_ARG,param_3,param_2);
    }
  }
  return;
}

/* ref: FUN_00535160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00535160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x535160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  F_00689090(this_00 GEN_EDX_ARG,uVar1,param_2);
  return param_1;
}

/* ref: FUN_00535190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00535190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x535190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  F_006890d0(this_00 GEN_EDX_ARG,uVar1,param_2);
  return param_1;
}

/* ref: FUN_005351c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005351c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5351c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float fVar2;
  undefined * this_00;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00689110(this_00 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_2);
      if ((float10)REFG(float, 0x1305cb4) < (float10)(*(float *)(gen_frame + 0x0))) {
        (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1305cb4);
      }
      fVar1 = ((float)GEN_TOF(-(float10)REFG(float, 0x1305cb4)));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      if ((float10)(*(float *)(gen_frame + 0x4)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0x4)) = fVar1;
      }
      if ((float10)REFG(float, 0x1305cb0) < (float10)(*(float *)(gen_frame + 0x8))) {
        (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1305cb0);
      }
      fVar1 = ((float)GEN_TOF(-(float10)REFG(float, 0x1305cb0)));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      if ((float10)(*(float *)(gen_frame + 0xc)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0xc)) = fVar1;
      }
      *param_1 = (*(float *)(gen_frame + 0x0));
      param_1[1] = (*(float *)(gen_frame + 0x4));
      param_1[2] = (*(float *)(gen_frame + 0x8));
      param_1[3] = (*(float *)(gen_frame + 0xc));
      return (uint)param_1;
    }
  }
  fVar1 = (*(float *)((char *)&REFG(float, 0x1375ad0) + 4));
  *param_1 = (float)REFG(float, 0x1375ad0);
  fVar2 = (float)REFG(float, 0x1375ad8);
  param_1[1] = fVar1;
  fVar1 = (*(float *)((char *)&REFG(float, 0x1375ad8) + 4));
  param_1[2] = fVar2;
  param_1[3] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_005353c0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_005353c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5353c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  float fVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      fVar1 = F_00688f30(this_00 GEN_EDX_ARG,param_1);
      return (double)fVar1;
    }
  }
  return 0.0;
}

/* ref: FUN_005353f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005353f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5353f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00689180(this_00 GEN_EDX_ARG,param_1);
      return uVar1;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00535420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00535420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x535420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) &&
     (this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    if (param_1 == 0) {
      uVar1 = F_00689180(this_00 GEN_EDX_ARG,&REFG(undefined, 0x109c890));
      return uVar1;
    }
    if (param_1 == 1) {
      uVar1 = F_00689180(this_00 GEN_EDX_ARG,&REFG(undefined, 0x109c898));
      return uVar1;
    }
    if (param_1 == 2) {
      uVar1 = F_00689180(this_00 GEN_EDX_ARG,((char *)REFP(0x109c8a0)));
      return uVar1;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00535480 */
GEN_OWN GEN_NOFRAME uint F_00535480(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x535480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  
  fVar4 = *param_1;
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x3c)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x28)) = param_1[2];
  fVar2 = (float10)fVar4;
  fVar3 = (float10)param_1[2];
  fVar4 = ((float)GEN_TOF((fVar3 * fVar3 + ((float10)0 * (float10)0 + fVar2 * fVar2))));
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar4 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar4))));
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar2 = (float10)fVar4;
  bVar1 = GEN_ISNAN(fVar2) || GEN_ISNAN((float10)0);
  if (bVar1 == (bVar1 || fVar2 == (float10)0)) {
    F_004bd580(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1305c60);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1305c64);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1305c68);
    fVar4 = ((float)GEN_TOF(((float10)REFG(float, 0x1305c68) * (float10)(*(float *)(gen_frame + 0x28)) +
                   ((float10)REFG(float, 0x1305c64) * (float10)(*(float *)(gen_frame + 0x24)) +
                   (float10)REFG(float, 0x1305c60) * (float10)(*(float *)(gen_frame + 0x20))))));
    (*(float *)(gen_frame + 0x38)) = fVar4;
    fVar2 = F_00aeb350(fVar4);
    (*(float *)(gen_frame + 0x3c)) = (float)fVar2;
    F_0054ce40(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x20)));
    if (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !(0.0 <= (*(float *)(gen_frame + 0x4)))) {
      (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) * (float10)REFG(double, 0x1094890));
    }
  }
  (*(float *)(gen_frame + 0x38)) = 0.0;
  fVar4 = (float)((float10)*param_1 * (float10)*param_1 + (float10)param_1[2] * (float10)param_1[2])
  ;
  (*(float *)(gen_frame + 0x34)) = fVar4;
  fVar4 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar4))));
  (*(float *)(gen_frame + 0x34)) = fVar4;
  fVar2 = (float10)fVar4;
  bVar1 = GEN_ISNAN(fVar2) || GEN_ISNAN((float10)0);
  if (bVar1 == (bVar1 || fVar2 == (float10)0)) {
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_1[1] / fVar2);
    fVar2 = F_00aeb3a0((float)((float10)param_1[1] / fVar2));
    (*(float *)(gen_frame + 0x38)) = (float)fVar2;
  }
  else {
    fVar4 = REFG(float, 0x109ca64);
    if ((0.0 < param_1[1]) || (fVar4 = REFG(float, 0x109ca60), param_1[1] < 0.0)) goto LAB_005355cc;
  }
  fVar4 = (*(float *)(gen_frame + 0x38));
LAB_005355cc: ;
  if (param_2 != ((float *)GEN_TOP(0x0))) {
    *param_2 = (*(float *)(gen_frame + 0x3c));
  }
  if (param_3 != ((float *)GEN_TOP(0x0))) {
    *param_3 = fVar4;
  }
  return (uint)param_3;
}

/* ref: FUN_00535620 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00535620(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x535620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * this;
  uint uVar1;
  float10 fVar2;
  
  this = *((int * PTR32 *)GEN_TOP((param_1 + 0x10)));
  if (this == ((int *)GEN_TOP(0x0))) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xb8))))(this GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = F_00a5f290(this GEN_EDX_ARG);
      uVar1 = (uint)*((byte *)GEN_TOP((uVar1 + 0x2eaa)));
    }
  }
  uVar1 = F_00a09f70(param_3,param_2,uVar1);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  fVar2 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  return GEN_X87((float10)(float)(fVar2 * (float10)*(double *)&REFG(undefined, 0x109ca68)));
}

/* ref: FUN_00535690 */
GEN_OWN GEN_NOFRAME uint F_00535690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x535690u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  ((float *)(gen_frame + 0x0))[0] = (float)fVar3;
  ((float *)(gen_frame + 0x0))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x20)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x28)) = (float)fVar3;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  uVar1 = F_004eea10(param_1 GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00535740 */
GEN_OWN GEN_NOFRAME uint F_00535740(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x535740u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL(0x90, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  fVar7 = ((float10)GEN_TOD(fsin((float10)param_3)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar7;
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_3)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar6;
  (*(float *)(gen_frame + 0x0)) = (float)(float10)0;
  (*(float *)(gen_frame + 0x4)) = (float)(float10)1;
  (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
  F_004bd580(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar6 = (float10)(float)fVar6;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x8)) * (float10)0 - fVar6 * (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar7 = (float10)(float)fVar7;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x0)) * fVar6 - fVar7 * (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar7 - (float10)0 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar7 = (float10)fVar2;
  fVar6 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  fVar1 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar6 * fVar6 + fVar7 * fVar7))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar7 = (float10)fVar1;
  bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)0);
  if (bVar5 == (bVar5 || fVar7 == (float10)0)) {
    F_004bd580(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  }
  F_004ef1c0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x10)),param_2);
  uVar4 = F_004eea10(param_1 GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x30)));
  return uVar4;
}

/* ref: FUN_00535860 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00535860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x535860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * pvVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    return 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 == 2) {
    if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) ||
       (pvVar1 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD))), pvVar1 == ((undefined *)GEN_TOP(0x0)))) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = F_00689180(pvVar1 GEN_EDX_ARG,&REFG(undefined, 0x109c898));
    }
    if ((param_1 != uVar2) && (uVar2 = F_00535420(this GEN_EDX_ARG,0), param_1 != uVar2)) {
      return 1;
    }
    return 0;
  }
  if (param_2 != 3) {
    return 0;
  }
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) ||
     (pvVar1 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG))), pvVar1 == ((undefined *)GEN_TOP(0x0)))) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = F_00689180(pvVar1 GEN_EDX_ARG,&REFG(undefined, 0x109c898));
  }
  if (param_1 != uVar2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00535900 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00535900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x535900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  float local_8;
  
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0xc0)));
  local_8 = REFG(float, 0x1087f04);
  if (REFG(float, 0x1087f04) < fVar1) {
    local_8 = fVar1;
  }
  return (float10)local_8;
}

/* ref: FUN_00535930 */
GEN_OWN GEN_FRAME float10 F_00535930(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x535930u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 - (float10)param_2) /
                         ((float10)param_3 - (float10)param_2)))));
}

/* ref: FUN_00535950 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00535950(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x535950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 != 0) {
    return param_1 - 1;
  }
  return 0xffffffff;
}

/* ref: FUN_00535970 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00535970(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x535970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = param_1;
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = iVar1 - 1;
  } while (iVar1 != -1);
  return 0;
}

/* ref: FUN_00535990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00535990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x535990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  
  if ((((param_1 != 0) && (uVar1 = param_1 - 1, uVar1 != 0xffffffff)) && (uVar1 != param_1)) &&
     ((iVar3 = uVar1 * 0x300, *((int *)GEN_TOP((iVar3 + 0x78 + (int)this))) != 0 &&
      ((*((char *)GEN_TOP((iVar3 + 0xe4 + (int)this))) == '\0' ||
       (fVar2 = *((float *)GEN_TOP((iVar3 + 0xdc + (int)this))),
       bVar4 = GEN_ISNAN(fVar2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
       bVar4 == (bVar4 || fVar2 == *(float *)&REFG(undefined, 0x1088114)))))))) {
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_005359e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005359e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5359e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  if ((((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) &&
       (pvVar1 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
      (uVar2 = F_00689180(pvVar1 GEN_EDX_ARG,((char *)REFP(0x109c8a0))), uVar2 != 0xffffffff)) && (param_1 == uVar2)) {
    if (((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) &&
        (pvVar1 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
       ((uVar2 = F_00689180(pvVar1 GEN_EDX_ARG,&REFG(undefined, 0x109c898)), uVar2 != 0xffffffff &&
        (*((int *)GEN_TOP((uVar2 * 0x300 + 0x78 + (int)this))) != 0)))) {
      return uVar2;
    }
    if (((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) &&
        (pvVar1 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) &&
       ((uVar2 = F_00689180(pvVar1 GEN_EDX_ARG,&REFG(undefined, 0x109c890)), uVar2 != 0xffffffff &&
        (*((int *)GEN_TOP((uVar2 * 0x300 + 0x78 + (int)this))) != 0)))) {
      return uVar2;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00535a70 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00535a70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x535a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((param_2 * 0x300 + 0x248 + in_ecx)));
}

/* ref: FUN_00535aa0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00535aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x535aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00a5f290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (uVar2 != 0) {
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00a5f290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      }
      bVar1 = F_00a9f620(uVar2 GEN_EDX_ARG);
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00535ae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00535ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x535ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a5fef0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    return uVar1;
  }
  return 0x1375ac0;
}

/* ref: FUN_00535b00 */
GEN_OWN GEN_FRAME byte F_00535b00(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x535b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(F_00a5f290(param_1 GEN_EDX_ARG)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if (uVar2 == 3) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00535b40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00535b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x535b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * this_00;
  
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) ||
     (this_00 = ((undefined *)GEN_TOP(F_00a5f290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD))), this_00 == ((undefined *)GEN_TOP(0x0)))) {
    return 1;
  }
  if (((*((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) & 2) == 0) && (bVar1 = F_00aa33d0(this_00 GEN_EDX_ARG), bVar1 == 0))
  {
    bVar1 = F_00a9f620(this_00 GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 1;
    }
    if (*((char *)GEN_TOP(((int)this_00 + 0x2ebc))) == '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00535b90 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00535b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x535b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  float local_8;
  
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0xc0)));
  local_8 = REFG(float, 0x1087f04);
  if (REFG(float, 0x1087f04) < fVar1) {
    local_8 = fVar1;
  }
  return (float10)local_8;
}

/* ref: FUN_00535bc0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00535bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x535bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((param_2 * 0x300 + 0xdc + in_ecx)));
}

/* ref: FUN_00535be0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00535be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x535be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((param_2 * 0x300 + 0x240 + in_ecx)));
}

/* ref: FUN_00535c00 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00535c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x535c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((param_2 * 0x300 + 0x244 + in_ecx)));
}

/* ref: FUN_00535c20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00535c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x535c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((char *)GEN_TOP((param_2 * 0x300 + 0x311 + in_ecx))) != '\0';
}

/* ref: FUN_00535c40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00535c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x535c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x10))) != 0) {
    *((int *)GEN_TOP((in_ecx + 0x70))) = in_ecx;
    *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = 0;
    *((int *)GEN_TOP((in_ecx + 0x370))) = in_ecx;
    *((undefined4 *)GEN_TOP((in_ecx + 0x374))) = 1;
    *((int *)GEN_TOP((in_ecx + 0x670))) = in_ecx;
    *((undefined4 *)GEN_TOP((in_ecx + 0x674))) = 2;
  }
  return;
}

/* ref: FUN_00535cb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00535cb0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x535cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  F_00ab1160(in_ecx,1);
  switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits(in_ecx[1]))) {
  case 0: ;
    if (param_2 != '\0') {
      in_ecx[1] = 1.4013e-45;
      *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x109c8b0));
      return 0;
    }
    break;
  case 1: ;
    if (param_2 != '\0') {
      return 0;
    }
    if (!(*in_ecx <= 0.0)) {
      in_ecx[1] = 2.8026e-45;
      return 0;
    }
    goto LAB_00535d32;
  case 2: ;
    if (param_2 == '\0') {
      in_ecx[1] = 4.2039e-45;
      return 0;
    }
    break;
  case 3: ;
    if (param_2 != '\0') {
      in_ecx[1] = 5.60519e-45;
      return 0;
    }
    break;
  case 4: ;
    if (param_2 != '\0') {
      return 0;
    }
LAB_00535d32: ;
    in_ecx[1] = 0.0;
  }
  return 0;
}

/* ref: FUN_00535d80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00535d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x535d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00a34de0(param_1 GEN_EDX_FWD,0x11f);
  if ((bVar1 != 0) && (*(char *)this == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00535db0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00535db0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x535db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  
  bVar1 = F_00a34870(param_2 GEN_EDX_ARG,0x11f);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = param_1 - 0x3b;
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x136);
      return CONCAT31(extraout_var_00,bVar1);
    case 1: ;
      bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x137);
      return CONCAT31(extraout_var_01,bVar1);
    case 2: ;
      bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x138);
      return CONCAT31(extraout_var_02,bVar1);
    case 3: ;
      bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x139);
      return CONCAT31(extraout_var_03,bVar1);
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00535e40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00535e40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x535e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x3c)));
}

/* ref: FUN_00535e50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00535e50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x535e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x40)));
}

/* ref: FUN_00535ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00535ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x535ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x9c))))(param_1 GEN_EDX_FWD,0);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x98))))(param_1 GEN_EDX_ARG,1);
  return uVar1;
}

/* ref: FUN_00535f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00535f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x535f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  float * pfVar1;
  byte bVar2;
  uint uVar3;
  
  pfVar1 = ((float *)GEN_TOP(((int)this + 0x38)));
  if ((!GEN_ISNAN(REFG(float, 0x109c8ac)) && !GEN_ISNAN(*pfVar1)) &&
      (!(REFG(float, 0x109c8ac) < *pfVar1) && REFG(uint, 0x109c8ac) != *pfVar1)) {
    bVar2 = F_00a34de0(param_1 GEN_EDX_FWD,0x21);
    *((byte *)GEN_TOP(((int)this + 9))) = bVar2;
    bVar2 = F_00a34de0(param_1 GEN_EDX_ARG,0x22);
    *((byte *)GEN_TOP(((int)this + 10))) = bVar2;
    bVar2 = F_00a34de0(param_1 GEN_EDX_ARG,0x21);
    *((byte *)GEN_TOP(((int)this + 0xb))) = bVar2;
    bVar2 = F_00a34de0(param_1 GEN_EDX_ARG,0x21);
    *((byte *)GEN_TOP(((int)this + 0xd))) = bVar2;
    bVar2 = F_00a34de0(param_1 GEN_EDX_ARG,0x22);
    *((byte *)GEN_TOP(((int)this + 0xe))) = bVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x9c))))(param_2 GEN_EDX_ARG,0);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x98))))(param_2 GEN_EDX_ARG,1);
  return uVar3;
}

/* ref: FUN_00535fa0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00535fa0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x535fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  if (*((float *)GEN_TOP((param_1 + 0x38))) < REFG(float, 0x109c8ac)) {
    *((float *)GEN_TOP((param_1 + 0x38))) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT(((float10)GEN_TOD((*((int *)GEN_TOP((param_1 + 0x3c))) * *((int *)GEN_TOP((param_1 + 0x3c)))
                                               + *((int *)GEN_TOP((param_1 + 0x40))) * *((int *)GEN_TOP((param_1 + 0x40)))
                                               ))))))) + (float10)*((float *)GEN_TOP((param_1 + 0x38))))));
    F_00a340a0(param_2 GEN_EDX_FWD);
    return;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_3)) + 0x9c))))(param_3,1);
  F_00a340a0(param_2 GEN_EDX_ARG);
  return;
}

/* ref: FUN_00536010 */
GEN_OWN GEN_NOFRAME unsigned int F_00536010(void)
{
  GEN_ENTER(0x536010u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00536030 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00536030(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x536030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  char cVar2;
  uint uVar3;
  
  cVar1 = (char)param_1[0xb6e];
  if ((cVar1 == '\x01') && ((*((byte *)GEN_TOP(((int)param_1 + 0x2dce))) & 0x80) != 0)) {
    return 0xe;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x2dba))) == '\x04') {
    return 0xc;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x2dba))) == '\x03') {
    return 0xd;
  }
  if (cVar1 == '\0') {
    return 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x1c))))(param_1 GEN_EDX_ARG);
  cVar2 = (char)uVar3;
  if (cVar1 == '\x01') {
    return (cVar2 != '\0') + 2;
  }
  if (cVar1 == '\x02') {
    return (cVar2 != '\0') + 4;
  }
  if (cVar1 == '\x04') {
    return (cVar2 != '\0') + 6;
  }
  if (cVar1 == '\x05') {
    return (cVar2 != '\0') + 8;
  }
  if (cVar1 == '\x03') {
    return (cVar2 != '\0') + 10;
  }
  return 0;
}

/* ref: FUN_00536130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00536130(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x536130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  float fVar2;
  uint in_EAX = 0;
  float10 fVar3;
  float10 fVar4;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x21))) == '\0') {
    fVar3 = (float10)param_1[9];
    *param_1 = ((float)GEN_TOF((fVar3 * ((float10)*((float *)GEN_TOP(param_2)) - (float10)*param_1) + (float10)*param_1)))
    ;
    param_1[1] = ((float)GEN_TOF(((float10)param_1[1] +
                        fVar3 * ((float10)*((float *)GEN_TOP((param_2 + 4))) - (float10)param_1[1]))));
    param_1[2] = ((float)GEN_TOF(((float10)param_1[2] +
                        ((float10)*((float *)GEN_TOP((param_2 + 8))) - (float10)param_1[2]) * fVar3)));
    fVar1 = param_1[5];
    fVar3 = (float10)param_1[4];
    fVar2 = param_1[6];
    fVar4 = (float10)param_1[9];
    param_1[4] = ((float)GEN_TOF((fVar4 * ((float10)*((float *)GEN_TOP(param_3)) - fVar3) + fVar3)));
    param_1[5] = ((float)GEN_TOF(((float10)param_1[5] +
                        fVar4 * ((float10)*((float *)GEN_TOP((param_3 + 4))) - (float10)param_1[5]))));
    param_1[6] = ((float)GEN_TOF(((float10)param_1[6] +
                        ((float10)*((float *)GEN_TOP((param_3 + 8))) - (float10)param_1[6]) * fVar4)));
    fVar4 = (float10)param_1[4];
    fVar3 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                                                                  (fVar3 * fVar3 +
                                                                  (float10)fVar1 * (float10)fVar1))))))))
                            / (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)param_1[6] *
                                                                    (float10)param_1[6] +
                                                                   (fVar4 * fVar4 +
                                                                   (float10)param_1[5] *
                                                                   (float10)param_1[5]))))))))))));
    param_1[4] = (float)(fVar3 * (float10)param_1[4]);
    param_1[5] = (float)(fVar3 * (float10)param_1[5]);
    param_1[6] = (float)(fVar3 * (float10)param_1[6]);
    *((float *)GEN_TOP(param_2)) = *param_1;
    *((float *)GEN_TOP((param_2 + 4))) = param_1[1];
    *((float *)GEN_TOP((param_2 + 8))) = param_1[2];
    *((float *)GEN_TOP(param_3)) = param_1[4];
    *((float *)GEN_TOP((param_3 + 4))) = param_1[5];
    *((float *)GEN_TOP((param_3 + 8))) = param_1[6];
    return in_EAX;
  }
  *param_1 = *((float *)GEN_TOP(param_2));
  param_1[1] = *((float *)GEN_TOP((param_2 + 4)));
  param_1[2] = *((float *)GEN_TOP((param_2 + 8)));
  param_1[4] = *((float *)GEN_TOP(param_3));
  param_1[5] = *((float *)GEN_TOP((param_3 + 4)));
  param_1[6] = *((float *)GEN_TOP((param_3 + 8)));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x21))) = 0;
  return param_3;
}

/* ref: FUN_00536380 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00536380(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x536380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_005f3270(0x41,param_1,0);
    if (uVar1 != 0) {
      return *((uint *)GEN_TOP((uVar1 + 0x60)));
    }
  }
  return 0;
}

/* ref: FUN_005363b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005363b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5363b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  float * pfVar1;
  float fVar2;
  
  pfVar1 = ((float *)GEN_TOP(((int)this + 0xc)));
  if (!GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)) {
    fVar2 = F_00b667d0(param_1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))));
    *((float *)GEN_TOP(((int)this + 0xc))) = fVar2;
  }
  return;
}

/* ref: FUN_005363e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005363e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5363e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00536440 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00536440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x536440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) != 0) && (*((char *)GEN_TOP(((int)this + 0x1a4))) != '\0')) {
    uVar4 = 0;
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x20c)));
    do {
      uVar2 = puVar3[-0x7d];
      fVar1 = gen_bits2f(puVar3[-0x28]);
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
      F_00b688d0(*((undefined4 *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),fVar1);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < 0xe);
    *((undefined1 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  }
  return;
}

/* ref: FUN_005364b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005364b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5364b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar3 = 0;
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x20c)));
    do {
      if (*((char *)GEN_TOP(((int)this + uVar3 + 0x1e0))) != '\0') {
        if (uVar3 < 0xe) {
          uVar2 = puVar4[-0x7d];
        }
        else {
          uVar2 = 0;
        }
        fVar1 = gen_bits2f(puVar4[-0x19]);
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
        (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
        F_00b68920(*((undefined4 *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),fVar1);
        *((undefined1 *)GEN_TOP(((int)this + uVar3 + 0x1e0))) = 0;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 < 0xe);
  }
  return;
}

/* ref: FUN_00536520 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00536520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x536520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  if (((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) ||
      (uVar2 = F_00a5f290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD), uVar2 == 0)) ||
     ((*((byte *)GEN_TOP((uVar2 + 0x2dd2))) >> 5 & 1) == 0)) {
    uVar2 = 0;
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x20c)));
    do {
      if (*((char *)GEN_TOP(((int)this + uVar2 + 0x1fc))) != '\0') {
        if (uVar2 < 0xe) {
          uVar3 = puVar4[-0x7d];
        }
        else {
          uVar3 = 0;
        }
        bVar1 = *((byte *)GEN_TOP((uVar2 + 0x1ee + (int)this)));
        (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
        F_00b68a10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(uint)bVar1);
        *((undefined1 *)GEN_TOP(((int)this + uVar2 + 0x1fc))) = 0;
      }
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar2 < 0xe);
  }
  return;
}

/* ref: FUN_005365b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005365b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5365b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint * puVar1;
  uint uVar2;
  
  if (param_1 < 0xe) {
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) = param_2;
    puVar1 = ((uint *)GEN_TOP(F_00ab2a20(param_2)));
    *((uint * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x27c))) = puVar1;
    if (puVar1 == ((uint *)GEN_TOP(0x0))) {
      *((char * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 0x20c))) = ((char *)REFP(0x109c074));
    }
    else {
      *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x20c))) = (*puVar1 & 0xffffff) + (int)puVar1;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x20c)));
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    uVar2 = F_00b5a860(&(*(undefined4 *)(gen_frame + 0x0)));
    *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0x244))) = uVar2;
  }
  return;
}

/* ref: FUN_00536630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00536630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x536630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    return 0;
  }
  bVar1 = F_00b687c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_00536650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00536650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x536650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((param_2 < 0xe) && (*((int *)GEN_TOP((in_ecx + 0x10))) != 0)) {
    bVar1 = F_00b68840(*((undefined4 *)GEN_TOP((in_ecx + 0x2b4))) GEN_EDX_FWD,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00536680 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00536680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x536680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2b4)));
  (*(int *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x20c)));
  uVar1 = F_00b686a0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return 0 < (int)uVar1;
}

/* ref: FUN_005366b0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005366b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5366b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x160))) != -1) && (uVar1 = *((int *)GEN_TOP((in_ecx + 0x160))) + 1, uVar1 < 4)) {
    piVar2 = ((int *)GEN_TOP((in_ecx + 0x150 + uVar1 * 4)));
    do {
      if (*piVar2 != 0) {
        if (uVar1 == 0xffffffff) {
          return 0;
        }
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < 4);
  }
  return 0;
}

/* ref: FUN_005366f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005366f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5366f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  
  uVar2 = F_00ab2a20(param_2);
  if (uVar2 != 0) {
    if (*((char *)GEN_TOP((uVar2 + 0xd))) != '\0') {
      *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 0;
    }
    *((uint *)GEN_TOP((param_1 + 0x44))) = (uint)*((byte *)GEN_TOP((uVar2 + 0xb)));
  }
  if (param_4 != 0) {
    if (*((int *)GEN_TOP((param_4 + 0x28))) == 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
    }
    if (*((char *)GEN_TOP((param_4 + 0x40))) != '\0') {
      *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *((undefined4 *)GEN_TOP((param_4 + 0x30)));
      *((undefined4 *)GEN_TOP((param_1 + 0x34))) = *((undefined4 *)GEN_TOP((param_4 + 0x34)));
      *((undefined4 *)GEN_TOP((param_1 + 0x38))) = *((undefined4 *)GEN_TOP((param_4 + 0x38)));
      *((undefined1 *)GEN_TOP((param_1 + 0x20))) = 1;
    }
    if (*((char *)GEN_TOP((param_4 + 0x41))) != '\0') {
      *((undefined1 *)GEN_TOP(((int)this + 0x141))) = 0;
      uVar2 = F_0052eb00((uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x88))));
      *((undefined1 *)GEN_TOP((param_1 + 0x21))) = 1;
    }
    if (*((char *)GEN_TOP((param_4 + 0x42))) != '\0') {
      *((undefined1 *)GEN_TOP((param_1 + 0x22))) = 1;
    }
  }
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + param_3 * 4 + 0x16c)));
  fVar8 = *((float *)GEN_TOP(((int)this + param_3 * 4 + 0x1a8)));
  if (param_4 != 0) {
    fVar1 = *((float *)GEN_TOP((param_4 + 0x2c)));
    bVar6 = GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708));
    bVar7 = bVar6 || fVar1 == REFG(float, 0x1090708);
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                     CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(REFG(float, 0x1090708) <= fVar1),(char)uVar2));
    if (bVar6 == bVar7) {
      fVar8 = fVar1;
    }
  }
  *((float *)GEN_TOP((param_1 + 0xc))) = fVar8;
  *((float *)GEN_TOP(((int)this + param_3 * 4 + 0x1a8))) = fVar8;
  *((int *)GEN_TOP((param_1 + 0x10))) = param_3;
  if ((param_4 != 0) && (*((char *)GEN_TOP((param_4 + 0x43))) != '\0')) {
    *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
    uVar3 = *((uint *)GEN_TOP(((int)this + param_3 * 4 + 0x244)));
    if (uVar3 == 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)this + param_3 * 4 + 0x20c)));
      (*(undefined4 *)(gen_frame + 0x4)) = param_2;
      uVar3 = F_00b5a860(&(*(undefined4 *)(gen_frame + 0x0)));
      *((uint *)GEN_TOP(((int)this + param_3 * 4 + 0x244))) = uVar3;
      if (uVar3 == 0) {
        return 0;
      }
    }
    puVar4 = ((uint *)GEN_TOP(F_00ab0d70(uVar3)));
    uVar2 = 0;
    if (puVar4 != ((uint *)GEN_TOP(0x0))) {
      uVar2 = *puVar4;
      uVar5 = F_00531ed0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
      uVar2 = F_00a09f70(uVar3,(uVar2 & 0xffffff) + (int)puVar4,uVar5);
      *((uint *)GEN_TOP((param_1 + 0x1c))) = uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00536840 */
GEN_OWN GEN_NOFRAME unsigned int F_00536840(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x536840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  F_004f4130(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),in_eax);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar3 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)fVar2)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  *param_2 = (float)fVar3;
  return 0;
}

/* ref: FUN_005368d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005368d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5368d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int in_ecx;
  byte bVar1;
  undefined * this_00;
  
  in_ecx = *((int *)GEN_TOP(((int)this + 0x3b04)));
  if (in_ecx != 0) {
    this_00 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD)));
    bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x12a);
    if (bVar1 != 0) {
      F_00a7efa0(&REFG(char, 0x14ab058) GEN_EDX_ARG,(uint)(REFG(char, 0x14ab058) == '\0'));
    }
    bVar1 = F_00a34970(this_00 GEN_EDX_ARG,300);
    if (bVar1 != 0) {
      F_00a7eea0(&REFG(char, 0x14ab068) GEN_EDX_ARG,(uint)(REFG(char, 0x14ab068) == '\0'));
    }
    bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x12d);
    if ((bVar1 != 0) || (bVar1 = F_00a34970(this_00 GEN_EDX_ARG,0x15e), bVar1 != 0)) {
      F_00a9f630(in_ecx GEN_EDX_ARG);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x3b04))) != ((undefined *)GEN_TOP(0x0))) {
      F_00a9fd10(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x3b04))) GEN_EDX_ARG,0,0,0);
    }
    return;
  }
  return;
}

/* ref: FUN_005369a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005369a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5369a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  undefined8 uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x74))) == 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = 0xe0000000;
      goto LAB_005369bf;
    }
  }
  else {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x74)));
  }
  uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
LAB_005369bf: ;
  uVar1 = F_00a5f0b0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_005369e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005369e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5369e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  undefined8 uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x74))) == 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,0xe0000000,0);
      return uVar1;
    }
  }
  else {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x74)));
  }
  uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2);
  uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return uVar1;
}

/* ref: FUN_00536c70 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00536c70(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x536c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  int iVar4;
  
  iVar1 = REFG(int, 0x1375b90);
  if ((REFG(int, 0x1375bbc) == 0) && (*((int *)GEN_TOP((REFG(int, 0x1375b90) + 0xe0))) != 0)) {
    iVar4 = REFG(int, 0x1375b90) + 0x40;
    uVar2 = F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    fVar3 = F_00aaea90(uVar2,iVar4);
    param_1[1] = (int)gen_fl2bits((float)fVar3);
    *param_1 = iVar1;
  }
  return;
}

/* ref: FUN_00536cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00536cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x536cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  if (param_1 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  }
  if (7 < *((uint *)GEN_TOP(((int)this + 0x2fd8)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x2fd8))) = 0;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
    *((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) = param_1;
    return uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x2fd8))) + 1;
  *((uint *)GEN_TOP(((int)this + 0x2fd8))) = uVar1;
  *((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) = param_1;
  return uVar1;
}

/* ref: FUN_00536d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00536d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x536d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x2fd8)));
  if (uVar1 < 8) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) = 1;
    if (*((int *)GEN_TOP((in_ecx + 0x2fd8))) == 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x2fd8))) = 8;
      return 0;
    }
    uVar1 = *((int *)GEN_TOP((in_ecx + 0x2fd8))) - 1;
    *((uint *)GEN_TOP((in_ecx + 0x2fd8))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00536d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00536d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x536d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  uint3 uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int * piVar4;
  int * piVar5;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  if (uVar2 != 4) {
    piVar4 = param_2;
  }
  piVar5 = ((int *)GEN_TOP(0x0));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xb8))))(param_2 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    piVar5 = param_2;
  }
  uVar3 = (uint3)((uint)param_1 >> 8);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    bVar1 = F_005322a0(piVar5);
    piVar4 = REFG(int * PTR32, 0x1379694);
    break;
  case 1: ;
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    bVar1 = F_005321f0(piVar5);
    piVar4 = REFG(int * PTR32, 0x1379694);
    break;
  case 2: ;
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar2 = F_00532250(piVar5);
    bVar1 = (byte)uVar2;
    piVar4 = REFG(int * PTR32, 0x1379694);
    break;
  default: ;
    return CONCAT31(uVar3,1);
  case 4: ;
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    bVar1 = F_005322f0(piVar5);
    piVar4 = REFG(int * PTR32, 0x1379694);
    break;
  case 5: ;
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      return 1;
    }
    bVar1 = F_005322f0(piVar5);
    piVar4 = REFG(int * PTR32, 0x1379694);
    break;
  case 6: ;
    uVar2 = F_005337c0(param_2);
    return uVar2;
  case 7: ;
    return (uint)(param_2 != REFG(int * PTR32, 0x1379694));
  case 8: ;
    return (uint)(param_2 == REFG(int * PTR32, 0x1379694));
  case 9: ;
    return (uint)uVar3 << 8;
  case 10: ;
    uVar2 = F_00533630(this GEN_EDX_ARG,param_2);
    return uVar2;
  case 0xb: ;
    uVar2 = F_00533790(param_2[0x1d],0);
    return uVar2;
  case 0x12: ;
    return CONCAT31(uVar3,piVar4 != ((int *)GEN_TOP(0x0)));
  case 0x13: ;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    bVar1 = F_00ae18d0(piVar4 GEN_EDX_ARG);
    piVar4 = REFG(int * PTR32, 0x1379694);
    break;
  case 0x14: ;
    bVar1 = F_00533770(param_2);
    return CONCAT31(extraout_var,bVar1);
  case 0x15: ;
    bVar1 = F_0054c7a0(param_2);
    return CONCAT31(extraout_var_00,bVar1);
  }
  if (bVar1 == 0) {
    REFG(int * PTR32, 0x1379694) = piVar4;
    return 0;
  }
  REFG(int * PTR32, 0x1379694) = piVar4;
  return 1;
}

/* ref: FUN_00536f30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00536f30(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x536f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  int iVar4;
  longlong lVar5;
  
  uVar1 = *param_1;
  if ((0 < (int)uVar1) && (iVar4 = 0, puVar3 = param_1, 0 < (int)uVar1)) {
    do {
      puVar3 = puVar3 + 1;
      lVar5 = (*((gen_lcode *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(*puVar3)))))(((undefined4 *)GEN_TOP(*puVar3)));
      if (lVar5 == (longlong)CONCAT44(param_3,param_2)) {
        uVar2 = iVar4 + 1;
        if (param_4 == '\0') {
          uVar2 = iVar4 - 1 + uVar1;
        }
        return param_1[uVar2 % uVar1 + 1];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00536f90 */
GEN_OWN GEN_FRAME uint F_00536f90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x536f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined * this;
  uint uVar2;
  gen_size32 _NumOfElements;
  int * piVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  _NumOfElements = 0;
  piVar3 = param_1;
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = iVar1 - 1) {
    piVar3 = piVar3 + 1;
    this = ((undefined *)GEN_TOP(*piVar3));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      *((undefined * PTR32 *)GEN_TOP(((int)param_4 + _NumOfElements * 8 + 4))) = this;
      uVar5 = param_2;
      uVar2 = F_00a5feb0(this GEN_EDX_ARG);
      fVar4 = F_00aaea90(uVar2,uVar5);
      *((float *)GEN_TOP(((int)param_4 + _NumOfElements * 8))) = (float)fVar4;
      _NumOfElements = _NumOfElements + 1;
    }
  }
  F_00c4f040(param_4,_NumOfElements,8,((code *)REFP(0x5332a0)));
  return _NumOfElements;
}

/* ref: FUN_00536ff0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00536ff0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x536ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x50, 0);
  int iVar1;
  float fVar2;
  undefined * this;
  gen_size32 sVar3;
  float * pfVar4;
  float * pfVar5;
  float fVar6;
  
  (*(gen_size32 *)(gen_frame + 0x38)) = 0;
  if (*param_1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0x34)) = param_1 + 1;
    (*(int *)(gen_frame + 0x30)) = *param_1;
    pfVar5 = param_3;
    do {
      this = ((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x34))));
      if (this != ((undefined *)GEN_TOP(0x0))) {
        (*(gen_size32 *)(gen_frame + 0x38)) = (*(gen_size32 *)(gen_frame + 0x38)) + 1;
        pfVar5[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(this)));
        (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar5;
        pfVar5 = pfVar5 + 2;
        pfVar4 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
        ((float *)(gen_frame + 0x0))[1] = 0.0;
        (*(float *)(gen_frame + 0x3c)) = 0.0;
        fVar6 = (float)((float10)*pfVar4 - (float10)*param_2);
        (*(float *)(gen_frame + 0x10)) = fVar6;
        fVar2 = (float)((float10)pfVar4[2] - (float10)param_2[2]);
        (*(float *)(gen_frame + 0x18)) = fVar2;
        ((float *)(gen_frame + 0x0))[0] = fVar6;
        ((float *)(gen_frame + 0x0))[2] = fVar2;
        fVar6 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                       ((float10)0 * (float10)0 + (float10)fVar6 * (float10)fVar6))));
        (*(float *)(gen_frame + 0x2c)) = fVar6;
        fVar6 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar6))));
        (*(float *)(gen_frame + 0x2c)) = fVar6;
        if ((float10)*(float *)&REFG(undefined, 0x109c854) < (float10)fVar6) {
          fVar6 = F_005324f0(((float *)(gen_frame + 0x0)));
          (*(float *)(gen_frame + 0x3c)) = fVar6;
          if ((float10)fVar6 < (float10)0) {
            (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar6 + (float10)REFG(float, 0x1305b68));
          }
        }
        *(*(float * PTR32 *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x3c));
      }
      (*(int * PTR32 *)(gen_frame + 0x34)) = (*(int * PTR32 *)(gen_frame + 0x34)) + 1;
      iVar1 = (*(int *)(gen_frame + 0x30)) - 1;
      (*(int *)(gen_frame + 0x30)) = iVar1;
    } while (iVar1 != 0);
  }
  sVar3 = (*(gen_size32 *)(gen_frame + 0x38));
  F_00c4f040(param_3,(*(gen_size32 *)(gen_frame + 0x38)),8,((code *)REFP(0x533220)));
  return sVar3;
}

/* ref: FUN_00537110 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00537110(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x537110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  float fVar5;
  
  pfVar3 = ((float *)GEN_TOP(F_00a5feb0(param_2 GEN_EDX_ARG)));
  fVar5 = ((float)GEN_TOF(((float10)*pfVar3 - (float10)*((float *)GEN_TOP((param_1 + 0x40))))));
  (*(float *)(gen_frame + 0x20)) = fVar5;
  fVar1 = ((float)GEN_TOF(((float10)pfVar3[1] - (float10)*((float *)GEN_TOP((param_1 + 0x44))))));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)) = ((float)GEN_TOF(((float10)pfVar3[2] - (float10)*((float *)GEN_TOP((param_1 + 0x48))))));
  (*(float *)(gen_frame + 0x0)) = fVar5;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0));
  pfVar3 = ((float *)GEN_TOP(F_00a5feb0(param_3 GEN_EDX_ARG)));
  fVar5 = ((float)GEN_TOF(((float10)*pfVar3 - (float10)*((float *)GEN_TOP((param_1 + 0x40))))));
  (*(float *)(gen_frame + 0x20)) = fVar5;
  fVar1 = ((float)GEN_TOF(((float10)pfVar3[1] - (float10)*((float *)GEN_TOP((param_1 + 0x44))))));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)pfVar3[2] - (float10)*((float *)GEN_TOP((param_1 + 0x48))))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)) = fVar2;
  (*(double *)(gen_frame + 0x28)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 4))),(uint)gen_fl2bits(fVar2)));
  (*(float *)(gen_frame + 0x10)) = fVar5;
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar5 = F_005324f0(&(*(float *)(gen_frame + 0x10)));
  (*(double *)(gen_frame + 0x28)) = (double)fVar5;
  fVar5 = F_005324f0(&(*(float *)(gen_frame + 0x0)));
  fVar5 = (float)((float10)(*(double *)(gen_frame + 0x28)) - (float10)fVar5);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = fVar5;
  (*(double *)(gen_frame + 0x28)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar5),(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)))));
  fVar4 = F_00532480(fVar5);
  if ((float10)0 <= fVar4) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005371f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005371f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5371f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8)));
  if ((this_00 == ((undefined *)GEN_TOP(0x0))) || (*((char *)GEN_TOP(((int)this + 0x92))) == '\0')) {
    *((undefined1 *)GEN_TOP(((int)this + 0x92))) = 1;
  }
  else {
    if (*((int *)GEN_TOP(((int)this + 0x50))) != *((int *)GEN_TOP(((int)this + 0x40)))) {
      if (*((int *)GEN_TOP(((int)this + 0x40))) == 0) {
        uVar1 = F_004ea820(this_00 GEN_EDX_FWD,0xf);
        return uVar1;
      }
      uVar1 = F_004ea820(this_00 GEN_EDX_ARG,0xe);
      return uVar1;
    }
    if (*((int *)GEN_TOP(((int)this + 0x54))) != *((int *)GEN_TOP(((int)this + 0x44)))) {
      if (*((int *)GEN_TOP(((int)this + 0x44))) == 0) {
        uVar1 = F_004ea820(this_00 GEN_EDX_ARG,3);
        return uVar1;
      }
      uVar1 = F_004ea820(this_00 GEN_EDX_ARG,0xb);
      return uVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00537250 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00537250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x537250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  char cVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x25f8)));
  uVar1 = REFG(undefined4, 0x137104c);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    if ((*((char *)GEN_TOP(((int)this + 0x95))) == '\0') && (*((char *)GEN_TOP(((int)this + 0x94))) == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (*((char *)GEN_TOP(((int)this + 0x96))) != cVar2) {
      if (cVar2 != '\0') {
        uVar1 = F_004ea820(this_00 GEN_EDX_FWD,0x1f);
        *((char *)GEN_TOP(((int)this + 0x96))) = cVar2;
        return uVar1;
      }
      uVar1 = F_004ea820(this_00 GEN_EDX_ARG,0x20);
    }
    *((char *)GEN_TOP(((int)this + 0x96))) = cVar2;
  }
  return uVar1;
}

/* ref: FUN_005372b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005372b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5372b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((in_ecx + 0x2ff0))));
    if (*((int *)GEN_TOP((uVar1 + 0x14))) != 0) {
      if (*((int *)GEN_TOP((in_ecx + 0x44))) != 0) {
        *((undefined1 *)GEN_TOP((in_ecx + 0x95))) = 1;
        return uVar1;
      }
      if (*((int *)GEN_TOP((in_ecx + 0x40))) != 0) {
        *((undefined1 *)GEN_TOP((in_ecx + 0x94))) = 1;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00537470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00537470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x537470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 3)))))) {
    uVar1 = F_00ab1290(param_1,param_2);
    *((uint *)GEN_TOP(((int)this + 0x80))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_005374c0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005374c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5374c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) == 0) {
    if (*((int *)GEN_TOP(((int)this + 0x40))) == 0) {
      return 0;
    }
    cVar1 = *((char *)GEN_TOP(((int)this + 0x94)));
  }
  else {
    cVar1 = *((char *)GEN_TOP(((int)this + 0x95)));
  }
  if ((cVar1 != '\0') && (REFG(int, 0x1375bbc) == 0)) {
    if ((REFG(int, 0x1375b90) != 0) &&
       ((uVar3 = F_00533c90(this GEN_EDX_FWD), uVar3 != 0 && (bVar2 = F_00b6af20(uVar3), bVar2 != 0)))) {
      F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      bVar2 = F_00ac3640(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
      if (bVar2 == 0) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00537540 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00537540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x537540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte * pbVar2;
  
  if ((*((uint *)GEN_TOP(((int)this + 0xea8))) & 1) == 0) {
    iVar1 = 0;
    pbVar2 = ((byte *)GEN_TOP(((int)this + 0x50)));
    while ((*pbVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 0x54;
      if (7 < iVar1) {
        return 0;
      }
    }
  }
  *((uint *)GEN_TOP(((int)this + 0xea8))) = *((uint *)GEN_TOP(((int)this + 0xea8))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 0xa4))) = *((uint *)GEN_TOP(((int)this + 0xa4))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 0xf8))) = *((uint *)GEN_TOP(((int)this + 0xf8))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 0x14c))) = *((uint *)GEN_TOP(((int)this + 0x14c))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 0x1a0))) = *((uint *)GEN_TOP(((int)this + 0x1a0))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 500))) = *((uint *)GEN_TOP(((int)this + 500))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 0x248))) = *((uint *)GEN_TOP(((int)this + 0x248))) & 0xfffffffe;
  *((uint *)GEN_TOP(((int)this + 0x29c))) = *((uint *)GEN_TOP(((int)this + 0x29c))) & 0xfffffffe;
  return 1;
}

/* ref: FUN_005375b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005375b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5375b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = REFG(int, 0x1305c44);
  iVar6 = param_1;
  do {
    iVar4 = 0;
    do {
      iVar5 = iVar2;
      if (0x23 < *((uint *)GEN_TOP(((int)this + iVar4 * 4)))) {
        if (iVar4 != 0) {
          iVar5 = iVar4 - 1;
        }
        break;
      }
      if (iVar4 == 7) {
        iVar5 = 7;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    iVar4 = 0;
    while( true ) {
      if ((7 < iVar4) || (iVar1 = *((int *)GEN_TOP(((int)this + iVar4 * 4))), iVar1 == 0x24)) {
        return *(uint *)this;
      }
      if (iVar1 == iVar6) break;
      iVar4 = iVar4 + 1;
    }
    if (iVar4 == iVar5) {
      uVar7 = *(uint *)this;
    }
    else {
      uVar7 = *((uint *)GEN_TOP(((int)this + iVar4 * 4 + 4)));
    }
    if (((*((char *)GEN_TOP(((int)this + 0x20))) == '\0') || (uVar7 != 3)) ||
       (bVar3 = F_00532440(), bVar3 != 0)) {
      return uVar7;
    }
    iVar6 = 3;
  } while( true );
}

/* ref: FUN_00537630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00537630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x537630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = REFG(int, 0x1305c44);
  uVar6 = param_1;
  do {
    iVar4 = 0;
    do {
      iVar5 = iVar2;
      if (0x23 < *((uint *)GEN_TOP(((int)this + iVar4 * 4)))) {
        if (iVar4 != 0) {
          iVar5 = iVar4 - 1;
        }
        break;
      }
      if (iVar4 == 7) {
        iVar5 = 7;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    iVar4 = 0;
    while( true ) {
      if ((7 < iVar4) || (uVar1 = *((uint *)GEN_TOP(((int)this + iVar4 * 4))), 0x23 < uVar1)) {
        return *(uint *)this;
      }
      if (uVar1 == uVar6) break;
      iVar4 = iVar4 + 1;
    }
    if (iVar4 == 0) {
      uVar6 = *((uint *)GEN_TOP(((int)this + iVar5 * 4)));
    }
    else {
      uVar6 = *((uint *)GEN_TOP(((int)this + iVar4 * 4 - 4)));
    }
    if (((*((char *)GEN_TOP(((int)this + 0x20))) == '\0') || (uVar6 != 3)) ||
       (bVar3 = F_00532440(), bVar3 != 0)) {
      return uVar6;
    }
    uVar6 = 3;
  } while( true );
}

/* ref: FUN_005376f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005376f0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined1 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5376f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  *param_5 = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (((param_4 != 0) &&
      (uVar2 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_4 + 0x74)))), uVar2 != 0)) &&
     (piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG))), piVar3 != ((int *)GEN_TOP(0x0)))) {
    uVar5 = 0;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x44))))(piVar3 GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(F_00435440(uVar4 GEN_EDX_ARG,uVar5)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x8)) = uVar4;
      uVar2 = F_004458c0(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 8))),*((undefined4 *)GEN_TOP((uVar2 + 0xc))),0,1,1);
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      param_4 = 0;
      if (uVar4 != 1 && -1 < (int)(uVar4 - 1)) {
        do {
          if ((*(uint *)(gen_frame + 0xc)) != 0) {
            return (*(uint *)(gen_frame + 0xc));
          }
          if (param_3 == '\0') {
            uVar2 = uVar2 + 1;
          }
          else {
            uVar2 = uVar2 - 1;
          }
          if ((int)uVar2 < 0) {
            uVar2 = uVar4 - 1;
            *param_5 = 1;
          }
          if ((int)uVar4 <= (int)uVar2) {
            uVar2 = 0;
            *param_5 = 1;
          }
          uVar4 = F_00532bd0(uVar2,&REFG(undefined, 0x1336e40),piVar3);
          uVar4 = F_00ab1210(uVar4);
          (*(uint *)(gen_frame + 0x0)) = uVar4;
          if ((uVar4 != 0) && (bVar1 = F_0054dcd0(param_2 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0))), bVar1 != 0)) {
            (*(uint *)(gen_frame + 0xc)) = uVar4;
          }
          param_4 = param_4 + 1;
          uVar4 = (*(uint *)(gen_frame + 0x8));
        } while (param_4 < (int)((*(uint *)(gen_frame + 0x8)) - 1));
        if ((*(uint *)(gen_frame + 0xc)) != 0) {
          return (*(uint *)(gen_frame + 0xc));
        }
      }
    }
  }
  return REFG(undefined4, 0x1379694);
}

/* ref: FUN_00537820 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00537820(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(undefined1 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x537820u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  bool bVar1;
  undefined4 * PTR32 * ppuVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((param_1 != 0) && (0 < param_3)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP((param_3 - 1)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 *)GEN_TOP(0x0));
    ppuVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
    if (-1 < param_3 - 1) {
      ppuVar2 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = *ppuVar2;
    if (0 < param_3) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_2;
      puVar6 = ((undefined4 *)GEN_TOP(0x1));
      do {
        if (uVar7 != 0) {
          return uVar7;
        }
        uVar3 = F_00ab1210(*(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
        if (uVar3 == param_1) {
          puVar5 = ((undefined4 *)GEN_TOP(((int)puVar6 - 2)));
          if (param_4 == '\0') {
            puVar5 = puVar6;
          }
          puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
          if ((int)puVar5 < 0) {
LAB_005378a2: ;
            *param_5 = 1;
            puVar5 = puVar4;
          }
          else if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) < (int)puVar5) {
            puVar4 = ((undefined4 *)GEN_TOP(0x0));
            goto LAB_005378a2;
          }
          uVar7 = F_00ab1210(param_2[(int)puVar5]);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 1;
        bVar1 = param_3 <= (int)puVar6;
        puVar6 = ((undefined4 *)GEN_TOP(((int)puVar6 + 1)));
        if (bVar1) {
          return uVar7;
        }
      } while( true );
    }
  }
  return 0;
}

/* ref: FUN_005378e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005378e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5378e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x24)));
  do {
    if (*piVar2 == 0x11) {
      *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 0x24))) = param_1;
      *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) | 1;
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 10);
  return 0;
}

/* ref: FUN_00537910 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00537910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x537910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = 0;
      piVar2 = ((int *)GEN_TOP(((int)this + 0x24)));
      do {
        if (*piVar2 == 0x11) {
          *((undefined4 *)GEN_TOP(((int)this + uVar1 * 4 + 0x24))) = *((undefined4 *)GEN_TOP((param_1 + uVar3 * 4)));
          *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) | 1;
          break;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar1 < 10);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return;
}

/* ref: FUN_00537980 */
GEN_OWN GEN_FRAME byte F_00537980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x537980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((param_3 + 0x10))) GEN_EDX_ARG,param_1 * 7 + 0x7a + param_2);
  return *((int *)GEN_TOP((uVar1 + 0x14))) != 0;
}

/* ref: FUN_005379b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005379b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5379b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = 3;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_0076f560(this GEN_EDX_ARG,param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_005379f0 */
GEN_OWN GEN_FRAME byte F_005379f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5379f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,param_2);
  return *((int *)GEN_TOP((uVar1 + 0x14))) != 0;
}

/* ref: FUN_00537a10 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00537a10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x537a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,0x78);
  return *((int *)GEN_TOP((uVar1 + 0x14))) != 0;
}

/* ref: FUN_00537a30 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00537a30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x537a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG,0x79);
  return *((int *)GEN_TOP((uVar1 + 0x14))) != 0;
}

/* ref: FUN_00537a50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00537a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x537a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  bool bVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  
  bVar2 = false;
  if (*((int *)GEN_TOP(((int)this + 0x10))) < 7) {
    uVar6 = 0;
    do {
      uVar3 = F_00414500(*((undefined4 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD,
                           *((int *)GEN_TOP(((int)this + 0x10))) * 7 + 0x7a + uVar6);
      bVar7 = *((int *)GEN_TOP((uVar3 + 0x14))) != 0;
      cVar1 = *((char *)GEN_TOP(((int)this + uVar6 + 0x1e)));
      *((bool *)GEN_TOP(((int)this + uVar6 + 0x1e))) = bVar7;
      uVar6 = uVar6 + 1;
      bVar2 = (bool)(bVar2 | bVar7 != (bool)cVar1);
    } while (uVar6 < 7);
    if (!bVar2) goto LAB_00537a9d;
  }
  else {
LAB_00537a9d: ;
    if (*((int *)GEN_TOP(((int)this + 0x14))) == *((int *)GEN_TOP(((int)this + 0x10)))) goto LAB_00537b13;
  }
  if (*((int *)GEN_TOP(((int)this + 0x10))) < 7) {
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar8 = 3;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar6 GEN_EDX_ARG,uVar8)));
      if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
        F_0076f560(pvVar5 GEN_EDX_ARG,(int)this + 0x1e,7);
        *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
        return;
      }
    }
  }
  else {
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      uVar8 = 3;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(F_00763050(uVar6 GEN_EDX_ARG,uVar8)));
      if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
        F_0076f560(pvVar5 GEN_EDX_ARG,0,0);
      }
    }
  }
LAB_00537b13: ;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  return;
}

/* ref: FUN_00537b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00537b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x537b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + 0x10))) GEN_EDX_FWD,0x78);
  if (*((int *)GEN_TOP((uVar1 + 0x14))) != 0) {
    if (param_2 == '\0') {
      uVar1 = 1;
      if (*((int *)GEN_TOP((in_ecx + 0x10))) != 1) {
        *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 1;
      }
    }
    else if (*((int *)GEN_TOP((in_ecx + 0x10))) != 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00537b70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00537b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x537b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP((in_ecx + 8))) != 0) {
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + 0x10))) GEN_EDX_FWD,0x78);
    uVar2 = 1;
    if (*((int *)GEN_TOP((uVar1 + 0x14))) == 0) {
      uVar2 = 7;
    }
    if (*((uint *)GEN_TOP((in_ecx + 0x10))) != uVar2) {
      *((uint *)GEN_TOP((in_ecx + 0x10))) = uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00537bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00537bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x537bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  char * pcVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar4 = param_1;
    do {
      piVar4 = piVar4 + 1;
      if (*piVar4 == *((int *)GEN_TOP(((int)this + param_2 * 8 + 0xc)))) {
        cVar3 = '\x01';
        goto LAB_00537bfe;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
  cVar3 = '\0';
LAB_00537bfe: ;
  pcVar1 = ((char *)GEN_TOP(((int)this + param_2 * 8 + 0x10)));
  *((byte *)GEN_TOP(((int)this + 8))) =
       *((byte *)GEN_TOP(((int)this + 8))) | *((char *)GEN_TOP(((int)this + param_2 * 8 + 0x10))) != cVar3;
  *pcVar1 = cVar3;
  return (uint)pcVar1;
}

/* ref: FUN_00537c20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00537c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x537c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  int * piVar3;
  char * pcVar4;
  int local_8;
  
  local_8 = *(int *)this;
  if (local_8 != 0) {
    pcVar4 = ((char *)GEN_TOP(((int)this + 0x10)));
    do {
      iVar2 = 0;
      if (0 < *param_1) {
        piVar3 = param_1;
        do {
          piVar3 = piVar3 + 1;
          if (*piVar3 == *(int *)(pcVar4 - 4)) {
            cVar1 = '\x01';
            goto LAB_00537c52;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *param_1);
      }
      cVar1 = '\0';
LAB_00537c52: ;
      *((byte *)GEN_TOP(((int)this + 8))) = *((byte *)GEN_TOP(((int)this + 8))) | *pcVar4 != cVar1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_00537c80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00537c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x537c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = param_1;
  if (0 < iVar2) {
    do {
      piVar1 = piVar1 + 1;
      if (*piVar1 != 0) {
        *((int *)GEN_TOP(((int)this + *(int *)((int)(uintptr_t)this) * 8 + 0xc))) = *piVar1;
        *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)(uintptr_t)this) * 8 + 0x10))) = 0;
        *(int *)this = *(int *)this + 1;
      }
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: Client::Game::Control::TargetSystem::SpaceFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00537cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_1, float gen_a1))
{
  GEN_ENTER(0x537cc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_1 = (float)gen_a1;)
  float fVar1;
  byte bVar2;
  
  fVar1 = *(float *)(this + 8);
  if (param_1 == 0.0) {
    return 0;
  }
  if (((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) &&
     (bVar2 = F_00532790(param_1,fVar1), bVar2 == 0)) {
    return 0;
  }
  bVar2 = F_00533060((uint)gen_fl2bits(param_1),*(float *)&REFG(undefined, 0x109c740));
  return bVar2 != 0;
}

/* ref: Client::Game::Control::TargetSystem::CircleFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00537d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x537d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  int * in_ecx;
  int * piVar3;
  byte bVar4;
  uint local_8;
  
  local_8 = 0x24;
  do {
    uVar1 = *((undefined4 *)GEN_TOP((local_8 + *(int *)(this + 8))));
    this_00 = *(undefined * PTR32 *)(this + 4);
    in_ecx = ((int *)GEN_TOP(0x0));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
    if (uVar2 != 4) {
      in_ecx = param_1;
    }
    piVar3 = ((int *)GEN_TOP(0x0));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      piVar3 = param_1;
    }
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar4 = F_005322a0(piVar3);
      break;
    case 1: ;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar4 = F_005321f0(piVar3);
      break;
    case 2: ;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      uVar2 = F_00a62220(piVar3);
      bVar4 = (byte)uVar2;
      break;
    default: ;
      goto switchD_00537d78_caseD_3;
    case 4: ;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar4 = F_005322f0(piVar3);
      break;
    case 5: ;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        bVar4 = F_005322f0(piVar3);
        break;
      }
      goto switchD_00537d78_caseD_3;
    case 6: ;
      uVar2 = F_005337c0(param_1);
      bVar4 = (byte)uVar2;
      break;
    case 7: ;
      bVar4 = param_1 != REFG(int * PTR32, 0x1379694);
      break;
    case 8: ;
      bVar4 = param_1 == REFG(int * PTR32, 0x1379694);
      break;
    case 9: ;
      goto switchD_00537d78_caseD_9;
    case 10: ;
      uVar2 = F_00533630(this_00 GEN_EDX_ARG,param_1);
      bVar4 = (byte)uVar2;
      break;
    case 0xb: ;
      bVar4 = 0;
      uVar2 = F_00a5f0b0(param_1[0x1d],0);
      if (uVar2 != 0xe0000000) {
        bVar4 = F_00a66e00(&REFG(undefined, 0x14aa74c) GEN_EDX_ARG,uVar2);
      }
      break;
    case 0x12: ;
      bVar4 = in_ecx != ((int *)GEN_TOP(0x0));
      break;
    case 0x13: ;
      if (in_ecx == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar4 = F_00ae18d0(in_ecx GEN_EDX_ARG);
      break;
    case 0x14: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
      bVar4 = uVar2 - 4 < 5;
      break;
    case 0x15: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
      bVar4 = uVar2 == 7;
    }
    if (bVar4 == 0) {
switchD_00537d78_caseD_9: ;
      return 0;
    }
switchD_00537d78_caseD_3: ;
    local_8 = local_8 + 4;
    if (0x4b < local_8) {
      return 1;
    }
  } while( true );
}

/* ref: Client::Game::Control::TargetSystem::VisibleFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00537f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x537f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 4) + 0xfb8)));
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)(this + 4) + 0xfbc)));
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

/* ref: Client::Game::Control::TargetSystem::TargetTypeFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00537f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x537f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 4))) {
  case 0: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      bVar2 = F_005322a0(param_1);
    }
    break;
  case 1: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      bVar2 = F_005321f0(param_1);
    }
    break;
  case 2: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      uVar1 = F_00532250(param_1);
      bVar2 = (byte)uVar1;
    }
    break;
  case 3: ;
    goto switchD_00537f59_caseD_3;
  case 4: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      bVar2 = F_005322f0(param_1);
    }
    break;
  case 5: ;
    bVar2 = F_00533770(param_1);
    if ((bVar2 == 0) && (bVar2 = F_005322f0(param_1), bVar2 == 0)) goto switchD_00537f59_caseD_f;
switchD_00537f59_caseD_3: ;
    bVar2 = 1;
    break;
  case 6: ;
    uVar1 = F_005337c0(param_1);
    bVar2 = (byte)uVar1;
    break;
  case 7: ;
    bVar2 = param_1 != REFG(int * PTR32, 0x1379694);
    break;
  case 8: ;
    bVar2 = param_1 == REFG(int * PTR32, 0x1379694);
    break;
  case 9: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG);
    if ((char)uVar1 == '\0') break;
  default: ;
switchD_00537f59_caseD_f: ;
    bVar2 = 0;
    break;
  case 10: ;
    uVar1 = F_00533630(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1);
    bVar2 = (byte)uVar1;
    break;
  case 0xb: ;
    uVar1 = F_00533790(param_1[0x1d],0);
    bVar2 = (byte)uVar1;
    break;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x10: ;
  case 0x11: ;
    break;
  case 0x12: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    bVar2 = uVar1 == 4;
    break;
  case 0x13: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    if (uVar1 == 4) {
      bVar2 = F_00ae18d0(param_1 GEN_EDX_ARG);
    }
    break;
  case 0x14: ;
    F_00533770(param_1);
  case 0x15: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    goto switchD_00537f59_caseD_f;
  }
  if (this[0xc] != (undefined1)0x0) {
    return bVar2 == 0;
  }
  return bVar2;
}

/* ref: Client::Game::Control::TargetSystem::ShowFilter::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00538130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x538130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP((param_1 + 0x11c))) == 0;
}

/* ref: FUN_00538150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x538150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 3)))))) {
    *((uint *)GEN_TOP((in_ecx + 0x44))) = param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00538190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x538190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 3)))))) {
    *((uint *)GEN_TOP((in_ecx + 0x48))) = param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_005381d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005381d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5381d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 3)))))) {
    *((uint *)GEN_TOP((in_ecx + 0x58))) = param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00538210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538210(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x538210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP((param_1 + 0x2fb8 + uVar1 * 4))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP((param_1 + 0x2fb8 + uVar1 * 4))) != 3)))))) {
    *((uint *)GEN_TOP((param_1 + 0x74))) = param_2;
    *((undefined1 *)GEN_TOP((param_1 + 0x70))) = param_3;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00538250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x538250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 3)))))) {
    *((uint *)GEN_TOP((in_ecx + 0x7c))) = param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00538290 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00538290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x538290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 3)))))) {
    iVar2 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0xfb8)))) {
      piVar3 = ((int *)GEN_TOP(((int)this + 0xfbc)));
      while (*piVar3 != param_1) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
        if (*((int *)GEN_TOP(((int)this + 0xfb8))) <= iVar2) {
          return 0;
        }
      }
      *((int *)GEN_TOP(((int)this + 0x84))) = param_1;
    }
  }
  return 0;
}

/* ref: FUN_005382f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005382f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5382f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 3)))))) {
    uVar1 = (uint)param_2;
    *((byte *)GEN_TOP((in_ecx + 0x90))) = param_2;
  }
  return (byte)uVar1;
}

/* ref: FUN_00538330 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00538330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x538330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP((in_ecx + 0x2fb8 + uVar1 * 4))) != 3)))))) {
    uVar1 = (uint)param_2;
    *((byte *)GEN_TOP((in_ecx + 0x91))) = param_2;
  }
  return (byte)uVar1;
}

/* ref: FUN_00538370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x538370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 3)))))) {
    *((uint *)GEN_TOP(((int)this + 0xfb4))) = param_1;
    *((undefined4 *)GEN_TOP(((int)this + 0xfb0))) = param_2;
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005383b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005383b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5383b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = F_00a5f2b0(param_1);
  uVar3 = F_00ac1a20(param_2,param_3);
  if (param_3 != 0) {
    uVar5 = uVar2;
    uVar4 = F_00ac1a20(param_2,param_3);
    bVar1 = F_00ac1510(uVar4,uVar5);
    if (bVar1 == 0) {
      return 0;
    }
  }
  uVar2 = F_00ac3ed0(uVar3,uVar2);
  if (uVar2 != 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00538420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x538420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005383b0(param_1,*((undefined4 *)GEN_TOP(((int)this + 0xfb4))),*((undefined4 *)GEN_TOP(((int)this + 0xfb0)))
                      );
  return uVar1;
}

/* ref: FUN_00538440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538440(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x538440u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar2;
  
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00a5f060(param_2 GEN_EDX_FWD);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      if ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))
      {
        bVar1 = F_00532730(((float)gen_bits2f((unsigned int)(uintptr_t)(param_2))),param_3);
        in_EAX = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 == 0) goto LAB_005384cc;
      }
      bVar1 = F_00533060((uint)param_2,*(float *)&REFG(undefined, 0x109c740));
      in_EAX = CONCAT31(extraout_var_01,bVar1);
      if (bVar1 != 0) {
        uVar2 = F_00a5f290(param_2 GEN_EDX_ARG);
        if (uVar2 == 0) {
          return 1;
        }
        if (*((char *)GEN_TOP((uVar2 + 0x188))) == '\x02') {
          uVar2 = F_00a62220(uVar2);
          if ((char)uVar2 != '\0') {
            return 0;
          }
        }
        return 1;
      }
    }
  }
LAB_005384cc: ;
  return in_EAX & 0xffffff00;
}

/* ref: FUN_005384e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005384e0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5384e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar2;
  
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00a5f060(param_2 GEN_EDX_FWD);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      if ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))
      {
        bVar1 = F_00532790(((float)gen_bits2f((unsigned int)(uintptr_t)(param_2))),param_3);
        in_EAX = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 == 0) goto LAB_0053856c;
      }
      bVar1 = F_00533060((uint)param_2,*(float *)&REFG(undefined, 0x109c740));
      in_EAX = CONCAT31(extraout_var_01,bVar1);
      if (bVar1 != 0) {
        uVar2 = F_00a5f290(param_2 GEN_EDX_ARG);
        if (uVar2 == 0) {
          return 1;
        }
        if (*((char *)GEN_TOP((uVar2 + 0x188))) == '\x02') {
          uVar2 = F_00a62220(uVar2);
          if ((char)uVar2 != '\0') {
            return 0;
          }
        }
        return 1;
      }
    }
  }
LAB_0053856c: ;
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00538580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538580(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x538580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  
  if ((param_2 == -0x20000000) && (param_3 == 0)) {
    return 0xe0000000;
  }
  uVar1 = F_00ab1290(param_2,param_3);
  if (uVar1 != 0) {
    uVar1 = F_00538440(param_1 GEN_EDX_ARG,uVar1,param_4);
    if ((char)uVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005385d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005385d0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5385d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  if (param_2 == -0x20000000) {
    return 0xe0000000;
  }
  uVar1 = F_00ab1290(param_2,0);
  if (uVar1 != 0) {
    uVar1 = F_00538440(param_1 GEN_EDX_ARG,uVar1,param_3);
    if ((char)uVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00538690 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00538690(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x538690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = F_00ab1250(uVar2);
    if ((uVar1 != 0) && (*param_1 < 0x158)) {
      param_1[*param_1 + 1] = uVar1;
      *param_1 = *param_1 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x158);
  return uVar1;
}

/* ref: FUN_005386d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005386d0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5386d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  uVar2 = *param_1;
  puVar4 = param_1;
  param_1 = ((uint *)GEN_TOP(uVar2));
  if (0 < (int)uVar2) {
    do {
      puVar4 = puVar4 + 1;
      uVar2 = 0;
      puVar3 = param_2;
      if (0 < (int)*param_2) {
        do {
          puVar3 = puVar3 + 1;
          if (*puVar3 == *puVar4) {
            uVar2 = *param_3;
            if ((int)uVar2 < 0x158) {
              param_3[uVar2 + 1] = *puVar4;
              *param_3 = *param_3 + 1;
            }
            break;
          }
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < (int)*param_2);
      }
      uVar1 = (int)param_1 - 1;
      param_1 = ((uint *)GEN_TOP(uVar1));
    } while (uVar1 != 0);
  }
  return uVar2;
}

/* ref: FUN_00538730 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00538730(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x538730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  if (uVar1 == 2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG);
    if (((char)uVar1 == '\x02') && (param_1[0x21] == *((int *)GEN_TOP((param_2 + 0x74))))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00538780 */
GEN_OWN GEN_NOFRAME ulonglong GEN_THISCALL F_00538780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x538780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 extraout_EDX = 0;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD);
    return CONCAT44(extraout_EDX,uVar2);
  }
  return 0xe0000000;
}

/* ref: FUN_005387a0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_005387a0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x5387a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL(0x50, 0);
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  *param_6 = 0;
  F_00690d40(((undefined *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_3,param_4);
  if (((undefined *)GEN_TOP(param_1[0x3c])) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_005eb0b0(((undefined *)GEN_TOP(param_1[0x3c])) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return uVar2;
  }
  piVar1 = ((int *)GEN_TOP(param_1[0x3b]));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_5);
    *param_6 = 1;
    return uVar2;
  }
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)))));
  (*(undefined4 *)(gen_frame + 0x30)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x34)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x38)) = puVar3[2];
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109bff4)));
  uVar2 = F_0054f100(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00538870 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00538870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x538870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0xfb8)))) {
      piVar2 = ((int *)GEN_TOP(((int)this + 0xfbc)));
      do {
        if (*piVar2 == param_1) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < *((int *)GEN_TOP(((int)this + 0xfb8))));
    }
  }
  return 0;
}

/* ref: FUN_005388b0 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_005388b0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5388b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xb0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float * pfVar6;
  
  (*(float *)(gen_frame + 0x98)) = *param_1;
  fVar1 = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x70)) = fVar1;
  (*(float *)(gen_frame + 0x8c)) = param_1[1];
  fVar2 = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0x74)) = fVar2;
  (*(float *)(gen_frame + 0x94)) = param_1[2];
  fVar3 = (float)((float10)param_2[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x78)) = fVar3;
  (*(float *)(gen_frame + 0x60)) = fVar1;
  (*(float *)(gen_frame + 0x64)) = fVar2;
  (*(float *)(gen_frame + 0x68)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1))));
  (*(float *)(gen_frame + 0x9c)) = fVar1;
  fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
  (*(float *)(gen_frame + 0x9c)) = fVar1;
  if ((float10)0 < (float10)fVar1) {
    pfVar6 = ((float *)GEN_TOP(F_004bd580(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG)));
    fVar4 = (*(float *)(gen_frame + 0x94));
    fVar1 = *pfVar6;
    (*(float *)(gen_frame + 0x60)) = fVar1;
    fVar2 = pfVar6[1];
    (*(float *)(gen_frame + 0x64)) = fVar2;
    fVar3 = pfVar6[2];
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
    (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x98));
    (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x8c));
    (*(undefined4 *)(gen_frame + 0x90)) = 0x4000;
    (*(float *)(gen_frame + 0x94)) = 2.29589e-41;
    (*(float *)(gen_frame + 0x68)) = fVar3;
    (*(float *)(gen_frame + 0x7c)) = fVar4;
    (*(float *)(gen_frame + 0x54)) = fVar1;
    (*(float *)(gen_frame + 0x58)) = fVar2;
    (*(float *)(gen_frame + 0x5c)) = fVar3;
    bVar5 = F_005518b0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x74)),&(*(float *)(gen_frame + 0x54)),
                         (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x9c))),1,&(*(undefined4 *)(gen_frame + 0x90)));
    return bVar5 == 0;
  }
  return 1;
}

/* ref: FUN_00538b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538b90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x538b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  in_ecx[1] = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c7c8)));
  }
  else {
    if (param_2 == 1) {
      *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x109c7cc));
      return 0;
    }
    uVar1 = param_2 - 2;
    if (uVar1 == 0) {
      *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x109c7d0));
      return 0;
    }
  }
  *in_ecx = uVar2;
  return uVar1;
}

/* ref: FUN_00538be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00538be0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x538be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  in_ecx[1] = 0;
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x109c7c8));
  in_ecx[2] = 0x49;
  in_ecx[3] = param_2;
  return param_2;
}

/* ref: FUN_00538c10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00538c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x538c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) == 1) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 2;
    bVar1 = 1;
    *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x109c7d0));
  }
  else if (*((int *)GEN_TOP(((int)this + 4))) == 2) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
    *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x109c7cc));
    return bVar1;
  }
  return bVar1;
}

/* ref: FUN_00538c50 */
GEN_OWN GEN_FRAME uint F_00538c50(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x538c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  uint local_c;
  uint local_8;
  
  local_c = *param_1;
  local_8 = 0;
  if (0 < (int)local_c) {
    puVar3 = param_1 + 1;
    puVar4 = puVar3;
    do {
      uVar1 = *puVar3;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG,uVar1);
      if ((char)uVar2 != '\0') {
        local_8 = local_8 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = puVar3 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
    *param_1 = local_8;
    return local_8;
  }
  *param_1 = 0;
  return local_c;
}

/* ref: FUN_00538cb0 */
GEN_OWN GEN_FRAME unsigned int F_00538cb0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x538cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *param_1;
  piVar3 = param_1;
  param_1 = ((int *)GEN_TOP(iVar1));
  if (0 < iVar1) {
    do {
      piVar3 = piVar3 + 1;
      iVar1 = *piVar3;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 4))))(param_3 GEN_EDX_ARG,iVar1);
      if (((char)uVar2 != '\0') && (*param_2 < 0x158)) {
        param_2[*param_2 + 1] = iVar1;
        *param_2 = *param_2 + 1;
      }
      iVar1 = (int)param_1 - 1;
      param_1 = ((int *)GEN_TOP(iVar1));
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00538d00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00538d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x538d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x40, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  cVar4 = *((char *)GEN_TOP(((int)this + 0x3c)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (cVar4 != '\0') {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c7d8)));
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)));
  F_00a5fd10(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),0x3e);
  iVar5 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP((iVar5 + 0x120))) = (*(undefined4 *)(gen_frame + 0x20));
  *((undefined4 *)GEN_TOP((iVar5 + 0x124))) = (*(undefined4 *)(gen_frame + 0x24));
  *((undefined4 *)GEN_TOP((iVar5 + 0x128))) = (*(undefined4 *)(gen_frame + 0x28));
  *((undefined4 *)GEN_TOP((iVar5 + 0x140))) = (*(undefined4 *)(gen_frame + 0x20));
  *((undefined4 *)GEN_TOP((iVar5 + 0x144))) = (*(undefined4 *)(gen_frame + 0x24));
  *((undefined4 *)GEN_TOP((iVar5 + 0x148))) = (*(undefined4 *)(gen_frame + 0x28));
  puVar7 = ((undefined4 *)GEN_TOP(F_00a5fd10(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x42)));
  uVar1 = *puVar7;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
  uVar2 = puVar7[1];
  (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
  uVar3 = puVar7[2];
  uVar6 = *((uint *)GEN_TOP(((int)this + 8)));
  (*(undefined4 *)(gen_frame + 0x28)) = uVar3;
  *((undefined4 *)GEN_TOP((uVar6 + 0x130))) = uVar1;
  *((undefined4 *)GEN_TOP((uVar6 + 0x134))) = uVar2;
  *((undefined4 *)GEN_TOP((uVar6 + 0x138))) = uVar3;
  *((undefined4 *)GEN_TOP((uVar6 + 0x150))) = uVar1;
  *((undefined4 *)GEN_TOP((uVar6 + 0x154))) = uVar2;
  *((undefined4 *)GEN_TOP((uVar6 + 0x158))) = uVar3;
  return uVar6;
}

/* ref: FUN_00538e40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00538e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x538e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte bVar2;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    return 0;
  }
  bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if ((bVar1 == 0) || (*((char *)GEN_TOP(((int)this + 0x3a))) != '\0')) {
    bVar1 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    if (bVar1 == 0) {
      F_00534400(this GEN_EDX_ARG);
    }
    if (*((char *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) + 0x188))) == '\x03') {
      F_00aaa5b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    bVar2 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    if (bVar2 != 0) {
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,3,0);
    }
    if ((bVar1 != 0) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
      bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
      if (bVar1 == 0) {
        *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 1;
      }
    }
    bVar1 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    if (bVar1 != 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x3a))) = 0;
    }
  }
  return 1;
}

/* ref: FUN_00538ef0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00538ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x538ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    return 0;
  }
  bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (bVar1 == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 1;
  }
  bVar1 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  if (bVar1 == 0) {
    F_00534400(this GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00538f30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00538f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x538f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    return 0;
  }
  uVar1 = F_00ab28a0(*((int *)GEN_TOP(((int)this + 0xc))));
  if (uVar1 == 0) {
    return 0;
  }
  if (*((char *)GEN_TOP((uVar1 + 0x2a))) != '\0') {
    return 1;
  }
  local_8 = 1;
  while( true ) {
    if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
      uVar3 = 0;
    }
    else if (local_8 == 1) {
      uVar3 = *((uint *)GEN_TOP((uVar1 + 0x10)));
    }
    else if (local_8 == 2) {
      uVar3 = *((uint *)GEN_TOP((uVar1 + 0x14)));
    }
    else if (local_8 == 3) {
      uVar3 = *((uint *)GEN_TOP((uVar1 + 0x18)));
    }
    else {
      uVar3 = *((uint *)GEN_TOP((uVar1 + 4)));
    }
    uVar2 = F_00aa0210(*((int *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x40))),0);
    if (uVar2 == uVar3) break;
    local_8 = local_8 + 1;
    if (2 < local_8) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00538fd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00538fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x538fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) && (((bVar3 = F_00a9f620(*((int *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD), bVar3 == 0 || ((uVar4 = F_00a9fbf0(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG), (char)uVar4 == '\0' && (bVar3 = F_00a9fca0(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG), bVar3 == 0)))) && (uVar4 = F_00ab28a0(param_1), uVar4 != 0)))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    if ((*((byte *)GEN_TOP((iVar2 + 0x2dd2))) & 4) == 0) {
      cVar1 = *((char *)GEN_TOP((uVar4 + 0x2e)));
    }
    else {
      cVar1 = *((char *)GEN_TOP((uVar4 + 0x2f)));
    }
    if (cVar1 != '\0') {
      uVar5 = F_00534150(this GEN_EDX_ARG);
      uVar4 = F_00533fa0(((undefined4)(uint)(this)) GEN_EDX_ARG,uVar4,uVar5);
      if ((uVar4 != 0) && (((bVar3 = *((byte *)GEN_TOP((iVar2 + 0x2e08))), bVar3 == 0 || (uVar4 = F_00ab2840((uint)bVar3), uVar4 == 0)) || (*((char *)GEN_TOP((uVar4 + 0xa1))) == '\0')))) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00539080 */
GEN_OWN GEN_FRAME byte F_00539080(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x539080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005390f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005390f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5390f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1;
  F_00aaa5b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,3);
  bVar1 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  if (bVar1 == 0) {
    F_00aa6f20(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0,1);
  }
  else {
    F_00a7ef20(&REFG(undefined1, 0x14ab058) GEN_EDX_ARG,0,1,0);
  }
  bVar1 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  if (bVar1 != 0) {
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,3,1);
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      return 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x34;
    return 0x34;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x32;
  return 0x32;
}

/* ref: FUN_00539180 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00539180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x539180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x70, 0);
  byte bVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  int * this_00;
  int * piVar8;
  undefined1 * puVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar2 = F_00ab28a0(param_1);
  if ((uVar2 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
    pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
    pfVar3 = ((float *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG)));
    pfVar4 = ((float *)GEN_TOP(F_00a5feb0(pvVar7 GEN_EDX_ARG)));
    if ((!((float10)*(float *)&REFG(undefined, 0x109c7d4) <
          (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar4 - (float10)*pfVar3
                                                                ) *
                                                (float10)(float)((float10)*pfVar4 - (float10)*pfVar3
                                                                ) +
                                               (float10)(float)((float10)pfVar4[2] -
                                                               (float10)pfVar3[2]) *
                                               (float10)(float)((float10)pfVar4[2] -
                                                               (float10)pfVar3[2])))))))))) &&
       (bVar1 = F_00a5f230(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG), bVar1 != 0)) {
      piVar5 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
      if ((piVar5 != ((int *)GEN_TOP(0x0))) && (piVar8 != ((int *)GEN_TOP(0x0)))) {
        uVar10 = REFG(undefined4, 0x108cc50);
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar6,uVar10);
        puVar9 = ((undefined1 *)(gen_frame + 0x0));
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x44))))(piVar5 GEN_EDX_ARG)));
        bVar1 = F_00453480(pvVar7 GEN_EDX_ARG,puVar9);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        if (bVar1 != 0) {
          return 0;
        }
        this_00 = ((int *)GEN_TOP(F_00475fa0(param_2,param_3)));
        if ((this_00 == ((int *)GEN_TOP(0x0))) || (this_00 == piVar8)) {
          uVar6 = (uint)*((ushort *)GEN_TOP((uVar2 + 0x24)));
          if (*((ushort *)GEN_TOP((uVar2 + 0x24))) != 0) {
            uVar10 = 0;
            pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
            F_0046ac40(pvVar7 GEN_EDX_ARG,uVar6,piVar8,uVar10);
          }
        }
        else {
          bVar1 = F_00a5f230(this_00 GEN_EDX_ARG);
          if (bVar1 == 0) {
            return 0;
          }
          uVar6 = (uint)*((ushort *)GEN_TOP((uVar2 + 0x22)));
          if (*((ushort *)GEN_TOP((uVar2 + 0x22))) != 0) {
            pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x28))))(piVar5 GEN_EDX_ARG)));
            F_0046ac40(pvVar7 GEN_EDX_ARG,uVar6,piVar8,this_00);
            return 1;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00539330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00539330(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x539330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  undefined * this;
  ushort uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  char local_13;
  
  cVar3 = '\0';
  uVar6 = 0;
  uVar4 = 0xe0000000;
  local_13 = '\0';
  if (param_4 != 0) {
    uVar6 = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
    uVar4 = *((undefined4 *)GEN_TOP((param_4 + 8)));
    cVar3 = *((char *)GEN_TOP((param_4 + 0x10)));
    local_13 = *((char *)GEN_TOP((param_4 + 0x11)));
  }
  uVar7 = (uint)(cVar3 != '\0');
  if (local_13 != '\0') {
    uVar7 = uVar7 | 2;
  }
  if ((param_2 != 0x34) && (param_2 != 0x35)) {
    uVar7 = F_00a512b0(0x3a,uVar4,uVar6,param_2,param_3,uVar7,0);
    *((undefined1 *)GEN_TOP((param_1 + 0x39))) = 1;
    return uVar7;
  }
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 8)));
  uVar1 = F_0054f090(GEN_ARGF(*((float *)GEN_TOP(((int)this + 0xb0)))));
  uVar5 = (uint)uVar1;
  uVar2 = F_00a5feb0(this GEN_EDX_ARG);
  uVar7 = F_00a51360(0x3b,uVar2,param_2,param_3,uVar7,uVar5);
  *((undefined1 *)GEN_TOP((param_1 + 0x39))) = 1;
  return uVar7;
}

/* ref: FUN_005393f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005393f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5393f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 100))) = 0;
  *((undefined1 *)GEN_TOP((in_ecx + 0x60))) = 0;
  return 0;
}

/* ref: FUN_00539410 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00539410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x539410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x18))) == 0) &&
     (uVar2 = F_00aa0580(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,0), param_1 != uVar2)) {
    bVar3 = param_2 == 0;
  }
  else {
    uVar2 = (uint)*((byte *)GEN_TOP((param_3 + 6)));
    if (uVar2 != 0) {
      if (*((uint *)GEN_TOP(((int)this + 0x14))) == uVar2) {
        return;
      }
      *((uint *)GEN_TOP(((int)this + 0x14))) = uVar2;
      return;
    }
    if (param_2 != 0) {
      return;
    }
    bVar1 = F_00a9fc40(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
    bVar3 = bVar1 == 0;
  }
  if (bVar3) {
    *((undefined1 *)GEN_TOP(((int)this + 0x60))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  return;
}

/* ref: FUN_00539490 */
GEN_OWN GEN_FRAME byte F_00539490(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x539490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((param_1 != 0) && ((param_1 < 0xb || (0xc < param_1)))) &&
     ((param_1 < 0xd || (0xe < param_1)))) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 2: ;
    case 5: ;
    case 8: ;
    case 0xb: ;
    case 0xd: ;
      break;
    default: ;
      switch((unsigned int)(uintptr_t)(param_1)) {
      case 3: ;
      case 6: ;
      case 9: ;
      case 0xc: ;
      case 0xe: ;
        break;
      default: ;
        if (param_1 != 0xf) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00539510 */
GEN_OWN GEN_FRAME byte F_00539510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x539510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((param_1 != 0) && ((param_1 < 0xb || (0xc < param_1)))) &&
     ((param_1 < 0xd || (0xe < param_1)))) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 2: ;
    case 5: ;
    case 8: ;
    case 0xb: ;
    case 0xd: ;
switchD_0053953d_caseD_2: ;
      return 1;
    default: ;
      switch((unsigned int)(uintptr_t)(param_1)) {
      case 3: ;
      case 6: ;
      case 9: ;
      case 0xc: ;
      case 0xe: ;
        goto switchD_0053953d_caseD_2;
      default: ;
        break;
      }
    }
  }
  return 0;
}

/* ref: FUN_00539590 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00539590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x539590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  bool bVar2;
  bool bVar3;
  
  if ((*((char *)GEN_TOP((in_ecx + 0x5c))) == '\0') ||
     (fVar1 = *((float *)GEN_TOP((in_ecx + 0x220))),
     (GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) !=
     ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar1 == REFG(float, 0x1090708)))) {
    return;
  }
  bVar2 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar3 = fVar1 == *(float *)&REFG(undefined, 0x1088114);
  *((float *)GEN_TOP((in_ecx + 0x160))) = *((float *)GEN_TOP((in_ecx + 0x15c)));
  if (((GEN_ISNAN(fVar1) || bVar2) == ((GEN_ISNAN(fVar1) || bVar2) || bVar3)) &&
     (fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) / (float10)fVar1)))
                     + (float10)*((float *)GEN_TOP((in_ecx + 0x15c)))))), !((float10)1 < (float10)fVar1))) {
    *((float *)GEN_TOP((in_ecx + 0x15c))) = fVar1;
    return;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x15c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((in_ecx + 0x15c))), REFG(float, 0x1087f04));
  return;
}

/* ref: FUN_00539630 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00539630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x539630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  bool bVar2;
  bool bVar3;
  
  if ((*((char *)GEN_TOP((in_ecx + 0x5d))) == '\0') ||
     (fVar1 = *((float *)GEN_TOP((in_ecx + 0x224))),
     (GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) !=
     ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar1 == REFG(float, 0x1090708)))) {
    return;
  }
  bVar2 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar3 = fVar1 == *(float *)&REFG(undefined, 0x1088114);
  *((float *)GEN_TOP((in_ecx + 0x210))) = *((float *)GEN_TOP((in_ecx + 0x20c)));
  if (((GEN_ISNAN(fVar1) || bVar2) == ((GEN_ISNAN(fVar1) || bVar2) || bVar3)) &&
     (fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) / (float10)fVar1)))
                     + (float10)*((float *)GEN_TOP((in_ecx + 0x20c)))))), !((float10)1 < (float10)fVar1))) {
    *((float *)GEN_TOP((in_ecx + 0x20c))) = fVar1;
    return;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x20c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((in_ecx + 0x20c))), REFG(float, 0x1087f04));
  return;
}

/* ref: FUN_005397f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005397f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5397f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x74)));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x78)));
  if ((*((int *)GEN_TOP(((int)this + 0x20))) == 1) || (*((int *)GEN_TOP(((int)this + 0x20))) == 4)) {
    puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    F_004f03f0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD);
    F_004eea10(param_1 GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)param_1;
}

/* ref: FUN_00539920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00539920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x539920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  *((int *)GEN_TOP(((int)this + 0x58))) = param_1;
  uVar1 = param_1 - 1;
  if (uVar1 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x22c))) = 1;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
    pvVar2 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 0x10))) GEN_EDX_FWD)));
    if ((pvVar2 == ((undefined *)GEN_TOP(0x0))) || (uVar1 = F_00688eb0(pvVar2 GEN_EDX_ARG,uVar3), (char)uVar1 == '\0')) {
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
      pvVar2 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 0x10))) GEN_EDX_ARG)));
      uVar1 = F_00688e90(pvVar2 GEN_EDX_ARG,uVar3);
    }
  }
  return uVar1;
}

/* ref: FUN_00539980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00539980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x539980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0xc0, 0);
  float fVar1;
  float fVar2;
  undefined * this_00;
  uint uVar3;
  float10 fVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  puVar5 = ((undefined1 *)(gen_frame + 0x20));
  this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 0x10))) GEN_EDX_FWD)));
  F_00689090(this_00 GEN_EDX_ARG,puVar5,uVar6);
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c60)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c64)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c68)));
  F_004eea10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x20)));
  F_00535740(&(*(undefined4 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP((param_1 + 8)))),(float)(float10)0);
  fVar1 = *((float *)GEN_TOP((param_1 + 4)));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar4 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  ((float *)(gen_frame + 0x60))[0] = fVar1;
  ((float *)(gen_frame + 0x60))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  ((float *)(gen_frame + 0x60))[2] = ((float)GEN_TOF(-(float10)fVar2));
  (*(undefined4 *)(gen_frame + 0x74)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(float *)(gen_frame + 0x80)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(float *)(gen_frame + 0x88)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  F_004eea10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x60)));
  F_004f03f0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  F_004eea10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x20)));
  uVar3 = F_00535480(&(*(undefined4 *)(gen_frame + 0x0)),param_2 + 4,param_2 + 8);
  return uVar3;
}

/* ref: FUN_00539b40 */
GEN_OWN GEN_FRAME float GEN_STDCALL F_00539b40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x539b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) *
                          (float10)*(float *)&REFG(undefined, 0x1375b88)))));
  if ((float10)REFG(float, 0x1375b8c) < fVar1) {
    fVar1 = (float10)REFG(float, 0x1375b8c);
  }
  return (float)fVar1;
}

/* ref: FUN_00539b80 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00539b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x539b80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float10 fVar2;
  float local_8;
  
  if (*((char *)GEN_TOP((in_ecx + 0x22f))) == '\0') {
    local_8 = REFG(float, 0x109c7fc);
    fVar1 = *((float *)GEN_TOP((in_ecx + 0x228)));
    if (((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) !=
         ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar1 == REFG(float, 0x1090708))) &&
       (fVar1 = local_8, param_2 != 0.0)) {
      fVar2 = (float10)*(float *)&REFG(undefined, 0x1305c50);
      if (fVar2 < (float10)((float)GEN_TOF(ABS((float10)*((float *)(uintptr_t)gen_fl2bits((float)(param_2))))))) {
        fVar2 = GEN_X87((float10)((float)GEN_TOF(((float10)(float)((float10)((float)GEN_TOF(ABS((float10)*((float *)(uintptr_t)gen_fl2bits((float)(param_2)))))) -
                                                 fVar2) / fVar2))));
        fVar1 = ((float)GEN_TOF((fVar2 * (float10)*(double *)&REFG(undefined, 0x1090b18) +
                       ((float10)1 - fVar2) * (float10)*(double *)&REFG(undefined, 0x10920a8))));
      }
    }
    local_8 = fVar1;
    fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x50))) + 0x10))) + 0xc0)));
    param_2 = REFG(float, 0x1087f04);
    if (REFG(float, 0x1087f04) < fVar1) {
      param_2 = fVar1;
    }
    return GEN_X87((float10)(float)((float10)param_2 * (float10)local_8));
  }
  return (float10)0;
}

/* ref: FUN_00539c40 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00539c40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x539c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = F_00539b80(param_1 GEN_EDX_FWD,GEN_ARGF(gen_bits2f(param_2)));
  fVar3 = (float10)(float)fVar2;
  fVar2 = (float10)0;
  if ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    return fVar2;
  }
  fVar1 = *((float *)GEN_TOP((param_1 + 0xcc)));
  if (((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) &&
     (fVar1 < REFG(float, 0x1087f04))) {
    fVar3 = GEN_X87((float10)((float)GEN_TOF((((float10)1 - (float10)fVar1) * (float10)*(double *)&REFG(undefined, 0x1094788) +
                            (float10)fVar1 * fVar3))));
  }
  return fVar3;
}

/* ref: FUN_00539cc0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00539cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x539cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  
  if (*((char *)GEN_TOP((in_ecx + 0x22f))) != '\0') {
    return (float10)0;
  }
  local_c = REFG(float, 0x109c7fc);
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x228)));
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar1 == REFG(float, 0x1090708))) {
    local_c = fVar1;
  }
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x50))) + 0x10))) + 0xc0)));
  local_8 = REFG(float, 0x1087f04);
  if (REFG(float, 0x1087f04) < fVar1) {
    local_8 = fVar1;
  }
  fVar2 = (float10)local_c;
  local_c = REFG(float, 0x1087f04);
  if (REFG(float, 0x1087f04) < fVar1) {
    local_c = fVar1;
  }
  return GEN_X87((float10)((float)GEN_TOF(((float10)local_c * (float10)(float)((float10)local_8 * fVar2)))));
}

/* ref: FUN_00539d50 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00539d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x539d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_10;
  float local_c;
  float local_8;
  
  if (*((char *)GEN_TOP((in_ecx + 0x22f))) == '\0') {
    local_10 = REFG(float, 0x109c7fc);
    fVar1 = *((float *)GEN_TOP((in_ecx + 0x228)));
    local_8 = REFG(float, 0x109c7d0);
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar1 == REFG(float, 0x1090708))) {
      local_10 = fVar1;
    }
    fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x50))) + 0x10))) + 0xc0)));
    local_c = REFG(float, 0x1087f04);
    if (REFG(float, 0x1087f04) < fVar1) {
      local_c = fVar1;
    }
    fVar3 = GEN_X87((float10)(float)((float10)local_c * (float10)local_10));
    fVar4 = (float10)*(double *)&REFG(undefined, 0x1094810);
    fVar2 = (float)((float10)local_c * (float10)local_10);
    if (((!(fVar3 < fVar4)) &&
        (fVar3 = fVar3 * (float10)REFG(double, 0x1088108), fVar2 = local_8, fVar4 < fVar3)) &&
       (fVar2 = (float)fVar3, (float10)fVar2 < fVar4)) {
      fVar2 = local_8;
    }
    local_8 = fVar2;
    local_10 = REFG(float, 0x1087f04);
    if (REFG(float, 0x1087f04) < fVar1) {
      local_10 = fVar1;
    }
    return GEN_X87((float10)(float)((float10)local_10 * (float10)local_8));
  }
  return (float10)0;
}

/* ref: FUN_00539e30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00539e30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x539e30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  undefined4 uVar2;
  undefined4 in_EAX = 0;
  undefined * pvVar3;
  uint extraout_EAX = 0;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar8 = (float10)param_2;
  fVar9 = (float10)*((float *)GEN_TOP((param_1 + 0xbc)));
  bVar6 = GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8);
  bVar7 = bVar6 || fVar9 == fVar8;
  if (bVar6 != bVar7) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),
                    CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar8 <= fVar9),(char)in_EAX));
  }
  uVar5 = *((uint *)GEN_TOP((param_1 + 0x50)));
  *((float *)GEN_TOP((param_1 + 0xbc))) = param_2;
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  if (*((undefined * PTR32 *)GEN_TOP((uVar5 + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP((uVar5 + 0x10))) GEN_EDX_FWD)));
    uVar5 = 0;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      param_2 = F_00688f30(pvVar3 GEN_EDX_ARG,uVar2);
      uVar5 = extraout_EAX;
      goto LAB_00539e83;
    }
  }
  param_2 = 0.0;
LAB_00539e83: ;
  fVar1 = *((float *)GEN_TOP((param_1 + 0xbc)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  pvVar3 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x50))) + 0x10)));
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00a5f500(pvVar3 GEN_EDX_ARG);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = F_00688f10(uVar4 GEN_EDX_ARG,(float)((float10)fVar1 * (float10)param_2),uVar2);
    }
  }
  return uVar5;
}

/* ref: FUN_00539ed0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00539ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x539ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x220))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((in_ecx + 0x220))), REFG(float, 0x1090708));
  *((undefined1 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x160))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x164))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x168))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x170))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x174))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x178))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x17c))) = 0;
  return 0;
}

/* ref: FUN_00539f30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00539f30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x539f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x5d))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x20c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x210))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x214))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x218))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x21c))) = 0;
  return 0;
}

/* ref: FUN_00539f60 */
GEN_OWN GEN_FRAME float10 GEN_STDCALL F_00539f60(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x539f60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = F_00aed220((float)((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1080228)));
  return fVar1;
}

/* ref: FUN_00539f90 */
GEN_OWN GEN_FRAME float10 GEN_STDCALL F_00539f90(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x539f90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = F_00aed220((float)((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1080228)));
  return fVar1;
}

/* ref: FUN_00539fc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00539fc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x539fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00535480(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00539fe0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00539fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x539fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 0x10)));
  if (((pvVar3 != ((undefined *)GEN_TOP(0x0))) && (piVar1 = ((int *)GEN_TOP(F_00a5f290(pvVar3 GEN_EDX_FWD))), piVar1 != ((int *)GEN_TOP(0x0)))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG), uVar2 == 3)) {
    return 1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x20))) == 1) {
    if (((*((int *)GEN_TOP(((int)this + 0x28))) != -0x20000000) &&
        (pvVar3 = ((undefined *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x28))),
                                       *((undefined4 *)GEN_TOP(((int)this + 0x2c)))))), pvVar3 != ((undefined *)GEN_TOP(0x0))))
       && ((piVar1 = ((int *)GEN_TOP(F_00a5f290(pvVar3 GEN_EDX_ARG))), piVar1 != ((int *)GEN_TOP(0x0)) &&
           (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG), uVar2 == 3)))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0053a0f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053a0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53a0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x60, 0);
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  *((undefined1 *)GEN_TOP(((int)this + 0x2f1))) = 1;
  pvVar1 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 0x10))) GEN_EDX_FWD)));
  F_006890d0(pvVar1 GEN_EDX_ARG,puVar4,uVar6);
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar6 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  pvVar1 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 0x10))) GEN_EDX_ARG)));
  uVar2 = F_00689090(pvVar1 GEN_EDX_ARG,puVar4,uVar6);
  puVar4 = ((undefined4 *)(gen_frame + 0x0));
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x280)));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return uVar2;
}

/* ref: FUN_0053a190 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053a190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53a190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0xd0, 0);
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  fVar1 = *((float *)GEN_TOP((param_1 + 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c60)));
  (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP((param_1 + 8)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c64)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c68)));
  F_00535740(&(*(undefined4 *)(gen_frame + 0x0)),fVar1,(float)(float10)0);
  fVar1 = *((float *)GEN_TOP((param_1 + 4)));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  (*(int *)(gen_frame + 0x1c)) = param_1 + 4;
  fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar7;
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  fVar1 = (float)fVar7;
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  ((float *)(gen_frame + 0x70))[0] = fVar1;
  ((float *)(gen_frame + 0x70))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  ((float *)(gen_frame + 0x70))[2] = ((float)GEN_TOF(-(float10)fVar2));
  (*(undefined4 *)(gen_frame + 0x84)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(float *)(gen_frame + 0x90)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(float *)(gen_frame + 0x98)) = fVar1;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  F_004eea10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x70)));
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
  puVar6 = ((undefined4 *)(gen_frame + 0x30));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  F_004eea10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x30)));
  uVar3 = F_00535480(&(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x1c)),(*(float * PTR32 *)(gen_frame + 0x24)));
  return uVar3;
}

/* ref: FUN_0053a330 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053a330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53a330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0xd0, 0);
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  fVar1 = *((float *)GEN_TOP((param_1 + 8)));
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c60)));
  (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP((param_1 + 8)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c64)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c68)));
  F_00535740(&(*(undefined4 *)(gen_frame + 0x0)),fVar1,(float)(float10)0);
  fVar1 = *((float *)GEN_TOP((param_1 + 4)));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  (*(int *)(gen_frame + 0x1c)) = param_1 + 4;
  fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar7;
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  fVar1 = (float)fVar7;
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  ((float *)(gen_frame + 0x70))[0] = fVar1;
  ((float *)(gen_frame + 0x70))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  ((float *)(gen_frame + 0x70))[2] = ((float)GEN_TOF(-(float10)fVar2));
  (*(undefined4 *)(gen_frame + 0x84)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(float *)(gen_frame + 0x90)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(float *)(gen_frame + 0x98)) = fVar1;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  F_004eea10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x70)));
  puVar5 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
  puVar6 = ((undefined4 *)(gen_frame + 0x30));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  F_004f03f0(((undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  F_004eea10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x30)));
  uVar3 = F_00535480(&(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x1c)),(*(float * PTR32 *)(gen_frame + 0x24)));
  return uVar3;
}

/* ref: FUN_0053a4e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053a4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53a4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x924)));
  if (uVar1 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
      if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 0x65))) == '\x03')) {
        uVar1 = F_00688e80(uVar1 GEN_EDX_ARG);
        *((uint *)GEN_TOP(((int)this + 0x924))) = uVar1;
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0053a520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053a520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53a520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_005351c0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_0053a540 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_0053a540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53a540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  
  F_005351c0(this GEN_EDX_FWD,((float *)(gen_frame + 0x0)),param_1);
  return ((float *)(gen_frame + 0x0))[0];
}

/* ref: FUN_0053a580 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_0053a580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53a580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  
  F_005351c0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1);
  return (*(float *)(gen_frame + 0x4));
}

/* ref: FUN_0053a5c0 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_0053a5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53a5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  
  F_005351c0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1);
  return (*(float *)(gen_frame + 0x8));
}

/* ref: FUN_0053a600 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_0053a600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53a600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  
  F_005351c0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1);
  return (*(float *)(gen_frame + 0xc));
}

/* ref: FUN_0053a640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053a640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53a640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) &&
     (uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD), uVar1 != 0)) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x924)));
    if (uVar2 == 0xffffffff) {
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      uVar2 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      if (uVar2 == 0) {
        return 0;
      }
      if (*((char *)GEN_TOP((uVar2 + 0x65))) != '\x03') {
        return 0;
      }
      uVar2 = F_00688e80(uVar2 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x924))) = uVar2;
    }
    if (param_1 < uVar2) {
      uVar1 = F_006891a0(uVar1 GEN_EDX_ARG,param_1);
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_0053a6b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053a6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x53a6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x28, 8);
  int * this_00;
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  float fVar5;
  uint * puVar6;
  uint uVar7;
  float10 fVar8;
  
  uVar7 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(byte *)(gen_frame + 0x22)) = (byte)param_2;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x13796f0);
  (*(byte *)(gen_frame + 0x23)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = ((uint *)GEN_TOP(0x0));
  (*(uint * PTR32 *)(gen_frame + 0x14)) = ((uint *)GEN_TOP(0x0));
  (*(float *)(gen_frame + 0x18)) = 0.0;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = ((uint *)GEN_TOP(0x0));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a5f290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  }
  do {
    puVar3 = ((uint *)GEN_TOP(F_00aa0680(uVar2 GEN_EDX_ARG,uVar7,1)));
    if ((puVar3 != ((uint *)GEN_TOP(0x0))) &&
       (bVar1 = F_00535860((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1,(uint)(byte)puVar3[2]), bVar1 != 0)) {
      (*(byte *)(gen_frame + 0x23)) = 1;
      fVar5 = gen_bits2f(F_00aa0210(uVar2 GEN_EDX_ARG,uVar7,1));
      (*(float *)(gen_frame + 0x18)) = fVar5;
      puVar6 = ((uint *)GEN_TOP(F_00aa0290(uVar2 GEN_EDX_ARG,uVar7,1)));
      (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar6;
      (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar3;
      puVar3 = ((uint *)GEN_TOP(F_00ab2a20(puVar6)));
      (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xe);
  bVar1 = (*(byte *)(gen_frame + 0x22));
  if ((byte)param_2 != (*(byte *)(gen_frame + 0x23))) {
    if ((*(byte *)(gen_frame + 0x23)) == 0) {
      uVar7 = 0;
      do {
        uVar4 = F_00aa0290(uVar2 GEN_EDX_ARG,uVar7,1);
        puVar3 = ((uint *)GEN_TOP(F_00ab2a20(uVar4)));
        if ((puVar3 != ((uint *)GEN_TOP(0x0))) &&
           (bVar1 = F_00535860((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1,(uint)(byte)puVar3[2]), bVar1 != 0)) {
          fVar5 = gen_bits2f(F_00aa0210(uVar2 GEN_EDX_ARG,uVar7,1));
          (*(float *)(gen_frame + 0x18)) = fVar5;
          puVar6 = ((uint *)GEN_TOP(F_00aa0290(uVar2 GEN_EDX_ARG,uVar7,1)));
          (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar6;
          puVar6 = ((uint *)GEN_TOP(F_00aa0680(uVar2 GEN_EDX_ARG,uVar7,1)));
          (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar6;
          (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0xe);
    }
    uVar7 = 0;
    if ((*(uint * PTR32 *)(gen_frame + 0x1c)) != ((uint *)GEN_TOP(0x0))) {
      (*(int *)(gen_frame + 0x0)) = (*(*(uint * PTR32 *)(gen_frame + 0x1c)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x1c));
      (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x18));
      uVar7 = F_00b5a860(&(*(int *)(gen_frame + 0x0)));
    }
    uVar2 = 0;
    if ((*(uint * PTR32 *)(gen_frame + 0x14)) != ((uint *)GEN_TOP(0x0))) {
      (*(int *)(gen_frame + 0x10)) = (*(*(uint * PTR32 *)(gen_frame + 0x14)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x14));
      (*(uint * PTR32 *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0xc));
      uVar2 = F_00b5a860(&(*(int *)(gen_frame + 0x10)));
    }
    this_00 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10)));
    if (this_00 == ((int *)GEN_TOP(0x0))) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xb8))))(this_00 GEN_EDX_ARG);
      if ((char)uVar4 == '\0') {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = F_00a5f290(this_00 GEN_EDX_ARG);
        uVar4 = (uint)*((byte *)GEN_TOP((uVar4 + 0x2eaa)));
      }
    }
    uVar7 = F_00a09f70(uVar2,uVar7,uVar4);
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    fVar8 = (float10)(int)uVar7;
    if ((int)uVar7 < 0) {
      fVar8 = GEN_X87(fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    (*(float *)(gen_frame + 0x4)) = (float)(fVar8 * (float10)*(double *)&REFG(undefined, 0x109ca68));
    bVar1 = (*(byte *)(gen_frame + 0x23));
  }
  if (param_3 != ((float *)GEN_TOP(0x0))) {
    *param_3 = (*(float *)(gen_frame + 0x4));
  }
  return bVar1;
}

/* ref: FUN_0053a8a0 */
GEN_OWN GEN_NOFRAME byte F_0053a8a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x53a8a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a5f290(param_1 GEN_EDX_ARG);
    iVar2 = *((int *)GEN_TOP((uVar1 + 0xec)));
    if (iVar2 != 0) {
      if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x78))) == ((undefined *)GEN_TOP(0x0))) {
        uVar1 = 0xffff;
      }
      else {
        uVar1 = F_00623160(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x78))) GEN_EDX_ARG,param_2);
        uVar1 = uVar1 & 0xffff;
      }
      if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x78))) == ((undefined *)GEN_TOP(0x0))) {
        puVar3 = &REFG(float, 0x1302d00);
        puVar4 = ((undefined4 *)(gen_frame + 0x0));
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar3 = ((undefined4 *)(gen_frame + 0x0));
        puVar4 = param_3;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        return 1;
      }
      F_0064ce50(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x78))) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)),uVar1);
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      puVar4 = param_3;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0053ac00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053ac00(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x53ac00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  float * pfVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x924)));
  if (uVar1 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
      return 0xffffffff;
    }
    uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD);
    if (uVar1 == 0) {
      return 0;
    }
    if (*((char *)GEN_TOP((uVar1 + 0x65))) != '\x03') {
      return uVar1;
    }
    uVar1 = F_00688e80(uVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP((param_1 + 0x924))) = uVar1;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_3;
    uVar6 = param_3;
    if (param_3 == 0xffffffff) {
      uVar2 = 0;
      uVar6 = uVar1 - 1;
    }
    if ((int)uVar2 <= (int)uVar6) {
      fVar9 = (float10)param_2;
      uVar1 = uVar2;
      if (3 < (int)((uVar6 - uVar2) + 1)) {
        puVar3 = ((uint *)GEN_TOP((uVar2 * 0x300 + 0x550 + param_1)));
        iVar5 = ((uVar6 - uVar2) - 3 >> 2) + 1;
        uVar1 = uVar2 + iVar5 * 4;
        do {
          bVar7 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(puVar3[-0xc2])))) || GEN_ISNAN(fVar9);
          if (bVar7 == (bVar7 || ((float10)GEN_TOD(gen_bits2f(puVar3[-0xc2]))) == fVar9)) {
            puVar3[-0xc2] = (uint)gen_fl2bits(param_2);
            puVar3[-0xc0] = puVar3[-0xc0] | 1;
          }
          bVar7 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(puVar3[-2])))) || GEN_ISNAN(fVar9);
          if (bVar7 == (bVar7 || ((float10)GEN_TOD(gen_bits2f(puVar3[-2]))) == fVar9)) {
            puVar3[-2] = (uint)gen_fl2bits(param_2);
            *puVar3 = *puVar3 | 1;
          }
          bVar7 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(puVar3[0xbe])))) || GEN_ISNAN(fVar9);
          if (bVar7 == (bVar7 || ((float10)GEN_TOD(gen_bits2f(puVar3[0xbe]))) == fVar9)) {
            puVar3[0xbe] = (uint)gen_fl2bits(param_2);
            puVar3[0xc0] = puVar3[0xc0] | 1;
          }
          fVar10 = ((float10)GEN_TOD(gen_bits2f(puVar3[0x17e])));
          bVar7 = GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9);
          bVar8 = bVar7 || fVar10 == fVar9;
          uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                           CONCAT11(bVar8 << 6 | bVar7 << 2 | 2U | !(fVar9 <= fVar10),(char)uVar2));
          if (bVar7 == bVar8) {
            puVar3[0x17e] = (uint)gen_fl2bits(param_2);
            puVar3[0x180] = puVar3[0x180] | 1;
          }
          puVar3 = puVar3 + 0x300;
          iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
      }
      if ((int)uVar1 <= (int)uVar6) {
        pfVar4 = ((float *)GEN_TOP((uVar1 * 0x300 + 0x248 + param_1)));
        iVar5 = (uVar6 - uVar1) + 1;
        do {
          fVar10 = (float10)*pfVar4;
          bVar7 = GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9);
          bVar8 = bVar7 || fVar10 == fVar9;
          param_1 = CONCAT22((short)(param_1 >> 0x10),
                             CONCAT11(bVar8 << 6 | bVar7 << 2 | 2U | !(fVar9 <= fVar10),
                                      (char)param_1));
          if (bVar7 == bVar8) {
            *pfVar4 = param_2;
            pfVar4[2] = gen_bits2f((uint)gen_fl2bits(pfVar4[2]) | 1);
          }
          pfVar4 = pfVar4 + 0xc0;
          iVar5 = iVar5 - 1;
          uVar2 = param_1;
        } while (iVar5 != 0);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0053ad80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053ad80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53ad80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x924)));
  if (uVar1 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (uVar1 == 0) {
      return 0;
    }
    if (*((char *)GEN_TOP((uVar1 + 0x65))) != '\x03') {
      return 0;
    }
    uVar1 = F_00688e80(uVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x924))) = uVar1;
  }
  if (uVar1 != 0) {
    if (param_1 != -1) {
      return *((int *)GEN_TOP((param_1 * 0x300 + 0x78 + (int)this))) != 0;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar3 = ((int *)GEN_TOP(((int)this + 0x78)));
      do {
        if (*piVar3 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 0xc0;
      } while (uVar2 < uVar1);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0053ae10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053ae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53ae10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x924)));
  if (uVar1 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (uVar1 == 0) {
      return 0;
    }
    if (*((char *)GEN_TOP((uVar1 + 0x65))) != '\x03') {
      return 0;
    }
    uVar1 = F_00688e80(uVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x924))) = uVar1;
  }
  if (uVar1 != 0) {
    if (param_1 == -1) {
      uVar3 = 0;
      if (uVar1 != 0) {
        piVar2 = ((int *)GEN_TOP(((int)this + 0x78)));
        while (((char)piVar2[0x1b] != '\0' || (*piVar2 != 1))) {
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 0xc0;
          if (uVar1 <= uVar3) {
            return 0;
          }
        }
        return 1;
      }
    }
    else if (*((char *)GEN_TOP((param_1 * 0x300 + 0xe4 + (int)this))) == '\0') {
      return *((int *)GEN_TOP(((int)this + param_1 * 0x300 + 0x78))) == 1;
    }
  }
  return 0;
}

/* ref: FUN_0053aeb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053aeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53aeb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x924)));
  if (uVar1 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (uVar1 == 0) {
      return 0;
    }
    if (*((char *)GEN_TOP((uVar1 + 0x65))) != '\x03') {
      return 0;
    }
    uVar1 = F_00688e80(uVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x924))) = uVar1;
  }
  if (uVar1 != 0) {
    if (param_1 != -1) {
      return *((int *)GEN_TOP((param_1 * 0x300 + 0x78 + (int)this))) == 2;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar3 = ((int *)GEN_TOP(((int)this + 0x78)));
      do {
        if (*piVar3 == 2) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 0xc0;
      } while (uVar2 < uVar1);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0053af40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053af40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53af40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x924)));
  if (uVar2 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar2 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (uVar2 == 0) {
      return 0;
    }
    if (*((char *)GEN_TOP((uVar2 + 0x65))) != '\x03') {
      return 0;
    }
    uVar2 = F_00688e80(uVar2 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x924))) = uVar2;
  }
  if (uVar2 == 0) {
    return 0;
  }
  if (param_1 == -1) {
    uVar4 = 0;
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(((int)this + 0x78)));
      do {
        if (*piVar3 != 0) {
          if (*piVar3 != 2) {
            return 0;
          }
          if (*((char *)GEN_TOP(((int)piVar3 + 5))) != '\0') {
            return 0;
          }
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 0xc0;
      } while (uVar4 < uVar2);
    }
  }
  else {
    iVar1 = *((int *)GEN_TOP((param_1 * 0x300 + 0x78 + (int)this)));
    if (iVar1 != 0) {
      if (iVar1 != 2) {
        return 0;
      }
      if (*((char *)GEN_TOP(((int)this + param_1 * 0x300 + 0x7d))) != '\0') {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_0053afe0 */
GEN_OWN GEN_FRAME float10 F_0053afe0(unsigned int gen_a0)
{
  GEN_ENTER(0x53afe0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  if ((*(uint *)&gen_args[0]) == 0) {
    return (float10)0;
  }
  uVar2 = F_00a5f500(((undefined *)GEN_TOP((*(uint *)&gen_args[0]))) GEN_EDX_ARG);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 200))) != 0)) {
    F_00a1e160(&(*(uint *)&gen_args[0]),uVar2 + 0x40);
    return ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0]))));
  }
  return (float10)*((float *)GEN_TOP((uVar1 + 0xb0)));
}

/* ref: FUN_0053b1b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053b1b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x53b1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  iVar1 = param_3 * 0x300 + 0x20 + param_1;
  *param_2 = *((undefined4 *)GEN_TOP((param_3 * 0x300 + 0x90 + param_1)));
  param_2[1] = *((undefined4 *)GEN_TOP((iVar1 + 0x74)));
  param_2[2] = *((undefined4 *)GEN_TOP((iVar1 + 0x78)));
  iVar2 = *((int *)GEN_TOP((iVar1 + 0x20)));
  if (param_4 == '\0') {
    if (iVar2 == 1) {
      return (uint)param_2;
    }
    if (iVar2 == 4) {
      return (uint)param_2;
    }
    puVar3 = ((undefined4 *)GEN_TOP((iVar1 + 0x240)));
    puVar4 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
  }
  else {
    if ((iVar2 != 1) && (iVar2 != 4)) {
      return (uint)param_2;
    }
    puVar3 = ((undefined4 *)GEN_TOP((iVar1 + 0x240)));
    puVar4 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    F_004f03f0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  }
  F_004eea10(param_2 GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x0)));
  return (uint)param_2;
}

/* ref: FUN_0053b290 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053b290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53b290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x20)));
  iVar2 = 3;
  do {
    uVar1 = F_0054eb10(this_00 GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x300)));
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_0053b2c0 */
GEN_OWN GEN_NOFRAME uint F_0053b2c0(void)
{
  GEN_ENTER(0x53b2c0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a34e80(this GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_0053b2e0 */
GEN_OWN GEN_NOFRAME uint F_0053b2e0(void)
{
  GEN_ENTER(0x53b2e0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a34e80(this GEN_EDX_ARG,1);
  return uVar1;
}

/* ref: FUN_0053b300 */
GEN_OWN GEN_NOFRAME uint F_0053b300(void)
{
  GEN_ENTER(0x53b300u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a34e80(this GEN_EDX_ARG,2);
  return uVar1;
}

/* ref: FUN_0053b320 */
GEN_OWN GEN_FRAME double F_0053b320(void)
{
  GEN_ENTER(0x53b320u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a34e80(this GEN_EDX_ARG,5);
  if (uVar1 != 0) {
    return GEN_X87((double)(float)((float10)(int)uVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  }
  return 0.0;
}

/* ref: FUN_0053b360 */
GEN_OWN GEN_FRAME double F_0053b360(void)
{
  GEN_ENTER(0x53b360u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a34e80(this GEN_EDX_ARG,6);
  if (uVar1 != 0) {
    return GEN_X87((double)(float)((float10)(int)uVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  }
  return 0.0;
}

/* ref: FUN_0053b3a0 */
GEN_OWN GEN_FRAME float F_0053b3a0(void)
{
  GEN_ENTER(0x53b3a0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a34e80(this GEN_EDX_ARG,3);
  if (uVar1 != 0) {
    return GEN_X87((float)((float10)(int)uVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  }
  return (float)(float10)0;
}

/* ref: FUN_0053b3e0 */
GEN_OWN GEN_FRAME float F_0053b3e0(void)
{
  GEN_ENTER(0x53b3e0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  uVar1 = F_00a34e80(this GEN_EDX_ARG,4);
  if (uVar1 != 0) {
    return GEN_X87((float)((float10)(int)uVar1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
  }
  return (float)(float10)0;
}

/* ref: FUN_0053b420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053b420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53b420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  byte bVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  undefined3 extraout_var_08 = 0;
  undefined3 extraout_var_09 = 0;
  undefined3 extraout_var_10 = 0;
  undefined3 extraout_var_11 = 0;
  undefined3 extraout_var_12 = 0;
  undefined3 extraout_var_13 = 0;
  undefined3 extraout_var_14 = 0;
  undefined3 extraout_var_15 = 0;
  undefined3 extraout_var_16 = 0;
  undefined3 extraout_var_17 = 0;
  undefined3 extraout_var_18 = 0;
  undefined3 extraout_var_19 = 0;
  undefined3 extraout_var_20 = 0;
  undefined3 extraout_var_21 = 0;
  undefined3 extraout_var_22 = 0;
  undefined3 extraout_var_23 = 0;
  undefined3 extraout_var_24 = 0;
  undefined3 extraout_var_25 = 0;
  undefined3 extraout_var_26 = 0;
  undefined3 extraout_var_27 = 0;
  undefined3 extraout_var_28 = 0;
  undefined3 extraout_var_29 = 0;
  undefined3 extraout_var_30 = 0;
  undefined3 extraout_var_31 = 0;
  undefined3 extraout_var_32 = 0;
  undefined3 extraout_var_33 = 0;
  undefined3 extraout_var_34 = 0;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var_35 = 0;
  undefined3 extraout_var_36 = 0;
  undefined3 extraout_var_37 = 0;
  undefined3 extraout_var_38 = 0;
  undefined3 extraout_var_39 = 0;
  undefined3 extraout_var_40 = 0;
  undefined3 extraout_var_41 = 0;
  undefined3 extraout_var_42 = 0;
  undefined3 extraout_var_43 = 0;
  undefined3 extraout_var_44 = 0;
  undefined3 extraout_var_45 = 0;
  undefined3 extraout_var_46 = 0;
  undefined3 extraout_var_47 = 0;
  undefined3 extraout_var_48 = 0;
  undefined3 extraout_var_49 = 0;
  undefined3 extraout_var_50 = 0;
  undefined3 extraout_var_51 = 0;
  undefined3 extraout_var_52 = 0;
  undefined3 extraout_var_53 = 0;
  undefined3 extraout_var_54 = 0;
  undefined3 extraout_var_55 = 0;
  undefined3 extraout_var_56 = 0;
  undefined3 extraout_var_57 = 0;
  undefined3 extraout_var_58 = 0;
  
  this_00 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD)));
  pvVar1 = REFG(void * PTR32, 0x137104c);
  if ((int)param_1 < 7) {
    return CONCAT31((int3)(param_1 >> 8),*((undefined1 *)GEN_TOP((param_1 + 8 + (int)this))));
  }
  uVar4 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x21);
    return CONCAT31(extraout_var,bVar2);
  case 9: ;
  case 0x46: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,1);
    return CONCAT31(extraout_var_52,bVar2);
  case 10: ;
  case 0x45: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,2);
    if (bVar2 != 0) {
      return 1;
    }
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,3);
    if (bVar2 != 0) {
      return 1;
    }
    return 0;
  case 0xe: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,7);
    return CONCAT31(extraout_var_22,bVar2);
  case 0xf: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,8);
    return CONCAT31(extraout_var_23,bVar2);
  case 0x10: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x13f);
    return CONCAT31(extraout_var_24,bVar2);
  case 0x11: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x140);
    return CONCAT31(extraout_var_25,bVar2);
  case 0x12: ;
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    uVar4 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG);
      bVar2 = F_004760f0(uVar4 GEN_EDX_ARG);
      uVar4 = CONCAT31(extraout_var_26,bVar2);
      if (bVar2 == 0) {
        bVar2 = F_00a34870(this_00 GEN_EDX_ARG,7);
        return CONCAT31(extraout_var_27,bVar2);
      }
    }
    break;
  case 0x13: ;
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    uVar4 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG);
      bVar2 = F_004760f0(uVar4 GEN_EDX_ARG);
      uVar4 = CONCAT31(extraout_var_28,bVar2);
      if (bVar2 == 0) {
        bVar2 = F_00a34870(this_00 GEN_EDX_ARG,8);
        return CONCAT31(extraout_var_29,bVar2);
      }
    }
    break;
  case 0x14: ;
  case 0x15: ;
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG);
      if ((pvVar1 != ((undefined *)GEN_TOP(0x0))) && ((*((byte *)GEN_TOP((uVar4 + 0x2c24c))) & 0x3c) != 0)) {
        bVar2 = F_00a34b70(this_00 GEN_EDX_ARG,(-(uint)(param_1 == 0x15) & 0x73) + 0xbc);
        return CONCAT31(extraout_var_30,bVar2);
      }
      bVar2 = F_004760f0(uVar4 GEN_EDX_ARG);
      if (bVar2 == 0) {
        if (param_1 != 0x15) {
          bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x13f);
          return CONCAT31(extraout_var_32,bVar2);
        }
        bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x140);
        return CONCAT31(extraout_var_31,bVar2);
      }
    }
  case 0x39: ;
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    uVar4 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG);
      bVar2 = F_004760f0(uVar4 GEN_EDX_ARG);
      uVar4 = CONCAT31(extraout_var_33,bVar2);
      if (bVar2 == 0) {
        bVar2 = F_00a34870(this_00 GEN_EDX_ARG,9);
        return CONCAT31(extraout_var_34,bVar2);
      }
    }
    break;
  case 0x16: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x120);
    return CONCAT31(extraout_var_05,bVar2);
  case 0x17: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x127);
    return CONCAT31(extraout_var_06,bVar2);
  case 0x18: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x128);
    return CONCAT31(extraout_var_07,bVar2);
  case 0x19: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x123);
    return CONCAT31(extraout_var_01,bVar2);
  case 0x1a: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x122);
    return CONCAT31(extraout_var_02,bVar2);
  case 0x1b: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x121);
    return CONCAT31(extraout_var_00,bVar2);
  case 0x1c: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x124);
    return CONCAT31(extraout_var_16,bVar2);
  case 0x1d: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x125);
    return CONCAT31(extraout_var_17,bVar2);
  case 0x1e: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x119);
    return CONCAT31(extraout_var_08,bVar2);
  case 0x1f: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x11a);
    return CONCAT31(extraout_var_09,bVar2);
  case 0x20: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x11b);
    return CONCAT31(extraout_var_10,bVar2);
  case 0x21: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x11c);
    return CONCAT31(extraout_var_11,bVar2);
  case 0x22: ;
    bVar2 = F_00431ca0(this_00 GEN_EDX_ARG);
    return CONCAT31(extraout_var_12,bVar2);
  case 0x23: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x11d);
    return CONCAT31(extraout_var_03,bVar2);
  case 0x24: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x11e);
    return CONCAT31(extraout_var_04,bVar2);
  case 0x25: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x11f);
    return CONCAT31(extraout_var_13,bVar2);
  case 0x26: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x11f);
    return CONCAT31(extraout_var_14,bVar2);
  case 0x27: ;
    bVar2 = F_00a34de0(this_00 GEN_EDX_ARG,0x11f);
    return CONCAT31(extraout_var_15,bVar2);
  case 0x28: ;
    bVar2 = F_00a34c40(this_00 GEN_EDX_ARG,0x126);
    if (((bVar2 == 0) && (bVar2 = F_00a34c40(this_00 GEN_EDX_ARG,0x160), bVar2 == 0)) &&
       (bVar2 = F_00a34c40(this_00 GEN_EDX_ARG,0x15f), bVar2 == 0)) {
      return 0;
    }
    return 1;
  case 0x2a: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x14b);
    return CONCAT31(extraout_var_38,bVar2);
  case 0x2b: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x14c);
    return CONCAT31(extraout_var_39,bVar2);
  case 0x2c: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x14d);
    return CONCAT31(extraout_var_40,bVar2);
  case 0x2d: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x14e);
    return CONCAT31(extraout_var_41,bVar2);
  case 0x2e: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x14f);
    return CONCAT31(extraout_var_42,bVar2);
  case 0x2f: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x150);
    return CONCAT31(extraout_var_43,bVar2);
  case 0x30: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x151);
    return CONCAT31(extraout_var_44,bVar2);
  case 0x31: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x152);
    return CONCAT31(extraout_var_45,bVar2);
  case 0x33: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x159);
    return CONCAT31(extraout_var_46,bVar2);
  case 0x34: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x15a);
    return CONCAT31(extraout_var_47,bVar2);
  case 0x35: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x15b);
    return CONCAT31(extraout_var_48,bVar2);
  case 0x36: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x13c);
    return CONCAT31(extraout_var_49,bVar2);
  case 0x37: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x158);
    return CONCAT31(extraout_var_50,bVar2);
  case 0x38: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x157);
    return CONCAT31(extraout_var_51,bVar2);
  case 0x3a: ;
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    uVar4 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG);
      bVar2 = F_004760f0(uVar4 GEN_EDX_ARG);
      uVar4 = CONCAT31(extraout_var_35,bVar2);
      if (bVar2 == 0) {
        bVar2 = F_00a34870(this_00 GEN_EDX_ARG,10);
        return CONCAT31(extraout_var_36,bVar2);
      }
    }
    break;
  case 0x3b: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x136);
    return CONCAT31(extraout_var_18,bVar2);
  case 0x3c: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x137);
    return CONCAT31(extraout_var_19,bVar2);
  case 0x3d: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x138);
    return CONCAT31(extraout_var_20,bVar2);
  case 0x3e: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x139);
    return CONCAT31(extraout_var_21,bVar2);
  case 0x3f: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x132);
    return CONCAT31(extraout_var_55,bVar2);
  case 0x40: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x133);
    return CONCAT31(extraout_var_56,bVar2);
  case 0x41: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x135);
    return CONCAT31(extraout_var_57,bVar2);
  case 0x42: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x134);
    return CONCAT31(extraout_var_58,bVar2);
  case 0x44: ;
    bVar2 = F_00a34970(this_00 GEN_EDX_ARG,0x13b);
    return CONCAT31(extraout_var_37,bVar2);
  case 0x47: ;
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x15c);
    return CONCAT31(extraout_var_53,bVar2);
  case 0x48: ;
    bVar2 = F_00a34de0(this_00 GEN_EDX_ARG,0x22);
    return CONCAT31(extraout_var_54,bVar2);
  }
  return uVar4 & 0xffffff00;
}

/* ref: FUN_0053bae0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053bae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53bae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x10, 0);
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  char cVar6;
  
  pvVar4 = REFG(void * PTR32, 0x137104c);
  if (REFG(void * PTR32, 0x137104c) == ((undefined *)GEN_TOP(0x0))) {
    return;
  }
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD)));
  pvVar4 = ((undefined *)GEN_TOP(F_00424770(pvVar4 GEN_EDX_ARG)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    return;
  }
  if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
    return;
  }
  *((undefined2 *)GEN_TOP(((int)this + 9))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xb))) = 0;
  bVar2 = F_00a34970(pvVar4 GEN_EDX_ARG,0x22);
  *((byte *)GEN_TOP(((int)this + 0xc))) = bVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xd))) = 0;
  bVar2 = F_00a34150(pvVar4 GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)));
  (*(byte *)(gen_frame + 0x9)) = bVar2;
  bVar2 = F_00a34150(pvVar4 GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)));
  (*(byte *)(gen_frame + 0xa)) = bVar2;
  bVar2 = F_00a34150(pvVar4 GEN_EDX_ARG,5,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)));
  if (bVar2 == 0) {
    bVar2 = F_00a34870(pvVar4 GEN_EDX_ARG,0x118);
    (*(char *)(gen_frame + 0xb)) = '\0';
    if (bVar2 != 0) goto LAB_0053bb93;
  }
  else {
LAB_0053bb93: ;
    (*(char *)(gen_frame + 0xb)) = '\x01';
  }
  uVar5 = F_00a34220(pvVar4 GEN_EDX_ARG);
  *((int *)GEN_TOP(((int)this + 0x3c))) = -*((int *)GEN_TOP((uVar5 + 0x20)));
  uVar5 = F_00a34220(pvVar4 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
  *((int *)GEN_TOP(((int)this + 0x40))) = -*((int *)GEN_TOP((uVar5 + 0x24)));
  if (iVar1 == 1) {
    if ((*(char *)(gen_frame + 0xb)) != '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 3;
      goto LAB_0053bcb6;
    }
    bVar2 = (*(byte *)(gen_frame + 0x9));
    if ((*(byte *)(gen_frame + 0xa)) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 2;
      goto LAB_0053bcb6;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        if ((*(char *)(gen_frame + 0xb)) == '\0') {
          if ((*(byte *)(gen_frame + 0x9)) == 0) {
            if ((*(byte *)(gen_frame + 0xa)) == 0) {
              *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
              F_00535ed0(this GEN_EDX_ARG,piVar3);
            }
            else {
              *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 2;
            }
          }
          else {
            *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 1;
          }
        }
      }
      else if ((*(char *)(gen_frame + 0xb)) == '\0') {
        if ((*(byte *)(gen_frame + 0x9)) == 0) {
          if ((*(byte *)(gen_frame + 0xa)) != 0) {
            *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 2;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x98))))(piVar3 GEN_EDX_ARG,0);
          }
        }
        else {
          *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 1;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x98))))(piVar3 GEN_EDX_ARG,0);
        }
      }
      else {
        *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 3;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x98))))(piVar3 GEN_EDX_ARG,0);
      }
      goto LAB_0053bcb6;
    }
    if ((*(char *)(gen_frame + 0xb)) != '\0') {
      *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 3;
      goto LAB_0053bcb6;
    }
    bVar2 = (*(byte *)(gen_frame + 0xa));
    if ((*(byte *)(gen_frame + 0x9)) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 1;
      goto LAB_0053bcb6;
    }
  }
  if (bVar2 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    F_00535f10(this GEN_EDX_ARG,pvVar4,piVar3);
  }
LAB_0053bcb6: ;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    cVar6 = '\x01';
  }
  else {
    cVar6 = '\0';
  }
  if (*((char *)GEN_TOP(((int)this + 0x4c))) != cVar6) {
    uVar5 = F_00a34e80(pvVar4 GEN_EDX_ARG,0);
    *((uint *)GEN_TOP(((int)this + 0x44))) = uVar5;
    uVar5 = F_00a34e80(pvVar4 GEN_EDX_ARG,1);
    *((uint *)GEN_TOP(((int)this + 0x48))) = uVar5;
    *((char *)GEN_TOP(((int)this + 0x4c))) = cVar6;
  }
  if (cVar6 != '\0') {
    F_00535fa0(this GEN_EDX_ARG,pvVar4,(uint)piVar3,*((undefined4 *)GEN_TOP(((int)this + 0x44))),
                 *((undefined4 *)GEN_TOP(((int)this + 0x48))));
  }
  return;
}

/* ref: FUN_0053bd10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0053bd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53bd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar1 = F_00a34de0(this_00 GEN_EDX_ARG,0x11f);
  if ((bVar1 != 0) && (*(char *)this == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0053bd50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053bd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53bd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD);
  if (uVar1 != 0) {
    uVar1 = F_00535db0(param_1,uVar1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0053bd80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053bd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53bd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x40))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x70))) = 0x100;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x74))), REFG(float, 0x109c7c8));
  return (uint)this;
}

/* ref: FUN_0053bde0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053bde0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x53bde0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*in_ecx != 0) {
    if ((!((float10)param_2 < ((float10)GEN_TOD(gen_bits2f(in_ecx[4]))))) &&
       (!((float10)(float)(((float10)GEN_TOD(gen_bits2f(in_ecx[4]))) + ((float10)GEN_TOD(gen_bits2f(in_ecx[7])))) <
         (float10)param_2))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0053be20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053be20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53be20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  undefined4 uVar2;
  uint in_EAX = 0;
  uint uVar3;
  uint * puVar4;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP(((int)this + 0x34))) == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD);
      if (uVar3 == 0) {
        return 0;
      }
      in_EAX = *((uint *)GEN_TOP(((int)this + 0xc)));
      if (*((char *)GEN_TOP((in_EAX + 0x14))) == '\0') {
        puVar4 = ((uint *)GEN_TOP(F_00ab2a20(*((undefined4 *)GEN_TOP(((int)this + 0x2c))))));
        uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
        (*(int *)(gen_frame + 0x0)) = (*puVar4 & 0xffffff) + (int)puVar4;
        (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
        in_EAX = F_00b5ad70(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar3 + 0x88))),&(*(int *)(gen_frame + 0x0)),0);
      }
    }
    else {
      in_EAX = F_00b5b260(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)this + 0x38))));
      if (in_EAX != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
      }
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x80))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_0053bec0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053bec0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x53bec0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_10;
  
  fVar4 = (float10)(*(float *)&gen_args[0]);
  fVar2 = *((float *)GEN_TOP((param_1 + 0x10)));
  fVar1 = *((float *)GEN_TOP((param_1 + 0x3c)));
  pfVar3 = ((float *)GEN_TOP((param_1 + 0x3c)));
  (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
  if (!(REFG(float, 0x1087f04) < fVar1)) {
    pfVar3 = &(*(float *)&gen_args[0]);
  }
  fVar1 = *pfVar3;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *((undefined4 *)GEN_TOP((param_1 + 0x2c)));
  fVar4 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x28))) +
                          (float10)(float)(fVar4 - (float10)fVar2)))));
  fVar5 = (float10)fVar1;
  gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
  local_10 = (int)(longlong)TRUNC(fVar4 / fVar5);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  fVar6 = (float10)local_10;
  if (local_10 < 0) {
    fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  *(*(float * PTR32 *)&gen_args[2]) = (float)(fVar4 - fVar6 * fVar5);
  *(*(float * PTR32 *)&gen_args[3]) = fVar1;
  return 0;
}

/* ref: FUN_0053bf70 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_0053bf70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x53bf70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xc38, 8);
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar2 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x259;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    bVar1 = F_00974e00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_0053bff0 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_0053bff0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x53bff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0xc38, 8);
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc28);
  this = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1;
    (*(undefined4 *)(gen_frame + 0x0)) = 600;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x18;
    F_00974e00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_0053c0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053c0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53c0b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0xc))), REFG(float, 0x1090708));
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
  return param_1;
}

/* ref: FUN_0053c0e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053c0e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x53c0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (param_2 == REFG(undefined4, 0x1379694)) {
    uVar2 = CONCAT31((int3)(param_2 >> 8),param_3);
    if (param_3 == '\0') {
      uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x21,0);
      param_1[2] = 0;
      uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      param_1[3] = uVar1;
      return uVar2;
    }
    if (param_3 == '\x03') {
      uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x21,1);
      param_1[4] = 2;
    }
  }
  return uVar2;
}

/* ref: FUN_0053c160 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0053c160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53c160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    bVar1 = F_0053bff0(*((undefined4 *)GEN_TOP(((int)this + 4))));
    if (bVar1 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    }
  }
  return;
}

/* ref: FUN_0053c1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053c1a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x53c1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined4 uVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if ((*((int *)GEN_TOP((param_1 + 0x10))) != 0) && (param_2 < 0xe)) {
    if (param_2 != 0) {
      F_00b68560(*((undefined4 *)GEN_TOP((param_1 + 0x2b4))) GEN_EDX_FWD,param_2,param_3 == '\0');
      uVar2 = F_0054f7a0(param_1 GEN_EDX_ARG,param_2,0);
      return uVar2;
    }
    in_EAX = F_0054f610(param_1 GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP((param_1 + 0x150))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x154))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x158))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x15c))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x164))) = 0;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    *((undefined4 *)GEN_TOP((param_1 + 0x160))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((param_1 + 0x168))) = uVar1;
  }
  return in_EAX;
}

/* ref: FUN_0053c230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053c230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53c230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar1 = F_00ab2a20(param_1);
    in_EAX = 0;
    if (uVar1 != 0) {
      uVar1 = (uint)*((byte *)GEN_TOP((uVar1 + 7)));
      if (uVar1 < 0xe) {
        in_EAX = *((uint *)GEN_TOP(((int)this + uVar1 * 4 + 0x18)));
      }
      else {
        in_EAX = 0;
      }
      if (in_EAX == param_1) {
        in_EAX = F_0053c1a0(this GEN_EDX_ARG,uVar1,(undefined1)param_2);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_0053c280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053c280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53c280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (((param_1 < 0xe) && (*((int *)GEN_TOP(((int)this + param_1 * 4 + 0x18))) != 0)) &&
     (*((int *)GEN_TOP(((int)this + 0x10))) != 0)) {
    bVar1 = F_00b68840(*((undefined4 *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_FWD,param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_0053c2b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053c2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    bVar1 = F_00b687c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_FWD,param_1);
    if (bVar1 != 0) {
      if (param_2 != 0) {
        puVar2 = ((uint *)GEN_TOP(F_00ab0d70(param_2)));
        if (puVar2 != ((uint *)GEN_TOP(0x0))) {
          uVar3 = F_00b68890(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2b4))) GEN_EDX_ARG,param_1);
          if (-1 < (int)uVar3) {
            uVar5 = *puVar2;
            uVar4 = F_00531ed0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
            uVar5 = F_00a09f70(param_2,(uVar5 & 0xffffff) + (int)puVar2,uVar4);
            if ((int)uVar3 <= (int)uVar5) {
              return 0;
            }
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0053c340 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053c340(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x53c340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  undefined * this;
  
  if (*((int *)GEN_TOP((param_1 + 0x10))) != 0) {
    *((undefined4 *)GEN_TOP((param_1 + 0x50 + param_3 * 4))) = 0;
    this = ((undefined *)GEN_TOP(F_00a5f290(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00aaacd0(this GEN_EDX_ARG,param_2,param_3,param_4);
    }
    if (param_5 != '\0') {
      if (param_3 == 0) {
        F_0054f610(param_1 GEN_EDX_ARG,0);
        return;
      }
      F_0054f7a0(param_1 GEN_EDX_ARG,param_3,0);
    }
  }
  return;
}

/* ref: FUN_0053c3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053c3a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x53c3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x124)));
  if ((((param_2 != '\0') && (*((int *)GEN_TOP((in_ecx + 0x1c))) != 0)) && (*((int *)GEN_TOP((in_ecx + 0x10))) != 0)) &&
     (((bVar2 = F_00b68840(*((undefined4 *)GEN_TOP((in_ecx + 0x2b4))) GEN_EDX_FWD,1), bVar2 != 0 &&
       (*((int *)GEN_TOP((in_ecx + 0x280))) != 0)) &&
      (uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x280))) + 5))), (int)uVar1 < (int)uVar3)))) {
    return uVar3;
  }
  return uVar1;
}

/* ref: FUN_0053c3f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053c3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53c3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  
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
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  this_00 = ((undefined *)GEN_TOP(F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  F_009755f0(this_00 GEN_EDX_ARG,puVar2);
  uVar1 = *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0x3b0c)));
  if (((*(uint *)(gen_frame + 0x2c)) <= uVar1) &&
     ((uVar1 != (*(uint *)(gen_frame + 0x2c)) || ((*(uint *)(gen_frame + 0x28)) < *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0x3b08))))))) {
    return 0;
  }
  *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0x3b08))) = (*(uint *)(gen_frame + 0x28));
  *((uint *)GEN_TOP(((int)this + param_1 * 8 + 0x3b0c))) = (*(uint *)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_0053c480 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53c480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x30, 0);
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pvVar5;
  undefined4 uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  uVar3 = F_00a5f2b0(param_1);
  if ((uVar3 != 0) && (uVar3 = F_00a62220(uVar3), (char)uVar3 != '\0')) {
    uVar3 = F_00a7eea0(&REFG(undefined1, 0x14ab068) GEN_EDX_ARG,1);
    return uVar3;
  }
  uVar3 = F_00a5f2b0(param_1);
  if ((uVar3 == 0) || (uVar3 = F_00533880(uVar3), (char)uVar3 == '\0')) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    iVar1 = REFG(int, 0x1375b90);
    uVar3 = uVar3 - 2;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      bVar2 = F_00ab6600(param_1[0x20]);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_00ac5a30(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
        return uVar3;
      }
      break;
    case 1: ;
    case 3: ;
    case 4: ;
    case 5: ;
      if ((REFG(int, 0x1375bbc) == 0) && (REFG(int, 0x1375b90) != 0)) {
        if ((char)param_2 != '\0') {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
          bVar2 = F_005388b0(iVar1 + 0x40,uVar3);
          if (bVar2 == 0) {
            uVar3 = F_00ab9000(0x51c);
            return uVar3;
          }
        }
        pvVar5 = ((undefined *)GEN_TOP(F_006b8c00()));
        uVar3 = F_006f7410(pvVar5 GEN_EDX_ARG,param_1,param_2);
      }
      break;
    case 2: ;
      uVar3 = F_00ae2af0(&REFG(undefined * PTR32, 0x1338d48) GEN_EDX_ARG,param_1);
      return uVar3;
    }
  }
  else {
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar3 = F_00a5f2b0(param_1);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)GEN_TOP(uVar3));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (uVar3 != 0)) {
      uVar6 = 6;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x48))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar6)));
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      uVar3 = 0;
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        bVar2 = F_0076a220((*(undefined * PTR32 *)(gen_frame + 0x1c)));
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) {
          F_00769610(piVar4 GEN_EDX_ARG);
          F_007cd910(piVar4 GEN_EDX_ARG,pvVar5);
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_0053c650 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053c650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53c650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  int * in_ecx;
  int * piVar3;
  byte bVar4;
  uint local_c;
  undefined4 * local_8;
  
  local_8 = ((undefined4 *)GEN_TOP((param_1 + 0x24)));
  local_c = 0;
  do {
    uVar1 = *local_8;
    in_ecx = ((int *)GEN_TOP(0x0));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
    if (uVar2 != 4) {
      in_ecx = param_2;
    }
    piVar3 = ((int *)GEN_TOP(0x0));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xb8))))(param_2 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      piVar3 = param_2;
    }
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar4 = F_005322a0(piVar3);
      break;
    case 1: ;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar4 = F_005321f0(piVar3);
      break;
    case 2: ;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      uVar2 = F_00a62220(piVar3);
      bVar4 = (byte)uVar2;
      break;
    default: ;
      goto switchD_0053c6a9_caseD_3;
    case 4: ;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar4 = F_005322f0(piVar3);
      break;
    case 5: ;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        bVar4 = F_005322f0(piVar3);
        break;
      }
      goto switchD_0053c6a9_caseD_3;
    case 6: ;
      uVar2 = F_005337c0(param_2);
      bVar4 = (byte)uVar2;
      break;
    case 7: ;
      bVar4 = param_2 != REFG(int * PTR32, 0x1379694);
      break;
    case 8: ;
      bVar4 = param_2 == REFG(int * PTR32, 0x1379694);
      break;
    case 9: ;
      goto switchD_0053c6a9_caseD_9;
    case 10: ;
      uVar2 = F_00533630(this GEN_EDX_ARG,param_2);
      bVar4 = (byte)uVar2;
      break;
    case 0xb: ;
      bVar4 = 0;
      uVar2 = F_00a5f0b0(param_2[0x1d],0);
      if (uVar2 != 0xe0000000) {
        bVar4 = F_00a66e00(&REFG(undefined, 0x14aa74c) GEN_EDX_ARG,uVar2);
      }
      break;
    case 0x12: ;
      bVar4 = in_ecx != ((int *)GEN_TOP(0x0));
      break;
    case 0x13: ;
      if (in_ecx == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      bVar4 = F_00ae18d0(in_ecx GEN_EDX_ARG);
      break;
    case 0x14: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
      bVar4 = uVar2 - 4 < 5;
      break;
    case 0x15: ;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
      bVar4 = uVar2 == 7;
    }
    if (bVar4 == 0) {
switchD_0053c6a9_caseD_9: ;
      return 0;
    }
switchD_0053c6a9_caseD_3: ;
    local_8 = local_8 + 1;
    local_c = local_c + 1;
    if (9 < local_c) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_0053c840 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053c840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x53c840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL(0x50, 0);
  int * this_00;
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  float fVar6;
  int * piVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  piVar5 = ((int *)GEN_TOP(0x0));
  (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP(0x0));
  (*(float *)(gen_frame + 0x2c)) = REFG(float, 0x1090998);
  if (0 < *param_3) {
    (*(int * PTR32 *)(gen_frame + 0x28)) = param_3 + 1;
    (*(int *)(gen_frame + 0x24)) = *param_3;
    do {
      this_00 = ((int *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x28))));
      if (((((REFG(int, 0x137104c) != 0) && (REFG(int, 0x1375bbc) == 0)) && (REFG(int, 0x1375b90) != 0)) &&
          ((*((int *)GEN_TOP((REFG(int, 0x1375b90) + 0xe0))) != 0 &&
           (uVar3 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0x74),
           *((int *)GEN_TOP((uVar3 + 0x14))) != 0)))) ||
         ((this_00 == ((int *)GEN_TOP(0x0)) ||
          ((this_00 != REFG(int * PTR32, 0x1379694) && (this_00 != ((int *)GEN_TOP(REFG(int * PTR32, 0x1379694)[0xb80])))))))) {
        if ((piVar5 != ((int *)GEN_TOP(0x0))) &&
           ((this_00 != ((int *)GEN_TOP(0x0)) &&
            (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xb8))))(piVar5 GEN_EDX_ARG), (char)uVar3 != '\0')))) {
          piVar7 = this_00;
          uVar3 = F_00a5f290(piVar5 GEN_EDX_ARG);
          bVar2 = F_00a9f2c0(uVar3 GEN_EDX_ARG,piVar7);
          if (bVar2 != 0) goto LAB_0053ca0a;
        }
        if (this_00[0x47] == 0) {
          (*(char *)(gen_frame + 0x3f)) = '\0';
          uVar3 = F_005387a0(this_00,param_4,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x10)),&(*(char *)(gen_frame + 0x3f)));
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x38));
          if ((char)uVar3 != '\0') {
            iVar8 = param_4 + 0x40;
            uVar3 = F_00a5feb0(this_00 GEN_EDX_ARG);
            fVar6 = F_00aaea30(uVar3,iVar8);
            (*(float *)(gen_frame + 0x30)) = fVar6;
            if ((GEN_ISNAN((float10)(*(float *)(gen_frame + 0x2c))) || GEN_ISNAN((float10)fVar6)) ||
                (float10)(*(float *)(gen_frame + 0x2c)) <= (float10)fVar6) {
              piVar5 = (*(int * PTR32 *)(gen_frame + 0x38));
              if (((*(int * PTR32 *)(gen_frame + 0x38)) != ((int *)GEN_TOP(0x0))) &&
                 (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xb8))))(this_00 GEN_EDX_ARG), piVar5 = (*(int * PTR32 *)(gen_frame + 0x38)),
                 (char)uVar3 != '\0')) {
                uVar3 = F_00a5f290(this_00 GEN_EDX_ARG);
                bVar2 = F_00a9f2c0(uVar3 GEN_EDX_ARG,piVar5);
                piVar5 = (*(int * PTR32 *)(gen_frame + 0x38));
                if (bVar2 != 0) goto LAB_0053c996;
              }
            }
            else {
LAB_0053c996: ;
              if ((*(char *)(gen_frame + 0x3f)) == '\0') {
                puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xa4))))(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
                (*(undefined4 *)(gen_frame + 0x10)) = *puVar4;
                (*(undefined4 *)(gen_frame + 0x14)) = puVar4[1];
                (*(undefined4 *)(gen_frame + 0x18)) = puVar4[2];
              }
              pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x34));
              bVar2 = F_005388b0(param_4 + 0x40,&(*(undefined4 *)(gen_frame + 0x10)));
              if (bVar2 != 0) {
                (*(int * PTR32 *)(gen_frame + 0x38)) = this_00;
                (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0x30));
              }
              *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x60))) = (*(undefined4 *)(gen_frame + 0x10));
              *((undefined4 *)GEN_TOP(((int)pvVar1 + 100))) = (*(undefined4 *)(gen_frame + 0x14));
              *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x68))) = (*(undefined4 *)(gen_frame + 0x18));
              piVar5 = (*(int * PTR32 *)(gen_frame + 0x38));
            }
          }
        }
      }
LAB_0053ca0a: ;
      (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 1;
      iVar8 = (*(int *)(gen_frame + 0x24)) - 1;
      (*(int *)(gen_frame + 0x24)) = iVar8;
    } while (iVar8 != 0);
  }
  return (uint)piVar5;
}

/* ref: FUN_0053cd40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053cd40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53cd40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP((in_ecx + 0x10))) != 0) {
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 0x10))) GEN_EDX_FWD,0x78);
    uVar2 = 1;
    if (*((int *)GEN_TOP((uVar1 + 0x14))) == 0) {
      uVar2 = 7;
    }
    if (*((uint *)GEN_TOP((in_ecx + 0x18))) != uVar2) {
      *((uint *)GEN_TOP((in_ecx + 0x18))) = uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0053cd70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053cd70(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x53cd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL(0xb00, 0);
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0xaec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xaf0);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(int *)(gen_frame + 0x1c)) = param_4;
  (*(uint *)(gen_frame + 0x24)) = 0;
  uVar2 = F_00536f90(param_2,param_3,param_4,((undefined1 *)(gen_frame + 0x28)));
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = ((uint *)(gen_frame + 0x2c));
    do {
      if ((*(uint *)(gen_frame + 0x24)) != 0) {
        return (*(uint *)(gen_frame + 0x24));
      }
      if (param_5 == '\0') {
LAB_0053ce15: ;
        (*(uint *)(gen_frame + 0x24)) = *puVar3;
      }
      else {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0xa4))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        bVar1 = F_005388b0((*(int *)(gen_frame + 0x1c)) + 0x40,uVar2);
        if (bVar1 != 0) goto LAB_0053ce15;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 2;
      uVar2 = (*(uint *)(gen_frame + 0x24));
    } while (uVar4 < (*(uint *)(gen_frame + 0x18)));
  }
  return uVar2;
}

/* ref: FUN_0053ce50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053ce50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x53ce50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x568, 8, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  
  iVar1 = 0;
  if (REFG(void * PTR32, 0x1379694) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  piVar6 = param_1;
  piVar7 = ((int *)(gen_frame + 0x0));
  for (iVar4 = 0x159; iVar4 != 0; iVar4 = iVar4 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  if (0 < ((int *)(gen_frame + 0x0))[0]) {
    do {
      if (((undefined *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(iVar1 + 1)])) == REFG(void * PTR32, 0x1379694)) {
        iVar1 = 0;
        goto LAB_0053cea2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < ((int *)(gen_frame + 0x0))[0]);
  }
  goto LAB_0053ced7;
  while (iVar1 = iVar1 + 1, iVar1 < ((int *)(gen_frame + 0x0))[0]) {
LAB_0053cea2: ;
    if (((undefined *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(iVar1 + 1)])) == REFG(void * PTR32, 0x1379694)) goto LAB_0053ceb3;
  }
  iVar1 = -1;
LAB_0053ceb3: ;
  iVar2 = iVar1 + 1;
  iVar4 = ((int *)(gen_frame + 0x0))[0];
  if (iVar2 < ((int *)(gen_frame + 0x0))[0]) {
    piVar6 = ((int *)(gen_frame + 0x0)) + iVar1 + 2;
    piVar7 = ((int *)(gen_frame + 0x0)) + iVar2;
    for (iVar5 = ((int *)(gen_frame + 0x0))[0] - iVar2; iVar4 = ((int *)(gen_frame + 0x0))[0], iVar5 != 0; iVar5 = iVar5 - 1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
  }
  ((int *)(gen_frame + 0x0))[0] = iVar4 - 1;
LAB_0053ced7: ;
  uVar3 = F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD);
  uVar3 = F_0053cd70(this GEN_EDX_ARG,((int *)(gen_frame + 0x0)),uVar3,param_2,(undefined1)param_3);
  return uVar3;
}

/* ref: FUN_0053cf00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053cf00(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x53cf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_FRAME_DECL(0xb00, 0);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  (*(uint *)(gen_frame + 0xaec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xaf0);
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(int *)(gen_frame + 0x24)) = param_2;
  (*(int *)(gen_frame + 0x14)) = param_5;
  iVar4 = *param_3;
  iVar5 = 0;
  piVar6 = param_3;
  if (0 < iVar4) {
    do {
      piVar6 = piVar6 + 1;
      if (*piVar6 == param_6) goto LAB_0053cf6b;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  if (iVar4 < 0x158) {
    param_3[iVar4 + 1] = param_6;
    *param_3 = *param_3 + 1;
  }
LAB_0053cf6b: ;
  uVar2 = F_00536ff0(param_3,param_2,((undefined1 *)(gen_frame + 0x28)),0x158);
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x20)) = uVar2;
  if (uVar2 != 0) {
    do {
      if (((int *)(gen_frame + 0x2c))[(int)(uVar3 * 2)] == param_6) {
        (*(uint *)(gen_frame + 0x20)) = uVar3;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  (*(int *)(gen_frame + 0x24)) = 1;
  if (1 < (int)uVar2) {
    (*(int *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x20)) - 1;
    do {
      iVar4 = (*(uint *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x24));
      if (param_4 == '\0') {
        iVar4 = (*(int *)(gen_frame + 0x1c));
      }
      if (iVar4 < (int)uVar2) {
        if (iVar4 < 0) {
          iVar4 = iVar4 + uVar2;
        }
      }
      else {
        iVar4 = iVar4 - uVar2;
      }
      piVar6 = ((int *)GEN_TOP(((int *)(gen_frame + 0x2c))[(int)(iVar4 * 2)]));
      iVar4 = (*(int *)(gen_frame + 0x24));
      if (piVar6 != REFG(int * PTR32, 0x1379694)) {
        if (param_7 == '\0') {
          return (uint)piVar6;
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xa4))))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        bVar1 = F_005388b0((*(int *)(gen_frame + 0x14)) + 0x40,uVar3);
        iVar4 = (*(int *)(gen_frame + 0x24));
        if (bVar1 != 0) {
          return (uint)piVar6;
        }
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) - 1;
      (*(int *)(gen_frame + 0x24)) = iVar4 + 1;
    } while (iVar4 + 1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_0053d070 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053d070(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x53d070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_FRAME_DECL(0xb00, 0);
  int * piVar1;
  byte bVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  
  (*(uint *)(gen_frame + 0xaec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xaf0);
  (*(int *)(gen_frame + 0x18)) = param_5;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  fVar3 = gen_bits2f(F_00536ff0(param_3,param_2,((float *)(gen_frame + 0x28)),0x158));
  (*(float *)(gen_frame + 0x20)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = param_6;
  if (param_6 < 0.0) {
    (*(float *)(gen_frame + 0x24)) = (float)((float10)REFG(float, 0x1305b68) + (float10)param_6);
  }
  fVar6 = 0.0;
  if (fVar3 != 0.0) {
    do {
      if ((!GEN_ISNAN((float10)((float *)(gen_frame + 0x28))[(int)((int)gen_fl2bits(fVar6) * 2)]) && !GEN_ISNAN((float10)(*(float *)(gen_frame + 0x24)))) &&
          !((float10)((float *)(gen_frame + 0x28))[(int)((int)gen_fl2bits(fVar6) * 2)] <= (float10)(*(float *)(gen_frame + 0x24)))) {
        (*(float *)(gen_frame + 0x20)) = fVar6;
        break;
      }
      fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) + 1);
    } while ((uint)gen_fl2bits(fVar6) < (uint)gen_fl2bits(fVar3));
  }
  if ((param_4 == '\0') &&
     (fVar6 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x20))) - 1), (*(float *)(gen_frame + 0x20)) = fVar6,
     (int)gen_fl2bits(fVar6) < 0)) {
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)gen_fl2bits(fVar3) - 1U);
    (*(float *)(gen_frame + 0x24)) = 0.0;
    pfVar4 = &(*(float *)(gen_frame + 0x1c));
    if ((int)((int)gen_fl2bits(fVar3) - 1U) < 1) {
      pfVar4 = &(*(float *)(gen_frame + 0x24));
    }
    (*(float *)(gen_frame + 0x20)) = *pfVar4;
  }
  (*(float *)(gen_frame + 0x1c)) = 0.0;
  if (0 < (int)gen_fl2bits(fVar3)) {
    (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x20));
    do {
      fVar6 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x20))) + (int)gen_fl2bits((*(float *)(gen_frame + 0x1c))));
      if (param_4 == '\0') {
        fVar6 = (*(float *)(gen_frame + 0x24));
      }
      if ((int)gen_fl2bits(fVar6) < (int)gen_fl2bits(fVar3)) {
        if ((int)gen_fl2bits(fVar6) < 0) {
          fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) + (int)gen_fl2bits(fVar3));
        }
      }
      else {
        fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) - (int)gen_fl2bits(fVar3));
      }
      piVar1 = ((int *)(uintptr_t)gen_fl2bits((float)(((float *)(gen_frame + 0x28))[(int)((int)gen_fl2bits(fVar6) * 2 + 1)])));
      fVar6 = (*(float *)(gen_frame + 0x1c));
      if (piVar1 != REFG(int * PTR32, 0x1379694)) {
        if (param_7 == '\0') {
          return (uint)piVar1;
        }
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        bVar2 = F_005388b0((*(int *)(gen_frame + 0x18)) + 0x40,uVar5);
        fVar6 = (*(float *)(gen_frame + 0x1c));
        if (bVar2 != 0) {
          return (uint)piVar1;
        }
      }
      (*(float *)(gen_frame + 0x24)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x24))) - 1);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)gen_fl2bits(fVar6) + 1);
    } while ((int)gen_fl2bits(fVar6) + 1 < (int)gen_fl2bits(fVar3));
  }
  return 0;
}

/* ref: FUN_0053d200 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053d200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53d200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
  if ((7 < uVar2) ||
     ((*((int *)GEN_TOP(((int)this + uVar2 * 4 + 0x2fb8))) != 0 &&
      ((7 < uVar2 || (*((int *)GEN_TOP(((int)this + uVar2 * 4 + 0x2fb8))) != 3)))))) {
    *((undefined1 *)GEN_TOP(((int)this + 0x91))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x40)));
  if (iVar1 != *((int *)GEN_TOP(((int)this + 0x4c)))) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
    if ((7 < uVar2) ||
       ((*((int *)GEN_TOP(((int)this + uVar2 * 4 + 0x2fb8))) != 0 &&
        ((7 < uVar2 || (*((int *)GEN_TOP(((int)this + uVar2 * 4 + 0x2fb8))) != 3)))))) {
      *((undefined1 *)GEN_TOP(((int)this + 0x91))) = 1;
    }
    uVar2 = F_005326b0(iVar1);
    *((int *)GEN_TOP(((int)this + 0x4c))) = iVar1;
  }
  return uVar2;
}

/* ref: FUN_0053d270 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0053d270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53d270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (*((int *)GEN_TOP(((int)this + 0x84))) == 0) {
    uVar5 = 0xe0000000;
  }
  else {
    uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x74)));
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      uVar6 = 0xe0000000;
    }
    else {
      uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
    }
  }
  else {
    uVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
  }
  uVar3 = F_00a5f0b0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
  if ((7 < uVar2) ||
     ((*((int *)GEN_TOP(((int)this + uVar2 * 4 + 0x2fb8))) != 0 &&
      ((7 < uVar2 || (*((int *)GEN_TOP(((int)this + uVar2 * 4 + 0x2fb8))) != 3)))))) {
    *((bool *)GEN_TOP(((int)this + 0x90))) = uVar5 != uVar3;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0x44)));
  if (iVar4 == 0) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0x40)));
  }
  F_00538290(this GEN_EDX_ARG,iVar4);
  return;
}

/* ref: FUN_0053d300 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053d300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53d300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if ((*((int *)GEN_TOP(((int)this + 0x80))) != 0) &&
     (uVar1 = F_00538440(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x80))),(float)(float10)0), (char)uVar1 != '\0'))
  {
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  return uVar1;
}

/* ref: FUN_0053d330 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0053d330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53d330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * pvVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD)));
    bVar1 = F_00a34c40(pvVar2 GEN_EDX_ARG,0x126);
    if (((bVar1 == 0) && (bVar1 = F_00a34c40(pvVar2 GEN_EDX_ARG,0x160), bVar1 == 0)) &&
       (bVar1 = F_00a34c40(pvVar2 GEN_EDX_ARG,0x15f), bVar1 == 0)) {
      return;
    }
    *((bool *)GEN_TOP(((int)this + 0x95))) = *((char *)GEN_TOP(((int)this + 0x95))) == '\0';
    return;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x95))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x40))) == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x94))) = 0;
    return;
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00a34c40(pvVar2 GEN_EDX_ARG,0x126);
  if (((bVar1 == 0) && (bVar1 = F_00a34c40(pvVar2 GEN_EDX_ARG,0x160), bVar1 == 0)) &&
     (bVar1 = F_00a34c40(pvVar2 GEN_EDX_ARG,0x15f), bVar1 == 0)) {
    return;
  }
  *((bool *)GEN_TOP(((int)this + 0x94))) = *((char *)GEN_TOP(((int)this + 0x94))) == '\0';
  return;
}

/* ref: FUN_0053d400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053d400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53d400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code * pcVar6;
  longlong lVar8;
  int iVar9;
  int * piVar10;
  uint uVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  longlong lVar15;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44)));
  *((float *)GEN_TOP(((int)this + 0x98))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x98))) -
              (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) * (float10)*(double *)&REFG(undefined, 0x10912a8))));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
    if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      lVar15 = 0xe0000000;
    }
    else {
      lVar15 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3);
    }
  }
  else {
    lVar15 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3);
  }
  iVar9 = (int)lVar15;
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
  uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0xa0)));
  lVar8 = *((longlong *)GEN_TOP(((int)this + 0xa0)));
  (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)((ulonglong)lVar15 >> 0x20));
  if (lVar15 != lVar8) {
    piVar10 = ((int *)GEN_TOP(F_00ab1290(uVar5,uVar4)));
    if (((piVar10 != ((int *)GEN_TOP(0x0))) &&
        (uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0xb8))))(piVar10 GEN_EDX_ARG), (char)uVar11 != '\0')) &&
       (piVar10 = ((int *)GEN_TOP(piVar10[0x3b])), piVar10 != ((int *)GEN_TOP(0x0)))) {
      pcVar6 = *((gen_code32 *)GEN_TOP((*piVar10 + 0x60)));
      (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
      (*pcVar6)(piVar10,&(*(float *)(gen_frame + 0x0)));
    }
    if ((iVar9 != -0x20000000) || ((*(float *)(gen_frame + 0x14)) != 0.0)) {
      *((undefined4 *)GEN_TOP(((int)this + 0x98))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x98))), REFG(float, 0x109cadc));
    }
  }
  *((int *)GEN_TOP(((int)this + 0xa0))) = iVar9;
  *((float *)GEN_TOP(((int)this + 0xa4))) = (*(float *)(gen_frame + 0x14));
  piVar10 = ((int *)GEN_TOP(F_00ab1290(iVar9,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))))));
  uVar11 = 0;
  if (piVar10 != ((int *)GEN_TOP(0x0))) {
    if ((*(uint *)&REFG(undefined, 0x1375b24) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x1375b24) = *(uint *)&REFG(undefined, 0x1375b24) | 1;
      *(float *)&REFG(undefined, 0x1375b20) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x1375b20), REFG(float, 0x109cad8));
    }
    fVar1 = *((float *)GEN_TOP(((int)this + 0x98)));
    fVar13 = (float10)*(double *)&REFG(undefined, 0x109cad0);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    pfVar12 = &(*(float *)(gen_frame + 0x18));
    fVar1 = (float)(fVar13 - (float10)fVar1);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    if (!((float10)fVar1 < fVar13)) {
      pfVar12 = (float *)&REFG(float, 0x109cadc);
    }
    if (!(0.0 < *pfVar12)) {
      pfVar12 = &(*(float *)(gen_frame + 0x14));
    }
    fVar1 = *pfVar12;
    (*(float *)(gen_frame + 0x14)) = fVar1;
    fVar14 = (float10)fVar1;
    fVar1 = (float)(fVar14 / (float10)*(float *)&REFG(undefined, 0x1375b20));
    (*(float *)(gen_frame + 0x14)) = fVar1;
    fVar2 = (float)((float10)1 - fVar14 / fVar13);
    (*(float *)(gen_frame + 0x18)) = fVar2;
    fVar13 = (float10)fVar1;
    if ((float10)1 <= fVar13) {
      fVar13 = ((float10)GEN_TOD(pow(fVar13,(float10)*(double *)&REFG(undefined, 0x109cac8))));
      (*(float *)(gen_frame + 0x14)) = (float)fVar13;
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)fVar2 * ((float10)1 / (float10)(float)fVar13))));
    }
    pcVar6 = *((gen_code32 *)GEN_TOP((*piVar10 + 0xb8)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x18)) * (float10)*(double *)&REFG(undefined, 0x109cac0) + (float10)1);
    uVar11 = (*pcVar6)(piVar10);
    if (((char)uVar11 != '\0') && (piVar10 = ((int *)GEN_TOP(piVar10[0x3b])), piVar10 != ((int *)GEN_TOP(0x0)))) {
      pcVar6 = *((gen_code32 *)GEN_TOP((*piVar10 + 0x60)));
      (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x14));
      (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x14));
      (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x14));
      (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
      uVar11 = (*pcVar6)(piVar10,&(*(float *)(gen_frame + 0x0)));
    }
  }
  return uVar11;
}

/* ref: FUN_0053d610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053d610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x53d610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 uVar7;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) == 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      lVar5 = 0xe0000000;
    }
    else {
      lVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
    }
  }
  else {
    lVar5 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))));
  }
  if (lVar5 == 0xe0000000) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_00ab1290((int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
    if (uVar4 != 0) {
      uVar3 = F_0053cf00(this GEN_EDX_ARG,(int)param_1 + 0x40,param_2,(byte)param_3,param_1,uVar4,1);
      goto LAB_0053d674;
    }
  }
  uVar7 = 1;
  fVar6 = F_00b6bb90(param_1 GEN_EDX_ARG);
  uVar3 = F_0053d070(this GEN_EDX_ARG,(int)param_1 + 0x40,param_2,(byte)param_3,param_1,fVar6,uVar7);
LAB_0053d674: ;
  if ((((uVar3 != 0) && (uVar4 != 0)) && (*((int *)GEN_TOP(((int)this + 0x34))) != 0)) &&
     ((bVar2 = F_00537110(param_1,uVar4,uVar3), (byte)param_3 != bVar2 &&
      (bVar2 = F_00538c10(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG), bVar2 != 0)))) {
    return 0;
  }
  return uVar3;
}

/* ref: FUN_0053d6f0 */
GEN_OWN GEN_FRAME float10 GEN_STDCALL F_0053d6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x53d6f0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  float * pfVar2;
  double dVar3;
  
  dVar3 = F_00532360((*(uint *)&gen_args[0]));
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  pfVar2 = (float *)&(*(uint *)&gen_args[0]);
  fVar1 = ((float)GEN_TOF((((float10)dVar3 - (float10)*(double *)&REFG(undefined, 0x1090718)) /
                 (float10)*(double *)&REFG(undefined, 0x10947f0))));
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar1);
  if (!((float10)fVar1 < (float10)1)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(0.0 < *pfVar2)) {
    pfVar2 = &(*(float *)(gen_frame + 0x0));
  }
  return (float10)*pfVar2;
}

/* ref: Client::Game::Control::TargetSystem::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053d760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53d760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a5f2b0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a62220(uVar1);
    if (((char)uVar2 != '\0') && (param_1 == *(int *)(this + 0x44))) {
      uVar2 = F_00a7eea0(&REFG(undefined1, 0x14ab068) GEN_EDX_ARG,1);
    }
  }
  if ((*(int *)(this + 0x44) != 0) &&
     ((uVar2 = *(uint *)(this + 0x2fd8), 7 < uVar2 ||
      ((*(int *)(this + uVar2 * 4 + 0x2fb8) != 0 &&
       ((7 < uVar2 || (*(int *)(this + uVar2 * 4 + 0x2fb8) != 3)))))))) {
    *(undefined4 *)(this + 0x44) = 0;
  }
  return uVar2;
}

/* ref: FUN_0053d7d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053d7d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x53d7d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x2fd8)));
  if ((7 < uVar1) ||
     ((*((int *)GEN_TOP((param_1 + 0x2fb8 + uVar1 * 4))) != 0 &&
      ((7 < uVar1 || (*((int *)GEN_TOP((param_1 + 0x2fb8 + uVar1 * 4))) != 3)))))) {
    *((uint *)GEN_TOP((param_1 + 0x74))) = param_2;
    *((undefined1 *)GEN_TOP((param_1 + 0x70))) = param_3;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_0053d810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053d810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x53d810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x5a0, 0, 4);
  uint uVar1;
  uint uVar2;
  
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  F_00538690(((undefined4 *)(gen_frame + 0x0)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x584)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca0c));
  (*(undefined * PTR32 *)(gen_frame + 0x588)) = this;
  (*(undefined4 *)(gen_frame + 0x58c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cae0)));
  F_00538c50(((undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x584)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x598)) = (*(undefined * PTR32 (*)[2])REFP(0x109c9c4));
  F_00538c50(((undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x598)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x564)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
  (*(undefined4 *)(gen_frame + 0x568)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x56c)) = this;
  (*(undefined1 *)(gen_frame + 0x570)) = 0;
  F_00538c50(((undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x564)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x574)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
  (*(undefined4 *)(gen_frame + 0x578)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x57c)) = this;
  (*(undefined1 *)(gen_frame + 0x580)) = 0;
  F_00538c50(((undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x574)));
  if ((char)param_3 != '\0') {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x590)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca30));
    (*(undefined * PTR32 *)(gen_frame + 0x594)) = this;
    F_00538c50(((undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x590)));
  }
  uVar1 = ~-(uint)(REFG(int, 0x1375bbc) != 0) & REFG(undefined4, 0x1375b90);
  if ((uVar1 != 0) && (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0)))) {
    uVar2 = F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    uVar1 = F_0053cd70(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)),uVar2,uVar1,(char)param_3);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0053d930 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0053d930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53d930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD);
  if ((REFG(char, 0x1375b3b) != '\0') && (*((int *)GEN_TOP(((int)this + 0x74))) == 0)) {
    bVar1 = F_00ac3640(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0053d970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053d970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53d970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  undefined4 uVar7;
  
  bVar2 = false;
  if (*((int *)GEN_TOP(((int)this + 0xf04))) == 0) {
    pvVar5 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD)));
    bVar3 = F_00a34970(pvVar5 GEN_EDX_ARG,0x136);
    if (bVar3 != 0) {
      iVar1 = *((int *)GEN_TOP(((int)this + (*((int *)GEN_TOP(((int)this + 0xea0))) + 0xbd) * 0x10)));
      if (iVar1 != *((int *)GEN_TOP(((int)this + 0xeac)))) {
        *((uint *)GEN_TOP(((int)this + 0xea8))) = *((uint *)GEN_TOP(((int)this + 0xea8))) | 1;
        *((int *)GEN_TOP(((int)this + 0xeac))) = iVar1;
      }
      bVar2 = true;
    }
    pvVar5 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    bVar3 = F_00a34970(pvVar5 GEN_EDX_ARG,0x137);
    if (bVar3 != 0) {
      iVar1 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xea0))) * 0x10 + 0xbd4)));
      if (iVar1 != *((int *)GEN_TOP(((int)this + 0xeac)))) {
        *((uint *)GEN_TOP(((int)this + 0xea8))) = *((uint *)GEN_TOP(((int)this + 0xea8))) | 1;
        *((int *)GEN_TOP(((int)this + 0xeac))) = iVar1;
      }
      bVar2 = true;
    }
    pvVar5 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    bVar3 = F_00a34970(pvVar5 GEN_EDX_ARG,0x138);
    if (bVar3 != 0) {
      iVar1 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xea0))) * 0x10 + 0xbd8)));
      if (iVar1 != *((int *)GEN_TOP(((int)this + 0xeac)))) {
        *((uint *)GEN_TOP(((int)this + 0xea8))) = *((uint *)GEN_TOP(((int)this + 0xea8))) | 1;
        *((int *)GEN_TOP(((int)this + 0xeac))) = iVar1;
      }
      bVar2 = true;
    }
    pvVar5 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    bVar3 = F_00a34970(pvVar5 GEN_EDX_ARG,0x139);
    if (bVar3 == 0) {
      if (!bVar2) {
        return CONCAT31(extraout_var,bVar3);
      }
    }
    else {
      iVar1 = *((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xea0))) * 0x10 + 0xbdc)));
      if (iVar1 != *((int *)GEN_TOP(((int)this + 0xeac)))) {
        *((uint *)GEN_TOP(((int)this + 0xea8))) = *((uint *)GEN_TOP(((int)this + 0xea8))) | 1;
        *((int *)GEN_TOP(((int)this + 0xeac))) = iVar1;
      }
    }
    piVar6 = ((int *)GEN_TOP(F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    uVar7 = 0x12;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x48))))(piVar6 GEN_EDX_ARG);
    piVar6 = ((int *)GEN_TOP(F_00763050(uVar4 GEN_EDX_ARG,uVar7)));
    uVar4 = 0;
    if (piVar6 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
      return uVar4;
    }
  }
  else {
    uVar4 = *((int *)GEN_TOP(((int)this + 0xf04))) - 1;
    if (uVar4 == 0) {
      F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
      uVar4 = F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_0053dae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053dae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53dae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined2 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_EAX = 0;
  uint3 uVar5;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  bool bVar6;
  longlong lVar7;
  byte local_c;
  
  uVar5 = (uint3)((uint)in_EAX >> 8);
  if (REFG(int, 0x1379694) == 0) {
    bVar3 = 0;
    uVar4 = (uint)uVar5 << 8;
  }
  else {
    bVar3 = *((byte *)GEN_TOP((REFG(int, 0x1379694) + 0x2dd2))) >> 1 & 1;
    uVar4 = CONCAT31(uVar5,*((byte *)GEN_TOP((REFG(int, 0x1379694) + 0x2dd2))) >> 2) & 0xffffff01;
  }
  uVar1 = *((undefined2 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xea4))) * 0x14 + 0xdd8)));
  bVar6 = (char)uVar4 == (char)((ushort)uVar1 >> 8);
  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar6);
  local_c = (byte)uVar1;
  if (bVar3 != local_c || !bVar6) {
    if (REFG(undefined4 * PTR32, 0x1375c04) != ((undefined4 *)GEN_TOP(0x0))) {
      lVar7 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c04))))(REFG(undefined4 * PTR32, 0x1375c04));
      if (lVar7 != 0xe0000000) {
        return (uint)lVar7;
      }
      uVar4 = 0xe0000000;
    }
    if (REFG(undefined4 * PTR32, 0x1375c00) != ((undefined4 *)GEN_TOP(0x0))) {
      lVar7 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375c00))))(REFG(undefined4 * PTR32, 0x1375c00));
      if (lVar7 != 0xe0000000) {
        return (uint)lVar7;
      }
      uVar4 = 0xe0000000;
    }
    iVar2 = REFG(int, 0x1379694);
    if ((REFG(int, 0x1379694) == 0) ||
       (((*((byte *)GEN_TOP((REFG(int, 0x1379694) + 0x2dd2))) >> 1 & 1) == 0 &&
        ((REFG(int, 0x1379694) == 0 ||
         (bVar3 = *((byte *)GEN_TOP((REFG(int, 0x1379694) + 0x2dd2))) >> 2,
         uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3) & 0xffffff01, (bVar3 & 1) == 0)))))) {
      uVar4 = F_0054c710(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xea4))) * 0x14 + 0xddc))));
      return uVar4;
    }
    if ((REFG(int, 0x1379694) == 0) ||
       (bVar3 = *((byte *)GEN_TOP((REFG(int, 0x1379694) + 0x2dd2))) >> 1,
       uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3) & 0xffffff01, (bVar3 & 1) == 0)) {
      bVar3 = F_00532a80();
      uVar4 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        uVar4 = F_0054c710(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xea4))) * 0x14 + 0xde0))));
        return uVar4;
      }
    }
    if (iVar2 != 0) {
      bVar3 = *((byte *)GEN_TOP((iVar2 + 0x2dd2))) >> 1;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3) & 0xffffff01;
      if ((bVar3 & 1) != 0) {
        bVar3 = F_00532a80();
        uVar4 = CONCAT31(extraout_var_00,bVar3);
        if (bVar3 == 0) {
          uVar4 = F_0054c710(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0xea4))) * 0x14 + 0xde4))));
          return uVar4;
        }
      }
      if ((iVar2 != 0) &&
         (bVar3 = *((byte *)GEN_TOP((iVar2 + 0x2dd2))) >> 1,
         uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3) & 0xffffff01, (bVar3 & 1) != 0)) {
        bVar3 = F_00532a80();
        uVar4 = CONCAT31(extraout_var_01,bVar3);
        if (bVar3 != 0) {
          uVar4 = F_0054c710(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + (*((int *)GEN_TOP(((int)this + 0xea4))) * 5 + 0x37a) * 4))));
        }
      }
    }
  }
  return uVar4;
}

/* ref: FUN_0053dc80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053dc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x53dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x5a4, 12, 4);
  uint uVar1;
  uint uVar2;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x574)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca8c));
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x59c)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x574));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x58c)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca8c));
  (*(undefined4 *)(gen_frame + 0x594)) = REFG(undefined4, 0x1379694);
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x584)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x598));
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x588)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x58c));
  (*(int *)(gen_frame + 0x568)) = (int)this + 8;
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x56c)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x580));
  ((undefined4 *)(gen_frame + 0x0))[0] = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x578)) = this;
  (*(undefined4 *)(gen_frame + 0x57c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x598)) = (*(undefined * PTR32 (*)[2])REFP(0x109caa4));
  (*(undefined * PTR32 *)(gen_frame + 0x590)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x580)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca98));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x564)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca74));
  (*(undefined4 *)(gen_frame + 0x570)) = 2;
  F_00538cb0(param_2,((undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x564)));
  uVar2 = F_0053d610(this GEN_EDX_ARG,param_1,((undefined4 *)(gen_frame + 0x0)),param_3);
  if ((uVar2 != 0) &&
     ((uVar1 = *((uint *)GEN_TOP(((int)this + 0x2fd8))), 7 < uVar1 ||
      ((*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 0 &&
       ((7 < uVar1 || (*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 3)))))))) {
    *((uint *)GEN_TOP(((int)this + 0x44))) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_0053dd50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053dd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53dd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x5, 11);
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  longlong lVar10;
  double dVar11;
  
  fVar9 = 0.0;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x38)));
  bVar7 = false;
  if (((iVar2 != 0x49) && (iVar2 == 0x39)) && (iVar3 = *((int *)GEN_TOP(((int)this + 0x34))), -1 < iVar3)) {
    if (iVar3 < 2) {
      fVar1 = *((float *)GEN_TOP(((int)this + 0x30)));
      dVar11 = F_00533d80(iVar3);
      bVar7 = GEN_ISNAN((double)fVar1) || GEN_ISNAN(dVar11);
      if (bVar7 == (bVar7 || (double)fVar1 == dVar11)) {
LAB_0053ddab: ;
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
    }
    else if (iVar3 == 2) {
      if (!(*((float *)GEN_TOP(((int)this + 0x30))) <= 0.0)) goto LAB_0053ddab;
      bVar7 = true;
    }
  }
  bVar8 = false;
  if (((iVar2 == 0x49) || (iVar2 != 0x3a)) || (iVar2 = *((int *)GEN_TOP(((int)this + 0x34))), iVar2 < 0))
  goto LAB_0053ddd5;
  if (iVar2 < 2) {
    fVar9 = *((float *)GEN_TOP(((int)this + 0x30)));
    dVar11 = F_00533d80(iVar2);
    bVar8 = GEN_ISNAN((double)fVar9) || GEN_ISNAN(dVar11);
    if (bVar8 != (bVar8 || (double)fVar9 == dVar11)) {
LAB_0053de0c: ;
      bVar8 = true;
      goto LAB_0053ddd5;
    }
  }
  else {
    if (iVar2 != 2) goto LAB_0053ddd5;
    if ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(*((float *)GEN_TOP(((int)this + 0x30))))) &&
        !(fVar9 < *((float *)GEN_TOP(((int)this + 0x30))))) goto LAB_0053de0c;
  }
  bVar8 = false;
LAB_0053ddd5: ;
  if ((bVar7) || (bVar8)) {
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44)));
    if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
        lVar10 = 0xe0000000;
      }
      else {
        lVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4);
      }
    }
    else {
      lVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4);
    }
    if (lVar10 == 0xe0000000) {
      uVar6 = 0;
    }
    else {
      uVar6 = F_00ab1290((int)lVar10,(int)((ulonglong)lVar10 >> 0x20));
    }
    (*(char *)(gen_frame + 0x0)) = '\0';
    uVar6 = F_005376f0(this GEN_EDX_ARG,param_1,bVar7,uVar6,&(*(char *)(gen_frame + 0x0)));
    if ((*(char *)(gen_frame + 0x0)) != '\0') {
      if (*((int *)GEN_TOP(((int)this + 0x34))) == 1) {
        *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 2;
        *((undefined4 *)GEN_TOP(((int)this + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x30))), REFG(float, 0x109c7d0));
        return;
      }
      if (*((int *)GEN_TOP(((int)this + 0x34))) == 2) {
        *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 1;
        *((undefined4 *)GEN_TOP(((int)this + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x30))), REFG(float, 0x109c7cc));
      }
    }
    if ((uVar6 != 0) &&
       ((uVar5 = *((uint *)GEN_TOP(((int)this + 0x2fd8))), 7 < uVar5 ||
        ((*((int *)GEN_TOP(((int)this + uVar5 * 4 + 0x2fb8))) != 0 &&
         ((7 < uVar5 || (*((int *)GEN_TOP(((int)this + uVar5 * 4 + 0x2fb8))) != 3)))))))) {
      *((uint *)GEN_TOP(((int)this + 0x44))) = uVar6;
    }
  }
  return;
}

/* ref: FUN_0053ded0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053ded0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53ded0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x64, 12, 4);
  float * pfVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 extraout_EAX = 0;
  undefined4 extraout_EAX_00 = 0;
  bool bVar10;
  bool bVar11;
  float fVar12;
  longlong lVar13;
  double dVar14;
  undefined4 uVar15;
  
  uVar7 = (*(uint *)(gen_frame + 0x33));
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(uint *)(gen_frame + 0x5c)) = uVar5;
  fVar12 = 0.0;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x38)));
  pfVar1 = ((float *)GEN_TOP(((int)this + 0x30)));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x33)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x33)) = uVar7 & 0xffffff00;
  if (((iVar2 != 0x49) && (iVar2 == 0x39)) && (uVar5 = *((uint *)GEN_TOP(((int)this + 0x34))), -1 < (int)uVar5)
     ) {
    if ((int)uVar5 < 2) {
      (*(double *)(gen_frame + 0x20)) = (double)*pfVar1;
      dVar14 = F_00533d80(uVar5);
      bVar10 = GEN_ISNAN((*(double *)(gen_frame + 0x20))) || GEN_ISNAN(dVar14);
      bVar11 = bVar10 || (*(double *)(gen_frame + 0x20)) == dVar14;
      uVar5 = CONCAT22((short)((uint)extraout_EAX >> 0x10),
                       CONCAT11(bVar11 << 6 | bVar10 << 2 | 2U | !(dVar14 <= (*(double *)(gen_frame + 0x20))),
                                (char)extraout_EAX));
      if (bVar10 == bVar11) goto LAB_0053df1c;
LAB_0053e041: ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x33)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x33)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x33)), 1, 3),1);
    }
    else if (uVar5 == 2) {
      if (!GEN_ISNAN(*pfVar1) && !(0.0 < *pfVar1)) goto LAB_0053e041;
LAB_0053df1c: ;
      uVar7 = (*(uint *)(gen_frame + 0x33));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x33)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x33)) = uVar7 & 0xffffff00;
    }
  }
  bVar10 = false;
  if (((iVar2 == 0x49) || (iVar2 != 0x3a)) || (uVar5 = *((uint *)GEN_TOP(((int)this + 0x34))), (int)uVar5 < 0))
  goto LAB_0053df4c;
  if ((int)uVar5 < 2) {
    (*(double *)(gen_frame + 0x20)) = (double)*pfVar1;
    dVar14 = F_00533d80(uVar5);
    bVar10 = GEN_ISNAN((*(double *)(gen_frame + 0x20))) || GEN_ISNAN(dVar14);
    bVar11 = bVar10 || (*(double *)(gen_frame + 0x20)) == dVar14;
    uVar5 = CONCAT22((short)((uint)extraout_EAX_00 >> 0x10),
                     CONCAT11(bVar11 << 6 | bVar10 << 2 | 2U | !(dVar14 <= (*(double *)(gen_frame + 0x20))),
                              (char)extraout_EAX_00));
    if (bVar10 != bVar11) {
LAB_0053e066: ;
      bVar10 = true;
      goto LAB_0053df4c;
    }
  }
  else {
    if (uVar5 != 2) goto LAB_0053df4c;
    if ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(*pfVar1)) && !(fVar12 < *pfVar1)) goto LAB_0053e066;
  }
  bVar10 = false;
LAB_0053df4c: ;
  if (((char)(*(uint *)(gen_frame + 0x33)) != '\0') || (bVar10)) {
    uVar5 = 0;
    (*(int *)(gen_frame + 0x2c)) = 0;
    piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar6 != ((int *)GEN_TOP(0x0))) {
      uVar15 = 3;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x48))))(piVar6 GEN_EDX_ARG);
      uVar7 = F_00763050(uVar7 GEN_EDX_ARG,uVar15);
      if (uVar7 != 0) {
        iVar2 = *((int *)GEN_TOP((uVar7 + 0x458)));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[2])REFP(0x109c9c4));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca0c));
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
        (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cae0)));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca74));
        (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c));
        (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10));
        (*(undefined4 *)(gen_frame + 0xc)) = 2;
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = iVar2;
        (*(double *)(gen_frame + 0x20)) = gen_bits2d(CONCAT44(iVar2,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 0))));
        if (0 < iVar2) {
          do {
            if (8 < uVar5) break;
            uVar8 = F_00770520(uVar7 GEN_EDX_ARG,uVar5);
            uVar9 = F_00ab1210(uVar8);
            if ((uVar9 != 0) &&
               (bVar4 = F_0054e200(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar9), bVar4 != 0
               )) {
              ((uint *)(gen_frame + 0x38))[(int)((*(int *)(gen_frame + 0x2c)))] = uVar8;
              (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
            }
            uVar5 = uVar5 + 1;
            this = (*(undefined * PTR32 *)(gen_frame + 0x28));
          } while ((int)uVar5 < (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)));
        }
      }
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44)));
    (*(char *)(gen_frame + 0x37)) = '\0';
    if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
      if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
        lVar13 = 0xe0000000;
      }
      else {
        lVar13 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3);
      }
    }
    else {
      lVar13 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3);
    }
    if (lVar13 == 0xe0000000) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_00ab1290((int)lVar13,(int)((ulonglong)lVar13 >> 0x20));
    }
    uVar5 = F_00537820(uVar5,((uint *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x2c)),(char)(*(uint *)(gen_frame + 0x33)),&(*(char *)(gen_frame + 0x37)));
    if ((*(char *)(gen_frame + 0x37)) != '\0') {
      if (*((int *)GEN_TOP(((int)this + 0x34))) == 1) {
        *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 2;
        *((undefined4 *)GEN_TOP(((int)this + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x30))), REFG(float, 0x109c7d0));
        return uVar5;
      }
      if (*((int *)GEN_TOP(((int)this + 0x34))) == 2) {
        *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 1;
        *((undefined4 *)GEN_TOP(((int)this + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x30))), REFG(float, 0x109c7cc));
      }
    }
    if (((uVar5 != 0) || (uVar5 = F_00ab1210(((uint *)(gen_frame + 0x38))[0]), uVar5 != 0)) &&
       ((uVar7 = *((uint *)GEN_TOP(((int)this + 0x2fd8))), 7 < uVar7 ||
        ((*((int *)GEN_TOP(((int)this + uVar7 * 4 + 0x2fb8))) != 0 &&
         ((7 < uVar7 || (*((int *)GEN_TOP(((int)this + uVar7 * 4 + 0x2fb8))) != 3)))))))) {
      *((uint *)GEN_TOP(((int)this + 0x44))) = uVar5;
    }
  }
  return uVar5;
}

/* ref: FUN_0053e150 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x53e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  if (param_4 < 10) {
    F_00c49908(this,0x20,param_1);
    if (*((int *)GEN_TOP(((int)this + 0x20))) != param_2) {
      *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) | 1;
      *((int *)GEN_TOP(((int)this + 0x20))) = param_2;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x11;
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x11;
    *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) | 1;
    F_00537910(this GEN_EDX_ARG,param_3,param_4);
    *((uint *)GEN_TOP(((int)this + 0x50))) = *((uint *)GEN_TOP(((int)this + 0x50))) | 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = param_5;
  }
  return;
}

/* ref: FUN_0053e1c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053e1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0x16;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    (*(undefined4 *)(gen_frame + 0x8)) = uVar3;
    (*(undefined1 *)(gen_frame + 0xc)) = 0;
    bVar2 = F_00537f40((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
    if (bVar2 != 0) {
      return 0;
    }
    uVar3 = 6;
    break;
  case 2: ;
    uVar3 = 1;
    break;
  case 3: ;
    uVar3 = 2;
    break;
  case 4: ;
    uVar3 = 0xb;
    break;
  case 5: ;
    uVar3 = 5;
    break;
  case 6: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    return uVar4 == 9;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x109ca48));
  (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(undefined1 *)(gen_frame + 0xc)) = 0;
  bVar2 = F_00537f40((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  return bVar2;
}

/* ref: Client::Game::Control::TargetSystem::ConfigCircle::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053e290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53e290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (6 < *(int *)(this + 4)) {
    return 1;
  }
  uVar3 = 1;
  do {
    uVar2 = F_00414500(*((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x10))) GEN_EDX_FWD,
                         *(int *)(this + 4) * 7 + 0x7a + uVar3);
    if (*((int *)GEN_TOP((uVar2 + 0x14))) != 0) {
      bVar1 = F_0053e1c0(this GEN_EDX_ARG,param_1,uVar3);
      if (bVar1 != 0) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return 0;
}

/* ref: FUN_0053e300 */
GEN_OWN GEN_FRAME byte F_0053e300(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x53e300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((param_2 + 0x10))) GEN_EDX_ARG,param_1 * 7 + 0x7a);
  return *((int *)GEN_TOP((uVar1 + 0x14))) != 0;
}

/* ref: Client::Game::Control::TargetSystem::ConfigCircleManager::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053e330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53e330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  byte bVar2;
  
  if (*(int *)(this + 0x10) < 7) {
    (*(int *)(gen_frame + 0x4)) = *(int *)(this + 0x10);
    uVar1 = *(undefined4 *)(this + 8);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0xc);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x109c9dc));
    (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
    bVar2 = F_0053e290((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
    return bVar2;
  }
  return 1;
}

/* ref: FUN_0053e370 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0053e370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53e370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  uVar1 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_FWD,0x79);
  if (*((int *)GEN_TOP((uVar1 + 0x14))) != 0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      iVar3 = 3;
      break;
    case 1: ;
      iVar3 = 4;
      break;
    case 2: ;
      iVar3 = 5;
      break;
    case 3: ;
      iVar3 = 6;
      break;
    default: ;
      iVar3 = 7;
    }
    uVar1 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,iVar3 * 7 + 0x7a);
    if ((*((int *)GEN_TOP((uVar1 + 0x14))) != 0) && (bVar2 = 1, iVar3 != *((int *)GEN_TOP(((int)this + 0x10))))) {
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar3;
      if (*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) != ((undefined *)GEN_TOP(0x0))) {
        F_004ea820(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,0xd);
      }
    }
  }
  return bVar2;
}

/* ref: FUN_0053e420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053e420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53e420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD)));
  if (((pvVar2 != ((undefined *)GEN_TOP(0x0))) && (bVar1 = F_00a34870(pvVar2 GEN_EDX_ARG,0x11f), bVar1 != 0)) &&
     (bVar1 = F_00a34970(pvVar2 GEN_EDX_ARG,0x136), bVar1 != 0)) {
    uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x79);
    if (*((int *)GEN_TOP((uVar3 + 0x14))) == 0) {
      return uVar3;
    }
    uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x96);
    if (*((int *)GEN_TOP((uVar3 + 0x14))) == 0) {
      return uVar3;
    }
    if (*((int *)GEN_TOP(((int)this + 0x10))) == 4) {
      return 4;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 4;
    if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) == ((undefined *)GEN_TOP(0x0))) {
      return 4;
    }
    uVar3 = F_004ea820(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,0xd);
    return uVar3;
  }
  pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00a34970(pvVar2 GEN_EDX_ARG,0x132);
  if (bVar1 == 0) {
    pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    if (((pvVar2 != ((undefined *)GEN_TOP(0x0))) && (bVar1 = F_00a34870(pvVar2 GEN_EDX_ARG,0x11f), bVar1 != 0)) &&
       (bVar1 = F_00a34970(pvVar2 GEN_EDX_ARG,0x137), bVar1 != 0)) {
      bVar1 = F_0053e370(this GEN_EDX_ARG,0);
      return CONCAT31(extraout_var,bVar1);
    }
    pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    bVar1 = F_00a34970(pvVar2 GEN_EDX_ARG,0x133);
    if (bVar1 != 0) {
      bVar1 = F_0053e370(this GEN_EDX_ARG,0);
      uVar3 = CONCAT31(extraout_var_00,bVar1);
      goto LAB_0053e706;
    }
    uVar3 = F_0053bd50(param_1 GEN_EDX_ARG,0x3d);
    if ((char)uVar3 != '\0') {
      uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x79);
      if (*((int *)GEN_TOP((uVar3 + 0x14))) == 0) {
        return uVar3;
      }
      uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x9d);
      if (*((int *)GEN_TOP((uVar3 + 0x14))) == 0) {
        return uVar3;
      }
      uVar3 = 5;
LAB_0053e66a: ;
      if (*((uint *)GEN_TOP(((int)this + 0x10))) == uVar3) {
        return uVar3;
      }
      *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
      if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) == ((undefined *)GEN_TOP(0x0))) {
        return uVar3;
      }
      uVar3 = F_004ea820(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,0xd);
      return uVar3;
    }
    pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    bVar1 = F_00a34970(pvVar2 GEN_EDX_ARG,0x135);
    if (bVar1 == 0) {
      uVar3 = F_0053bd50(param_1 GEN_EDX_ARG,0x3e);
      if ((char)uVar3 != '\0') {
        uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x79);
        if (*((int *)GEN_TOP((uVar3 + 0x14))) == 0) {
          return uVar3;
        }
        uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0xa4);
        if (*((int *)GEN_TOP((uVar3 + 0x14))) == 0) {
          return uVar3;
        }
        uVar3 = 6;
        goto LAB_0053e66a;
      }
      pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
      bVar1 = F_00a34970(pvVar2 GEN_EDX_ARG,0x134);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_01,bVar1);
      }
      bVar1 = 0;
      uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x79);
      if ((*((int *)GEN_TOP((uVar3 + 0x14))) == 0) ||
         (uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0xa4),
         *((int *)GEN_TOP((uVar3 + 0x14))) == 0)) goto LAB_0053e706;
      uVar3 = 6;
    }
    else {
      bVar1 = 0;
      uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x79);
      if ((*((int *)GEN_TOP((uVar3 + 0x14))) == 0) ||
         (uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x9d),
         *((int *)GEN_TOP((uVar3 + 0x14))) == 0)) goto LAB_0053e706;
      uVar3 = 5;
    }
  }
  else {
    bVar1 = 0;
    uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x79);
    if ((*((int *)GEN_TOP((uVar3 + 0x14))) == 0) ||
       (uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x96),
       *((int *)GEN_TOP((uVar3 + 0x14))) == 0)) goto LAB_0053e706;
    uVar3 = 4;
  }
  bVar1 = 1;
  if (*((uint *)GEN_TOP(((int)this + 0x10))) != uVar3) {
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
    if (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_004ea820(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x25f8))) GEN_EDX_ARG,0xd);
    }
  }
LAB_0053e706: ;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1 == 0);
  if (bVar1 == 0) {
    uVar3 = F_00ab9000(0x32d);
  }
  return uVar3;
}

/* ref: FUN_0053e730 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053e730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53e730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(char *)(gen_frame + 0x7)) = '\0';
  uVar2 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_FWD,0x78);
  (*(bool *)(gen_frame + 0x6)) = *((int *)GEN_TOP((uVar2 + 0x14))) != 0;
  uVar2 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x79);
  (*(bool *)(gen_frame + 0x5)) = *((int *)GEN_TOP((uVar2 + 0x14))) != 0;
  uVar2 = 0;
  do {
    iVar4 = 7;
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      iVar4 = 3;
      break;
    case 1: ;
      iVar4 = 4;
      break;
    case 2: ;
      iVar4 = 5;
      break;
    case 3: ;
      iVar4 = 6;
    }
    uVar3 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,iVar4 * 7 + 0x7a);
    ((char *)(gen_frame + 0x0))[(int)(uVar2)] = *((int *)GEN_TOP((uVar3 + 0x14))) != 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if ((*((char *)GEN_TOP(((int)this + 0x18))) == '\0') || ((*(bool *)(gen_frame + 0x6)) != false)) {
    if ((*((char *)GEN_TOP(((int)this + 0x19))) != '\0') && ((*(bool *)(gen_frame + 0x5)) == false)) {
      iVar4 = *((int *)GEN_TOP(((int)this + 0x10)));
      if ((((iVar4 != 3) && (iVar4 != 4)) && (iVar4 != 6)) && (iVar4 != 5)) {
        (*(char *)(gen_frame + 0x7)) = '\0';
        goto LAB_0053e875;
      }
      goto LAB_0053e80e;
    }
    uVar2 = 0;
    do {
      if ((*(char *)(gen_frame + 0x7)) != '\0') goto LAB_0053e86d;
      iVar4 = 7;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        iVar4 = 3;
        break;
      case 1: ;
        iVar4 = 4;
        break;
      case 2: ;
        iVar4 = 5;
        break;
      case 3: ;
        iVar4 = 6;
      }
      if (((((char *)(gen_frame + 0x0))[(int)(uVar2)] != '\0') || (*((char *)GEN_TOP((uVar2 + 0x1a + (int)this))) == '\0')) ||
         ((*(char *)(gen_frame + 0x7)) = '\x01', *((int *)GEN_TOP(((int)this + 0x10))) != iVar4)) {
        (*(char *)(gen_frame + 0x7)) = '\0';
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    if ((*(char *)(gen_frame + 0x7)) == '\0') goto LAB_0053e875;
  }
  else {
    if ((*((int *)GEN_TOP(((int)this + 0x10))) != 0) && (*((int *)GEN_TOP(((int)this + 0x10))) != 1)) {
      (*(char *)(gen_frame + 0x7)) = '\0';
      goto LAB_0053e875;
    }
LAB_0053e80e: ;
    (*(char *)(gen_frame + 0x7)) = '\x01';
  }
LAB_0053e86d: ;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 7) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 7;
  }
LAB_0053e875: ;
  if ((*((char *)GEN_TOP(((int)this + 0x18))) == '\0') && ((*(bool *)(gen_frame + 0x6)) != false)) {
    if ((*((byte *)GEN_TOP((param_2 + 0x2dd2))) & 4) == 0) {
      if (*((int *)GEN_TOP(((int)this + 0x10))) != 1) {
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
      }
    }
    else if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    }
  }
  F_0053e420(this GEN_EDX_ARG,param_1);
  if ((*((byte *)GEN_TOP((param_2 + 0x2dd2))) >> 2 & 1) != *((byte *)GEN_TOP(((int)this + 4)))) {
    *((byte *)GEN_TOP(((int)this + 4))) = *((byte *)GEN_TOP((param_2 + 0x2dd2))) >> 2 & 1;
    bVar1 = *((byte *)GEN_TOP((param_2 + 0x2dd2)));
    uVar2 = F_00414500(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) GEN_EDX_ARG,0x78);
    if (*((int *)GEN_TOP((uVar2 + 0x14))) != 0) {
      if ((bVar1 >> 2 & 1) == 0) {
        if (*((int *)GEN_TOP(((int)this + 0x10))) != 1) {
          *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
        }
      }
      else if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      }
    }
  }
  *((bool *)GEN_TOP(((int)this + 0x19))) = (*(bool *)(gen_frame + 0x5));
  *((bool *)GEN_TOP(((int)this + 0x18))) = (*(bool *)(gen_frame + 0x6));
  uVar2 = 0;
  do {
    if ((*(char *)(gen_frame + 0x7)) != '\0') break;
    *((char *)GEN_TOP((uVar2 + 0x1a + (int)this))) = ((char *)(gen_frame + 0x0))[(int)(uVar2)];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  F_00537a50(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
  return;
}

/* ref: FUN_0053ef10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053ef10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53ef10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x5a8, 8);
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  int iVar7;
  float fVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x580)) = this;
  (*(int * PTR32 *)(gen_frame + 0x578)) = REFG(int * PTR32, 0x1379694);
  iVar7 = *param_1;
  (*(int * PTR32 *)(gen_frame + 0x594)) = ((int *)GEN_TOP(0x0));
  (*(float *)(gen_frame + 0x588)) = REFG(float, 0x1097b10);
  if (0 < iVar7) {
    piVar6 = ((int *)(gen_frame + 0x0));
    iVar3 = iVar7;
    piVar5 = param_1;
    while( true ) {
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
      if (iVar3 == 0) break;
      iVar3 = iVar3 - 1;
      *piVar6 = *piVar5;
    }
  }
  while( true ) {
    ((int *)(gen_frame + 0x0))[0] = iVar7;
    if (iVar7 < 1) {
      return (uint)(*(int * PTR32 *)(gen_frame + 0x594));
    }
    (*(int *)(gen_frame + 0x590)) = 2;
    (*(int * PTR32 *)(gen_frame + 0x594)) = ((int *)GEN_TOP(0x0));
    (*(int *)(gen_frame + 0x584)) = iVar7;
    (*(int *)(gen_frame + 0x58c)) = 0;
    if (iVar7 < 1) break;
    do {
      piVar5 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x58c)) + 1)]));
      if ((piVar5 != ((int *)GEN_TOP(0x0))) && (piVar5 != (*(int * PTR32 *)(gen_frame + 0x578)))) {
        iVar3 = 0;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_FWD);
        if (((uVar2 == 1) &&
            ((uVar2 = F_00a5f2b0(piVar5), uVar2 == 0 ||
             (uVar2 = F_00a62220(uVar2), (char)uVar2 == '\0')))) ||
           ((uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 8))))(piVar5 GEN_EDX_ARG), (char)uVar2 == '\x03' &&
            ((uVar2 = F_00a5f2b0(piVar5), uVar2 == 0 ||
             (uVar2 = F_00a62220(uVar2), (char)uVar2 == '\0')))))) {
          iVar3 = 1;
        }
        else {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG);
          if (uVar2 == 9) {
            iVar3 = 2;
          }
        }
        iVar7 = ((int *)(gen_frame + 0x0))[0];
        if (iVar3 <= (*(int *)(gen_frame + 0x590))) {
          uVar2 = F_00a5feb0(piVar5 GEN_EDX_ARG);
          fVar8 = F_00533110(uVar2);
          (*(float *)(gen_frame + 0x57c)) = fVar8;
          iVar7 = ((int *)(gen_frame + 0x0))[0];
          if ((iVar3 < (*(int *)(gen_frame + 0x590))) || ((float10)(*(float *)(gen_frame + 0x588)) < (float10)fVar8)) {
            (*(int *)(gen_frame + 0x590)) = iVar3;
            (*(int * PTR32 *)(gen_frame + 0x594)) = piVar5;
            (*(int *)(gen_frame + 0x584)) = (*(int *)(gen_frame + 0x58c));
            (*(float *)(gen_frame + 0x588)) = fVar8;
          }
        }
      }
      iVar3 = (*(int *)(gen_frame + 0x58c)) + 1;
      (*(int *)(gen_frame + 0x58c)) = iVar3;
    } while (iVar3 < iVar7);
    if ((*(int * PTR32 *)(gen_frame + 0x594)) == ((int *)GEN_TOP(0x0))) {
      return (uint)((int *)GEN_TOP(0x0));
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x594)) + 0xa4))))((*(int * PTR32 *)(gen_frame + 0x594)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x568)));
    bVar1 = F_005388b0(param_2 + 0x40,uVar2);
    if (bVar1 != 0) {
      return (uint)(*(int * PTR32 *)(gen_frame + 0x594));
    }
    iVar3 = (*(int *)(gen_frame + 0x584)) + 1;
    if (iVar3 < iVar7) {
      piVar5 = ((int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x584)) + 2;
      piVar6 = ((int *)(gen_frame + 0x0)) + iVar3;
      for (iVar4 = iVar7 - iVar3; iVar7 = ((int *)(gen_frame + 0x0))[0], iVar4 != 0; iVar4 = iVar4 - 1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
    }
    iVar7 = iVar7 - 1;
  }
  return 0;
}

/* ref: FUN_0053f0d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53f0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined * this_00;
  
  if (*((char *)GEN_TOP(((int)this + 0x93))) != '\0') {
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD)));
  bVar1 = F_00a34c40(this_00 GEN_EDX_ARG,0x126);
  if (bVar1 == 0) {
    bVar1 = F_00a34c40(this_00 GEN_EDX_ARG,0x160);
    if (bVar1 == 0) {
      bVar1 = F_00a34c40(this_00 GEN_EDX_ARG,0x15f);
      if (bVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_0053f150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053f150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53f150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  
  if ((*((char *)GEN_TOP(((int)this + 0x93))) != '\0') &&
     ((in_EAX = *((uint *)GEN_TOP(((int)this + 0x2fd8))), 7 < in_EAX ||
      ((*((int *)GEN_TOP(((int)this + in_EAX * 4 + 0x2fb8))) != 0 &&
       ((7 < in_EAX || (*((int *)GEN_TOP(((int)this + in_EAX * 4 + 0x2fb8))) != 3)))))))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xfb0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x93))) = 0;
  return in_EAX;
}

/* ref: FUN_0053f190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53f190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if ((((REFG(int, 0x137104c) != 0) &&
       (uVar1 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,
                             *((undefined4 *)GEN_TOP(((int)this + 0x2fec)))), *((int *)GEN_TOP((uVar1 + 0x14))) != 0)) &&
      ((REFG(undefined4, 0x1379694) == 0 || (uVar1 = REFG(undefined4, 0x1379694), REFG(undefined4, 0x1379694) != param_1)))) &&
     (uVar1 = F_00533c90(this GEN_EDX_ARG), uVar1 == 0)) {
    uVar1 = F_00538150(this GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_0053f1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f1e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x53f1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined * this;
  undefined4 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((((param_4 != '\0') ||
       (puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x2fd8))), ((undefined4 *)GEN_TOP(0x7)) < puVar1)) ||
      ((*((int *)GEN_TOP((param_1 + 0x2fb8 + (int)((int)(uintptr_t)puVar1) * 4))) != 0 &&
       ((((undefined4 *)GEN_TOP(0x7)) < puVar1 || (*((int *)GEN_TOP((param_1 + 0x2fb8 + (int)((int)(uintptr_t)puVar1) * 4))) != 3)))))) &&
     ((puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x2fd8))), ((undefined4 *)GEN_TOP(0x7)) < puVar1 ||
      (((*((int *)GEN_TOP((param_1 + 0x2fb8 + (int)((int)(uintptr_t)puVar1) * 4))) != 2 || (param_2 != ((undefined4 *)GEN_TOP(0x0)))) ||
       (param_3 != '\0')))))) {
    if ((param_2 != *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x40)))) && (param_3 == '\0')) {
      uVar2 = 0xe0000000;
      if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar2 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2);
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x40)));
      if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
        uVar3 = 0xe0000000;
      }
      else {
        uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1);
      }
      this = ((undefined *)GEN_TOP(F_006b8c00()));
      F_006e5d90(this GEN_EDX_ARG,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,
                   (int)((ulonglong)uVar2 >> 0x20));
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x40)));
    if ((param_2 != puVar1) && (puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
      *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x8c))) = puVar1;
    }
    *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x40))) = param_2;
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x2fd8)));
      if ((((undefined4 *)GEN_TOP(0x7)) < puVar1) ||
         ((*((int *)GEN_TOP((param_1 + 0x2fb8 + (int)((int)(uintptr_t)puVar1) * 4))) != 0 &&
          ((((undefined4 *)GEN_TOP(0x7)) < puVar1 || (*((int *)GEN_TOP((param_1 + 0x2fb8 + (int)((int)(uintptr_t)puVar1) * 4))) != 3)))))) {
        *((undefined4 *)GEN_TOP((param_1 + 0x44))) = 0;
      }
      if (*((char *)GEN_TOP((param_1 + 0x95))) != '\0') {
        *((undefined1 *)GEN_TOP((param_1 + 0x94))) = 1;
      }
    }
    *((byte *)GEN_TOP((param_1 + 0x92))) = *((byte *)GEN_TOP((param_1 + 0x92))) & param_3 == '\0';
  }
  return (uint)puVar1;
}

/* ref: FUN_0053f300 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053f300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53f300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  int local_8;
  
  piVar2 = &REFG(undefined4, 0x109c744);
  if (*(uint *)this < 6) {
    piVar2 = this;
  }
  local_8 = *piVar2;
  if (local_8 != 0) {
    pcVar5 = ((char *)GEN_TOP(((int)this + 0x10)));
    do {
      iVar3 = 0;
      if (0 < *param_1) {
        piVar2 = param_1;
        do {
          piVar2 = piVar2 + 1;
          if (*piVar2 == *(int *)(pcVar5 - 4)) {
            cVar1 = '\x01';
            goto LAB_0053f33f;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *param_1);
      }
      cVar1 = '\0';
LAB_0053f33f: ;
      *((byte *)GEN_TOP(((int)this + 8))) = *((byte *)GEN_TOP(((int)this + 8))) | *pcVar5 != cVar1;
      *pcVar5 = cVar1;
      uVar4 = *((int *)GEN_TOP(((int)this + 4))) + 1;
      if (*(uint *)this <= uVar4) {
        uVar4 = 0;
      }
      pcVar5 = pcVar5 + 8;
      local_8 = local_8 - 1;
      *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: Client::Game::Control::TargetSystem::ExecActionFilter::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53f370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005383b0(param_1,*((undefined4 *)GEN_TOP((*(int *)(this + 4) + 0xfb4))),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 0xfb0))));
  return uVar1;
}

/* ref: Client::Game::Control::TargetSystem::ScreenProjectionFilter::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_0053f3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53f3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  byte bVar1;
  float10 fVar2;
  
  fVar2 = (float10)*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90)));
  if (*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90))) < 0) {
    fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x2c)) = (float)fVar2;
  fVar2 = (float10)*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x94)));
  if (*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x94))) < 0) {
    fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x28)) = (float)fVar2;
  bVar1 = F_00a618e0(param_1 GEN_EDX_FWD);
  if (bVar1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa4))))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    bVar1 = F_00532800(&(*(float *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      if (((((float10)0 < (float10)(*(float *)(gen_frame + 0x10))) && ((float10)(*(float *)(gen_frame + 0x10)) < (float10)(*(float *)(gen_frame + 0x2c)))) &&
          ((float10)0 < (float10)(*(float *)(gen_frame + 0x14)))) && ((float10)(*(float *)(gen_frame + 0x14)) < (float10)(*(float *)(gen_frame + 0x28)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Control::TargetSystem::PetFilter::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53f470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_00a5f2b0(param_1)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  iVar1 = *(int *)(this + 8);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  if (iVar1 == 0) {
    if (uVar3 == 2) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      if ((char)uVar3 == '\x02') {
        return 1;
      }
    }
  }
  else if (uVar3 == 2) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    if (((char)uVar3 == '\x02') && (piVar2[0x21] == *((int *)GEN_TOP((iVar1 + 0x74))))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0053f4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x53f4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  F_00a5f2b0(param_1);
  uVar2 = F_005383b0(param_1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1);
    bVar1 = F_00ac83b0(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG,param_2,param_3,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),
                         uVar4,uVar5);
    return CONCAT31(extraout_var,bVar1);
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_0053f550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053f550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x53f550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x93))) != '\0') {
    if (param_1 == 0) {
      F_0053f150(this GEN_EDX_FWD);
      return;
    }
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
    if ((7 < uVar1) ||
       ((*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 0 &&
        ((7 < uVar1 || (*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 3)))))) {
      *((int *)GEN_TOP(((int)this + 0x44))) = param_1;
    }
  }
  return;
}

/* ref: FUN_0053f5a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53f5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = F_00ab1290(param_1,param_2);
  if (*((char *)GEN_TOP(((int)this + 0x93))) != '\0') {
    if (uVar2 == 0) {
      uVar2 = F_0053f150(this GEN_EDX_ARG);
      return uVar2;
    }
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x2fd8)));
    if ((7 < uVar1) ||
       ((*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 0 &&
        ((7 < uVar1 || (*((int *)GEN_TOP(((int)this + uVar1 * 4 + 0x2fb8))) != 3)))))) {
      *((uint *)GEN_TOP(((int)this + 0x44))) = uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0053f6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f6f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x53f6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 == 0x49) || (in_ecx[2] != param_2)) {
    in_ecx[1] = 0;
    *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x109c7c8));
  }
  in_ecx[2] = param_2;
  return param_2;
}

/* ref: FUN_0053f720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x53f720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  float fVar1;
  uint uVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)this - (float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))))));
  *(float *)this = fVar1;
  if (((float10)fVar1 <= (float10)0) &&
     ((*((int *)GEN_TOP(((int)this + 4))) == 0 || (*((int *)GEN_TOP(((int)this + 4))) == 1)))) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
    *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x109c7cc));
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0xc))))(param_1,param_2,param_3);
  if ((uVar2 == 0x49) || (*((uint *)GEN_TOP(((int)this + 8))) != uVar2)) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x109c7c8));
  }
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
  return uVar2;
}

/* ref: FUN_0053f7a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053f7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53f7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cae8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[2])REFP(0x109c9e8));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 1;
  F_0054d740(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xfb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x151c))) = 0;
  F_0054f210(((undefined *)GEN_TOP(((int)this + 0x1a80))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x2fe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2fdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2fe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2fe4))) = 0;
  return (uint)this;
}

/* ref: FUN_0053f810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053f810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x53f810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if ((uVar2 != 0) && (uVar2 == 2)) {
    bVar1 = F_00538f30(this GEN_EDX_FWD);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00aa0210(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0,0);
      bVar1 = F_00534040(uVar2);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 == 0) {
        uVar2 = CONCAT31(extraout_var_00,1);
        goto LAB_0053f847;
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_0053f847: ;
  if ((char)uVar2 != *((char *)GEN_TOP(((int)this + 0x3c)))) {
    *((char *)GEN_TOP(((int)this + 0x3c))) = (char)uVar2;
    uVar2 = F_00538d00(this GEN_EDX_ARG);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_0053f860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53f860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = 0;
  iVar3 = -0x20000000;
  if (param_2 == 0) {
LAB_0053f882: ;
    F_00539180(this GEN_EDX_FWD,param_1,iVar3,iVar4);
  }
  else {
    iVar3 = *((int *)GEN_TOP((param_2 + 8)));
    iVar4 = *((int *)GEN_TOP((param_2 + 0xc)));
    if (*((char *)GEN_TOP((param_2 + 0x10))) == '\0') goto LAB_0053f882;
  }
  if (iVar3 == -0x20000000) {
    uVar1 = REFG(undefined4, 0x1379694);
    if (iVar4 != 0) goto LAB_0053f8c5;
  }
  else {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,iVar3,iVar4);
  }
  if (uVar1 != 0) {
    uVar2 = F_006b8c00();
    F_006f7660(uVar2 GEN_EDX_ARG,uVar1,(char)param_1);
  }
LAB_0053f8c5: ;
  uVar5 = F_00427d90();
  *((ulonglong *)GEN_TOP(((int)this + 0x50))) = uVar5;
  return (uint)uVar5;
}

/* ref: FUN_0053f8e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0053f8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53f8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    return;
  }
  uVar4 = 0;
  uVar3 = 0xe0000000;
  if (param_2 != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((param_2 + 8)));
    uVar4 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    if (*((char *)GEN_TOP((param_2 + 0x10))) != '\0') goto LAB_0053f914;
  }
  F_00539180(this GEN_EDX_FWD,param_1,uVar3,uVar4);
LAB_0053f914: ;
  bVar1 = F_00a9f620(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  if ((bVar1 == 0) &&
     ((uVar2 = F_00ab28a0(param_1), uVar2 == 0 || (*((char *)GEN_TOP((uVar2 + 0x2d))) == '\0')))) {
    *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 0;
  }
  return;
}

/* ref: FUN_0053f940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0053f940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53f940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    uVar4 = F_00ab2a20(param_1);
    if (uVar4 == 0) {
      return 0;
    }
    bVar3 = *((byte *)GEN_TOP((uVar4 + 6)));
    if (bVar3 == 0) {
      return CONCAT31((int3)(uVar4 >> 8),bVar3);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
    bVar2 = F_00539510((uint)bVar3);
    if (((1 < iVar1 - 0xbU) || (bVar3 = F_00539490((uint)bVar3), bVar3 == 0)) &&
       ((1 < iVar1 - 0xdU || (bVar2 == 0)))) {
      uVar4 = 0;
      do {
        uVar5 = F_00aa0680(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar4,0);
        if ((uVar5 != 0) && (*((char *)GEN_TOP((uVar5 + 0xd))) == '\0')) {
          F_00aa0100(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar4,0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xe);
    }
  }
  uVar4 = F_00aa0000(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1,param_2,0,0,0);
  *((undefined1 *)GEN_TOP(((int)this + 200))) = 1;
  return uVar4;
}

/* ref: FUN_0053fa10 */
GEN_OWN GEN_FRAME uint F_0053fa10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x53fa10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = param_1;
LAB_0053fa20: ;
  if ((((uVar3 == param_2) && (param_4 == '\0')) && (0 < (int)uVar3)) &&
     (((int)uVar3 < 7 || (uVar3 == 10)))) {
    return param_2;
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 2: ;
  case 5: ;
  case 8: ;
  case 0xb: ;
  case 0xd: ;
    if (1 < uVar3 - 0xb) {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 3: ;
      case 6: ;
      case 9: ;
      case 0xc: ;
      case 0xe: ;
        goto switchD_0053fa6d_caseD_3;
      default: ;
        break;
      }
    }
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 3: ;
  case 6: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
    if (1 < uVar3 - 0xb) {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 2: ;
      case 5: ;
      case 8: ;
      case 0xb: ;
      case 0xd: ;
        goto switchD_0053fa6d_caseD_3;
      }
    }
  }
  if ((uVar3 == 10) || (param_2 == 10)) goto switchD_0053fa6d_caseD_3;
  uVar1 = param_2;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
    bVar2 = F_00539510(param_2);
    uVar1 = param_2;
    if (bVar2 != 0) {
      bVar2 = F_005345a0(param_2);
      if (bVar2 == 0) {
        bVar2 = F_00534560(param_2);
        uVar1 = param_2;
        if (bVar2 != 0) {
          uVar1 = 0xd;
        }
      }
      else {
        uVar1 = 0xe;
      }
    }
    break;
  case 2: ;
    if ((param_2 == 5) || (param_2 == 8)) {
      uVar1 = param_2;
      if (param_4 != '\0') {
        uVar1 = 0xb;
      }
    }
    else {
      uVar1 = 0xb;
    }
    break;
  case 3: ;
    if ((param_2 == 6) || (param_2 == 9)) {
      uVar1 = param_2;
      if (param_4 != '\0') {
        uVar1 = 0xc;
      }
    }
    else {
      uVar1 = 0xc;
    }
    break;
  case 4: ;
  case 7: ;
  case 0xb: ;
  case 0xc: ;
    uVar1 = 1;
    break;
  case 5: ;
  case 8: ;
  case 0xd: ;
    uVar1 = 2;
    break;
  case 6: ;
  case 9: ;
  case 0xe: ;
    uVar1 = 3;
    break;
  case 10: ;
    goto switchD_0053fac4_caseD_a;
  }
switchD_0053fac4_caseD_f: ;
  uVar3 = uVar1;
  if ((((param_5 < 1) || (uVar3 == param_2)) || ((uVar3 != 1 && ((uVar3 != 2 && (uVar3 != 3)))))) ||
     ((param_4 != '\0' && (uVar3 == param_3)))) {
    return uVar3;
  }
  param_5 = param_5 - 1;
  goto LAB_0053fa20;
switchD_0053fa6d_caseD_3: ;
  uVar1 = param_2;
  if (uVar3 != 0xf) {
switchD_0053fac4_caseD_a: ;
    uVar1 = 0xf;
  }
  goto switchD_0053fac4_caseD_f;
}

/* ref: FUN_0053fc20 */
GEN_OWN GEN_FRAME uint F_0053fc20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x53fc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
  case 5: ;
  case 8: ;
  case 0xb: ;
  case 0xd: ;
    if ((param_1 < 0xb) || (0xc < param_1)) {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 3: ;
      case 6: ;
      case 9: ;
      case 0xc: ;
      case 0xe: ;
        goto switchD_0053fc5b_caseD_3;
      default: ;
        break;
      }
    }
  }
  goto code_r0x0053fc6a;
switchD_0053fc5b_caseD_3: ;
  if (param_1 != 0xf) {
    return param_2;
  }
switchD_0053fcb1_caseD_f: ;
  if (param_2 == 0xf) {
    return 0xf;
  }
  goto switchD_0053fcb1_caseD_2;
code_r0x0053fc6a: ;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 3: ;
  case 6: ;
  case 9: ;
  case 0xc: ;
  case 0xe: ;
    if ((param_1 < 0xb) || (0xc < param_1)) {
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 2: ;
      case 5: ;
      case 8: ;
      case 0xb: ;
      case 0xd: ;
        goto switchD_0053fc5b_caseD_3;
      }
    }
  }
  if ((param_1 == 10) || (param_2 == 10)) goto switchD_0053fc5b_caseD_3;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    bVar1 = F_00539510(param_2);
    if ((bVar1 == 0) ||
       ((bVar1 = F_005345a0(param_2), bVar1 == 0 && (bVar1 = F_00534560(param_2), bVar1 == 0))))
    goto switchD_0053fcb1_caseD_f;
    break;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
    break;
  case 10: ;
    goto switchD_0053fcb1_caseD_a;
  default: ;
    goto switchD_0053fcb1_caseD_f;
  }
switchD_0053fcb1_caseD_2: ;
  bVar1 = F_00539510(param_1);
  if (bVar1 != 0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 2: ;
    case 5: ;
    case 8: ;
    case 0xb: ;
    case 0xd: ;
      return 0xb;
    }
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 3: ;
    case 6: ;
    case 9: ;
    case 0xc: ;
    case 0xe: ;
      return 0xc;
    default: ;
      return 0;
    }
  }
  bVar1 = F_00539490(param_1);
  if (bVar1 == 0) {
    if (((param_1 < 0xb) || (0xc < param_1)) && ((param_1 < 0xd || (0xe < param_1)))) {
      if (param_1 != 0xf) {
        return 0;
      }
switchD_0053fcb1_caseD_a: ;
      return param_2;
    }
    if ((param_1 < 0xb) || (0xc < param_1)) {
      bVar1 = F_00534600(param_1);
      if (bVar1 == 0) {
        return 0;
      }
      bVar1 = F_00534560(param_1);
      if (bVar1 == 0) {
        bVar1 = F_005345a0(param_1);
        if (bVar1 == 0) {
          return 0;
        }
        return 0xc;
      }
      return 0xb;
    }
  }
  bVar1 = F_00539510(param_2);
  if (bVar1 == 0) {
    return 1;
  }
  bVar1 = F_00534560(param_2);
  if (bVar1 == 0) {
    bVar1 = F_005345a0(param_2);
    if (bVar1 == 0) {
      return 0;
    }
    return 0xe;
  }
  return 0xd;
}

/* ref: FUN_0053fe90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0053fe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x53fe90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 100)));
  if ((((uVar2 != 0) && (param_1 == uVar2)) && (uVar2 == 1)) &&
     (uVar2 = F_00ab2a20(*((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x14))) * 4 + 0x1c)))),
     *((char *)GEN_TOP((uVar2 + 7))) != '\0')) {
    F_00aa4270(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),
                 (int)this + 0x70,0);
    *((uint *)GEN_TOP(((int)this + 0x14))) = param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0xf) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2ec8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2ec8))), REFG(float, 0x109cb08));
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x14))) * 4 + 0x1c)));
    F_0054d840(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x70);
    if (param_1 == 0xf) {
      uVar2 = F_00ab2a20(uVar3);
      F_00aa0100(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((uVar2 + 7))),0);
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
    }
    F_00aa4270(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar3,((undefined1 *)(gen_frame + 0x0)),0);
  }
  uVar2 = F_00aa0210(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0,0);
  if (uVar2 != 0) goto LAB_0053ffc2;
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  bVar1 = F_00539490(uVar3);
  if (bVar1 == 0) {
    bVar1 = F_00539510(uVar3);
    if (bVar1 != 0) {
      switch((unsigned int)(uintptr_t)(uVar3)) {
      case 2: ;
      case 5: ;
      case 8: ;
      case 0xb: ;
      case 0xd: ;
        uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
        break;
      default: ;
        bVar1 = F_00534560(uVar3);
        if (bVar1 == 0) goto LAB_0053ffbc;
        uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
      }
      goto LAB_0053ffb4;
    }
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
LAB_0053ffb4: ;
    F_00aa4270(*((undefined4 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar3,0,0);
  }
LAB_0053ffbc: ;
  *((uint *)GEN_TOP(((int)this + 0x14))) = param_2;
  uVar2 = param_2;
LAB_0053ffc2: ;
  if ((*((char *)GEN_TOP(((int)this + 0x60))) != '\0') &&
     (*((int *)GEN_TOP(((int)this + 0x14))) == *((int *)GEN_TOP(((int)this + 100))))) {
    uVar2 = F_005346b0(this GEN_EDX_ARG,param_1);
    *((undefined1 *)GEN_TOP(((int)this + 0x60))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00540000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00540000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x540000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 100)));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  if ((iVar2 == 1) || (iVar2 == 4)) {
    uVar3 = F_0053a190(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  else {
    uVar3 = F_0053a330(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 100))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = (*(undefined4 *)(gen_frame + 0x8));
  return uVar3;
}

/* ref: FUN_005400e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005400e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5400e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x90)));
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = uVar1;
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)param_1 + 0x88)));
  fVar2 = *((float *)GEN_TOP(((int)param_1 + 0x8c)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(float *)(gen_frame + 0x8)) = fVar2;
  if (param_3 != '\0') {
    F_0053a190(param_1 GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  F_00535740(param_2,(*(float *)(gen_frame + 0x8)),(float)(float10)0);
  F_00535690(param_2,(*(float *)(gen_frame + 0x4)));
  return (uint)param_2;
}

/* ref: FUN_00540170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00540170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x540170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  fVar2 = *((float *)GEN_TOP(((int)this + 100)));
  F_00535740(param_1,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x68)))),(float)(float10)0);
  F_00535690(param_1,fVar2);
  if ((*((int *)GEN_TOP(((int)this + 0x20))) == 1) || (*((int *)GEN_TOP(((int)this + 0x20))) == 4)) {
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    F_004f03f0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_004eea10(param_1 GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)param_1;
}

/* ref: FUN_00540250 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00540250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x540250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  fVar2 = *((float *)GEN_TOP(((int)this + 100)));
  F_00535740(param_1,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x68)))),(float)(float10)0);
  F_00535690(param_1,fVar2);
  if ((*((int *)GEN_TOP(((int)this + 0x20))) != 1) && (*((int *)GEN_TOP(((int)this + 0x20))) != 4)) {
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    F_004eea10(param_1 GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)param_1;
}

/* ref: FUN_00540320 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00540320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x540320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  fVar2 = *((float *)GEN_TOP(((int)this + 0x88)));
  F_00535740(param_1,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x8c)))),(float)(float10)0);
  F_00535690(param_1,fVar2);
  if ((*((int *)GEN_TOP(((int)this + 0x20))) == 1) || (*((int *)GEN_TOP(((int)this + 0x20))) == 4)) {
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    F_004f03f0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_004eea10(param_1 GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)param_1;
}

/* ref: FUN_00540400 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00540400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x540400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  fVar2 = *((float *)GEN_TOP(((int)this + 0x88)));
  F_00535740(param_1,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x8c)))),(float)(float10)0);
  F_00535690(param_1,fVar2);
  if ((*((int *)GEN_TOP(((int)this + 0x20))) != 1) && (*((int *)GEN_TOP(((int)this + 0x20))) != 4)) {
    puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    F_004eea10(param_1 GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)param_1;
}

/* ref: FUN_005404e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005404e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5404e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0x20))) != 1) && (*((int *)GEN_TOP(((int)this + 0x20))) != 4)) {
    param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 100)));
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    return (uint)param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 100)));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  F_0053a330(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  return (uint)param_1;
}

/* ref: FUN_00540560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00540560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x540560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0x20))) != 1) && (*((int *)GEN_TOP(((int)this + 0x20))) != 4)) {
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
    F_0053a190(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    return (uint)param_1;
  }
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 100)));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  return (uint)param_1;
}

/* ref: FUN_005405e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005405e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5405e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0x20))) != 1) && (*((int *)GEN_TOP(((int)this + 0x20))) != 4)) {
    param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
    return (uint)param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  F_0053a330(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  return (uint)param_1;
}

/* ref: FUN_00540660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00540660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x540660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0x20))) != 1) && (*((int *)GEN_TOP(((int)this + 0x20))) != 4)) {
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
    F_0053a190(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    return (uint)param_1;
  }
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
  return (uint)param_1;
}

/* ref: FUN_005409a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005409a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5409a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float fVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x54)));
  if (uVar5 == 0) {
    return 0;
  }
  pvVar3 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 0x10)));
  if ((pvVar3 == ((undefined *)GEN_TOP(0x0))) || (pvVar3 = ((undefined *)GEN_TOP(F_00a5f500(pvVar3 GEN_EDX_FWD))), pvVar3 == ((undefined *)GEN_TOP(0x0)))) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = F_00689180(pvVar3 GEN_EDX_ARG,&REFG(undefined, 0x109c898));
  }
  if ((((uVar5 != uVar4) && (1 < *((int *)GEN_TOP(((int)this + 0x20))) - 2U)) && (bVar2 = F_00535b40(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG), bVar2 != 0)) && (uVar5 = F_00535990(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x54)))), uVar5 != 0xffffffff)) {
    if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
      uVar5 = F_005404e0(((undefined *)GEN_TOP((uVar5 * 0x300 + 0x20 + ((int)(uint)(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)))))))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      fVar1 = ((float)GEN_TOF(ABS((float10)*((float *)GEN_TOP((uVar5 + 4))))));
      (*(float *)(gen_frame + 0xc)) = fVar1;
      if (!((float10)*(float *)&REFG(undefined, 0x1305cb8) < (float10)fVar1)) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00540a50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00540a50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x540a50u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL(0x30, 0);
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x18)) = param_3;
  (*(float *)(gen_frame + 0x1c)) = param_4;
  F_005351c0(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x50))) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)param_1 + 0x54))));
  if ((float10)(*(float *)(gen_frame + 0x8)) < (float10)(*(float *)(gen_frame + 0x18))) {
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x8));
  }
  fVar4 = (*(float *)(gen_frame + 0x18));
  if ((float10)(*(float *)(gen_frame + 0x18)) < (float10)(*(float *)(gen_frame + 0xc))) {
    fVar4 = (*(float *)(gen_frame + 0xc));
  }
  if ((float10)(*(float *)(gen_frame + 0x0)) < (float10)(*(float *)(gen_frame + 0x1c))) {
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x0));
  }
  fVar3 = (*(float *)(gen_frame + 0x1c));
  if ((float10)(*(float *)(gen_frame + 0x1c)) < (float10)(*(float *)(gen_frame + 0x4))) {
    fVar3 = (*(float *)(gen_frame + 0x4));
  }
  iVar1 = *((int *)GEN_TOP(((int)param_1 + 0x20)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar3;
  if ((iVar1 == 1) || (uVar2 = iVar1 - 4, uVar2 == 0)) {
    uVar2 = F_0053a190(param_1 GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
  }
  *((float *)GEN_TOP(((int)param_1 + 100))) = (*(float *)(gen_frame + 0x18));
  *((float *)GEN_TOP(((int)param_1 + 0x68))) = (*(float *)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00540b30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00540b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(undefined1 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x540b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x70, 0);
  float fVar1;
  float fVar2;
  byte bVar4;
  uint uVar5;
  undefined2 extraout_var = 0;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  if (param_4 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_4 = 0;
  }
  fVar10 = ((float)GEN_TOF(((float10)param_1[2] * (float10)param_1[2] +
                  ((float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1]
                  ))));
  (*(float *)(gen_frame + 0x58)) = fVar10;
  fVar10 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar10))));
  (*(float *)(gen_frame + 0x58)) = fVar10;
  fVar9 = (float10)0;
  fVar8 = (float10)fVar10;
  bVar6 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar9);
  bVar7 = bVar6 || fVar8 == fVar9;
  uVar5 = CONCAT22((short)((uint)((int)(uintptr_t)param_1) >> 0x10),
                   CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar9 <= fVar8),(char)param_1));
  if (bVar6 == bVar7) {
    uVar5 = F_005351c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x40)),*((undefined4 *)GEN_TOP(((int)this + 0x54))));
    (*(float *)(gen_frame + 0x58)) = *param_2;
    fVar9 = (float10)*param_2;
    if (((float10)(*(float *)(gen_frame + 0x4c)) <= fVar9) && (fVar9 <= (float10)(*(float *)(gen_frame + 0x48)))) {
      (*(float *)(gen_frame + 0x5c)) = *param_3;
      fVar9 = (float10)*param_3;
      if (((float10)(*(float *)(gen_frame + 0x44)) <= fVar9) &&
         ((!GEN_ISNAN((float10)(*(float *)(gen_frame + 0x40))) && !GEN_ISNAN(fVar9)) && !((float10)(*(float *)(gen_frame + 0x40)) < fVar9))) {
        return uVar5;
      }
    }
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1305cd0);
    if (*((char *)GEN_TOP(((int)this + 0x2f0))) != '\0') {
      (*(float *)(gen_frame + 0x58)) = (float)((float10)REFG(float, 0x1305cd0) * (float10)*(double *)&REFG(undefined, 0x1094818));
    }
    fVar10 = *param_3;
    (*(float *)(gen_frame + 0x5c)) = fVar10;
    (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(ABS((float10)fVar10)));
    if ((float10)(*(float *)(gen_frame + 0x58)) < (float10)((float)GEN_TOF(ABS((float10)fVar10)))) {
      if ((((*(float *)(gen_frame + 0x40)) <= 0.0) && (!GEN_ISNAN(fVar10) && !(fVar10 <= 0.0))) ||
         ((0.0 <= (*(float *)(gen_frame + 0x44)) && (fVar10 < 0.0)))) {
        *param_2 = 0.0;
        *param_3 = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1305c60);
        (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1305c64);
        (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1305c68)));
        (*(float *)(gen_frame + 0x30)) = *param_1;
        (*(float *)(gen_frame + 0x34)) = param_1[1];
        (*(float *)(gen_frame + 0x38)) = param_1[2];
        F_004bd580(&(*(float *)(gen_frame + 0x30)) GEN_EDX_ARG);
        bVar4 = F_0054ce40(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x30)));
        fVar10 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x28)) +
                        ((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x20)) +
                        (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x24))))));
        (*(float *)(gen_frame + 0x54)) = fVar10;
        fVar10 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar10))));
        (*(float *)(gen_frame + 0x54)) = fVar10;
        fVar9 = (float10)0;
        fVar8 = (float10)fVar10;
        bVar6 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar9);
        bVar7 = bVar6 || fVar8 == fVar9;
        if (bVar6 != bVar7) {
          return CONCAT22(extraout_var,
                          CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar9 <= fVar8),bVar4));
        }
        F_004bd580(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
        F_0054cfd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),REFG(float, 0x109ca64));
        uVar5 = F_004f4080(&(*(float *)(gen_frame + 0x10)),&REFG(float, 0x1305c60),((undefined1 *)(gen_frame + 0x0)));
        fVar10 = (*(float *)(gen_frame + 0x44));
        if (*(float *)&REFG(undefined, 0x1088114) < *param_3) {
          fVar10 = (*(float *)(gen_frame + 0x40));
        }
        (*(float *)(gen_frame + 0x58)) = fVar10;
        fVar9 = ((float10)GEN_TOD(fsin((float10)fVar10)));
        fVar10 = (float)fVar9;
        (*(float *)(gen_frame + 0x54)) = fVar10;
        bVar6 = GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
        bVar7 = bVar6 || (*(float *)(gen_frame + 0x14)) == *(float *)&REFG(undefined, 0x1088114);
        (*(float *)(gen_frame + 0x5c)) = fVar10;
        uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                         CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U |
                                  !(*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x14))),(char)uVar5));
        if (bVar6 != bVar7) {
          return uVar5;
        }
        fVar1 = (float)((float10)fVar10 / (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x54)) = fVar1;
        fVar1 = (float)((float10)fVar1 * (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x58)) = fVar1;
        fVar9 = ((float10)GEN_TOD(pow((float10)fVar10,(float10)*(double *)&REFG(undefined, 0x1092098))));
        (*(float *)(gen_frame + 0x54)) = (float)fVar9;
        fVar2 = (float)((float10)1 - (float10)(float)fVar9);
        (*(float *)(gen_frame + 0x54)) = fVar2;
        (*(float *)(gen_frame + 0x50)) = fVar2;
        fVar9 = ((float10)GEN_TOD(pow((float10)fVar1,(float10)*(double *)&REFG(undefined, 0x1092098))));
        (*(float *)(gen_frame + 0x54)) = (float)fVar9;
        fVar2 = (float)((float10)fVar2 - (float10)(float)fVar9);
        (*(float *)(gen_frame + 0x50)) = fVar2;
        fVar9 = (float10)fVar2;
        if ((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar9)) && !((float10)0 <= fVar9)) {
          return uVar5;
        }
        fVar2 = ((float)GEN_TOF(GEN_X87(SQRT(fVar9))));
        (*(float *)(gen_frame + 0x50)) = fVar2;
        (*(float *)(gen_frame + 0x8)) = fVar2;
        (*(float *)(gen_frame + 0x38)) = fVar2;
        (*(float *)(gen_frame + 0x30)) = fVar1;
        (*(float *)(gen_frame + 0x34)) = fVar10;
        F_00535480(&(*(float *)(gen_frame + 0x30)),param_2,param_3);
      }
      uVar5 = 0;
      if (param_4 != ((undefined1 *)GEN_TOP(0x0))) {
        *param_4 = 1;
        return (uint)param_4;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_00540e20 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00540e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x540e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x90, 0);
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  int iVar5;
  undefined4 * puVar6;
  undefined * this_00;
  undefined4 * puVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  undefined * pvVar4;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x74)));
  (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(((int)this + 0x70)));
  (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP(((int)this + 0x78)));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
  puVar6 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
  puVar7 = ((undefined4 *)(gen_frame + 0x30));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  F_004eea10(&(*(float *)(gen_frame + 0x0)) GEN_EDX_FWD,(uint)((undefined4 *)(gen_frame + 0x30)));
  fVar10 = (float)((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  fVar10 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar10))));
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  (*(float *)(gen_frame + 0x20)) = fVar10;
  iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x20)));
  (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x70)));
  (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x74)));
  (*(float *)(gen_frame + 0x18)) = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x78)));
  if ((iVar5 == 1) || (this_00 = (*(undefined * PTR32 *)(gen_frame + 0x28)), iVar5 == 4)) {
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
    puVar7 = ((undefined4 *)(gen_frame + 0x30));
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    F_004f03f0(((undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    F_004eea10(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x30)));
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  }
  fVar10 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  fVar10 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar10))));
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
  if ((float10)fVar10 < (float10)(*(float *)(gen_frame + 0x20))) {
    (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x18));
    (*(float *)(gen_frame + 0x20)) = fVar10;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this_00 + 0xb4)));
  fVar10 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x50))) + 0x10))) + 0xc0)));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(uVar2));
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
  if (REFG(float, 0x1087f04) < fVar10) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar10)));
  }
  bVar3 = F_00539fe0(this_00 GEN_EDX_ARG);
  pvVar4 = ((undefined *)GEN_TOP((uint)bVar3));
  fVar10 = REFG(float, 0x1305c8c);
  if (bVar3 != 0) {
    fVar10 = REFG(float, 0x1305c88);
  }
  fVar8 = (float10)(*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x24)))));
  if (fVar8 <= (float10)*(double *)&REFG(undefined, 0x109cac8) * fVar9) {
    if (uVar2 == 1) goto LAB_005410f0;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x1));
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(double *)&REFG(undefined, 0x10944e0) * fVar9))));
    if (fVar8 <= (float10)(float)((float10)*(double *)&REFG(undefined, 0x10944e0) * fVar9)) {
      if (uVar2 == 1) {
        if (!(fVar8 < fVar9 * (float10)fVar10)) {
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x2));
        }
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x2));
      }
    }
    else {
      (*(float *)(gen_frame + 0x2c)) = (float)((float10)REFG(double, 0x10944b8) * fVar9);
      if (fVar8 <= (float10)(float)((float10)REFG(double, 0x10944b8) * fVar9)) {
        if (uVar2 == 2) {
          (*(float *)(gen_frame + 0x2c)) = (float)(fVar9 * (float10)*(float *)&REFG(undefined, 0x1305c90));
          if (!(fVar8 < (float10)(float)(fVar9 * (float10)*(float *)&REFG(undefined, 0x1305c90)))) {
            (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x3));
          }
        }
        else {
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x3));
        }
      }
      else if ((uVar2 != 3) ||
              ((*(float *)(gen_frame + 0x2c)) = (float)(fVar9 * (float10)*(float *)&REFG(undefined, 0x1305c94)),
              !(fVar8 < (float10)(float)(fVar9 * (float10)*(float *)&REFG(undefined, 0x1305c94))))) {
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x4));
      }
    }
  }
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  if ((*(undefined * PTR32 *)(gen_frame + 0x28)) != ((undefined *)GEN_TOP(uVar2))) {
    if (((uVar2 == 1) && ((*(undefined * PTR32 *)(gen_frame + 0x28)) == ((undefined *)GEN_TOP(0x2)))) && ((*(float *)(gen_frame + 0x20)) <= REFG(float, 0x1087f04))) {
      fVar10 = *((float *)GEN_TOP(((int)this_00 + 0xb8)));
      (*(float *)(gen_frame + 0x2c)) = fVar10;
      if (!(*(float *)&REFG(undefined, 0x109c85c) <= fVar10)) {
        *((float *)GEN_TOP(((int)this_00 + 0xb8))) =
             ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) + (float10)fVar10)));
        return 2;
      }
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0xb4))) = (*(undefined * PTR32 *)(gen_frame + 0x28));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xb8))) = 0;
  }
LAB_005410f0: ;
  return (byte)pvVar4;
}

/* ref: FUN_00541110 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00541110(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x541110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  uint uVar1;
  float10 fVar2;
  float fVar3;
  
  *((float *)GEN_TOP(((int)param_1 + 0xcc))) = GEN_FLT_TO(*((float *)GEN_TOP(((int)param_1 + 0xcc))), REFG(float, 0x1090708));
  if ((*((char *)GEN_TOP(((int)param_1 + 0x94))) != '\0') && (*((char *)GEN_TOP(((int)param_1 + 0x22c))) == '\0')) {
    F_005405e0(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    fVar3 = REFG(float, 0x1305ca0);
    if ((*((int *)GEN_TOP(((int)param_1 + 0xb4))) != 1) &&
       (fVar3 = REFG(float, 0x1305ca4), *((int *)GEN_TOP(((int)param_1 + 0xb4))) != 2)) {
      fVar3 = REFG(float, 0x1305ca8);
    }
    (*(float *)(gen_frame + 0x1c)) = fVar3;
    fVar3 = *((float *)GEN_TOP(((int)param_1 + 0x228)));
    (*(float *)(gen_frame + 0x18)) = fVar3;
    if (((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x1090708))) ==
         ((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x1090708))) || fVar3 == REFG(float, 0x1090708))) &&
       ((double)fVar3 < *(double *)&REFG(undefined, 0x10920a8))) {
      fVar2 = F_00534ab0(param_1 GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x18)) = (float)fVar2;
      fVar2 = (float10)(float)fVar2;
      if ((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar2)) && !((float10)0 < fVar2)) {
        return;
      }
      (*(float *)(gen_frame + 0x1c)) = (float)(fVar2 * (float10)(*(float *)(gen_frame + 0x1c)));
    }
    uVar1 = F_005404e0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 4))) - (float10)*((float *)GEN_TOP((uVar1 + 4))))));
    (*(float *)(gen_frame + 0x10)) = fVar3;
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 8))) - (float10)*((float *)GEN_TOP((uVar1 + 8))))));
    fVar2 = F_00aed220(fVar3);
    (*(float *)(gen_frame + 0x4)) = (float)fVar2;
    fVar2 = F_00aed220((*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x8)) = (float)fVar2;
    fVar2 = (float10)(float)fVar2;
    *((float *)GEN_TOP(((int)param_1 + 0xcc))) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) *
                                                                           (float10)(*(float *)(gen_frame + 0x4)) +
                                                                          fVar2 * fVar2)))))))) /
                (float10)(*(float *)(gen_frame + 0x1c)))));
    return;
  }
  return;
}

/* ref: FUN_00541240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00541240(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x541240u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(uint *)(gen_frame + 0x20)) = uVar1;
  fVar5 = (float10)param_2;
  uVar2 = (undefined2)(uVar1 >> 0x10);
  if (*((char *)GEN_TOP((param_1 + 0x5d))) == '\0') {
    fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0xbc)));
    bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
    bVar4 = bVar3 || fVar6 == fVar5;
    if (bVar3 != bVar4) {
      return CONCAT22(uVar2,CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),(char)uVar1));
    }
    *((undefined1 *)GEN_TOP((param_1 + 0x5d))) = 1;
  }
  else {
    bVar3 = GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x21c)))) || GEN_ISNAN(fVar5);
    if (bVar3 != (bVar3 || (float10)*((float *)GEN_TOP((param_1 + 0x21c))) == fVar5)) {
      fVar5 = (float10)param_3;
      fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x224)));
      bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
      bVar4 = bVar3 || fVar6 == fVar5;
      if (bVar3 != bVar4) {
        return CONCAT22(uVar2,CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),(char)uVar1)
                       );
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c038)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c800)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109c03c)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_0054e4e0(((undefined *)GEN_TOP((param_1 + 0x184))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)),4);
  uVar1 = F_0054e4e0(((undefined *)GEN_TOP((param_1 + 0x1c8))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),4);
  *((undefined4 *)GEN_TOP((param_1 + 0x218))) = *((undefined4 *)GEN_TOP((param_1 + 0xbc)));
  bVar3 = GEN_ISNAN(param_2);
  bVar4 = bVar3 || param_2 == 0.0;
  *((float *)GEN_TOP((param_1 + 0x21c))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x20c))) = 0;
  *((float *)GEN_TOP((param_1 + 0x224))) = param_3;
  if (bVar3 != bVar4) {
    *((undefined4 *)GEN_TOP((param_1 + 0xa0))) = *((undefined4 *)GEN_TOP((param_1 + 0x2e0)));
    *((undefined4 *)GEN_TOP((param_1 + 0xa4))) = *((undefined4 *)GEN_TOP((param_1 + 0x2e4)));
    *((undefined4 *)GEN_TOP((param_1 + 0xa8))) = *((undefined4 *)GEN_TOP((param_1 + 0x2e8)));
  }
  return CONCAT22((short)(uVar1 >> 0x10),
                  CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(0.0 <= param_2),(char)uVar1));
}

/* ref: FUN_00541390 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00541390(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x541390u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float10 fVar1;
  
  if ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_2 == *(float *)&REFG(undefined, 0x1088114))) {
    return (float10)0;
  }
  F_005351c0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x50))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((param_1 + 0x54))));
  fVar1 = (float10)param_2;
  if ((!((float10)(*(float *)(gen_frame + 0x8)) < fVar1)) && (!(fVar1 < (float10)(*(float *)(gen_frame + 0xc))))) {
    (*(float *)(gen_frame + 0x1c)) = (float)(fVar1 - (float10)*(double *)&REFG(undefined, 0x1080228));
    fVar1 = F_00aed220((float)(fVar1 - (float10)*(double *)&REFG(undefined, 0x1080228)));
    if (fVar1 < (float10)0) {
      (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
      return (float10)REFG(float, 0x1087f04);
    }
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1090708);
    return (float10)REFG(float, 0x1090708);
  }
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_2 <= *(float *)&REFG(undefined, 0x1088114))) {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    return (float10)REFG(float, 0x1087f04);
  }
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1090708);
  return (float10)REFG(float, 0x1090708);
}

/* ref: FUN_00541570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00541570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x541570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[0]);
  F_00535480((*(uint *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)));
  (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) & 0xffffff;
  F_00540b30(this GEN_EDX_ARG,uVar1,&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),(int)&(*(uint *)&gen_args[0]) + 3);
  if (*((char *)GEN_TOP(((int)this + 0x2f0))) != (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3))) {
    *((char *)GEN_TOP(((int)this + 0x2f0))) = (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3));
  }
  if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)(gen_frame + 0x4));
  }
  if ((*(undefined4 * PTR32 *)&gen_args[2]) != ((undefined4 *)GEN_TOP(0x0))) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(undefined4 *)(gen_frame + 0x0));
  }
  return (uint)(*(undefined4 * PTR32 *)&gen_args[2]);
}

/* ref: FUN_005415e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005415e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5415e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if ((uVar2 == 0) || (*((char *)GEN_TOP((uVar2 + 0x65))) != '\x03')) {
      if (*((int *)GEN_TOP(((int)this + 0x924))) != -1) {
        *((undefined4 *)GEN_TOP(((int)this + 0x920))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0x924))) = 0xffffffff;
        *((undefined1 *)GEN_TOP(((int)this + 0x928))) = 0;
        this_00 = ((undefined *)GEN_TOP(((int)this + 0x20)));
        iVar3 = 3;
        do {
          F_0054eb10(this_00 GEN_EDX_ARG);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x300)));
          iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
      }
    }
    else {
      uVar2 = F_00a5f290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
      if (((*((byte *)GEN_TOP((uVar2 + 0x2dd2))) & 0x20) == 0) && (uVar2 = F_0053a4e0(this GEN_EDX_ARG), uVar2 != 0)) {
        if (*(double *)&REFG(undefined, 0x1094810) < (double)*((float *)GEN_TOP(((int)this + 0x920)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0x920))) = 0;
        }
        bVar1 = F_00535b40(this GEN_EDX_ARG);
        if (bVar1 == 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0x920))) = 0;
          return 1;
        }
        *((float *)GEN_TOP(((int)this + 0x920))) =
             ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(int, 0x137104c) + 0x1198))) +
                    (float10)*((float *)GEN_TOP(((int)this + 0x920))))));
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005416c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005416c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5416c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * this;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x10))) GEN_EDX_FWD);
    if ((uVar1 == 0) || (*((char *)GEN_TOP((uVar1 + 0x65))) != '\x03')) {
      if (*((int *)GEN_TOP(((int)param_1 + 0x924))) != -1) {
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x920))) = 0;
        *((undefined4 *)GEN_TOP(((int)param_1 + 0x924))) = 0xffffffff;
        *((undefined1 *)GEN_TOP(((int)param_1 + 0x928))) = 0;
        this = ((undefined *)GEN_TOP(((int)param_1 + 0x20)));
        iVar5 = 3;
        do {
          F_0054eb10(this GEN_EDX_ARG);
          this = ((undefined *)GEN_TOP(((int)this + 0x300)));
          iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
      }
    }
    else {
      uVar1 = F_0053a4e0(param_1 GEN_EDX_ARG);
      if (uVar1 != 0) {
        uVar2 = param_2;
        uVar3 = param_2;
        if (param_2 == 0xffffffff) {
          uVar3 = 0;
          uVar2 = uVar1 - 1;
        }
        if ((int)uVar3 <= (int)uVar2) {
          fVar9 = 0.0;
          piVar4 = ((int *)GEN_TOP((uVar3 * 0x300 + 0x78 + (int)param_1)));
          iVar5 = (uVar2 - uVar3) + 1;
          param_2 = (uint)gen_fl2bits(param_3);
          fVar8 = REFG(float, 0x1090708);
          do {
            if ((*piVar4 != 0) &&
               ((*piVar4 != 2 ||
                (((GEN_ISNAN(gen_bits2f(param_2)) || GEN_ISNAN(fVar8)) ==
                  ((GEN_ISNAN(gen_bits2f(param_2)) || GEN_ISNAN(fVar8)) || gen_bits2f(param_2) == fVar8) &&
                 (bVar6 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(piVar4[0x73])))) || GEN_ISNAN((float10)param_3),
                 bVar6 == (bVar6 || ((float10)GEN_TOD(gen_bits2f(piVar4[0x73]))) == (float10)param_3))))))) {
              F_00539ed0(piVar4 - 0x16 GEN_EDX_ARG);
              if ((GEN_ISNAN(gen_bits2f(param_2)) || GEN_ISNAN(fVar9)) ==
                  ((GEN_ISNAN(gen_bits2f(param_2)) || GEN_ISNAN(fVar9)) || gen_bits2f(param_2) == fVar9)) {
                *((undefined1 *)GEN_TOP(((int)piVar4 + 0x1d7))) = 0;
              }
              else {
                *((undefined1 *)GEN_TOP(((int)piVar4 + 0x1d7))) = 1;
              }
              if ((char)piVar4[0x1b] == '\0') {
                bVar6 = GEN_ISNAN(gen_bits2f(piVar4[0x19])) || GEN_ISNAN(fVar9);
                if (bVar6 == (bVar6 || gen_bits2f(piVar4[0x19]) == fVar9)) {
                  if ((GEN_ISNAN(gen_bits2f(param_2)) || GEN_ISNAN(fVar8)) !=
                      ((GEN_ISNAN(gen_bits2f(param_2)) || GEN_ISNAN(fVar8)) || gen_bits2f(param_2) == fVar8)) {
                    fVar7 = F_00539cc0(piVar4 - 0x16 GEN_EDX_ARG);
                    param_2 = (uint)gen_fl2bits((float)fVar7);
                  }
                  F_00541240(piVar4 - 0x16 GEN_EDX_ARG,(float)(float10)0,GEN_ARGF(gen_bits2f(param_2)));
                  fVar9 = 0.0;
                  param_2 = (uint)gen_fl2bits(param_3);
                  fVar8 = REFG(float, 0x1090708);
                }
                else if (*((char *)GEN_TOP(((int)piVar4 + 5))) != '\0') {
                  F_00539f30(piVar4 - 0x16 GEN_EDX_ARG);
                }
              }
              *piVar4 = 2;
            }
            piVar4 = piVar4 + 0xc0;
            iVar5 = iVar5 - 1;
          } while (iVar5 != 0);
          return;
        }
      }
    }
  }
  return;
}

/* ref: FUN_00541850 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00541850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x541850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x20)));
  iVar2 = 3;
  do {
    uVar1 = F_0054eb10(this_00 GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x300)));
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00541880 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00541880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x541880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x924)));
  if (uVar1 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
      return;
    }
    uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (uVar1 == 0) {
      return;
    }
    if (*((char *)GEN_TOP((uVar1 + 0x65))) != '\x03') {
      return;
    }
    uVar1 = F_00688e80(uVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x924))) = uVar1;
  }
  if (uVar1 != 0) {
    iVar2 = param_2;
    iVar3 = param_2;
    if (param_2 == -1) {
      iVar3 = 0;
      iVar2 = uVar1 - 1;
    }
    if (iVar3 <= iVar2) {
      puVar4 = ((undefined4 *)GEN_TOP((iVar3 * 0x300 + 0x58 + (int)this)));
      iVar2 = (iVar2 - iVar3) + 1;
      do {
        *puVar4 = param_1;
        puVar4 = puVar4 + 0xc0;
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
    }
  }
  return;
}

/* ref: FUN_005418f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005418f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5418f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint in_ecx;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x924)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0xffffffff))) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
      return 0xffffffff;
    }
    in_ecx = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if (in_ecx == 0) {
      return 0;
    }
    if (*((char *)GEN_TOP((in_ecx + 0x65))) != '\x03') {
      return in_ecx;
    }
    puVar1 = ((undefined4 *)GEN_TOP(F_00688e80(in_ecx GEN_EDX_ARG)));
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x924))) = puVar1;
  }
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    iVar5 = param_2;
    iVar6 = param_2;
    if (param_2 == -1) {
      iVar5 = 0;
      iVar6 = (int)puVar1 - 1;
    }
    if (iVar5 <= iVar6) {
      if (3 < (iVar6 - iVar5) + 1) {
        iVar2 = iVar5 * 0x300;
        iVar4 = ((iVar6 - iVar5) - 3U >> 2) + 1;
        iVar5 = iVar5 + iVar4 * 4;
        puVar1 = ((undefined4 *)GEN_TOP((iVar2 + 0x68 + (int)this)));
        do {
          iVar4 = iVar4 - 1;
          puVar1[-2] = *param_1;
          puVar1[-1] = param_1[1];
          *puVar1 = param_1[2];
          puVar1[0xbe] = *param_1;
          puVar1[0xbf] = param_1[1];
          puVar1[0xc0] = param_1[2];
          puVar1[0x17e] = *param_1;
          puVar1[0x17f] = param_1[1];
          puVar1[0x180] = param_1[2];
          puVar1[0x23e] = *param_1;
          puVar1[0x23f] = param_1[1];
          puVar1[0x240] = param_1[2];
          puVar1 = puVar1 + 0x300;
        } while (iVar4 != 0);
      }
      puVar1 = param_1;
      if (iVar5 <= iVar6) {
        iVar6 = (iVar6 - iVar5) + 1;
        puVar3 = ((undefined4 *)GEN_TOP((iVar5 * 0x300 + 0x68 + (int)this)));
        do {
          iVar6 = iVar6 - 1;
          puVar3[-2] = *param_1;
          puVar3[-1] = param_1[1];
          *puVar3 = param_1[2];
          puVar3 = puVar3 + 0xc0;
        } while (iVar6 != 0);
      }
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00541a30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00541a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x541a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL(0x60, 0);
  byte bVar1;
  undefined * this_00;
  float * pfVar2;
  int iVar3;
  float10 fVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if ((param_2 != ((undefined *)GEN_TOP(0x0))) && (param_3 != 0)) {
    iVar3 = 1;
    if (*((int *)GEN_TOP((param_3 + 0x28))) != -1) {
      iVar3 = *((int *)GEN_TOP((param_3 + 0x28)));
    }
    F_00a60a40(param_2 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x30)),iVar3);
    bVar1 = F_00a5fcc0(param_2 GEN_EDX_ARG,2);
    if ((bVar1 != 0) && (*((int *)GEN_TOP((param_3 + 0x28))) == -1)) {
      F_00a60a40(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),2);
      if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
        this_00 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        this_00 = ((undefined *)GEN_TOP(F_00a5f290(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x10))) GEN_EDX_ARG)));
      }
      pfVar2 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_ARG)));
      (*(float *)(gen_frame + 0x20)) = *pfVar2;
      (*(float *)(gen_frame + 0x24)) = pfVar2[1];
      (*(float *)(gen_frame + 0x28)) = pfVar2[2];
      pfVar2 = ((float *)GEN_TOP(F_00534ec0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x10)))));
      (*(float *)(gen_frame + 0x30)) = *pfVar2;
      (*(float *)(gen_frame + 0x34)) = pfVar2[1];
      (*(float *)(gen_frame + 0x38)) = pfVar2[2];
    }
    bVar1 = F_0054ccb0(((undefined *)GEN_TOP((param_3 + 0x30))) GEN_EDX_ARG,&REFG(float, 0x1375ac0));
    if (bVar1 == 0) {
      (*(float *)(gen_frame + 0x20)) = *((float *)GEN_TOP((param_3 + 0x30)));
      (*(float *)(gen_frame + 0x24)) = *((float *)GEN_TOP((param_3 + 0x34)));
      (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP((param_3 + 0x38)));
      fVar4 = F_0053afe0((uint)param_2);
      F_00535690(&(*(float *)(gen_frame + 0x20)),(float)fVar4);
      (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) + (float10)(*(float *)(gen_frame + 0x38)));
    }
    *param_1 = (*(float *)(gen_frame + 0x30));
    param_1[1] = (*(float *)(gen_frame + 0x34));
    param_1[2] = (*(float *)(gen_frame + 0x38));
    return (uint)param_1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00541bc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00541bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x541bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  uint uVar2;
  undefined * this_00;
  bool bVar3;
  float10 fVar4;
  float * pfVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x924)));
  if (uVar2 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) goto LAB_00541c0e;
    uVar2 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if ((uVar2 == 0) || (*((char *)GEN_TOP((uVar2 + 0x65))) != '\x03')) goto LAB_00541c0e;
    uVar2 = F_00688e80(uVar2 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x924))) = uVar2;
  }
  if (uVar2 != 0) {
    pfVar5 = &(*(float *)(gen_frame + 0x0));
    this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
    F_00688ff0(this_00 GEN_EDX_ARG,pfVar5,param_2);
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)) +
                   ((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4))))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar4 = (float10)fVar1;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN((float10)0);
    if (bVar3 != (bVar3 || fVar4 == (float10)0)) {
      *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
      param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
      param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
      return (uint)param_1;
    }
    F_004bd580(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *param_1 = (*(float *)(gen_frame + 0x0));
    param_1[1] = (*(float *)(gen_frame + 0x4));
    param_1[2] = (*(float *)(gen_frame + 0x8));
    return (uint)param_1;
  }
LAB_00541c0e: ;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00541d00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00541d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x541d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x20, 0);
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x924)));
  if (uVar1 == 0xffffffff) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) goto LAB_00541d4e;
    uVar1 = F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
    if ((uVar1 == 0) || (*((char *)GEN_TOP((uVar1 + 0x65))) != '\x03')) goto LAB_00541d4e;
    uVar1 = F_00688e80(uVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x924))) = uVar1;
  }
  if ((uVar1 != 0) && (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0)))) {
    this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00689040(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
      *param_1 = (*(undefined4 *)(gen_frame + 0x0));
      param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
      param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
      return (uint)param_1;
    }
  }
LAB_00541d4e: ;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_00541e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00541e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x541e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00541d00(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00541e80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00541e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x541e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  float * pfVar5;
  
  pfVar5 = param_1;
  this_00 = ((undefined *)GEN_TOP(F_00a5f500(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD)));
  F_00688f50(this_00 GEN_EDX_ARG,pfVar5,param_2);
  uVar4 = F_00a5f290(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  if ((uVar4 != 0) && (*((char *)GEN_TOP((uVar4 + 0x2e08))) != '\0')) {
    bVar3 = F_0053a8a0(*((undefined4 *)GEN_TOP((uVar4 + 0x2e00))),REFG(undefined * PTR32, 0x1305b64),((undefined1 *)(gen_frame + 0x0)));
    if (bVar3 != 0) {
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) == ((undefined *)GEN_TOP(0x0))) {
        pfVar5 = (float *)&REFG(float, 0x1375ac0);
      }
      else {
        pfVar5 = ((float *)GEN_TOP(F_00a5fef0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG)));
      }
      (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)*pfVar5);
      fVar1 = pfVar5[1];
      (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar1);
      fVar2 = pfVar5[2];
      (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar2);
      *param_1 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)*pfVar5))))
      ;
      param_1[1] = ((float)GEN_TOF(((float10)param_1[1] +
                          (float10)(float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar1))));
      param_1[2] = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar2) +
                          (float10)param_1[2])));
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00541fa0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00541fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x541fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
    return 0.0;
  }
  uVar2 = F_00a5f500(pvVar1 GEN_EDX_FWD);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 200))) != 0)) {
    F_00a1e160(&(*(undefined * PTR32 *)(gen_frame + 0x0)),uVar2 + 0x40);
    return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x0)))));
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0xb0)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
  return ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1)));
}

/* ref: FUN_00542100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00542100(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x542100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  if (param_4 != '\0') {
    F_00540170(((undefined *)GEN_TOP((param_3 * 0x300 + 0x20 + param_1))) GEN_EDX_FWD,param_2);
    return param_2;
  }
  F_00540250(((undefined *)GEN_TOP((param_3 * 0x300 + 0x20 + param_1))) GEN_EDX_ARG,param_2);
  return param_2;
}

/* ref: FUN_00542140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00542140(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x542140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  if (param_4 != '\0') {
    F_00540320(((undefined *)GEN_TOP((param_3 * 0x300 + 0x20 + param_1))) GEN_EDX_FWD,param_2);
    return param_2;
  }
  F_00540400(((undefined *)GEN_TOP((param_3 * 0x300 + 0x20 + param_1))) GEN_EDX_ARG,param_2);
  return param_2;
}

/* ref: FUN_00542180 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00542180(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x542180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * this;
  undefined4 uVar1;
  int iVar2;
  
  this = ((undefined *)GEN_TOP((param_2 * 0x300 + 0x20 + param_1)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (param_3 == '\0') {
    if ((iVar2 != 1) && (iVar2 != 4)) {
      (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 100)));
      uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      F_0053a190(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      return (float10)(*(float *)(gen_frame + 0x4));
    }
  }
  else if ((iVar2 == 1) || (iVar2 == 4)) {
    (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 100)));
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
    F_0053a330(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    return (float10)(*(float *)(gen_frame + 0x4));
  }
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP(((int)this + 100)));
  return (float10)*((float *)GEN_TOP(((int)this + 100)));
}

/* ref: FUN_00542230 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00542230(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x542230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * this;
  float fVar1;
  int iVar2;
  
  this = ((undefined *)GEN_TOP((param_2 * 0x300 + 0x20 + param_1)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (param_3 == '\0') {
    if ((iVar2 != 1) && (iVar2 != 4)) {
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 100)));
      fVar1 = *((float *)GEN_TOP(((int)this + 0x68)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
      (*(float *)(gen_frame + 0x8)) = fVar1;
      F_0053a190(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      return (float10)(*(float *)(gen_frame + 0x8));
    }
  }
  else if ((iVar2 == 1) || (iVar2 == 4)) {
    (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    fVar1 = *((float *)GEN_TOP(((int)this + 0x68)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    F_0053a330(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    return (float10)(*(float *)(gen_frame + 0x8));
  }
  (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP(((int)this + 0x68)));
  return (float10)*((float *)GEN_TOP(((int)this + 0x68)));
}

/* ref: FUN_005422e0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005422e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5422e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP((param_2 * 0x300 + 0x20 + param_1)));
  if (param_3 != '\0') {
    uVar1 = F_005405e0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    return (float10)*((float *)GEN_TOP((uVar1 + 4)));
  }
  uVar1 = F_00540660(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return (float10)*((float *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_00542320 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00542320(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x542320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP((param_2 * 0x300 + 0x20 + param_1)));
  if (param_3 != '\0') {
    uVar1 = F_005405e0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    return (float10)*((float *)GEN_TOP((uVar1 + 8)));
  }
  uVar1 = F_00540660(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return (float10)*((float *)GEN_TOP((uVar1 + 8)));
}

/* ref: FUN_00542360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00542360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x542360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  double dVar2;
  
  bVar1 = F_00a34970(param_2 GEN_EDX_FWD,0x11f);
  if (bVar1 != 0) {
    *(undefined1 *)this = 0;
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x136);
  if (bVar1 == 0) {
    bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x137);
    if (bVar1 == 0) {
      bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x138);
      if (bVar1 == 0) {
        bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x139);
        if (bVar1 == 0) {
          bVar1 = F_00a34970(param_2 GEN_EDX_ARG,0x163);
          if (bVar1 == 0) {
            dVar2 = F_0053b360();
            if (GEN_ISNAN(dVar2) != (GEN_ISNAN(dVar2) || dVar2 == 0.0)) {
              *(undefined1 *)this = *(undefined1 *)this;
              return 0;
            }
          }
        }
      }
    }
  }
  *(byte *)this = *(byte *)this | 1;
  return 1;
}

/* ref: FUN_00542400 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00542400(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x542400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined * this;
  uint uVar2;
  bool bVar3;
  
  this = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  uVar2 = F_00a34e80(this GEN_EDX_ARG,6);
  if ((uVar2 != 0) &&
     (bVar3 = GEN_ISNAN((float)((float10)(int)uVar2 * (float10)*(double *)&REFG(undefined, 0x10928e8))) ||
              GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     bVar3 == (bVar3 || (float)((float10)(int)uVar2 * (float10)*(double *)&REFG(undefined, 0x10928e8)) ==
                        *(float *)&REFG(undefined, 0x1088114)))) {
    bVar1 = F_00a34870(param_2 GEN_EDX_ARG,0x11f);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00542470 */
GEN_OWN GEN_NOFRAME byte F_00542470(void)
{
  GEN_ENTER(0x542470u, 0u, 0u, 0u, 0u);
  byte bVar1;
  undefined * pvVar2;
  
  pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
  bVar1 = F_00a34870(pvVar2 GEN_EDX_ARG,0x11c);
  if (bVar1 == 0) {
    pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
    bVar1 = F_00a34870(pvVar2 GEN_EDX_ARG,0x11b);
    if (bVar1 == 0) {
      pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
      bVar1 = F_00a34870(pvVar2 GEN_EDX_ARG,0x119);
      if (bVar1 == 0) {
        pvVar2 = ((undefined *)GEN_TOP(F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG)));
        bVar1 = F_00a34870(pvVar2 GEN_EDX_ARG,0x11a);
        if (bVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_005424f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005424f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5424f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 0;
  F_0053bae0(this GEN_EDX_FWD);
  uVar1 = F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00542360(this GEN_EDX_ARG,this,uVar1);
  }
  return uVar2;
}

/* ref: FUN_00542520 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00542520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x542520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD);
  if (uVar1 != 0) {
    uVar1 = F_00542400(this,uVar1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00542550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00542550(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x542550u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  ushort uVar1;
  int * piVar2;
  undefined * this;
  undefined4 uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  char cVar7;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_FWD);
    if (*((int *)GEN_TOP((param_1 + 0x34))) == 0) {
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0x14))) == '\0') {
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(float *)(gen_frame + 0x8)) = 0.0;
        F_0053bec0(param_1 GEN_EDX_ARG,(*(float *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x8)),&(*(float *)&gen_args[0]));
        uVar3 = (*(undefined4 *)(gen_frame + 0xc));
        puVar5 = ((uint *)GEN_TOP(F_00ab2a20((*(undefined4 *)(gen_frame + 0xc)))));
        this = REFG(void * PTR32, 0x14c4e84);
        uVar1 = *((ushort *)GEN_TOP((uVar4 + 0x88)));
        (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
        (*(int *)(gen_frame + 0x0)) = (*puVar5 & 0xffffff) + (int)puVar5;
        uVar6 = F_00b5afd0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)uVar1,&(*(int *)(gen_frame + 0x0)));
        if ((char)uVar6 != '\0') {
          F_00b5ada0(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar4 + 0x88))),&(*(int *)(gen_frame + 0x0)),0);
        }
        if ((char)(*(undefined4 *)&gen_args[1]) == '\0') {
          F_00b5b190(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar4 + 0x88))),&(*(int *)(gen_frame + 0x0)),(float)(float10)1);
          *((undefined1 *)GEN_TOP((param_1 + 0x80))) = 0;
        }
        else if (*((char *)GEN_TOP((param_1 + 0x80))) == '\0') {
          F_00b5b190(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar4 + 0x88))),&(*(int *)(gen_frame + 0x0)),(float)(float10)1);
          F_00b5be60(this GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),(uint)*((ushort *)GEN_TOP((uVar4 + 0x88))),&(*(int *)(gen_frame + 0x0)),0,0,0);
          F_00b5bbf0(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x8)),(uint)*((ushort *)GEN_TOP((uVar4 + 0x88))),&(*(int *)(gen_frame + 0x0)));
          F_00b5b190(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar4 + 0x88))),&(*(int *)(gen_frame + 0x0)),(float)(float10)0);
          *((undefined1 *)GEN_TOP((param_1 + 0x80))) = 1;
          return;
        }
      }
    }
    else {
      cVar7 = (char)(*(undefined4 *)&gen_args[1]);
      if (cVar7 != *((char *)GEN_TOP((param_1 + 0x80)))) {
        F_00b5b880(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,param_1 + 0x38,(*(undefined4 *)&gen_args[1]));
        *((char *)GEN_TOP((param_1 + 0x80))) = cVar7;
        return;
      }
    }
  }
  return;
}

/* ref: FUN_005426e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005426e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5426e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * pvVar1;
  uint uVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  F_0053bec0(param_1 GEN_EDX_FWD,(*(float *)&gen_args[0]),&(*(float *)&gen_args[0]),&(*(float *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x0)));
  pvVar1 = REFG(void * PTR32, 0x14c4e84);
  uVar2 = F_00b5b260(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,param_1 + 0x38);
  if ((uVar2 != 0) && (0.0 < *((float *)GEN_TOP((param_1 + 0x3c))))) {
    if (*((char *)GEN_TOP((uVar2 + 0x30))) == '\0') {
      if (*((char *)GEN_TOP((uVar2 + 0x80))) == '\0') {
        (*(float *)&gen_args[0]) = *((float *)GEN_TOP((uVar2 + 0x58)));
      }
      else {
        (*(float *)&gen_args[0]) = *((float *)GEN_TOP((uVar2 + 0x6c)));
      }
    }
    else {
      uVar2 = *((uint *)GEN_TOP((uVar2 + 0x34)));
      fVar3 = (float10)(int)uVar2;
      if ((int)uVar2 < 0) {
        fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(float *)&gen_args[0]) = (float)fVar3;
    }
    (*(float *)&gen_args[0]) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)&gen_args[0]));
    fVar3 = (float10)(*(float *)&gen_args[0]);
    if (fVar3 < (float10)0) {
      (*(float *)&gen_args[0]) = (float)(fVar3 + (float10)(*(float *)(gen_frame + 0x0)));
      fVar3 = (float10)(*(float *)&gen_args[0]);
    }
    if (0.0 < (*(float *)&gen_args[0])) {
      uVar2 = F_00b5bc50(pvVar1 GEN_EDX_ARG,param_1 + 0x38,(float)fVar3);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_005427c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005427c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5427c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  byte bVar5;
  undefined * this_00;
  float * pfVar6;
  uint uVar7;
  code * pcVar8;
  float10 fVar9;
  float10 extraout_ST0;
  float local_c;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x4c))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD)));
  *((bool *)GEN_TOP(((int)this + 0x24))) = *((char *)GEN_TOP(((int)this_00 + 0x2e08))) != '\0';
  bVar4 = F_00536030(this_00);
  pfVar6 = ((float *)GEN_TOP(F_00ab3840((uint)bVar4)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (*((char *)GEN_TOP((iVar2 + 0x17))) == '\0') {
    fVar9 = GEN_X87((float10)*((float *)GEN_TOP((iVar2 + 0x20))) / (float10)*(double *)&REFG(undefined, 0x1088070));
  }
  else {
    iVar2 = *((int *)GEN_TOP((iVar2 + 0xc)));
    bVar5 = F_00536030(this_00);
    if (bVar5 == 1) {
      local_c = F_00aa1660(this_00 GEN_EDX_ARG);
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 0: ;
      case 1: ;
      case 4: ;
        local_c = F_00aa1660(this_00 GEN_EDX_ARG);
        if ((*((char *)GEN_TOP(((int)this + 0x24))) != '\0') &&
           (uVar7 = F_00ab2840((uint)*((byte *)GEN_TOP(((int)this_00 + 0x2e08)))), uVar7 != 0)) {
LAB_00542867: ;
          local_c = *((float *)GEN_TOP((uVar7 + 0x24)));
        }
        break;
      case 2: ;
      case 3: ;
      case 5: ;
        local_c = F_00aa1680(this_00 GEN_EDX_ARG);
        if ((*((char *)GEN_TOP(((int)this + 0x24))) != '\0') &&
           (uVar7 = F_00ab2840((uint)*((byte *)GEN_TOP(((int)this_00 + 0x2e08)))), uVar7 != 0)) {
          if (iVar2 != 5) goto LAB_00542867;
          local_c = *((float *)GEN_TOP((uVar7 + 0x50)));
        }
      }
      fVar9 = GEN_X87(((float10)*((float *)GEN_TOP(((int)this_00 + 0xb4))) * (float10)local_c) /
              (float10)*(double *)&REFG(undefined, 0x1088070));
    }
    else {
      if ((*((char *)GEN_TOP(((int)this + 0x24))) == '\0') ||
         (uVar7 = F_00ab2840((uint)*((byte *)GEN_TOP(((int)this_00 + 0x2e08)))), uVar7 == 0)) {
        switch((unsigned int)(uintptr_t)(iVar2)) {
        default: ;
          fVar9 = (float10)pfVar6[2];
          break;
        case 1: ;
          fVar9 = (float10)*pfVar6;
          break;
        case 2: ;
          fVar9 = (float10)pfVar6[3];
          break;
        case 3: ;
          fVar9 = (float10)pfVar6[1];
          break;
        case 4: ;
          fVar9 = (float10)pfVar6[4];
          break;
        case 5: ;
          fVar9 = (float10)pfVar6[5];
        }
      }
      else if (iVar2 < 2) {
LAB_005428ec: ;
        fVar9 = (float10)*((float *)GEN_TOP((uVar7 + 0x24)));
      }
      else if (iVar2 < 4) {
        fVar9 = (float10)*((float *)GEN_TOP((uVar7 + 0x20)));
      }
      else {
        if (iVar2 != 5) goto LAB_005428ec;
        fVar9 = (float10)*((float *)GEN_TOP((uVar7 + 0x50)));
      }
      *((float *)GEN_TOP(((int)this + 0x18))) = (float)(fVar9 / (float10)*(double *)&REFG(undefined, 0x1088070));
      if (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x15))) == '\0') {
        fVar1 = *((float *)GEN_TOP(((int)this_00 + 0xb4)));
      }
      else {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
        if (uVar7 == 0) goto LAB_00542950;
        fVar1 = *((float *)GEN_TOP((uVar7 + 0x294)));
      }
      fVar9 = GEN_X87((float10)fVar1 * (float10)*((float *)GEN_TOP(((int)this + 0x18))));
    }
  }
  *((float *)GEN_TOP(((int)this + 0x18))) = (float)fVar9;
LAB_00542950: ;
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))))) {
  default: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0xd;
    break;
  case 2: ;
  case 3: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x16;
    break;
  case 4: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x29;
    break;
  case 5: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x32;
  }
  *((bool *)GEN_TOP(((int)this + 0x30))) = bVar4 != 1;
  piVar3 = *(int * PTR32 *)this;
  if ((*((byte *)GEN_TOP(((int)piVar3 + 0xe))) & 1) == 0) {
    pcVar8 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x1c)));
  }
  else {
    pcVar8 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x20)));
  }
  extraout_ST0 = (*pcVar8)(piVar3);
  *((float *)GEN_TOP(((int)this + 0x20))) = (float)extraout_ST0;
  *((float *)GEN_TOP(((int)this + 0x1c))) =
       ((float)GEN_TOF(((float10)(float)extraout_ST0 / (float10)*((float *)GEN_TOP(((int)this + 0x18))))));
  *((float *)GEN_TOP(((int)this + 0x28))) = (float)*((int *)GEN_TOP((*((uint *)GEN_TOP(((int)this + 0xc))) + 0x1c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x80))) = 0;
  return *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_00542a30 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00542a30(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x542a30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = GEN_X87((float10)(float)((float10)param_2 - ((float10)GEN_TOD(gen_bits2f(param_1[4])))));
  if ((!(fVar1 < ((float10)GEN_TOD(gen_bits2f(param_1[7]))))) && ((*((byte *)GEN_TOP((*param_1 + 0xe))) >> 1 & 1) == 0)) {
    *(undefined1 *)(param_1 + 5) = 1;
    return ((float10)GEN_TOD(gen_bits2f(param_1[8])));
  }
  if ((char)param_1[9] != '\0') {
    return GEN_X87((float10)(float)(((float10)GEN_TOD(gen_bits2f(param_1[6]))) * (float10)*(double *)&REFG(undefined, 0x1088070) +
                           ((float10)GEN_TOD(gen_bits2f(param_1[6]))) * fVar1));
  }
  return GEN_X87((float10)(float)(fVar1 * ((float10)GEN_TOD(gen_bits2f(param_1[6])))));
}

